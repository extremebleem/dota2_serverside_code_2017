// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/npc/dota_npc_hero.cpp:76
class CInfoPlayerStartGoodGuys : public CInfoPlayerStartDota {
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
	CInfoPlayerStartGoodGuys(CInfoPlayerStartGoodGuys &);
	CInfoPlayerStartGoodGuys(CInfoPlayerStartGoodGuys &);
	CInfoPlayerStartGoodGuys();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CInfoPlayerStartGoodGuys();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 832
};

// src/game/server/dota/npc/dota_npc_hero.cpp:82
class C_CInfoPlayerStartGoodGuys_MapInstall {
	C_CInfoPlayerStartGoodGuys_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/npc/dota_npc_hero.cpp:84
class CInfoPlayerStartBadGuys : public CInfoPlayerStartDota {
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
	CInfoPlayerStartBadGuys(CInfoPlayerStartBadGuys &);
	CInfoPlayerStartBadGuys(CInfoPlayerStartBadGuys &);
	CInfoPlayerStartBadGuys();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CInfoPlayerStartBadGuys();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 832
};

// src/game/server/dota/npc/dota_npc_hero.cpp:90
class C_CInfoPlayerStartBadGuys_MapInstall {
	C_CInfoPlayerStartBadGuys_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/npc/dota_npc_hero.cpp:95
class C_CInfoPlayerStartDota_MapInstall {
	C_CInfoPlayerStartDota_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/npc/dota_npc_hero.cpp:208
struct KillGoldInfo_t {
	int nBountyGold;  // +0x0
	int nProximityKillerGold;  // +0x4
	int nProximityTotalGold;  // +0x8
	int nNearbyHeroes;  // +0xc
	int nVictimID;  // +0x10

	KillGoldInfo_t();
	~KillGoldInfo_t();

	// sizeof = 48
};

// src/game/server/dota/npc/dota_npc_hero.cpp:2510
class C_CDOTA_BaseNPC_Hero_MapInstall {
	C_CDOTA_BaseNPC_Hero_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CInfoPlayerStartGoodGuys::~CInfoPlayerStartGoodGuys  (line 76, @0x000000000296b080, libserver.so)  // inlines: ~CInfoPlayerStartDota, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CInfoPlayerStartGoodGuys::~CInfoPlayerStartGoodGuys(CInfoPlayerStartGoodGuys *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CInfoPlayerStartGoodGuys::~CInfoPlayerStartGoodGuys  (line 76, @0x000000000296b0a0, libserver.so)  // inlines: ~CInfoPlayerStartDota, ~CInfoPlayerStartGoodGuys, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CInfoPlayerStartGoodGuys::~CInfoPlayerStartGoodGuys(CInfoPlayerStartGoodGuys *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CInfoPlayerStartGoodGuys::Schema_DynamicBinding  (line 78, @0x0000000002967a10, libserver.so)
// globals: CInfoPlayerStartGoodGuys::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoPlayerStartGoodGuys::Schema_DynamicBinding(
        const CInfoPlayerStartGoodGuys *const this)
{
  return CInfoPlayerStartGoodGuys::s_pSchemaBinding;
}


// CInfoPlayerStartGoodGuys::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 78, @0x0000000002967a20, libserver.so)
// globals: CInfoPlayerStartGoodGuys::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoPlayerStartGoodGuys::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CInfoPlayerStartGoodGuys::CEntityInstanceEntityClass *const this)
{
  return CInfoPlayerStartGoodGuys::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CInfoPlayerStartGoodGuys::CEntityInstanceEntityClass::DestructInstance  (line 78, @0x0000000002967a30, libserver.so)  // inlines: Destruct<CInfoPlayerStartGoodGuys>
void __fastcall CInfoPlayerStartGoodGuys::CEntityInstanceEntityClass::DestructInstance(
        CInfoPlayerStartGoodGuys::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CInfoPlayerStartGoodGuys::CEntityInstanceEntityClass::FreeInstance  (line 78, @0x0000000002967a50, libserver.so)
void __fastcall CInfoPlayerStartGoodGuys::CEntityInstanceEntityClass::FreeInstance(
        CInfoPlayerStartGoodGuys::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CInfoPlayerStartGoodGuys::CEntityInstanceEntityClass::CanAllocate  (line 78, @0x0000000002967a70, libserver.so)
bool __fastcall CInfoPlayerStartGoodGuys::CEntityInstanceEntityClass::CanAllocate(
        const CInfoPlayerStartGoodGuys::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CInfoPlayerStartGoodGuys::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 78, @0x0000000002967a80, libserver.so)
// globals: CInfoPlayerStartGoodGuys::s_pSchemaBinding
const ISchemaBinding *__fastcall CInfoPlayerStartGoodGuys::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CInfoPlayerStartGoodGuys::CEntityInstanceEntityClass *const this)
{
  return CInfoPlayerStartGoodGuys::s_pSchemaBinding;
}


// CInfoPlayerStartGoodGuys::CEntityInstanceEntityClass::AllocateInstance  (line 78, @0x000000000296ad90, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CInfoPlayerStartGoodGuys::CEntityInstanceEntityClass::AllocateInstance(
        CInfoPlayerStartGoodGuys::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 832);
  memset(v1, 0, 0x340u);
  return v1;
}


// CInfoPlayerStartGoodGuys::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 78, @0x000000000296f880, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CInfoPlayerStartGoodGuys::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoPlayerStartGoodGuys::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CInfoPlayerStartGoodGuys::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 78, @0x000000000296f8a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CInfoPlayerStartGoodGuys::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoPlayerStartGoodGuys::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CInfoPlayerStartGoodGuys::CEntityInstanceEntityClass::ConstructInstance  (line 78, @0x0000000002976b40, libserver.so)  // inlines: CInfoPlayerStartGoodGuys, Construct<CInfoPlayerStartGoodGuys>
// calls: CInfoPlayerStartDota::CInfoPlayerStartDota
CEntityInstance *__fastcall CInfoPlayerStartGoodGuys::CEntityInstanceEntityClass::ConstructInstance(
        CInfoPlayerStartGoodGuys::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CInfoPlayerStartDota::CInfoPlayerStartDota(p);
    *p = &off_42F5F70;
  }
  return p;
}


// CInfoPlayerStartGoodGuys::GetEntityClassInternal  (line 78, @0x0000000002980a30, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CInfoPlayerStartDota::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "info_player_start_goodguys", "CInfoPlayerStartGoodGuys"
// globals: `guard variable for'CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass, CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CInfoPlayerStartGoodGuys::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CInfoPlayerStartGoodGuys::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartGoodGuysClassInfo, CInfoPlayerStartGoodGuys::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartGoodGuysClassInfo
CEntityClass *__cdecl CInfoPlayerStartGoodGuys::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass) != 0 )
  {
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_designerName.u.m_Id = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass._vptr_CEntityClass = off_3F79390;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_ComponentOffsets.m_Size = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_AllHelpers.m_Size = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_instanceUnserializer.m_atomicFields,
      4);
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_classInputs.m_Size = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_classInputs.m_Memory.m_pMemory = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_classOutputs.m_Size = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_requiredEHandle.m_Index = -1;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_hNetworkSerializer = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_pBaseClassInfo = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_pClassInfo = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_flags = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_nAllHelpersFlags = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_pScriptClassDesc = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_pInputs = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_nInputCount = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_pOutputs = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_nOutputCount = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_pGameClass = 0;
    CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass._vptr_CEntityClass = off_42F5EF0;
    __cxa_guard_release(&`guard variable for'CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass);
    __cxa_atexit(
      CInfoPlayerStartGoodGuys::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass,
      &_dso_handle);
  }
  if ( g_pEntityCInfoPlayerStartGoodGuysClass != 0 )
    return &CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass;
  if ( `guard variable for'CInfoPlayerStartGoodGuys::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartGoodGuysClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoPlayerStartGoodGuys::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartGoodGuysClassInfo) != 0 )
  {
    EntityClassInfo = CInfoPlayerStartDota::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CInfoPlayerStartGoodGuys::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartGoodGuysClassInfo,
      "CInfoPlayerStartGoodGuys",
      "info_player_start_goodguys",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CInfoPlayerStartGoodGuys::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartGoodGuysClassInfo);
  }
  CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_pClassInfo = &CInfoPlayerStartGoodGuys::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartGoodGuysClassInfo;
  CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_pBaseClassInfo = CInfoPlayerStartGoodGuys::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartGoodGuysClassInfo.m_pBaseClassInfo;
  g_pEntityCInfoPlayerStartGoodGuysClass = &CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass;
  CInfoPlayerStartGoodGuys::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartGoodGuysClassInfo.m_pClass = &CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass;
  CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCInfoPlayerStartGoodGuysClass->m_pComponentOverrides = 0;
  return &CInfoPlayerStartGoodGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartGoodGuysClass;
}


// CInfoPlayerStartGoodGuys::YouForgotToImplementOrDeclareServerClass  (line 82, @0x00000000028f5480, libserver.so)
int __fastcall CInfoPlayerStartGoodGuys::YouForgotToImplementOrDeclareServerClass(CInfoPlayerStartGoodGuys *const this)
{
  return 0;
}


// CInfoPlayerStartGoodGuys::GetServerClass  (line 82, @0x0000000002900690, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CInfoPlayerStartGoodGuys::GetServerClass(CInfoPlayerStartGoodGuys *const this)
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


// CInfoPlayerStartBadGuys::~CInfoPlayerStartBadGuys  (line 84, @0x000000000296b0d0, libserver.so)  // inlines: ~CInfoPlayerStartDota, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CInfoPlayerStartBadGuys::~CInfoPlayerStartBadGuys(CInfoPlayerStartBadGuys *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CInfoPlayerStartBadGuys::~CInfoPlayerStartBadGuys  (line 84, @0x000000000296b0f0, libserver.so)  // inlines: ~CInfoPlayerStartBadGuys, ~CInfoPlayerStartDota, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CInfoPlayerStartBadGuys::~CInfoPlayerStartBadGuys(CInfoPlayerStartBadGuys *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CInfoPlayerStartBadGuys::Schema_DynamicBinding  (line 86, @0x0000000002967a90, libserver.so)
// globals: CInfoPlayerStartBadGuys::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoPlayerStartBadGuys::Schema_DynamicBinding(
        const CInfoPlayerStartBadGuys *const this)
{
  return CInfoPlayerStartBadGuys::s_pSchemaBinding;
}


// CInfoPlayerStartBadGuys::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 86, @0x0000000002967aa0, libserver.so)
// globals: CInfoPlayerStartBadGuys::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoPlayerStartBadGuys::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CInfoPlayerStartBadGuys::CEntityInstanceEntityClass *const this)
{
  return CInfoPlayerStartBadGuys::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CInfoPlayerStartBadGuys::CEntityInstanceEntityClass::DestructInstance  (line 86, @0x0000000002967ab0, libserver.so)  // inlines: Destruct<CInfoPlayerStartBadGuys>
void __fastcall CInfoPlayerStartBadGuys::CEntityInstanceEntityClass::DestructInstance(
        CInfoPlayerStartBadGuys::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CInfoPlayerStartBadGuys::CEntityInstanceEntityClass::FreeInstance  (line 86, @0x0000000002967ad0, libserver.so)
void __fastcall CInfoPlayerStartBadGuys::CEntityInstanceEntityClass::FreeInstance(
        CInfoPlayerStartBadGuys::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CInfoPlayerStartBadGuys::CEntityInstanceEntityClass::CanAllocate  (line 86, @0x0000000002967af0, libserver.so)
bool __fastcall CInfoPlayerStartBadGuys::CEntityInstanceEntityClass::CanAllocate(
        const CInfoPlayerStartBadGuys::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CInfoPlayerStartBadGuys::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 86, @0x0000000002967b00, libserver.so)
// globals: CInfoPlayerStartBadGuys::s_pSchemaBinding
const ISchemaBinding *__fastcall CInfoPlayerStartBadGuys::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CInfoPlayerStartBadGuys::CEntityInstanceEntityClass *const this)
{
  return CInfoPlayerStartBadGuys::s_pSchemaBinding;
}


// CInfoPlayerStartBadGuys::CEntityInstanceEntityClass::AllocateInstance  (line 86, @0x000000000296add0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CInfoPlayerStartBadGuys::CEntityInstanceEntityClass::AllocateInstance(
        CInfoPlayerStartBadGuys::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 832);
  memset(v1, 0, 0x340u);
  return v1;
}


// CInfoPlayerStartBadGuys::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 86, @0x000000000296f8d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CInfoPlayerStartBadGuys::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoPlayerStartBadGuys::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CInfoPlayerStartBadGuys::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 86, @0x000000000296f8f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CInfoPlayerStartBadGuys::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoPlayerStartBadGuys::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CInfoPlayerStartBadGuys::CEntityInstanceEntityClass::ConstructInstance  (line 86, @0x0000000002976b70, libserver.so)  // inlines: CInfoPlayerStartBadGuys, Construct<CInfoPlayerStartBadGuys>
// calls: CInfoPlayerStartDota::CInfoPlayerStartDota
CEntityInstance *__fastcall CInfoPlayerStartBadGuys::CEntityInstanceEntityClass::ConstructInstance(
        CInfoPlayerStartBadGuys::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CInfoPlayerStartDota::CInfoPlayerStartDota(p);
    *p = &off_42F6690;
  }
  return p;
}


// CInfoPlayerStartBadGuys::GetEntityClassInternal  (line 86, @0x0000000002980040, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CInfoPlayerStartDota::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "info_player_start_badguys", "CInfoPlayerStartBadGuys"
// globals: `guard variable for'CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass, CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CInfoPlayerStartBadGuys::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CInfoPlayerStartBadGuys::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartBadGuysClassInfo, CInfoPlayerStartBadGuys::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartBadGuysClassInfo
CEntityClass *__cdecl CInfoPlayerStartBadGuys::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass) != 0 )
  {
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_designerName.u.m_Id = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass._vptr_CEntityClass = off_3F79390;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_ComponentOffsets.m_Size = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_AllHelpers.m_Size = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_instanceUnserializer.m_atomicFields,
      4);
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_classInputs.m_Size = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_classInputs.m_Memory.m_pMemory = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_classOutputs.m_Size = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_requiredEHandle.m_Index = -1;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_hNetworkSerializer = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_pBaseClassInfo = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_pClassInfo = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_flags = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_nAllHelpersFlags = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_pScriptClassDesc = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_pInputs = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_nInputCount = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_pOutputs = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_nOutputCount = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_pGameClass = 0;
    CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass._vptr_CEntityClass = off_42F6610;
    __cxa_guard_release(&`guard variable for'CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass);
    __cxa_atexit(
      CInfoPlayerStartBadGuys::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass,
      &_dso_handle);
  }
  if ( g_pEntityCInfoPlayerStartBadGuysClass != 0 )
    return &CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass;
  if ( `guard variable for'CInfoPlayerStartBadGuys::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartBadGuysClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoPlayerStartBadGuys::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartBadGuysClassInfo) != 0 )
  {
    EntityClassInfo = CInfoPlayerStartDota::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CInfoPlayerStartBadGuys::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartBadGuysClassInfo,
      "CInfoPlayerStartBadGuys",
      "info_player_start_badguys",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CInfoPlayerStartBadGuys::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartBadGuysClassInfo);
  }
  CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_pClassInfo = &CInfoPlayerStartBadGuys::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartBadGuysClassInfo;
  CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_pBaseClassInfo = CInfoPlayerStartBadGuys::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartBadGuysClassInfo.m_pBaseClassInfo;
  g_pEntityCInfoPlayerStartBadGuysClass = &CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass;
  CInfoPlayerStartBadGuys::GetEntityClassInfo(void)::g_EntityCInfoPlayerStartBadGuysClassInfo.m_pClass = &CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass;
  CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCInfoPlayerStartBadGuysClass->m_pComponentOverrides = 0;
  return &CInfoPlayerStartBadGuys::GetEntityClassInternal(void)::g_EntityCInfoPlayerStartBadGuysClass;
}


// CInfoPlayerStartBadGuys::YouForgotToImplementOrDeclareServerClass  (line 90, @0x00000000028f5490, libserver.so)
int __fastcall CInfoPlayerStartBadGuys::YouForgotToImplementOrDeclareServerClass(CInfoPlayerStartBadGuys *const this)
{
  return 0;
}


// CInfoPlayerStartBadGuys::GetServerClass  (line 90, @0x0000000002900850, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CInfoPlayerStartBadGuys::GetServerClass(CInfoPlayerStartBadGuys *const this)
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


// CInfoPlayerStartDota::YouForgotToImplementOrDeclareServerClass  (line 95, @0x00000000028f54a0, libserver.so)
int __fastcall CInfoPlayerStartDota::YouForgotToImplementOrDeclareServerClass(CInfoPlayerStartDota *const this)
{
  return 0;
}


// CInfoPlayerStartDota::GetServerClass  (line 95, @0x0000000002900650, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CInfoPlayerStartDota::GetServerClass(CInfoPlayerStartDota *const this)
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


// CInfoPlayerStartDota::GetDataDescMap  (line 102, @0x00000000028f54b0, libserver.so)
// globals: CInfoPlayerStartDota::m_DataMap
datamap_t *__fastcall CInfoPlayerStartDota::GetDataDescMap(CInfoPlayerStartDota *const this)
{
  return &CInfoPlayerStartDota::m_DataMap;
}


// CInfoPlayerStartDota::AddDatadescMetadataKeys  (line 102, @0x000000000290d2b0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CInfoPlayerStartDota::GetEntityClass(void)
void __fastcall CInfoPlayerStartDota::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CInfoPlayerStartDota::GetEntityClass);
}


// CInfoPlayerStartDota::GetBaseMap  (line 102, @0x000000000290d2d0, libserver.so)
datamap_t *__cdecl CInfoPlayerStartDota::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CInfoPlayerStartDota>  (line 102, @0x000000000290d2e0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "CInfoPlayerStartDota"
// globals: `guard variable for'DataMapInit<CInfoPlayerStartDota>(CInfoPlayerStartDota *)::nameHolder, `guard variable for'DataMapInit<CInfoPlayerStartDota>(CInfoPlayerStartDota *)::dataDesc, CInfoPlayerStartDota::GetEntityClass(void), CInfoPlayerStartDota::m_DataMap, DataMapInit<CInfoPlayerStartDota>(CInfoPlayerStartDota *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CInfoPlayerStartDota>(CInfoPlayerStartDota *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CInfoPlayerStartDota>(CInfoPlayerStartDota *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CInfoPlayerStartDota>(CInfoPlayerStartDota *)::nameHolder) != 0 )
  {
    DataMapInit<CInfoPlayerStartDota>(CInfoPlayerStartDota *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CInfoPlayerStartDota>(CInfoPlayerStartDota *)::nameHolder.m_pszBase = "CInfoPlayerStartDota";
    DataMapInit<CInfoPlayerStartDota>(CInfoPlayerStartDota *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CInfoPlayerStartDota>(CInfoPlayerStartDota *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CInfoPlayerStartDota>(CInfoPlayerStartDota *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CInfoPlayerStartDota>(CInfoPlayerStartDota *)::nameHolder.m_nLenBase = 20;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CInfoPlayerStartDota>(CInfoPlayerStartDota *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CInfoPlayerStartDota>(CInfoPlayerStartDota *)::nameHolder,
      &_dso_handle);
  }
  CInfoPlayerStartDota::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CInfoPlayerStartDota>(CInfoPlayerStartDota *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CInfoPlayerStartDota>(CInfoPlayerStartDota *)::dataDesc) != 0 )
  {
    DataMapInit<CInfoPlayerStartDota>(CInfoPlayerStartDota *)::dataDesc[4].pSaveRestoreOps = eventFuncs;
    DataMapInit<CInfoPlayerStartDota>(CInfoPlayerStartDota *)::dataDesc[5].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CInfoPlayerStartDota>(CInfoPlayerStartDota *)::dataDesc);
  }
  CInfoPlayerStartDota::m_DataMap.dataNumFields = 5;
  CInfoPlayerStartDota::m_DataMap.dataDesc = &DataMapInit<CInfoPlayerStartDota>(CInfoPlayerStartDota *)::dataDesc[1];
  AddDatadescMetadataKeys(&CInfoPlayerStartDota::m_DataMap, CInfoPlayerStartDota::GetEntityClass);
  return &CInfoPlayerStartDota::m_DataMap;
}


// CInfoPlayerStartDota::CInfoPlayerStartDota  (line 110, @0x000000000290d410, libserver.so)  // inlines: CEntityIOOutput, CNetworkVarBase, CPointEntity, NetworkStateChanged, ~CPointEntity
// calls: CBaseEntity::CBaseEntity, CBaseEntity::NetworkStateChanged, CBaseEntity::~CBaseEntity, _Unwind_Resume
// callers: CInfoPlayerStartDota::CEntityInstanceEntityClass::ConstructInstance, CInfoPlayerStartGoodGuys::CEntityInstanceEntityClass::ConstructInstance, CInfoPlayerStartBadGuys::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CInfoPlayerStartDota::CInfoPlayerStartDota(CInfoPlayerStartDota *const this)
{
  CBaseEntity::CBaseEntity(this);
  this->_vptr_IHandleEntity = &off_42F6D30;
  this->m_bDisabled.m_Value = 0;
  CBaseEntity::NetworkStateChanged(this, 0x308u, -1, -1);
  this->m_OnEnabled._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnDisabled._vptr_CEntityIOOutput = off_3F7C190;
}


// CInfoPlayerStartDota::ShouldTransmit  (line 115, @0x00000000028f54c0, libserver.so)
int __fastcall CInfoPlayerStartDota::ShouldTransmit(
        CInfoPlayerStartDota *const this,
        const CGameCheckTransmitInfo *pInfo)
{
  return 4;
}


// CInfoPlayerStartDota::InputSetEnabled  (line 120, @0x000000000291af10, libserver.so)
// calls: CInfoPlayerStartDota::SetDisabled
void __fastcall CInfoPlayerStartDota::InputSetEnabled(CInfoPlayerStartDota *const this, inputdata_t *const inputdata)
{
  CInfoPlayerStartDota::SetDisabled(this, 0, inputdata->pActivator);
}


// CInfoPlayerStartDota::InputSetDisabled  (line 125, @0x000000000291af20, libserver.so)
// calls: CInfoPlayerStartDota::SetDisabled
void __fastcall CInfoPlayerStartDota::InputSetDisabled(CInfoPlayerStartDota *const this, inputdata_t *const inputdata)
{
  CInfoPlayerStartDota::SetDisabled(this, 1, inputdata->pActivator);
}


// CInfoPlayerStartDota::InputSetEnabledExclusively  (line 132, @0x000000000291af40, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, GetTeamNumber, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CInfoPlayerStartDota::SetDisabled, FindSpawnHelpers, CUtlMemory<CInfoPlayerStartDota*, int>::Purge, _Unwind_Resume
void __fastcall CInfoPlayerStartDota::InputSetEnabledExclusively(
        CInfoPlayerStartDota *const this,
        inputdata_t *const inputdata)
{
  int m_Value; // esi
  unsigned __int64 v5; // rbx
  __int64 v6; // r13
  CInfoPlayerStartDota *v7; // rdi
  CUtlVector<CInfoPlayerStartDota*,CUtlMemory<CInfoPlayerStartDota*,int> > spawnPoints; // [rsp+0h] [rbp-50h] BYREF

  CInfoPlayerStartDota::SetDisabled(this, 0, inputdata->pActivator);
  spawnPoints.m_Size = 0;
  m_Value = this->m_iTeamNum.m_Value;
  spawnPoints.m_Memory.m_pMemory = 0;
  spawnPoints.m_Memory.m_nAllocationCount = 0;
  spawnPoints.m_Memory.m_nGrowSize = 0;
  FindSpawnHelpers(&spawnPoints, m_Value);
  if ( spawnPoints.m_Size > 0 )
  {
    v5 = 0;
    v6 = 8LL * (spawnPoints.m_Size - 1) + 8;
    do
    {
      v7 = spawnPoints.m_Memory.m_pMemory[v5 / 8];
      if ( v7 != this )
        CInfoPlayerStartDota::SetDisabled(v7, 1, inputdata->pActivator);
      v5 += 8LL;
    }
    while ( v5 != v6 );
  }
  spawnPoints.m_Size = 0;
  if ( (spawnPoints.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CInfoPlayerStartDota *,int>::Purge(&spawnPoints.m_Memory);
    if ( (spawnPoints.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CInfoPlayerStartDota *,int>::Purge(&spawnPoints.m_Memory);
  }
}


// CInfoPlayerStartDota::SetDisabled  (line 151, @0x000000000291ae00, libserver.so)  // inlines: CVariantBase, FireOutput, Free, NetworkStateChanged, Set, operator=<bool>, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CInfoPlayerStartDota::InputSetEnabled, CInfoPlayerStartDota::InputSetDisabled, CInfoPlayerStartDota::InputSetEnabledExclusively
void __fastcall CInfoPlayerStartDota::SetDisabled(
        CInfoPlayerStartDota *const this,
        bool bDisabled,
        CBaseEntity *pActivator)
{
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  if ( this->m_bDisabled.m_Value != bDisabled )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bDisabled.m_Value = bDisabled;
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    if ( !bDisabled )
    {
      CEntityIOOutput::FireOutputInternal(&this->m_OnEnabled, pActivator, this, &value, 0.0);
      if ( (value.m_flags & 1) == 0 )
        return;
LABEL_6:
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
      return;
    }
    CEntityIOOutput::FireOutputInternal(&this->m_OnDisabled, pActivator, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      goto LABEL_6;
  }
}


// CInfoPlayerStartDota::IsEnabled  (line 167, @0x000000000290d490, libserver.so)
// callers: FindSpawnHelpersOfClass
bool __fastcall CInfoPlayerStartDota::IsEnabled(const CInfoPlayerStartDota *const this)
{
  return !this->m_bDisabled.m_Value;
}


// IsDemon  (line 174, @0x000000000290d4a0, libserver.so)
// calls: CDOTA_PlayerResource::GetSteamAccountID
// callers: CDOTAHeroList::DistributeRewardsForKill
bool __fastcall IsDemon(CDOTA_BaseNPC *pVictim)
{
  char v2; // r12
  int v4; // eax

  v2 = (*(pVictim->_vptr_IHandleEntity + 402))(pVictim);
  if ( v2 != 0 )
    return v2;
  v4 = (*(pVictim->_vptr_IHandleEntity + 414))(pVictim);
  if ( v4 == -1 )
    return v2;
  else
    return CDOTA_PlayerResource::GetSteamAccountID(g_pDOTAPlayerResource, v4) == 85805514;
}


// CDOTAHeroList::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 195, @0x000000000290d500, libserver.so)
void __cdecl CDOTAHeroList::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CDOTAHeroList::CDOTAHeroList  (line 199, @0x0000000002942450, libserver.so)  // inlines: CUtlMap, CUtlMemory, CUtlRBTree, CUtlVector, CUtlVectorBase, Purge, ResetDbgInfo, ~CAutoGameSystem, ~CUtlMap, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTAHeroList::RemoveAllHeroPositions, CUtlVectorBase<CHandle<CDOTA_BaseNPC_Hero>, CUtlMemory<CHandle<CDOTA_BaseNPC_Hero>, int> >::RemoveAll, CUtlRBTree<CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity> >*>::Node_t, short unsigned int, CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity> >*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity> >*>::Node_t, short unsigned int>, short unsigned int> >::~CUtlRBTree, CUtlVectorBase<CDOTAMusicSystemElement, CUtlMemory<CDOTAMusicSystemElement, int> >::RemoveAll, CUtlRBTree<CUtlMap<CHandle<CBaseEntity>, CDOTAHeroPositions*>::Node_t, short unsigned int, CUtlMap<CHandle<CBaseEntity>, CDOTAHeroPositions*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>, CDOTAHeroPositions*>::Node_t, short unsigned int>, short unsigned int> >::~CUtlRBTree, IGameSystem::~IGameSystem, _Unwind_Resume, CUtlMemory<CDOTAMusicSystemElement, int>::Purge, CUtlMemory<CHandle<CDOTA_BaseNPC_Hero>, int>::Purge
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// globals: CDefOps<CHandle<CBaseEntity>>::LessFunc(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&), HeroLimitedUnitTracker_t::LessFunc(HeroLimitedUnitTracker_t const&,HeroLimitedUnitTracker_t const&)
void __fastcall CDOTAHeroList::CDOTAHeroList(CDOTAHeroList *const this)
{
  this->_vptr_IGameSystem = off_42F7430;
  this->m_HeroPositionHistory.m_Tree.m_Elements.m_pMemory = 0;
  this->m_HeroPositionHistory.m_Tree.m_LessFunc.m_LessFunc = CDefOps<CHandle<CBaseEntity>>::LessFunc;
  this->m_HeroPositionHistory.m_Tree.m_LastAlloc.index = -1;
  this->m_mapHeroToLimitedUnits.m_Tree.m_LessFunc.m_LessFunc = HeroLimitedUnitTracker_t::LessFunc;
  this->m_mapHeroToLimitedUnits.m_Tree.m_Root = -1;
  this->m_mapHeroToLimitedUnits.m_Tree.m_NumElements = 0;
  this->m_mapHeroToLimitedUnits.m_Tree.m_FirstFree = -1;
  this->m_HeroPositionHistory.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_HeroPositionHistory.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_HeroPositionHistory.m_Tree.m_Root = -1;
  this->m_HeroPositionHistory.m_Tree.m_NumElements = 0;
  this->m_HeroPositionHistory.m_Tree.m_FirstFree = -1;
  this->m_HeroPositionHistory.m_Tree.m_pElements = 0;
  this->m_hHeroList.m_Size = 0;
  this->m_hHeroList.m_Memory.m_pMemory = 0;
  this->m_hHeroList.m_Memory.m_nAllocationCount = 0;
  this->m_hHeroList.m_Memory.m_nGrowSize = 0;
  this->m_MusicElements.m_Size = 0;
  this->m_MusicElements.m_Memory.m_pMemory = 0;
  this->m_MusicElements.m_Memory.m_nAllocationCount = 0;
  this->m_MusicElements.m_Memory.m_nGrowSize = 0;
  this->m_mapHeroToLimitedUnits.m_Tree.m_Elements.m_pMemory = 0;
  this->m_mapHeroToLimitedUnits.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_mapHeroToLimitedUnits.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_mapHeroToLimitedUnits.m_Tree.m_LastAlloc.index = -1;
  this->m_mapHeroToLimitedUnits.m_Tree.m_pElements = 0;
  CDOTAHeroList::RemoveAllHeroPositions(this);
  CUtlVectorBase<CHandle<CDOTA_BaseNPC_Hero>,CUtlMemory<CHandle<CDOTA_BaseNPC_Hero>,int>>::RemoveAll(&this->m_hHeroList);
}


// CDOTAHeroList::DistributeRewardsForKill  (line 286, @0x000000000295fe60, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CModifierParams, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, CopyConstruct<int>, CreateEvent, DOTAGameRules, Element, Get, GetAbilityName, GetBuybackGoldLimitTime, GetClassNameAsCStr, GetClassname, GetDenies, GetEHandle, GetEntityIdentity, GetEntryIndex, GetGameTime, GetGlobalDOTATeam, GetHealthPercent, GetInstance, GetLastHits, GetSerialNumber, GetStreak, GetTeamNumber, GetUnitName, GrowMemory, HandleKillEaterWardKills, IncrementDenies, IndexToIdentity, IsBoss, IsBuybackLimited, IsHero, IsRealHero, IsTower, IsValid, KillGoldInfo_t, LookupEntity, Purge, RemoveAll, Set, SetAttacker, SetInt, SetTarget, SpeakConcept, String, ToCStr, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, entindex, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], set_event_team, set_event_type, set_has_event_team, set_has_event_type, set_has_killer_account_id, set_has_victim_account_id, set_killer_account_id, set_victim_account_id, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat, ~KillGoldInfo_t
// calls: __dynamic_cast, V_stricmp_fast, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTAHeroList::GiveKillerBountyGold, CDOTAHeroList::GiveNearbyHeroGoldBonus, CDOTAHeroList::GiveTeamGoldReward, CDOTAHeroList::GiveExperience, CDOTAHeroList::GiveNearbyHeroExperienceBonus, CDOTAHeroList::DistributeFarmClaim, CDOTAHeroList::GiveAdditionalAssists, CEntityInstance::GetEntityIndex (59 total)
// callers: CDOTA_BaseNPC::Event_Killed
// strings: "<NoAbilityName>", "xp_multiplier", "last_hit", "EntKilled", "TowerKill", "denycount" (19 total)
// globals: INVALID_ITEM_DEF_INDEX, `typeinfo for'CDOTA_BaseNPC_Building, `typeinfo for'CDOTA_BaseNPC, CEntityHandle::gm_pEntityList
void __fastcall CDOTAHeroList::DistributeRewardsForKill(
        CDOTAHeroList *const this,
        CDOTA_BaseNPC *pVictim,
        CDOTA_BaseNPC *pKiller,
        CBaseEntity *pInflictor)
{
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // r13
  const char **p_m_pszAbilityName; // rax
  const char *v10; // rdi
  const char *v11; // rax
  int LevelSpecialValue; // r12d
  char v13; // r13
  float v14; // xmm1_4
  __int64 v15; // rax
  __int64 v16; // rbx
  void (__fastcall *v17)(__int64, char *, _QWORD); // r13
  unsigned int v18; // eax
  CEntityIndex v19; // eax
  CDOTAPlayer *Player; // r12
  int nBountyGold; // ebx
  CEntityInstance *v22; // rax
  float v23; // xmm0_4
  int v24; // edx
  CEntityInstance *v25; // rax
  CEntityInstance *v26; // rbx
  CDOTAPlayer *v27; // rax
  int m_nFarmClaimPlayerID; // esi
  const Vector *AbsOrigin; // rax
  float v30; // xmm2_4
  float v31; // xmm2_4
  CEntityIdentity *v32; // rax
  const char *v33; // rdx
  const char *v34; // rdx
  CEntityIdentity *v35; // rax
  CDOTA_Speech *m_pSpeech; // rdi
  uint32 v37; // eax
  CEntityInstance *v38; // rax
  CDOTA_BaseNPC_Hero *v39; // rbx
  uint32 v40; // eax
  CDOTA_BaseNPC_Building *v41; // rax
  CEntityIdentity *v42; // rax
  int v43; // edx
  __int16 v44; // cx
  CEntityIdentity *v45; // rax
  int v46; // edx
  __int16 v47; // cx
  CEntityIdentity *v48; // rdx
  int v49; // eax
  __int16 v50; // cx
  CEntityInstance *v51; // rax
  CDOTA_BaseNPC_Hero *v52; // r12
  int v53; // ecx
  int v54; // eax
  _BOOL4 v55; // edx
  int v56; // eax
  int v57; // esi
  __int64 v58; // rbx
  int v59; // eax
  __int64 v60; // rcx
  int v61; // ebx
  CEntityIndex v62; // eax
  float v63; // xmm2_4
  unsigned __int8 m_Value; // al
  CDOTA_Commander *v65; // rax
  int *v66; // rax
  __int64 m_Index; // rbx
  uint32 v68; // eax
  int *v69; // r12
  const Vector *v70; // rax
  __int64 v71; // r12
  int j; // ebx
  CHandle<CBaseEntity> *v73; // rdx
  uint32 v74; // eax
  __int16 v75; // cx
  CEntityIdentity *v76; // rdx
  CEntityIdentity *v77; // rdx
  CEntityInstance *m_pInstance; // rdi
  CEntityIdentity *v79; // rax
  int v80; // edx
  __int16 v81; // cx
  CEntityIdentity *v82; // rax
  int v83; // edx
  __int16 v84; // cx
  int nProximityTotalGold; // eax
  uint32 m_iUnitType; // eax
  float v87; // xmm2_4
  float v88; // xmm2_4
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rdx
  const char *v91; // rdx
  float v92; // xmm2_4
  const char *v93; // rdx
  CEntityIdentity *v94; // rax
  CDOTA_Speech *vptr_IHandleEntity; // rdi
  int v96; // eax
  _BOOL4 v97; // edx
  int SteamID; // eax
  int delta; // esi
  float v100; // xmm2_4
  float v101; // xmm2_4
  float v102; // ebx
  int v103; // eax
  _BOOL4 v104; // edx
  int v105; // eax
  int v106; // esi
  int nBountyPlayerID; // [rsp+28h] [rbp-2B8h]
  CDOTA_BaseNPC_Hero *nBountyPlayerIDa; // [rsp+28h] [rbp-2B8h]
  CEntityIndex nBountyPlayerIDb; // [rsp+28h] [rbp-2B8h]
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *v111; // [rsp+40h] [rbp-2A0h]
  unsigned __int8 bDidFirstBloodActivate; // [rsp+4Bh] [rbp-295h]
  int i; // [rsp+4Ch] [rbp-294h]
  bool ia; // [rsp+4Ch] [rbp-294h]
  int ib; // [rsp+4Ch] [rbp-294h]
  CEntityHandle v116; // [rsp+50h] [rbp-290h] BYREF
  int nKillerPlayerID; // [rsp+5Ch] [rbp-284h] BYREF
  CEntityHandle v118; // [rsp+60h] [rbp-280h] BYREF
  KillGoldInfo_t sKillGoldInfo; // [rsp+70h] [rbp-270h] BYREF
  CResponseCriteriaSet criteria; // [rsp+A0h] [rbp-240h] BYREF
  CModifierParams params; // [rsp+E0h] [rbp-200h] BYREF
  KeyValues kv; // [rsp+170h] [rbp-170h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> entities; // [rsp+190h] [rbp-150h] BYREF
  unsigned __int64 v124; // [rsp+2A8h] [rbp-38h]

  v124 = __readfsqword(0x28u);
  if ( pKiller == pInflictor && pVictim == pKiller )
    return;
  if ( pInflictor == 0 )
    goto LABEL_102;
  v7 = __dynamic_cast(pInflictor, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
  v8 = v7;
  if ( v7 == 0 )
    goto LABEL_102;
  p_m_pszAbilityName = &v7->m_pAbilityData->m_pszAbilityName;
  v10 = "<NoAbilityName>";
  if ( p_m_pszAbilityName != 0 )
  {
    v11 = *p_m_pszAbilityName;
    if ( v11 != 0 )
      v10 = v11;
  }
  if ( V_stricmp_fast(v10, "item_hand_of_midas") == 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "bonus_gold", -1, 0);
    i = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v8, "xp_multiplier", -1, 0);
  }
  else
  {
LABEL_102:
    LevelSpecialValue = 0;
    i = 1065353216;
  }
  sKillGoldInfo.nBountyGold = 0;
  sKillGoldInfo.nProximityKillerGold = 0;
  sKillGoldInfo.nProximityTotalGold = 0;
  sKillGoldInfo.nNearbyHeroes = 0;
  sKillGoldInfo.nVictimID = -1;
  sKillGoldInfo.vecKillerList.m_Size = 0;
  sKillGoldInfo.vecKillerList.m_Memory.m_pMemory = 0;
  v13 = g_pGameRules[61].m_szQuestName[114];
  sKillGoldInfo.vecKillerList.m_Memory.m_nAllocationCount = 0;
  sKillGoldInfo.vecKillerList.m_Memory.m_nGrowSize = 0;
  nBountyPlayerID = CDOTAHeroList::GiveKillerBountyGold(
                      this,
                      pVictim,
                      pKiller,
                      LevelSpecialValue,
                      &sKillGoldInfo.nBountyGold,
                      pInflictor,
                      &sKillGoldInfo.nVictimID,
                      &sKillGoldInfo.vecKillerList);
  CDOTAHeroList::GiveNearbyHeroGoldBonus(
    this,
    pVictim,
    pKiller,
    &sKillGoldInfo.nProximityKillerGold,
    &sKillGoldInfo.nProximityTotalGold,
    &sKillGoldInfo.nNearbyHeroes);
  bDidFirstBloodActivate = 0;
  if ( v13 != 0 )
    bDidFirstBloodActivate = g_pGameRules[61].m_szQuestName[114] ^ 1;
  CDOTAHeroList::GiveTeamGoldReward(this, pVictim, pKiller, nBountyPlayerID);
  CDOTAHeroList::GiveExperience(this, pVictim, pKiller, *&i, v14);
  CDOTAHeroList::GiveNearbyHeroExperienceBonus(this, pVictim, pKiller);
  CDOTAHeroList::DistributeFarmClaim(this, pVictim, pKiller, LevelSpecialValue);
  CDOTAHeroList::GiveAdditionalAssists(this, pVictim, pKiller);
  if ( nBountyPlayerID >= 0 )
  {
    v15 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "last_hit", 0, 0);
    v16 = v15;
    if ( v15 != 0 )
    {
      v17 = *(*v15 + 112LL);
      v18 = (*(pKiller->_vptr_IHandleEntity + 414))(pKiller);
      v17(v16, "PlayerID", v18);
      v19.m_Data = CEntityInstance::GetEntityIndex(pVictim).m_Data;
      (*(*v16 + 112LL))(v16, "EntKilled", v19.m_Data);
      (*(*v16 + 112LL))(v16, "FirstBlood", bDidFirstBloodActivate);
      (*(*v16 + 112LL))(v16, "HeroKill", pVictim->m_iUnitType & 1);
      (*(*v16 + 112LL))(v16, "TowerKill", (pVictim->m_iUnitType & 4) != 0);
      (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v16, 1);
    }
    Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, nBountyPlayerID);
    if ( Player != 0 )
    {
      nBountyGold = sKillGoldInfo.nBountyGold;
      CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(&v116, g_pDOTAPlayerResource, nBountyPlayerID);
      v22 = CEntityHandle::operator CEntityInstance *(&v116);
      if ( v22 != 0 && BYTE3(v22[7]._vptr_IHandleEntity) != 0 && (v22[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
      {
        v23 = 0.0;
        if ( g_pGameRules != 0 )
          v23 = *&g_pGameRules[18].m_szQuestName[20];
        if ( *&v22[97].m_worldGroupId.m_nHashCode > v23 )
          nBountyGold = (nBountyGold * 0.40000001);
      }
      if ( nBountyGold > 0 )
        SendOverheadEventMessage(Player, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_GOLD, pVictim, nBountyGold, 0);
    }
  }
  sKillGoldInfo.nBountyGold += sKillGoldInfo.nProximityKillerGold;
  if ( sKillGoldInfo.nVictimID == -1 )
  {
    if ( sKillGoldInfo.vecKillerList.m_Size > 2 )
    {
      LODWORD(criteria._vptr_CResponseCriteriaSet) = 0;
      criteria.m_Lookup.m_LessFunc = 0;
      criteria.m_Lookup.m_Elements.m_pMemory = 0;
      params.ability.m_Index = 0;
      *&params.fOriginalDamage = 0;
      *&params.bTooltip = 0;
      params.nTooltipParam = 0;
      CUtlVectorBase<int,CUtlMemory<int,int>>::AddToTail(&criteria, &sKillGoldInfo.nBountyGold);
      CUtlVectorBase<int,CUtlMemory<int,int>>::AddToTail(&criteria, &sKillGoldInfo.nProximityTotalGold);
      CUtlVectorBase<int,CUtlMemory<int,int>>::AddToTail(&criteria, &sKillGoldInfo.nNearbyHeroes);
      if ( sKillGoldInfo.vecKillerList.m_Size > 0 )
      {
        v111 = 0;
        ib = 0;
        do
        {
          m_Index = params.ability.m_Index;
          v68 = params.ability.m_Index;
          v69 = (sKillGoldInfo.vecKillerList.m_Memory.m_pMemory + v111);
          if ( params.ability.m_Index == *&params.bTooltip )
          {
            CUtlMemory<int,int>::Grow(&params.fOriginalDamage, 1);
            v68 = params.ability.m_Index;
          }
          params.ability.m_Index = v68 + 1;
          v66 = (*&params.fOriginalDamage + 4 * m_Index);
          if ( v66 != 0 )
            *v66 = *v69;
          ++ib;
          v111 = (v111 + 4);
        }
        while ( sKillGoldInfo.vecKillerList.m_Size > ib );
      }
      SendChatEventMessage(DOTA_CHAT_MESSAGE::CHAT_MESSAGE_HERO_KILL, &criteria, &params, 0);
      CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&params);
      CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&criteria);
    }
  }
  else
  {
    LODWORD(criteria._vptr_CResponseCriteriaSet) = 0;
    criteria.m_Lookup.m_LessFunc = 0;
    criteria.m_Lookup.m_Elements.m_pMemory = 0;
    params.ability.m_Index = 0;
    *&params.fOriginalDamage = 0;
    *&params.bTooltip = 0;
    params.nTooltipParam = 0;
    CUtlVectorBase<int,CUtlMemory<int,int>>::AddToTail(&criteria, &sKillGoldInfo.nBountyGold);
    CUtlVectorBase<int,CUtlMemory<int,int>>::AddToTail(&criteria, &sKillGoldInfo.nProximityTotalGold);
    CUtlVectorBase<int,CUtlMemory<int,int>>::AddToTail(&criteria, &sKillGoldInfo.nNearbyHeroes);
    CUtlVectorBase<int,CUtlMemory<int,int>>::AddToTail(&params, &sKillGoldInfo.nVictimID);
    SendChatEventMessage(DOTA_CHAT_MESSAGE::CHAT_MESSAGE_HERO_KILL, &criteria, &params, 0);
    CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&params);
    CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&criteria);
  }
  if ( sKillGoldInfo.nNearbyHeroes == 1
    && (nProximityTotalGold = sKillGoldInfo.nProximityTotalGold, sKillGoldInfo.nProximityTotalGold > 0) )
  {
    sKillGoldInfo.nProximityTotalGold = 0;
    v24 = nBountyPlayerID;
    sKillGoldInfo.nProximityKillerGold += nProximityTotalGold;
    if ( nBountyPlayerID >= 0 )
      goto LABEL_28;
  }
  else
  {
    v24 = nBountyPlayerID;
    if ( nBountyPlayerID >= 0 )
      goto LABEL_28;
  }
  if ( pKiller != 0 )
    v24 = (*(pKiller->_vptr_IHandleEntity + 414))(pKiller);
  else
    v24 = -1;
LABEL_28:
  nKillerPlayerID = v24;
  if ( pVictim != 0 )
  {
    ia = pVictim->m_bIsDOTANPC;
    if ( ia && (pVictim->m_iUnitType & 1) != 0 && !pVictim->m_bIsIllusion.m_Value )
    {
      if ( v24 == -1 )
      {
        nBountyPlayerIDa = pVictim;
        goto LABEL_112;
      }
      CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(&v118, g_pDOTAPlayerResource, v24);
      v51 = CEntityHandle::operator CEntityInstance *(&v118);
      if ( v51 == 0
        || BYTE3(v51[7]._vptr_IHandleEntity) == 0
        || (v52 = v51, (v51[43].m_iszPrivateVScripts.u.m_Id & 1) == 0) )
      {
        v52 = 0;
      }
      if ( pVictim->m_iTeamNum.m_Value == pKiller->m_iTeamNum.m_Value )
      {
        SendOverheadEventMessage(0, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_DENY, pVictim, 0, 0);
        SendChatEventMessage(
          DOTA_CHAT_MESSAGE::CHAT_MESSAGE_HERO_DENY,
          0,
          pVictim[1].m_pfnBlocked.__delta,
          nKillerPlayerID,
          0);
        if ( v52 != 0 && pVictim != pKiller )
        {
          CMsgTournamentItemEvent::CMsgTournamentItemEvent(&params);
          LODWORD(params.fGain) = 3;
          v96 = *&params.bTooltip;
          v97 = v52->m_iTeamNum.m_Value == 3;
          LOBYTE(v96) = params.bTooltip | 0x84;
          *&params.bTooltip = v96;
          params.nDamageCategory = v97;
          SteamID = CDOTA_PlayerResource::GetSteamID(g_pDOTAPlayerResource, v52->m_iPlayerID.m_Value);
          delta = pVictim[1].m_pfnBlocked.__delta;
          *&params.bIgnoreInvis = SteamID;
          *&params.bTooltip |= 1u;
          LODWORD(params.fDistance) = CDOTA_PlayerResource::GetSteamID(g_pDOTAPlayerResource, delta);
          *&params.bTooltip |= 2u;
          TournamentItemEvent(&params, "tournament_drops");
          CMsgTournamentItemEvent::~CMsgTournamentItemEvent(&params);
        }
        goto LABEL_101;
      }
      LODWORD(criteria._vptr_CResponseCriteriaSet) = 0;
      criteria.m_Lookup.m_LessFunc = 0;
      criteria.m_Lookup.m_Elements.m_pMemory = 0;
      params.ability.m_Index = 0;
      *&params.fOriginalDamage = 0;
      *&params.bTooltip = 0;
      params.nTooltipParam = 0;
      CUtlVectorBase<int,CUtlMemory<int,int>>::AddToTail(&criteria, &sKillGoldInfo.nBountyGold);
      CUtlVectorBase<int,CUtlMemory<int,int>>::AddToTail(&criteria, &sKillGoldInfo.nProximityTotalGold);
      CUtlVectorBase<int,CUtlMemory<int,int>>::AddToTail(&criteria, &sKillGoldInfo.nNearbyHeroes);
      v118.m_Index = pVictim[1].m_pfnBlocked.__delta;
      CUtlVectorBase<int,CUtlMemory<int,int>>::AddToTail(&params, &v118);
      CUtlVectorBase<int,CUtlMemory<int,int>>::AddToTail(&params, &nKillerPlayerID);
      SendChatEventMessage(DOTA_CHAT_MESSAGE::CHAT_MESSAGE_HERO_KILL, &criteria, &params, 0);
      CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&params);
      CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&criteria);
      if ( v52 == 0 )
      {
LABEL_101:
        nBountyPlayerIDa = pVictim;
        v37 = pVictim->m_iUnitType & 1;
        goto LABEL_157;
      }
      if ( CDOTA_PlayerResource::GetStreak(g_pDOTAPlayerResource, v52->m_iPlayerID.m_Value) > 2
        || v52->m_iMultipleKillCount > 1
        || CDOTA_PlayerResource::GetStreak(g_pDOTAPlayerResource, pVictim[1].m_pfnBlocked.__delta) > 2 )
      {
        params.ability.m_Index = 0;
        *&params.fOriginalDamage = 0;
        *&params.bTooltip = 0;
        params.nTooltipParam = 0;
        CUtlVectorBase<int,CUtlMemory<int,int>>::AddToTail(&params, &nKillerPlayerID);
        LODWORD(criteria._vptr_CResponseCriteriaSet) = CDOTA_PlayerResource::GetStreak(
                                                         g_pDOTAPlayerResource,
                                                         v52->m_iPlayerID.m_Value);
        CUtlVectorBase<int,CUtlMemory<int,int>>::AddToTail(&params, &criteria);
        LODWORD(criteria._vptr_CResponseCriteriaSet) = v52->m_iMultipleKillCount;
        CUtlVectorBase<int,CUtlMemory<int,int>>::AddToTail(&params, &criteria);
        LODWORD(criteria._vptr_CResponseCriteriaSet) = pVictim[1].m_pfnBlocked.__delta;
        CUtlVectorBase<int,CUtlMemory<int,int>>::AddToTail(&params, &criteria);
        LODWORD(criteria._vptr_CResponseCriteriaSet) = CDOTA_PlayerResource::GetStreak(
                                                         g_pDOTAPlayerResource,
                                                         pVictim[1].m_pfnBlocked.__delta);
        CUtlVectorBase<int,CUtlMemory<int,int>>::AddToTail(&params, &criteria);
        SendChatEventMessage(DOTA_CHAT_MESSAGE::CHAT_MESSAGE_STREAK_KILL, sKillGoldInfo.nBountyGold, &params, 0);
        CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&params);
      }
      if ( bDidFirstBloodActivate == 0 )
      {
LABEL_91:
        v58 = 100LL * CBaseEntity::GetHealth(pKiller);
        v59 = (*(pKiller->_vptr_IHandleEntity + 156))(pKiller);
        v60 = 1;
        if ( v59 > 0 )
          v60 = v59;
        v61 = v52->m_iMultipleKillCount + ((v58 / v60) <= 30) + 99;
        nBountyPlayerIDb.m_Data = CEntityInstance::GetEntityIndex(v52).m_Data;
        v62.m_Data = CEntityInstance::GetEntityIndex(pVictim).m_Data;
        CreateUnitEvent(v62, nBountyPlayerIDb, v61, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_HERO_DEATH);
        CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
        CResponseCriteriaSet::AppendCriteria(&criteria, "announce_event", "hero_kill", 1.0);
        if ( GetGlobalTeam(v52->m_iTeamNum.m_Value) != 0 )
          CResponseCriteriaSet::AppendCriteria(&criteria, "team_kill_streak", 1.0, v63);
        m_Value = pVictim->m_iTeamNum.m_Value;
        if ( m_Value == 2 )
        {
          CResponseCriteriaSet::AppendCriteria(&criteria, "victim_team", "radiant", 1.0);
        }
        else if ( m_Value == 3 )
        {
          CResponseCriteriaSet::AppendCriteria(&criteria, "victim_team", "dire", 1.0);
        }
        if ( bDidFirstBloodActivate != 0 )
        {
          CResponseCriteriaSet::AppendCriteria(&criteria, "firstblood", "1", 1.0);
          CDOTAGamerules::QueueConceptForAllAnnouncers_KillingSpree(g_pGameRules, 18, 0.0, &criteria, 5, 1);
          EconEntity_OnOwnerKillEaterEvent(
            v52,
            pVictim,
            kill_eater_event_t::kKillEaterEvent_First_Blood,
            1,
            INVALID_ITEM_DEF_INDEX);
        }
        else
        {
          if ( CDOTA_PlayerResource::GetStreak(g_pDOTAPlayerResource, v52->m_iPlayerID.m_Value) <= 2 )
          {
            v102 = 0.0;
          }
          else
          {
            CDOTA_PlayerResource::GetStreak(g_pDOTAPlayerResource, v52->m_iPlayerID.m_Value);
            CResponseCriteriaSet::AppendCriteria(&criteria, "streak", 1.0, v101);
            CDOTAGamerules::QueueConceptForAllAnnouncers_KillingSpree(g_pGameRules, 18, 0.0, &criteria, 5, 1);
            CResponseCriteriaSet::RemoveCriteria(&criteria, "streak");
            v102 = 1.5;
            if ( CDOTA_PlayerResource::GetStreak(g_pDOTAPlayerResource, v52->m_iPlayerID.m_Value) == 9 )
            {
              EconEntity_OnOwnerKillEaterEvent(
                v52,
                pVictim,
                kill_eater_event_t::kKillEaterEvent_Godlike,
                1,
                INVALID_ITEM_DEF_INDEX);
              CMsgTournamentItemEvent::CMsgTournamentItemEvent(&params);
              LODWORD(params.fGain) = 6;
              v103 = *&params.bTooltip;
              v104 = v52->m_iTeamNum.m_Value == 3;
              LOBYTE(v103) = params.bTooltip | 0x84;
              *&params.bTooltip = v103;
              params.nDamageCategory = v104;
              v105 = CDOTA_PlayerResource::GetSteamID(g_pDOTAPlayerResource, v52->m_iPlayerID.m_Value);
              v106 = pVictim[1].m_pfnBlocked.__delta;
              *&params.bIgnoreInvis = v105;
              *&params.bTooltip |= 1u;
              LODWORD(params.fDistance) = CDOTA_PlayerResource::GetSteamID(g_pDOTAPlayerResource, v106);
              *&params.bTooltip |= 2u;
              TournamentItemEvent(&params, "tournament_drops");
              CDOTAGamerules::SendProjection_CustomEvent(
                g_pGameRules,
                EProjectionEvent::ePE_Killstreak_godlike,
                v52->m_iTeamNum.m_Value);
              CMsgTournamentItemEvent::~CMsgTournamentItemEvent(&params);
              v102 = 1.5;
            }
          }
          CResponseCriteriaSet::AppendCriteria(&criteria, "multiplekillcount", 1.0, v100);
          CDOTAGamerules::QueueConceptForAllAnnouncers_KillingSpree(g_pGameRules, 18, v102, &criteria, 5, 1);
        }
        v65 = DOTACommander();
        CDOTA_Commander::OnHeroKill(v65, v52, pVictim);
        CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
        goto LABEL_101;
      }
      v53 = pVictim[1].m_pfnBlocked.__delta;
      if ( v53 == -1 )
      {
        if ( !CDOTA_BaseNPC::IsBot(pVictim) )
          goto LABEL_90;
        v53 = pVictim[1].m_pfnBlocked.__delta;
      }
      SendChatEventMessage(
        DOTA_CHAT_MESSAGE::CHAT_MESSAGE_FIRSTBLOOD,
        sKillGoldInfo.nBountyGold,
        nKillerPlayerID,
        v53,
        0);
LABEL_90:
      CMsgTournamentItemEvent::CMsgTournamentItemEvent(&params);
      params.fGain = 0.0;
      v54 = *&params.bTooltip;
      v55 = v52->m_iTeamNum.m_Value == 3;
      LOBYTE(v54) = params.bTooltip | 0x84;
      *&params.bTooltip = v54;
      params.nDamageCategory = v55;
      v56 = CDOTA_PlayerResource::GetSteamID(g_pDOTAPlayerResource, v52->m_iPlayerID.m_Value);
      v57 = pVictim[1].m_pfnBlocked.__delta;
      *&params.bIgnoreInvis = v56;
      *&params.bTooltip |= 1u;
      LODWORD(params.fDistance) = CDOTA_PlayerResource::GetSteamID(g_pDOTAPlayerResource, v57);
      *&params.bTooltip |= 2u;
      TournamentItemEvent(&params, "tournament_drops");
      CMsgTournamentItemEvent::~CMsgTournamentItemEvent(&params);
      goto LABEL_91;
    }
  }
  if ( v24 == -1 )
    goto LABEL_155;
  CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(&criteria, g_pDOTAPlayerResource, v24);
  v25 = CEntityHandle::operator CEntityInstance *(&criteria);
  v26 = v25;
  if ( v25 != 0 && BYTE3(v25[7]._vptr_IHandleEntity) != 0 && (v25[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
  {
    if ( pKiller->m_iTeamNum.m_Value != pVictim->m_iTeamNum.m_Value )
    {
      CDOTA_BaseNPC_Hero::RecordLastHit(v25);
      m_iUnitType = pVictim->m_iUnitType;
      if ( (m_iUnitType & 0x820) != 0 || sKillGoldInfo.nBountyGold <= 0 )
        goto LABEL_156;
      CResponseCriteriaSet::CResponseCriteriaSet(&params);
      CDOTA_PlayerResource::GetLastHits(g_pDOTAPlayerResource, v26[100]._vptr_IHandleEntity);
      CResponseCriteriaSet::AppendCriteria(&params, "lasthitcount", 1.0, v87);
      CResponseCriteriaSet::AppendCriteria(&params, "tower", 1.0, v88);
      m_pEntity = pVictim->m_pEntity;
      m_pAsString = "";
      if ( m_pEntity->m_designerName.u.m_Id != 0 )
        m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
      CResponseCriteriaSet::AppendCriteria(&params, "killedclass", m_pAsString, 1.0);
      v91 = "";
      if ( pVictim->m_iszUnitName.m_Value.u.m_Id != 0 )
        v91 = pVictim->m_iszUnitName.m_Value.u.m_pAsString;
      CResponseCriteriaSet::AppendCriteria(&params, "killedunitname", v91, 1.0);
      CResponseCriteriaSet::AppendCriteria(&params, "bountygold", 1.0, v92);
      if ( pInflictor != 0 )
      {
        v93 = "";
        v94 = pInflictor->m_pEntity;
        if ( v94->m_designerName.u.m_Id != 0 )
          v93 = v94->m_designerName.u.m_pAsString;
        CResponseCriteriaSet::AppendCriteria(&params, "abilityname", v93, 1.0);
      }
      vptr_IHandleEntity = v26[70]._vptr_IHandleEntity;
      if ( vptr_IHandleEntity != 0 )
        CDOTA_Speech::SpeakConcept(vptr_IHandleEntity, 12, &params, 0, 0, 0, 0, 0);
      CResponseCriteriaSet::~CResponseCriteriaSet(&params);
LABEL_155:
      m_iUnitType = pVictim->m_iUnitType;
LABEL_156:
      v37 = m_iUnitType & 1;
      ia = 0;
      nBountyPlayerIDa = 0;
      goto LABEL_157;
    }
    nBountyPlayerIDa = v25;
  }
  else
  {
    if ( pKiller->m_iTeamNum.m_Value != pVictim->m_iTeamNum.m_Value )
      goto LABEL_155;
    nBountyPlayerIDa = 0;
  }
  v27 = (*(pKiller->_vptr_IHandleEntity + 413))(pKiller);
  SendOverheadEventMessage(0, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_DENY, pVictim, 0, v27);
  if ( nBountyPlayerIDa != 0 )
  {
    CDOTA_PlayerResource::IncrementDenies(g_pDOTAPlayerResource, nBountyPlayerIDa->m_iPlayerID.m_Value);
    m_nFarmClaimPlayerID = pVictim->m_nFarmClaimPlayerID;
    if ( m_nFarmClaimPlayerID != -1 )
      CDOTA_PlayerResource::IncrementClaimedDenies(g_pDOTAPlayerResource, m_nFarmClaimPlayerID);
    LODWORD(criteria._vptr_CResponseCriteriaSet) = 0;
    criteria.m_Lookup.m_LessFunc = 0;
    criteria.m_Lookup.m_Elements.m_pMemory = 0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(pVictim);
    FindUnitsInRadius(pKiller->m_iTeamNum.m_Value, AbsOrigin, pVictim, 1000.0, &criteria, 2, 1, 464, 0, 0);
    if ( SLODWORD(criteria._vptr_CResponseCriteriaSet) > 0 )
    {
      CResponseCriteriaSet::CResponseCriteriaSet(&params);
      CDOTA_PlayerResource::GetDenies(g_pDOTAPlayerResource, nBountyPlayerIDa->m_iPlayerID.m_Value);
      CResponseCriteriaSet::AppendCriteria(&params, "denycount", 1.0, v30);
      CResponseCriteriaSet::AppendCriteria(&params, "tower", 1.0, v31);
      v32 = pVictim->m_pEntity;
      v33 = "";
      if ( v32->m_designerName.u.m_Id != 0 )
        v33 = v32->m_designerName.u.m_pAsString;
      CResponseCriteriaSet::AppendCriteria(&params, "killedclass", v33, 1.0);
      if ( pInflictor != 0 )
      {
        v34 = "";
        v35 = pInflictor->m_pEntity;
        if ( v35->m_designerName.u.m_Id != 0 )
          v34 = v35->m_designerName.u.m_pAsString;
        CResponseCriteriaSet::AppendCriteria(&params, "abilityname", v34, 1.0);
      }
      m_pSpeech = nBountyPlayerIDa->m_Speech.m_pSpeech;
      if ( m_pSpeech != 0 )
        CDOTA_Speech::SpeakConcept(m_pSpeech, 11, &params, 0, 0, 0, 0, 0);
      CResponseCriteriaSet::~CResponseCriteriaSet(&params);
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&criteria);
    ia = 0;
    nBountyPlayerIDa = 0;
    v37 = pVictim->m_iUnitType & 1;
  }
  else
  {
    ia = 0;
    v37 = pVictim->m_iUnitType & 1;
  }
LABEL_157:
  if ( v37 != 0 && !pVictim->m_bIsIllusion.m_Value )
  {
LABEL_112:
    if ( (*(pVictim->_vptr_IHandleEntity + 436))(pVictim) == 0 )
    {
      entities.m_Size = 0;
      entities.m_Memory.m_nAllocationCount = 64;
      entities.m_Memory.m_nGrowSize = 0x80000000;
      entities.m_Memory.m_pMemory = &entities.m_FixedMemory;
      v70 = CBaseEntity::GetAbsOrigin(pVictim);
      FindUnitsInRadius(pVictim->m_iTeamNum.m_Value, v70, pVictim, 1600.0, &entities, 2, 1, 270416, 1, 0);
      KeyValues::KeyValues(&kv, "on_unit_died_nearby");
      KeyValues::SetPtr(&kv, "unit", pVictim);
      KeyValues::SetPtr(&kv, "attacker", pKiller);
      v71 = 0;
      for ( j = 0; entities.m_Size > j; ++v71 )
      {
        v73 = &entities.m_Memory.m_pMemory[v71];
        v74 = entities.m_Memory.m_pMemory[v71].m_Index;
        if ( v74 + 2 > 1 )
        {
          v75 = v73->m_Index;
          v76 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v73->m_Index) >> 9) & 0x3F];
          if ( v76 != 0 )
          {
            v77 = &v76[v75 & 0x1FF];
            if ( v77 != 0 && v74 == v77->m_EHandle.m_Index )
            {
              m_pInstance = v77->m_pInstance;
              if ( v77->m_pInstance != 0
                && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
              {
                CDOTA_BaseNPC_Hero::OnHeroDiedNearby(m_pInstance, &kv);
              }
            }
          }
        }
        ++j;
      }
      KeyValues::~KeyValues(&kv);
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
    }
  }
  CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(&params, g_pDOTAPlayerResource, nKillerPlayerID);
  v38 = CEntityHandle::operator CEntityInstance *(&params.ability);
  v39 = v38;
  if ( v38 != 0 && BYTE3(v38[7]._vptr_IHandleEntity) != 0 && (v38[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
  {
    CDOTA_BaseNPC_Hero::EvaluateEventsForKill(v38, pVictim, pKiller);
    if ( ia )
    {
      CDOTA_BaseNPC_Hero::HandleKillEaterKills(v39, pKiller, nBountyPlayerIDa, pInflictor);
      params.ability.m_Index = -1;
      params.fDamage = 0.0;
      params.fOriginalDamage = 0.0;
      params.nActivity = -1;
      params.bTooltip = 0;
      params.nTooltipParam = 0;
      params.bIgnoreInvis = 0;
      params.bNoCooldown = 0;
      params.bReincarnate = 0;
      params.bDoNotConsume = 0;
      params.fDistance = 0.0;
      params.inflictor.m_Index = -1;
      params.nDamageflags = 0;
      params.nDamageCategory = 0;
      memset(&params.pOrb, 0, 24);
      params.bCraniumBasherTested = 0;
      params.bHeartRegenApplied = 0;
      params.bDiffusalApplied = 0;
      params.bChainLightningConsidered = 0;
      params.bSuppressDamage = 0;
      params.bRangedAttack = 0;
      params.nPlayerids_stick = 0;
      params.hattacker.m_Index = -1;
      params.htarget.m_Index = -1;
      params.hunit.m_Index = -1;
      v79 = v39->m_pEntity;
      if ( v79 != 0 )
      {
        v80 = (v79->m_EHandle.m_Index >> 15) - (v79->m_flags & 1);
        v81 = 0x7FFF;
        if ( v79->m_EHandle.m_Index != -1 )
          v81 = v79->m_EHandle.m_Index & 0x7FFF;
        LOWORD(params.hattacker.m_Index) = v81 | params.hattacker.m_Index & 0x8000;
        params.hattacker.m_Index = (v80 << 15) | params.hattacker.m_Index & 0x7FFF;
      }
      v82 = nBountyPlayerIDa->m_pEntity;
      if ( v82 != 0 )
      {
        v83 = (v82->m_EHandle.m_Index >> 15) - (v82->m_flags & 1);
        v84 = 0x7FFF;
        if ( v82->m_EHandle.m_Index != -1 )
          v84 = v82->m_EHandle.m_Index & 0x7FFF;
        LOWORD(params.htarget.m_Index) = v84 | params.htarget.m_Index & 0x8000;
        params.htarget.m_Index = (v83 << 15) | params.htarget.m_Index & 0x7FFF;
      }
      FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_HERO_KILLED, &params);
    }
    if ( IsDemon(pVictim) )
      EconEntity_OnOwnerKillEaterEvent(
        v39,
        nBountyPlayerIDa,
        kill_eater_event_t::kKillEaterEvent_Demons_Destroyed,
        1,
        INVALID_ITEM_DEF_INDEX);
    v40 = pVictim->m_iUnitType;
    if ( (v40 & 0x20000) != 0 )
    {
      EconEntity_OnOwnerKillEaterEvent(
        v39,
        0,
        kill_eater_event_t::kKillEaterEvent_EnemyWardKills,
        1,
        INVALID_ITEM_DEF_INDEX);
      v40 = pVictim->m_iUnitType;
    }
    if ( (v40 & 0x10) != 0 )
    {
      v41 = __dynamic_cast(pVictim, &`typeinfo for'CDOTA_BaseNPC, &`typeinfo for'CDOTA_BaseNPC_Building, 0);
      CDOTA_BaseNPC_Hero::HandleKillEaterBuildingKills(v39, pKiller, v41, pInflictor);
      params.ability.m_Index = -1;
      params.fDamage = 0.0;
      params.fOriginalDamage = 0.0;
      params.nActivity = -1;
      params.bTooltip = 0;
      params.nTooltipParam = 0;
      params.bIgnoreInvis = 0;
      params.bNoCooldown = 0;
      params.bReincarnate = 0;
      params.bDoNotConsume = 0;
      params.fDistance = 0.0;
      params.inflictor.m_Index = -1;
      params.nDamageflags = 0;
      params.nDamageCategory = 0;
      memset(&params.pOrb, 0, 24);
      params.bCraniumBasherTested = 0;
      params.bHeartRegenApplied = 0;
      params.bDiffusalApplied = 0;
      params.bChainLightningConsidered = 0;
      params.bSuppressDamage = 0;
      params.bRangedAttack = 0;
      params.nPlayerids_stick = 0;
      params.hattacker.m_Index = -1;
      params.htarget.m_Index = -1;
      params.hunit.m_Index = -1;
      v42 = v39->m_pEntity;
      if ( v42 != 0 )
      {
        v43 = (v42->m_EHandle.m_Index >> 15) - (v42->m_flags & 1);
        v44 = 0x7FFF;
        if ( v42->m_EHandle.m_Index != -1 )
          v44 = v42->m_EHandle.m_Index & 0x7FFF;
        LOWORD(params.hattacker.m_Index) = v44 | params.hattacker.m_Index & 0x8000;
        params.hattacker.m_Index = (v43 << 15) | params.hattacker.m_Index & 0x7FFF;
      }
      v45 = pVictim->m_pEntity;
      if ( v45 != 0 )
      {
        v46 = (v45->m_EHandle.m_Index >> 15) - (v45->m_flags & 1);
        v47 = 0x7FFF;
        if ( v45->m_EHandle.m_Index != -1 )
          v47 = v45->m_EHandle.m_Index & 0x7FFF;
        LOWORD(params.htarget.m_Index) = v47 | params.htarget.m_Index & 0x8000;
        params.htarget.m_Index = (v46 << 15) | params.htarget.m_Index & 0x7FFF;
      }
      if ( pInflictor != 0 && (v48 = pInflictor->m_pEntity) != 0 )
      {
        v49 = (v48->m_EHandle.m_Index >> 15) - (v48->m_flags & 1);
        v50 = 0x7FFF;
        if ( v48->m_EHandle.m_Index != -1 )
          v50 = v48->m_EHandle.m_Index & 0x7FFF;
        LOWORD(params.inflictor.m_Index) = v50 | params.inflictor.m_Index & 0x8000;
        params.inflictor.m_Index = (v49 << 15) | params.inflictor.m_Index & 0x7FFF;
      }
      else
      {
        params.inflictor.m_Index = -1;
      }
      FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_BUILDING_KILLED, &params);
    }
  }
  sKillGoldInfo.vecKillerList.m_Size = 0;
  if ( (sKillGoldInfo.vecKillerList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&sKillGoldInfo.vecKillerList.m_Memory);
    if ( (sKillGoldInfo.vecKillerList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&sKillGoldInfo.vecKillerList.m_Memory);
  }
}


// CDOTAHeroList::GameStarted  (line 661, @0x000000000290d510, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetGameMode, GetInstance, IndexToIdentity, IsAddOnGame, IsValid, LookupEntity, NetworkStateChanged, QueueConcept, Set, ToDOTABaseNPCHero, operator CEntityInstance*, operator=<int>, operator[]
// calls: CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_Speech::QueueConcept, CResponseCriteriaSet::~CResponseCriteriaSet, _Unwind_Resume
// callers: CDOTAGamerules::State_Enter_GAME_IN_PROGRESS
// strings: "announce_event"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTAHeroList::GameStarted(CDOTAHeroList *const this)
{
  __int64 v2; // r13
  int i; // r12d
  CHandle<CDOTA_BaseNPC_Hero> *v4; // rdx
  uint32 m_Index; // eax
  __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityInstance *m_pInstance; // rbx
  int v10; // eax
  CDOTA_Speech *vptr_IHandleEntity; // rdi
  _DWORD *v12; // rax
  _DWORD *v13; // [rsp+18h] [rbp-78h]
  CResponseCriteriaSet criteria; // [rsp+20h] [rbp-70h] BYREF

  v2 = 0;
  for ( i = 0; this->m_hHeroList.m_Size > i; ++i )
  {
    while ( 1 )
    {
      v4 = &this->m_hHeroList.m_Memory.m_pMemory[v2];
      m_Index = v4->m_Index;
      if ( v4->m_Index + 2 > 1 )
      {
        v6 = v4->m_Index;
        v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->m_Index) >> 9) & 0x3F];
        if ( v7 != 0 )
        {
          v8 = &v7[v6 & 0x1FF];
          if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
          {
            m_pInstance = v8->m_pInstance;
            if ( v8->m_pInstance != 0 && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
            {
              if ( (*(m_pInstance->_vptr_IHandleEntity + 413))(v8->m_pInstance) != 0
                && *((*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance) + 4740) == 3 )
              {
                v12 = (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance);
                if ( v12[1185] != 1 )
                {
                  v13 = v12;
                  (*(*v12 + 176LL))(v12, 4740, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                  v13[1185] = 1;
                }
              }
              v10 = *&g_pGameRules[6].m_szQuestName[68];
              if ( v10 != 15 && v10 != 19 )
                break;
            }
          }
        }
      }
      ++i;
      ++v2;
      if ( this->m_hHeroList.m_Size <= i )
        return;
    }
    CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
    CResponseCriteriaSet::AppendCriteria(&criteria, "announce_event", "game_start", 1.0);
    vptr_IHandleEntity = m_pInstance[70]._vptr_IHandleEntity;
    if ( vptr_IHandleEntity != 0 )
      CDOTA_Speech::QueueConcept(vptr_IHandleEntity, 18, 1.5, &criteria, 1, 1, 0, 0, 0);
    ++v2;
    CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
  }
}


// CDOTAHeroList::GiveKillerBountyGold  (line 684, @0x000000000295f560, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<int>, CreateEvent, Element, Get, GetAttacker, GetGlobalDOTATeam, GetInstance, GetMainControllingPlayer, GetPlayerID, GetTeamNumber, GrowMemory, IncrementAssists, IncrementHeroKills, IsBuilding, IsHero, IsRealHero, NetworkStateChanged, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, TriggerFirstBlood, operator CBaseEntity*, operator[], ~CUtlVector
// calls: CDOTA_PlayerResource::GetTeam, CDOTAHeroList::GiveGold, CDOTA_BaseNPC::IsOpposingTeam, SendChatEventMessage, GetGlobalTeam, CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail, CDOTAHeroList::GivePlayerFullBountyGold, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, CDOTA_PlayerResource::IncrementHeroKillGold, CDOTAHeroList::ShowGoldOverhead, CUtlMemory<int, int>::Grow, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle (27 total)
// callers: CDOTAHeroList::DistributeRewardsForKill
// strings: "TowerKill", "dota_team_kill_credit", "killer_userid", "victim_userid", "teamnumber", "herokills"
// globals: INVALID_ITEM_DEF_INDEX
int __fastcall CDOTAHeroList::GiveKillerBountyGold(
        CDOTAHeroList *const this,
        CDOTA_BaseNPC *pVictim,
        CDOTA_BaseNPC *pKiller,
        int nMidasGold,
        int *const nOutBountyGold,
        CBaseEntity *pInflictor,
        int *const pVictimID,
        CUtlVector<int,CUtlMemory<int,int> > *const vecAttackerPlayerIDs)
{
  uint32 m_iUnitType; // eax
  uint32 v12; // edx
  int v13; // r14d
  bool v14; // r13
  int m_nControllingPlayerID; // r15d
  __int64 v17; // rax
  __int64 v18; // r14
  unsigned __int8 m_Value; // r15
  int v20; // edx
  CTeam *GlobalTeam; // rax
  CTeam *v22; // r15
  int v23; // r14d
  IGameEventManager2 *v24; // rdi
  __int64 v25; // r14
  unsigned int v26; // eax
  int v27; // esi
  int delta; // eax
  int v29; // r13d
  __int64 v30; // r14
  int v31; // eax
  int *v32; // rax
  __int64 v33; // rbx
  int v34; // r13d
  int v35; // r14d
  int v36; // eax
  int v37; // r13d
  __int64 v38; // r14
  CEntityInstance *v39; // rax
  int Kills; // eax
  int v41; // eax
  int Team; // eax
  char v43; // [rsp+1Fh] [rbp-A1h]
  CDOTA_BaseNPC_Hero *v44; // [rsp+20h] [rbp-A0h]
  int nWardsPlaced; // [rsp+28h] [rbp-98h]
  int nLastHits; // [rsp+2Ch] [rbp-94h]
  float flXPM; // [rsp+30h] [rbp-90h]
  float flGPM; // [rsp+34h] [rbp-8Ch]
  int Deaths; // [rsp+38h] [rbp-88h]
  int nAssists; // [rsp+50h] [rbp-70h]
  EDOTA_ModifyGold_Reason nReason; // [rsp+54h] [rbp-6Ch]
  CEntityHandle v55; // [rsp+60h] [rbp-60h] BYREF
  int nBountyGold; // [rsp+6Ch] [rbp-54h] BYREF
  int nAttackerPlayerID; // [rsp+70h] [rbp-50h] BYREF
  CUtlMemory<int,int> v58; // [rsp+78h] [rbp-48h] BYREF

  if ( pKiller == 0 )
    return -1;
  m_iUnitType = pVictim->m_iUnitType;
  if ( (m_iUnitType & 0x10) != 0 )
  {
    nReason = EDOTA_ModifyGold_Reason::DOTA_ModifyGold_Building;
    v12 = pVictim->m_iUnitType & 1;
  }
  else
  {
    v12 = pVictim->m_iUnitType & 1;
    if ( (m_iUnitType & 1) != 0 && !pVictim->m_bIsIllusion.m_Value )
    {
      nReason = EDOTA_ModifyGold_Reason::DOTA_ModifyGold_HeroKill;
      goto LABEL_20;
    }
    nReason = EDOTA_ModifyGold_Reason::DOTA_ModifyGold_RoshanKill;
    if ( (m_iUnitType & 0x800) == 0 )
    {
      nReason = (m_iUnitType >> 7) & 0xD;
      if ( (m_iUnitType & 1) == 0 )
      {
LABEL_5:
        v13 = (*(pVictim->_vptr_IHandleEntity + 410))(pVictim);
        if ( nMidasGold > 0 )
          v13 = nMidasGold;
        v14 = nMidasGold > 0;
        m_nControllingPlayerID = (*(pKiller->_vptr_IHandleEntity + 414))(pKiller);
        if ( pKiller->m_bIsIllusion.m_Value )
          m_nControllingPlayerID = pKiller->m_nControllingPlayerID;
        if ( m_nControllingPlayerID != -1
          && CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, m_nControllingPlayerID) != pVictim->m_iTeamNum.m_Value )
        {
          if ( CDOTAHeroList::GiveGold(this, m_nControllingPlayerID, v13, v14, nReason) )
            *nOutBountyGold = v13;
          else
            *nOutBountyGold = 0;
          return m_nControllingPlayerID;
        }
        return -1;
      }
      goto LABEL_19;
    }
  }
  if ( v12 == 0 )
    goto LABEL_5;
LABEL_19:
  if ( pVictim->m_bIsIllusion.m_Value )
    return -1;
LABEL_20:
  v17 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "dota_player_killed", 0, 0);
  v18 = v17;
  if ( v17 != 0 )
  {
    (*(*v17 + 112LL))(v17, "PlayerID", LODWORD(pVictim[1].m_pfnBlocked.__delta));
    (*(*v18 + 112LL))(v18, "HeroKill", pKiller->m_iUnitType & 1);
    (*(*v18 + 112LL))(v18, "TowerKill", (pKiller->m_iUnitType & 4) != 0);
    (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v18, 1);
  }
  m_Value = pKiller->m_iTeamNum.m_Value;
  if ( CDOTA_BaseNPC::IsOpposingTeam(pVictim, m_Value) )
  {
    GlobalTeam = GetGlobalTeam(m_Value);
    v22 = GlobalTeam;
    if ( GlobalTeam != 0 )
    {
      v23 = HIDWORD(GlobalTeam[1].m_pEntity) + 1;
      (*(GlobalTeam->_vptr_IHandleEntity + 22))(GlobalTeam, 988, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v24 = gameeventmanager;
      HIDWORD(v22[1].m_pEntity) = v23;
      v25 = (*(v24->_vptr_IBaseInterface + 7))(v24, "dota_team_kill_credit", 0, 0);
      if ( v25 != 0 )
      {
        v26 = (*(pKiller->_vptr_IHandleEntity + 414))(pKiller);
        if ( pKiller->m_bIsIllusion.m_Value )
          v26 = pKiller->m_nControllingPlayerID;
        (*(*v25 + 112LL))(v25, "killer_userid", v26);
        (*(*v25 + 112LL))(v25, "victim_userid", LODWORD(pVictim[1].m_pfnBlocked.__delta));
        (*(*v25 + 112LL))(v25, "teamnumber", v22->m_iTeamNum.m_Value);
        (*(*v25 + 112LL))(v25, "herokills", HIDWORD(v22[1].m_pEntity));
        (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v25, 1);
      }
    }
    nBountyGold = (*(pVictim->_vptr_IHandleEntity + 410))(pVictim);
    v27 = (*(pKiller->_vptr_IHandleEntity + 414))(pKiller);
    if ( pKiller->m_bIsIllusion.m_Value )
      v27 = pKiller->m_nControllingPlayerID;
    if ( v27 != -1 )
      return CDOTAHeroList::GivePlayerFullBountyGold(this, v27, nBountyGold, nOutBountyGold, pVictim, pInflictor);
    delta = pVictim[1].m_think.__delta;
    if ( delta == 0 )
    {
      nAttackerPlayerID = 0;
      v29 = 0;
      v58.m_pMemory = 0;
      v58.m_nAllocationCount = 0;
      v58.m_nGrowSize = 0;
      do
      {
        if ( CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v29) == pKiller->m_iTeamNum.m_Value )
        {
          v30 = nAttackerPlayerID;
          v31 = nAttackerPlayerID;
          if ( nAttackerPlayerID == v58.m_nAllocationCount )
          {
            CUtlMemory<int,int>::Grow(&v58, 1);
            v31 = nAttackerPlayerID;
          }
          nAttackerPlayerID = v31 + 1;
          v32 = &v58.m_pMemory[v30];
          if ( v32 != 0 )
            *v32 = v29;
        }
        ++v29;
      }
      while ( v29 != 64 );
      if ( nAttackerPlayerID > 0 )
      {
        v33 = 0;
        v34 = 0;
        v35 = nBountyGold / nAttackerPlayerID;
        do
        {
          CDOTA_PlayerResource::IncrementHeroKillGold(g_pDOTAPlayerResource, v58.m_pMemory[v33], v35);
          if ( CDOTAHeroList::GiveGold(this, v58.m_pMemory[v33], v35, 1, nReason) )
            CDOTAHeroList::ShowGoldOverhead(this, v58.m_pMemory[v33], v35, 1);
          ++v34;
          ++v33;
        }
        while ( nAttackerPlayerID > v34 );
      }
      *pVictimID = pVictim[1].m_pfnBlocked.__delta;
      *nOutBountyGold = nBountyGold;
      CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&nAttackerPlayerID);
      return -1;
    }
    if ( delta == 1 )
    {
      nAttackerPlayerID = pVictim[1].m_pfnBlocked.__delta;
      CUtlVectorBase<int,CUtlMemory<int,int>>::AddToTail(vecAttackerPlayerIDs, &nAttackerPlayerID);
      nAttackerPlayerID = **&pVictim[1].m_ResponseContexts.m_Size;
      CUtlVectorBase<int,CUtlMemory<int,int>>::AddToTail(vecAttackerPlayerIDs, &nAttackerPlayerID);
      return CDOTAHeroList::GivePlayerFullBountyGold(
               this,
               **&pVictim[1].m_ResponseContexts.m_Size,
               nBountyGold,
               nOutBountyGold,
               pVictim,
               pInflictor);
    }
    else
    {
      v43 = g_pGameRules[61].m_szQuestName[114];
      v36 = (*(pVictim->_vptr_IHandleEntity + 414))(pVictim);
      if ( g_pGameRules[61].m_szQuestName[114] != 0 )
        CDOTAHeroList::TriggerFirstBlood(&nBountyGold, 0xFFFFFFFFLL, v36, g_pGameRules);
      v37 = nBountyGold / SLODWORD(pVictim[1].m_think.__delta);
      nAttackerPlayerID = pVictim[1].m_pfnBlocked.__delta;
      CUtlVectorBase<int,CUtlMemory<int,int>>::AddToTail(vecAttackerPlayerIDs, &nAttackerPlayerID);
      if ( SLODWORD(pVictim[1].m_think.__delta) > 0 )
      {
        v38 = 0;
        do
        {
          nAttackerPlayerID = *(*&pVictim[1].m_ResponseContexts.m_Size + 8 * v38);
          CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(&v55, g_pDOTAPlayerResource, nAttackerPlayerID);
          v39 = CEntityHandle::operator CEntityInstance *(&v55);
          if ( v39 != 0 && BYTE3(v39[7]._vptr_IHandleEntity) != 0 && (v39[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            v44 = v39;
            CDOTA_PlayerResource::IncrementAssists(
              g_pDOTAPlayerResource,
              v39[100]._vptr_IHandleEntity,
              pVictim[1].m_pfnBlocked.__delta);
            nWardsPlaced = CDOTA_PlayerResource::GetObserverWardsPlaced(g_pDOTAPlayerResource, nAttackerPlayerID);
            nLastHits = CDOTA_PlayerResource::GetLastHits(g_pDOTAPlayerResource, nAttackerPlayerID);
            flXPM = CDOTA_PlayerResource::GetXPPerMin(g_pDOTAPlayerResource, nAttackerPlayerID);
            flGPM = CDOTA_PlayerResource::GetGoldPerMin(g_pDOTAPlayerResource, nAttackerPlayerID);
            nAssists = CDOTA_PlayerResource::GetAssists(g_pDOTAPlayerResource, nAttackerPlayerID);
            Deaths = CDOTA_PlayerResource::GetDeaths(g_pDOTAPlayerResource, nAttackerPlayerID);
            Kills = CDOTA_PlayerResource::GetKills(g_pDOTAPlayerResource, nAttackerPlayerID);
            CDOTA_CombatLog::AddPlayerStatsEvent(
              &g_DOTACombatLog,
              nAttackerPlayerID,
              Kills,
              Deaths,
              nAssists,
              flGPM,
              flXPM,
              nLastHits,
              nWardsPlaced);
            EconEntity_OnOwnerKillEaterEvent(
              v44,
              pVictim,
              kill_eater_event_t::kKillEaterEvent_KillAssists,
              1,
              INVALID_ITEM_DEF_INDEX);
          }
          CDOTA_PlayerResource::IncrementHeroKillGold(g_pDOTAPlayerResource, nAttackerPlayerID, v37);
          CUtlVectorBase<int,CUtlMemory<int,int>>::AddToTail(vecAttackerPlayerIDs, &nAttackerPlayerID);
          if ( CDOTAHeroList::GiveGold(this, nAttackerPlayerID, v37, 1, nReason) )
            CDOTAHeroList::ShowGoldOverhead(this, nAttackerPlayerID, v37, 1);
          ++v38;
        }
        while ( SLODWORD(pVictim[1].m_think.__delta) > v38 );
      }
      if ( v43 != 0 )
        CDOTA_CombatLog::AddFirstBloodEvent(&g_DOTACombatLog, vecAttackerPlayerIDs);
      *nOutBountyGold = nBountyGold;
      v41 = (*(pKiller->_vptr_IHandleEntity + 414))(pKiller);
      Team = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v41);
      CDOTA_PlayerResource::RecalculateTeamfightParticipation(g_pDOTAPlayerResource, Team);
      return -1;
    }
  }
  else
  {
    if ( m_Value == pVictim->m_iTeamNum.m_Value )
      return -1;
    v20 = pVictim[1].m_pfnBlocked.__delta;
    if ( (pKiller->m_iUnitType & 0x800) != 0 )
      SendChatEventMessage(DOTA_CHAT_MESSAGE::CHAT_MESSAGE_HERO_KILL, -1, v20, 0);
    else
      SendChatEventMessage(DOTA_CHAT_MESSAGE::CHAT_MESSAGE_HERO_KILL, 0, v20, 0);
    return -1;
  }
}


// NetworthSort  (line 926, @0x00000000028f6860, libserver.so)
// calls: CDOTA_PlayerResource::GetNetWorth
// callers: CDOTAHeroList::GiveNearbyHeroGoldBonus
int __fastcall NetworthSort(const int *nPlayerID1, const int *nPlayerID2)
{
  int NetWorth; // r12d

  NetWorth = CDOTA_PlayerResource::GetNetWorth(g_pDOTAPlayerResource, *nPlayerID1);
  return 2 * (NetWorth >= CDOTA_PlayerResource::GetNetWorth(g_pDOTAPlayerResource, *nPlayerID2)) - 1;
}


// CDOTAHeroList::GiveNearbyHeroGoldBonus  (line 932, @0x00000000029282a0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, CopyConstruct<int>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevel, GetModifier_Constant_First, GetPlayerID, GetTeamNumber, GrowMemory, IndexToIdentity, IsListeningToEvent, IsTempestDouble, IsValid, LookupEntity, Min<float>, Sort, ToDOTABaseNPC, ToDOTABaseNPCHero, V_swap<int>, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_BaseNPC::IsOpposingTeam, CDOTA_PlayerResource::GetNetWorth, CDOTA_PlayerResource::IsValidTeamPlayer, CDOTA_PlayerResource::GetTeam, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_PlayerResource::IsValidTeamPlayerID, CUtlVectorBase<int, CUtlMemory<int, int> >::Find, V_qsort, CDOTAHeroList::GiveGold, CDOTAHeroList::ShowGoldOverhead, CDOTA_CombatLog::AddAlliedGoldEvent (23 total)
// callers: CDOTAHeroList::DistributeRewardsForKill
// globals: CEntityHandle::gm_pEntityList, NetworthSort(int const*,int const*)
void __fastcall CDOTAHeroList::GiveNearbyHeroGoldBonus(
        CDOTAHeroList *const this,
        CDOTA_BaseNPC *pVictim,
        CDOTA_BaseNPC *pKiller,
        int *const nProximityBountyGoldKiller,
        int *const nProximityBountyGoldTotal,
        int *const nNearbyHeroes)
{
  int v8; // eax
  int v9; // r14d
  int v10; // r13d
  int Team; // r12d
  int v12; // eax
  int v13; // eax
  int v14; // esi
  CDOTA_BaseNPC *v15; // r14
  __m128 v16; // xmm4
  __m128 v17; // xmm0
  __m128 v18; // xmm0
  const Vector *AbsOrigin; // rax
  __int64 m_Size; // rsi
  __int64 v21; // r12
  int v22; // ebx
  CHandle<CBaseEntity> *v23; // rdx
  uint32 m_Index; // eax
  __int16 v25; // cx
  CEntityIdentity *v26; // rdx
  __int64 v27; // rcx
  CEntityIdentity *v28; // rdx
  CEntityInstance *m_pInstance; // r13
  __int64 v30; // rax
  int vptr_IHandleEntity; // r13d
  int v32; // eax
  int *v33; // rax
  int *m_pMemory; // rdi
  __m128d v35; // xmm0
  __int64 v36; // rbx
  double v37; // xmm2_8
  float v38; // xmm1_4
  float v39; // xmm0_4
  double v40; // xmm3_8
  int v41; // r13d
  int v42; // r12d
  bool v43; // cc
  __int64 v44; // rbx
  int v45; // r12d
  __int64 v46; // r13
  _DWORD *v47; // rax
  int *v48; // rbx
  int v49; // edx
  float v50; // xmm0_4
  __int64 v51; // rax
  int v52; // [rsp+34h] [rbp-1ECh]
  int iNetWorthRank; // [rsp+38h] [rbp-1E8h]
  int nVictimLevel; // [rsp+3Ch] [rbp-1E4h]
  float flNetWorthDifference; // [rsp+58h] [rbp-1C8h]
  float flNetWorthDifferencea; // [rsp+58h] [rbp-1C8h]
  float flVictimNetWorth; // [rsp+5Ch] [rbp-1C4h]
  float flVictimNetWortha; // [rsp+5Ch] [rbp-1C4h]
  CDOTA_BaseNPC *flEarlyNetWorthFactor; // [rsp+60h] [rbp-1C0h]
  float flEarlyNetWorthFactora; // [rsp+60h] [rbp-1C0h]
  float nCatchupGoldAmount; // [rsp+70h] [rbp-1B0h]
  int nCatchupGoldAmounta; // [rsp+70h] [rbp-1B0h]
  int nCatchupGoldAmountb; // [rsp+70h] [rbp-1B0h]
  float flAlliedTotalNetWorth; // [rsp+78h] [rbp-1A8h]
  int flAlliedTotalNetWortha; // [rsp+78h] [rbp-1A8h]
  int nKillerID; // [rsp+8Ch] [rbp-194h] BYREF
  float flWeight[2]; // [rsp+90h] [rbp-190h] BYREF
  int v72; // [rsp+98h] [rbp-188h]
  int v73; // [rsp+9Ch] [rbp-184h]
  int v74; // [rsp+A0h] [rbp-180h]
  CUtlVector<int,CUtlMemory<int,int> > playerIDs; // [rsp+B0h] [rbp-170h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> entities; // [rsp+D0h] [rbp-150h] BYREF
  unsigned __int64 v77; // [rsp+1E8h] [rbp-38h]

  v77 = __readfsqword(0x28u);
  if ( pKiller != 0
    && (pVictim->m_iUnitType & 1) != 0
    && CDOTA_BaseNPC::IsOpposingTeam(pVictim, pKiller->m_iTeamNum.m_Value) )
  {
    nVictimLevel = pVictim->m_iCurrentLevel.m_Value;
    v8 = (*(pVictim->_vptr_IHandleEntity + 414))(pVictim);
    flEarlyNetWorthFactor = pKiller;
    v9 = 0;
    flAlliedTotalNetWorth = 0.0;
    nCatchupGoldAmount = 0.0;
    v10 = 1;
    flVictimNetWorth = CDOTA_PlayerResource::GetNetWorth(g_pDOTAPlayerResource, v8);
    while ( 1 )
    {
      while ( !CDOTA_PlayerResource::IsValidTeamPlayer(g_pDOTAPlayerResource, v9) )
      {
LABEL_6:
        if ( ++v9 == 24 )
          goto LABEL_10;
      }
      Team = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v9);
      v12 = (*(pVictim->_vptr_IHandleEntity + 414))(pVictim);
      v13 = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v12);
      v14 = v9;
      if ( Team == v13 )
      {
        nCatchupGoldAmount = CDOTA_PlayerResource::GetNetWorth(g_pDOTAPlayerResource, v9) + nCatchupGoldAmount;
        if ( CDOTA_PlayerResource::GetNetWorth(g_pDOTAPlayerResource, v9) > flVictimNetWorth )
          ++v10;
        goto LABEL_6;
      }
      ++v9;
      flAlliedTotalNetWorth = CDOTA_PlayerResource::GetNetWorth(g_pDOTAPlayerResource, v14) + flAlliedTotalNetWorth;
      if ( v9 == 24 )
      {
LABEL_10:
        v16 = LODWORD(nCatchupGoldAmount);
        iNetWorthRank = v10;
        v15 = flEarlyNetWorthFactor;
        v16.m128_f32[0] = (nCatchupGoldAmount / flAlliedTotalNetWorth) - 1.0;
        if ( v16.m128_f32[0] <= 1.0 )
          LODWORD(flNetWorthDifference) = v16.m128_i32[0] & _mm_cmpge_ss(v16, 0LL).m128_u32[0];
        else
          flNetWorthDifference = 1.0;
        if ( (nCatchupGoldAmount - flAlliedTotalNetWorth) <= 0.0 )
        {
          flEarlyNetWorthFactora = 0.0;
        }
        else
        {
          v17.m128_f32[0] = (nCatchupGoldAmount - flAlliedTotalNetWorth) / 4000.0;
          v18 = _mm_cmpge_ss(0x3F800000u, v17);
          LODWORD(flEarlyNetWorthFactora) = _mm_andnot_ps(v18, 0x3F800000u).m128_u32[0]
                                          | COERCE_UNSIGNED_INT((nCatchupGoldAmount - flAlliedTotalNetWorth) / 4000.0)
                                          & v18.m128_i32[0];
        }
        entities.m_Size = 0;
        entities.m_Memory.m_nAllocationCount = 64;
        entities.m_Memory.m_nGrowSize = 0x80000000;
        entities.m_Memory.m_pMemory = &entities.m_FixedMemory;
        AbsOrigin = CBaseEntity::GetAbsOrigin(pVictim);
        FindUnitsInRadius(pVictim->m_iTeamNum.m_Value, AbsOrigin, pVictim, 1300.0, &entities, 2, 1, 270416, 0, 0);
        playerIDs.m_Size = 0;
        m_Size = entities.m_Size;
        playerIDs.m_Memory.m_pMemory = 0;
        playerIDs.m_Memory.m_nAllocationCount = 0;
        playerIDs.m_Memory.m_nGrowSize = 0;
        if ( entities.m_Size > 0 )
        {
          v21 = 0;
          v22 = 0;
          do
          {
            m_Size = CEntityHandle::gm_pEntityList;
            v23 = &entities.m_Memory.m_pMemory[v21];
            m_Index = entities.m_Memory.m_pMemory[v21].m_Index;
            if ( m_Index + 2 > 1 )
            {
              v25 = v23->m_Index;
              v26 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v23->m_Index) >> 9) & 0x3F];
              if ( v26 != 0 )
              {
                v27 = v25 & 0x1FF;
                m_Size = 8 * v27;
                v28 = &v26[v27];
                if ( v28 != 0 && m_Index == v28->m_EHandle.m_Index )
                {
                  m_pInstance = v28->m_pInstance;
                  if ( v28->m_pInstance != 0
                    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                    && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                  {
                    v30 = BYTE6(m_pInstance[69].m_hPrivateScope.m_hScope);
                    if ( v30 == 0xFF
                      || *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * v30) <= 0
                      || CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
                           &m_pInstance[64].m_worldGroupId,
                           modifierfunction::MODIFIER_PROPERTY_TEMPEST_DOUBLE,
                           &CModifierParams::s_Default) != 1.0 )
                    {
                      vptr_IHandleEntity = m_pInstance[100]._vptr_IHandleEntity;
                      LODWORD(flWeight[0]) = vptr_IHandleEntity;
                      if ( CDOTA_PlayerResource::IsValidTeamPlayerID(g_pDOTAPlayerResource, vptr_IHandleEntity)
                        && CUtlVectorBase<int,CUtlMemory<int,int>>::Find(&playerIDs, flWeight) == -1 )
                      {
                        v32 = playerIDs.m_Size;
                        v52 = playerIDs.m_Size;
                        if ( playerIDs.m_Size == playerIDs.m_Memory.m_nAllocationCount )
                        {
                          CUtlMemory<int,int>::Grow(&playerIDs.m_Memory, 1);
                          v32 = playerIDs.m_Size;
                        }
                        playerIDs.m_Size = v32 + 1;
                        v33 = &playerIDs.m_Memory.m_pMemory[v52];
                        if ( v33 != 0 )
                          *v33 = vptr_IHandleEntity;
                      }
                    }
                  }
                }
              }
            }
            ++v22;
            ++v21;
          }
          while ( entities.m_Size > v22 );
        }
        nKillerID = (*(v15->_vptr_IHandleEntity + 414))(v15, m_Size);
        if ( CDOTA_PlayerResource::IsValidTeamPlayerID(g_pDOTAPlayerResource, nKillerID)
          && CUtlVectorBase<int,CUtlMemory<int,int>>::Find(&playerIDs, &nKillerID) == -1 )
        {
          CUtlVectorBase<int,CUtlMemory<int,int>>::AddToTail(&playerIDs, &nKillerID);
        }
        flAlliedTotalNetWortha = playerIDs.m_Size;
        if ( playerIDs.m_Size == 0 )
          goto LABEL_59;
        if ( playerIDs.m_Size > 1 )
        {
          m_pMemory = playerIDs.m_Memory.m_pMemory;
          if ( playerIDs.m_Memory.m_pMemory != 0 )
          {
            V_qsort(playerIDs.m_Memory.m_pMemory, playerIDs.m_Size, 4, NetworthSort);
            m_pMemory = playerIDs.m_Memory.m_pMemory;
            goto LABEL_39;
          }
          nCatchupGoldAmountb = playerIDs.m_Size - 1;
          while ( 1 )
          {
            if ( nCatchupGoldAmountb <= 0 )
              goto LABEL_68;
            v44 = 0;
            v45 = 1;
            while ( 1 )
            {
              v46 = v44 + 4;
              if ( NetworthSort((m_pMemory + v44), (m_pMemory + v44 + 4)) < 0 )
                break;
              if ( nCatchupGoldAmountb < ++v45 )
                goto LABEL_67;
LABEL_64:
              m_pMemory = playerIDs.m_Memory.m_pMemory;
              v44 = v46;
            }
            ++v45;
            v47 = (playerIDs.m_Memory.m_pMemory + v46);
            v48 = (playerIDs.m_Memory.m_pMemory + v44);
            v49 = *v48;
            *v48 = *(playerIDs.m_Memory.m_pMemory + v46);
            *v47 = v49;
            if ( nCatchupGoldAmountb >= v45 )
              goto LABEL_64;
LABEL_67:
            m_pMemory = playerIDs.m_Memory.m_pMemory;
LABEL_68:
            if ( --nCatchupGoldAmountb == -1 )
            {
LABEL_39:
              *nProximityBountyGoldTotal = 0;
              *nNearbyHeroes = flAlliedTotalNetWortha;
              goto LABEL_40;
            }
          }
        }
        m_pMemory = playerIDs.m_Memory.m_pMemory;
        *nProximityBountyGoldTotal = 0;
        *nNearbyHeroes = flAlliedTotalNetWortha;
        if ( flAlliedTotalNetWortha <= 0 )
        {
LABEL_59:
          CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&playerIDs);
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
          return;
        }
LABEL_40:
        v35 = 0x3FF4CCCCCCCCCCCDuLL;
        v35.m128d_f64[0] = 1.3 - iNetWorthRank * 0.1;
        v36 = 0;
        flVictimNetWortha = flNetWorthDifference * flVictimNetWorth;
        flNetWorthDifferencea = _mm_movedup_pd(v35).m128d_f64[0];
        while ( 2 )
        {
          v42 = m_pMemory[v36];
          if ( v42 != (*(v15->_vptr_IHandleEntity + 414))(v15) )
          {
            v43 = flAlliedTotalNetWortha <= 2;
            if ( flAlliedTotalNetWortha != 2 )
              goto LABEL_55;
LABEL_74:
            flWeight[0] = 1.25;
            flWeight[1] = 0.75;
            v37 = flVictimNetWortha * 0.0375;
            v38 = (4 * nVictimLevel + 70);
            v50 = 75.0;
            v40 = (flNetWorthDifferencea * flWeight[v36]);
LABEL_75:
            v39 = v50 * flEarlyNetWorthFactora;
LABEL_44:
            v41 = (((v38 + v39) + v37) * v40);
            nCatchupGoldAmounta = ((v39 + v37) * v40);
            if ( v41 > 0 )
            {
              if ( v42 == (*(v15->_vptr_IHandleEntity + 414))(v15) )
                *nProximityBountyGoldKiller += v41;
              else
                *nProximityBountyGoldTotal += v41;
              if ( CDOTAHeroList::GiveGold(this, v42, v41, 1, EDOTA_ModifyGold_Reason::DOTA_ModifyGold_HeroKill) )
              {
                CDOTAHeroList::ShowGoldOverhead(this, v42, v41, 1);
                if ( v42 != nKillerID )
                  CDOTA_CombatLog::AddAlliedGoldEvent(&g_DOTACombatLog, nKillerID, v41);
              }
              CDOTA_PlayerResource::AddBonusGoldEarned(g_pDOTAPlayerResource, v42, nCatchupGoldAmounta);
              CDOTA_PlayerResource::IncrementHeroKillGold(g_pDOTAPlayerResource, v42, v41 - nCatchupGoldAmounta);
              CDOTA_PlayerResource::IncrementSharedGold(g_pDOTAPlayerResource, v42, nCatchupGoldAmounta);
            }
            if ( flAlliedTotalNetWortha <= ++v36 )
              goto LABEL_59;
            m_pMemory = playerIDs.m_Memory.m_pMemory;
            continue;
          }
          break;
        }
        --*nNearbyHeroes;
        v43 = flAlliedTotalNetWortha <= 2;
        if ( flAlliedTotalNetWortha == 2 )
          goto LABEL_74;
LABEL_55:
        if ( v43 )
        {
          if ( flAlliedTotalNetWortha == 1 )
          {
            v40 = flNetWorthDifferencea;
            v37 = flVictimNetWortha * 0.0375;
            v38 = (5 * nVictimLevel + 140);
            v39 = flEarlyNetWorthFactora * 100.0;
            goto LABEL_44;
          }
        }
        else
        {
          if ( flAlliedTotalNetWortha == 3 )
          {
            flWeight[0] = 1.25;
            flWeight[1] = 1.0;
            v72 = 1061158912;
            v37 = flVictimNetWortha * 0.0375;
            v38 = (3 * nVictimLevel + 35);
            v39 = flEarlyNetWorthFactora * 50.0;
            v40 = (flNetWorthDifferencea * flWeight[v36]);
            goto LABEL_44;
          }
          if ( flAlliedTotalNetWortha == 4 )
          {
            flWeight[0] = 1.25;
            flWeight[1] = 1.08;
            v72 = 1063943930;
            v37 = flVictimNetWortha * 0.03;
            v73 = 1061158912;
            v38 = (2 * nVictimLevel + 25);
            v39 = flEarlyNetWorthFactora * 35.0;
            v40 = (flNetWorthDifferencea * flWeight[v36]);
            goto LABEL_44;
          }
        }
        v51 = 4;
        if ( v36 <= 4 )
          v51 = v36;
        flWeight[0] = 1.25;
        flWeight[1] = 1.125;
        v50 = 25.0;
        v72 = 1065353216;
        v37 = flVictimNetWortha * 0.0225;
        v73 = 1063256064;
        v74 = 1061158912;
        v40 = (flNetWorthDifferencea * flWeight[v51]);
        v38 = (nVictimLevel + 20);
        goto LABEL_75;
      }
    }
  }
}


// CDOTAHeroList::GiveTeamGoldReward  (line 1107, @0x000000000295bb20, libserver.so)  // inlines: FStrEq, GetClassNameAsCStr, GetClassname, GetGlobalDOTATeam, GetLevel, GetMainControllingPlayer, GetOpposingTeamNumber, GetTeamNumber, GetUnitName, IncrementTowerKills, IsBuilding, IsCourier, IsPlayerTeam, NetworkStateChanged, Set, String, ToCStr, ToDOTABaseNPC, ToDOTABuilding, _V_strcmp
// calls: CGameEntitySystem::FindEntityByClassname, CDOTA_PlayerResource::GetTeam, CDOTAHeroList::GiveGold, CDOTAHeroList::ShowGoldOverhead, CDOTA_CombatLog::AddAlliedGoldEvent, GetGlobalTeam, SendChatEventMessage, V_stristr_fast(char const*,char const*), CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, GetRoshanSpawner, CDOTAGamerules::QueueConceptForAllAnnouncers (22 total)
// callers: CDOTAHeroList::DistributeRewardsForKill
// strings: "npc_dota_courier", "roshan_killed_good", "roshan_killed_bad", "announce_event", "roshan_spawncount", "DOTAMusic_Stinger.009" (7 total)
void __fastcall CDOTAHeroList::GiveTeamGoldReward(
        CDOTAHeroList *const this,
        CDOTA_BaseNPC *pVictim,
        CDOTA_BaseNPC *pKiller,
        int nBountyPlayerID)
{
  uint32 m_iUnitType; // eax
  CBaseEntity *EntityByClassname; // rsi
  char v8; // r15
  CDOTA_BaseNPC *v9; // rdx
  char v10; // al
  unsigned __int8 m_Value; // dl
  int v12; // eax
  int v13; // eax
  int v14; // r15d
  int v15; // r14d
  int v16; // eax
  CTeam *GlobalTeam; // rax
  CTeam *v18; // r12
  int v19; // ebx
  int m_nControllingPlayerID; // eax
  const char *m_pAsString; // rdi
  int v22; // r14d
  int v23; // eax
  const char *v24; // rdi
  int v25; // eax
  int v26; // eax
  int i; // r12d
  int v28; // eax
  const char *v29; // rdx
  float v30; // xmm2_4
  CTeam *Team; // rax
  int v32; // r15d
  int v33; // r14d
  int v34; // eax
  int v35; // r14d
  int v36; // r15d
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // r15d
  CBaseEntity *nBarracksRewardGoldPerPlayerb; // [rsp+0h] [rbp-1D0h]
  int nBarracksRewardGoldPerPlayer; // [rsp+0h] [rbp-1D0h]
  int nBarracksRewardGoldPerPlayera; // [rsp+0h] [rbp-1D0h]
  bool bDenya; // [rsp+8h] [rbp-1C8h]
  CDOTA_BaseNPC *nTowerRewardGoldPerPlayer; // [rsp+10h] [rbp-1C0h]
  int nTowerRewardGoldPerPlayera; // [rsp+10h] [rbp-1C0h]
  int nTowerRewardGoldPerPlayerb; // [rsp+10h] [rbp-1C0h]
  int nTowerRewardGoldPerPlayerc; // [rsp+10h] [rbp-1C0h]
  CResponseCriteriaSet criteria; // [rsp+20h] [rbp-1B0h] BYREF
  CRecipientFilter filter; // [rsp+60h] [rbp-170h] BYREF
  unsigned __int64 v53; // [rsp+198h] [rbp-38h]

  v53 = __readfsqword(0x28u);
  if ( pKiller == 0 )
    return;
  LOBYTE(m_iUnitType) = pVictim->m_iUnitType;
  if ( (pVictim->m_iUnitType & 0x100) != 0 && pVictim->m_iTeamNum.m_Value != pKiller->m_iTeamNum.m_Value )
  {
    EntityByClassname = 0;
    v8 = 1;
    while ( 1 )
    {
      EntityByClassname = CGameEntitySystem::FindEntityByClassname(
                            g_pGameEntitySystem,
                            EntityByClassname,
                            "npc_dota_courier");
      if ( EntityByClassname == 0 )
        break;
      v9 = 0;
      if ( EntityByClassname->m_bIsDOTANPC )
        v9 = EntityByClassname;
      if ( v9->m_iTeamNum.m_Value == pVictim->m_iTeamNum.m_Value )
      {
        nBarracksRewardGoldPerPlayerb = EntityByClassname;
        nTowerRewardGoldPerPlayer = v9;
        v10 = (*(v9->_vptr_IHandleEntity + 408))(v9);
        EntityByClassname = nBarracksRewardGoldPerPlayerb;
        if ( v10 == 0 && pVictim != nTowerRewardGoldPerPlayer )
          v8 = v10;
      }
    }
    if ( v8 != 0 )
    {
      v32 = 0;
      v33 = (pVictim->m_iTeamNum.m_Value == 2) + 2;
      nTowerRewardGoldPerPlayerc = (*(pVictim->_vptr_IHandleEntity + 410))(pVictim, 0);
      do
      {
        if ( CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v32) == v33
          && v32 != nBountyPlayerID
          && CDOTAHeroList::GiveGold(
               this,
               v32,
               nTowerRewardGoldPerPlayerc,
               0,
               EDOTA_ModifyGold_Reason::DOTA_ModifyGold_CourierKill) )
        {
          CDOTAHeroList::ShowGoldOverhead(this, v32, nTowerRewardGoldPerPlayerc, 0);
          if ( v32 != (*(pKiller->_vptr_IHandleEntity + 414))(pKiller) )
          {
            v34 = (*(pKiller->_vptr_IHandleEntity + 414))(pKiller);
            CDOTA_CombatLog::AddAlliedGoldEvent(&g_DOTACombatLog, v34, nTowerRewardGoldPerPlayerc);
          }
        }
        ++v32;
      }
      while ( v32 != 64 );
    }
    m_iUnitType = pVictim->m_iUnitType;
  }
  if ( (m_iUnitType & 4) != 0 )
  {
    m_Value = pVictim->m_iTeamNum.m_Value;
    v12 = pVictim->m_iCurrentLevel.m_Value;
    bDenya = m_Value == pKiller->m_iTeamNum.m_Value;
    switch ( v12 )
    {
      case 1:
        nTowerRewardGoldPerPlayera = m_Value != pKiller->m_iTeamNum.m_Value ? 160 : 80;
        break;
      case 2:
        v39 = 100;
        if ( m_Value != pKiller->m_iTeamNum.m_Value )
          v39 = 200;
        nTowerRewardGoldPerPlayera = v39;
        break;
      case 3:
        v13 = 120;
        if ( m_Value != pKiller->m_iTeamNum.m_Value )
          v13 = 240;
        nTowerRewardGoldPerPlayera = v13;
        break;
      case 4:
        v38 = 140;
        if ( m_Value != pKiller->m_iTeamNum.m_Value )
          v38 = 280;
        nTowerRewardGoldPerPlayera = v38;
        break;
      default:
        nTowerRewardGoldPerPlayera = 0;
        break;
    }
    v14 = 0;
    v15 = (m_Value == 2) + 2;
    while ( CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v14) == v15 )
    {
      if ( v14 == nBountyPlayerID )
      {
LABEL_102:
        nBarracksRewardGoldPerPlayera = nTowerRewardGoldPerPlayera + RandomInt(150, 250);
        if ( CDOTAHeroList::GiveGold(
               this,
               nBountyPlayerID,
               nBarracksRewardGoldPerPlayera,
               1,
               EDOTA_ModifyGold_Reason::DOTA_ModifyGold_Building) )
        {
          CDOTAHeroList::ShowGoldOverhead(this, nBountyPlayerID, nBarracksRewardGoldPerPlayera, 1);
        }
        goto LABEL_24;
      }
      if ( CDOTAHeroList::GiveGold(
             this,
             v14,
             nTowerRewardGoldPerPlayera,
             1,
             EDOTA_ModifyGold_Reason::DOTA_ModifyGold_Building) )
      {
        CDOTAHeroList::ShowGoldOverhead(this, v14, nTowerRewardGoldPerPlayera, 1);
        if ( v14 == (*(pKiller->_vptr_IHandleEntity + 414))(pKiller) )
          break;
        ++v14;
        v16 = (*(pKiller->_vptr_IHandleEntity + 414))(pKiller);
        CDOTA_CombatLog::AddAlliedGoldEvent(&g_DOTACombatLog, v16, nTowerRewardGoldPerPlayera);
        if ( v14 == 64 )
        {
LABEL_30:
          GlobalTeam = GetGlobalTeam(v15);
          v18 = GlobalTeam;
          if ( GlobalTeam != 0 )
          {
            v19 = LODWORD(GlobalTeam[1].m_hPrivateScope.m_hScope) + 1;
            (*(GlobalTeam->_vptr_IHandleEntity + 22))(GlobalTeam, 992, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            LODWORD(v18[1].m_hPrivateScope.m_hScope) = v19;
          }
          m_nControllingPlayerID = (*(pKiller->_vptr_IHandleEntity + 414))(pKiller);
          if ( pKiller->m_bIsIllusion.m_Value )
            m_nControllingPlayerID = pKiller->m_nControllingPlayerID;
          if ( bDenya )
          {
            SendChatEventMessage(
              DOTA_CHAT_MESSAGE::CHAT_MESSAGE_TOWER_DENY,
              nTowerRewardGoldPerPlayera,
              m_nControllingPlayerID,
              0);
          }
          else if ( m_nControllingPlayerID == -1 )
          {
            SendChatEventMessage(DOTA_CHAT_MESSAGE::CHAT_MESSAGE_TOWER_KILL, v15, 0);
          }
          else
          {
            SendChatEventMessage(DOTA_CHAT_MESSAGE::CHAT_MESSAGE_TOWER_KILL, v15, m_nControllingPlayerID, 0);
          }
          return;
        }
      }
      else
      {
LABEL_24:
        if ( ++v14 == 64 )
          goto LABEL_30;
      }
    }
    if ( v14 == nBountyPlayerID )
      goto LABEL_102;
    goto LABEL_24;
  }
  if ( (m_iUnitType & 0x40) == 0 )
    goto LABEL_50;
  m_pAsString = "";
  if ( pVictim->m_iszUnitName.m_Value.u.m_Id != 0 )
    m_pAsString = pVictim->m_iszUnitName.m_Value.u.m_pAsString;
  nBarracksRewardGoldPerPlayer = V_stristr_fast(m_pAsString, "range") == 0 ? 275 : 225;
  v22 = 0;
  nTowerRewardGoldPerPlayerb = (pVictim->m_iTeamNum.m_Value == 2) + 2;
  do
  {
    while ( 1 )
    {
      if ( CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v22) != nTowerRewardGoldPerPlayerb )
      {
LABEL_42:
        if ( v22 == nBountyPlayerID )
          goto LABEL_104;
        goto LABEL_43;
      }
      if ( v22 == nBountyPlayerID )
      {
LABEL_104:
        v40 = nBarracksRewardGoldPerPlayer + RandomInt(100, 150);
        if ( CDOTAHeroList::GiveGold(this, nBountyPlayerID, v40, 1, EDOTA_ModifyGold_Reason::DOTA_ModifyGold_Building) )
          CDOTAHeroList::ShowGoldOverhead(this, nBountyPlayerID, v40, 1);
        goto LABEL_43;
      }
      if ( CDOTAHeroList::GiveGold(
             this,
             v22,
             nBarracksRewardGoldPerPlayer,
             1,
             EDOTA_ModifyGold_Reason::DOTA_ModifyGold_Building) )
      {
        break;
      }
LABEL_43:
      if ( ++v22 == 64 )
        goto LABEL_49;
    }
    CDOTAHeroList::ShowGoldOverhead(this, v22, nBarracksRewardGoldPerPlayer, 1);
    if ( v22 == (*(pKiller->_vptr_IHandleEntity + 414))(pKiller) )
      goto LABEL_42;
    ++v22;
    v23 = (*(pKiller->_vptr_IHandleEntity + 414))(pKiller);
    CDOTA_CombatLog::AddAlliedGoldEvent(&g_DOTACombatLog, v23, nBarracksRewardGoldPerPlayer);
  }
  while ( v22 != 64 );
LABEL_49:
  m_iUnitType = pVictim->m_iUnitType;
LABEL_50:
  if ( (m_iUnitType & 0x10) == 0 )
    goto LABEL_58;
  v24 = pVictim->m_pEntity->m_designerName.u.m_pAsString;
  if ( v24 == 0 || v24 != "npc_dota_healer" && strcmp("npc_dota_healer", v24) != 0 )
  {
LABEL_52:
    if ( pVictim->m_bIsDOTANPC && (m_iUnitType & 0x14) != 0 && LOBYTE(pVictim[1].m_CScriptComponent) != 0 )
    {
      v25 = (*(pKiller->_vptr_IHandleEntity + 414))(pKiller);
      if ( pKiller->m_bIsIllusion.m_Value )
        v25 = pKiller->m_nControllingPlayerID;
      SendChatEventMessage(
        DOTA_CHAT_MESSAGE::CHAT_MESSAGE_EFFIGY_KILL,
        0,
        HIDWORD(pVictim[1].m_NetworkTransmitComponent.m_pChangeChangeAccessorFieldPathIndexInfo),
        v25,
        0);
    }
    goto LABEL_58;
  }
  v35 = 0;
  v36 = (pVictim->m_iTeamNum.m_Value == 2) + 2;
  while ( 2 )
  {
    while ( 2 )
    {
      if ( CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v35) != v36 )
        goto LABEL_81;
      if ( v35 == nBountyPlayerID )
      {
LABEL_107:
        if ( CDOTAHeroList::GiveGold(this, nBountyPlayerID, 150, 1, EDOTA_ModifyGold_Reason::DOTA_ModifyGold_Building) )
          CDOTAHeroList::ShowGoldOverhead(this, nBountyPlayerID, 150, 1);
LABEL_82:
        if ( ++v35 == 64 )
          goto LABEL_88;
        continue;
      }
      break;
    }
    if ( !CDOTAHeroList::GiveGold(this, v35, 150, 1, EDOTA_ModifyGold_Reason::DOTA_ModifyGold_Building) )
      goto LABEL_82;
    CDOTAHeroList::ShowGoldOverhead(this, v35, 150, 1);
    if ( v35 == (*(pKiller->_vptr_IHandleEntity + 414))(pKiller) )
    {
LABEL_81:
      if ( v35 != nBountyPlayerID )
        goto LABEL_82;
      goto LABEL_107;
    }
    ++v35;
    v37 = (*(pKiller->_vptr_IHandleEntity + 414))(pKiller);
    CDOTA_CombatLog::AddAlliedGoldEvent(&g_DOTACombatLog, v37, 150);
    if ( v35 != 64 )
      continue;
    break;
  }
LABEL_88:
  m_iUnitType = pVictim->m_iUnitType;
  if ( (m_iUnitType & 0x10) != 0 )
    goto LABEL_52;
LABEL_58:
  if ( (*(pVictim->_vptr_IHandleEntity + 403))(pVictim) == 0 )
    return;
  v26 = pKiller->m_iTeamNum.m_Value;
  if ( (v26 - 6) > 7 && (v26 - 2) > 1 )
    return;
  for ( i = 0; i != 64; ++i )
  {
    while ( 1 )
    {
      if ( CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, i) == pKiller->m_iTeamNum.m_Value
        && CDOTAHeroList::GiveGold(this, i, 200, 1, EDOTA_ModifyGold_Reason::DOTA_ModifyGold_RoshanKill) )
      {
        CDOTAHeroList::ShowGoldOverhead(this, i, 200, 1);
        if ( i != (*(pKiller->_vptr_IHandleEntity + 414))(pKiller) )
          break;
      }
      if ( ++i == 64 )
        goto LABEL_66;
    }
    v28 = (*(pKiller->_vptr_IHandleEntity + 414))(pKiller);
    CDOTA_CombatLog::AddAlliedGoldEvent(&g_DOTACombatLog, v28, 200);
  }
LABEL_66:
  SendChatEventMessage(DOTA_CHAT_MESSAGE::CHAT_MESSAGE_ROSHAN_KILL, 200, pKiller->m_iTeamNum.m_Value, 0);
  CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
  v29 = "roshan_killed_good";
  if ( pKiller->m_iTeamNum.m_Value != 2 )
    v29 = "roshan_killed_bad";
  CResponseCriteriaSet::AppendCriteria(&criteria, "announce_event", v29, 1.0);
  if ( GetRoshanSpawner() != 0 )
    CResponseCriteriaSet::AppendCriteria(&criteria, "roshan_spawncount", 1.0, v30);
  CDOTAGamerules::QueueConceptForAllAnnouncers(g_pGameRules, 18, 0.5, &criteria, 5, 1);
  CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
  CRecipientFilter::CRecipientFilter(&filter);
  CRecipientFilter::AddAllPlayers(&filter);
  Team = CBaseEntity::GetTeam(pKiller);
  CRecipientFilter::RemoveRecipientsByTeam(&filter, Team);
  Gamerules_EmitSound("DOTAMusic_Stinger.009", &filter, 0);
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDOTAHeroList::DistributeFarmClaim  (line 1403, @0x0000000002921e70, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetAttackRange, GetDistanceToEntity, GetInstance, GetModifier_Constant_Additive, GetModifier_Constant_Highest, GetTeamNumber, IsListeningToEvent, Length, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-, operator[], ~CUtlVector
// calls: CDOTA_PlayerResource::AddClaimedFarm, CDOTA_PlayerResource::IncrementClaimedMisses, CDOTA_PlayerResource::AddAvailableTeamGold, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove, CEntityHandle::operator CEntityInstance*, CDOTA_PlayerResource::IncrementMisses, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTAHeroList::DistributeRewardsForKill
void __fastcall CDOTAHeroList::DistributeFarmClaim(
        CDOTAHeroList *const this,
        CDOTA_BaseNPC *pVictim,
        CDOTA_BaseNPC *pKiller,
        int nMidasGold)
{
  double v5; // xmm0_8
  float v6; // xmm1_4
  CDOTA_BaseNPC *v7; // rdx
  int m_nFarmClaimPlayerID; // ebx
  bool v9; // bl
  const Vector *AbsOrigin; // rax
  int v11; // r15d
  int v12; // r12d
  __int64 v13; // r13
  float Modifier_Constant_Additive_Internal; // xmm0_4
  __int64 v15; // rax
  __int64 v16; // rax
  float v17; // xmm0_4
  __int64 v18; // rax
  float v19; // xmm0_4
  const Vector *v20; // r15
  const Vector *v21; // rax
  CEntityInstance *v22; // rax
  CEntityInstance *v23; // rbx
  CDOTA_ModifierManager *p_m_worldGroupId; // r15
  __int64 m_hScope_high; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r12
  CEntityInstance *v29; // rax
  CEntityInstance *v30; // rbx
  float v31; // [rsp+20h] [rbp-68h]
  float Modifier_Constant_Highest_Internal; // [rsp+24h] [rbp-64h]
  float v35; // [rsp+28h] [rbp-60h]
  float v36; // [rsp+28h] [rbp-60h]
  float v37; // [rsp+28h] [rbp-60h]
  float v38; // [rsp+28h] [rbp-60h]
  float m_hScope_low; // [rsp+28h] [rbp-60h]
  int v40; // [rsp+30h] [rbp-58h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+38h] [rbp-50h]

  if ( pKiller == 0 || pVictim == 0 || (pVictim->m_iUnitType & 0x10) != 0 )
    return;
  v5 = (*(pVictim->_vptr_IHandleEntity + 411))(pVictim);
  v7 = pKiller;
  v31 = nMidasGold + *&v5;
  if ( (pVictim->m_iUnitType & 0x400) != 0 )
  {
    CDOTA_PlayerResource::AddAvailableTeamGold(g_pDOTAPlayerResource, v31, v6, pVictim->m_iTeamNum.m_Value);
    v7 = pKiller;
  }
  m_nFarmClaimPlayerID = pVictim->m_nFarmClaimPlayerID;
  if ( m_nFarmClaimPlayerID != -1 )
  {
    v9 = m_nFarmClaimPlayerID == (*(v7->_vptr_IHandleEntity + 414))(v7);
    CDOTA_PlayerResource::AddClaimedFarm(g_pDOTAPlayerResource, pVictim->m_nFarmClaimPlayerID, v31, v9);
    if ( !v9 )
      CDOTA_PlayerResource::IncrementClaimedMisses(g_pDOTAPlayerResource, pVictim->m_nFarmClaimPlayerID);
    return;
  }
  v40 = 0;
  *&entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(pVictim);
  FindUnitsInRadius(pVictim->m_iTeamNum.m_Value, AbsOrigin, pVictim, 750.0, &v40, 2, 1, 270416, 0, 0);
  v11 = v40;
  v12 = v40 - 1;
  if ( v40 - 1 < 0 )
    goto LABEL_46;
  v13 = 4LL * v12;
  do
  {
    v22 = CEntityHandle::operator CEntityInstance *((*&entities.m_Size + v13));
    v23 = v22;
    if ( v22 == 0 || BYTE3(v22[7]._vptr_IHandleEntity) == 0 || (v22[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
      goto LABEL_26;
    p_m_worldGroupId = &v22[64].m_worldGroupId;
    m_hScope_high = HIBYTE(v22[67].m_hPrivateScope.m_hScope);
    if ( m_hScope_high == 0xFF )
    {
      Modifier_Constant_Highest_Internal = 0.0;
    }
    else if ( *(*&v23[65].m_worldGroupId.m_nHashCode + 24 * m_hScope_high) <= 0 )
    {
      Modifier_Constant_Highest_Internal = 0.0;
    }
    else
    {
      Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                             p_m_worldGroupId,
                                             modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                                             &CModifierParams::s_Default);
    }
    v26 = BYTE5(v23[67].m_hPrivateScope.m_hScope);
    m_hScope_low = SLODWORD(v23[47].m_hPrivateScope.m_hScope);
    if ( v26 == 0xFF || *(*&v23[65].m_worldGroupId.m_nHashCode + 24 * v26) <= 0 )
      Modifier_Constant_Additive_Internal = 0.0;
    else
      Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                              p_m_worldGroupId,
                                              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                                              &CModifierParams::s_Default);
    v15 = BYTE6(v23[67].m_hPrivateScope.m_hScope);
    v35 = Modifier_Constant_Additive_Internal + m_hScope_low;
    if ( v15 == 0xFF || *(*&v23[65].m_worldGroupId.m_nHashCode + 24 * v15) <= 0 )
    {
      if ( Modifier_Constant_Highest_Internal > (v35 + 0.0) )
      {
LABEL_35:
        v27 = HIBYTE(v23[67].m_hPrivateScope.m_hScope);
        if ( v27 == 0xFF )
        {
          v38 = 300.0;
        }
        else if ( *(*&v23[65].m_worldGroupId.m_nHashCode + 24 * v27) <= 0 )
        {
          v38 = 300.0;
        }
        else
        {
          v38 = (0.66600001
               * CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                   p_m_worldGroupId,
                   modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                   &CModifierParams::s_Default))
              + 300.0;
        }
        goto LABEL_24;
      }
    }
    else if ( Modifier_Constant_Highest_Internal > (CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                                      p_m_worldGroupId,
                                                      modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
                                                      &CModifierParams::s_Default)
                                                  + v35) )
    {
      goto LABEL_35;
    }
    v16 = BYTE5(v23[67].m_hPrivateScope.m_hScope);
    v36 = SLODWORD(v23[47].m_hPrivateScope.m_hScope);
    if ( v16 == 0xFF || *(*&v23[65].m_worldGroupId.m_nHashCode + 24 * v16) <= 0 )
      v17 = 0.0;
    else
      v17 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              p_m_worldGroupId,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
              &CModifierParams::s_Default);
    v18 = BYTE6(v23[67].m_hPrivateScope.m_hScope);
    v37 = v17 + v36;
    if ( v18 == 0xFF || *(*&v23[65].m_worldGroupId.m_nHashCode + 24 * v18) <= 0 )
      v19 = 0.0;
    else
      v19 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
              p_m_worldGroupId,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
              &CModifierParams::s_Default);
    v38 = (0.66600001 * (v19 + v37)) + 300.0;
LABEL_24:
    v20 = CBaseEntity::GetAbsOrigin(pVictim);
    v21 = CBaseEntity::GetAbsOrigin(v23);
    if ( fsqrt(
           (((v21->x - v20->x) * (v21->x - v20->x)) + ((v21->y - v20->y) * (v21->y - v20->y)))
         + ((v21->z - v20->z) * (v21->z - v20->z))) > v38 )
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&v40, v12);
LABEL_26:
    --v12;
    v13 -= 4;
  }
  while ( v12 != -1 );
  v11 = v40;
LABEL_46:
  if ( v11 > 0 )
  {
    v28 = 0;
    do
    {
      v29 = CEntityHandle::operator CEntityInstance *((*&entities.m_Size + v28));
      v30 = v29;
      if ( v29 != 0 && BYTE3(v29[7]._vptr_IHandleEntity) != 0 && (v29[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
      {
        CDOTA_PlayerResource::AddClaimedFarm(g_pDOTAPlayerResource, v29[100]._vptr_IHandleEntity, v31 / v11, 0);
        CDOTA_PlayerResource::IncrementMisses(g_pDOTAPlayerResource, v30[100]._vptr_IHandleEntity);
      }
      v28 += 4;
    }
    while ( v28 != 4LL * (v11 - 1) + 4 );
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&v40);
}


// CDOTAHeroList::GiveAdditionalAssists  (line 1464, @0x0000000002927400, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, GetRecentModifierPlayerID, HasElement, IsRecentBuffer, IsRecentDebuffer, ToDOTABaseNPCHero, end, ~CUtlVector
// calls: CDOTA_BaseNPC_Hero::IsRecentAttacker, CDOTA_PlayerResource::IncrementAssists, CDOTA_PlayerResource::GetObserverWardsPlaced, CDOTA_PlayerResource::GetLastHits, CDOTA_PlayerResource::GetXPPerMin, CDOTA_PlayerResource::GetGoldPerMin, CDOTA_PlayerResource::GetAssists, CDOTA_PlayerResource::GetDeaths, CDOTA_PlayerResource::GetKills, CDOTA_CombatLog::AddPlayerStatsEvent, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, CUtlVectorBase<int, CUtlMemory<int, int> >::Find (14 total)
// callers: CDOTAHeroList::DistributeRewardsForKill
void __fastcall CDOTAHeroList::GiveAdditionalAssists(
        CDOTAHeroList *const this,
        CDOTA_BaseNPC *pVictim,
        CDOTA_BaseNPC *pKiller)
{
  __int64 v3; // rcx
  CDOTA_BaseNPC_Hero *v5; // r13
  __int64 v6; // rbx
  int i; // r12d
  CDOTA_BaseNPC *m_pMemory; // r15
  bool IsRecentAttacker; // al
  CDOTA_BaseNPC *v10; // rax
  __int64 v11; // rbx
  int j; // r12d
  CDOTA_BaseNPC *m_Id; // r15
  bool v14; // al
  CDOTA_BaseNPC *v15; // rax
  int *v16; // r13
  int v17; // ebx
  int v18; // eax
  int nWardsPlaced; // r15d
  int Kills; // eax
  int *__for_end; // [rsp+18h] [rbp-88h]
  int nDeaths; // [rsp+24h] [rbp-7Ch]
  int nAssists; // [rsp+28h] [rbp-78h]
  CDOTA_BaseNPC *flGPM; // [rsp+30h] [rbp-70h]
  float flGPMa; // [rsp+30h] [rbp-70h]
  int flXPM; // [rsp+38h] [rbp-68h]
  int flXPMa; // [rsp+38h] [rbp-68h]
  float flXPMb; // [rsp+38h] [rbp-68h]
  unsigned int nLastHits; // [rsp+3Ch] [rbp-64h]
  unsigned int nLastHitsa; // [rsp+3Ch] [rbp-64h]
  int nLastHitsb; // [rsp+3Ch] [rbp-64h]
  int nAssistCandidatePlayerID; // [rsp+4Ch] [rbp-54h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > vecAssistPlayerIDs; // [rsp+50h] [rbp-50h] BYREF

  if ( pVictim != 0 && (pVictim->m_iUnitType & 1) != 0 )
    v5 = pVictim;
  else
    v5 = 0;
  if ( pKiller != 0 && (pKiller->m_iUnitType & 1) != 0 )
    flGPM = pKiller;
  else
    flGPM = 0;
  vecAssistPlayerIDs.m_Size = 0;
  vecAssistPlayerIDs.m_Memory.m_pMemory = 0;
  vecAssistPlayerIDs.m_Memory.m_nAllocationCount = 0;
  vecAssistPlayerIDs.m_Memory.m_nGrowSize = 0;
  if ( v5 != 0 )
  {
    flXPM = v5->m_vecRecentModifiers.m_Size;
    if ( flXPM > 0 )
    {
      v6 = 0;
      for ( i = 0; i < flXPM; ++i )
      {
        while ( 1 )
        {
          m_pMemory = v5->m_vecRecentModifiers.m_Memory.m_pMemory;
          nAssistCandidatePlayerID = *(&m_pMemory->_vptr_IHandleEntity + v6);
          nLastHits = nAssistCandidatePlayerID;
          IsRecentAttacker = CDOTA_BaseNPC_Hero::IsRecentAttacker(v5, nAssistCandidatePlayerID);
          v3 = nLastHits;
          if ( !IsRecentAttacker )
          {
            pKiller = (m_pMemory + 16 * flXPM);
            if ( m_pMemory != pKiller )
            {
              v10 = m_pMemory;
              while ( BYTE4(v10->_vptr_IHandleEntity) != 0 || nLastHits != LODWORD(v10->_vptr_IHandleEntity) )
              {
                v10 = (v10 + 16);
                if ( pKiller == v10 )
                  goto LABEL_16;
              }
              if ( CUtlVectorBase<int,CUtlMemory<int,int>>::Find(&vecAssistPlayerIDs, &nAssistCandidatePlayerID) < 0 )
                break;
            }
          }
LABEL_16:
          ++i;
          v6 += 16;
          if ( i >= flXPM )
            goto LABEL_17;
        }
        CUtlVectorBase<int,CUtlMemory<int,int>>::AddToTail(&vecAssistPlayerIDs, &nAssistCandidatePlayerID);
        v6 += 16;
        flXPM = v5->m_vecRecentModifiers.m_Size;
      }
    }
LABEL_17:
    if ( flGPM != 0 )
    {
      flXPMa = flGPM[1].m_ResponseContexts.m_Memory.m_nAllocationCount;
      if ( flXPMa > 0 )
      {
        v11 = 0;
        for ( j = 0; j < flXPMa; ++j )
        {
          while ( 1 )
          {
            m_Id = flGPM[1].m_iszResponseContext.u.m_Id;
            nAssistCandidatePlayerID = *(&m_Id->_vptr_IHandleEntity + v11);
            nLastHitsa = nAssistCandidatePlayerID;
            v14 = CDOTA_BaseNPC_Hero::IsRecentAttacker(v5, nAssistCandidatePlayerID);
            v3 = nLastHitsa;
            if ( !v14 )
            {
              pKiller = (m_Id + 16 * flXPMa);
              if ( m_Id != pKiller )
              {
                v15 = m_Id;
                while ( BYTE4(v15->_vptr_IHandleEntity) == 0 || nLastHitsa != LODWORD(v15->_vptr_IHandleEntity) )
                {
                  v15 = (v15 + 16);
                  if ( pKiller == v15 )
                    goto LABEL_26;
                }
                if ( CUtlVectorBase<int,CUtlMemory<int,int>>::Find(&vecAssistPlayerIDs, &nAssistCandidatePlayerID) < 0 )
                  break;
              }
            }
LABEL_26:
            ++j;
            v11 += 16;
            if ( j >= flXPMa )
              goto LABEL_27;
          }
          CUtlVectorBase<int,CUtlMemory<int,int>>::AddToTail(&vecAssistPlayerIDs, &nAssistCandidatePlayerID);
          v11 += 16;
          flXPMa = flGPM[1].m_ResponseContexts.m_Memory.m_nAllocationCount;
        }
      }
    }
LABEL_27:
    v16 = vecAssistPlayerIDs.m_Memory.m_pMemory;
    __for_end = &vecAssistPlayerIDs.m_Memory.m_pMemory[vecAssistPlayerIDs.m_Size];
    if ( vecAssistPlayerIDs.m_Memory.m_pMemory != __for_end )
    {
      do
      {
        v17 = *v16;
        v18 = (*(pVictim->_vptr_IHandleEntity + 414))(pVictim, pVictim, pKiller, v3);
        CDOTA_PlayerResource::IncrementAssists(g_pDOTAPlayerResource, v17, v18);
        nWardsPlaced = CDOTA_PlayerResource::GetObserverWardsPlaced(g_pDOTAPlayerResource, v17);
        nLastHitsb = CDOTA_PlayerResource::GetLastHits(g_pDOTAPlayerResource, v17);
        flXPMb = CDOTA_PlayerResource::GetXPPerMin(g_pDOTAPlayerResource, v17);
        flGPMa = CDOTA_PlayerResource::GetGoldPerMin(g_pDOTAPlayerResource, v17);
        nAssists = CDOTA_PlayerResource::GetAssists(g_pDOTAPlayerResource, v17);
        nDeaths = CDOTA_PlayerResource::GetDeaths(g_pDOTAPlayerResource, v17);
        Kills = CDOTA_PlayerResource::GetKills(g_pDOTAPlayerResource, v17);
        CDOTA_CombatLog::AddPlayerStatsEvent(
          &g_DOTACombatLog,
          v17,
          Kills,
          nDeaths,
          nAssists,
          flGPMa,
          flXPMb,
          nLastHitsb,
          nWardsPlaced);
        ++v16;
      }
      while ( __for_end != v16 );
    }
    CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&vecAssistPlayerIDs);
  }
  else
  {
    CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&vecAssistPlayerIDs);
  }
}


// CDOTAHeroList::GiveExperience  (line 1514, @0x000000000294a260, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, ClearLastHitStreak, CopyConstruct<CDOTA_BaseNPC_Hero*>, Element, FastSqrt, Find, Get, GetInstance, GetModifier_Constant_First, GetOwnerEntity, GetTeamNumber, GrowMemory, IncrementNearbyCreepDeaths, IsListeningToEvent, IsPlayerTeam, IsRealHero, IsTempestDouble, Length2D, Purge, RemoveAll, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAPlayer, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC_Hero::PerformAutoTaunt, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlMemory<CDOTA_BaseNPC_Hero*, int>::Grow, CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>, 64ul>::CUtlVectorFixedGrowableCompat, CDOTA_ModifierManager::GetModifier_Constant_First, CUtlVectorBase<CDOTA_BaseNPC_Hero*, CUtlMemory<CDOTA_BaseNPC_Hero*, int> >::AddToTail, ToDOTABaseNPCRealHero, CDOTAHeroList::GiveXP, CDOTA_PlayerResource::ClearLastHitStreak (21 total)
// callers: CDOTAHeroList::DistributeRewardsForKill
void __fastcall CDOTAHeroList::GiveExperience(
        CDOTAHeroList *const this,
        CDOTA_BaseNPC_Hero *pVictim,
        CDOTA_BaseNPC_Hero *pKiller,
        float flMidasXPMultiplier,
        float a5)
{
  __int64 m_iUnitType; // rdx
  unsigned __int8 m_Value; // cl
  int v8; // eax
  int v9; // eax
  CEntityInstance *v10; // rax
  const Vector *AbsOrigin; // rax
  __int64 v12; // r13
  int v13; // r12d
  CDOTA_BaseNPC_Hero **v14; // rax
  CEntityInstance *v15; // rax
  CDOTA_BaseNPC_Hero *v16; // rbx
  int m_Size; // eax
  const Vector *v18; // rax
  __int64 v19; // r13
  int v20; // r12d
  CDOTA_BaseNPC_Hero **v21; // rax
  CEntityInstance *v22; // rax
  CDOTA_BaseNPC_Hero *v23; // rbx
  int v24; // eax
  int v25; // ebx
  const Vector *v26; // rax
  CDOTA_BaseNPC_Hero *v27; // rax
  CDOTA_BaseNPC_Hero *v28; // rax
  int v29; // ebx
  CDOTA_BaseNPC_Hero **v30; // rdx
  int v31; // eax
  float v32; // xmm0_4
  unsigned __int64 v33; // r13
  float v34; // xmm0_4
  CDOTA_BaseNPC_Hero *v35; // r12
  __int64 v36; // r12
  int i; // r13d
  CEntityInstance *v38; // rax
  CDOTA_BaseNPC_Hero *v39; // rbx
  __int64 v40; // rax
  int v41; // eax
  CDOTA_BaseNPC_Hero **v42; // rax
  unsigned __int64 v43; // r12
  CDOTA_BaseNPC_Hero *v44; // r13
  float v45; // xmm0_4
  IHandleEntity *HandleEntity; // rax
  const Vector *v47; // rbx
  const Vector *v48; // rax
  float v49; // xmm1_4
  unsigned __int64 v50; // r12
  CDOTA_BaseNPC_Hero *v51; // r13
  float v52; // xmm0_4
  __int64 v53; // rax
  CDOTAPlayer *v54; // rbx
  CDOTA_BaseNPC_Hero *AssignedHero; // rax
  CDOTA_BaseNPC_Hero *v56; // rbx
  int v57; // eax
  CBaseEntity *v58; // rax
  CDOTA_BaseNPC_Hero *v59; // rax
  float flXPPerHero; // [rsp+40h] [rbp-1A0h]
  __int64 flXPPerHeroa; // [rsp+40h] [rbp-1A0h]
  __int64 flXPPerHerob; // [rsp+40h] [rbp-1A0h]
  CDOTA_BaseNPC_Hero *pKillera; // [rsp+50h] [rbp-190h]
  int pKillerb; // [rsp+50h] [rbp-190h]
  int pKillerc; // [rsp+50h] [rbp-190h]
  int pKillerd; // [rsp+50h] [rbp-190h]
  int pKillere; // [rsp+50h] [rbp-190h]
  int v70; // [rsp+58h] [rbp-188h]
  EDOTA_ModifyXP_Reason nReason; // [rsp+5Ch] [rbp-184h]
  CEntityHandle v72; // [rsp+60h] [rbp-180h] BYREF
  CDOTA_BaseNPC_Hero *pKillerHero; // [rsp+68h] [rbp-178h] BYREF
  CUtlVector<CDOTA_BaseNPC_Hero*,CUtlMemory<CDOTA_BaseNPC_Hero*,int> > xpSharingHeroes; // [rsp+70h] [rbp-170h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> entities; // [rsp+90h] [rbp-150h] BYREF
  unsigned __int64 v76; // [rsp+1A8h] [rbp-38h]

  v76 = __readfsqword(0x28u);
  pKillera = pKiller;
  if ( pKiller == 0 )
    return;
  if ( (pKiller->m_iUnitType & 1) != 0 && !pKiller->m_bIsIllusion.m_Value )
    goto LABEL_4;
  m_iUnitType = pVictim->m_iUnitType;
  if ( (m_iUnitType & 1) != 0 && !pVictim->m_bIsIllusion.m_Value )
  {
    v9 = (*(pKillera->_vptr_IHandleEntity + 414))(pKillera, pVictim, m_iUnitType, 0);
    CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(&xpSharingHeroes, g_pDOTAPlayerResource, v9);
    v10 = CEntityHandle::operator CEntityInstance *(&xpSharingHeroes);
    if ( v10 == 0 || BYTE3(v10[7]._vptr_IHandleEntity) == 0 )
    {
LABEL_4:
      LODWORD(m_iUnitType) = pVictim->m_iUnitType;
      goto LABEL_5;
    }
    LODWORD(m_iUnitType) = pVictim->m_iUnitType;
    pKillera = v10;
  }
LABEL_5:
  nReason = EDOTA_ModifyXP_Reason::DOTA_ModifyXP_RoshanKill;
  if ( (m_iUnitType & 0x800) == 0 )
  {
    if ( (m_iUnitType & 1) == 0 || pVictim->m_bIsIllusion.m_Value )
      nReason = (m_iUnitType >> 6) & 2;
    else
      nReason = EDOTA_ModifyXP_Reason::DOTA_ModifyXP_HeroKill;
  }
  m_Value = pVictim->m_iTeamNum.m_Value;
  v8 = pKillera->m_iTeamNum.m_Value;
  if ( m_Value == v8 )
  {
    if ( (m_iUnitType & 1) != 0
      && !pVictim->m_bIsIllusion.m_Value
      && pVictim != pKillera
      && (pKillera->m_iUnitType & 1) != 0 )
    {
      CDOTA_BaseNPC_Hero::PerformAutoTaunt(pKillera, COERCE_DOUBLE(1065353216), a5, 0);
    }
    if ( (*(pVictim->_vptr_IHandleEntity + 414))(pVictim) == -1 )
    {
      entities.m_Size = 0;
      entities.m_Memory.m_nAllocationCount = 64;
      entities.m_Memory.m_nGrowSize = 0x80000000;
      entities.m_Memory.m_pMemory = &entities.m_FixedMemory;
      AbsOrigin = CBaseEntity::GetAbsOrigin(pVictim);
      FindUnitsInRadius(pVictim->m_iTeamNum.m_Value, AbsOrigin, pVictim, 1300.0, &entities, 2, 1, 270424, 0, 0);
      xpSharingHeroes.m_Size = 0;
      xpSharingHeroes.m_Memory.m_pMemory = 0;
      xpSharingHeroes.m_Memory.m_nAllocationCount = 0;
      xpSharingHeroes.m_Memory.m_nGrowSize = 0;
      if ( entities.m_Size > 0 )
      {
        v12 = 0;
        v13 = 0;
        do
        {
          v15 = CEntityHandle::operator CEntityInstance *(&entities.m_Memory.m_pMemory[v12]);
          v16 = v15;
          if ( v15 != 0
            && BYTE3(v15[7]._vptr_IHandleEntity) != 0
            && (v15[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
            && (*(v15->_vptr_IHandleEntity + 408))(v15) != 0 )
          {
            m_Size = xpSharingHeroes.m_Size;
            pKillerb = xpSharingHeroes.m_Size;
            if ( xpSharingHeroes.m_Size == xpSharingHeroes.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CDOTA_BaseNPC_Hero *,int>::Grow(&xpSharingHeroes.m_Memory, 1);
              m_Size = xpSharingHeroes.m_Size;
            }
            xpSharingHeroes.m_Size = m_Size + 1;
            v14 = &xpSharingHeroes.m_Memory.m_pMemory[pKillerb];
            if ( v14 != 0 )
              *v14 = v16;
          }
          ++v13;
          ++v12;
        }
        while ( entities.m_Size > v13 );
        pKillerd = xpSharingHeroes.m_Size;
        if ( xpSharingHeroes.m_Size > 0 )
        {
          v43 = 0;
          flXPPerHeroa = 8LL * (xpSharingHeroes.m_Size - 1) + 8;
          do
          {
            v44 = xpSharingHeroes.m_Memory.m_pMemory[v43 / 8];
            v45 = (*(pVictim->_vptr_IHandleEntity + 409))(pVictim) * 0.5 / pKillerd;
            CDOTAHeroList::GiveXP(this, v44, v45, nReason);
            CDOTA_PlayerResource::ClearLastHitStreak(g_pDOTAPlayerResource, v44->m_iPlayerID.m_Value);
            CDOTA_PlayerResource::IncrementNearbyCreepDeaths(g_pDOTAPlayerResource, v44->m_iPlayerID.m_Value);
            v43 += 8LL;
          }
          while ( v43 != flXPPerHeroa );
        }
      }
      xpSharingHeroes.m_Size = 0;
      if ( (xpSharingHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CDOTA_BaseNPC_Hero *,int>::Purge(&xpSharingHeroes.m_Memory);
        if ( (xpSharingHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CDOTA_BaseNPC_Hero *,int>::Purge(&xpSharingHeroes.m_Memory);
      }
      goto LABEL_105;
    }
  }
  else if ( (m_iUnitType & 0x400) != 0 && v8 == 4 )
  {
    if ( (*(pVictim->_vptr_IHandleEntity + 414))(pVictim) == -1 )
    {
      CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul>::CUtlVectorFixedGrowableCompat(&entities, 0);
      v18 = CBaseEntity::GetAbsOrigin(pVictim);
      FindUnitsInRadius(pVictim->m_iTeamNum.m_Value, v18, pVictim, 1300.0, &entities, 2, 1, 270424, 0, 0);
      xpSharingHeroes.m_Size = 0;
      xpSharingHeroes.m_Memory.m_pMemory = 0;
      xpSharingHeroes.m_Memory.m_nAllocationCount = 0;
      xpSharingHeroes.m_Memory.m_nGrowSize = 0;
      if ( entities.m_Size > 0 )
      {
        v19 = 0;
        v20 = 0;
        do
        {
          v22 = CEntityHandle::operator CEntityInstance *(&entities.m_Memory.m_pMemory[v19]);
          v23 = v22;
          if ( v22 != 0
            && BYTE3(v22[7]._vptr_IHandleEntity) != 0
            && (v22[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
            && (*(v22->_vptr_IHandleEntity + 408))(v22) != 0 )
          {
            v24 = xpSharingHeroes.m_Size;
            pKillerc = xpSharingHeroes.m_Size;
            if ( xpSharingHeroes.m_Size == xpSharingHeroes.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CDOTA_BaseNPC_Hero *,int>::Grow(&xpSharingHeroes.m_Memory, 1);
              v24 = xpSharingHeroes.m_Size;
            }
            xpSharingHeroes.m_Size = v24 + 1;
            v21 = &xpSharingHeroes.m_Memory.m_pMemory[pKillerc];
            if ( v21 != 0 )
              *v21 = v23;
          }
          ++v20;
          ++v19;
        }
        while ( entities.m_Size > v20 );
      }
      pKillere = xpSharingHeroes.m_Size;
      if ( xpSharingHeroes.m_Size > 0 )
      {
        v50 = 0;
        flXPPerHerob = 8LL * (xpSharingHeroes.m_Size - 1) + 8;
        do
        {
          v51 = xpSharingHeroes.m_Memory.m_pMemory[v50 / 8];
          v52 = (*(pVictim->_vptr_IHandleEntity + 409))(pVictim) * 0.5 / pKillere;
          CDOTAHeroList::GiveXP(this, v51, v52, nReason);
          CDOTA_PlayerResource::ClearLastHitStreak(g_pDOTAPlayerResource, v51->m_iPlayerID.m_Value);
          CDOTA_PlayerResource::IncrementNearbyCreepDeaths(g_pDOTAPlayerResource, v51->m_iPlayerID.m_Value);
          v50 += 8LL;
        }
        while ( v50 != flXPPerHerob );
      }
      CUtlVectorBase<CDOTA_BaseNPC_Hero *,CUtlMemory<CDOTA_BaseNPC_Hero *,int>>::~CUtlVectorBase(&xpSharingHeroes);
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
    }
  }
  else
  {
    if ( (v8 - 6) <= 7 )
    {
      if ( pVictim->m_bIsIllusion.m_Value )
        return;
LABEL_53:
      v25 = 1;
      entities.m_Size = 0;
      entities.m_Memory.m_nAllocationCount = 64;
      entities.m_Memory.m_nGrowSize = 0x80000000;
      entities.m_Memory.m_pMemory = &entities.m_FixedMemory;
      if ( m_Value == 4 )
        v25 = (m_iUnitType & 0x800) == 0 ? 3 : 1;
      v26 = CBaseEntity::GetAbsOrigin(pVictim);
      FindUnitsInRadius(pKillera->m_iTeamNum.m_Value, v26, pVictim, 1300.0, &entities, v25, 1, 270424, 0, 0);
      xpSharingHeroes.m_Size = 0;
      xpSharingHeroes.m_Memory.m_pMemory = 0;
      xpSharingHeroes.m_Memory.m_nAllocationCount = 0;
      xpSharingHeroes.m_Memory.m_nGrowSize = 0;
      if ( flMidasXPMultiplier <= 1.0 )
      {
        v36 = 0;
        for ( i = 0; entities.m_Size > i; ++v36 )
        {
          v38 = CEntityHandle::operator CEntityInstance *(&entities.m_Memory.m_pMemory[v36]);
          v39 = v38;
          if ( v38 != 0
            && BYTE3(v38[7]._vptr_IHandleEntity) != 0
            && (v38[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
            && (*(v38->_vptr_IHandleEntity + 408))(v38) != 0 )
          {
            v40 = v39->m_ModifierManager.m_buffsForModifiers[166];
            if ( v40 == 0xFF
              || v39->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v40].m_Size <= 0
              || CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
                   &v39->m_ModifierManager,
                   modifierfunction::MODIFIER_PROPERTY_TEMPEST_DOUBLE,
                   &CModifierParams::s_Default) != 1.0 )
            {
              v41 = xpSharingHeroes.m_Size;
              v70 = xpSharingHeroes.m_Size;
              if ( xpSharingHeroes.m_Size == xpSharingHeroes.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CDOTA_BaseNPC_Hero *,int>::Grow(&xpSharingHeroes.m_Memory, 1);
                v41 = xpSharingHeroes.m_Size;
              }
              xpSharingHeroes.m_Size = v41 + 1;
              v42 = &xpSharingHeroes.m_Memory.m_pMemory[v70];
              if ( v42 != 0 )
                *v42 = v39;
            }
          }
          ++i;
        }
      }
      else if ( (pKillera->m_iUnitType & 1) == 0
             || pKillera->m_bIsIllusion.m_Value
             || CDOTA_ModifierManager::GetModifier_Constant_First(
                  &pKillera->m_ModifierManager,
                  modifierfunction::MODIFIER_PROPERTY_TEMPEST_DOUBLE,
                  &CModifierParams::s_Default) == 1.0 )
      {
        HandleEntity = CEntityHandle::GetHandleEntity(&pKillera->m_hOwnerEntity.m_Value);
        if ( HandleEntity != 0
          && BYTE3(HandleEntity[42]._vptr_IHandleEntity) != 0
          && (HandleEntity[261]._vptr_IHandleEntity & 1) != 0 )
        {
          pKillerHero = HandleEntity;
          v47 = CBaseEntity::GetAbsOrigin(pVictim);
          v48 = CBaseEntity::GetAbsOrigin(pKillerHero);
          v49 = v48->y - v47->y;
          if ( fsqrt(((v48->x - v47->x) * (v48->x - v47->x)) + (v49 * v49)) <= 1300.0 )
          {
            pKillera = pKillerHero;
            CUtlVectorBase<CDOTA_BaseNPC_Hero *,CUtlMemory<CDOTA_BaseNPC_Hero *,int>>::AddToTail(
              &xpSharingHeroes,
              &pKillerHero);
          }
        }
        else
        {
          pKillerHero = 0;
          if ( CDOTA_ModifierManager::GetModifier_Constant_First(
                 &pKillera->m_ModifierManager,
                 modifierfunction::MODIFIER_PROPERTY_TEMPEST_DOUBLE,
                 &CModifierParams::s_Default) == 1.0 )
          {
            v53 = (*(pKillera->_vptr_IHandleEntity + 413))(pKillera);
            v54 = v53;
            if ( v53 != 0 && (*(*v53 + 1120LL))(v53) != 0 )
            {
              AssignedHero = CDOTAPlayer::GetAssignedHero(v54);
              v56 = AssignedHero;
              if ( AssignedHero != 0 && (AssignedHero->m_iUnitType & 1) != 0 )
              {
                pKillerHero = AssignedHero;
                CUtlVectorBase<CDOTA_BaseNPC_Hero *,CUtlMemory<CDOTA_BaseNPC_Hero *,int>>::AddToTail(
                  &xpSharingHeroes,
                  &pKillerHero);
                pKillera = v56;
              }
            }
          }
        }
      }
      else
      {
        v27 = 0;
        if ( (pKillera->m_iUnitType & 1) != 0 )
          v27 = pKillera;
        pKillerHero = v27;
        CUtlVectorBase<CDOTA_BaseNPC_Hero *,CUtlMemory<CDOTA_BaseNPC_Hero *,int>>::AddToTail(
          &xpSharingHeroes,
          &pKillerHero);
      }
      if ( (pVictim->m_iUnitType & 1) != 0 )
      {
        v28 = ToDOTABaseNPCRealHero(pKillera);
        pKillerHero = v28;
        if ( v28 != 0 && (*(v28->_vptr_IHandleEntity + 408))(v28) != 0 )
        {
          if ( CDOTA_ModifierManager::GetModifier_Constant_First(
                 &pKillerHero->m_ModifierManager,
                 modifierfunction::MODIFIER_PROPERTY_TEMPEST_DOUBLE,
                 &CModifierParams::s_Default) != 1.0
            || (v57 = (*(pKillerHero->_vptr_IHandleEntity + 414))(pKillerHero),
                CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(&v72, g_pDOTAPlayerResource, v57),
                v58 = CEntityHandle::operator CEntityInstance *(&v72),
                v59 = ToDOTABaseNPCRealHero(v58),
                pKillerHero = v59,
                v59 == 0)
            || (*(v59->_vptr_IHandleEntity + 408))(v59) != 0 )
          {
            v29 = xpSharingHeroes.m_Size;
            if ( pKillerHero == 0 )
              goto LABEL_74;
            if ( xpSharingHeroes.m_Size > 0 )
            {
              if ( pKillerHero == *xpSharingHeroes.m_Memory.m_pMemory )
                goto LABEL_74;
              v30 = xpSharingHeroes.m_Memory.m_pMemory + 1;
              v31 = 0;
              while ( ++v31 != xpSharingHeroes.m_Size )
              {
                if ( pKillerHero == *v30++ )
                {
                  if ( v31 != -1 )
                    goto LABEL_74;
                  break;
                }
              }
            }
            CUtlVectorBase<CDOTA_BaseNPC_Hero *,CUtlMemory<CDOTA_BaseNPC_Hero *,int>>::AddToTail(
              &xpSharingHeroes,
              &pKillerHero);
          }
        }
      }
      v29 = xpSharingHeroes.m_Size;
LABEL_74:
      if ( v29 != 0 )
      {
        v32 = (*(pVictim->_vptr_IHandleEntity + 409))(pVictim);
        if ( (pVictim->m_nUnitState64.m_Value & 0x20000000) != 0
          && !pVictim->m_bIsSummoned.m_Value
          && flMidasXPMultiplier <= 1.0 )
        {
          v32 = v32 * 0.5;
        }
        flXPPerHero = v32 / v29;
        if ( v29 > 0 )
        {
          v33 = 0;
          do
          {
            v35 = xpSharingHeroes.m_Memory.m_pMemory[v33 / 8];
            if ( v35 == pKillera )
              v34 = flMidasXPMultiplier;
            else
              v34 = 1.0;
            CDOTAHeroList::GiveXP(this, xpSharingHeroes.m_Memory.m_pMemory[v33 / 8], v34 * flXPPerHero, nReason);
            if ( v35 != pKillera )
            {
              CDOTA_PlayerResource::ClearLastHitStreak(g_pDOTAPlayerResource, v35->m_iPlayerID.m_Value);
              CDOTA_PlayerResource::IncrementNearbyCreepDeaths(g_pDOTAPlayerResource, v35->m_iPlayerID.m_Value);
            }
            v33 += 8LL;
          }
          while ( v33 != 8LL * (v29 - 1) + 8 );
        }
        xpSharingHeroes.m_Size = 0;
        if ( (xpSharingHeroes.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
          goto LABEL_105;
        CUtlMemory<CDOTA_BaseNPC_Hero *,int>::Purge(&xpSharingHeroes.m_Memory);
        if ( (xpSharingHeroes.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
          goto LABEL_105;
      }
      else
      {
        xpSharingHeroes.m_Size = 0;
        if ( (xpSharingHeroes.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
          goto LABEL_105;
        CUtlMemory<CDOTA_BaseNPC_Hero *,int>::Purge(&xpSharingHeroes.m_Memory);
        if ( (xpSharingHeroes.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
          goto LABEL_105;
      }
      CUtlMemory<CDOTA_BaseNPC_Hero *,int>::Purge(&xpSharingHeroes.m_Memory);
LABEL_105:
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
      return;
    }
    if ( (v8 - 2) <= 1 && !pVictim->m_bIsIllusion.m_Value )
      goto LABEL_53;
  }
}


// CDOTAHeroList::GiveNearbyHeroExperienceBonus  (line 1770, @0x0000000002941b70, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, CopyConstruct<CDOTA_BaseNPC_Hero*>, DOTAGameRules, Element, Get, GetEntityIdentity, GetEntryIndex, GetGameMode, GetInstance, GetLevel, GetModifier_Constant_First, GetOpposingTeamNumber, GetTeamNumber, GrowMemory, IndexToIdentity, IsAddOnGame, IsListeningToEvent, IsTempestDouble, IsValid, LookupEntity, Purge, RemoveAll, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_PlayerResource::IsValidTeamPlayer, CDOTA_PlayerResource::GetTeam, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_ModifierManager::GetModifier_Constant_First_Internal, CDOTAHeroList::GiveXP, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CUtlMemory<CDOTA_BaseNPC_Hero*, int>::Grow, CUtlMemory<CDOTA_BaseNPC_Hero*, int>::Purge, __stack_chk_fail (14 total)
// callers: CDOTAHeroList::DistributeRewardsForKill
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTAHeroList::GiveNearbyHeroExperienceBonus(
        CDOTAHeroList *const this,
        CDOTA_BaseNPC *pVictim,
        CDOTA_BaseNPC *pKiller)
{
  int v5; // r15d
  int Team; // r14d
  int v7; // eax
  CEntityInstance *v8; // rax
  const Vector *AbsOrigin; // rax
  __int64 v10; // r12
  int v11; // ebx
  CHandle<CBaseEntity> *v12; // rdx
  uint32 m_Index; // eax
  __int16 v14; // cx
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CDOTA_BaseNPC_Hero *m_pInstance; // r13
  __int64 v18; // rax
  __int64 m_Size; // r14
  CDOTA_BaseNPC_Hero **v20; // rax
  int v21; // r12d
  int v22; // eax
  int v23; // eax
  unsigned __int64 v24; // rbx
  int v25; // r14d
  __int64 v26; // r13
  int v27; // eax
  CEntityInstance *v28; // rax
  float flXPFactor; // [rsp+20h] [rbp-1A0h]
  float flVictimXP; // [rsp+28h] [rbp-198h]
  int nVictimLevel; // [rsp+30h] [rbp-190h]
  int nVictimLevela; // [rsp+30h] [rbp-190h]
  float flEnemyTotalXP; // [rsp+34h] [rbp-18Ch]
  int flEnemyTotalXPa; // [rsp+34h] [rbp-18Ch]
  float flAlliedTotalXP; // [rsp+38h] [rbp-188h]
  int flAlliedTotalXPa; // [rsp+38h] [rbp-188h]
  double v38; // [rsp+48h] [rbp-178h]
  CUtlVector<CDOTA_BaseNPC_Hero*,CUtlMemory<CDOTA_BaseNPC_Hero*,int> > xpBonusHeroes; // [rsp+50h] [rbp-170h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> entities; // [rsp+70h] [rbp-150h] BYREF
  unsigned __int64 v41; // [rsp+188h] [rbp-38h]

  v41 = __readfsqword(0x28u);
  if ( pKiller == 0
    || (pVictim->m_iUnitType & 1) == 0
    || (pVictim->m_iTeamNum.m_Value == 2) + 2 != pKiller->m_iTeamNum.m_Value )
  {
    return;
  }
  v5 = 0;
  flAlliedTotalXP = 0.0;
  flEnemyTotalXP = 0.0;
  nVictimLevel = pVictim->m_iCurrentLevel.m_Value;
  flVictimXP = SLODWORD(pVictim[1].m_pfnUse.__pfn);
  do
  {
    while ( 1 )
    {
      if ( CDOTA_PlayerResource::IsValidTeamPlayer(g_pDOTAPlayerResource, v5) )
      {
        Team = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v5);
        v7 = (*(pVictim->_vptr_IHandleEntity + 414))(pVictim);
        if ( Team == CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v7) )
        {
          CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(&xpBonusHeroes, g_pDOTAPlayerResource, v5);
          v28 = CEntityHandle::operator CEntityInstance *(&xpBonusHeroes);
          if ( v28 != 0 && BYTE3(v28[7]._vptr_IHandleEntity) != 0 && (v28[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
            flEnemyTotalXP = SLODWORD(v28[99].m_iszPrivateVScripts.u.m_Id) + flEnemyTotalXP;
          goto LABEL_6;
        }
        CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(&xpBonusHeroes, g_pDOTAPlayerResource, v5);
        v8 = CEntityHandle::operator CEntityInstance *(&xpBonusHeroes);
        if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 && (v8[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          break;
      }
LABEL_6:
      if ( ++v5 == 24 )
        goto LABEL_13;
    }
    ++v5;
    flAlliedTotalXP = SLODWORD(v8[99].m_iszPrivateVScripts.u.m_Id) + flAlliedTotalXP;
  }
  while ( v5 != 24 );
LABEL_13:
  entities.m_Size = 0;
  entities.m_Memory.m_nAllocationCount = 64;
  entities.m_Memory.m_nGrowSize = 0x80000000;
  entities.m_Memory.m_pMemory = &entities.m_FixedMemory;
  flXPFactor = fmaxf(0.0, ((flEnemyTotalXP - flAlliedTotalXP) / (flEnemyTotalXP + flAlliedTotalXP)) * flVictimXP);
  AbsOrigin = CBaseEntity::GetAbsOrigin(pVictim);
  FindUnitsInRadius(pKiller->m_iTeamNum.m_Value, AbsOrigin, pVictim, 1300.0, &entities, 1, 1, 270424, 0, 0);
  xpBonusHeroes.m_Size = 0;
  xpBonusHeroes.m_Memory.m_pMemory = 0;
  xpBonusHeroes.m_Memory.m_nAllocationCount = 0;
  xpBonusHeroes.m_Memory.m_nGrowSize = 0;
  if ( entities.m_Size <= 0 )
    goto LABEL_50;
  v10 = 0;
  v11 = 0;
  do
  {
    while ( 1 )
    {
      v12 = &entities.m_Memory.m_pMemory[v10];
      m_Index = entities.m_Memory.m_pMemory[v10].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v14 = v12->m_Index;
        v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v12->m_Index) >> 9) & 0x3F];
        if ( v15 != 0 )
        {
          v16 = &v15[v14 & 0x1FF];
          if ( v16 != 0 && m_Index == v16->m_EHandle.m_Index )
          {
            m_pInstance = v16->m_pInstance;
            if ( v16->m_pInstance != 0
              && m_pInstance->m_bIsDOTANPC
              && (m_pInstance->m_iUnitType & 1) != 0
              && (*(m_pInstance->_vptr_IHandleEntity + 408))(v16->m_pInstance) != 0 )
            {
              v18 = m_pInstance->m_ModifierManager.m_buffsForModifiers[166];
              if ( v18 == 0xFF
                || m_pInstance->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v18].m_Size <= 0
                || CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
                     &m_pInstance->m_ModifierManager,
                     modifierfunction::MODIFIER_PROPERTY_TEMPEST_DOUBLE,
                     &CModifierParams::s_Default) != 1.0 )
              {
                m_Size = xpBonusHeroes.m_Size;
                if ( xpBonusHeroes.m_Size == xpBonusHeroes.m_Memory.m_nAllocationCount )
                  CUtlMemory<CDOTA_BaseNPC_Hero *,int>::Grow(&xpBonusHeroes.m_Memory, 1);
                ++xpBonusHeroes.m_Size;
                v20 = &xpBonusHeroes.m_Memory.m_pMemory[m_Size];
                if ( v20 != 0 )
                  break;
              }
            }
          }
        }
      }
      ++v11;
      ++v10;
      if ( entities.m_Size <= v11 )
        goto LABEL_31;
    }
    *v20 = m_pInstance;
    ++v11;
    ++v10;
  }
  while ( entities.m_Size > v11 );
LABEL_31:
  v21 = xpBonusHeroes.m_Size;
  if ( xpBonusHeroes.m_Size == 0
    || ((v22 = *&g_pGameRules[6].m_szQuestName[68]) == 15 || v22 == 19) && g_pGameRules[6].m_szQuestName[89] != 0 )
  {
LABEL_50:
    xpBonusHeroes.m_Size = 0;
    if ( (xpBonusHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CDOTA_BaseNPC_Hero *,int>::Purge(&xpBonusHeroes.m_Memory);
      if ( (xpBonusHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        goto LABEL_57;
    }
  }
  else
  {
    if ( xpBonusHeroes.m_Size > 0 )
    {
      v23 = nVictimLevel;
      v24 = 0;
      v38 = flXPFactor;
      v25 = 5 * nVictimLevel;
      nVictimLevela = 20 * nVictimLevel;
      flAlliedTotalXPa = 15 * v23;
      flEnemyTotalXPa = 7 * v23;
      v26 = 8LL * (xpBonusHeroes.m_Size - 1) + 8;
      do
      {
        if ( v21 == 2 )
        {
          v27 = (flAlliedTotalXPa + 0.138 * v38);
        }
        else if ( v21 > 2 )
        {
          if ( v21 == 3 )
          {
            v27 = ((2 * v25) + 0.12 * v38);
          }
          else if ( v21 == 4 )
          {
            v27 = (flEnemyTotalXPa + 0.09 * v38);
          }
          else
          {
            v27 = (v25 + 0.07199999999999999 * v38);
          }
        }
        else
        {
          v27 = (nVictimLevela + v38 * 0.138);
        }
        if ( v27 > 0 )
          CDOTAHeroList::GiveXP(this, xpBonusHeroes.m_Memory.m_pMemory[v24 / 8], v27, 1u);
        v24 += 8LL;
      }
      while ( v24 != v26 );
    }
    xpBonusHeroes.m_Size = 0;
    if ( (xpBonusHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CDOTA_BaseNPC_Hero *,int>::Purge(&xpBonusHeroes.m_Memory);
      if ( (xpBonusHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
LABEL_57:
        CUtlMemory<CDOTA_BaseNPC_Hero *,int>::Purge(&xpBonusHeroes.m_Memory);
    }
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTAHeroList::GivePlayerFullBountyGold  (line 1881, @0x000000000295f180, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<int>, Element, Get, GetAttacker, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IncrementAssists, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, TriggerFirstBlood, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CEntityHandle::operator CEntityInstance*, CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail, CDOTA_PlayerResource::IncrementHeroKillGold, CDOTAHeroList::GiveGold, CDOTA_PlayerResource::IncrementAssists, CDOTA_PlayerResource::GetObserverWardsPlaced, CDOTA_PlayerResource::GetLastHits, CDOTA_PlayerResource::GetXPPerMin, CDOTA_PlayerResource::GetGoldPerMin, CDOTA_PlayerResource::GetAssists, CDOTA_PlayerResource::GetDeaths (23 total)
// callers: CDOTAHeroList::GiveKillerBountyGold
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
int __fastcall CDOTAHeroList::GivePlayerFullBountyGold(
        CDOTAHeroList *const this,
        int nPlayerID,
        int nBountyGold,
        int *const nOutBountyGold,
        CDOTA_BaseNPC_Hero *pHeroVictim,
        CBaseEntity *pInflictor)
{
  CEntityInstance *v10; // rax
  int v11; // eax
  int v12; // r13d
  int nDamagingPlayerID; // ebx
  __int64 m_Size; // r15
  int v15; // eax
  int *v16; // rax
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  CEntityInstance *m_pInstance; // r15
  int v20; // eax
  int Kills; // eax
  int Team; // eax
  int v23; // ebx
  char v25; // [rsp+Fh] [rbp-A1h]
  int nDeaths; // [rsp+28h] [rbp-88h]
  int nAssists; // [rsp+2Ch] [rbp-84h]
  float flGPM; // [rsp+30h] [rbp-80h]
  float flXPM; // [rsp+34h] [rbp-7Ch]
  int nLastHits; // [rsp+38h] [rbp-78h]
  int nWardsPlaced; // [rsp+3Ch] [rbp-74h]
  __int64 v32; // [rsp+40h] [rbp-70h]
  int nBountyGolda; // [rsp+48h] [rbp-68h] BYREF
  int nPlayerIDa; // [rsp+4Ch] [rbp-64h] BYREF
  int v35[4]; // [rsp+50h] [rbp-60h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > vecAttackerIDs; // [rsp+60h] [rbp-50h] BYREF

  nPlayerIDa = nPlayerID;
  nBountyGolda = nBountyGold;
  CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(&vecAttackerIDs, g_pDOTAPlayerResource, nPlayerID);
  v10 = CEntityHandle::operator CEntityInstance *(&vecAttackerIDs);
  if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 && (v10[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
    CDOTA_BaseNPC_Hero::KilledHero(v10, pHeroVictim, pInflictor);
  v25 = g_pGameRules[61].m_szQuestName[114];
  v11 = (*(pHeroVictim->_vptr_IHandleEntity + 414))(pHeroVictim);
  if ( g_pGameRules[61].m_szQuestName[114] != 0 )
    CDOTAHeroList::TriggerFirstBlood(&nBountyGolda, nPlayerIDa, v11, g_pGameRules);
  vecAttackerIDs.m_Size = 0;
  vecAttackerIDs.m_Memory.m_pMemory = 0;
  vecAttackerIDs.m_Memory.m_nAllocationCount = 0;
  vecAttackerIDs.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<int,CUtlMemory<int,int>>::AddToTail(&vecAttackerIDs, &nPlayerIDa);
  CDOTA_PlayerResource::IncrementHeroKillGold(g_pDOTAPlayerResource, nPlayerIDa, nBountyGolda);
  if ( CDOTAHeroList::GiveGold(this, nPlayerIDa, nBountyGolda, 1, EDOTA_ModifyGold_Reason::DOTA_ModifyGold_HeroKill) )
    *nOutBountyGold = nBountyGolda;
  else
    *nOutBountyGold = 0;
  if ( pHeroVictim->m_HeroDamageInfoArray.m_Size > 0 )
  {
    v32 = 0;
    v12 = 0;
    do
    {
      nDamagingPlayerID = pHeroVictim->m_HeroDamageInfoArray.m_Memory.m_pMemory[v32].nDamagingPlayerID;
      if ( nPlayerIDa != nDamagingPlayerID )
      {
        m_Size = vecAttackerIDs.m_Size;
        v15 = vecAttackerIDs.m_Size;
        if ( vecAttackerIDs.m_Size == vecAttackerIDs.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<int,int>::Grow(&vecAttackerIDs.m_Memory, 1);
          v15 = vecAttackerIDs.m_Size;
        }
        vecAttackerIDs.m_Size = v15 + 1;
        v16 = &vecAttackerIDs.m_Memory.m_pMemory[m_Size];
        if ( v16 != 0 )
          *v16 = nDamagingPlayerID;
        CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(v35, g_pDOTAPlayerResource, nDamagingPlayerID);
        if ( (v35[0] + 2) > 1 )
        {
          v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v35[0]) >> 9) & 0x3F];
          if ( v17 != 0 )
          {
            v18 = &v17[v35[0] & 0x1FF];
            if ( v18 != 0 && v35[0] == v18->m_EHandle.m_Index )
            {
              m_pInstance = v18->m_pInstance;
              if ( v18->m_pInstance != 0
                && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
              {
                v20 = (*(pHeroVictim->_vptr_IHandleEntity + 414))(pHeroVictim);
                CDOTA_PlayerResource::IncrementAssists(g_pDOTAPlayerResource, m_pInstance[100]._vptr_IHandleEntity, v20);
                nWardsPlaced = CDOTA_PlayerResource::GetObserverWardsPlaced(g_pDOTAPlayerResource, nDamagingPlayerID);
                nLastHits = CDOTA_PlayerResource::GetLastHits(g_pDOTAPlayerResource, nDamagingPlayerID);
                flXPM = CDOTA_PlayerResource::GetXPPerMin(g_pDOTAPlayerResource, nDamagingPlayerID);
                flGPM = CDOTA_PlayerResource::GetGoldPerMin(g_pDOTAPlayerResource, nDamagingPlayerID);
                nAssists = CDOTA_PlayerResource::GetAssists(g_pDOTAPlayerResource, nDamagingPlayerID);
                nDeaths = CDOTA_PlayerResource::GetDeaths(g_pDOTAPlayerResource, nDamagingPlayerID);
                Kills = CDOTA_PlayerResource::GetKills(g_pDOTAPlayerResource, nDamagingPlayerID);
                CDOTA_CombatLog::AddPlayerStatsEvent(
                  &g_DOTACombatLog,
                  nDamagingPlayerID,
                  Kills,
                  nDeaths,
                  nAssists,
                  flGPM,
                  flXPM,
                  nLastHits,
                  nWardsPlaced);
                EconEntity_OnOwnerKillEaterEvent(
                  m_pInstance,
                  pHeroVictim,
                  kill_eater_event_t::kKillEaterEvent_KillAssists,
                  1,
                  INVALID_ITEM_DEF_INDEX);
              }
            }
          }
        }
      }
      ++v32;
      ++v12;
    }
    while ( v12 < pHeroVictim->m_HeroDamageInfoArray.m_Size );
  }
  if ( v25 != 0 )
    CDOTA_CombatLog::AddFirstBloodEvent(&g_DOTACombatLog, &vecAttackerIDs);
  Team = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, nPlayerIDa);
  CDOTA_PlayerResource::RecalculateTeamfightParticipation(g_pDOTAPlayerResource, Team);
  v23 = nPlayerIDa;
  CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&vecAttackerIDs);
  return v23;
}


// CDOTAHeroList::TriggerFirstBlood  (line 1931, @0x00000000028f6c50, libserver.so)  // inlines: DOTAGameRules, SetFirstBloodActive, SetFirstBloodTime
// calls: CDOTAGamerules::GetDOTATime, CDOTA_PlayerResource::IsValidTeamPlayerID, CDOTA_PlayerResource::GetTeam, CDOTAGamerules::SendProjection_CustomEvent, CDOTA_PlayerResource::SetFirstBloodClaimed, CDOTA_PlayerResource::SetFirstBloodGiven
// callers: CDOTAHeroList::TriggerFirstBlood, CDOTAHeroList::GivePlayerFullBountyGold, CDOTAHeroList::GiveKillerBountyGold
void __fastcall CDOTAHeroList::TriggerFirstBlood(
        CDOTAHeroList *const this,
        int *const nBountyGold,
        int nKillerPlayerID,
        int nVictimPlayerID)
{
  int v5; // r13d
  CDOTAGamerules *v6; // rdi
  float DOTATime; // xmm0_4
  const CDOTA_PlayerResource *v8; // rdi
  int Team; // eax

  v5 = nBountyGold;
  LODWORD(this->_vptr_IGameSystem) += 150;
  v6 = g_pGameRules;
  g_pGameRules[61].m_szQuestName[114] = 0;
  DOTATime = CDOTAGamerules::GetDOTATime(v6, 0, 0, 0.0);
  v8 = g_pDOTAPlayerResource;
  *&g_pGameRules[61].m_szQuestName[116] = DOTATime;
  if ( CDOTA_PlayerResource::IsValidTeamPlayerID(v8, v5) )
  {
    CDOTA_PlayerResource::SetFirstBloodClaimed(g_pDOTAPlayerResource, v5);
    if ( !CDOTA_PlayerResource::IsValidTeamPlayerID(g_pDOTAPlayerResource, nKillerPlayerID) )
      goto LABEL_3;
LABEL_5:
    CDOTA_PlayerResource::SetFirstBloodGiven(g_pDOTAPlayerResource, nKillerPlayerID);
    goto LABEL_3;
  }
  if ( CDOTA_PlayerResource::IsValidTeamPlayerID(g_pDOTAPlayerResource, nKillerPlayerID) )
    goto LABEL_5;
LABEL_3:
  Team = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v5);
  CDOTAGamerules::SendProjection_CustomEvent(g_pGameRules, EProjectionEvent::ePE_FirstBlood, Team);
}


// CDOTAHeroList::TriggerFirstBlood  (line 1931, @0x000000000290d6f0, libserver.so)
// calls: CDOTAHeroList::TriggerFirstBlood
void __fastcall CDOTAHeroList::TriggerFirstBlood(
        CDOTAHeroList *const this,
        int *const nBountyGold,
        int nKillerPlayerID,
        int nVictimPlayerID)
{
  if ( g_pGameRules[61].m_szQuestName[114] != 0 )
    CDOTAHeroList::TriggerFirstBlood(nBountyGold, nKillerPlayerID, nVictimPlayerID, nVictimPlayerID);
}


// CDOTAHeroList::GiveXP  (line 1954, @0x000000000291b4a0, libserver.so)  // inlines: DOTAGameRules, HasModifyExperienceFilter, HasScriptFilter, RunModifyExperienceFilter
// calls: CDOTAGamerules::GetGameModeEntity, KeyValues::operator new, KeyValues::KeyValues, KeyValues::SetInt, KeyValues::SetFloat, VScriptFilter::RunScriptFilter, KeyValues::~KeyValues, KeyValues::operator delete, KeyValues::GetFloat, _Unwind_Resume
// callers: CDOTA_ActionRunner::PerformAction_GrantXPGold, CDOTAHeroList::GiveNearbyHeroExperienceBonus, CDOTAHeroList::GiveExperience, CDOTA_Item_Tome_Of_Knowledge::OnSpellStart
// strings: "ModifyExperienceData", "experience", "reason_const"
void __fastcall CDOTAHeroList::GiveXP(
        CDOTAHeroList *const this,
        CDOTA_BaseNPC_Hero *pHero,
        float flXP,
        unsigned int nReason)
{
  CDOTABaseGameMode *GameModeEntity; // rax
  VScriptFilter *v7; // rbx
  KeyValues *v8; // r14
  int m_Value; // edx
  float v10; // xmm1_4
  bool v11; // r14
  float v12; // xmm1_4
  KeyValues *v13; // rbx
  KeyValues *pFilterKeys; // [rsp+18h] [rbp-28h] BYREF

  GameModeEntity = CDOTAGamerules::GetGameModeEntity(g_pGameRules);
  v7 = GameModeEntity;
  if ( GameModeEntity == 0
    || GameModeEntity->m_ModifyExperienceFilter.m_hFunction == 0
    || GameModeEntity->m_ModifyExperienceFilter.m_hContext == 0 )
  {
    goto LABEL_9;
  }
  v8 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v8, "ModifyExperienceData");
  m_Value = pHero->m_iPlayerID.m_Value;
  pFilterKeys = v8;
  KeyValues::SetInt(v8, "player_id_const", m_Value);
  KeyValues::SetFloat(v8, "experience", v10);
  KeyValues::SetInt(v8, "reason_const", nReason);
  v11 = VScriptFilter::RunScriptFilter(v7 + 58, &pFilterKeys);
  if ( v11 )
    flXP = KeyValues::GetFloat(pFilterKeys, "experience", v12);
  v13 = pFilterKeys;
  if ( pFilterKeys != 0 )
  {
    KeyValues::~KeyValues(pFilterKeys);
    KeyValues::operator delete(v13);
  }
  if ( v11 )
LABEL_9:
    (*(pHero->_vptr_IHandleEntity + 493))(pHero, nReason, 1, 1, flXP);
}


// CDOTAHeroList::GiveGold  (line 1990, @0x000000000291b600, libserver.so)  // inlines: DOTAGameRules, GetBool, GetGameTime, HasModifyGoldFilter, HasScriptFilter, RunModifyGoldFilter, SetBool
// calls: CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CDOTAGamerules::GetGameModeEntity, KeyValues::operator new, KeyValues::KeyValues, KeyValues::SetInt, VScriptFilter::RunScriptFilter, KeyValues::~KeyValues, KeyValues::operator delete, CDOTA_PlayerResource::ModifyGold, KeyValues::GetInt, CDOTA_PlayerResource::GetPlayer, CDOTAPlayer::SetLastOrderTime (13 total)
// callers: CDOTA_ActionRunner::PerformAction_GrantXPGold, CDOTAHeroList::GiveNearbyHeroGoldBonus, CDOTAHeroList::GiveTeamGoldReward, CDOTAHeroList::GivePlayerFullBountyGold, CDOTAHeroList::GiveKillerBountyGold
// strings: "ModifyGoldData", "reason_const"
bool __fastcall CDOTAHeroList::GiveGold(
        CDOTAHeroList *const this,
        int nPlayerID,
        int nGold,
        bool bReliable,
        EDOTA_ModifyGold_Reason nReason)
{
  CDOTABaseGameMode *GameModeEntity; // rax
  VScriptFilter *v8; // rbx
  bool v9; // r15
  KeyValues *v10; // rbx
  CDOTAPlayer *Player; // rax
  float v13; // xmm1_4
  float v14; // xmm0_4
  CDOTAPlayer *v15; // rax
  float v16; // xmm1_4
  float v17; // xmm0_4
  KeyValues *v18; // [rsp+8h] [rbp-58h]
  bool bReliablea; // [rsp+1Bh] [rbp-45h]
  KeyValues *pFilterKeys; // [rsp+20h] [rbp-40h] BYREF

  bReliablea = bReliable;
  if ( (nReason - 12) <= 1 )
  {
    Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, nPlayerID);
    if ( Player != 0 )
    {
      v14 = 0.0;
      if ( g_pGameRules != 0 )
        v14 = *&g_pGameRules[18].m_szQuestName[20];
      CDOTAPlayer::SetLastOrderTime(Player, v14, v13, 1);
    }
    v15 = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, nPlayerID);
    if ( v15 != 0 )
    {
      v17 = 0.0;
      if ( g_pGameRules != 0 )
        v17 = *&g_pGameRules[18].m_szQuestName[20];
      CDOTAPlayer::SetLastOrderTime(v15, v17, v16, 1);
    }
  }
  CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(&pFilterKeys, g_pDOTAPlayerResource, nPlayerID);
  GameModeEntity = CDOTAGamerules::GetGameModeEntity(g_pGameRules);
  v8 = GameModeEntity;
  if ( GameModeEntity != 0
    && GameModeEntity->m_ModifyGoldFilter.m_hFunction != 0
    && GameModeEntity->m_ModifyGoldFilter.m_hContext != 0 )
  {
    v18 = KeyValues::operator new(0x14u);
    KeyValues::KeyValues(v18, "ModifyGoldData");
    pFilterKeys = v18;
    KeyValues::SetInt(v18, "player_id_const", nPlayerID);
    KeyValues::SetInt(pFilterKeys, "gold", nGold);
    KeyValues::SetInt(pFilterKeys, "reliable", bReliable);
    KeyValues::SetInt(pFilterKeys, "reason_const", nReason);
    v9 = VScriptFilter::RunScriptFilter(v8 + 57, &pFilterKeys);
    if ( v9 )
    {
      nGold = KeyValues::GetInt(pFilterKeys, "gold", nGold);
      bReliablea = KeyValues::GetInt(pFilterKeys, "reliable", bReliable) != 0;
    }
    v10 = pFilterKeys;
    if ( pFilterKeys != 0 )
    {
      KeyValues::~KeyValues(pFilterKeys);
      KeyValues::operator delete(v10);
    }
    if ( !v9 )
      return 0;
  }
  CDOTA_PlayerResource::ModifyGold(g_pDOTAPlayerResource, nPlayerID, nGold, bReliablea, nReason);
  return 1;
}


// CDOTAHeroList::ShowGoldOverhead  (line 2052, @0x000000000290d720, libserver.so)  // inlines: DOTAGameRules, Get, GetBuybackGoldLimitTime, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, IndexToIdentity, IsBuybackLimited, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_PlayerResource::GetPlayer, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, SendOverheadEventMessage
// callers: CDOTAHeroList::GiveNearbyHeroGoldBonus, CDOTAHeroList::GiveTeamGoldReward, CDOTAHeroList::GiveKillerBountyGold
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTAHeroList::ShowGoldOverhead(CDOTAHeroList *const this, int nPlayerID, int nGold, bool bReliable)
{
  CDOTAPlayer *Player; // r13
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityInstance *m_pInstance; // rdx
  float v10; // xmm1_4
  int v11[12]; // [rsp+0h] [rbp-30h] BYREF

  Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, nPlayerID);
  if ( Player != 0 )
  {
    CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(v11, g_pDOTAPlayerResource, nPlayerID);
    if ( (v11[0] + 2) > 1 )
    {
      v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v11[0]) >> 9) & 0x3F];
      if ( v7 != 0 )
      {
        v8 = &v7[v11[0] & 0x1FF];
        if ( v8 != 0 && v11[0] == v8->m_EHandle.m_Index )
        {
          m_pInstance = v8->m_pInstance;
          if ( m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            if ( nGold > 0 )
            {
              v10 = 0.0;
              if ( g_pGameRules != 0 )
                v10 = *&g_pGameRules[18].m_szQuestName[20];
              if ( *&m_pInstance[97].m_worldGroupId.m_nHashCode > v10 )
                nGold = (nGold * 0.40000001);
            }
            SendOverheadEventMessage(Player, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_GOLD, m_pInstance, nGold, 0);
          }
        }
      }
    }
  }
}


// CDOTAHeroList::GameEnded  (line 2072, @0x000000000290d830, libserver.so)  // inlines: DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGlobalDOTATeam, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, QueueConcept, ToDOTABaseNPCHero, operator CEntityInstance*, operator[]
// calls: CResponseCriteriaSet::CResponseCriteriaSet, GetGlobalTeam, CResponseCriteriaSet::AppendCriteria, CDOTAGamerules::GetGameEndDelay, CDOTA_Speech::QueueConcept, CResponseCriteriaSet::~CResponseCriteriaSet, _Unwind_Resume
// callers: CDOTAGamerules::SetGameWinner
// strings: "radiant_team_id", "dire_team_id"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTAHeroList::GameEnded(CDOTAHeroList *const this, int iWinner)
{
  __int64 v3; // rbx
  CHandle<CDOTA_BaseNPC_Hero> *v4; // rdx
  uint32 m_Index; // eax
  __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityInstance *m_pInstance; // r13
  _BOOL4 v10; // r15d
  int v11; // r15d
  float v12; // xmm2_4
  float v13; // xmm2_4
  float GameEndDelay; // xmm0_4
  CDOTA_Speech *vptr_IHandleEntity; // rdi
  float v16; // xmm0_4
  CResponseCriteriaSet criteria; // [rsp+20h] [rbp-70h] BYREF

  if ( this->m_hHeroList.m_Size > 0 )
  {
    v3 = 0;
    do
    {
      while ( 1 )
      {
        v4 = &this->m_hHeroList.m_Memory.m_pMemory[v3];
        m_Index = v4->m_Index;
        if ( v4->m_Index + 2 > 1 )
        {
          v6 = v4->m_Index;
          v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->m_Index) >> 9) & 0x3F];
          if ( v7 != 0 )
          {
            v8 = &v7[v6 & 0x1FF];
            if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
            {
              m_pInstance = v8->m_pInstance;
              if ( v8->m_pInstance != 0
                && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
              {
                break;
              }
            }
          }
        }
        if ( this->m_hHeroList.m_Size <= ++v3 )
          return;
      }
      v10 = iWinner == HIBYTE(m_pInstance[7].m_CScriptComponent);
      CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
      v11 = v10 + 13;
      if ( GetGlobalTeam(2) != 0 )
        CResponseCriteriaSet::AppendCriteria(&criteria, "radiant_team_id", 1.0, v12);
      if ( GetGlobalTeam(3) != 0 )
        CResponseCriteriaSet::AppendCriteria(&criteria, "dire_team_id", 1.0, v13);
      GameEndDelay = CDOTAGamerules::GetGameEndDelay(g_pGameRules);
      vptr_IHandleEntity = m_pInstance[70]._vptr_IHandleEntity;
      v16 = GameEndDelay - 1.0;
      if ( vptr_IHandleEntity != 0 )
        CDOTA_Speech::QueueConcept(vptr_IHandleEntity, v11, v16, &criteria, 0, 1, 0, 0, 0);
      CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
      ++v3;
    }
    while ( this->m_hHeroList.m_Size > v3 );
  }
}


// CDOTAHeroList::RemoveOldHeroPositions  (line 2103, @0x0000000002942250, libserver.so)  // inlines: DOTAGameRules, FirstInorder, Free, GetGameTime, GetInt, IsValidIndex, LeftChild, NextInorder, Remove, operator[]
// calls: CUtlLinkedList<CDOTAHeroPositionsElement, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement, long long int> > >::Unlink, CUtlRBTree<CUtlMap<CHandle<CBaseEntity>, CDOTAHeroPositions*>::Node_t, short unsigned int, CUtlMap<CHandle<CBaseEntity>, CDOTAHeroPositions*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>, CDOTAHeroPositions*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder
// callers: CDOTAHeroList::FrameUpdatePostEntityThink
void __fastcall CDOTAHeroList::RemoveOldHeroPositions(CDOTAHeroList *const this)
{
  unsigned __int16 m_Root; // cx
  UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions*>::Node_t,short unsigned int> *m_pMemory; // rdx
  __int64 v3; // rax
  unsigned __int16 m_Left; // bx
  CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions*,short unsigned int,bool (*)(const CHandle<CBaseEntity>&,const CHandle<CBaseEntity>&)> *p_m_HeroPositionHistory; // r12
  float v6; // xmm1_4
  CUtlLinkedList<CDOTAHeroPositionsElement,long long int,true,long long int,CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement,long long int> > > *p_m_pPositionList; // r13
  __int64 m_Tail; // r15
  float flDeadtime; // [rsp+Ch] [rbp-34h]

  m_Root = this->m_HeroPositionHistory.m_Tree.m_Root;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = this->m_HeroPositionHistory.m_Tree.m_Elements.m_pMemory;
    v3 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left == 0xFFFF )
    {
      m_Left = this->m_HeroPositionHistory.m_Tree.m_Root;
    }
    else
    {
      while ( 1 )
      {
        v3 = m_Left;
        if ( m_pMemory[m_Left].m_Left == 0xFFFF )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
    }
    p_m_HeroPositionHistory = &this->m_HeroPositionHistory;
    while ( 1 )
    {
      v6 = 0.0;
      p_m_pPositionList = &m_pMemory[v3].m_Data.elem->m_pPositionList;
      if ( g_pGameRules != 0 )
        v6 = *&g_pGameRules[18].m_szQuestName[20];
      m_Tail = p_m_pPositionList->m_Tail;
      for ( flDeadtime = v6 - dota_killcam_history_time.m_pParent->m_Value.m_nValue;
            m_Tail != 0;
            m_Tail = p_m_pPositionList->m_Tail )
      {
        if ( m_Tail == *(m_Tail + 24) && m_Tail != *(m_Tail + 32) )
          break;
        if ( *m_Tail >= flDeadtime )
          break;
        CUtlLinkedList<CDOTAHeroPositionsElement,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement,long long>>>::Unlink(
          p_m_pPositionList,
          m_Tail);
        *(m_Tail + 32) = p_m_pPositionList->m_FirstFree;
        p_m_pPositionList->m_FirstFree = m_Tail;
      }
      m_Left = CUtlRBTree<CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short,CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                 &p_m_HeroPositionHistory->m_Tree,
                 m_Left);
      if ( m_Left == 0xFFFF )
        break;
      m_pMemory = this->m_HeroPositionHistory.m_Tree.m_Elements.m_pMemory;
      v3 = m_Left;
    }
  }
}


// CDOTAHeroList::UpdateHeroPositions  (line 2133, @0x00000000029549a0, libserver.so)  // inlines: AddToHead, CEntityHandle, CHandle, CUtlFixedLinkedList, CUtlFixedMemory, CUtlLinkedList, ConstructList, DOTAGameRules, Element, Find, FindInsertionPosition, Get, GetEHandle, GetEntryIndex, GetGameTime, GetIndex, GetInstance, GetSerialNumber, Init, Insert, InsertAfter, InsertAt, IsIdxAfter, IsInBlock, IsInList, IsValidIterator, LeftChild, LinkAfter, ResetDbgInfo, RightChild, Set, ToDOTABaseNPCHero, operator(), operator=, operator[]
// calls: CEntityHandle::operator CEntityInstance*, operator new, CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement, long long int> >::Purge, CUtlRBTree<CUtlMap<CHandle<CBaseEntity>, CDOTAHeroPositions*>::Node_t, short unsigned int, CUtlMap<CHandle<CBaseEntity>, CDOTAHeroPositions*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>, CDOTAHeroPositions*>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<CHandle<CBaseEntity>, CDOTAHeroPositions*>::Node_t, short unsigned int, CUtlMap<CHandle<CBaseEntity>, CDOTAHeroPositions*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>, CDOTAHeroPositions*>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent, floorf, CUtlLinkedList<CDOTAHeroPositionsElement, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement, long long int> > >::AllocInternal, CBaseEntity::GetAbsOrigin, CBaseEntity::GetHealth, CUtlLinkedList<CDOTAHeroPositionsElement, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement, long long int> > >::Unlink, operator delete, _Unwind_Resume
// callers: CDOTAHeroList::FrameUpdatePostEntityThink
void __fastcall CDOTAHeroList::UpdateHeroPositions(CDOTAHeroList *const this)
{
  CEntityInstance *v2; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v4; // cx
  int m_Root; // r12d
  UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions*>::Node_t,short unsigned int> *v6; // rcx
  unsigned __int64 v7; // r13
  CDOTAHeroPositions *v8; // r12
  unsigned __int16 v9; // r15
  unsigned __int16 m_Right; // ax
  char v11; // dl
  bool v12; // zf
  UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions*>::Node_t,short unsigned int> *m_pMemory; // rax
  char v14; // cl
  unsigned __int16 v15; // r13
  unsigned __int16 v16; // ax
  CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions*,short unsigned int,bool (*)(const CHandle<CBaseEntity>&,const CHandle<CBaseEntity>&)>::ElemType_t elem; // r12
  float v18; // xmm0_4
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r13
  float v21; // xmm0_4
  CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement,long long int> >::BlockHeader_t *m_pBlockHeader; // rdx
  __int64 m_nIndex; // rcx
  __int64 m_nBlockSize; // rdi
  __int64 v25; // rdx
  CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement,long long int> >::BlockHeader_t *v26; // rsi
  CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions*,short unsigned int,bool (*)(const CHandle<CBaseEntity>&,const CHandle<CBaseEntity>&)> *p_m_HeroPositionHistory; // [rsp+8h] [rbp-78h]
  uint32 flTime; // [rsp+10h] [rbp-70h]
  bool flTimeb; // [rsp+10h] [rbp-70h]
  float flTimea; // [rsp+10h] [rbp-70h]
  unsigned __int64 flTimec; // [rsp+10h] [rbp-70h]
  CBaseEntity *v32; // [rsp+18h] [rbp-68h]
  __int64 v33; // [rsp+20h] [rbp-60h]
  float v34; // [rsp+28h] [rbp-58h]
  int i; // [rsp+2Ch] [rbp-54h]
  CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions*,short unsigned int,bool (*)(const CHandle<CBaseEntity>&,const CHandle<CBaseEntity>&)>::Node_t pCopyFrom; // [rsp+40h] [rbp-40h] BYREF

  v33 = 0;
  i = 0;
  if ( this->m_hHeroList.m_Size > 0 )
  {
    p_m_HeroPositionHistory = &this->m_HeroPositionHistory;
    while ( 1 )
    {
      v2 = CEntityHandle::operator CEntityInstance *(&this->m_hHeroList.m_Memory.m_pMemory[v33]);
      v32 = v2;
      if ( v2 == 0 || (v2[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
        goto LABEL_30;
      m_pEntity = v2->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v4 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        flTime = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF;
      }
      else
      {
        flTime = -1;
      }
      m_Root = this->m_HeroPositionHistory.m_Tree.m_Root;
      pCopyFrom.key.m_Index = flTime;
      if ( m_Root == 0xFFFF )
      {
LABEL_15:
        v8 = operator new(0x50u);
        memset(v8, 0, sizeof(CDOTAHeroPositions));
        CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement,long long>>::Purge(&v8->m_pPositionList.m_Memory);
        v8->m_pPositionList.m_Memory.m_nGrowSize = 0;
        v8->m_pPositionList.m_LastAlloc.m_pBlockHeader = 0;
        v8->m_pPositionList.m_LastAlloc.m_nIndex = 0;
        v8->m_pPositionList.m_Head = 0;
        v8->m_pPositionList.m_Tail = 0;
        v8->m_pPositionList.m_FirstFree = 0;
        v8->m_pPositionList.m_ElementCount = 0;
        v8->m_pPositionList.m_NumAlloced = 0;
        v8->m_pPositionList.m_pElements = 0;
        v9 = this->m_HeroPositionHistory.m_Tree.m_Root;
        pCopyFrom.key.m_Index = flTime;
        pCopyFrom.elem = v8;
        if ( v9 != 0xFFFF )
        {
          while ( 1 )
          {
            v12 = !this->m_HeroPositionHistory.m_Tree.m_LessFunc.m_LessFunc(
                     &pCopyFrom,
                     &this->m_HeroPositionHistory.m_Tree.m_Elements.m_pMemory[v9].m_Data);
            m_pMemory = this->m_HeroPositionHistory.m_Tree.m_Elements.m_pMemory;
            if ( v12 )
            {
              m_Right = m_pMemory[v9].m_Right;
              v11 = 0;
              if ( m_Right == 0xFFFF )
              {
LABEL_21:
                v14 = v11;
                v15 = v9;
                goto LABEL_22;
              }
            }
            else
            {
              m_Right = m_pMemory[v9].m_Left;
              v11 = 1;
              if ( m_Right == 0xFFFF )
                goto LABEL_21;
            }
            v9 = m_Right;
          }
        }
        v15 = -1;
        v14 = 0;
LABEL_22:
        flTimeb = v14;
        v16 = CUtlRBTree<CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short,CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
                &p_m_HeroPositionHistory->m_Tree,
                &pCopyFrom);
        m_Root = v16;
        CUtlRBTree<CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short,CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
          &p_m_HeroPositionHistory->m_Tree,
          v16,
          v15,
          flTimeb);
        ++this->m_HeroPositionHistory.m_Tree.m_NumElements;
      }
      else
      {
        v6 = this->m_HeroPositionHistory.m_Tree.m_Elements.m_pMemory;
        while ( 1 )
        {
          while ( 1 )
          {
            v7 = m_Root;
            if ( !this->m_HeroPositionHistory.m_Tree.m_LessFunc.m_LessFunc(&pCopyFrom, &v6[v7].m_Data) )
              break;
            v6 = this->m_HeroPositionHistory.m_Tree.m_Elements.m_pMemory;
            m_Root = v6[m_Root].m_Left;
            if ( m_Root == 0xFFFF )
              goto LABEL_15;
          }
          if ( !this->m_HeroPositionHistory.m_Tree.m_LessFunc.m_LessFunc(
                  &this->m_HeroPositionHistory.m_Tree.m_Elements.m_pMemory[v7].m_Data,
                  &pCopyFrom) )
            break;
          v6 = this->m_HeroPositionHistory.m_Tree.m_Elements.m_pMemory;
          m_Root = v6[v7].m_Right;
          if ( m_Root == 0xFFFF )
            goto LABEL_15;
        }
      }
      elem = this->m_HeroPositionHistory.m_Tree.m_Elements.m_pMemory[m_Root].m_Data.elem;
      if ( elem != 0 )
      {
        v18 = 0.0;
        if ( g_pGameRules != 0 )
          v18 = floorf(*&g_pGameRules[18].m_szQuestName[20]);
        if ( elem->m_pPositionList.m_ElementCount <= 0 || (*elem->m_pPositionList.m_Head + 1.0) <= v18 )
        {
          flTimea = v18;
          v19 = CUtlLinkedList<CDOTAHeroPositionsElement,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement,long long>>>::AllocInternal(
                  &elem->m_pPositionList,
                  0);
          v20 = 0;
          v21 = flTimea;
          if ( v19 != 0 )
            break;
LABEL_29:
          *v20 = v21;
          *(v20 + 4) = *CBaseEntity::GetAbsOrigin(v32);
          *(v20 + 16) = (*(v32->_vptr_IHandleEntity + 408))(v32);
          *(v20 + 20) = CBaseEntity::GetHealth(v32);
        }
      }
LABEL_30:
      ++i;
      ++v33;
      if ( this->m_hHeroList.m_Size <= i )
        return;
    }
    m_pBlockHeader = elem->m_pPositionList.m_LastAlloc.m_pBlockHeader;
    if ( m_pBlockHeader != 0 )
    {
      m_nIndex = elem->m_pPositionList.m_LastAlloc.m_nIndex;
      if ( m_nIndex >= 0 )
      {
        m_nBlockSize = m_pBlockHeader->m_nBlockSize;
        if ( m_nIndex < m_nBlockSize )
        {
          v26 = m_pBlockHeader + 1;
          if ( v19 >= &m_pBlockHeader[1] && v19 < v26 + 40 * m_nBlockSize )
          {
            v20 = v19;
            if ( v19 > v26 + 40 * m_nIndex )
            {
LABEL_38:
              *(v19 + 24) = 0;
              *(v19 + 32) = elem->m_pPositionList.m_Head;
              elem->m_pPositionList.m_Head = v19;
              v25 = *(v19 + 32);
              if ( v25 != 0 )
                *(v25 + 24) = v19;
              else
                elem->m_pPositionList.m_Tail = v19;
              ++elem->m_pPositionList.m_ElementCount;
              goto LABEL_29;
            }
LABEL_36:
            if ( v19 != *(v19 + 24) )
            {
              v34 = flTimea;
              flTimec = v19;
              CUtlLinkedList<CDOTAHeroPositionsElement,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement,long long>>>::Unlink(
                &elem->m_pPositionList,
                v19);
              v19 = flTimec;
              v21 = v34;
            }
            goto LABEL_38;
          }
          while ( 1 )
          {
            m_pBlockHeader = m_pBlockHeader->m_pNext;
            if ( m_pBlockHeader == 0 )
              break;
            if ( v19 >= &m_pBlockHeader[1] && v19 < &m_pBlockHeader[1] + 40 * m_pBlockHeader->m_nBlockSize )
            {
              v20 = v19;
              goto LABEL_38;
            }
          }
        }
      }
    }
    v20 = v19;
    goto LABEL_36;
  }
}


// CDOTAHeroList::FrameUpdatePostEntityThink  (line 2179, @0x0000000002954e00, libserver.so)
// calls: CDOTAHeroList::RemoveOldHeroPositions, CDOTAHeroList::UpdateHeroPositions, CDOTAHeroList::CalculateMusic
// callers: CDOTA_BaseNPC_Hero::Event_Killed
void __fastcall CDOTAHeroList::FrameUpdatePostEntityThink(
        CDOTAHeroList *const this,
        const EventServerPostEntityThink_t *const msg)
{
  CDOTAHeroList::RemoveOldHeroPositions(this);
  CDOTAHeroList::UpdateHeroPositions(this);
  CDOTAHeroList::CalculateMusic(this);
}


// CDOTAHeroList::RemoveAllHeroPositions  (line 2187, @0x0000000002942380, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, operator[], ~CDOTAHeroPositions, ~CUtlFixedLinkedList, ~CUtlFixedMemory, ~CUtlLinkedList
// calls: CUtlLinkedList<CDOTAHeroPositionsElement, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement, long long int> > >::RemoveAll, CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement, long long int> >::Purge, operator delete, CUtlRBTree<CUtlMap<CHandle<CBaseEntity>, CDOTAHeroPositions*>::Node_t, short unsigned int, CUtlMap<CHandle<CBaseEntity>, CDOTAHeroPositions*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>, CDOTAHeroPositions*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlRBTree<CUtlMap<CHandle<CBaseEntity>, CDOTAHeroPositions*>::Node_t, short unsigned int, CUtlMap<CHandle<CBaseEntity>, CDOTAHeroPositions*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>, CDOTAHeroPositions*>::Node_t, short unsigned int>, short unsigned int> >::Purge
// callers: CDOTAHeroList::GameInit, CDOTAHeroList::GameShutdown, CDOTAHeroList::CDOTAHeroList
void __fastcall CDOTAHeroList::RemoveAllHeroPositions(CDOTAHeroList *const this)
{
  unsigned __int16 m_Root; // bx
  UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions*>::Node_t,short unsigned int> *m_pMemory; // rdx
  __int64 v4; // rax
  unsigned __int16 m_Left; // si
  __int64 v6; // rax
  CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement,long long int> > *p_m_Memory; // r12

  m_Root = this->m_HeroPositionHistory.m_Tree.m_Root;
  if ( m_Root == 0xFFFF )
  {
    CUtlRBTree<CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short,CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_HeroPositionHistory.m_Tree);
  }
  else
  {
    m_pMemory = this->m_HeroPositionHistory.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == 0xFFFF )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      v6 = v4;
      p_m_Memory = &m_pMemory[v6].m_Data.elem->m_pPositionList.m_Memory;
      if ( p_m_Memory != 0 )
      {
        CUtlLinkedList<CDOTAHeroPositionsElement,long long,true,long long,CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement,long long>>>::RemoveAll(&m_pMemory[v6].m_Data.elem->m_pPositionList);
        CUtlFixedMemory<UtlLinkedListElem_t<CDOTAHeroPositionsElement,long long>>::Purge(p_m_Memory);
        operator delete(p_m_Memory);
      }
      m_Root = CUtlRBTree<CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short,CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                 &this->m_HeroPositionHistory.m_Tree,
                 m_Root);
      if ( m_Root == 0xFFFF )
        break;
      m_pMemory = this->m_HeroPositionHistory.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
    CUtlRBTree<CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short,CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CHandle<CBaseEntity>,CDOTAHeroPositions *,unsigned short,bool (*)(CHandle<CBaseEntity> const&,CHandle<CBaseEntity> const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_HeroPositionHistory.m_Tree);
  }
}


// CDOTAHeroList::CalculateMusic  (line 2205, @0x00000000029188a0, libserver.so)  // inlines: Destruct<CDOTAMusicSystemElement>, Element, Get, GetBool, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, GetInt, IndexToIdentity, IsElapsed, IsValid, LookupEntity, NetworkStateChanged, Remove, Set, ShiftElementsLeft, ToDOTABaseNPC, ToDOTABaseNPCHero, V_memmove, memmove, operator CBaseEntity*, operator CEntityInstance*, operator=<int>, operator[], ~CDOTAMusicSystemElement, ~CUtlVector
// calls: memcmp, CountdownTimer::Now, Msg, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, memmove, CEntityHandle::operator CEntityInstance*, CountdownTimer::Start, CDOTAPlayer::TranslateMusic
// callers: CDOTAHeroList::FrameUpdatePostEntityThink
// strings: "Element Weight: %f\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTAHeroList::CalculateMusic(CDOTAHeroList *const this)
{
  int m_Size; // r14d
  __int64 v2; // r13
  int v3; // r14d
  CDOTAMusicSystemElement *v4; // r15
  CHandle<CBaseEntity> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityInstance *m_pInstance; // r12
  __int64 v11; // r12
  float m_nValue; // xmm0_4
  float m_flWeight; // xmm1_4
  int v14; // eax
  __int64 v15; // r12
  int j; // ebx
  CEntityInstance *v17; // rax
  CEntityInstance *v18; // r13
  __int64 v19; // r12
  int v20; // ebx
  CEntityInstance *v21; // rax
  CEntityInstance *v22; // r13
  const CountdownTimer *v23; // r14
  _DWORD *v24; // r13
  CDOTAPlayer *v25; // rax
  int v26; // r14d
  _DWORD *v27; // rax
  CountdownTimer *v28; // rax
  float v29; // xmm1_4
  int (**vptr_IHandleEntity)(...); // rax
  _DWORD *v31; // r13
  __int64 v32; // r13
  int k; // r12d
  CEntityInstance *v34; // rax
  CEntityInstance *v35; // rbx
  int (**v36)(...); // rax
  _DWORD *v37; // rbx
  _DWORD *v38; // [rsp+10h] [rbp-60h]
  float m_fValue; // [rsp+10h] [rbp-60h]
  int e; // [rsp+24h] [rbp-4Ch]
  __int64 i; // [rsp+28h] [rbp-48h]
  _DWORD v43[13]; // [rsp+3Ch] [rbp-34h] BYREF

  if ( dota_music_battle_enable.m_pParent->m_Value.m_nValue != 0 )
  {
    m_Size = this->m_MusicElements.m_Size;
    if ( m_Size > 0 )
    {
      e = m_Size - 1;
      for ( i = m_Size - 1; ; --i )
      {
        while ( 1 )
        {
          v2 = 0;
          v3 = 0;
          v4 = &this->m_MusicElements.m_Memory.m_pMemory[i];
          if ( v4->m_hHeroes.m_Size > 0 )
          {
            do
            {
              while ( 1 )
              {
                v5 = &v4->m_hHeroes.m_Memory.m_pMemory[v2];
                m_Index = v5->m_Index;
                if ( v5->m_Index + 2 > 1 )
                {
                  v7 = v5->m_Index;
                  v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
                  if ( v8 != 0 )
                  {
                    v9 = &v8[v7 & 0x1FF];
                    if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
                    {
                      m_pInstance = v9->m_pInstance;
                      if ( v9->m_pInstance != 0
                        && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                        && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                        && (*(m_pInstance->_vptr_IHandleEntity + 413))(v9->m_pInstance) != 0
                        && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
                      {
                        v11 = (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance);
                        if ( memcmp((v11 + 4744), &v4->m_flWeight, 4u) != 0 )
                          break;
                      }
                    }
                  }
                }
                ++v3;
                ++v2;
                if ( v4->m_hHeroes.m_Size <= v3 )
                  goto LABEL_18;
              }
              ++v3;
              ++v2;
              (*(*v11 + 176LL))(v11, 4744, 0, 0xFFFFFFFFLL);
              *(v11 + 4744) = v4->m_flWeight;
            }
            while ( v4->m_hHeroes.m_Size > v3 );
          }
LABEL_18:
          if ( CountdownTimer::Now(&v4->m_Timer) < v4->m_Timer.m_timestamp.m_Value )
            goto LABEL_26;
          if ( dota_music_battle_debug.m_pParent->m_Value.m_nValue != 0 )
            Msg("Element Weight: %f\n", v4->m_flWeight);
          m_nValue = dota_music_battle_weight_trigger.m_pParent->m_Value.m_nValue;
          if ( !v4->m_bPassedTrigger )
            break;
          m_flWeight = v4->m_flWeight;
          if ( m_flWeight < (m_nValue * 0.5) )
          {
            v15 = 0;
            for ( j = 0; v4->m_hHeroes.m_Size > j; ++v15 )
            {
              v17 = CEntityHandle::operator CEntityInstance *(&v4->m_hHeroes.m_Memory.m_pMemory[v15]);
              v18 = v17;
              if ( v17 != 0
                && BYTE3(v17[7]._vptr_IHandleEntity) != 0
                && (v17[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                && LOBYTE(v17[71].m_pEntity) == 0
                && (*(v17->_vptr_IHandleEntity + 413))(v17) != 0
                && *((*(v18->_vptr_IHandleEntity + 413))(v18) + 4740) == 2 )
              {
                v25 = (*(v18->_vptr_IHandleEntity + 413))(v18);
                v26 = CDOTAPlayer::TranslateMusic(v25, 1);
                v27 = (*(v18->_vptr_IHandleEntity + 413))(v18);
                if ( v26 != v27[1185] )
                {
                  v38 = v27;
                  (*(*v27 + 176LL))(v27, 4740, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                  v38[1185] = v26;
                }
                m_fValue = dota_music_battle_rest_time.m_pParent->m_Value.m_fValue;
                v28 = (*(v18->_vptr_IHandleEntity + 413))(v18);
                CountdownTimer::Start(v28 + 199, m_fValue, v29);
                vptr_IHandleEntity = v18->_vptr_IHandleEntity;
                v43[0] = 0;
                v31 = (vptr_IHandleEntity[413])(v18);
                if ( memcmp(v31 + 1186, v43, 4u) != 0 )
                {
                  (*(*v31 + 176LL))(v31, 4744, 0, 0xFFFFFFFFLL);
                  v31[1186] = 0;
                }
              }
              ++j;
            }
            goto LABEL_23;
          }
LABEL_38:
          v19 = 0;
          v20 = 0;
          CountdownTimer::Start(&v4->m_Timer, dota_music_battle_duration.m_pParent->m_Value.m_fValue, m_flWeight);
          if ( v4->m_hHeroes.m_Size > 0 )
          {
            do
            {
              while ( 1 )
              {
                v21 = CEntityHandle::operator CEntityInstance *(&v4->m_hHeroes.m_Memory.m_pMemory[v19]);
                v22 = v21;
                if ( v21 != 0
                  && BYTE3(v21[7]._vptr_IHandleEntity) != 0
                  && (v21[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                  && LOBYTE(v21[71].m_pEntity) == 0
                  && (*(v21->_vptr_IHandleEntity + 408))(v21) != 0
                  && (*(v22->_vptr_IHandleEntity + 413))(v22) != 0 )
                {
                  v23 = (*(v22->_vptr_IHandleEntity + 413))(v22);
                  if ( CountdownTimer::Now(v23 + 199) >= v23[199].m_timestamp.m_Value )
                  {
                    v24 = (*(v22->_vptr_IHandleEntity + 413))(v22);
                    if ( v24[1185] != 2 )
                      break;
                  }
                }
                ++v20;
                ++v19;
                if ( v4->m_hHeroes.m_Size <= v20 )
                  goto LABEL_50;
              }
              ++v20;
              ++v19;
              (*(*v24 + 176LL))(v24, 4740, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              v24[1185] = 2;
            }
            while ( v4->m_hHeroes.m_Size > v20 );
          }
LABEL_50:
          --e;
          v4->m_flWeight = 0.0;
          --i;
          v4->m_bPassedTrigger = 1;
          if ( e == -1 )
            return;
        }
        m_flWeight = v4->m_flWeight;
        if ( m_flWeight >= m_nValue )
          goto LABEL_38;
LABEL_23:
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&this->m_MusicElements.m_Memory.m_pMemory[i].m_hHeroes);
        v14 = this->m_MusicElements.m_Size;
        if ( v14 - e - 1 > 0 )
        {
          memmove(
            &this->m_MusicElements.m_Memory.m_pMemory[i],
            &this->m_MusicElements.m_Memory.m_pMemory[i + 1],
            80LL * (v14 - e - 1));
          v14 = this->m_MusicElements.m_Size;
        }
        this->m_MusicElements.m_Size = v14 - 1;
LABEL_26:
        if ( --e == -1 )
          return;
      }
    }
    v32 = 0;
    for ( k = 0; this->m_hHeroList.m_Size > k; ++v32 )
    {
      v34 = CEntityHandle::operator CEntityInstance *(&this->m_hHeroList.m_Memory.m_pMemory[v32]);
      v35 = v34;
      if ( v34 != 0
        && (v34[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
        && (*(v34->_vptr_IHandleEntity + 413))(v34) != 0
        && LOBYTE(v35[71].m_pEntity) == 0 )
      {
        v36 = v35->_vptr_IHandleEntity;
        v43[0] = 0;
        v37 = (v36[413])(v35);
        if ( memcmp(v37 + 1186, v43, 4u) != 0 )
        {
          (*(*v37 + 176LL))(v37, 4744, 0, 0xFFFFFFFFLL);
          v37[1186] = 0;
        }
      }
      ++k;
    }
  }
}


// CDOTAHeroList::AddPossibleBattleMusicPoint  (line 2308, @0x0000000002942600, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, FastSqrt, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, GetInt, GetSerialNumber, GrowMemory, IndexToIdentity, IsValid, Length2D, LookupEntity, QAngle, Set, ToDOTABaseNPCHero, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator bool, operator*, operator+, operator-, operator->, operator=, operator[]
// calls: CBaseEntity::GetAbsOrigin, VectorNormalize, CUtlVectorBase<CDOTAMusicSystemElement, CUtlMemory<CDOTAMusicSystemElement, int> >::AddToTail, CountdownTimer::Start, CEntityHandle::operator CEntityInstance*, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, NDebugOverlay::Circle, CUtlMemory<CHandle<CBaseEntity>, int>::Grow, Msg, __dynamic_cast
// callers: CDOTA_BaseNPC::AlertNearbyUnits
// strings: "Adding New Music Element!\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTAHeroList::AddPossibleBattleMusicPoint(
        CDOTAHeroList *const this,
        CDOTA_BaseNPC *pAttacker,
        CDOTA_BaseNPC *pVictim,
        const CEntityHandle *hAbility)
{
  const Vector *AbsOrigin; // r15
  const Vector *v9; // rax
  vec_t v10; // xmm2_4
  vec_t v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  const Vector *v14; // rax
  int m_Size; // edx
  float v16; // xmm2_4
  float v17; // xmm3_4
  vec_t v18; // xmm0_4
  CDOTAMusicSystemElement *m_pMemory; // rax
  __int64 v20; // rdx
  CDOTAMusicSystemElement *v21; // r15
  vec_t y; // xmm0_4
  float v23; // xmm1_4
  ConVar *m_pParent; // rax
  __int64 i; // r13
  CEntityInstance *v26; // rax
  CEntityInstance *v27; // r14
  const Vector *v28; // rax
  CEntityIdentity *m_pEntity; // r14
  __int16 v30; // di
  int v31; // eax
  CEntityIdentity *v32; // rdx
  CEntityIdentity *v33; // rdx
  __int64 v34; // r12
  int v35; // ebx
  __int64 v36; // rdi
  const CBaseEntity *v37; // rax
  const Vector *v38; // rax
  float v39; // xmm1_4
  float v40; // xmm0_4
  int v41; // eax
  float v42; // xmm0_4
  int v43; // eax
  __int16 v44; // si
  int v45; // r14d
  int v46; // edx
  vec_t *p_m_Index; // rax
  float m_nValue; // xmm0_4
  CEntityInstance *v49; // rdi
  void *v50; // rax
  int v51; // eax
  float v52; // xmm0_4
  float v53; // [rsp+18h] [rbp-78h]
  float src; // [rsp+20h] [rbp-70h]
  bool bNewElement; // [rsp+2Bh] [rbp-65h]
  float v56; // [rsp+2Ch] [rbp-64h]
  Vector vDirection; // [rsp+30h] [rbp-60h] BYREF
  Vector vPosition; // [rsp+40h] [rbp-50h] BYREF
  QAngle angles; // [rsp+50h] [rbp-40h] BYREF

  if ( pAttacker != 0 && pVictim != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(pVictim);
    v9 = CBaseEntity::GetAbsOrigin(pAttacker);
    v10 = v9->x - AbsOrigin->x;
    v11 = v9->z - AbsOrigin->z;
    vDirection.y = v9->y - AbsOrigin->y;
    vDirection.x = v10;
    vDirection.z = v11;
    v12 = VectorNormalize(&vDirection);
    if ( v12 <= dota_music_battle_distance.m_pParent->m_Value.m_nValue )
    {
      v13 = v12 * 0.5;
      v53 = vDirection.x * v13;
      src = vDirection.y * v13;
      v56 = v13 * vDirection.z;
      v14 = CBaseEntity::GetAbsOrigin(pVictim);
      m_Size = this->m_MusicElements.m_Size;
      v16 = v53 + v14->x;
      v17 = src + v14->y;
      v18 = v56 + v14->z;
      vPosition.x = v16;
      vPosition.y = v17;
      vPosition.z = v18;
      if ( m_Size <= 0 )
      {
LABEL_10:
        v21 = &this->m_MusicElements.m_Memory.m_pMemory[CUtlVectorBase<CDOTAMusicSystemElement,CUtlMemory<CDOTAMusicSystemElement,int>>::AddToTail(&this->m_MusicElements)];
        v21->m_vPosition.x = vPosition.x;
        y = vPosition.y;
        v21->m_flWeight = 1.0;
        v21->m_vPosition.y = y;
        v21->m_vPosition.z = vPosition.z;
        CountdownTimer::Start(&v21->m_Timer, dota_music_battle_pre_time.m_pParent->m_Value.m_fValue, v23);
        m_pParent = dota_music_battle_debug.m_pParent;
        if ( dota_music_battle_debug.m_pParent->m_Value.m_nValue != 0 )
        {
          Msg("Adding New Music Element!\n");
          m_pParent = dota_music_battle_debug.m_pParent;
        }
        bNewElement = 1;
      }
      else
      {
        m_pMemory = this->m_MusicElements.m_Memory.m_pMemory;
        v20 = &m_pMemory[(m_Size - 1) + 1];
        while ( 1 )
        {
          v21 = m_pMemory;
          if ( m_pMemory != 0
            && dota_music_battle_distance.m_pParent->m_Value.m_nValue >= fsqrt(
                                                                           ((m_pMemory->m_vPosition.x - v16)
                                                                          * (m_pMemory->m_vPosition.x - v16))
                                                                         + ((m_pMemory->m_vPosition.y - v17)
                                                                          * (m_pMemory->m_vPosition.y - v17))) )
          {
            break;
          }
          if ( ++m_pMemory == v20 )
            goto LABEL_10;
        }
        m_pParent = dota_music_battle_debug.m_pParent;
        bNewElement = 0;
      }
      v21->m_flWeight = (pAttacker->m_flAdditionalBattleMusicWeight + pVictim->m_flAdditionalBattleMusicWeight)
                      + v21->m_flWeight;
      if ( m_pParent->m_Value.m_nValue != 0 )
      {
        m_nValue = dota_music_battle_distance.m_pParent->m_Value.m_nValue;
        angles.x = -90.0;
        angles.y = 0.0;
        angles.z = 0.0;
        NDebugOverlay::Circle(&vPosition, &angles, m_nValue, 0xFFu, 0, 0, 0, 3.0, 1);
      }
      for ( i = 0; this->m_hHeroList.m_Size > i; ++i )
      {
        v26 = CEntityHandle::operator CEntityInstance *(&this->m_hHeroList.m_Memory.m_pMemory[i]);
        v27 = v26;
        if ( v26 != 0
          && (v26[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
          && (*(v26->_vptr_IHandleEntity + 408))(v26) != 0
          && LOBYTE(v27[71].m_pEntity) == 0 )
        {
          v28 = CBaseEntity::GetAbsOrigin(v27);
          if ( fsqrt(((v28->x - vPosition.x) * (v28->x - vPosition.x)) + ((v28->y - vPosition.y) * (v28->y - vPosition.y))) <= dota_music_battle_distance.m_pParent->m_Value.m_nValue )
          {
            angles.x = NAN;
            m_pEntity = v27->m_pEntity;
            if ( m_pEntity != 0 )
            {
              v30 = 0x7FFF;
              v31 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
              if ( m_pEntity->m_EHandle.m_Index != -1 )
                v30 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
              LOWORD(angles.x) = v30 | LOWORD(angles.x) & 0x8000;
              LODWORD(angles.x) = (v31 << 15) | LOWORD(angles.x) & 0x7FFF;
            }
            if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                   &v21->m_hHeroes,
                   &angles) == -1 )
            {
              angles.x = NAN;
              if ( m_pEntity != 0 )
              {
                v43 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                v44 = 0x7FFF;
                if ( m_pEntity->m_EHandle.m_Index != -1 )
                  v44 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                LOWORD(angles.x) = v44 | LOWORD(angles.x) & 0x8000;
                LODWORD(angles.x) = (v43 << 15) | LOWORD(angles.x) & 0x7FFF;
              }
              v45 = v21->m_hHeroes.m_Size;
              v46 = v45;
              if ( v45 == v21->m_hHeroes.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&v21->m_hHeroes.m_Memory, 1);
                v46 = v21->m_hHeroes.m_Size;
              }
              v21->m_hHeroes.m_Size = v46 + 1;
              p_m_Index = &v21->m_hHeroes.m_Memory.m_pMemory[v45].m_Index;
              if ( p_m_Index != 0 )
                *p_m_Index = angles.x;
            }
            v21->m_flWeight = v21->m_flWeight + 1.0;
          }
        }
      }
      if ( hAbility->m_Index + 2 > 1 )
      {
        v32 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hAbility->m_Index) >> 9) & 0x3F];
        if ( v32 != 0 )
        {
          v33 = &v32[hAbility->m_Index & 0x1FF];
          if ( v33 != 0 && hAbility->m_Index == v33->m_EHandle.m_Index )
          {
            v49 = CEntityHandle::operator CEntityInstance *(hAbility);
            if ( v49 != 0 )
            {
              v50 = __dynamic_cast(v49, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
              if ( v50 != 0 )
              {
                v51 = (*(*v50 + 1712LL))(v50);
                v52 = 2.0;
                if ( v51 == 1 )
                  v52 = 5.0;
                v21->m_flWeight = v52 + v21->m_flWeight;
              }
            }
          }
        }
      }
      if ( bNewElement && v21->m_hHeroes.m_Size > 0 )
      {
        v21->m_flDistance = 0.0;
        v34 = 0;
        v35 = 0;
        do
        {
          v36 = v34;
          ++v35;
          v34 += 4;
          v37 = CEntityHandle::operator CEntityInstance *((v21->m_hHeroes.m_Memory.m_pMemory + v36));
          v38 = CBaseEntity::GetAbsOrigin(v37);
          v39 = v38->y;
          v40 = v38->x - vPosition.x;
          v41 = v21->m_hHeroes.m_Size;
          v42 = fsqrt((v40 * v40) + ((v39 - vPosition.y) * (v39 - vPosition.y))) + v21->m_flDistance;
          v21->m_flDistance = v42;
        }
        while ( v41 > v35 );
        v21->m_flDistance = v42 / v41;
      }
    }
  }
}


// CDOTAHeroList::GetLivingHeroCountByTeam  (line 2411, @0x000000000290d9e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsRealHero, IsValid, LookupEntity, memset, operator CEntityInstance*, operator[]
// callers: CDOTA_BaseNPC::Event_Killed
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTAHeroList::GetLivingHeroCountByTeam(CDOTAHeroList *const this, int *pCounts)
{
  __int64 v3; // r12
  int v4; // ebx
  int v5; // r13d
  CHandle<CDOTA_BaseNPC_Hero> *v6; // rcx
  uint32 m_Index; // edx
  __int16 v8; // si
  CEntityIdentity *v9; // rcx
  CEntityIdentity *v10; // rcx
  unsigned __int8 *m_pInstance; // r15
  int *v12; // rax

  memset(pCounts, 0, 0x38u);
  if ( this->m_hHeroList.m_Size <= 0 )
    return 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  do
  {
    while ( 1 )
    {
      v6 = &this->m_hHeroList.m_Memory.m_pMemory[v3];
      m_Index = v6->m_Index;
      if ( v6->m_Index + 2 > 1 )
      {
        v8 = v6->m_Index;
        v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v6->m_Index) >> 9) & 0x3F];
        if ( v9 != 0 )
        {
          v10 = &v9[v8 & 0x1FF];
          if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
          {
            m_pInstance = v10->m_pInstance;
            if ( v10->m_pInstance != 0
              && (m_pInstance[2088] & 1) != 0
              && m_pInstance[3416] == 0
              && (*(*m_pInstance + 3264LL))(v10->m_pInstance) != 0 )
            {
              break;
            }
          }
        }
      }
      ++v4;
      ++v3;
      if ( this->m_hHeroList.m_Size <= v4 )
        return v5;
    }
    v12 = &pCounts[m_pInstance[383]];
    v5 += *v12 == 0;
    ++v4;
    ++*v12;
    ++v3;
  }
  while ( this->m_hHeroList.m_Size > v4 );
  return v5;
}


// CDOTAHeroList::LimitedUnitEnsureSpace  (line 2434, @0x0000000002954e30, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVectorBase, Find, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, HeroLimitedUnitTracker_t, IndexToIdentity, Insert, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, operator==<CBaseEntity>, operator[]
// calls: CUtlRBTree<CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity> >*>::Node_t, short unsigned int, CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity> >*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity> >*>::Node_t, short unsigned int>, short unsigned int> >::Find, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove, CEntityHandle::operator CEntityInstance*, UTIL_Remove, operator new, CUtlRBTree<CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity> >*>::Node_t, short unsigned int, CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity> >*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity> >*>::Node_t, short unsigned int>, short unsigned int> >::Insert, CDOTA_BaseNPC::ForceKill
// callers: CDOTA_Modifier_PhantomAssassin_Gravestone::OnDeath, CDOTA_Ability_TemplarAssassin_PsionicTrap::OnSpellStart, CDOTA_Ability_Techies_Minefield_Sign::OnSpellStart
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTAHeroList::LimitedUnitEnsureSpace(
        CDOTAHeroList *const this,
        CDOTA_BaseNPC *pHero,
        EHeroLimitedUnitType eType,
        int nMaxUnits,
        int nSpaceUnits)
{
  uint32 v7; // r13d
  CEntityIdentity *m_pEntity; // rdx
  __int16 v11; // cx
  __int64 v12; // rdx
  CUtlMap<HeroLimitedUnitTracker_t,CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >*,short unsigned int,bool (*)(const HeroLimitedUnitTracker_t&,const HeroLimitedUnitTracker_t&)>::ElemType_t elem; // rbx
  int m_Size; // eax
  int v15; // r12d
  __int64 v16; // r13
  CHandle<CBaseEntity> *v17; // rdx
  uint32 m_Index; // eax
  __int16 v19; // cx
  CEntityIdentity *v20; // rdx
  CEntityIdentity *v21; // rdx
  CHandle<CBaseEntity> *m_pMemory; // rcx
  CEntityIdentity *v23; // rax
  CEntityIdentity *v24; // rax
  CEntityInstance *v25; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *v26; // rax
  CDOTA_BaseNPC *m_pInstance; // rdi
  CUtlMap<HeroLimitedUnitTracker_t,CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >*,short unsigned int,bool (*)(const HeroLimitedUnitTracker_t&,const HeroLimitedUnitTracker_t&)> *p_m_mapHeroToLimitedUnits; // [rsp+8h] [rbp-58h]
  CUtlMap<HeroLimitedUnitTracker_t,CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >*,short unsigned int,bool (*)(const HeroLimitedUnitTracker_t&,const HeroLimitedUnitTracker_t&)>::Node_t search; // [rsp+20h] [rbp-40h] BYREF

  v7 = -1;
  if ( pHero != 0 )
  {
    m_pEntity = pHero->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v11 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v7 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v11 & 0x7FFF;
    }
  }
  search.key.hHero.m_Index = v7;
  search.key.eType = eType;
  p_m_mapHeroToLimitedUnits = &this->m_mapHeroToLimitedUnits;
  v12 = CUtlRBTree<CUtlMap<HeroLimitedUnitTracker_t,CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *,unsigned short,bool (*)(HeroLimitedUnitTracker_t const&,HeroLimitedUnitTracker_t const&)>::Node_t,unsigned short,CUtlMap<HeroLimitedUnitTracker_t,CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *,unsigned short,bool (*)(HeroLimitedUnitTracker_t const&,HeroLimitedUnitTracker_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<HeroLimitedUnitTracker_t,CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *,unsigned short,bool (*)(HeroLimitedUnitTracker_t const&,HeroLimitedUnitTracker_t const&)>::Node_t,unsigned short>,unsigned short>>::Find(
          &this->m_mapHeroToLimitedUnits.m_Tree,
          &search);
  if ( v12 == 0xFFFF )
  {
    v26 = operator new(0x18u);
    v26->m_Size = 0;
    v26->m_Memory.m_pMemory = 0;
    v26->m_Memory.m_nAllocationCount = 0;
    v26->m_Memory.m_nGrowSize = 0;
    search.key.hHero.m_Index = v7;
    search.key.eType = eType;
    search.elem = v26;
    v12 = CUtlRBTree<CUtlMap<HeroLimitedUnitTracker_t,CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *,unsigned short,bool (*)(HeroLimitedUnitTracker_t const&,HeroLimitedUnitTracker_t const&)>::Node_t,unsigned short,CUtlMap<HeroLimitedUnitTracker_t,CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *,unsigned short,bool (*)(HeroLimitedUnitTracker_t const&,HeroLimitedUnitTracker_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<HeroLimitedUnitTracker_t,CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *,unsigned short,bool (*)(HeroLimitedUnitTracker_t const&,HeroLimitedUnitTracker_t const&)>::Node_t,unsigned short>,unsigned short>>::Insert(
            &p_m_mapHeroToLimitedUnits->m_Tree,
            &search,
            ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
  }
  elem = this->m_mapHeroToLimitedUnits.m_Tree.m_Elements.m_pMemory[v12].m_Data.elem;
  m_Size = elem->m_Size;
  v15 = elem->m_Size - 1;
  if ( v15 >= 0 )
  {
    v16 = v15;
    do
    {
      v17 = &elem->m_Memory.m_pMemory[v16];
      m_Index = v17->m_Index;
      if ( v17->m_Index + 2 <= 1
        || (v19 = v17->m_Index,
            (v20 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v17->m_Index) >> 9) & 0x3F]) == 0)
        || (v21 = &v20[v19 & 0x1FF]) == 0
        || m_Index != v21->m_EHandle.m_Index
        || v21->m_pInstance == 0 )
      {
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(elem, v15);
      }
      --v15;
      --v16;
    }
    while ( v15 != -1 );
    m_Size = elem->m_Size;
  }
  if ( m_Size != 0 && nMaxUnits < nSpaceUnits + m_Size )
  {
    do
    {
      m_pMemory = elem->m_Memory.m_pMemory;
      if ( m_pMemory->m_Index + 2 > 1
        && (v23 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F]) != 0
        && (v24 = &v23[m_pMemory->m_Index & 0x1FF]) != 0
        && m_pMemory->m_Index == v24->m_EHandle.m_Index
        && (m_pInstance = v24->m_pInstance, v24->m_pInstance != 0)
        && m_pInstance->m_bIsDOTANPC )
      {
        CDOTA_BaseNPC::ForceKill(m_pInstance, 0);
      }
      else
      {
        v25 = CEntityHandle::operator CEntityInstance *(elem->m_Memory.m_pMemory);
        if ( v25 != 0 )
          UTIL_Remove(v25);
      }
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(elem, 0);
    }
    while ( elem->m_Size != 0 && nSpaceUnits + elem->m_Size > nMaxUnits );
  }
}


// CDOTAHeroList::LimitedUnitTrack  (line 2477, @0x00000000029550d0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, Find, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, HeroLimitedUnitTracker_t, Insert, Set, operator=, operator[]
// calls: CUtlRBTree<CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity> >*>::Node_t, short unsigned int, CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity> >*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity> >*>::Node_t, short unsigned int>, short unsigned int> >::Find, operator new, CUtlRBTree<CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity> >*>::Node_t, short unsigned int, CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity> >*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<HeroLimitedUnitTracker_t, CUtlVector<CHandle<CBaseEntity> >*>::Node_t, short unsigned int>, short unsigned int> >::Insert, CUtlMemory<CHandle<CBaseEntity>, int>::Grow
// callers: CDOTA_Modifier_PhantomAssassin_Gravestone::OnDeath, CDOTA_Ability_TemplarAssassin_PsionicTrap::OnSpellStart, CDOTA_Ability_Techies_Minefield_Sign::OnSpellStart
void __fastcall CDOTAHeroList::LimitedUnitTrack(
        CDOTAHeroList *const this,
        CDOTA_BaseNPC *pHero,
        EHeroLimitedUnitType eType,
        CBaseEntity *pUnit)
{
  uint32 v4; // r14d
  CEntityIdentity *m_pEntity; // rsi
  __int16 v9; // r8
  __int64 v10; // rdx
  CUtlMap<HeroLimitedUnitTracker_t,CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >*,short unsigned int,bool (*)(const HeroLimitedUnitTracker_t&,const HeroLimitedUnitTracker_t&)>::ElemType_t elem; // rbx
  CEntityIdentity *v12; // rdx
  int v13; // eax
  __int16 v14; // cx
  __int64 m_Size; // r12
  int v16; // eax
  CHandle<CBaseEntity> *v17; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *v18; // rax
  CUtlMap<HeroLimitedUnitTracker_t,CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >*,short unsigned int,bool (*)(const HeroLimitedUnitTracker_t&,const HeroLimitedUnitTracker_t&)>::Node_t search; // [rsp+20h] [rbp-40h] BYREF

  v4 = -1;
  if ( pHero != 0 )
  {
    m_pEntity = pHero->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v9 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v4 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v9 & 0x7FFF;
    }
  }
  search.key.hHero.m_Index = v4;
  search.key.eType = eType;
  v10 = CUtlRBTree<CUtlMap<HeroLimitedUnitTracker_t,CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *,unsigned short,bool (*)(HeroLimitedUnitTracker_t const&,HeroLimitedUnitTracker_t const&)>::Node_t,unsigned short,CUtlMap<HeroLimitedUnitTracker_t,CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *,unsigned short,bool (*)(HeroLimitedUnitTracker_t const&,HeroLimitedUnitTracker_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<HeroLimitedUnitTracker_t,CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *,unsigned short,bool (*)(HeroLimitedUnitTracker_t const&,HeroLimitedUnitTracker_t const&)>::Node_t,unsigned short>,unsigned short>>::Find(
          &this->m_mapHeroToLimitedUnits.m_Tree,
          &search);
  if ( v10 == 0xFFFF )
  {
    v18 = operator new(0x18u);
    v18->m_Size = 0;
    v18->m_Memory.m_pMemory = 0;
    v18->m_Memory.m_nAllocationCount = 0;
    v18->m_Memory.m_nGrowSize = 0;
    search.key.hHero.m_Index = v4;
    search.key.eType = eType;
    search.elem = v18;
    v10 = CUtlRBTree<CUtlMap<HeroLimitedUnitTracker_t,CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *,unsigned short,bool (*)(HeroLimitedUnitTracker_t const&,HeroLimitedUnitTracker_t const&)>::Node_t,unsigned short,CUtlMap<HeroLimitedUnitTracker_t,CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *,unsigned short,bool (*)(HeroLimitedUnitTracker_t const&,HeroLimitedUnitTracker_t const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<HeroLimitedUnitTracker_t,CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *,unsigned short,bool (*)(HeroLimitedUnitTracker_t const&,HeroLimitedUnitTracker_t const&)>::Node_t,unsigned short>,unsigned short>>::Insert(
            &this->m_mapHeroToLimitedUnits.m_Tree,
            &search,
            ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
  }
  elem = this->m_mapHeroToLimitedUnits.m_Tree.m_Elements.m_pMemory[v10].m_Data.elem;
  search.key.hHero.m_Index = -1;
  if ( pUnit != 0 )
  {
    v12 = pUnit->m_pEntity;
    if ( v12 != 0 )
    {
      v13 = (v12->m_EHandle.m_Index >> 15) - (v12->m_flags & 1);
      v14 = 0x7FFF;
      if ( v12->m_EHandle.m_Index != -1 )
        v14 = v12->m_EHandle.m_Index & 0x7FFF;
      LOWORD(search.key.hHero.m_Index) = v14 | search.key.hHero.m_Index & 0x8000;
      search.key.hHero.m_Index = (v13 << 15) | search.key.hHero.m_Index & 0x7FFF;
    }
  }
  m_Size = elem->m_Size;
  v16 = elem->m_Size;
  if ( m_Size == elem->m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&elem->m_Memory, 1);
    v16 = elem->m_Size;
  }
  elem->m_Size = v16 + 1;
  v17 = &elem->m_Memory.m_pMemory[m_Size];
  if ( v17 != 0 )
    v17->m_Index = search.key.hHero;
}


// CDOTA_BaseNPC_Hero::GetDataDescMap  (line 2495, @0x00000000028f54d0, libserver.so)
// globals: CDOTA_BaseNPC_Hero::m_DataMap
datamap_t *__fastcall CDOTA_BaseNPC_Hero::GetDataDescMap(CDOTA_BaseNPC_Hero *const this)
{
  return &CDOTA_BaseNPC_Hero::m_DataMap;
}


// CDOTA_BaseNPC_Hero::AddDatadescMetadataKeys  (line 2495, @0x000000000290db00, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CDOTA_BaseNPC_Hero::GetEntityClass(void)
void __fastcall CDOTA_BaseNPC_Hero::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CDOTA_BaseNPC_Hero::GetEntityClass);
}


// CDOTA_BaseNPC_Hero::GetBaseMap  (line 2495, @0x000000000290db20, libserver.so)
// globals: CDOTA_BaseNPC::m_DataMap
datamap_t *__cdecl CDOTA_BaseNPC_Hero::GetBaseMap()
{
  return &CDOTA_BaseNPC::m_DataMap;
}


// DataMapInit<CDOTA_BaseNPC_Hero>  (line 2495, @0x000000000290db30, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "CDOTA_BaseNPC_Hero"
// globals: `guard variable for'DataMapInit<CDOTA_BaseNPC_Hero>(CDOTA_BaseNPC_Hero *)::nameHolder, CDOTA_BaseNPC::m_DataMap, CDOTA_BaseNPC_Hero::GetEntityClass(void), CDOTA_BaseNPC_Hero::m_DataMap, DataMapInit<CDOTA_BaseNPC_Hero>(CDOTA_BaseNPC_Hero *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CDOTA_BaseNPC_Hero>(CDOTA_BaseNPC_Hero *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CDOTA_BaseNPC_Hero>(CDOTA_BaseNPC_Hero *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CDOTA_BaseNPC_Hero>(CDOTA_BaseNPC_Hero *)::nameHolder) != 0 )
  {
    DataMapInit<CDOTA_BaseNPC_Hero>(CDOTA_BaseNPC_Hero *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CDOTA_BaseNPC_Hero>(CDOTA_BaseNPC_Hero *)::nameHolder.m_pszBase = "CDOTA_BaseNPC_Hero";
    DataMapInit<CDOTA_BaseNPC_Hero>(CDOTA_BaseNPC_Hero *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CDOTA_BaseNPC_Hero>(CDOTA_BaseNPC_Hero *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CDOTA_BaseNPC_Hero>(CDOTA_BaseNPC_Hero *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CDOTA_BaseNPC_Hero>(CDOTA_BaseNPC_Hero *)::nameHolder.m_nLenBase = 18;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CDOTA_BaseNPC_Hero>(CDOTA_BaseNPC_Hero *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CDOTA_BaseNPC_Hero>(CDOTA_BaseNPC_Hero *)::nameHolder,
      &_dso_handle);
  }
  CDOTA_BaseNPC_Hero::m_DataMap.dataNumFields = 12;
  CDOTA_BaseNPC_Hero::m_DataMap.baseMap = &CDOTA_BaseNPC::m_DataMap;
  CDOTA_BaseNPC_Hero::m_DataMap.dataDesc = &DataMapInit<CDOTA_BaseNPC_Hero>(CDOTA_BaseNPC_Hero *)::dataDesc[1];
  AddDatadescMetadataKeys(&CDOTA_BaseNPC_Hero::m_DataMap, CDOTA_BaseNPC_Hero::GetEntityClass);
  return &CDOTA_BaseNPC_Hero::m_DataMap;
}


// CDOTA_BaseNPC_Hero::YouForgotToImplementOrDeclareServerClass  (line 2510, @0x00000000028f54e0, libserver.so)
int __fastcall CDOTA_BaseNPC_Hero::YouForgotToImplementOrDeclareServerClass(CDOTA_BaseNPC_Hero *const this)
{
  return 0;
}


// CDOTA_BaseNPC_Hero::GetServerClass  (line 2510, @0x00000000029007d0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_BaseNPC_Hero::GetServerClass(CDOTA_BaseNPC_Hero *const this)
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


// CDOTA_BaseNPC_Pet::ShouldTransmit  (line 2516, @0x00000000028fc9f0, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsValid, LookupEntity, operator bool
// calls: CDOTA_BaseNPC::ShouldTransmit
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_BaseNPC_Pet::ShouldTransmit(CDOTA_BaseNPC_Pet *const this, const CGameCheckTransmitInfo *pInfo)
{
  int ShouldTransmit; // eax
  uint32 m_Index; // edx
  int v6; // r12d
  CEntityIdentity *v7; // rax
  CEntityIdentity *v8; // rax
  CTeam *m_pRecipientTeam; // rdi
  int v11; // eax

  ShouldTransmit = CDOTA_BaseNPC::ShouldTransmit(this, pInfo);
  m_Index = this->m_hHeroHandle.m_Index;
  v6 = ShouldTransmit;
  if ( m_Index + 2 <= 1 )
    return v6;
  v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hHeroHandle.m_Index) >> 9) & 0x3F];
  if ( v7 == 0 )
    return v6;
  v8 = &v7[this->m_hHeroHandle.m_Index & 0x1FF];
  if ( v8 == 0 )
    return v6;
  if ( m_Index != v8->m_EHandle.m_Index )
    return v6;
  m_pRecipientTeam = pInfo->m_pRecipientTeam;
  if ( m_pRecipientTeam == 0 )
    return v6;
  v11 = (*(m_pRecipientTeam->_vptr_IHandleEntity + 210))(m_pRecipientTeam, pInfo, v8->m_pInstance);
  if ( v11 != 0 )
    return v11;
  return v6;
}


// CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero  (line 2537, @0x000000000292a920, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CDOTAHeroKillCriteria, CDOTAMusicProbabilityEntry, CDOTAMusicProbabilityGank, CDOTA_BaseNPC_Additive, CEntityHandle, CHandle, CNetworkVarBase, COtherHeroTalk, CUtlMemory, CUtlMemoryFixed, CUtlString, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, CUtlVectorFixed, EnsureCapacity, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, Get, GetInstance, KillInfo_t, NetworkStateChanged, Purge, RemoveAll, Set, item_definition_index_t, memcpy, operator!=<CDOTA_BaseNPC_Hero>, operator=, operator=<CEntityHandle>, operator=<bool>, operator=<float>, operator=<int>, sLoadoutItem, ~CDOTAHeroKillCriteria, ~CDOTAMusicProbabilityEntry, ~CDOTA_BaseNPC_Additive, ~COtherHeroTalk, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixed
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC, CResponseCriteriaSet::CResponseCriteriaSet, CountdownTimer::CountdownTimer, CEntityHandle::operator CEntityInstance*, MakeEntitySystemString, operator!=<CBaseEntity>, Plat_IsInDebugSessionRaw, memcpy, CDOTA_BaseNPC::~CDOTA_BaseNPC, _Unwind_Resume, CUtlString::FreeMemoryBlock, CUtlVectorBase<sAcquireHistory, CUtlMemory<sAcquireHistory, int> >::~CUtlVectorBase (21 total)
// callers: CDOTA_BaseNPC_Hero::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Unit_Hero_AncientApparition::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Unit_Hero_AntiMage::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Unit_Hero_Axe::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Unit_Hero_Bane::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Unit_Hero_Bloodseeker::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Unit_Hero_CrystalMaiden::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Unit_Hero_DrowRanger::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Unit_Hero_Earthshaker::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Unit_Hero_Juggernaut::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Unit_Hero_Kunkka::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Unit_Hero_Lich::CEntityInstanceEntityClass::ConstructInstance (118 total)
// strings: "item_tpscroll", "item_dust", "item_gem", "item_ward_sentry", "item_ward_observer", "item_courier" (7 total)
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(CDOTA_BaseNPC_Hero *const this)
{
  __int64 v2; // rdi
  bool v3; // cc
  uint32 m_nGrowSize; // eax
  float *v5; // rsi
  __int64 v6; // rax
  float *v7; // rax
  int m_Value; // r11d
  double v9; // xmm0_8
  double v10; // xmm1_8
  double v11; // xmm2_8
  bool v12; // zf
  int v13; // r9d
  CEntityInstance *v14; // r14
  double v15; // xmm0_8
  double v16; // xmm1_8
  double v17; // xmm2_8
  UtlSymLargeId_t v18; // rax
  UtlSymLargeId_t v19; // rax
  UtlSymLargeId_t v20; // rax
  UtlSymLargeId_t v21; // rax
  UtlSymLargeId_t v22; // rax
  UtlSymLargeId_t v23; // rax
  UtlSymLargeId_t v24; // rax
  int v25; // r8d
  uint16 m_Data; // ax
  float *m_pMemory; // r13
  float *v28; // rax
  CEntityHandle v29; // [rsp+0h] [rbp-B0h] BYREF
  CHandle<CBaseEntity> b; // [rsp+10h] [rbp-A0h] BYREF
  UtlSymLargeId_t v31; // [rsp+20h] [rbp-90h]
  UtlSymLargeId_t v32; // [rsp+30h] [rbp-80h]
  UtlSymLargeId_t v33; // [rsp+40h] [rbp-70h]
  UtlSymLargeId_t v34; // [rsp+50h] [rbp-60h]
  UtlSymLargeId_t v35; // [rsp+60h] [rbp-50h]
  UtlSymLargeId_t v36; // [rsp+70h] [rbp-40h]
  UtlSymLargeId_t v37; // [rsp+80h] [rbp-30h]

  CDOTA_BaseNPC::CDOTA_BaseNPC(this);
  this->_vptr_IHandleEntity = &off_42F7590;
  this->_vptr_INextBotEventResponder = &off_42F8570;
  this->_vptr_CObstructionObject = &off_42F88A0;
  this->m_otherHeroTalk.m_infos.m_Size = 0;
  if ( (this & 3) != 0 && Plat_IsInDebugSessionRaw(v2) != 0 )
    __debugbreak();
  this->m_flStrength.m_Value = 0.0;
  this->m_flAgility.m_Value = 0.0;
  this->m_flIntellect.m_Value = 0.0;
  this->m_flStrengthTotal.m_Value = 0.0;
  this->m_flAgilityTotal.m_Value = 0.0;
  this->m_flIntellectTotal.m_Value = 0.0;
  this->m_iRecentDamage.m_Value = 0;
  this->m_iPrimaryAttribute.m_Value = 0;
  this->m_hNewARDMHero.m_Index = -1;
  this->m_hLastHealEntity.m_Index = -1;
  this->m_HeroDamageInfoArray.m_Size = 0;
  this->m_HeroDamageInfoArray.m_Memory.m_pMemory = 0;
  this->m_HeroDamageInfoArray.m_Memory.m_nAllocationCount = 0;
  this->m_HeroDamageInfoArray.m_Memory.m_nGrowSize = 0;
  this->m_vecRecentModifiers.m_Size = 0;
  this->m_vecRecentModifiers.m_Memory.m_pMemory = 0;
  this->m_vecRecentModifiers.m_Memory.m_nAllocationCount = 0;
  this->m_vecRecentModifiers.m_Memory.m_nGrowSize = 0;
  this->m_iAbilityPoints.m_Value = 0;
  this->m_iCurrentXP.m_Value = 0;
  this->m_flRespawnTime.m_Value = 0.0;
  this->m_flRespawnTimePenalty.m_Value = 0.0;
  this->m_iPlayerID.m_Value = 0;
  this->m_hReplicatingOtherHeroModel.m_Value.m_Index = -1;
  CResponseCriteriaSet::CResponseCriteriaSet(&this->m_KillCriteria.m_criteria);
  this->m_KillCriteria.m_bOverride = 0;
  CountdownTimer::CountdownTimer(&this->m_RespawnMusicTimer);
  CountdownTimer::CountdownTimer(&this->m_HeroKillTimer);
  CountdownTimer::CountdownTimer(&this->m_MultipleHeroKillTimer);
  CountdownTimer::CountdownTimer(&this->m_MultipleLastHitTimer);
  this->m_KillInfo.m_victimname.u.m_Id = 0;
  this->m_KillInfo.m_inflictorname.u.m_Id = 0;
  CountdownTimer::CountdownTimer(&this->m_DirectorAbilityActivity);
  this->m_bReincarnating.m_Value = 0;
  this->m_bCustomKillEffect.m_Value = 0;
  this->m_flSpawnedAt.m_Value = 0.0;
  CountdownTimer::CountdownTimer(&this->m_PurchaseItemTimer);
  CountdownTimer::CountdownTimer(&this->m_RetrieveItemsFromStashTimer);
  CountdownTimer::CountdownTimer(&this->m_RequestGoToSecretShopTimer);
  this->m_Loadout.m_Size = 0;
  this->m_Loadout.m_Memory.m_pMemory = 0;
  this->m_Loadout.m_Memory.m_nAllocationCount = 0;
  this->m_Loadout.m_Memory.m_nGrowSize = 0;
  this->m_TPScroll.name.u.m_Id = 0;
  this->m_Dust.name.u.m_Id = 0;
  this->m_Gem.name.u.m_Id = 0;
  this->m_SentryWard.name.u.m_Id = 0;
  this->m_ObserverWard.name.u.m_Id = 0;
  this->m_Courier.name.u.m_Id = 0;
  this->m_FlyingCourier.name.u.m_Id = 0;
  this->m_hPets.m_Size = 0;
  this->m_hPets.m_Memory.m_pMemory = 0;
  this->m_hPets.m_Memory.m_nAllocationCount = 0;
  this->m_hPets.m_Memory.m_nGrowSize = 0;
  this->m_MusicProbabilityGank.m_flProbabilityElements.m_Size = 0;
  this->m_MusicProbabilityGank.m_flProbabilityElements.m_Memory.m_pMemory = 0;
  this->m_MusicProbabilityGank.m_flProbabilityElements.m_Memory.m_nAllocationCount = 0;
  this->m_MusicProbabilityGank.m_flProbabilityElements.m_Memory.m_nGrowSize = 0;
  this->m_MusicProbabilityGank._vptr_CDOTAMusicProbabilityEntry = &off_42F8950;
  CountdownTimer::CountdownTimer(&this->m_MusicProbabilityGank.m_GankTimer);
  v3 = this->m_MusicProbabilityGank.m_flProbabilityElements.m_Memory.m_nAllocationCount <= 3;
  this->m_MusicProbabilityGank.m_flProbability = 0.0;
  if ( v3 )
  {
    m_nGrowSize = this->m_MusicProbabilityGank.m_flProbabilityElements.m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = this->m_MusicProbabilityGank.m_flProbabilityElements.m_Memory.m_pMemory;
        v28 = (**g_pMemAlloc)(g_pMemAlloc, 16);
        this->m_MusicProbabilityGank.m_flProbabilityElements.m_Memory.m_pMemory = v28;
        if ( m_pMemory != 0 )
          memcpy(v28, m_pMemory, 4LL * this->m_MusicProbabilityGank.m_flProbabilityElements.m_Memory.m_nAllocationCount);
        this->m_MusicProbabilityGank.m_flProbabilityElements.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v5 = this->m_MusicProbabilityGank.m_flProbabilityElements.m_Memory.m_pMemory;
        v6 = *g_pMemAlloc;
        if ( v5 != 0 )
          v7 = (*(v6 + 8))(g_pMemAlloc, v5, 16);
        else
          v7 = (*v6)(g_pMemAlloc, 16);
        this->m_MusicProbabilityGank.m_flProbabilityElements.m_Memory.m_pMemory = v7;
      }
      this->m_MusicProbabilityGank.m_flProbabilityElements.m_Memory.m_nAllocationCount = 4;
    }
  }
  m_Value = this->m_iPrimaryAttribute.m_Value;
  this->m_hEconConsumableAbility.m_Value.m_Index = -1;
  this->m_nEconConsumableItemIndex.m_Data = 0;
  this->m_strCustomKillEffect.m_pString = 0;
  this->m_strCustomHexModel.m_pString = 0;
  this->m_AbilitiesPendingDelete.m_Size = 0;
  this->m_AbilitiesPendingDelete.m_Memory.m_pMemory = 0;
  this->m_AbilitiesPendingDelete.m_Memory.m_nAllocationCount = 0;
  this->m_AbilitiesPendingDelete.m_Memory.m_nGrowSize = 0;
  this->m_vecItemPurchaseHistory.m_Size = 0;
  this->m_vecItemPurchaseHistory.m_Memory.m_pMemory = 0;
  this->m_vecItemPurchaseHistory.m_Memory.m_nAllocationCount = 0;
  this->m_vecItemPurchaseHistory.m_Memory.m_nGrowSize = 0;
  this->m_vecAbilitySkillHistory.m_Size = 0;
  this->m_vecAbilitySkillHistory.m_Memory.m_pMemory = 0;
  this->m_vecAbilitySkillHistory.m_Memory.m_nAllocationCount = 0;
  this->m_vecAbilitySkillHistory.m_Memory.m_nGrowSize = 0;
  this->m_pszLastUsedActiveAbility.m_pString = 0;
  if ( m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4660, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iPrimaryAttribute.m_Value = 0;
  }
  v9 = 0.0;
  if ( this->m_flStrength.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4632, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0.0);
    this->m_flStrength.m_Value = 0.0;
  }
  this->m_flStrengthGain = 0.0;
  v10 = 0.0;
  if ( this->m_flIntellect.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4640, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v9, 0.0);
    this->m_flIntellect.m_Value = 0.0;
  }
  this->m_flIntellectGain = 0.0;
  v11 = 0.0;
  if ( this->m_flAgility.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4636, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v9, v10, 0.0);
    this->m_flAgility.m_Value = 0.0;
  }
  v12 = this->m_iPlayerID.m_Value == -1;
  this->m_bFirstSpawn = 0;
  this->m_flAgilityGain = 0.0;
  this->m_flTimeUntilRespawn = 0.0;
  this->m_flScriptRespawnTime = -1.0;
  this->m_flDeathTime = 0.0;
  this->m_fMostRecentDamageTime = 0.0;
  if ( !v12 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4800, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v9, v10, v11);
    this->m_iPlayerID.m_Value = -1;
  }
  v13 = this->m_iBotDebugData.m_Value;
  this->m_iIllusionOriginalPlayerID = -1;
  this->m_iHeroID = 0;
  this->m_pBot = 0;
  if ( v13 != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2180, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v9, v10, v11);
    this->m_iBotDebugData.m_Value = 0;
  }
  v29.m_Index = -1;
  v14 = CEntityHandle::operator CEntityInstance *(&this->m_hReplicatingOtherHeroModel.m_Value);
  if ( v14 != CEntityHandle::operator CEntityInstance *(&v29) )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4812, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_hReplicatingOtherHeroModel.m_Value = v29.m_Index;
  }
  if ( this->m_bReincarnating.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 5400, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bReincarnating.m_Value = 0;
  }
  if ( this->m_flSpawnedAt.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 5404, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v15, v16, v17, 0.0);
    this->m_flSpawnedAt.m_Value = 0.0;
  }
  this->m_bDoesNextItemCompleteRecipe = 0;
  this->m_iNextItemToPurchase = -1;
  MakeEntitySystemString("item_tpscroll");
  v18 = v31;
  this->m_TPScroll.bPurchased = 0;
  this->m_TPScroll.iFlags = 80;
  this->m_TPScroll.name.u.m_Id = v18;
  MakeEntitySystemString("item_dust");
  v19 = v32;
  this->m_Dust.bPurchased = 0;
  this->m_Dust.iFlags = 80;
  this->m_Dust.name.u.m_Id = v19;
  MakeEntitySystemString("item_gem");
  v20 = v33;
  this->m_Gem.bPurchased = 0;
  this->m_Gem.iFlags = 64;
  this->m_Gem.name.u.m_Id = v20;
  MakeEntitySystemString("item_ward_sentry");
  v21 = v34;
  this->m_SentryWard.bPurchased = 0;
  this->m_SentryWard.iFlags = 80;
  this->m_SentryWard.name.u.m_Id = v21;
  MakeEntitySystemString("item_ward_observer");
  v22 = v35;
  this->m_ObserverWard.bPurchased = 0;
  this->m_ObserverWard.iFlags = 80;
  this->m_ObserverWard.name.u.m_Id = v22;
  MakeEntitySystemString("item_courier");
  v23 = v36;
  this->m_Courier.bPurchased = 0;
  this->m_Courier.iFlags = 80;
  this->m_Courier.name.u.m_Id = v23;
  MakeEntitySystemString("item_flying_courier");
  v24 = v37;
  this->m_FlyingCourier.bPurchased = 0;
  this->m_FlyingCourier.iFlags = 80;
  this->m_fBuybackCooldown = 0.0;
  b.m_Index = -1;
  this->m_FlyingCourier.name.u.m_Id = v24;
  if ( operator!=<CBaseEntity>(&this->m_hEconConsumableAbility.m_Value, &b) )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 5736, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_hEconConsumableAbility.m_Value = b;
  }
  v25 = this->m_iBKBChargesUsed.m_Value;
  this->m_bBuybackDisabled = 0;
  m_Data = INVALID_ITEM_DEF_INDEX.m_Data;
  this->m_iUnitType |= 1u;
  this->m_nEconConsumableItemIndex.m_Data = m_Data;
  if ( v25 != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2176, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iBKBChargesUsed.m_Value = 0;
  }
  v12 = !this->m_bCustomKillEffect.m_Value;
  this->m_flLastTimeLookedAtByDirector = 0.0;
  if ( !v12 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 5401, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bCustomKillEffect.m_Value = 0;
  }
  this->m_bPreventPetSpawn = 0;
  this->m_bScriptDisableRespawns = 0;
  this->m_bHasChangedCourierSincePrecache = 0;
  this->m_bHasChangedWardsSincePrecache = 0;
  this->m_pAtPrecacheCourierView = 0;
  this->m_pAtPrecacheWardView = 0;
  this->m_nLastHealedAmount = 0;
  this->m_flLastHealedTime = 0.0;
  this->m_hLastHealEntity.m_Index = -1;
}


// CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero  (line 2629, @0x000000000292a3f0, libserver.so)  // inlines: CEntityHandle, CHandle, Element, FastRemove, FindAndFastRemove, GetEHandle, GetEntryIndex, GetSerialNumber, Invalidate, NetworkStateChanged, Purge, RemoveAll, RemoveHeroFromList, Set, memcpy, operator=<float>, operator[], ~CDOTAHeroKillCriteria, ~CDOTAMusicProbabilityEntry, ~CDOTAMusicProbabilityGank, ~CDOTA_BaseNPC_Additive, ~COtherHeroTalk, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixed
// calls: CUtlVectorBase<CHandle<CDOTA_BaseNPC_Hero>, CUtlMemory<CHandle<CDOTA_BaseNPC_Hero>, int> >::Find, CUtlString::FreeMemoryBlock, CUtlMemory<float, int>::Purge, CUtlVectorBase<sLoadoutItem, CUtlMemory<sLoadoutItem, int> >::RemoveAll, CResponseCriteriaSet::~CResponseCriteriaSet, CDOTA_BaseNPC::~CDOTA_BaseNPC, CUtlMemory<sLoadoutItem, int>::Purge, CUtlMemory<CHandle<CDOTA_BaseNPC_Pet>, int>::Purge, CUtlMemory<sAcquireHistory, int>::Purge, CUtlMemory<CDOTABaseAbility*, int>::Purge, CUtlMemory<CDOTA_BaseNPC_Hero::sHeroDamageInfo, int>::Purge, CUtlMemory<CDOTA_BaseNPC_Hero::sHeroRecentModifierInfo, int>::Purge
// callers: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CDOTA_Unit_Hero_Bane::~CDOTA_Unit_Hero_Bane, CDOTA_Unit_Hero_AncientApparition::~CDOTA_Unit_Hero_AncientApparition, CDOTA_Unit_Hero_AntiMage::~CDOTA_Unit_Hero_AntiMage, CDOTA_Unit_Hero_Axe::~CDOTA_Unit_Hero_Axe, CDOTA_Unit_Hero_Bloodseeker::~CDOTA_Unit_Hero_Bloodseeker, CDOTA_Unit_Hero_CrystalMaiden::~CDOTA_Unit_Hero_CrystalMaiden, CDOTA_Unit_Hero_DrowRanger::~CDOTA_Unit_Hero_DrowRanger, CDOTA_Unit_Hero_Earthshaker::~CDOTA_Unit_Hero_Earthshaker, CDOTA_Unit_Hero_Juggernaut::~CDOTA_Unit_Hero_Juggernaut, CDOTA_Unit_Hero_Kunkka::~CDOTA_Unit_Hero_Kunkka, CDOTA_Unit_Hero_Lich::~CDOTA_Unit_Hero_Lich (116 total)
void __fastcall CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(CDOTA_BaseNPC_Hero *const this)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v3; // cx
  int v4; // eax
  int v5; // edx
  CEconItemView *m_pAtPrecacheCourierView; // rdi
  CEconItemView *m_pAtPrecacheWardView; // rdi
  bool v8; // zf
  CHandle<CDOTA_BaseNPC_Hero> src; // [rsp+0h] [rbp-20h] BYREF

  this->_vptr_IHandleEntity = &off_42F7590;
  m_pEntity = this->m_pEntity;
  src.m_Index = -1;
  this->_vptr_INextBotEventResponder = &off_42F8570;
  this->_vptr_CObstructionObject = &off_42F88A0;
  if ( m_pEntity != 0 )
  {
    v3 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v3 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    src.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v3 & 0x7FFF;
  }
  v4 = CUtlVectorBase<CHandle<CDOTA_BaseNPC_Hero>,CUtlMemory<CHandle<CDOTA_BaseNPC_Hero>,int>>::Find(
         &g_HeroList.m_hHeroList,
         &src);
  if ( v4 != -1 && g_HeroList.m_hHeroList.m_Size > 0 )
  {
    v5 = g_HeroList.m_hHeroList.m_Size - 1;
    if ( v4 != g_HeroList.m_hHeroList.m_Size - 1 )
    {
      g_HeroList.m_hHeroList.m_Memory.m_pMemory[v4].m_Index = g_HeroList.m_hHeroList.m_Memory.m_pMemory[v5].m_Index;
      v5 = g_HeroList.m_hHeroList.m_Size - 1;
    }
    g_HeroList.m_hHeroList.m_Size = v5;
  }
  m_pAtPrecacheCourierView = this->m_pAtPrecacheCourierView;
  if ( m_pAtPrecacheCourierView != 0 )
    (*(m_pAtPrecacheCourierView->_vptr_IEconItemInterface + 2))(m_pAtPrecacheCourierView);
  m_pAtPrecacheWardView = this->m_pAtPrecacheWardView;
  if ( m_pAtPrecacheWardView != 0 )
    (*(m_pAtPrecacheWardView->_vptr_IEconItemInterface + 2))(m_pAtPrecacheWardView);
  if ( this->m_pszLastUsedActiveAbility.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_pszLastUsedActiveAbility);
  v8 = (this->m_vecAbilitySkillHistory.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecAbilitySkillHistory.m_Size = 0;
  if ( v8 )
  {
    CUtlMemory<sAcquireHistory,int>::Purge(&this->m_vecAbilitySkillHistory.m_Memory);
    if ( (this->m_vecAbilitySkillHistory.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<sAcquireHistory,int>::Purge(&this->m_vecAbilitySkillHistory.m_Memory);
  }
  v8 = (this->m_vecItemPurchaseHistory.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecItemPurchaseHistory.m_Size = 0;
  if ( v8 )
  {
    CUtlMemory<sAcquireHistory,int>::Purge(&this->m_vecItemPurchaseHistory.m_Memory);
    if ( (this->m_vecItemPurchaseHistory.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<sAcquireHistory,int>::Purge(&this->m_vecItemPurchaseHistory.m_Memory);
  }
  v8 = (this->m_AbilitiesPendingDelete.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_AbilitiesPendingDelete.m_Size = 0;
  if ( v8 )
  {
    CUtlMemory<CDOTABaseAbility *,int>::Purge(&this->m_AbilitiesPendingDelete.m_Memory);
    if ( (this->m_AbilitiesPendingDelete.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTABaseAbility *,int>::Purge(&this->m_AbilitiesPendingDelete.m_Memory);
  }
  if ( this->m_strCustomHexModel.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_strCustomHexModel);
  if ( this->m_strCustomKillEffect.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_strCustomKillEffect);
  v8 = (this->m_MusicProbabilityGank.m_flProbabilityElements.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_MusicProbabilityGank.m_flProbabilityElements.m_Size = 0;
  this->m_MusicProbabilityGank._vptr_CDOTAMusicProbabilityEntry = &off_42F8950;
  if ( v8 )
    CUtlMemory<float,int>::Purge(&this->m_MusicProbabilityGank.m_flProbabilityElements.m_Memory);
  if ( this->m_MusicProbabilityGank.m_GankTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_MusicProbabilityGank.m_GankTimer._vptr_CountdownTimer + 2))(
      &this->m_MusicProbabilityGank.m_GankTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      -1.0);
    this->m_MusicProbabilityGank.m_GankTimer.m_timestamp.m_Value = -1.0;
  }
  v8 = (this->m_MusicProbabilityGank.m_flProbabilityElements.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_MusicProbabilityGank.m_flProbabilityElements.m_Size = 0;
  this->m_MusicProbabilityGank._vptr_CDOTAMusicProbabilityEntry = &off_42D7B90;
  if ( v8 )
  {
    CUtlMemory<float,int>::Purge(&this->m_MusicProbabilityGank.m_flProbabilityElements.m_Memory);
    if ( (this->m_MusicProbabilityGank.m_flProbabilityElements.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<float,int>::Purge(&this->m_MusicProbabilityGank.m_flProbabilityElements.m_Memory);
  }
  v8 = (this->m_hPets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_hPets.m_Size = 0;
  if ( v8 )
  {
    CUtlMemory<CHandle<CDOTA_BaseNPC_Pet>,int>::Purge(&this->m_hPets.m_Memory);
    if ( (this->m_hPets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CDOTA_BaseNPC_Pet>,int>::Purge(&this->m_hPets.m_Memory);
  }
  CUtlVectorBase<sLoadoutItem,CUtlMemory<sLoadoutItem,int>>::RemoveAll(&this->m_Loadout);
  if ( (this->m_Loadout.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<sLoadoutItem,int>::Purge(&this->m_Loadout.m_Memory);
    if ( (this->m_Loadout.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<sLoadoutItem,int>::Purge(&this->m_Loadout.m_Memory);
  }
  CResponseCriteriaSet::~CResponseCriteriaSet(&this->m_KillCriteria.m_criteria);
  v8 = (this->m_vecRecentModifiers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecRecentModifiers.m_Size = 0;
  if ( v8 )
  {
    CUtlMemory<CDOTA_BaseNPC_Hero::sHeroRecentModifierInfo,int>::Purge(&this->m_vecRecentModifiers.m_Memory);
    if ( (this->m_vecRecentModifiers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_BaseNPC_Hero::sHeroRecentModifierInfo,int>::Purge(&this->m_vecRecentModifiers.m_Memory);
  }
  v8 = (this->m_HeroDamageInfoArray.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_HeroDamageInfoArray.m_Size = 0;
  if ( v8 )
  {
    CUtlMemory<CDOTA_BaseNPC_Hero::sHeroDamageInfo,int>::Purge(&this->m_HeroDamageInfoArray.m_Memory);
    if ( (this->m_HeroDamageInfoArray.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_BaseNPC_Hero::sHeroDamageInfo,int>::Purge(&this->m_HeroDamageInfoArray.m_Memory);
  }
  this->m_otherHeroTalk.m_infos.m_Size = 0;
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero  (line 2629, @0x000000000292a860, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(CDOTA_BaseNPC_Hero *const this)
{
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BaseNPC_Hero::GetEconItemHeroModelOverride  (line 2640, @0x000000000294d100, libserver.so)  // inlines: CEntityHandle, Get, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetModelName, GetModifier, GetOwnerEntity, GetSerialNumber, GetUnitName, IndexToIdentity, Init, LookupEntity, String, ToCStr, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAPlayer, operator CBaseEntity*
// calls: FindAssetModifier<CDOTA_BaseNPC, CEntityModelModifier>, CUtlString::Get
// callers: CDOTA_BaseNPC_Hero::Precache, CDOTA_BaseNPC_Hero::Spawn
const char *__fastcall CDOTA_BaseNPC_Hero::GetEconItemHeroModelOverride(CDOTA_BaseNPC_Hero *const this)
{
  CDOTA_BaseNPC_Hero *v1; // rbx
  unsigned __int16 v2; // dx
  int v3; // esi
  uint32 v4; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r13
  unsigned __int16 v9; // cx
  int v10; // esi
  int v11; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  const char *m_pAsString; // rsi
  const CEntityModelModifier *Asset; // rax

  v1 = this;
  if ( this->m_bIsIllusion.m_Value )
  {
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
    if ( v4 + 2 <= 1 )
      return 0;
    v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
    if ( v5 == 0 )
      return 0;
    v6 = &v5[v3 & 0x1FF];
    if ( v6 == 0 )
      return 0;
    if ( v4 != v6->m_EHandle.m_Index )
      return 0;
    m_pInstance = v6->m_pInstance;
    if ( v6->m_pInstance == 0 || (*(m_pInstance->_vptr_IHandleEntity + 140))(v6->m_pInstance) == 0 )
      return 0;
    if ( HIDWORD(m_pInstance[100].m_hPrivateScope.m_hScope) == -1 )
    {
      v9 = 0x7FFF;
      v10 = 0x7FFF;
    }
    else
    {
      v9 = WORD2(m_pInstance[100].m_hPrivateScope.m_hScope) & 0x7FFF;
      v10 = v9;
    }
    v11 = (HIDWORD(m_pInstance[100].m_hPrivateScope.m_hScope) >> 15 << 15) | v9 & 0x7FFF;
    if ( (v11 + 2) <= 1 )
      return 0;
    v12 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v10 >> 9];
    if ( v12 == 0 )
      return 0;
    v13 = &v12[v10 & 0x1FF];
    if ( v13 == 0 )
      return 0;
    if ( v11 != v13->m_EHandle.m_Index )
      return 0;
    this = v13->m_pInstance;
    if ( v13->m_pInstance == 0 || !this->m_bIsDOTANPC || (this->m_iUnitType & 1) == 0 )
      return 0;
  }
  m_pAsString = "";
  if ( v1->m_iszUnitName.m_Value.u.m_Id != 0 )
    m_pAsString = v1->m_iszUnitName.m_Value.u.m_pAsString;
  Asset = FindAssetModifier<CDOTA_BaseNPC,CEntityModelModifier>(this, m_pAsString);
  if ( Asset != 0 )
    return CUtlString::Get(&Asset->m_strModifier);
  else
    return 0;
}


// CDOTA_BaseNPC_Hero::ShouldTransmit  (line 2666, @0x00000000028f5940, libserver.so)
// calls: CBaseEntity::ShouldTransmit
int __fastcall CDOTA_BaseNPC_Hero::ShouldTransmit(CDOTA_BaseNPC_Hero *const this, const CGameCheckTransmitInfo *pInfo)
{
  return CBaseEntity::ShouldTransmit(this, pInfo);
}


// CDOTA_BaseNPC_Hero::Spawn  (line 2678, @0x00000000029537c0, libserver.so)  // inlines: AddHeroToList, AddToTail, AssignTo, Base, CEntityHandle, CHandle, CopyConstruct<CHandle<CDOTA_BaseNPC_Hero> >, CreateEvent, DOTAGameRules, Element, FindKeyHash, Get, GetBuffName, GetEHandle, GetEntryIndex, GetGameTime, GetModifier, GetOwnerEntity, GetSerialNumber, GetUnitName, GetValue, GetValue<bool>, GrowMemory, Invalidate, NetworkStateChanged, Set, SetInt, SetOriginalModel, SetPlayerOwnerID, SetPurchaseTime, String, ToCStr, _V_strcmp, entindex, operator=, operator=<bool>, operator=<float>, operator=<int>, operator[]
// calls: CBaseEntity::SetLifeState, CDOTA_BaseNPC::ModifyHealth, CDOTA_BaseNPC::Spawn, CDOTA_BaseNPC_Hero::ValidateEconItems, CDOTA_BaseNPC_Hero::UpdateActionItemSlot, CUtlVectorBase<CHandle<CDOTA_BaseNPC_Hero>, CUtlMemory<CHandle<CDOTA_BaseNPC_Hero>, int> >::Find, CDOTA_BaseNPC::SetMana, DOTACommander, CDOTA_Commander::OnSpawn, CDOTA_BaseNPC_Hero::GetEconItemHeroModelOverride, MakeEntitySystemString, CBaseModelEntity::SetModel (38 total)
// callers: CDOTA_Unit_Hero_Lich::Spawn, CDOTA_Unit_Hero_Juggernaut::Spawn, CDOTA_Unit_Hero_Pudge::Spawn, CDOTA_Unit_Hero_PhantomLancer::Spawn, CDOTA_Unit_Hero_Tidehunter::Spawn, CDOTA_Unit_Hero_Lion::Spawn, CDOTA_Unit_Hero_Beastmaster::Spawn, CDOTA_Unit_Hero_DeathProphet::Spawn, CDOTA_Unit_Hero_PhantomAssassin::Spawn, CDOTA_Unit_Hero_Venomancer::Spawn, CDOTA_Unit_Hero_WitchDoctor::Spawn, CDOTA_Unit_TargetDummy::Spawn (36 total)
// strings: "heroindex", "false", "true", "Invalid conversion : CString '%s' to bool\n", "No conversion from %s to bool now\n"
// globals: jpt_29538DB, CEntityKeyValues::sm_EmptyVariant
void __fastcall CDOTA_BaseNPC_Hero::Spawn(CDOTA_BaseNPC_Hero *const this, const CEntityKeyValues *pKeyValues)
{
  float v4; // xmm0_4
  int v5; // eax
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v10; // rdx
  CEntityVariant *p_m_value; // rdx
  int16 m_type; // ax
  CEntityIdentity *m_pEntity; // rbx
  __int16 v14; // cx
  float v15; // xmm1_4
  CDOTA_Commander *v16; // rax
  const char *EconItemHeroModelOverride; // rax
  const char *v18; // rbx
  CDOTABody *v19; // rax
  CDOTAPlayer *v20; // rax
  int v21; // ebx
  _DWORD *v22; // rax
  _DWORD *v23; // r13
  const CUtlVector<const CBuffModifier*,CUtlMemory<const CBuffModifier*,int> > *Asset; // rax
  const CUtlVector<const CBuffModifier*,CUtlMemory<const CBuffModifier*,int> > *v25; // r13
  __int64 v26; // rbx
  const CUtlString *v27; // rdi
  const char *v28; // r15
  IHandleEntity *HandleEntity; // rax
  CDOTAPlayer *v30; // rax
  __int16 v31; // cx
  int v32; // eax
  __int64 m_Size; // rbx
  int v34; // eax
  CHandle<CDOTA_BaseNPC_Hero> *v35; // rax
  CEntityIndex v36; // eax
  CDOTAPlayer *Player; // r15
  char m_char; // al
  CDOTA_UnitInventory *PlayerPreGameInventory; // rbx
  __int64 v40; // r14
  CDOTA_Item *ItemInSlot; // rax
  __int64 j; // r13
  CDOTA_Item *v43; // r14
  uint32 ItemID; // eax
  float v45; // xmm0_4
  __int64 v46; // rbx
  __int64 m_Data; // rdx
  CEntityIndex v48; // eax
  const char *m_pAsString; // rdx
  const char *v50; // rax
  char v51; // [rsp+14h] [rbp-ECh]
  int m_Value; // [rsp+14h] [rbp-ECh]
  float v53; // [rsp+14h] [rbp-ECh]
  float v54; // [rsp+18h] [rbp-E8h]
  CDOTA_Item *pItems[17]; // [rsp+20h] [rbp-E0h] BYREF
  KeyValues kv; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v57; // [rsp+C8h] [rbp-38h]

  v57 = __readfsqword(0x28u);
  CBaseEntity::SetLifeState(this, LifeState_t::LIFE_ALIVE);
  v4 = 0.0;
  if ( g_pGameRules != 0 )
    v4 = *&g_pGameRules[18].m_szQuestName[20];
  if ( v4 != this->m_flSpawnedAt.m_Value )
  {
    v54 = v4;
    (*(this->_vptr_IHandleEntity + 22))(this, 5404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flSpawnedAt.m_Value = v54;
  }
  v5 = (*(this->_vptr_IHandleEntity + 156))(this);
  CDOTA_BaseNPC::ModifyHealth(this, v5, 0, 0, 0);
  if ( this->m_bCustomKillEffect.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 5401, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bCustomKillEffect.m_Value = 0;
  }
  CDOTA_BaseNPC::Spawn(this, pKeyValues);
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
        if ( m_pElements[i] == 1526165316 )
        {
LABEL_15:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v10 = pKeyValues->m_keyValues.m_pElements;
          else
            v10 = 0;
          p_m_value = &v10[i].m_value;
          m_type = p_m_value->m_type;
          if ( m_type != 0 )
            goto LABEL_18;
LABEL_20:
          CDOTA_BaseNPC_Hero::ValidateEconItems(this);
          v51 = 0;
          goto LABEL_21;
        }
      }
      else if ( *(4 * i) == 1526165316 )
      {
        goto LABEL_15;
      }
    }
  }
  p_m_value = &CEntityKeyValues::sm_EmptyVariant;
  m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( m_type == 0 )
    goto LABEL_20;
LABEL_18:
  switch ( m_type )
  {
    case 1:
      m_char = p_m_value->m_float != 0.0;
      goto LABEL_58;
    case 5:
    case 37:
      m_char = p_m_value->m_int != 0;
      goto LABEL_58;
    case 6:
      m_char = p_m_value->m_char;
      goto LABEL_58;
    case 26:
    case 33:
      m_char = p_m_value->m_uint64 != 0;
      goto LABEL_58;
    case 30:
      if ( strcmp(p_m_value->m_pszString, "0") == 0
        || strcmp(p_m_value->m_pszString, "false") == 0
        || strcmp(p_m_value->m_pszString, "no") == 0 )
      {
        goto LABEL_20;
      }
      if ( strcmp(p_m_value->m_pszString, "1") == 0
        || strcmp(p_m_value->m_pszString, "true") == 0
        || strcmp(p_m_value->m_pszString, "yes") == 0 )
      {
        goto LABEL_59;
      }
      Warning("Invalid conversion : CString '%s' to bool\n", p_m_value->m_pszString);
      goto LABEL_20;
    case 34:
      m_char = p_m_value->m_float64 != 0.0;
LABEL_58:
      if ( m_char == 0 )
        goto LABEL_20;
LABEL_59:
      v51 = 1;
      break;
    default:
      v50 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to bool now\n", v50);
      goto LABEL_20;
  }
LABEL_21:
  CDOTA_BaseNPC_Hero::UpdateActionItemSlot(this);
  m_pEntity = this->m_pEntity;
  LODWORD(pItems[0]) = -1;
  if ( m_pEntity != 0 )
  {
    v14 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LODWORD(pItems[0]) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v14 & 0x7FFF;
  }
  if ( CUtlVectorBase<CHandle<CDOTA_BaseNPC_Hero>,CUtlMemory<CHandle<CDOTA_BaseNPC_Hero>,int>>::Find(
         &g_HeroList.m_hHeroList,
         pItems) == -1 )
  {
    LODWORD(pItems[0]) = -1;
    if ( m_pEntity != 0 )
    {
      v31 = 0x7FFF;
      v32 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v31 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(pItems[0]) = v31 | pItems[0] & 0x8000;
      LODWORD(pItems[0]) = (v32 << 15) | pItems[0] & 0x7FFF;
    }
    m_Size = g_HeroList.m_hHeroList.m_Size;
    v34 = g_HeroList.m_hHeroList.m_Size;
    if ( g_HeroList.m_hHeroList.m_Size == g_HeroList.m_hHeroList.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHandle<CDOTA_BaseNPC_Hero>,int>::Grow(&g_HeroList.m_hHeroList.m_Memory, 1);
      v34 = g_HeroList.m_hHeroList.m_Size;
    }
    g_HeroList.m_hHeroList.m_Size = v34 + 1;
    v35 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[m_Size];
    if ( v35 != 0 )
      v35->m_Index = pItems[0];
  }
  (*(this->_vptr_IHandleEntity + 490))(this);
  CDOTA_BaseNPC::SetMana(this, this->m_flMaxMana.m_Value, v15);
  if ( this->m_RespawnMusicTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_RespawnMusicTimer._vptr_CountdownTimer + 2))(
      &this->m_RespawnMusicTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      -1.0);
    this->m_RespawnMusicTimer.m_timestamp.m_Value = -1.0;
  }
  v16 = DOTACommander();
  CDOTA_Commander::OnSpawn(v16, this);
  if ( this->m_bReincarnating.m_Value )
  {
    v36.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    CreateUnitEvent(v36, 0, 15, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_HERO_REINCARNATE);
    if ( this->m_bReincarnating.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 5400, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bReincarnating.m_Value = 0;
    }
  }
  EconItemHeroModelOverride = CDOTA_BaseNPC_Hero::GetEconItemHeroModelOverride(this);
  v18 = EconItemHeroModelOverride;
  if ( EconItemHeroModelOverride != 0 )
  {
    MakeEntitySystemString(EconItemHeroModelOverride);
    this->m_iszOriginalModel.u.m_Id = pItems[0];
    CBaseModelEntity::SetModel(this, v18);
    v19 = (*(this->_vptr_IHandleEntity + 377))(this);
    CDOTABody::StartAnimation(v19, 0x5FEu, 1, 1.0);
  }
  if ( (*(this->_vptr_IHandleEntity + 413))(this) != 0 )
  {
    v20 = (*(this->_vptr_IHandleEntity + 413))(this);
    v21 = CDOTAPlayer::TranslateMusic(v20, 1);
    v22 = (*(this->_vptr_IHandleEntity + 413))(this);
    v23 = v22;
    if ( v21 != v22[1185] )
    {
      (*(*v22 + 176LL))(v22, 4740, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v23[1185] = v21;
    }
  }
  Asset = GetAssetModifiers<CDOTA_BaseNPC,CBuffModifier>(this);
  v25 = Asset;
  if ( Asset != 0 && Asset->m_Size > 0 )
  {
    v26 = 0;
    do
    {
      v27 = v25->m_Memory.m_pMemory[v26];
      if ( v27 != 0 )
      {
        v28 = CUtlString::Get(v27 + 2);
        KeyValues::KeyValues(&kv, v28);
        CDOTA_BaseNPC::AddNewModifier(this, this, 0, v28, &kv, 0);
        KeyValues::~KeyValues(&kv);
      }
      ++v26;
    }
    while ( v25->m_Size > v26 );
  }
  if ( v51 == 0 )
  {
    Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value);
    if ( !this->m_bIsIllusion.m_Value )
    {
      PlayerPreGameInventory = CDOTA_PlayerResource::GetPlayerPreGameInventory(
                                 g_pDOTAPlayerResource,
                                 this->m_iPlayerID.m_Value);
      if ( PlayerPreGameInventory != 0 )
      {
        v40 = 0;
        memset(pItems, 0, sizeof(pItems));
        do
        {
          ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(PlayerPreGameInventory, v40);
          if ( ItemInSlot != 0 )
          {
            pItems[v40] = ItemInSlot;
            CDOTA_UnitInventory::RemoveItem(PlayerPreGameInventory, ItemInSlot, 0, 0);
          }
          ++v40;
        }
        while ( v40 != 17 );
        for ( j = 0; j != 17; ++j )
        {
          v43 = pItems[j];
          if ( v43 != 0 )
          {
            m_Value = this->m_iPlayerID.m_Value;
            if ( m_Value != v43->m_iPlayerOwnerID.m_Value )
            {
              (*(v43->_vptr_IHandleEntity + 22))(v43, 988, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              v43->m_iPlayerOwnerID.m_Value = m_Value;
            }
            CDOTA_UnitInventory::SetItemInSlot(&this->m_Inventory, j, v43);
            ItemID = CDOTA_Item::GetItemID(v43);
            CDOTA_BaseNPC_Hero::AddItemPurchasedHistory(this, ItemID, 0);
            v45 = 0.0;
            if ( g_pGameRules != 0 )
              v45 = *&g_pGameRules[18].m_szQuestName[20];
            if ( v45 != v43->m_flPurchaseTime.m_Value )
            {
              v53 = v45;
              (*(v43->_vptr_IHandleEntity + 22))(v43, 964, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              v43->m_flPurchaseTime.m_Value = v53;
            }
          }
        }
      }
      v46 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "dota_player_pick_hero", 0, 0);
      if ( v46 != 0 )
      {
        m_Data = 0xFFFFFFFFLL;
        if ( Player != 0 )
          m_Data = CEntityInstance::GetEntityIndex(Player).m_Data;
        (*(*v46 + 112LL))(v46, "player", m_Data);
        v48.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
        (*(*v46 + 112LL))(v46, "heroindex", v48.m_Data);
        m_pAsString = "";
        if ( this->m_iszUnitName.m_Value.u.m_Id != 0 )
          m_pAsString = this->m_iszUnitName.m_Value.u.m_pAsString;
        (*(*v46 + 136LL))(v46, "hero", m_pAsString);
        (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v46, 0);
      }
      CDOTAGamerules::IngameEvents_PlayerSelectedHero(g_pGameRules, this->m_iPlayerID.m_Value);
    }
    CDOTA_BaseNPC_Hero::UpdateBotDifficulty(this);
  }
  HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
  if ( HandleEntity != 0 )
  {
    v30 = __dynamic_cast(HandleEntity, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTAPlayer, 0);
    if ( v30 != 0 )
      CDOTAPlayer::CheckForSpawningFreeCourier(v30);
  }
}


// CDOTA_BaseNPC_Hero::InitialSpawn  (line 2812, @0x00000000028fcf10, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, Invalidate, LookupEntity, NetworkStateChanged, Set, ToDOTAPlayer, operator=<float>, operator=<int>
// calls: CDOTA_BaseNPC::InitialSpawn
// callers: CDOTA_Unit_Hero_Techies::InitialSpawn
void __fastcall CDOTA_BaseNPC_Hero::InitialSpawn(CDOTA_BaseNPC_Hero *const this)
{
  unsigned __int16 v2; // dx
  int v3; // esi
  uint32 v4; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r12
  char v8; // al
  CEntityInstance *v9; // rdi
  int v10; // r12d

  CDOTA_BaseNPC::InitialSpawn(this);
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
        if ( v6->m_pInstance != 0 && this->m_iPlayerID.m_Value < 0 )
        {
          v8 = (*(m_pInstance->_vptr_IHandleEntity + 140))(v6->m_pInstance);
          v9 = 0;
          if ( v8 != 0 )
            v9 = m_pInstance;
          v10 = (*(v9->_vptr_IHandleEntity + 393))(v9);
          if ( v10 != this->m_iPlayerID.m_Value )
          {
            (*(this->_vptr_IHandleEntity + 22))(this, 4800, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            this->m_iPlayerID.m_Value = v10;
          }
        }
      }
    }
  }
  if ( this->m_iCurrentXP.m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iCurrentXP.m_Value = 0;
  }
  if ( this->m_iAbilityPoints.m_Value != 1 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4772, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iAbilityPoints.m_Value = 1;
  }
  this->m_iMultipleKillCount = 0;
  if ( this->m_PurchaseItemTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_PurchaseItemTimer._vptr_CountdownTimer + 2))(&this->m_PurchaseItemTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_PurchaseItemTimer.m_timestamp.m_Value = -1.0;
  }
  if ( this->m_RetrieveItemsFromStashTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_RetrieveItemsFromStashTimer._vptr_CountdownTimer + 2))(
      &this->m_RetrieveItemsFromStashTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    this->m_RetrieveItemsFromStashTimer.m_timestamp.m_Value = -1.0;
  }
  if ( this->m_RequestGoToSecretShopTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_RequestGoToSecretShopTimer._vptr_CountdownTimer + 2))(
      &this->m_RequestGoToSecretShopTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    this->m_RequestGoToSecretShopTimer.m_timestamp.m_Value = -1.0;
  }
}


// CDOTA_BaseNPC_Hero::GetEconSpecifyingPlayerOverrideID  (line 2833, @0x00000000028f54f0, libserver.so)
int __fastcall CDOTA_BaseNPC_Hero::GetEconSpecifyingPlayerOverrideID(CDOTA_BaseNPC_Hero *const this)
{
  return this->m_iIllusionOriginalPlayerID;
}


// CDOTA_BaseNPC_Hero::BuildWearableSpawnList  (line 2846, @0x00000000029464f0, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, Construct<WearableSpawnInfo_t>, CopyConstruct<WearableSpawnInfo_t>, Element, GetBool, GetEventIDForEventPoints, GetGlobalDOTATeam, GetItemInLoadoutForHeroBySlotTypeAndPlayerID, GetSlotIndexBySlotType, GetTeamID, GetTeamNumber, GetUnitName, GrowMemory, IsAddOnGame, String, ToCStr, WearableSpawnInfo_t, operator!=, operator[]
// calls: DOTAInventoryManager, CDOTA_BaseNPC::BuildWearableSpawnList, DOTAGameManager, CDOTA_BaseNPC::GetEconSpecifyingPlayerID, CDOTAInventoryManager::GetInventoryForPlayerID, CDOTAInventoryManager::GetItemSlotsForHero, CDOTA_BaseNPC_Hero::UpdateSharedEconItemSlots, CEntityKeyValues::GetValue<int>, ItemSystem, CEconItemSchema::GetItemDefinition, __dynamic_cast, operator new (29 total)
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_BaseNPC_Hero::BuildWearableSpawnList(
        CDOTA_BaseNPC_Hero *const this,
        const CEntityKeyValues *pKeyValues,
        CEntitySpawnerContextBase *pSpawnContext,
        CUtlVector<WearableSpawnInfo_t,CUtlMemory<WearableSpawnInfo_t,int> > *pEconItems)
{
  CDOTAGameManager *v8; // rax
  int EconSpecifyingPlayerID; // r15d
  CDOTAInventoryManager *v10; // rax
  CDOTAPlayerInventory *InventoryForPlayerID; // rax
  int m_iHeroID; // r12d
  CDOTAInventoryManager *v13; // rax
  CDOTAHeroSlots *ItemSlotsForHero; // r12
  CEconItemSystem *v15; // rax
  const CEconItemDefinition *ItemDefinition; // rax
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r15
  int v21; // eax
  __int64 v22; // r15
  WearableSpawnInfo_t *v23; // rdx
  uint16 m_Data; // ax
  WearableSpawnInfo_t *v25; // r15
  CEconItemView *v26; // r14
  CDOTA_PlayerResource *v27; // rdi
  EEvent v28; // r13d
  CDOTAInventoryManager *v29; // rax
  CEconItemView *ItemInLoadoutForHeroBySlotType; // r14
  int v31; // r12d
  int v32; // eax
  WearableSpawnInfo_t *v33; // rcx
  uint16 v34; // ax
  WearableSpawnInfo_t *v35; // r13
  CEconItemView *v36; // r12
  CDOTAInventoryManager *v37; // rax
  CEconItemView *v38; // r13
  int v39; // r12d
  int v40; // eax
  WearableSpawnInfo_t *v41; // rcx
  uint16 v42; // ax
  WearableSpawnInfo_t *v43; // r12
  CEconItemView *v44; // rbx
  const char *m_pAsString; // r12
  CDOTAGameManager *v46; // rax
  KeyValues *DataForHeroOrUnit; // rax
  int v48; // r15d
  CDOTAInventoryManager *v49; // rax
  CEconItemView *BaseItemForHero; // rax
  int v51; // r14d
  int v52; // edx
  WearableSpawnInfo_t *v53; // rcx
  uint16 v54; // si
  WearableSpawnInfo_t *v55; // rdx
  __int64 m_Size; // r14
  bool v57; // zf
  int v58; // eax
  __int64 v59; // r14
  WearableSpawnInfo_t *v60; // r14
  CDOTAPlayer *Player; // rax
  CTeam *GlobalTeam; // rax
  uint32 m_Id; // r12d
  CEconItemSchema *v64; // rax
  ItemPartner_t *ItemPartner; // rax
  uint16 v66; // ax
  CDOTAEventSchema *v67; // rax
  const CDOTAEventDefinition *EventDefinition; // rax
  unsigned __int16 v69; // ax
  CUtlVectorBase<WearableSpawnInfo_t,CUtlMemory<WearableSpawnInfo_t,int> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-88h]
  item_definition_index_t iAltDefIndex; // [rsp+1Ah] [rbp-76h]
  int nPlayerID; // [rsp+1Ch] [rbp-74h]
  CDOTAPlayerInventory *pPlayerInventory; // [rsp+20h] [rbp-70h]
  CEconItemView *pLoadoutItema; // [rsp+28h] [rbp-68h]
  CEconItemView *pLoadoutItem; // [rsp+28h] [rbp-68h]
  CEconItemView *pLoadoutItemb; // [rsp+28h] [rbp-68h]
  const CDOTAItemDefinition *pAltItemDef; // [rsp+30h] [rbp-60h]
  int pPlayerID; // [rsp+4Ch] [rbp-44h] BYREF
  WearableSpawnInfo_t defaultValue[4]; // [rsp+50h] [rbp-40h] BYREF

  if ( DOTAInventoryManager() != 0 )
  {
    CDOTA_BaseNPC::BuildWearableSpawnList(this, pKeyValues, pSpawnContext, pEconItems);
    if ( pEconItems->m_Size <= 0 )
    {
      v8 = DOTAGameManager();
      if ( v8 == 0 || !v8->m_bCustomGame && !v8->m_bEventGame )
        goto LABEL_7;
      if ( !this->m_bDisableWearables )
        goto LABEL_7;
      m_pAsString = "";
      if ( this->m_iszUnitName.m_Value.u.m_Id != 0 )
        m_pAsString = this->m_iszUnitName.m_Value.u.m_pAsString;
      v46 = DOTAGameManager();
      DataForHeroOrUnit = CDOTAGameManager::GetDataForHeroOrUnit(v46, m_pAsString);
      if ( DataForHeroOrUnit == 0 || KeyValues::GetInt(DataForHeroOrUnit, "DisableWearables", 0) == 0 )
      {
LABEL_7:
        EconSpecifyingPlayerID = CDOTA_BaseNPC::GetEconSpecifyingPlayerID(this);
        nPlayerID = EconSpecifyingPlayerID;
        if ( EconSpecifyingPlayerID < 0 )
        {
          pPlayerInventory = 0;
          ItemSlotsForHero = 0;
        }
        else
        {
          v10 = DOTAInventoryManager();
          InventoryForPlayerID = CDOTAInventoryManager::GetInventoryForPlayerID(v10, EconSpecifyingPlayerID, 0);
          m_iHeroID = this->m_iHeroID;
          pPlayerInventory = InventoryForPlayerID;
          v13 = DOTAInventoryManager();
          ItemSlotsForHero = CDOTAInventoryManager::GetItemSlotsForHero(v13, m_iHeroID);
        }
        CDOTA_BaseNPC_Hero::UpdateSharedEconItemSlots(this);
        LODWORD(defaultValue[0].m_pItem) = INVALID_ITEM_DEF_INDEX.m_Data;
        iAltDefIndex.m_Data = CEntityKeyValues::GetValue<int>(pKeyValues, -509197357, defaultValue);
        v15 = ItemSystem();
        ItemDefinition = CEconItemSchema::GetItemDefinition(&v15->m_itemSchema, iAltDefIndex, 1);
        if ( ItemDefinition != 0 )
          pAltItemDef = __dynamic_cast(
                          ItemDefinition,
                          &`typeinfo for'CEconItemDefinition,
                          &`typeinfo for'CDOTAItemDefinition,
                          0);
        else
          pAltItemDef = 0;
        v17 = 0;
        p_m_Memory = &pEconItems->m_Memory;
        do
        {
          if ( ItemSlotsForHero == 0 || ItemSlotsForHero->m_nSlotTypes[v17] == -1 || pAltItemDef == 0 )
            goto LABEL_18;
          v18 = 0;
          while ( pAltItemDef->m_nSlotType != ItemSlotsForHero->m_nSlotTypes[v18] )
          {
            if ( ++v18 == 16 )
              goto LABEL_18;
          }
          if ( v17 == v18 )
          {
            m_Size = pEconItems->m_Size;
            defaultValue[0].m_pItem = 0;
            v57 = m_Size == pEconItems->m_Memory.m_nAllocationCount;
            *&defaultValue[0].m_nItemDefIndex.m_Data = iAltDefIndex.m_Data;
            if ( v57 )
            {
              CUtlMemory<WearableSpawnInfo_t,int>::Grow(p_m_Memory, 1);
              v58 = pEconItems->m_Size;
            }
            else
            {
              v58 = m_Size;
            }
            v59 = m_Size;
            v57 = &pEconItems->m_Memory.m_pMemory[v59] == 0;
            v60 = &pEconItems->m_Memory.m_pMemory[v59];
            pEconItems->m_Size = v58 + 1;
            if ( !v57 )
              *v60 = defaultValue[0];
            WearableSpawnInfo_t::~WearableSpawnInfo_t(defaultValue);
          }
          else
          {
LABEL_18:
            if ( pPlayerInventory != 0
              && (v19 = (*(pPlayerInventory->_vptr_ISharedObjectListener + 9))(pPlayerInventory, this->m_iHeroID, v17)) != 0 )
            {
              v20 = pEconItems->m_Size;
              v21 = pEconItems->m_Size;
              if ( v20 == pEconItems->m_Memory.m_nAllocationCount )
              {
                pLoadoutItem = v19;
                CUtlMemory<WearableSpawnInfo_t,int>::Grow(p_m_Memory, 1);
                v21 = pEconItems->m_Size;
                v19 = pLoadoutItem;
              }
              v22 = v20;
              pEconItems->m_Size = v21 + 1;
              v23 = &pEconItems->m_Memory.m_pMemory[v22];
              if ( v23 != 0 )
              {
                m_Data = INVALID_ITEM_DEF_INDEX.m_Data;
                v23->m_pItem = 0;
                v23->m_bDeleteEconItemOnDestroy = 0;
                v23->m_bGeneratingEconItem = 0;
                v23->m_nItemDefIndex.m_Data = m_Data;
                v25 = &pEconItems->m_Memory.m_pMemory[v22];
              }
              else
              {
                v25 = 0;
              }
              pLoadoutItema = v19;
              v26 = operator new(0xD8u);
              CEconItemView::CEconItemView(v26, pLoadoutItema);
              v25->m_pItem = v26;
              v25->m_bDeleteEconItemOnDestroy = 1;
            }
            else
            {
              v48 = this->m_iHeroID;
              v49 = DOTAInventoryManager();
              BaseItemForHero = CDOTAInventoryManager::GetBaseItemForHero(v49, v48, v17);
              if ( BaseItemForHero != 0 )
              {
                v51 = pEconItems->m_Size;
                v52 = pEconItems->m_Size;
                if ( pEconItems->m_Size == pEconItems->m_Memory.m_nAllocationCount )
                {
                  pLoadoutItemb = BaseItemForHero;
                  CUtlMemory<WearableSpawnInfo_t,int>::Grow(p_m_Memory, 1);
                  v52 = pEconItems->m_Size;
                  BaseItemForHero = pLoadoutItemb;
                }
                pEconItems->m_Size = v52 + 1;
                v53 = &pEconItems->m_Memory.m_pMemory[v51];
                if ( v53 != 0 )
                {
                  v54 = INVALID_ITEM_DEF_INDEX.m_Data;
                  v53->m_pItem = 0;
                  v53->m_bDeleteEconItemOnDestroy = 0;
                  v53->m_bGeneratingEconItem = 0;
                  v53->m_nItemDefIndex.m_Data = v54;
                  v55 = &pEconItems->m_Memory.m_pMemory[v51];
                }
                else
                {
                  v55 = 0;
                }
                v55->m_pItem = BaseItemForHero;
              }
            }
          }
          ++v17;
        }
        while ( v17 != 16 );
        v27 = g_pDOTAPlayerResource;
        if ( g_pDOTAPlayerResource != 0
          && (v28 = *(g_pDOTAPlayerResource + 248), nPlayerID >= 0)
          && v28 != EEvent::EVENT_ID_NONE )
        {
          if ( CDOTA_PlayerResource::IsEventOwnedForPlayerID(g_pDOTAPlayerResource, nPlayerID) )
          {
            v67 = CDOTAEventSchema::Get();
            EventDefinition = CDOTAEventSchema::GetEventDefinition(v67, v28);
            if ( EventDefinition != 0 )
            {
              v69 = *(EventDefinition + 60);
              if ( v69 != INVALID_ITEM_DEF_INDEX.m_Data )
              {
                defaultValue[0].m_pItem = 0;
                *&defaultValue[0].m_nItemDefIndex.m_Data = v69;
                CUtlVectorBase<WearableSpawnInfo_t,CUtlMemory<WearableSpawnInfo_t,int>>::AddToTail(
                  pEconItems,
                  defaultValue);
                WearableSpawnInfo_t::~WearableSpawnInfo_t(defaultValue);
              }
            }
          }
          v27 = g_pDOTAPlayerResource;
        }
        else if ( nPlayerID < 0 )
        {
LABEL_29:
          v29 = DOTAInventoryManager();
          pPlayerID = nPlayerID;
          ItemInLoadoutForHeroBySlotType = CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotType(
                                             v29,
                                             1000,
                                             40,
                                             &pPlayerID);
          if ( ItemInLoadoutForHeroBySlotType != 0 )
          {
            v31 = pEconItems->m_Size;
            v32 = pEconItems->m_Size;
            if ( pEconItems->m_Size == pEconItems->m_Memory.m_nAllocationCount )
            {
              CUtlMemory<WearableSpawnInfo_t,int>::Grow(&pEconItems->m_Memory, 1);
              v32 = pEconItems->m_Size;
            }
            pEconItems->m_Size = v32 + 1;
            v33 = &pEconItems->m_Memory.m_pMemory[v31];
            if ( v33 != 0 )
            {
              v34 = INVALID_ITEM_DEF_INDEX.m_Data;
              v33->m_pItem = 0;
              v33->m_bDeleteEconItemOnDestroy = 0;
              v33->m_bGeneratingEconItem = 0;
              v33->m_nItemDefIndex.m_Data = v34;
              v35 = &pEconItems->m_Memory.m_pMemory[v31];
            }
            else
            {
              v35 = 0;
            }
            v36 = operator new(0xD8u);
            CEconItemView::CEconItemView(v36, ItemInLoadoutForHeroBySlotType);
            v35->m_pItem = v36;
            v35->m_bDeleteEconItemOnDestroy = 1;
          }
          v37 = DOTAInventoryManager();
          LODWORD(defaultValue[0].m_pItem) = nPlayerID;
          v38 = CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotType(v37, 1000, 41, defaultValue);
          if ( v38 != 0 )
          {
            v39 = pEconItems->m_Size;
            v40 = pEconItems->m_Size;
            if ( pEconItems->m_Size == pEconItems->m_Memory.m_nAllocationCount )
            {
              CUtlMemory<WearableSpawnInfo_t,int>::Grow(&pEconItems->m_Memory, 1);
              v40 = pEconItems->m_Size;
            }
            pEconItems->m_Size = v40 + 1;
            v41 = &pEconItems->m_Memory.m_pMemory[v39];
            if ( v41 != 0 )
            {
              v42 = INVALID_ITEM_DEF_INDEX.m_Data;
              v41->m_pItem = 0;
              v41->m_bDeleteEconItemOnDestroy = 0;
              v41->m_bGeneratingEconItem = 0;
              v41->m_nItemDefIndex.m_Data = v42;
              v43 = &pEconItems->m_Memory.m_pMemory[v39];
            }
            else
            {
              v43 = 0;
            }
            v44 = operator new(0xD8u);
            CEconItemView::CEconItemView(v44, v38);
            v43->m_pItem = v44;
            v43->m_bDeleteEconItemOnDestroy = 1;
          }
          return;
        }
        Player = CDOTA_PlayerResource::GetPlayer(v27, nPlayerID);
        if ( Player != 0 )
        {
          GlobalTeam = GetGlobalTeam(Player->m_iTeamNum.m_Value);
          if ( GlobalTeam != 0 )
          {
            m_Id = GlobalTeam[1].m_iszPrivateVScripts.u.m_Id;
            if ( m_Id != 0 )
            {
              v64 = GEconItemSchema();
              ItemPartner = CEconItemSchema::GetItemPartner(v64, EItemPartnerType::ITEM_PARTNER_TEAM, m_Id);
              if ( ItemPartner != 0 )
              {
                v66 = ItemPartner->m_inGameItemDef.m_Data;
                if ( INVALID_ITEM_DEF_INDEX.m_Data != v66 )
                {
                  defaultValue[0].m_pItem = 0;
                  *&defaultValue[0].m_nItemDefIndex.m_Data = v66;
                  CUtlVectorBase<WearableSpawnInfo_t,CUtlMemory<WearableSpawnInfo_t,int>>::AddToTail(
                    pEconItems,
                    defaultValue);
                  WearableSpawnInfo_t::~WearableSpawnInfo_t(defaultValue);
                }
              }
            }
          }
        }
        goto LABEL_29;
      }
    }
  }
}


// CDOTA_BaseNPC_Hero::UpdateNonCacheableWearableData  (line 2980, @0x0000000002945a80, libserver.so)
// calls: CDOTA_BaseNPC_Hero::CheckForCourierOrWardChange
void __fastcall CDOTA_BaseNPC_Hero::UpdateNonCacheableWearableData(
        CDOTA_BaseNPC_Hero *const this,
        CEntitySpawnerContextBase *pSpawnContext)
{
  CDOTA_BaseNPC_Hero::CheckForCourierOrWardChange(this);
}


// CDOTA_BaseNPC_Hero::ValidateEconItems  (line 2988, @0x000000000290dc00, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetItemInLoadoutForHeroBySlotTypeAndPlayerID, GetWearable, IndexToIdentity, IsValid, LookupEntity, operator CEconWearable*, operator CEntityInstance*, operator[]
// calls: CDOTA_BaseNPC::GetEconSpecifyingPlayerID, CEconItemView::GetStaticData, DOTAInventoryManager, CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotType, ItemsMatch, CBaseCombatCharacter::RemoveWearable
// callers: CDOTA_BaseNPC_Hero::Spawn
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC_Hero::ValidateEconItems(CDOTA_BaseNPC_Hero *const this)
{
  int EconSpecifyingPlayerID; // r14d
  int v3; // eax
  unsigned __int64 v4; // rbx
  CHandle<CEconWearable> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEconWearable *m_pInstance; // r15
  __int64 v11; // rax
  const GameItemDefinition_t *StaticData; // rax
  int m_iHeroID; // r13d
  CDOTAInventoryManager *v14; // rax
  CEconItemView *ItemInLoadoutForHeroBySlotType; // r13
  __int64 v16; // rax
  unsigned __int64 v17; // [rsp+10h] [rbp-50h]
  int iSlotType; // [rsp+1Ch] [rbp-44h]
  int v19[13]; // [rsp+2Ch] [rbp-34h] BYREF

  EconSpecifyingPlayerID = CDOTA_BaseNPC::GetEconSpecifyingPlayerID(this);
  if ( EconSpecifyingPlayerID >= 0 )
  {
    v3 = this->m_hMyWearables.m_Vector.m_Size - 1;
    if ( v3 >= 0 )
    {
      v4 = 4LL * v3;
      v17 = 4 * (v3 - v3) - 4;
      do
      {
        while ( 1 )
        {
          v5 = &this->m_hMyWearables.m_Vector.m_Memory.m_pMemory[v4 / 4];
          m_Index = v5->m_Index;
          if ( v5->m_Index + 2 > 1 )
          {
            v7 = v5->m_Index;
            v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
            if ( v8 != 0 )
            {
              v9 = &v8[v7 & 0x1FF];
              if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
              {
                m_pInstance = v9->m_pInstance;
                if ( v9->m_pInstance != 0 )
                {
                  v11 = (*(m_pInstance->_vptr_IHandleEntity + 265))(v9->m_pInstance);
                  StaticData = CEconItemView::GetStaticData((v11 + 104));
                  m_iHeroID = this->m_iHeroID;
                  iSlotType = StaticData->m_nSlotType;
                  v14 = DOTAInventoryManager();
                  v19[0] = EconSpecifyingPlayerID;
                  ItemInLoadoutForHeroBySlotType = CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotType(
                                                     v14,
                                                     m_iHeroID,
                                                     iSlotType,
                                                     v19);
                  v16 = (*(m_pInstance->_vptr_IHandleEntity + 265))(m_pInstance);
                  if ( !ItemsMatch((v16 + 104), ItemInLoadoutForHeroBySlotType) && !m_pInstance->m_bAlwaysAllow )
                    break;
                }
              }
            }
          }
          v4 -= 4LL;
          if ( v4 == v17 )
            return;
        }
        v4 -= 4LL;
        CBaseCombatCharacter::RemoveWearable(this, m_pInstance);
      }
      while ( v4 != v17 );
    }
  }
}


// CDOTA_BaseNPC_Hero::CacheTogglableWearable  (line 3019, @0x000000000290dd70, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetItemInLoadoutForHeroBySlotTypeAndPlayerID, GetWearable, IndexToIdentity, IsValid, LookupEntity, operator CEconWearable*, operator CEntityInstance*, operator[]
// calls: DOTAInventoryManager, CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotType, ItemsMatch
// callers: CDOTA_Unit_Hero_Pudge::Spawn, CDOTA_Unit_Hero_Pudge::OnAlive, CDOTA_Unit_Hero_Rattletrap::Spawn, CDOTA_Unit_Hero_Rattletrap::OnAlive, CDOTA_Unit_Hero_Abaddon::Spawn, CDOTA_Unit_Hero_Abaddon::OnAlive, CDOTA_Unit_Hero_Shredder::Spawn, CDOTA_Unit_Hero_Shredder::OnAlive
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC_Hero::CacheTogglableWearable(CDOTA_BaseNPC_Hero *const this, int nSlotType)
{
  int (***v3)(...); // r13
  int v5; // eax
  int m_iHeroID; // r12d
  int v7; // r15d
  CDOTAInventoryManager *v8; // rax
  int v9; // edx
  __int64 v10; // rbx
  CEconItemView *ItemInLoadoutForHeroBySlotType; // r12
  CHandle<CEconWearable> *v12; // rcx
  uint32 m_Index; // edx
  unsigned __int64 m_Index_low; // rcx
  CEntityIdentity *v15; // rax
  CEntityIdentity *v16; // rax
  int (**m_pInstance)(...); // r15
  __int64 v18; // rax
  int pPlayerID[13]; // [rsp+Ch] [rbp-34h] BYREF

  v3 = &this->_vptr_IHandleEntity + nSlotType;
  v3[623] = 0;
  v5 = (*(this->_vptr_IHandleEntity + 414))(this);
  m_iHeroID = this->m_iHeroID;
  v7 = v5;
  v8 = DOTAInventoryManager();
  v9 = nSlotType;
  pPlayerID[0] = v7;
  v10 = 0;
  ItemInLoadoutForHeroBySlotType = CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotType(
                                     v8,
                                     m_iHeroID,
                                     v9,
                                     pPlayerID);
  if ( this->m_hMyWearables.m_Vector.m_Size > 0 )
  {
    while ( 1 )
    {
      v12 = &this->m_hMyWearables.m_Vector.m_Memory.m_pMemory[v10];
      m_Index = v12->m_Index;
      if ( v12->m_Index + 2 > 1 )
      {
        m_Index_low = LOWORD(v12->m_Index);
        v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
        if ( v15 != 0 )
        {
          v16 = &v15[m_Index_low & 0x1FF];
          if ( v16 != 0 && m_Index == v16->m_EHandle.m_Index )
          {
            m_pInstance = v16->m_pInstance;
            if ( v16->m_pInstance != 0 )
            {
              v18 = (*(*m_pInstance + 265))(m_pInstance);
              if ( v18 != -104 && ItemsMatch((v18 + 104), ItemInLoadoutForHeroBySlotType) )
                break;
            }
          }
        }
      }
      if ( this->m_hMyWearables.m_Vector.m_Size <= ++v10 )
        return;
    }
    v3[623] = m_pInstance;
  }
}


// CDOTA_BaseNPC_Hero::Precache  (line 3064, @0x000000000294d2f0, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddNPCKeyValuesForUnit, ApplyContextKeys, CDotaNPCSpawner, CDotaNPCSpawnerContext, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CEntitySpawnerContext, CEntitySpawnerContextBase, CEntitySpawnerContextModifyScope, CUtlAbstractDelegate, CUtlDelegate, CUtlString, ClosurePtr, FastDelegate2, GetAsset, GetEntityClass, GetItemInLoadoutForHeroBySlotTypeAndPlayerID, GetPetModel, GetTeamNumber, GetUnitName, Init, NetworkStateChanged, OverrideAllocator, PrecacheOther, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, SetValue, SetValue<CNetworkVarBase<int, CDOTA_BaseNPC_Hero::NetworkVar_m_iPlayerID> >, SetValue<char const*>, SetValue<int>, String, ToCStr, operator=<int>, ~CDotaNPCSpawner, ~CDotaNPCSpawnerContext, ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CEntitySpawnerContext, ~CEntitySpawnerContextBase, ~CEntitySpawnerContextModifyScope, ~CUtlString
// calls: CDOTA_BaseNPC::UnserializeUnitName, CDOTA_BaseNPC_Hero::LoadHeroesFile, CDOTA_BaseNPC::Precache, CBaseEntity::PrecacheScriptSound, CDOTA_BaseNPC_Hero::GetPortraitMaterial, PrecacheMaterial, CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::SetValue, AppendNPCKeyValues, CEntityKeyValues::CopyFrom (35 total)
// callers: CDOTA_Unit_Hero_Morphling::Precache, CDOTA_Unit_Hero_PhantomLancer::Precache, CDOTA_Unit_Hero_Tidehunter::Precache, CDOTA_Unit_Hero_VengefulSpirit::Precache, CDOTA_Unit_Hero_Zuus::Precache, CDOTA_Unit_Hero_DeathProphet::Precache, CDOTA_Unit_Hero_FacelessVoid::Precache, CDOTA_Unit_Hero_Necrolyte::Precache, CDOTA_Unit_Hero_Riki::Precache, CDOTA_Unit_Hero_Enigma::Precache, CDOTA_Unit_Hero_TemplarAssassin::Precache, CDOTA_Unit_Hero_PhantomAssassin::Precache (33 total)
// strings: "General.LevelUp", "General.LevelUp.Bonus", "npc_dota_observer_wards", "npc_dota_sentry_wards", "npc_dota_courier", "npc_dota_companion"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
void __fastcall CDOTA_BaseNPC_Hero::Precache(CDOTA_BaseNPC_Hero *const this, const CEntityPrecacheContext *pContext)
{
  __int64 v4; // rax
  const CEntityKeyValues *m_pKeyValues; // rsi
  const char *v6; // r12
  const char *PortraitMaterial; // rax
  CEntitySystem *v8; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v10; // rdx
  char v11; // al
  CEntitySpawnerContext<CDOTA_BaseNPC> *i; // r12
  IEntityResourceManifest *m_pManifest; // r12
  CEntitySystem *v14; // rdi
  CUtlScratchMemoryPool *v15; // rax
  const matrix3x4a_t *v16; // rax
  __int64 v17; // rdx
  char v18; // al
  CEntitySpawnerContext<CDOTA_BaseNPC> *j; // r12
  IEntityResourceManifest *v20; // r12
  CEntitySystem *v21; // rdi
  CUtlScratchMemoryPool *v22; // rax
  const matrix3x4a_t *v23; // rax
  __int64 v24; // rax
  char v25; // al
  CEntityKeyValues *k; // r12
  IEntityResourceManifest *v27; // r12
  int v28; // r12d
  CDOTAInventoryManager *v29; // rax
  CEconItemView *ItemInLoadoutForHeroBySlotType; // r12
  CEconItemView *v31; // rax
  const CEconItemView *v32; // rsi
  CEconItemView *v33; // r12
  int v34; // r12d
  CDOTAInventoryManager *v35; // rax
  CEconItemView *v36; // r12
  CEconItemView *v37; // rax
  const CEconItemView *v38; // rsi
  CEconItemView *v39; // r12
  CUtlScratchMemoryPool *v40; // rdi
  CUtlScratchMemoryPool *v41; // rax
  CUtlScratchMemoryPool *m_pPrevAllocator; // r12
  const char *EconItemHeroModelOverride; // rax
  const CPetModifier *Asset; // r15
  const char *v46; // rax
  CUtlScratchMemoryPool *v47; // rax
  CEntitySystem *v48; // rdi
  const matrix3x4a_t *v49; // rax
  __int64 v50; // rax
  char v51; // al
  CEntityKeyValues *m; // r15
  IEntityResourceManifest *v53; // r15
  int v54; // r12d
  CDOTAPlayer *Player; // rax
  int m_nEntitySpawnerDataUseCount; // ecx
  CEconItemView *v57; // r12
  const CNetworkVarBase<int,CDOTA_BaseNPC_Hero::NetworkVar_m_iPlayerID> *value; // [rsp+8h] [rbp-2D8h]
  int pPlayerID; // [rsp+28h] [rbp-2B8h] BYREF
  int m_Value; // [rsp+2Ch] [rbp-2B4h] BYREF
  CDotaNPCSpawner<CDOTA_BaseNPC> wardSpawner; // [rsp+30h] [rbp-2B0h] BYREF
  CDotaNPCSpawner<CDOTA_BaseNPC> sentryWardSpawner; // [rsp+D0h] [rbp-210h] BYREF
  CDotaNPCSpawnerContextModifyScope sg; // [rsp+170h] [rbp-170h] BYREF
  __int64 v64; // [rsp+188h] [rbp-158h]
  CDOTA_Unit_Courier::CEntityInstanceEntityClass *v65; // [rsp+190h] [rbp-150h]
  CUtlString v66; // [rsp+198h] [rbp-148h] BYREF
  int v67; // [rsp+1A0h] [rbp-140h]
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // [rsp+1A4h] [rbp-13Ch]
  __int64 v69; // [rsp+1B0h] [rbp-130h]
  __int64 v70; // [rsp+1B8h] [rbp-128h]
  __int64 v71; // [rsp+1C0h] [rbp-120h]
  __int64 v72; // [rsp+1C8h] [rbp-118h]
  __int64 v73; // [rsp+1D0h] [rbp-110h]
  __int64 v74; // [rsp+1D8h] [rbp-108h]
  char v75; // [rsp+1E0h] [rbp-100h]
  CUtlScratchMemoryPool *v76; // [rsp+1E8h] [rbp-F8h]
  CEntityKeyValues *pOther; // [rsp+1F0h] [rbp-F0h]
  __int64 v78; // [rsp+200h] [rbp-E0h]
  CDotaNPCSpawnerContext ctx; // [rsp+210h] [rbp-D0h] BYREF
  unsigned __int64 v80; // [rsp+2A8h] [rbp-38h]

  v80 = __readfsqword(0x28u);
  v4 = (*(this->_vptr_IHandleEntity + 413))(this);
  if ( v4 != 0 )
  {
    if ( this->m_iPlayerID.m_Value < 0 )
    {
      v54 = (*(*v4 + 3144LL))(v4);
      if ( v54 != this->m_iPlayerID.m_Value )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 4800, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_iPlayerID.m_Value = v54;
      }
    }
  }
  else
  {
    Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value);
    (*(this->_vptr_IHandleEntity + 40))(this, Player);
  }
  if ( pContext != 0 )
    m_pKeyValues = pContext->m_pKeyValues;
  else
    m_pKeyValues = 0;
  CDOTA_BaseNPC::UnserializeUnitName(this, m_pKeyValues);
  CDOTA_BaseNPC_Hero::LoadHeroesFile(this, pContext->m_pKeyValues);
  CDOTA_BaseNPC::Precache(this, pContext);
  if ( !this->m_bIsIllusion.m_Value )
  {
    v6 = this->m_iszUnitName.m_Value.u.m_Id != 0 ? this->m_iszUnitName.m_Value.u.m_Id : "";
    if ( *v6 != 0 )
    {
      CBaseEntity::PrecacheScriptSound("General.LevelUp", pContext);
      CBaseEntity::PrecacheScriptSound("General.LevelUp.Bonus", pContext);
      PortraitMaterial = CDOTA_BaseNPC_Hero::GetPortraitMaterial(this, v6);
      if ( PortraitMaterial != 0 )
        PrecacheMaterial(PortraitMaterial, pContext);
      if ( this->m_iPlayerID.m_Value >= 0 )
      {
        wardSpawner.m_modifyScope.m_pKeyValues = 0;
        wardSpawner.m_modifyScope.m_pPrevAllocator = 0;
        CEntityKeyValuesModifyScope::BeginModify(&wardSpawner.m_modifyScope, 0);
        wardSpawner._vptr_CEntitySpawnerBase = off_40FC030;
        wardSpawner.m_scriptClassName.m_pString = 0;
        wardSpawner.m_pContext = 0;
        wardSpawner.m_pSpawnBatch = 0;
        v8 = g_pEntitySystem;
        wardSpawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
        ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
        CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v8->m_entitySpawnerData;
        wardSpawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v8);
        SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
        *&wardSpawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
        v10 = *&SpawnOriginOffset->m_flMatVal[0][2];
        wardSpawner.m_pEntityKeyValues = 0;
        *&wardSpawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v10;
        *&wardSpawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
        *&wardSpawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
        wardSpawner.m_pEntityClass = g_pEntityCDOTA_BaseNPCClass;
        if ( g_pApplication != 0 )
          v11 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
        else
          v11 = 0;
        wardSpawner.m_bValidateKeys = v11;
        wardSpawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
        (*wardSpawner._vptr_CEntitySpawnerBase)(&wardSpawner);
        wardSpawner._vptr_CEntitySpawnerBase = off_40FC050;
        CEntityKeyValues::SetValue(wardSpawner.m_pEntityKeyValues, -782893907, "npc_dota_observer_wards");
        AppendNPCKeyValues("npc_dota_observer_wards", wardSpawner.m_pEntityKeyValues, 0);
        for ( i = wardSpawner.m_pContext; i != 0; i = i->m_pParent )
          CEntityKeyValues::CopyFrom(wardSpawner.m_pEntityKeyValues, &i->m_entityKeyValues, 0);
        value = &this->m_iPlayerID;
        CEntityKeyValues::SetValue<CNetworkVarBase<int,CDOTA_BaseNPC_Hero::NetworkVar_m_iPlayerID>>(
          wardSpawner.m_pEntityKeyValues,
          2034954718,
          &this->m_iPlayerID);
        LODWORD(sg.m_sg.m_pKeyValues) = this->m_iTeamNum.m_Value;
        CEntityKeyValues::SetValue<int>(wardSpawner.m_pEntityKeyValues, -175874245, &sg);
        m_pManifest = pContext->m_pManifest;
        if ( wardSpawner.m_pEntityKeyValues != 0 )
        {
          CEntityKeyValuesModifyScope::Release(&wardSpawner.m_modifyScope);
          UTIL_PrecacheOther(wardSpawner.m_pEntityKeyValues, m_pManifest);
        }
        sentryWardSpawner.m_modifyScope.m_pKeyValues = 0;
        sentryWardSpawner._vptr_CEntitySpawnerBase = off_40FBED0;
        sentryWardSpawner.m_modifyScope.m_pPrevAllocator = 0;
        CEntityKeyValuesModifyScope::BeginModify(&sentryWardSpawner.m_modifyScope, 0);
        v14 = g_pEntitySystem;
        sentryWardSpawner.m_scriptClassName.m_pString = 0;
        sentryWardSpawner._vptr_CEntitySpawnerBase = off_40FC030;
        v15 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
        sentryWardSpawner.m_pContext = 0;
        sentryWardSpawner.m_pSpawnBatch = 0;
        ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
        CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v14->m_entitySpawnerData;
        sentryWardSpawner.m_pPrevAllocator = v15;
        sentryWardSpawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v14);
        v16 = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
        *&sentryWardSpawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&v16->m_flMatVal[0][0];
        v17 = *&v16->m_flMatVal[0][2];
        sentryWardSpawner.m_pEntityKeyValues = 0;
        *&sentryWardSpawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v17;
        *&sentryWardSpawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&v16->m_flMatVal[1][0];
        *&sentryWardSpawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&v16->m_flMatVal[2][0];
        sentryWardSpawner.m_pEntityClass = g_pEntityCDOTA_BaseNPCClass;
        if ( g_pApplication != 0 )
          v18 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
        else
          v18 = 0;
        sentryWardSpawner.m_bValidateKeys = v18;
        sentryWardSpawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
        (*sentryWardSpawner._vptr_CEntitySpawnerBase)(&sentryWardSpawner);
        sentryWardSpawner._vptr_CEntitySpawnerBase = off_40FC050;
        CEntityKeyValues::SetValue(sentryWardSpawner.m_pEntityKeyValues, -782893907, "npc_dota_sentry_wards");
        AppendNPCKeyValues("npc_dota_sentry_wards", sentryWardSpawner.m_pEntityKeyValues, 0);
        for ( j = sentryWardSpawner.m_pContext; j != 0; j = j->m_pParent )
          CEntityKeyValues::CopyFrom(sentryWardSpawner.m_pEntityKeyValues, &j->m_entityKeyValues, 0);
        CEntityKeyValues::SetValue<CNetworkVarBase<int,CDOTA_BaseNPC_Hero::NetworkVar_m_iPlayerID>>(
          sentryWardSpawner.m_pEntityKeyValues,
          2034954718,
          value);
        LODWORD(sg.m_sg.m_pKeyValues) = this->m_iTeamNum.m_Value;
        CEntityKeyValues::SetValue<int>(sentryWardSpawner.m_pEntityKeyValues, -175874245, &sg);
        v20 = pContext->m_pManifest;
        if ( sentryWardSpawner.m_pEntityKeyValues != 0 )
        {
          CEntityKeyValuesModifyScope::Release(&sentryWardSpawner.m_modifyScope);
          UTIL_PrecacheOther(sentryWardSpawner.m_pEntityKeyValues, v20);
        }
        sg.m_pContext = 0;
        sg.m_sg.m_pKeyValues = off_42F88F0;
        v64 = 0;
        CEntityKeyValuesModifyScope::BeginModify(&sg.m_pContext, 0);
        v21 = g_pEntitySystem;
        v66.m_pString = 0;
        sg.m_sg.m_pKeyValues = off_42F8910;
        v22 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
        pOther = 0;
        v78 = 0;
        ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
        CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v21->m_entitySpawnerData;
        v76 = v22;
        ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v21);
        v23 = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
        v69 = *&v23->m_flMatVal[0][0];
        v70 = *&v23->m_flMatVal[0][2];
        v71 = *&v23->m_flMatVal[1][0];
        v72 = *&v23->m_flMatVal[1][2];
        v73 = *&v23->m_flMatVal[2][0];
        v24 = *&v23->m_flMatVal[2][2];
        sg.m_sg.m_pPrevAllocator = 0;
        v74 = v24;
        v65 = g_pEntityCDOTA_Unit_CourierClass;
        if ( g_pApplication != 0 )
          v25 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
        else
          v25 = 0;
        v75 = v25;
        v67 = 0;
        (sg.m_sg.m_pKeyValues->m_keyHashes.m_nCount)(&sg);
        sg.m_sg.m_pKeyValues = off_42F8930;
        CEntityKeyValues::SetValue(sg.m_sg.m_pPrevAllocator, -782893907, "npc_dota_courier");
        AppendNPCKeyValues("npc_dota_courier", sg.m_sg.m_pPrevAllocator, 0);
        for ( k = pOther; k != 0; k = *&k[1].m_keyHashes.m_nCount )
          CEntityKeyValues::CopyFrom(sg.m_sg.m_pPrevAllocator, k, 0);
        CEntityKeyValues::SetValue<CNetworkVarBase<int,CDOTA_BaseNPC_Hero::NetworkVar_m_iPlayerID>>(
          sg.m_sg.m_pPrevAllocator,
          2034954718,
          value);
        m_Value = this->m_iTeamNum.m_Value;
        CEntityKeyValues::SetValue<int>(sg.m_sg.m_pPrevAllocator, -175874245, &m_Value);
        v27 = pContext->m_pManifest;
        if ( sg.m_sg.m_pPrevAllocator != 0 )
        {
          CEntityKeyValuesModifyScope::Release(&sg.m_pContext);
          UTIL_PrecacheOther(sg.m_sg.m_pPrevAllocator, v27);
        }
        v28 = this->m_iPlayerID.m_Value;
        v29 = DOTAInventoryManager();
        pPlayerID = v28;
        ItemInLoadoutForHeroBySlotType = CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotType(
                                           v29,
                                           1000,
                                           29,
                                           &pPlayerID);
        if ( ItemInLoadoutForHeroBySlotType != 0 )
        {
          v31 = operator new(0xD8u);
          v32 = ItemInLoadoutForHeroBySlotType;
          v33 = v31;
          CEconItemView::CEconItemView(v31, v32);
        }
        else
        {
          v33 = operator new(0xD8u);
          CEconItemView::CEconItemView(v33);
        }
        this->m_pAtPrecacheCourierView = v33;
        v34 = this->m_iPlayerID.m_Value;
        v35 = DOTAInventoryManager();
        m_Value = v34;
        v36 = CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotType(v35, 1000, 33, &m_Value);
        if ( v36 != 0 )
        {
          v37 = operator new(0xD8u);
          v38 = v36;
          v39 = v37;
          CEconItemView::CEconItemView(v37, v38);
          this->m_pAtPrecacheWardView = v39;
        }
        else
        {
          v57 = operator new(0xD8u);
          CEconItemView::CEconItemView(v57);
          this->m_pAtPrecacheCourierView = v57;
        }
        v40 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
        this->m_bHasChangedCourierSincePrecache = 0;
        sg.m_sg.m_pKeyValues = off_42F88F0;
        v41 = v76;
        this->m_bHasChangedWardsSincePrecache = 0;
        CEntityKeyValuesModifyScope::sm_pAllocatorOverride = v41;
        if ( v40 == &g_pEntitySystem->m_entitySpawnerData )
        {
          m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
          g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
          if ( m_nEntitySpawnerDataUseCount == 1 )
            CUtlScratchMemoryPool::FreeAll(v40);
        }
        if ( sg.m_sg.m_pPrevAllocator != 0 )
        {
          CEntityKeyValuesModifyScope::Release(&sg.m_pContext);
          m_pPrevAllocator = sg.m_sg.m_pPrevAllocator;
          if ( --LOWORD(sg.m_sg.m_pPrevAllocator[5].m_pFirstBlock) <= 0 )
          {
            CEntityKeyValues::~CEntityKeyValues(m_pPrevAllocator);
            operator delete(m_pPrevAllocator);
          }
        }
        if ( v66.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&v66);
        CEntityKeyValuesModifyScope::Release(&sg.m_pContext);
        sentryWardSpawner._vptr_CEntitySpawnerBase = off_40FC030;
        CEntitySpawnerBase<CDOTA_BaseNPC>::~CEntitySpawnerBase(&sentryWardSpawner);
        wardSpawner._vptr_CEntitySpawnerBase = off_40FC030;
        CEntitySpawnerBase<CDOTA_BaseNPC>::~CEntitySpawnerBase(&wardSpawner);
      }
      EconItemHeroModelOverride = CDOTA_BaseNPC_Hero::GetEconItemHeroModelOverride(this);
      if ( EconItemHeroModelOverride != 0 )
        CBaseEntity::PrecacheModel(EconItemHeroModelOverride, pContext);
      Asset = GetAssetModifier<CDOTA_BaseNPC,CPetModifier>(this);
      if ( Asset != 0 )
      {
        CEntityKeyValues::CEntityKeyValues(&ctx.m_entityKeyValues);
        ctx.m_pParent = 0;
        memset(&ctx.m_callback, 0, sizeof(ctx.m_callback));
        sg.m_sg.m_pKeyValues = 0;
        sg.m_sg.m_pPrevAllocator = 0;
        CEntityKeyValuesModifyScope::BeginModify(&sg.m_sg, &ctx.m_entityKeyValues);
        sg.m_pContext = &ctx;
        v46 = CUtlString::Get(&Asset->m_strAsset);
        CEntityKeyValues::SetValue(&ctx.m_entityKeyValues, -926958586, v46);
        CEntityKeyValuesModifyScope::Release(&sg.m_sg);
        sg.m_sg.m_pKeyValues = off_40FBED0;
        sg.m_pContext = 0;
        v64 = 0;
        CEntityKeyValuesModifyScope::BeginModify(&sg.m_pContext, 0);
        v66.m_pString = 0;
        sg.m_sg.m_pKeyValues = off_40FC030;
        v47 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
        pOther = &ctx;
        v78 = 0;
        v48 = g_pEntitySystem;
        ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
        v76 = v47;
        CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v48->m_entitySpawnerData;
        ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v48);
        v49 = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
        v69 = *&v49->m_flMatVal[0][0];
        v70 = *&v49->m_flMatVal[0][2];
        v71 = *&v49->m_flMatVal[1][0];
        v72 = *&v49->m_flMatVal[1][2];
        v73 = *&v49->m_flMatVal[2][0];
        v50 = *&v49->m_flMatVal[2][2];
        sg.m_sg.m_pPrevAllocator = 0;
        v74 = v50;
        v65 = g_pEntityCDOTA_BaseNPCClass;
        if ( g_pApplication != 0 )
          v51 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
        else
          v51 = 0;
        v75 = v51;
        v67 = 0;
        (sg.m_sg.m_pKeyValues->m_keyHashes.m_nCount)(&sg);
        sg.m_sg.m_pKeyValues = off_40FC050;
        CEntityKeyValues::SetValue(sg.m_sg.m_pPrevAllocator, -782893907, "npc_dota_companion");
        AppendNPCKeyValues("npc_dota_companion", sg.m_sg.m_pPrevAllocator, 0);
        for ( m = pOther; m != 0; m = *&m[1].m_keyHashes.m_nCount )
          CEntityKeyValues::CopyFrom(sg.m_sg.m_pPrevAllocator, m, 0);
        v53 = pContext->m_pManifest;
        if ( sg.m_sg.m_pPrevAllocator != 0 )
        {
          CEntityKeyValuesModifyScope::Release(&sg.m_pContext);
          UTIL_PrecacheOther(sg.m_sg.m_pPrevAllocator, v53);
        }
        sg.m_sg.m_pKeyValues = off_40FC030;
        CEntitySpawnerBase<CDOTA_BaseNPC>::~CEntitySpawnerBase(&sg);
        CEntityKeyValues::~CEntityKeyValues(&ctx.m_entityKeyValues);
      }
      PrecachePostTPEffect(this, pContext);
    }
  }
}


// CDOTA_BaseNPC_Hero::OnAssetModifiersUpdated  (line 3173, @0x000000000294a030, libserver.so)  // inlines: GetModelName, GetModifier, IsRealHero
// calls: CDOTA_BaseNPC::OnAssetModifiersUpdated, CUtlString::operator=, GetAssetModifier<CDOTA_BaseNPC, CHexModelModifier>, CUtlString::Get, CDOTA_BaseNPC_Hero::AddPetsFromWearables
// callers: CDOTA_Unit_Hero_MonkeyKing::OnAssetModifiersUpdated, CDOTA_Unit_Hero_Techies::OnAssetModifiersUpdated
void __fastcall CDOTA_BaseNPC_Hero::OnAssetModifiersUpdated(CDOTA_BaseNPC_Hero *const this)
{
  const CHexModelModifier *Asset; // rax
  const char *v3; // rax

  CDOTA_BaseNPC::OnAssetModifiersUpdated(this);
  CUtlString::operator=(&this->m_strCustomHexModel, "");
  Asset = GetAssetModifier<CDOTA_BaseNPC,CHexModelModifier>(this);
  if ( Asset != 0 )
  {
    v3 = CUtlString::Get(&Asset->m_strModifier);
    CUtlString::operator=(&this->m_strCustomHexModel, v3);
  }
  if ( (this->m_iUnitType & 1) != 0 && !this->m_bIsIllusion.m_Value )
    CDOTA_BaseNPC_Hero::AddPetsFromWearables(this);
}


// CDOTA_BaseNPC_Hero::GetPortraitMaterial  (line 3197, @0x0000000002918780, libserver.so)  // inlines: StringAfterPrefix<char const>
// calls: _V_StringAfterPrefix, V_sprintf_safe<256ul>, DOTAGameManager, CDOTAGameManager::GetPortraitBackgroundMaterialByModel, __stack_chk_fail
// callers: CDOTA_BaseNPC_Hero::Precache
// strings: "npc_dota_hero_", "models/heroes/%s/%s.vmdl"
const char *__fastcall CDOTA_BaseNPC_Hero::GetPortraitMaterial(
        const CDOTA_BaseNPC_Hero *const this,
        const char *pszHeroName)
{
  const char *v2; // rbx
  CDOTAGameManager *v3; // rax
  char szPortraitName[256]; // [rsp+0h] [rbp-120h] BYREF
  unsigned __int64 v6; // [rsp+108h] [rbp-18h]

  v6 = __readfsqword(0x28u);
  v2 = _V_StringAfterPrefix(pszHeroName, "npc_dota_hero_");
  V_sprintf_safe<256ul>(szPortraitName, "models/heroes/%s/%s.vmdl", v2, v2);
  v3 = DOTAGameManager();
  return CDOTAGameManager::GetPortraitBackgroundMaterialByModel(v3, v2);
}


// CDOTA_BaseNPC_Hero::GetBaseDamageMin  (line 3214, @0x00000000028fab40, libserver.so)  // inlines: GetBaseDamageMin, GetBonusDamageFromPrimaryStat, GetModifier_Constant_Additive, IsListeningToEvent
// calls: CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTA_BaseNPC_Hero::GetPrimaryStatValue
int __fastcall CDOTA_BaseNPC_Hero::GetBaseDamageMin(CDOTA_BaseNPC_Hero *const this)
{
  float Modifier_Constant_Additive_Internal; // xmm1_4
  __int64 v3; // rax
  float m_iBaseDamageMin; // [rsp-14h] [rbp-1Ch]

  Modifier_Constant_Additive_Internal = 0.0;
  v3 = this->m_ModifierManager.m_buffsForModifiers[3];
  m_iBaseDamageMin = this->m_iBaseDamageMin;
  if ( v3 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v3].m_Size > 0 )
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            &this->m_ModifierManager,
                                            modifierfunction::MODIFIER_PROPERTY_BASEATTACK_BONUSDAMAGE,
                                            &CModifierParams::s_Default);
  return CDOTA_BaseNPC_Hero::GetPrimaryStatValue(this) + (Modifier_Constant_Additive_Internal + m_iBaseDamageMin);
}


// CDOTA_BaseNPC_Hero::GetBaseDamageMax  (line 3222, @0x00000000028faac0, libserver.so)  // inlines: GetBaseDamageMax, GetBonusDamageFromPrimaryStat, GetModifier_Constant_Additive, IsListeningToEvent
// calls: CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTA_BaseNPC_Hero::GetPrimaryStatValue
int __fastcall CDOTA_BaseNPC_Hero::GetBaseDamageMax(CDOTA_BaseNPC_Hero *const this)
{
  float Modifier_Constant_Additive_Internal; // xmm1_4
  __int64 v3; // rax
  float m_iBaseDamageMax; // [rsp-14h] [rbp-1Ch]

  Modifier_Constant_Additive_Internal = 0.0;
  v3 = this->m_ModifierManager.m_buffsForModifiers[3];
  m_iBaseDamageMax = this->m_iBaseDamageMax;
  if ( v3 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v3].m_Size > 0 )
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            &this->m_ModifierManager,
                                            modifierfunction::MODIFIER_PROPERTY_BASEATTACK_BONUSDAMAGE,
                                            &CModifierParams::s_Default);
  return CDOTA_BaseNPC_Hero::GetPrimaryStatValue(this) + (Modifier_Constant_Additive_Internal + m_iBaseDamageMax);
}


// CDOTA_BaseNPC_Hero::GetPhysicalArmorValue  (line 3230, @0x00000000028f71d0, libserver.so)  // inlines: GetPhysicalArmorValue
float __fastcall CDOTA_BaseNPC_Hero::GetPhysicalArmorValue(CDOTA_BaseNPC_Hero *const this)
{
  float m_Value; // [rsp+Ch] [rbp-14h]

  m_Value = this->m_flPhysicalArmorValue.m_Value;
  if ( !this->m_bIsIllusion.m_Value )
    m_Value = (*(this->_vptr_IHandleEntity + 420))(this) + m_Value;
  return ((*(this->_vptr_IHandleEntity + 497))(this) * 0.14285715) + m_Value;
}


// CDOTA_BaseNPC_Hero::GetIncreasedAttackSpeed  (line 3239, @0x00000000028f5900, libserver.so)
// calls: CDOTA_BaseNPC::GetIncreasedAttackSpeed
float __fastcall CDOTA_BaseNPC_Hero::GetIncreasedAttackSpeed(CDOTA_BaseNPC_Hero *const this)
{
  float IncreasedAttackSpeed; // [rsp+Ch] [rbp-14h]

  IncreasedAttackSpeed = CDOTA_BaseNPC::GetIncreasedAttackSpeed(this);
  return ((*(this->_vptr_IHandleEntity + 497))(this) / 100.0) + IncreasedAttackSpeed;
}


// CDOTA_BaseNPC_Hero::GetBonusDamageFromPrimaryStat  (line 3247, @0x00000000028f5560, libserver.so)
// calls: CDOTA_BaseNPC_Hero::GetPrimaryStatValue
int __fastcall CDOTA_BaseNPC_Hero::GetBonusDamageFromPrimaryStat(CDOTA_BaseNPC_Hero *const this)
{
  return CDOTA_BaseNPC_Hero::GetPrimaryStatValue(this);
}


// CDOTA_BaseNPC_Hero::GetPrimaryStatValue  (line 3252, @0x00000000028f5500, libserver.so)
// callers: CDOTA_BaseNPC_Hero::GetBonusDamageFromPrimaryStat, CDOTA_BaseNPC_Hero::GetBaseDamageMax, CDOTA_BaseNPC_Hero::GetBaseDamageMin, CDOTA_Modifier_Huskar_Inner_Vitality::GetModifierConstantHealthRegen, CDOTA_Item_Ethereal_Blade::OnProjectileHit
float __fastcall CDOTA_BaseNPC_Hero::GetPrimaryStatValue(CDOTA_BaseNPC_Hero *const this)
{
  int m_Value; // eax
  bool v2; // zf
  int (**vptr_IHandleEntity)(...); // rax

  m_Value = this->m_iPrimaryAttribute.m_Value;
  if ( m_Value == 1 )
    return (*(this->_vptr_IHandleEntity + 497))(this);
  v2 = m_Value == 2;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  if ( v2 )
    return (vptr_IHandleEntity[498])();
  else
    return (vptr_IHandleEntity[496])();
}


// CDOTA_BaseNPC_Hero::SetPrimaryAttribute  (line 3275, @0x00000000028fa3b0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// calls: Msg
// strings: "Tried to set hero's primary attribute to invalid value %d\n"
void __fastcall CDOTA_BaseNPC_Hero::SetPrimaryAttribute(CDOTA_BaseNPC_Hero *const this, int nPrimaryAttribute)
{
  if ( nPrimaryAttribute > 2 )
  {
    Msg("Tried to set hero's primary attribute to invalid value %d\n", nPrimaryAttribute);
  }
  else if ( this->m_iPrimaryAttribute.m_Value != nPrimaryAttribute )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4660, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iPrimaryAttribute.m_Value = nPrimaryAttribute;
  }
}


// CDOTA_BaseNPC_Hero::OnHeroDiedNearby  (line 3289, @0x000000000290de90, libserver.so)
// calls: CDOTA_BaseNPC::GetAbilityByIndex, CDOTA_UnitInventory::GetItemInSlot
// callers: CDOTAHeroList::DistributeRewardsForKill
void __fastcall CDOTA_BaseNPC_Hero::OnHeroDiedNearby(CDOTA_BaseNPC_Hero *const this, KeyValues *pKV)
{
  int i; // ebx
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTA_BaseNPC::NetworkVar_m_Inventory *p_m_Inventory; // r12
  CDOTA_Item *ItemInSlot; // rax

  for ( i = 0; i != 24; ++i )
  {
    if ( CDOTA_BaseNPC::GetAbilityByIndex(this, i) != 0 )
    {
      AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(this, i);
      (*(AbilityByIndex->_vptr_IHandleEntity + 279))(AbilityByIndex, pKV);
    }
  }
  p_m_Inventory = &this->m_Inventory;
  LOBYTE(i) = 0;
  do
  {
    if ( CDOTA_UnitInventory::GetItemInSlot(p_m_Inventory, i) != 0 )
    {
      ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(p_m_Inventory, i);
      (*(ItemInSlot->_vptr_IHandleEntity + 279))(ItemInSlot, pKV);
    }
    ++i;
  }
  while ( i != 6 );
}


// CDOTA_BaseNPC_Hero::GetGoldBounty  (line 3310, @0x00000000028f6ef0, libserver.so)  // inlines: DOTAGameRules, GetGameMode, GetGoldBounty, GetStreak, IsAddOnGame
// calls: CDOTA_PlayerResource::GetStreak, RandomInt
int __fastcall CDOTA_BaseNPC_Hero::GetGoldBounty(CDOTA_BaseNPC_Hero *const this)
{
  int v2; // eax
  int v3; // r14d
  int v4; // r12d

  v2 = *&g_pGameRules[6].m_szQuestName[68];
  if ( (v2 == 15 || v2 == 19) && g_pGameRules[6].m_szQuestName[90] != 0 )
    return RandomInt(this->m_iGoldBountyMin, this->m_iGoldBountyMax);
  v3 = 8 * this->m_iCurrentLevel.m_Value;
  v4 = v3 + 110;
  if ( CDOTA_PlayerResource::GetStreak(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value) <= 2 )
    return v4;
  if ( CDOTA_PlayerResource::GetStreak(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value) <= 9 )
  {
    v4 += 60 * (CDOTA_PlayerResource::GetStreak(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value) - 2);
    return v4;
  }
  return v3 + 590;
}


// CDOTA_BaseNPC_Hero::CalculateStatBonus  (line 3336, @0x0000000002909920, libserver.so)  // inlines: GetBaseMaxHealth, GetMana, GetModifier_Constant_Additive, GetModifier_Constant_Highest, IsListeningToEvent, NetworkStateChanged, RoundFloatToInt, Set, SetBaseMaxHealth, SetBaseMaxMana, SetMaxMana, _mm_cvt_ss2si, _mm_cvtss_si32, _mm_load_ss, _mm_set_ss, operator=<float>
// calls: CBaseEntity::GetHealth, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, floorf, CBaseEntity::SetMaxHealth, CDOTA_BaseNPC::GetAbilityByIndex, CDOTA_BaseNPC::SetMana, CDOTA_BaseNPC::ModifyHealth, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal
void __fastcall CDOTA_BaseNPC_Hero::CalculateStatBonus(CDOTA_BaseNPC_Hero *const this)
{
  int Health; // eax
  __m128i v3; // xmm5
  float m_flBaseMaxHealth; // xmm0_4
  float v5; // r14d
  int v6; // ebx
  int v7; // r13d
  float v8; // xmm0_4
  __int64 v9; // rax
  float v10; // xmm1_4
  float Modifier_Constant_Additive_Internal; // xmm0_4
  int v12; // eax
  float v13; // xmm0_4
  float v14; // xmm1_4
  __int64 v15; // rax
  __int64 v16; // rax
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  __int64 v20; // rax
  float v21; // xmm1_4
  float v22; // xmm0_4
  __int64 v23; // rax
  float v24; // xmm0_4
  double v25; // xmm0_8
  __m128i m_Value_low; // xmm1
  float v27; // r15d
  float v28; // xmm0_4
  int v29; // eax
  float v30; // xmm0_4
  float v31; // xmm1_4
  __int64 v32; // rax
  __int64 v33; // rax
  float v34; // xmm1_4
  float v35; // xmm0_4
  float v36; // xmm1_4
  int v37; // ebx
  CDOTABaseAbility *AbilityByIndex; // rax
  bool v39; // zf
  __int64 v40; // rax
  int v41; // r13d
  int v42; // eax
  __int64 v43; // rcx
  int v44; // r15d
  int v45; // eax
  __int64 v46; // rdx
  int v47; // r13d
  int nOldHealth; // [rsp+0h] [rbp-40h]
  float flMaxPercent; // [rsp+4h] [rbp-3Ch]
  float flNewMaxHealth; // [rsp+8h] [rbp-38h]
  float flMana; // [rsp+Ch] [rbp-34h]
  float flManaa; // [rsp+Ch] [rbp-34h]
  float flManab; // [rsp+Ch] [rbp-34h]
  float flManac; // [rsp+Ch] [rbp-34h]
  float flManad; // [rsp+Ch] [rbp-34h]
  float flManae; // [rsp+Ch] [rbp-34h]
  float flManaf; // [rsp+Ch] [rbp-34h]

  if ( (*(this->_vptr_IHandleEntity + 408))(this) == 0 )
    return;
  Health = CBaseEntity::GetHealth(this);
  m_flBaseMaxHealth = this->m_flBaseMaxHealth;
  v5 = 0.0;
  if ( m_flBaseMaxHealth != 0.0 )
  {
    *v3.m128i_i32 = Health / m_flBaseMaxHealth;
    v5 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  }
  v6 = CBaseEntity::GetHealth(this);
  v7 = (*(this->_vptr_IHandleEntity + 156))(this);
  flMaxPercent = 0.0;
  if ( (*(this->_vptr_IHandleEntity + 156))(this) != 0 )
    flMaxPercent = v6 / v7;
  v8 = (*(this->_vptr_IHandleEntity + 496))(this);
  v9 = this->m_ModifierManager.m_buffsForModifiers[60];
  v10 = v8 + 0.0099999998;
  Modifier_Constant_Additive_Internal = 0.0;
  if ( v9 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v9].m_Size > 0 )
  {
    flMana = v10;
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            &this->m_ModifierManager,
                                            modifierfunction::MODIFIER_PROPERTY_EXTRA_STRENGTH_BONUS,
                                            &CModifierParams::s_Default);
    v10 = flMana;
  }
  v12 = (floorf(v10 - Modifier_Constant_Additive_Internal) * 20.0);
  v13 = 0.0;
  v14 = (this->m_iStartingMaxHealth + v12);
  v15 = this->m_ModifierManager.m_buffsForModifiers[58];
  if ( v15 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v15].m_Size > 0 )
  {
    flManaa = v14;
    v13 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
            &this->m_ModifierManager,
            modifierfunction::MODIFIER_PROPERTY_HEALTH_BONUS,
            &CModifierParams::s_Default);
    v14 = flManaa;
  }
  v16 = this->m_ModifierManager.m_buffsForModifiers[60];
  v17 = v14 + v13;
  v18 = 0.0;
  this->m_flBaseMaxHealth = v17;
  if ( v16 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v16].m_Size > 0 )
  {
    flManab = v17;
    v19 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
            &this->m_ModifierManager,
            modifierfunction::MODIFIER_PROPERTY_EXTRA_STRENGTH_BONUS,
            &CModifierParams::s_Default);
    v17 = flManab;
    v18 = v19 * 20.0;
  }
  v20 = this->m_ModifierManager.m_buffsForModifiers[61];
  v21 = v17 + v18;
  v22 = 0.0;
  if ( v20 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v20].m_Size > 0 )
  {
    flManac = v21;
    v22 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
            &this->m_ModifierManager,
            modifierfunction::MODIFIER_PROPERTY_EXTRA_HEALTH_BONUS,
            &CModifierParams::s_Default);
    v21 = flManac;
  }
  flNewMaxHealth = v21 + v22;
  CBaseEntity::SetMaxHealth(this, (v21 + v22));
  if ( !this->m_bMidLoading )
  {
    v45 = CBaseEntity::GetHealth(this);
    v46 = this->m_ModifierManager.m_buffsForModifiers[111];
    v47 = (v5 * this->m_flBaseMaxHealth);
    if ( v46 == 0xFF
      || this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v46].m_Size <= 0
      || (nOldHealth = v45,
          CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
            &this->m_ModifierManager,
            modifierfunction::MODIFIER_PROPERTY_DISABLE_HEALING,
            &CModifierParams::s_Default) != 1.0)
      || nOldHealth >= v47 )
    {
      CDOTA_BaseNPC::ModifyHealth(this, v47, 0, 0, 0);
    }
  }
  v23 = this->m_ModifierManager.m_buffsForModifiers[63];
  v24 = 1.0;
  if ( v23 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v23].m_Size > 0 )
    v24 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
            &this->m_ModifierManager,
            modifierfunction::MODIFIER_PROPERTY_EXTRA_HEALTH_PERCENTAGE,
            &CModifierParams::s_Default)
        + 1.0;
  CBaseEntity::SetMaxHealth(this, (v24 * flNewMaxHealth));
  if ( !this->m_bMidLoading )
  {
    v40 = this->m_ModifierManager.m_buffsForModifiers[63];
    if ( v40 != 0xFF
      && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v40].m_Size > 0
      && CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
           &this->m_ModifierManager,
           modifierfunction::MODIFIER_PROPERTY_EXTRA_HEALTH_PERCENTAGE,
           &CModifierParams::s_Default) > 0.0 )
    {
      v41 = CBaseEntity::GetHealth(this);
      v42 = (*(this->_vptr_IHandleEntity + 156))(this);
      v43 = this->m_ModifierManager.m_buffsForModifiers[111];
      v44 = (v42 * flMaxPercent);
      if ( v43 == 0xFF
        || this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v43].m_Size <= 0
        || CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
             &this->m_ModifierManager,
             modifierfunction::MODIFIER_PROPERTY_DISABLE_HEALING,
             &CModifierParams::s_Default) != 1.0
        || v41 >= v44 )
      {
        CDOTA_BaseNPC::ModifyHealth(this, v44, 0, 0, 0);
      }
    }
  }
  *&v25 = LODWORD(this->m_flBaseMaxMana);
  m_Value_low = LODWORD(this->m_flMana.m_Value);
  v27 = 0.0;
  if ( *&v25 != 0.0 )
  {
    *m_Value_low.m128i_i32 = *m_Value_low.m128i_i32 / *&v25;
    v27 = COERCE_FLOAT(_mm_cvtsi128_si32(m_Value_low));
  }
  v28 = (*(this->_vptr_IHandleEntity + 498))(this, v25, *m_Value_low.m128i_i64);
  v29 = floorf(v28 + 0.0099999998);
  v30 = 0.0;
  v31 = (this->m_iStartingMaxMana + 12 * v29);
  v32 = this->m_ModifierManager.m_buffsForModifiers[59];
  if ( v32 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v32].m_Size > 0 )
  {
    flManad = v31;
    v30 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
            &this->m_ModifierManager,
            modifierfunction::MODIFIER_PROPERTY_MANA_BONUS,
            &CModifierParams::s_Default);
    v31 = flManad;
  }
  v33 = this->m_ModifierManager.m_buffsForModifiers[62];
  v34 = v31 + v30;
  v35 = 0.0;
  this->m_flBaseMaxMana = v34;
  if ( v33 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v33].m_Size > 0 )
  {
    flManae = v34;
    v35 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
            &this->m_ModifierManager,
            modifierfunction::MODIFIER_PROPERTY_EXTRA_MANA_BONUS,
            &CModifierParams::s_Default);
    v34 = flManae;
  }
  v36 = v34 + v35;
  if ( v36 == this->m_flMaxMana.m_Value )
  {
    if ( this->m_bMidLoading )
      goto LABEL_33;
  }
  else
  {
    flManaf = v36;
    (*(this->_vptr_IHandleEntity + 22))(this, 2144, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v36 = flManaf;
    v39 = !this->m_bMidLoading;
    this->m_flMaxMana.m_Value = flManaf;
    if ( !v39 )
      goto LABEL_33;
  }
  CDOTA_BaseNPC::SetMana(this, v27 * this->m_flBaseMaxMana, v36);
LABEL_33:
  v37 = 0;
  (*(this->_vptr_IHandleEntity + 497))(this);
  do
  {
    if ( CDOTA_BaseNPC::GetAbilityByIndex(this, v37) != 0 )
    {
      AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(this, v37);
      (*(AbilityByIndex->_vptr_IHandleEntity + 285))(AbilityByIndex);
    }
    ++v37;
  }
  while ( v37 != 24 );
}


// CDOTA_BaseNPC_Hero::ModifyStrength  (line 3423, @0x00000000028fa260, libserver.so)  // inlines: NetworkStateChanged, Set, operator+=<float>
// callers: CDOTA_Item_BookStrength::UpgradeStat, OnCreateIllusionsSpawnCompletion, CDOTA_BaseNPC_Hero::HeroLevelUp, CDOTA_Modifier_Morphling_Morph_Agi::OnIntervalThink, CDOTA_Unit_Hero_Morphling::OnIllusionPostSpawn, CDOTA_Modifier_Morphling_Morph_Str::OnIntervalThink
void __fastcall CDOTA_BaseNPC_Hero::ModifyStrength(CDOTA_BaseNPC_Hero *const this, float a2, float flNewStrength)
{
  float m_Value; // xmm1_4
  float v5; // xmm0_4
  float v6; // [rsp+Ch] [rbp-14h]

  m_Value = this->m_flStrength.m_Value;
  v5 = a2 + m_Value;
  if ( m_Value != v5 )
  {
    v6 = v5;
    (*(this->_vptr_IHandleEntity + 22))(this, 4632, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flStrength.m_Value = v6;
  }
  (*(this->_vptr_IHandleEntity + 490))(this);
}


// CDOTA_BaseNPC_Hero::ModifyAgility  (line 3432, @0x00000000028fa2d0, libserver.so)  // inlines: NetworkStateChanged, Set, operator+=<float>
// callers: CDOTA_Item_BookAgility::UpgradeStat, OnCreateIllusionsSpawnCompletion, CDOTA_BaseNPC_Hero::HeroLevelUp, CDOTA_Modifier_Morphling_Morph_Agi::OnIntervalThink, CDOTA_Unit_Hero_Morphling::OnIllusionPostSpawn, CDOTA_Modifier_Morphling_Morph_Str::OnIntervalThink
void __fastcall CDOTA_BaseNPC_Hero::ModifyAgility(CDOTA_BaseNPC_Hero *const this, float a2, float flNewAgility)
{
  float m_Value; // xmm1_4
  float v5; // xmm0_4
  float v6; // [rsp+Ch] [rbp-14h]

  m_Value = this->m_flAgility.m_Value;
  v5 = a2 + m_Value;
  if ( m_Value != v5 )
  {
    v6 = v5;
    (*(this->_vptr_IHandleEntity + 22))(this, 4636, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flAgility.m_Value = v6;
  }
  (*(this->_vptr_IHandleEntity + 490))(this);
}


// CDOTA_BaseNPC_Hero::ModifyIntellect  (line 3441, @0x00000000028fa340, libserver.so)  // inlines: NetworkStateChanged, Set, operator+=<float>
// callers: CDOTA_Item_BookIntelligence::UpgradeStat, OnCreateIllusionsSpawnCompletion, CDOTA_BaseNPC_Hero::HeroLevelUp, CDOTA_Modifier_Silencer_Int_Steal::OnDeath
void __fastcall CDOTA_BaseNPC_Hero::ModifyIntellect(CDOTA_BaseNPC_Hero *const this, float a2, float flNewIntellect)
{
  float m_Value; // xmm1_4
  float v5; // xmm0_4
  float v6; // [rsp+Ch] [rbp-14h]

  m_Value = this->m_flIntellect.m_Value;
  v5 = a2 + m_Value;
  if ( m_Value != v5 )
  {
    v6 = v5;
    (*(this->_vptr_IHandleEntity + 22))(this, 4640, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flIntellect.m_Value = v6;
  }
  (*(this->_vptr_IHandleEntity + 490))(this);
}


// CDOTA_BaseNPC_Hero::GetStrength  (line 3450, @0x00000000028fadd0, libserver.so)  // inlines: GetBaseStrength, GetModifier_Constant_Additive, IsListeningToEvent, Max<float>, NetworkStateChanged, Set, operator=<float>
// calls: CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal
float __fastcall CDOTA_BaseNPC_Hero::GetStrength(CDOTA_BaseNPC_Hero *const this)
{
  CDOTA_BaseNPC::NetworkVar_m_ModifierManager *p_m_ModifierManager; // r12
  __int64 v3; // rax
  float m_Value; // xmm2_4
  float Modifier_Constant_Additive_Internal; // xmm0_4
  __int64 v6; // rax
  float v7; // xmm2_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v12; // [rsp+Ch] [rbp-14h]
  float v13; // [rsp+Ch] [rbp-14h]
  float v14; // [rsp+Ch] [rbp-14h]

  p_m_ModifierManager = &this->m_ModifierManager;
  v3 = this->m_ModifierManager.m_buffsForModifiers[64];
  m_Value = this->m_flStrength.m_Value;
  if ( v3 == 0xFF || this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v3].m_Size <= 0 )
  {
    Modifier_Constant_Additive_Internal = 0.0;
  }
  else
  {
    v12 = this->m_flStrength.m_Value;
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            &this->m_ModifierManager,
                                            modifierfunction::MODIFIER_PROPERTY_STATS_STRENGTH_BONUS,
                                            &CModifierParams::s_Default);
    m_Value = v12;
  }
  v6 = this->m_ModifierManager.m_buffsForModifiers[60];
  v7 = m_Value + Modifier_Constant_Additive_Internal;
  v8 = 0.0;
  if ( v6 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v6].m_Size > 0 )
  {
    v13 = v7;
    v8 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
           p_m_ModifierManager,
           modifierfunction::MODIFIER_PROPERTY_EXTRA_STRENGTH_BONUS,
           &CModifierParams::s_Default);
    v7 = v13;
  }
  v9 = v8 + v7;
  v10 = this->m_flStrengthTotal.m_Value;
  if ( v9 == v10 )
    return fmaxf(v10, 0.0);
  v14 = v9;
  (*(this->_vptr_IHandleEntity + 22))(this, 4644, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  this->m_flStrengthTotal.m_Value = v14;
  return fmaxf(v14, 0.0);
}


// CDOTA_BaseNPC_Hero::GetAgility  (line 3460, @0x00000000028fa9e0, libserver.so)  // inlines: GetBaseAgility, GetModifier_Constant_Additive, IsListeningToEvent, Max<float>, NetworkStateChanged, Set, operator=<float>
// calls: CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal
float __fastcall CDOTA_BaseNPC_Hero::GetAgility(CDOTA_BaseNPC_Hero *const this)
{
  __int64 v2; // rax
  float m_Value; // xmm1_4
  float Modifier_Constant_Additive_Internal; // xmm0_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v8; // [rsp+Ch] [rbp-14h]
  float v9; // [rsp+Ch] [rbp-14h]

  v2 = this->m_ModifierManager.m_buffsForModifiers[65];
  m_Value = this->m_flAgility.m_Value;
  if ( v2 == 0xFF || this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v2].m_Size <= 0 )
  {
    Modifier_Constant_Additive_Internal = 0.0;
  }
  else
  {
    v8 = this->m_flAgility.m_Value;
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            &this->m_ModifierManager,
                                            modifierfunction::MODIFIER_PROPERTY_STATS_AGILITY_BONUS,
                                            &CModifierParams::s_Default);
    m_Value = v8;
  }
  v5 = Modifier_Constant_Additive_Internal + m_Value;
  v6 = this->m_flAgilityTotal.m_Value;
  if ( v5 == v6 )
    return fmaxf(v6, 0.0);
  v9 = v5;
  (*(this->_vptr_IHandleEntity + 22))(this, 4648, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  this->m_flAgilityTotal.m_Value = v9;
  return fmaxf(v9, 0.0);
}


// CDOTA_BaseNPC_Hero::GetIntellect  (line 3469, @0x00000000028fa900, libserver.so)  // inlines: GetBaseIntellect, GetModifier_Constant_Additive, IsListeningToEvent, Max<float>, NetworkStateChanged, Set, operator=<float>
// calls: CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal
float __fastcall CDOTA_BaseNPC_Hero::GetIntellect(CDOTA_BaseNPC_Hero *const this)
{
  __int64 v2; // rax
  float m_Value; // xmm1_4
  float Modifier_Constant_Additive_Internal; // xmm0_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v8; // [rsp+Ch] [rbp-14h]
  float v9; // [rsp+Ch] [rbp-14h]

  v2 = this->m_ModifierManager.m_buffsForModifiers[66];
  m_Value = this->m_flIntellect.m_Value;
  if ( v2 == 0xFF || this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v2].m_Size <= 0 )
  {
    Modifier_Constant_Additive_Internal = 0.0;
  }
  else
  {
    v8 = this->m_flIntellect.m_Value;
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            &this->m_ModifierManager,
                                            modifierfunction::MODIFIER_PROPERTY_STATS_INTELLECT_BONUS,
                                            &CModifierParams::s_Default);
    m_Value = v8;
  }
  v5 = Modifier_Constant_Additive_Internal + m_Value;
  v6 = this->m_flIntellectTotal.m_Value;
  if ( v5 == v6 )
    return fmaxf(v6, 0.0);
  v9 = v5;
  (*(this->_vptr_IHandleEntity + 22))(this, 4652, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  this->m_flIntellectTotal.m_Value = v9;
  return fmaxf(v9, 0.0);
}


// CDOTA_BaseNPC_Hero::GetRespawnTime  (line 3478, @0x00000000028fb2c0, libserver.so)  // inlines: DOTAGameRules, GetFixedRespawnTime, GetModifier_Constant_Additive, GetModifier_Constant_First, IsListeningToEvent
// calls: CDOTAGamerules::GetGameModeEntity, GetBaseRespawnDuration, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTA_ModifierManager::GetModifier_Constant_First_Internal
// callers: CDOTA_Bot_Script::GetRespawnTime, CDOTA_BaseNPC_Hero::Event_Killed
float __fastcall CDOTA_BaseNPC_Hero::GetRespawnTime(CDOTA_BaseNPC_Hero *const this)
{
  float result; // xmm0_4
  float BaseRespawnDuration; // xmm4_4
  __int64 v4; // rax
  float v5; // xmm1_4
  __int64 v6; // rax
  float v7; // xmm3_4
  float Modifier_Constant_First_Internal; // xmm0_4
  __int64 v9; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  float v11; // [rsp+4h] [rbp-1Ch]
  float flModTimePercentage; // [rsp+8h] [rbp-18h]
  float flModTimePercentagea; // [rsp+8h] [rbp-18h]
  float fBaseRespawnTime; // [rsp+Ch] [rbp-14h]

  if ( CDOTAGamerules::GetGameModeEntity(g_pGameRules) == 0
    || (result = CDOTAGamerules::GetGameModeEntity(g_pGameRules)->m_flFixedRespawnTime.m_Value) < 0.0 )
  {
    BaseRespawnDuration = GetBaseRespawnDuration(this->m_iCurrentLevel.m_Value);
    v4 = this->m_ModifierManager.m_buffsForModifiers[75];
    fBaseRespawnTime = BaseRespawnDuration;
    if ( v4 == 0xFF || this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v4].m_Size <= 0 )
      v5 = 1.0;
    else
      v5 = 1.0
         - CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
             &this->m_ModifierManager,
             modifierfunction::MODIFIER_PROPERTY_RESPAWNTIME_PERCENTAGE,
             &CModifierParams::s_Default);
    v6 = this->m_ModifierManager.m_buffsForModifiers[74];
    v7 = -1.0;
    if ( v6 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v6].m_Size > 0 )
    {
      flModTimePercentage = v5;
      Modifier_Constant_First_Internal = CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
                                           &this->m_ModifierManager,
                                           modifierfunction::MODIFIER_PROPERTY_RESPAWNTIME,
                                           &CModifierParams::s_Default);
      v5 = flModTimePercentage;
      v7 = Modifier_Constant_First_Internal;
    }
    v9 = this->m_ModifierManager.m_buffsForModifiers[76];
    Modifier_Constant_Additive_Internal = 0.0;
    if ( v9 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v9].m_Size > 0 )
    {
      v11 = v7;
      flModTimePercentagea = v5;
      Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                              &this->m_ModifierManager,
                                              modifierfunction::MODIFIER_PROPERTY_RESPAWNTIME_STACKING,
                                              &CModifierParams::s_Default);
      v7 = v11;
      v5 = flModTimePercentagea;
    }
    return fmaxf(1.0, ((v5 * fBaseRespawnTime) + v7) + Modifier_Constant_Additive_Internal);
  }
  return result;
}


// CDOTA_BaseNPC_Hero::OnGainAggro  (line 3500, @0x0000000002916ab0, libserver.so)  // inlines: CEntityHandle, Get, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, IsCreep, LookupEntity, QAngle, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAPlayer, Vector, operator CBaseEntity*
// calls: CDOTA_BaseNPC::UnitEmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, SendOverheadEventMessage, CBaseEntity::GetAbsOrigin, NDebugOverlay::Line, CDOTA_BaseNPC::GetAttackRange, NDebugOverlay::Circle
// callers: CDOTA_BaseNPC::SetAggroTarget
// strings: "n_creep_TrollWarlord.RaiseDead", "particles/msg_fx/msg_aggro.vpcf", "General.Illusion.Destroy"
void __fastcall CDOTA_BaseNPC_Hero::OnGainAggro(CDOTA_BaseNPC_Hero *const this, CDOTA_BaseNPC *pAttacker)
{
  unsigned __int16 v4; // dx
  int v5; // esi
  vec_t v6; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityInstance *m_pInstance; // r13
  uint32 m_iUnitType; // eax
  unsigned __int16 v11; // cx
  int v12; // esi
  int v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  const CBaseAnimating *v16; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v19; // rax
  __int64 v20; // r13
  CDOTA_ParticleManager *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  unsigned __int16 v24; // dx
  int v25; // esi
  int v26; // eax
  CEntityIdentity *v27; // rdx
  CEntityIdentity *v28; // rdx
  CBaseEntity *v29; // rbx
  const Vector *AbsOrigin; // r13
  const Vector *v31; // rax
  float v32; // xmm0_4
  const Vector *v33; // rax
  const CBaseAnimating *v34; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-34h]
  float vecFallbackPositiona; // [rsp+Ch] [rbp-34h]
  QAngle angles; // [rsp+10h] [rbp-30h] BYREF
  Vector v38; // 0:xmm0_8.8,8:xmm1_4.4

  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v4 = 0x7FFF;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v5 = v4;
  }
  LODWORD(v6) = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v4 & 0x7FFF;
  angles.x = v6;
  if ( (LODWORD(v6) + 2) > 1 )
  {
    v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
    if ( v7 != 0 )
    {
      v8 = &v7[v5 & 0x1FF];
      if ( v8 != 0 && LODWORD(v6) == v8->m_EHandle.m_Index )
      {
        m_pInstance = v8->m_pInstance;
        if ( v8->m_pInstance != 0 && (*(m_pInstance->_vptr_IHandleEntity + 140))(v8->m_pInstance) != 0 )
        {
          m_iUnitType = pAttacker->m_iUnitType;
          if ( (m_iUnitType & 0x80u) != 0 && (BYTE4(m_pInstance[98].m_iszPrivateVScripts.u.m_pAsString) & 4) != 0 )
          {
            CDOTA_BaseNPC::UnitEmitSound(this, "n_creep_TrollWarlord.RaiseDead", 0.0, 0, 0);
            if ( HIDWORD(m_pInstance[100].m_hPrivateScope.m_hScope) == -1 )
            {
              v11 = 0x7FFF;
              v12 = 0x7FFF;
            }
            else
            {
              v11 = WORD2(m_pInstance[100].m_hPrivateScope.m_hScope) & 0x7FFF;
              v12 = v11;
            }
            v13 = (HIDWORD(m_pInstance[100].m_hPrivateScope.m_hScope) >> 15 << 15) | v11 & 0x7FFF;
            LODWORD(angles.x) = v13;
            if ( (v13 + 2) > 1
              && (v14 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v12 >> 9]) != 0
              && (v15 = &v14[v12 & 0x1FF]) != 0
              && v13 == v15->m_EHandle.m_Index
              && (v34 = v15->m_pInstance, v15->m_pInstance != 0)
              && v34->m_bIsDOTANPC )
            {
              v16 = 0;
              if ( (v34[1].m_Collision.m_collisionAttribute.m_nInteractsWith.m_Value & 1) != 0 )
                v16 = v15->m_pInstance;
            }
            else
            {
              v16 = 0;
            }
            ParticleManager = GetParticleManager();
            Particle = CDOTA_ParticleManager::CreateParticle(
                         ParticleManager,
                         "particles/msg_fx/msg_aggro.vpcf",
                         2,
                         pAttacker,
                         0,
                         0);
            v19 = GetParticleManager();
            v20 = *&vec3_invalid.x;
            vecFallbackPosition = vec3_invalid.z;
            CDOTA_ParticleManager::SetParticleControlEnt(v19, Particle, 0, pAttacker, 1, 0, vec3_invalid, 1);
            v21 = GetParticleManager();
            *&v38.x = v20;
            v38.z = vecFallbackPosition;
            CDOTA_ParticleManager::SetParticleControlEnt(v21, Particle, 1, v16, 1, 0, v38, 1);
            v22 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControl(v22, Particle, 3, COERCE_DOUBLE(1132396544), 0.0);
            v23 = GetParticleManager();
            CDOTA_ParticleManager::ReleaseParticleIndex(v23, Particle);
          }
          else if ( (m_iUnitType & 4) != 0 && (BYTE4(m_pInstance[98].m_iszPrivateVScripts.u.m_pAsString) & 8) != 0 )
          {
            CDOTA_BaseNPC::UnitEmitSound(this, "General.Illusion.Destroy", 0.0, 0, 0);
            if ( HIDWORD(m_pInstance[100].m_hPrivateScope.m_hScope) == -1 )
            {
              v24 = 0x7FFF;
              v25 = 0x7FFF;
            }
            else
            {
              v24 = WORD2(m_pInstance[100].m_hPrivateScope.m_hScope) & 0x7FFF;
              v25 = v24;
            }
            v26 = (HIDWORD(m_pInstance[100].m_hPrivateScope.m_hScope) >> 15 << 15) | v24 & 0x7FFF;
            LODWORD(angles.x) = v26;
            if ( (v26 + 2) > 1 )
            {
              v27 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v25 >> 9];
              if ( v27 != 0 )
              {
                v28 = &v27[v25 & 0x1FF];
                if ( v28 != 0 && v26 == v28->m_EHandle.m_Index )
                {
                  v29 = v28->m_pInstance;
                  if ( v28->m_pInstance != 0 && v29->m_bIsDOTANPC && (v29[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 )
                  {
                    SendOverheadEventMessage(
                      m_pInstance,
                      DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_DENY,
                      v28->m_pInstance,
                      0,
                      0);
                    AbsOrigin = CBaseEntity::GetAbsOrigin(v29);
                    v31 = CBaseEntity::GetAbsOrigin(pAttacker);
                    NDebugOverlay::Line(v31, AbsOrigin, 0xFFu, 0x7Fu, 0x40u, 1, 0.5);
                    v32 = (CDOTA_BaseNPC::GetAttackRange(pAttacker) + pAttacker->m_flHullRadius)
                        + *&v29[2].m_bNetworkQuantizeOriginAndAngles;
                    angles.x = -90.0;
                    angles.y = 0.0;
                    angles.z = 0.0;
                    vecFallbackPositiona = v32;
                    v33 = CBaseEntity::GetAbsOrigin(pAttacker);
                    NDebugOverlay::Circle(v33, &angles, vecFallbackPositiona, 0xFFu, 0x7Fu, 0x40u, 0, 0.5, 1);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}


// CDOTA_BaseNPC_Hero::OnTakeDamage_Alive  (line 3537, @0x0000000002943130, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CModifierParams, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CDOTA_BaseNPC_Hero::sHeroDamageInfo>, CreateEvent, DOTAGameRules, Element, Get, GetAttacker, GetBool, GetEntityIdentity, GetEntryIndex, GetFloat, GetGameTime, GetInflictor, GetInstance, GetInt, GetLastHealEventEntity, GetOwnerEntity, GetTeamNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, SpeakConcept, StartHeroDirectorActivity, ToDOTAAbility, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAPlayer, entindex, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CEntityHandle::GetHandleEntity, CEntityHandle::operator CEntityInstance*, SendOverheadEventMessage, CDOTA_Speech::SpeakConcept, DOTACommander, CDOTA_Commander::OnTakeDamage, __dynamic_cast, CDOTA_Commander::OnDidDamage, CEntityInstance::GetEntityIndex, CreateUnitEvent, CountdownTimer::Start, CDOTA_PlayerResource::GetPlayerIDsForTeam (24 total)
// strings: "Hero survived a lethal attack because of a recent heal!\n", "dota_player_take_tower_damage"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_BaseNPC_Hero::OnTakeDamage_Alive(
        CDOTA_BaseNPC_Hero *const this,
        const CTakeDamageInfo *const info)
{
  IHandleEntity *HandleEntity; // rax
  CDOTAPlayer *v5; // r14
  CEntityInstance *v6; // rax
  CEntityInstance *v7; // r15
  char m_CScriptComponent_high; // al
  unsigned __int8 m_Value; // dl
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_Commander *v11; // rax
  int v12; // r15d
  CEntityInstance *v13; // rax
  CEntityInstance *v14; // rax
  CDOTA_BaseNPC *v15; // rsi
  CDOTA_Commander *v16; // rax
  float v17; // xmm0_4
  CEntityInstance *v18; // rax
  float v19; // xmm1_4
  CountdownTimer *v20; // r15
  CEntityInstance *v21; // rax
  void *v22; // rax
  int v23; // eax
  EHANDLE *p_m_hAttacker; // rdi
  CEntityInstance *v25; // rax
  int v26; // r13d
  int v27; // ecx
  const CEntityInstance *v28; // rdi
  CEntityIndex v29; // r14d
  CEntityIndex v30; // eax
  float v31; // xmm1_4
  int v32; // esi
  __int64 v33; // r13
  int i; // r14d
  CEntityIdentity *v35; // rdx
  CEntityIdentity *v36; // rdx
  CEntityInstance *m_pInstance; // rsi
  int m_bitsDotaDamageType; // eax
  float m_flOriginalDamage; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  float v41; // xmm0_4
  int v43; // r14d
  __int64 m_Size; // r15
  CDOTA_BaseNPC_Hero::sHeroDamageInfo *m_pMemory; // rcx
  CDOTA_BaseNPC_Hero::sHeroDamageInfo *v46; // rax
  int v47; // edx
  double v48; // xmm0_8
  int v49; // eax
  CDOTA_BaseNPC_Hero::sHeroDamageInfo *v50; // rax
  int v51; // r15d
  int v52; // eax
  int v53; // r14d
  int v54; // r13d
  float DOTATime; // xmm0_4
  CEntityInstance *v56; // rax
  CDOTABaseAbility *v57; // r13
  CDOTA_BaseNPC *Caster; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned int v61; // eax
  char v62; // [rsp+17h] [rbp-101h]
  CDOTABaseAbility *v63; // [rsp+18h] [rbp-100h]
  int Health; // [rsp+18h] [rbp-100h]
  CDOTA_BaseNPC *v65; // [rsp+20h] [rbp-F8h]
  EDOTAHeroChaseEventType v66; // [rsp+20h] [rbp-F8h]
  int v67; // [rsp+20h] [rbp-F8h]
  void (__fastcall *v68)(__int64, char *, _QWORD); // [rsp+20h] [rbp-F8h]
  unsigned int v69; // [rsp+20h] [rbp-F8h]
  float v70; // [rsp+28h] [rbp-F0h]
  char v71; // [rsp+28h] [rbp-F0h]
  float m_flDamage; // [rsp+28h] [rbp-F0h]
  __int64 v73; // [rsp+28h] [rbp-F0h]
  int v74; // [rsp+30h] [rbp-E8h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > vecPlayerIDs; // [rsp+38h] [rbp-E0h]
  CEntityHandle v76; // [rsp+50h] [rbp-C8h] BYREF
  float v77; // [rsp+54h] [rbp-C4h]
  CModifierParams params; // [rsp+58h] [rbp-C0h] BYREF

  if ( dota_hero_god_mode.m_pParent->m_Value.m_nValue != 0 )
    return 0;
  HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
  v5 = HandleEntity;
  if ( HandleEntity == 0 || (*(HandleEntity->_vptr_IHandleEntity + 140))(HandleEntity) == 0 )
    v5 = 0;
  v6 = CEntityHandle::operator CEntityInstance *(&info->m_hAttacker);
  v7 = v6;
  if ( v6 == 0 || BYTE3(v6[7]._vptr_IHandleEntity) == 0 )
    v7 = 0;
  if ( v5 == 0 || this->m_bIsIllusion.m_Value )
  {
    v62 = 0;
    goto LABEL_57;
  }
  if ( v7 == 0 || (v7[43].m_iszPrivateVScripts.u.m_Id & 4) == 0 )
  {
    m_flDamage = info->m_flDamage;
    if ( m_flDamage < ((*(this->_vptr_IHandleEntity + 156))(this)
                     * (dota_overhead_damage_threshold_percent.m_pParent->m_Value.m_fValue / 100.0)) )
    {
      v62 = 0;
      goto LABEL_15;
    }
    v71 = 0;
LABEL_14:
    SendOverheadEventMessage(v5, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_DAMAGE, this, info->m_flDamage, 0);
    v62 = 1;
    if ( v71 == 0 )
      goto LABEL_15;
    goto LABEL_91;
  }
  v70 = info->m_flDamage;
  if ( v70 >= ((*(this->_vptr_IHandleEntity + 156))(this)
             * (dota_overhead_damage_threshold_percent.m_pParent->m_Value.m_fValue / 100.0))
    || dota_tutorial_show_tower_damage.m_pParent->m_Value.m_nValue != 0 )
  {
    v71 = 1;
    goto LABEL_14;
  }
  v62 = 0;
LABEL_91:
  v60 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "dota_player_take_tower_damage", 0, 0);
  if ( v60 != 0 )
  {
    v73 = v60;
    v68 = *(*v60 + 112LL);
    v61 = (*(v5->_vptr_IHandleEntity + 393))(v5);
    v68(v73, "PlayerID", v61);
    (*(*v73 + 112LL))(v73, "damage", info->m_flDamage);
    (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v73, 0);
  }
LABEL_15:
  if ( this->m_bIsIllusion.m_Value || (*(v5->_vptr_IHandleEntity + 264))(v5, this) != 0 )
    goto LABEL_57;
  if ( v7 != 0 )
  {
    if ( v7[61].m_hPrivateScope.m_hScope != 0 || (v7[43].m_iszPrivateVScripts.u.m_Id & 4) != 0 )
    {
      m_CScriptComponent_high = HIBYTE(v7[7].m_CScriptComponent);
      m_Value = this->m_iTeamNum.m_Value;
      if ( m_CScriptComponent_high != m_Value && (info->m_bitsDamageType & 0x20) == 0 )
      {
        m_pSpeech = this->m_Speech.m_pSpeech;
        if ( m_pSpeech != 0 )
        {
          CDOTA_Speech::SpeakConcept(m_pSpeech, 17, 0, 1, 0, 0, 0, 0);
          if ( this->m_iTeamNum.m_Value == HIBYTE(v7[7].m_CScriptComponent) )
            goto LABEL_24;
LABEL_60:
          v43 = (*(v7->_vptr_IHandleEntity + 414))(v7);
          if ( LOBYTE(v7[71].m_pEntity) != 0 )
          {
            v59 = (*(v7->_vptr_IHandleEntity + 413))(v7);
            if ( v59 != 0 )
              v43 = (*(*v59 + 3144LL))(v59);
          }
          if ( v43 == -1 || v43 == this->m_iPlayerID.m_Value )
            goto LABEL_24;
          m_Size = this->m_HeroDamageInfoArray.m_Size;
          if ( m_Size > 0 )
          {
            m_pMemory = this->m_HeroDamageInfoArray.m_Memory.m_pMemory;
            if ( v43 == m_pMemory->nDamagingPlayerID )
            {
LABEL_94:
              v48 = 0.0;
              if ( g_pGameRules != 0 )
                *&v48 = *&g_pGameRules[18].m_szQuestName[20];
              m_pMemory->fTime = *&v48;
              goto LABEL_74;
            }
            v46 = m_pMemory + 1;
            v47 = 0;
            while ( ++v47 != m_Size )
            {
              m_pMemory = v46++;
              if ( v43 == v46[-1].nDamagingPlayerID )
              {
                if ( v47 == -1 )
                  break;
                goto LABEL_94;
              }
            }
          }
          v48 = 0.0;
          if ( g_pGameRules != 0 )
            *&v48 = *&g_pGameRules[18].m_szQuestName[20];
          v49 = this->m_HeroDamageInfoArray.m_Size;
          if ( this->m_HeroDamageInfoArray.m_Memory.m_nAllocationCount == m_Size )
          {
            v69 = LODWORD(v48);
            CUtlMemory<CDOTA_BaseNPC_Hero::sHeroDamageInfo,int>::Grow(&this->m_HeroDamageInfoArray.m_Memory, 1);
            v49 = this->m_HeroDamageInfoArray.m_Size;
            *&v48 = v69;
          }
          this->m_HeroDamageInfoArray.m_Size = v49 + 1;
          v50 = &this->m_HeroDamageInfoArray.m_Memory.m_pMemory[m_Size];
          if ( v50 != 0 )
          {
            v50->nDamagingPlayerID = v43;
            v50->fTime = *&v48;
          }
LABEL_74:
          if ( !this->m_bIsIllusion.m_Value )
          {
            v51 = (*(this->_vptr_IHandleEntity + 156))(this, v48);
            Health = CBaseEntity::GetHealth(this);
            v67 = info->m_flDamage;
            v52 = (*(this->_vptr_IHandleEntity + 414))(this);
            CDOTA_PlayerResource::AddScaledPlayerDamage(g_pDOTAPlayerResource, v43, v52, v67, Health, v51);
          }
          goto LABEL_24;
        }
LABEL_59:
        if ( m_Value == m_CScriptComponent_high )
          goto LABEL_24;
        goto LABEL_60;
      }
    }
LABEL_57:
    if ( v7 == 0 )
      goto LABEL_24;
    m_CScriptComponent_high = HIBYTE(v7[7].m_CScriptComponent);
    m_Value = this->m_iTeamNum.m_Value;
    goto LABEL_59;
  }
LABEL_24:
  v11 = DOTACommander();
  CDOTA_Commander::OnTakeDamage(v11, this, info);
  v12 = info->m_flDamage;
  v13 = CEntityHandle::operator CEntityInstance *(&info->m_hInflictor);
  if ( v13 != 0 )
    v63 = __dynamic_cast(v13, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
  else
    v63 = 0;
  v14 = CEntityHandle::operator CEntityInstance *(&info->m_hAttacker);
  if ( v14 == 0 || BYTE3(v14[7]._vptr_IHandleEntity) == 0 || (v15 = v14, (v14[43].m_iszPrivateVScripts.u.m_Id & 1) == 0) )
    v15 = 0;
  v65 = v15;
  v16 = DOTACommander();
  CDOTA_Commander::OnDidDamage(v16, v65, this, v63, v12);
  v17 = 0.0;
  if ( g_pGameRules != 0 )
    v17 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_fMostRecentDamageTime = v17;
  v18 = CEntityHandle::operator CEntityInstance *(&info->m_hAttacker);
  v20 = v18;
  if ( v18 != 0
    && (info->m_bitsDamageType & 0x40) == 0
    && BYTE3(v18[7]._vptr_IHandleEntity) != 0
    && (v18[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
  {
    if ( v62 != 0 )
    {
      v21 = CEntityHandle::operator CEntityInstance *(&info->m_hInflictor);
      if ( v21 != 0 && (v22 = __dynamic_cast(v21, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0)) != 0 )
      {
        v23 = (*(*v22 + 1712LL))(v22);
        p_m_hAttacker = &info->m_hAttacker;
        if ( v23 == 1 )
        {
          v25 = CEntityHandle::operator CEntityInstance *(p_m_hAttacker);
          v26 = 15;
        }
        else
        {
          v25 = CEntityHandle::operator CEntityInstance *(p_m_hAttacker);
          v26 = 14;
        }
        v27 = 13;
        v28 = v25;
      }
      else
      {
        v28 = v20;
        v27 = !this->m_bIsIllusion.m_Value ? 0xC : 0;
        v26 = !this->m_bIsIllusion.m_Value ? 0xD : 0;
      }
      v66 = v27;
      v29.m_Data = CEntityInstance::GetEntityIndex(v28).m_Data;
      v30.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
      CreateUnitEvent(v30, v29, v26, v66);
    }
    CountdownTimer::Start(v20 + 224, 1.0, v19);
    CountdownTimer::Start(&this->m_DirectorAbilityActivity, 1.5, v31);
    if ( info->m_bitsDotaDamageType == 1 )
    {
      v32 = this->m_iTeamNum.m_Value;
      v74 = 0;
      *&vecPlayerIDs.m_Size = 0;
      vecPlayerIDs.m_Memory.m_pMemory = 0;
      CDOTA_PlayerResource::GetPlayerIDsForTeam(g_pDOTAPlayerResource, v32, &v74);
      if ( v74 > 0 )
      {
        v33 = 0;
        for ( i = 0; i < v74; ++i )
        {
          CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(&v76, g_pDOTAPlayerResource, *(*&vecPlayerIDs.m_Size + v33));
          if ( v76.m_Index + 2 > 1 )
          {
            v35 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v76.m_Index) >> 9) & 0x3F];
            if ( v35 != 0 )
            {
              v36 = &v35[v76.m_Index & 0x1FF];
              if ( v36 != 0 && v76.m_Index == v36->m_EHandle.m_Index )
              {
                m_pInstance = v36->m_pInstance;
                if ( v36->m_pInstance != 0
                  && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                  && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                {
                  m_bitsDotaDamageType = info->m_bitsDotaDamageType;
                  LOBYTE(params.fOriginalDamage) = 0;
                  m_flOriginalDamage = info->m_flOriginalDamage;
                  params.vNewLoc.y = 0.0;
                  v76.m_Index = -1;
                  params.ability.m_Index = 0;
                  params.m_nIssuerPlayerIndex = m_bitsDotaDamageType;
                  vptr_IHandleEntity = this->_vptr_IHandleEntity;
                  params.fDamage = NAN;
                  params.nActivity = 0;
                  params.bTooltip = 0;
                  *(&params.bTooltip + 1) = 0;
                  *(&params.bTooltip + 2) = 0;
                  *(&params.bTooltip + 3) = 0;
                  params.nTooltipParam = 0;
                  params.fAttackTimeRemaining = NAN;
                  params.inflictor.m_Index = 0;
                  params.nDamageType = 0;
                  memset(&params.iRecord, 0, 24);
                  LOWORD(params.vNewLoc.z) = 0;
                  *&params.bCraniumBasherTested = 0;
                  *&params.bSuppressDamage = -1;
                  params.nPlayerids_stick = -1;
                  params.hattacker.m_Index = -1;
                  v77 = m_flOriginalDamage;
                  v41 = (vptr_IHandleEntity[423])(this, m_pInstance, &v76);
                  if ( v41 > 0.0 )
                    CDOTA_CombatLog::AddPhysicalDamagePreventedEvent(
                      &g_DOTACombatLog,
                      *(*&vecPlayerIDs.m_Size + v33),
                      v41);
                }
              }
            }
          }
          v33 += 4;
        }
      }
      CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&v74);
    }
  }
  v53 = info->m_flDamage;
  v54 = CBaseEntity::GetHealth(this) - this->m_nLastHealedAmount;
  DOTATime = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
  if ( v53 > v54 && (DOTATime - this->m_flLastHealedTime) <= 2.0 )
  {
    v76.m_Index = this->m_hLastHealEntity.m_Index;
    v56 = CEntityHandle::operator CEntityInstance *(&v76);
    if ( v56 != 0 )
    {
      v57 = __dynamic_cast(v56, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
      if ( v57 != 0 )
      {
        DevMsg("Hero survived a lethal attack because of a recent heal!\n");
        Caster = CDOTABaseAbility::GetCaster(v57);
        CDOTA_CombatLog::AddHeroSavedEvent(&g_DOTACombatLog, v57, Caster, this, 1);
        this->m_flLastHealedTime = 0.0;
      }
    }
  }
  return CDOTA_BaseNPC::OnTakeDamage_Alive(this, info);
}


// CDOTA_BaseNPC_Hero::GetMostRecentAttacker  (line 3713, @0x000000000290df30, libserver.so)
int __fastcall CDOTA_BaseNPC_Hero::GetMostRecentAttacker(CDOTA_BaseNPC_Hero *const this)
{
  int m_Size; // esi
  int result; // eax
  CDOTA_BaseNPC_Hero::sHeroDamageInfo *m_pMemory; // rcx
  float fTime; // xmm1_4
  CDOTA_BaseNPC_Hero::sHeroDamageInfo *v5; // rdx
  __int64 v6; // rsi

  m_Size = this->m_HeroDamageInfoArray.m_Size;
  result = -1;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_HeroDamageInfoArray.m_Memory.m_pMemory;
    fTime = -1.0;
    v5 = m_pMemory + 1;
    v6 = &m_pMemory[(m_Size - 1) + 1];
    while ( 1 )
    {
      if ( m_pMemory->fTime <= fTime )
      {
        m_pMemory = v5;
        if ( v5 == v6 )
          return result;
      }
      else
      {
        result = m_pMemory->nDamagingPlayerID;
        fTime = m_pMemory->fTime;
        m_pMemory = v5;
        if ( v5 == v6 )
          return result;
      }
      ++v5;
    }
  }
  return result;
}


// CDOTA_BaseNPC_Hero::IsRecentAttacker  (line 3730, @0x000000000290df90, libserver.so)
// callers: CDOTAHeroList::GiveAdditionalAssists
bool __fastcall CDOTA_BaseNPC_Hero::IsRecentAttacker(CDOTA_BaseNPC_Hero *const this, int nPlayerID)
{
  int m_Size; // edx
  CDOTA_BaseNPC_Hero::sHeroDamageInfo *m_pMemory; // rax
  CDOTA_BaseNPC_Hero::sHeroDamageInfo *v4; // rdx

  m_Size = this->m_HeroDamageInfoArray.m_Size;
  if ( m_Size <= 0 )
    return 0;
  m_pMemory = this->m_HeroDamageInfoArray.m_Memory.m_pMemory;
  if ( m_pMemory->nDamagingPlayerID != nPlayerID )
  {
    v4 = &m_pMemory[m_Size - 1];
    while ( m_pMemory != v4 )
    {
      ++m_pMemory;
      if ( m_pMemory->nDamagingPlayerID == nPlayerID )
        return 1;
    }
    return 0;
  }
  return 1;
}


// CDOTA_BaseNPC_Hero::GetNumAttackers  (line 3741, @0x00000000028f5570, libserver.so)
// callers: CDOTA_CombatLog::AddHealthEvent
int __fastcall CDOTA_BaseNPC_Hero::GetNumAttackers(CDOTA_BaseNPC_Hero *const this)
{
  return this->m_HeroDamageInfoArray.m_Size;
}


// CDOTA_BaseNPC_Hero::GetAttacker  (line 3746, @0x00000000028fa0b0, libserver.so)  // inlines: operator[]
// callers: CDOTA_CombatLog::AddHealthEvent
int __fastcall CDOTA_BaseNPC_Hero::GetAttacker(CDOTA_BaseNPC_Hero *const this, int nIndex)
{
  return this->m_HeroDamageInfoArray.m_Memory.m_pMemory[nIndex].nDamagingPlayerID;
}


// CDOTA_BaseNPC_Hero::AddRecentModifier  (line 3751, @0x000000000294e0e0, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, DOTAGameRules, GetGameTime, GrowMemory, end
// calls: CUtlMemory<CDOTA_BaseNPC_Hero::sHeroRecentModifierInfo, int>::Grow
// callers: CDOTA_BaseNPC::Heal, CDOTA_BaseNPC::AddNewModifier
void __fastcall CDOTA_BaseNPC_Hero::AddRecentModifier(
        CDOTA_BaseNPC_Hero *const this,
        int nPlayerID,
        int nAbilityIndex,
        bool bBuff)
{
  int m_Size; // esi
  CDOTA_BaseNPC_Hero::sHeroRecentModifierInfo *m_pMemory; // rax
  unsigned __int64 v8; // r13
  CDOTA_BaseNPC_Hero::sHeroRecentModifierInfo *v9; // r8
  float v10; // xmm0_4
  float v11; // xmm0_4
  CGameRules *v12; // rax
  bool v13; // [rsp+8h] [rbp-28h]
  int nAbilityIndexa; // [rsp+Ch] [rbp-24h]

  m_Size = this->m_vecRecentModifiers.m_Size;
  m_pMemory = this->m_vecRecentModifiers.m_Memory.m_pMemory;
  v8 = m_Size;
  v9 = &m_pMemory[v8];
  if ( m_pMemory == &m_pMemory[v8] )
  {
LABEL_10:
    if ( m_Size == this->m_vecRecentModifiers.m_Memory.m_nAllocationCount )
    {
      v13 = bBuff;
      nAbilityIndexa = nAbilityIndex;
      CUtlMemory<CDOTA_BaseNPC_Hero::sHeroRecentModifierInfo,int>::Grow(&this->m_vecRecentModifiers.m_Memory, 1);
      m_Size = this->m_vecRecentModifiers.m_Size;
      v9 = &this->m_vecRecentModifiers.m_Memory.m_pMemory[v8];
      bBuff = v13;
      nAbilityIndex = nAbilityIndexa;
    }
    v11 = 0.0;
    this->m_vecRecentModifiers.m_Size = m_Size + 1;
    v9->nSourcePlayerID = nPlayerID;
    v9->bBuff = bBuff;
    v12 = g_pGameRules;
    v9->nAbilityIndex = nAbilityIndex;
    if ( v12 != 0 )
      v11 = *&v12[18].m_szQuestName[20];
    v9->fTime = v11;
  }
  else
  {
    while ( m_pMemory->nSourcePlayerID != nPlayerID
         || m_pMemory->nAbilityIndex != nAbilityIndex
         || m_pMemory->bBuff != bBuff )
    {
      if ( v9 == ++m_pMemory )
        goto LABEL_10;
    }
    v10 = 0.0;
    if ( g_pGameRules != 0 )
      v10 = *&g_pGameRules[18].m_szQuestName[20];
    m_pMemory->fTime = v10;
  }
}


// CDOTA_BaseNPC_Hero::IsRecentBuffer  (line 3771, @0x000000000290dfe0, libserver.so)  // inlines: end
bool __fastcall CDOTA_BaseNPC_Hero::IsRecentBuffer(CDOTA_BaseNPC_Hero *const this, int nPlayerID)
{
  CDOTA_BaseNPC_Hero::sHeroRecentModifierInfo *m_pMemory; // rdx
  CDOTA_BaseNPC_Hero::sHeroRecentModifierInfo *v3; // rcx
  bool result; // al

  m_pMemory = this->m_vecRecentModifiers.m_Memory.m_pMemory;
  v3 = &m_pMemory[this->m_vecRecentModifiers.m_Size];
  if ( m_pMemory == v3 )
    return 0;
  while ( 1 )
  {
    result = m_pMemory->bBuff;
    if ( result && m_pMemory->nSourcePlayerID == nPlayerID )
      break;
    if ( v3 == ++m_pMemory )
      return 0;
  }
  return result;
}


// CDOTA_BaseNPC_Hero::IsRecentDebuffer  (line 3782, @0x000000000290e020, libserver.so)  // inlines: end
bool __fastcall CDOTA_BaseNPC_Hero::IsRecentDebuffer(CDOTA_BaseNPC_Hero *const this, int nPlayerID)
{
  CDOTA_BaseNPC_Hero::sHeroRecentModifierInfo *m_pMemory; // rax
  CDOTA_BaseNPC_Hero::sHeroRecentModifierInfo *v3; // rdx

  m_pMemory = this->m_vecRecentModifiers.m_Memory.m_pMemory;
  v3 = &m_pMemory[this->m_vecRecentModifiers.m_Size];
  if ( m_pMemory == v3 )
    return 0;
  while ( m_pMemory->bBuff || m_pMemory->nSourcePlayerID != nPlayerID )
  {
    if ( v3 == ++m_pMemory )
      return 0;
  }
  return 1;
}


// CDOTA_BaseNPC_Hero::Script_SetTimeUntilRespawn  (line 3794, @0x000000000290e1e0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::SetTimeUntilRespawn
void __fastcall CDOTA_BaseNPC_Hero::Script_SetTimeUntilRespawn(CDOTA_BaseNPC_Hero *const this, float a2, float time)
{
  this->m_flScriptRespawnTime = a2;
  CDOTA_BaseNPC_Hero::SetTimeUntilRespawn(this, a2, time);
}


// CDOTA_BaseNPC_Hero::SetTimeUntilRespawn  (line 3800, @0x000000000290e070, libserver.so)  // inlines: DOTAGameRules, GetGameTime, NetworkStateChanged, Set, curtime, operator=<float>
// calls: CBaseEntity::ThinkSet
// callers: CDOTA_PlayerResource::OnHeroReplaced, CDOTA_PlayerResource::ReplaceHeroWith, CDOTA_Grinder::FrameUpdateHeroes, CDOTA_BaseNPC_Hero::Script_SetTimeUntilRespawn
// globals: CDOTA_BaseNPC_Hero::PreRespawnHero(void)
void __fastcall CDOTA_BaseNPC_Hero::SetTimeUntilRespawn(CDOTA_BaseNPC_Hero *const this, float a2, float time)
{
  float v4; // xmm1_4
  float v5; // xmm0_4
  CGlobalVars *v6; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v8; // xmm0_4
  float v9; // [rsp+Ch] [rbp-14h]

  if ( a2 <= -1.0 )
  {
    if ( this->m_flRespawnTime.m_Value != -1.0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 4780, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flRespawnTime.m_Value = -1.0;
    }
    CBaseEntity::ThinkSet(this, CDOTA_BaseNPC_Hero::PreRespawnHero, -1.0, -883079344, 0);
  }
  else
  {
    this->m_flTimeUntilRespawn = a2;
    v4 = 0.0;
    if ( g_pGameRules != 0 )
      v4 = *&g_pGameRules[18].m_szQuestName[20];
    v5 = a2 + v4;
    if ( v5 != this->m_flRespawnTime.m_Value )
    {
      v9 = v5;
      (*(this->_vptr_IHandleEntity + 22))(this, 4780, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flRespawnTime.m_Value = v9;
    }
    v6 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      v8 = v6->m_flCurrentTime + 0.1;
    }
    else
    {
      v8 = 0.1;
    }
    CBaseEntity::ThinkSet(this, CDOTA_BaseNPC_Hero::PreRespawnHero, v8, -883079344, 0);
  }
}


// CDOTA_BaseNPC_Hero::Think  (line 3818, @0x0000000002956080, libserver.so)  // inlines: CSingleUserRecipientFilter, CheckGankEnemies, ClearLastHitMultikill, DOTAGameRules, Get, GetBool, GetGameTime, GetInt, GetOwnerEntity, GetSpawnGroupHandle, Invalidate, IsElapsed, MoveToPosition, NetworkStateChanged, Remove, Set, ToDOTAPlayer, Vector, operator=, operator=<float>, operator=<int>, operator[], ~CSingleUserRecipientFilter
// calls: CUtlVectorBase<CDOTA_BaseNPC_Hero::sHeroDamageInfo, CUtlMemory<CDOTA_BaseNPC_Hero::sHeroDamageInfo, int> >::ShiftElementsLeft, CUtlVectorBase<CDOTA_BaseNPC_Hero::sHeroRecentModifierInfo, CUtlMemory<CDOTA_BaseNPC_Hero::sHeroRecentModifierInfo, int> >::ShiftElementsLeft, CBaseEntity::Think, CDOTA_BaseNPC::IsBot, CDOTA_BaseNPC_Hero::ThinkSpeech, CountdownTimer::Now, CUtlQueue<CDOTA_BaseNPC::sDamageEvent, CUtlMemory<CDOTA_BaseNPC::sDamageEvent, int> >::Next, CUtlQueue<CDOTA_BaseNPC::sDamageEvent, CUtlMemory<CDOTA_BaseNPC::sDamageEvent, int> >::IsValid, CUtlQueue<CDOTA_BaseNPC::sDamageEvent, CUtlMemory<CDOTA_BaseNPC::sDamageEvent, int> >::Element, CDOTAMusicProbabilityGank::CheckGankTimer, CDOTABaseAbility::EndChannel, UTIL_Remove (27 total)
// strings: "DOTAMusic_Hero.Reincarnate"
void __fastcall CDOTA_BaseNPC_Hero::Think(CDOTA_BaseNPC_Hero *const this)
{
  __m128i v2; // xmm1
  float v3; // xmm0_4
  float v4; // xmm0_4
  float v5; // r15d
  int v6; // r13d
  int v7; // eax
  int v8; // r14d
  int v9; // eax
  CDOTA_BaseNPC_Hero::sHeroRecentModifierInfo *v10; // rax
  float m_Value; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  QueueIter_t m_head; // r13d
  int v18; // r15d
  float v19; // xmm0_4
  CDOTA_BaseNPC::sDamageEvent *v20; // rax
  int v21; // r12d
  int v22; // eax
  CDOTABaseAbility *v23; // r13
  IHandleEntity *HandleEntity; // r13
  const CEntityInstance *v25; // r14
  CEntityIdentity *m_pEntity; // rax
  SpawnGroupHandle_t m_hSpawnGroup; // esi
  const WorldInfo_t *WorldInfoForSpawnGroup; // rax
  float x; // r12d
  float v30; // r13d
  __m128i v31; // xmm0
  __m128i v32; // xmm0
  int v33; // r14d
  __m128i v34; // xmm0
  int v35; // r12d
  int (**vptr_INextBotEventResponder)(...); // rax
  float y; // [rsp+8h] [rbp-198h]
  float vStartPos; // [rsp+Ch] [rbp-194h]
  float vStartPosa; // [rsp+Ch] [rbp-194h]
  float vStartPosb; // [rsp+Ch] [rbp-194h]
  __int64 vStartPos_4; // [rsp+10h] [rbp-190h]
  _DWORD v42[4]; // [rsp+20h] [rbp-180h] BYREF
  CSingleUserRecipientFilter filter; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 v44; // [rsp+168h] [rbp-38h]
  Vector v45; // 0:kr00_12.12

  v44 = __readfsqword(0x28u);
  if ( g_pGameRules != 0 )
  {
    v2 = *&g_pGameRules[18].m_szQuestName[20];
    v3 = *v2.m128i_i32;
    *v2.m128i_i32 = *v2.m128i_i32 - 10.0;
    v4 = v3 - 20.0;
    v5 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  }
  else
  {
    v4 = -20.0;
    v5 = COERCE_FLOAT(_mm_cvtsi128_si32(0xC1200000));
  }
  v6 = 0;
  if ( this->m_HeroDamageInfoArray.m_Size > 0 )
  {
    do
    {
      while ( v4 <= this->m_HeroDamageInfoArray.m_Memory.m_pMemory[v6].fTime )
      {
        if ( ++v6 >= this->m_HeroDamageInfoArray.m_Size )
          goto LABEL_8;
      }
      vStartPos = v4;
      CUtlVectorBase<CDOTA_BaseNPC_Hero::sHeroDamageInfo,CUtlMemory<CDOTA_BaseNPC_Hero::sHeroDamageInfo,int>>::ShiftElementsLeft(
        &this->m_HeroDamageInfoArray,
        v6,
        1);
      v4 = vStartPos;
      v7 = this->m_HeroDamageInfoArray.m_Size - 1;
      this->m_HeroDamageInfoArray.m_Size = v7;
    }
    while ( v6 < v7 );
  }
LABEL_8:
  v8 = 0;
  if ( this->m_vecRecentModifiers.m_Size > 0 )
  {
    while ( 1 )
    {
      v10 = &this->m_vecRecentModifiers.m_Memory.m_pMemory[v8];
      if ( v10->bBuff )
      {
        if ( v5 > v10->fTime )
          goto LABEL_11;
LABEL_14:
        if ( ++v8 >= this->m_vecRecentModifiers.m_Size )
          break;
      }
      else
      {
        if ( v4 <= v10->fTime )
          goto LABEL_14;
LABEL_11:
        vStartPosa = v4;
        CUtlVectorBase<CDOTA_BaseNPC_Hero::sHeroRecentModifierInfo,CUtlMemory<CDOTA_BaseNPC_Hero::sHeroRecentModifierInfo,int>>::ShiftElementsLeft(
          &this->m_vecRecentModifiers,
          v8,
          1);
        v4 = vStartPosa;
        v9 = this->m_vecRecentModifiers.m_Size - 1;
        this->m_vecRecentModifiers.m_Size = v9;
        if ( v8 >= v9 )
          break;
      }
    }
  }
  m_Value = this->m_flRespawnTime.m_Value;
  if ( g_pGameRules == 0 )
  {
    v12 = 0.0;
    if ( m_Value < 0.0 )
      goto LABEL_18;
    goto LABEL_17;
  }
  m_Value = m_Value - *&g_pGameRules[18].m_szQuestName[20];
  v12 = 0.0;
  if ( m_Value >= 0.0 )
LABEL_17:
    v12 = m_Value;
LABEL_18:
  this->m_flTimeUntilRespawn = v12;
  CBaseEntity::Think(this);
  if ( CDOTA_BaseNPC::IsBot(this) && dota_bot_purchase_item_enable.m_pParent->m_Value.m_nValue != 0 )
  {
    CDOTA_BaseNPC_Hero::PurchaseItems(this);
    CDOTA_BaseNPC_Hero::RetrieveItemsFromStash(this);
  }
  CDOTA_BaseNPC_Hero::ThinkSpeech(this);
  if ( this->m_RespawnMusicTimer.m_timestamp.m_Value > 0.0 )
  {
    v13 = CountdownTimer::Now(&this->m_RespawnMusicTimer);
    v14 = this->m_RespawnMusicTimer.m_timestamp.m_Value;
    if ( v13 >= v14 )
    {
      if ( v14 != -1.0 )
      {
        (*(this->m_RespawnMusicTimer._vptr_CountdownTimer + 2))(
          &this->m_RespawnMusicTimer,
          12,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
        this->m_RespawnMusicTimer.m_timestamp.m_Value = -1.0;
      }
      HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
      if ( HandleEntity != 0 )
      {
        if ( this->m_bReincarnating.m_Value )
        {
          CDOTA_BaseNPC::UnitEmitSound(this, "DOTAMusic_Hero.Reincarnate", 0.0, 0, 0);
        }
        else if ( *&g_pGameRules[6].m_szQuestName[68] != 20
               || *&g_pGameRules[21].m_szQuestName[4 * (this->m_iTeamNum.m_Value != 2) + 112] != 0 )
        {
          v25 = 0;
          if ( (*(HandleEntity->_vptr_IHandleEntity + 140))(HandleEntity) != 0 )
            v25 = HandleEntity;
          CRecipientFilter::CRecipientFilter(&filter);
          filter._vptr_IRecipientFilter = &off_3FCB0D0;
          CRecipientFilter::AddRecipient(&filter, v25);
          Gamerules_EmitSound(&stru_3410478.m_NetworkTransmitComponent.m_PVSInfo, &filter, 0);
          filter._vptr_IRecipientFilter = &off_3FCB0D0;
          CRecipientFilter::~CRecipientFilter(&filter);
        }
      }
    }
  }
  if ( this->m_MultipleLastHitTimer.m_timestamp.m_Value > 0.0 )
  {
    v15 = CountdownTimer::Now(&this->m_MultipleLastHitTimer);
    v16 = this->m_MultipleLastHitTimer.m_timestamp.m_Value;
    if ( v15 >= v16 )
    {
      if ( v16 != -1.0 )
      {
        (*(this->m_MultipleLastHitTimer._vptr_CountdownTimer + 2))(
          &this->m_MultipleLastHitTimer,
          12,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
        this->m_MultipleLastHitTimer.m_timestamp.m_Value = -1.0;
      }
      CDOTA_PlayerResource::ClearLastHitMultikill(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value);
    }
  }
  m_head = this->m_DamageEventQueue.m_head;
  v18 = 0;
  while ( CUtlQueue<CDOTA_BaseNPC::sDamageEvent,CUtlMemory<CDOTA_BaseNPC::sDamageEvent,int>>::IsValid(
            &this->m_DamageEventQueue,
            m_head) )
  {
    v20 = CUtlQueue<CDOTA_BaseNPC::sDamageEvent,CUtlMemory<CDOTA_BaseNPC::sDamageEvent,int>>::Element(
            &this->m_DamageEventQueue,
            m_head);
    if ( g_pGameRules != 0 )
      v19 = *&g_pGameRules[18].m_szQuestName[20] - 1.0;
    else
      v19 = -1.0;
    if ( v20->fTime > v19 )
      v18 += v20->iDamage;
    m_head = CUtlQueue<CDOTA_BaseNPC::sDamageEvent,CUtlMemory<CDOTA_BaseNPC::sDamageEvent,int>>::Next(
               &this->m_DamageEventQueue,
               m_head);
  }
  if ( v18 != this->m_iRecentDamage.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4656, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iRecentDamage.m_Value = v18;
  }
  CDOTAMusicProbabilityGank::CheckGankTimer(&this->m_MusicProbabilityGank, this);
  if ( dota_pathing_fuzztest.m_pParent->m_Value.m_nValue != 0 && this->m_iIsControllableByPlayer64.m_Value != 0 )
  {
    m_pEntity = this->m_pEntity;
    m_hSpawnGroup = 0;
    if ( m_pEntity != 0 )
      m_hSpawnGroup = m_pEntity->m_hSpawnGroup;
    WorldInfoForSpawnGroup = CWorldGameSystem::GetWorldInfoForSpawnGroup(g_pWorldGameSystem, m_hSpawnGroup);
    x = WorldInfoForSpawnGroup->m_WorldMins.x;
    v30 = WorldInfoForSpawnGroup->m_WorldMaxs.x;
    vStartPosb = WorldInfoForSpawnGroup->m_WorldMins.y;
    y = WorldInfoForSpawnGroup->m_WorldMaxs.y;
    *v31.m128i_i32 = RandomFloat(vStartPosb, y);
    HIDWORD(vStartPos_4) = _mm_cvtsi128_si32(v31);
    LODWORD(vStartPos_4) = RandomFloat(x, v30);
    *v32.m128i_i32 = RandomFloat(vStartPosb, y);
    v33 = _mm_cvtsi128_si32(v32);
    *v34.m128i_i32 = RandomFloat(x, v30);
    v35 = _mm_cvtsi128_si32(v34);
    *&v45.x = vStartPos_4;
    v45.z = 0.0;
    FindClearSpaceForUnit(this, v45, 1);
    vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
    v42[0] = v35;
    v42[1] = v33;
    v42[2] = 0;
    vptr_INextBotEventResponder[44](&this->INextBot, v42);
  }
  v21 = 0;
  if ( this->m_AbilitiesPendingDelete.m_Size > 0 )
  {
    do
    {
      while ( 1 )
      {
        v23 = this->m_AbilitiesPendingDelete.m_Memory.m_pMemory[v21];
        if ( v23 != 0 && v23->m_iModifierRefCount == 0 )
          break;
        if ( ++v21 >= this->m_AbilitiesPendingDelete.m_Size )
          return;
      }
      if ( (*(v23->_vptr_IHandleEntity + 251))(v23) < 0 && v23->m_bChanneling )
        CDOTABaseAbility::EndChannel(v23, 0);
      UTIL_Remove(this->m_AbilitiesPendingDelete.m_Memory.m_pMemory[v21]);
      CUtlVectorBase<CDOTABaseAbility *,CUtlMemory<CDOTABaseAbility *,int>>::ShiftElementsLeft(
        &this->m_AbilitiesPendingDelete,
        v21,
        1);
      v22 = this->m_AbilitiesPendingDelete.m_Size - 1;
      this->m_AbilitiesPendingDelete.m_Size = v22;
    }
    while ( v21 < v22 );
  }
}


// CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria  (line 3972, @0x00000000028f6080, libserver.so)  // inlines: CUtlSymbol
// calls: CDOTA_BaseNPC::ModifyOrAppendCriteria, CDOTA_BaseNPC::GetAbilityByIndex, CResponseCriteriaSet::AppendCriteria, __cxa_guard_acquire, CResponseCriteriaSet::ComputeCriteriaSymbol, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CDOTA_Unit_Hero_PhantomLancer::ModifyOrAppendCriteria, CDOTA_Unit_Hero_SkeletonKing::ModifyOrAppendCriteria, CDOTA_Unit_Hero_DragonKnight::ModifyOrAppendCriteria, CDOTA_Unit_Hero_LoneDruid::ModifyOrAppendCriteria, CDOTA_Unit_Hero_Lycan::ModifyOrAppendCriteria, CDOTA_Unit_Hero_MonkeyKing::ModifyOrAppendCriteria, CDOTA_Unit_Hero_Meepo::ModifyOrAppendCriteria, CDOTA_Unit_Hero_Oracle::ModifyOrAppendCriteria, CDOTA_Unit_Hero_Rubick::ModifyOrAppendCriteria, CDOTA_Unit_Hero_Undying::ModifyOrAppendCriteria, CDOTA_Unit_Hero_Winter_Wyvern::ModifyOrAppendCriteria, CDOTA_Unit_Hero_Techies::ModifyOrAppendCriteria (13 total)
// strings: "skill1_level", "skill2_level", "skill3_level", "skill4_level", "skill5_level", "skill6_level"
// globals: `guard variable for'CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria(CResponseCriteriaSet &)::s_critSkillLevel, CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria(CResponseCriteriaSet &)::s_critSkillLevel
void __fastcall CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria(
        CDOTA_BaseNPC_Hero *const this,
        CResponseCriteriaSet *const set)
{
  __int64 i; // rbx
  CDOTABaseAbility *AbilityByIndex; // rax
  float m_Value; // xmm0_4
  CResponseCriteriaSet::CritSymbol_t criteria; // [rsp+0h] [rbp-30h] BYREF

  CDOTA_BaseNPC::ModifyOrAppendCriteria(this, set);
  if ( `guard variable for'CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria(CResponseCriteriaSet &)::s_critSkillLevel == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria(CResponseCriteriaSet &)::s_critSkillLevel) != 0 )
  {
    CResponseCriteriaSet::ComputeCriteriaSymbol("skill1_level");
    CResponseCriteriaSet::ComputeCriteriaSymbol("skill2_level");
    CResponseCriteriaSet::ComputeCriteriaSymbol("skill3_level");
    CResponseCriteriaSet::ComputeCriteriaSymbol("skill4_level");
    CResponseCriteriaSet::ComputeCriteriaSymbol("skill5_level");
    CResponseCriteriaSet::ComputeCriteriaSymbol("skill6_level");
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria(CResponseCriteriaSet &)::s_critSkillLevel);
  }
  for ( i = 0; i != 6; ++i )
  {
    AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(this, i);
    if ( AbilityByIndex != 0 )
    {
      m_Value = AbilityByIndex->m_iLevel.m_Value;
      criteria.m_Id = CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria(CResponseCriteriaSet &)::s_critSkillLevel[i].m_Id;
      CResponseCriteriaSet::AppendCriteria(set, &criteria, m_Value, 1.0);
    }
  }
}


// CDOTA_BaseNPC_Hero::ThinkSpeech  (line 4003, @0x00000000029240b0, libserver.so)  // inlines: CanBeSeenByTeam, CanEntityBeSeenByMyTeam, DOTAGameRules, FindNearbyOtherHeroForSpeech, Get, GetFloat, GetGameFrameTime, GetGameTime, GetHero, GetInstance, GetNPCAttackTarget, GetStreak, GetTeamNumber, Invalidate, IsElapsed, IsGamePaused, Length2DSqr, Max<float>, NetworkStateChanged, Set, SpeakConcept, String, ToCStr, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorSubtract, operator CBaseEntity*, operator-, operator=<float>, operator[]
// calls: CountdownTimer::Now, CEntityHandle::operator CEntityInstance*, CDOTA_Speech::SpeakConcept, CDOTA_BaseNPC_Hero::TestHeroDawdlingInShop, CBaseModelEntity::CanBeSeenByTeam, CResponseCriteriaSet::Reset, CDOTA_BaseNPC::FindAbilityByName, CDOTA_PlayerResource::GetStreak, CResponseCriteriaSet::AppendCriteria, CDOTA_BaseNPC_Hero::COtherHeroTalk::SpeakToOtherHero, fmod
// callers: CDOTA_BaseNPC_Hero::Think
// strings: "infow", "targetclassname", "abilityname", "firstblood", "multiplekillcount", "blinkdaggertime"
void __fastcall CDOTA_BaseNPC_Hero::ThinkSpeech(CDOTA_BaseNPC_Hero *const this)
{
  CountdownTimer *p_m_HeroKillTimer; // r13
  CEntityInstance *v3; // rax
  CEntityInstance *v4; // r12
  bool v5; // cf
  CDOTA_Speech *m_pSpeech; // rdi
  float m_fValue; // xmm0_4
  float v8; // xmm2_4
  long double v9; // fst5
  char v11; // c2
  float frametime; // xmm1_4
  float v13; // xmm0_4
  float *v14; // rax
  float v15; // xmm6_4
  int v16; // eax
  CDOTA_BaseNPC_Hero *v17; // r13
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // r12
  CEntityInstance *v20; // rax
  CDOTA_BaseNPC_Hero *v21; // r14
  unsigned __int8 m_CScriptComponent_high; // al
  int v23; // esi
  float *v24; // rax
  __m128 v25; // xmm0
  __m128 v26; // xmm1
  __m128 v27; // xmm2
  float v28; // xmm2_4
  const char *m_pAsString; // rsi
  CDOTABaseAbility *AbilityByName; // rax
  float v31; // xmm2_4
  float v32; // xmm2_4
  const char *v33; // rdx
  const char *v34; // rdx
  float v35; // xmm2_4
  float v36; // xmm2_4
  float v37; // xmm2_4
  bool v38; // [rsp+10h] [rbp-78h]
  unsigned __int8 m_Value; // [rsp+23h] [rbp-65h]
  float v40; // [rsp+24h] [rbp-64h]
  float v41; // [rsp+28h] [rbp-60h]
  double v42; // [rsp+30h] [rbp-58h]
  float v43; // [rsp+30h] [rbp-58h]
  float v44[18]; // [rsp+40h] [rbp-48h]

  if ( this->m_HeroKillTimer.m_timestamp.m_Value > 0.0 )
  {
    p_m_HeroKillTimer = &this->m_HeroKillTimer;
    if ( CountdownTimer::Now(&this->m_HeroKillTimer) >= this->m_HeroKillTimer.m_timestamp.m_Value )
    {
      v3 = CEntityHandle::operator CEntityInstance *(&this->m_hAttackTarget);
      v4 = v3;
      if ( (v3 == 0
         || BYTE3(v3[7]._vptr_IHandleEntity) == 0
         || (*(v3->_vptr_IHandleEntity + 408))(v3) == 0
         || (v4[43].m_iszPrivateVScripts.u.m_Id & 1) == 0)
        && (*(this->_vptr_IHandleEntity + 408))(this) != 0 )
      {
        if ( !this->m_KillCriteria.m_bOverride )
        {
          CResponseCriteriaSet::Reset(&this->m_KillCriteria.m_criteria);
          m_pAsString = "";
          if ( this->m_KillInfo.m_inflictorname.u.m_Id != 0 )
            m_pAsString = this->m_KillInfo.m_inflictorname.u.m_pAsString;
          AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, m_pAsString, 0);
          if ( AbilityByName != 0 )
            (*(AbilityByName->_vptr_IHandleEntity + 159))(AbilityByName, &this->m_KillCriteria);
          CDOTA_PlayerResource::GetStreak(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value);
          CResponseCriteriaSet::AppendCriteria(&this->m_KillCriteria.m_criteria, "streak", 1.0, v31);
          CResponseCriteriaSet::AppendCriteria(&this->m_KillCriteria.m_criteria, "infow", 1.0, v32);
          v33 = "";
          if ( this->m_KillInfo.m_victimname.u.m_Id != 0 )
            v33 = this->m_KillInfo.m_victimname.u.m_pAsString;
          CResponseCriteriaSet::AppendCriteria(&this->m_KillCriteria.m_criteria, "targetclassname", v33, 1.0);
          v34 = "";
          if ( this->m_KillInfo.m_inflictorname.u.m_Id != 0 )
            v34 = this->m_KillInfo.m_inflictorname.u.m_pAsString;
          CResponseCriteriaSet::AppendCriteria(&this->m_KillCriteria.m_criteria, "abilityname", v34, 1.0);
          CResponseCriteriaSet::AppendCriteria(&this->m_KillCriteria.m_criteria, "firstblood", 1.0, v35);
          CResponseCriteriaSet::AppendCriteria(&this->m_KillCriteria.m_criteria, "multiplekillcount", 1.0, v36);
          CResponseCriteriaSet::AppendCriteria(&this->m_KillCriteria.m_criteria, "blinkdaggertime", 1.0, v37);
        }
        v5 = !this->m_KillInfo.m_bWasFirstBlood;
        this->m_KillCriteria.m_bOverride = 0;
        m_pSpeech = this->m_Speech.m_pSpeech;
        if ( m_pSpeech != 0 )
          CDOTA_Speech::SpeakConcept(m_pSpeech, 6, &this->m_KillCriteria.m_criteria, v5 ? 0 : 5, 0, 0, 0, 0);
        if ( this->m_HeroKillTimer.m_timestamp.m_Value != -1.0 )
        {
          (*(this->m_HeroKillTimer._vptr_CountdownTimer + 2))(p_m_HeroKillTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL, -1.0);
          this->m_HeroKillTimer.m_timestamp.m_Value = -1.0;
        }
        return;
      }
      if ( this->m_HeroKillTimer.m_timestamp.m_Value != -1.0 )
      {
        (*(this->m_HeroKillTimer._vptr_CountdownTimer + 2))(p_m_HeroKillTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL, -1.0);
        this->m_HeroKillTimer.m_timestamp.m_Value = -1.0;
      }
    }
  }
  if ( dota_speech_proximity_interval.m_pParent->m_Value.m_nValue == 0
    || g_pGameRules != 0 && g_pGameRules[19].m_szQuestName[29] != 0
    || this->m_bIsIllusion.m_Value )
  {
    goto LABEL_18;
  }
  m_fValue = dota_speech_proximity_interval.m_pParent->m_Value.m_fValue;
  v8 = this->m_iPlayerID.m_Value * m_fValue;
  if ( g_pGameRules != 0 )
    v42 = *&g_pGameRules[18].m_szQuestName[20];
  else
    v42 = 0.0;
  v9 = v42;
  do
    v9 = __FPREM__(v9, (m_fValue * 10.0));
  while ( v11 != 0 );
  frametime = 0.0;
  v13 = v9;
  if ( g_pGameRules != 0 && g_pGameRules[19].m_szQuestName[29] == 0 )
    frametime = gpGlobals->frametime;
  if ( v13 < v8 )
    goto LABEL_18;
  if ( v8 <= (v13 - frametime) )
    goto LABEL_18;
  m_Value = this->m_iTeamNum.m_Value;
  v14 = (*(this->_vptr_INextBotEventResponder + 73))(&this->INextBot);
  v41 = *v14;
  v40 = v14[1];
  v15 = dota_speech_proximity_radius_enemy.m_pParent->m_Value.m_fValue;
  v44[0] = dota_speech_proximity_radius.m_pParent->m_Value.m_fValue
         * dota_speech_proximity_radius.m_pParent->m_Value.m_fValue;
  v16 = g_HeroList.m_hHeroList.m_Size - 1;
  v44[1] = v15 * v15;
  v43 = fmaxf(v44[0], v15 * v15);
  if ( g_HeroList.m_hHeroList.m_Size - 1 < 0 )
  {
LABEL_18:
    CDOTA_BaseNPC_Hero::TestHeroDawdlingInShop(this, this->m_iCurShop.m_Value);
    return;
  }
  v17 = 0;
  v18 = 4LL * v16;
  v19 = 4 * (v16 - v16) - 4;
  do
  {
    v20 = CEntityHandle::operator CEntityInstance *(&g_HeroList.m_hHeroList.m_Memory.m_pMemory[v18 / 4]);
    v21 = v20;
    if ( v20 != 0 && (v20[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
    {
      m_CScriptComponent_high = HIBYTE(v20[7].m_CScriptComponent);
      if ( this == v21 )
        goto LABEL_31;
    }
    else
    {
      m_CScriptComponent_high = 0;
      v21 = 0;
    }
    if ( (m_CScriptComponent_high - 2) <= 1u && !v21->m_bIsIllusion.m_Value )
    {
      v38 = m_Value != m_CScriptComponent_high;
      if ( m_Value == m_CScriptComponent_high
        || (v23 = this->m_iTeamNum.m_Value) == 4
        || v21->m_pCollision == 0
        || CBaseModelEntity::CanBeSeenByTeam(v21, v23) )
      {
        v24 = (*(v21->_vptr_INextBotEventResponder + 73))(&v21->INextBot);
        v25 = *v24;
        v25.m128_f32[0] = ((v25.m128_f32[0] - v41) * (v25.m128_f32[0] - v41)) + ((v24[1] - v40) * (v24[1] - v40));
        if ( v43 > v25.m128_f32[0] )
        {
          v26.m128_f32[0] = v44[v38];
          v27 = _mm_cmpgt_ss(v25, v26);
          LODWORD(v28) = _mm_andnot_ps(v27, v25).m128_u32[0] | LODWORD(v43) & v27.m128_i32[0];
          if ( v26.m128_f32[0] >= v25.m128_f32[0] )
            v17 = v21;
          v43 = v28;
        }
      }
    }
LABEL_31:
    v18 -= 4LL;
  }
  while ( v18 != v19 );
  if ( v17 == 0 || !CDOTA_BaseNPC_Hero::COtherHeroTalk::SpeakToOtherHero(&this->m_otherHeroTalk, this, v17) )
    goto LABEL_18;
}


// CDOTA_BaseNPC_Hero::COtherHeroTalk::SpeakToOtherHero  (line 4074, @0x000000000290e200, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CDOTA_BaseNPC_Hero::COtherHeroTalk::info_t>, DOTAGameRules, Element, EnsureCapacity, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetUnitName, IndexToIdentity, IsValid, LookupEntity, Set, SpeakConcept, String, ToCStr, info_t, memcpy, operator CEntityInstance*, operator[]
// calls: CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTAGamerules::GetDOTATime, CDOTA_Speech::SpeakConcept, CResponseCriteriaSet::~CResponseCriteriaSet, memcpy, _Unwind_Resume
// callers: CDOTA_BaseNPC_Hero::ThinkSpeech
// strings: "nearby_ally", "nearby_enemy"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_BaseNPC_Hero::COtherHeroTalk::SpeakToOtherHero(
        CDOTA_BaseNPC_Hero::COtherHeroTalk *const this,
        CDOTA_BaseNPC_Hero *pSpeaker,
        CDOTA_BaseNPC_Hero *pOtherHero)
{
  int m_Size; // r10d
  CDOTA_BaseNPC_Hero::COtherHeroTalk *p_m_Memory; // rax
  CDOTA_BaseNPC_Hero *m_pInstance; // rsi
  CEntityIdentity *v9; // rcx
  CEntityIdentity *v10; // rcx
  bool result; // al
  bool v12; // r15
  __int64 v13; // rax
  UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short int> *v14; // rax
  const char *m_pAsString; // rdx
  const char *v16; // rsi
  float v17; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  bool v19; // al
  CEntityIdentity *m_pEntity; // rdx
  __int16 v21; // si
  __int64 v22; // rdx
  int v23; // ecx
  int *v24; // rdx
  UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short int> *v25; // rax
  bool srca; // [rsp+18h] [rbp-88h]
  UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short int> *src; // [rsp+18h] [rbp-88h]
  int v28; // [rsp+20h] [rbp-80h]
  CResponseCriteriaSet criteria; // [rsp+30h] [rbp-70h] BYREF

  m_Size = this->m_infos.m_Size;
  if ( this->m_infos.m_Size <= 0 )
    goto LABEL_13;
  p_m_Memory = &this->m_infos.m_Memory;
  do
  {
    m_pInstance = 0;
    if ( (p_m_Memory->m_infos.m_Size + 2) > 1 )
    {
      v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(p_m_Memory->m_infos.m_Size) >> 9) & 0x3F];
      if ( v9 != 0 )
      {
        v10 = &v9[p_m_Memory->m_infos.m_Size & 0x1FF];
        if ( v10 != 0 && p_m_Memory->m_infos.m_Size == v10->m_EHandle.m_Index )
          m_pInstance = v10->m_pInstance;
      }
    }
    if ( pOtherHero == m_pInstance )
      return 0;
    p_m_Memory = (p_m_Memory + 4);
  }
  while ( p_m_Memory != &this->m_infos.m_Memory.m_Memory.m_Data[4 * (m_Size - 1) + 4] );
  result = 0;
  if ( m_Size <= 9 )
  {
LABEL_13:
    v12 = pSpeaker->m_iTeamNum.m_Value == pOtherHero->m_iTeamNum.m_Value;
    CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
    if ( criteria.m_Lookup.m_Elements.m_nAllocationCount <= 15
      && (criteria.m_Lookup.m_Elements.m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (criteria.m_Lookup.m_Elements.m_nGrowSize & 0xC0000000) != 0 )
      {
        src = criteria.m_Lookup.m_Elements.m_pMemory;
        v25 = (**g_pMemAlloc)(g_pMemAlloc, 1280);
        criteria.m_Lookup.m_Elements.m_pMemory = v25;
        if ( src != 0 )
          memcpy(v25, src, 80LL * criteria.m_Lookup.m_Elements.m_nAllocationCount);
        criteria.m_Lookup.m_Elements.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v13 = *g_pMemAlloc;
        if ( criteria.m_Lookup.m_Elements.m_pMemory != 0 )
          v14 = (*(v13 + 8))(g_pMemAlloc, criteria.m_Lookup.m_Elements.m_pMemory, 1280);
        else
          v14 = (*v13)(g_pMemAlloc, 1280);
        criteria.m_Lookup.m_Elements.m_pMemory = v14;
      }
      criteria.m_Lookup.m_Elements.m_nAllocationCount = 16;
    }
    m_pAsString = "";
    if ( pOtherHero->m_iszUnitName.m_Value.u.m_Id != 0 )
      m_pAsString = pOtherHero->m_iszUnitName.m_Value.u.m_pAsString;
    v16 = "nearby_ally";
    if ( !v12 )
      v16 = "nearby_enemy";
    CResponseCriteriaSet::AppendCriteria(&criteria, v16, m_pAsString, 1.0);
    if ( g_pGameRules != 0 )
      CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
    CResponseCriteriaSet::AppendCriteria(&criteria, "gametime", 1.0, v17);
    m_pSpeech = pSpeaker->m_Speech.m_pSpeech;
    if ( m_pSpeech != 0 && (v19 = CDOTA_Speech::SpeakConcept(m_pSpeech, !v12 ? 38 : 28, &criteria, 3, 0, 0, 0, 0)) )
    {
      m_pEntity = pOtherHero->m_pEntity;
      v28 = -1;
      if ( m_pEntity != 0 )
      {
        v21 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v21 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v28 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v21 & 0x7FFF;
      }
      v22 = this->m_infos.m_Size;
      v23 = v22 + 1;
      v24 = (&this->m_infos.m_Memory + 4 * v22);
      this->m_infos.m_Size = v23;
      if ( v24 != 0 )
        *v24 = v28;
    }
    else
    {
      v19 = 0;
    }
    srca = v19;
    CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
    return srca;
  }
  return result;
}


// CDOTA_BaseNPC_Hero::HasRoomForItem  (line 4125, @0x0000000002955290, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, CopyConstruct<char const*>, Element, EnsureCapacity, FStrEq, GetAbilitiesKeyValues, GetAbilityName, GetInt, GrowMemory, HKeySymbol, IsAddOnGame, Purge, Remove, RemoveAll, ShiftElementsLeft, V_memcpy, V_memmove, V_strlen, _V_strcmp, memcpy, memmove, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_UnitInventory::FindEmptySpaceInInventory, CDOTA_UnitInventory::GetItemInSlot, strcmp, DOTAGameManager, KeyValues::GetFirstSubKey, KeyValues::GetNextKey, KeyValues::FindKey, CKeyValues_Data::Internal_GetInt, KeyValues::GetString, strlen, CUtlVectorBase<char, CUtlMemory<char, int> >::SetCount, memcpy (24 total)
// callers: CDOTA_BotMode_SecretShop::GetDesire, CDOTA_BotMode_SideShop::GetDesire, CDOTA_BaseNPC_Hero::PurchaseItems
// strings: "<NoAbilityName>"
int __fastcall CDOTA_BaseNPC_Hero::HasRoomForItem(
        CDOTA_BaseNPC_Hero *const this,
        const char *pItemName,
        bool bIncludeStashCombines,
        bool bAllowSelling)
{
  CDOTA_BaseNPC::NetworkVar_m_Inventory *p_m_Inventory; // r13
  int EmptySpaceInInventory; // eax
  int v7; // edx
  int v9; // ebx
  CDOTA_Item *v10; // rax
  CDOTA_Item *v11; // r14
  const char **p_m_pszAbilityName; // rax
  const char *v13; // rdi
  const char *v14; // rax
  CDOTAGameManager *v15; // rax
  const KeyValues *m_pkvAddOnAbilities; // rbx
  int v17; // r14d
  CDOTAGameManager *v18; // rax
  KeyValues *Key; // rax
  CDOTAGameManager *v20; // rax
  KeyValues *v21; // rax
  KeyValues *i; // rax
  const KeyValues *v23; // r15
  const char *String; // rax
  const char *v25; // rbx
  int v26; // eax
  int v27; // esi
  size_t v28; // r12
  CDOTAGameManager *v29; // rax
  KeyValues *v30; // rax
  const char *Name; // rax
  __int64 m_Size; // rbx
  const char *v33; // r12
  int v34; // eax
  int v35; // eax
  const char **v36; // rdx
  int j; // ebx
  bool v38; // zf
  int v39; // eax
  int v40; // ebx
  CDOTA_Item *ItemInSlot; // rax
  const KeyValues *pItemKV; // [rsp+38h] [rbp-F8h]
  CUtlVector<char,CUtlMemory<char,int> > szTempBuffer; // [rsp+40h] [rbp-F0h] BYREF
  CUtlVectorFixedGrowableCompat<char const*,16ul> szComponents; // [rsp+60h] [rbp-D0h] BYREF
  unsigned __int64 v48; // [rsp+F8h] [rbp-38h]

  p_m_Inventory = &this->m_Inventory;
  v48 = __readfsqword(0x28u);
  EmptySpaceInInventory = CDOTA_UnitInventory::FindEmptySpaceInInventory(&this->m_Inventory, 1, 0);
  v7 = 0;
  if ( EmptySpaceInInventory != -1 )
    return v7;
  if ( pItemName == 0 )
  {
LABEL_13:
    v15 = DOTAGameManager();
    if ( v15->m_bCustomGame || v15->m_bEventGame )
      m_pkvAddOnAbilities = v15->m_pkvAddOnAbilities;
    else
      m_pkvAddOnAbilities = v15->m_pkvAbilities;
    if ( m_pkvAddOnAbilities != 0 )
    {
      if ( pItemName != 0 )
      {
        szTempBuffer.m_Size = 0;
        szTempBuffer.m_Memory.m_pMemory = 0;
        szTempBuffer.m_Memory.m_nAllocationCount = 0;
        v17 = !bIncludeStashCombines ? 1 : 3;
        szTempBuffer.m_Memory.m_nGrowSize = 0;
        szTempBuffer.m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 4096);
        szTempBuffer.m_Memory.m_nAllocationCount = 4096;
        pItemKV = KeyValues::GetFirstSubKey(m_pkvAddOnAbilities);
        if ( pItemKV != 0 )
        {
          while ( 1 )
          {
            v18 = DOTAGameManager();
            Key = KeyValues::FindKey(pItemKV, v18->m_hKvSymbols[4]);
            if ( Key != 0 && CKeyValues_Data::Internal_GetInt(Key) == 1 )
            {
              v20 = DOTAGameManager();
              v21 = KeyValues::FindKey(pItemKV, v20->m_hKvSymbols[5]);
              if ( v21 != 0 )
                break;
            }
LABEL_19:
            pItemKV = KeyValues::GetNextKey(pItemKV);
            if ( pItemKV == 0 )
              goto LABEL_48;
          }
          for ( i = KeyValues::GetFirstSubKey(v21); ; i = KeyValues::GetNextKey(v23) )
          {
            v23 = i;
            if ( i == 0 )
              goto LABEL_19;
            String = KeyValues::GetString(i, 0, "", 0, 0);
            v25 = String;
            if ( String != 0 )
            {
              v26 = strlen(String);
              v27 = v26 + 1;
              v28 = v26;
            }
            else
            {
              v27 = 1;
              v28 = 0;
            }
            CUtlVectorBase<char,CUtlMemory<char,int>>::SetCount(&szTempBuffer, v27);
            if ( (v28 & 0x80000000) != 0LL )
              __debugbreak();
            memcpy(szTempBuffer.m_Memory.m_pMemory, v25, v28);
            szTempBuffer.m_Memory.m_pMemory[v28] = 0;
            szComponents.m_Size = 0;
            szComponents.m_Memory.m_nAllocationCount = 16;
            szComponents.m_Memory.m_nGrowSize = 0x80000000;
            szComponents.m_Memory.m_pMemory = &szComponents.m_FixedMemory;
            V_SplitStringInPlace(szTempBuffer.m_Memory.m_pMemory, ";", &szComponents);
            v29 = DOTAGameManager();
            v30 = KeyValues::FindKey(pItemKV, v29->m_hKvSymbols[6]);
            if ( v30 == 0 || CKeyValues_Data::Internal_GetInt(v30) <= 0 )
              goto LABEL_35;
            Name = KeyValues::GetName(pItemKV);
            m_Size = szComponents.m_Size;
            v33 = Name;
            v34 = szComponents.m_Size;
            if ( szComponents.m_Size == szComponents.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<char const*,int>::Grow(&szComponents.m_Memory, 1);
              v34 = szComponents.m_Size;
            }
            v35 = v34 + 1;
            szComponents.m_Size = v35;
            v36 = &szComponents.m_Memory.m_pMemory[m_Size];
            if ( v36 != 0 )
              break;
LABEL_36:
            if ( v35 > 0 )
            {
              for ( j = 0; j < v39; ++j )
              {
                v38 = CDOTA_UnitInventory::FindItemInInventory(
                        p_m_Inventory,
                        szComponents.m_Memory.m_pMemory[j],
                        v17,
                        0,
                        -1) == 0;
                v39 = szComponents.m_Size;
                if ( !v38 )
                {
                  if ( szComponents.m_Size - j - 1 > 0 )
                  {
                    memmove(
                      &szComponents.m_Memory.m_pMemory[j],
                      &szComponents.m_Memory.m_pMemory[j + 1],
                      8LL * (szComponents.m_Size - j - 1));
                    v39 = szComponents.m_Size;
                  }
                  --v39;
                  --j;
                  szComponents.m_Size = v39;
                }
              }
              if ( v39 == 1
                && (pItemName == *szComponents.m_Memory.m_pMemory
                 || strcmp(*szComponents.m_Memory.m_pMemory, pItemName) == 0) )
              {
                CUtlVectorBase<char const*,CUtlMemory<char const*,int>>::~CUtlVectorBase(&szComponents);
                szTempBuffer.m_Size = 0;
                if ( (szTempBuffer.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                {
                  CUtlMemory<char,int>::Purge(&szTempBuffer.m_Memory);
                  if ( (szTempBuffer.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                    CUtlMemory<char,int>::Purge(&szTempBuffer.m_Memory);
                }
                return 2;
              }
            }
            szComponents.m_Size = 0;
            if ( (szComponents.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            {
              CUtlMemory<char const*,int>::Purge(&szComponents.m_Memory);
              if ( (szComponents.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                CUtlMemory<char const*,int>::Purge(&szComponents.m_Memory);
            }
          }
          *v36 = v33;
LABEL_35:
          v35 = szComponents.m_Size;
          goto LABEL_36;
        }
LABEL_48:
        CUtlVectorBase<char,CUtlMemory<char,int>>::~CUtlVectorBase(&szTempBuffer);
      }
      if ( bAllowSelling )
      {
        v40 = 0;
        while ( 1 )
        {
          ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(p_m_Inventory, v40);
          if ( ItemInSlot != 0 && CDOTA_BaseNPC_Hero::IsItemSellable(this, ItemInSlot) )
            break;
          if ( ++v40 == 9 )
            return 4;
        }
        return 1;
      }
    }
    return 4;
  }
  v9 = 0;
  while ( 1 )
  {
    v10 = CDOTA_UnitInventory::GetItemInSlot(p_m_Inventory, v9);
    v11 = v10;
    if ( v10 != 0 && (*(v10->_vptr_IHandleEntity + 346))(v10) != 0 )
    {
      p_m_pszAbilityName = &v11->m_pAbilityData->m_pszAbilityName;
      v13 = "<NoAbilityName>";
      if ( p_m_pszAbilityName != 0 )
      {
        v14 = *p_m_pszAbilityName;
        if ( v14 != 0 )
          v13 = v14;
      }
      if ( pItemName == v13 || strcmp(v13, pItemName) == 0 )
        return 3;
    }
    if ( ++v9 == 9 )
      goto LABEL_13;
  }
}


// CDOTA_BaseNPC_Hero::CanFetchItemsFromStash  (line 4220, @0x0000000002943bc0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlStringListFixedGrowable, CUtlStringList_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, CopyAndAddToTail, CopyConstruct<char const*>, CopyConstruct<char*>, Element, FStrEq, GetAbilitiesKeyValues, GetAbilityName, GetInt, GrowMemory, HKeySymbol, IsAddOnGame, IsExternallyAllocated, Purge, PurgeAndDeleteElements, Purge_FixedGrowable, RemoveAll, V_memcpy, V_strlen, _V_strcmp, memcpy, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlStringListFixedGrowable, ~CUtlStringList_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CUtlMemoryFixedGrowable<char const*, 8ul, int>::CUtlMemoryFixedGrowable, CDOTA_UnitInventory::GetItemInSlot, CUtlVectorBase<char const*, CUtlMemoryFixedGrowable<char const*, 8ul, int> >::AddToTail, DOTAGameManager, KeyValues::GetFirstSubKey, KeyValues::GetNextKey, KeyValues::FindKey, CKeyValues_Data::Internal_GetInt, KeyValues::GetString, V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), KeyValues::GetName, strlen (24 total)
// callers: CDOTA_Bot::ConsiderCourierUsage
// strings: "<NoAbilityName>", "ItemResult"
bool __fastcall CDOTA_BaseNPC_Hero::CanFetchItemsFromStash(
        CDOTA_BaseNPC_Hero *const this,
        CUtlStringList *const itemsFromStash)
{
  CDOTA_BaseNPC::NetworkVar_m_Inventory *p_m_Inventory; // rax
  int v4; // ebx
  DOTAAbilityData_t *m_pAbilityData; // rdx
  char *v6; // rax
  char *m_pszAbilityName; // rdx
  DOTAAbilityData_t *v8; // rdx
  char *v9; // rax
  char *v10; // rdx
  CDOTAGameManager *v11; // rax
  const KeyValues *m_pkvAddOnAbilities; // rdi
  CDOTAGameManager *v13; // rax
  KeyValues *Key; // rax
  CDOTAGameManager *v15; // rax
  KeyValues *v16; // rax
  const char *String; // rax
  CDOTAGameManager *v18; // rax
  KeyValues *v19; // rax
  const char *Name; // rax
  const char *v21; // rbx
  int v22; // r14d
  size_t v23; // r12
  char *v24; // rax
  char *v25; // r13
  __int64 m_Size; // rbx
  int v27; // eax
  char **v28; // rax
  __int64 v29; // rbx
  __int64 v30; // r12
  int m_nAllocationCount; // edx
  const char **v32; // rax
  const char **v33; // r13
  int v34; // eax
  __int64 v35; // r13
  int i; // r12d
  const char **v37; // rax
  __int64 v38; // rbx
  const char **v39; // r14
  int v40; // eax
  __int64 v41; // r14
  int v42; // r12d
  const char *v43; // rbx
  const char *v44; // rdi
  const char **v45; // r13
  int v46; // r15d
  __int64 v47; // r13
  int v48; // r12d
  const char *v49; // rbx
  const char *v50; // rdi
  const char **v51; // r15
  int v52; // r14d
  const char *v53; // rax
  __int64 v54; // rbx
  const char *v55; // r12
  int v56; // eax
  const char **v57; // rax
  uint32 m_nGrowSize; // edx
  uint32 v59; // eax
  __int64 v60; // r12
  int v61; // ebx
  char *v62; // rsi
  uint32 v63; // eax
  int v64; // r14d
  const char *v65; // r12
  const char *v66; // rdi
  const char **v67; // r15
  int v68; // ebx
  size_t v69; // r14
  char *v70; // rax
  char *v71; // r15
  __int64 v72; // r12
  int v73; // eax
  char **v74; // rax
  const char *v75; // rax
  __int64 v76; // rbx
  int v77; // eax
  int j; // eax
  __int64 v79; // r14
  int v80; // r13d
  int v81; // r15d
  int v82; // ebx
  CDOTA_Item *ItemInInventory; // rax
  CDOTA_Item *v84; // r12
  __int64 v85; // r12
  const char *v86; // r13
  int v87; // r15d
  size_t v88; // r14
  __int64 v89; // r13
  int v90; // eax
  char **v91; // rax
  __int64 v92; // r13
  const char **v93; // r12
  int v94; // eax
  const char **v95; // rax
  bool v96; // bl
  KeyValues *pItemKV; // [rsp+28h] [rbp-218h]
  KeyValues *pComponentListKV; // [rsp+38h] [rbp-208h]
  CDOTA_UnitInventory *v101; // [rsp+58h] [rbp-1E8h]
  int iItemsFound; // [rsp+64h] [rbp-1DCh]
  int iItemsFounda; // [rsp+64h] [rbp-1DCh]
  int bInvolvedItemInInventory; // [rsp+70h] [rbp-1D0h]
  char bInvolvedItemInInventorya; // [rsp+70h] [rbp-1D0h]
  int dest; // [rsp+78h] [rbp-1C8h]
  int desta; // [rsp+78h] [rbp-1C8h]
  void *destb; // [rsp+78h] [rbp-1C8h]
  char *src; // [rsp+88h] [rbp-1B8h] BYREF
  CUtlVectorFixedGrowable<char const*,8ul> stashList; // [rsp+90h] [rbp-1B0h] BYREF
  CUtlVectorFixedGrowable<char const*,8ul> itemList; // [rsp+F0h] [rbp-150h] BYREF
  CUtlStringListFixedGrowable<8ul> szComponents; // [rsp+150h] [rbp-F0h] BYREF
  CUtlVectorFixedGrowable<char const*,8ul> allItemList; // [rsp+1B0h] [rbp-90h] BYREF
  unsigned __int64 v114; // [rsp+208h] [rbp-38h]

  v114 = __readfsqword(0x28u);
  stashList.m_Size = 0;
  CUtlMemoryFixedGrowable<char const*,8ul,int>::CUtlMemoryFixedGrowable(&stashList.m_Memory, 0, 8);
  itemList.m_Size = 0;
  CUtlMemoryFixedGrowable<char const*,8ul,int>::CUtlMemoryFixedGrowable(&itemList.m_Memory, 0, 8);
  p_m_Inventory = &this->m_Inventory;
  v4 = 0;
  v101 = p_m_Inventory;
  do
  {
    if ( CDOTA_UnitInventory::GetItemInSlot(v101, v4) != 0 )
    {
      m_pAbilityData = CDOTA_UnitInventory::GetItemInSlot(v101, v4)->m_pAbilityData;
      v6 = "<NoAbilityName>";
      if ( m_pAbilityData != 0 )
      {
        m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
        if ( m_pszAbilityName != 0 )
          v6 = m_pszAbilityName;
      }
      src = v6;
      CUtlVectorBase<char const*,CUtlMemoryFixedGrowable<char const*,8ul,int>>::AddToTail(&itemList, &src);
    }
    ++v4;
  }
  while ( v4 != 9 );
  do
  {
    if ( CDOTA_UnitInventory::GetItemInSlot(v101, v4) != 0 )
    {
      v8 = CDOTA_UnitInventory::GetItemInSlot(v101, v4)->m_pAbilityData;
      v9 = "<NoAbilityName>";
      if ( v8 != 0 )
      {
        v10 = v8->m_pszAbilityName;
        if ( v10 != 0 )
          v9 = v10;
      }
      src = v9;
      CUtlVectorBase<char const*,CUtlMemoryFixedGrowable<char const*,8ul,int>>::AddToTail(&stashList, &src);
    }
    ++v4;
  }
  while ( v4 != 16 );
  v11 = DOTAGameManager();
  if ( v11->m_bCustomGame || v11->m_bEventGame )
    m_pkvAddOnAbilities = v11->m_pkvAddOnAbilities;
  else
    m_pkvAddOnAbilities = v11->m_pkvAbilities;
  if ( m_pkvAddOnAbilities != 0 )
  {
    for ( pItemKV = KeyValues::GetFirstSubKey(m_pkvAddOnAbilities); pItemKV != 0; pItemKV = KeyValues::GetNextKey(pItemKV) )
    {
      v13 = DOTAGameManager();
      Key = KeyValues::FindKey(pItemKV, v13->m_hKvSymbols[4]);
      if ( Key == 0 )
        continue;
      if ( CKeyValues_Data::Internal_GetInt(Key) != 1 )
        continue;
      v15 = DOTAGameManager();
      v16 = KeyValues::FindKey(pItemKV, v15->m_hKvSymbols[5]);
      if ( v16 == 0 )
        continue;
      pComponentListKV = KeyValues::GetFirstSubKey(v16);
      if ( pComponentListKV == 0 )
        continue;
      do
      {
        szComponents.m_Size = 0;
        szComponents.m_Memory.m_nAllocationCount = 8;
        szComponents.m_Memory.m_nGrowSize = 0x80000000;
        szComponents.m_Memory.m_pMemory = &szComponents.m_Memory.m_FixedMemory;
        String = KeyValues::GetString(pComponentListKV, 0, "", 0, 0);
        V_SplitString(String, ";", &szComponents);
        v18 = DOTAGameManager();
        v19 = KeyValues::FindKey(pItemKV, v18->m_hKvSymbols[6]);
        if ( v19 != 0 && CKeyValues_Data::Internal_GetInt(v19) > 0 )
        {
          Name = KeyValues::GetName(pItemKV);
          v21 = Name;
          if ( Name != 0 )
          {
            v22 = strlen(Name) + 1;
            v23 = v22;
          }
          else
          {
            v22 = 1;
            v23 = 1;
          }
          v24 = (**g_pMemAlloc)(g_pMemAlloc, v23);
          v25 = v24;
          if ( v22 < 0 )
            __debugbreak();
          memcpy(v24, v21, v23);
          m_Size = szComponents.m_Size;
          v27 = szComponents.m_Size;
          if ( szComponents.m_Size == szComponents.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<char *,int>::Grow(&szComponents.m_Memory, 1);
            v27 = szComponents.m_Size;
          }
          szComponents.m_Size = v27 + 1;
          v28 = &szComponents.m_Memory.m_pMemory[m_Size];
          if ( v28 != 0 )
            *v28 = v25;
        }
        v29 = 0;
        v30 = 0;
        allItemList.m_Memory.m_nAllocationCount = 8;
        m_nAllocationCount = 8;
        allItemList.m_Size = 0;
        allItemList.m_Memory.m_nGrowSize = 0x80000000;
        allItemList.m_Memory.m_pMemory = &allItemList.m_Memory.m_FixedMemory;
        if ( itemList.m_Size > 0 )
        {
          while ( 1 )
          {
            v33 = &itemList.m_Memory.m_pMemory[v29];
            v34 = v30;
            if ( m_nAllocationCount == v30 )
            {
              CUtlMemory<char const*,int>::Grow(&allItemList.m_Memory, 1);
              v34 = allItemList.m_Size;
            }
            allItemList.m_Size = v34 + 1;
            v32 = &allItemList.m_Memory.m_pMemory[v30];
            if ( v32 != 0 )
              *v32 = *v33;
            if ( itemList.m_Size <= ++v29 )
              break;
            v30 = allItemList.m_Size;
            m_nAllocationCount = allItemList.m_Memory.m_nAllocationCount;
          }
        }
        v35 = 0;
        for ( i = 0; stashList.m_Size > i; ++v35 )
        {
          v38 = allItemList.m_Size;
          v39 = &stashList.m_Memory.m_pMemory[v35];
          v40 = allItemList.m_Size;
          if ( allItemList.m_Size == allItemList.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<char const*,int>::Grow(&allItemList.m_Memory, 1);
            v40 = allItemList.m_Size;
          }
          allItemList.m_Size = v40 + 1;
          v37 = &allItemList.m_Memory.m_pMemory[v38];
          if ( v37 != 0 )
            *v37 = *v39;
          ++i;
        }
        v41 = 0;
        dest = 0;
        iItemsFound = 0;
        for ( bInvolvedItemInInventory = szComponents.m_Size; bInvolvedItemInInventory > dest; ++v41 )
        {
          v42 = allItemList.m_Size;
          if ( allItemList.m_Size > 0 )
          {
            v43 = szComponents.m_Memory.m_pMemory[v41];
            v44 = *allItemList.m_Memory.m_pMemory;
            if ( v43 == *allItemList.m_Memory.m_pMemory )
            {
              v46 = 0;
            }
            else
            {
              v45 = allItemList.m_Memory.m_pMemory + 1;
              v46 = 0;
              do
              {
                if ( strcmp(v44, v43) == 0 )
                  break;
                if ( ++v46 == v42 )
                  goto LABEL_58;
                v44 = *v45++;
              }
              while ( v44 != v43 );
            }
            ++iItemsFound;
            CUtlVectorBase<char const*,CUtlMemoryFixedGrowable<char const*,8ul,int>>::Remove(&allItemList, v46);
            bInvolvedItemInInventory = szComponents.m_Size;
          }
LABEL_58:
          ++dest;
        }
        if ( iItemsFound != bInvolvedItemInInventory )
          goto LABEL_75;
        if ( szComponents.m_Size <= 0 )
          goto LABEL_116;
        v47 = 0;
        desta = 0;
        bInvolvedItemInInventorya = 0;
        do
        {
          v48 = itemList.m_Size;
          if ( itemList.m_Size <= 0 )
          {
LABEL_91:
            v64 = stashList.m_Size;
            if ( stashList.m_Size <= 0 )
              goto LABEL_69;
            v65 = szComponents.m_Memory.m_pMemory[v47];
            v66 = *stashList.m_Memory.m_pMemory;
            if ( v65 == *stashList.m_Memory.m_pMemory )
            {
              v68 = 0;
              if ( v65 != 0 )
                goto LABEL_98;
            }
            else
            {
              v67 = stashList.m_Memory.m_pMemory + 1;
              v68 = 0;
              do
              {
                if ( strcmp(v66, v65) == 0 )
                  break;
                if ( ++v68 == v64 )
                  goto LABEL_69;
                v66 = *v67++;
              }
              while ( v66 != v65 );
              if ( v65 != 0 )
              {
LABEL_98:
                iItemsFounda = strlen(v65) + 1;
                v69 = iItemsFounda;
LABEL_99:
                v70 = (**g_pMemAlloc)(g_pMemAlloc, v69);
                v71 = v70;
                if ( iItemsFounda < 0 )
                  __debugbreak();
                memcpy(v70, v65, v69);
                v72 = itemsFromStash->m_Size;
                v73 = itemsFromStash->m_Size;
                if ( v72 == itemsFromStash->m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<char *,int>::Grow(&itemsFromStash->m_Memory, 1);
                  v73 = itemsFromStash->m_Size;
                }
                itemsFromStash->m_Size = v73 + 1;
                v74 = &itemsFromStash->m_Memory.m_pMemory[v72];
                if ( v74 != 0 )
                  *v74 = v71;
                CUtlVectorBase<char const*,CUtlMemoryFixedGrowable<char const*,8ul,int>>::Remove(&stashList, v68);
                goto LABEL_69;
              }
            }
            iItemsFounda = 1;
            v69 = 1;
            goto LABEL_99;
          }
          v49 = szComponents.m_Memory.m_pMemory[v47];
          v50 = *itemList.m_Memory.m_pMemory;
          if ( v49 == *itemList.m_Memory.m_pMemory )
          {
            v52 = 0;
          }
          else
          {
            v51 = itemList.m_Memory.m_pMemory + 1;
            v52 = 0;
            do
            {
              if ( strcmp(v50, v49) == 0 )
                break;
              if ( ++v52 == v48 )
                goto LABEL_91;
              v50 = *v51++;
            }
            while ( v50 != v49 );
          }
          CUtlVectorBase<char const*,CUtlMemoryFixedGrowable<char const*,8ul,int>>::Remove(&itemList, v52);
          bInvolvedItemInInventorya = 1;
LABEL_69:
          ++desta;
          ++v47;
        }
        while ( szComponents.m_Size > desta );
        if ( bInvolvedItemInInventorya != 0 )
        {
          v53 = KeyValues::GetString(pItemKV, "ItemResult", "", 0, 0);
          v54 = itemList.m_Size;
          v55 = v53;
          v56 = itemList.m_Size;
          if ( itemList.m_Size == itemList.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<char const*,int>::Grow(&itemList.m_Memory, 1);
            v56 = itemList.m_Size;
          }
          itemList.m_Size = v56 + 1;
          v57 = &itemList.m_Memory.m_pMemory[v54];
          if ( v57 != 0 )
            goto LABEL_74;
          goto LABEL_75;
        }
LABEL_116:
        v75 = KeyValues::GetString(pItemKV, "ItemResult", "", 0, 0);
        v76 = stashList.m_Size;
        v55 = v75;
        v77 = stashList.m_Size;
        if ( stashList.m_Size == stashList.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<char const*,int>::Grow(&stashList.m_Memory, 1);
          v77 = stashList.m_Size;
        }
        stashList.m_Size = v77 + 1;
        v57 = &stashList.m_Memory.m_pMemory[v76];
        if ( v57 != 0 )
LABEL_74:
          *v57 = v55;
LABEL_75:
        allItemList.m_Size = 0;
        if ( allItemList.m_Memory.m_nAllocationCount < 0 )
        {
          v59 = allItemList.m_Memory.m_nGrowSize & 0xC0000000;
        }
        else
        {
          m_nGrowSize = allItemList.m_Memory.m_nGrowSize;
          v59 = allItemList.m_Memory.m_nGrowSize & 0xC0000000;
          if ( allItemList.m_Memory.m_pMemory != &allItemList.m_Memory.m_FixedMemory )
          {
            if ( allItemList.m_Memory.m_pMemory != 0 && v59 == 0 )
            {
              (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
              m_nGrowSize = allItemList.m_Memory.m_nGrowSize;
            }
            allItemList.m_Memory.m_nAllocationCount = 8;
            allItemList.m_Memory.m_pMemory = &allItemList.m_Memory.m_FixedMemory;
            allItemList.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
            goto LABEL_81;
          }
        }
        if ( v59 == 0 )
          CUtlMemory<char const*,int>::Purge(&allItemList.m_Memory);
LABEL_81:
        if ( szComponents.m_Size > 0 )
        {
          v60 = 0;
          v61 = 0;
          do
          {
            ++v61;
            v62 = szComponents.m_Memory.m_pMemory[v60++];
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v62);
          }
          while ( v61 < szComponents.m_Size );
        }
        szComponents.m_Size = 0;
        if ( szComponents.m_Memory.m_nAllocationCount < 0 )
        {
          v63 = szComponents.m_Memory.m_nGrowSize & 0xC0000000;
        }
        else
        {
          v63 = szComponents.m_Memory.m_nGrowSize & 0xC0000000;
          if ( szComponents.m_Memory.m_pMemory != &szComponents.m_Memory.m_FixedMemory )
          {
            if ( szComponents.m_Memory.m_pMemory != 0 && v63 == 0 )
              (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
            goto LABEL_89;
          }
        }
        if ( v63 == 0 )
          CUtlMemory<char *,int>::Purge(&szComponents.m_Memory);
LABEL_89:
        pComponentListKV = KeyValues::GetNextKey(pComponentListKV);
      }
      while ( pComponentListKV != 0 );
    }
  }
  if ( itemList.m_Size <= 5 )
  {
    for ( j = stashList.m_Size; stashList.m_Size > 0; j = stashList.m_Size )
    {
      if ( j <= 0 )
      {
        v85 = 0;
        v82 = 0;
      }
      else
      {
        v79 = 0;
        v80 = 0;
        v81 = 0;
        v82 = 0;
        do
        {
          ItemInInventory = CDOTA_UnitInventory::FindItemInInventory(v101, stashList.m_Memory.m_pMemory[v79], 2, 0, -1);
          v84 = ItemInInventory;
          if ( ItemInInventory != 0 && v81 < (*(ItemInInventory->_vptr_IHandleEntity + 359))(ItemInInventory) )
          {
            v81 = (*(v84->_vptr_IHandleEntity + 359))(v84);
            v82 = v80;
          }
          ++v80;
          ++v79;
        }
        while ( stashList.m_Size > v80 );
        v85 = v82;
      }
      v86 = stashList.m_Memory.m_pMemory[v85];
      if ( v86 != 0 )
      {
        v87 = strlen(stashList.m_Memory.m_pMemory[v85]) + 1;
        v88 = v87;
      }
      else
      {
        v88 = 1;
        v87 = 1;
      }
      destb = (**g_pMemAlloc)(g_pMemAlloc, v88);
      if ( v87 < 0 )
        __debugbreak();
      memcpy(destb, v86, v88);
      v89 = itemsFromStash->m_Size;
      v90 = itemsFromStash->m_Size;
      if ( v89 == itemsFromStash->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<char *,int>::Grow(&itemsFromStash->m_Memory, 1);
        v90 = itemsFromStash->m_Size;
      }
      itemsFromStash->m_Size = v90 + 1;
      v91 = &itemsFromStash->m_Memory.m_pMemory[v89];
      if ( v91 != 0 )
        *v91 = destb;
      v92 = itemList.m_Size;
      v93 = &stashList.m_Memory.m_pMemory[v85];
      v94 = itemList.m_Size;
      if ( itemList.m_Size == itemList.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<char const*,int>::Grow(&itemList.m_Memory, 1);
        v94 = itemList.m_Size;
      }
      itemList.m_Size = v94 + 1;
      v95 = &itemList.m_Memory.m_pMemory[v92];
      if ( v95 != 0 )
        *v95 = *v93;
      CUtlVectorBase<char const*,CUtlMemoryFixedGrowable<char const*,8ul,int>>::Remove(&stashList, v82);
      if ( itemList.m_Size > 5 )
        break;
    }
  }
  v96 = itemsFromStash->m_Size > 0;
  CUtlVectorBase<char const*,CUtlMemoryFixedGrowable<char const*,8ul,int>>::~CUtlVectorBase(&itemList);
  CUtlVectorBase<char const*,CUtlMemoryFixedGrowable<char const*,8ul,int>>::~CUtlVectorBase(&stashList);
  return v96;
}


// CDOTA_BaseNPC_Hero::PurchaseItems  (line 4365, @0x0000000002955840, libserver.so)  // inlines: DOTAGameRules, GetTeamNumber, IsElapsed, State_Get, State_IsBefore, State_IsBeforePreGame, State_Order, String, ToCStr, entindex, ~CSingleUserRecipientFilter
// calls: CDOTA_Bot::DoBotScriptItemPurchaseThink, CountdownTimer::Now, CDOTAGamerules::IsBotThinkingEnabled, CDOTA_BaseNPC::IsInRangeOfFountain, CountdownTimer::Start, CDOTA_BaseNPC_Hero::GetNextItemToPurchase, GetItemCost, CDOTA_BaseNPC_Hero::HasRoomForItem, IsPurchasedFromSideShop, IsPurchasedFromSecretShop, IsPurchasedFromMainShop, CDOTA_UnitInventory::FindEmptySpaceInInventory (33 total)
// callers: CDOTA_BaseNPC_Hero::Think
// strings: "General.Buy"
// globals: DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING
void __fastcall CDOTA_BaseNPC_Hero::PurchaseItems(CDOTA_BaseNPC_Hero *const this)
{
  CDOTA_Bot *m_pBot; // rdi
  CDOTA_Bot *v3; // rax
  __int64 v4; // rdx
  int v5; // eax
  bool v6; // al
  float v7; // xmm1_4
  float v8; // xmm0_4
  int v9; // r13d
  sLoadoutItem *NextItemToPurchase; // r12
  int v11; // eax
  const char *m_Id; // rdi
  const char *v13; // rsi
  bool v14; // r15
  int HasRoomForItem; // eax
  const char *v16; // rdi
  bool v17; // al
  const char *v18; // rdi
  bool v19; // r14
  bool v20; // al
  const char *v21; // rdi
  bool v22; // cl
  CDOTA_Bot *v23; // rdi
  bool IsAboutToDie; // al
  const char *v25; // rsi
  int v26; // eax
  bool v27; // r15
  int v28; // ecx
  bool v29; // r14
  int v30; // eax
  const char *v31; // rsi
  bool v32; // al
  bool v33; // al
  const char *v34; // r14
  CDOTAGameManager *v35; // rax
  int v36; // r12d
  CEntityInstance *v37; // rax
  int v38; // eax
  CBaseEntity *Shop; // rax
  float v40; // xmm1_4
  const CBaseEntity *v41; // r12
  int y; // r14d
  const Vector *AbsOrigin; // rax
  int v44; // r12d
  CDOTA_Item *ItemInSlot; // rax
  CDOTA_Item *v46; // r14
  bool v47; // al
  bool v48; // al
  CDOTA_Item *v49; // rsi
  const char *v50; // r14
  CDOTAGameManager *v51; // rax
  int AbilityIndex; // r14d
  CEntityInstance *v53; // rax
  int v54; // eax
  CEntityIndex v55; // eax
  bool v56; // [rsp+Bh] [rbp-1A5h]
  bool bIsObserverWard; // [rsp+Ch] [rbp-1A4h]
  bool bInRangeOfAnyShop; // [rsp+10h] [rbp-1A0h]
  bool bPurchasedFromMainShop; // [rsp+14h] [rbp-19Ch]
  bool bPurchasedFromMainShopa; // [rsp+14h] [rbp-19Ch]
  bool bPurchasedFromMainShopb; // [rsp+14h] [rbp-19Ch]
  int iHasRoom; // [rsp+20h] [rbp-190h]
  sLoadoutItem *iHasRooma; // [rsp+20h] [rbp-190h]
  int iHasRoomc; // [rsp+20h] [rbp-190h]
  int iHasRoomb; // [rsp+20h] [rbp-190h]
  sLoadoutItem *p_m_ObserverWard; // [rsp+28h] [rbp-188h]
  int EmptySpaceInInventory; // [rsp+38h] [rbp-178h]
  bool bPurchasedFromSecretShop; // [rsp+3Eh] [rbp-172h]
  bool bIsTPScroll; // [rsp+3Fh] [rbp-171h]
  CSingleUserRecipientFilter filter; // [rsp+40h] [rbp-170h] BYREF
  unsigned __int64 v71; // [rsp+178h] [rbp-38h]

  v71 = __readfsqword(0x28u);
  m_pBot = this->m_pBot;
  if ( m_pBot != 0 && CDOTA_Bot::DoBotScriptItemPurchaseThink(m_pBot) )
    return;
  if ( this->m_PurchaseItemTimer.m_timestamp.m_Value > 0.0
    && CountdownTimer::Now(&this->m_PurchaseItemTimer) < this->m_PurchaseItemTimer.m_timestamp.m_Value )
  {
    return;
  }
  if ( this->m_bIsIllusion.m_Value )
    return;
  v3 = this->m_pBot;
  if ( v3 != 0 && v3->m_bHuman )
    return;
  if ( g_pGameRules != 0 )
  {
    v4 = *&g_pGameRules[6].m_szQuestName[28];
    v5 = 0;
    if ( v4 <= 0xA )
      v5 = DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING[v4];
    if ( dword_491AD10 > v5 || !CDOTAGamerules::IsBotThinkingEnabled(g_pGameRules) )
      return;
    v3 = this->m_pBot;
  }
  if ( (v3 == 0 || !v3->m_bDoNotPurchase)
    && (*&g_pGameRules[6].m_szQuestName[28] != 4
     || (*&g_pGameRules[6].m_szQuestName[36] - *&g_pGameRules[18].m_szQuestName[20]) <= 75.0) )
  {
    v6 = CDOTA_BaseNPC::IsInRangeOfFountain(this);
    v8 = 0.1;
    if ( !v6 )
      v8 = RandomFloat(0.5, 1.0);
    v9 = 0;
    CountdownTimer::Start(&this->m_PurchaseItemTimer, v8, v7);
    p_m_ObserverWard = &this->m_ObserverWard;
    do
    {
      NextItemToPurchase = CDOTA_BaseNPC_Hero::GetNextItemToPurchase(this, v9 != 1);
      if ( NextItemToPurchase == 0 )
        return;
      v11 = (*(this->_vptr_IHandleEntity + 397))(this);
      m_Id = "";
      if ( NextItemToPurchase->name.u.m_Id != 0 )
        m_Id = NextItemToPurchase->name.u.m_Id;
      if ( v11 > GetItemCost(m_Id) )
      {
        v13 = "";
        v14 = (NextItemToPurchase->iFlags & 0x40) == 0;
        if ( NextItemToPurchase->name.u.m_Id != 0 )
          v13 = NextItemToPurchase->name.u.m_Id;
        HasRoomForItem = CDOTA_BaseNPC_Hero::HasRoomForItem(this, v13, 0, (NextItemToPurchase->iFlags & 0x40) == 0);
        v16 = "";
        iHasRoom = HasRoomForItem;
        if ( NextItemToPurchase->name.u.m_Id != 0 )
          v16 = NextItemToPurchase->name.u.m_Id;
        v17 = IsPurchasedFromSideShop(v16);
        v18 = "";
        v19 = v17;
        if ( NextItemToPurchase->name.u.m_Id != 0 )
          v18 = NextItemToPurchase->name.u.m_Id;
        v20 = IsPurchasedFromSecretShop(v18);
        v21 = "";
        bPurchasedFromSecretShop = v20;
        if ( NextItemToPurchase->name.u.m_Id != 0 )
          v21 = NextItemToPurchase->name.u.m_Id;
        bPurchasedFromMainShop = IsPurchasedFromMainShop(v21);
        bIsTPScroll = NextItemToPurchase == &this->m_TPScroll;
        EmptySpaceInInventory = CDOTA_UnitInventory::FindEmptySpaceInInventory(&this->m_Inventory, 2, 0);
        bInRangeOfAnyShop = CDOTA_BaseNPC::IsInRangeOfShop(this, DOTA_SHOP_TYPE::DOTA_SHOP_SIDE, 0)
                         || CDOTA_BaseNPC::IsInRangeOfShop(this, DOTA_SHOP_TYPE::DOTA_SHOP_SECRET, 0)
                         || CDOTA_BaseNPC::IsInRangeOfShop(this, DOTA_SHOP_TYPE::DOTA_SHOP_HOME, 0);
        if ( !v19
          || CDOTAGamerules::GetRangeToShop(g_pGameRules, this, DOTA_SHOP_TYPE::DOTA_SHOP_SIDE, 0) >= 4000.0
          || CDOTA_BaseNPC::IsInRangeOfShop(this, DOTA_SHOP_TYPE::DOTA_SHOP_SIDE, 0) )
        {
          v22 = 0;
        }
        else
        {
          v22 = 1;
          if ( (iHasRoom & 0xFFFFFFFD) != 0 )
            v22 = iHasRoom == 3;
        }
        if ( NextItemToPurchase == &this->m_TPScroll )
        {
          bPurchasedFromMainShopa = v22;
          v32 = CDOTA_BaseNPC::IsInRangeOfShop(this, DOTA_SHOP_TYPE::DOTA_SHOP_SIDE, 0);
          v22 = bPurchasedFromMainShopa;
          if ( !v32 )
          {
            v33 = CDOTA_BaseNPC::IsInRangeOfShop(this, DOTA_SHOP_TYPE::DOTA_SHOP_HOME, 0);
            v22 = bPurchasedFromMainShopa;
            if ( !v33 )
              goto LABEL_61;
          }
          v56 = iHasRoom == 4;
          if ( iHasRoom == 4 && NextItemToPurchase == p_m_ObserverWard )
            goto LABEL_61;
        }
        else
        {
          v56 = iHasRoom == 4;
          if ( iHasRoom == 4 && NextItemToPurchase == p_m_ObserverWard )
            goto LABEL_61;
          v23 = this->m_pBot;
          if ( v23 != 0 )
          {
            bIsObserverWard = v22;
            IsAboutToDie = CDOTA_Bot::IsAboutToDie(v23);
            v22 = bIsObserverWard;
            if ( IsAboutToDie && bPurchasedFromMainShop )
            {
LABEL_44:
              if ( !bPurchasedFromSecretShop
                || CDOTA_BaseNPC::IsInRangeOfShop(this, DOTA_SHOP_TYPE::DOTA_SHOP_SECRET, 0) && !v56
                || CDOTA_BaseNPC::IsInRangeOfShop(this, DOTA_SHOP_TYPE::DOTA_SHOP_SIDE, 0) )
              {
                if ( iHasRoom == 1 && bInRangeOfAnyShop )
                {
                  iHasRooma = NextItemToPurchase;
                  v44 = 0;
                  bPurchasedFromMainShopb = v19;
                  while ( 1 )
                  {
                    ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(&this->m_Inventory, v44);
                    v46 = ItemInSlot;
                    if ( ItemInSlot != 0 && CDOTA_BaseNPC_Hero::IsItemSellable(this, ItemInSlot) )
                      break;
                    if ( ++v44 == 9 )
                    {
                      NextItemToPurchase = iHasRooma;
                      v19 = bPurchasedFromMainShopb;
                      goto LABEL_46;
                    }
                  }
                  NextItemToPurchase = iHasRooma;
                  v49 = v46;
                  v19 = bPurchasedFromMainShopb;
                  CDOTA_BaseNPC::SellItem(this, v49);
                }
LABEL_46:
                v25 = "";
                if ( NextItemToPurchase->name.u.m_Id != 0 )
                  v25 = NextItemToPurchase->name.u.m_Id;
                v26 = CDOTA_BaseNPC_Hero::HasRoomForItem(this, v25, 0, v14);
                v27 = 0;
                v28 = v26;
                if ( v19 )
                {
                  iHasRoomb = v26;
                  v48 = CDOTA_BaseNPC::IsInRangeOfShop(this, DOTA_SHOP_TYPE::DOTA_SHOP_SIDE, 0);
                  v28 = iHasRoomb;
                  v27 = v48;
                }
                v29 = 0;
                if ( bPurchasedFromSecretShop )
                {
                  iHasRoomc = v28;
                  v47 = CDOTA_BaseNPC::IsInRangeOfShop(this, DOTA_SHOP_TYPE::DOTA_SHOP_SECRET, 0);
                  v28 = iHasRoomc;
                  v29 = v47;
                }
                if ( v28 != 4 && (CDOTA_BaseNPC::IsInRangeOfShop(this, DOTA_SHOP_TYPE::DOTA_SHOP_HOME, 0) || v27 || v29)
                  || EmptySpaceInInventory != -1 && !bIsTPScroll )
                {
                  v30 = (*(this->_vptr_IHandleEntity + 414))(this);
                  v31 = "";
                  if ( NextItemToPurchase->name.u.m_Id != 0 )
                    v31 = NextItemToPurchase->name.u.m_Id;
                  if ( CDOTA_BaseNPC::AttemptToPurchaseItem(this, v31, v30, 0) == DOTA_INVALID_ORDERS::DOTA_ORDER_SUCCESS )
                  {
                    if ( this->m_pBot == 0 )
                    {
                      v50 = "";
                      if ( NextItemToPurchase->name.u.m_Id != 0 )
                        v50 = NextItemToPurchase->name.u.m_Id;
                      v51 = DOTAGameManager();
                      AbilityIndex = CDOTAGameManager::GetAbilityIndex(v51, v50);
                      v53 = (*(this->_vptr_IHandleEntity + 413))(this);
                      CSingleUserRecipientFilter::CSingleUserRecipientFilter(&filter, v53);
                      v54 = (*(this->_vptr_IHandleEntity + 414))(this);
                      SendChatEventMessage(
                        DOTA_CHAT_MESSAGE::CHAT_MESSAGE_ITEM_AUTOPURCHASED,
                        AbilityIndex,
                        v54,
                        &filter);
                      v55.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
                      CBaseEntity::EmitSound(&filter, v55, "General.Buy", 0, 0.0, 0);
                      filter._vptr_IRecipientFilter = &off_3FCB0D0;
                      CRecipientFilter::~CRecipientFilter(&filter);
                    }
                    NextItemToPurchase->bPurchased = 1;
                  }
                }
              }
              else if ( !CDOTA_BaseNPC::IsBot(this)
                     && (this->m_RequestGoToSecretShopTimer.m_timestamp.m_Value <= 0.0
                      || CountdownTimer::Now(&this->m_RequestGoToSecretShopTimer) >= this->m_RequestGoToSecretShopTimer.m_timestamp.m_Value) )
              {
                v34 = "";
                if ( NextItemToPurchase->name.u.m_Id != 0 )
                  v34 = NextItemToPurchase->name.u.m_Id;
                v35 = DOTAGameManager();
                v36 = CDOTAGameManager::GetAbilityIndex(v35, v34);
                v37 = (*(this->_vptr_IHandleEntity + 413))(this);
                CSingleUserRecipientFilter::CSingleUserRecipientFilter(&filter, v37);
                v38 = (*(this->_vptr_IHandleEntity + 414))(this);
                SendChatEventMessage(DOTA_CHAT_MESSAGE::CHAT_MESSAGE_SECRETSHOP, v36, v38, &filter);
                Shop = CDOTAGamerules::GetShop(
                         g_pGameRules,
                         this->m_iTeamNum.m_Value,
                         (3 * (this->m_iTeamNum.m_Value != 2) + 2));
                v41 = Shop;
                if ( Shop != 0 )
                {
                  y = CBaseEntity::GetAbsOrigin(Shop)->y;
                  AbsOrigin = CBaseEntity::GetAbsOrigin(v41);
                  MinimapEventLocal(this, AbsOrigin->x, y, 512, 4);
                }
                CountdownTimer::Start(&this->m_RequestGoToSecretShopTimer, 9.0, v40);
                filter._vptr_IRecipientFilter = &off_3FCB0D0;
                CRecipientFilter::~CRecipientFilter(&filter);
              }
              goto LABEL_61;
            }
          }
        }
        if ( !v22 )
          goto LABEL_44;
      }
LABEL_61:
      ++v9;
    }
    while ( v9 != 2 );
  }
}


// CDOTA_BaseNPC_Hero::RetrieveItemsFromStash  (line 4533, @0x000000000290f420, libserver.so)  // inlines: GetAbilityName, IsElapsed
// calls: CountdownTimer::Now, CountdownTimer::Start, CDOTA_BaseNPC::IsInRangeOfShop, CDOTA_UnitInventory::GetItemInSlot, CDOTA_UnitInventory::FindItemInInventory, CDOTA_UnitInventory::FindItemSlotInInventory, CDOTA_UnitInventory::FindEmptySpaceInInventory, CDOTA_BaseNPC_Hero::IsItemSituational, CDOTA_BaseNPC_Hero::IsItemSellable, CDOTA_UnitInventory::MoveItem, CDOTA_BaseNPC::SellItem
// callers: CDOTA_BaseNPC_Hero::Think
// strings: "<NoAbilityName>"
void __fastcall CDOTA_BaseNPC_Hero::RetrieveItemsFromStash(CDOTA_BaseNPC_Hero *const this)
{
  float v1; // xmm1_4
  CountdownTimer *p_m_RetrieveItemsFromStashTimer; // rbx
  int i; // r12d
  CDOTA_Item *ItemInSlot; // rax
  CDOTA_Item *v6; // rbx
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v8; // rsi
  const char *m_pszAbilityName; // rax
  CDOTA_Item *ItemInInventory; // rax
  int ItemSlotInInventory; // eax
  int v12; // r15d
  CDOTA_Item *v13; // rax
  CDOTA_Item *pItem; // [rsp+8h] [rbp-38h]

  p_m_RetrieveItemsFromStashTimer = &this->m_RetrieveItemsFromStashTimer;
  if ( this->m_RetrieveItemsFromStashTimer.m_timestamp.m_Value <= 0.0
    || CountdownTimer::Now(&this->m_RetrieveItemsFromStashTimer) >= this->m_RetrieveItemsFromStashTimer.m_timestamp.m_Value )
  {
    CountdownTimer::Start(p_m_RetrieveItemsFromStashTimer, 0.1, v1);
    if ( CDOTA_BaseNPC::IsInRangeOfShop(this, DOTA_SHOP_TYPE::DOTA_SHOP_HOME, 0) )
    {
      for ( i = 9; i != 15; ++i )
      {
        ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(&this->m_Inventory, i);
        v6 = ItemInSlot;
        if ( ItemInSlot != 0 )
        {
          if ( (*(ItemInSlot->_vptr_IHandleEntity + 346))(ItemInSlot) != 0 )
          {
            m_pAbilityData = v6->m_pAbilityData;
            v8 = "<NoAbilityName>";
            if ( m_pAbilityData != 0 )
            {
              m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
              if ( m_pszAbilityName != 0 )
                v8 = m_pszAbilityName;
            }
            ItemInInventory = CDOTA_UnitInventory::FindItemInInventory(&this->m_Inventory, v8, 1, 0, -1);
            if ( ItemInInventory != 0 )
            {
              ItemSlotInInventory = CDOTA_UnitInventory::FindItemSlotInInventory(&this->m_Inventory, ItemInInventory, 1);
              if ( ItemSlotInInventory != -1 )
                goto LABEL_20;
            }
          }
          ItemSlotInInventory = CDOTA_UnitInventory::FindEmptySpaceInInventory(&this->m_Inventory, 1, 0);
          if ( ItemSlotInInventory != -1 )
            goto LABEL_20;
          if ( !CDOTA_BaseNPC_Hero::IsItemSituational(this, v6) )
          {
            v12 = 0;
            while ( 1 )
            {
              v13 = CDOTA_UnitInventory::GetItemInSlot(&this->m_Inventory, v12);
              if ( v13 != 0 )
              {
                pItem = v13;
                if ( CDOTA_BaseNPC_Hero::IsItemSellable(this, v13) )
                  break;
              }
              if ( ++v12 == 9 )
                goto LABEL_19;
            }
            CDOTA_BaseNPC::SellItem(this, pItem);
LABEL_19:
            ItemSlotInInventory = CDOTA_UnitInventory::FindEmptySpaceInInventory(&this->m_Inventory, 1, 0);
            if ( ItemSlotInInventory != -1 )
LABEL_20:
              CDOTA_UnitInventory::MoveItem(&this->m_Inventory, v6, ItemSlotInInventory);
          }
        }
      }
    }
  }
}


// CDOTA_BaseNPC_Hero::ClearConsumablesFromLoadout  (line 4597, @0x00000000029223e0, libserver.so)  // inlines: Remove
// calls: CUtlVectorBase<sLoadoutItem, CUtlMemory<sLoadoutItem, int> >::ShiftElementsLeft
// callers: CDOTA_BotMode_Retreat::Think
void __fastcall CDOTA_BaseNPC_Hero::ClearConsumablesFromLoadout(CDOTA_BaseNPC_Hero *const this)
{
  CUtlVector<sLoadoutItem,CUtlMemory<sLoadoutItem,int> > *p_m_Loadout; // r12
  int v3; // eax
  bool v4; // zf

  if ( this->m_Loadout.m_Size > 0 && (this->m_Loadout.m_Memory.m_pMemory->iFlags & 1) != 0 )
  {
    p_m_Loadout = &this->m_Loadout;
    do
    {
      CUtlVectorBase<sLoadoutItem,CUtlMemory<sLoadoutItem,int>>::ShiftElementsLeft(p_m_Loadout, 0, 1);
      v3 = this->m_Loadout.m_Size - 1;
      v4 = this->m_Loadout.m_Size == 1;
      this->m_Loadout.m_Size = v3;
    }
    while ( v3 >= 0 && !v4 && (this->m_Loadout.m_Memory.m_pMemory->iFlags & 1) != 0 );
  }
}


// CDOTA_BaseNPC_Hero::DoesMyTeamHaveItem  (line 4607, @0x000000000290e4f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetHero, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPCHero, operator CEntityInstance*, operator[]
// calls: CDOTA_UnitInventory::FindItemInInventory
// callers: CDOTA_BaseNPC_Hero::TeamWantsCourier
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_BaseNPC_Hero::DoesMyTeamHaveItem(CDOTA_BaseNPC_Hero *const this, const char *pItemName)
{
  __int64 v3; // rbx
  unsigned __int8 m_Value; // r13
  CHandle<CDOTA_BaseNPC_Hero> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityInstance *m_pInstance; // rdi

  v3 = 0;
  m_Value = this->m_iTeamNum.m_Value;
  if ( g_HeroList.m_hHeroList.m_Size <= 0 )
    return 0;
  while ( 1 )
  {
    v5 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v3];
    m_Index = v5->m_Index;
    if ( v5->m_Index + 2 > 1 )
    {
      v7 = v5->m_Index;
      v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
      if ( v8 != 0 )
      {
        v9 = &v8[v7 & 0x1FF];
        if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        {
          m_pInstance = v9->m_pInstance;
          if ( v9->m_pInstance != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
            && m_Value == HIBYTE(m_pInstance[7].m_CScriptComponent)
            && CDOTA_UnitInventory::FindItemInInventory(&m_pInstance[76].m_iszPrivateVScripts, pItemName, 3, 0, -1) != 0 )
          {
            break;
          }
        }
      }
    }
    if ( g_HeroList.m_hHeroList.m_Size <= ++v3 )
      return 0;
  }
  return 1;
}


// CDOTA_BaseNPC_Hero::TeamWantsCourier  (line 4628, @0x000000000290e5f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, HasFlyMovementCapability, InState, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_BaseNPC_Hero::DoesMyTeamHaveItem
// callers: CDOTA_BaseNPC_Hero::GetSituationalItemPurchase
// strings: "item_flying_courier", "item_courier"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC_Hero::TeamWantsCourier(
        CDOTA_BaseNPC_Hero *const this,
        bool *const bWantsCourier,
        bool *const bWantsFlying)
{
  CDOTA_TeamCommander *m_pTeamCommander; // r14
  int m_Size; // eax
  __int64 v8; // rbx
  CHandle<CBaseEntity> *v9; // rcx
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rcx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEntityInstance *m_pInstance; // r15
  bool v15; // al

  *bWantsCourier = 0;
  *bWantsFlying = 0;
  m_pTeamCommander = this->m_pBot->m_pTeamCommander;
  m_Size = m_pTeamCommander->m_hCouriers.m_Size;
  if ( m_Size != 0 )
  {
    if ( !*bWantsCourier )
      goto LABEL_3;
  }
  else
  {
    *bWantsCourier = 1;
  }
  v15 = !CDOTA_BaseNPC_Hero::DoesMyTeamHaveItem(this, "item_courier");
  *bWantsCourier = v15;
  if ( v15 )
    return;
  m_Size = m_pTeamCommander->m_hCouriers.m_Size;
LABEL_3:
  if ( m_Size > 0 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = &m_pTeamCommander->m_hCouriers.m_Memory.m_pMemory[v8];
      m_Index = v9->m_Index;
      if ( v9->m_Index + 2 > 1 )
      {
        m_Index_low = LOWORD(v9->m_Index);
        v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
        if ( v12 != 0 )
        {
          v13 = &v12[m_Index_low & 0x1FF];
          if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
          {
            m_pInstance = v13->m_pInstance;
            if ( v13->m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && (*(m_pInstance->_vptr_IHandleEntity + 408))(v13->m_pInstance) != 0
              && (*(this->_vptr_IHandleEntity + 397))(this) > 600
              && (BYTE4(m_pInstance[50].m_CScriptComponent) & 2) == 0
              && ((m_pInstance[58]._vptr_IHandleEntity >> 24) & 1
                | ((m_pInstance[58]._vptr_IHandleEntity & 0x200000000LL) != 0)) == 0
              && !CDOTA_BaseNPC_Hero::DoesMyTeamHaveItem(this, "item_flying_courier") )
            {
              break;
            }
          }
        }
      }
      if ( m_pTeamCommander->m_hCouriers.m_Size <= ++v8 )
        return;
    }
    *bWantsFlying = 1;
  }
}


// CDOTA_BaseNPC_Hero::GetSituationalItemPurchase  (line 4670, @0x000000000290e780, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, Get, GetBool, GetBotByIndex, GetEntityIdentity, GetEntryIndex, GetGameMode, GetHero, GetInstance, GetInt, GetTeamCommander, GetTeamNumber, GetUnit, GetWard, IndexToIdentity, IsUnitType, IsValid, LookupEntity, State_Get, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_UnitInventory::FindEmptySpaceInInventory, CDOTA_TeamCommander::ShouldBuyWards, CEntityHandle::operator CEntityInstance*, CDOTA_UnitInventory::FindItemInInventory, CDOTA_BaseNPC_Hero::TeamWantsCourier, CDOTAGamerules::IsInRangeOfFountain, CDOTAGamerules::GetItemStockCount, DOTACommander, CDOTA_TeamCommander::AreAnyHumansOnTeam, CDOTA_Bot::HasInvisibility, CDOTA_Bot::GetTankRating
// callers: CDOTA_BaseNPC_Hero::GetNextItemToPurchase
// strings: "item_ward_observer", "item_travel_boots", "item_tpscroll", "item_gem", "item_dust"
// globals: CEntityHandle::gm_pEntityList
sLoadoutItem *__fastcall CDOTA_BaseNPC_Hero::GetSituationalItemPurchase(CDOTA_BaseNPC_Hero *const this)
{
  CDOTA_BaseNPC::NetworkVar_m_Inventory *p_m_Inventory; // r14
  CHandle<CDOTA_BaseNPC_Hero> *m_pMemory; // rax
  CEntityIdentity *v4; // rcx
  CEntityIdentity *v5; // rcx
  CEntityInstance *m_pInstance; // rdx
  CDOTA_Bot *m_pBot; // rdx
  CDOTA_Bot *v8; // r15
  __int64 v9; // r13
  CDOTA_TeamCommander *m_pTeamCommander; // rax
  CDOTA_Bot *v11; // r12
  const CEntityHandle *p_m_hUnit; // r12
  CEntityInstance *v13; // rax
  int m_iUnitType; // edx
  int v15; // esi
  sLoadoutItem *result; // rax
  CDOTA_Item *ItemInInventory; // r12
  CDOTA_Item *v18; // rax
  CDOTA_Bot *v19; // rax
  bool v20; // cl
  CEntityInstance *v21; // rax
  int ItemStockCount; // eax
  unsigned __int8 m_Value; // r12
  int v24; // r13d
  CDOTA_Commander *v25; // rax
  CDOTA_TeamCommander *p_m_BadGuys; // rdi
  CDOTA_TeamCommander *p_m_GoodGuys; // rax
  bool v28; // al
  CDOTA_Bot *v29; // r15
  CGameRules *v30; // rax
  __int64 v31; // r12
  int v32; // r13d
  CEntityInstance *v33; // rax
  __int64 v34; // r12
  int v35; // r13d
  CEntityInstance *v36; // rax
  CDOTA_Bot *v37; // rdi
  __int64 v38; // r15
  int v39; // r13d
  char v40; // r12
  CEntityInstance *v41; // rax
  int v42; // edx
  int v43; // [rsp-8h] [rbp-74h]
  int v44; // [rsp+4h] [rbp-68h]
  bool v45; // [rsp+8h] [rbp-64h]
  int v46; // [rsp+8h] [rbp-64h]
  bool iDesiredWardThreshold; // [rsp+Ch] [rbp-60h]
  CDOTA_UnitInventory *iDesiredWardThresholda; // [rsp+Ch] [rbp-60h]
  bool v49; // [rsp+23h] [rbp-49h] BYREF
  CEntityHandle v50; // [rsp+24h] [rbp-48h] BYREF

  if ( dota_tutorial_disable_bot_situational_items.m_pParent->m_Value.m_nValue != 0 )
    return 0;
  if ( this->m_pBot == 0 )
    return 0;
  p_m_Inventory = &this->m_Inventory;
  if ( CDOTA_UnitInventory::FindEmptySpaceInInventory(&this->m_Inventory, 3, 0) == -1 )
    return 0;
  iDesiredWardThreshold = *&g_pGameRules[6].m_szQuestName[68] == 6;
  if ( g_HeroList.m_hHeroList.m_Size <= 0 )
  {
LABEL_31:
    v45 = 0;
    if ( *&g_pGameRules[6].m_szQuestName[68] == 6 )
      goto LABEL_32;
  }
  else
  {
    m_pMemory = g_HeroList.m_hHeroList.m_Memory.m_pMemory;
    while ( 1 )
    {
      if ( m_pMemory->m_Index + 2 > 1 )
      {
        v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
        if ( v4 != 0 )
        {
          v5 = &v4[m_pMemory->m_Index & 0x1FF];
          if ( v5 != 0 && m_pMemory->m_Index == v5->m_EHandle.m_Index )
          {
            m_pInstance = v5->m_pInstance;
            if ( v5->m_pInstance != 0
              && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
              && HIBYTE(m_pInstance[7].m_CScriptComponent) == this->m_iTeamNum.m_Value )
            {
              m_pBot = this->m_pBot;
              if ( !m_pBot->m_bHuman )
                break;
            }
          }
        }
      }
      if ( ++m_pMemory == &g_HeroList.m_hHeroList.m_Memory.m_pMemory[g_HeroList.m_hHeroList.m_Size - 1 + 1] )
        goto LABEL_31;
    }
    v45 = (m_pBot->m_iUnitType & 0xE) != 0;
    if ( *&g_pGameRules[6].m_szQuestName[68] == 6 )
      goto LABEL_32;
  }
  if ( CDOTA_TeamCommander::ShouldBuyWards(this->m_pBot->m_pTeamCommander, this->m_pBot) )
  {
    v8 = this->m_pBot;
    v9 = 0;
    m_pTeamCommander = v8->m_pTeamCommander;
    if ( m_pTeamCommander->m_BotList.m_Size > 0 )
    {
      do
      {
        v11 = m_pTeamCommander->m_BotList.m_Memory.m_pMemory[v9];
        if ( v11 != 0 && v8 != v11 )
        {
          p_m_hUnit = &v11->m_hUnit;
          v13 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
          if ( v13 == 0 || BYTE3(v13[7]._vptr_IHandleEntity) == 0 )
            v13 = 0;
          if ( CDOTA_UnitInventory::FindItemInInventory(&v13[76].m_iszPrivateVScripts, "item_ward_observer", 3, 0, -1) != 0 )
            goto LABEL_24;
          v21 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
          if ( v21 == 0 || BYTE3(v21[7]._vptr_IHandleEntity) == 0 )
            v21 = 0;
          if ( CDOTA_UnitInventory::FindItemInInventory(&v21[76].m_iszPrivateVScripts, "item_ward_dispenser", 3, 0, -1) != 0 )
            goto LABEL_24;
          v8 = this->m_pBot;
        }
        m_pTeamCommander = v8->m_pTeamCommander;
        ++v9;
      }
      while ( m_pTeamCommander->m_BotList.m_Size > v9 );
    }
    ItemStockCount = CDOTAGamerules::GetItemStockCount(g_pGameRules, this->m_iTeamNum.m_Value, "item_ward_observer", -1);
    m_Value = this->m_iTeamNum.m_Value;
    v24 = ItemStockCount;
    v25 = DOTACommander();
    p_m_BadGuys = &v25->m_BadGuys;
    p_m_GoodGuys = &v25->m_GoodGuys;
    if ( m_Value == 2 )
      p_m_BadGuys = p_m_GoodGuys;
    v28 = CDOTA_TeamCommander::AreAnyHumansOnTeam(p_m_BadGuys);
    v29 = this->m_pBot;
    v44 = 2;
    m_iUnitType = v29->m_iUnitType;
    v15 = m_iUnitType & 0xE;
    if ( (m_iUnitType & 0xE) != 0 )
      v44 = (m_iUnitType & 0x30) == 0 ? 4 : 2;
    if ( v24 > v28 )
    {
      v30 = g_pGameRules;
      if ( *&g_pGameRules[55].m_szQuestName[104] <= 0 )
        return &this->m_ObserverWard;
      v31 = 0;
      v32 = 0;
      v43 = 0;
      do
      {
        v50.m_Index = *(*&v30[55].m_szQuestName[112] + v31);
        v33 = CEntityHandle::operator CEntityInstance *(&v50);
        if ( v33 != 0 && BYTE3(v33[7]._vptr_IHandleEntity) != 0 )
          v43 += HIBYTE(v33[7].m_CScriptComponent) == this->m_iTeamNum.m_Value;
        ++v32;
        v31 += 4;
        v30 = g_pGameRules;
      }
      while ( v32 < *&g_pGameRules[55].m_szQuestName[104] );
      if ( v43 < v44 )
        return &this->m_ObserverWard;
      m_iUnitType = v29->m_iUnitType;
      v15 = m_iUnitType & 0xE;
    }
  }
  else
  {
LABEL_24:
    m_iUnitType = this->m_pBot->CDOTA_BaseNPC_Additive::CDOTA_BaseNPC::m_iUnitType;
    v15 = m_iUnitType & 0xE;
  }
  if ( v15 == 0 && (v45 || (m_iUnitType & 0x40) == 0)
    || (v49 = 0,
        LOBYTE(v50.m_Index) = 0,
        CDOTA_BaseNPC_Hero::TeamWantsCourier(this, &v49, &v50),
        result = &this->m_Courier,
        !v49)
    && (result = &this->m_FlyingCourier, LOBYTE(v50.m_Index) == 0) )
  {
LABEL_32:
    ItemInInventory = CDOTA_UnitInventory::FindItemInInventory(p_m_Inventory, "item_travel_boots", 3, 0, -1);
    v18 = CDOTA_UnitInventory::FindItemInInventory(p_m_Inventory, "item_tpscroll", 3, 0, -1);
    if ( (v18 == 0 || v18->m_iCurrentCharges.m_Value <= 1)
      && ItemInInventory == 0
      && (this->m_pBot->m_pTeamCommander->m_bLateGame
       || CDOTAGamerules::IsInRangeOfFountain(g_pGameRules, this) && *&g_pGameRules[6].m_szQuestName[28] == 5) )
    {
      return &this->m_TPScroll;
    }
    v19 = this->m_pBot;
    v20 = 1;
    if ( (v19->m_iUnitType & 0xE) == 0 )
    {
      v20 = 0;
      if ( !v45 )
        v20 = (v19->m_iUnitType & 0x40) != 0;
    }
    if ( iDesiredWardThreshold || !v19->m_pTeamCommander->m_bLateGame || !v20 || g_HeroList.m_hHeroList.m_Size <= 0 )
      return 0;
    v34 = 0;
    v35 = 0;
    while ( 1 )
    {
      v36 = CEntityHandle::operator CEntityInstance *(&g_HeroList.m_hHeroList.m_Memory.m_pMemory[v34]);
      if ( v36 != 0
        && (v36[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
        && HIBYTE(v36[7].m_CScriptComponent) != this->m_iTeamNum.m_Value )
      {
        v37 = *&v36[45].m_worldGroupId.m_nHashCode;
        if ( v37 != 0 && CDOTA_Bot::HasInvisibility(v37, 0) )
          break;
      }
      ++v35;
      ++v34;
      if ( v35 >= g_HeroList.m_hHeroList.m_Size )
        return 0;
    }
    if ( g_HeroList.m_hHeroList.m_Size <= 0 )
    {
      v46 = 0;
    }
    else
    {
      v38 = 0;
      v39 = 0;
      v46 = 0;
      v40 = 0;
      do
      {
        v41 = CEntityHandle::operator CEntityInstance *(&g_HeroList.m_hHeroList.m_Memory.m_pMemory[v38]);
        if ( v41 != 0
          && (v41[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
          && HIBYTE(v41[7].m_CScriptComponent) == this->m_iTeamNum.m_Value )
        {
          iDesiredWardThresholda = &v41[76].m_iszPrivateVScripts;
          if ( CDOTA_UnitInventory::FindItemInInventory(&v41[76].m_iszPrivateVScripts, "item_gem", 3, 0, -1) != 0 )
            v40 = 1;
          v46 -= (CDOTA_UnitInventory::FindItemInInventory(iDesiredWardThresholda, "item_dust", 3, 0, -1) == 0) - 1;
        }
        ++v39;
        ++v38;
      }
      while ( v39 < g_HeroList.m_hHeroList.m_Size );
      if ( v40 != 0 )
        return 0;
    }
    if ( CDOTA_Bot::GetTankRating(this->m_pBot) > 0.5 )
    {
      v42 = CDOTAGamerules::GetItemStockCount(g_pGameRules, this->m_iTeamNum.m_Value, "item_gem", -1);
      result = &this->m_Gem;
      if ( v42 > 0 )
        return result;
    }
    if ( v46 <= 1 && CDOTA_UnitInventory::FindItemInInventory(p_m_Inventory, "item_dust", 3, 0, -1) == 0 )
      return &this->m_Dust;
    return 0;
  }
  return result;
}


// CDOTA_BaseNPC_Hero::GetNextItemToPurchase  (line 4842, @0x0000000002915ba0, libserver.so)  // inlines: operator[]
// calls: CDOTA_BaseNPC_Hero::GetSituationalItemPurchase, CDOTA_BaseNPC_Hero::UpdateNextItemToPurchase
// callers: CDOTA_Bot::ConsiderBuyback, CDOTA_BotMode_SecretShop::GetDesire, CDOTA_BotMode_Farm::GetFarmDesire, CDOTA_BotMode_SideShop::GetDesire, CDOTA_BaseNPC_Hero::PurchaseItems
sLoadoutItem *__fastcall CDOTA_BaseNPC_Hero::GetNextItemToPurchase(
        CDOTA_BaseNPC_Hero *const this,
        bool bIncludeSituational)
{
  sLoadoutItem *result; // rax
  __int64 m_iNextItemToPurchase; // rax

  if ( !bIncludeSituational || (result = CDOTA_BaseNPC_Hero::GetSituationalItemPurchase(this)) == 0 )
  {
    CDOTA_BaseNPC_Hero::UpdateNextItemToPurchase(this);
    m_iNextItemToPurchase = this->m_iNextItemToPurchase;
    if ( m_iNextItemToPurchase < 0 )
      return 0;
    else
      return &this->m_Loadout.m_Memory.m_pMemory[m_iNextItemToPurchase];
  }
  return result;
}


// CDOTA_BaseNPC_Hero::IsItemSellable  (line 4858, @0x000000000290ee80, libserver.so)  // inlines: FStrEq, GetAbilityName, String, ToCStr, _V_strcmp
// calls: strcmp
// callers: CDOTA_BotMode_Item::FindBestItemToDrop, CDOTA_TeamCommander::UpdateItemsDesire, CDOTA_BaseNPC_Hero::HasAnyAvailableInventorySpace, CDOTA_BaseNPC_Hero::RetrieveItemsFromStash, CDOTA_BaseNPC_Hero::HasRoomForItem, CDOTA_BaseNPC_Hero::PurchaseItems
// strings: "<NoAbilityName>"
bool __fastcall CDOTA_BaseNPC_Hero::IsItemSellable(CDOTA_BaseNPC_Hero *const this, CDOTA_Item *pItem)
{
  int m_Size; // eax
  DOTAAbilityData_t *m_pAbilityData; // r15
  sLoadoutItem *m_pMemory; // rbx
  __int64 v6; // r12
  const char *v7; // rsi
  const char *m_Id; // rdi
  bool result; // al
  const char *m_pszAbilityName; // rsi
  const char *m_pAsString; // rdi
  const char *v12; // rsi
  const char *v13; // rdi
  const char *v14; // rsi
  const char *v15; // rdi
  const char *v16; // rsi
  const char *v17; // rdi
  const char *v18; // rsi
  const char *v19; // rdi
  const char *v20; // rsi
  const char *v21; // rdi
  const char *v22; // rsi
  const char *v23; // rdi
  int v24; // edx

  m_Size = this->m_Loadout.m_Size;
  m_pAbilityData = pItem->m_pAbilityData;
  if ( m_Size <= 0 )
  {
LABEL_14:
    m_pszAbilityName = "<NoAbilityName>";
    if ( m_pAbilityData != 0 && m_pAbilityData->m_pszAbilityName != 0 )
      m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
    m_pAsString = "";
    if ( this->m_TPScroll.name.u.m_Id != 0 )
      m_pAsString = this->m_TPScroll.name.u.m_pAsString;
    if ( m_pszAbilityName == m_pAsString || strcmp(m_pAsString, m_pszAbilityName) == 0 )
    {
      return (this->m_TPScroll.iFlags & 0x10) != 0;
    }
    else
    {
      v12 = "<NoAbilityName>";
      if ( m_pAbilityData != 0 && m_pAbilityData->m_pszAbilityName != 0 )
        v12 = m_pAbilityData->m_pszAbilityName;
      v13 = "";
      if ( this->m_Dust.name.u.m_Id != 0 )
        v13 = this->m_Dust.name.u.m_pAsString;
      if ( v12 == v13 || strcmp(v13, v12) == 0 )
      {
        return (this->m_Dust.iFlags & 0x10) != 0;
      }
      else
      {
        v14 = "<NoAbilityName>";
        if ( m_pAbilityData != 0 && m_pAbilityData->m_pszAbilityName != 0 )
          v14 = m_pAbilityData->m_pszAbilityName;
        v15 = "";
        if ( this->m_Gem.name.u.m_Id != 0 )
          v15 = this->m_Gem.name.u.m_pAsString;
        if ( v14 == v15 || strcmp(v15, v14) == 0 )
        {
          return (this->m_Gem.iFlags & 0x10) != 0;
        }
        else
        {
          v16 = "<NoAbilityName>";
          if ( m_pAbilityData != 0 && m_pAbilityData->m_pszAbilityName != 0 )
            v16 = m_pAbilityData->m_pszAbilityName;
          v17 = "";
          if ( this->m_SentryWard.name.u.m_Id != 0 )
            v17 = this->m_SentryWard.name.u.m_pAsString;
          if ( v16 == v17 || strcmp(v17, v16) == 0 )
          {
            return (this->m_SentryWard.iFlags & 0x10) != 0;
          }
          else
          {
            v18 = "<NoAbilityName>";
            if ( m_pAbilityData != 0 && m_pAbilityData->m_pszAbilityName != 0 )
              v18 = m_pAbilityData->m_pszAbilityName;
            v19 = "";
            if ( this->m_ObserverWard.name.u.m_Id != 0 )
              v19 = this->m_ObserverWard.name.u.m_pAsString;
            if ( v18 == v19 || strcmp(v19, v18) == 0 )
            {
              return (this->m_ObserverWard.iFlags & 0x10) != 0;
            }
            else
            {
              v20 = "<NoAbilityName>";
              if ( m_pAbilityData != 0 && m_pAbilityData->m_pszAbilityName != 0 )
                v20 = m_pAbilityData->m_pszAbilityName;
              v21 = "";
              if ( this->m_Courier.name.u.m_Id != 0 )
                v21 = this->m_Courier.name.u.m_pAsString;
              if ( v20 == v21 || strcmp(v21, v20) == 0 )
              {
                return (this->m_Courier.iFlags & 0x10) != 0;
              }
              else
              {
                v22 = "<NoAbilityName>";
                if ( m_pAbilityData != 0 && m_pAbilityData->m_pszAbilityName != 0 )
                  v22 = m_pAbilityData->m_pszAbilityName;
                v23 = "";
                if ( this->m_FlyingCourier.name.u.m_Id != 0 )
                  v23 = this->m_FlyingCourier.name.u.m_pAsString;
                if ( v22 == v23 )
                  return (this->m_FlyingCourier.iFlags & 0x10) != 0;
                v24 = strcmp(v23, v22);
                result = 0;
                if ( v24 == 0 )
                  return (this->m_FlyingCourier.iFlags & 0x10) != 0;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    m_pMemory = this->m_Loadout.m_Memory.m_pMemory;
    v6 = &m_pMemory[(m_Size - 1) + 1];
    while ( 1 )
    {
      if ( (m_pMemory->iFlags & 0x10) != 0 )
      {
        v7 = "<NoAbilityName>";
        if ( m_pAbilityData != 0 && m_pAbilityData->m_pszAbilityName != 0 )
          v7 = m_pAbilityData->m_pszAbilityName;
        m_Id = m_pMemory->name.u.m_Id;
        if ( m_pMemory->name.u.m_Id == 0 )
          m_Id = "";
        if ( v7 == m_Id || strcmp(m_Id, v7) == 0 )
          return 1;
      }
      if ( ++m_pMemory == v6 )
        goto LABEL_14;
    }
  }
  return result;
}


// CDOTA_BaseNPC_Hero::IsItemSituational  (line 4894, @0x000000000290f210, libserver.so)  // inlines: FStrEq, GetAbilityName, String, ToCStr, _V_strcmp
// calls: strcmp
// callers: CDOTA_BaseNPC_Hero::RetrieveItemsFromStash
// strings: "<NoAbilityName>"
bool __fastcall CDOTA_BaseNPC_Hero::IsItemSituational(CDOTA_BaseNPC_Hero *const this, CDOTA_Item *pItem)
{
  DOTAAbilityData_t *m_pAbilityData; // rbx
  const char *m_pszAbilityName; // rsi
  UtlSymLargeId_t m_Id; // rdx
  const char *m_pAsString; // rdi
  int v7; // eax
  bool v8; // dl
  const char *v9; // rsi
  const char *v10; // rdi
  int v11; // eax
  const char *v12; // rsi
  const char *v13; // rdi
  int v14; // eax
  const char *v15; // rsi
  const char *v16; // rdi
  int v17; // eax
  const char *v18; // rsi
  const char *v19; // rdi
  int v20; // eax
  const char *v21; // rsi
  const char *v22; // rdi
  int v23; // eax
  const char *v24; // rsi
  const char *v25; // rdi

  m_pAbilityData = pItem->m_pAbilityData;
  m_pszAbilityName = "<NoAbilityName>";
  if ( m_pAbilityData != 0 && m_pAbilityData->m_pszAbilityName != 0 )
    m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
  m_Id = this->m_TPScroll.name.u.m_Id;
  m_pAsString = "";
  if ( m_Id != 0 )
    m_pAsString = this->m_TPScroll.name.u.m_pAsString;
  if ( m_pszAbilityName == m_pAsString )
    return 1;
  v7 = strcmp(m_pAsString, m_pszAbilityName);
  v8 = 1;
  if ( v7 == 0 )
    return v8;
  v9 = "<NoAbilityName>";
  if ( m_pAbilityData != 0 && m_pAbilityData->m_pszAbilityName != 0 )
    v9 = m_pAbilityData->m_pszAbilityName;
  v10 = "";
  if ( this->m_Dust.name.u.m_Id != 0 )
    v10 = this->m_Dust.name.u.m_pAsString;
  if ( v9 == v10 )
    return 1;
  v11 = strcmp(v10, v9);
  v8 = 1;
  if ( v11 == 0 )
    return v8;
  v12 = "<NoAbilityName>";
  if ( m_pAbilityData != 0 && m_pAbilityData->m_pszAbilityName != 0 )
    v12 = m_pAbilityData->m_pszAbilityName;
  v13 = "";
  if ( this->m_Gem.name.u.m_Id != 0 )
    v13 = this->m_Gem.name.u.m_pAsString;
  if ( v12 == v13 )
    return 1;
  v14 = strcmp(v13, v12);
  v8 = 1;
  if ( v14 == 0 )
    return v8;
  v15 = "<NoAbilityName>";
  if ( m_pAbilityData != 0 && m_pAbilityData->m_pszAbilityName != 0 )
    v15 = m_pAbilityData->m_pszAbilityName;
  v16 = "";
  if ( this->m_SentryWard.name.u.m_Id != 0 )
    v16 = this->m_SentryWard.name.u.m_pAsString;
  if ( v15 == v16 )
    return 1;
  v17 = strcmp(v16, v15);
  v8 = 1;
  if ( v17 == 0 )
    return v8;
  v18 = "<NoAbilityName>";
  if ( m_pAbilityData != 0 && m_pAbilityData->m_pszAbilityName != 0 )
    v18 = m_pAbilityData->m_pszAbilityName;
  v19 = "";
  if ( this->m_ObserverWard.name.u.m_Id != 0 )
    v19 = this->m_ObserverWard.name.u.m_pAsString;
  if ( v18 == v19 )
    return 1;
  v20 = strcmp(v19, v18);
  v8 = 1;
  if ( v20 == 0 )
    return v8;
  v21 = "<NoAbilityName>";
  if ( m_pAbilityData != 0 && m_pAbilityData->m_pszAbilityName != 0 )
    v21 = m_pAbilityData->m_pszAbilityName;
  v22 = "";
  if ( this->m_Courier.name.u.m_Id != 0 )
    v22 = this->m_Courier.name.u.m_pAsString;
  if ( v21 == v22 )
    return 1;
  v23 = strcmp(v22, v21);
  v8 = 1;
  if ( v23 == 0 )
    return v8;
  v24 = "<NoAbilityName>";
  if ( m_pAbilityData != 0 && m_pAbilityData->m_pszAbilityName != 0 )
    v24 = m_pAbilityData->m_pszAbilityName;
  v25 = "";
  if ( this->m_FlyingCourier.name.u.m_Id != 0 )
    v25 = this->m_FlyingCourier.name.u.m_pAsString;
  if ( v24 != v25 )
    return strcmp(v25, v24) == 0;
  return 1;
}


// CDOTA_BaseNPC_Hero::HasAnyAvailableInventorySpace  (line 4907, @0x000000000290f190, libserver.so)
// calls: CDOTA_UnitInventory::FindEmptySpaceInInventory, CDOTA_UnitInventory::GetItemInSlot, CDOTA_BaseNPC_Hero::IsItemSellable
// callers: CDOTA_TeamCommander::UpdateItemsDesire
bool __fastcall CDOTA_BaseNPC_Hero::HasAnyAvailableInventorySpace(CDOTA_BaseNPC_Hero *const this)
{
  CDOTA_BaseNPC::NetworkVar_m_Inventory *p_m_Inventory; // r12
  int v4; // ebx
  CDOTA_Item *ItemInSlot; // rax

  p_m_Inventory = &this->m_Inventory;
  if ( CDOTA_UnitInventory::FindEmptySpaceInInventory(&this->m_Inventory, 1, 0) == -1 )
  {
    v4 = 0;
    while ( 1 )
    {
      ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(p_m_Inventory, v4);
      if ( ItemInSlot != 0 && CDOTA_BaseNPC_Hero::IsItemSellable(this, ItemInSlot) )
        break;
      if ( ++v4 == 9 )
        return 0;
    }
  }
  return 1;
}


// CDOTA_BaseNPC_Hero::GetNumItemsInStash  (line 4924, @0x00000000028f68b0, libserver.so)
// calls: CDOTA_UnitInventory::NumItemsInStash
int __fastcall CDOTA_BaseNPC_Hero::GetNumItemsInStash(CDOTA_BaseNPC_Hero *const this)
{
  return CDOTA_UnitInventory::NumItemsInStash(&this->m_Inventory);
}


// CDOTA_BaseNPC_Hero::GetNumItemsInInventory  (line 4931, @0x00000000028f68d0, libserver.so)
// calls: CDOTA_UnitInventory::NumItemsInInventory
int __fastcall CDOTA_BaseNPC_Hero::GetNumItemsInInventory(CDOTA_BaseNPC_Hero *const this)
{
  return CDOTA_UnitInventory::NumItemsInInventory(&this->m_Inventory);
}


// CDOTA_BaseNPC_Hero::UpdateNextItemToPurchase  (line 4938, @0x0000000002915880, libserver.so)  // inlines: String, StringAfterPrefix<char const>, ToCStr, _V_strcmp, _V_strstr, operator[], strstr
// calls: CDOTA_BaseNPC::IsBot, _V_StringAfterPrefix, CFmtStrN<256, false>::CFmtStrN, CDOTA_Item::GetNumberOfComponentLists, CDOTA_Item::GetComponentList, CDOTA_UnitInventory::SetNextAutobuyItem, strstr, strcmp, __stack_chk_fail
// callers: CDOTA_BaseNPC_Hero::GetNextItemToPurchase
// strings: "item_", "item_recipe_%s"
void __fastcall CDOTA_BaseNPC_Hero::UpdateNextItemToPurchase(CDOTA_BaseNPC_Hero *const this)
{
  int m_Size; // ecx
  int m_iNextItemToPurchase; // edi
  sLoadoutItem *m_pMemory; // rsi
  int v5; // edx
  sLoadoutItem *i; // rax
  bool v7; // al
  int v8; // r9d
  int v9; // edi
  sLoadoutItem *v10; // r8
  int v11; // r13d
  int *p_iFlags; // rax
  const char *v13; // rdi
  const char *v14; // rax
  int v15; // eax
  sLoadoutItem *v16; // rcx
  const char **v17; // r14
  unsigned __int64 v18; // rbx
  const char *v19; // r12
  char v20; // al
  const char **v21; // r8
  const char *v22; // rsi
  int v23; // [rsp+Ch] [rbp-174h]
  char *pszRecipeName; // [rsp+10h] [rbp-170h]
  __int64 v25; // [rsp+18h] [rbp-168h]
  int iComponentSets; // [rsp+20h] [rbp-160h]
  int iList; // [rsp+24h] [rbp-15Ch]
  const char *pComponents; // [rsp+28h] [rbp-158h]
  CFmtStrN<256,false> v29; // [rsp+30h] [rbp-150h] BYREF
  unsigned __int64 v30; // [rsp+148h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  m_Size = this->m_Loadout.m_Size;
  m_iNextItemToPurchase = this->m_iNextItemToPurchase;
  this->m_iNextItemToPurchase = -1;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_Loadout.m_Memory.m_pMemory;
    v5 = 0;
    for ( i = m_pMemory; i->bPurchased || (i->iFlags & 0x60) != 0; ++i )
    {
      if ( ++v5 == m_Size )
        return;
    }
    this->m_iNextItemToPurchase = v5;
    v7 = v5 + 1 < m_Size && (m_pMemory[v5 + 1].iFlags & 0x20) != 0;
    this->m_bDoesNextItemCompleteRecipe = v7;
    if ( m_iNextItemToPurchase != v5 && !CDOTA_BaseNPC::IsBot(this) )
    {
      v8 = this->m_iNextItemToPurchase;
      v9 = this->m_Loadout.m_Size;
      v10 = this->m_Loadout.m_Memory.m_pMemory;
      if ( v8 >= v9 )
        goto LABEL_37;
      v11 = this->m_iNextItemToPurchase;
      p_iFlags = &v10[v8].iFlags;
      while ( 1 )
      {
        v25 = p_iFlags - 8 - v10;
        if ( (*p_iFlags & 0x20) != 0 && (*p_iFlags & 0x40) == 0 )
          break;
        ++v11;
        p_iFlags += 4;
        if ( v11 == v9 )
          goto LABEL_37;
      }
      if ( v11 == -1 )
        goto LABEL_37;
      v13 = "";
      if ( *(p_iFlags - 1) != 0 )
        v13 = *(p_iFlags - 1);
      v14 = _V_StringAfterPrefix(v13, "item_");
      pszRecipeName = 0;
      if ( v14 != 0 )
      {
        CFmtStrN<256,false>::CFmtStrN(&v29, "item_recipe_%s", v14);
        pszRecipeName = v29.m_szBuf;
      }
      iList = 0;
      iComponentSets = CDOTA_Item::GetNumberOfComponentLists(pszRecipeName);
      if ( iComponentSets <= 0 )
      {
        v8 = this->m_iNextItemToPurchase;
        v10 = this->m_Loadout.m_Memory.m_pMemory;
        goto LABEL_37;
      }
      while ( 1 )
      {
        pComponents = CDOTA_Item::GetComponentList(pszRecipeName, iList);
        v15 = this->m_iNextItemToPurchase;
        v23 = v15;
        if ( v15 >= v11 )
        {
LABEL_26:
          v20 = 1;
          goto LABEL_27;
        }
        v16 = this->m_Loadout.m_Memory.m_pMemory;
        v17 = &v16[v15];
        v18 = &v16[v15 + 1 + (v11 + ~v15)];
        while ( 1 )
        {
          v19 = *v17;
          if ( *v17 == 0 )
            break;
          if ( strstr(pComponents, *v17) == 0 )
            goto LABEL_34;
LABEL_25:
          v17 += 2;
          if ( v17 == v18 )
            goto LABEL_26;
        }
        if ( pComponents != 0 )
          goto LABEL_25;
        v19 = "";
LABEL_34:
        if ( strcmp(pszRecipeName, v19) == 0 )
          goto LABEL_25;
        v20 = 0;
LABEL_27:
        if ( ++iList == iComponentSets )
        {
          v10 = this->m_Loadout.m_Memory.m_pMemory;
          if ( v20 == 0 )
          {
            v8 = v23;
LABEL_37:
            v25 = 16LL * v8;
          }
          v21 = (v10 + v25);
          v22 = "";
          if ( *v21 != 0 )
            v22 = *v21;
          CDOTA_UnitInventory::SetNextAutobuyItem(&this->m_Inventory, v22);
          return;
        }
      }
    }
  }
}


// CDOTA_BaseNPC_Hero::AddExperience  (line 5004, @0x0000000002900f60, libserver.so)  // inlines: DOTAGameRules, Get, GetBool, GetFloat, GetGameTime, GetInt, GetModifier_Percentage_Additive, GetOwnerEntity, IsIllusion, IsListeningToEvent, NetworkStateChanged, Set, ToDOTAPlayer, operator+=<float>, operator>=<float>, operator>=<int>
// calls: CEntityHandle::GetHandleEntity, CDOTAPlayer::SetLastOrderTime, CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal, CDOTA_BaseNPC::GetAbilityByIndex, GetHeroMaxLevel, GetXPNeededToReachNextLevel, CDOTA_PlayerResource::IncrementTotalEarnedXP
_BOOL8 __fastcall CDOTA_BaseNPC_Hero::AddExperience(
        CDOTA_BaseNPC_Hero *const this,
        float flXP,
        int nReason,
        bool bApplyBotDifficultyScaling,
        bool bIncrementTotal)
{
  _BOOL4 m_Value; // r13d
  IHandleEntity *HandleEntity; // rax
  CDOTAPlayer *v9; // r14
  float v10; // xmm1_4
  float v11; // xmm0_4
  __int64 v12; // rax
  float Modifier_Percentage_Additive_Internal; // xmm0_4
  int v14; // ebx
  CDOTABaseAbility *AbilityByIndex; // rax
  int HeroMaxLevel; // eax
  int v17; // edi
  float m_fValue; // xmm1_4
  int v19; // eax
  int v20; // ebx
  unsigned __int8 i; // bl
  __int64 v22; // rsi
  int m_nValue; // eax
  bool v25; // cc
  float flNeededForNextLevel; // [rsp+8h] [rbp-38h]
  float flXPb; // [rsp+Ch] [rbp-34h]

  m_Value = this->m_bIsIllusion.m_Value;
  if ( m_Value )
  {
    return 0;
  }
  else
  {
    HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
    v9 = HandleEntity;
    if ( HandleEntity != 0 && (*(HandleEntity->_vptr_IHandleEntity + 140))(HandleEntity) != 0 )
    {
      v11 = 0.0;
      if ( g_pGameRules != 0 )
        v11 = *&g_pGameRules[18].m_szQuestName[20];
      CDOTAPlayer::SetLastOrderTime(v9, v11, v10, 1);
    }
    else
    {
      v9 = 0;
    }
    v12 = this->m_ModifierManager.m_buffsForModifiers[82];
    Modifier_Percentage_Additive_Internal = 1.0;
    if ( v12 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v12].m_Size > 0 )
      Modifier_Percentage_Additive_Internal = CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal(
                                                &this->m_ModifierManager,
                                                modifierfunction::MODIFIER_PROPERTY_EXP_RATE_BOOST,
                                                &CModifierParams::s_Default);
    v14 = 0;
    flXPb = Modifier_Percentage_Additive_Internal * flXP;
    while ( 1 )
    {
      AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(this, v14);
      if ( AbilityByIndex != 0 && (*(AbilityByIndex->_vptr_IHandleEntity + 286))(AbilityByIndex, flXPb) != 0 )
        break;
      if ( ++v14 == 24 )
      {
        HeroMaxLevel = GetHeroMaxLevel();
        v17 = this->m_iCurrentLevel.m_Value;
        if ( HeroMaxLevel <= v17 )
          return m_Value;
        if ( v9 != 0 )
        {
          if ( (*(v9->_vptr_IHandleEntity + 391))(v9) != 0 )
          {
            m_fValue = dota_tutorial_percent_bot_exp_decrease.m_pParent->m_Value.m_fValue;
            if ( m_fValue > 0.0 )
              flXPb = (100.0 - m_fValue) * (flXPb * 0.0099999998);
          }
          v17 = this->m_iCurrentLevel.m_Value;
        }
        flNeededForNextLevel = GetXPNeededToReachNextLevel(v17);
        if ( dota_tutorial_game.m_pParent->m_Value.m_nValue != 0
          && (m_nValue = dota_tutorial_prevent_exp_gain.m_pParent->m_Value.m_nValue) != 0 )
        {
          v25 = m_nValue <= this->m_iCurrentLevel.m_Value;
          v19 = this->m_iCurrentXP.m_Value;
          if ( v25 )
          {
            flXPb = fminf((flNeededForNextLevel - v19) - 1.0, flXPb);
            if ( flXPb <= 0.0 )
              break;
          }
        }
        else
        {
          v19 = this->m_iCurrentXP.m_Value;
        }
        v20 = flXPb + v19;
        if ( v20 != v19 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 4776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_iCurrentXP.m_Value = v20;
        }
        if ( bIncrementTotal )
          CDOTA_PlayerResource::IncrementTotalEarnedXP(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value, flXPb, nReason);
        for ( i = 1;
              GetHeroMaxLevel() > this->m_iCurrentLevel.m_Value;
              flNeededForNextLevel = GetXPNeededToReachNextLevel(this->m_iCurrentLevel.m_Value) )
        {
          if ( this->m_iCurrentXP.m_Value < flNeededForNextLevel )
            break;
          v22 = i;
          i = 0;
          (*(this->_vptr_IHandleEntity + 492))(this, v22);
        }
        break;
      }
    }
    return 1;
  }
}


// CDOTA_BaseNPC_Hero::HeroLevelUp  (line 5085, @0x000000000295c5c0, libserver.so)  // inlines: CreateEvent, FStrEq, Get, GetModifier_Constant_First, GetOwnerEntity, GetUnitName, IsListeningToEvent, IsTempestDouble, NetworkStateChanged, QueueConcept, Set, SetInt, String, ToCStr, ToDOTAPlayer, _V_strcmp, entindex, operator++, operator+=<int>, operator==<int>
// calls: GetHeroMaxLevel, CDOTA_BaseNPC::SetAutoStyleCriteria, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_Speech::QueueConcept, CResponseCriteriaSet::~CResponseCriteriaSet, CEntityHandle::GetHandleEntity, CDOTA_ModifierManager::GetModifier_Constant_First_Internal, CRecipientFilter::CRecipientFilter (26 total)
// strings: "particles/generic_hero_status/hero_levelup.vpcf", "General.LevelUp", "General.LevelUp.Bonus", "npc_dota_hero_invoker", "dota_player_gained_level"
void __fastcall CDOTA_BaseNPC_Hero::HeroLevelUp(CDOTA_BaseNPC_Hero *const this, bool bPlayEffects)
{
  int HeroMaxLevel; // eax
  int m_Value; // ebx
  bool v6; // r14
  float v7; // xmm1_4
  const char *m_pAsString; // rsi
  int v9; // ebx
  float v10; // xmm0_4
  float v11; // xmm1_4
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v14; // rax
  float v15; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  IHandleEntity *HandleEntity; // rax
  float v18; // xmm1_4
  const CEntityInstance *v19; // rbx
  __int64 v20; // rax
  IHandleEntity *v21; // r13
  char v22; // al
  const CEntityInstance *v23; // rsi
  CEntityIndex v24; // eax
  int v25; // eax
  CEntityIndex v26; // eax
  int v27; // ebx
  float v28; // xmm1_4
  float v29; // xmm1_4
  CDOTABaseAbility *AbilityByIndex; // rax
  __int64 v31; // rax
  int v32; // ebx
  int v33; // r13d
  CDOTA_Item *ItemInSlot; // rax
  __int64 v35; // r15
  CEntityIndex v36; // eax
  CResponseCriteriaSet criteria; // [rsp+10h] [rbp-1B0h] BYREF
  CRecipientFilter filter; // [rsp+50h] [rbp-170h] BYREF
  unsigned __int64 v39; // [rsp+188h] [rbp-38h]

  v39 = __readfsqword(0x28u);
  HeroMaxLevel = GetHeroMaxLevel();
  m_Value = this->m_iCurrentLevel.m_Value;
  if ( HeroMaxLevel == m_Value )
    return;
  v6 = bPlayEffects;
  (*(this->_vptr_IHandleEntity + 22))(this, 2132, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  m_pAsString = this->m_iszUnitName.m_Value.u.m_pAsString;
  this->m_iCurrentLevel.m_Value = m_Value + 1;
  if ( m_pAsString == 0 )
  {
    if ( (m_Value & 0xFFFFFFFD) == 0x10 )
      goto LABEL_35;
    goto LABEL_4;
  }
  if ( m_pAsString == "npc_dota_hero_invoker" || strcmp(m_pAsString, "npc_dota_hero_invoker") == 0 )
  {
LABEL_5:
    v9 = this->m_iAbilityPoints.m_Value + 1;
    (*(this->_vptr_IHandleEntity + 22))(this, 4772, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v10 = this->m_iCurrentLevel.m_Value;
    this->m_iAbilityPoints.m_Value = v9;
    CDOTA_BaseNPC::SetAutoStyleCriteria(this, -1583651808, v10, v11);
    if ( bPlayEffects )
    {
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/generic_hero_status/hero_levelup.vpcf",
                   1,
                   this,
                   0,
                   0);
      v14 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v14, Particle);
      CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
      CResponseCriteriaSet::AppendCriteria(&criteria, "level", 1.0, v15);
      m_pSpeech = this->m_Speech.m_pSpeech;
      if ( m_pSpeech != 0 )
        CDOTA_Speech::QueueConcept(m_pSpeech, 20, 1.5, &criteria, 0, 0, 0, 0, 0);
      CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
    }
    goto LABEL_9;
  }
  if ( (m_Value & 0xFFFFFFFD) != 0x10 )
  {
LABEL_4:
    if ( (m_Value - 20) > 3 )
      goto LABEL_5;
  }
LABEL_35:
  v6 = 0;
  CDOTA_BaseNPC::SetAutoStyleCriteria(this, -1583651808, (m_Value + 1), v7);
LABEL_9:
  HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
  v19 = HandleEntity;
  if ( HandleEntity != 0 )
  {
    if ( (*(HandleEntity->_vptr_IHandleEntity + 140))(HandleEntity) != 0 )
    {
      v20 = this->m_ModifierManager.m_buffsForModifiers[166];
      if ( v20 == 0xFF
        || this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v20].m_Size <= 0
        || CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
             &this->m_ModifierManager,
             modifierfunction::MODIFIER_PROPERTY_TEMPEST_DOUBLE,
             &CModifierParams::s_Default) != 1.0 )
      {
        v35 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "dota_player_gained_level", 0, 0);
        if ( v35 != 0 )
        {
          v36.m_Data = CEntityInstance::GetEntityIndex(v19).m_Data;
          (*(*v35 + 112LL))(v35, "player", v36.m_Data);
          (*(*v35 + 112LL))(v35, "level", this->m_iCurrentLevel.m_Value);
          (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v35, 0);
        }
        CDOTA_CombatLog::AddHeroLevelUpEvent(&g_DOTACombatLog, this);
      }
    }
    if ( CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value) != 0 && v6 )
    {
      CRecipientFilter::CRecipientFilter(&filter);
      v21 = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
      if ( v21 == 0 || (v22 = (*(v21->_vptr_IHandleEntity + 140))(v21), v23 = v21, v22 == 0) )
        v23 = 0;
      CRecipientFilter::AddRecipient(&filter, v23);
      v24.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
      CBaseEntity::EmitSound(&filter, v24, "General.LevelUp", 0, 0.0, 0);
      v25 = this->m_iCurrentLevel.m_Value;
      if ( v25 == 10 || v25 == 15 || v25 == 20 || v25 == 25 )
      {
        v26.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
        CBaseEntity::EmitSound(&filter, v26, "General.LevelUp.Bonus", 0, 0.0, 0);
      }
      CRecipientFilter::~CRecipientFilter(&filter);
    }
  }
  v27 = 0;
  CDOTA_BaseNPC_Hero::ModifyStrength(this, this->m_flStrengthGain, v18);
  CDOTA_BaseNPC_Hero::ModifyAgility(this, this->m_flAgilityGain, v28);
  CDOTA_BaseNPC_Hero::ModifyIntellect(this, this->m_flIntellectGain, v29);
  do
  {
    AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(this, v27);
    if ( AbilityByIndex != 0 )
      (*(AbilityByIndex->_vptr_IHandleEntity + 282))(AbilityByIndex);
    ++v27;
  }
  while ( v27 != 24 );
  v31 = this->m_ModifierManager.m_buffsForModifiers[166];
  if ( v31 == 0xFF
    || this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v31].m_Size <= 0
    || CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
         &this->m_ModifierManager,
         modifierfunction::MODIFIER_PROPERTY_TEMPEST_DOUBLE,
         &CModifierParams::s_Default) != 1.0 )
  {
    v32 = 0;
    v33 = 0;
    do
    {
      ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(&this->m_Inventory, v32);
      if ( ItemInSlot != 0 )
        v33 += (*(ItemInSlot->_vptr_IHandleEntity + 359))(ItemInSlot);
      ++v32;
    }
    while ( v32 != 9 );
    CDOTA_OGS::LogHeroLevelUp(this->m_iPlayerID.m_Value, v33);
    CDOTA_PlayerResource::OnHeroLevelUp(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value, this->m_iCurrentLevel.m_Value);
  }
}


// CDOTA_BaseNPC_Hero::GetDeathXP  (line 5212, @0x00000000028f6e90, libserver.so)  // inlines: DOTAGameRules, GetDeathXP, GetGameMode, GetLevel, IsAddOnGame
// globals: g_iHeroXPBounty
int __fastcall CDOTA_BaseNPC_Hero::GetDeathXP(CDOTA_BaseNPC_Hero *const this)
{
  int v1; // eax
  int result; // eax

  v1 = *&g_pGameRules[6].m_szQuestName[68];
  if ( (v1 == 15 || v1 == 19) && g_pGameRules[6].m_szQuestName[89] != 0 )
    return this->m_iXPBountyExtra + this->m_iXPBounty;
  result = this->m_iCurrentLevel.m_Value;
  if ( result != 0 )
    return g_iHeroXPBounty[result - 1];
  return result;
}


// CDOTA_BaseNPC_Hero::GetDeathGoldCost  (line 5230, @0x00000000028fc2d0, libserver.so)  // inlines: DOTAGameRules, GetModifier_Constant_First, IsListeningToEvent
// calls: CDOTAGamerules::GetGameModeEntity, CDOTA_ModifierManager::GetModifier_Constant_First_Internal, CDOTA_PlayerResource::GetNetWorth, CDOTA_PlayerResource::IsValidTeamPlayer, CDOTA_PlayerResource::GetTeam
// callers: CDOTA_Bot::WantsToSaveForBuyback, CDOTA_BotMode_Farm::GetFarmDesire, CDOTA_BaseNPC_Hero::Event_Killed
int __fastcall CDOTA_BaseNPC_Hero::GetDeathGoldCost(CDOTA_BaseNPC_Hero *const this)
{
  int result; // eax
  __int64 v3; // rax
  float v4; // r15d
  __int64 v5; // rax
  int v6; // r14d
  int v7; // eax
  int Team; // r13d
  int v9; // eax
  int v10; // esi
  float v11; // xmm0_4
  float flVictimNetWorth; // [rsp+8h] [rbp-38h]
  float flGoldLostMod; // [rsp+Ch] [rbp-34h]

  if ( g_pGameRules != 0
    && CDOTAGamerules::GetGameModeEntity(g_pGameRules) != 0
    && !CDOTAGamerules::GetGameModeEntity(g_pGameRules)->m_bLoseGoldOnDeath )
  {
    return 0;
  }
  v3 = this->m_ModifierManager.m_buffsForModifiers[81];
  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
  if ( v3 == 0xFF )
    goto LABEL_13;
  if ( this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v3].m_Size <= 0 )
  {
    v4 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
    goto LABEL_13;
  }
  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
  if ( CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
         &this->m_ModifierManager,
         modifierfunction::MODIFIER_PROPERTY_DEATHGOLDCOST,
         &CModifierParams::s_Default) < 0.0 )
  {
LABEL_13:
    flGoldLostMod = v4;
    goto LABEL_14;
  }
  v5 = this->m_ModifierManager.m_buffsForModifiers[81];
  flGoldLostMod = -1.0;
  if ( v5 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v5].m_Size > 0 )
    flGoldLostMod = CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
                      &this->m_ModifierManager,
                      modifierfunction::MODIFIER_PROPERTY_DEATHGOLDCOST,
                      &CModifierParams::s_Default);
LABEL_14:
  v6 = 0;
  v7 = (*(this->_vptr_IHandleEntity + 414))(this);
  flVictimNetWorth = CDOTA_PlayerResource::GetNetWorth(g_pDOTAPlayerResource, v7);
  do
  {
    while ( 1 )
    {
      if ( CDOTA_PlayerResource::IsValidTeamPlayer(g_pDOTAPlayerResource, v6) )
      {
        Team = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v6);
        v9 = (*(this->_vptr_IHandleEntity + 414))(this);
        if ( Team != CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v9) )
          break;
      }
      if ( ++v6 == 24 )
        goto LABEL_19;
    }
    v10 = v6++;
    CDOTA_PlayerResource::GetNetWorth(g_pDOTAPlayerResource, v10);
  }
  while ( v6 != 24 );
LABEL_19:
  result = 0;
  v11 = ((flVictimNetWorth / 50.0) + 100.0) - flGoldLostMod;
  if ( v4 <= v11 )
    return v11;
  return result;
}


// CDOTA_BaseNPC_Hero::DeathComplete  (line 5266, @0x00000000028fcd80, libserver.so)
// calls: CDOTA_BaseNPC::DeathComplete
void __fastcall CDOTA_BaseNPC_Hero::DeathComplete(CDOTA_BaseNPC_Hero *const this)
{
  CDOTA_BaseNPC::DeathComplete(this);
}


// Playtesting_SwapPlayers  (line 5274, @0x000000000290f5d0, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTA_PlayerResource::GetGold, CDOTA_PlayerResource::SetGold, CDOTAGamerules::SwapPlayers
// callers: CDOTA_BaseNPC_Hero::Event_Killed
void __fastcall Playtesting_SwapPlayers(CDOTAPlayer *pPlayer1, CDOTAPlayer *pPlayer2)
{
  unsigned int m_Value; // r14d
  int v5; // eax
  int Gold; // r14d
  int v7; // eax
  int v8; // r15d
  int v9; // eax
  int v10; // eax

  m_Value = pPlayer1->m_iTeamNum.m_Value;
  (*(pPlayer1->_vptr_IHandleEntity + 70))(pPlayer1, 0);
  (*(pPlayer2->_vptr_IHandleEntity + 70))(pPlayer2, m_Value);
  (*(pPlayer1->_vptr_IHandleEntity + 70))(pPlayer1, (m_Value != 3) + 2);
  v5 = (*(pPlayer1->_vptr_IHandleEntity + 393))(pPlayer1);
  Gold = CDOTA_PlayerResource::GetGold(g_pDOTAPlayerResource, v5);
  v7 = (*(pPlayer2->_vptr_IHandleEntity + 393))(pPlayer2);
  v8 = CDOTA_PlayerResource::GetGold(g_pDOTAPlayerResource, v7);
  v9 = (*(pPlayer1->_vptr_IHandleEntity + 393))(pPlayer1);
  CDOTA_PlayerResource::SetGold(g_pDOTAPlayerResource, v9, v8, 0);
  v10 = (*(pPlayer2->_vptr_IHandleEntity + 393))(pPlayer2);
  CDOTA_PlayerResource::SetGold(g_pDOTAPlayerResource, v10, Gold, 0);
  CDOTAGamerules::SwapPlayers(g_pGameRules, pPlayer1, pPlayer2, 0);
}


// Playtesting_ChangeToRandomHero  (line 5296, @0x0000000002944db0, libserver.so)  // inlines: AddToTail, CEntityHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CDOTA_Item*>, Element, Get, GetCurrentXP, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, GetTeamNumber, GrowMemory, IndexToIdentity, Init, IsControllableByPlayer, LookupEntity, NetworkStateChanged, Purge, RemoveAll, Set, SetPlayerOwnerID, ToDOTABaseNPC, operator CBaseEntity*, operator=<int>, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTAPlayer::GetAssignedHero, CDOTA_PlayerResource::GetGold, CDOTA_UnitInventory::RemoveItem, CDOTA_UnitInventory::GetItemInSlot, CUtlMemory<CDOTA_Item*, int>::Grow, UTIL_Remove, FindUnitsInRadius, CEntityHandle::operator CEntityInstance*, CDOTAPlayer::UndoHeroSelection, CDOTAGamerules::MakeRandomHeroSelection, CDOTA_PlayerResource::GetSelectedHeroName, DOTA_Hero_Spawn (20 total)
void __fastcall Playtesting_ChangeToRandomHero(CDOTAPlayer *pPlayer)
{
  int v2; // eax
  int Gold; // eax
  int m_Value; // esi
  int v5; // ebx
  CDOTA_Item **v6; // rax
  CDOTA_Item *ItemInSlot; // r12
  __int64 m_Size; // r13
  int v9; // eax
  __int64 v10; // r12
  int i; // ebx
  int v12; // edi
  __int64 j; // r12
  CEntityInstance *v14; // rax
  CEntityInstance *v15; // rbx
  unsigned __int16 v16; // dx
  int v17; // esi
  int v18; // eax
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  unsigned __int64 v21; // rax
  HSCRIPT m_hScope; // rdx
  int v23; // eax
  int v24; // eax
  const char *SelectedHeroName; // rax
  CDOTA_BaseNPC_Hero *AssignedHero; // rax
  __int64 v27; // r12
  int v28; // r13d
  CDOTA_Item *v29; // rbx
  CDOTA_Item **m_pMemory; // rax
  int v31; // eax
  int nXP; // [rsp+18h] [rbp-C8h]
  int nGold; // [rsp+1Ch] [rbp-C4h]
  CDOTA_BaseNPC_Hero *pPlayerHero; // [rsp+28h] [rbp-B8h]
  CDOTA_BaseNPC_Hero *pPlayerHeroa; // [rsp+28h] [rbp-B8h]
  CDOTA_UnitInventory *p_m_Inventory; // [rsp+30h] [rbp-B0h]
  CUtlVector<CDOTA_Item*,CUtlMemory<CDOTA_Item*,int> > vecItems; // [rsp+50h] [rbp-90h] BYREF
  CUtlVector<CDOTA_BaseNPC*,CUtlMemory<CDOTA_BaseNPC*,int> > vecOwnedUnits; // [rsp+70h] [rbp-70h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > vecUnits; // [rsp+90h] [rbp-50h] BYREF

  pPlayerHero = CDOTAPlayer::GetAssignedHero(pPlayer);
  v2 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
  Gold = CDOTA_PlayerResource::GetGold(g_pDOTAPlayerResource, v2);
  m_Value = pPlayerHero->m_iCurrentXP.m_Value;
  vecItems.m_Size = 0;
  nGold = Gold;
  v5 = 0;
  vecItems.m_Memory.m_nAllocationCount = 0;
  p_m_Inventory = &pPlayerHero->m_Inventory;
  nXP = m_Value;
  vecItems.m_Memory.m_pMemory = 0;
  vecItems.m_Memory.m_nGrowSize = 0;
  do
  {
    ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(p_m_Inventory, v5);
    if ( ItemInSlot != 0 )
    {
      m_Size = vecItems.m_Size;
      v9 = vecItems.m_Size;
      if ( vecItems.m_Size == vecItems.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CDOTA_Item *,int>::Grow(&vecItems.m_Memory, 1);
        v9 = vecItems.m_Size;
      }
      vecItems.m_Size = v9 + 1;
      v6 = &vecItems.m_Memory.m_pMemory[m_Size];
      if ( v6 != 0 )
        *v6 = ItemInSlot;
      CDOTA_UnitInventory::RemoveItem(p_m_Inventory, ItemInSlot, 0, 0);
    }
    ++v5;
  }
  while ( v5 != 17 );
  vecOwnedUnits.m_Size = 0;
  vecOwnedUnits.m_Memory.m_pMemory = 0;
  vecOwnedUnits.m_Memory.m_nAllocationCount = 0;
  vecOwnedUnits.m_Memory.m_nGrowSize = 0;
  (*(pPlayerHero->_vptr_IHandleEntity + 499))(pPlayerHero);
  v10 = 0;
  for ( i = 0; vecOwnedUnits.m_Size > i; ++v10 )
  {
    UTIL_Remove(vecOwnedUnits.m_Memory.m_pMemory[v10]);
    ++i;
  }
  v12 = pPlayer->m_iTeamNum.m_Value;
  vecUnits.m_Size = 0;
  vecUnits.m_Memory.m_pMemory = 0;
  vecUnits.m_Memory.m_nAllocationCount = 0;
  vecUnits.m_Memory.m_nGrowSize = 0;
  FindUnitsInRadius(v12, &vec3_origin, 0, -1.0, &vecUnits, 3, 3, 0, 0, 0);
  for ( j = 0; vecUnits.m_Size > j; ++j )
  {
    while ( 1 )
    {
      v14 = CEntityHandle::operator CEntityInstance *(&vecUnits.m_Memory.m_pMemory[j]);
      v15 = v14;
      if ( v14 != 0 && BYTE3(v14[7]._vptr_IHandleEntity) != 0 )
      {
        if ( HIDWORD(v14[11].m_pEntity) == -1 )
        {
          v16 = 0x7FFF;
          v17 = 0x7FFF;
        }
        else
        {
          v16 = WORD2(v14[11].m_pEntity) & 0x7FFF;
          v17 = v16;
        }
        v18 = (HIDWORD(v14[11].m_pEntity) >> 15 << 15) | v16 & 0x7FFF;
        if ( (v18 + 2) > 1 )
        {
          v19 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v17 >> 9];
          if ( v19 != 0 )
          {
            v20 = &v19[v17 & 0x1FF];
            if ( v20 != 0 && v18 == v20->m_EHandle.m_Index && pPlayerHero == v20->m_pInstance )
            {
              v21 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
              m_hScope = v15[61].m_hPrivateScope.m_hScope;
              if ( _bittest64(&m_hScope, v21) )
              {
                if ( (v15[43].m_iszPrivateVScripts.u.m_Id & 0x100) == 0 && pPlayerHero != v15 )
                  break;
              }
            }
          }
        }
      }
      if ( vecUnits.m_Size <= ++j )
        goto LABEL_27;
    }
    UTIL_Remove(v15);
  }
LABEL_27:
  CDOTAPlayer::UndoHeroSelection(pPlayer);
  v23 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
  CDOTAGamerules::MakeRandomHeroSelection(g_pGameRules, v23, 0, -1, 0);
  v24 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
  SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, v24);
  DOTA_Hero_Spawn(SelectedHeroName, pPlayer, 0);
  AssignedHero = CDOTAPlayer::GetAssignedHero(pPlayer);
  CDOTA_ActiveModifiersList::ReplaceCasterWithCaster(g_pDOTAActiveModifiers, pPlayerHero, AssignedHero);
  v27 = 0;
  for ( pPlayerHeroa = CDOTAPlayer::GetAssignedHero(pPlayer); vecItems.m_Size > v27; ++v27 )
  {
    v28 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
    v29 = vecItems.m_Memory.m_pMemory[v27];
    if ( v28 != v29->m_iPlayerOwnerID.m_Value )
    {
      (*(v29->_vptr_IHandleEntity + 22))(vecItems.m_Memory.m_pMemory[v27], 988, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      m_pMemory = vecItems.m_Memory.m_pMemory;
      v29->m_iPlayerOwnerID.m_Value = v28;
      v29 = m_pMemory[v27];
    }
    CDOTA_UnitInventory::AddItem(&pPlayerHeroa->m_Inventory, v29, 3, -1, 0, 0);
  }
  v31 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
  CDOTA_PlayerResource::SetGold(g_pDOTAPlayerResource, v31, nGold, 0);
  (*(pPlayerHeroa->_vptr_IHandleEntity + 493))(pPlayerHeroa, 0, 1, 1, nXP);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&vecUnits);
  CUtlVectorBase<CDOTA_BaseNPC *,CUtlMemory<CDOTA_BaseNPC *,int>>::~CUtlVectorBase(&vecOwnedUnits);
  if ( (vecItems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_Item *,int>::Purge(&vecItems.m_Memory);
    if ( (vecItems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Item *,int>::Purge(&vecItems.m_Memory);
  }
}


// Playtesting_MoveToOtherTeam  (line 5381, @0x0000000002919860, libserver.so)  // inlines: CEntityHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetPlayerOwnerID, GetSerialNumber, IndexToIdentity, Init, IsControllableByPlayer, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator[], ~CUtlVector
// calls: CDOTAPlayer::GetAssignedHero, FindUnitsInRadius, CEntityHandle::operator CEntityInstance*, CDOTA_PlayerResource::GetNumCouriersForTeam, CDOTA_PlayerResource::GetNthCourierForTeam, CDOTA_UnitInventory::GetItemInSlot, CDOTA_UnitInventory::AddItem, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_BaseNPC_Hero::Event_Killed
void __fastcall Playtesting_MoveToOtherTeam(CDOTAPlayer *pPlayer, int nTeam, CDOTAPlayer *pOtherPlayer)
{
  __int64 v5; // r14
  int i; // r12d
  CEntityInstance *v7; // rax
  CEntityInstance *v8; // rbx
  unsigned __int16 v9; // dx
  int v10; // esi
  int v11; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  unsigned __int64 v14; // rax
  HSCRIPT m_hScope; // rdx
  int v16; // ebx
  CDOTA_Item *ItemInSlot; // rax
  CDOTA_Item *v18; // r12
  int m_Value; // r14d
  unsigned __int16 v20; // dx
  int v21; // esi
  int v22; // eax
  CEntityIdentity *v23; // rdx
  CEntityIdentity *v24; // rdx
  CDOTA_BaseNPC_Hero *AssignedHero; // rax
  CDOTA_BaseNPC_Hero *pPlayerHero; // [rsp+20h] [rbp-90h]
  int NumCouriersForTeam; // [rsp+34h] [rbp-7Ch]
  CDOTA_Unit_Courier *pCourier; // [rsp+40h] [rbp-70h]
  int iCurCourier; // [rsp+4Ch] [rbp-64h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > vecUnits; // [rsp+60h] [rbp-50h] BYREF

  (*(pPlayer->_vptr_IHandleEntity + 70))(pPlayer);
  pPlayerHero = CDOTAPlayer::GetAssignedHero(pPlayer);
  (*(pPlayerHero->_vptr_IHandleEntity + 70))(pPlayerHero, nTeam);
  vecUnits.m_Size = 0;
  vecUnits.m_Memory.m_pMemory = 0;
  vecUnits.m_Memory.m_nAllocationCount = 0;
  vecUnits.m_Memory.m_nGrowSize = 0;
  FindUnitsInRadius(nTeam, &vec3_origin, 0, -1.0, &vecUnits, 3, 3, 0, 0, 0);
  v5 = 0;
  for ( i = 0; vecUnits.m_Size > i; ++v5 )
  {
    while ( 1 )
    {
      v7 = CEntityHandle::operator CEntityInstance *(&vecUnits.m_Memory.m_pMemory[v5]);
      v8 = v7;
      if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
      {
        if ( HIDWORD(v7[11].m_pEntity) == -1 )
        {
          v9 = 0x7FFF;
          v10 = 0x7FFF;
        }
        else
        {
          v9 = WORD2(v7[11].m_pEntity) & 0x7FFF;
          v10 = v9;
        }
        v11 = (HIDWORD(v7[11].m_pEntity) >> 15 << 15) | v9 & 0x7FFF;
        if ( (v11 + 2) > 1 )
        {
          v12 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v10 >> 9];
          if ( v12 != 0 )
          {
            v13 = &v12[v10 & 0x1FF];
            if ( v13 != 0 && v11 == v13->m_EHandle.m_Index && pPlayerHero == v13->m_pInstance )
            {
              v14 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
              m_hScope = v8[61].m_hPrivateScope.m_hScope;
              if ( _bittest64(&m_hScope, v14) )
              {
                if ( (v8[43].m_iszPrivateVScripts.u.m_Id & 0x100) == 0 )
                  break;
              }
            }
          }
        }
      }
      ++i;
      ++v5;
      if ( vecUnits.m_Size <= i )
        goto LABEL_16;
    }
    (*(v8->_vptr_IHandleEntity + 70))(v8, nTeam);
    ++i;
  }
LABEL_16:
  NumCouriersForTeam = CDOTA_PlayerResource::GetNumCouriersForTeam(g_pDOTAPlayerResource, (nTeam != 3) + 2);
  if ( NumCouriersForTeam > 0 )
  {
    for ( iCurCourier = 0; iCurCourier != NumCouriersForTeam; ++iCurCourier )
    {
      while ( 1 )
      {
        pCourier = CDOTA_PlayerResource::GetNthCourierForTeam(g_pDOTAPlayerResource, iCurCourier, (nTeam != 3) + 2);
        v16 = 0;
        if ( pCourier != 0 )
        {
          do
          {
            while ( 1 )
            {
              ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(&pCourier->m_Inventory, v16);
              v18 = ItemInSlot;
              if ( ItemInSlot != 0 )
              {
                m_Value = ItemInSlot->m_iPlayerOwnerID.m_Value;
                if ( (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer) == m_Value )
                  break;
              }
              if ( ++v16 == 17 )
                goto LABEL_24;
            }
            CDOTA_UnitInventory::AddItem(&pPlayerHero->m_Inventory, v18, 10, -1, 0, 0);
            ++v16;
          }
          while ( v16 != 17 );
LABEL_24:
          if ( pCourier->m_hOwnerEntity.m_Value.m_Index == -1 )
          {
            v20 = 0x7FFF;
            v21 = 0x7FFF;
          }
          else
          {
            v20 = pCourier->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
            v21 = v20;
          }
          v22 = (pCourier->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v20 & 0x7FFF;
          if ( (v22 + 2) > 1 )
          {
            v23 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v21 >> 9];
            if ( v23 != 0 )
            {
              v24 = &v23[v21 & 0x1FF];
              if ( v24 != 0 && v22 == v24->m_EHandle.m_Index && pPlayerHero == v24->m_pInstance )
                break;
            }
          }
        }
        if ( ++iCurCourier == NumCouriersForTeam )
          goto LABEL_31;
      }
      AssignedHero = CDOTAPlayer::GetAssignedHero(pOtherPlayer);
      (*(pCourier->_vptr_IHandleEntity + 40))(pCourier, AssignedHero);
    }
  }
LABEL_31:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&vecUnits);
}


// CDOTA_BaseNPC_Hero::Event_Killed  (line 5447, @0x0000000002963d10, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CModifierParams, CSingleUserRecipientFilter, CUtlMemory, CUtlVector, CUtlVectorBase, ClearStreak, CopyConstruct<CDOTAPlayer*>, CopyConstruct<int>, DOTAGameRules, Element, Get, GetAttacker, GetBool, GetCustomKillEffect, GetEHandle, GetEUniverse, GetEntityIdentity, GetEntryIndex, GetGameTime, GetGlobalDOTATeam, GetHero, GetInstance, GetInt, GetLobby, GetModifier_Constant_First, GetOwnerEntity, GetPlayerID, GetSerialNumber, GetSpawnGroupHandle, GetStreak, GetTeamNumber, GrowMemory, HasCustomKillEffect, IncrementDeaths, IndexToIdentity, IsEmpty, IsHeroRespawnEnabled, IsListeningToEvent, IsRealHero, IsSpecialIllusion, IsTempestDouble, IsValid, LookupEntity, ModifyGold, NetworkStateChanged, Purge, RemoveAll, ResetKillStreak, Set, SetDamageCustom, SetKillCamUnit, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAPlayer, Vector, entindex, operator CBaseEntity*, operator CEntityInstance*, operator=, operator=<bool>, operator=<float>, operator=<int>, operator[], ~CSingleUserRecipientFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_BaseNPC::Event_Killed, CDOTA_ModifierManager::GetModifier_Constant_First_Internal, CDOTAFogOfWarSystem::AddTempViewer, CTakeDamageInfo::CTakeDamageInfo, CDOTA_BaseNPC_Hero::GetRespawnTime, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, UTIL_TraceRayVerticalGroundHeight, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex (66 total)
// callers: CDOTA_Unit_Hero_Juggernaut::Event_Killed, CDOTA_Unit_Hero_Tiny::Event_Killed, CDOTA_Unit_Hero_DragonKnight::Event_Killed, CDOTA_Unit_Hero_LoneDruid::Event_Killed, CDOTA_Unit_Hero_Broodmother::Event_Killed, CDOTA_Unit_Hero_Chen::Event_Killed, CDOTA_Unit_Hero_Lycan::Event_Killed, CDOTA_Unit_Hero_EarthSpirit::Event_Killed, CDOTA_Unit_Hero_Elder_Titan::Event_Killed, CDOTA_Unit_Hero_Techies::Event_Killed, CDOTA_Unit_Hero_Undying::Event_Killed, CDOTA_Unit_Hero_Visage::Event_Killed
// strings: "particles/generic_hero_status/death_tombstone.vpcf", "DOTAMusic.Death", "Spectator.HeroDeath", "attach_hitloc"
// globals: g_HeroList, CDOTA_BaseNPC_Hero::PreRespawnHero(void), CEntityHandle::gm_pEntityList
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_BaseNPC_Hero::Event_Killed(CDOTA_BaseNPC_Hero *const this, const CTakeDamageInfo *const info)
{
  float v2; // xmm2_4
  __int64 v5; // rax
  CDOTA_BaseNPC::NetworkVar_m_ModifierManager *p_m_ModifierManager; // r13
  __int64 v7; // rax
  CEntityInstance *v8; // rax
  double v9; // xmm1_8
  double v10; // xmm2_8
  double v11; // xmm5_8
  __m128 v12; // xmm1
  bool v13; // zf
  double v14; // xmm0_8
  double v15; // xmm7_8
  float v16; // xmm3_4
  Vector *v17; // rax
  const Vector *v18; // rax
  float v19; // xmm5_4
  float z; // xmm4_4
  float v21; // xmm7_4
  float x; // r15d
  vec_t v23; // edx
  CEntityIdentity *m_pEntity; // rax
  SpawnGroupHandle_t m_hSpawnGroup; // edi
  __m128i v26; // xmm0
  float v27; // r14d
  CDOTA_ParticleManager *v28; // rax
  int v29; // r12d
  CDOTA_ParticleManager *v30; // rax
  CDOTA_ParticleManager *v31; // rax
  CDOTA_ParticleManager *v32; // rax
  int v33; // eax
  float m_flScriptRespawnTime; // xmm0_4
  const CEntityHandle *v35; // rdi
  CEntityInstance *v36; // rax
  CEntityInstance *v37; // r13
  char m_CScriptComponent_high; // al
  __int64 v39; // r14
  int v40; // r13d
  int *v41; // rax
  __int64 v42; // r12
  int v43; // eax
  _BYTE *v44; // rax
  _BYTE *v45; // r12
  int Streak; // eax
  CTeam *GlobalTeam; // rax
  CNetworkHandleBase<CBaseEntity,CBaseEntity::NetworkVar_m_hOwnerEntity> *p_m_hOwnerEntity; // r12
  IHandleEntity *v49; // r14
  CEntityInstance *v50; // rax
  CDOTA_BaseNPC *v51; // r13
  IHandleEntity *v52; // rax
  CDOTAPlayer *v53; // r14
  CDOTAPlayer *v54; // rdx
  CEntityIdentity *v55; // rax
  int v56; // ecx
  __int16 v57; // si
  IHandleEntity *v58; // rax
  CNetworkHandleBase<CBaseEntity,CDOTAPlayer::NetworkVar_m_hKillCamUnit> *v59; // r13
  CEntityInstance *v60; // rax
  CDOTA_BaseNPC_Hero *v61; // r14
  IHandleEntity *v62; // rax
  IHandleEntity *v63; // rax
  const CEntityInstance *v64; // r13
  int m_nValue; // r13d
  CEntityIndex v66; // r12d
  CEntityIndex v67; // eax
  CTeam *v68; // rax
  CDOTA_Commander *v69; // rax
  CGameRules *v70; // rax
  unsigned __int8 v71; // r12
  IHandleEntity *v72; // rax
  int (**vptr_IHandleEntity)(...); // rax
  __int64 v74; // rax
  __int64 v75; // rdx
  float v76; // xmm1_4
  __m128i v77; // xmm0
  float v78; // r12d
  float v79; // xmm0_4
  IHandleEntity *v80; // rax
  __int64 v81; // r13
  int v82; // r12d
  CHandle<CDOTA_BaseNPC_Hero> *v83; // rdx
  uint32 m_Index; // eax
  __int16 v85; // cx
  CEntityIdentity *v86; // rdx
  CEntityIdentity *v87; // rdx
  CEntityInstance *m_pInstance; // r14
  int DeathGoldCost; // eax
  CEntityInstance *v90; // rax
  int v91; // edx
  int y; // r14d
  const Vector *AbsOrigin; // rax
  CEntityInstance *v94; // rax
  CEntityInstance *v95; // r15
  _BYTE *v96; // rax
  float v97; // xmm1_4
  _DWORD *v98; // rax
  _DWORD *v99; // r14
  bool m_Value; // r15
  IHandleEntity *HandleEntity; // rax
  CDOTAPlayer *v102; // r14
  CDOTAPlayer *v103; // rdi
  __int64 v104; // rax
  int v105; // eax
  int v106; // r12d
  int v107; // r13d
  CDOTAPlayer *Player; // rax
  CDOTA_BaseNPC_Hero *AssignedHero; // rax
  CDOTA_BaseNPC_Hero *v110; // rax
  int m_Size; // eax
  CDOTAPlayer **v112; // rax
  CDOTAPlayer *v113; // r12
  const char *v114; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r15d
  CDOTA_ParticleManager *v117; // rax
  const Vector *v118; // r14
  CDOTA_ParticleManager *v119; // rax
  CDOTA_ParticleManager *v120; // rax
  CDOTA_ParticleManager *v121; // rax
  int v122; // eax
  int nPlayerTeam; // [rsp+14h] [rbp-2DCh]
  const char *pszKillEffecta; // [rsp+18h] [rbp-2D8h]
  int pszKillEffect; // [rsp+18h] [rbp-2D8h]
  float flRespawnTime; // [rsp+20h] [rbp-2D0h]
  float flRespawnTimea; // [rsp+20h] [rbp-2D0h]
  CDOTAPlayer *flRespawnTimeb; // [rsp+20h] [rbp-2D0h]
  EHANDLE *p_m_hAttacker; // [rsp+30h] [rbp-2C0h]
  float pTmp; // [rsp+38h] [rbp-2B8h]
  int pTmpa; // [rsp+38h] [rbp-2B8h]
  CDOTAPlayer *pTmpb; // [rsp+38h] [rbp-2B8h]
  CDOTAPlayer *pTmpc; // [rsp+38h] [rbp-2B8h]
  int pTmpd; // [rsp+38h] [rbp-2B8h]
  CDOTAPlayer *pTmpe; // [rsp+38h] [rbp-2B8h]
  int msg; // [rsp+40h] [rbp-2B0h] OVERLAPPED BYREF
  unsigned __int64 v137; // [rsp+50h] [rbp-2A0h]
  float v138; // [rsp+58h] [rbp-298h]
  CTakeDamageInfo newinfo; // [rsp+60h] [rbp-290h] BYREF
  CUtlVector<CDOTAPlayer*,CUtlMemory<CDOTAPlayer*,int> > vecEnemyPlayers; // [rsp+F0h] [rbp-200h] BYREF
  char v141; // [rsp+108h] [rbp-1E8h]
  char v142; // [rsp+109h] [rbp-1E7h]
  char v143; // [rsp+10Ah] [rbp-1E6h]
  char v144; // [rsp+10Bh] [rbp-1E5h]
  int v145; // [rsp+10Ch] [rbp-1E4h]
  int v146; // [rsp+11Ch] [rbp-1D4h]
  int v147; // [rsp+124h] [rbp-1CCh]
  int v148; // [rsp+128h] [rbp-1C8h]
  __int64 v149; // [rsp+138h] [rbp-1B8h]
  __int64 v150; // [rsp+140h] [rbp-1B0h]
  int v151; // [rsp+148h] [rbp-1A8h]
  int v152; // [rsp+14Ch] [rbp-1A4h]
  char v153; // [rsp+168h] [rbp-188h]
  char v154; // [rsp+169h] [rbp-187h]
  char v155; // [rsp+16Ah] [rbp-186h]
  char v156; // [rsp+16Bh] [rbp-185h]
  char v157; // [rsp+16Ch] [rbp-184h]
  char v158; // [rsp+16Dh] [rbp-183h]
  int v159; // [rsp+170h] [rbp-180h]
  int v160; // [rsp+174h] [rbp-17Ch]
  int v161; // [rsp+178h] [rbp-178h]
  int v162; // [rsp+17Ch] [rbp-174h]
  CRecipientFilter spectatorFilter; // [rsp+180h] [rbp-170h] BYREF
  unsigned __int64 v164; // [rsp+2B8h] [rbp-38h]

  v164 = __readfsqword(0x28u);
  if ( this->m_bIsIllusion.m_Value
    || (v5 = this->m_ModifierManager.m_buffsForModifiers[166], p_m_ModifierManager = &this->m_ModifierManager,
                                                               v5 != 0xFF)
    && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v5].m_Size > 0
    && CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
         &this->m_ModifierManager,
         modifierfunction::MODIFIER_PROPERTY_TEMPEST_DOUBLE,
         &CModifierParams::s_Default) == 1.0 )
  {
    CDOTA_BaseNPC::Event_Killed(this, info);
    return;
  }
  CDOTAFogOfWarSystem::AddTempViewer(&g_DOTAFogOfWarSystem, this, this->m_iTeamNum.m_Value, 500.0, 2.0, v2);
  CTakeDamageInfo::CTakeDamageInfo(&newinfo, info);
  v7 = this->m_ModifierManager.m_buffsForModifiers[73];
  if ( v7 == 0xFF )
  {
    pTmp = -1.0;
  }
  else if ( this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v7].m_Size <= 0 )
  {
    pTmp = -1.0;
  }
  else
  {
    pTmp = CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
             p_m_ModifierManager,
             modifierfunction::MODIFIER_PROPERTY_REINCARNATION,
             &CModifierParams::s_Default);
  }
  p_m_hAttacker = &info->m_hAttacker;
  flRespawnTime = this->m_flRespawnTimePenalty.m_Value + CDOTA_BaseNPC_Hero::GetRespawnTime(this);
  v8 = CEntityHandle::operator CEntityInstance *(&info->m_hAttacker);
  if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 && HIBYTE(v8[7].m_CScriptComponent) == 4 )
  {
    v12 = _mm_cmplt_ss(0x41D00000u, LODWORD(flRespawnTime));
    *&v10 = (LODWORD(flRespawnTime) & v12.m128_i32[0]);
    *&v9 = _mm_andnot_ps(v12, 0x41D00000u).m128_u64[0] | *&v10;
    flRespawnTime = *&v9;
  }
  v13 = !this->m_bReincarnating.m_Value;
  this->m_vRespawnPosition.x = vec3_origin.x;
  this->m_vRespawnPosition.y = vec3_origin.y;
  *&v14 = LODWORD(vec3_origin.z);
  this->m_vRespawnPosition.z = *&v14;
  if ( !v13 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 5400, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bReincarnating.m_Value = 0;
  }
  v15 = 0.0;
  if ( pTmp == 0.0 && this->m_flRespawnTimePenalty.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4784, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flRespawnTimePenalty.m_Value = 0.0;
  }
  v16 = pTmp;
  if ( pTmp <= 0.0 )
  {
    pTmp = flRespawnTime;
    if ( (info->m_iDamageCustom & 2) == 0 )
    {
      if ( (*(this->_vptr_IHandleEntity + 390))(this, v14, v9, v10, v16, flRespawnTime, v11, 0.0, v15) == 0 )
        goto LABEL_138;
      vptr_IHandleEntity = this->_vptr_IHandleEntity;
      LOBYTE(vecEnemyPlayers.m_Memory.m_nAllocationCount) = 0;
      vecEnemyPlayers.m_Size = -1;
      *(&vecEnemyPlayers.m_Size + 1) = 0;
      vecEnemyPlayers.m_Memory.m_pMemory = 0xFFFFFFFF00000000LL;
      vecEnemyPlayers.m_Memory.m_nGrowSize = 0;
      v141 = 0;
      v142 = 0;
      v143 = 0;
      v145 = 0;
      v146 = -1;
      v147 = 0;
      v148 = 0;
      v149 = 0;
      v150 = 0;
      v151 = 0;
      v152 = 0;
      v153 = 0;
      v154 = 0;
      v155 = 0;
      v156 = 0;
      v157 = 0;
      v158 = 0;
      v159 = 0;
      v160 = -1;
      v161 = -1;
      v162 = -1;
      v144 = 1;
      v74 = (vptr_IHandleEntity[390])(this);
      v75 = *(v74 + 3241);
      if ( v75 == 0xFF
        || *(*(v74 + 3152) + 24 * v75) <= 0
        || CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
             (v74 + 3104),
             modifierfunction::MODIFIER_PROPERTY_REINCARNATION,
             &vecEnemyPlayers) <= 0.0 )
      {
LABEL_138:
        DeathGoldCost = CDOTA_BaseNPC_Hero::GetDeathGoldCost(this);
        pTmpd = CDOTA_PlayerResource::ModifyGold(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value, -DeathGoldCost, 0, 1);
        v90 = CEntityHandle::operator CEntityInstance *(p_m_hAttacker);
        v91 = -1;
        if ( v90 != 0 && BYTE3(v90[7]._vptr_IHandleEntity) != 0 && (v90[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          v91 = v90[100]._vptr_IHandleEntity;
        CDOTA_PlayerResource::IncrementDeaths(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value, v91);
        y = CBaseEntity::GetAbsOrigin(this)->y;
        AbsOrigin = CBaseEntity::GetAbsOrigin(this);
        MinimapEvent(this->m_iTeamNum.m_Value, this, AbsOrigin->x, y, 64, 4);
        if ( !this->m_bReincarnating.m_Value )
        {
          v94 = CEntityHandle::operator CEntityInstance *(p_m_hAttacker);
          v95 = v94;
          if ( v94 != 0
            && BYTE3(v94[7]._vptr_IHandleEntity) != 0
            && (v94[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
            && (v96 = *&v94[119].m_worldGroupId.m_nHashCode) != 0
            && *v96 != 0 )
          {
            pszKillEffecta = CUtlString::Get(&v95[119].m_worldGroupId);
            KeyValues::KeyValues(&spectatorFilter, pszKillEffecta);
            KeyValues::SetFloat(&spectatorFilter, "duration", v97);
            CDOTA_BaseNPC::AddNewModifier(this, v95, 0, pszKillEffecta, &spectatorFilter, 0);
            if ( !this->m_bCustomKillEffect.m_Value )
            {
              (*(this->_vptr_IHandleEntity + 22))(this, 5401, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              this->m_bCustomKillEffect.m_Value = 1;
            }
            KeyValues::~KeyValues(&spectatorFilter);
          }
          else if ( (*(this->_vptr_IHandleEntity + 502))(this) != 0 )
          {
            v114 = (*(this->_vptr_IHandleEntity + 502))(this);
            ParticleManager = GetParticleManager();
            Particle = CDOTA_ParticleManager::CreateParticle(ParticleManager, v114, 2, 0, 0, 0);
            v117 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControlEnt(v117, Particle, 0, this, 1, 0, vec3_invalid, 1);
            v118 = CBaseEntity::GetAbsOrigin(this);
            v119 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControlEnt(v119, Particle, 1, this, 5, "attach_hitloc", *v118, 1);
            v120 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleAlwaysSimulate(v120, Particle);
            v121 = GetParticleManager();
            CDOTA_ParticleManager::ReleaseParticleIndex(v121, Particle);
          }
        }
        if ( (*(this->_vptr_IHandleEntity + 413))(this) != 0 )
        {
          v98 = (*(this->_vptr_IHandleEntity + 413))(this);
          v99 = v98;
          if ( v98[1185] != 4 )
          {
            (*(*v98 + 176LL))(v98, 4740, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            v99[1185] = 4;
          }
        }
        if ( !this->m_bIsIllusion.m_Value )
        {
          m_Value = this->m_bReincarnating.m_Value;
          HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
          v102 = HandleEntity;
          if ( HandleEntity != 0 && (*(HandleEntity->_vptr_IHandleEntity + 140))(HandleEntity) != 0 )
            v103 = v102;
          else
            v103 = 0;
          CDOTA_OGS::LogHeroDeath(v103, info, pTmpd, m_Value);
        }
        pTmp = flRespawnTime;
      }
      else
      {
        newinfo.m_iDamageCustom |= 1u;
        pTmp = flRespawnTime;
      }
    }
  }
  else
  {
    newinfo.m_iDamageCustom |= 1u;
    v17 = CBaseEntity::GetAbsOrigin(this);
    v13 = this->m_bReincarnating.m_Value;
    this->m_vRespawnPosition = *v17;
    if ( !v13 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 5400, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bReincarnating.m_Value = 1;
    }
    v18 = CBaseEntity::GetAbsOrigin(this);
    z = v18->z;
    v21 = v18->y;
    x = v18->x;
    v137 = *&v18->x;
    v23 = v18->z;
    m_pEntity = this->m_pEntity;
    flRespawnTimea = v21;
    v138 = v23;
    if ( m_pEntity != 0 )
      m_hSpawnGroup = m_pEntity->m_hSpawnGroup;
    else
      m_hSpawnGroup = 0;
    *v26.m128i_i32 = UTIL_TraceRayVerticalGroundHeight(m_hSpawnGroup, x, v21, z + 1024.0, z - 2048.0, z, v19, 0x7021u);
    v27 = COERCE_FLOAT(_mm_cvtsi128_si32(v26));
    v28 = GetParticleManager();
    v29 = CDOTA_ParticleManager::CreateParticle(v28, "particles/generic_hero_status/death_tombstone.vpcf", 2, 0, 0, 0);
    v30 = GetParticleManager();
    v137 = __PAIR64__(LODWORD(flRespawnTimea), LODWORD(x));
    v138 = v27;
    CDOTA_ParticleManager::SetParticleControl(
      v30,
      v29,
      0,
      COERCE_DOUBLE(__PAIR64__(LODWORD(flRespawnTimea), LODWORD(x))),
      v27);
    LODWORD(vecEnemyPlayers.m_Memory.m_pMemory) = 0;
    *&vecEnemyPlayers.m_Size = LODWORD(pTmp);
    v31 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(
      v31,
      v29,
      2,
      *&vecEnemyPlayers.m_Size,
      *&vecEnemyPlayers.m_Memory.m_pMemory);
    v32 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v32, v29);
  }
  v33 = (*(this->_vptr_IHandleEntity + 414))(this);
  CDOTA_PlayerResource::ClearDamageTaken(g_pDOTAPlayerResource, v33);
  CDOTA_BaseNPC::Event_Killed(this, &newinfo);
  m_flScriptRespawnTime = this->m_flScriptRespawnTime;
  if ( m_flScriptRespawnTime != -1.0 )
  {
    this->m_flScriptRespawnTime = -1.0;
    pTmp = m_flScriptRespawnTime;
  }
  if ( BYTE1(g_pGameRules[10]._vptr_CGameRules) != 0
    && !this->m_bScriptDisableRespawns
    && (*(this->_vptr_IHandleEntity + 390))(this) == 0
    && CDOTA_ModifierManager::GetModifier_Constant_First(
         p_m_ModifierManager,
         modifierfunction::MODIFIER_PROPERTY_SUPER_ILLUSION,
         &CModifierParams::s_Default) != 1.0 )
  {
    v77 = 0;
    if ( g_pGameRules != 0 )
      v77 = *&g_pGameRules[18].m_szQuestName[20];
    *v77.m128i_i32 = *v77.m128i_i32 + pTmp;
    v78 = COERCE_FLOAT(_mm_cvtsi128_si32(v77));
    if ( *v77.m128i_i32 != this->m_flRespawnTime.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 4780, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flRespawnTime.m_Value = v78;
    }
    if ( this->m_bReincarnating.m_Value )
      CountdownTimer::Start(&this->m_RespawnMusicTimer, 2.0, v76);
    else
      CountdownTimer::Start(&this->m_RespawnMusicTimer, pTmp - 2.5, v76);
    v79 = CGlobalVarsBase::curtime(gpGlobals, 0);
    CBaseEntity::ThinkSet(this, CDOTA_BaseNPC_Hero::PreRespawnHero, v79 + 0.1, -883079344, 0);
  }
  v35 = p_m_hAttacker;
  if ( !this->m_bReincarnating.m_Value )
  {
    v36 = CEntityHandle::operator CEntityInstance *(p_m_hAttacker);
    v37 = v36;
    if ( v36 != 0 && BYTE3(v36[7]._vptr_IHandleEntity) != 0 )
    {
      m_CScriptComponent_high = HIBYTE(v36[7].m_CScriptComponent);
      if ( m_CScriptComponent_high == this->m_iTeamNum.m_Value || m_CScriptComponent_high == 4 )
      {
        p_m_hOwnerEntity = &this->m_hOwnerEntity;
        if ( CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value) == 0 )
          goto LABEL_80;
LABEL_53:
        CDOTAHeroList::FrameUpdatePostEntityThink(&g_HeroList, &msg);
        v50 = CEntityHandle::operator CEntityInstance *(p_m_hAttacker);
        v51 = v50;
        if ( v50 != 0 )
        {
          if ( BYTE3(v50[7]._vptr_IHandleEntity) == 0
            || (v50[43].m_iszPrivateVScripts.u.m_Id & 1) == 0
            && ((v72 = CEntityHandle::GetHandleEntity(&v50[11].m_pEntity + 1), v51 = v72, v72 == 0)
             || BYTE3(v72[42]._vptr_IHandleEntity) == 0
             || (v72[261]._vptr_IHandleEntity & 1) == 0) )
          {
            v51 = 0;
          }
        }
        v52 = CEntityHandle::GetHandleEntity(&p_m_hOwnerEntity->m_Value);
        v53 = v52;
        if ( v52 != 0 && (*(v52->_vptr_IHandleEntity + 140))(v52) != 0 )
          v54 = v53;
        else
          v54 = 0;
        vecEnemyPlayers.m_Size = -1;
        v55 = this->m_pEntity;
        if ( v55 != 0 )
        {
          v56 = (v55->m_EHandle.m_Index >> 15) - (v55->m_flags & 1);
          v57 = 0x7FFF;
          if ( v55->m_EHandle.m_Index != -1 )
            v57 = v55->m_EHandle.m_Index & 0x7FFF;
          LOWORD(vecEnemyPlayers.m_Size) = v57 | vecEnemyPlayers.m_Size & 0x8000;
          vecEnemyPlayers.m_Size = (v56 << 15) | vecEnemyPlayers.m_Size & 0x7FFF;
        }
        CDOTA_CombatLog::SendKillCamInformation(g_pDOTACombatLog, &vecEnemyPlayers, v54, v51);
        v58 = CEntityHandle::GetHandleEntity(&p_m_hOwnerEntity->m_Value);
        v59 = v58;
        if ( v58 == 0 || (*(v58->_vptr_IHandleEntity + 140))(v58) == 0 )
        {
LABEL_73:
          v49 = CEntityHandle::GetHandleEntity(&p_m_hOwnerEntity->m_Value);
          if ( v49 == 0 )
          {
LABEL_79:
            v37 = CEntityHandle::operator CEntityInstance *(p_m_hAttacker);
            goto LABEL_80;
          }
LABEL_74:
          if ( !this->m_bReincarnating.m_Value )
          {
            v64 = 0;
            if ( (*(v49->_vptr_IHandleEntity + 140))(v49) != 0 )
              v64 = v49;
            CRecipientFilter::CRecipientFilter(&spectatorFilter);
            spectatorFilter._vptr_IRecipientFilter = &off_3FCB0D0;
            CRecipientFilter::AddRecipient(&spectatorFilter, v64);
            Gamerules_EmitSound("DOTAMusic.Death", &spectatorFilter, 0);
            m_nValue = dota_privatebeta_teamswap.m_pParent->m_Value.m_nValue;
            if ( (*(this->_vptr_IHandleEntity + 390))(this) == 0
              && IsAppDota2Main()
              && (m_nValue - 1) <= 1
              && (*(*engine + 704LL))(engine) >> 56 == 2
              && GDOTAGCClientSystem() != 0 )
            {
              v104 = *(GDOTAGCClientSystem() + 260);
              if ( v104 != 0 && *(v104 + 152) == 0 )
              {
                flRespawnTimeb = CEntityHandle::GetHandleEntity(&p_m_hOwnerEntity->m_Value);
                if ( flRespawnTimeb != 0 && (*(flRespawnTimeb->_vptr_IHandleEntity + 140))(flRespawnTimeb) != 0 )
                {
                  v105 = flRespawnTimeb->m_iTeamNum.m_Value;
                  vecEnemyPlayers.m_Size = 0;
                  vecEnemyPlayers.m_Memory.m_pMemory = 0;
                  vecEnemyPlayers.m_Memory.m_nAllocationCount = 0;
                  vecEnemyPlayers.m_Memory.m_nGrowSize = 0;
                  nPlayerTeam = v105;
                  v106 = 0;
                  v107 = (v105 != 3) + 2;
                  do
                  {
                    if ( v107 == CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v106) )
                    {
                      Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, v106);
                      pTmpe = Player;
                      if ( Player != 0 )
                      {
                        AssignedHero = CDOTAPlayer::GetAssignedHero(Player);
                        if ( AssignedHero != 0 && (*(AssignedHero->_vptr_IHandleEntity + 408))(AssignedHero) == 0 )
                        {
                          v110 = CDOTAPlayer::GetAssignedHero(pTmpe);
                          if ( (*(v110->_vptr_IHandleEntity + 438))(v110) == 0 )
                          {
                            m_Size = vecEnemyPlayers.m_Size;
                            pszKillEffect = vecEnemyPlayers.m_Size;
                            if ( vecEnemyPlayers.m_Size == vecEnemyPlayers.m_Memory.m_nAllocationCount )
                            {
                              CUtlMemory<CDOTAPlayer *,int>::Grow(&vecEnemyPlayers.m_Memory, 1);
                              m_Size = vecEnemyPlayers.m_Size;
                            }
                            vecEnemyPlayers.m_Size = m_Size + 1;
                            v112 = &vecEnemyPlayers.m_Memory.m_pMemory[pszKillEffect];
                            if ( v112 != 0 )
                              *v112 = pTmpe;
                          }
                        }
                      }
                    }
                    ++v106;
                  }
                  while ( v106 != 64 );
                  if ( vecEnemyPlayers.m_Size != 0 )
                  {
                    v113 = vecEnemyPlayers.m_Memory.m_pMemory[RandomInt(0, (vecEnemyPlayers.m_Size - 1))];
                    if ( dota_privatebeta_teamswap.m_pParent->m_Value.m_nValue == 1 )
                    {
                      (*(flRespawnTimeb->_vptr_IHandleEntity + 70))(flRespawnTimeb, 0);
                      Playtesting_MoveToOtherTeam(v113, nPlayerTeam, flRespawnTimeb);
                      Playtesting_MoveToOtherTeam(flRespawnTimeb, v107, v113);
                    }
                    else
                    {
                      Playtesting_SwapPlayers(flRespawnTimeb, v113);
                    }
                  }
                  vecEnemyPlayers.m_Size = 0;
                  if ( (vecEnemyPlayers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                  {
                    CUtlMemory<CDOTAPlayer *,int>::Purge(&vecEnemyPlayers.m_Memory);
                    if ( (vecEnemyPlayers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                      CUtlMemory<CDOTAPlayer *,int>::Purge(&vecEnemyPlayers.m_Memory);
                  }
                }
              }
            }
            spectatorFilter._vptr_IRecipientFilter = &off_3FCB0D0;
            CRecipientFilter::~CRecipientFilter(&spectatorFilter);
          }
          goto LABEL_79;
        }
        v60 = CEntityHandle::operator CEntityInstance *(p_m_hAttacker);
        v61 = v60;
        if ( v60 != 0 )
        {
          if ( BYTE3(v60[7]._vptr_IHandleEntity) == 0 )
            goto LABEL_115;
          pTmpb = (&v60[11].m_pEntity + 4);
          v62 = CEntityHandle::GetHandleEntity(&v60[11].m_pEntity + 1);
          if ( v62 != 0 )
          {
            if ( (*(v62->_vptr_IHandleEntity + 140))(v62) != 0 )
            {
              v63 = CEntityHandle::GetHandleEntity(pTmpb);
              pTmpc = v63;
              if ( v63 != 0 && (*(v63->_vptr_IHandleEntity + 140))(v63) != 0 )
                v61 = CDOTAPlayer::GetAssignedHero(pTmpc);
              goto LABEL_72;
            }
            v80 = CEntityHandle::GetHandleEntity(pTmpb);
            v61 = v80;
            if ( v80 == 0 || BYTE3(v80[42]._vptr_IHandleEntity) == 0 )
LABEL_115:
              v61 = 0;
          }
        }
LABEL_72:
        CNetworkHandleBase<CBaseEntity,CDOTAPlayer::NetworkVar_m_hKillCamUnit>::Set(v59 + 1200, v61);
        goto LABEL_73;
      }
      vecEnemyPlayers.m_Size = 0;
      vecEnemyPlayers.m_Memory.m_pMemory = 0;
      vecEnemyPlayers.m_Memory.m_nAllocationCount = 0;
      vecEnemyPlayers.m_Memory.m_nGrowSize = 0;
      msg = (*(v37->_vptr_IHandleEntity + 414))(v37);
      CUtlVectorBase<int,CUtlMemory<int,int>>::AddToTail(&vecEnemyPlayers, &msg);
    }
    else
    {
      vecEnemyPlayers.m_Size = 0;
      vecEnemyPlayers.m_Memory.m_pMemory = 0;
      vecEnemyPlayers.m_Memory.m_nAllocationCount = 0;
      vecEnemyPlayers.m_Memory.m_nGrowSize = 0;
    }
    if ( CDOTA_PlayerResource::GetStreak(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value) > 2
      && this->m_HeroDamageInfoArray.m_Size > 0 )
    {
      v39 = 0;
      v40 = 0;
      do
      {
        v42 = vecEnemyPlayers.m_Size;
        pTmpa = this->m_HeroDamageInfoArray.m_Memory.m_pMemory[v39].nDamagingPlayerID;
        v43 = vecEnemyPlayers.m_Size;
        if ( vecEnemyPlayers.m_Size == vecEnemyPlayers.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<int,int>::Grow(&vecEnemyPlayers.m_Memory, 1);
          v43 = vecEnemyPlayers.m_Size;
        }
        vecEnemyPlayers.m_Size = v43 + 1;
        v41 = vecEnemyPlayers.m_Memory.m_pMemory + v42;
        if ( v41 != 0 )
          *v41 = pTmpa;
        ++v40;
        ++v39;
      }
      while ( v40 < this->m_HeroDamageInfoArray.m_Size );
    }
    if ( (*(this->_vptr_IHandleEntity + 390))(this) != 0 )
    {
      v44 = (*(this->_vptr_IHandleEntity + 390))(this);
      v45 = v44;
      if ( v44 == 0 || (v44[2088] & 1) == 0 || (*(*v44 + 3504LL))(v44) != 0 )
      {
LABEL_50:
        CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&vecEnemyPlayers);
        v35 = p_m_hAttacker;
        goto LABEL_51;
      }
      if ( CDOTA_PlayerResource::GetStreak(g_pDOTAPlayerResource, *(v45 + 1200)) > 2 )
      {
        Streak = CDOTA_PlayerResource::GetStreak(g_pDOTAPlayerResource, *(v45 + 1200));
        CDOTA_CombatLog::AddEndKillstreakEvent(&g_DOTACombatLog, &vecEnemyPlayers, Streak);
      }
      CDOTA_PlayerResource::ClearStreak(g_pDOTAPlayerResource, *(v45 + 1200));
      GlobalTeam = GetGlobalTeam(v45[383]);
    }
    else
    {
      if ( CDOTA_PlayerResource::GetStreak(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value) > 2 )
      {
        v122 = CDOTA_PlayerResource::GetStreak(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value);
        CDOTA_CombatLog::AddEndKillstreakEvent(&g_DOTACombatLog, &vecEnemyPlayers, v122);
      }
      CDOTA_PlayerResource::ClearStreak(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value);
      GlobalTeam = GetGlobalTeam(this->m_iTeamNum.m_Value);
    }
    if ( GlobalTeam != 0 )
      GlobalTeam[1].m_NetworkTransmitComponent.m_PVSInfo.m_vCenter[1] = 0.0;
    goto LABEL_50;
  }
LABEL_51:
  p_m_hOwnerEntity = &this->m_hOwnerEntity;
  v37 = CEntityHandle::operator CEntityInstance *(v35);
  v49 = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
  if ( v49 != 0 )
  {
    if ( v37 == 0 )
      goto LABEL_74;
    goto LABEL_53;
  }
LABEL_80:
  if ( v37 != 0 )
    v66.m_Data = CEntityInstance::GetEntityIndex(v37).m_Data;
  else
    v66.m_Data = 0;
  v67.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  CreateUnitEvent(v67, v66, 100, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_HERO_DEATH);
  if ( dota_music_enable_spectator_mode.m_pParent->m_Value.m_nValue != 0 )
  {
    CRecipientFilter::CRecipientFilter(&spectatorFilter);
    v68 = GetGlobalTeam(1);
    CRecipientFilter::AddRecipientsByTeam(&spectatorFilter, v68);
    Gamerules_EmitSound("Spectator.HeroDeath", &spectatorFilter, 0);
    CRecipientFilter::~CRecipientFilter(&spectatorFilter);
  }
  v69 = DOTACommander();
  CDOTA_Commander::OnDeath(v69, this);
  CDOTAFogOfWarSystem::BlindViewer(&g_DOTAFogOfWarSystem, this);
  v70 = g_pGameRules;
  if ( g_pGameRules != 0 )
  {
    if ( *&g_pGameRules[6].m_szQuestName[68] == 21 )
    {
      if ( (*(this->_vptr_IHandleEntity + 438))(this) == 0
        && CDOTA_PlayerResource::GetDeaths(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value) > 1 )
      {
        EndGameImmediately((this->m_iTeamNum.m_Value == 2) + 2);
      }
      v70 = g_pGameRules;
    }
  }
  else
  {
    v70 = 0;
  }
  v71 = this->m_iTeamNum.m_Value;
  if ( v70 != 0 && *&v70[6].m_szQuestName[68] == 20 && (*(this->_vptr_IHandleEntity + 438))(this) == 0 )
  {
    if ( *&g_pGameRules[21].m_szQuestName[24 * (v71 != 2) + 48] != 0 )
    {
      CDOTAGamerules::PrecacheNextARDMHeroForPlayer(g_pGameRules, this->m_iPlayerID.m_Value);
    }
    else
    {
      v81 = 0;
      v82 = 0;
      if ( g_HeroList.m_hHeroList.m_Size > 0 )
      {
        while ( 1 )
        {
          v83 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v81];
          m_Index = g_HeroList.m_hHeroList.m_Memory.m_pMemory[v81].m_Index;
          if ( m_Index + 2 > 1 )
          {
            v85 = v83->m_Index;
            v86 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v83->m_Index) >> 9) & 0x3F];
            if ( v86 != 0 )
            {
              v87 = &v86[v85 & 0x1FF];
              if ( v87 != 0 && m_Index == v87->m_EHandle.m_Index )
              {
                m_pInstance = v87->m_pInstance;
                if ( v87->m_pInstance != 0
                  && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                  && LOBYTE(m_pInstance[71].m_pEntity) == 0
                  && ((*(m_pInstance->_vptr_IHandleEntity + 408))(v87->m_pInstance) != 0
                   || (*(m_pInstance->_vptr_IHandleEntity + 438))(m_pInstance) != 0)
                  && HIBYTE(m_pInstance[7].m_CScriptComponent) == this->m_iTeamNum.m_Value )
                {
                  break;
                }
              }
            }
          }
          ++v82;
          ++v81;
          if ( v82 >= g_HeroList.m_hHeroList.m_Size )
            goto LABEL_162;
        }
      }
      else
      {
LABEL_162:
        EndGameImmediately((this->m_iTeamNum.m_Value == 2) + 2);
      }
    }
  }
  CTakeDamageInfo::~CTakeDamageInfo(&newinfo);
}


// CDOTA_BaseNPC_Hero::EvaluateEventsForKill  (line 5834, @0x000000000290f6d0, libserver.so)  // inlines: DOTAGameRules, GetLobby, IsRealHero
// calls: GDOTAGCClientSystem, CDOTALobby::IsIngameEventActive, CDOTAGamerules::IngameEvents_OnHeroKill
// callers: CDOTAHeroList::DistributeRewardsForKill
void __fastcall CDOTA_BaseNPC_Hero::EvaluateEventsForKill(
        CDOTA_BaseNPC_Hero *const this,
        CDOTA_BaseNPC *pVictim,
        CDOTA_BaseNPC *pKiller)
{
  const CDOTALobby *v5; // rdi

  if ( pVictim != 0 && (pVictim->m_iUnitType & 1) != 0 && !pVictim->m_bIsIllusion.m_Value && GDOTAGCClientSystem() != 0 )
  {
    v5 = *(GDOTAGCClientSystem() + 260);
    if ( v5 != 0 && CDOTALobby::IsIngameEventActive(v5, EEvent::EVENT_ID_ORACLE_PA) && g_pGameRules != 0 )
      CDOTAGamerules::IngameEvents_OnHeroKill(g_pGameRules, pVictim, pKiller);
  }
}


// CDOTA_BaseNPC_Hero::HandleKillEaterKills  (line 5854, @0x000000000290f750, libserver.so)  // inlines: FindModifierByName, Get, GetInstance, GetUnitName, String, ToCStr, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, V_strncmp<int>, operator CBaseEntity*
// calls: EconEntity_OnOwnerKillEaterEvent, ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, CDOTA_ModifierManager::FindModifierByName, CDOTA_Buff::GetCaster, CDOTA_UnitInventory::FindItemInInventory, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetHealth, _V_strncmp
// callers: CDOTAHeroList::DistributeRewardsForKill
// strings: "modifier_silence", "item_gem", "modifier_storm_spirit_electric_vortex_pull", "npc_dota_warlock_golem_"
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_BaseNPC_Hero::HandleKillEaterKills(
        CDOTA_BaseNPC_Hero *const this,
        CDOTA_BaseNPC *pKiller,
        CDOTA_BaseNPC_Hero *pVictim,
        CBaseEntity *pInflictor)
{
  CModifieractoryDictionary *v7; // rax
  IModifierFactory *Factory; // rax
  CDOTA_Buff *ModifierByName; // rax
  int v10; // eax
  CEntityInstance *v11; // rax
  CModifieractoryDictionary *v12; // rax
  IModifierFactory *v13; // rax
  CDOTA_Buff *v14; // rax
  int Health; // r14d
  const char *m_pAsString; // rdi
  CDOTA_BaseNPC_Hero *v17; // rsi
  CEntityHandle v18; // [rsp+0h] [rbp-30h] BYREF

  EconEntity_OnOwnerKillEaterEvent(
    this,
    pVictim,
    kill_eater_event_t::kKillEaterEvent_PlayerKill,
    1,
    INVALID_ITEM_DEF_INDEX);
  if ( (*(this->_vptr_IHandleEntity + 408))(this) != 0 && (*(this->_vptr_IHandleEntity + 156))(this) > 0 )
  {
    Health = CBaseEntity::GetHealth(this);
    if ( (*(this->_vptr_IHandleEntity + 156))(this) * 0.15 >= Health )
      EconEntity_OnOwnerKillEaterEvent(
        this,
        pVictim,
        kill_eater_event_t::kKillEaterEventType_Axe_LowHealthKills,
        1,
        INVALID_ITEM_DEF_INDEX);
  }
  if ( pVictim != 0 )
  {
    v7 = ModifierFactoryDictionary();
    Factory = CModifieractoryDictionary::FindFactory(v7, "modifier_silence");
    ModifierByName = CDOTA_ModifierManager::FindModifierByName(
                       &pVictim->m_ModifierManager,
                       Factory,
                       "modifier_silence",
                       0);
    if ( ModifierByName != 0 && this == CDOTA_Buff::GetCaster(ModifierByName) )
    {
      v17 = 0;
      if ( pVictim->m_bIsDOTANPC && (pVictim->m_iUnitType & 1) != 0 && !pVictim->m_bIsIllusion.m_Value )
        v17 = pVictim;
      EconEntity_OnOwnerKillEaterEvent(
        this,
        v17,
        kill_eater_event_t::kKillEaterEventType_DrowRanger_SilencedKills,
        1,
        INVALID_ITEM_DEF_INDEX);
    }
    if ( CDOTA_UnitInventory::FindItemInInventory(&pVictim->m_Inventory, "item_gem", 1, 0, -1) != 0 )
      EconEntity_OnOwnerKillEaterEvent(
        this,
        pVictim,
        kill_eater_event_t::kKillEaterEventType_Riki_GemCarrierKills,
        1,
        INVALID_ITEM_DEF_INDEX);
  }
  if ( pKiller != 0 && this != pKiller )
  {
    v10 = (*(pKiller->_vptr_IHandleEntity + 414))(pKiller);
    if ( v10 != -1 )
    {
      CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(&v18, g_pDOTAPlayerResource, v10);
      v11 = CEntityHandle::operator CEntityInstance *(&v18);
      if ( v11 != 0
        && BYTE3(v11[7]._vptr_IHandleEntity) != 0
        && (v11[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
        && this == v11 )
      {
        m_pAsString = "";
        if ( pKiller->m_iszUnitName.m_Value.u.m_Id != 0 )
          m_pAsString = pKiller->m_iszUnitName.m_Value.u.m_pAsString;
        if ( _V_strncmp(m_pAsString, "npc_dota_warlock_golem_", 23) == 0 )
          EconEntity_OnOwnerKillEaterEvent(
            this,
            pVictim,
            kill_eater_event_t::kKillEaterEventType_Warlock_GolemKills,
            1,
            INVALID_ITEM_DEF_INDEX);
      }
    }
  }
  if ( pVictim != 0 )
  {
    v12 = ModifierFactoryDictionary();
    v13 = CModifieractoryDictionary::FindFactory(v12, "modifier_storm_spirit_electric_vortex_pull");
    v14 = CDOTA_ModifierManager::FindModifierByName(
            &pVictim->m_ModifierManager,
            v13,
            "modifier_storm_spirit_electric_vortex_pull",
            0);
    if ( v14 != 0 && this == CDOTA_Buff::GetCaster(v14) )
      EconEntity_OnOwnerKillEaterEvent(
        this,
        pVictim,
        kill_eater_event_t::kKillEaterEvent_StormSpirit_VortexKills,
        1,
        INVALID_ITEM_DEF_INDEX);
  }
}


// CDOTA_BaseNPC_Hero::HandleKillEaterBuildingKills  (line 5934, @0x000000000290fa30, libserver.so)
// calls: EconEntity_OnOwnerKillEaterEvent
// callers: CDOTAHeroList::DistributeRewardsForKill
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_BaseNPC_Hero::HandleKillEaterBuildingKills(
        CDOTA_BaseNPC_Hero *const this,
        CDOTA_BaseNPC *pKiller,
        CDOTA_BaseNPC_Building *pVictimBuilding,
        CBaseEntity *pInflictor)
{
  uint32 m_iUnitType; // eax

  m_iUnitType = pVictimBuilding->m_iUnitType;
  if ( (m_iUnitType & 4) != 0 )
  {
    EconEntity_OnOwnerKillEaterEvent(
      this,
      0,
      kill_eater_event_t::kKillEaterEvent_Towers_Destroyed,
      1,
      INVALID_ITEM_DEF_INDEX);
    m_iUnitType = pVictimBuilding->m_iUnitType;
  }
  if ( (m_iUnitType & 0x40) != 0 )
    EconEntity_OnOwnerKillEaterEvent(
      this,
      0,
      kill_eater_event_t::kKillEaterEvent_Barracks_Destroyed,
      1,
      INVALID_ITEM_DEF_INDEX);
  EconEntity_OnOwnerKillEaterEvent(
    this,
    0,
    kill_eater_event_t::kKillEaterEvent_Buildings_Destroyed,
    1,
    INVALID_ITEM_DEF_INDEX);
}


// CDOTA_BaseNPC_Hero::HandleKillEaterWardKills  (line 5954, @0x000000000290fac0, libserver.so)
// calls: EconEntity_OnOwnerKillEaterEvent
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_BaseNPC_Hero::HandleKillEaterWardKills(
        CDOTA_BaseNPC_Hero *const this,
        CDOTA_BaseNPC *pKiller,
        CDOTA_BaseNPC *pWard,
        CBaseEntity *pInflictor)
{
  EconEntity_OnOwnerKillEaterEvent(
    this,
    0,
    kill_eater_event_t::kKillEaterEvent_EnemyWardKills,
    1,
    INVALID_ITEM_DEF_INDEX);
}


// CDOTA_BaseNPC_Hero::PreRespawnHero  (line 5965, @0x00000000028fbc30, libserver.so)  // inlines: DOTAGameRules, NetworkStateChanged, Set, curtime, operator=<float>, operator><float>
// calls: CBaseEntity::ThinkSet
// globals: CDOTA_BaseNPC_Hero::PreRespawnHero(void)
void __fastcall CDOTA_BaseNPC_Hero::PreRespawnHero(CDOTA_BaseNPC_Hero *const this)
{
  float m_Value; // xmm0_4
  CGlobalVars *v3; // r12
  float v4; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  if ( BYTE1(g_pGameRules[10]._vptr_CGameRules) != 0 )
  {
    m_Value = this->m_flRespawnTime.m_Value;
    if ( m_Value > 0.0 && *&g_pGameRules[18].m_szQuestName[20] > m_Value )
    {
      (*(this->_vptr_IHandleEntity + 494))(this, 0, 0, 0);
      if ( this->m_flRespawnTime.m_Value != -1.0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 4780, 0xFFFFFFFFLL, 0xFFFFFFFFLL, -1.0);
        this->m_flRespawnTime.m_Value = -1.0;
      }
    }
    v3 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      v4 = v3->m_flCurrentTime + 0.1;
    }
    else
    {
      v4 = 0.1;
    }
    CBaseEntity::ThinkSet(this, CDOTA_BaseNPC_Hero::PreRespawnHero, v4, -883079344, 0);
  }
}


// CDOTA_BaseNPC_Hero::RespawnHero  (line 5982, @0x000000000295cd80, libserver.so)  // inlines: AddKeyValue<bool>, AddToTail, Base, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CDOTAWearableItem*>, DOTAGameRules, DirectRespawn, Element, FastSqrt, FindKeyHash, FindModifierByName, Free, Get, GetEHandle, GetEntryIndex, GetInstance, GetNewARDMHero, GetOwnerEntity, GetPlayerID, GetSerialNumber, GetTeamNumber, GetUnitName, GrowMemory, Invalidate, Length2D, NetworkStateChanged, Purge, QueueConcept, RemoveAll, RemoveModifierByName, Set, SetBuyBackDisabledByReapersScythe, SetKillCamUnit, SetPurchasedWhileDead, SetUnit, SetValue<bool>, State_Get, String, ToCStr, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAPlayer, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator!=, operator-, operator=, operator=<bool>, operator=<double>, operator=<float>, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::ClearFlags, CDOTA_BaseNPC::SetMana, FindClearSpaceForUnit, CEntityKeyValues::CEntityKeyValues, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::GetAbilityByIndex, CDOTA_UnitInventory::GetItemInSlot, CBaseEntity::ThinkSet, CEntityHandle::GetHandleEntity, CNetworkHandleBase<CBaseEntity, CDOTAPlayer::NetworkVar_m_hKillCamUnit>::Set, CDOTA_UnitInventory::OnShopChange, CEntityKeyValues::~CEntityKeyValues (54 total)
// strings: "abilityname", "modifier_fountain_invulnerability", "modifier_invulnerable", "modifier_tutorial_sleep", "modifier_item_moon_shard_consumed", "consumed_bonus" (11 total)
// globals: CDOTA_BaseNPC_Hero::PreRespawnHero(void)
void __fastcall CDOTA_BaseNPC_Hero::RespawnHero(
        CDOTA_BaseNPC_Hero *const this,
        bool bBuyBack,
        bool bIsActuallyBeingSpawnedForTheFirstTime,
        bool bRespawnPenalty)
{
  float v6; // xmm1_4
  bool v7; // r13
  float v8; // xmm0_4
  int k; // r12d
  CDOTABaseAbility *AbilityByIndex; // rax
  int m; // r12d
  CDOTA_Item *ItemInSlot; // rax
  int n; // r12d
  CDOTA_Item *v14; // rax
  CDOTA_Item *v15; // r13
  IHandleEntity *v16; // rax
  CNetworkHandleBase<CBaseEntity,CDOTAPlayer::NetworkVar_m_hKillCamUnit> *v17; // r12
  bool v18; // r12
  const CBaseEntity *v19; // r13
  const Vector *v20; // rax
  const QAngle *AbsAngles; // rax
  const char *v22; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v24; // rax
  const char *v25; // rax
  IHandleEntity *v26; // rax
  char v27; // al
  IDOTA_SpeechQueuedCallback *v28; // r9
  CDOTA_Speech *m_pSpeech; // rdi
  CEntityIdentity *m_pEntity; // rdx
  int v31; // eax
  __int16 v32; // cx
  int m_Value; // r13d
  CEntityInstance *v34; // rax
  CDOTA_BaseNPC *v35; // r12
  IHandleEntity *HandleEntity; // rax
  CNetworkHandleBase<CBaseEntity,CDOTAPlayer::NetworkVar_m_hKillCamUnit> *v37; // r15
  const char *m_pAsString; // rdx
  CModifieractoryDictionary *v39; // rax
  IModifierFactory *Factory; // rax
  CDOTA_Buff *ModifierByName; // rax
  int *v42; // r13
  float v43; // xmm1_4
  CDOTABaseAbility *Ability; // rax
  CModifieractoryDictionary *v45; // rax
  IModifierFactory *v46; // rax
  CDOTA_Buff *v47; // r13
  float v48; // xmm1_4
  CDOTABaseAbility *v49; // rax
  CBaseEntity *i; // r12
  _QWORD *v51; // rax
  void *v52; // r14
  __int64 v53; // r13
  uint32 v54; // eax
  __int64 v55; // r13
  int j; // r12d
  __int64 v57; // rax
  char *v58; // rdx
  const Vector *AbsOrigin; // r12
  const Vector *v60; // rax
  float v61; // xmm1_4
  __int64 v62; // r12
  char *v63; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v65; // rax
  uint16 m_flags; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v67; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rcx
  CGameRules *v71; // r12
  _BOOL8 v72; // r15
  uint32 m_Index; // r14d
  int (**vptr_CGameRules)(...); // rdi
  CBasePlayer *v75; // r13
  CDOTA_SpeechCallbackForwardToPlayersAnnouncer *v76; // r14
  bool v77; // zf
  __int16 v78; // ax
  float criteria; // [rsp+18h] [rbp-158h]
  int nTeamNumbera; // [rsp+24h] [rbp-14Ch]
  CModifierParams params; // [rsp+30h] [rbp-140h] BYREF
  KeyValues kv; // [rsp+C0h] [rbp-B0h] BYREF
  CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>,CEntityKeyValues::KeyValueInfo_t,short int> v85; // [rsp+E8h] [rbp-88h] BYREF
  __int16 v86; // [rsp+112h] [rbp-5Eh]
  unsigned __int64 v87; // [rsp+138h] [rbp-38h]
  Vector v88; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v89; // 0:xmm0_8.8,8:xmm1_4.4

  v87 = __readfsqword(0x28u);
  if ( g_pGameRules != 0 && *&g_pGameRules[6].m_szQuestName[68] == 20 && (*(this->_vptr_IHandleEntity + 438))(this) == 0 )
  {
    m_Value = this->m_iPlayerID.m_Value;
    nTeamNumbera = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, m_Value);
    params.ability.m_Index = this->m_hNewARDMHero.m_Index;
    v34 = CEntityHandle::operator CEntityInstance *(&params.ability);
    v35 = v34;
    if ( v34 != 0
      && BYTE3(v34[7]._vptr_IHandleEntity) != 0
      && (v34[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
      && this != v34 )
    {
      HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
      v37 = HandleEntity;
      if ( HandleEntity != 0 && (*(HandleEntity->_vptr_IHandleEntity + 140))(HandleEntity) != 0 )
        CNetworkHandleBase<CBaseEntity,CDOTAPlayer::NetworkVar_m_hKillCamUnit>::Set(v37 + 1200, 0);
      m_pAsString = "";
      if ( v35->m_iszUnitName.m_Value.u.m_Id != 0 )
        m_pAsString = v35->m_iszUnitName.m_Value.u.m_pAsString;
      CDOTA_PlayerResource::SetSelectedHero(g_pDOTAPlayerResource, m_Value, m_pAsString, v35);
      CDOTA_ModifierManager::RemoveModifierByName(&v35->m_ModifierManager, "modifier_invulnerable");
      CDOTA_ModifierManager::RemoveModifierByName(&v35->m_ModifierManager, "modifier_tutorial_sleep");
      v39 = ModifierFactoryDictionary();
      Factory = CModifieractoryDictionary::FindFactory(v39, "modifier_item_moon_shard_consumed");
      ModifierByName = CDOTA_ModifierManager::FindModifierByName(
                         &this->m_ModifierManager,
                         Factory,
                         "modifier_item_moon_shard_consumed",
                         0);
      if ( ModifierByName != 0 )
      {
        v42 = __dynamic_cast(
                ModifierByName,
                &`typeinfo for'CDOTA_Buff,
                &`typeinfo for'CDOTA_Modifier_Item_Moonshard_Consumed,
                0);
        if ( v42 != 0 )
        {
          KeyValues::KeyValues(&kv, "modifier_item_moon_shard_consumed");
          (*(*v42 + 248LL))(v42);
          KeyValues::SetFloat(&kv, "duration", v43);
          KeyValues::SetInt(&kv, "consumed_bonus", v42[746]);
          Ability = CDOTA_Buff::GetAbility(v42);
          CDOTA_BaseNPC::AddNewModifier(v35, v35, Ability, "modifier_item_moon_shard_consumed", &kv, 0);
          KeyValues::~KeyValues(&kv);
        }
      }
      v45 = ModifierFactoryDictionary();
      v46 = CModifieractoryDictionary::FindFactory(v45, "modifier_item_ultimate_scepter_consumed");
      v47 = CDOTA_ModifierManager::FindModifierByName(
              &this->m_ModifierManager,
              v46,
              "modifier_item_ultimate_scepter_consumed",
              0);
      if ( v47 != 0 )
      {
        KeyValues::KeyValues(&kv, "modifier_item_ultimate_scepter_consumed");
        KeyValues::SetFloat(&kv, "duration", v48);
        KeyValues::SetInt(&kv, "bonus_all_stats", 10);
        KeyValues::SetInt(&kv, "bonus_health", 200);
        KeyValues::SetInt(&kv, "bonus_mana", 150);
        v49 = CDOTA_Buff::GetAbility(v47);
        CDOTA_BaseNPC::AddNewModifier(v35, v35, v49, "modifier_item_ultimate_scepter_consumed", &kv, 0);
        KeyValues::~KeyValues(&kv);
      }
      if ( (nTeamNumbera - 2) <= 1 )
      {
        v71 = g_pGameRules;
        v72 = nTeamNumbera != 2;
        m_Index = *&g_pGameRules[21].m_szQuestName[24 * v72 + 48];
        params.ability.m_Index = m_Index;
        if ( memcmp(&g_pGameRules[21].m_szQuestName[4 * v72 + 112], &params, 4u) != 0 )
        {
          vptr_CGameRules = v71[5]._vptr_CGameRules;
          if ( vptr_CGameRules != 0 && (*(vptr_CGameRules[1] + 49) & 4) == 0 )
          {
            (*(*vptr_CGameRules + 22))(vptr_CGameRules, 3144, v72, *v71[5].m_szQuestName);
            m_Index = params.ability.m_Index;
          }
          *&v71[21].m_szQuestName[4 * v72 + 112] = m_Index;
        }
      }
      if ( bBuyBack )
      {
        if ( this->m_RespawnMusicTimer.m_timestamp.m_Value != -1.0 )
        {
          (*(this->m_RespawnMusicTimer._vptr_CountdownTimer + 2))(
            &this->m_RespawnMusicTimer,
            12,
            0xFFFFFFFFLL,
            0xFFFFFFFFLL,
            -1.0);
          this->m_RespawnMusicTimer.m_timestamp.m_Value = -1.0;
        }
        CDOTA_BaseNPC_Hero::OnBuybackSpawned(this);
      }
      params.ability.m_Index = 0;
      *&params.fOriginalDamage = 0;
      *&params.bTooltip = 0;
      params.nTooltipParam = 0;
      for ( i = CBaseEntity::FirstMoveChild(this); i != 0; i = CBaseEntity::NextMovePeer(i) )
      {
        v52 = __dynamic_cast(i, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTAWearableItem, 0);
        if ( v52 != 0 )
        {
          v53 = params.ability.m_Index;
          v54 = params.ability.m_Index;
          if ( params.ability.m_Index == *&params.bTooltip )
          {
            CUtlMemory<CDOTAWearableItem *,int>::Grow(&params.fOriginalDamage, 1);
            v54 = params.ability.m_Index;
          }
          params.ability.m_Index = v54 + 1;
          v51 = (*&params.fOriginalDamage + 8 * v53);
          if ( v51 != 0 )
            *v51 = v52;
        }
      }
      v55 = 0;
      for ( j = 0; params.ability.m_Index > j; v55 += 8 )
      {
        UTIL_Remove(*(*&params.fOriginalDamage + v55));
        ++j;
      }
      if ( (*(this->_vptr_IHandleEntity + 437))(this) == 0 )
        UTIL_Remove(this);
      params.ability.m_Index = 0;
      if ( (params.nTooltipParam & 0xC0000000) == 0 )
      {
        CUtlMemory<CDOTAWearableItem *,int>::Purge(&params.fOriginalDamage);
        if ( (params.nTooltipParam & 0xC0000000) == 0 )
          CUtlMemory<CDOTAWearableItem *,int>::Purge(&params.fOriginalDamage);
      }
    }
    return;
  }
  CBaseEntity::ClearFlags(this);
  this->m_bBuybackDisabled = 0;
  if ( vec3_origin.x == this->m_vRespawnPosition.x && vec3_origin.y == this->m_vRespawnPosition.y )
  {
    v7 = vec3_origin.z != this->m_vRespawnPosition.z;
    if ( !bRespawnPenalty )
      goto LABEL_36;
LABEL_5:
    v8 = this->m_flTimeUntilRespawn * 0.25;
    if ( v8 != this->m_flRespawnTimePenalty.m_Value )
    {
      criteria = this->m_flTimeUntilRespawn * 0.25;
      (*(this->_vptr_IHandleEntity + 22))(this, 4784, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flRespawnTimePenalty.m_Value = criteria;
    }
    goto LABEL_7;
  }
  v7 = 1;
  if ( bRespawnPenalty )
    goto LABEL_5;
LABEL_36:
  if ( !v7 && !bBuyBack )
  {
    if ( this->m_flRespawnTimePenalty.m_Value != 0.0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 4784, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0.0);
      this->m_flRespawnTimePenalty.m_Value = 0.0;
    }
    goto LABEL_40;
  }
LABEL_7:
  if ( v7 )
  {
    CDOTA_BaseNPC::SetMana(this, this->m_flMaxMana.m_Value, v6);
    FindClearSpaceForUnit(this, this->m_vRespawnPosition, 1);
    goto LABEL_9;
  }
LABEL_40:
  CDOTA_BaseNPC::SetMana(this, this->m_flMaxMana.m_Value, v6);
  if ( bIsActuallyBeingSpawnedForTheFirstTime )
  {
    v89 = *CBaseEntity::GetAbsOrigin(this);
    FindClearSpaceForUnit(this, v89, 1);
  }
  else
  {
    v18 = 0;
    FindSpawnEntityForTeam(&params, this->m_iTeamNum.m_Value);
    v19 = CEntityHandle::operator CEntityInstance *(&params.ability);
    if ( v19 != 0 )
    {
      if ( dota_fountain_protection.m_pParent->m_Value.m_nValue != 0 && !bBuyBack )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(this);
        v60 = CBaseEntity::GetAbsOrigin(v19);
        v61 = v60->y - AbsOrigin->y;
        v18 = fsqrt(((v60->x - AbsOrigin->x) * (v60->x - AbsOrigin->x)) + (v61 * v61)) < 2000.0;
      }
      v20 = CBaseEntity::GetAbsOrigin(v19);
      *&params.ability.m_Index = GetPositionOnGround(v20, this);
      FindClearSpaceForUnit(this, *&params.ability.m_Index, 1);
      AbsAngles = CBaseEntity::GetAbsAngles(v19);
      CBaseEntity::SetAbsAngles(this, AbsAngles);
      v22 = (*(this->_vptr_IHandleEntity + 501))(this);
      ParticleManager = GetParticleManager();
      LODWORD(v22) = CDOTA_ParticleManager::CreateParticle(ParticleManager, v22, 1, this, 0, 0);
      v24 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v24, v22);
    }
    if ( CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value) != 0 && *&g_pGameRules[6].m_szQuestName[28] != 6 )
    {
      CResponseCriteriaSet::CResponseCriteriaSet(&params);
      v25 = CUtlString::Get(&this->m_strLastKillerAbility);
      CResponseCriteriaSet::AppendCriteria(&params, "abilityname", v25, 1.0);
      v26 = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
      v27 = (*(v26->_vptr_IHandleEntity + 140))(v26);
      v28 = 0;
      if ( v27 != 0 )
      {
        v75 = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
        v76 = operator new(0x10u);
        CDOTA_SpeechCallbackForwardToPlayersAnnouncer::CDOTA_SpeechCallbackForwardToPlayersAnnouncer(v76, v75);
        v28 = v76;
      }
      m_pSpeech = this->m_Speech.m_pSpeech;
      if ( m_pSpeech != 0 )
        CDOTA_Speech::QueueConcept(m_pSpeech, 7, 1.0, &params, !bBuyBack ? 1 : 5, 1, v28, 0, 0);
      CResponseCriteriaSet::~CResponseCriteriaSet(&params);
    }
    if ( v18 )
    {
      KeyValues::KeyValues(&kv, "modifier_fountain_invulnerability");
      CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_fountain_invulnerability", &kv, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
LABEL_9:
  CEntityKeyValues::CEntityKeyValues(&kv);
  if ( v86 > 0 )
    goto LABEL_10;
  if ( SLOWORD(kv.m_iValue) <= 0 )
  {
LABEL_107:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&kv);
    LOWORD(v62) = LOWORD(kv.m_flValue) - 1;
    if ( HIWORD(kv.m_flValue) != 0 )
    {
      v63 = &kv.0 + 4;
      if ( SHIWORD(kv.m_flValue) >= 0xA )
        v63 = *(&kv.CKeyValues_Data + 1);
    }
    else
    {
      v63 = 0;
    }
    v62 = v62;
    *&v63[4 * v62] = 1526165316;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v85);
    if ( v85.m_nAllocated != 0 )
      m_pElements = v85.m_pElements;
    else
      m_pElements = 0;
    v65 = &m_pElements[v62];
    m_flags = v65->m_value.m_flags;
    if ( (m_flags & 1) != 0 )
      v65->m_value.m_flags = m_flags & 0xFFFE;
    v65->m_value.m_uint64 = 0;
    v65->m_value.m_type = 6;
    v65->m_value.m_char = 1;
    if ( v85.m_nAllocated != 0 )
      v67 = v85.m_pElements;
    else
      v67 = 0;
    v67[v62].m_pAttributeName = 0;
  }
  else
  {
    v57 = 0;
    while ( 1 )
    {
      if ( HIWORD(kv.m_flValue) != 0 )
      {
        v58 = &kv.0 + 4;
        if ( SHIWORD(kv.m_flValue) > 9 )
          v58 = *(&kv.CKeyValues_Data + 1);
      }
      else
      {
        v58 = 0;
      }
      if ( *&v58[4 * v57] == 1526165316 )
        break;
      if ( SLOWORD(kv.m_iValue) <= ++v57 )
        goto LABEL_107;
    }
    if ( v85.m_nAllocated != 0 )
    {
      v68 = v85.m_pElements;
      v69 = v57;
      v70 = &v85.m_pElements[v69];
      if ( v85.m_pElements[v69].m_pAttributeName != 0 )
      {
LABEL_119:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v68[v69].m_pAttributeName);
        goto LABEL_10;
      }
    }
    else
    {
      v68 = 0;
      v70 = 24 * v57;
      v77 = *(&stru_10.m_Lock.gap0 + 3 * v57) == 0;
      v69 = v57;
      if ( !v77 )
        goto LABEL_119;
    }
    v78 = *(v70 + 10);
    if ( (v78 & 1) != 0 )
      *(v70 + 10) = v78 & 0xFFFE;
    *v70 = 0;
    *(v70 + 8) = 6;
    *v70 = 1;
  }
LABEL_10:
  g_bReceivedChainedSpawn = 0;
  (*(this->_vptr_IHandleEntity + 8))(this, &kv);
  g_bReceivedChainedSpawn = 0;
  v88 = *CBaseEntity::GetAbsOrigin(this);
  FindClearSpaceForUnit(this, v88, 1);
  for ( k = 0; k != 24; ++k )
  {
    if ( CDOTA_BaseNPC::GetAbilityByIndex(this, k) != 0 )
    {
      AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(this, k);
      (*(AbilityByIndex->_vptr_IHandleEntity + 207))(AbilityByIndex);
    }
  }
  for ( m = 0; m != 6; ++m )
  {
    if ( CDOTA_UnitInventory::GetItemInSlot(&this->m_Inventory, m) != 0 )
    {
      ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(&this->m_Inventory, m);
      (*(ItemInSlot->_vptr_IHandleEntity + 207))(ItemInSlot);
    }
  }
  for ( n = 0; n != 15; ++n )
  {
    if ( CDOTA_UnitInventory::GetItemInSlot(&this->m_Inventory, n) != 0 )
    {
      v14 = CDOTA_UnitInventory::GetItemInSlot(&this->m_Inventory, n);
      v15 = v14;
      if ( v14->m_bPurchasedWhileDead.m_Value )
      {
        (*(v14->_vptr_IHandleEntity + 22))(v14, 992, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v15->m_bPurchasedWhileDead.m_Value = 0;
      }
    }
  }
  (*(this->_vptr_IHandleEntity + 490))(this);
  CBaseEntity::ThinkSet(this, CDOTA_BaseNPC_Hero::PreRespawnHero, -1.0, -883079344, 0);
  v16 = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
  v17 = v16;
  if ( v16 == 0 || (*(v16->_vptr_IHandleEntity + 140))(v16) == 0 )
  {
    v17 = 0;
    if ( !bBuyBack )
      goto LABEL_26;
LABEL_56:
    CDOTA_BaseNPC_Hero::OnBuybackSpawned(this);
    goto LABEL_26;
  }
  if ( bBuyBack )
    goto LABEL_56;
LABEL_26:
  if ( v17 != 0 )
    CNetworkHandleBase<CBaseEntity,CDOTAPlayer::NetworkVar_m_hKillCamUnit>::Set(v17 + 1200, 0);
  if ( !bIsActuallyBeingSpawnedForTheFirstTime )
  {
    CModifierParams::CModifierParams(&params);
    if ( this != 0 && (m_pEntity = this->m_pEntity) != 0 )
    {
      v31 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v32 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v32 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(params.hunit.m_Index) = v32 | params.hunit.m_Index & 0x8000;
      params.hunit.m_Index = (v31 << 15) | params.hunit.m_Index & 0x7FFF;
    }
    else
    {
      params.hunit.m_Index = -1;
    }
    FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_RESPAWN, &params);
  }
  if ( this->m_iCurShop.m_Value == DOTA_SHOP_TYPE::DOTA_SHOP_HOME )
    CDOTA_UnitInventory::OnShopChange(
      &this->m_Inventory,
      DOTA_SHOP_TYPE::DOTA_SHOP_NONE,
      DOTA_SHOP_TYPE::DOTA_SHOP_HOME);
  CEntityKeyValues::~CEntityKeyValues(&kv);
}


// CDOTA_BaseNPC_Hero::OnBuybackSpawned  (line 6225, @0x000000000295caf0, libserver.so)  // inlines: CBroadcastRecipientFilter, CEntityHandle, CreateEvent, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetModifier, GetOwnerEntity, GetSerialNumber, GetSoundOverride, IndexToIdentity, Init, LookupEntity, SetEntityIndex, ToDOTAPlayer, entindex, ~CBroadcastRecipientFilter
// calls: __stack_chk_fail, CEntityInstance::GetEntityIndex, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, FindAssetModifier<CDOTA_BaseNPC, CSoundModifier>, CUtlString::Get, CRecipientFilter::AddRecipient, CRecipientFilter::RemoveRecipient, Gamerules_EmitSound, CRecipientFilter::~CRecipientFilter, _Unwind_Resume
// callers: CDOTA_BaseNPC_Hero::RespawnHero
// strings: "dota_buyback", "valve_dota_001.stinger.buy_back", "valve_dota_001.stinger.buy_back_player"
void __fastcall CDOTA_BaseNPC_Hero::OnBuybackSpawned(CDOTA_BaseNPC_Hero *const this)
{
  unsigned __int16 v2; // dx
  int v3; // esi
  uint32 v4; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  const CEntityInstance *m_pInstance; // r13
  __int64 v8; // r12
  CEntityIndex v9; // eax
  const CSoundModifier *Asset; // rax
  const char *v11; // r14
  const CSoundModifier *v12; // rax
  const char *v13; // r15
  CBroadcastRecipientFilter filter; // [rsp+10h] [rbp-2B0h] BYREF
  CRecipientFilter playerFilter; // [rsp+150h] [rbp-170h] BYREF
  unsigned __int64 v16; // [rsp+288h] [rbp-38h]

  v16 = __readfsqword(0x28u);
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
        if ( v6->m_pInstance != 0 && (*(m_pInstance->_vptr_IHandleEntity + 140))(v6->m_pInstance) != 0 )
        {
          v8 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "dota_buyback", 0, 0);
          if ( v8 != 0 )
          {
            v9.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
            (*(*v8 + 112LL))(v8, "entindex", v9.m_Data);
            (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v8, 1);
          }
          CRecipientFilter::CRecipientFilter(&filter);
          filter._vptr_IRecipientFilter = &off_3FB63F0;
          CRecipientFilter::AddAllPlayers(&filter);
          Asset = FindAssetModifier<CDOTA_BaseNPC,CSoundModifier>(this, "valve_dota_001.stinger.buy_back");
          if ( Asset != 0 )
            v11 = CUtlString::Get(&Asset->m_strModifier);
          else
            v11 = "valve_dota_001.stinger.buy_back";
          v12 = FindAssetModifier<CDOTA_BaseNPC,CSoundModifier>(this, "valve_dota_001.stinger.buy_back_player");
          if ( v12 != 0 )
            v13 = CUtlString::Get(&v12->m_strModifier);
          else
            v13 = "valve_dota_001.stinger.buy_back_player";
          CRecipientFilter::CRecipientFilter(&playerFilter);
          CRecipientFilter::AddRecipient(&playerFilter, m_pInstance);
          CRecipientFilter::RemoveRecipient(&filter, m_pInstance);
          Gamerules_EmitSound(v13, &playerFilter, 0);
          CRecipientFilter::~CRecipientFilter(&playerFilter);
          Gamerules_EmitSound(v11, &filter, 0);
          filter._vptr_IRecipientFilter = &off_3FB63F0;
          CRecipientFilter::~CRecipientFilter(&filter);
        }
      }
    }
  }
}


// CDOTA_BaseNPC_Hero::GetHealthRegen  (line 6269, @0x00000000028fba10, libserver.so)  // inlines: GetHealthRegen
// calls: CDOTA_BaseNPC::GetHealthRegen
float __fastcall CDOTA_BaseNPC_Hero::GetHealthRegen(CDOTA_BaseNPC_Hero *const this)
{
  float m_flHealthRegen; // [rsp+Ch] [rbp-14h]

  if ( this->m_bIsIllusion.m_Value )
    m_flHealthRegen = this->m_flHealthRegen;
  else
    m_flHealthRegen = CDOTA_BaseNPC::GetHealthRegen(this);
  return ((*(this->_vptr_IHandleEntity + 496))(this) * 0.029999999) + m_flHealthRegen;
}


// CDOTA_BaseNPC_Hero::GetManaRegen  (line 6278, @0x00000000028fa540, libserver.so)  // inlines: GetManaRegen, GetModifier_Constant_First, IsListeningToEvent
// calls: CDOTA_ModifierManager::GetModifier_Constant_First_Internal
float __fastcall CDOTA_BaseNPC_Hero::GetManaRegen(CDOTA_BaseNPC_Hero *const this)
{
  __int64 v2; // rax
  float result; // xmm0_4

  v2 = this->m_ModifierManager.m_buffsForModifiers[51];
  if ( v2 == 0xFF )
    return this->m_flManaRegen;
  if ( this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v2].m_Size <= 0 )
    return this->m_flManaRegen;
  result = CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
             &this->m_ModifierManager,
             modifierfunction::MODIFIER_PROPERTY_BASE_MANA_REGEN,
             &CModifierParams::s_Default);
  if ( result <= 0.0 )
    return this->m_flManaRegen;
  return result;
}


// CDOTA_BaseNPC_Hero::UpgradeAbility  (line 6290, @0x0000000002902c40, libserver.so)  // inlines: CreateEvent, DOTAGameRules, Get, GetAbilityData, GetAbilityName, GetGameTime, GetOwnerEntity, MakeStringToken, NetworkStateChanged, QueueConcept, Set, SetInt, ToDOTAPlayer, entindex, operator--, operator-=<int>
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::UpgradeAbility, CDOTA_BaseNPC::GetSpecialAbilityIndex, CDOTA_BaseNPC::AddSpecialAbility, CDOTA_BaseNPC::SetAutoStyleCriteria, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_Speech::QueueConcept, CEntityHandle::GetHandleEntity, CDOTA_PlayerResource::RecordAbilityUpgrade, CEntityInstance::GetEntityIndex, CDOTA_BaseNPC::GetAbilityByIndex (17 total)
// callers: CDOTA_Unit_Hero_Sniper::UpgradeAbility
// strings: "<NoAbilityName>", "abilityname", "dota_player_learned_ability"
void __fastcall CDOTA_BaseNPC_Hero::UpgradeAbility(CDOTA_BaseNPC_Hero *const this, CDOTABaseAbility *pAbilityParam)
{
  CDOTA_BaseNPC_Hero *Caster; // rbx
  float v5; // xmm1_4
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v7; // rsi
  const char *m_pszAbilityName; // rax
  int SpecialAbilityIndex; // eax
  DOTAAbilityData_t *v10; // rax
  const char *v11; // r13
  float m_Value; // xmm0_4
  const char *v13; // rax
  CUtlStringToken v14; // esi
  DOTAAbilityData_t *v15; // rax
  const char *v16; // rdx
  const char *v17; // rax
  float v18; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  int v20; // r15d
  int (**vptr_IHandleEntity)(...); // rax
  IHandleEntity *HandleEntity; // rax
  const CEntityInstance *v23; // r14
  DOTAAbilityData_t *v24; // rax
  int m_iAbilityID; // r15d
  int v26; // eax
  __int64 v27; // r15
  CEntityIndex v28; // eax
  const char *v29; // rdx
  DOTAAbilityData_t *v30; // rax
  const char *v31; // rax
  int i; // r12d
  CDOTABaseAbility *AbilityByIndex; // rax
  uint32 v34; // eax
  float v35; // [rsp+18h] [rbp-78h]
  int nTime; // [rsp+1Ch] [rbp-74h]
  float nTimea; // [rsp+1Ch] [rbp-74h]
  int nTimeb; // [rsp+1Ch] [rbp-74h]
  CResponseCriteriaSet criteria; // [rsp+20h] [rbp-70h] BYREF

  Caster = CDOTABaseAbility::GetCaster(pAbilityParam);
  if ( Caster == this
    && (!pAbilityParam->m_bHidden.m_Value || (*(pAbilityParam->_vptr_IHandleEntity + 218))(pAbilityParam) != 0) )
  {
    CDOTABaseAbility::UpgradeAbility(pAbilityParam, 0);
    if ( (*(pAbilityParam->_vptr_IHandleEntity + 238))(pAbilityParam) != 0 )
    {
      m_pAbilityData = pAbilityParam->m_pAbilityData;
      v7 = "<NoAbilityName>";
      if ( m_pAbilityData != 0 )
      {
        m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
        if ( m_pszAbilityName != 0 )
          v7 = m_pszAbilityName;
      }
      SpecialAbilityIndex = CDOTA_BaseNPC::GetSpecialAbilityIndex(Caster, v7);
      if ( SpecialAbilityIndex > 0 )
        CDOTA_BaseNPC::AddSpecialAbility(Caster, SpecialAbilityIndex);
    }
    v10 = pAbilityParam->m_pAbilityData;
    v11 = "<NoAbilityName>";
    m_Value = pAbilityParam->m_iLevel.m_Value;
    if ( v10 != 0 )
    {
      v13 = v10->m_pszAbilityName;
      if ( v13 != 0 )
        v11 = v13;
    }
    v14.m_nHashCode = 0;
    if ( *v11 != 0 )
    {
      nTimea = pAbilityParam->m_iLevel.m_Value;
      v34 = MurmurHash2LowerCase(v11, 0x31415926u);
      m_Value = nTimea;
      if ( g_bUpdateStringTokenDatabase )
      {
        v35 = nTimea;
        nTimeb = v34;
        RegisterStringToken(v34, v11, 0, 1);
        m_Value = v35;
        v14.m_nHashCode = nTimeb;
      }
      else
      {
        v14.m_nHashCode = v34;
      }
    }
    CDOTA_BaseNPC::SetAutoStyleCriteria(Caster, v14, m_Value, v5);
    CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
    v15 = pAbilityParam->m_pAbilityData;
    v16 = "<NoAbilityName>";
    if ( v15 != 0 )
    {
      v17 = v15->m_pszAbilityName;
      if ( v17 != 0 )
        v16 = v17;
    }
    CResponseCriteriaSet::AppendCriteria(&criteria, "abilityname", v16, 1.0);
    CResponseCriteriaSet::AppendCriteria(&criteria, "level", 1.0, v18);
    m_pSpeech = this->m_Speech.m_pSpeech;
    if ( m_pSpeech != 0 )
      CDOTA_Speech::QueueConcept(m_pSpeech, 37, 1.0, &criteria, 0, 0, 0, 0, 0);
    v20 = this->m_iAbilityPoints.m_Value - 1;
    (*(this->_vptr_IHandleEntity + 22))(Caster, 4772, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    this->m_iAbilityPoints.m_Value = v20;
    vptr_IHandleEntity[490](this);
    HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
    v23 = HandleEntity;
    if ( HandleEntity != 0 && (*(HandleEntity->_vptr_IHandleEntity + 140))(HandleEntity) != 0 )
    {
      if ( g_pGameRules != 0 )
        nTime = *&g_pGameRules[18].m_szQuestName[20];
      else
        nTime = 0;
      v24 = pAbilityParam->m_pAbilityData;
      if ( v24 == 0 )
      {
        CDOTABaseAbility::LoadAbilityData(pAbilityParam, 0);
        v24 = pAbilityParam->m_pAbilityData;
      }
      m_iAbilityID = v24->m_iAbilityID;
      v26 = (*(v23->_vptr_IHandleEntity + 393))(v23);
      CDOTA_PlayerResource::RecordAbilityUpgrade(g_pDOTAPlayerResource, v26, m_iAbilityID, nTime);
      v27 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "dota_player_learned_ability", 0, 0);
      if ( v27 != 0 )
      {
        v28.m_Data = CEntityInstance::GetEntityIndex(v23).m_Data;
        (*(*v27 + 112LL))(v27, "player", v28.m_Data);
        v29 = "<NoAbilityName>";
        v30 = pAbilityParam->m_pAbilityData;
        if ( v30 != 0 )
        {
          v31 = v30->m_pszAbilityName;
          if ( v31 != 0 )
            v29 = v31;
        }
        (*(*v27 + 136LL))(v27, "abilityname", v29);
        (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v27, 0);
      }
    }
    for ( i = 0; i != 24; ++i )
    {
      AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(Caster, i);
      if ( AbilityByIndex != 0 )
        (*(AbilityByIndex->_vptr_IHandleEntity + 288))(AbilityByIndex, AbilityByIndex);
    }
    CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
  }
}


// CDOTA_BaseNPC_Hero::Script_UpgradeAbility  (line 6353, @0x00000000028fc240, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTAAbility, ToEnt
// calls: GetScriptDesc<CEntityInstance>, __dynamic_cast
void __fastcall CDOTA_BaseNPC_Hero::Script_UpgradeAbility(CDOTA_BaseNPC_Hero *const this, HSCRIPT hAbility)
{
  void (__fastcall *v4)(CDOTA_BaseNPC_Hero *const, void *); // r14
  __int64 (__fastcall *v5)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *Script; // rax
  const void *v7; // rax
  void *v8; // rsi

  v4 = *(this->_vptr_IHandleEntity + 495);
  if ( hAbility != 0
    && (v5 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        (v7 = v5(g_pScriptVM, hAbility, Script)) != 0) )
  {
    v8 = __dynamic_cast(v7, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
  }
  else
  {
    v8 = 0;
  }
  v4(this, v8);
}


// CDOTA_BaseNPC_Hero::Buyback  (line 6358, @0x0000000002951550, libserver.so)  // inlines: DOTAGameRules, GetBuybackCost, GetGameTime
// calls: CDOTA_PlayerResource::GetBuybackCost, CDOTAGamerules::GetGameModeEntity, CDOTA_BaseNPC::SetMana, CDOTA_PlayerResource::GetReliableGold, CDOTA_PlayerResource::ModifyGold, CDOTA_BaseNPC_Hero::SetBuybackCooldownTime, CDOTA_BaseNPC_Hero::SetBuybackGoldLimitTime, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_PlayerResource::SetLastBuybackTime, SendChatEventMessage (17 total)
// callers: DOTA_ExecuteOrders, CDOTA_Bot::ConsiderBuyback, CDOTA_Bot_Script::Action_Buyback
// strings: "modifier_buyback_gold_penalty"
void __fastcall CDOTA_BaseNPC_Hero::Buyback(CDOTA_BaseNPC_Hero *const this)
{
  int v2; // r13d
  float v3; // xmm1_4
  float v4; // xmm1_4
  int BuybackCost; // r13d
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  int v9; // edx
  int ReliableGold; // eax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-28h]

  v12 = __readfsqword(0x28u);
  if ( (*(this->_vptr_IHandleEntity + 408))(this) == 0 )
  {
    v2 = (*(this->_vptr_IHandleEntity + 397))(this);
    if ( v2 >= CDOTA_PlayerResource::GetBuybackCost(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value) )
    {
      v3 = 0.0;
      if ( g_pGameRules != 0 )
        v3 = *&g_pGameRules[18].m_szQuestName[20];
      if ( this->m_fBuybackCooldown <= v3
        && !this->m_bReincarnating.m_Value
        && (g_pGameRules == 0
         || CDOTAGamerules::GetGameModeEntity(g_pGameRules) == 0
         || CDOTAGamerules::GetGameModeEntity(g_pGameRules)->m_bBuybackEnabled.m_Value) )
      {
        (*(this->_vptr_IHandleEntity + 494))(this, 1, 0, 1);
        CDOTA_BaseNPC::SetMana(this, this->m_flMaxMana.m_Value, v4);
        BuybackCost = CDOTA_PlayerResource::GetBuybackCost(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value);
        if ( CDOTA_PlayerResource::GetReliableGold(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value) <= BuybackCost )
        {
          ReliableGold = CDOTA_PlayerResource::GetReliableGold(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value);
          CDOTA_PlayerResource::ModifyGold(
            g_pDOTAPlayerResource,
            this->m_iPlayerID.m_Value,
            ReliableGold - BuybackCost,
            0,
            2);
          CDOTA_PlayerResource::SetGold(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value, 0, 1);
        }
        else
        {
          CDOTA_PlayerResource::ModifyGold(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value, -BuybackCost, 1, 2);
        }
        CDOTA_BaseNPC_Hero::SetBuybackCooldownTime(this, 0x43D20000u, v6);
        CDOTA_BaseNPC_Hero::SetBuybackGoldLimitTime(this, this->m_flTimeUntilRespawn, v7);
        KeyValues::KeyValues(&kv, "modifier_buyback_gold_penalty");
        KeyValues::SetFloat(&kv, "duration", v8);
        CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_buyback_gold_penalty", &kv, 0);
        if ( g_pGameRules != 0 )
          v9 = *&g_pGameRules[18].m_szQuestName[20];
        else
          v9 = 0;
        CDOTA_PlayerResource::SetLastBuybackTime(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value, v9);
        SendChatEventMessage(DOTA_CHAT_MESSAGE::CHAT_MESSAGE_BUYBACK, 0, this->m_iPlayerID.m_Value, 0);
        CDOTA_CombatLog::AddGameEvent(g_pDOTACombatLog, 12, this->m_iPlayerID.m_Value);
        KeyValues::~KeyValues(&kv);
      }
    }
  }
}


// CDOTA_BaseNPC_Hero::GetBuybackCost  (line 6395, @0x00000000028f68f0, libserver.so)
// calls: CDOTA_PlayerResource::GetBuybackCost
// callers: DOTA_ExecuteOrders, CDOTA_Bot::WantsToSaveForBuyback, CDOTA_Bot::ConsiderBuyback, CDOTA_BotMode_Farm::GetFarmDesire, CDOTA_Bot_Script::GetBuybackCost, CDOTA_Bot_Script::HasBuyback, CDOTAGCServerSystem::UpdateRealtimeGameState
int __fastcall CDOTA_BaseNPC_Hero::GetBuybackCost(CDOTA_BaseNPC_Hero *const this)
{
  return CDOTA_PlayerResource::GetBuybackCost(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value);
}


// CDOTA_BaseNPC_Hero::SetBuybackCooldownTime  (line 6400, @0x00000000028f6910, libserver.so)  // inlines: DOTAGameRules, GetGameMode, GetGameTime, IsAddOnGame
// calls: CDOTA_PlayerResource::SetBuybackCooldownTime, CDOTAGamerules::GetGameModeEntity, CDOTA_PlayerResource::GetCustomBuybackCooldown
// callers: CDOTA_BaseNPC_Hero::OnLoadState, CDOTA_BaseNPC_Hero::Buyback
void __fastcall CDOTA_BaseNPC_Hero::SetBuybackCooldownTime(
        CDOTA_BaseNPC_Hero *const this,
        __m128i m_fBuybackCooldown_low,
        float flTime)
{
  float v3; // xmm1_4
  CDOTAGamerules *v5; // rdi
  int m_Value; // eax
  float v7; // [rsp-14h] [rbp-1Ch]

  v3 = 0.0;
  v5 = g_pGameRules;
  if ( g_pGameRules != 0 )
    v3 = *&g_pGameRules[18].m_szQuestName[20];
  *m_fBuybackCooldown_low.m128i_i32 = *m_fBuybackCooldown_low.m128i_i32 + v3;
  LODWORD(this->m_fBuybackCooldown) = m_fBuybackCooldown_low.m128i_i32[0];
  m_Value = v5->m_iGameMode.m_Value;
  if ( m_Value == 15 || m_Value == 19 )
  {
    if ( CDOTAGamerules::GetGameModeEntity(v5)->m_bUseCustomBuybackCooldown.m_Value )
    {
      if ( g_pGameRules != 0 )
        v7 = *&g_pGameRules[18].m_szQuestName[20];
      else
        v7 = 0.0;
      *m_fBuybackCooldown_low.m128i_i32 = CDOTA_PlayerResource::GetCustomBuybackCooldown(
                                            g_pDOTAPlayerResource,
                                            this->m_iPlayerID.m_Value)
                                        + v7;
      LODWORD(this->m_fBuybackCooldown) = m_fBuybackCooldown_low.m128i_i32[0];
    }
    else
    {
      m_fBuybackCooldown_low = LODWORD(this->m_fBuybackCooldown);
    }
  }
  CDOTA_PlayerResource::SetBuybackCooldownTime(
    g_pDOTAPlayerResource,
    this->m_iPlayerID.m_Value,
    m_fBuybackCooldown_low,
    v3);
}


// CDOTA_BaseNPC_Hero::SetBuybackGoldLimitTime  (line 6412, @0x00000000028f69f0, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// calls: CDOTA_PlayerResource::SetBuybackGoldLimitTime
// callers: CDOTA_BaseNPC_Hero::OnLoadState, CDOTA_BaseNPC_Hero::Buyback
void __fastcall CDOTA_BaseNPC_Hero::SetBuybackGoldLimitTime(CDOTA_BaseNPC_Hero *const this, float a2, float flTime)
{
  float v3; // xmm1_4
  float v4; // xmm0_4
  int m_Value; // esi

  v3 = 0.0;
  if ( g_pGameRules != 0 )
    v3 = *&g_pGameRules[18].m_szQuestName[20];
  v4 = a2 + v3;
  m_Value = this->m_iPlayerID.m_Value;
  this->m_fBuybackGoldLimit = v4;
  CDOTA_PlayerResource::SetBuybackGoldLimitTime(g_pDOTAPlayerResource, m_Value, v4, v3);
}


// CDOTA_BaseNPC_Hero::CanEarnGold  (line 6419, @0x00000000028f5580, libserver.so)  // inlines: DOTAGameRules, GetBuybackGoldLimitTime, GetGameTime
bool __fastcall CDOTA_BaseNPC_Hero::CanEarnGold(CDOTA_BaseNPC_Hero *const this)
{
  float v1; // xmm1_4

  v1 = 0.0;
  if ( g_pGameRules != 0 )
    v1 = *&g_pGameRules[18].m_szQuestName[20];
  return v1 > this->m_fBuybackGoldLimit;
}


// CDOTA_BaseNPC_Hero::IsBuybackLimited  (line 6424, @0x000000000290fae0, libserver.so)  // inlines: DOTAGameRules, GetBuybackGoldLimitTime, GetGameTime
// callers: CDOTA_Modifier_Illusion::OnDeath, CDOTA_PlayerResource::ModifyGold, CDOTA_Modifier_DoomBringer_Devour::OnDestroy
bool __fastcall CDOTA_BaseNPC_Hero::IsBuybackLimited(CDOTA_BaseNPC_Hero *const this)
{
  float v1; // xmm1_4

  v1 = 0.0;
  if ( g_pGameRules != 0 )
    v1 = *&g_pGameRules[18].m_szQuestName[20];
  return this->m_fBuybackGoldLimit > v1;
}


// CDOTA_BaseNPC_Hero::GetBuybackGoldFactor  (line 6429, @0x000000000290fb10, libserver.so)
// callers: CDOTA_Modifier_Illusion::OnDeath, CDOTA_PlayerResource::ModifyGold, CDOTA_Modifier_DoomBringer_Devour::OnDestroy
float __fastcall CDOTA_BaseNPC_Hero::GetBuybackGoldFactor(CDOTA_BaseNPC_Hero *const this)
{
  return 0.40000001;
}


// CDOTA_BaseNPC_Hero::LostModifier  (line 6437, @0x0000000002949c00, libserver.so)
// calls: CDOTA_BaseNPC::LostModifier
// callers: CDOTA_Unit_Hero_Tiny::LostModifier, CDOTA_Unit_Hero_KeeperOfTheLight::LostModifier
bool __fastcall CDOTA_BaseNPC_Hero::LostModifier(CDOTA_BaseNPC_Hero *const this, CDOTA_Buff *pBuff)
{
  bool v3; // r12

  v3 = CDOTA_BaseNPC::LostModifier(this, pBuff);
  (*(this->_vptr_IHandleEntity + 490))(this);
  return v3;
}


// CDOTA_BaseNPC_Hero::GainedModifier  (line 6448, @0x0000000002949810, libserver.so)  // inlines: AddGankMusicElement, CUtlMemory, CUtlVector, CUtlVectorBase, EvaluateAndSendProbability, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, RemoveAllProbabilityElements, RemoveGankMusicElements, SendGankProbability, SendGankerProbability, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_BaseNPC::GainedModifier, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTAMusicProbabilityEntry::AddOrReplaceElement, CDOTAMusicProbabilityGank::SendProbabilityGanker, CUtlMemory<float, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_Unit_Hero_Tiny::GainedModifier, CDOTA_Unit_Hero_KeeperOfTheLight::GainedModifier
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC_Hero::GainedModifier(CDOTA_BaseNPC_Hero *const this, CDOTA_Buff *pBuff)
{
  const Vector *AbsOrigin; // rax
  float v5; // xmm1_4
  const Vector *v6; // rax
  const Vector *v7; // rax
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  __int64 v12; // r12
  int v13; // ebx
  float m_flProbability; // xmm1_4
  CHandle<CBaseEntity> *v15; // rdx
  uint32 m_Index; // eax
  __int16 v17; // cx
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CEntityInstance *m_pInstance; // rsi
  bool v21; // zf
  float flGankProbability; // [rsp+2Ch] [rbp-94h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > enemies_visible; // [rsp+30h] [rbp-90h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > enemies_hidden; // [rsp+50h] [rbp-70h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > allies; // [rsp+70h] [rbp-50h] BYREF

  CDOTA_BaseNPC::GainedModifier(this, pBuff);
  (*(this->_vptr_IHandleEntity + 490))(this);
  if ( (*(pBuff->_vptr_CDOTA_Buff + 16))(pBuff) != 0 && (this->m_nUnitState64.m_Value & 0x800) == 0 )
  {
    enemies_visible.m_Memory.m_nAllocationCount = 0;
    enemies_visible.m_Size = 0;
    enemies_visible.m_Memory.m_pMemory = 0;
    enemies_visible.m_Memory.m_nGrowSize = 0;
    enemies_hidden.m_Size = 0;
    enemies_hidden.m_Memory.m_pMemory = 0;
    enemies_hidden.m_Memory.m_nAllocationCount = 0;
    enemies_hidden.m_Memory.m_nGrowSize = 0;
    allies.m_Size = 0;
    allies.m_Memory.m_pMemory = 0;
    allies.m_Memory.m_nAllocationCount = 0;
    allies.m_Memory.m_nGrowSize = 0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    FindUnitsInRadius(this->m_iTeamNum.m_Value, AbsOrigin, this, 1300.0, &allies, 1, 1, 0x2000, 0, 0);
    CDOTAMusicProbabilityEntry::AddOrReplaceElement(&this->m_MusicProbabilityGank, 1, allies.m_Size, v5);
    v6 = CBaseEntity::GetAbsOrigin(this);
    FindUnitsInRadius(this->m_iTeamNum.m_Value, v6, this, 1200.0, &enemies_visible, 2, 1, 8320, 0, 0);
    v7 = CBaseEntity::GetAbsOrigin(this);
    FindUnitsInRadius(this->m_iTeamNum.m_Value, v7, this, 1300.0, &enemies_hidden, 2, 1, 0x2000, 0, 0);
    CDOTAMusicProbabilityEntry::AddOrReplaceElement(&this->m_MusicProbabilityGank, 0, enemies_visible.m_Size, v8);
    CDOTAMusicProbabilityEntry::AddOrReplaceElement(&this->m_MusicProbabilityGank, 3, enemies_hidden.m_Size, v9);
    v10 = (*(pBuff->_vptr_CDOTA_Buff + 31))(pBuff);
    CDOTAMusicProbabilityEntry::AddOrReplaceElement(&this->m_MusicProbabilityGank, 2, v10, v11);
    (*(this->m_MusicProbabilityGank._vptr_CDOTAMusicProbabilityEntry + 1))(&this->m_MusicProbabilityGank);
    (*(this->m_MusicProbabilityGank._vptr_CDOTAMusicProbabilityEntry + 2))(&this->m_MusicProbabilityGank, this);
    v12 = 0;
    v13 = 0;
    m_flProbability = this->m_MusicProbabilityGank.m_flProbability;
    for ( flGankProbability = m_flProbability; enemies_hidden.m_Size > v13; ++v12 )
    {
      while ( 1 )
      {
        v15 = &enemies_hidden.m_Memory.m_pMemory[v12];
        m_Index = enemies_hidden.m_Memory.m_pMemory[v12].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v17 = v15->m_Index;
          v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v15->m_Index) >> 9) & 0x3F];
          if ( v18 != 0 )
          {
            v19 = &v18[v17 & 0x1FF];
            if ( v19 != 0 && m_Index == v19->m_EHandle.m_Index )
            {
              m_pInstance = v19->m_pInstance;
              if ( v19->m_pInstance != 0
                && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
              {
                break;
              }
            }
          }
        }
        ++v13;
        ++v12;
        if ( enemies_hidden.m_Size <= v13 )
          goto LABEL_16;
      }
      CDOTAMusicProbabilityGank::SendProbabilityGanker(
        &m_pInstance[118],
        m_pInstance,
        COERCE_DOUBLE(LODWORD(flGankProbability)),
        m_flProbability);
      ++v13;
    }
LABEL_16:
    v21 = (this->m_MusicProbabilityGank.m_flProbabilityElements.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_MusicProbabilityGank.m_flProbabilityElements.m_Size = 0;
    if ( v21 )
      CUtlMemory<float,int>::Purge(&this->m_MusicProbabilityGank.m_flProbabilityElements.m_Memory);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&allies);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&enemies_hidden);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&enemies_visible);
  }
}


// ComputeUnitNameForScriptName  (line 6495, @0x00000000028f9a00, libserver.so)  // inlines: V_StripExtension<long unsigned int>, V_stristr_fast, V_strncpy<int>
// calls: _V_StripExtension, V_stristr_fast(char const*,char const*), _V_strncpy, __stack_chk_fail
// callers: DOTA_Hero_Spawn_Synchronous, DOTA_Hero_Spawn, DOTA_Hero_SpawnNoPlayer_Synchronous
// strings: "npc_"
void __fastcall ComputeUnitNameForScriptName(const char *pszScriptName, char *pUnitName, int nBufLen)
{
  __int64 v4; // rax
  char filename[520]; // [rsp+0h] [rbp-220h] BYREF
  unsigned __int64 v6; // [rsp+208h] [rbp-18h]

  v6 = __readfsqword(0x28u);
  memset(filename, 0, 0x200u);
  _V_StripExtension(pszScriptName, filename, 512);
  v4 = V_stristr_fast(filename, "npc_");
  if ( v4 != 0 )
    _V_strncpy(pUnitName, v4, 256);
}


// AddCommonHeroSpawnKeys<CDotaNPCSpawner<CDOTA_BaseNPC> >  (line 6513, @0x000000000297e620, libserver.so)  // inlines: AddKeyValue<char const*>, AddToTail, Allocate, Base, CopyData, Element, FindKeyHash, Free, GetHeroesKeyValues, IsAddOnGame, SetClassName, SetValue, SetValue<int>, V_strlen, memcpy, operator=, operator[]
// calls: CEntitySystem::FindClassByDesignName, DOTAGameManager, KeyValues::FindKey, KeyValues::GetString, CEntityKeyValues::SetValue, CEntityKeyValues::SetValue<int>, CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int>::AddToTailGetPtr, CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, strlen, CEntityVariantAllocator::Allocate, memcpy, Warning
// callers: DOTA_Hero_Spawn_Synchronous, DOTA_Hero_SpawnNoPlayer_Synchronous
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n"
void __fastcall AddCommonHeroSpawnKeys<CDotaNPCSpawner<CDOTA_BaseNPC>>(
        CDotaNPCSpawner<CDOTA_BaseNPC> *const spawner,
        const char *pszScriptName,
        int nPlayerID,
        int nTeamNumber)
{
  CEntityKeyValues *m_pEntityKeyValues; // r12
  CDOTAGameManager *v7; // rax
  KeyValues *m_pkvAddOnHeroes; // rdi
  KeyValues *Key; // rax
  const char *String; // r13
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v12; // dx
  __int64 v13; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v14; // rcx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  __int16 v17; // r14
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v18; // rax
  __int64 v19; // r15
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v20; // r14
  uint16 m_flags; // ax
  void *v22; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v23; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r12
  __int16 v27; // ax
  signed int v28; // r14d
  void *v29; // rax
  signed int v30; // [rsp+4h] [rbp-3Ch]
  int nTeamNumbera; // [rsp+8h] [rbp-38h] BYREF
  int nPlayerIDa[13]; // [rsp+Ch] [rbp-34h] BYREF

  nPlayerIDa[0] = nPlayerID;
  m_pEntityKeyValues = spawner->m_pEntityKeyValues;
  nTeamNumbera = nTeamNumber;
  if ( m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_2;
  m_nCount = m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_17:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyHashes);
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
    v17 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
    m_pElements[v17] = -971301790;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v18 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v18 = 0;
    v19 = v17;
    v20 = &v18[v19];
    m_flags = v18[v19].m_value.m_flags;
    if ( (m_flags & 1) != 0 )
      v20->m_value.m_flags = m_flags & 0xFFFE;
    v20->m_value.m_uint64 = 0;
    v20->m_value.m_type = 30;
    if ( pszScriptName != 0 )
    {
      v30 = strlen(pszScriptName) + 1;
      v22 = CEntityVariantAllocator::Allocate(v30);
      v20->m_value.m_uint64 = v22;
      memcpy(v22, pszScriptName, v30);
      v20->m_value.m_flags |= 1u;
    }
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v23 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v23 = 0;
    v23[v19].m_pAttributeName = 0;
  }
  else
  {
    v12 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v13 = 0;
    while ( 1 )
    {
      if ( v12 != 0 )
      {
        v14 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v12 > 9 )
          v14 = m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v14 = 0;
      }
      if ( v14[v13] == -971301790 )
        break;
      if ( m_nCount <= ++v13 )
        goto LABEL_17;
    }
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v24 = m_pEntityKeyValues->m_keyValues.m_pElements;
      v25 = v13;
      if ( v24[v25].m_pAttributeName != 0 )
      {
LABEL_31:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v24[v25].m_pAttributeName);
        goto LABEL_2;
      }
      v26 = &v24[v25];
    }
    else
    {
      v25 = v13;
      v24 = 0;
      v26 = v25 * 24;
      if ( *(v25 * 24 + 16) != 0 )
        goto LABEL_31;
    }
    v27 = *(v26 + 10);
    if ( (v27 & 1) != 0 )
      *(v26 + 10) = v27 & 0xFFFE;
    *v26 = 0;
    *(v26 + 8) = 30;
    if ( pszScriptName != 0 )
    {
      v28 = strlen(pszScriptName) + 1;
      v29 = CEntityVariantAllocator::Allocate(v28);
      *v26 = v29;
      memcpy(v29, pszScriptName, v28);
      *(v26 + 10) |= 1u;
    }
  }
LABEL_2:
  spawner->m_pEntityClass = CEntitySystem::FindClassByDesignName(
                              g_pEntitySystem,
                              pszScriptName,
                              &spawner->m_scriptClassName);
  v7 = DOTAGameManager();
  if ( v7->m_bCustomGame || v7->m_bEventGame )
    m_pkvAddOnHeroes = v7->m_pkvAddOnHeroes;
  else
    m_pkvAddOnHeroes = v7->m_pkvHeroes;
  Key = KeyValues::FindKey(m_pkvAddOnHeroes, pszScriptName, 0);
  if ( Key != 0 )
  {
    String = KeyValues::GetString(Key, "BaseClass", pszScriptName, 0, 0);
    CEntityKeyValues::SetValue(spawner->m_pEntityKeyValues, -971301790, String);
    spawner->m_pEntityClass = CEntitySystem::FindClassByDesignName(g_pEntitySystem, String, &spawner->m_scriptClassName);
  }
  CEntityKeyValues::SetValue<int>(spawner->m_pEntityKeyValues, 2034954718, nPlayerIDa);
  CEntityKeyValues::SetValue<int>(spawner->m_pEntityKeyValues, -175874245, &nTeamNumbera);
}


// AddCommonHeroSpawnKeys<CDotaNPCSpawnerAsync<CDOTA_BaseNPC> >  (line 6513, @0x000000000297e940, libserver.so)  // inlines: AddKeyValue<char const*>, AddToTail, Allocate, Base, CopyData, Element, FindKeyHash, Free, GetHeroesKeyValues, IsAddOnGame, SetClassName, SetValue, SetValue<int>, V_strlen, memcpy, operator=, operator[]
// calls: CEntitySystem::FindClassByDesignName, DOTAGameManager, KeyValues::FindKey, KeyValues::GetString, CEntityKeyValues::SetValue, CEntityKeyValues::SetValue<int>, CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int>::AddToTailGetPtr, CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, strlen, CEntityVariantAllocator::Allocate, memcpy, Warning
// callers: DOTA_Hero_Spawn
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n"
void __fastcall AddCommonHeroSpawnKeys<CDotaNPCSpawnerAsync<CDOTA_BaseNPC>>(
        CDotaNPCSpawnerAsync<CDOTA_BaseNPC> *const spawner,
        const char *pszScriptName,
        int nPlayerID,
        int nTeamNumber)
{
  CEntityKeyValues *m_pEntityKeyValues; // r12
  CDOTAGameManager *v7; // rax
  KeyValues *m_pkvAddOnHeroes; // rdi
  KeyValues *Key; // rax
  const char *String; // r13
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v12; // dx
  __int64 v13; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v14; // rcx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  __int16 v17; // r14
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v18; // rax
  __int64 v19; // r15
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v20; // r14
  uint16 m_flags; // ax
  void *v22; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v23; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r12
  __int16 v27; // ax
  signed int v28; // r14d
  void *v29; // rax
  signed int v30; // [rsp+4h] [rbp-3Ch]
  int nTeamNumbera; // [rsp+8h] [rbp-38h] BYREF
  int nPlayerIDa[13]; // [rsp+Ch] [rbp-34h] BYREF

  nPlayerIDa[0] = nPlayerID;
  m_pEntityKeyValues = spawner->m_pEntityKeyValues;
  nTeamNumbera = nTeamNumber;
  if ( m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_2;
  m_nCount = m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_17:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyHashes);
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
    v17 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
    m_pElements[v17] = -971301790;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v18 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v18 = 0;
    v19 = v17;
    v20 = &v18[v19];
    m_flags = v18[v19].m_value.m_flags;
    if ( (m_flags & 1) != 0 )
      v20->m_value.m_flags = m_flags & 0xFFFE;
    v20->m_value.m_uint64 = 0;
    v20->m_value.m_type = 30;
    if ( pszScriptName != 0 )
    {
      v30 = strlen(pszScriptName) + 1;
      v22 = CEntityVariantAllocator::Allocate(v30);
      v20->m_value.m_uint64 = v22;
      memcpy(v22, pszScriptName, v30);
      v20->m_value.m_flags |= 1u;
    }
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v23 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v23 = 0;
    v23[v19].m_pAttributeName = 0;
  }
  else
  {
    v12 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v13 = 0;
    while ( 1 )
    {
      if ( v12 != 0 )
      {
        v14 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v12 > 9 )
          v14 = m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v14 = 0;
      }
      if ( v14[v13] == -971301790 )
        break;
      if ( m_nCount <= ++v13 )
        goto LABEL_17;
    }
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v24 = m_pEntityKeyValues->m_keyValues.m_pElements;
      v25 = v13;
      if ( v24[v25].m_pAttributeName != 0 )
      {
LABEL_31:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v24[v25].m_pAttributeName);
        goto LABEL_2;
      }
      v26 = &v24[v25];
    }
    else
    {
      v25 = v13;
      v24 = 0;
      v26 = v25 * 24;
      if ( *(v25 * 24 + 16) != 0 )
        goto LABEL_31;
    }
    v27 = *(v26 + 10);
    if ( (v27 & 1) != 0 )
      *(v26 + 10) = v27 & 0xFFFE;
    *v26 = 0;
    *(v26 + 8) = 30;
    if ( pszScriptName != 0 )
    {
      v28 = strlen(pszScriptName) + 1;
      v29 = CEntityVariantAllocator::Allocate(v28);
      *v26 = v29;
      memcpy(v29, pszScriptName, v28);
      *(v26 + 10) |= 1u;
    }
  }
LABEL_2:
  spawner->m_pEntityClass = CEntitySystem::FindClassByDesignName(
                              g_pEntitySystem,
                              pszScriptName,
                              &spawner->m_scriptClassName);
  v7 = DOTAGameManager();
  if ( v7->m_bCustomGame || v7->m_bEventGame )
    m_pkvAddOnHeroes = v7->m_pkvAddOnHeroes;
  else
    m_pkvAddOnHeroes = v7->m_pkvHeroes;
  Key = KeyValues::FindKey(m_pkvAddOnHeroes, pszScriptName, 0);
  if ( Key != 0 )
  {
    String = KeyValues::GetString(Key, "BaseClass", pszScriptName, 0, 0);
    CEntityKeyValues::SetValue(spawner->m_pEntityKeyValues, -971301790, String);
    spawner->m_pEntityClass = CEntitySystem::FindClassByDesignName(g_pEntitySystem, String, &spawner->m_scriptClassName);
  }
  CEntityKeyValues::SetValue<int>(spawner->m_pEntityKeyValues, 2034954718, nPlayerIDa);
  CEntityKeyValues::SetValue<int>(spawner->m_pEntityKeyValues, -175874245, &nTeamNumbera);
}


// OnHeroSpawned  (line 6526, @0x0000000002945a90, libserver.so)  // inlines: DOTAGameRules, FStrEq, Get, GetAbilityName, GetGameMode, GetInstance, GetTeamNumber, GetUnitName, NetworkStateChanged, Set, SetPlayerID, String, ToCStr, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, _V_strcmp, operator CBaseEntity*, operator=<int>
// calls: CDOTA_PlayerResource::GetPlayer, CDOTAPlayer::CheckForSpawningFreeCourier, CDOTA_BaseNPC::SetControllableByPlayer, FindSpawnEntityForTeam, CEntityHandle::operator CEntityInstance*, FindClearSpaceForUnitAroundEntity, CBaseEntity::GetAbsAngles, CBaseEntity::SetAbsAngles, CDOTA_PlayerResource::SetSelectedHero, CDOTA_UnitInventory::GetItemInSlot, CDOTABaseAbility::CastAbility, DOTACommander (17 total)
// callers: DOTA_Hero_SpawnNoPlayer_Synchronous, OnHeroSpawnedCompletion
// strings: "item_courier"
void __fastcall OnHeroSpawned(CDOTA_BaseNPC *pHero, int nPlayerID)
{
  CDOTAPlayer *Player; // rax
  CDOTAPlayer *v5; // r12
  CBaseEntity *v6; // rax
  const CBaseEntity *v7; // r12
  const QAngle *AbsAngles; // rax
  const char *m_pAsString; // rdx
  int i; // ebx
  CDOTA_Item *ItemInSlot; // rax
  const char **p_m_pszAbilityName; // rdx
  const char *v13; // rsi
  CDOTA_Commander *v14; // rax
  CEntityHandle v15; // [rsp+0h] [rbp-40h] BYREF

  if ( pHero != 0 && pHero->m_bIsDOTANPC && (pHero->m_iUnitType & 1) != 0 && !pHero->m_bIsIllusion.m_Value )
  {
    Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, nPlayerID);
    v5 = Player;
    if ( Player != 0 )
    {
      if ( !pHero->m_bIsIllusion.m_Value )
        CDOTAPlayer::SetAssignedHero(Player, pHero);
      (*(pHero->_vptr_IHandleEntity + 40))(pHero, v5);
      CDOTAPlayer::CheckForSpawningFreeCourier(v5);
    }
    else if ( CDOTAGamerules::CheckReconnectAssignHero(g_pGameRules, pHero, nPlayerID) )
    {
      CDOTA_BaseNPC_Hero::CheckForCourierOrWardChange(pHero);
    }
    CDOTA_BaseNPC::SetControllableByPlayer(pHero, nPlayerID, 0);
    if ( nPlayerID != LODWORD(pHero[1].m_pfnBlocked.__delta) )
    {
      (*(pHero->_vptr_IHandleEntity + 22))(pHero, 4800, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      LODWORD(pHero[1].m_pfnBlocked.__delta) = nPlayerID;
    }
    FindSpawnEntityForTeam(&v15, pHero->m_iTeamNum.m_Value);
    v6 = CEntityHandle::operator CEntityInstance *(&v15);
    v7 = v6;
    if ( v6 != 0 )
    {
      FindClearSpaceForUnitAroundEntity(v6, pHero);
      AbsAngles = CBaseEntity::GetAbsAngles(v7);
      CBaseEntity::SetAbsAngles(pHero, AbsAngles);
    }
    m_pAsString = "";
    if ( pHero->m_iszUnitName.m_Value.u.m_Id != 0 )
      m_pAsString = pHero->m_iszUnitName.m_Value.u.m_pAsString;
    CDOTA_PlayerResource::SetSelectedHero(g_pDOTAPlayerResource, nPlayerID, m_pAsString, pHero);
    if ( *&g_pGameRules[6].m_szQuestName[68] == 18 )
      CDOTA_BaseNPC::CreateAbilities(pHero, 1);
    for ( i = 0; i != 17; ++i )
    {
      ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(&pHero->m_Inventory, i);
      if ( ItemInSlot != 0 )
      {
        p_m_pszAbilityName = &ItemInSlot->m_pAbilityData->m_pszAbilityName;
        if ( p_m_pszAbilityName != 0 )
        {
          v13 = *p_m_pszAbilityName;
          if ( *p_m_pszAbilityName != 0 && (v13 == "item_courier" || strcmp(v13, "item_courier") == 0) )
            CDOTABaseAbility::CastAbility(ItemInSlot);
        }
      }
    }
    v14 = DOTACommander();
    CDOTA_Commander::RegisterUnit(v14, pHero);
  }
}


// DOTA_Hero_SpawnNoPlayer_Synchronous  (line 6581, @0x0000000002945ca0, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddNPCKeyValuesForUnit, ApplyContextKeys, CDotaNPCSpawner, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CUtlString, CVProfScope, ComputeUnitNameForScriptName, GetClassInfo, GetEHandle, GetEntityClass, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, Init, InvokeCallbacks, IsEmpty, IsEnabled, LookupEntity, OverrideAllocator, Set, SetValue, Spawn, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator!, operator(), operator=, ~CDotaNPCSpawner, ~CEntitySpawner, ~CVProfScope
// calls: CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::SetValue, AppendNPCKeyValues, CEntityKeyValues::CopyFrom, AddCommonHeroSpawnKeys<CDotaNPCSpawner<CDOTA_BaseNPC> >, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get, CEntitySystem::CreateEntity, CEntitySystem::QueueSpawnEntity (20 total)
// callers: CDOTA_PlayerResource::ReplaceHeroWith
// strings: "Server Simulation", "Spawn"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride, CEntityHandle::gm_pEntityList
CDOTA_BaseNPC *__fastcall DOTA_Hero_SpawnNoPlayer_Synchronous(
        const char *pszScriptName,
        int nPlayerID,
        int nTeamNumber)
{
  bool v4; // zf
  CEntitySystem *v6; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v8; // rdx
  char v9; // al
  CEntitySpawnerContext<CDOTA_BaseNPC> *i; // rbx
  CEntityKeyValues *m_pEntityKeyValues; // rdi
  int m_enabled; // ebx
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v14; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v16; // r14
  CEntityIdentity *m_pEntity; // rax
  __int16 v18; // si
  CEntitySpawnerContext<CDOTA_BaseNPC> *m_pContext; // rbx
  CEntityKeyValues *j; // r13
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v23; // rdi
  CEntityIdentity *v24; // rax
  CDOTA_BaseNPC *v25; // rbx
  CEntityIdentity *v26; // rax
  const char *m_pszClassname; // rdx
  CDOTA_BaseNPC *m_pInstance; // rax
  bool nTeamNumberb; // [rsp+1Ch] [rbp-204h]
  int v32; // [rsp+20h] [rbp-200h]
  _QWORD v33[2]; // [rsp+30h] [rbp-1F0h] BYREF
  CDotaNPCSpawner<CDOTA_BaseNPC> spawner; // [rsp+40h] [rbp-1E0h] BYREF
  char szUnitName[264]; // [rsp+E0h] [rbp-140h] BYREF
  unsigned __int64 v36; // [rsp+1E8h] [rbp-38h]

  v36 = __readfsqword(0x28u);
  if ( pszScriptName == 0 )
    return 0;
  v4 = *pszScriptName == 0;
  szUnitName[0] = 0;
  if ( !v4 )
    ComputeUnitNameForScriptName(pszScriptName, szUnitName, nTeamNumber);
  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner._vptr_CEntitySpawnerBase = off_40FC030;
  spawner.m_scriptClassName.m_pString = 0;
  spawner.m_pContext = 0;
  spawner.m_pSpawnBatch = 0;
  v6 = g_pEntitySystem;
  spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v6->m_entitySpawnerData;
  spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v6);
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  v8 = *&SpawnOriginOffset->m_flMatVal[0][2];
  spawner.m_pEntityKeyValues = 0;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v8;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
  spawner.m_pEntityClass = g_pEntityCDOTA_BaseNPCClass;
  if ( g_pApplication != 0 )
    v9 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v9 = 0;
  spawner.m_bValidateKeys = v9;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  spawner._vptr_CEntitySpawnerBase = off_40FC050;
  CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -782893907, szUnitName);
  AppendNPCKeyValues(szUnitName, spawner.m_pEntityKeyValues, 0);
  for ( i = spawner.m_pContext; i != 0; i = i->m_pParent )
    CEntityKeyValues::CopyFrom(spawner.m_pEntityKeyValues, &i->m_entityKeyValues, 0);
  AddCommonHeroSpawnKeys<CDotaNPCSpawner<CDOTA_BaseNPC>>(&spawner, pszScriptName, nPlayerID, nTeamNumber);
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  v32 = -1;
  if ( spawner.m_pEntityKeyValues == 0 )
    goto LABEL_36;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  nTeamNumberb = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    CVProfile::EnterScope(&g_VProfCurrentProfile, "Spawn", 0, "Server Simulation", 0, 4);
    m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  }
  if ( !CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790) )
  {
    m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
    if ( m_pszClassname != 0 )
      CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
  }
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  m_nMode = spawner.m_nMode;
  v14 = CUtlString::Get(&spawner.m_scriptClassName);
  Entity = CEntitySystem::CreateEntity(
             g_pEntitySystem,
             spawner.m_hSpawnGroupHandle,
             spawner.m_pEntityClass,
             v14,
             m_nMode,
             -1,
             -1,
             0,
             0);
  v16 = Entity;
  if ( Entity != 0 )
  {
    m_pEntity = Entity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v18 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v32 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v18 & 0x7FFF;
    }
    v33[0] = m_pEntity;
    v33[1] = spawner.m_pEntityKeyValues;
    (*(*g_pGameResourceService + 280LL))(
      g_pGameResourceService,
      spawner.m_hSpawnGroupHandle,
      1,
      v33,
      &spawner.m_mSpawnGroupToWorld);
    CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v16, spawner.m_pEntityKeyValues);
    if ( spawner.m_pSpawnBatch == 0 )
      CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
    m_pContext = spawner.m_pContext;
    for ( j = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
    {
      m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
      pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
      if ( m_pthis != 0 || pfn != 0 )
      {
        v23 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
        if ( (pfn & 1) != 0 )
          pfn = *(pfn + *v23 - 1);
        (pfn)(v23, v16, j);
      }
    }
  }
  if ( nTeamNumberb )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  if ( (v32 + 2) > 1 && (v24 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v32 >> 9) & 0x3F]) != 0 )
  {
    v25 = 0;
    v26 = &v24[v32 & 0x1FF];
    if ( v26 != 0 && v32 == v26->m_EHandle.m_Index )
    {
      m_pInstance = v26->m_pInstance;
      if ( m_pInstance != 0
        && m_pInstance->m_bIsDOTANPC
        && (m_pInstance->m_iUnitType & 1) != 0
        && !m_pInstance->m_bIsIllusion.m_Value )
      {
        v25 = m_pInstance;
      }
    }
  }
  else
  {
LABEL_36:
    v25 = 0;
  }
  OnHeroSpawned(v25, nPlayerID);
  spawner._vptr_CEntitySpawnerBase = off_40FC030;
  CEntitySpawnerBase<CDOTA_BaseNPC>::~CEntitySpawnerBase(&spawner);
  return v25;
}


// OnHeroSpawnedCompletion  (line 6597, @0x0000000002946260, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, Get<int>, GetValue, GetValue<int>, Min<long long unsigned int>, Min<unsigned int>, atoi, operator[]
// calls: OnHeroSpawned, strtol, VariantFieldTypeName, Warning
// strings: "No conversion from %s to int now\n"
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_2946306
void __fastcall OnHeroSpawnedCompletion(CDOTA_BaseNPC *pHero, const CEntityKeyValues *pKeyValues)
{
  int m_nCount; // r8d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v5; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v7; // rdx
  CEntityVariant *p_m_value; // rcx
  int16 m_type; // ax
  uint64 m_uint64; // rsi
  int v11; // eax
  const char *v12; // rax

  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_12:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_13;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v5 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v5) == 2034954718 )
      goto LABEL_9;
LABEL_6:
    if ( m_nCount <= ++v5 )
      goto LABEL_12;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v5] != 2034954718 )
    goto LABEL_6;
LABEL_9:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v7 = pKeyValues->m_keyValues.m_pElements;
  else
    v7 = 0;
  p_m_value = &v7[v5].m_value;
LABEL_13:
  m_type = p_m_value->m_type;
  switch ( m_type )
  {
    case 0:
      LODWORD(m_uint64) = 0;
      goto LABEL_30;
    case 1:
      OnHeroSpawned(pHero, p_m_value->m_float);
      return;
    case 5:
      OnHeroSpawned(pHero, p_m_value->m_int);
      return;
    case 6:
      OnHeroSpawned(pHero, p_m_value->m_char);
      return;
    case 26:
      LODWORD(m_uint64) = 0x7FFFFFFF;
      if ( p_m_value->m_int64 <= 0x7FFFFFFF )
      {
        LODWORD(m_uint64) = 0x80000000;
        if ( p_m_value->m_uint64 >= 0xFFFFFFFF80000000LL )
          m_uint64 = p_m_value->m_uint64;
      }
      goto LABEL_30;
    case 30:
      v11 = strtol(p_m_value->m_pszString, 0, 10);
      OnHeroSpawned(pHero, v11);
      return;
    case 33:
      LODWORD(m_uint64) = 0x7FFFFFFF;
      if ( p_m_value->m_uint64 <= 0x7FFFFFFE )
        LODWORD(m_uint64) = p_m_value->m_uint64;
      goto LABEL_30;
    case 34:
      OnHeroSpawned(pHero, p_m_value->m_float64);
      return;
    case 37:
      LODWORD(m_uint64) = 0x7FFFFFFF;
      if ( p_m_value->m_int <= 0x7FFFFFFEu )
        LODWORD(m_uint64) = p_m_value->m_int;
LABEL_30:
      OnHeroSpawned(pHero, m_uint64);
      break;
    default:
      v12 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to int now\n", v12);
      OnHeroSpawned(pHero, 0);
      break;
  }
}


// DOTA_Hero_Spawn  (line 6606, @0x00000000029448d0, libserver.so)  // inlines: AddNPCKeyValuesForUnit, ApplyContextKeys, Bind, CDotaNPCSpawnerAsync, CDotaNPCSpawnerContext, CEntityKeyValuesModifyScope, CEntitySpawnerAsync, CEntitySpawnerAsyncBase, CEntitySpawnerBase, CEntitySpawnerContext, CEntitySpawnerContextBase, CEntitySpawnerContextModifyScope, CUtlAbstractDelegate, CUtlDelegate, CUtlString, ClosurePtr, ComputeUnitNameForScriptName, Convert<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const, void (detail::GenericClass::*)()>, CopyFrom<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void> >, EntitySpawnerAsyncDesc_t, FastDelegate2, OverrideAllocator, Release, ReleaseEntitySpawnerEntityVariantAllocator, SetMementoFrom, SetValue, SetValue<int>, Spawn, UtlMakeDelegate<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, bindmemfunc<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const>, bindstaticfunc<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>, void (FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)const>, ~CDotaNPCSpawnerAsync, ~CDotaNPCSpawnerContext, ~CEntityKeyValuesModifyScope, ~CEntitySpawnerAsync, ~CEntitySpawnerAsyncBase, ~CEntitySpawnerBase, ~CEntitySpawnerContext, ~CEntitySpawnerContextBase, ~CEntitySpawnerContextModifyScope, ~CUtlString
// calls: ComputeUnitNameForScriptName, CDOTA_PlayerResource::GetHeroSpawnGroup, CDOTA_PlayerResource::SetSelectedHeroID, CEntityKeyValues::CEntityKeyValues, CEntityKeyValuesModifyScope::BeginModify, CEntityKeyValues::SetValue<int>, CEntityKeyValuesModifyScope::Release, CEntitySpawnerAsync<CDOTA_BaseNPC>::Init, CEntityKeyValues::SetValue, AppendNPCKeyValues, CEntityKeyValues::CopyFrom, AddCommonHeroSpawnKeys<CDotaNPCSpawnerAsync<CDOTA_BaseNPC> > (22 total)
// callers: CDOTAGamerules::SpawnPlayerHeroes, CDOTA_PlayerResource::ReplaceHeroWith, DOTA_Hero_Spawn
// strings: "DOTA_Hero_Spawn called when player already has a spawngroup!\n"
// globals: FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction(CDOTA_BaseNPC *,CEntityKeyValues const*), OnHeroSpawnedCompletion(CDOTA_BaseNPC *,CEntityKeyValues const*), CEntityKeyValuesModifyScope::sm_pAllocatorOverride
SpawnGroupHandle_t __fastcall DOTA_Hero_Spawn(
        const char *pszScriptName,
        int nPlayerID,
        int nTeamNumber,
        CDotaNPCSpawnerContext *pContext)
{
  SpawnGroupHandle_t result; // eax
  SpawnGroupHandle_t v8; // r14d
  CEntityKeyValues *i; // r14
  CUtlScratchMemoryPool *v10; // rdi
  SpawnGroupHandle_t v11; // r14d
  CUtlScratchMemoryPool *m_pPrevAllocator; // rbx
  int nPlayerIDa; // [rsp+Ch] [rbp-2E4h] BYREF
  __int64 v16[4]; // [rsp+10h] [rbp-2E0h] BYREF
  EntitySpawnerAsyncDesc_t<CDOTA_BaseNPC> desc; // [rsp+30h] [rbp-2C0h] BYREF
  CDotaNPCSpawnerContextModifyScope sg; // [rsp+60h] [rbp-290h] BYREF
  __int64 v19; // [rsp+78h] [rbp-278h]
  CUtlString v20; // [rsp+88h] [rbp-268h] BYREF
  SpawnGroupHandle_t h; // [rsp+94h] [rbp-25Ch]
  CUtlScratchMemoryPool *v22; // [rsp+D8h] [rbp-218h]
  CEntityKeyValues *pOther; // [rsp+E0h] [rbp-210h]
  __int64 v24; // [rsp+100h] [rbp-1F0h]
  CEntityKeyValues pKeyValues; // [rsp+110h] [rbp-1E0h] BYREF
  CDotaNPCSpawnerContext *pContexta; // [rsp+180h] [rbp-170h]
  __int64 v27; // [rsp+188h] [rbp-168h]
  void (__fastcall *v28)(CDOTA_BaseNPC *, const CEntityKeyValues *); // [rsp+190h] [rbp-160h]
  void (__fastcall *v29)(const FastDelegate2<CDOTA_BaseNPC*,const CEntityKeyValues*,void> *const, CDOTA_BaseNPC *, const CEntityKeyValues *); // [rsp+198h] [rbp-158h]
  __int64 v30; // [rsp+1A0h] [rbp-150h]
  char szUnitName[264]; // [rsp+1B0h] [rbp-140h] BYREF
  unsigned __int64 v32; // [rsp+2B8h] [rbp-38h]

  nPlayerIDa = nPlayerID;
  v32 = __readfsqword(0x28u);
  result = 0;
  szUnitName[0] = 0;
  if ( pszScriptName == 0 )
    return 0;
  if ( *pszScriptName != 0 )
  {
    ComputeUnitNameForScriptName(pszScriptName, szUnitName, nTeamNumber);
    result = 0;
    if ( szUnitName[0] != 0 )
    {
      if ( CDOTA_PlayerResource::GetHeroSpawnGroup(g_pDOTAPlayerResource, nPlayerIDa) != 0 )
      {
        Msg("DOTA_Hero_Spawn called when player already has a spawngroup!\n");
        return CDOTA_PlayerResource::GetHeroSpawnGroup(g_pDOTAPlayerResource, nPlayerIDa);
      }
      else
      {
        v8 = *(&g_pGameRules[115].m_nQuestPhase + 1);
        if ( v8 == 0 )
          v8 = -1;
        CDOTA_PlayerResource::SetSelectedHeroID(g_pDOTAPlayerResource, nPlayerIDa, pszScriptName);
        CEntityKeyValues::CEntityKeyValues(&pKeyValues);
        pContexta = pContext;
        v27 = 0;
        memset(&sg, 0, sizeof(sg));
        v29 = FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction;
        v30 = 0;
        v28 = OnHeroSpawnedCompletion;
        CEntityKeyValuesModifyScope::BeginModify(&sg.m_sg, &pKeyValues);
        sg.m_pContext = &pKeyValues;
        CEntityKeyValues::SetValue<int>(&pKeyValues, 2034954718, &nPlayerIDa);
        CEntityKeyValuesModifyScope::Release(&sg.m_sg);
        desc.m_behavior = EntitySpawnerAsyncBehavior_t::ENTITY_SPAWNER_ASYNC_ADD_TO_ACTIVE_SPAWN_GROUP;
        desc.m_pSpawnGroupToWorld = 0;
        desc.m_nManifestPriority = ResourceManifestLoadPriority_t::RESOURCE_MANIFEST_LOAD_PRIORITY_DEFAULT;
        desc.m_iPriorityLoader = -2;
        desc.m_bManualCompletion = 0;
        desc.m_worldGroupId.m_nHashCode = 0;
        desc.m_hOwnerSpawnGroup = v8;
        desc.m_flTimeoutInterval = 2.5;
        desc.m_pContext = &pKeyValues;
        sg.m_sg.m_pKeyValues = off_40FBED0;
        sg.m_pContext = 0;
        v19 = 0;
        CEntityKeyValuesModifyScope::BeginModify(&sg.m_pContext, 0);
        pOther = &pKeyValues;
        v20.m_pString = 0;
        v24 = 0;
        sg.m_sg.m_pKeyValues = off_40FBF10;
        CEntitySpawnerAsync<CDOTA_BaseNPC>::Init(&sg, &desc);
        sg.m_sg.m_pKeyValues = off_40FBF30;
        CEntityKeyValues::SetValue(sg.m_sg.m_pPrevAllocator, -782893907, szUnitName);
        AppendNPCKeyValues(szUnitName, sg.m_sg.m_pPrevAllocator, 0);
        for ( i = pOther; i != 0; i = *&i[1].m_keyHashes.m_nCount )
          CEntityKeyValues::CopyFrom(sg.m_sg.m_pPrevAllocator, i, 0);
        AddCommonHeroSpawnKeys<CDotaNPCSpawnerAsync<CDOTA_BaseNPC>>(&sg, pszScriptName, nPlayerIDa, nTeamNumber);
        memset(v16, 0, 24);
        CEntitySpawnerAsyncBase<CDOTA_BaseNPC>::SpawnInternal(&sg, 0, v16);
        CDOTA_PlayerResource::SetHeroSpawnGroup(g_pDOTAPlayerResource, nPlayerIDa, h);
        v10 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
        sg.m_sg.m_pKeyValues = off_40FBED0;
        v11 = h;
        CEntityKeyValuesModifyScope::sm_pAllocatorOverride = v22;
        if ( v10 == &g_pEntitySystem->m_entitySpawnerData && g_pEntitySystem->m_nEntitySpawnerDataUseCount-- == 1 )
          CUtlScratchMemoryPool::FreeAll(v10);
        if ( sg.m_sg.m_pPrevAllocator != 0 )
        {
          CEntityKeyValuesModifyScope::Release(&sg.m_pContext);
          m_pPrevAllocator = sg.m_sg.m_pPrevAllocator;
          if ( --LOWORD(sg.m_sg.m_pPrevAllocator[5].m_pFirstBlock) <= 0 )
          {
            CEntityKeyValues::~CEntityKeyValues(m_pPrevAllocator);
            operator delete(m_pPrevAllocator);
          }
        }
        if ( v20.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&v20);
        CEntityKeyValuesModifyScope::Release(&sg.m_pContext);
        CEntityKeyValues::~CEntityKeyValues(&pKeyValues);
        return v11;
      }
    }
  }
  return result;
}


// DOTA_Hero_Spawn  (line 6650, @0x0000000002944d60, libserver.so)  // inlines: GetTeamNumber
// calls: DOTA_Hero_Spawn
// callers: CDOTAGamerules::PlayerSpawn, CDOTAGamerules::HeroPickState_Think_AP_SELECT, CDOTAGamerules::HeroPickState_Think_CUSTOMGAME_SELECT, CDOTA_Hero_Recorder::SetHeroClass, CDOTA_Tutorial::SelectHero, CDOTA_Tutorial::AddBot, CDOTA_Tutorial::AddHeroAndBotController, CDOTA_Tutorial::AddBotWithSettings, CDOTA_Grinder::FrameUpdateHeroes, DebugCreateUnit, CDOTA_TeamCommander::SelectHero, Playtesting_ChangeToRandomHero
SpawnGroupHandle_t __fastcall DOTA_Hero_Spawn(
        const char *pszScriptName,
        CDOTAPlayer *pPlayer,
        CDotaNPCSpawnerContext *pContext)
{
  int m_Value; // r12d
  int v6; // eax

  m_Value = pPlayer->m_iTeamNum.m_Value;
  v6 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
  return DOTA_Hero_Spawn(pszScriptName, v6, m_Value, pContext);
}


// DOTA_Hero_Spawn_Synchronous  (line 6655, @0x0000000002923540, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddNPCKeyValuesForUnit, ApplyContextKeys, CDotaNPCSpawner, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CUtlString, CVProfScope, ComputeUnitNameForScriptName, Get, GetClassInfo, GetEHandle, GetEntityClass, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, Init, InvokeCallbacks, IsEmpty, IsEnabled, OverrideAllocator, Set, SetValue, Spawn, operator CDOTA_BaseNPC*, operator!, operator(), operator=, ~CDotaNPCSpawner, ~CEntitySpawner, ~CVProfScope
// calls: ComputeUnitNameForScriptName, CDOTA_PlayerResource::SetSelectedHeroID, CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::SetValue, AppendNPCKeyValues, CEntityKeyValues::CopyFrom, AddCommonHeroSpawnKeys<CDotaNPCSpawner<CDOTA_BaseNPC> >, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get (21 total)
// callers: CDOTA_PlayerResource::LoadSaveGameInformation, CDOTA_Tutorial::ChangeHero, DOTA_VScript_Hero_Spawn
// strings: "Server Simulation", "Spawn"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
CDOTA_BaseNPC *__fastcall DOTA_Hero_Spawn_Synchronous(const char *pszScriptName, CDOTAPlayer *pPlayer)
{
  int v2; // edx
  int v6; // eax
  CEntitySystem *v7; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v9; // rdx
  char v10; // al
  CEntitySpawnerContext<CDOTA_BaseNPC> *i; // r13
  int m_Value; // r13d
  int v13; // eax
  CEntityKeyValues *m_pEntityKeyValues; // rdi
  int m_enabled; // r8d
  bool v16; // r15
  const char *m_pszClassname; // rdx
  EntityNetworkingMode_t m_nMode; // r13d
  const char *v19; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v21; // r13
  CEntityIdentity *m_pEntity; // rax
  __int16 v23; // si
  CEntitySpawnerContext<CDOTA_BaseNPC> *m_pContext; // rbx
  CEntityKeyValues *j; // r14
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v28; // rdi
  CDOTA_BaseNPC *v29; // rbx
  CEntityHandle v30; // [rsp+20h] [rbp-200h] BYREF
  _QWORD v31[2]; // [rsp+30h] [rbp-1F0h] BYREF
  CDotaNPCSpawner<CDOTA_BaseNPC> spawner; // [rsp+40h] [rbp-1E0h] BYREF
  char szUnitName[264]; // [rsp+E0h] [rbp-140h] BYREF
  unsigned __int64 v34; // [rsp+1E8h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  if ( pPlayer == 0 )
    return 0;
  szUnitName[0] = 0;
  if ( pszScriptName == 0 )
    return 0;
  if ( *pszScriptName == 0 )
    return 0;
  ComputeUnitNameForScriptName(pszScriptName, szUnitName, v2);
  if ( szUnitName[0] == 0 )
    return 0;
  v6 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
  CDOTA_PlayerResource::SetSelectedHeroID(g_pDOTAPlayerResource, v6, pszScriptName);
  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner._vptr_CEntitySpawnerBase = off_40FC030;
  spawner.m_scriptClassName.m_pString = 0;
  spawner.m_pContext = 0;
  spawner.m_pSpawnBatch = 0;
  v7 = g_pEntitySystem;
  spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v7->m_entitySpawnerData;
  spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v7);
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  v9 = *&SpawnOriginOffset->m_flMatVal[0][2];
  spawner.m_pEntityKeyValues = 0;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v9;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
  spawner.m_pEntityClass = g_pEntityCDOTA_BaseNPCClass;
  if ( g_pApplication != 0 )
    v10 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v10 = 0;
  spawner.m_bValidateKeys = v10;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  spawner._vptr_CEntitySpawnerBase = off_40FC050;
  CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -782893907, szUnitName);
  AppendNPCKeyValues(szUnitName, spawner.m_pEntityKeyValues, 0);
  for ( i = spawner.m_pContext; i != 0; i = i->m_pParent )
    CEntityKeyValues::CopyFrom(spawner.m_pEntityKeyValues, &i->m_entityKeyValues, 0);
  m_Value = pPlayer->m_iTeamNum.m_Value;
  v13 = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
  AddCommonHeroSpawnKeys<CDotaNPCSpawner<CDOTA_BaseNPC>>(&spawner, pszScriptName, v13, m_Value);
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  v30.m_Index = -1;
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    m_enabled = g_VProfCurrentProfile.m_enabled;
    v16 = m_enabled != 0;
    if ( m_enabled != 0 )
    {
      CVProfile::EnterScope(&g_VProfCurrentProfile, "Spawn", 0, "Server Simulation", 0, 4);
      m_pEntityKeyValues = spawner.m_pEntityKeyValues;
    }
    if ( !CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790) )
    {
      m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
      if ( m_pszClassname != 0 )
        CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
    }
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    m_nMode = spawner.m_nMode;
    v19 = CUtlString::Get(&spawner.m_scriptClassName);
    Entity = CEntitySystem::CreateEntity(
               g_pEntitySystem,
               spawner.m_hSpawnGroupHandle,
               spawner.m_pEntityClass,
               v19,
               m_nMode,
               -1,
               -1,
               0,
               0);
    v21 = Entity;
    if ( Entity != 0 )
    {
      m_pEntity = Entity->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v23 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v23 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v30.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v23 & 0x7FFF;
      }
      else
      {
        v30.m_Index = -1;
      }
      v31[0] = m_pEntity;
      v31[1] = spawner.m_pEntityKeyValues;
      (*(*g_pGameResourceService + 280LL))(
        g_pGameResourceService,
        spawner.m_hSpawnGroupHandle,
        1,
        v31,
        &spawner.m_mSpawnGroupToWorld);
      CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v21, spawner.m_pEntityKeyValues);
      if ( spawner.m_pSpawnBatch == 0 )
        CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
      m_pContext = spawner.m_pContext;
      for ( j = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
      {
        m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
        pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
        if ( m_pthis != 0 || pfn != 0 )
        {
          v28 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
          if ( (pfn & 1) != 0 )
            pfn = *(pfn + *v28 - 1);
          (pfn)(v28, v21, j);
        }
      }
    }
    if ( v16 )
      CVProfile::ExitScope(&g_VProfCurrentProfile);
  }
  v29 = CEntityHandle::operator CEntityInstance *(&v30);
  spawner._vptr_CEntitySpawnerBase = off_40FC030;
  CEntitySpawnerBase<CDOTA_BaseNPC>::~CEntitySpawnerBase(&spawner);
  return v29;
}


// CDOTA_BaseNPC_Hero::DrawDebugTextOverlays  (line 6676, @0x0000000002916740, libserver.so)
// calls: CDOTA_BaseNPC::DrawDebugTextOverlays, V_snprintf, CBaseEntity::EntityText, __stack_chk_fail
// strings: "Strength: %f - Agility: %f - Intellect: %f\n", "Hero Level: %d"
int __fastcall CDOTA_BaseNPC_Hero::DrawDebugTextOverlays(
        CDOTA_BaseNPC_Hero *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  char v3; // r13
  int v5; // r12d
  double v6; // xmm0_8
  float v8; // [rsp+8h] [rbp-238h]
  float v9; // [rsp+Ch] [rbp-234h]
  char tempstr[520]; // [rsp+10h] [rbp-230h] BYREF
  unsigned __int64 v11; // [rsp+218h] [rbp-28h]

  v3 = nDebugOverlayBits;
  v11 = __readfsqword(0x28u);
  v5 = CDOTA_BaseNPC::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v3 & 1) != 0 )
  {
    v9 = (*(this->_vptr_IHandleEntity + 498))(this);
    v8 = (*(this->_vptr_IHandleEntity + 497))(this);
    v6 = (*(this->_vptr_IHandleEntity + 496))(this);
    V_snprintf(tempstr, 512, "Strength: %f - Agility: %f - Intellect: %f\n", *&v6, v8, v9);
    CBaseEntity::EntityText(this, v5, tempstr, 0.0, 255, 255, 255, 255);
    V_snprintf(tempstr, 512, "Hero Level: %d", this->m_iCurrentLevel.m_Value);
    CBaseEntity::EntityText(this, v5 + 1, tempstr, 0.0, 255, 255, 255, 255);
    v5 += 2;
  }
  return v5;
}


// CDOTA_BaseNPC_Hero::LoadHeroesFile  (line 6704, @0x000000000290fb20, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, GetUnitName, GetValue, GetValue<int>, Min<long long unsigned int>, Min<unsigned int>, String, ToCStr, atoi, operator[]
// calls: DevMsg, strtol, VariantFieldTypeName, Warning
// callers: CDOTA_BaseNPC_Hero::Precache
// strings: "Loading hero...%s\n", "...done!\n", "No conversion from %s to int now\n"
// globals: jpt_290FBED, CEntityKeyValues::sm_EmptyVariant
bool __fastcall CDOTA_BaseNPC_Hero::LoadHeroesFile(CDOTA_BaseNPC_Hero *const this, const CEntityKeyValues *pKeyValues)
{
  const char *m_pAsString; // rdx
  __int64 v5; // r8
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // dx
  __int64 v8; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v10; // rdx
  unsigned __int64 m_float; // rsi
  CEntityVariant *p_m_value; // rcx
  int16 m_type; // ax
  const char *v15; // rax

  if ( pKeyValues == 0 )
    return 0;
  m_pAsString = "";
  if ( this->m_iszUnitName.m_Value.u.m_Id != 0 )
    m_pAsString = this->m_iszUnitName.m_Value.u.m_pAsString;
  DevMsg(2, "Loading hero...%s\n", m_pAsString);
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount > 0 )
  {
    m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
    v8 = 0;
    v5 = m_nAllocated;
    do
    {
      if ( m_nAllocated != 0 )
      {
        m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( m_nAllocated > 9 )
          m_pElements = pKeyValues->m_keyHashes.m_pElements;
        if ( m_pElements[v8] == -905424683 )
        {
LABEL_12:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v10 = pKeyValues->m_keyValues.m_pElements;
          else
            v10 = 0;
          m_float = 0;
          p_m_value = &v10[v8].m_value;
          m_type = p_m_value->m_type;
          if ( m_type != 0 )
            goto LABEL_15;
          goto LABEL_17;
        }
      }
      else if ( *(4 * v8) == -905424683 )
      {
        goto LABEL_12;
      }
      ++v8;
    }
    while ( m_nCount > v8 );
  }
  p_m_value = &CEntityKeyValues::sm_EmptyVariant;
  m_float = 0;
  m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( m_type != 0 )
  {
LABEL_15:
    switch ( m_type )
    {
      case 1:
        m_float = p_m_value->m_float;
        break;
      case 5:
        m_float = p_m_value->m_uint;
        break;
      case 6:
        m_float = p_m_value->m_char;
        break;
      case 26:
        m_float = 0x7FFFFFFF;
        if ( p_m_value->m_int64 <= 0x7FFFFFFF )
        {
          m_float = 0xFFFFFFFF80000000LL;
          if ( p_m_value->m_uint64 >= 0xFFFFFFFF80000000LL )
            m_float = p_m_value->m_uint64;
        }
        break;
      case 30:
        m_float = strtol(p_m_value->m_pszString, 0, 10);
        break;
      case 33:
        m_float = 0x7FFFFFFF;
        if ( p_m_value->m_uint64 <= 0x7FFFFFFE )
          m_float = p_m_value->m_uint64;
        break;
      case 34:
        m_float = p_m_value->m_float64;
        break;
      case 37:
        m_float = 0x7FFFFFFF;
        if ( p_m_value->m_int <= 0x7FFFFFFEu )
          m_float = p_m_value->m_uint;
        break;
      default:
        v15 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to int now\n", v15);
        m_float = 0;
        break;
    }
  }
LABEL_17:
  (*(this->_vptr_IHandleEntity + 485))(this, m_float, pKeyValues, 0, v5);
  DevMsg(2, "...done!\n");
  return 1;
}


// CDOTA_BaseNPC_Hero::LoadNPCData  (line 6731, @0x0000000002946bf0, libserver.so)  // inlines: AddToTail, Base, CUtlSymbolLarge, CopyConstruct<sLoadoutItem>, Element, FindKeyHash, GetValue, GetValueString, GrowMemory, MakeEntityKeyId, MakeStringToken, NetworkStateChanged, Set, TempString, _V_strstr, operator=, operator=<Attributes>, operator[], sLoadoutItem, strstr
// calls: CEntityKeyValues::GetValueString, GetAttributeIndexFromString, CEntityKeyValues::GetValue<int>, CFmtStrN<256, false>::CFmtStrN, CEntityKeyValues::HasValue, CDOTA_BaseNPC::LoadNPCData, MurmurHash2LowerCase, RegisterStringToken, AllocPooledString, strstr, CUtlVectorBase<sLoadoutItem, CUtlMemory<sLoadoutItem, int> >::RemoveAll, CUtlMemory<sLoadoutItem, int>::Grow (14 total)
// strings: "LoadoutItemName%d", "LoadoutItemFlags%d", "ITEM_CONSUMABLE", "ITEM_CORE", "ITEM_EXTENSION", "ITEM_LUXURY" (9 total)
// globals: CEntityKeyValues::sm_EmptyVariant
void __fastcall CDOTA_BaseNPC_Hero::LoadNPCData(
        CDOTA_BaseNPC_Hero *const this,
        int nVersion,
        const CEntityKeyValues *pKV,
        CDotaDict *pDict)
{
  const char *ValueString; // rax
  Attributes AttributeIndexFromString; // r12d
  char v8; // r12
  int v9; // r13d
  const CEntityKeyValues *v10; // r15
  EntityKeyId_t v11; // esi
  uint32 v12; // eax
  int m_nCount; // r9d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // si
  __int64 v15; // rcx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v17; // rdx
  const char *m_uint64; // rsi
  CEntityVariant *p_m_value; // rax
  uint32 v20; // eax
  uint32 v21; // eax
  int v22; // r9d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v23; // si
  __int64 v24; // rcx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v25; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v26; // rdx
  const char *v27; // r12
  CEntityVariant *v28; // rax
  __int64 v29; // r14
  char *v30; // rax
  int m_Size; // r12d
  int v32; // eax
  sLoadoutItem *v33; // rax
  const char *v34; // rax
  uint32 v36; // [rsp+28h] [rbp-298h]
  uint32 v38; // [rsp+38h] [rbp-288h]
  UtlSymLargeId_t v39; // [rsp+38h] [rbp-288h]
  uint32 v40; // [rsp+38h] [rbp-288h]
  int defaultValue[4]; // [rsp+50h] [rbp-270h] BYREF
  CFmtStr strItemName; // [rsp+60h] [rbp-260h] BYREF
  CFmtStr strItemFlags; // [rsp+170h] [rbp-150h] BYREF
  unsigned __int64 v44; // [rsp+288h] [rbp-38h]

  v44 = __readfsqword(0x28u);
  ValueString = CEntityKeyValues::GetValueString(pKV, 475660678, 0);
  AttributeIndexFromString = GetAttributeIndexFromString(ValueString);
  if ( AttributeIndexFromString != this->m_iPrimaryAttribute.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4660, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iPrimaryAttribute.m_Value = AttributeIndexFromString;
  }
  if ( AttributeIndexFromString == Attributes::DOTA_ATTRIBUTE_INVALID )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4660, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iPrimaryAttribute.m_Value = 0;
    v34 = CEntityKeyValues::GetValueString(pKV, 475660678, 0);
    Warning("Unknown Primary Attribute during parse! (%s)\n", v34);
  }
  v8 = 0;
  defaultValue[0] = 0;
  v9 = 0;
  v10 = pKV;
  this->m_iHeroID = CEntityKeyValues::GetValue<int>(pKV, 1271882272, defaultValue);
  while ( 1 )
  {
    CFmtStrN<256,false>::CFmtStrN(&strItemName, "LoadoutItemName%d", v9);
    CFmtStrN<256,false>::CFmtStrN(&strItemFlags, "LoadoutItemFlags%d", v9);
    v11.m_nHashCode = 0;
    if ( strItemName.m_szBuf[0] != 0 )
    {
      v20 = MurmurHash2LowerCase(strItemName.m_szBuf, 0x31415926u);
      if ( g_bUpdateStringTokenDatabase )
      {
        v38 = v20;
        RegisterStringToken(v20, strItemName.m_szBuf, 0, 1);
        v11.m_nHashCode = v38;
      }
      else
      {
        v11.m_nHashCode = v20;
      }
    }
    if ( !CEntityKeyValues::HasValue(v10, v11) )
      break;
    if ( v8 == 0 )
      CUtlVectorBase<sLoadoutItem,CUtlMemory<sLoadoutItem,int>>::RemoveAll(&this->m_Loadout);
    v12 = 0;
    if ( strItemName.m_szBuf[0] != 0 )
    {
      v12 = MurmurHash2LowerCase(strItemName.m_szBuf, 0x31415926u);
      if ( g_bUpdateStringTokenDatabase )
      {
        v40 = v12;
        RegisterStringToken(v12, strItemName.m_szBuf, 0, 1);
        v12 = v40;
      }
    }
    m_nCount = v10->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_27:
      p_m_value = &CEntityKeyValues::sm_EmptyVariant;
      m_uint64 = 0;
      if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
        goto LABEL_22;
      goto LABEL_28;
    }
    m_nAllocated = v10->m_keyHashes.m_nAllocated;
    v15 = 0;
    while ( m_nAllocated == 0 )
    {
      if ( v12 == *(4 * v15) )
        goto LABEL_19;
LABEL_16:
      if ( m_nCount <= ++v15 )
        goto LABEL_27;
    }
    m_pElements = (&v10->m_keyHashes.m_nAllocAllocated + 1);
    if ( m_nAllocated > 9 )
      m_pElements = v10->m_keyHashes.m_pElements;
    if ( v12 != m_pElements[v15] )
      goto LABEL_16;
LABEL_19:
    if ( v10->m_keyValues.m_nAllocated != 0 )
      v17 = v10->m_keyValues.m_pElements;
    else
      v17 = 0;
    m_uint64 = 0;
    p_m_value = &v17[v15].m_value;
    if ( p_m_value->m_type == 30 )
LABEL_22:
      m_uint64 = p_m_value->m_uint64;
LABEL_28:
    AllocPooledString(defaultValue, m_uint64);
    v39 = *defaultValue;
    v21 = 0;
    if ( strItemFlags.m_szBuf[0] != 0 )
    {
      v21 = MurmurHash2LowerCase(strItemFlags.m_szBuf, 0x31415926u);
      if ( g_bUpdateStringTokenDatabase )
      {
        v36 = v21;
        RegisterStringToken(v21, strItemFlags.m_szBuf, 0, 1);
        v21 = v36;
      }
    }
    v22 = v10->m_keyHashes.m_nCount;
    if ( v22 <= 0 )
    {
LABEL_41:
      v28 = &CEntityKeyValues::sm_EmptyVariant;
      v27 = 0;
      if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
        goto LABEL_40;
      goto LABEL_42;
    }
    v23 = v10->m_keyHashes.m_nAllocated;
    v24 = 0;
    while ( 2 )
    {
      if ( v23 == 0 )
      {
        if ( v21 == *(4 * v24) )
          break;
        goto LABEL_34;
      }
      v25 = (&v10->m_keyHashes.m_nAllocAllocated + 1);
      if ( v23 > 9 )
        v25 = v10->m_keyHashes.m_pElements;
      if ( v21 != v25[v24] )
      {
LABEL_34:
        if ( v22 <= ++v24 )
          goto LABEL_41;
        continue;
      }
      break;
    }
    if ( v10->m_keyValues.m_nAllocated != 0 )
      v26 = v10->m_keyValues.m_pElements;
    else
      v26 = 0;
    v27 = 0;
    v28 = &v26[v24].m_value;
    if ( v28->m_type == 30 )
LABEL_40:
      v27 = v28->m_uint64;
LABEL_42:
    v29 = strstr(v27, "ITEM_CONSUMABLE") != 0;
    if ( strstr(v27, "ITEM_CORE") != 0 )
      LODWORD(v29) = v29 | 2;
    if ( strstr(v27, "ITEM_EXTENSION") != 0 )
      LODWORD(v29) = v29 | 4;
    if ( strstr(v27, "ITEM_LUXURY") != 0 )
      LODWORD(v29) = v29 | 8;
    if ( strstr(v27, "ITEM_SELLABLE") != 0 )
      LODWORD(v29) = v29 | 0x10;
    v30 = strstr(v27, "ITEM_DERIVED");
    m_Size = this->m_Loadout.m_Size;
    if ( v30 != 0 )
      LODWORD(v29) = v29 | 0x20;
    v32 = this->m_Loadout.m_Size;
    if ( m_Size == this->m_Loadout.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<sLoadoutItem,int>::Grow(&this->m_Loadout.m_Memory, 1);
      v32 = this->m_Loadout.m_Size;
    }
    this->m_Loadout.m_Size = v32 + 1;
    v33 = &this->m_Loadout.m_Memory.m_pMemory[m_Size];
    if ( v33 != 0 )
    {
      v33->iFlags = v29;
      v33->bPurchased = 0;
      v33->name.u.m_Id = v39;
    }
    ++v9;
    v8 = 1;
  }
  CDOTA_BaseNPC::LoadNPCData(this, nVersion, v10, pDict);
}


// CDOTA_BaseNPC_Hero::RecordLastHit  (line 6788, @0x00000000028fcd90, libserver.so)  // inlines: GetFloat, IncrementLastHitMultikill, IncrementLastHitStreak, IncrementLastHits, IncrementNearbyCreepDeaths, NetworkStateChanged, Set, Start, operator=<float>
// calls: CDOTA_PlayerResource::IncrementLastHits, CDOTA_PlayerResource::IncrementNearbyCreepDeaths, CDOTA_PlayerResource::IncrementLastHitStreak, CountdownTimer::Now, CDOTA_PlayerResource::IncrementLastHitMultikill
// callers: CDOTAHeroList::DistributeRewardsForKill
void __fastcall CDOTA_BaseNPC_Hero::RecordLastHit(CDOTA_BaseNPC_Hero *const this)
{
  CountdownTimer *p_m_MultipleLastHitTimer; // r13
  double v3; // xmm0_8
  double v4; // xmm1_8
  float v5; // [rsp+8h] [rbp-28h]
  float m_fValue; // [rsp+Ch] [rbp-24h]

  p_m_MultipleLastHitTimer = &this->m_MultipleLastHitTimer;
  CDOTA_PlayerResource::IncrementLastHits(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value);
  CDOTA_PlayerResource::IncrementNearbyCreepDeaths(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value);
  CDOTA_PlayerResource::IncrementLastHitStreak(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value);
  m_fValue = dota_last_hit_multiple_kill_time.m_pParent->m_Value.m_fValue;
  *&v3 = CountdownTimer::Now(p_m_MultipleLastHitTimer) + m_fValue;
  if ( *&v3 != this->m_MultipleLastHitTimer.m_timestamp.m_Value )
  {
    v5 = *&v3;
    (*(this->m_MultipleLastHitTimer._vptr_CountdownTimer + 2))(p_m_MultipleLastHitTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v3 = LODWORD(v5);
    this->m_MultipleLastHitTimer.m_timestamp.m_Value = v5;
  }
  if ( m_fValue != this->m_MultipleLastHitTimer.m_duration.m_Value )
  {
    (*(this->m_MultipleLastHitTimer._vptr_CountdownTimer + 2))(
      p_m_MultipleLastHitTimer,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v3,
      v4,
      m_fValue);
    this->m_MultipleLastHitTimer.m_duration.m_Value = m_fValue;
  }
  CDOTA_PlayerResource::IncrementLastHitMultikill(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value);
}


// CDOTA_BaseNPC_Hero::KilledHero  (line 6811, @0x000000000295eb70, libserver.so)  // inlines: CanBeSeenByTeam, CanEntityBeSeenByMyTeam, DOTAGameRules, GetClassNameAsCStr, GetClassname, GetFloat, GetGameTime, GetGlobalDOTATeam, GetPlayerID, GetStopTalkTime, GetStreak, GetTeamNumber, IncrementKills, IncrementStreak, IsElapsed, SetDeathTime, String, operator=, set_event_team, set_event_type, set_has_event_team, set_has_event_type, set_has_killer_account_id, set_has_multi_kill_count, set_has_victim_account_id, set_killer_account_id, set_multi_kill_count, set_victim_account_id
// calls: CDOTA_PlayerResource::IncrementStreak, CDOTA_PlayerResource::IncrementKills, CDOTA_PlayerResource::GetObserverWardsPlaced, CDOTA_PlayerResource::GetLastHits, CDOTA_PlayerResource::GetXPPerMin, CDOTA_PlayerResource::GetGoldPerMin, CDOTA_PlayerResource::GetAssists, CDOTA_PlayerResource::GetDeaths, CDOTA_PlayerResource::GetKills, CDOTA_CombatLog::AddPlayerStatsEvent, CDOTA_PlayerResource::GetStreak, GetGlobalTeam (27 total)
// callers: CDOTAHeroList::GivePlayerFullBountyGold, CDOTA_BaseNPC_Hero::Script_KilledHero
// strings: "tournament_drops"
// globals: s_pTauntProbability
void __fastcall CDOTA_BaseNPC_Hero::KilledHero(
        CDOTA_BaseNPC_Hero *const this,
        CDOTA_BaseNPC_Hero *pNPCHero,
        CBaseEntity *pInflictor)
{
  int m_Value; // r14d
  int v6; // r15d
  float v7; // xmm0_4
  int Kills; // eax
  int v9; // eax
  CDOTATeam *GlobalTeam; // rax
  float v11; // xmm1_4
  float v12; // xmm1_4
  int v13; // eax
  CDOTA_Speech *m_pSpeech; // rax
  float m_flStopTalkTime; // xmm0_4
  float v16; // xmm1_4
  __m128 v17; // xmm0
  __m128 v18; // xmm2
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rsi
  UtlSymLargeId_t v21; // rax
  int v22; // esi
  bool v23; // al
  CGameRules *v24; // rax
  CEntityIdentity *v25; // rax
  const char *v26; // rsi
  int m_iMultipleKillCount; // ecx
  int v28; // r15d
  int Streak; // eax
  int v30; // eax
  bool v31; // zf
  int v32; // esi
  int SteamID; // eax
  int v34; // esi
  int v35; // eax
  int ObserverWardsPlaced; // [rsp+10h] [rbp-C0h]
  int nWardsPlaced; // [rsp+14h] [rbp-BCh]
  int LastHits; // [rsp+14h] [rbp-BCh]
  int nLastHits; // [rsp+18h] [rbp-B8h]
  int nLastHitsa; // [rsp+18h] [rbp-B8h]
  float flXPM; // [rsp+1Ch] [rbp-B4h]
  float flXPMa; // [rsp+1Ch] [rbp-B4h]
  int nAssists; // [rsp+20h] [rbp-B0h]
  int nAssistsa; // [rsp+20h] [rbp-B0h]
  float flGPM; // [rsp+28h] [rbp-A8h]
  int flGPMa; // [rsp+28h] [rbp-A8h]
  int nDeathsa; // [rsp+30h] [rbp-A0h]
  int nDeaths; // [rsp+30h] [rbp-A0h]
  _QWORD v50[2]; // [rsp+40h] [rbp-90h] BYREF
  int v51; // [rsp+50h] [rbp-80h]
  int v52; // [rsp+58h] [rbp-78h]
  int v53; // [rsp+5Ch] [rbp-74h]
  int v54; // [rsp+60h] [rbp-70h]
  _BOOL4 v55; // [rsp+78h] [rbp-58h]
  int v56; // [rsp+7Ch] [rbp-54h]

  m_Value = this->m_iPlayerID.m_Value;
  v6 = pNPCHero->m_iPlayerID.m_Value;
  if ( m_Value >= 0 )
  {
    CDOTA_PlayerResource::IncrementStreak(g_pDOTAPlayerResource, m_Value);
    if ( g_pGameRules != 0 )
      v7 = *&g_pGameRules[18].m_szQuestName[20];
    else
      v7 = 0.0;
    pNPCHero->m_flDeathTime = v7;
    if ( v6 >= 0 )
    {
      CDOTA_PlayerResource::IncrementKills(
        g_pDOTAPlayerResource,
        this->m_iPlayerID.m_Value,
        pNPCHero->m_iPlayerID.m_Value);
      nWardsPlaced = CDOTA_PlayerResource::GetObserverWardsPlaced(g_pDOTAPlayerResource, v6);
      nLastHits = CDOTA_PlayerResource::GetLastHits(g_pDOTAPlayerResource, v6);
      flXPM = CDOTA_PlayerResource::GetXPPerMin(g_pDOTAPlayerResource, v6);
      flGPM = CDOTA_PlayerResource::GetGoldPerMin(g_pDOTAPlayerResource, v6);
      nAssists = CDOTA_PlayerResource::GetAssists(g_pDOTAPlayerResource, v6);
      nDeathsa = CDOTA_PlayerResource::GetDeaths(g_pDOTAPlayerResource, v6);
      Kills = CDOTA_PlayerResource::GetKills(g_pDOTAPlayerResource, v6);
      CDOTA_CombatLog::AddPlayerStatsEvent(
        &g_DOTACombatLog,
        v6,
        Kills,
        nDeathsa,
        nAssists,
        flGPM,
        flXPM,
        nLastHits,
        nWardsPlaced);
    }
    ObserverWardsPlaced = CDOTA_PlayerResource::GetObserverWardsPlaced(g_pDOTAPlayerResource, m_Value);
    LastHits = CDOTA_PlayerResource::GetLastHits(g_pDOTAPlayerResource, m_Value);
    nLastHitsa = CDOTA_PlayerResource::GetXPPerMin(g_pDOTAPlayerResource, m_Value);
    flXPMa = CDOTA_PlayerResource::GetGoldPerMin(g_pDOTAPlayerResource, m_Value);
    flGPMa = CDOTA_PlayerResource::GetAssists(g_pDOTAPlayerResource, m_Value);
    nAssistsa = CDOTA_PlayerResource::GetDeaths(g_pDOTAPlayerResource, m_Value);
    v9 = CDOTA_PlayerResource::GetKills(g_pDOTAPlayerResource, m_Value);
    CDOTA_CombatLog::AddPlayerStatsEvent(
      &g_DOTACombatLog,
      m_Value,
      v9,
      nAssistsa,
      flGPMa,
      flXPMa,
      *&nLastHitsa,
      LastHits,
      ObserverWardsPlaced);
    if ( CDOTA_PlayerResource::GetStreak(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value) > 2 )
    {
      Streak = CDOTA_PlayerResource::GetStreak(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value);
      CDOTA_CombatLog::AddKillstreakEvent(&g_DOTACombatLog, this->m_iPlayerID.m_Value, this, Streak);
    }
    GlobalTeam = GetGlobalTeam(this->m_iTeamNum.m_Value);
    if ( GlobalTeam != 0 )
      CDOTATeam::IncrementKillStreak(GlobalTeam);
    if ( this->m_MultipleHeroKillTimer.m_timestamp.m_Value > 0.0
      && CountdownTimer::Now(&this->m_MultipleHeroKillTimer) < this->m_MultipleHeroKillTimer.m_timestamp.m_Value )
    {
      m_iMultipleKillCount = this->m_iMultipleKillCount + 1;
      this->m_iMultipleKillCount = m_iMultipleKillCount;
      if ( m_iMultipleKillCount > 1 )
      {
        CDOTA_CombatLog::AddMultiKillEvent(&g_DOTACombatLog, this->m_iPlayerID.m_Value, this, m_iMultipleKillCount);
        m_iMultipleKillCount = this->m_iMultipleKillCount;
        if ( m_iMultipleKillCount > 2 )
        {
          if ( v6 >= 0 )
          {
            CMsgTournamentItemEvent::CMsgTournamentItemEvent(v50);
            v30 = v51;
            v31 = this->m_iTeamNum.m_Value == 3;
            v54 = 2;
            v32 = this->m_iPlayerID.m_Value;
            LOBYTE(v30) = v51 | 0x84;
            v51 = v30;
            v55 = v31;
            SteamID = CDOTA_PlayerResource::GetSteamID(g_pDOTAPlayerResource, v32);
            v34 = pNPCHero->m_iPlayerID.m_Value;
            v52 = SteamID;
            v51 |= 1u;
            v53 = CDOTA_PlayerResource::GetSteamID(g_pDOTAPlayerResource, v34);
            v35 = this->m_iMultipleKillCount;
            v51 |= 0x102u;
            v56 = v35;
            TournamentItemEvent(v50, "tournament_drops");
            CMsgTournamentItemEvent::~CMsgTournamentItemEvent(v50);
            m_iMultipleKillCount = this->m_iMultipleKillCount;
          }
          if ( m_iMultipleKillCount == 3 )
          {
            nDeaths = this->m_iPlayerID.m_Value;
            if ( CDOTA_PlayerResource::IsValidTeamPlayerID(g_pDOTAPlayerResource, nDeaths) )
              ++*(g_pDOTAPlayerResource + nDeaths + 8502);
            m_iMultipleKillCount = this->m_iMultipleKillCount;
          }
        }
      }
      if ( m_iMultipleKillCount == 5 )
      {
        if ( v6 >= 0 )
          RecordSocialFeedMatchEvent(
            this->m_iPlayerID.m_Value,
            ESocialFeedMatchEventType::k_ESocialFeedMatchEventType_Rampage);
        v28 = this->m_iPlayerID.m_Value;
        if ( CDOTA_PlayerResource::IsValidTeamPlayerID(g_pDOTAPlayerResource, v28) )
          ++*(g_pDOTAPlayerResource + v28 + 8478);
      }
    }
    else
    {
      this->m_iMultipleKillCount = 1;
    }
    CountdownTimer::Start(&this->m_MultipleHeroKillTimer, dota_hero_multiple_kill_time.m_pParent->m_Value.m_fValue, v11);
    v13 = 1;
    if ( this->m_iMultipleKillCount > 0 )
      v13 = this->m_iMultipleKillCount;
    CDOTA_BaseNPC_Hero::PerformAutoTaunt(this, COERCE_DOUBLE(LODWORD(s_pTauntProbability[v13 - 1])), v12, 0);
    m_pSpeech = pNPCHero->m_Speech.m_pSpeech;
    m_flStopTalkTime = 0.0;
    if ( m_pSpeech != 0 )
      m_flStopTalkTime = m_pSpeech->m_flStopTalkTime;
    v16 = 0.0;
    if ( g_pGameRules != 0 )
      v16 = *&g_pGameRules[18].m_szQuestName[20];
    v17.m128_f32[0] = (m_flStopTalkTime - v16) - (0.34999999 * (m_flStopTalkTime - v16));
    v18 = _mm_cmpge_ss(0x40600000u, v17);
    CountdownTimer::Start(
      &this->m_HeroKillTimer,
      COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_andnot_ps(v18, 0x40600000u).m128_f32[0]) | v17.m128_i32[0] & v18.m128_i32[0]),
      3.5);
    m_pEntity = pNPCHero->m_pEntity;
    m_pAsString = "";
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    MakeEntitySystemString(m_pAsString);
    v21 = v50[0];
    this->m_KillInfo.m_inflictorname.u.m_Id = 0;
    v22 = this->m_iTeamNum.m_Value;
    this->m_KillInfo.m_victimname.u.m_Id = v21;
    v23 = 0;
    if ( v22 != 4 && pNPCHero->m_pCollision != 0 )
      v23 = !CBaseModelEntity::CanBeSeenByTeam(pNPCHero, v22);
    this->m_KillInfo.m_bEnemyInFOW = v23;
    v24 = g_pGameRules;
    this->m_KillInfo.m_bWasFirstBlood = g_pGameRules[61].m_szQuestName[114];
    this->m_KillInfo.m_iKillCount = this->m_iMultipleKillCount;
    this->m_KillInfo.m_flBlinkTime = *&v24[18].m_szQuestName[20] - this->m_flBlinkDaggerTime;
    if ( pInflictor != 0 )
    {
      v25 = pInflictor->m_pEntity;
      v26 = "";
      if ( v25->m_designerName.u.m_Id != 0 )
        v26 = v25->m_designerName.u.m_pAsString;
      MakeEntitySystemString(v26);
      this->m_KillInfo.m_inflictorname.u.m_Id = v50[0];
    }
  }
}


// CDOTA_BaseNPC_Hero::Script_KilledHero  (line 6920, @0x000000000295fd90, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTABaseNPC, ToDOTABaseNPCHero, ToEnt
// calls: GetScriptDesc<CEntityInstance>, CDOTA_BaseNPC_Hero::KilledHero
void __fastcall CDOTA_BaseNPC_Hero::Script_KilledHero(
        CDOTA_BaseNPC_Hero *const this,
        HSCRIPT hHero,
        HSCRIPT hInflictor)
{
  __int64 (__fastcall *v6)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *Script; // rax
  CBaseEntity *v8; // r14
  __int64 (__fastcall *v9)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *v10; // rax
  __int64 v11; // rax
  CDOTA_BaseNPC_Hero *v12; // rsi

  if ( hInflictor != 0 )
  {
    v6 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v8 = v6(g_pScriptVM, hInflictor, Script);
  }
  else
  {
    v8 = 0;
  }
  if ( hHero != 0
    && (v9 = *(*g_pScriptVM + 208LL), v10 = GetScriptDesc<CEntityInstance>(0), (v11 = v9(g_pScriptVM, hHero, v10)) != 0)
    && *(v11 + 339) != 0 )
  {
    v12 = 0;
    if ( (*(v11 + 2088) & 1) != 0 )
      v12 = v11;
  }
  else
  {
    v12 = 0;
  }
  CDOTA_BaseNPC_Hero::KilledHero(this, v12, v8);
}


// CDOTA_BaseNPC_Hero::PerformAutoTaunt  (line 6925, @0x000000000294a0a0, libserver.so)  // inlines: GetSlotIndexBySlotType, NetworkStateChanged, Set, SetTauntCooldown, operator=<float>
// calls: RandomFloat, CDOTA_BaseNPC::GetEconSpecifyingPlayerID, DOTAInventoryManager, CDOTAInventoryManager::GetInventoryForPlayerID, CDOTAInventoryManager::GetItemSlotsForHero, GetAssetModifiers<CEconItemView, CActivityModifier>, UseEconItem
// callers: CDOTA_Modifier_Teleporting::OnCreated, CDOTATeam::IncrementKillStreak, CDOTAHeroList::GiveExperience, DamageImpact, CDOTA_BaseNPC_Hero::KilledHero, CDOTA_Unit_Courier::Event_Killed, CDOTA_Item_Aegis::OnEquip
bool __fastcall CDOTA_BaseNPC_Hero::PerformAutoTaunt(
        CDOTA_BaseNPC_Hero *const this,
        double a2,
        float flProbability,
        bool bForce)
{
  int EconSpecifyingPlayerID; // r12d
  CDOTAInventoryManager *v8; // rax
  CDOTAPlayerInventory *InventoryForPlayerID; // rax
  int m_iHeroID; // r13d
  CDOTAPlayerInventory *v11; // r12
  CDOTAInventoryManager *v12; // rax
  CDOTAHeroSlots *ItemSlotsForHero; // rax
  __int64 v14; // rdx
  CEconItemView *v15; // r12
  const CUtlVector<const CActivityModifier*,CUtlMemory<const CActivityModifier*,int> > *Asset; // rax
  int m_Size; // esi
  const CActivityModifier **m_pMemory; // rax
  __int64 v19; // rdx
  const CActivityModifier *v20; // rcx
  CDOTAPlayer *v21; // rsi
  float flProbabilitya; // [rsp+Ch] [rbp-24h]

  flProbabilitya = *&a2;
  if ( (*(this->_vptr_IHandleEntity + 408))(this, a2, flProbability) == 0 )
    return 0;
  if ( bForce )
  {
    if ( this->m_flTauntCooldown.m_Value != 0.0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 2316, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0.0);
      this->m_flTauntCooldown.m_Value = 0.0;
    }
    flProbabilitya = 1.0;
  }
  if ( RandomFloat(0.0, 1.0) > flProbabilitya )
    return 0;
  EconSpecifyingPlayerID = CDOTA_BaseNPC::GetEconSpecifyingPlayerID(this);
  if ( EconSpecifyingPlayerID < 0 )
    return 0;
  v8 = DOTAInventoryManager();
  InventoryForPlayerID = CDOTAInventoryManager::GetInventoryForPlayerID(v8, EconSpecifyingPlayerID, 0);
  m_iHeroID = this->m_iHeroID;
  v11 = InventoryForPlayerID;
  v12 = DOTAInventoryManager();
  ItemSlotsForHero = CDOTAInventoryManager::GetItemSlotsForHero(v12, m_iHeroID);
  if ( ItemSlotsForHero == 0 || v11 == 0 )
    return 0;
  v14 = 0;
  while ( ItemSlotsForHero->m_nSlotTypes[v14] != 19 )
  {
    if ( ++v14 == 16 )
      return 0;
  }
  v15 = (*(v11->_vptr_ISharedObjectListener + 9))(v11, this->m_iHeroID);
  Asset = GetAssetModifiers<CEconItemView,CActivityModifier>(v15);
  if ( Asset == 0 )
    return 0;
  m_Size = Asset->m_Size;
  if ( Asset->m_Size <= 0 )
    return 0;
  m_pMemory = Asset->m_Memory.m_pMemory;
  v19 = 0;
  while ( 1 )
  {
    v20 = m_pMemory[v19];
    if ( v20 != 0 && v20->m_Activity == 1536 && v20->m_pKV != 0 && v20->m_bPlayAsGesture )
      break;
    if ( m_Size <= ++v19 )
      return 0;
  }
  v21 = (*(this->_vptr_IHandleEntity + 413))(this);
  return v21 != 0 && UseEconItem(v15, v21);
}


// CDOTA_BaseNPC_Hero::SetKillCriteria  (line 6980, @0x000000000290fd00, libserver.so)
// calls: CResponseCriteriaSet::Merge
// callers: CDOTA_Ability_AncientApparition_IceBlast::OnProjectileHit_ExtraData, CDOTA_Ability_Shadow_Demon_Shadow_Poison::DoPoisonReleaseDamage, CDOTA_Ability_Rattletrap_RocketFlare::OnProjectileHit_ExtraData
void __fastcall CDOTA_BaseNPC_Hero::SetKillCriteria(CDOTA_BaseNPC_Hero *const this, CResponseCriteriaSet *pCriteria)
{
  if ( pCriteria != 0 )
  {
    this->m_KillCriteria.m_bOverride = 1;
    CResponseCriteriaSet::Merge(&this->m_KillCriteria.m_criteria, pCriteria);
  }
}


// CDOTA_BaseNPC_Hero::PerformTaunt  (line 6989, @0x00000000029517d0, libserver.so)  // inlines: DOTAGameRules, GetGameTime, GetStopTalkTime, SpeakConcept
// calls: CDOTA_Speech::SpeakConcept, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_taunt"
void __fastcall CDOTA_BaseNPC_Hero::PerformTaunt(CDOTA_BaseNPC_Hero *const this)
{
  CDOTA_Speech *m_pSpeech; // rdi
  float v3; // xmm1_4
  KeyValues kv; // [rsp+10h] [rbp-30h] BYREF
  unsigned __int64 v5; // [rsp+28h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  m_pSpeech = this->m_Speech.m_pSpeech;
  if ( m_pSpeech != 0 && CDOTA_Speech::SpeakConcept(m_pSpeech, 25, 0, 4, 0, 0, 0, 0) )
  {
    KeyValues::KeyValues(&kv, "modifier_taunt");
    v3 = 0.0;
    if ( g_pGameRules != 0 )
      v3 = *&g_pGameRules[18].m_szQuestName[20];
    KeyValues::SetFloat(&kv, "duration", v3);
    CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_taunt", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_BaseNPC_Hero::GetPlayerOwner  (line 6999, @0x00000000028fcb70, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTAPlayer
CDOTAPlayer *__fastcall CDOTA_BaseNPC_Hero::GetPlayerOwner(CDOTA_BaseNPC_Hero *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTAPlayer *m_pInstance; // rbx

  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  if ( v3 + 2 > 1
    && (v4 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9]) != 0
    && (v5 = &v4[v2 & 0x1FF]) != 0
    && v3 == v5->m_EHandle.m_Index
    && (m_pInstance = v5->m_pInstance, v5->m_pInstance != 0)
    && (*(m_pInstance->_vptr_IHandleEntity + 140))(v5->m_pInstance) != 0 )
  {
    return m_pInstance;
  }
  else
  {
    return 0;
  }
}


// CDOTA_BaseNPC_Hero::GetPlayerOwnerID  (line 7004, @0x00000000028f55b0, libserver.so)
int __fastcall CDOTA_BaseNPC_Hero::GetPlayerOwnerID(CDOTA_BaseNPC_Hero *const this)
{
  return this->m_iPlayerID.m_Value;
}


// CDOTA_BaseNPC_Hero::WillReincarnate  (line 7010, @0x00000000028fb450, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, GetModifier_Constant_First, IsListeningToEvent
// calls: CDOTA_ModifierManager::GetModifier_Constant_First_Internal
// callers: CDOTA_BotMode_Attack::GetDesire, CDOTA_BotMode_Retreat::GetDesire, CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter::OnTakeDamageKillCredit
bool __fastcall CDOTA_BaseNPC_Hero::WillReincarnate(CDOTA_BaseNPC_Hero *const this)
{
  bool result; // al
  __int64 v2; // rdx
  CModifierParams params; // [rsp+0h] [rbp-98h] BYREF

  result = 0;
  v2 = this->m_ModifierManager.m_buffsForModifiers[73];
  params.fDamage = 0.0;
  params.ability.m_Index = -1;
  params.fOriginalDamage = 0.0;
  params.nActivity = -1;
  params.bTooltip = 0;
  params.nTooltipParam = 0;
  params.bIgnoreInvis = 0;
  params.bNoCooldown = 0;
  params.bReincarnate = 0;
  params.fDistance = 0.0;
  params.inflictor.m_Index = -1;
  params.nDamageflags = 0;
  params.nDamageCategory = 0;
  memset(&params.pOrb, 0, 24);
  params.bCraniumBasherTested = 0;
  params.bHeartRegenApplied = 0;
  params.bDiffusalApplied = 0;
  params.bChainLightningConsidered = 0;
  params.bSuppressDamage = 0;
  params.bRangedAttack = 0;
  params.nPlayerids_stick = 0;
  params.hattacker.m_Index = -1;
  params.htarget.m_Index = -1;
  params.hunit.m_Index = -1;
  params.bDoNotConsume = 1;
  if ( v2 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v2].m_Size > 0 )
    return CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
             &this->m_ModifierManager,
             modifierfunction::MODIFIER_PROPERTY_REINCARNATION,
             &params) > 0.0;
  return result;
}


// CDOTA_BaseNPC_Hero::OnSaveState  (line 7018, @0x0000000002915780, libserver.so)  // inlines: DOTAGameRules, GetBuybackCooldownTime, GetBuybackGoldLimitTime, GetGameTime, HasStoredRune, operator!=<int>
// calls: KeyValues::SetFloat, CDOTA_UnitInventory::FindItemInInventory, KeyValues::SetInt, CDOTA_BaseNPC::OnSaveState
// callers: CDOTA_Unit_Hero_Morphling::OnSaveState, CDOTA_Unit_Hero_LoneDruid::OnSaveState, CDOTA_Unit_Hero_Brewmaster::OnSaveState, CDOTA_Unit_Hero_Legion_Commander::OnSaveState
// strings: "buybackcooldown", "buybackgoldlimit", "item_bottle", "storedrune"
bool __fastcall CDOTA_BaseNPC_Hero::OnSaveState(CDOTA_BaseNPC_Hero *const this, KeyValues *pKey)
{
  float v2; // xmm1_4
  float v5; // xmm1_4
  float v6; // xmm1_4
  CDOTA_Item *ItemInInventory; // rax
  int vptr_IHandleEntity; // edx

  v2 = 0.0;
  if ( g_pGameRules != 0 )
    v2 = *&g_pGameRules[18].m_szQuestName[20];
  KeyValues::SetFloat(pKey, "respawntime", v2);
  v5 = 0.0;
  if ( g_pGameRules != 0 )
    v5 = *&g_pGameRules[18].m_szQuestName[20];
  KeyValues::SetFloat(pKey, "buybackcooldown", v5);
  v6 = 0.0;
  if ( g_pGameRules != 0 )
    v6 = *&g_pGameRules[18].m_szQuestName[20];
  KeyValues::SetFloat(pKey, "buybackgoldlimit", v6);
  ItemInInventory = CDOTA_UnitInventory::FindItemInInventory(&this->m_Inventory, "item_bottle", 3, 0, -1);
  if ( ItemInInventory != 0 )
  {
    vptr_IHandleEntity = ItemInInventory[1]._vptr_IHandleEntity;
    if ( vptr_IHandleEntity != -1 )
      KeyValues::SetInt(pKey, "storedrune", vptr_IHandleEntity);
  }
  return CDOTA_BaseNPC::OnSaveState(this, pKey);
}


// CDOTA_BaseNPC_Hero::OnLoadState  (line 7040, @0x0000000002917e60, libserver.so)  // inlines: DOTAGameRules, GetGameTime, NetworkStateChanged, Set, curtime, operator=<float>
// calls: CDOTA_BaseNPC::OnLoadState, KeyValues::GetFloat, CDOTA_BaseNPC_Hero::SetBuybackCooldownTime, CDOTA_BaseNPC_Hero::SetBuybackGoldLimitTime, CBaseEntity::ThinkSet, CDOTA_UnitInventory::FindItemInInventory, KeyValues::GetInt, CDOTA_Item_EmptyBottle::SetStoredRune
// callers: CDOTA_Unit_Hero_AncientApparition::OnLoadState, CDOTA_Unit_Hero_Bane::OnLoadState, CDOTA_Unit_Hero_Kunkka::OnLoadState, CDOTA_Unit_Hero_Morphling::OnLoadState, CDOTA_Unit_Hero_Alchemist::OnLoadState, CDOTA_Unit_Hero_Life_Stealer::OnLoadState, CDOTA_Unit_Hero_LoneDruid::OnLoadState, CDOTA_Unit_Hero_Brewmaster::OnLoadState, CDOTA_Unit_Hero_AbyssalUnderlord::OnLoadState, CDOTA_Unit_Hero_Elder_Titan::OnLoadState, CDOTA_Unit_Hero_KeeperOfTheLight::OnLoadState, CDOTA_Unit_Hero_Naga_Siren::OnLoadState (18 total)
// strings: "buybackcooldown", "buybackgoldlimit", "item_bottle", "storedrune"
// globals: CDOTA_BaseNPC_Hero::PreRespawnHero(void)
bool __fastcall CDOTA_BaseNPC_Hero::OnLoadState(CDOTA_BaseNPC_Hero *const this, KeyValues *pKey)
{
  bool State; // r14
  float v5; // xmm1_4
  __m128i v6; // xmm0
  float v7; // xmm1_4
  float v8; // xmm1_4
  float Float; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  CGlobalVars *v15; // r13
  float v16; // xmm0_4
  CDOTA_Item_EmptyBottle *ItemInInventory; // rbx
  int Int; // eax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v21; // [rsp+Ch] [rbp-24h]

  State = CDOTA_BaseNPC::OnLoadState(this, pKey);
  (*(this->_vptr_IHandleEntity + 490))(this);
  *v6.m128i_i32 = KeyValues::GetFloat(pKey, "buybackcooldown", v5);
  CDOTA_BaseNPC_Hero::SetBuybackCooldownTime(this, v6, v7);
  Float = KeyValues::GetFloat(pKey, "buybackgoldlimit", v8);
  CDOTA_BaseNPC_Hero::SetBuybackGoldLimitTime(this, Float, v10);
  v12 = KeyValues::GetFloat(pKey, "respawntime", v11);
  if ( v12 > -1.0 )
  {
    v13 = 0.0;
    if ( g_pGameRules != 0 )
      v13 = *&g_pGameRules[18].m_szQuestName[20];
    v14 = v12 + v13;
    if ( v14 != this->m_flRespawnTime.m_Value )
    {
      v21 = v14;
      (*(this->_vptr_IHandleEntity + 22))(this, 4780, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flRespawnTime.m_Value = v21;
    }
    v15 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      v16 = v15->m_flCurrentTime + 0.1;
    }
    else
    {
      v16 = 0.1;
    }
    CBaseEntity::ThinkSet(this, CDOTA_BaseNPC_Hero::PreRespawnHero, v16, -883079344, 0);
  }
  ItemInInventory = CDOTA_UnitInventory::FindItemInInventory(&this->m_Inventory, "item_bottle", 3, 0, -1);
  if ( ItemInInventory != 0 )
  {
    Int = KeyValues::GetInt(pKey, "storedrune", -1);
    CDOTA_Item_EmptyBottle::SetStoredRune(ItemInInventory, Int);
  }
  return State;
}


// CDOTA_BaseNPC_Hero::HasOwnerAbandoned  (line 7071, @0x00000000028f6a30, libserver.so)
// calls: CDOTA_PlayerResource::HasPlayerAbandoned
// callers: DOTA_ExecuteOrders
bool __fastcall CDOTA_BaseNPC_Hero::HasOwnerAbandoned(CDOTA_BaseNPC_Hero *const this)
{
  return g_pDOTAPlayerResource != 0
      && CDOTA_PlayerResource::HasPlayerAbandoned(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value);
}


// CDOTA_BaseNPC_Hero::IsOwnerDisconnectedButNotAbandoned  (line 7078, @0x000000000290fd30, libserver.so)
// calls: CDOTA_PlayerResource::GetConnectionState
// callers: DOTA_ExecuteOrders
bool __fastcall CDOTA_BaseNPC_Hero::IsOwnerDisconnectedButNotAbandoned(CDOTA_BaseNPC_Hero *const this)
{
  bool result; // al

  result = 0;
  if ( g_pDOTAPlayerResource != 0 )
    return CDOTA_PlayerResource::GetConnectionState(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value) == DOTAConnectionState_t::DOTA_CONNECTION_STATE_DISCONNECTED;
  return result;
}


// CDOTA_BaseNPC_Hero::OnHeroEnterShopSpeech  (line 7095, @0x000000000290fd60, libserver.so)  // inlines: DOTAGameRules, GetBool, GetFloat, GetGameTime, GetInt, GetUnitName, QueueConcept, ShopTypeToCriterionFact, ShopkeeperSpeechEnabled, String, ToCStr
// calls: CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_Speech::QueueConcept, CResponseCriteriaSet::~CResponseCriteriaSet, _Unwind_Resume
// callers: CDOTA_BaseNPC::EnterShop
// strings: "buyer", "home", "secret"
// globals: jpt_290FE00
void __fastcall CDOTA_BaseNPC_Hero::OnHeroEnterShopSpeech(CDOTA_BaseNPC_Hero *const this, DOTA_SHOP_TYPE nShopType)
{
  float v3; // r14d
  float *v4; // r12
  const char *v5; // rdx
  const char *m_pAsString; // rdx
  float v7; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  __int64 v10; // [rsp+20h] [rbp-68h] BYREF

  if ( dota_speech_shopkeeper.m_pParent->m_Value.m_nValue != 0 )
  {
    v3 = g_pGameRules != 0
       ? COERCE_FLOAT(_mm_cvtsi128_si32(*&g_pGameRules[18].m_szQuestName[20]))
       : COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
    if ( nShopType <= DOTA_SHOP_TYPE::DOTA_SHOP_NONE )
    {
      v4 = (this + 4 * nShopType);
      if ( (v3 - v4[1126]) >= dota_speech_shop_enter_interval.m_pParent->m_Value.m_fValue )
      {
        CResponseCriteriaSet::CResponseCriteriaSet(&v10);
        switch ( nShopType )
        {
          case DOTA_SHOP_TYPE::DOTA_SHOP_HOME:
            v5 = "home";
            break;
          case DOTA_SHOP_TYPE::DOTA_SHOP_SIDE:
          case DOTA_SHOP_TYPE::DOTA_SHOP_SIDE2:
            v5 = "side";
            break;
          case DOTA_SHOP_TYPE::DOTA_SHOP_SECRET:
          case DOTA_SHOP_TYPE::DOTA_SHOP_SECRET2:
            v5 = "secret";
            break;
          case DOTA_SHOP_TYPE::DOTA_SHOP_GROUND:
            v5 = "error";
            break;
          case DOTA_SHOP_TYPE::DOTA_SHOP_NONE:
            v5 = "none";
            break;
        }
        CResponseCriteriaSet::AppendCriteria(&v10, "shop", v5, 1.0);
        m_pAsString = "";
        if ( this->m_iszUnitName.m_Value.u.m_Id != 0 )
          m_pAsString = this->m_iszUnitName.m_Value.u.m_pAsString;
        CResponseCriteriaSet::AppendCriteria(&v10, "buyer", m_pAsString, 1.0);
        CResponseCriteriaSet::AppendCriteria(&v10, "enter", 1.0, v7);
        m_pSpeech = this->m_Speech.m_pSpeech;
        if ( m_pSpeech != 0 )
          CDOTA_Speech::QueueConcept(m_pSpeech, 31, 0.0, &v10, 1, 1, 0, 0, 0);
        CResponseCriteriaSet::~CResponseCriteriaSet(&v10);
      }
      v4[1126] = v3;
    }
  }
}


// CDOTA_BaseNPC_Hero::OnHeroLeaveShopSpeech  (line 7120, @0x00000000029100a0, libserver.so)  // inlines: DOTAGameRules, GetBool, GetFloat, GetGameTime, GetInt, GetUnitName, QueueConcept, ShopTypeToCriterionFact, ShopkeeperSpeechEnabled, String, ToCStr
// calls: CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_Speech::QueueConcept, CResponseCriteriaSet::~CResponseCriteriaSet, _Unwind_Resume
// callers: CDOTA_BaseNPC::LeaveShop
// strings: "buyer", "secret", "home"
// globals: jpt_2910150
void __fastcall CDOTA_BaseNPC_Hero::OnHeroLeaveShopSpeech(CDOTA_BaseNPC_Hero *const this, DOTA_SHOP_TYPE nShopType)
{
  float v3; // r14d
  float *v4; // r12
  const char *v5; // rdx
  const char *m_pAsString; // rdx
  float v7; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  __int64 v10; // [rsp+20h] [rbp-68h] BYREF

  if ( dota_speech_shopkeeper.m_pParent->m_Value.m_nValue != 0 )
  {
    v3 = g_pGameRules != 0
       ? COERCE_FLOAT(_mm_cvtsi128_si32(*&g_pGameRules[18].m_szQuestName[20]))
       : COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
    if ( nShopType <= DOTA_SHOP_TYPE::DOTA_SHOP_NONE )
    {
      v4 = (this + 4 * nShopType);
      if ( (v3 - v4[1133]) >= dota_speech_shop_enter_interval.m_pParent->m_Value.m_fValue && (v3 - v4[1126]) >= 5.0 )
      {
        CResponseCriteriaSet::CResponseCriteriaSet(&v10);
        switch ( nShopType )
        {
          case DOTA_SHOP_TYPE::DOTA_SHOP_HOME:
            v5 = "home";
            break;
          case DOTA_SHOP_TYPE::DOTA_SHOP_SIDE:
          case DOTA_SHOP_TYPE::DOTA_SHOP_SIDE2:
            v5 = "side";
            break;
          case DOTA_SHOP_TYPE::DOTA_SHOP_SECRET:
          case DOTA_SHOP_TYPE::DOTA_SHOP_SECRET2:
            v5 = "secret";
            break;
          case DOTA_SHOP_TYPE::DOTA_SHOP_GROUND:
            v5 = "error";
            break;
          case DOTA_SHOP_TYPE::DOTA_SHOP_NONE:
            v5 = "none";
            break;
        }
        CResponseCriteriaSet::AppendCriteria(&v10, "shop", v5, 1.0);
        m_pAsString = "";
        if ( this->m_iszUnitName.m_Value.u.m_Id != 0 )
          m_pAsString = this->m_iszUnitName.m_Value.u.m_pAsString;
        CResponseCriteriaSet::AppendCriteria(&v10, "buyer", m_pAsString, 1.0);
        CResponseCriteriaSet::AppendCriteria(&v10, "enter", 1.0, v7);
        m_pSpeech = this->m_Speech.m_pSpeech;
        if ( m_pSpeech != 0 )
          CDOTA_Speech::QueueConcept(m_pSpeech, 31, 0.0, &v10, 1, 1, 0, 0, 0);
        CResponseCriteriaSet::~CResponseCriteriaSet(&v10);
      }
      v4[1133] = v3;
    }
  }
}


// CDOTA_BaseNPC_Hero::TestHeroDawdlingInShop  (line 7146, @0x00000000029103d0, libserver.so)  // inlines: DOTAGameRules, GetFloat, GetGameTime, GetUnitName, QueueConcept, String, ToCStr
// calls: CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_Speech::QueueConcept, CResponseCriteriaSet::~CResponseCriteriaSet, _Unwind_Resume
// callers: CDOTA_BaseNPC_Hero::ThinkSpeech
// strings: "secret", "buyer", "dawdle"
bool __fastcall CDOTA_BaseNPC_Hero::TestHeroDawdlingInShop(CDOTA_BaseNPC_Hero *const this, DOTA_SHOP_TYPE nShopType)
{
  bool result; // al
  float v3; // xmm1_4
  float v5; // xmm0_4
  const char *m_pAsString; // rdx
  float v7; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  __int64 v9; // [rsp+10h] [rbp-58h] BYREF

  result = 0;
  if ( nShopType == DOTA_SHOP_TYPE::DOTA_SHOP_SECRET )
  {
    v3 = 0.0;
    if ( g_pGameRules != 0 )
      v3 = *&g_pGameRules[18].m_szQuestName[20];
    v5 = this->m_shopTalk.m_entertimes[2];
    if ( (v3 - v5) <= dota_speech_shop_dawdle_interval.m_pParent->m_Value.m_fValue
      || v5 <= this->m_shopTalk.m_dawdlesaid[2] )
    {
      return 0;
    }
    else
    {
      this->m_shopTalk.m_dawdlesaid[2] = v3;
      CResponseCriteriaSet::CResponseCriteriaSet(&v9);
      CResponseCriteriaSet::AppendCriteria(&v9, "shop", "secret", 1.0);
      m_pAsString = "";
      if ( this->m_iszUnitName.m_Value.u.m_Id != 0 )
        m_pAsString = this->m_iszUnitName.m_Value.u.m_pAsString;
      CResponseCriteriaSet::AppendCriteria(&v9, "buyer", m_pAsString, 1.0);
      CResponseCriteriaSet::AppendCriteria(&v9, "dawdle", 1.0, v7);
      m_pSpeech = this->m_Speech.m_pSpeech;
      if ( m_pSpeech != 0 )
        CDOTA_Speech::QueueConcept(m_pSpeech, 31, 0.0, &v9, 1, 1, 0, 0, 0);
      CResponseCriteriaSet::~CResponseCriteriaSet(&v9);
      return 1;
    }
  }
  return result;
}


// CDOTA_BaseNPC_Hero::AddPetsFromWearables  (line 7171, @0x0000000002949c30, libserver.so)  // inlines: AddToTail, CAssetModifierIndex, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<bool>, Element, FStrEq, Find, Get, GetAsset, GetAssetModifier<CEconItemView, CPetModifier>, GetAssetModifier<CPetModifier>, GetAssetModifiers<CPetModifier>, GetInstance, GetPetModel, GetWearable, GrowMemory, IsIdxValid, IsValidIndex, LeftChild, Purge, RemoveAll, String, ToCStr, _V_strcmp, operator CEconWearable*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<bool, CUtlMemory<bool, int> >::SetCount, CEntityHandle::operator CEntityInstance*, CPetModifier::StaticType, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find, CBaseEntity::GetModelName, CBaseAnimating::GetS1Skin, CUtlString::Get, strcmp, CDOTA_BaseNPC_Hero::RemovePet, CUtlMemory<bool, int>::Purge, CDOTA_BaseNPC_Hero::CreatePet, CUtlMemory<bool, int>::Grow (13 total)
// callers: CDOTA_BaseNPC_Hero::OnAssetModifiersUpdated
void __fastcall CDOTA_BaseNPC_Hero::AddPetsFromWearables(CDOTA_BaseNPC_Hero *const this)
{
  int m_Size; // esi
  __int64 i; // rax
  CEntityInstance *v4; // rax
  const CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int>,short unsigned int> > *v5; // rbx
  unsigned __int16 v6; // ax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rbx
  const CBaseEntity *v10; // rax
  const char *v11; // r12
  const CBaseAnimating *v12; // rdi
  int S1Skin; // r14d
  const char *v14; // rax
  int v15; // ebx
  __int64 v16; // r12
  __int64 v17; // rbx
  int v18; // eax
  bool v19; // zf
  bool *v20; // rbx
  CEconEntity *pEconItem; // [rsp+18h] [rbp-88h]
  __int64 v22; // [rsp+20h] [rbp-80h]
  int wearable; // [rsp+28h] [rbp-78h]
  bool bAlreadyHave; // [rsp+2Fh] [rbp-71h]
  CPetModifier *pPetMod; // [rsp+30h] [rbp-70h]
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t v26; // [rsp+40h] [rbp-60h] BYREF
  CUtlVector<bool,CUtlMemory<bool,int> > vecHavePetModifier; // [rsp+50h] [rbp-50h] BYREF

  vecHavePetModifier.m_Size = 0;
  m_Size = this->m_hPets.m_Size;
  vecHavePetModifier.m_Memory.m_pMemory = 0;
  vecHavePetModifier.m_Memory.m_nAllocationCount = 0;
  vecHavePetModifier.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<bool,CUtlMemory<bool,int>>::SetCount(&vecHavePetModifier, m_Size);
  for ( i = 0; vecHavePetModifier.m_Size > i; ++i )
    vecHavePetModifier.m_Memory.m_pMemory[i] = 0;
  if ( this->m_hMyWearables.m_Vector.m_Size <= 0 )
    goto LABEL_28;
  v22 = 0;
  wearable = 0;
  do
  {
    v4 = CEntityHandle::operator CEntityInstance *(&this->m_hMyWearables.m_Vector.m_Memory.m_pMemory[v22]);
    pEconItem = v4;
    if ( v4 == 0 || (v5 = (*(v4->_vptr_IHandleEntity + 265))(v4)) == -104LL )
    {
      vecHavePetModifier.m_Size = 0;
      if ( (vecHavePetModifier.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<bool,int>::Purge(&vecHavePetModifier.m_Memory);
        if ( (vecHavePetModifier.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          goto LABEL_45;
      }
      return;
    }
    v26.key.m_nType = CPetModifier::StaticType();
    v6 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
           v5 + 7,
           &v26);
    if ( v6 >= v5[7].m_Elements.m_nAllocationCount )
      goto LABEL_27;
    if ( v6 > v5[7].m_LastAlloc.index )
      goto LABEL_27;
    if ( v6 == 0xFFFF )
      goto LABEL_27;
    v7 = &v5[7].m_Elements.m_pMemory[v6];
    if ( v6 == *v7 )
      goto LABEL_27;
    v8 = *(v7 + 16);
    if ( v8 == 0 )
      goto LABEL_27;
    if ( *v8 - 1 < 0 )
      goto LABEL_27;
    pPetMod = *(*(v8 + 8) + 8LL * (*v8 - 1));
    if ( pPetMod == 0 )
      goto LABEL_27;
    v9 = 0;
    bAlreadyHave = 0;
    if ( this->m_hPets.m_Size <= 0 )
      goto LABEL_38;
    do
    {
      while ( 1 )
      {
        v10 = CEntityHandle::operator CEntityInstance *(&this->m_hPets.m_Memory.m_pMemory[v9]);
        if ( v10 != 0 )
        {
          CBaseEntity::GetModelName(&v26, v10);
          v11 = *&v26.key.m_nType;
          if ( *&v26.key.m_nType == 0 )
            v11 = "";
          v12 = CEntityHandle::operator CEntityInstance *(&this->m_hPets.m_Memory.m_pMemory[v9]);
          if ( v12 != 0 )
          {
            S1Skin = CBaseAnimating::GetS1Skin(v12);
            goto LABEL_22;
          }
        }
        else
        {
          v11 = "";
        }
        S1Skin = 0;
LABEL_22:
        v14 = CUtlString::Get(&pPetMod->m_strAsset);
        if ( (v11 == v14 || strcmp(v11, v14) == 0) && S1Skin == pPetMod->m_nSkin )
          break;
        if ( ++v9 >= this->m_hPets.m_Size )
          goto LABEL_26;
      }
      bAlreadyHave = 1;
      vecHavePetModifier.m_Memory.m_pMemory[v9++] = 1;
    }
    while ( v9 < this->m_hPets.m_Size );
LABEL_26:
    if ( !bAlreadyHave )
    {
LABEL_38:
      CDOTA_BaseNPC_Hero::CreatePet(this, pPetMod, pEconItem);
      v17 = vecHavePetModifier.m_Size;
      v18 = vecHavePetModifier.m_Size;
      if ( vecHavePetModifier.m_Size == vecHavePetModifier.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<bool,int>::Grow(&vecHavePetModifier.m_Memory, 1);
        v18 = vecHavePetModifier.m_Size;
      }
      v19 = &vecHavePetModifier.m_Memory.m_pMemory[v17] == 0;
      v20 = &vecHavePetModifier.m_Memory.m_pMemory[v17];
      vecHavePetModifier.m_Size = v18 + 1;
      if ( !v19 )
        *v20 = 1;
    }
LABEL_27:
    ++wearable;
    ++v22;
  }
  while ( wearable < this->m_hMyWearables.m_Vector.m_Size );
LABEL_28:
  v15 = vecHavePetModifier.m_Size - 1;
  v16 = vecHavePetModifier.m_Size - 1;
  if ( vecHavePetModifier.m_Size - 1 >= 0 )
  {
    do
    {
      while ( vecHavePetModifier.m_Memory.m_pMemory[v16] )
      {
        --v15;
        --v16;
        if ( v15 == -1 )
          goto LABEL_33;
      }
      CDOTA_BaseNPC_Hero::RemovePet(this, v15--);
      --v16;
    }
    while ( v15 != -1 );
  }
LABEL_33:
  vecHavePetModifier.m_Size = 0;
  if ( (vecHavePetModifier.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<bool,int>::Purge(&vecHavePetModifier.m_Memory);
    if ( (vecHavePetModifier.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
LABEL_45:
      CUtlMemory<bool,int>::Purge(&vecHavePetModifier.m_Memory);
  }
}


// CDOTA_BaseNPC_Hero::OnHeroCreateCompanionSpawnCompletion  (line 7226, @0x0000000002947170, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CDOTA_BaseNPC_Pet> >, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Set, operator[]
// calls: __dynamic_cast, CDOTAGamerules::RegisterPetInGlobalList, CUtlMemory<CHandle<CDOTA_BaseNPC_Pet>, int>::Grow
// globals: `typeinfo for'CDOTA_BaseNPC_Pet, `typeinfo for'CDOTA_BaseNPC
void __fastcall CDOTA_BaseNPC_Hero::OnHeroCreateCompanionSpawnCompletion(
        CDOTA_BaseNPC_Hero *const this,
        CDOTA_BaseNPC *pEntity,
        const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC_Pet *v4; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v6; // si
  __int64 m_Size; // r12
  int v8; // edx
  CHandle<CDOTA_BaseNPC_Pet> *v9; // rdx
  CDOTA_BaseNPC_Pet *pPet; // [rsp+8h] [rbp-28h]
  int v11; // [rsp+10h] [rbp-20h]

  if ( pEntity != 0 )
  {
    v4 = __dynamic_cast(pEntity, &`typeinfo for'CDOTA_BaseNPC, &`typeinfo for'CDOTA_BaseNPC_Pet, 0);
    if ( v4 != 0 )
    {
      m_pEntity = v4->m_pEntity;
      v11 = -1;
      if ( m_pEntity != 0 )
      {
        v6 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v11 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
      }
      m_Size = this->m_hPets.m_Size;
      v8 = this->m_hPets.m_Size;
      if ( m_Size == this->m_hPets.m_Memory.m_nAllocationCount )
      {
        pPet = v4;
        CUtlMemory<CHandle<CDOTA_BaseNPC_Pet>,int>::Grow(&this->m_hPets.m_Memory, 1);
        v8 = this->m_hPets.m_Size;
        v4 = pPet;
      }
      this->m_hPets.m_Size = v8 + 1;
      v9 = &this->m_hPets.m_Memory.m_pMemory[m_Size];
      if ( v9 != 0 )
        v9->m_Index = v11;
      CDOTAGamerules::RegisterPetInGlobalList(g_pGameRules, v4);
    }
  }
}


// CDOTA_BaseNPC_Hero::CreatePet  (line 7236, @0x00000000029233e0, libserver.so)  // inlines: CDotaNPCSpawnerContext, CEntityKeyValuesModifyScope, CEntitySpawnerContext, CEntitySpawnerContextBase, CEntitySpawnerContextModifyScope, CUtlDelegate, CUtlDelegate<CDOTA_BaseNPC_Hero, CDOTA_BaseNPC_Hero>, Convert<CDOTA_BaseNPC_Hero, void (CDOTA_BaseNPC_Hero::*)(CDOTA_BaseNPC*, const CEntityKeyValues*), void (detail::GenericClass::*)()>, CopyFrom<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void> >, FastDelegate2, FastDelegate2<CDOTA_BaseNPC_Hero, CDOTA_BaseNPC_Hero>, GetAsset, GetPetModel, GetTeamNumber, SetMementoFrom, SetValue<char const*>, UtlMakeDelegate<CDOTA_BaseNPC_Hero, CDOTA_BaseNPC_Hero, CDOTA_BaseNPC*, const CEntityKeyValues*, void>, bindmemfunc<CDOTA_BaseNPC_Hero, void (CDOTA_BaseNPC_Hero::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)>, ~CDotaNPCSpawnerContext, ~CEntityKeyValuesModifyScope, ~CEntitySpawnerContext, ~CEntitySpawnerContextBase, ~CEntitySpawnerContextModifyScope
// calls: CUtlString::Get, CEntityKeyValues::CEntityKeyValues, CEntityKeyValuesModifyScope::BeginModify, CEntityKeyValues::SetValue, CEntityKeyValuesModifyScope::Release, CBaseEntity::GetAbsOrigin, DOTA_Character_ScriptSpawn, CEntityKeyValues::~CEntityKeyValues, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_BaseNPC_Hero::AddPetsFromWearables
// strings: "npc_dota_companion"
// globals: CDOTA_BaseNPC_Hero::OnHeroCreateCompanionSpawnCompletion(CDOTA_BaseNPC *,CEntityKeyValues const*)
void __fastcall CDOTA_BaseNPC_Hero::CreatePet(
        CDOTA_BaseNPC_Hero *const this,
        const CPetModifier *pPetMod,
        CEconEntity *pEconItem)
{
  const char *v4; // rax
  const char *v5; // r12
  int m_Value; // r12d
  CDotaNPCSpawnerContextModifyScope sg; // [rsp+20h] [rbp-E0h] BYREF
  CDotaNPCSpawnerContext ctx; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v9; // [rsp+D8h] [rbp-28h]
  Vector v10; // 0:xmm0_8.8,8:xmm1_4.4

  v9 = __readfsqword(0x28u);
  if ( !this->m_bPreventPetSpawn )
  {
    v4 = CUtlString::Get(&pPetMod->m_strAsset);
    v5 = v4;
    if ( v4 != 0 && *v4 != 0 )
    {
      CEntityKeyValues::CEntityKeyValues(&ctx.m_entityKeyValues);
      ctx.m_pParent = 0;
      ctx.m_pCompletionListener = this;
      ctx.m_callback.m_Closure.m_pFunction.__pfn = CDOTA_BaseNPC_Hero::OnHeroCreateCompanionSpawnCompletion;
      ctx.m_callback.m_Closure.m_pFunction.__delta = 0;
      ctx.m_callback.m_Closure.m_pthis = this;
      sg.m_sg.m_pKeyValues = 0;
      sg.m_sg.m_pPrevAllocator = 0;
      CEntityKeyValuesModifyScope::BeginModify(&sg.m_sg, &ctx.m_entityKeyValues);
      sg.m_pContext = &ctx;
      CEntityKeyValues::SetValue(&ctx.m_entityKeyValues, -926958586, v5);
      CEntityKeyValuesModifyScope::Release(&sg.m_sg);
      m_Value = this->m_iTeamNum.m_Value;
      v10 = *CBaseEntity::GetAbsOrigin(this);
      DOTA_Character_ScriptSpawn("npc_dota_companion", m_Value, this, 0, &ctx, v10);
      CEntityKeyValues::~CEntityKeyValues(&ctx.m_entityKeyValues);
    }
  }
}


// CDOTA_BaseNPC_Hero::ForcePetRemoval  (line 7256, @0x0000000002922580, libserver.so)
// calls: CDOTA_BaseNPC_Hero::RemovePet
// callers: CDOTAGamerules::RegisterPetInGlobalList
void __fastcall CDOTA_BaseNPC_Hero::ForcePetRemoval(CDOTA_BaseNPC_Hero *const this)
{
  int m_Size; // ebx
  int v3; // ebx
  int v4; // esi

  m_Size = this->m_hPets.m_Size;
  this->m_bPreventPetSpawn = 1;
  v3 = m_Size - 1;
  if ( v3 >= 0 )
  {
    do
    {
      v4 = v3--;
      CDOTA_BaseNPC_Hero::RemovePet(this, v4);
    }
    while ( v3 != -1 );
  }
}


// CDOTA_BaseNPC_Hero::RemovePet  (line 7270, @0x0000000002922450, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Remove, operator CDOTA_BaseNPC_Pet*, operator CEntityInstance*, operator->, operator[]
// calls: CDOTAGamerules::RemovePetFromGlobalList, CDOTA_BaseNPC::ForceKill, CUtlVectorBase<CHandle<CDOTA_BaseNPC_Pet>, CUtlMemory<CHandle<CDOTA_BaseNPC_Pet>, int> >::ShiftElementsLeft
// callers: CDOTA_BaseNPC_Hero::ForcePetRemoval, CDOTA_BaseNPC_Hero::AddPetsFromWearables
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC_Hero::RemovePet(CDOTA_BaseNPC_Hero *const this, int nIdx)
{
  __int64 v4; // r13
  CDOTA_BaseNPC_Pet *m_pInstance; // rsi
  __int64 v6; // r13
  CHandle<CDOTA_BaseNPC_Pet> *v7; // rdx
  uint32 m_Index; // eax
  __int16 v9; // cx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CHandle<CDOTA_BaseNPC_Pet> *v12; // r13
  CDOTA_BaseNPC *v13; // rdi
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx

  if ( nIdx >= 0 && nIdx < this->m_hPets.m_Size )
  {
    v4 = nIdx;
    m_pInstance = 0;
    v6 = v4;
    v7 = &this->m_hPets.m_Memory.m_pMemory[v6];
    m_Index = v7->m_Index;
    if ( v7->m_Index + 2 > 1 )
    {
      v9 = v7->m_Index;
      v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_Index) >> 9) & 0x3F];
      if ( v10 != 0 )
      {
        v11 = &v10[v9 & 0x1FF];
        if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
          m_pInstance = v11->m_pInstance;
      }
    }
    CDOTAGamerules::RemovePetFromGlobalList(g_pGameRules, m_pInstance);
    v12 = &this->m_hPets.m_Memory.m_pMemory[v6];
    v13 = 0;
    if ( v12->m_Index + 2 > 1 )
    {
      v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v12->m_Index) >> 9) & 0x3F];
      if ( v14 != 0 )
      {
        v15 = &v14[v12->m_Index & 0x1FF];
        if ( v15 != 0 && v12->m_Index == v15->m_EHandle.m_Index )
          v13 = v15->m_pInstance;
      }
    }
    CDOTA_BaseNPC::ForceKill(v13, 0);
    CUtlVectorBase<CHandle<CDOTA_BaseNPC_Pet>,CUtlMemory<CHandle<CDOTA_BaseNPC_Pet>,int>>::ShiftElementsLeft(
      &this->m_hPets,
      nIdx,
      1);
    --this->m_hPets.m_Size;
  }
}


// CDOTA_BaseNPC_Hero::GetGreevil  (line 7281, @0x0000000002910520, libserver.so)  // inlines: GetItemInLoadoutForHeroBySlotTypeAndPlayerID
// calls: CDOTA_BaseNPC::GetEconSpecifyingPlayerID, DOTAInventoryManager, CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotType
CEconItemView *__fastcall CDOTA_BaseNPC_Hero::GetGreevil(CDOTA_BaseNPC_Hero *const this)
{
  int EconSpecifyingPlayerID; // ebx
  CDOTAInventoryManager *v2; // rax
  int pPlayerID[5]; // [rsp+Ch] [rbp-14h] BYREF

  EconSpecifyingPlayerID = CDOTA_BaseNPC::GetEconSpecifyingPlayerID(this);
  v2 = DOTAInventoryManager();
  pPlayerID[0] = EconSpecifyingPlayerID;
  return CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotType(v2, 1000, 29, pPlayerID);
}


// CDOTA_BaseNPC_Hero::AddGankMusicElement  (line 7286, @0x0000000002948920, libserver.so)
// calls: CDOTAMusicProbabilityEntry::AddOrReplaceElement
void __fastcall CDOTA_BaseNPC_Hero::AddGankMusicElement(
        CDOTA_BaseNPC_Hero *const this,
        int iElemIndex,
        float a3,
        float flElemVal)
{
  CDOTAMusicProbabilityEntry::AddOrReplaceElement(&this->m_MusicProbabilityGank, iElemIndex, a3, flElemVal);
}


// CDOTA_BaseNPC_Hero::SendGankProbability  (line 7291, @0x0000000002910560, libserver.so)  // inlines: EvaluateAndSendProbability
float __fastcall CDOTA_BaseNPC_Hero::SendGankProbability(CDOTA_BaseNPC_Hero *const this, CDOTA_BaseNPC_Hero *pHero)
{
  CDOTAMusicProbabilityGank *p_m_MusicProbabilityGank; // r12

  p_m_MusicProbabilityGank = &this->m_MusicProbabilityGank;
  (*(this->m_MusicProbabilityGank._vptr_CDOTAMusicProbabilityEntry + 1))(&this->m_MusicProbabilityGank);
  (*(this->m_MusicProbabilityGank._vptr_CDOTAMusicProbabilityEntry + 2))(p_m_MusicProbabilityGank, pHero);
  return this->m_MusicProbabilityGank.m_flProbability;
}


// CDOTA_BaseNPC_Hero::SendGankerProbability  (line 7296, @0x0000000002910db0, libserver.so)
// calls: CDOTAMusicProbabilityGank::SendProbabilityGanker
void __fastcall CDOTA_BaseNPC_Hero::SendGankerProbability(
        CDOTA_BaseNPC_Hero *const this,
        CDOTA_BaseNPC_Hero *pHero,
        double a3,
        float flGankValue)
{
  CDOTAMusicProbabilityGank::SendProbabilityGanker(&this->m_MusicProbabilityGank, pHero, a3, flGankValue);
}


// CDOTA_BaseNPC_Hero::RemoveGankMusicElements  (line 7301, @0x00000000029105b0, libserver.so)  // inlines: Purge, RemoveAll, RemoveAllProbabilityElements
// calls: CUtlMemory<float, int>::Purge
void __fastcall CDOTA_BaseNPC_Hero::RemoveGankMusicElements(CDOTA_BaseNPC_Hero *const this)
{
  bool v1; // zf

  v1 = (this->m_MusicProbabilityGank.m_flProbabilityElements.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_MusicProbabilityGank.m_flProbabilityElements.m_Size = 0;
  if ( v1 )
    CUtlMemory<float,int>::Purge(&this->m_MusicProbabilityGank.m_flProbabilityElements.m_Memory);
}


// CDOTA_BaseNPC_Hero::InventoryUpdated  (line 7306, @0x000000000294b500, libserver.so)
// calls: CDOTA_BaseNPC_Hero::UpdateSharedEconItemSlots, CDOTA_BaseNPC_Hero::UpdateActionItemSlot
// callers: CDOTAPlayer::InventoryUpdated
void __fastcall CDOTA_BaseNPC_Hero::InventoryUpdated(CDOTA_BaseNPC_Hero *const this, CPlayerInventory *pInventory)
{
  CDOTA_BaseNPC_Hero::UpdateSharedEconItemSlots(this);
  CDOTA_BaseNPC_Hero::UpdateActionItemSlot(this);
}


// CDOTA_BaseNPC_Hero::CheckForCourierChange  (line 7315, @0x0000000002945360, libserver.so)  // inlines: AddNPCKeyValuesForUnit, ApplyContextKeys, CDotaNPCSpawnerAsync, CEntityKeyValuesModifyScope, CEntitySpawnerAsync, CEntitySpawnerAsyncBase, CEntitySpawnerBase, CUtlAbstractDelegate, CUtlDelegate, CUtlString, ClosurePtr, EntitySpawnerAsyncDesc_t, FastDelegate2, GetTeamNumber, PrecacheOther, SetValue, SetValue<int>, operator!=, ~CDotaNPCSpawnerAsync, ~CEntitySpawnerAsync, ~CEntitySpawnerAsyncBase
// calls: CEconItemView::GetSOCData, CEconItemView::operator==, CEntityKeyValuesModifyScope::BeginModify, CEntitySpawnerAsync<CDOTA_BaseNPC>::Init, CEntityKeyValues::SetValue, AppendNPCKeyValues, CEntityKeyValues::CopyFrom, CEntityKeyValues::SetValue<int>, CEntitySpawnerAsyncBase<CDOTA_BaseNPC>::SpawnInternal, CEntitySpawnerBase<CDOTA_BaseNPC>::~CEntitySpawnerBase, _Unwind_Resume
// callers: CDOTA_BaseNPC_Hero::CheckForCourierOrWardChange, CDOTA_BaseNPC_Hero::UpdateSharedEconItemSlots
// strings: "npc_dota_courier"
void __fastcall CDOTA_BaseNPC_Hero::CheckForCourierChange(
        CDOTA_BaseNPC_Hero *const this,
        CEconItemView *pItem,
        int nPlayerID)
{
  CEntitySpawnerContext<CDOTA_BaseNPC> *i; // rbx
  int nPlayerIDa; // [rsp+Ch] [rbp-104h] BYREF
  EntitySpawnerAsyncDesc_t<CDOTA_BaseNPC> spawnerDesc; // [rsp+10h] [rbp-100h] BYREF
  CDotaNPCSpawnerAsync<CDOTA_BaseNPC> courierSpawner; // [rsp+40h] [rbp-D0h] BYREF

  nPlayerIDa = nPlayerID;
  if ( pItem != 0
    && CEconItemView::GetSOCData(pItem) != 0
    && !CEconItemView::operator==(this->m_pAtPrecacheCourierView, pItem) )
  {
    this->m_bHasChangedCourierSincePrecache = 1;
    courierSpawner.m_modifyScope.m_pKeyValues = 0;
    courierSpawner.m_modifyScope.m_pPrevAllocator = 0;
    CEntityKeyValuesModifyScope::BeginModify(&courierSpawner.m_modifyScope, 0);
    courierSpawner.m_pContext = 0;
    courierSpawner.m_scriptClassName.m_pString = 0;
    courierSpawner.m_pFilter = 0;
    courierSpawner._vptr_CEntitySpawnerBase = off_40FBF10;
    spawnerDesc.m_hOwnerSpawnGroup = 0;
    spawnerDesc.m_pContext = 0;
    spawnerDesc.m_pSpawnGroupToWorld = 0;
    spawnerDesc.m_nManifestPriority = ResourceManifestLoadPriority_t::RESOURCE_MANIFEST_LOAD_PRIORITY_DEFAULT;
    spawnerDesc.m_iPriorityLoader = -2;
    spawnerDesc.m_bManualCompletion = 0;
    spawnerDesc.m_worldGroupId.m_nHashCode = 0;
    spawnerDesc.m_behavior = EntitySpawnerAsyncBehavior_t::ENTITY_SPAWNER_ASYNC_PRECACHE_ONLY;
    spawnerDesc.m_flTimeoutInterval = 30.0;
    CEntitySpawnerAsync<CDOTA_BaseNPC>::Init(&courierSpawner, &spawnerDesc);
    courierSpawner._vptr_CEntitySpawnerBase = off_40FBF30;
    CEntityKeyValues::SetValue(courierSpawner.m_pEntityKeyValues, -782893907, "npc_dota_courier");
    AppendNPCKeyValues("npc_dota_courier", courierSpawner.m_pEntityKeyValues, 0);
    for ( i = courierSpawner.m_pContext; i != 0; i = i->m_pParent )
      CEntityKeyValues::CopyFrom(courierSpawner.m_pEntityKeyValues, &i->m_entityKeyValues, 0);
    CEntityKeyValues::SetValue<int>(courierSpawner.m_pEntityKeyValues, 2034954718, &nPlayerIDa);
    spawnerDesc.m_behavior = this->m_iTeamNum.m_Value;
    CEntityKeyValues::SetValue<int>(courierSpawner.m_pEntityKeyValues, -175874245, &spawnerDesc);
    memset(&spawnerDesc, 0, 24);
    CEntitySpawnerAsyncBase<CDOTA_BaseNPC>::SpawnInternal(&courierSpawner, 0, &spawnerDesc);
    courierSpawner._vptr_CEntitySpawnerBase = off_40FBEF0;
    CEntitySpawnerBase<CDOTA_BaseNPC>::~CEntitySpawnerBase(&courierSpawner);
  }
}


// CDOTA_BaseNPC_Hero::CheckForWardChange  (line 7333, @0x00000000029455b0, libserver.so)  // inlines: AddNPCKeyValuesForUnit, ApplyContextKeys, CDotaNPCSpawnerAsync, CEntityKeyValuesModifyScope, CEntitySpawnerAsync, CEntitySpawnerAsyncBase, CEntitySpawnerBase, CUtlAbstractDelegate, CUtlDelegate, CUtlString, ClosurePtr, EntitySpawnerAsyncDesc_t, FastDelegate2, GetTeamNumber, PrecacheOther, SetValue, SetValue<int>, operator!=, ~CDotaNPCSpawnerAsync, ~CEntitySpawnerAsync, ~CEntitySpawnerAsyncBase
// calls: CEconItemView::GetSOCData, CEconItemView::operator==, CEntityKeyValuesModifyScope::BeginModify, CEntitySpawnerAsync<CDOTA_BaseNPC>::Init, CEntityKeyValues::SetValue, AppendNPCKeyValues, CEntityKeyValues::CopyFrom, CEntityKeyValues::SetValue<int>, CEntitySpawnerAsyncBase<CDOTA_BaseNPC>::SpawnInternal, CEntitySpawnerBase<CDOTA_BaseNPC>::~CEntitySpawnerBase, _Unwind_Resume
// callers: CDOTA_BaseNPC_Hero::CheckForCourierOrWardChange, CDOTA_BaseNPC_Hero::UpdateSharedEconItemSlots
// strings: "npc_dota_observer_wards", "npc_dota_sentry_wards"
void __fastcall CDOTA_BaseNPC_Hero::CheckForWardChange(
        CDOTA_BaseNPC_Hero *const this,
        CEconItemView *pItem,
        int nPlayerID)
{
  CEntitySpawnerContext<CDOTA_BaseNPC> *i; // rbx
  CEntitySpawnerContext<CDOTA_BaseNPC> *j; // rbx
  int nPlayerIDa; // [rsp+Ch] [rbp-1E4h] BYREF
  __int64 v8[4]; // [rsp+10h] [rbp-1E0h] BYREF
  EntitySpawnerAsyncDesc_t<CDOTA_BaseNPC> spawnerDesc; // [rsp+30h] [rbp-1C0h] BYREF
  CDotaNPCSpawnerAsync<CDOTA_BaseNPC> observerSpawner; // [rsp+60h] [rbp-190h] BYREF
  CDotaNPCSpawnerAsync<CDOTA_BaseNPC> sentrySpawner; // [rsp+110h] [rbp-E0h] BYREF

  nPlayerIDa = nPlayerID;
  if ( pItem != 0
    && CEconItemView::GetSOCData(pItem) != 0
    && !CEconItemView::operator==(this->m_pAtPrecacheWardView, pItem) )
  {
    this->m_bHasChangedWardsSincePrecache = 1;
    observerSpawner.m_modifyScope.m_pKeyValues = 0;
    observerSpawner.m_modifyScope.m_pPrevAllocator = 0;
    CEntityKeyValuesModifyScope::BeginModify(&observerSpawner.m_modifyScope, 0);
    observerSpawner.m_scriptClassName.m_pString = 0;
    observerSpawner.m_pContext = 0;
    observerSpawner.m_pFilter = 0;
    observerSpawner._vptr_CEntitySpawnerBase = off_40FBF10;
    sentrySpawner.m_modifyScope.m_pKeyValues = 0;
    sentrySpawner.m_modifyScope.m_pPrevAllocator = 0;
    sentrySpawner.m_pEntityClass = 0xFFFFFFFEFFFFFFFFLL;
    LOBYTE(sentrySpawner.m_scriptClassName.m_pString) = 0;
    HIDWORD(sentrySpawner.m_scriptClassName.m_pString) = 0;
    sentrySpawner._vptr_CEntitySpawnerBase = &loc_2;
    LODWORD(sentrySpawner.m_pEntityKeyValues) = 1106247680;
    CEntitySpawnerAsync<CDOTA_BaseNPC>::Init(&observerSpawner, &sentrySpawner);
    observerSpawner._vptr_CEntitySpawnerBase = off_40FBF30;
    CEntityKeyValues::SetValue(observerSpawner.m_pEntityKeyValues, -782893907, "npc_dota_observer_wards");
    AppendNPCKeyValues("npc_dota_observer_wards", observerSpawner.m_pEntityKeyValues, 0);
    for ( i = observerSpawner.m_pContext; i != 0; i = i->m_pParent )
      CEntityKeyValues::CopyFrom(observerSpawner.m_pEntityKeyValues, &i->m_entityKeyValues, 0);
    CEntityKeyValues::SetValue<int>(observerSpawner.m_pEntityKeyValues, 2034954718, &nPlayerIDa);
    LODWORD(sentrySpawner._vptr_CEntitySpawnerBase) = this->m_iTeamNum.m_Value;
    CEntityKeyValues::SetValue<int>(observerSpawner.m_pEntityKeyValues, -175874245, &sentrySpawner);
    memset(v8, 0, 24);
    CEntitySpawnerAsyncBase<CDOTA_BaseNPC>::SpawnInternal(&observerSpawner, 0, v8);
    sentrySpawner.m_modifyScope.m_pKeyValues = 0;
    sentrySpawner._vptr_CEntitySpawnerBase = off_40FBED0;
    sentrySpawner.m_modifyScope.m_pPrevAllocator = 0;
    CEntityKeyValuesModifyScope::BeginModify(&sentrySpawner.m_modifyScope, 0);
    sentrySpawner.m_pContext = 0;
    sentrySpawner.m_scriptClassName.m_pString = 0;
    sentrySpawner.m_pFilter = 0;
    sentrySpawner._vptr_CEntitySpawnerBase = off_40FBF10;
    spawnerDesc.m_hOwnerSpawnGroup = 0;
    spawnerDesc.m_pContext = 0;
    spawnerDesc.m_pSpawnGroupToWorld = 0;
    spawnerDesc.m_nManifestPriority = ResourceManifestLoadPriority_t::RESOURCE_MANIFEST_LOAD_PRIORITY_DEFAULT;
    spawnerDesc.m_iPriorityLoader = -2;
    spawnerDesc.m_bManualCompletion = 0;
    spawnerDesc.m_worldGroupId.m_nHashCode = 0;
    spawnerDesc.m_behavior = EntitySpawnerAsyncBehavior_t::ENTITY_SPAWNER_ASYNC_PRECACHE_ONLY;
    spawnerDesc.m_flTimeoutInterval = 30.0;
    CEntitySpawnerAsync<CDOTA_BaseNPC>::Init(&sentrySpawner, &spawnerDesc);
    sentrySpawner._vptr_CEntitySpawnerBase = off_40FBF30;
    CEntityKeyValues::SetValue(sentrySpawner.m_pEntityKeyValues, -782893907, "npc_dota_sentry_wards");
    AppendNPCKeyValues("npc_dota_sentry_wards", sentrySpawner.m_pEntityKeyValues, 0);
    for ( j = sentrySpawner.m_pContext; j != 0; j = j->m_pParent )
      CEntityKeyValues::CopyFrom(sentrySpawner.m_pEntityKeyValues, &j->m_entityKeyValues, 0);
    CEntityKeyValues::SetValue<int>(sentrySpawner.m_pEntityKeyValues, 2034954718, &nPlayerIDa);
    spawnerDesc.m_behavior = this->m_iTeamNum.m_Value;
    CEntityKeyValues::SetValue<int>(sentrySpawner.m_pEntityKeyValues, -175874245, &spawnerDesc);
    memset(&spawnerDesc, 0, 24);
    CEntitySpawnerAsyncBase<CDOTA_BaseNPC>::SpawnInternal(&sentrySpawner, 0, &spawnerDesc);
    sentrySpawner._vptr_CEntitySpawnerBase = off_40FBEF0;
    CEntitySpawnerBase<CDOTA_BaseNPC>::~CEntitySpawnerBase(&sentrySpawner);
    observerSpawner._vptr_CEntitySpawnerBase = off_40FBEF0;
    CEntitySpawnerBase<CDOTA_BaseNPC>::~CEntitySpawnerBase(&observerSpawner);
  }
}


// CDOTA_BaseNPC_Hero::CheckForCourierOrWardChange  (line 7356, @0x00000000029459e0, libserver.so)  // inlines: GetItemInLoadoutForHeroBySlotTypeAndPlayerID
// calls: CDOTA_BaseNPC::GetEconSpecifyingPlayerID, DOTAInventoryManager, CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotType, CDOTA_BaseNPC_Hero::CheckForCourierChange, CDOTA_BaseNPC_Hero::CheckForWardChange
// callers: CDOTAPlayer::OnReconnect, CDOTA_BaseNPC_Hero::UpdateNonCacheableWearableData, OnHeroSpawned
void __fastcall CDOTA_BaseNPC_Hero::CheckForCourierOrWardChange(CDOTA_BaseNPC_Hero *const this)
{
  int EconSpecifyingPlayerID; // r12d
  CDOTAInventoryManager *v3; // rax
  CEconItemView *ItemInLoadoutForHeroBySlotType; // rax
  CDOTAInventoryManager *v5; // rax
  CEconItemView *v6; // rax
  int pPlayerID; // [rsp+8h] [rbp-18h] BYREF
  int v8[5]; // [rsp+Ch] [rbp-14h] BYREF

  EconSpecifyingPlayerID = CDOTA_BaseNPC::GetEconSpecifyingPlayerID(this);
  if ( EconSpecifyingPlayerID >= 0 )
  {
    if ( this->m_pAtPrecacheCourierView != 0 )
    {
      v3 = DOTAInventoryManager();
      pPlayerID = EconSpecifyingPlayerID;
      ItemInLoadoutForHeroBySlotType = CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotType(
                                         v3,
                                         1000,
                                         29,
                                         &pPlayerID);
      CDOTA_BaseNPC_Hero::CheckForCourierChange(this, ItemInLoadoutForHeroBySlotType, EconSpecifyingPlayerID);
    }
    if ( this->m_pAtPrecacheWardView != 0 )
    {
      v5 = DOTAInventoryManager();
      v8[0] = EconSpecifyingPlayerID;
      v6 = CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotType(v5, 1000, 33, v8);
      CDOTA_BaseNPC_Hero::CheckForWardChange(this, v6, EconSpecifyingPlayerID);
    }
  }
}


// CDOTA_BaseNPC_Hero::UpdateSharedEconItemSlots  (line 7375, @0x0000000002946420, libserver.so)  // inlines: GetItemInLoadoutForHeroBySlotTypeAndPlayerID
// calls: CDOTA_BaseNPC::GetEconSpecifyingPlayerID, DOTAInventoryManager, CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotType, CEconItemView::GetSOCData, AddEconItemToStringTable, CDOTA_BaseNPC_Hero::CheckForCourierChange, CDOTA_BaseNPC_Hero::CheckForWardChange
// callers: CDOTA_BaseNPC_Hero::BuildWearableSpawnList, CDOTA_BaseNPC_Hero::InventoryUpdated
void __fastcall CDOTA_BaseNPC_Hero::UpdateSharedEconItemSlots(CDOTA_BaseNPC_Hero *const this)
{
  int v2; // ebx
  int EconSpecifyingPlayerID; // r13d
  CDOTAInventoryManager *v4; // rax
  CEconItemView *ItemInLoadoutForHeroBySlotType; // rax
  CEconItemView *v6; // r12
  CEconItem *SOCData; // rax
  int pPlayerID[13]; // [rsp+Ch] [rbp-34h] BYREF

  v2 = 28;
  EconSpecifyingPlayerID = CDOTA_BaseNPC::GetEconSpecifyingPlayerID(this);
  if ( EconSpecifyingPlayerID >= 0 )
  {
    do
    {
      v4 = DOTAInventoryManager();
      pPlayerID[0] = EconSpecifyingPlayerID;
      ItemInLoadoutForHeroBySlotType = CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotType(v4, 1000, v2, pPlayerID);
      v6 = ItemInLoadoutForHeroBySlotType;
      if ( ItemInLoadoutForHeroBySlotType != 0 && CEconItemView::GetSOCData(ItemInLoadoutForHeroBySlotType) != 0 )
      {
        if ( v2 == 29 )
        {
          if ( this->m_pAtPrecacheCourierView != 0 )
            CDOTA_BaseNPC_Hero::CheckForCourierChange(this, v6, EconSpecifyingPlayerID);
        }
        else if ( v2 == 33 && this->m_pAtPrecacheWardView != 0 )
        {
          CDOTA_BaseNPC_Hero::CheckForWardChange(this, v6, EconSpecifyingPlayerID);
        }
        SOCData = CEconItemView::GetSOCData(v6);
        AddEconItemToStringTable(SOCData);
      }
      ++v2;
    }
    while ( v2 != 44 );
  }
}


// CDOTA_BaseNPC_Hero::CheckGankEnemies  (line 7401, @0x0000000002919e00, libserver.so)
// calls: CDOTAMusicProbabilityGank::CheckGankTimer
void __fastcall CDOTA_BaseNPC_Hero::CheckGankEnemies(CDOTA_BaseNPC_Hero *const this)
{
  CDOTAMusicProbabilityGank::CheckGankTimer(&this->m_MusicProbabilityGank, this);
}


// CDOTA_BaseNPC_Hero::SetWearableModelIndex  (line 7406, @0x00000000029105e0, libserver.so)  // inlines: CWeakHandle, Init, operator!=
// calls: CBaseModelEntity::SetModel, CBaseEntity::FirstMoveChild, __dynamic_cast, CBaseEntity::NextMovePeer
// callers: CDOTA_Unit_Hero_Tiny::UpdateOnModelChange, CDOTA_Unit_Hero_NightStalker::UpdateOnModelChange
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_BaseNPC_Hero::SetWearableModelIndex(
        CDOTA_BaseNPC_Hero *const this,
        unsigned int nWearableModelIndex,
        HModel nBaseModelIndex)
{
  CBaseEntity *i; // rbx
  CBaseModelEntity *v5; // rax
  CBaseModelEntity *v6; // r15
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r14
  unsigned __int16 (__fastcall ***v10)(_QWORD); // rax
  __int64 v11; // rax
  __int64 v12; // rax
  HModel hModel; // [rsp+10h] [rbp-40h] BYREF

  if ( nBaseModelIndex.m_pBinding->m_pData != 0 )
  {
    hModel.m_pBinding = nBaseModelIndex.m_pBinding->m_pData;
    CBaseModelEntity::SetModel(this, &hModel);
  }
  for ( i = CBaseEntity::FirstMoveChild(this); i != 0; i = CBaseEntity::NextMovePeer(i) )
  {
    v5 = __dynamic_cast(i, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTAWearableItem, 0);
    v6 = v5;
    if ( v5 != 0 )
    {
      v7 = (*(v5->_vptr_IHandleEntity + 265))(v5);
      v8 = v7;
      v9 = v7 + 104;
      if ( v7 != -104 )
      {
        v10 = (*(*(v7 + 104) + 96LL))(v9);
        if ( INVALID_ITEM_DEF_INDEX.m_Data != (**v10)(v10) )
        {
          v11 = (*(*(v8 + 104) + 96LL))(v9);
          v12 = (*(*v11 + 56LL))(v11, nWearableModelIndex);
          if ( v12 != 0 )
          {
            (*(modelinfo->_vptr_IAppSystem + 13))(&hModel, modelinfo, v12);
            CBaseModelEntity::SetModel(v6, &hModel);
          }
        }
      }
    }
  }
}


// CDOTA_BaseNPC_Hero::UpdateActionItemSlot  (line 7434, @0x000000000294b100, libserver.so)  // inlines: CAttributeIterator_GetTypedAttributeValue, CEntityHandle, CHandle, CSchemaFieldHandle, FindAttribute_UnsafeBitwiseCast<unsigned int, float, CEconItemView>, Get, GetAbilityName, GetAsset, GetGameMode, GetInstance, GetItemInLoadoutForHeroBySlotTypeAndPlayerID, GetItemIndex, GetTypeName, GetTypedRef, NetworkStateChanged, Set, String, ToDOTAAbility, _V_strcmp, operator CBaseEntity*, operator const CEconItemAttributeDefinition*, operator=, operator=<CDOTABaseAbility*>, operator=<CEntityHandle>
// calls: CDOTA_BaseNPC::GetEconSpecifyingPlayerID, DOTAInventoryManager, CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotType, GEconItemSchema, CEconItemSchema::GetAttributeDefinitionByName, CEntityHandle::operator CEntityInstance*, __dynamic_cast, UTIL_Remove, operator!=<CBaseEntity>, GetAssetModifier<CEconItemView, CAbilityNameModifier>, CUtlString::Get, DOTA_CreateAbility (19 total)
// callers: CDOTA_BaseNPC_Hero::InventoryUpdated, CDOTA_BaseNPC_Hero::Spawn
// strings: "hero_ability", "gamemode restricted"
// globals: `guard variable for'CDOTA_BaseNPC_Hero::UpdateActionItemSlot(void)::pAttrib_GameModeRestricted, CDOTA_BaseNPC_Hero::UpdateActionItemSlot(void)::pAttrib_GameModeRestricted, INVALID_ITEM_DEF_INDEX, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
void __fastcall CDOTA_BaseNPC_Hero::UpdateActionItemSlot(CDOTA_BaseNPC_Hero *const this)
{
  int EconSpecifyingPlayerID; // ebx
  CDOTAInventoryManager *v3; // rax
  CEconItemView *ItemInLoadoutForHeroBySlotType; // rbx
  uint32 v5; // r13d
  const CEconItemAttributeDefinition *m_pRef; // rax
  const char *m_szName; // r14
  CEconItemSchema *v8; // rax
  CEntityInstance *v9; // rax
  CEntityInstance *v10; // rax
  uint16 m_Data; // r14
  CEntityInstance *v12; // rax
  CEntityInstance *v13; // rax
  __int64 v14; // rax
  const char *v15; // rsi
  const CAbilityNameModifier *Asset; // rax
  const char *v17; // rax
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v19; // rbx
  CEconItemSchema *v20; // rax
  uint32 m_unResetCount; // eax
  float flGameMode; // [rsp+8h] [rbp-58h] BYREF
  int pPlayerID; // [rsp+Ch] [rbp-54h] BYREF
  CHandle<CBaseEntity> b[2]; // [rsp+10h] [rbp-50h] BYREF
  const CEconItemAttributeDefinition *v25; // [rsp+18h] [rbp-48h]
  float *p_flGameMode; // [rsp+20h] [rbp-40h]
  char v27; // [rsp+28h] [rbp-38h]

  EconSpecifyingPlayerID = CDOTA_BaseNPC::GetEconSpecifyingPlayerID(this);
  v3 = DOTAInventoryManager();
  pPlayerID = EconSpecifyingPlayerID;
  ItemInLoadoutForHeroBySlotType = CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotType(v3, 1000, 28, &pPlayerID);
  if ( ItemInLoadoutForHeroBySlotType == 0 )
    goto LABEL_9;
  if ( `guard variable for'CDOTA_BaseNPC_Hero::UpdateActionItemSlot(void)::pAttrib_GameModeRestricted == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Hero::UpdateActionItemSlot(void)::pAttrib_GameModeRestricted) != 0 )
  {
    CDOTA_BaseNPC_Hero::UpdateActionItemSlot(void)::pAttrib_GameModeRestricted.m_szName = "gamemode restricted";
    v20 = GEconItemSchema();
    CDOTA_BaseNPC_Hero::UpdateActionItemSlot(void)::pAttrib_GameModeRestricted.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(
                                                                                          v20,
                                                                                          "gamemode restricted");
    m_unResetCount = GEconItemSchema()->m_unResetCount;
    CDOTA_BaseNPC_Hero::UpdateActionItemSlot(void)::pAttrib_GameModeRestricted.m_bDestructName = 0;
    CDOTA_BaseNPC_Hero::UpdateActionItemSlot(void)::pAttrib_GameModeRestricted.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Hero::UpdateActionItemSlot(void)::pAttrib_GameModeRestricted);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &CDOTA_BaseNPC_Hero::UpdateActionItemSlot(void)::pAttrib_GameModeRestricted,
      &_dso_handle);
  }
  flGameMode = 0.0;
  if ( CDOTA_BaseNPC_Hero::UpdateActionItemSlot(void)::pAttrib_GameModeRestricted.m_szName == 0 )
    goto LABEL_15;
  v5 = GEconItemSchema()->m_unResetCount;
  m_pRef = CDOTA_BaseNPC_Hero::UpdateActionItemSlot(void)::pAttrib_GameModeRestricted.m_pRef;
  if ( v5 != CDOTA_BaseNPC_Hero::UpdateActionItemSlot(void)::pAttrib_GameModeRestricted.m_unSchemaGeneration )
  {
    m_szName = CDOTA_BaseNPC_Hero::UpdateActionItemSlot(void)::pAttrib_GameModeRestricted.m_szName;
    v8 = GEconItemSchema();
    m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v8, m_szName);
    CDOTA_BaseNPC_Hero::UpdateActionItemSlot(void)::pAttrib_GameModeRestricted.m_unSchemaGeneration = v5;
    CDOTA_BaseNPC_Hero::UpdateActionItemSlot(void)::pAttrib_GameModeRestricted.m_pRef = m_pRef;
  }
  if ( m_pRef != 0
    && (v25 = m_pRef,
        *&b[0].m_Index = off_40FDAF0,
        p_flGameMode = &flGameMode,
        v27 = 0,
        (*(ItemInLoadoutForHeroBySlotType->_vptr_IEconItemInterface + 28))(ItemInLoadoutForHeroBySlotType, b),
        v27 != 0)
    && (flGameMode + 0.01) != *&g_pGameRules[6].m_szQuestName[68] )
  {
LABEL_9:
    v9 = CEntityHandle::operator CEntityInstance *(&this->m_hEconConsumableAbility.m_Value);
    if ( v9 != 0 )
    {
      v10 = __dynamic_cast(v9, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
      if ( v10 != 0 )
      {
        UTIL_Remove(v10);
        b[0].m_Index = -1;
        if ( operator!=<CBaseEntity>(&this->m_hEconConsumableAbility.m_Value, b) )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 5736, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_hEconConsumableAbility.m_Value = b[0];
        }
      }
    }
    this->m_nEconConsumableItemIndex = INVALID_ITEM_DEF_INDEX;
  }
  else
  {
LABEL_15:
    m_Data = ItemInLoadoutForHeroBySlotType->m_iItemDefinitionIndex.m_Value.m_Data;
    if ( m_Data != this->m_nEconConsumableItemIndex.m_Data )
    {
      v12 = CEntityHandle::operator CEntityInstance *(&this->m_hEconConsumableAbility.m_Value);
      if ( v12 != 0 )
      {
        v13 = __dynamic_cast(v12, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
        if ( v13 != 0 )
        {
          UTIL_Remove(v13);
          b[0].m_Index = -1;
          if ( operator!=<CBaseEntity>(&this->m_hEconConsumableAbility.m_Value, b) )
          {
            (*(this->_vptr_IHandleEntity + 22))(this, 5736, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            this->m_hEconConsumableAbility.m_Value = b[0];
          }
          this->m_nEconConsumableItemIndex = INVALID_ITEM_DEF_INDEX;
        }
      }
      if ( *((*(ItemInLoadoutForHeroBySlotType->_vptr_IEconItemInterface + 12))(ItemInLoadoutForHeroBySlotType) + 192) != 0 )
      {
        v14 = *((*(ItemInLoadoutForHeroBySlotType->_vptr_IEconItemInterface + 12))(ItemInLoadoutForHeroBySlotType) + 192);
        if ( v14 != 0 )
        {
          v15 = *(v14 + 8);
          if ( v15 != 0 && strcmp(v15, "hero_ability") == 0 )
          {
            Asset = GetAssetModifier<CEconItemView,CAbilityNameModifier>(ItemInLoadoutForHeroBySlotType);
            if ( Asset != 0 )
            {
              v17 = CUtlString::Get(&Asset->m_strAsset);
              if ( v17 != 0 )
              {
                Ability = DOTA_CreateAbility(v17, this);
                v19 = Ability;
                if ( Ability != 0 )
                {
                  (*(Ability->_vptr_IHandleEntity + 212))(Ability, 1);
                  CHandle<CBaseEntity>::CHandle(b, v19);
                  if ( operator!=<CBaseEntity>(&this->m_hEconConsumableAbility.m_Value, b) )
                  {
                    (*(this->_vptr_IHandleEntity + 22))(this, 5736, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                    this->m_hEconConsumableAbility.m_Value = b[0];
                  }
                  CDOTABaseAbility::SetBackedByEconConsumableIndex(v19, m_Data);
                  this->m_nEconConsumableItemIndex.m_Data = m_Data;
                }
              }
            }
          }
        }
      }
    }
  }
}


// CDOTA_BaseNPC_Hero::GetEconConsumableAbility  (line 7529, @0x00000000029106f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTAAbility, operator CBaseEntity*, operator CEntityInstance*
// calls: __dynamic_cast
// globals: CEntityHandle::gm_pEntityList
CDOTABaseAbility *__fastcall CDOTA_BaseNPC_Hero::GetEconConsumableAbility(CDOTA_BaseNPC_Hero *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx

  m_Index = this->m_hEconConsumableAbility.m_Value.m_Index;
  if ( m_Index + 2 > 1
    && (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEconConsumableAbility.m_Value.m_Index) >> 9)
                                                            & 0x3F]) != 0
    && (v3 = &v2[this->m_hEconConsumableAbility.m_Value.m_Index & 0x1FF]) != 0
    && m_Index == v3->m_EHandle.m_Index
    && v3->m_pInstance != 0 )
  {
    return __dynamic_cast(v3->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
  }
  else
  {
    return 0;
  }
}


// CDOTA_BaseNPC_Hero::SetBotDifficulty  (line 7534, @0x00000000028f5e10, libserver.so)  // inlines: SetBotDifficulty
// calls: CDOTA_PlayerResource::IsFakeClient
void __fastcall CDOTA_BaseNPC_Hero::SetBotDifficulty(CDOTA_BaseNPC_Hero *const this, int nDifficulty)
{
  CDOTA_Bot *m_pBot; // rbx

  m_pBot = this->m_pBot;
  if ( m_pBot != 0 && CDOTA_PlayerResource::IsFakeClient(g_pDOTAPlayerResource, this->m_iPlayerID.m_Value) )
    m_pBot->m_iDifficulty = nDifficulty;
}


// CDOTA_BaseNPC_Hero::UpdateBotDifficulty  (line 7547, @0x0000000002910770, libserver.so)  // inlines: GetPlayerID, Max<int>, SetBotDifficulty
// calls: CDOTA_PlayerResource::IsFakeClient, CDOTA_TeamCommander::AreAnyHumansOnTeam, CDOTA_Bot::GetOpposingTeamCommander, CDOTA_TeamCommander::GetRequestedBotDifficulty
// callers: CDOTA_BaseNPC_Hero::Spawn
void __fastcall CDOTA_BaseNPC_Hero::UpdateBotDifficulty(CDOTA_BaseNPC_Hero *const this)
{
  CDOTA_Bot *m_pBot; // rbx
  int m_Value; // r12d
  bool v3; // r13
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  bool v5; // r14
  int RequestedBotDifficulty; // eax

  m_pBot = this->m_pBot;
  if ( m_pBot != 0 )
  {
    m_Value = this->m_iPlayerID.m_Value;
    if ( CDOTA_PlayerResource::IsFakeClient(g_pDOTAPlayerResource, m_Value) )
    {
      v3 = CDOTA_TeamCommander::AreAnyHumansOnTeam(m_pBot->m_pTeamCommander);
      OpposingTeamCommander = CDOTA_Bot::GetOpposingTeamCommander(m_pBot);
      v5 = CDOTA_TeamCommander::AreAnyHumansOnTeam(OpposingTeamCommander);
      RequestedBotDifficulty = CDOTA_TeamCommander::GetRequestedBotDifficulty(m_pBot->m_pTeamCommander, m_Value);
      if ( RequestedBotDifficulty != 0 && !v5 && v3 && RequestedBotDifficulty <= 2 )
        RequestedBotDifficulty = 3;
      m_pBot->m_iDifficulty = RequestedBotDifficulty;
    }
  }
}


// CDOTA_BaseNPC_Hero::Script_GetAdditionalOwnedUnits  (line 7574, @0x000000000291a7b0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, EntityToHScript, Free, Get, GetPublicScriptScope, Purge, RemoveAll, TakeOwnership, ToHScript, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase
// calls: CEntityInstance::CreatePublicScriptScope, CUtlMemory<CDOTA_BaseNPC*, int>::Purge, CVariantBase<CVariantDefaultAllocator>::Free, CUtlVectorBase<CDOTA_BaseNPC*, CUtlMemory<CDOTA_BaseNPC*, int> >::~CUtlVectorBase, _Unwind_Resume
__int64 *__fastcall CDOTA_BaseNPC_Hero::Script_GetAdditionalOwnedUnits(__int64 *a1, CDOTA_BaseNPC_Hero *const this)
{
  __int64 v4; // rax
  __int64 v5; // r13
  int i; // ebx
  HSCRIPT m_hScope; // rax
  void (__fastcall *v8)(IScriptVM *, __int64, _QWORD, HSCRIPT *); // r14
  CDOTA_BaseNPC *v9; // r12
  IScriptVM *v10; // rdi
  __int64 varTable_8; // [rsp+10h] [rbp-70h]
  HSCRIPT v14; // [rsp+20h] [rbp-60h] BYREF
  __int16 v15; // [rsp+28h] [rbp-58h]
  __int16 v16; // [rsp+2Ah] [rbp-56h]
  CUtlVector<CDOTA_BaseNPC*,CUtlMemory<CDOTA_BaseNPC*,int> > vecOwnedUnits; // [rsp+30h] [rbp-50h] BYREF

  *a1 = 0;
  *(a1 + 4) = 0;
  *(a1 + 5) = 0;
  (*(*g_pScriptVM + 360LL))(g_pScriptVM, a1);
  v4 = *a1;
  vecOwnedUnits.m_Size = 0;
  vecOwnedUnits.m_Memory.m_pMemory = 0;
  vecOwnedUnits.m_Memory.m_nAllocationCount = 0;
  vecOwnedUnits.m_Memory.m_nGrowSize = 0;
  varTable_8 = v4;
  (*(this->_vptr_IHandleEntity + 499))(this, &vecOwnedUnits);
  v5 = 0;
  for ( i = 0; vecOwnedUnits.m_Size > i; ++v5 )
  {
    v10 = g_pScriptVM;
    v8 = *(*g_pScriptVM + 248LL);
    v9 = vecOwnedUnits.m_Memory.m_pMemory[v5];
    if ( v9 != 0 )
    {
      m_hScope = v9->m_pEntity->m_hPublicScope.m_hScope;
      if ( m_hScope == 0 )
      {
        CEntityInstance::CreatePublicScriptScope(vecOwnedUnits.m_Memory.m_pMemory[v5], 0);
        v10 = g_pScriptVM;
        m_hScope = v9->m_pEntity->m_hPublicScope.m_hScope;
      }
    }
    else
    {
      m_hScope = 0;
    }
    v16 = 0;
    v15 = 31;
    v14 = m_hScope;
    v8(v10, varTable_8, i, &v14);
    if ( (v16 & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v14);
    ++i;
  }
  if ( *(a1 + 4) == 31 )
    *(a1 + 4) = 36;
  vecOwnedUnits.m_Size = 0;
  if ( (vecOwnedUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&vecOwnedUnits.m_Memory);
    if ( (vecOwnedUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&vecOwnedUnits.m_Memory);
  }
  return a1;
}


// CDOTA_BaseNPC_Hero::GetAdditionalOwnedUnits  (line 7592, @0x00000000028f5aa0, libserver.so)
// calls: CDOTA_BaseNPC::GetAbilityByIndex
void __fastcall CDOTA_BaseNPC_Hero::GetAdditionalOwnedUnits(
        CDOTA_BaseNPC_Hero *const this,
        CUtlVector<CDOTA_BaseNPC*,CUtlMemory<CDOTA_BaseNPC*,int> > *vecOwnedUnits)
{
  int i; // ebx
  CDOTABaseAbility *AbilityByIndex; // rax

  for ( i = 0; i != 24; ++i )
  {
    AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(this, i);
    if ( AbilityByIndex != 0 )
      (*(AbilityByIndex->_vptr_IHandleEntity + 287))(AbilityByIndex, vecOwnedUnits);
  }
}


// CDOTA_BaseNPC_Hero::GetNearestPet  (line 7606, @0x0000000002910810, libserver.so)  // inlines: DistToSqr, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LengthSqr, LookupEntity, operator CDOTA_BaseNPC_Pet*, operator CEntityInstance*, operator->, operator[]
// calls: CBaseEntity::GetAbsOrigin
// callers: CDOTA_Modifier_Teleporting::OnTeleported, CDOTA_Modifier_Teleporting::OnIntervalThink, CDOTA_Modifier_Teleporting::OnCreated
// globals: CEntityHandle::gm_pEntityList
CDOTA_BaseNPC_Pet *__fastcall CDOTA_BaseNPC_Hero::GetNearestPet(CDOTA_BaseNPC_Hero *const this)
{
  __int64 v2; // r13
  int v3; // r15d
  CDOTA_BaseNPC_Pet *v4; // r14
  int v5; // xmm3_4
  CHandle<CDOTA_BaseNPC_Pet> *v6; // rdx
  uint32 v7; // eax
  __int16 v8; // cx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  const CBaseEntity *m_pInstance; // rdi
  CHandle<CDOTA_BaseNPC_Pet> *v12; // rdx
  uint32 m_Index; // eax
  __int16 v14; // cx
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  const Vector *AbsOrigin; // rbx
  const Vector *v18; // rax
  float v19; // xmm0_4
  float flNearestSqr; // [rsp+Ch] [rbp-34h]

  if ( this->m_hPets.m_Size <= 0 )
    return 0;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = -1082130432;
  do
  {
    m_pInstance = 0;
    v12 = &this->m_hPets.m_Memory.m_pMemory[v2];
    m_Index = v12->m_Index;
    if ( v12->m_Index + 2 > 1 )
    {
      v14 = v12->m_Index;
      v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v12->m_Index) >> 9) & 0x3F];
      if ( v15 != 0 )
      {
        v16 = &v15[v14 & 0x1FF];
        if ( v16 != 0 && m_Index == v16->m_EHandle.m_Index )
          m_pInstance = v16->m_pInstance;
      }
    }
    flNearestSqr = *&v5;
    AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
    v18 = CBaseEntity::GetAbsOrigin(this);
    v5 = LODWORD(flNearestSqr);
    v19 = (((v18->x - AbsOrigin->x) * (v18->x - AbsOrigin->x)) + ((v18->y - AbsOrigin->y) * (v18->y - AbsOrigin->y)))
        + ((v18->z - AbsOrigin->z) * (v18->z - AbsOrigin->z));
    if ( flNearestSqr == -1.0 || flNearestSqr > v19 )
    {
      v4 = 0;
      v6 = &this->m_hPets.m_Memory.m_pMemory[v2];
      v7 = v6->m_Index;
      if ( v6->m_Index + 2 > 1 )
      {
        v8 = v6->m_Index;
        v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v6->m_Index) >> 9) & 0x3F];
        if ( v9 != 0 )
        {
          v10 = &v9[v8 & 0x1FF];
          if ( v10 != 0 && v7 == v10->m_EHandle.m_Index )
            v4 = v10->m_pInstance;
        }
      }
      v5 = LODWORD(v19);
    }
    ++v3;
    ++v2;
  }
  while ( this->m_hPets.m_Size > v3 );
  return v4;
}


// CDOTA_BaseNPC_Hero::GetAllPets  (line 7626, @0x0000000002947280, libserver.so)  // inlines: AddToTail, CopyConstruct<CDOTA_BaseNPC_Pet*>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, operator CDOTA_BaseNPC_Pet*, operator CEntityInstance*, operator[]
// calls: CUtlMemory<CDOTA_BaseNPC_Pet*, int>::Grow
// callers: CDOTA_PlayerResource::ReplaceHeroWith
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC_Hero::GetAllPets(
        CDOTA_BaseNPC_Hero *const this,
        CUtlVector<CDOTA_BaseNPC_Pet*,CUtlMemory<CDOTA_BaseNPC_Pet*,int> > *pPets)
{
  __int64 v3; // r12
  __int64 m_Size; // r13
  int v6; // eax
  CDOTA_BaseNPC_Pet **v7; // rax
  CDOTA_BaseNPC_Pet *m_pInstance; // r14
  CHandle<CDOTA_BaseNPC_Pet> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // si
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CUtlVectorBase<CDOTA_BaseNPC_Pet*,CUtlMemory<CDOTA_BaseNPC_Pet*,int> >::CAllocator *i; // [rsp+8h] [rbp-38h]

  v3 = 0;
  for ( i = &pPets->m_Memory; this->m_hPets.m_Size > v3; ++v3 )
  {
    m_pInstance = 0;
    v9 = &this->m_hPets.m_Memory.m_pMemory[v3];
    m_Index = v9->m_Index;
    if ( v9->m_Index + 2 > 1 )
    {
      v11 = v9->m_Index;
      v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F];
      if ( v12 != 0 )
      {
        v13 = &v12[v11 & 0x1FF];
        if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
          m_pInstance = v13->m_pInstance;
      }
    }
    m_Size = pPets->m_Size;
    v6 = pPets->m_Size;
    if ( m_Size == pPets->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CDOTA_BaseNPC_Pet *,int>::Grow(i, 1);
      v6 = pPets->m_Size;
    }
    pPets->m_Size = v6 + 1;
    v7 = &pPets->m_Memory.m_pMemory[m_Size];
    if ( v7 != 0 )
      *v7 = m_pInstance;
  }
}


// CDOTA_BaseNPC_Hero::AddItemPurchasedHistory  (line 7636, @0x0000000002947390, libserver.so)  // inlines: AddToTail, CopyConstruct<sAcquireHistory>, Element, GetLevel, GrowMemory, InsertAfter, InsertBefore, operator[]
// calls: CDOTAGamerules::GetDOTATime, CUtlVectorBase<sAcquireHistory, CUtlMemory<sAcquireHistory, int> >::GrowVector, CUtlVectorBase<sAcquireHistory, CUtlMemory<sAcquireHistory, int> >::ShiftElementsRight, CUtlMemory<sAcquireHistory, int>::Grow
// callers: CDOTA_UnitInventory::CheckPendingCombines, CDOTA_BaseNPC::AttemptToPurchaseItem, CDOTA_BaseNPC_Hero::Spawn, CDOTA_Item_Aegis::OnEquip, CDOTA_Item_Cheese::OnEquip
void __fastcall CDOTA_BaseNPC_Hero::AddItemPurchasedHistory(
        CDOTA_BaseNPC_Hero *const this,
        uint32 unItemID,
        int nCombinedItemCount)
{
  int m_Value; // r13d
  float DOTATime; // xmm0_4
  int v8; // esi
  __int64 m_Size; // r12
  int v10; // eax
  sAcquireHistory *v11; // rax
  int v12; // r12d
  float v13; // [rsp-34h] [rbp-3Ch]
  float v14; // [rsp-34h] [rbp-3Ch]

  m_Value = this->m_iCurrentLevel.m_Value;
  DOTATime = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 1, 0.0);
  if ( nCombinedItemCount <= 0 )
  {
    m_Size = this->m_vecItemPurchaseHistory.m_Size;
LABEL_4:
    if ( m_Size == this->m_vecItemPurchaseHistory.m_Memory.m_nAllocationCount )
    {
      v14 = DOTATime;
      CUtlMemory<sAcquireHistory,int>::Grow(&this->m_vecItemPurchaseHistory.m_Memory, 1);
      v10 = this->m_vecItemPurchaseHistory.m_Size;
      DOTATime = v14;
    }
    else
    {
      v10 = m_Size;
    }
    this->m_vecItemPurchaseHistory.m_Size = v10 + 1;
    v11 = &this->m_vecItemPurchaseHistory.m_Memory.m_pMemory[m_Size];
    if ( v11 != 0 )
      goto LABEL_7;
    return;
  }
  v8 = this->m_vecItemPurchaseHistory.m_Size;
  if ( nCombinedItemCount > v8 )
  {
    m_Size = v8;
    goto LABEL_4;
  }
  v13 = DOTATime;
  v12 = v8 - nCombinedItemCount + 1;
  CUtlVectorBase<sAcquireHistory,CUtlMemory<sAcquireHistory,int>>::GrowVector(&this->m_vecItemPurchaseHistory, 1);
  CUtlVectorBase<sAcquireHistory,CUtlMemory<sAcquireHistory,int>>::ShiftElementsRight(
    &this->m_vecItemPurchaseHistory,
    v12,
    1);
  DOTATime = v13;
  v11 = &this->m_vecItemPurchaseHistory.m_Memory.m_pMemory[v12];
  if ( v11 != 0 )
  {
LABEL_7:
    v11->m_unID = unItemID;
    v11->m_nLevel = m_Value;
    v11->m_fGameTime = DOTATime;
  }
}


// CDOTA_BaseNPC_Hero::RemoveSoldBackItemFromHistory  (line 7653, @0x00000000029225c0, libserver.so)  // inlines: Remove, operator[]
// calls: CUtlVectorBase<sAcquireHistory, CUtlMemory<sAcquireHistory, int> >::ShiftElementsLeft
// callers: CDOTA_UnitInventory::SellItem
void __fastcall CDOTA_BaseNPC_Hero::RemoveSoldBackItemFromHistory(CDOTA_BaseNPC_Hero *const this, uint32 unItemID)
{
  int v3; // eax
  sAcquireHistory *m_pMemory; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx

  v3 = this->m_vecItemPurchaseHistory.m_Size - 1;
  if ( v3 >= 0 )
  {
    m_pMemory = this->m_vecItemPurchaseHistory.m_Memory.m_pMemory;
    v5 = v3;
    if ( m_pMemory[v5].m_unID == unItemID )
    {
LABEL_7:
      CUtlVectorBase<sAcquireHistory,CUtlMemory<sAcquireHistory,int>>::ShiftElementsLeft(
        &this->m_vecItemPurchaseHistory,
        v3,
        1);
      --this->m_vecItemPurchaseHistory.m_Size;
    }
    else
    {
      v6 = &m_pMemory[v5 - 1];
      while ( --v3 != -1 )
      {
        v6 -= 12;
        if ( *(v6 + 12) == unItemID )
          goto LABEL_7;
      }
    }
  }
}


// CDOTA_BaseNPC_Hero::NumAbilitiesSkilled  (line 7665, @0x00000000029109c0, libserver.so)  // inlines: end
// callers: CDOTAGCServerSystem::UpdateRealtimeGameState
int __fastcall CDOTA_BaseNPC_Hero::NumAbilitiesSkilled(CDOTA_BaseNPC_Hero *const this, int iHeroLevel)
{
  sAcquireHistory *m_pMemory; // rdx
  sAcquireHistory *v3; // rdi
  int result; // eax
  int v5; // ecx

  m_pMemory = this->m_vecAbilitySkillHistory.m_Memory.m_pMemory;
  v3 = &m_pMemory[this->m_vecAbilitySkillHistory.m_Size];
  for ( result = 0; v3 != m_pMemory; result += v5 )
  {
    v5 = m_pMemory->m_nLevel == iHeroLevel;
    ++m_pMemory;
  }
  return result;
}


// CDOTA_BaseNPC_Hero::GetAbilitySkilled  (line 7680, @0x0000000002910a00, libserver.so)  // inlines: end
// callers: CDOTAGCServerSystem::UpdateRealtimeGameState
uint32 __fastcall CDOTA_BaseNPC_Hero::GetAbilitySkilled(
        CDOTA_BaseNPC_Hero *const this,
        int iHeroLevel,
        int iAbilityIndex)
{
  sAcquireHistory *m_pMemory; // rax
  sAcquireHistory *v4; // rcx
  int i; // edi

  m_pMemory = this->m_vecAbilitySkillHistory.m_Memory.m_pMemory;
  v4 = &m_pMemory[this->m_vecAbilitySkillHistory.m_Size];
  if ( m_pMemory == v4 )
    return 0;
  for ( i = 0; ; ++i )
  {
    while ( m_pMemory->m_nLevel != iHeroLevel )
    {
      if ( v4 == ++m_pMemory )
        return 0;
    }
    if ( i == iAbilityIndex )
      break;
    if ( v4 == ++m_pMemory )
      return 0;
  }
  return m_pMemory->m_unID;
}


// CDOTA_BaseNPC_Hero::AddAbilitySkilledHistory  (line 7698, @0x0000000002948170, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, Element, GetLevel, GrowMemory, operator[]
// calls: CDOTAGamerules::GetDOTATime, CUtlMemory<sAcquireHistory, int>::Grow
// callers: CDOTABaseAbility::OnUpgrade
void __fastcall CDOTA_BaseNPC_Hero::AddAbilitySkilledHistory(CDOTA_BaseNPC_Hero *const this, uint32 unAbilityID)
{
  __int64 m_Size; // r12
  int v5; // eax
  sAcquireHistory *v6; // r12

  m_Size = this->m_vecAbilitySkillHistory.m_Size;
  v5 = this->m_vecAbilitySkillHistory.m_Size;
  if ( m_Size == this->m_vecAbilitySkillHistory.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<sAcquireHistory,int>::Grow(&this->m_vecAbilitySkillHistory.m_Memory, 1);
    v5 = this->m_vecAbilitySkillHistory.m_Size;
  }
  this->m_vecAbilitySkillHistory.m_Size = v5 + 1;
  v6 = &this->m_vecAbilitySkillHistory.m_Memory.m_pMemory[m_Size];
  v6->m_unID = unAbilityID;
  v6->m_nLevel = this->m_iCurrentLevel.m_Value;
  v6->m_fGameTime = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 1, 0.0);
}


// CDOTA_BaseNPC_Hero::DumpItemAbilityHistory  (line 7706, @0x0000000002910a60, libserver.so)  // inlines: end
// calls: Msg, DOTAGameManager, CDOTAGameManager::GetAbilityDataByItemID, CDOTAGameManager::GetAbilityDataByID
// callers: dota_dump_hero_history
// strings: "  ITEMS\n", "   %2.2fs: %s\n", "  ABILITIES\n", "    %2d, %2.2fs: %s\n"
void __fastcall CDOTA_BaseNPC_Hero::DumpItemAbilityHistory(CDOTA_BaseNPC_Hero *const this)
{
  unsigned __int64 v2; // xmm0_8
  sAcquireHistory *m_pMemory; // rbx
  sAcquireHistory *i; // r13
  int m_unID; // r12d
  CDOTAGameManager *v6; // rax
  DOTAAbilityData_t *AbilityDataByItemID; // rax
  sAcquireHistory *v8; // rbx
  sAcquireHistory *j; // r13
  int v10; // r12d
  CDOTAGameManager *v11; // rax
  DOTAAbilityData_t *AbilityDataByID; // rax

  v2 = Msg("  ITEMS\n").m128_u64[0];
  m_pMemory = this->m_vecItemPurchaseHistory.m_Memory.m_pMemory;
  for ( i = &m_pMemory[this->m_vecItemPurchaseHistory.m_Size]; i != m_pMemory; ++m_pMemory )
  {
    m_unID = m_pMemory->m_unID;
    v6 = DOTAGameManager();
    AbilityDataByItemID = CDOTAGameManager::GetAbilityDataByItemID(v6, m_unID);
    if ( AbilityDataByItemID != 0 )
      v2 = Msg("   %2.2fs: %s\n", AbilityDataByItemID->m_pszAbilityName, m_pMemory->m_fGameTime).m128_u64[0];
  }
  Msg("  ABILITIES\n", *&v2);
  v8 = this->m_vecAbilitySkillHistory.m_Memory.m_pMemory;
  for ( j = &v8[this->m_vecAbilitySkillHistory.m_Size]; j != v8; ++v8 )
  {
    v10 = v8->m_unID;
    v11 = DOTAGameManager();
    AbilityDataByID = CDOTAGameManager::GetAbilityDataByID(v11, v10);
    if ( AbilityDataByID != 0 )
      Msg("    %2d, %2.2fs: %s\n", v8->m_nLevel, AbilityDataByID->m_pszAbilityName, v8->m_fGameTime);
  }
}


// CDOTA_BaseNPC_Hero::HasChangedCourierSincePrecache  (line 7731, @0x0000000002910c70, libserver.so)
// callers: CDOTA_Item_Courier::OnSpellStart
bool __fastcall CDOTA_BaseNPC_Hero::HasChangedCourierSincePrecache(CDOTA_BaseNPC_Hero *const this)
{
  return this->m_bHasChangedCourierSincePrecache;
}


// CDOTA_BaseNPC_Hero::HasChangedWardsSincePrecache  (line 7736, @0x0000000002910c80, libserver.so)
// callers: CDOTA_Item_Ward_Dispenser::OnSpellStart, CDOTA_Item_ObserverWard::OnSpellStart, CDOTA_Item_SentryWard::OnSpellStart
bool __fastcall CDOTA_BaseNPC_Hero::HasChangedWardsSincePrecache(CDOTA_BaseNPC_Hero *const this)
{
  return this->m_bHasChangedWardsSincePrecache;
}


// CDOTA_BaseNPC_Hero::HasRefcountedModifiers  (line 7741, @0x00000000028f8e60, libserver.so)  // inlines: end
// calls: CDOTA_BaseNPC::HasRefcountedModifiers
bool __fastcall CDOTA_BaseNPC_Hero::HasRefcountedModifiers(CDOTA_BaseNPC_Hero *const this)
{
  bool result; // al
  CDOTABaseAbility **m_pMemory; // rdx
  CDOTABaseAbility **v4; // rsi

  result = CDOTA_BaseNPC::HasRefcountedModifiers(this);
  if ( !result )
  {
    m_pMemory = this->m_AbilitiesPendingDelete.m_Memory.m_pMemory;
    v4 = &m_pMemory[this->m_AbilitiesPendingDelete.m_Size];
    if ( m_pMemory != v4 )
    {
      while ( *m_pMemory == 0 || (*m_pMemory)->m_iModifierRefCount <= 0 )
      {
        if ( v4 == ++m_pMemory )
          return result;
      }
      return 1;
    }
  }
  return result;
}


// dota_dump_hero_history  (line 7758, @0x0000000002910b60, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnitName, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, Msg, CDOTA_BaseNPC_Hero::DumpItemAbilityHistory
// globals: CEntityHandle::gm_pEntityList
void __fastcall dota_dump_hero_history(const CCommandContext *const ctx, const CCommand *const args)
{
  int i; // ebx
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // r12
  const char *m_pAsString; // rsi
  int v7[12]; // [rsp+0h] [rbp-30h] BYREF

  for ( i = 0; i != 10; ++i )
  {
    while ( 1 )
    {
      CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(v7, g_pDOTAPlayerResource, i);
      if ( (v7[0] + 2) > 1 )
      {
        v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7[0]) >> 9) & 0x3F];
        if ( v3 != 0 )
        {
          v4 = &v3[v7[0] & 0x1FF];
          if ( v4 != 0 && v7[0] == v4->m_EHandle.m_Index )
          {
            m_pInstance = v4->m_pInstance;
            if ( v4->m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
              && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
            {
              break;
            }
          }
        }
      }
      if ( ++i == 10 )
        return;
    }
    m_pAsString = "";
    if ( m_pInstance[70].m_iszPrivateVScripts.u.m_Id != 0 )
      m_pAsString = m_pInstance[70].m_iszPrivateVScripts.u.m_pAsString;
    Msg("%s\n", m_pAsString);
    CDOTA_BaseNPC_Hero::DumpItemAbilityHistory(m_pInstance);
  }
}


// CDOTAMusicProbabilityEntry::AddOrReplaceElement  (line 7790, @0x0000000002948880, libserver.so)  // inlines: AddMultipleToTail, InsertMultipleBefore, IsValidIndex, SetCountNonDestructively
// calls: CUtlVectorBase<float, CUtlMemory<float, int> >::GrowVector, CUtlVectorBase<float, CUtlMemory<float, int> >::ShiftElementsRight, CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveMultipleFromTail
// callers: CDOTA_BaseNPC_Hero::AddGankMusicElement, CDOTA_BaseNPC_Hero::GainedModifier
void __fastcall CDOTAMusicProbabilityEntry::AddOrReplaceElement(
        CDOTAMusicProbabilityEntry *const this,
        int iIndex,
        float a3,
        float flProbabilityElement)
{
  __int64 v5; // rbx
  int m_Size; // r14d
  int v7; // r13d
  float flProbabilityElementa; // [rsp+Ch] [rbp-34h]
  float flProbabilityElementb; // [rsp+Ch] [rbp-34h]

  v5 = iIndex;
  m_Size = this->m_flProbabilityElements.m_Size;
  if ( iIndex < 0 || iIndex >= m_Size )
  {
    v7 = iIndex + 1 - m_Size;
    if ( v7 <= 0 )
    {
      if ( iIndex + 1 != m_Size )
      {
        flProbabilityElementb = a3;
        CUtlVectorBase<float,CUtlMemory<float,int>>::RemoveMultipleFromTail(
          &this->m_flProbabilityElements,
          m_Size - (iIndex + 1));
        a3 = flProbabilityElementb;
      }
    }
    else
    {
      flProbabilityElementa = a3;
      CUtlVectorBase<float,CUtlMemory<float,int>>::GrowVector(&this->m_flProbabilityElements, v7);
      CUtlVectorBase<float,CUtlMemory<float,int>>::ShiftElementsRight(&this->m_flProbabilityElements, m_Size, v7);
      a3 = flProbabilityElementa;
    }
  }
  this->m_flProbabilityElements.m_Memory.m_pMemory[v5] = a3;
}


// CDOTAMusicProbabilityEntry::RemoveAllProbabilityElements  (line 7802, @0x0000000002910c90, libserver.so)  // inlines: Purge, RemoveAll
// calls: CUtlMemory<float, int>::Purge
void __fastcall CDOTAMusicProbabilityEntry::RemoveAllProbabilityElements(CDOTAMusicProbabilityEntry *const this)
{
  bool v1; // zf

  v1 = (this->m_flProbabilityElements.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_flProbabilityElements.m_Size = 0;
  if ( v1 )
    CUtlMemory<float,int>::Purge(&this->m_flProbabilityElements.m_Memory);
}


// CDOTAMusicProbabilityEntry::RemoveProbabilityElement  (line 7809, @0x0000000002910cc0, libserver.so)  // inlines: IsValidIndex, operator[]
void __fastcall CDOTAMusicProbabilityEntry::RemoveProbabilityElement(
        CDOTAMusicProbabilityEntry *const this,
        int iIndex)
{
  if ( iIndex >= 0 && iIndex < this->m_flProbabilityElements.m_Size )
    this->m_flProbabilityElements.m_Memory.m_pMemory[iIndex] = 0.0;
}


// CDOTAMusicProbabilityGank::EvaluateProbability  (line 7821, @0x00000000028f9b30, libserver.so)
float __fastcall CDOTAMusicProbabilityGank::EvaluateProbability(CDOTAMusicProbabilityGank *const this)
{
  float *m_pMemory; // rax
  float v2; // xmm1_4
  float v3; // xmm7_4
  float v4; // xmm0_4
  __m128 v5; // xmm4
  __m128 v6; // xmm6
  __m128 v7; // xmm2
  float v8; // xmm9_4
  __m128 v9; // xmm0
  float v10; // xmm0_4
  float v11; // xmm8_4
  __m128 v12; // rt1
  __m128 v13; // xmm1
  float v14; // xmm4_4
  float v15; // xmm7_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  float result; // xmm0_4

  m_pMemory = this->m_flProbabilityElements.m_Memory.m_pMemory;
  v2 = m_pMemory[3];
  if ( v2 <= 0.0 )
  {
    v4 = *m_pMemory;
    v3 = *m_pMemory;
  }
  else
  {
    v3 = *m_pMemory;
    v4 = m_pMemory[3];
  }
  v5 = *(m_pMemory + 1);
  v6.m128_f32[0] = v2 - v5.m128_f32[0];
  v7.m128_f32[0] = 1.7 - (v3 / v4);
  if ( v2 == v5.m128_f32[0] )
    v8 = 0.69999999;
  else
    v8 = 0.60000002;
  if ( v2 > v5.m128_f32[0] )
    v8 = 1.0;
  v9 = _mm_cmple_ss(0x40000000u, v6);
  LODWORD(v10) = _mm_andnot_ps(v9, 0x3F333333u).m128_u32[0] | v9.m128_i32[0] & 0x3F800000;
  v11 = 1.0;
  if ( v6.m128_f32[0] > 0.0 )
    v11 = (v6.m128_f32[0] * 0.2) + 1.0;
  v12.m128_i32[0] = 0x40000000;
  v13 = _mm_cmple_ss(0x3F8CCCCDu, v7);
  LODWORD(v14) = _mm_cmple_ss(v5, v12).m128_u32[0] & 0x3F800000;
  v15 = (v3 * 0.15000001) + 0.60000002;
  v16 = COERCE_FLOAT(_mm_andnot_ps(v13, 0x3F333333u).m128_u32[0] | v13.m128_i32[0] & 0x3F800000) * v7.m128_f32[0];
  v17 = 0.1;
  if ( this->m_iKnownPotentialGankers <= 1 )
    v17 = 1.3;
  result = fmaxf(((((((v10 * v8) * v11) * v14) * v15) * (0.40000001 * m_pMemory[2])) * v16) * v17, 0.0);
  this->m_flProbability = result;
  return result;
}


// CDOTAMusicProbabilityGank::SendProbability  (line 7846, @0x00000000028fabd0, libserver.so)  // inlines: NetworkStateChanged, Set
// calls: memcmp
void __fastcall CDOTAMusicProbabilityGank::SendProbability(
        CDOTAMusicProbabilityGank *const this,
        CDOTA_BaseNPC_Hero *pHero)
{
  float *v4; // rbx

  if ( pHero != 0 && (*(pHero->_vptr_IHandleEntity + 413))(pHero) != 0 && !pHero->m_bIsIllusion.m_Value )
  {
    v4 = (*(pHero->_vptr_IHandleEntity + 413))(pHero);
    if ( memcmp(v4 + 1187, &this->m_flProbability, 4u) != 0 )
    {
      (*(*v4 + 176LL))(v4, 4744, 1, 0xFFFFFFFFLL);
      v4[1187] = this->m_flProbability;
    }
  }
}


// CDOTAMusicProbabilityGank::EvaluateAndSendProbability  (line 7858, @0x0000000002910ce0, libserver.so)
float __fastcall CDOTAMusicProbabilityGank::EvaluateAndSendProbability(
        CDOTAMusicProbabilityGank *const this,
        CDOTA_BaseNPC_Hero *pHero)
{
  (*(this->_vptr_CDOTAMusicProbabilityEntry + 1))(this);
  (*(this->_vptr_CDOTAMusicProbabilityEntry + 2))(this, pHero);
  return this->m_flProbability;
}


// CDOTAMusicProbabilityGank::SendProbabilityGanker  (line 7868, @0x0000000002910d10, libserver.so)  // inlines: NetworkStateChanged, Set
// calls: memcmp
// callers: CDOTA_BaseNPC_Hero::SendGankerProbability, CDOTA_BaseNPC_Hero::GainedModifier
void __fastcall CDOTAMusicProbabilityGank::SendProbabilityGanker(
        CDOTAMusicProbabilityGank *const this,
        CDOTA_BaseNPC_Hero *pEnemy,
        double a3,
        float fProbability)
{
  float *v6; // rbx

  this->m_flProbabilityGanker = *&a3;
  if ( pEnemy != 0
    && (*(pEnemy->_vptr_IHandleEntity + 413))(pEnemy, a3, fProbability) != 0
    && !pEnemy->m_bIsIllusion.m_Value )
  {
    v6 = (*(pEnemy->_vptr_IHandleEntity + 413))(pEnemy);
    if ( memcmp(v6 + 1188, &this->m_flProbabilityGanker, 4u) != 0 )
    {
      (*(*v6 + 176LL))(v6, 4744, 2, 0xFFFFFFFFLL);
      v6[1188] = this->m_flProbabilityGanker;
    }
  }
}


// CDOTAMusicProbabilityGank::CheckGankTimer  (line 7882, @0x0000000002919c70, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, GetFloat, GetTeamNumber, IsElapsed, NetworkStateChanged, Purge, Set, Start, operator=<float>, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CountdownTimer::Now, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_BaseNPC_Hero::CheckGankEnemies, CDOTA_BaseNPC_Hero::Think
void __fastcall CDOTAMusicProbabilityGank::CheckGankTimer(
        CDOTAMusicProbabilityGank *const this,
        CDOTA_BaseNPC_Hero *pHero)
{
  CountdownTimer *p_m_GankTimer; // r12
  const Vector *AbsOrigin; // rax
  __m128i v6; // xmm0
  double v7; // xmm1_8
  double v8; // xmm3_8
  __m128i v9; // xmm2
  float v10; // r13d
  float m_fValue; // [rsp+1Ch] [rbp-44h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > enemies; // [rsp+20h] [rbp-40h] BYREF

  p_m_GankTimer = &this->m_GankTimer;
  if ( CountdownTimer::Now(&this->m_GankTimer) >= this->m_GankTimer.m_timestamp.m_Value )
  {
    enemies.m_Size = 0;
    enemies.m_Memory.m_pMemory = 0;
    enemies.m_Memory.m_nAllocationCount = 0;
    enemies.m_Memory.m_nGrowSize = 0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(pHero);
    FindUnitsInRadius(pHero->m_iTeamNum.m_Value, AbsOrigin, pHero, 1200.0, &enemies, 2, 1, 8576, 0, 0);
    this->m_iKnownPotentialGankers = enemies.m_Size;
    m_fValue = dota_music_gank_enemy_timer.m_pParent->m_Value.m_fValue;
    *v6.m128i_i32 = CountdownTimer::Now(p_m_GankTimer);
    v9 = v6;
    *v9.m128i_i32 = *v6.m128i_i32 + m_fValue;
    v10 = COERCE_FLOAT(_mm_cvtsi128_si32(v9));
    if ( (*v6.m128i_i32 + m_fValue) != this->m_GankTimer.m_timestamp.m_Value )
    {
      (*(this->m_GankTimer._vptr_CountdownTimer + 2))(p_m_GankTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_GankTimer.m_timestamp.m_Value = v10;
    }
    if ( m_fValue != this->m_GankTimer.m_duration.m_Value )
    {
      (*(this->m_GankTimer._vptr_CountdownTimer + 2))(
        p_m_GankTimer,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL,
        *v6.m128i_i64,
        v7,
        *v9.m128i_i64,
        v8,
        m_fValue);
      this->m_GankTimer.m_duration.m_Value = m_fValue;
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&enemies);
    if ( (enemies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&enemies.m_Memory);
      if ( (enemies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&enemies.m_Memory);
    }
  }
}


// CDOTA_Pet_CarriedItem::Spawn  (line 7901, @0x0000000002900410, libserver.so)  // inlines: Base, Element, FindKeyHash, GetValue, GetValueString, TempString, operator[]
// calls: CBaseAnimating::Spawn, CBaseModelEntity::SetModel
// globals: CEntityKeyValues::sm_EmptyVariant
void __fastcall CDOTA_Pet_CarriedItem::Spawn(CDOTA_Pet_CarriedItem *const this, const CEntityKeyValues *pKeyValues)
{
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  CEntityVariant *p_m_value; // rax

  CBaseAnimating::Spawn(this, pKeyValues);
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_13:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_12;
    goto LABEL_14;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v6 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v6) == -926958586 )
      goto LABEL_9;
LABEL_6:
    if ( m_nCount <= ++v6 )
      goto LABEL_13;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v6] != -926958586 )
    goto LABEL_6;
LABEL_9:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v8 = pKeyValues->m_keyValues.m_pElements;
  else
    v8 = 0;
  p_m_value = &v8[v6].m_value;
  if ( p_m_value->m_type == 30 )
  {
LABEL_12:
    CBaseModelEntity::SetModel(this, p_m_value->m_pszString);
    return;
  }
LABEL_14:
  CBaseModelEntity::SetModel(this, "");
}


// CDOTA_Pet_CarriedItem::ShouldTransmit  (line 7907, @0x00000000028fd290, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, Instance, IsUsed, IsValid, LookupEntity, LookupEntityByIndex, LookupEntityByNetworkIndex, operator CBaseEntity*, operator bool
// calls: CBaseEntity::ShouldTransmit, CBaseEntity::GetTeam
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Pet_CarriedItem::ShouldTransmit(
        CDOTA_Pet_CarriedItem *const this,
        const CGameCheckTransmitInfo *pInfo)
{
  int result; // eax
  int v5; // r12d
  int32 m_Data; // edx
  CEntityIdentity *v7; // rsi
  CEntityIdentity *v8; // rcx
  const CBaseEntity *m_pInstance; // rdi
  uint32 m_Index; // edx
  CEntityIdentity *v11; // rcx
  CEntityIdentity *v12; // rcx
  CTeam *Team; // rax
  unsigned __int64 m_Index_low; // r8
  CTeam *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rdx
  CConcreteEntityList *v18; // r9
  __int64 (__fastcall *v19)(CTeam *, const CGameCheckTransmitInfo *, __int64, __int64, unsigned __int64, CConcreteEntityList *); // rax
  CEntityIdentity *v20; // rsi
  unsigned __int64 v21; // r8
  char *v22; // rsi

  result = CBaseEntity::ShouldTransmit(this, pInfo);
  v5 = result;
  m_Data = pInfo->m_pInfo->m_nClientEntityIndex.m_Data;
  if ( m_Data <= 0x7FFE )
  {
    v7 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[m_Data >> 9];
    if ( v7 != 0 )
    {
      v8 = &v7[m_Data & 0x1FF];
      if ( v8 != 0 && (v8->m_EHandle.m_Index & 0x7FFF) == m_Data )
      {
        m_pInstance = v8->m_pInstance;
        if ( v8->m_pInstance != 0 )
        {
          m_Index = this->m_hHeroHandle.m_Index;
          if ( m_Index + 2 > 1 )
          {
            v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hHeroHandle.m_Index) >> 9) & 0x3F];
            if ( v11 != 0 )
            {
              v12 = &v11[this->m_hHeroHandle.m_Index & 0x1FF];
              if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
              {
                Team = CBaseEntity::GetTeam(m_pInstance);
                v15 = Team;
                if ( Team != 0 )
                {
                  v16 = this->m_hHeroHandle.m_Index;
                  v17 = 0;
                  v18 = CEntityHandle::gm_pEntityList;
                  v19 = *(Team->_vptr_IHandleEntity + 210);
                  if ( (v16 + 2) > 1 )
                  {
                    m_Index_low = LOWORD(this->m_hHeroHandle.m_Index);
                    v20 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
                    if ( v20 != 0 )
                    {
                      v21 = m_Index_low & 0x1FF;
                      v18 = (8 * v21);
                      m_Index_low = 120 * v21;
                      v22 = v20 + m_Index_low;
                      if ( v22 != 0 && v16 == *(v22 + 4) )
                        v17 = *v22;
                    }
                  }
                  result = v19(v15, pInfo, v17, v16, m_Index_low, v18);
                  if ( result == 0 )
                    return v5;
                }
                else
                {
                  return v5;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}


// CDOTA_BaseNPC_Pet::Precache  (line 7932, @0x000000000294bbd0, libserver.so)
// calls: EventList_RegisterPrivateEvent, CDOTA_BaseNPC::Precache
// strings: "AE_DOTA_PET_ITEM_PICKUP", "AE_DOTA_PET_ITEM_DROP"
// globals: AE_DOTA_PET_ITEM_PICKUP, AE_DOTA_PET_ITEM_DROP
void __fastcall CDOTA_BaseNPC_Pet::Precache(CDOTA_BaseNPC_Pet *const this, const CEntityPrecacheContext *pContext)
{
  AE_DOTA_PET_ITEM_PICKUP.m_Data = EventList_RegisterPrivateEvent("AE_DOTA_PET_ITEM_PICKUP", 1).m_Data;
  AE_DOTA_PET_ITEM_DROP.m_Data = EventList_RegisterPrivateEvent("AE_DOTA_PET_ITEM_DROP", 1).m_Data;
  CDOTA_BaseNPC::Precache(this, pContext);
}


// CDOTA_BaseNPC_Pet::Spawn  (line 7940, @0x00000000029534d0, libserver.so)  // inlines: CEntityHandle, Get, GetEHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetPickupItemModel, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ManageModelChanges, Set, SetHeroHandle, SetInitialGoalEntity, SetPickupItemModel, SetupPetLevel, ToDOTABaseNPC, operator=
// calls: CDOTA_BaseNPC::Spawn, __stack_chk_fail, GetAssetModifier<CDOTA_BaseNPC, CPetModifier>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, __dynamic_cast, CDOTA_BaseNPC_Pet::UpdatePetLevel, CDOTA_BaseNPC::ManageModelChanges, CUtlString::Get, CUtlString::operator=, CBaseAnimating::SetSkin (14 total)
// strings: "modifier_pet"
// globals: `typeinfo for'CDOTA_BaseNPC_Hero, `typeinfo for'CDOTA_BaseNPC
void __fastcall CDOTA_BaseNPC_Pet::Spawn(CDOTA_BaseNPC_Pet *const this, const CEntityKeyValues *pKeyValues)
{
  uint32 m_Index; // ecx
  uint32 v4; // ecx
  unsigned __int16 v5; // dx
  int v6; // esi
  int v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  const CPetModifier *Asset; // rax
  CEntityIdentity *m_pEntity; // rdx
  const CPetModifier *v13; // r12
  int v14; // eax
  __int16 v15; // cx
  float v16; // xmm1_4
  _QWORD *v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  __int16 v20; // cx
  const char *v21; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-28h]

  v23 = __readfsqword(0x28u);
  CDOTA_BaseNPC::Spawn(this, pKeyValues);
  m_Index = this->m_hOwnerEntity.m_Value.m_Index;
  this->m_iUnitType |= 0x2000u;
  v4 = m_Index >> 15;
  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v5 = 0x7FFF;
    v6 = 0x7FFF;
  }
  else
  {
    v5 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v6 = v5;
  }
  v7 = (v4 << 15) | v5 & 0x7FFF;
  if ( (v7 + 2) > 1 )
  {
    v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9];
    if ( v8 != 0 )
    {
      v9 = &v8[v6 & 0x1FF];
      if ( v9 != 0 && v7 == v9->m_EHandle.m_Index )
      {
        m_pInstance = v9->m_pInstance;
        if ( v9->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          Asset = GetAssetModifier<CDOTA_BaseNPC,CPetModifier>(v9->m_pInstance);
          m_pEntity = m_pInstance->m_pEntity;
          v13 = Asset;
          if ( m_pEntity != 0 )
          {
            v14 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            v15 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(this->m_initialGoalEntity.m_Index) = v15 | this->m_initialGoalEntity.m_Index & 0x8000;
            this->m_initialGoalEntity.m_Index = (v14 << 15) | this->m_initialGoalEntity.m_Index & 0x7FFF;
          }
          else
          {
            this->m_initialGoalEntity.m_Index = -1;
          }
          KeyValues::KeyValues(&kv, "companion");
          KeyValues::SetFloat(&kv, "duration", v16);
          CDOTA_BaseNPC::AddNewModifier(this, m_pInstance, 0, "modifier_pet", &kv, 0);
          v17 = __dynamic_cast(m_pInstance, &`typeinfo for'CDOTA_BaseNPC, &`typeinfo for'CDOTA_BaseNPC_Hero, 0);
          if ( v17 != 0 && (v18 = v17[1]) != 0 )
          {
            v19 = (*(v18 + 16) >> 15) - (*(v18 + 48) & 1);
            v20 = 0x7FFF;
            if ( *(v18 + 16) != -1 )
              v20 = *(v18 + 16) & 0x7FFF;
            LOWORD(this->m_hHeroHandle.m_Index) = v20 | this->m_hHeroHandle.m_Index & 0x8000;
            this->m_hHeroHandle.m_Index = (v19 << 15) | this->m_hHeroHandle.m_Index & 0x7FFF;
          }
          else
          {
            this->m_hHeroHandle.m_Index = -1;
          }
          this->m_nLevelupRule = v13->m_nLevelupRule;
          this->m_nXPStrangeType = v13->m_nStrangeType;
          this->m_nXPCompendiumEventID = v13->m_nCompendiumEventID;
          this->m_bSupportsCoopTeleport = v13->m_bSupportsCoopTeleport;
          CDOTA_BaseNPC_Pet::UpdatePetLevel(this);
          (*(this->_vptr_IHandleEntity + 222))(this, v13->m_flIngameModelScale);
          if ( (this->m_pEntity->m_flags & 0x10) == 0 )
            CDOTA_BaseNPC::ManageModelChanges(this);
          v21 = CUtlString::Get(&v13->m_strPickupItemModel);
          CUtlString::operator=(&this->m_strPickupItemModel, v21);
          CBaseAnimating::SetSkin(this, v13->m_nSkin);
          KeyValues::~KeyValues(&kv);
        }
      }
    }
  }
}


// CDOTA_BaseNPC_Pet::HandleAnimEvent  (line 7964, @0x00000000029233a0, libserver.so)
// calls: CDOTA_BaseNPC::HandleAnimEvent, CDOTA_BaseNPC_Pet::DropItem, CDOTA_BaseNPC_Pet::PickupItem
// globals: AE_DOTA_PET_ITEM_PICKUP, AE_DOTA_PET_ITEM_DROP
void __fastcall CDOTA_BaseNPC_Pet::HandleAnimEvent(CDOTA_BaseNPC_Pet *const this, animevent_t *pEvent)
{
  if ( pEvent->event == AE_DOTA_PET_ITEM_PICKUP.m_Data )
  {
    CDOTA_BaseNPC_Pet::PickupItem(this, pEvent->options);
  }
  else if ( pEvent->event == AE_DOTA_PET_ITEM_DROP.m_Data )
  {
    CDOTA_BaseNPC_Pet::DropItem(this);
  }
  else
  {
    CDOTA_BaseNPC::HandleAnimEvent(this, pEvent);
  }
}


// CDOTA_BaseNPC_Pet::PickupItem  (line 7984, @0x0000000002922c90, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CUtlString, CVProfScope, Get, GetClassInfo, GetEHandle, GetEntityClass, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, Init, InvokeCallbacks, IsEmpty, IsEnabled, IsValid, LookupEntity, MakeStringToken, OverrideAllocator, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, SetClassName, SetHeroHandle, SetValue, Spawn, operator CDOTA_BaseNPC_Hero*, operator bool, operator char const*, operator!, operator(), operator->, operator=, ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CUtlString, ~CVProfScope
// calls: CUtlString::Get, CUtlString::operator[], CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::SetValue, CEntitySystem::FindClassByDesignName, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, CEntitySystem::CreateEntity, CEntitySystem::QueueSpawnEntity, CVProfile::ExitScope (28 total)
// callers: CDOTA_BaseNPC_Pet::HandleAnimEvent
// strings: "dota_pet_carrieditem", "Pet failed to pickup item because there was no attachment name specified.\n", "Server Simulation", "Spawn"
// globals: CEntityHandle::gm_pEntityList, CEntityKeyValuesModifyScope::sm_pAllocatorOverride
void __fastcall CDOTA_BaseNPC_Pet::PickupItem(CDOTA_BaseNPC_Pet *const this, const char *pszAttachmentName)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntitySystem *v7; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v9; // rdx
  char v10; // al
  const char *v11; // rax
  CEntityKeyValues *m_pEntityKeyValues; // rdi
  int m_enabled; // edx
  const char *m_pszClassname; // rdx
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v16; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v18; // si
  CEntitySpawnerContext<CDOTA_Pet_CarriedItem> *m_pContext; // rbx
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v22; // rdi
  uint32 v23; // eax
  uint32 v24; // edx
  CBaseEntity *v25; // rax
  CBaseEntity *v26; // rax
  CBaseEntity *v27; // rax
  CEntityInstance *v28; // r12
  CEntityInstance *v29; // rax
  CEntityInstance *v30; // rsi
  CEntityIdentity *v31; // rcx
  int v32; // edx
  __int16 v33; // ax
  CUtlScratchMemoryPool *v34; // rdi
  CEntityKeyValues *v35; // rbx
  uint32 v37; // ebx
  int m_nEntitySpawnerDataUseCount; // ecx
  bool v39; // [rsp+1Fh] [rbp-101h]
  CEntityKeyValues *i; // [rsp+20h] [rbp-100h]
  CEntityInstance *pEntity; // [rsp+28h] [rbp-F8h]
  CUtlStringToken pEntitya; // [rsp+28h] [rbp-F8h]
  int v43; // [rsp+30h] [rbp-F0h]
  _QWORD v44[2]; // [rsp+40h] [rbp-E0h] BYREF
  CEntitySpawner<CDOTA_Pet_CarriedItem> spawner; // [rsp+50h] [rbp-D0h] BYREF

  if ( pszAttachmentName != 0 && *pszAttachmentName != 0 )
  {
    m_Index = this->m_hCarriedItem.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hCarriedItem.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[this->m_hCarriedItem.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
          UTIL_Remove(v6->m_pInstance);
      }
    }
    if ( CUtlString::Get(&this->m_strPickupItemModel) != 0
      && CUtlString::operator[](&this->m_strPickupItemModel, 0) != 0 )
    {
      spawner.m_modifyScope.m_pKeyValues = 0;
      spawner.m_modifyScope.m_pPrevAllocator = 0;
      CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
      spawner._vptr_CEntitySpawnerBase = off_42FA490;
      spawner.m_scriptClassName.m_pString = 0;
      spawner.m_pContext = 0;
      v7 = g_pEntitySystem;
      spawner.m_pSpawnBatch = 0;
      spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
      ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
      CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v7->m_entitySpawnerData;
      spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v7);
      SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
      *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
      v9 = *&SpawnOriginOffset->m_flMatVal[0][2];
      spawner.m_pEntityKeyValues = 0;
      *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v9;
      *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
      *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
      spawner.m_pEntityClass = g_pEntityCDOTA_Pet_CarriedItemClass;
      if ( g_pApplication != 0 )
        v10 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
      else
        v10 = 0;
      spawner.m_bValidateKeys = v10;
      spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
      (*spawner._vptr_CEntitySpawnerBase)(&spawner);
      CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, "dota_pet_carrieditem");
      spawner.m_pEntityClass = CEntitySystem::FindClassByDesignName(
                                 g_pEntitySystem,
                                 "dota_pet_carrieditem",
                                 &spawner.m_scriptClassName);
      v11 = CUtlString::Get(&this->m_strPickupItemModel);
      CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -926958586, v11);
      m_pEntityKeyValues = spawner.m_pEntityKeyValues;
      v43 = -1;
      if ( spawner.m_pEntityKeyValues != 0 )
      {
        m_enabled = g_VProfCurrentProfile.m_enabled;
        v39 = m_enabled != 0;
        if ( m_enabled != 0 )
        {
          CVProfile::EnterScope(&g_VProfCurrentProfile, "Spawn", 0, "Server Simulation", 0, 4);
          m_pEntityKeyValues = spawner.m_pEntityKeyValues;
        }
        if ( !CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790) )
        {
          m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
          if ( m_pszClassname != 0 )
            CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
        }
        CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
        m_nMode = spawner.m_nMode;
        v16 = CUtlString::Get(&spawner.m_scriptClassName);
        pEntity = CEntitySystem::CreateEntity(
                    g_pEntitySystem,
                    spawner.m_hSpawnGroupHandle,
                    spawner.m_pEntityClass,
                    v16,
                    m_nMode,
                    -1,
                    -1,
                    0,
                    0);
        if ( pEntity != 0 )
        {
          m_pEntity = pEntity->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v18 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            v43 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v18 & 0x7FFF;
          }
          v44[0] = pEntity->m_pEntity;
          v44[1] = spawner.m_pEntityKeyValues;
          (*(*g_pGameResourceService + 280LL))(
            g_pGameResourceService,
            spawner.m_hSpawnGroupHandle,
            1,
            v44,
            &spawner.m_mSpawnGroupToWorld);
          CEntitySystem::QueueSpawnEntity(g_pEntitySystem, pEntity, spawner.m_pEntityKeyValues);
          if ( spawner.m_pSpawnBatch == 0 )
            CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
          m_pContext = spawner.m_pContext;
          for ( i = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
          {
            m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
            pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
            if ( m_pthis != 0 || pfn != 0 )
            {
              v22 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
              if ( (pfn & 1) != 0 )
                pfn = *(pfn + *v22 - 1);
              (pfn)(v22, pEntity, i);
            }
          }
        }
        if ( v39 )
          CVProfile::ExitScope(&g_VProfCurrentProfile);
        v23 = v43;
      }
      else
      {
        v23 = -1;
      }
      this->m_hCarriedItem.m_Index = v23;
      v24 = 0;
      if ( *pszAttachmentName != 0 )
      {
        v37 = MurmurHash2LowerCase(pszAttachmentName, 0x31415926u);
        if ( g_bUpdateStringTokenDatabase )
          RegisterStringToken(v37, pszAttachmentName, 0, 1);
        v24 = v37;
      }
      pEntitya.m_nHashCode = v24;
      v25 = CEntityHandle::operator CEntityInstance *(&this->m_hCarriedItem);
      CBaseEntity::SetParent(v25, this, pEntitya, 0);
      v26 = CEntityHandle::operator CEntityInstance *(&this->m_hCarriedItem);
      CBaseEntity::SetLocalOrigin(v26, &vec3_origin);
      v27 = CEntityHandle::operator CEntityInstance *(&this->m_hCarriedItem);
      CBaseEntity::SetLocalAngles(v27, &vec3_angle);
      v28 = CEntityHandle::operator CEntityInstance *(&this->m_hHeroHandle);
      v29 = CEntityHandle::operator CEntityInstance *(&this->m_hCarriedItem);
      v30 = v29;
      if ( v28 != 0 && (v31 = v28->m_pEntity) != 0 )
      {
        v32 = (v31->m_EHandle.m_Index >> 15) - (v31->m_flags & 1);
        v33 = 0x7FFF;
        if ( v31->m_EHandle.m_Index != -1 )
          v33 = v31->m_EHandle.m_Index & 0x7FFF;
        LOWORD(v30[25].m_hPrivateScope.m_hScope) = v33 | v30[25].m_hPrivateScope.m_hScope & 0x8000;
        LODWORD(v30[25].m_hPrivateScope.m_hScope) = (v32 << 15) | v30[25].m_hPrivateScope.m_hScope & 0x7FFF;
      }
      else
      {
        LODWORD(v29[25].m_hPrivateScope.m_hScope) = -1;
      }
      v34 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
      spawner._vptr_CEntitySpawnerBase = off_42FA470;
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
    }
  }
  else
  {
    Warning("Pet failed to pickup item because there was no attachment name specified.\n");
  }
}


// CDOTA_BaseNPC_Pet::DropItem  (line 8011, @0x0000000002910dd0, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsValid, LookupEntity, operator bool
// calls: UTIL_Remove
// callers: CDOTA_BaseNPC_Pet::HandleAnimEvent
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC_Pet::DropItem(CDOTA_BaseNPC_Pet *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx

  m_Index = this->m_hCarriedItem.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hCarriedItem.m_Index) >> 9) & 0x3F];
    if ( v2 != 0 )
    {
      v3 = &v2[this->m_hCarriedItem.m_Index & 0x1FF];
      if ( v3 != 0 && m_Index == v3->m_EHandle.m_Index )
        UTIL_Remove(v3->m_pInstance);
    }
  }
}


// CDOTA_BaseNPC_Pet::CalculateActivityModifiers  (line 8019, @0x00000000028fbd40, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsValid, LookupEntity, operator bool
// calls: CDOTA_BaseNPC::CalculateActivityModifiers, CDOTA_BaseNPC::AddActivityModifier
// strings: "with_item"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC_Pet::CalculateActivityModifiers(CDOTA_BaseNPC_Pet *const this, Activity iActivity)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  UtlSymId_t v6[16]; // [rsp+0h] [rbp-20h] BYREF

  CDOTA_BaseNPC::CalculateActivityModifiers(this, iActivity);
  m_Index = this->m_hCarriedItem.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hCarriedItem.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hCarriedItem.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
        CDOTA_BaseNPC::AddActivityModifier(v6, this, "with_item");
    }
  }
}


// CDOTA_BaseNPC_Pet::SetupPetLevel  (line 8029, @0x0000000002910f90, libserver.so)
// calls: CDOTA_BaseNPC_Pet::UpdatePetLevel
void __fastcall CDOTA_BaseNPC_Pet::SetupPetLevel(CDOTA_BaseNPC_Pet *const this, const CPetModifier *pPetMod)
{
  this->m_nLevelupRule = pPetMod->m_nLevelupRule;
  this->m_nXPStrangeType = pPetMod->m_nStrangeType;
  this->m_nXPCompendiumEventID = pPetMod->m_nCompendiumEventID;
  this->m_bSupportsCoopTeleport = pPetMod->m_bSupportsCoopTeleport;
  CDOTA_BaseNPC_Pet::UpdatePetLevel(this);
}


// CDOTA_BaseNPC_Pet::UpdatePetLevel  (line 8038, @0x0000000002910e30, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator->
// calls: CDOTA_BaseNPC::GetGeneratingEconItem, CEntityHandle::operator CEntityInstance*, CDOTA_PlayerResource::GetEventLevelForPlayerID, CDOTA_PlayerResource::GetSteamID, GetStatsGemValueIncludingCurrentGame
// callers: CDOTABehaviorPet::Update_CheckForLevelup, CDOTA_BaseNPC_Pet::SetupPetLevel, CDOTA_BaseNPC_Pet::Spawn
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC_Pet::UpdatePetLevel(CDOTA_BaseNPC_Pet *const this)
{
  CEconItemView *GeneratingEconItem; // r12
  uint32 m_Index; // edx
  CHandle<CDOTA_BaseNPC_Hero> *p_m_hHeroHandle; // rdi
  CEntityIdentity *v5; // rax
  CEntityIdentity *v6; // rax
  PetLevelup_Rule_t m_nLevelupRule; // eax
  CEntityInstance *v8; // rax
  int v9; // eax
  signed int EventLevelForPlayerID; // eax
  CEntityInstance *v11; // rax
  int v12; // eax
  AccountID_t SteamID; // eax
  signed int StatsGemValueIncludingCurrentGame; // eax

  GeneratingEconItem = CDOTA_BaseNPC::GetGeneratingEconItem(this);
  if ( GeneratingEconItem != 0 )
  {
    m_Index = this->m_hHeroHandle.m_Index;
    p_m_hHeroHandle = &this->m_hHeroHandle;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hHeroHandle.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[this->m_hHeroHandle.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index && v6->m_pInstance != 0 )
        {
          this->m_nPetLevel = 1;
          m_nLevelupRule = this->m_nLevelupRule;
          if ( m_nLevelupRule == PetLevelup_Rule_t::PETLEVELFROM_KILLEATER )
          {
            v11 = CEntityHandle::operator CEntityInstance *(p_m_hHeroHandle);
            v12 = (*(v11->_vptr_IHandleEntity + 414))(v11);
            SteamID = CDOTA_PlayerResource::GetSteamID(g_pDOTAPlayerResource, v12);
            StatsGemValueIncludingCurrentGame = GetStatsGemValueIncludingCurrentGame(
                                                  SteamID,
                                                  GeneratingEconItem,
                                                  this->m_nXPStrangeType,
                                                  0);
            if ( this->m_nXPStrangeType == kill_eater_event_t::kKillEaterEvent_EnemyWardKills )
              this->m_nPetLevel = (StatsGemValueIncludingCurrentGame >= 50) + 1;
          }
          else if ( m_nLevelupRule == PetLevelup_Rule_t::PETLEVELFROM_COMPENDIUM_LEVEL
                 && this->m_nXPCompendiumEventID == 8 )
          {
            v8 = CEntityHandle::operator CEntityInstance *(p_m_hHeroHandle);
            v9 = (*(v8->_vptr_IHandleEntity + 414))(v8);
            EventLevelForPlayerID = CDOTA_PlayerResource::GetEventLevelForPlayerID(g_pDOTAPlayerResource, v9);
            if ( EventLevelForPlayerID > 124 )
              this->m_nPetLevel = (EventLevelForPlayerID - 125) / 50 + 2;
            else
              this->m_nPetLevel = 1;
          }
        }
      }
    }
  }
}


