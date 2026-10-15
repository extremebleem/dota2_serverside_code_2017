// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_game_manager.cpp:149
class CDOTAGameManagerProxy : public CBaseEntity {
public:

private:

	static CDOTAGameManagerProxy * s_pGameManagerProxy;
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
	CDOTAGameManagerProxy(CDOTAGameManagerProxy &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTAGameManagerProxy();
	virtual ~CDOTAGameManagerProxy();
	virtual int ObjectCaps();
	virtual int UpdateTransmitState();
	void NotifyNetworkStateChanged();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[19] ObjectCaps
	// vtable[64] UpdateTransmitState
	// sizeof = 784
};

// src/game/shared/dota/dota_game_manager.cpp:198
class C_CDOTAGameManagerProxy_MapInstall {
	C_CDOTAGameManagerProxy_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// DOTAGameManager  (line 116, @0x00000000024c29e0, libserver.so)
// callers: CSource2Server::GameServerSteamAPIDeactivated, CSource2Server::GetDefaultScaleForCharacter, CSource2Server::GetModelNameForCharacter, CSource2Server::GetCharacterList, CSource2Server::GetEconItemNamesForCharacter, CSource2Server::FindUnitDataByModelNameCheckModelModifiers, CSource2Server::GetEconItemsInfoForCharacter, CBaseGameStats_Driver::CollectData, CDOTABaseAbility::OnAbilityPinged, CDOTA_Ability_DataDriven::LookupModifierCreateParameters, CDOTABaseAbility::LoadAbilityData, DOTA_CreateAbility (109 total)
// globals: g_DOTAGameManager
CDOTAGameManager *__cdecl DOTAGameManager()
{
  return &g_DOTAGameManager;
}


// CDOTAGameManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 117, @0x00000000024c29f0, libserver.so)
void __cdecl CDOTAGameManager::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// GetScriptDesc<CDOTAGameManager>  (line 139, @0x00000000024f0ab0, libserver.so)  // inlines: AddParameterType, AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<ScriptFunctionBinding_t>, Element, Finalize, GrowMemory, ScriptClassDesc_t, ScriptDeduceFunctionSignature<CDOTAGameManager*, CDOTAGameManager, CVariantBase<CVariantDefaultAllocator>, char const*>, ScriptDeduceFunctionSignature<CDOTAGameManager*, CDOTAGameManager, char const*, char const*>, ScriptDeduceFunctionSignature<CDOTAGameManager*, CDOTAGameManager, char const*, int>, ScriptDeduceFunctionSignature<CDOTAGameManager*, CDOTAGameManager, int, char const*>, ScriptFuncDescriptor_t, ScriptFunctionBinding_t, SetDescription, SetFunctionName, SetReturnType, SetScriptName, operator[]
// calls: operator new, CUtlMemory<ScriptFunctionBinding_t, int>::Grow
// callers: CDOTAVScriptGameSystem::InstallScriptBindings
// strings: "!The Dota game manager", "CDOTAGameManager", "Get the hero name given a hero ID.", "GetHeroNameByID", "Get the hero ID given the hero name.", "GetHeroIDByName" (12 total)
// globals: g_pCDOTAGameManager_ScriptDesc, CMemberScriptBinding1<CDOTAGameManager *,char const* (CDOTAGameManager::*)(int),char const*,int>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,in, CDOTAGameManager::GetHeroNameByID(int), CMemberScriptBinding1<CDOTAGameManager *,int (CDOTAGameManager::*)(char const*),int,char const*>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,in, CDOTAGameManager::GetHeroIDByName(char const*), CMemberScriptBinding1<CDOTAGameManager *,char const* (CDOTAGameManager::*)(char const*),char const*,char const*>::Call(void *,void *,CVariantBase<CVariantDefaul, CDOTAGameManager::GetHeroNameForUnitName(char const*), CDOTAGameManager::GetHeroUnitNameByID(int) (10 total)
ScriptClassDesc_t *__fastcall GetScriptDesc<CDOTAGameManager>(CDOTAGameManager *pScriptDescObjectInstance)
{
  ScriptClassDesc_t *result; // rax
  ScriptClassDesc_t *v2; // rbx
  CUtlMemory<ScriptFunctionBinding_t,int> *p_m_Memory; // r12
  ScriptFunctionBinding_t *m_pMemory; // rdx
  int8 m_nNumParameters; // al
  __int64 v6; // rcx
  int v7; // eax
  char v8; // cl
  char v9; // di
  __int64 m_Size; // r13
  __int64 v11; // rax
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // rdx
  int v15; // eax
  char v16; // dl
  char v17; // di
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rcx
  char v21; // al
  __int64 v22; // rdx
  int v23; // eax
  char v24; // dl
  char v25; // di
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // rcx
  char v29; // al
  __int64 v30; // rdx
  int v31; // eax
  char v32; // dl
  char v33; // di
  __int64 v34; // r13
  __int64 v35; // rax
  __int64 v36; // rcx
  char v37; // al
  __int64 v38; // rdx
  int v39; // eax
  char v40; // dl
  char v41; // di

  result = g_pCDOTAGameManager_ScriptDesc;
  if ( g_pCDOTAGameManager_ScriptDesc == 0 )
  {
    v2 = operator new(0x50u);
    v2->m_pBaseDesc = 0;
    v2->m_FunctionBindings.m_Size = 0;
    p_m_Memory = &v2->m_FunctionBindings.m_Memory;
    v2->m_FunctionBindings.m_Memory.m_pMemory = 0;
    v2->m_FunctionBindings.m_Memory.m_nAllocationCount = 0;
    v2->m_FunctionBindings.m_Memory.m_nGrowSize = 0;
    v2->m_pfnConstruct = 0;
    v2->m_pfnDestruct = 0;
    v2->pHelper = 0;
    g_pCDOTAGameManager_ScriptDesc = v2;
    v2->m_pszDescription = "!The Dota game manager";
    v2->m_pszScriptName = "CDOTAGameManager";
    v2->m_pszClassname = "CDOTAGameManager";
    CUtlMemory<ScriptFunctionBinding_t,int>::Grow(&v2->m_FunctionBindings.m_Memory, 1);
    m_pMemory = v2->m_FunctionBindings.m_Memory.m_pMemory;
    ++v2->m_FunctionBindings.m_Size;
    if ( m_pMemory != 0 )
    {
      m_pMemory->m_desc.m_pszScriptName = 0;
      m_pMemory->m_desc.m_pszFunction = 0;
      m_pMemory->m_desc.m_pszDescription = 0;
      m_pMemory->m_desc.m_ReturnType = 29;
      m_pMemory->m_desc.m_nOptionalParameters = -1;
      m_pMemory->m_desc.m_nNumParameters = 0;
      m_pMemory->m_desc.m_pPackedParameterNames = 0;
      m_pMemory = v2->m_FunctionBindings.m_Memory.m_pMemory;
    }
    m_pMemory->m_desc.m_ReturnType = 30;
    m_pMemory->m_desc.m_pszDescription = "Get the hero name given a hero ID.";
    m_pMemory->m_desc.m_pszScriptName = "GetHeroNameByID";
    m_pMemory->m_desc.m_pszFunction = "GetHeroNameByID";
    m_nNumParameters = m_pMemory->m_desc.m_nNumParameters;
    v6 = m_nNumParameters++;
    m_pMemory->m_desc.m_ParameterTypes[v6] = 5;
    m_pMemory->m_desc.m_nNumParameters = m_nNumParameters;
    v7 = m_nNumParameters - 1;
    m_pMemory->m_desc.m_nOptionalParameters = 0;
    if ( v7 >= 0 && m_pMemory->m_desc.m_ParameterTypes[v7] == 32 )
    {
      v8 = 1;
      do
      {
        --v7;
        v9 = v8;
        if ( v7 == -1 )
        {
          m_pMemory->m_desc.m_nOptionalParameters = v8;
          goto LABEL_10;
        }
        ++v8;
      }
      while ( m_pMemory->m_desc.m_ParameterTypes[v7] == 32 );
      m_pMemory->m_desc.m_nOptionalParameters = v9;
    }
LABEL_10:
    m_pMemory->m_flags = 1;
    m_pMemory->m_pfnBinding = CMemberScriptBinding1<CDOTAGameManager *,char const* (CDOTAGameManager::*)(int),char const*,int>::Call;
    m_pMemory->m_pFunction = CDOTAGameManager::GetHeroNameByID;
    m_Size = v2->m_FunctionBindings.m_Size;
    if ( m_Size == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v11 = &v2->m_FunctionBindings.m_Memory.m_pMemory[m_Size];
    if ( v11 != 0 )
    {
      *v11 = 0;
      *(v11 + 8) = 0;
      *(v11 + 16) = 0;
      *(v11 + 24) = 29;
      *(v11 + 25) = -1;
      *(v11 + 26) = 0;
      *(v11 + 40) = 0;
      v12 = &v2->m_FunctionBindings.m_Memory.m_pMemory[m_Size];
    }
    else
    {
      v12 = 0;
    }
    *(v12 + 24) = 5;
    *(v12 + 16) = "Get the hero ID given the hero name.";
    *v12 = "GetHeroIDByName";
    *(v12 + 8) = "GetHeroIDByName";
    v13 = *(v12 + 26);
    v14 = v13++;
    *(v12 + v14 + 27) = 30;
    *(v12 + 26) = v13;
    v15 = v13 - 1;
    *(v12 + 25) = 0;
    if ( v15 >= 0 && *(v12 + v15 + 27) == 32 )
    {
      v16 = 1;
      do
      {
        --v15;
        v17 = v16;
        if ( v15 == -1 )
        {
          *(v12 + 25) = v16;
          goto LABEL_20;
        }
        ++v16;
      }
      while ( *(v12 + v15 + 27) == 32 );
      *(v12 + 25) = v17;
    }
LABEL_20:
    *(v12 + 64) = 1;
    *(v12 + 48) = CMemberScriptBinding1<CDOTAGameManager *,int (CDOTAGameManager::*)(char const*),int,char const*>::Call;
    *(v12 + 56) = CDOTAGameManager::GetHeroIDByName;
    v18 = v2->m_FunctionBindings.m_Size;
    if ( v18 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v19 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v18];
    if ( v19 != 0 )
    {
      *v19 = 0;
      *(v19 + 8) = 0;
      *(v19 + 16) = 0;
      *(v19 + 24) = 29;
      *(v19 + 25) = -1;
      *(v19 + 26) = 0;
      *(v19 + 40) = 0;
      v20 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v18];
    }
    else
    {
      v20 = 0;
    }
    *(v20 + 24) = 30;
    *(v20 + 16) = "Get the hero name given a unit name.";
    *v20 = "GetHeroNameForUnitName";
    *(v20 + 8) = "GetHeroNameForUnitName";
    v21 = *(v20 + 26);
    v22 = v21++;
    *(v20 + v22 + 27) = 30;
    *(v20 + 26) = v21;
    v23 = v21 - 1;
    *(v20 + 25) = 0;
    if ( v23 >= 0 && *(v20 + v23 + 27) == 32 )
    {
      v24 = 1;
      do
      {
        --v23;
        v25 = v24;
        if ( v23 == -1 )
        {
          *(v20 + 25) = v24;
          goto LABEL_30;
        }
        ++v24;
      }
      while ( *(v20 + v23 + 27) == 32 );
      *(v20 + 25) = v25;
    }
LABEL_30:
    *(v20 + 64) = 1;
    *(v20 + 48) = CMemberScriptBinding1<CDOTAGameManager *,char const* (CDOTAGameManager::*)(char const*),char const*,char const*>::Call;
    *(v20 + 56) = CDOTAGameManager::GetHeroNameForUnitName;
    v26 = v2->m_FunctionBindings.m_Size;
    if ( v26 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v27 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v26];
    if ( v27 != 0 )
    {
      *v27 = 0;
      *(v27 + 8) = 0;
      *(v27 + 16) = 0;
      *(v27 + 24) = 29;
      *(v27 + 25) = -1;
      *(v27 + 26) = 0;
      *(v27 + 40) = 0;
      v28 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v26];
    }
    else
    {
      v28 = 0;
    }
    *(v28 + 24) = 30;
    *(v28 + 16) = "Get the hero unit name given the hero ID.";
    *v28 = "GetHeroUnitNameByID";
    *(v28 + 8) = "GetHeroUnitNameByID";
    v29 = *(v28 + 26);
    v30 = v29++;
    *(v28 + v30 + 27) = 5;
    *(v28 + 26) = v29;
    v31 = v29 - 1;
    *(v28 + 25) = 0;
    if ( v31 >= 0 && *(v28 + v31 + 27) == 32 )
    {
      v32 = 1;
      do
      {
        --v31;
        v33 = v32;
        if ( v31 == -1 )
        {
          *(v28 + 25) = v32;
          goto LABEL_40;
        }
        ++v32;
      }
      while ( *(v28 + v31 + 27) == 32 );
      *(v28 + 25) = v33;
    }
LABEL_40:
    *(v28 + 64) = 1;
    *(v28 + 48) = CMemberScriptBinding1<CDOTAGameManager *,char const* (CDOTAGameManager::*)(int),char const*,int>::Call;
    *(v28 + 56) = CDOTAGameManager::GetHeroUnitNameByID;
    v34 = v2->m_FunctionBindings.m_Size;
    if ( v34 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v35 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v34];
    if ( v35 != 0 )
    {
      *v35 = 0;
      *(v35 + 8) = 0;
      *(v35 + 16) = 0;
      *(v35 + 24) = 29;
      *(v35 + 25) = -1;
      *(v35 + 26) = 0;
      *(v35 + 40) = 0;
      v36 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v34];
    }
    else
    {
      v36 = 0;
    }
    *(v36 + 24) = 32;
    *(v36 + 16) = "Get the hero unit ";
    *v36 = "GetHeroDataByName_Script";
    *(v36 + 8) = "GetHeroDataByName_Script";
    v37 = *(v36 + 26);
    v38 = v37++;
    *(v36 + v38 + 27) = 30;
    *(v36 + 26) = v37;
    v39 = v37 - 1;
    *(v36 + 25) = 0;
    if ( v39 >= 0 && *(v36 + v39 + 27) == 32 )
    {
      v40 = 1;
      do
      {
        --v39;
        v41 = v40;
        if ( v39 == -1 )
        {
          *(v36 + 25) = v40;
          goto LABEL_50;
        }
        ++v40;
      }
      while ( *(v36 + v39 + 27) == 32 );
      *(v36 + 25) = v41;
    }
LABEL_50:
    *(v36 + 64) = 1;
    *(v36 + 48) = CMemberScriptBinding1<CDOTAGameManager *,CVariantBase<CVariantDefaultAllocator> (CDOTAGameManager::*)(char const*),CVariantBase<CVariantDefaultAllocator>,char const*>::Call;
    *(v36 + 56) = CDOTAGameManager::GetHeroDataByName_Script;
    return v2;
  }
  return result;
}


// CDOTAGameManagerProxy::Schema_DynamicBinding  (line 151, @0x0000000002552880, libserver.so)
// globals: CDOTAGameManagerProxy::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTAGameManagerProxy::Schema_DynamicBinding(
        const CDOTAGameManagerProxy *const this)
{
  return CDOTAGameManagerProxy::s_pSchemaBinding;
}


// CDOTAGameManagerProxy::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 151, @0x0000000002552890, libserver.so)
// globals: CDOTAGameManagerProxy::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTAGameManagerProxy::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTAGameManagerProxy::CEntityInstanceEntityClass *const this)
{
  return CDOTAGameManagerProxy::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTAGameManagerProxy::CEntityInstanceEntityClass::DestructInstance  (line 151, @0x00000000025528a0, libserver.so)  // inlines: Destruct<CDOTAGameManagerProxy>
void __fastcall CDOTAGameManagerProxy::CEntityInstanceEntityClass::DestructInstance(
        CDOTAGameManagerProxy::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTAGameManagerProxy::CEntityInstanceEntityClass::FreeInstance  (line 151, @0x00000000025528c0, libserver.so)
void __fastcall CDOTAGameManagerProxy::CEntityInstanceEntityClass::FreeInstance(
        CDOTAGameManagerProxy::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTAGameManagerProxy::CEntityInstanceEntityClass::CanAllocate  (line 151, @0x00000000025528e0, libserver.so)
bool __fastcall CDOTAGameManagerProxy::CEntityInstanceEntityClass::CanAllocate(
        const CDOTAGameManagerProxy::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTAGameManagerProxy::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 151, @0x00000000025528f0, libserver.so)
// globals: CDOTAGameManagerProxy::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTAGameManagerProxy::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTAGameManagerProxy::CEntityInstanceEntityClass *const this)
{
  return CDOTAGameManagerProxy::s_pSchemaBinding;
}


// CDOTAGameManagerProxy::CEntityInstanceEntityClass::AllocateInstance  (line 151, @0x00000000025554d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTAGameManagerProxy::CEntityInstanceEntityClass::AllocateInstance(
        CDOTAGameManagerProxy::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 784);
  memset(v1, 0, 0x310u);
  return v1;
}


// CDOTAGameManagerProxy::CEntityInstanceEntityClass::ConstructInstance  (line 151, @0x000000000255ea80, libserver.so)  // inlines: CDOTAGameManagerProxy, Construct<CDOTAGameManagerProxy>, Set, operator(), operator=
// calls: CBaseEntity::CBaseEntity, CBaseEntity::~CBaseEntity, _Unwind_Resume
// globals: g_DOTAGameManager, CDOTAGameManagerProxy::s_pGameManagerProxy
CEntityInstance *__fastcall CDOTAGameManagerProxy::CEntityInstanceEntityClass::ConstructInstance(
        CDOTAGameManagerProxy::CEntityInstanceEntityClass *const this,
        void *p)
{
  bool v3; // zf
  CNetworkVarChainer::ChainUpdatePropagationLL_t *i; // rbx
  void (*pfn)(detail::GenericClass *); // rdx
  _QWORD *v6; // rdi

  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_40F8BB0;
    v3 = p == g_DOTAGameManager.__m_pChainEntity.m_pObj;
    CDOTAGameManagerProxy::s_pGameManagerProxy = p;
    *(p + 97) = &g_DOTAGameManager;
    if ( !v3 )
      g_DOTAGameManager.__m_pChainEntity.m_pObj = p;
    for ( i = g_DOTAGameManager.__m_pChainEntity.m_pPropagationList; i != 0; i = i->pNext )
    {
      pfn = i->updateDelegate.m_Closure.m_pFunction.__pfn;
      v6 = (i->updateDelegate.m_Closure.m_pthis + i->updateDelegate.m_Closure.m_pFunction.__delta);
      if ( (pfn & 1) != 0 )
        pfn = *(pfn + *v6 - 1);
      (pfn)(v6, &g_DOTAGameManager.__m_pChainEntity);
    }
  }
  return p;
}


// CDOTAGameManagerProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 151, @0x00000000025609a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTAGameManagerProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTAGameManagerProxy::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTAGameManagerProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 151, @0x00000000025609c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTAGameManagerProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTAGameManagerProxy::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTAGameManagerProxy::GetEntityClassInternal  (line 151, @0x0000000002576f70, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_03.cpp
// strings: "dota_gamemanager", "CDOTAGameManagerProxy"
// globals: `guard variable for'CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass, CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTAGameManagerProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTAGameManagerProxy::GetEntityClassInfo(void)::g_EntityCDOTAGameManagerProxyClassInfo, CDOTAGameManagerProxy::GetEntityClassInfo(void)::g_EntityCDOTAGameManagerProxyClassInfo
CEntityClass *__cdecl CDOTAGameManagerProxy::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass) != 0 )
  {
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_designerName.u.m_Id = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass._vptr_CEntityClass = off_3F79390;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_ComponentOffsets.m_Size = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_AllHelpers.m_Size = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_classInputs.m_Size = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_classOutputs.m_Size = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_requiredEHandle.m_Index = -1;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_hNetworkSerializer = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_pBaseClassInfo = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_pClassInfo = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_flags = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_nAllHelpersFlags = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_pScriptClassDesc = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_pInputs = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_nInputCount = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_pOutputs = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_nOutputCount = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_pGameClass = 0;
    CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass._vptr_CEntityClass = off_40F8B30;
    __cxa_guard_release(&`guard variable for'CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass);
    __cxa_atexit(
      CDOTAGameManagerProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTAGameManagerProxyClass != 0 )
    return &CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass;
  if ( `guard variable for'CDOTAGameManagerProxy::GetEntityClassInfo(void)::g_EntityCDOTAGameManagerProxyClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAGameManagerProxy::GetEntityClassInfo(void)::g_EntityCDOTAGameManagerProxyClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTAGameManagerProxy::GetEntityClassInfo(void)::g_EntityCDOTAGameManagerProxyClassInfo,
      "CDOTAGameManagerProxy",
      "dota_gamemanager",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTAGameManagerProxy::GetEntityClassInfo(void)::g_EntityCDOTAGameManagerProxyClassInfo);
  }
  CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_pClassInfo = &CDOTAGameManagerProxy::GetEntityClassInfo(void)::g_EntityCDOTAGameManagerProxyClassInfo;
  CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_pBaseClassInfo = CDOTAGameManagerProxy::GetEntityClassInfo(void)::g_EntityCDOTAGameManagerProxyClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTAGameManagerProxyClass = &CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass;
  CDOTAGameManagerProxy::GetEntityClassInfo(void)::g_EntityCDOTAGameManagerProxyClassInfo.m_pClass = &CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass;
  CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCDOTAGameManagerProxyClass->m_pComponentOverrides = 0;
  return &CDOTAGameManagerProxy::GetEntityClassInternal(void)::g_EntityCDOTAGameManagerProxyClass;
}


// CDOTAGameManagerProxy::~CDOTAGameManagerProxy  (line 164, @0x0000000002555750, libserver.so)
// calls: CBaseEntity::~CBaseEntity
// globals: CDOTAGameManagerProxy::s_pGameManagerProxy
void __fastcall CDOTAGameManagerProxy::~CDOTAGameManagerProxy(CDOTAGameManagerProxy *const this)
{
  this->_vptr_IHandleEntity = &off_40F8BB0;
  CDOTAGameManagerProxy::s_pGameManagerProxy = 0;
  CBaseEntity::~CBaseEntity(this);
}


// CDOTAGameManagerProxy::~CDOTAGameManagerProxy  (line 164, @0x0000000002555770, libserver.so)  // inlines: ~CDOTAGameManagerProxy
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
// globals: CDOTAGameManagerProxy::s_pGameManagerProxy
void __fastcall CDOTAGameManagerProxy::~CDOTAGameManagerProxy(CDOTAGameManagerProxy *const this)
{
  this->_vptr_IHandleEntity = &off_40F8BB0;
  CDOTAGameManagerProxy::s_pGameManagerProxy = 0;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTAGameManagerProxy::ObjectCaps  (line 167, @0x00000000025556d0, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CDOTAGameManagerProxy::ObjectCaps(CDOTAGameManagerProxy *const this)
{
  int result; // eax

  result = CBaseEntity::ObjectCaps(this);
  LOBYTE(result) = result & 0x7F;
  return result;
}


// CDOTAGameManagerProxy::UpdateTransmitState  (line 170, @0x0000000002555740, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CDOTAGameManagerProxy::UpdateTransmitState(CDOTAGameManagerProxy *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CDOTAGameManagerProxy::YouForgotToImplementOrDeclareServerClass  (line 198, @0x00000000024b42b0, libserver.so)
int __fastcall CDOTAGameManagerProxy::YouForgotToImplementOrDeclareServerClass(CDOTAGameManagerProxy *const this)
{
  return 0;
}


// CDOTAGameManagerProxy::GetServerClass  (line 198, @0x00000000024be410, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTAGameManagerProxy::GetServerClass(CDOTAGameManagerProxy *const this)
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


// AbilitiesSymbolLessFunc  (line 200, @0x00000000024b42c0, libserver.so)  // inlines: operator<
bool __fastcall AbilitiesSymbolLessFunc(const CUtlSymbolLarge *const lhs, const CUtlSymbolLarge *const rhs)
{
  return lhs->u.m_Id < rhs->u.m_Id;
}


// CDOTAGameManager::CDOTAGameManager  (line 205, @0x00000000024f8b50, libserver.so)  // inlines: CBitVecT, CEntityOwnerPtr, CGameEventListener, CLargeVarBitVec, CNetworkVarChainer, CNonThreadsafeTree, CSmartPtr, CUtlDict, CUtlHashMapLarge, CUtlHashtable, CUtlMap, CUtlMemory, CUtlRBTree, CUtlStringMap, CUtlSymbolLarge, CUtlSymbolTableLargeBase, CUtlVector, CUtlVectorBase, CVarBitVecBase, ChangeAccessorFieldPathIndex_t, ClearAll, HKeySymbol, Purge, RemoveAll, ResetDbgInfo, SetCompareType, SetDefLessFunc<CUtlMap<unsigned int, KeyValues*> >, SetLessFunc, dota_default_strings_t, memset, operator=, ~CAutoGameSystem, ~CUtlDict, ~CUtlMap, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlScratchMemoryPool::CUtlScratchMemoryPool, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int>::CUtlMemory, memset, CUtlMemory<CUtlSymbolLarge, int>::CUtlMemory, CUtlSymbolTable::CUtlSymbolTable, CGameEventListener::~CGameEventListener, IGameSystem::~IGameSystem, _Unwind_Resume, CUtlDict<char const*, int>::Purge, CUtlRBTree<CUtlMap<char const*, char const*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, char const*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, char const*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::~CUtlRBTree, CUtlRBTree<CUtlMap<unsigned int, KeyValues*>::Node_t, short unsigned int, CUtlMap<unsigned int, KeyValues*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, KeyValues*>::Node_t, short unsigned int>, short unsigned int> >::~CUtlRBTree, CUtlHashMapLarge<int, CDOTAGameManager::HeroInfo_t, CUtlHashMapLargeDefEquals<int>, MurmurHash3Functor<int> >::~CUtlHashMapLarge (23 total)
// callers: _GLOBAL__sub_I__unity_dota_03.cpp
// globals: FastCaselessStringLessThan(char const* const&,char const* const&), CDefOps<uint>::LessFunc(uint const&,uint const&), AbilitiesSymbolLessFunc(CUtlSymbolLarge const&,CUtlSymbolLarge const&)
void __fastcall CDOTAGameManager::CDOTAGameManager(CDOTAGameManager *const this)
{
  CEntityInstance *v2; // rax
  CDOTAGameManager *m_hKvSymbols; // rax
  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int>,long long int> >::Node_t *m_pMemory; // rax
  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int>,long long int> >::Node_t *v5; // rax
  bool v6; // zf

  this->_vptr_IGameSystem = &off_40F9250;
  this->m_bRegisteredForEvents = 0;
  this->_vptr_IGameEventListener2 = off_40F93B8;
  this->_vptr_IAddonListChangeNotify = &off_40F93E0;
  this->__m_pChainEntity.m_pPropagationList = 0;
  this->m_vecLocalizedItemNames.m_Size = 0;
  this->m_vecLocalizedItemNames.m_Memory.m_pMemory = 0;
  v2 = CEntitySpawnHelper::gm_pCurEntityPtr;
  this->m_vecLocalizedItemNames.m_Memory.m_nAllocationCount = 0;
  this->m_vecLocalizedItemNames.m_Memory.m_nGrowSize = 0;
  this->__m_pChainEntity.m_pObj = v2;
  this->__m_pChainEntity.m_PathIndex.m_Value = -1;
  m_hKvSymbols = this->m_hKvSymbols;
  do
  {
    LODWORD(m_hKvSymbols->_vptr_IGameSystem) = 0xFFFFFF;
    m_hKvSymbols = (m_hKvSymbols + 4);
  }
  while ( m_hKvSymbols != &this->m_hKvSymbols[7] );
  CUtlScratchMemoryPool::CUtlScratchMemoryPool(&this->m_BaseMemPool, 0x2000, 0, 0);
  CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>::CUtlMemory(
    &this->m_AbilityNameTable.m_Lookup.m_Elements,
    0,
    16);
  m_pMemory = this->m_AbilityNameTable.m_Lookup.m_Elements.m_pMemory;
  this->m_AbilitiesDict.m_Tree.m_NumElements = 0;
  this->m_AbilitiesDict.m_Tree.m_Root = -1;
  this->m_AbilityNameTable.m_Lookup.m_Root = -1;
  this->m_AbilityNameTable.m_Lookup.m_pElements = m_pMemory;
  this->m_AbilitiesDataDict.m_Tree.m_Root = -1;
  this->m_AbilitiesDataDict.m_Tree.m_NumElements = 0;
  this->m_AbilitiesDataDict.m_Tree.m_FirstFree = -1;
  this->m_AbilitiesDataDict.m_Tree.m_LastAlloc.index = -1;
  this->m_AbilityNameTable.m_Lookup.m_NumElements = 0;
  this->m_AbilityNameTable.m_Lookup.m_FirstFree = -1;
  this->m_AbilityNameTable.m_Lookup.m_LastAlloc.index = -1;
  this->m_AbilityNameTable.m_StringPools.m_Size = 0;
  this->m_AbilityNameTable.m_StringPools.m_Memory.m_pMemory = 0;
  this->m_AbilityNameTable.m_StringPools.m_Memory.m_nAllocationCount = 0;
  this->m_AbilityNameTable.m_StringPools.m_Memory.m_nGrowSize = 8;
  this->m_AbilitiesDict.m_Tree.m_LessFunc.m_LessFunc = 0;
  this->m_AbilitiesDict.m_Tree.m_Elements.m_pMemory = 0;
  this->m_AbilitiesDict.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_AbilitiesDict.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_AbilitiesDict.m_Tree.m_FirstFree = -1;
  this->m_AbilitiesDict.m_Tree.m_LastAlloc.index = -1;
  this->m_AbilitiesDict.m_Tree.m_pElements = 0;
  this->m_AbilitiesDataDict.m_Tree.m_LessFunc.m_LessFunc = 0;
  this->m_AbilitiesDataDict.m_Tree.m_Elements.m_pMemory = 0;
  this->m_AbilitiesDataDict.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_AbilitiesDataDict.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_AbilitiesDataDict.m_Tree.m_pElements = 0;
  this->m_AbilitiesIndexToIDMap.m_table.m_pMemory = 0;
  this->m_AbilitiesIndexToIDMap.m_table.m_nAllocationCount = 0;
  this->m_AbilitiesIndexToIDMap.m_table.m_nGrowSize = 0;
  this->m_AbilitiesIndexToIDMap.m_nUsed = 0;
  this->m_AbilitiesIndexToIDMap.m_nMinSize = 32;
  this->m_AbilitiesIndexToIDMap.m_bSizeLocked = 0;
  this->m_AbilitiesIDToIndexMap.m_table.m_pMemory = 0;
  this->m_AbilitiesIDToIndexMap.m_table.m_nAllocationCount = 0;
  this->m_AbilitiesIDToIndexMap.m_table.m_nGrowSize = 0;
  this->m_AbilitiesIDToIndexMap.m_nUsed = 0;
  this->m_AbilitiesIDToIndexMap.m_nMinSize = 32;
  this->m_AbilitiesIDToIndexMap.m_bSizeLocked = 0;
  this->m_UnitNames.m_Elements.m_Tree.m_Elements.m_pMemory = 0;
  this->m_UnitNames.m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_UnitNames.m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_UnitNames.m_Elements.m_Tree.m_Root = -1;
  this->m_UnitNames.m_Elements.m_Tree.m_NumElements = 0;
  this->m_UnitNames.m_Elements.m_Tree.m_FirstFree = -1;
  this->m_UnitNames.m_Elements.m_Tree.m_LastAlloc.index = -1;
  this->m_UnitNames.m_Elements.m_Tree.m_pElements = 0;
  this->m_UnitNames.m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
  CUtlScratchMemoryPool::CUtlScratchMemoryPool(&this->m_AddOnMemPool, 0x2000, 0, 0);
  CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>::CUtlMemory(
    &this->m_AddOnAbilityNameTable.m_Lookup.m_Elements,
    0,
    16);
  v5 = this->m_AddOnAbilityNameTable.m_Lookup.m_Elements.m_pMemory;
  this->m_AddOnAbilitiesDataDict.m_Tree.m_FirstFree = -1;
  this->m_AddOnAbilitiesDataDict.m_Tree.m_NumElements = 0;
  this->m_AddOnAbilitiesDataDict.m_Tree.m_LastAlloc.index = -1;
  this->m_AddOnAbilityNameTable.m_Lookup.m_pElements = v5;
  this->m_AddOnAbilitiesDict.m_Tree.m_Root = -1;
  this->m_AddOnAbilitiesDict.m_Tree.m_NumElements = 0;
  this->m_AddOnAbilitiesDict.m_Tree.m_FirstFree = -1;
  this->m_AddOnAbilitiesDict.m_Tree.m_LastAlloc.index = -1;
  this->m_AddOnAbilitiesDataDict.m_Tree.m_Root = -1;
  this->m_AddOnAbilityNameTable.m_Lookup.m_Root = -1;
  this->m_AddOnAbilityNameTable.m_Lookup.m_NumElements = 0;
  this->m_AddOnAbilityNameTable.m_Lookup.m_FirstFree = -1;
  this->m_AddOnAbilityNameTable.m_Lookup.m_LastAlloc.index = -1;
  this->m_AddOnAbilityNameTable.m_StringPools.m_Size = 0;
  this->m_AddOnAbilityNameTable.m_StringPools.m_Memory.m_pMemory = 0;
  this->m_AddOnAbilityNameTable.m_StringPools.m_Memory.m_nAllocationCount = 0;
  this->m_AddOnAbilityNameTable.m_StringPools.m_Memory.m_nGrowSize = 8;
  this->m_AddOnAbilitiesDict.m_Tree.m_LessFunc.m_LessFunc = 0;
  this->m_AddOnAbilitiesDict.m_Tree.m_Elements.m_pMemory = 0;
  this->m_AddOnAbilitiesDict.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_AddOnAbilitiesDict.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_AddOnAbilitiesDict.m_Tree.m_pElements = 0;
  this->m_AddOnAbilitiesDataDict.m_Tree.m_LessFunc.m_LessFunc = 0;
  this->m_AddOnAbilitiesDataDict.m_Tree.m_Elements.m_pMemory = 0;
  this->m_AddOnAbilitiesDataDict.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_AddOnAbilitiesDataDict.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_AddOnAbilitiesDataDict.m_Tree.m_pElements = 0;
  this->m_AddOnAbilitiesIndexToIDMap.m_table.m_pMemory = 0;
  this->m_AddOnAbilitiesIndexToIDMap.m_table.m_nAllocationCount = 0;
  this->m_AddOnAbilitiesIndexToIDMap.m_table.m_nGrowSize = 0;
  this->m_AddOnAbilitiesIndexToIDMap.m_nUsed = 0;
  this->m_AddOnAbilitiesIndexToIDMap.m_nMinSize = 32;
  this->m_AddOnAbilitiesIndexToIDMap.m_bSizeLocked = 0;
  this->m_AddOnAbilitiesIDToIndexMap.m_table.m_pMemory = 0;
  this->m_AddOnAbilitiesIDToIndexMap.m_table.m_nAllocationCount = 0;
  this->m_AddOnAbilitiesIDToIndexMap.m_table.m_nGrowSize = 0;
  this->m_AddOnAbilitiesIDToIndexMap.m_nUsed = 0;
  this->m_AddOnAbilitiesIDToIndexMap.m_nMinSize = 32;
  this->m_AddOnAbilitiesIDToIndexMap.m_bSizeLocked = 0;
  this->m_AddOnUnitNames.m_Elements.m_Tree.m_Elements.m_pMemory = 0;
  this->m_AddOnUnitNames.m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_AddOnUnitNames.m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_AddOnUnitNames.m_Elements.m_Tree.m_Root = -1;
  this->m_AddOnUnitNames.m_Elements.m_Tree.m_NumElements = 0;
  this->m_AddOnUnitNames.m_Elements.m_Tree.m_FirstFree = -1;
  this->m_AddOnUnitNames.m_Elements.m_Tree.m_LastAlloc.index = -1;
  this->m_AddOnUnitNames.m_Elements.m_Tree.m_pElements = 0;
  this->m_AddOnUnitNames.m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
  this->m_mapAbilitiesByID.m_vecHashBuckets.m_Size = 0;
  this->m_mapAbilitiesByID.m_vecHashBuckets.m_Memory.m_pMemory = 0;
  this->m_mapAbilitiesByID.m_vecHashBuckets.m_Memory.m_nAllocationCount = 0;
  this->m_mapAbilitiesByID.m_vecHashBuckets.m_Memory.m_nGrowSize = 0;
  *&this->m_mapAbilitiesByID.m_bitsMigratedBuckets.m_numBits = 0;
  this->m_mapAbilitiesByID.m_bitsMigratedBuckets.m_pInt = 0;
  *this->m_mapAbilitiesByID.m_bitsMigratedBuckets.m_FixedStorage = 0;
  memset(0, 0, 0);
  this->m_mapAbilitiesByID.m_memNodes.m_pMemory = 0;
  this->m_mapAbilitiesByID.m_memNodes.m_nAllocationCount = 0;
  this->m_mapAbilitiesByID.m_memNodes.m_nGrowSize = 0;
  this->m_mapAbilitiesByID.m_cElements = 0;
  this->m_mapAbilitiesByID.m_nMaxElement = 0;
  this->m_mapAbilitiesByID.m_nMinRehashedBucket = -1;
  this->m_mapAbilitiesByID.m_nMaxRehashedBucket = -1;
  this->m_mapAbilitiesByID.m_iNodeFreeListHead = -1;
  this->m_mapHeroesByID.m_vecHashBuckets.m_Size = 0;
  this->m_mapHeroesByID.m_vecHashBuckets.m_Memory.m_pMemory = 0;
  this->m_mapHeroesByID.m_vecHashBuckets.m_Memory.m_nAllocationCount = 0;
  this->m_mapHeroesByID.m_vecHashBuckets.m_Memory.m_nGrowSize = 0;
  *&this->m_mapHeroesByID.m_bitsMigratedBuckets.m_numBits = 0;
  this->m_mapHeroesByID.m_bitsMigratedBuckets.m_pInt = 0;
  *this->m_mapHeroesByID.m_bitsMigratedBuckets.m_FixedStorage = 0;
  memset(0, 0, 0);
  this->m_mapRegionToKeyValues.m_Tree.m_Root = -1;
  this->m_mapHeroesByID.m_memNodes.m_pMemory = 0;
  this->m_mapHeroesByID.m_memNodes.m_nAllocationCount = 0;
  this->m_mapHeroesByID.m_memNodes.m_nGrowSize = 0;
  this->m_mapHeroesByID.m_cElements = 0;
  this->m_mapHeroesByID.m_nMaxElement = 0;
  this->m_mapHeroesByID.m_nMinRehashedBucket = -1;
  this->m_mapHeroesByID.m_nMaxRehashedBucket = -1;
  this->m_mapHeroesByID.m_iNodeFreeListHead = -1;
  this->m_mapRegionToKeyValues.m_Tree.m_LessFunc.m_LessFunc = 0;
  this->m_mapRegionToKeyValues.m_Tree.m_Elements.m_pMemory = 0;
  this->m_mapRegionToKeyValues.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_mapRegionToKeyValues.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_mapRegionToKeyValues.m_Tree.m_NumElements = 0;
  this->m_mapRegionToKeyValues.m_Tree.m_FirstFree = -1;
  this->m_mapRegionToKeyValues.m_Tree.m_LastAlloc.index = -1;
  this->m_mapRegionToKeyValues.m_Tree.m_pElements = 0;
  this->m_CountryDict.m_Elements.m_Tree.m_Elements.m_pMemory = 0;
  this->m_CountryDict.m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_CountryDict.m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_CountryDict.m_Elements.m_Tree.m_Root = -1;
  this->m_CountryDict.m_Elements.m_Tree.m_NumElements = 0;
  this->m_CountryDict.m_Elements.m_Tree.m_FirstFree = -1;
  this->m_CountryDict.m_Elements.m_Tree.m_LastAlloc.index = -1;
  this->m_CountryDict.m_Elements.m_Tree.m_pElements = 0;
  this->m_CountryDict.m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
  this->m_DOTAStrings.m_item_tpscroll.u.m_Id = 0;
  this->m_DOTAStrings.m_item_dust.u.m_Id = 0;
  this->m_DOTAStrings.m_item_gem.u.m_Id = 0;
  this->m_DOTAStrings.m_item_ward_sentry.u.m_Id = 0;
  this->m_DOTAStrings.m_item_ward_observer.u.m_Id = 0;
  this->m_DOTAStrings.m_item_courier.u.m_Id = 0;
  this->m_DOTAStrings.m_item_flying_courier.u.m_Id = 0;
  this->m_ServerPortraitInfo.m_Vector.m_Size = 0;
  CUtlMemory<CUtlSymbolLarge,int>::CUtlMemory(&this->m_ServerPortraitInfo.m_Vector.m_Memory, 0, 32);
  CUtlSymbolTable::CUtlSymbolTable(&this->m_ServerPortraitInfo.m_SymbolTable, 0, 32, 1);
  v6 = this->m_AbilitiesDict.m_Tree.m_LessFunc.m_LessFunc == 0;
  this->m_pkvHeroes = 0;
  this->m_pkvUnits = 0;
  this->m_pkvAbilities = 0;
  if ( v6 )
  {
    v6 = this->m_AbilitiesDataDict.m_Tree.m_LessFunc.m_LessFunc == 0;
    this->m_AbilitiesDict.m_Tree.m_LessFunc.m_LessFunc = AbilitiesSymbolLessFunc;
    if ( !v6 )
      goto LABEL_5;
  }
  else if ( this->m_AbilitiesDataDict.m_Tree.m_LessFunc.m_LessFunc != 0 )
  {
    goto LABEL_5;
  }
  this->m_AbilitiesDataDict.m_Tree.m_LessFunc.m_LessFunc = AbilitiesSymbolLessFunc;
LABEL_5:
  v6 = this->m_AddOnAbilitiesDict.m_Tree.m_LessFunc.m_LessFunc == 0;
  this->m_pkvAddOnHeroes = 0;
  this->m_pkvAddOnUnits = 0;
  this->m_pkvAddOnAbilities = 0;
  this->m_pAddonInfoKeyValues = 0;
  if ( v6 )
    this->m_AddOnAbilitiesDict.m_Tree.m_LessFunc.m_LessFunc = AbilitiesSymbolLessFunc;
  if ( this->m_AddOnAbilitiesDataDict.m_Tree.m_LessFunc.m_LessFunc == 0 )
    this->m_AddOnAbilitiesDataDict.m_Tree.m_LessFunc.m_LessFunc = AbilitiesSymbolLessFunc;
  v6 = this->m_mapRegionToKeyValues.m_Tree.m_LessFunc.m_LessFunc == 0;
  this->m_bCustomGame = 0;
  this->m_nHighestHeroID = 0;
  this->m_bEventGame = 0;
  this->m_pTutorialLessonKeyValues = 0;
  this->m_pTutorialTipKeyValues = 0;
  this->m_pRegionKeyValues = 0;
  this->m_pDivisionKeyValues = 0;
  this->m_pMatchGroupsKeyValues = 0;
  this->m_pEmoticonsKeyValues = 0;
  this->m_pPortraitsLightPreselects = 0;
  this->m_pAnimationStatues = 0;
  this->m_pSurveyQuestionData = 0;
  if ( v6 )
    this->m_mapRegionToKeyValues.m_Tree.m_LessFunc.m_LessFunc = CDefOps<unsigned int>::LessFunc;
}


// CDOTAGameManager::Init  (line 251, @0x0000000002536260, libserver.so)
// calls: KeyValuesSystem, CDOTAGameManager::LoadKeyValuesFiles
// globals: s_pKvSymbolNames
bool __fastcall CDOTAGameManager::Init(CDOTAGameManager *const this)
{
  __int64 i; // rbx
  __int64 v3; // rax
  const char *v4; // rsi
  __int64 v5; // r12

  for ( i = 0; i != 7; ++i )
  {
    v3 = KeyValuesSystem();
    v4 = s_pKvSymbolNames[i];
    v5 = i;
    this->m_hKvSymbols[v5].nIndex = (*(*v3 + 16LL))(v3, v4, 1);
  }
  CDOTAGameManager::LoadKeyValuesFiles(this);
  (*(*g_pEngineServiceMgr + 360LL))(g_pEngineServiceMgr, &this->IAddonListChangeNotify);
  return 1;
}


// CDOTAGameManager::Shutdown  (line 290, @0x00000000024f97d0, libserver.so)
// calls: CDOTAGameManager::DestroyKeyValuesFiles
void __fastcall CDOTAGameManager::Shutdown(CDOTAGameManager *const this)
{
  (*(*g_pEngineServiceMgr + 368LL))(g_pEngineServiceMgr, &this->IAddonListChangeNotify);
  CDOTAGameManager::DestroyKeyValuesFiles(this);
}


// CDOTAGameManager::GetItemDataByItemID  (line 299, @0x00000000024c2a00, libserver.so)  // inlines: Find, FindInBucket, Get, ModPowerOf2<unsigned int, int>, MurmurHash3Int, MurmurHash3Item<int>, operator(), operator[]
// callers: DOTA_ExecuteOrders, CDOTAGCServerSystem::UpdateRealtimeGameState
KeyValues *__fastcall CDOTAGameManager::GetItemDataByItemID(CDOTAGameManager *const this, int iItemID)
{
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::HashBucket_t *m_pMemory; // r9
  int m_Size; // edx
  unsigned int v4; // r8d
  __int64 m_iNode; // rax
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v6; // rax
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::IndexType_t m_nMinRehashedBucket; // r10d
  int v9; // edx
  int v10; // ecx
  __int64 v11; // rax
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v12; // rcx
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v13; // rax
  __int64 m_iNextNode; // rax

  if ( iItemID <= 0 || this->m_mapAbilitiesByID.m_cElements == 0 )
    return 0;
  m_pMemory = this->m_mapAbilitiesByID.m_vecHashBuckets.m_Memory.m_pMemory;
  m_Size = this->m_mapAbilitiesByID.m_vecHashBuckets.m_Size;
  v4 = (-1028477387 * ((-2048144789 * (iItemID ^ HIWORD(iItemID))) ^ ((-2048144789 * (iItemID ^ HIWORD(iItemID))) >> 13)))
     ^ ((-1028477387
       * ((-2048144789 * (iItemID ^ HIWORD(iItemID))) ^ ((-2048144789 * (iItemID ^ HIWORD(iItemID))) >> 13))) >> 16);
  m_iNode = m_pMemory[v4 & (m_Size - 1)].m_iNode;
  if ( m_iNode == -1 )
  {
LABEL_8:
    m_nMinRehashedBucket = this->m_mapAbilitiesByID.m_nMinRehashedBucket;
    v9 = m_Size >> 1;
    if ( m_nMinRehashedBucket <= v9 )
    {
      do
      {
        v10 = v4 & (v9 - 1);
        if ( ((1 << (((53 * ((107 * (iItemID ^ BYTE2(iItemID))) ^ ((-2048144789 * (iItemID ^ HIWORD(iItemID))) >> 13)))
                    ^ ((-1028477387
                      * ((-2048144789 * (iItemID ^ HIWORD(iItemID)))
                       ^ ((-2048144789 * (iItemID ^ HIWORD(iItemID))) >> 13))) >> 16))
                   & (v9 - 1)))
            & this->m_mapAbilitiesByID.m_bitsMigratedBuckets.m_pInt[v10 >> 5]) == 0 )
        {
          v11 = m_pMemory[v10].m_iNode;
          if ( v11 != -1 )
          {
            v12 = this->m_mapAbilitiesByID.m_memNodes.m_pMemory;
            v13 = &v12[v11];
            if ( v13->m_key == iItemID )
              return v13->m_elem;
            while ( 1 )
            {
              m_iNextNode = v13->m_iNextNode;
              if ( m_iNextNode == -1 )
                break;
              v13 = &v12[m_iNextNode];
              if ( v13->m_key == iItemID )
                return v13->m_elem;
            }
          }
        }
        v9 >>= 1;
      }
      while ( m_nMinRehashedBucket <= v9 );
      return 0;
    }
    return 0;
  }
  while ( 1 )
  {
    v6 = &this->m_mapAbilitiesByID.m_memNodes.m_pMemory[m_iNode];
    if ( v6->m_key == iItemID )
      return v6->m_elem;
    m_iNode = v6->m_iNextNode;
    if ( m_iNode == -1 )
      goto LABEL_8;
  }
}


// CDOTAGameManager::GetAbilityIDFromIndex  (line 314, @0x00000000024c2b30, libserver.so)  // inlines: DoLookup<short unsigned int>, Element, Find, Get, IsAddOnGame, operator(), operator[]
// calls: CUtlHashtable<short unsigned int, int, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, int>, int> >::DoLookup<short unsigned int>
int __fastcall CDOTAGameManager::GetAbilityIDFromIndex(CDOTAGameManager *const this, unsigned __int16 nIndex)
{
  CUtlHashtable<short unsigned int,int,DefaultHashFunctor<short unsigned int>,DefaultEqualFunctor<short unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<short unsigned int,int>,int> >::handle_t *v2; // rcx
  int result; // eax
  unsigned int v5; // edx
  unsigned int v6; // edx
  int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // edx
  int v10; // eax

  if ( this->m_bCustomGame || this->m_bEventGame )
  {
    result = this->m_AddOnAbilitiesIndexToIDMap.m_nUsed;
    if ( result == 0 )
      return result;
    v8 = 33 * (((4097 * nIndex + 2127912214) >> 19) ^ (4097 * nIndex + 2127912214) ^ 0xC761C23C);
    v9 = 9 * ((v8 - 369570787) ^ ((v8 + 374761393) << 9)) - 42973499;
    v10 = CUtlHashtable<unsigned short,int,DefaultHashFunctor<unsigned short>,DefaultEqualFunctor<unsigned short>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned short,int>,int>>::DoLookup<unsigned short>(
            &this->m_AddOnAbilitiesIndexToIDMap,
            nIndex,
            HIWORD(v9) ^ v9 ^ 0xB55A4F09,
            v2);
    if ( v10 != -1 )
      return this->m_AddOnAbilitiesIndexToIDMap.m_table.m_pMemory[v10].data[1];
    return 0;
  }
  result = this->m_AbilitiesIndexToIDMap.m_nUsed;
  if ( result != 0 )
  {
    v5 = 33 * (((4097 * nIndex + 2127912214) >> 19) ^ (4097 * nIndex + 2127912214) ^ 0xC761C23C);
    v6 = 9 * ((v5 - 369570787) ^ ((v5 + 374761393) << 9)) - 42973499;
    v7 = CUtlHashtable<unsigned short,int,DefaultHashFunctor<unsigned short>,DefaultEqualFunctor<unsigned short>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned short,int>,int>>::DoLookup<unsigned short>(
           &this->m_AbilitiesIndexToIDMap,
           nIndex,
           HIWORD(v6) ^ v6 ^ 0xB55A4F09,
           v2);
    if ( v7 != -1 )
      return this->m_AbilitiesIndexToIDMap.m_table.m_pMemory[v7].data[1];
    return 0;
  }
  return result;
}


// CDOTAGameManager::GetAbilityIndexFromID  (line 325, @0x00000000024c2c60, libserver.so)  // inlines: DoLookup<int>, Element, Find, Get, IsAddOnGame, operator(), operator[]
// calls: CUtlHashtable<int, short unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, short unsigned int>, int> >::DoLookup<int>
// callers: CDOTAGamerules::ABILITYDRAFT_ExtractAbilitiesFromHero
unsigned __int16 __fastcall CDOTAGameManager::GetAbilityIndexFromID(CDOTAGameManager *const this, int iItemID)
{
  CUtlHashtable<int,short unsigned int,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,short unsigned int>,int> >::handle_t *v2; // rcx
  unsigned int v5; // edx
  unsigned int v6; // edx
  int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // edx
  int v10; // eax

  if ( !this->m_bCustomGame && !this->m_bEventGame )
  {
    if ( this->m_AbilitiesIDToIndexMap.m_nUsed != 0 )
    {
      v5 = 33 * (((4097 * iItemID + 2127912214) >> 19) ^ (4097 * iItemID + 2127912214) ^ 0xC761C23C);
      v6 = 9 * ((v5 - 369570787) ^ ((v5 + 374761393) << 9)) - 42973499;
      v7 = CUtlHashtable<int,unsigned short,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,unsigned short>,int>>::DoLookup<int>(
             &this->m_AbilitiesIDToIndexMap,
             iItemID,
             HIWORD(v6) ^ v6 ^ 0xB55A4F09,
             v2);
      if ( v7 != -1 )
        return this->m_AbilitiesIDToIndexMap.m_table.m_pMemory[v7].data[1];
    }
    return 0;
  }
  if ( this->m_AddOnAbilitiesIDToIndexMap.m_nUsed == 0 )
    return 0;
  v8 = 33 * (((4097 * iItemID + 2127912214) >> 19) ^ (4097 * iItemID + 2127912214) ^ 0xC761C23C);
  v9 = 9 * ((v8 - 369570787) ^ ((v8 + 374761393) << 9)) - 42973499;
  v10 = CUtlHashtable<int,unsigned short,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,unsigned short>,int>>::DoLookup<int>(
          &this->m_AddOnAbilitiesIDToIndexMap,
          iItemID,
          HIWORD(v9) ^ v9 ^ 0xB55A4F09,
          v2);
  if ( v10 == -1 )
    return 0;
  return this->m_AddOnAbilitiesIDToIndexMap.m_table.m_pMemory[v10].data[1];
}


// CDOTAGameManager::LoadKeyValuesFiles  (line 346, @0x0000000002535df0, libserver.so)  // inlines: Insert, LeafCodeInfo_t, NotifySteamMissingFiles, RemoveAll
// calls: CDOTAGameManager::DestroyKeyValuesFiles, CDOTAGameManager::SetupGameKeyValues, CUtlRBTree<CUtlMap<unsigned int, KeyValues*>::Node_t, short unsigned int, CUtlMap<unsigned int, KeyValues*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, KeyValues*>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, KeyValues::GetFirstSubKey, KeyValues::GetInt, CUtlRBTree<CUtlMap<unsigned int, KeyValues*>::Node_t, short unsigned int, CUtlMap<unsigned int, KeyValues*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, KeyValues*>::Node_t, short unsigned int>, short unsigned int> >::Insert, KeyValues::GetNextKey, CDOTAGameManager::LoadCountryCodes, CDOTAGameManager::LoadSurveyQuestionData, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess (13 total)
// callers: CDOTAGameManager::Init, CDOTAGameManager::GetHighestHeroID, CDOTAGameManager::PrintHighestFreeIDs, CDOTAGameManager::GetHeroDataByHeroID, CDOTAGameManager::GetHeroDataStructByHeroID, CDOTAGameManager::GetHeroDataByModelName, CDOTAGameManager::GetUnitDataByModelName
// strings: "m_pPortraitsLightPreselectsKeyValues", "scripts/npc/portraits_light_preselects.txt", "m_pAnimationStatuesKeyValues", "scripts/animation_statues.txt", "scripts/regions.txt", "divisions" (13 total)
bool __fastcall CDOTAGameManager::LoadKeyValuesFiles(CDOTAGameManager *const this)
{
  KeyValues *v2; // rax
  KeyValues *v3; // rax
  KeyValues *v4; // rax
  KeyValues *i; // rbx
  int Int; // eax
  KeyValues *v7; // rax
  KeyValues *v8; // rax
  KeyValues *v9; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  const char *j; // r8
  LeafCodeInfo_t insert[3]; // [rsp+0h] [rbp-50h] BYREF

  CDOTAGameManager::DestroyKeyValuesFiles(this);
  CDOTAGameManager::SetupGameKeyValues(this, 0);
  v2 = (*(*g_pKeyValueCache + 88LL))(
         g_pKeyValueCache,
         "scripts/npc/portraits_light_preselects.txt",
         0,
         "m_pPortraitsLightPreselectsKeyValues",
         "GAME");
  this->m_pPortraitsLightPreselects = v2;
  if ( v2 == 0 )
  {
    if ( g_pFullFileSystem != 0 )
      (*(g_pFullFileSystem->_vptr_IAppSystem + 146))(g_pFullFileSystem, 1, 0);
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) == 0 )
      goto LABEL_13;
    goto LABEL_16;
  }
  v3 = (*(*g_pKeyValueCache + 88LL))(
         g_pKeyValueCache,
         "scripts/animation_statues.txt",
         0,
         "m_pAnimationStatuesKeyValues",
         "GAME");
  this->m_pAnimationStatues = v3;
  if ( v3 == 0 )
  {
    if ( g_pFullFileSystem != 0 )
      (*(g_pFullFileSystem->_vptr_IAppSystem + 146))(g_pFullFileSystem, 1, 0);
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) == 0 )
      goto LABEL_13;
    insert[0].m_nLine = 367;
    insert[0].m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/_generated_code/server_dota"
                         "/release/linuxsteamrt64/../../../../game/shared/dota/dota_game_manager.cpp";
    insert[0].m_szFunction = "LoadKeyValuesFiles";
    j = "scripts/animation_statues.txt";
    goto LABEL_17;
  }
  v4 = (*(*g_pKeyValueCache + 88LL))(g_pKeyValueCache, "scripts/regions.txt", 0, "regions", "GAME");
  this->m_pRegionKeyValues = v4;
  if ( v4 == 0 )
  {
    if ( g_pFullFileSystem != 0 )
      (*(g_pFullFileSystem->_vptr_IAppSystem + 146))(g_pFullFileSystem, 1, 0);
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) == 0 )
      goto LABEL_13;
    insert[0].m_nLine = 375;
    insert[0].m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/_generated_code/server_dota"
                         "/release/linuxsteamrt64/../../../../game/shared/dota/dota_game_manager.cpp";
    insert[0].m_szFunction = "LoadKeyValuesFiles";
    j = "scripts/regions.txt";
    goto LABEL_17;
  }
  CUtlRBTree<CUtlMap<unsigned int,KeyValues *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,KeyValues *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,KeyValues *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_mapRegionToKeyValues.m_Tree);
  for ( i = KeyValues::GetFirstSubKey(this->m_pRegionKeyValues); i != 0; i = KeyValues::GetNextKey(i) )
  {
    Int = KeyValues::GetInt(i, "region", 0);
    *&insert[0].m_nLine = i;
    LODWORD(insert[0].m_szFile) = Int;
    CUtlRBTree<CUtlMap<unsigned int,KeyValues *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,KeyValues *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,KeyValues *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Insert(
      &this->m_mapRegionToKeyValues.m_Tree,
      insert,
      ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
  }
  v7 = (*(*g_pKeyValueCache + 88LL))(g_pKeyValueCache, "scripts/divisions.txt", 0, "divisions", "GAME");
  this->m_pDivisionKeyValues = v7;
  if ( v7 == 0 )
  {
    if ( g_pFullFileSystem != 0 )
      (*(g_pFullFileSystem->_vptr_IAppSystem + 146))(g_pFullFileSystem, 1, 0);
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) == 0 )
      goto LABEL_13;
    insert[0].m_nLine = 390;
    insert[0].m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/_generated_code/server_dota"
                         "/release/linuxsteamrt64/../../../../game/shared/dota/dota_game_manager.cpp";
    insert[0].m_szFunction = "LoadKeyValuesFiles";
    j = "scripts/divisions.txt";
    goto LABEL_17;
  }
  v8 = (*(*g_pKeyValueCache + 88LL))(g_pKeyValueCache, "scripts/matchgroups.txt", 0, "matchgroups", "GAME");
  this->m_pMatchGroupsKeyValues = v8;
  if ( v8 == 0 )
  {
    if ( g_pFullFileSystem != 0 )
      (*(g_pFullFileSystem->_vptr_IAppSystem + 146))(g_pFullFileSystem, 1, 0);
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) == 0 )
      goto LABEL_13;
    insert[0].m_nLine = 398;
    insert[0].m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/_generated_code/server_dota"
                         "/release/linuxsteamrt64/../../../../game/shared/dota/dota_game_manager.cpp";
    insert[0].m_szFunction = "LoadKeyValuesFiles";
    j = "scripts/matchgroups.txt";
    goto LABEL_17;
  }
  v9 = (*(*g_pKeyValueCache + 88LL))(g_pKeyValueCache, "scripts/emoticons.txt", 0, "emoticons", "GAME");
  this->m_pEmoticonsKeyValues = v9;
  if ( v9 == 0 )
  {
    if ( g_pFullFileSystem != 0 )
      (*(g_pFullFileSystem->_vptr_IAppSystem + 146))(g_pFullFileSystem, 1, 0);
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) == 0 )
      goto LABEL_13;
    insert[0].m_nLine = 406;
    insert[0].m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/_generated_code/server_dota"
                         "/release/linuxsteamrt64/../../../../game/shared/dota/dota_game_manager.cpp";
    insert[0].m_szFunction = "LoadKeyValuesFiles";
    for ( j = "scripts/emoticons.txt"; ; j = "scripts/npc/portraits_light_preselects.txt" )
    {
LABEL_17:
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, insert, "Failed to load %s!\n", j);
LABEL_13:
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v13, v14, v11, v12) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_16:
      insert[0].m_nLine = 359;
      insert[0].m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/_generated_code/server_do"
                           "ta/release/linuxsteamrt64/../../../../game/shared/dota/dota_game_manager.cpp";
      insert[0].m_szFunction = "LoadKeyValuesFiles";
    }
  }
  CDOTAGameManager::LoadCountryCodes(this);
  CDOTAGameManager::LoadSurveyQuestionData(this);
  return 1;
}


// CDOTAGameManager::ReloadTutorialFiles  (line 419, @0x00000000024c2da0, libserver.so)
// calls: Warning
// strings: "m_pTutorialTipKeyValues", "scripts/tutorial/tutorial_tips.txt", "Failed to load %s!\n"
bool __fastcall CDOTAGameManager::ReloadTutorialFiles(CDOTAGameManager *const this)
{
  __int64 v2; // rax
  KeyValues *v3; // rdx
  bool result; // al
  KeyValues *v5; // rdx

  v2 = *g_pKeyValueCache;
  if ( this->m_pTutorialTipKeyValues != 0 )
  {
    v3 = (*(v2 + 104))(g_pKeyValueCache, "scripts/tutorial/tutorial_tips.txt", 0, "m_pTutorialTipKeyValues", "GAME");
    this->m_pTutorialTipKeyValues = v3;
    result = 1;
    if ( v3 != 0 )
      return result;
LABEL_5:
    Warning("Failed to load %s!\n", "scripts/tutorial/tutorial_tips.txt");
    return 0;
  }
  v5 = (*(v2 + 88))(g_pKeyValueCache, "scripts/tutorial/tutorial_tips.txt", 0, "m_pTutorialTipKeyValues", "GAME");
  this->m_pTutorialTipKeyValues = v5;
  result = 1;
  if ( v5 == 0 )
    goto LABEL_5;
  return result;
}


// CDOTAGameManager::LoadTutorial  (line 441, @0x00000000024c2e40, libserver.so)  // inlines: V_strcat, V_strncat<int>
// calls: _V_strncat, Warning, __stack_chk_fail
// callers: CDOTA_Tutorial::LoadLessonKeys
// strings: "scripts/tutorial/", "m_pTutorialLessonKeyValues", "Failed to load %s!\n"
bool __fastcall CDOTAGameManager::LoadTutorial(CDOTAGameManager *const this, const char *pszTutorialName)
{
  __int64 v4; // rax
  KeyValues *v5; // rdx
  bool result; // al
  KeyValues *v7; // rdx
  char szFileName[264]; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v9; // [rsp+108h] [rbp-28h]

  szFileName[0] = 0;
  v9 = __readfsqword(0x28u);
  _V_strncat(szFileName, "scripts/tutorial/", 260, 0xFFFFFFFFLL);
  _V_strncat(szFileName, pszTutorialName, 260, 0xFFFFFFFFLL);
  _V_strncat(szFileName, ".txt", 260, 0xFFFFFFFFLL);
  v4 = *g_pKeyValueCache;
  if ( this->m_pTutorialLessonKeyValues != 0 )
  {
    v5 = (*(v4 + 104))(g_pKeyValueCache, szFileName, 0, "m_pTutorialLessonKeyValues", "GAME");
    this->m_pTutorialLessonKeyValues = v5;
    result = 1;
    if ( v5 != 0 )
      return result;
LABEL_5:
    Warning("Failed to load %s!\n", szFileName);
    return 0;
  }
  v7 = (*(v4 + 88))(g_pKeyValueCache, szFileName, 0, "m_pTutorialLessonKeyValues", "GAME");
  this->m_pTutorialLessonKeyValues = v7;
  result = 1;
  if ( v7 == 0 )
    goto LABEL_5;
  return result;
}


// CDOTAGameManager::ShutdownAddOnGame  (line 470, @0x00000000024f1950, libserver.so)
// calls: CDOTAGameManager::DestroyAddOnGameKeyValues
void __fastcall CDOTAGameManager::ShutdownAddOnGame(CDOTAGameManager *const this)
{
  this->m_bCustomGame = 0;
  this->m_bEventGame = 0;
  CDOTAGameManager::DestroyAddOnGameKeyValues(this);
  this->m_szAddOnGame[0] = 0;
  this->m_szAddOnMap[0] = 0;
}


// CDOTAGameManager::LevelShutdown  (line 493, @0x00000000024f19e0, libserver.so)
// calls: CDOTAGameManager::DestroyAddOnGameKeyValues
void __fastcall CDOTAGameManager::LevelShutdown(CDOTAGameManager *const this)
{
  CDOTAGameManager::DestroyAddOnGameKeyValues(this);
}


// CDOTAGameManager::ServerShutdown  (line 501, @0x00000000024f1990, libserver.so)  // inlines: IsAddOnGame, ShutdownAddOnGame
// calls: CDOTAGameManager::DestroyAddOnGameKeyValues
// callers: CSource2Server::GameServerSteamAPIDeactivated
void __fastcall CDOTAGameManager::ServerShutdown(CDOTAGameManager *const this)
{
  if ( this->m_bCustomGame || this->m_bEventGame )
  {
    this->m_bCustomGame = 0;
    this->m_bEventGame = 0;
    CDOTAGameManager::DestroyAddOnGameKeyValues(this);
    this->m_szAddOnGame[0] = 0;
    this->m_szAddOnMap[0] = 0;
  }
}


// CDOTAGameManager::FireGameEvent  (line 511, @0x00000000024b42d0, libserver.so)
void __fastcall CDOTAGameManager::FireGameEvent(CDOTAGameManager *const this, IGameEvent *event)
{
  ;
}


// CDOTAGameManager::ReloadGameKeyValues  (line 571, @0x00000000025419f0, libserver.so)
// calls: CDOTAGameManager::DestroyGameKeyValues, CDOTAGameManager::SetupGameKeyValues, EntityInstanceIter_t::EntityInstanceIter_t, EntityInstanceIter_t::First, __dynamic_cast, CDOTABaseAbility::LoadAbilityData, EntityInstanceIter_t::Next
// callers: reload_game_keyvalues
void __fastcall CDOTAGameManager::ReloadGameKeyValues(CDOTAGameManager *const this)
{
  CEntityInstance *i; // rax
  CDOTABaseAbility *v3; // rax
  EntityInstanceIter_t_1 iter; // [rsp+0h] [rbp-40h] BYREF

  CDOTAGameManager::DestroyGameKeyValues(this);
  CDOTAGameManager::SetupGameKeyValues(this, 1);
  EntityInstanceIter_t::EntityInstanceIter_t(&iter, 0, EntityIterType_t::ENTITY_ENUM_ITERATE_NON_DORMANT_ONLY);
  for ( i = EntityInstanceIter_t::First(&iter); i != 0; i = EntityInstanceIter_t::Next(&iter) )
  {
    v3 = __dynamic_cast(i, &`typeinfo for'CEntityInstance, &`typeinfo for'CDOTABaseAbility, 0);
    if ( v3 != 0 )
      CDOTABaseAbility::LoadAbilityData(v3, 0);
  }
}


// CDOTAGameManager::SetupAddOnGameKeyValues  (line 591, @0x0000000002541ae0, libserver.so)
// calls: CDOTAGameManager::DestroyAddOnGameKeyValues, CDOTAGameManager::SetupGameKeyValues
// callers: CDOTAGameManager::InitAddOnGame
bool __fastcall CDOTAGameManager::SetupAddOnGameKeyValues(CDOTAGameManager *const this)
{
  if ( this->m_pkvAddOnHeroes != 0 )
    CDOTAGameManager::DestroyAddOnGameKeyValues(this);
  return CDOTAGameManager::SetupGameKeyValues(this, 0);
}


// CDOTAGameManager::ApplyAbilitiesOverride  (line 611, @0x00000000024c2f60, libserver.so)  // inlines: FStrEq, _V_strcmp
// calls: KeyValues::GetFirstSubKey, KeyValues::GetString, KeyValues::GetNextKey, KeyValues::MergeFrom, KeyValues::GetName, KeyValues::FindKey, KeyValues::RemoveSubKey
// callers: CDOTAGameManager::Playtesting_UpdateAddOnKeyValues, CDOTAGameManager::SetupGameKeyValues
// strings: "REMOVE"
void __fastcall CDOTAGameManager::ApplyAbilitiesOverride(CDOTAGameManager *const this, KeyValues *kvAbilitiesOverride)
{
  KeyValues *i; // rbx
  char *String; // rax
  const char *Name; // rax
  KeyValues *Key; // rax
  KeyValues *kvNextOverrideSubkey; // [rsp+8h] [rbp-38h]

  for ( i = KeyValues::GetFirstSubKey(kvAbilitiesOverride); i != 0; i = kvNextOverrideSubkey )
  {
    while ( 1 )
    {
      String = KeyValues::GetString(i, 0, "", 0, 0);
      if ( String == "REMOVE" || strcmp(String, "REMOVE") == 0 )
      {
        Name = KeyValues::GetName(i);
        Key = KeyValues::FindKey(this->m_pkvAddOnAbilities, Name, 0);
        if ( Key != 0 )
          break;
      }
      i = KeyValues::GetNextKey(i);
      if ( i == 0 )
        goto LABEL_6;
    }
    KeyValues::RemoveSubKey(this->m_pkvAddOnAbilities, Key, 0);
    kvNextOverrideSubkey = KeyValues::GetNextKey(i);
    KeyValues::RemoveSubKey(kvAbilitiesOverride, i, 0);
  }
LABEL_6:
  KeyValues::MergeFrom(this->m_pkvAddOnAbilities, kvAbilitiesOverride, KeyValues::MergeKeyValuesOp_t::MERGE_KV_UPDATE);
}


// CDOTAGameManager::Playtesting_UpdateAddOnKeyValues  (line 636, @0x00000000024c3050, libserver.so)  // inlines: IsAddOnGame
// calls: Msg, KeyValues::KeyValues, KeyValues::LoadFromFile, KeyValues::~KeyValues, CDOTAGameManager::ApplyAbilitiesOverride, KeyValues::MergeFrom, __stack_chk_fail, _Unwind_Resume
// callers: CDOTAGamerules::Playtesting_UpdateAddOnKeyValues
// strings: "Updating custom hero, unit, ability and item KeyValues with latest values from disk...\n", "DOTAHeroes", "scripts/npc/npc_heroes_custom.txt", "DOTAUnits", "scripts/npc/npc_units_custom.txt", "DOTAAbilitiesAndItems" (10 total)
void __fastcall CDOTAGameManager::Playtesting_UpdateAddOnKeyValues(CDOTAGameManager *const this)
{
  double v2; // xmm0_8
  IBaseFileSystem *v3; // rsi
  IBaseFileSystem *v4; // rsi
  IBaseFileSystem *v5; // rsi
  IBaseFileSystem *v6; // rsi
  IBaseFileSystem *v7; // rsi
  KeyValues kvAbilities; // [rsp+0h] [rbp-90h] BYREF
  KeyValues kvItems; // [rsp+20h] [rbp-70h] BYREF
  KeyValues kvAbilitiesOverride; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v11; // [rsp+58h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  if ( this->m_bCustomGame || this->m_bEventGame )
  {
    *&v2 = Msg("Updating custom hero, unit, ability and item KeyValues with latest values from disk...\n").m128_u64[0];
    if ( this->m_pkvAddOnHeroes != 0 )
    {
      KeyValues::KeyValues(&kvAbilitiesOverride, "DOTAHeroes");
      v3 = 0;
      if ( g_pFullFileSystem != 0 )
        v3 = &g_pFullFileSystem->IBaseFileSystem;
      if ( KeyValues::LoadFromFile(&kvAbilitiesOverride, v3, "scripts/npc/npc_heroes_custom.txt", "GAME", 0) )
        KeyValues::MergeFrom(
          this->m_pkvAddOnHeroes,
          &kvAbilitiesOverride,
          KeyValues::MergeKeyValuesOp_t::MERGE_KV_UPDATE);
      KeyValues::~KeyValues(&kvAbilitiesOverride);
    }
    if ( this->m_pkvAddOnUnits != 0 )
    {
      KeyValues::KeyValues(&kvAbilitiesOverride, "DOTAUnits");
      v4 = 0;
      if ( g_pFullFileSystem != 0 )
        v4 = &g_pFullFileSystem->IBaseFileSystem;
      if ( KeyValues::LoadFromFile(&kvAbilitiesOverride, v4, "scripts/npc/npc_units_custom.txt", "GAME", 0) )
        KeyValues::MergeFrom(
          this->m_pkvAddOnUnits,
          &kvAbilitiesOverride,
          KeyValues::MergeKeyValuesOp_t::MERGE_KV_UPDATE);
      KeyValues::~KeyValues(&kvAbilitiesOverride);
    }
    if ( this->m_pkvAddOnAbilities != 0 )
    {
      KeyValues::KeyValues(&kvAbilities, "DOTAAbilitiesAndItems");
      v5 = 0;
      if ( g_pFullFileSystem != 0 )
        v5 = &g_pFullFileSystem->IBaseFileSystem;
      if ( KeyValues::LoadFromFile(&kvAbilities, v5, "scripts/npc/npc_abilities_custom.txt", "GAME", 0) )
        KeyValues::MergeFrom(this->m_pkvAddOnAbilities, &kvAbilities, KeyValues::MergeKeyValuesOp_t::MERGE_KV_UPDATE);
      KeyValues::KeyValues(&kvItems, "DOTAAbilitiesAndItems");
      v6 = 0;
      if ( g_pFullFileSystem != 0 )
        v6 = &g_pFullFileSystem->IBaseFileSystem;
      if ( KeyValues::LoadFromFile(&kvItems, v6, "scripts/npc/npc_items_custom.txt", "GAME", 0) )
        KeyValues::MergeFrom(this->m_pkvAddOnAbilities, &kvItems, KeyValues::MergeKeyValuesOp_t::MERGE_KV_UPDATE);
      KeyValues::KeyValues(&kvAbilitiesOverride, "DOTAAbilitiesAndItems");
      v7 = 0;
      if ( g_pFullFileSystem != 0 )
        v7 = &g_pFullFileSystem->IBaseFileSystem;
      if ( KeyValues::LoadFromFile(&kvAbilitiesOverride, v7, "scripts/npc/npc_abilities_override.txt", "GAME", 0) )
        CDOTAGameManager::ApplyAbilitiesOverride(this, &kvAbilitiesOverride);
      KeyValues::~KeyValues(&kvAbilitiesOverride);
      KeyValues::~KeyValues(&kvItems);
      KeyValues::~KeyValues(&kvAbilities);
    }
    Msg("Done updating KeyValues.\n", v2);
  }
}


// CDOTAGameManager::SetupGameKeyValues  (line 690, @0x0000000002534390, libserver.so)  // inlines: AddMultipleToTail, AllocNode, Bitvec_Set, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CDOTAGameManager::HeroInfo_t>, CopyConstruct<KeyValues*>, CopyConstruct<int>, Element, End, EnsureCapacity, FindInBucket, FreeNodeIDToIndex, Get, GetAbilitiesKeyValues, GetCurrentMode, GetHeroesKeyValues, GetInt, GetMillisecondsF, GrowMemory, GrowVector, HKeySymbol, IncrementalRehash, InitSearchableItems, Insert, InsertInternal, InsertMultipleBefore, IsAddOnGame, ModPowerOf2<unsigned int, int>, MurmurHash3Int, MurmurHash3Item<int>, NotifySteamMissingFiles, PLAT_CPU_TIME, Purge, RehashNodesInBucket, RemoveAll, Sample, Set, Start, UnlinkNodeFromBucket, memcpy, memset, operator(), operator[], ~CUtlVector
// calls: CUtlVectorBase<char const*, CUtlMemory<char const*, int> >::AddToTail, KeyValues::MergeFrom, KeyValues::GetFirstSubKey, KeyValues::GetName, CUtlDict<int, int>::HasElement, CUtlDict<int, int>::Insert, KeyValues::GetNextKey, CUtlVectorBase<char const*, CUtlMemory<char const*, int> >::~CUtlVectorBase, CDOTAGameManager::VerifyHeroIDs, IsStableMode, CDOTAGameManager::ResetEnabledHeroes, CDOTAGameManager::SetupItemSymbolsAndDictionary (44 total)
// callers: CDOTAGameManager::LoadKeyValuesFiles, CDOTAGameManager::ReloadGameKeyValues, CDOTAGameManager::SetupAddOnGameKeyValues, CDOTAGameManager::OnAddonListChanged
// strings: "scripts/npc/npc_heroes.txt", "scripts/npc/npc_heroes_staging.txt", "DOTAHeroes", "scripts/npc/npc_units.txt", "scripts/npc/npc_units_staging.txt", "DOTAUnits" (21 total)
// globals: s_pDOTAPopularItemsFiles
bool __fastcall CDOTAGameManager::SetupGameKeyValues(CDOTAGameManager *const this, bool bIncrementVersion)
{
  unsigned __int64 v4; // rax
  char m_bEventGame; // r13
  KeyValues *v6; // rax
  KeyValues *v7; // rax
  KeyValues *m; // r13
  const char *v9; // rax
  const char *v10; // rax
  bool v11; // al
  KeyValues *v12; // rax
  KeyValues *k; // r13
  const char *v14; // rax
  const char *v15; // rax
  KeyValues *v16; // rax
  bool v17; // zf
  KeyValues *m_pkvAddOnAbilities; // rdi
  KeyValues *Key; // rax
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::IndexType_t m_cElements; // eax
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::IndexType_t m_Size; // r15d
  int v22; // r14d
  uint32 m_nGrowSize; // eax
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v24; // rsi
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v25; // rax
  int v26; // r13d
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::HashBucket_t *v27; // rdi
  size_t v28; // rdx
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::IndexType_t v29; // edx
  int m_nMinRehashedBucket; // r13d
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::IndexType_t m_nMaxRehashedBucket; // esi
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::HashBucket_t *v32; // rdi
  __int64 v33; // r15
  int v34; // ecx
  uint32 *m_pInt; // rax
  int v36; // r13d
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::IndexType_t v37; // ecx
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::IndexType_t m_iNode; // edx
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v39; // rdi
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v40; // rax
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::IndexType_t m_iNextNode; // r14d
  int v42; // esi
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::HashBucket_t *v43; // rcx
  __int64 v44; // rax
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v45; // rcx
  KeyValues *v46; // rax
  KeyValues *v47; // rax
  KeyValues *i; // r13
  const char *Name; // rax
  KeyValues *v50; // rax
  KeyValues *j; // r13
  const char *v52; // rax
  int v53; // r15d
  uint32 *v54; // rax
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::IndexType_t v55; // r14d
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::IndexType_t v56; // edx
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v57; // rdi
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v58; // rax
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::IndexType_t v59; // r15d
  int v60; // esi
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::HashBucket_t *v61; // rcx
  __int64 v62; // rax
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v63; // rcx
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::IndexType_t v64; // edx
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v65; // rax
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::IndexType_t m_iNodeFreeListHead; // esi
  __int64 v67; // rcx
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v68; // rax
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::IndexType_t v69; // edi
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v70; // rax
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v71; // rcx
  KeyValues *m_pkvHeroes; // rdi
  KeyValues *v73; // rax
  const char *v74; // rax
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::IndexType_t v75; // eax
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::IndexType_t v76; // r15d
  int v77; // r14d
  uint32 v78; // eax
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v79; // rsi
  __int64 v80; // rax
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v81; // rax
  int v82; // r13d
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::HashBucket_t *v83; // rdi
  size_t v84; // rdx
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::IndexType_t v85; // edx
  int v86; // ecx
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::IndexType_t v87; // r8d
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::HashBucket_t *v88; // rdi
  __int64 v89; // r13
  uint32 *v90; // rax
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::IndexType_t v91; // r14d
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::IndexType_t v92; // edx
  int v93; // r8d
  __int64 v94; // r14
  int v95; // r13d
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v96; // rdi
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v97; // rax
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::IndexType_t v98; // r15d
  int v99; // esi
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::IndexType_t *v100; // rax
  __int64 v101; // r8
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v102; // r8
  __int64 v103; // rax
  __int64 v104; // rax
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v105; // rsi
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v106; // rax
  __int64 v107; // rax
  bool v108; // cc
  int m_nAllocationCount; // eax
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::HashBucket_t *v110; // rax
  KeyValues *v111; // rax
  IBaseFileSystem *v112; // rsi
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *m_pMemory; // r13
  CUtlHashMapLarge<int,KeyValues*,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v114; // rax
  int v115; // eax
  int v116; // r15d
  uint32 *v117; // rax
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::IndexType_t v118; // r14d
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::IndexType_t v119; // edx
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v120; // rdi
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v121; // rax
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::IndexType_t v122; // r15d
  int v123; // esi
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::HashBucket_t *v124; // rax
  __int64 v125; // rcx
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v126; // rcx
  __int64 v127; // rax
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::IndexType_t v128; // edx
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v129; // rax
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::IndexType_t v130; // ecx
  __int64 v131; // r13
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v132; // rax
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::IndexType_t v133; // esi
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v134; // rax
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v135; // rax
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v136; // r13
  __int64 v137; // rdi
  signed __int64 v138; // rbx
  __int64 v140; // r13
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v141; // rcx
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v142; // rax
  __int64 v143; // r13
  int v144; // eax
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::HashBucket_t *v145; // rax
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v146; // r13
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v147; // rax
  __int64 CPUFrequency; // rax
  double v149; // xmm1_8
  double v150; // xmm2_8
  __int64 v151; // [rsp+10h] [rbp-110h]
  __int64 v152; // [rsp+18h] [rbp-108h]
  CLargeVarBitVec *p_m_bitsMigratedBuckets; // [rsp+20h] [rbp-100h]
  CLargeVarBitVec *v154; // [rsp+20h] [rbp-100h]
  unsigned int pkvHero; // [rsp+28h] [rbp-F8h]
  KeyValues *pkvHeroa; // [rsp+28h] [rbp-F8h]
  KeyValues *nID; // [rsp+40h] [rbp-E0h]
  unsigned int nIDa; // [rsp+40h] [rbp-E0h]
  unsigned int v159; // [rsp+4Ch] [rbp-D4h]
  unsigned int v160; // [rsp+4Ch] [rbp-D4h]
  int v161; // [rsp+58h] [rbp-C8h]
  int v162; // [rsp+58h] [rbp-C8h]
  double v163; // [rsp+58h] [rbp-C8h]
  char *v164; // [rsp+68h] [rbp-B8h] BYREF
  CConstantStringList heroFileList; // [rsp+70h] [rbp-B0h] BYREF
  CConstantStringList unitFileList; // [rsp+90h] [rbp-90h] BYREF
  CConstantStringList popularItemsList; // [rsp+B0h] [rbp-70h] BYREF
  KeyValues kvAbilitiesOverride; // [rsp+D0h] [rbp-50h] BYREF
  unsigned __int64 v169; // [rsp+E8h] [rbp-38h]

  v169 = __readfsqword(0x28u);
  v4 = __rdtsc();
  v151 = HIDWORD(v4);
  v152 = v4;
  if ( this->m_bCustomGame || this->m_bEventGame )
  {
    popularItemsList.m_Size = 0;
    *&unitFileList.m_Size = "addoninfo.txt";
    popularItemsList.m_Memory.m_pMemory = 0;
    popularItemsList.m_Memory.m_nAllocationCount = 0;
    popularItemsList.m_Memory.m_nGrowSize = 0;
    CUtlVectorBase<char const*,CUtlMemory<char const*,int>>::AddToTail(&popularItemsList, &unitFileList);
    this->m_pAddonInfoKeyValues = (*(*g_pKeyValueCache + 96LL))(
                                    g_pKeyValueCache,
                                    &popularItemsList,
                                    0,
                                    "AddonInfo",
                                    "GAME");
    CUtlVectorBase<char const*,CUtlMemory<char const*,int>>::~CUtlVectorBase(&popularItemsList);
  }
  heroFileList.m_Size = 0;
  *&popularItemsList.m_Size = "scripts/npc/npc_heroes.txt";
  heroFileList.m_Memory.m_pMemory = 0;
  heroFileList.m_Memory.m_nAllocationCount = 0;
  heroFileList.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<char const*,CUtlMemory<char const*,int>>::AddToTail(&heroFileList, &popularItemsList);
  *&popularItemsList.m_Size = "scripts/npc/npc_heroes_staging.txt";
  CUtlVectorBase<char const*,CUtlMemory<char const*,int>>::AddToTail(&heroFileList, &popularItemsList);
  if ( this->m_bCustomGame || (m_bEventGame = this->m_bEventGame) != 0 )
  {
    *&popularItemsList.m_Size = "scripts/npc/npc_heroes_custom.txt";
    CUtlVectorBase<char const*,CUtlMemory<char const*,int>>::AddToTail(&heroFileList, &popularItemsList);
    if ( bIncrementVersion )
      (*(*g_pKeyValueCache + 128LL))(g_pKeyValueCache, &heroFileList);
    v46 = (*(*g_pKeyValueCache + 96LL))(g_pKeyValueCache, &heroFileList, 0, "DOTAHeroes", "GAME");
    this->m_pkvAddOnHeroes = v46;
    if ( v46 != 0 )
    {
      popularItemsList.m_Size = 0;
      popularItemsList.m_Memory.m_pMemory = 0;
      popularItemsList.m_Memory.m_nAllocationCount = 0;
      popularItemsList.m_Memory.m_nGrowSize = 0;
      CUtlVectorBase<char const*,CUtlMemory<char const*,int>>::AddToTail(&popularItemsList, &s_pDOTAPopularItemsFiles);
      v47 = (*(*g_pKeyValueCache + 96LL))(g_pKeyValueCache, &popularItemsList, 0, "DOTAHeroes", "GAME");
      if ( v47 != 0 )
        KeyValues::MergeFrom(this->m_pkvAddOnHeroes, v47, KeyValues::MergeKeyValuesOp_t::MERGE_KV_ADD_ONLY);
      for ( i = KeyValues::GetFirstSubKey(this->m_pkvAddOnHeroes); i != 0; i = KeyValues::GetNextKey(i) )
      {
        Name = KeyValues::GetName(i);
        CUtlDict<int,int>::Insert(&this->m_AddOnUnitNames, Name);
      }
LABEL_14:
      CUtlVectorBase<char const*,CUtlMemory<char const*,int>>::~CUtlVectorBase(&popularItemsList);
      CDOTAGameManager::VerifyHeroIDs(this);
      v11 = IsStableMode();
      CDOTAGameManager::ResetEnabledHeroes(this, v11);
      unitFileList.m_Size = 0;
      *&popularItemsList.m_Size = "scripts/npc/npc_units.txt";
      unitFileList.m_Memory.m_nAllocationCount = 0;
      unitFileList.m_Memory.m_pMemory = 0;
      unitFileList.m_Memory.m_nGrowSize = 0;
      CUtlVectorBase<char const*,CUtlMemory<char const*,int>>::AddToTail(&unitFileList, &popularItemsList);
      *&popularItemsList.m_Size = "scripts/npc/npc_units_staging.txt";
      CUtlVectorBase<char const*,CUtlMemory<char const*,int>>::AddToTail(&unitFileList, &popularItemsList);
      if ( this->m_bCustomGame || this->m_bEventGame )
      {
        *&popularItemsList.m_Size = "scripts/npc/npc_units_custom.txt";
        CUtlVectorBase<char const*,CUtlMemory<char const*,int>>::AddToTail(&unitFileList, &popularItemsList);
        if ( bIncrementVersion )
          (*(*g_pKeyValueCache + 128LL))(g_pKeyValueCache, &unitFileList);
        v50 = (*(*g_pKeyValueCache + 96LL))(g_pKeyValueCache, &unitFileList, 0, "DOTAUnits", "GAME");
        this->m_pkvAddOnUnits = v50;
        if ( v50 != 0 )
        {
          for ( j = KeyValues::GetFirstSubKey(v50); j != 0; j = KeyValues::GetNextKey(j) )
          {
            v52 = KeyValues::GetName(j);
            CUtlDict<int,int>::Insert(&this->m_AddOnUnitNames, v52);
          }
LABEL_23:
          popularItemsList.m_Size = 0;
          popularItemsList.m_Memory.m_pMemory = 0;
          popularItemsList.m_Memory.m_nAllocationCount = 0;
          popularItemsList.m_Memory.m_nGrowSize = 0;
          v164 = "scripts/npc/npc_abilities.txt";
          CUtlVectorBase<char const*,CUtlMemory<char const*,int>>::AddToTail(&popularItemsList, &v164);
          v164 = "scripts/npc/npc_abilities_staging.txt";
          CUtlVectorBase<char const*,CUtlMemory<char const*,int>>::AddToTail(&popularItemsList, &v164);
          v164 = "scripts/npc/items.txt";
          CUtlVectorBase<char const*,CUtlMemory<char const*,int>>::AddToTail(&popularItemsList, &v164);
          v164 = "scripts/npc/items_staging.txt";
          CUtlVectorBase<char const*,CUtlMemory<char const*,int>>::AddToTail(&popularItemsList, &v164);
          if ( this->m_bCustomGame || (m_bEventGame = this->m_bEventGame) != 0 )
          {
            v164 = "scripts/npc/npc_abilities_custom.txt";
            CUtlVectorBase<char const*,CUtlMemory<char const*,int>>::AddToTail(&popularItemsList, &v164);
            v164 = "scripts/npc/npc_items_custom.txt";
            CUtlVectorBase<char const*,CUtlMemory<char const*,int>>::AddToTail(&popularItemsList, &v164);
            if ( bIncrementVersion )
              (*(*g_pKeyValueCache + 128LL))(g_pKeyValueCache, &popularItemsList);
            v111 = (*(*g_pKeyValueCache + 96LL))(
                     g_pKeyValueCache,
                     &popularItemsList,
                     0,
                     "DOTAAbilitiesAndItems",
                     "GAME");
            this->m_pkvAddOnAbilities = v111;
            if ( v111 != 0 )
            {
              KeyValues::KeyValues(&kvAbilitiesOverride, "DOTAAbilitiesAndItems");
              v112 = 0;
              if ( g_pFullFileSystem != 0 )
                v112 = &g_pFullFileSystem->IBaseFileSystem;
              if ( KeyValues::LoadFromFile(
                     &kvAbilitiesOverride,
                     v112,
                     "scripts/npc/npc_abilities_override.txt",
                     "GAME",
                     0) )
              {
                CDOTAGameManager::ApplyAbilitiesOverride(this, &kvAbilitiesOverride);
              }
              CDOTAGameManager::SetupCustomItemSymbolsAndDictionary(this);
              CDOTAGameManager::SetupItemCombines(this, &this->m_AddOnAbilitiesDataDict);
              KeyValues::~KeyValues(&kvAbilitiesOverride);
              goto LABEL_29;
            }
            Warning("Failed to load %s!\n", "scripts/npc/npc_abilities.txt");
            if ( g_pFullFileSystem != 0 )
              (*(g_pFullFileSystem->_vptr_IAppSystem + 146))(g_pFullFileSystem, 1, 0);
            m_bEventGame = 0;
          }
          else
          {
            if ( bIncrementVersion )
              (*(*g_pKeyValueCache + 128LL))(g_pKeyValueCache, &popularItemsList);
            v16 = (*(*g_pKeyValueCache + 96LL))(g_pKeyValueCache, &popularItemsList, 0, "DOTAAbilitiesAndItems", "GAME");
            this->m_pkvAbilities = v16;
            if ( v16 != 0 )
            {
              CDOTAGameManager::SetupItemSymbolsAndDictionary(this);
              CDOTAGameManager::SetupItemCombines(this, &this->m_AbilitiesDataDict);
LABEL_29:
              v17 = (this->m_vecLocalizedItemNames.m_Memory.m_nGrowSize & 0xC0000000) == 0;
              this->m_vecLocalizedItemNames.m_Size = 0;
              if ( v17 )
                CUtlMemory<CDOTAGameManager::LocalizedToScriptNameItem_t,int>::Purge(&this->m_vecLocalizedItemNames.m_Memory);
              if ( !this->m_bCustomGame && !this->m_bEventGame )
                CDOTAGameManager::VerifyUniqueAbilityIDs(this);
              CDOTAGameManager::VerifyUniqueItemAbilitySpecials(this);
              CDOTAGameManager::LoadHeroWhitelist(this);
              CUtlHashMapLarge<int,KeyValues *,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::RemoveAll(&this->m_mapAbilitiesByID);
              if ( this->m_bCustomGame || this->m_bEventGame )
                m_pkvAddOnAbilities = this->m_pkvAddOnAbilities;
              else
                m_pkvAddOnAbilities = this->m_pkvAbilities;
              if ( m_pkvAddOnAbilities != 0 )
              {
                nID = KeyValues::GetFirstSubKey(m_pkvAddOnAbilities);
                if ( nID != 0 )
                {
                  p_m_bitsMigratedBuckets = &this->m_mapAbilitiesByID.m_bitsMigratedBuckets;
                  do
                  {
                    Key = KeyValues::FindKey(nID, this->m_hKvSymbols[0]);
                    if ( Key != 0 )
                      pkvHero = CKeyValues_Data::Internal_GetInt(Key);
                    else
                      pkvHero = 0;
                    m_cElements = this->m_mapAbilitiesByID.m_cElements;
                    m_Size = this->m_mapAbilitiesByID.m_vecHashBuckets.m_Size;
                    if ( m_cElements >= m_Size )
                    {
                      v22 = 16;
                      if ( 2 * m_Size > 15 )
                        v22 = 2 * m_Size;
                      if ( v22 > this->m_mapAbilitiesByID.m_memNodes.m_nAllocationCount )
                      {
                        m_nGrowSize = this->m_mapAbilitiesByID.m_memNodes.m_nGrowSize;
                        if ( (m_nGrowSize & 0x40000000) == 0 )
                        {
                          if ( (m_nGrowSize & 0xC0000000) != 0 )
                          {
                            m_pMemory = this->m_mapAbilitiesByID.m_memNodes.m_pMemory;
                            v114 = (**g_pMemAlloc)(g_pMemAlloc, 24LL * v22);
                            this->m_mapAbilitiesByID.m_memNodes.m_pMemory = v114;
                            if ( m_pMemory != 0 )
                              memcpy(v114, m_pMemory, 24LL * this->m_mapAbilitiesByID.m_memNodes.m_nAllocationCount);
                            this->m_mapAbilitiesByID.m_memNodes.m_nGrowSize &= 0x3FFFFFFFu;
                          }
                          else
                          {
                            v24 = this->m_mapAbilitiesByID.m_memNodes.m_pMemory;
                            if ( v24 != 0 )
                              v25 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v24, 24LL * v22);
                            else
                              v25 = (**g_pMemAlloc)(g_pMemAlloc, 24LL * v22);
                            this->m_mapAbilitiesByID.m_memNodes.m_pMemory = v25;
                          }
                          m_Size = this->m_mapAbilitiesByID.m_vecHashBuckets.m_Size;
                          this->m_mapAbilitiesByID.m_memNodes.m_nAllocationCount = v22;
                        }
                      }
                      if ( v22 <= m_Size )
                        goto LABEL_172;
                      v26 = m_Size;
                      if ( m_Size > 15 || (v26 = 16, v22 > 16) )
                      {
                        do
                          v26 *= 2;
                        while ( v22 > v26 );
                      }
                      if ( v26 == m_Size )
                      {
                        v27 = &this->m_mapAbilitiesByID.m_vecHashBuckets.m_Memory.m_pMemory[m_Size];
                        v28 = 0;
                      }
                      else
                      {
                        m_nAllocationCount = this->m_mapAbilitiesByID.m_vecHashBuckets.m_Memory.m_nAllocationCount;
                        if ( m_nAllocationCount < v26 )
                          CUtlMemory<CUtlHashMapLarge<int,KeyValues *,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::HashBucket_t,int>::Grow(
                            &this->m_mapAbilitiesByID.m_vecHashBuckets.m_Memory,
                            v26 - m_nAllocationCount);
                        v110 = this->m_mapAbilitiesByID.m_vecHashBuckets.m_Memory.m_pMemory;
                        this->m_mapAbilitiesByID.m_vecHashBuckets.m_Size = v26;
                        v28 = 4LL * (v26 - m_Size);
                        v27 = &v110[m_Size];
                      }
                      memset(v27, -1, v28);
                      m_cElements = this->m_mapAbilitiesByID.m_cElements;
                      this->m_mapAbilitiesByID.m_nMinRehashedBucket = 0;
                      this->m_mapAbilitiesByID.m_nMaxRehashedBucket = m_Size;
                      if ( m_cElements > 0 )
                      {
                        CVarBitVecBase<int,32>::Resize(p_m_bitsMigratedBuckets, 0, 0);
                        CVarBitVecBase<int,32>::Resize(
                          p_m_bitsMigratedBuckets,
                          this->m_mapAbilitiesByID.m_vecHashBuckets.m_Size,
                          0);
LABEL_172:
                        v29 = this->m_mapAbilitiesByID.m_memNodes.m_nAllocationCount;
                        if ( v29 > this->m_mapAbilitiesByID.m_cElements )
                          goto LABEL_59;
                        goto LABEL_173;
                      }
                      this->m_mapAbilitiesByID.m_nMinRehashedBucket = this->m_mapAbilitiesByID.m_vecHashBuckets.m_Size;
                    }
                    v29 = this->m_mapAbilitiesByID.m_memNodes.m_nAllocationCount;
                    if ( v29 <= m_cElements )
LABEL_173:
                      CUtlMemory<CUtlHashMapLarge<int,KeyValues *,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::Node_t,int>::Grow(
                        &this->m_mapAbilitiesByID.m_memNodes,
                        2 * v29);
LABEL_59:
                    m_nMinRehashedBucket = this->m_mapAbilitiesByID.m_nMinRehashedBucket;
                    m_nMaxRehashedBucket = this->m_mapAbilitiesByID.m_nMaxRehashedBucket;
                    if ( m_nMinRehashedBucket >= m_nMaxRehashedBucket )
                    {
LABEL_91:
                      v37 = this->m_mapAbilitiesByID.m_vecHashBuckets.m_Size;
                    }
                    else
                    {
                      v32 = this->m_mapAbilitiesByID.m_vecHashBuckets.m_Memory.m_pMemory;
                      v33 = m_nMinRehashedBucket;
                      v34 = this->m_mapAbilitiesByID.m_nMinRehashedBucket;
                      while ( 1 )
                      {
                        if ( v32[v33].m_iNode != -1 )
                        {
                          m_pInt = this->m_mapAbilitiesByID.m_bitsMigratedBuckets.m_pInt;
                          if ( ((1 << v34) & m_pInt[v34 >> 5]) == 0 )
                            break;
                        }
                        ++v34;
                        ++v33;
                        this->m_mapAbilitiesByID.m_nMinRehashedBucket = v34;
                        if ( v34 == m_nMaxRehashedBucket )
                        {
                          v37 = this->m_mapAbilitiesByID.m_vecHashBuckets.m_Size;
LABEL_90:
                          this->m_mapAbilitiesByID.m_nMinRehashedBucket = v37;
                          this->m_mapAbilitiesByID.m_nMaxRehashedBucket = -1;
                          CVarBitVecBase<int,32>::Resize(p_m_bitsMigratedBuckets, 0, 0);
                          m_nMinRehashedBucket = this->m_mapAbilitiesByID.m_nMinRehashedBucket;
                          goto LABEL_91;
                        }
                      }
                      v36 = v34;
                      m_pInt[v34 >> 5] |= 1 << v34;
                      v37 = this->m_mapAbilitiesByID.m_vecHashBuckets.m_Size;
                      m_iNode = this->m_mapAbilitiesByID.m_vecHashBuckets.m_Memory.m_pMemory[v33].m_iNode;
                      if ( m_iNode != -1 )
                      {
                        while ( 1 )
                        {
                          v39 = this->m_mapAbilitiesByID.m_memNodes.m_pMemory;
                          v40 = &v39[m_iNode];
                          m_iNextNode = v40->m_iNextNode;
                          LODWORD(v40) = -1028477387
                                       * ((-2048144789 * (v40->m_key ^ HIWORD(v40->m_key)))
                                        ^ ((-2048144789 * (v40->m_key ^ HIWORD(v40->m_key))) >> 13));
                          v42 = (v37 - 1) & (v40 ^ (v40 >> 16));
                          if ( v36 != v42 )
                          {
                            v43 = &this->m_mapAbilitiesByID.m_vecHashBuckets.m_Memory.m_pMemory[v33];
                            v44 = v43->m_iNode;
                            if ( m_iNode == v44 )
                            {
                              v43->m_iNode = m_iNextNode;
                            }
                            else
                            {
                              while ( v44 != -1 )
                              {
                                v45 = &v39[v44];
                                v44 = v45->m_iNextNode;
                                if ( m_iNode == v44 )
                                {
                                  v45->m_iNextNode = m_iNextNode;
                                  break;
                                }
                              }
                            }
                            CUtlHashMapLarge<int,KeyValues *,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::LinkNodeIntoBucket(
                              &this->m_mapAbilitiesByID,
                              v42,
                              m_iNode);
                            v37 = this->m_mapAbilitiesByID.m_vecHashBuckets.m_Size;
                          }
                          if ( m_iNextNode == -1 )
                            break;
                          m_iNode = m_iNextNode;
                        }
                      }
                      m_nMinRehashedBucket = this->m_mapAbilitiesByID.m_nMinRehashedBucket + 1;
                      v108 = m_nMinRehashedBucket < this->m_mapAbilitiesByID.m_nMaxRehashedBucket;
                      this->m_mapAbilitiesByID.m_nMinRehashedBucket = m_nMinRehashedBucket;
                      if ( !v108 )
                        goto LABEL_90;
                    }
                    v161 = v37 >> 1;
                    v159 = (-1028477387
                          * ((-2048144789 * (pkvHero ^ HIWORD(pkvHero)))
                           ^ ((-2048144789 * (pkvHero ^ HIWORD(pkvHero))) >> 13)))
                         ^ ((-1028477387
                           * ((-2048144789 * (pkvHero ^ HIWORD(pkvHero)))
                            ^ ((-2048144789 * (pkvHero ^ HIWORD(pkvHero))) >> 13))) >> 16);
                    v53 = v159 & ((v37 >> 1) - 1);
                    if ( v53 >= m_nMinRehashedBucket )
                    {
                      v54 = this->m_mapAbilitiesByID.m_bitsMigratedBuckets.m_pInt;
                      if ( ((1 << v53) & v54[v53 >> 5]) == 0 )
                      {
                        v55 = v159 & ((v37 >> 1) - 1);
                        do
                        {
                          v54[v55 >> 5] |= 1 << v55;
                          v56 = this->m_mapAbilitiesByID.m_vecHashBuckets.m_Memory.m_pMemory[v55].m_iNode;
                          if ( v56 != -1 )
                          {
                            while ( 1 )
                            {
                              v57 = this->m_mapAbilitiesByID.m_memNodes.m_pMemory;
                              v58 = &v57[v56];
                              v59 = v58->m_iNextNode;
                              LODWORD(v58) = -1028477387
                                           * ((-2048144789 * (v58->m_key ^ HIWORD(v58->m_key)))
                                            ^ ((-2048144789 * (v58->m_key ^ HIWORD(v58->m_key))) >> 13));
                              v60 = (this->m_mapAbilitiesByID.m_vecHashBuckets.m_Size - 1) & (v58 ^ (v58 >> 16));
                              if ( v55 != v60 )
                              {
                                v61 = &this->m_mapAbilitiesByID.m_vecHashBuckets.m_Memory.m_pMemory[v55];
                                v62 = v61->m_iNode;
                                if ( v56 == v62 )
                                {
                                  v61->m_iNode = v59;
                                }
                                else
                                {
                                  while ( v62 != -1 )
                                  {
                                    v63 = &v57[v62];
                                    v62 = v63->m_iNextNode;
                                    if ( v56 == v62 )
                                    {
                                      v63->m_iNextNode = v59;
                                      break;
                                    }
                                  }
                                }
                                CUtlHashMapLarge<int,KeyValues *,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::LinkNodeIntoBucket(
                                  &this->m_mapAbilitiesByID,
                                  v60,
                                  v56);
                              }
                              if ( v59 == -1 )
                                break;
                              v56 = v59;
                            }
                          }
                          v161 >>= 1;
                          v55 = v159 & (v161 - 1);
                          if ( v55 < this->m_mapAbilitiesByID.m_nMinRehashedBucket )
                            break;
                          v54 = this->m_mapAbilitiesByID.m_bitsMigratedBuckets.m_pInt;
                        }
                        while ( ((1 << v55) & v54[v55 >> 5]) == 0 );
                      }
                    }
                    v64 = this->m_mapAbilitiesByID.m_cElements;
                    if ( v64 == 0
                      || (v104 = this->m_mapAbilitiesByID.m_vecHashBuckets.m_Memory.m_pMemory[v159
                                                                                            & (this->m_mapAbilitiesByID.m_vecHashBuckets.m_Size
                                                                                             - 1)].m_iNode) == -1 )
                    {
                      v65 = this->m_mapAbilitiesByID.m_memNodes.m_pMemory;
                      if ( v64 != this->m_mapAbilitiesByID.m_nMaxElement )
                        goto LABEL_109;
LABEL_168:
                      this->m_mapAbilitiesByID.m_cElements = v64 + 1;
                      this->m_mapAbilitiesByID.m_nMaxElement = v64 + 1;
                      v67 = v64;
                      v68 = &v65[v67];
LABEL_110:
                      v68->m_iNextNode = -1;
                      v70 = &this->m_mapAbilitiesByID.m_memNodes.m_pMemory[v67];
                      if ( v70 != 0 )
                      {
                        v70->m_key = pkvHero;
                        v71 = &this->m_mapAbilitiesByID.m_memNodes.m_pMemory[v67];
                      }
                      else
                      {
                        v71 = 0;
                      }
                      if ( v71 != -8LL )
                        v71->m_elem = nID;
                      CUtlHashMapLarge<int,KeyValues *,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::LinkNodeIntoBucket(
                        &this->m_mapAbilitiesByID,
                        v159 & (this->m_mapAbilitiesByID.m_vecHashBuckets.m_Size - 1),
                        v64);
                      goto LABEL_115;
                    }
                    v105 = this->m_mapAbilitiesByID.m_memNodes.m_pMemory;
                    v106 = &v105[v104];
                    if ( pkvHero != v106->m_key )
                    {
                      while ( 1 )
                      {
                        v107 = v106->m_iNextNode;
                        if ( v107 == -1 )
                          break;
                        v106 = &v105[v107];
                        if ( pkvHero == v106->m_key )
                          goto LABEL_176;
                      }
                      v65 = this->m_mapAbilitiesByID.m_memNodes.m_pMemory;
                      if ( v64 == this->m_mapAbilitiesByID.m_nMaxElement )
                        goto LABEL_168;
LABEL_109:
                      m_iNodeFreeListHead = this->m_mapAbilitiesByID.m_iNodeFreeListHead;
                      v67 = m_iNodeFreeListHead;
                      v68 = &v65[v67];
                      v69 = -3 - v68->m_iNextNode;
                      this->m_mapAbilitiesByID.m_cElements = v64 + 1;
                      v64 = m_iNodeFreeListHead;
                      this->m_mapAbilitiesByID.m_iNodeFreeListHead = v69;
                      goto LABEL_110;
                    }
LABEL_176:
                    v106->m_elem = nID;
LABEL_115:
                    nID = KeyValues::GetNextKey(nID);
                  }
                  while ( nID != 0 );
                }
              }
              CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::RemoveAll(&this->m_mapHeroesByID);
              v17 = !this->m_bCustomGame;
              this->m_nHighestHeroID = 0;
              if ( v17 && !this->m_bEventGame )
                m_pkvHeroes = this->m_pkvHeroes;
              else
                m_pkvHeroes = this->m_pkvAddOnHeroes;
              if ( m_pkvHeroes != 0 )
              {
                pkvHeroa = KeyValues::GetFirstSubKey(m_pkvHeroes);
                if ( pkvHeroa != 0 )
                {
                  v154 = &this->m_mapHeroesByID.m_bitsMigratedBuckets;
                  do
                  {
                    v73 = KeyValues::FindKey(pkvHeroa, this->m_hKvSymbols[3]);
                    if ( v73 != 0 )
                      nIDa = CKeyValues_Data::Internal_GetInt(v73);
                    else
                      nIDa = 0;
                    if ( this->m_nHighestHeroID < nIDa )
                    {
                      v74 = KeyValues::GetName(pkvHeroa);
                      if ( V_stricmp_fast(v74, "npc_dota_hero_base") != 0 && KeyValues::GetFirstSubKey(pkvHeroa) != 0 )
                        this->m_nHighestHeroID = nIDa;
                    }
                    v75 = this->m_mapHeroesByID.m_cElements;
                    v76 = this->m_mapHeroesByID.m_vecHashBuckets.m_Size;
                    if ( v75 >= v76 )
                    {
                      v77 = 16;
                      if ( 2 * v76 > 15 )
                        v77 = 2 * v76;
                      if ( v77 > this->m_mapHeroesByID.m_memNodes.m_nAllocationCount )
                      {
                        v78 = this->m_mapHeroesByID.m_memNodes.m_nGrowSize;
                        if ( (v78 & 0x40000000) == 0 )
                        {
                          if ( (v78 & 0xC0000000) != 0 )
                          {
                            v146 = this->m_mapHeroesByID.m_memNodes.m_pMemory;
                            v147 = (**g_pMemAlloc)(g_pMemAlloc, 32LL * v77);
                            this->m_mapHeroesByID.m_memNodes.m_pMemory = v147;
                            if ( v146 != 0 )
                              memcpy(v147, v146, 32LL * this->m_mapHeroesByID.m_memNodes.m_nAllocationCount);
                            this->m_mapHeroesByID.m_memNodes.m_nGrowSize &= 0x3FFFFFFFu;
                          }
                          else
                          {
                            v79 = this->m_mapHeroesByID.m_memNodes.m_pMemory;
                            v80 = *g_pMemAlloc;
                            if ( v79 != 0 )
                              v81 = (*(v80 + 8))(g_pMemAlloc, v79, 32LL * v77);
                            else
                              v81 = (*v80)(g_pMemAlloc, 32LL * v77);
                            this->m_mapHeroesByID.m_memNodes.m_pMemory = v81;
                          }
                          v76 = this->m_mapHeroesByID.m_vecHashBuckets.m_Size;
                          this->m_mapHeroesByID.m_memNodes.m_nAllocationCount = v77;
                        }
                      }
                      if ( v77 <= v76 )
                        goto LABEL_229;
                      v82 = v76;
                      if ( v76 > 15 || (v82 = 16, v77 > 16) )
                      {
                        do
                          v82 *= 2;
                        while ( v77 > v82 );
                      }
                      if ( v82 == v76 )
                      {
                        v83 = &this->m_mapHeroesByID.m_vecHashBuckets.m_Memory.m_pMemory[v76];
                        v84 = 0;
                      }
                      else
                      {
                        v144 = this->m_mapHeroesByID.m_vecHashBuckets.m_Memory.m_nAllocationCount;
                        if ( v144 < v82 )
                          CUtlMemory<CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::HashBucket_t,int>::Grow(
                            &this->m_mapHeroesByID.m_vecHashBuckets.m_Memory,
                            v82 - v144);
                        v145 = this->m_mapHeroesByID.m_vecHashBuckets.m_Memory.m_pMemory;
                        this->m_mapHeroesByID.m_vecHashBuckets.m_Size = v82;
                        v84 = 4LL * (v82 - v76);
                        v83 = &v145[v76];
                      }
                      memset(v83, -1, v84);
                      v75 = this->m_mapHeroesByID.m_cElements;
                      this->m_mapHeroesByID.m_nMinRehashedBucket = 0;
                      this->m_mapHeroesByID.m_nMaxRehashedBucket = v76;
                      if ( v75 > 0 )
                      {
                        CVarBitVecBase<int,32>::Resize(v154, 0, 0);
                        CVarBitVecBase<int,32>::Resize(v154, this->m_mapHeroesByID.m_vecHashBuckets.m_Size, 0);
LABEL_229:
                        v85 = this->m_mapHeroesByID.m_memNodes.m_nAllocationCount;
                        if ( v85 > this->m_mapHeroesByID.m_cElements )
                          goto LABEL_145;
                        goto LABEL_230;
                      }
                      this->m_mapHeroesByID.m_nMinRehashedBucket = this->m_mapHeroesByID.m_vecHashBuckets.m_Size;
                    }
                    v85 = this->m_mapHeroesByID.m_memNodes.m_nAllocationCount;
                    if ( v85 <= v75 )
LABEL_230:
                      CUtlMemory<CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::Node_t,int>::Grow(
                        &this->m_mapHeroesByID.m_memNodes,
                        2 * v85);
LABEL_145:
                    v86 = this->m_mapHeroesByID.m_nMinRehashedBucket;
                    v87 = this->m_mapHeroesByID.m_nMaxRehashedBucket;
                    if ( v86 >= v87 )
                    {
                      v91 = this->m_mapHeroesByID.m_vecHashBuckets.m_Size;
                      v115 = this->m_mapHeroesByID.m_nMinRehashedBucket;
                    }
                    else
                    {
                      v88 = this->m_mapHeroesByID.m_vecHashBuckets.m_Memory.m_pMemory;
                      v89 = v86;
                      while ( 1 )
                      {
                        if ( v88[v89].m_iNode != -1 )
                        {
                          v90 = this->m_mapHeroesByID.m_bitsMigratedBuckets.m_pInt;
                          if ( ((1 << v86) & v90[v86 >> 5]) == 0 )
                            break;
                        }
                        ++v86;
                        ++v89;
                        this->m_mapHeroesByID.m_nMinRehashedBucket = v86;
                        if ( v86 == v87 )
                        {
                          v91 = this->m_mapHeroesByID.m_vecHashBuckets.m_Size;
LABEL_232:
                          this->m_mapHeroesByID.m_nMinRehashedBucket = v91;
                          this->m_mapHeroesByID.m_nMaxRehashedBucket = -1;
                          CVarBitVecBase<int,32>::Resize(v154, 0, 0);
                          v115 = this->m_mapHeroesByID.m_nMinRehashedBucket;
                          v91 = this->m_mapHeroesByID.m_vecHashBuckets.m_Size;
                          goto LABEL_193;
                        }
                      }
                      v90[v86 >> 5] |= 1 << v86;
                      v91 = this->m_mapHeroesByID.m_vecHashBuckets.m_Size;
                      v92 = this->m_mapHeroesByID.m_vecHashBuckets.m_Memory.m_pMemory[v89].m_iNode;
                      if ( v92 != -1 )
                      {
                        v93 = this->m_mapHeroesByID.m_vecHashBuckets.m_Size;
                        v94 = v89 * 4;
                        v95 = v86;
                        while ( 1 )
                        {
                          v96 = this->m_mapHeroesByID.m_memNodes.m_pMemory;
                          v97 = &v96[v92];
                          v98 = v97->m_iNextNode;
                          LODWORD(v97) = -1028477387
                                       * ((-2048144789 * (v97->m_key ^ HIWORD(v97->m_key)))
                                        ^ ((-2048144789 * (v97->m_key ^ HIWORD(v97->m_key))) >> 13));
                          v99 = (v93 - 1) & (v97 ^ (v97 >> 16));
                          if ( v95 != v99 )
                          {
                            v100 = (&this->m_mapHeroesByID.m_vecHashBuckets.m_Memory.m_pMemory->m_iNode + v94);
                            v101 = *v100;
                            if ( v92 == v101 )
                            {
                              *v100 = v98;
                            }
                            else if ( v101 != -1 )
                            {
                              v102 = &v96[v101];
                              v103 = v102->m_iNextNode;
                              if ( v92 == v103 )
                              {
LABEL_191:
                                v102->m_iNextNode = v98;
                              }
                              else
                              {
                                while ( v103 != -1 )
                                {
                                  v102 = &v96[v103];
                                  v103 = v102->m_iNextNode;
                                  if ( v92 == v103 )
                                    goto LABEL_191;
                                }
                              }
                            }
                            CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::LinkNodeIntoBucket(
                              &this->m_mapHeroesByID,
                              v99,
                              v92);
                            v93 = this->m_mapHeroesByID.m_vecHashBuckets.m_Size;
                          }
                          if ( v98 == -1 )
                            break;
                          v92 = v98;
                        }
                        v91 = v93;
                      }
                      v115 = this->m_mapHeroesByID.m_nMinRehashedBucket + 1;
                      v108 = v115 < this->m_mapHeroesByID.m_nMaxRehashedBucket;
                      this->m_mapHeroesByID.m_nMinRehashedBucket = v115;
                      if ( !v108 )
                        goto LABEL_232;
                    }
LABEL_193:
                    v162 = v91 >> 1;
                    v160 = (-1028477387
                          * ((-2048144789 * (nIDa ^ HIWORD(nIDa))) ^ ((-2048144789 * (nIDa ^ HIWORD(nIDa))) >> 13)))
                         ^ ((-1028477387
                           * ((-2048144789 * (nIDa ^ HIWORD(nIDa))) ^ ((-2048144789 * (nIDa ^ HIWORD(nIDa))) >> 13))) >> 16);
                    v116 = v160 & ((v91 >> 1) - 1);
                    if ( v116 >= v115 )
                    {
                      v117 = this->m_mapHeroesByID.m_bitsMigratedBuckets.m_pInt;
                      if ( ((1 << v116) & v117[v116 >> 5]) == 0 )
                      {
                        v118 = v160 & ((v91 >> 1) - 1);
                        do
                        {
                          v117[v118 >> 5] |= 1 << v118;
                          v119 = this->m_mapHeroesByID.m_vecHashBuckets.m_Memory.m_pMemory[v118].m_iNode;
                          if ( v119 != -1 )
                          {
                            while ( 1 )
                            {
                              v120 = this->m_mapHeroesByID.m_memNodes.m_pMemory;
                              v121 = &v120[v119];
                              v122 = v121->m_iNextNode;
                              LODWORD(v121) = -1028477387
                                            * ((-2048144789 * (v121->m_key ^ HIWORD(v121->m_key)))
                                             ^ ((-2048144789 * (v121->m_key ^ HIWORD(v121->m_key))) >> 13));
                              v123 = (this->m_mapHeroesByID.m_vecHashBuckets.m_Size - 1) & (v121 ^ (v121 >> 16));
                              if ( v118 != v123 )
                              {
                                v124 = &this->m_mapHeroesByID.m_vecHashBuckets.m_Memory.m_pMemory[v118];
                                v125 = v124->m_iNode;
                                if ( v119 == v125 )
                                {
                                  v124->m_iNode = v122;
                                }
                                else if ( v125 != -1 )
                                {
                                  v126 = &v120[v125];
                                  v127 = v126->m_iNextNode;
                                  if ( v119 == v127 )
                                  {
LABEL_207:
                                    v126->m_iNextNode = v122;
                                  }
                                  else
                                  {
                                    while ( v127 != -1 )
                                    {
                                      v126 = &v120[v127];
                                      v127 = v126->m_iNextNode;
                                      if ( v119 == v127 )
                                        goto LABEL_207;
                                    }
                                  }
                                }
                                CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::LinkNodeIntoBucket(
                                  &this->m_mapHeroesByID,
                                  v123,
                                  v119);
                              }
                              if ( v122 == -1 )
                                break;
                              v119 = v122;
                            }
                          }
                          v162 >>= 1;
                          v118 = v160 & (v162 - 1);
                          if ( v118 < this->m_mapHeroesByID.m_nMinRehashedBucket )
                            break;
                          v117 = this->m_mapHeroesByID.m_bitsMigratedBuckets.m_pInt;
                        }
                        while ( ((1 << v118) & v117[v118 >> 5]) == 0 );
                      }
                    }
                    v128 = this->m_mapHeroesByID.m_cElements;
                    if ( v128 == 0
                      || (v140 = this->m_mapHeroesByID.m_vecHashBuckets.m_Memory.m_pMemory[v160
                                                                                         & (this->m_mapHeroesByID.m_vecHashBuckets.m_Size
                                                                                          - 1)].m_iNode) == -1 )
                    {
                      v129 = this->m_mapHeroesByID.m_memNodes.m_pMemory;
                      if ( v128 != this->m_mapHeroesByID.m_nMaxElement )
                        goto LABEL_212;
LABEL_239:
                      v131 = v128;
                      this->m_mapHeroesByID.m_cElements = v128 + 1;
                      this->m_mapHeroesByID.m_nMaxElement = v128 + 1;
                      v132 = &v129[v131];
LABEL_213:
                      v132->m_iNextNode = -1;
                      v134 = &this->m_mapHeroesByID.m_memNodes.m_pMemory[v131];
                      if ( v134 != 0 )
                      {
                        v134->m_key = nIDa;
                        v135 = &this->m_mapHeroesByID.m_memNodes.m_pMemory[v131];
                      }
                      else
                      {
                        v135 = 0;
                      }
                      if ( v135 != -8LL )
                      {
                        v135->m_elem.m_nModelCount = 0;
                        v135->m_elem.m_pKeyValues = 0;
                      }
                      CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::LinkNodeIntoBucket(
                        &this->m_mapHeroesByID,
                        v160 & (this->m_mapHeroesByID.m_vecHashBuckets.m_Size - 1),
                        v128);
                      goto LABEL_218;
                    }
                    v141 = this->m_mapHeroesByID.m_memNodes.m_pMemory;
                    v131 = v140;
                    v142 = &v141[v131];
                    if ( nIDa != v141[v131].m_key )
                    {
                      while ( 1 )
                      {
                        v143 = v142->m_iNextNode;
                        if ( v143 == -1 )
                          break;
                        v131 = v143;
                        v142 = &v141[v131];
                        if ( nIDa == v141[v131].m_key )
                          goto LABEL_241;
                      }
                      v129 = this->m_mapHeroesByID.m_memNodes.m_pMemory;
                      if ( v128 == this->m_mapHeroesByID.m_nMaxElement )
                        goto LABEL_239;
LABEL_212:
                      v130 = this->m_mapHeroesByID.m_iNodeFreeListHead;
                      v131 = v130;
                      v132 = &v129[v131];
                      v133 = -3 - v132->m_iNextNode;
                      this->m_mapHeroesByID.m_cElements = v128 + 1;
                      v128 = v130;
                      this->m_mapHeroesByID.m_iNodeFreeListHead = v133;
                      goto LABEL_213;
                    }
LABEL_241:
                    v142->m_elem.m_nModelCount = 0;
                    v142->m_elem.m_pKeyValues = 0;
LABEL_218:
                    v136 = &this->m_mapHeroesByID.m_memNodes.m_pMemory[v131];
                    v136->m_elem.m_pKeyValues = pkvHeroa;
                    CDOTAGameManager::UnserializeHeroData(this, &v136->m_elem, pkvHeroa);
                    pkvHeroa = KeyValues::GetNextKey(pkvHeroa);
                  }
                  while ( pkvHeroa != 0 );
                }
              }
              CDOTAGameManager::ReloadPortraitData(this);
              v137 = LOG_SERVER;
              v138 = __rdtsc() - (v152 | (v151 << 32));
              if ( LoggingSystem_IsChannelEnabled(v137, 0) != 0 )
              {
                if ( v138 < 0 )
                {
                  v150 = (v138 & 1 | (v138 >> 1));
                  v163 = v150 + v150;
                }
                else
                {
                  v163 = v138;
                }
                CPUFrequency = Plat_GetCPUFrequency();
                if ( CPUFrequency < 0 )
                  v149 = (CPUFrequency & 1 | (CPUFrequency >> 1)) + (CPUFrequency & 1 | (CPUFrequency >> 1));
                else
                  v149 = CPUFrequency;
                LoggingSystem_Log(
                  LOG_SERVER,
                  0,
                  "CDOTAGameManager::SetupGameKeyValues took %f msecs\n",
                  1000.0 / v149 * v163);
              }
              m_bEventGame = 1;
              goto LABEL_221;
            }
            Warning("Failed to load %s!\n", "scripts/npc/npc_abilities.txt");
            if ( g_pFullFileSystem != 0 )
              (*(g_pFullFileSystem->_vptr_IAppSystem + 146))(g_pFullFileSystem, 1, 0);
          }
LABEL_221:
          CUtlVectorBase<char const*,CUtlMemory<char const*,int>>::~CUtlVectorBase(&popularItemsList);
LABEL_222:
          CUtlVectorBase<char const*,CUtlMemory<char const*,int>>::~CUtlVectorBase(&unitFileList);
          goto LABEL_223;
        }
      }
      else
      {
        if ( bIncrementVersion )
          (*(*g_pKeyValueCache + 128LL))(g_pKeyValueCache, &unitFileList);
        v12 = (*(*g_pKeyValueCache + 96LL))(g_pKeyValueCache, &unitFileList, 0, "DOTAUnits", "GAME");
        this->m_pkvUnits = v12;
        if ( v12 != 0 )
        {
          for ( k = KeyValues::GetFirstSubKey(v12); k != 0; k = KeyValues::GetNextKey(k) )
          {
            v14 = KeyValues::GetName(k);
            if ( !CUtlDict<int,int>::HasElement(&this->m_UnitNames, v14) )
            {
              v15 = KeyValues::GetName(k);
              CUtlDict<int,int>::Insert(&this->m_UnitNames, v15);
            }
          }
          goto LABEL_23;
        }
      }
      Warning("Failed to load %s!\n", "scripts/npc/npc_units.txt");
      if ( g_pFullFileSystem != 0 )
        (*(g_pFullFileSystem->_vptr_IAppSystem + 146))(g_pFullFileSystem, 1, 0);
      m_bEventGame = 0;
      goto LABEL_222;
    }
    Warning("Failed to load %s!\n", "scripts/npc/npc_heroes.txt");
    if ( g_pFullFileSystem != 0 )
      (*(g_pFullFileSystem->_vptr_IAppSystem + 146))(g_pFullFileSystem, 1, 0);
    m_bEventGame = 0;
  }
  else
  {
    if ( bIncrementVersion )
      (*(*g_pKeyValueCache + 128LL))(g_pKeyValueCache, &heroFileList);
    v6 = (*(*g_pKeyValueCache + 96LL))(g_pKeyValueCache, &heroFileList, 0, "DOTAHeroes", "GAME");
    this->m_pkvHeroes = v6;
    if ( v6 != 0 )
    {
      popularItemsList.m_Size = 0;
      popularItemsList.m_Memory.m_pMemory = 0;
      popularItemsList.m_Memory.m_nAllocationCount = 0;
      popularItemsList.m_Memory.m_nGrowSize = 0;
      CUtlVectorBase<char const*,CUtlMemory<char const*,int>>::AddToTail(&popularItemsList, &s_pDOTAPopularItemsFiles);
      v7 = (*(*g_pKeyValueCache + 96LL))(g_pKeyValueCache, &popularItemsList, 0, "DOTAHeroes", "GAME");
      if ( v7 != 0 )
        KeyValues::MergeFrom(this->m_pkvHeroes, v7, KeyValues::MergeKeyValuesOp_t::MERGE_KV_ADD_ONLY);
      for ( m = KeyValues::GetFirstSubKey(this->m_pkvHeroes); m != 0; m = KeyValues::GetNextKey(m) )
      {
        v9 = KeyValues::GetName(m);
        if ( !CUtlDict<int,int>::HasElement(&this->m_UnitNames, v9) )
        {
          v10 = KeyValues::GetName(m);
          CUtlDict<int,int>::Insert(&this->m_UnitNames, v10);
        }
      }
      goto LABEL_14;
    }
    Warning("Failed to load %s!\n", "scripts/npc/npc_heroes.txt");
    if ( g_pFullFileSystem != 0 )
      (*(g_pFullFileSystem->_vptr_IAppSystem + 146))(g_pFullFileSystem, 1, 0);
  }
LABEL_223:
  CUtlVectorBase<char const*,CUtlMemory<char const*,int>>::~CUtlVectorBase(&heroFileList);
  return m_bEventGame;
}


// CDOTAGameManager::UnserializeHeroData  (line 976, @0x00000000024d8700, libserver.so)  // inlines: V_isempty
// calls: CFmtStrN<256, false>::CFmtStrN, KeyValues::GetString, __stack_chk_fail
// callers: CDOTAGameManager::SetupGameKeyValues
// strings: "Model%d"
void __fastcall CDOTAGameManager::UnserializeHeroData(
        CDOTAGameManager *const this,
        HeroData_t *const data,
        KeyValues *pKeyValues)
{
  int v5; // edx
  const char *String; // rax
  CFmtStrN<256,false> v7; // [rsp+0h] [rbp-140h] BYREF
  unsigned __int64 v8; // [rsp+118h] [rbp-28h]

  v5 = 1;
  data->m_nModelCount = 1;
  v8 = __readfsqword(0x28u);
  while ( 1 )
  {
    CFmtStrN<256,false>::CFmtStrN(&v7, "Model%d", v5);
    String = KeyValues::GetString(pKeyValues, v7.m_szBuf, 0, 0, 0);
    if ( String == 0 || *String == 0 )
      break;
    v5 = data->m_nModelCount + 1;
    data->m_nModelCount = v5;
  }
}


// reload_game_keyvalues  (line 990, @0x0000000002541a80, libserver.so)  // inlines: CreateEvent
// calls: CDOTAGameManager::ReloadGameKeyValues
// strings: "client_reload_game_keyvalues"
// globals: g_DOTAGameManager
void __fastcall reload_game_keyvalues(const CCommandContext *const ctx, const CCommand *const args)
{
  __int64 v2; // rax

  CDOTAGameManager::ReloadGameKeyValues(&g_DOTAGameManager);
  v2 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "client_reload_game_keyvalues", 0, 0);
  if ( v2 != 0 )
    (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v2, 0);
}


// CDOTAGameManager::SetupItemSymbolsAndDictionary  (line 1005, @0x00000000025322d0, libserver.so)  // inlines: AddString, AddToTail, AllocZero, CUtlMemory, CUtlSymbolLarge, CUtlSymbolLarge_Hash, CUtlVector, CUtlVectorBase, Construct<DOTAAbilityData_t>, CopyConstruct<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false>::StringPool_t*>, DOTAAbilityData_t, Element, FindInsertionPosition, FindPoolWithSpace, GrowMemory, Insert, InsertAt, LeafCodeInfo_t, LeftChild, NotifySteamMissingFiles, RightChild, ToSymbol, V_memcpy, V_memset, V_strlen, memcpy, memset, operator!=, operator(), operator=, operator[]
// calls: KeyValues::GetInt, KeyValues::FindKey, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, CUtlScratchMemoryPool::AllocAligned, memset, CUtlRBTree<CUtlMap<CUtlSymbolLarge, DOTAAbilityData_t*, short unsigned int>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, DOTAAbilityData_t*, short unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, DOTAAbilityData_t*, short unsigned int>::Node_t, short unsigned int>, short unsigned int> >::Insert, CUtlRBTree<CUtlMap<CUtlSymbolLarge, KeyValues*, short unsigned int>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, KeyValues*, short unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, KeyValues*, short unsigned int>::Node_t, short unsigned int>, short unsigned int> >::Insert, CUtlHashtable<short unsigned int, int, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, int>, int> >::DoInsert<short unsigned int>, CUtlHashtable<int, short unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, short unsigned int>, int> >::DoInsert<int>, KeyValues::MakeCopy, KeyValues::MergeFrom (27 total)
// callers: CDOTAGameManager::SetupGameKeyValues
// strings: "ability_base", "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/_generated_code/serve, "SetupItemSymbolsAndDictionary", "CDOTAGameManager::SetupItemSymbolsAndDictionary couldn't find 'ability_base' in abilities
void __fastcall CDOTAGameManager::SetupItemSymbolsAndDictionary(CDOTAGameManager *const this)
{
  KeyValues *NextTrueSubKey; // r12
  DOTAAbilityData_t *v2; // r14
  LeafCodeInfo_t *v3; // r15
  CDOTAGameManager *v4; // r13
  KeyValues *m_pkvAbilities; // rdi
  KeyValues *FirstTrueSubKey; // rax
  int v7; // ebx
  int v8; // r15d
  size_t v9; // r12
  DOTAAbilityData_t *v10; // rax
  signed __int64 v11; // rdx
  const char *m_szFile; // rcx
  unsigned __int16 v13; // bx
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  KeyValues *Copy; // rbx
  const char *Name; // rax
  const char *v20; // rax
  int v21; // r9d
  const char *m_pAsString; // r8
  int v23; // r9d
  int m_Size; // r11d
  signed int v25; // r10d
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t **m_pMemory; // rdx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *v27; // rdi
  int m_SpaceUsed; // esi
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t **v29; // rdx
  int v30; // eax
  int v31; // edx
  __int64 v32; // rsi
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *v33; // rax
  __int64 v34; // rdx
  int v35; // ecx
  __int64 v36; // rdx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t **v37; // rcx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t **v38; // rdx
  const char *v39; // rsi
  UtlSymLargeId_t m_Id; // rcx
  UtlSymLargeId_t m_Root; // rdx
  UtlSymLargeId_t v42; // rbx
  const char *v43; // r12
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v44; // r14
  unsigned __int64 v45; // r13
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v46; // r15
  CUtlSymbolTableLargeBaseTreeEntry_t *m_Data; // rsi
  unsigned int v48; // eax
  UtlSymLargeId_t m_Right; // rsi
  bool v50; // cl
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rdx
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v57; // rsi
  CUtlSymbolTableLargeBaseTreeEntry_t **pCopyFrom; // [rsp+10h] [rbp-D0h]
  int v59; // [rsp+18h] [rbp-C8h]
  LeafCodeInfo_t *v60; // [rsp+18h] [rbp-C8h]
  int v61; // [rsp+18h] [rbp-C8h]
  int pAbilityData; // [rsp+20h] [rbp-C0h]
  DOTAAbilityData_t *pAbilityDataa; // [rsp+20h] [rbp-C0h]
  int pAbilityDatab; // [rsp+20h] [rbp-C0h]
  int srcb; // [rsp+28h] [rbp-B8h]
  const char *srcd; // [rsp+28h] [rbp-B8h]
  const char *src; // [rsp+28h] [rbp-B8h]
  CDOTAGameManager *srca; // [rsp+28h] [rbp-B8h]
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *srcc; // [rsp+28h] [rbp-B8h]
  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int>,long long int> > *p_m_Lookup; // [rsp+30h] [rbp-B0h]
  int isLeft; // [rsp+38h] [rbp-A8h]
  signed int isLefta; // [rsp+38h] [rbp-A8h]
  bool isLeftb[8]; // [rsp+38h] [rbp-A8h]
  bool isLeftc; // [rsp+38h] [rbp-A8h]
  CUtlHashtable<short unsigned int,int,DefaultHashFunctor<short unsigned int>,DefaultEqualFunctor<short unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<short unsigned int,int>,int> > *p_m_AbilitiesIndexToIDMap; // [rsp+40h] [rbp-A0h]
  CUtlRBTree<CUtlMap<CUtlSymbolLarge,KeyValues*,short unsigned int>::Node_t,short unsigned int,CUtlMap<CUtlSymbolLarge,KeyValues*,short unsigned int>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,KeyValues*,short unsigned int>::Node_t,short unsigned int>,short unsigned int> > *v76; // [rsp+48h] [rbp-98h]
  CUtlRBTree<CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t*,short unsigned int>::Node_t,short unsigned int,CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t*,short unsigned int>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t*,short unsigned int>::Node_t,short unsigned int>,short unsigned int> > *p_m_Tree; // [rsp+50h] [rbp-90h]
  int nVersion; // [rsp+5Ch] [rbp-84h]
  CUtlScratchMemoryPool *pMemPool; // [rsp+60h] [rbp-80h]
  KeyValues *pAbilityBase; // [rsp+68h] [rbp-78h]
  const char *symNamec; // [rsp+70h] [rbp-70h]
  const char *symName; // [rsp+70h] [rbp-70h]
  CUtlSymbolLarge symNamea; // [rsp+70h] [rbp-70h]
  CUtlSymbolLarge symNamed; // [rsp+70h] [rbp-70h]
  CUtlSymbolLarge symNameb; // [rsp+70h] [rbp-70h]
  CUtlSymbolLarge symNamee; // [rsp+70h] [rbp-70h]
  CUtlSymbolLarge symNamef; // [rsp+70h] [rbp-70h]
  DOTAAbilityData_t *pAllAbilities; // [rsp+78h] [rbp-68h]
  UtlSymLargeId_t v89; // [rsp+88h] [rbp-58h] BYREF
  LeafCodeInfo_t insert[3]; // [rsp+90h] [rbp-50h] BYREF

  v4 = this;
  m_pkvAbilities = this->m_pkvAbilities;
  if ( m_pkvAbilities != 0 )
  {
    nVersion = KeyValues::GetInt(m_pkvAbilities, "version", 0);
    pAbilityBase = KeyValues::FindKey(v4->m_pkvAbilities, "ability_base", 0);
    if ( pAbilityBase == 0 )
    {
      if ( g_pFullFileSystem != 0 )
        (*(g_pFullFileSystem->_vptr_IAppSystem + 146))(g_pFullFileSystem, 1, 0);
      Copy = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        insert[0].m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/_generated_code/server_"
                             "dota/release/linuxsteamrt64/../../../../game/shared/dota/dota_game_manager.cpp";
        insert[0].m_szFunction = "SetupItemSymbolsAndDictionary";
        insert[0].m_nLine = 1017;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          insert,
          "CDOTAGameManager::SetupItemSymbolsAndDictionary couldn't find 'ability_base' in abilities script files\n");
      }
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v53, v54, v51, v52) != 0 )
        loc_0 = -559038737;
      v30 = Plat_ExitProcess(1);
LABEL_53:
      if ( v30 == -1 )
        goto LABEL_29;
      goto LABEL_36;
    }
    FirstTrueSubKey = KeyValues::GetFirstTrueSubKey(v4->m_pkvAbilities);
    if ( FirstTrueSubKey != 0 )
    {
      v7 = 0;
      do
      {
        v7 += FirstTrueSubKey != pAbilityBase;
        FirstTrueSubKey = KeyValues::GetNextTrueSubKey(FirstTrueSubKey);
      }
      while ( FirstTrueSubKey != 0 );
      v8 = 384 * v7;
      pMemPool = &v4->m_BaseMemPool;
      if ( 384 * v7 > 15 )
      {
        v9 = v8;
        v2 = CUtlScratchMemoryPool::AllocAligned(pMemPool, v8, 16);
      }
      else
      {
        v9 = v8;
        v2 = CUtlScratchMemoryPool::AllocAligned(&v4->m_BaseMemPool, v8, 8);
        if ( v8 < 0 )
          __debugbreak();
      }
      memset(v2, 0, v9);
      if ( v7 != 0 )
      {
        v10 = v2;
        do
        {
          if ( v10 != 0 )
          {
            v10->m_vecItemCombinesInto.m_Size = 0;
            v10->m_vecItemCombinesInto.m_Memory.m_pMemory = 0;
            v11 = v10 - v2;
            *(&v2->m_vecItemCombinesInto.m_Memory.m_nAllocationCount + v11) = 0;
            *(&v2->m_vecItemCombinesInto.m_Memory.m_nGrowSize + v11) = 0;
            v10->m_InvalidHeroes.m_Size = 0;
            v10->m_InvalidHeroes.m_Memory.m_pMemory = 0;
            *(&v2->m_InvalidHeroes.m_Memory.m_nAllocationCount + v11) = 0;
            *(&v2->m_InvalidHeroes.m_Memory.m_nGrowSize + v11) = 0;
          }
          ++v10;
        }
        while ( v10 != &v2[(v7 - 1) + 1] );
      }
    }
    else
    {
      pMemPool = &v4->m_BaseMemPool;
      v2 = CUtlScratchMemoryPool::AllocAligned(&v4->m_BaseMemPool, 0, 8);
    }
    NextTrueSubKey = KeyValues::GetFirstTrueSubKey(v4->m_pkvAbilities);
    if ( NextTrueSubKey != 0 )
    {
      p_m_Tree = &v4->m_AbilitiesDataDict.m_Tree;
      v76 = &v4->m_AbilitiesDict.m_Tree;
      p_m_AbilitiesIndexToIDMap = &v4->m_AbilitiesIndexToIDMap;
      pCopyFrom = &v89;
      do
      {
        if ( NextTrueSubKey == pAbilityBase )
          goto LABEL_18;
        Copy = KeyValues::MakeCopy(pAbilityBase);
        KeyValues::MergeFrom(Copy, NextTrueSubKey, KeyValues::MergeKeyValuesOp_t::MERGE_KV_UPDATE);
        Name = KeyValues::GetName(NextTrueSubKey);
        KeyValues::SetName(Copy, Name);
        pAllAbilities = v2 + 1;
        CDOTABaseAbility::ProcessAbilityData(
          nVersion,
          NextTrueSubKey,
          pAbilityBase,
          v4->m_pkvAbilities,
          v2,
          pMemPool,
          -1);
        v20 = KeyValues::GetName(NextTrueSubKey);
        if ( v20 != 0 && (symName = v20, (v21 = strlen(v20)) > 0) && *symName != 0 )
        {
          v3 = insert;
          isLeft = v21;
          p_m_Lookup = &v4->m_AbilityNameTable.m_Lookup;
          CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::Find(
            insert,
            &v4->m_AbilityNameTable,
            symName,
            v21);
          m_szFile = insert[0].m_szFile;
          m_pAsString = symName;
          v23 = isLeft;
          if ( insert[0].m_szFile == 0 )
          {
            m_Size = v4->m_AbilityNameTable.m_StringPools.m_Size;
            v25 = (isLeft + 16) & 0xFFFFFFF8;
            if ( m_Size <= 0 )
              goto LABEL_29;
            m_pMemory = v4->m_AbilityNameTable.m_StringPools.m_Memory.m_pMemory;
            v27 = *m_pMemory;
            m_SpaceUsed = (*m_pMemory)->m_SpaceUsed;
            if ( v25 > (*m_pMemory)->m_TotalLen - m_SpaceUsed )
            {
              v29 = m_pMemory + 1;
              v30 = 0;
              while ( ++v30 != m_Size )
              {
                v27 = *v29++;
                m_SpaceUsed = v27->m_SpaceUsed;
                if ( v25 <= v27->m_TotalLen - m_SpaceUsed )
                  goto LABEL_53;
              }
LABEL_29:
              if ( (v25 + 12LL) <= 0x800 )
              {
                v31 = 2036;
                v32 = 2048;
              }
              else
              {
                v31 = v25;
                v32 = v25 + 12;
              }
              pAbilityData = v23;
              srcb = v31;
              isLefta = v25;
              symNamea.u.m_Id = m_pAsString;
              v33 = (**g_pMemAlloc)(g_pMemAlloc, v32);
              v33->m_SpaceUsed = 0;
              m_pAsString = symNamea.u.m_pAsString;
              v25 = isLefta;
              v23 = pAbilityData;
              v33->m_TotalLen = srcb;
              v34 = v4->m_AbilityNameTable.m_StringPools.m_Size;
              v35 = v4->m_AbilityNameTable.m_StringPools.m_Size;
              if ( v34 == v4->m_AbilityNameTable.m_StringPools.m_Memory.m_nAllocationCount )
              {
                v61 = pAbilityData;
                pAbilityDatab = v4->m_AbilityNameTable.m_StringPools.m_Size;
                srcc = v33;
                CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Grow(
                  &v4->m_AbilityNameTable.m_StringPools.m_Memory,
                  1);
                v35 = v4->m_AbilityNameTable.m_StringPools.m_Size;
                v23 = v61;
                v34 = pAbilityDatab;
                v33 = srcc;
                v25 = isLefta;
                m_pAsString = symNamea.u.m_pAsString;
              }
              v36 = v34;
              v4->m_AbilityNameTable.m_StringPools.m_Size = v35 + 1;
              v37 = &v4->m_AbilityNameTable.m_StringPools.m_Memory.m_pMemory[v36];
              if ( v37 != 0 )
              {
                *v37 = v33;
                v38 = &v4->m_AbilityNameTable.m_StringPools.m_Memory.m_pMemory[v36];
              }
              else
              {
                v38 = 0;
              }
              v27 = *v38;
              m_SpaceUsed = (*v38)->m_SpaceUsed;
            }
LABEL_36:
            v59 = v23;
            v27->m_SpaceUsed = v25 + m_SpaceUsed;
            symNamed.u.m_Id = v27 + m_SpaceUsed;
            srcd = m_pAsString;
            *(symNamed.u.m_Id + 8) = HashString(m_pAsString);
            v39 = srcd;
            src = (symNamed.u.m_Id + 16);
            memcpy((symNamed.u.m_Id + 16), v39, v59);
            m_Id = symNamed.u.m_Id;
            *(v59 + symNamed.u.m_Id + 16) = 0;
            m_Root = v4->m_AbilityNameTable.m_Lookup.m_Root;
            v89 = symNamed.u.m_Id + 8;
            if ( m_Root == -1 )
            {
              v50 = 0;
            }
            else
            {
              symNameb.u.m_Id = Copy;
              v42 = m_Root;
              *isLeftb = NextTrueSubKey;
              pAbilityDataa = v2;
              v43 = src;
              v60 = v3;
              srca = v4;
              v44 = v4->m_AbilityNameTable.m_Lookup.m_Elements.m_pMemory;
              v45 = *(m_Id + 8);
              while ( 1 )
              {
                v46 = &v44[v42];
                m_Data = v46->m_Data;
                LOBYTE(v48) = v45 < m_Data->m_Hash;
                if ( v45 == m_Data->m_Hash )
                  v48 = strcmp(v43, m_Data->m_String) >> 31;
                m_Right = v46->m_Right;
                if ( v48 != 0 )
                  m_Right = v46->m_Left;
                v50 = v48 != 0;
                if ( m_Right == -1 )
                  break;
                v42 = m_Right;
              }
              m_Root = v42;
              NextTrueSubKey = *isLeftb;
              Copy = symNameb.u.m_Id;
              v2 = pAbilityDataa;
              v4 = srca;
              v3 = v60;
            }
            isLeftc = v50;
            symNamee.u.m_Id = m_Root;
            v55 = CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::NewNode(
                    p_m_Lookup,
                    pCopyFrom);
            v56 = symNamee.u.m_Id;
            symNamef.u.m_Id = v55;
            CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::LinkToParent(
              p_m_Lookup,
              v55,
              v56,
              isLeftc);
            v57 = v4->m_AbilityNameTable.m_Lookup.m_Elements.m_pMemory;
            ++v4->m_AbilityNameTable.m_Lookup.m_NumElements;
            m_szFile = v57[symNamef.u.m_Id].m_Data->m_String;
          }
        }
        else
        {
          v3 = insert;
          m_szFile = 0;
        }
        v2->m_pKVData = Copy;
        insert[0].m_szFile = m_szFile;
        symNamec = m_szFile;
        *&insert[0].m_nLine = v2;
        CUtlRBTree<CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::Insert(
          p_m_Tree,
          v3,
          ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
        *&insert[0].m_nLine = Copy;
        insert[0].m_szFile = symNamec;
        v13 = CUtlRBTree<CUtlMap<CUtlSymbolLarge,KeyValues *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,KeyValues *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,KeyValues *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::Insert(
                v76,
                v3,
                ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
        v14 = 33 * (((4097 * v13 + 2127912214) >> 19) ^ (4097 * v13 + 2127912214) ^ 0xC761C23C);
        v15 = 9 * ((v14 - 369570787) ^ ((v14 + 374761393) << 9)) - 42973499;
        CUtlHashtable<unsigned short,int,DefaultHashFunctor<unsigned short>,DefaultEqualFunctor<unsigned short>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned short,int>,int>>::DoInsert<unsigned short>(
          p_m_AbilitiesIndexToIDMap,
          v13,
          v2->m_iAbilityID,
          HIWORD(v15) ^ v15 ^ 0xB55A4F09,
          0);
        v16 = 33
            * (((4097 * v2->m_iAbilityID + 2127912214) >> 19) ^ (4097 * v2->m_iAbilityID + 2127912214) ^ 0xC761C23C);
        v17 = 9 * ((v16 - 369570787) ^ ((v16 + 374761393) << 9)) - 42973499;
        CUtlHashtable<int,unsigned short,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,unsigned short>,int>>::DoInsert<int>(
          &v4->m_AbilitiesIDToIndexMap,
          v2->m_iAbilityID,
          v13,
          HIWORD(v17) ^ v17 ^ 0xB55A4F09,
          0);
        v2 = pAllAbilities;
LABEL_18:
        NextTrueSubKey = KeyValues::GetNextTrueSubKey(NextTrueSubKey);
      }
      while ( NextTrueSubKey != 0 );
    }
  }
}


// CDOTAGameManager::SetupCustomItemSymbolsAndDictionary  (line 1063, @0x0000000002532ac0, libserver.so)  // inlines: AddString, AddToTail, AllocZero, CUtlMemory, CUtlSymbolLarge, CUtlSymbolLarge_Hash, CUtlVector, CUtlVectorBase, Construct<DOTAAbilityData_t>, CopyConstruct<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false>::StringPool_t*>, DOTAAbilityData_t, Element, FindInsertionPosition, FindPoolWithSpace, GrowMemory, Insert, InsertAt, LeafCodeInfo_t, LeftChild, NotifySteamMissingFiles, RightChild, ToSymbol, V_memcpy, V_memset, V_strlen, memcpy, memset, operator!=, operator(), operator=, operator[]
// calls: KeyValues::GetInt, KeyValues::FindKey, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, CUtlScratchMemoryPool::AllocAligned, memset, CUtlRBTree<CUtlMap<CUtlSymbolLarge, DOTAAbilityData_t*, short unsigned int>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, DOTAAbilityData_t*, short unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, DOTAAbilityData_t*, short unsigned int>::Node_t, short unsigned int>, short unsigned int> >::Insert, CUtlRBTree<CUtlMap<CUtlSymbolLarge, KeyValues*, short unsigned int>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, KeyValues*, short unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, KeyValues*, short unsigned int>::Node_t, short unsigned int>, short unsigned int> >::Insert, CUtlHashtable<short unsigned int, int, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, int>, int> >::DoInsert<short unsigned int>, CUtlHashtable<int, short unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, short unsigned int>, int> >::DoInsert<int>, KeyValues::MakeCopy, KeyValues::MergeFrom (27 total)
// callers: CDOTAGameManager::SetupGameKeyValues
// strings: "ability_base", "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/_generated_code/serve, "SetupCustomItemSymbolsAndDictionary", "CDOTAGameManager::SetupCustomItemSymbolsAndDictionary couldn't find 'ability_base' in abi
void __fastcall CDOTAGameManager::SetupCustomItemSymbolsAndDictionary(CDOTAGameManager *const this)
{
  KeyValues *NextTrueSubKey; // r12
  DOTAAbilityData_t *v2; // r14
  LeafCodeInfo_t *v3; // r15
  CDOTAGameManager *v4; // r13
  KeyValues *m_pkvAddOnAbilities; // rdi
  KeyValues *FirstTrueSubKey; // rax
  int v7; // ebx
  int v8; // r15d
  size_t v9; // r12
  DOTAAbilityData_t *v10; // rax
  signed __int64 v11; // rdx
  const char *m_szFile; // rcx
  unsigned __int16 v13; // bx
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  KeyValues *Copy; // rbx
  const char *Name; // rax
  const char *v20; // rax
  int v21; // r9d
  const char *m_pAsString; // r8
  int v23; // r9d
  int m_Size; // r11d
  signed int v25; // r10d
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t **m_pMemory; // rdx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *v27; // rdi
  int m_SpaceUsed; // esi
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t **v29; // rdx
  int v30; // eax
  int v31; // edx
  __int64 v32; // rsi
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *v33; // rax
  __int64 v34; // rdx
  int v35; // ecx
  __int64 v36; // rdx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t **v37; // rcx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t **v38; // rdx
  const char *v39; // rsi
  UtlSymLargeId_t m_Id; // rcx
  UtlSymLargeId_t m_Root; // rdx
  UtlSymLargeId_t v42; // rbx
  const char *v43; // r12
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v44; // r14
  unsigned __int64 v45; // r13
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v46; // r15
  CUtlSymbolTableLargeBaseTreeEntry_t *m_Data; // rsi
  unsigned int v48; // eax
  UtlSymLargeId_t m_Right; // rsi
  bool v50; // cl
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rdx
  UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int> *v57; // rdi
  CUtlSymbolTableLargeBaseTreeEntry_t **pCopyFrom; // [rsp+10h] [rbp-D0h]
  int v59; // [rsp+18h] [rbp-C8h]
  LeafCodeInfo_t *v60; // [rsp+18h] [rbp-C8h]
  int v61; // [rsp+18h] [rbp-C8h]
  int v62; // [rsp+20h] [rbp-C0h]
  KeyValues *v63; // [rsp+20h] [rbp-C0h]
  int v64; // [rsp+20h] [rbp-C0h]
  int srcb; // [rsp+28h] [rbp-B8h]
  const char *srcd; // [rsp+28h] [rbp-B8h]
  const char *src; // [rsp+28h] [rbp-B8h]
  CDOTAGameManager *srca; // [rsp+28h] [rbp-B8h]
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *srcc; // [rsp+28h] [rbp-B8h]
  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*,long long int>,long long int> > *p_m_Lookup; // [rsp+30h] [rbp-B0h]
  int pkvAbilityMerged; // [rsp+38h] [rbp-A8h]
  signed int pkvAbilityMergeda; // [rsp+38h] [rbp-A8h]
  KeyValues *pkvAbilityMergedb; // [rsp+38h] [rbp-A8h]
  bool pkvAbilityMergedc; // [rsp+38h] [rbp-A8h]
  CUtlHashtable<short unsigned int,int,DefaultHashFunctor<short unsigned int>,DefaultEqualFunctor<short unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<short unsigned int,int>,int> > *p_m_AddOnAbilitiesIndexToIDMap; // [rsp+40h] [rbp-A0h]
  CUtlRBTree<CUtlMap<CUtlSymbolLarge,KeyValues*,short unsigned int>::Node_t,short unsigned int,CUtlMap<CUtlSymbolLarge,KeyValues*,short unsigned int>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,KeyValues*,short unsigned int>::Node_t,short unsigned int>,short unsigned int> > *v76; // [rsp+48h] [rbp-98h]
  CUtlRBTree<CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t*,short unsigned int>::Node_t,short unsigned int,CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t*,short unsigned int>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t*,short unsigned int>::Node_t,short unsigned int>,short unsigned int> > *p_m_Tree; // [rsp+50h] [rbp-90h]
  CUtlScratchMemoryPool *pMemPool; // [rsp+58h] [rbp-88h]
  KeyValues *pAbilityBase; // [rsp+60h] [rbp-80h]
  const char *symNamec; // [rsp+68h] [rbp-78h]
  const char *symName; // [rsp+68h] [rbp-78h]
  CUtlSymbolLarge symNamea; // [rsp+68h] [rbp-78h]
  CUtlSymbolLarge symNamed; // [rsp+68h] [rbp-78h]
  CUtlSymbolLarge symNameb; // [rsp+68h] [rbp-78h]
  CUtlSymbolLarge symNamee; // [rsp+68h] [rbp-78h]
  CUtlSymbolLarge symNamef; // [rsp+68h] [rbp-78h]
  DOTAAbilityData_t *pAllAbilities; // [rsp+70h] [rbp-70h]
  int nVersion; // [rsp+78h] [rbp-68h]
  int nAbilityID; // [rsp+7Ch] [rbp-64h]
  UtlSymLargeId_t v90; // [rsp+88h] [rbp-58h] BYREF
  LeafCodeInfo_t insert[3]; // [rsp+90h] [rbp-50h] BYREF

  v4 = this;
  m_pkvAddOnAbilities = this->m_pkvAddOnAbilities;
  if ( m_pkvAddOnAbilities != 0 )
  {
    nVersion = KeyValues::GetInt(m_pkvAddOnAbilities, "version", 0);
    pAbilityBase = KeyValues::FindKey(v4->m_pkvAddOnAbilities, "ability_base", 0);
    if ( pAbilityBase == 0 )
    {
      if ( g_pFullFileSystem != 0 )
        (*(g_pFullFileSystem->_vptr_IAppSystem + 146))(g_pFullFileSystem, 1, 0);
      Copy = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        insert[0].m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/_generated_code/server_"
                             "dota/release/linuxsteamrt64/../../../../game/shared/dota/dota_game_manager.cpp";
        insert[0].m_szFunction = "SetupCustomItemSymbolsAndDictionary";
        insert[0].m_nLine = 1078;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          insert,
          "CDOTAGameManager::SetupCustomItemSymbolsAndDictionary couldn't find 'ability_base' in abilities script files\n");
      }
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v53, v54, v51, v52) != 0 )
        loc_0 = -559038737;
      v30 = Plat_ExitProcess(1);
LABEL_53:
      if ( v30 == -1 )
        goto LABEL_29;
      goto LABEL_36;
    }
    FirstTrueSubKey = KeyValues::GetFirstTrueSubKey(v4->m_pkvAddOnAbilities);
    if ( FirstTrueSubKey != 0 )
    {
      v7 = 0;
      do
      {
        v7 += FirstTrueSubKey != pAbilityBase;
        FirstTrueSubKey = KeyValues::GetNextTrueSubKey(FirstTrueSubKey);
      }
      while ( FirstTrueSubKey != 0 );
      v8 = 384 * v7;
      pMemPool = &v4->m_AddOnMemPool;
      if ( 384 * v7 > 15 )
      {
        v9 = v8;
        v2 = CUtlScratchMemoryPool::AllocAligned(pMemPool, v8, 16);
      }
      else
      {
        v9 = v8;
        v2 = CUtlScratchMemoryPool::AllocAligned(&v4->m_AddOnMemPool, v8, 8);
        if ( v8 < 0 )
          __debugbreak();
      }
      memset(v2, 0, v9);
      if ( v7 != 0 )
      {
        v10 = v2;
        do
        {
          if ( v10 != 0 )
          {
            v10->m_vecItemCombinesInto.m_Size = 0;
            v10->m_vecItemCombinesInto.m_Memory.m_pMemory = 0;
            v11 = v10 - v2;
            *(&v2->m_vecItemCombinesInto.m_Memory.m_nAllocationCount + v11) = 0;
            *(&v2->m_vecItemCombinesInto.m_Memory.m_nGrowSize + v11) = 0;
            v10->m_InvalidHeroes.m_Size = 0;
            v10->m_InvalidHeroes.m_Memory.m_pMemory = 0;
            *(&v2->m_InvalidHeroes.m_Memory.m_nAllocationCount + v11) = 0;
            *(&v2->m_InvalidHeroes.m_Memory.m_nGrowSize + v11) = 0;
          }
          ++v10;
        }
        while ( v10 != &v2[(v7 - 1) + 1] );
      }
    }
    else
    {
      pMemPool = &v4->m_AddOnMemPool;
      v2 = CUtlScratchMemoryPool::AllocAligned(&v4->m_AddOnMemPool, 0, 8);
    }
    nAbilityID = 7000;
    NextTrueSubKey = KeyValues::GetFirstTrueSubKey(v4->m_pkvAddOnAbilities);
    if ( NextTrueSubKey != 0 )
    {
      p_m_Tree = &v4->m_AddOnAbilitiesDataDict.m_Tree;
      v76 = &v4->m_AddOnAbilitiesDict.m_Tree;
      p_m_AddOnAbilitiesIndexToIDMap = &v4->m_AddOnAbilitiesIndexToIDMap;
      pCopyFrom = &v90;
      do
      {
        if ( NextTrueSubKey == pAbilityBase )
          goto LABEL_18;
        Copy = KeyValues::MakeCopy(pAbilityBase);
        KeyValues::MergeFrom(Copy, NextTrueSubKey, KeyValues::MergeKeyValuesOp_t::MERGE_KV_UPDATE);
        Name = KeyValues::GetName(NextTrueSubKey);
        KeyValues::SetName(Copy, Name);
        pAllAbilities = v2 + 1;
        CDOTABaseAbility::ProcessAbilityData(
          nVersion,
          NextTrueSubKey,
          pAbilityBase,
          v4->m_pkvAddOnAbilities,
          v2,
          pMemPool,
          nAbilityID++);
        v20 = KeyValues::GetName(NextTrueSubKey);
        if ( v20 != 0 && (symName = v20, (v21 = strlen(v20)) > 0) && *symName != 0 )
        {
          v3 = insert;
          pkvAbilityMerged = v21;
          p_m_Lookup = &v4->m_AddOnAbilityNameTable.m_Lookup;
          CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::Find(
            insert,
            &v4->m_AddOnAbilityNameTable,
            symName,
            v21);
          m_szFile = insert[0].m_szFile;
          m_pAsString = symName;
          v23 = pkvAbilityMerged;
          if ( insert[0].m_szFile == 0 )
          {
            m_Size = v4->m_AddOnAbilityNameTable.m_StringPools.m_Size;
            v25 = (pkvAbilityMerged + 16) & 0xFFFFFFF8;
            if ( m_Size <= 0 )
              goto LABEL_29;
            m_pMemory = v4->m_AddOnAbilityNameTable.m_StringPools.m_Memory.m_pMemory;
            v27 = *m_pMemory;
            m_SpaceUsed = (*m_pMemory)->m_SpaceUsed;
            if ( v25 > (*m_pMemory)->m_TotalLen - m_SpaceUsed )
            {
              v29 = m_pMemory + 1;
              v30 = 0;
              while ( ++v30 != m_Size )
              {
                v27 = *v29++;
                m_SpaceUsed = v27->m_SpaceUsed;
                if ( v25 <= v27->m_TotalLen - m_SpaceUsed )
                  goto LABEL_53;
              }
LABEL_29:
              if ( (v25 + 12LL) <= 0x800 )
              {
                v31 = 2036;
                v32 = 2048;
              }
              else
              {
                v31 = v25;
                v32 = v25 + 12;
              }
              v62 = v23;
              srcb = v31;
              pkvAbilityMergeda = v25;
              symNamea.u.m_Id = m_pAsString;
              v33 = (**g_pMemAlloc)(g_pMemAlloc, v32);
              v33->m_SpaceUsed = 0;
              m_pAsString = symNamea.u.m_pAsString;
              v25 = pkvAbilityMergeda;
              v23 = v62;
              v33->m_TotalLen = srcb;
              v34 = v4->m_AddOnAbilityNameTable.m_StringPools.m_Size;
              v35 = v4->m_AddOnAbilityNameTable.m_StringPools.m_Size;
              if ( v34 == v4->m_AddOnAbilityNameTable.m_StringPools.m_Memory.m_nAllocationCount )
              {
                v61 = v62;
                v64 = v4->m_AddOnAbilityNameTable.m_StringPools.m_Size;
                srcc = v33;
                CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Grow(
                  &v4->m_AddOnAbilityNameTable.m_StringPools.m_Memory,
                  1);
                v35 = v4->m_AddOnAbilityNameTable.m_StringPools.m_Size;
                v23 = v61;
                v34 = v64;
                v33 = srcc;
                v25 = pkvAbilityMergeda;
                m_pAsString = symNamea.u.m_pAsString;
              }
              v36 = v34;
              v4->m_AddOnAbilityNameTable.m_StringPools.m_Size = v35 + 1;
              v37 = &v4->m_AddOnAbilityNameTable.m_StringPools.m_Memory.m_pMemory[v36];
              if ( v37 != 0 )
              {
                *v37 = v33;
                v38 = &v4->m_AddOnAbilityNameTable.m_StringPools.m_Memory.m_pMemory[v36];
              }
              else
              {
                v38 = 0;
              }
              v27 = *v38;
              m_SpaceUsed = (*v38)->m_SpaceUsed;
            }
LABEL_36:
            v59 = v23;
            v27->m_SpaceUsed = v25 + m_SpaceUsed;
            symNamed.u.m_Id = v27 + m_SpaceUsed;
            srcd = m_pAsString;
            *(symNamed.u.m_Id + 8) = HashString(m_pAsString);
            v39 = srcd;
            src = (symNamed.u.m_Id + 16);
            memcpy((symNamed.u.m_Id + 16), v39, v59);
            m_Id = symNamed.u.m_Id;
            *(v59 + symNamed.u.m_Id + 16) = 0;
            m_Root = v4->m_AddOnAbilityNameTable.m_Lookup.m_Root;
            v90 = symNamed.u.m_Id + 8;
            if ( m_Root == -1 )
            {
              v50 = 0;
            }
            else
            {
              symNameb.u.m_Id = v2;
              pkvAbilityMergedb = Copy;
              v42 = m_Root;
              v63 = NextTrueSubKey;
              v43 = src;
              v60 = v3;
              srca = v4;
              v44 = v4->m_AddOnAbilityNameTable.m_Lookup.m_Elements.m_pMemory;
              v45 = *(m_Id + 8);
              while ( 1 )
              {
                v46 = &v44[v42];
                m_Data = v46->m_Data;
                LOBYTE(v48) = v45 < m_Data->m_Hash;
                if ( v45 == m_Data->m_Hash )
                  v48 = strcmp(v43, m_Data->m_String) >> 31;
                m_Right = v46->m_Right;
                if ( v48 != 0 )
                  m_Right = v46->m_Left;
                v50 = v48 != 0;
                if ( m_Right == -1 )
                  break;
                v42 = m_Right;
              }
              m_Root = v42;
              v2 = symNameb.u.m_Id;
              NextTrueSubKey = v63;
              Copy = pkvAbilityMergedb;
              v4 = srca;
              v3 = v60;
            }
            pkvAbilityMergedc = v50;
            symNamee.u.m_Id = m_Root;
            v55 = CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::NewNode(
                    p_m_Lookup,
                    pCopyFrom);
            v56 = symNamee.u.m_Id;
            symNamef.u.m_Id = v55;
            CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::LinkToParent(
              p_m_Lookup,
              v55,
              v56,
              pkvAbilityMergedc);
            v57 = v4->m_AddOnAbilityNameTable.m_Lookup.m_Elements.m_pMemory;
            ++v4->m_AddOnAbilityNameTable.m_Lookup.m_NumElements;
            m_szFile = v57[symNamef.u.m_Id].m_Data->m_String;
          }
        }
        else
        {
          v3 = insert;
          m_szFile = 0;
        }
        v2->m_pKVData = Copy;
        insert[0].m_szFile = m_szFile;
        symNamec = m_szFile;
        *&insert[0].m_nLine = v2;
        CUtlRBTree<CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::Insert(
          p_m_Tree,
          v3,
          ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
        *&insert[0].m_nLine = Copy;
        insert[0].m_szFile = symNamec;
        v13 = CUtlRBTree<CUtlMap<CUtlSymbolLarge,KeyValues *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,KeyValues *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,KeyValues *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::Insert(
                v76,
                v3,
                ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
        v14 = 33 * (((4097 * v13 + 2127912214) >> 19) ^ (4097 * v13 + 2127912214) ^ 0xC761C23C);
        v15 = 9 * ((v14 - 369570787) ^ ((v14 + 374761393) << 9)) - 42973499;
        CUtlHashtable<unsigned short,int,DefaultHashFunctor<unsigned short>,DefaultEqualFunctor<unsigned short>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned short,int>,int>>::DoInsert<unsigned short>(
          p_m_AddOnAbilitiesIndexToIDMap,
          v13,
          v2->m_iAbilityID,
          HIWORD(v15) ^ v15 ^ 0xB55A4F09,
          0);
        v16 = 33
            * (((4097 * v2->m_iAbilityID + 2127912214) >> 19) ^ (4097 * v2->m_iAbilityID + 2127912214) ^ 0xC761C23C);
        v17 = 9 * ((v16 - 369570787) ^ ((v16 + 374761393) << 9)) - 42973499;
        CUtlHashtable<int,unsigned short,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,unsigned short>,int>>::DoInsert<int>(
          &v4->m_AddOnAbilitiesIDToIndexMap,
          v2->m_iAbilityID,
          v13,
          HIWORD(v17) ^ v17 ^ 0xB55A4F09,
          0);
        v2 = pAllAbilities;
LABEL_18:
        NextTrueSubKey = KeyValues::GetNextTrueSubKey(NextTrueSubKey);
      }
      while ( NextTrueSubKey != 0 );
    }
  }
}


// CDOTAGameManager::SetupSingleItemCombine  (line 1121, @0x00000000024f10f0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, CopyConstruct<short unsigned int>, Element, Find, FindElement, GetInt, GrowMemory, HKeySymbol, Purge, PurgeAndDeleteElements, RemoveAll, operator[], ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTAGameManager::GetAbilityByName, KeyValues::FindKey, KeyValues::GetFirstSubKey, KeyValues::GetString, V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), CDOTAGameManager::GetAbilityDataByName, CUtlRBTree<CUtlMap<DOTAAbilityData_t*, bool>::Node_t, short unsigned int, CUtlMap<DOTAAbilityData_t*, bool>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<DOTAAbilityData_t*, bool>::Node_t, short unsigned int>, short unsigned int> >::Find, KeyValues::GetNextKey, CKeyValues_Data::Internal_GetInt, CUtlMemory<short unsigned int, int>::Grow, CUtlMemory<char*, int>::Purge, CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >::PurgeAndDeleteElements (14 total)
// callers: CDOTAGameManager::SetupItemCombines
// strings: "ItemRequirements"
bool __fastcall CDOTAGameManager::SetupSingleItemCombine(
        CDOTAGameManager *const this,
        CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t*,short unsigned int,bool (*)(const CUtlSymbolLarge&,const CUtlSymbolLarge&)> *const abilitiesDict,
        int iAbilityIndex,
        const CUtlMap<DOTAAbilityData_t*,bool,short unsigned int,bool (*)(DOTAAbilityData_t* const&,DOTAAbilityData_t* const&)> *const mapAlreadyCalculated)
{
  unsigned __int16 v4; // r15
  char v5; // al
  KeyValues *AbilityByName; // rax
  KeyValues *Key; // rax
  const char *String; // rax
  __int64 v10; // r14
  DOTAAbilityData_t *AbilityDataByName; // rax
  DOTAAbilityData_t *v12; // r13
  unsigned __int16 v13; // ax
  __int64 m_Size; // rbx
  unsigned __int16 *m_pMemory; // rdx
  _WORD *v16; // rdx
  int v17; // eax
  int v18; // eax
  unsigned __int16 *v19; // rax
  __int64 v20; // r13
  int v21; // ebx
  char *v22; // rsi
  KeyValues *v23; // rax
  int Int; // edx
  __int64 v25; // r12
  int v26; // ebx
  char *v27; // rsi
  KeyValues *pRecipe; // [rsp+10h] [rbp-A0h]
  KeyValues *pkvComponentList; // [rsp+20h] [rbp-90h]
  int itemCost; // [rsp+38h] [rbp-78h]
  bool v32; // [rsp+3Eh] [rbp-72h]
  bool bFoundCost; // [rsp+3Fh] [rbp-71h]
  DOTAAbilityData_t *pAbilityData; // [rsp+40h] [rbp-70h]
  CUtlMap<DOTAAbilityData_t*,bool,short unsigned int,bool (*)(DOTAAbilityData_t* const&,DOTAAbilityData_t* const&)>::Node_t v36; // [rsp+50h] [rbp-60h] BYREF
  CUtlStringList szSplitComponents; // [rsp+60h] [rbp-50h] BYREF

  v4 = iAbilityIndex;
  pAbilityData = abilitiesDict->m_Tree.m_Elements.m_pMemory[iAbilityIndex].m_Data.elem;
  v5 = *(pAbilityData + 376);
  if ( (v5 & 1) == 0 )
    return 1;
  v32 = (v5 & 4) != 0;
  if ( (v5 & 4) == 0 )
    return 1;
  AbilityByName = CDOTAGameManager::GetAbilityByName(this, pAbilityData->m_pszItemRecipeName);
  pRecipe = AbilityByName;
  if ( AbilityByName == 0 )
    return 1;
  Key = KeyValues::FindKey(AbilityByName, "ItemRequirements", 0);
  if ( Key == 0 )
    return 1;
  pkvComponentList = KeyValues::GetFirstSubKey(Key);
  if ( pkvComponentList == 0 )
  {
    itemCost = 0;
LABEL_32:
    v23 = KeyValues::FindKey(pRecipe, this->m_hKvSymbols[6]);
    Int = 0;
    if ( v23 != 0 )
      Int = CKeyValues_Data::Internal_GetInt(v23);
    pAbilityData->m_iItemCost = itemCost + Int;
    return v32;
  }
  bFoundCost = 0;
  itemCost = 0;
  while ( 1 )
  {
    String = KeyValues::GetString(pkvComponentList, 0, "", 0, 0);
    szSplitComponents.m_Size = 0;
    szSplitComponents.m_Memory.m_pMemory = 0;
    szSplitComponents.m_Memory.m_nAllocationCount = 0;
    szSplitComponents.m_Memory.m_nGrowSize = 0;
    V_SplitString(String, ";", &szSplitComponents);
    if ( szSplitComponents.m_Size > 0 )
      break;
    bFoundCost = itemCost != 0;
LABEL_30:
    szSplitComponents.m_Size = 0;
    if ( (szSplitComponents.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<char *,int>::Purge(&szSplitComponents.m_Memory);
      if ( (szSplitComponents.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<char *,int>::Purge(&szSplitComponents.m_Memory);
    }
    pkvComponentList = KeyValues::GetNextKey(pkvComponentList);
    if ( pkvComponentList == 0 )
      goto LABEL_32;
  }
  v10 = 0;
  while ( 1 )
  {
    AbilityDataByName = CDOTAGameManager::GetAbilityDataByName(this, szSplitComponents.m_Memory.m_pMemory[v10]);
    v12 = AbilityDataByName;
    if ( AbilityDataByName == 0 )
      goto LABEL_26;
    if ( pAbilityData != AbilityDataByName )
    {
      v36.key = AbilityDataByName;
      v13 = CUtlRBTree<CUtlMap<DOTAAbilityData_t *,bool,unsigned short,bool (*)(DOTAAbilityData_t * const&,DOTAAbilityData_t * const&)>::Node_t,unsigned short,CUtlMap<DOTAAbilityData_t *,bool,unsigned short,bool (*)(DOTAAbilityData_t * const&,DOTAAbilityData_t * const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<DOTAAbilityData_t *,bool,unsigned short,bool (*)(DOTAAbilityData_t * const&,DOTAAbilityData_t * const&)>::Node_t,unsigned short>,unsigned short>>::Find(
              &mapAlreadyCalculated->m_Tree,
              &v36);
      if ( v13 == 0xFFFF || !mapAlreadyCalculated->m_Tree.m_Elements.m_pMemory[v13].m_Data.elem )
        break;
    }
    if ( !bFoundCost )
      itemCost += v12->m_iItemCost;
    m_Size = v12->m_vecItemCombinesInto.m_Size;
    if ( m_Size <= 0 )
      goto LABEL_22;
    m_pMemory = v12->m_vecItemCombinesInto.m_Memory.m_pMemory;
    if ( v4 != *m_pMemory )
    {
      v16 = m_pMemory + 1;
      v17 = 0;
      while ( ++v17 != m_Size )
      {
        if ( v4 == *v16++ )
        {
          if ( v17 != -1 )
            goto LABEL_26;
          break;
        }
      }
LABEL_22:
      v18 = v12->m_vecItemCombinesInto.m_Size;
      if ( m_Size == v12->m_vecItemCombinesInto.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<unsigned short,int>::Grow(&v12->m_vecItemCombinesInto.m_Memory, 1);
        v18 = v12->m_vecItemCombinesInto.m_Size;
      }
      v12->m_vecItemCombinesInto.m_Size = v18 + 1;
      v19 = &v12->m_vecItemCombinesInto.m_Memory.m_pMemory[m_Size];
      if ( v19 != 0 )
        *v19 = v4;
    }
LABEL_26:
    if ( szSplitComponents.m_Size <= ++v10 )
    {
      bFoundCost = itemCost != 0;
      if ( szSplitComponents.m_Size > 0 )
      {
        v20 = 0;
        v21 = 0;
        do
        {
          ++v21;
          v22 = szSplitComponents.m_Memory.m_pMemory[v20++];
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v22);
        }
        while ( v21 < szSplitComponents.m_Size );
      }
      goto LABEL_30;
    }
  }
  if ( szSplitComponents.m_Size > 0 )
  {
    v25 = 0;
    v26 = 0;
    do
    {
      ++v26;
      v27 = szSplitComponents.m_Memory.m_pMemory[v25++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v27);
    }
    while ( v26 < szSplitComponents.m_Size );
  }
  szSplitComponents.m_Size = 0;
  if ( (szSplitComponents.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<char *,int>::Purge(&szSplitComponents.m_Memory);
    if ( (szSplitComponents.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&szSplitComponents.m_Memory);
  }
  return 0;
}


// CDOTAGameManager::SetupItemCombines  (line 1186, @0x0000000002529d50, libserver.so)  // inlines: AddToTail, CUtlLinkedList, CUtlMap, CUtlMemory, CUtlRBTree, ConstructList, Element, Find, FindElement, FindInsertionPosition, First, FirstInorder, Free, Insert, InsertAt, IsIdxValid, IsValidIndex, LeftChild, Next, NextInorder, Purge, Remove, RemoveAll, ResetDbgInfo, RightChild, SetLeftChild, SetLessFunc, SetRightChild, operator(), operator==, operator[], ~CUtlLinkedList, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsigned int>, short unsigned int> >::InsertBefore, CUtlRBTree<CUtlMap<CUtlSymbolLarge, DOTAAbilityData_t*, short unsigned int>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, DOTAAbilityData_t*, short unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, DOTAAbilityData_t*, short unsigned int>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsigned int>, short unsigned int> >::Unlink, CUtlRBTree<CUtlMap<DOTAAbilityData_t*, bool>::Node_t, short unsigned int, CUtlMap<DOTAAbilityData_t*, bool>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<DOTAAbilityData_t*, bool>::Node_t, short unsigned int>, short unsigned int> >::Find, CDOTAGameManager::SetupSingleItemCombine, CUtlRBTree<CUtlMap<DOTAAbilityData_t*, bool>::Node_t, short unsigned int, CUtlMap<DOTAAbilityData_t*, bool>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<DOTAAbilityData_t*, bool>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<DOTAAbilityData_t*, bool>::Node_t, short unsigned int, CUtlMap<DOTAAbilityData_t*, bool>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<DOTAAbilityData_t*, bool>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent, CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsigned int>, short unsigned int> >::RemoveAll, CUtlMemory<UtlLinkedListElem_t<int, short unsigned int>, short unsigned int>::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<DOTAAbilityData_t*, bool>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlRBTree<CUtlMap<DOTAAbilityData_t*, bool>::Node_t, short unsigned int, CUtlMap<DOTAAbilityData_t*, bool>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<DOTAAbilityData_t*, bool>::Node_t, short unsigned int>, short unsigned int> >::~CUtlRBTree, _Unwind_Resume
// callers: CDOTAGameManager::SetupGameKeyValues
// globals: CDefOps<DOTAAbilityData_t *>::LessFunc(DOTAAbilityData_t * const&,DOTAAbilityData_t * const&)
void __fastcall CDOTAGameManager::SetupItemCombines(
        CDOTAGameManager *const this,
        CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t*,short unsigned int,bool (*)(const CUtlSymbolLarge&,const CUtlSymbolLarge&)> *const abilitiesDict)
{
  unsigned __int16 m_Root; // ax
  UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t*,short unsigned int>::Node_t,short unsigned int> *m_pMemory; // rcx
  unsigned __int16 m_Left; // dx
  unsigned __int16 v6; // bx
  unsigned __int16 m_Head; // bx
  __int64 v8; // r12
  UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t*,short unsigned int>::Node_t,short unsigned int> *v9; // rcx
  DOTAAbilityData_t *elem; // rbx
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // r13
  unsigned __int16 m_Right; // ax
  bool v14; // bl
  unsigned __int16 v15; // ax
  unsigned __int16 index; // si
  __int64 m_nAllocationCount; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  int iAbilityIndex; // [rsp+3Ch] [rbp-B4h] BYREF
  CUtlMap<DOTAAbilityData_t*,bool,short unsigned int,bool (*)(DOTAAbilityData_t* const&,DOTAAbilityData_t* const&)>::Node_t v22; // [rsp+40h] [rbp-B0h] BYREF
  CUtlMap<DOTAAbilityData_t*,bool,short unsigned int,bool (*)(DOTAAbilityData_t* const&,DOTAAbilityData_t* const&)>::Node_t v23; // [rsp+50h] [rbp-A0h] BYREF
  CUtlMap<DOTAAbilityData_t*,bool,short unsigned int,bool (*)(DOTAAbilityData_t* const&,DOTAAbilityData_t* const&)> mapCalculated; // [rsp+60h] [rbp-90h] BYREF
  CUtlLinkedList<int,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<int,short unsigned int>,short unsigned int> > listNeedsCalculation; // [rsp+90h] [rbp-60h] BYREF

  mapCalculated.m_Tree.m_LessFunc.m_LessFunc = CDefOps<DOTAAbilityData_t *>::LessFunc;
  m_Root = abilitiesDict->m_Tree.m_Root;
  mapCalculated.m_Tree.m_Root = -1;
  mapCalculated.m_Tree.m_Elements.m_pMemory = 0;
  mapCalculated.m_Tree.m_Elements.m_nAllocationCount = 0;
  mapCalculated.m_Tree.m_Elements.m_nGrowSize = 0;
  mapCalculated.m_Tree.m_NumElements = 0;
  mapCalculated.m_Tree.m_FirstFree = -1;
  mapCalculated.m_Tree.m_LastAlloc.index = -1;
  mapCalculated.m_Tree.m_pElements = 0;
  listNeedsCalculation.m_Memory.m_pMemory = 0;
  listNeedsCalculation.m_Memory.m_nAllocationCount = 0;
  listNeedsCalculation.m_Memory.m_nGrowSize = 0;
  listNeedsCalculation.m_LastAlloc.index = -1;
  listNeedsCalculation.m_Head = -1;
  listNeedsCalculation.m_Tail = -1;
  listNeedsCalculation.m_FirstFree = -1;
  listNeedsCalculation.m_ElementCount = 0;
  listNeedsCalculation.m_NumAlloced = 0;
  listNeedsCalculation.m_pElements = 0;
  if ( m_Root == 0xFFFF )
  {
    m_Head = -1;
  }
  else
  {
    m_pMemory = abilitiesDict->m_Tree.m_Elements.m_pMemory;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( m_pMemory[m_Left].m_Left != 0xFFFF )
        m_Left = m_pMemory[m_Left].m_Left;
      m_Root = m_Left;
    }
    do
    {
      v6 = m_Root;
      LODWORD(v23.key) = m_Root;
      CUtlLinkedList<int,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<int,unsigned short>,unsigned short>>::InsertBefore(
        &listNeedsCalculation,
        0xFFFFu,
        &v23);
      m_Root = CUtlRBTree<CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                 &abilitiesDict->m_Tree,
                 v6);
    }
    while ( m_Root != 0xFFFF );
    m_Head = listNeedsCalculation.m_Head;
  }
  while ( m_Head != 0xFFFF )
  {
    v8 = m_Head;
    iAbilityIndex = listNeedsCalculation.m_Memory.m_pMemory[v8].m_Element;
    CUtlLinkedList<int,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<int,unsigned short>,unsigned short>>::Unlink(
      &listNeedsCalculation,
      m_Head);
    listNeedsCalculation.m_Memory.m_pMemory[v8].m_Next = listNeedsCalculation.m_FirstFree;
    v9 = abilitiesDict->m_Tree.m_Elements.m_pMemory;
    listNeedsCalculation.m_FirstFree = m_Head;
    elem = v9[iAbilityIndex].m_Data.elem;
    v22.key = elem;
    v11 = CUtlRBTree<CUtlMap<DOTAAbilityData_t *,bool,unsigned short,bool (*)(DOTAAbilityData_t * const&,DOTAAbilityData_t * const&)>::Node_t,unsigned short,CUtlMap<DOTAAbilityData_t *,bool,unsigned short,bool (*)(DOTAAbilityData_t * const&,DOTAAbilityData_t * const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<DOTAAbilityData_t *,bool,unsigned short,bool (*)(DOTAAbilityData_t * const&,DOTAAbilityData_t * const&)>::Node_t,unsigned short>,unsigned short>>::Find(
            &mapCalculated.m_Tree,
            &v22);
    if ( v11 == 0xFFFF || !mapCalculated.m_Tree.m_Elements.m_pMemory[v11].m_Data.elem )
    {
      if ( CDOTAGameManager::SetupSingleItemCombine(this, abilitiesDict, iAbilityIndex, &mapCalculated) )
      {
        v12 = mapCalculated.m_Tree.m_Root;
        v23.key = elem;
        v23.elem = 1;
        if ( mapCalculated.m_Tree.m_Root != 0xFFFF )
        {
          while ( 1 )
          {
            if ( mapCalculated.m_Tree.m_LessFunc.m_LessFunc(
                   &v23,
                   &mapCalculated.m_Tree.m_Elements.m_pMemory[v12].m_Data) != 0 )
            {
              m_Right = mapCalculated.m_Tree.m_Elements.m_pMemory[v12].m_Left;
              v14 = 1;
              if ( m_Right == 0xFFFF )
                goto LABEL_21;
            }
            else
            {
              m_Right = mapCalculated.m_Tree.m_Elements.m_pMemory[v12].m_Right;
              v14 = 0;
              if ( m_Right == 0xFFFF )
              {
LABEL_21:
                v15 = CUtlRBTree<CUtlMap<DOTAAbilityData_t *,bool,unsigned short,bool (*)(DOTAAbilityData_t * const&,DOTAAbilityData_t * const&)>::Node_t,unsigned short,CUtlMap<DOTAAbilityData_t *,bool,unsigned short,bool (*)(DOTAAbilityData_t * const&,DOTAAbilityData_t * const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<DOTAAbilityData_t *,bool,unsigned short,bool (*)(DOTAAbilityData_t * const&,DOTAAbilityData_t * const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
                        &mapCalculated.m_Tree,
                        &v23);
                goto LABEL_22;
              }
            }
            v12 = m_Right;
          }
        }
        v14 = 0;
        v15 = CUtlRBTree<CUtlMap<DOTAAbilityData_t *,bool,unsigned short,bool (*)(DOTAAbilityData_t * const&,DOTAAbilityData_t * const&)>::Node_t,unsigned short,CUtlMap<DOTAAbilityData_t *,bool,unsigned short,bool (*)(DOTAAbilityData_t * const&,DOTAAbilityData_t * const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<DOTAAbilityData_t *,bool,unsigned short,bool (*)(DOTAAbilityData_t * const&,DOTAAbilityData_t * const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
                &mapCalculated.m_Tree,
                &v23);
LABEL_22:
        CUtlRBTree<CUtlMap<DOTAAbilityData_t *,bool,unsigned short,bool (*)(DOTAAbilityData_t * const&,DOTAAbilityData_t * const&)>::Node_t,unsigned short,CUtlMap<DOTAAbilityData_t *,bool,unsigned short,bool (*)(DOTAAbilityData_t * const&,DOTAAbilityData_t * const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<DOTAAbilityData_t *,bool,unsigned short,bool (*)(DOTAAbilityData_t * const&,DOTAAbilityData_t * const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
          &mapCalculated.m_Tree,
          v15,
          v12,
          v14);
        ++mapCalculated.m_Tree.m_NumElements;
      }
      else
      {
        CUtlLinkedList<int,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<int,unsigned short>,unsigned short>>::InsertBefore(
          &listNeedsCalculation,
          0xFFFFu,
          &iAbilityIndex);
      }
    }
    m_Head = listNeedsCalculation.m_Head;
  }
  CUtlLinkedList<int,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<int,unsigned short>,unsigned short>>::RemoveAll(&listNeedsCalculation);
  CUtlMemory<UtlLinkedListElem_t<int,unsigned short>,unsigned short>::Purge(&listNeedsCalculation.m_Memory);
  index = mapCalculated.m_Tree.m_LastAlloc.index;
  if ( mapCalculated.m_Tree.m_LastAlloc.index != 0xFFFF )
  {
    m_nAllocationCount = mapCalculated.m_Tree.m_Elements.m_nAllocationCount;
    v18 = 0;
    v19 = 0;
    if ( mapCalculated.m_Tree.m_Elements.m_nAllocationCount > 0 )
    {
      do
      {
        if ( v19 < m_nAllocationCount && index >= v19 && v19 != mapCalculated.m_Tree.m_Elements.m_pMemory[v18].m_Left )
        {
          mapCalculated.m_Tree.m_Elements.m_pMemory[v18].m_Right = mapCalculated.m_Tree.m_FirstFree;
          mapCalculated.m_Tree.m_Elements.m_pMemory[v18].m_Left = v19;
          index = mapCalculated.m_Tree.m_LastAlloc.index;
          mapCalculated.m_Tree.m_FirstFree = v19;
        }
        if ( index == v19 )
          break;
        m_nAllocationCount = mapCalculated.m_Tree.m_Elements.m_nAllocationCount;
        if ( (v19 + 1) >= mapCalculated.m_Tree.m_Elements.m_nAllocationCount )
          break;
        ++v19;
        ++v18;
      }
      while ( v19 != 0xFFFF );
    }
    mapCalculated.m_Tree.m_Root = -1;
    mapCalculated.m_Tree.m_NumElements = 0;
  }
  mapCalculated.m_Tree.m_FirstFree = -1;
  if ( (mapCalculated.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<DOTAAbilityData_t *,bool,unsigned short,bool (*)(DOTAAbilityData_t * const&,DOTAAbilityData_t * const&)>::Node_t,unsigned short>,unsigned short>::Purge(&mapCalculated.m_Tree.m_Elements);
    mapCalculated.m_Tree.m_LastAlloc.index = -1;
    if ( (mapCalculated.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<DOTAAbilityData_t *,bool,unsigned short,bool (*)(DOTAAbilityData_t * const&,DOTAAbilityData_t * const&)>::Node_t,unsigned short>,unsigned short>::Purge(&mapCalculated.m_Tree.m_Elements);
  }
}


// CDOTAGameManager::ResetEnabledHeroes  (line 1230, @0x00000000025367a0, libserver.so)  // inlines: Get, GetBool, GetInt, HKeySymbol, NetworkStateChanged, Set, operator CEntityInstance*
// calls: CDOTAGameManager::GetHeroDataByHeroID, KeyValues::FindKey, CKeyValues_Data::Internal_GetInt, IsAppDota2Main
// callers: CDOTAGameManager::SetupGameKeyValues, CDOTAGamerules::GameInit
void __fastcall CDOTAGameManager::ResetEnabledHeroes(CDOTAGameManager *const this, int iMode)
{
  CUtlScratchMemoryPool *p_m_BaseMemPool; // r14
  CDOTAGameManager *v5; // rbx
  CEntityInstance *m_pObj; // rdi
  unsigned int v7; // r13d
  KeyValues *HeroDataByHeroID; // rax
  KeyValues *Key; // rax
  CEntityInstance *v10; // rdi
  bool v11; // zf
  CEntityInstance *v12; // rdi

  p_m_BaseMemPool = &this->m_BaseMemPool;
  v5 = this;
  do
  {
    while ( 1 )
    {
      v7 = v5 - this;
      HeroDataByHeroID = CDOTAGameManager::GetHeroDataByHeroID(this, v5 - this);
      if ( HeroDataByHeroID != 0 )
      {
        Key = KeyValues::FindKey(HeroDataByHeroID, this->m_hKvSymbols[2]);
        if ( Key != 0 && CKeyValues_Data::Internal_GetInt(Key) != 0
          || IsAppDota2Main() && dota_debug_game_internal.m_pParent->m_Value.m_nValue != 0 )
        {
          if ( iMode != 0 )
            break;
          if ( !v5->m_CurrentHeroAvailable.m_Value[0] )
          {
            m_pObj = this->__m_pChainEntity.m_pObj;
            if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 )
              (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 1688, v7, this->__m_pChainEntity.m_PathIndex.m_Value);
            v5->m_CurrentHeroAvailable.m_Value[0] = 1;
          }
LABEL_7:
          if ( v5->m_CulledHeroes.m_Value[0] )
            goto LABEL_19;
        }
      }
LABEL_8:
      v5 = (v5 + 1);
      if ( v5 == p_m_BaseMemPool )
        return;
    }
    if ( iMode != 1 || v5->m_StableHeroAvailable.m_Value[0] )
      goto LABEL_7;
    v10 = this->__m_pChainEntity.m_pObj;
    if ( v10 != 0 && (v10->m_pEntity->m_flags & 0x400) == 0 )
      (*(v10->_vptr_IHandleEntity + 22))(v10, 1560, v7, this->__m_pChainEntity.m_PathIndex.m_Value);
    v11 = !v5->m_CulledHeroes.m_Value[0];
    v5->m_StableHeroAvailable.m_Value[0] = 1;
    if ( v11 )
      goto LABEL_8;
LABEL_19:
    v12 = this->__m_pChainEntity.m_pObj;
    if ( v12 != 0 && (v12->m_pEntity->m_flags & 0x400) == 0 )
      (*(v12->_vptr_IHandleEntity + 22))(v12, 1816, v7, this->__m_pChainEntity.m_PathIndex.m_Value);
    v5->m_CulledHeroes.m_Value[0] = 0;
    v5 = (v5 + 1);
  }
  while ( v5 != p_m_BaseMemPool );
}


// CDOTAGameManager::ResetLowViolenceHeroes  (line 1257, @0x000000000253a110, libserver.so)  // inlines: Get, GetBool, GetCurrentMode, NetworkStateChanged, Set, SetBool, operator CEntityInstance*
// calls: IsStableMode, CDOTAGameManager::GetHeroDataByHeroID, KeyValues::GetInt, KeyValues::SetInt
void __fastcall CDOTAGameManager::ResetLowViolenceHeroes(CDOTAGameManager *const this)
{
  CUtlScratchMemoryPool *p_m_BaseMemPool; // r14
  CDOTAGameManager *v3; // rbx
  unsigned int v4; // r13d
  KeyValues *HeroDataByHeroID; // rax
  KeyValues *v6; // r15
  CEntityInstance *v7; // rdi
  CEntityInstance *v8; // rdi
  CEntityInstance *m_pObj; // rdi
  bool v10; // [rsp+Fh] [rbp-31h]

  p_m_BaseMemPool = &this->m_BaseMemPool;
  v3 = this;
  v10 = IsStableMode();
  do
  {
    while ( 1 )
    {
      v4 = v3 - this;
      HeroDataByHeroID = CDOTAGameManager::GetHeroDataByHeroID(this, v3 - this);
      v6 = HeroDataByHeroID;
      if ( HeroDataByHeroID != 0 && KeyValues::GetInt(HeroDataByHeroID, "LowViolence", 0) != 0 )
      {
        KeyValues::SetInt(v6, "Enabled", 0);
        if ( v10 )
        {
          if ( v3->m_StableHeroAvailable.m_Value[0] )
          {
            m_pObj = this->__m_pChainEntity.m_pObj;
            if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 )
              (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 1560, v4, this->__m_pChainEntity.m_PathIndex.m_Value);
            v3->m_StableHeroAvailable.m_Value[0] = 0;
          }
        }
        else if ( v3->m_CurrentHeroAvailable.m_Value[0] )
        {
          v8 = this->__m_pChainEntity.m_pObj;
          if ( v8 != 0 && (v8->m_pEntity->m_flags & 0x400) == 0 )
            (*(v8->_vptr_IHandleEntity + 22))(v8, 1688, v4, this->__m_pChainEntity.m_PathIndex.m_Value);
          v3->m_CurrentHeroAvailable.m_Value[0] = 0;
        }
        if ( !v3->m_CulledHeroes.m_Value[0] )
          break;
      }
      v3 = (v3 + 1);
      if ( v3 == p_m_BaseMemPool )
        return;
    }
    v7 = this->__m_pChainEntity.m_pObj;
    if ( v7 != 0 && (v7->m_pEntity->m_flags & 0x400) == 0 )
      (*(v7->_vptr_IHandleEntity + 22))(v7, 1816, v4, this->__m_pChainEntity.m_PathIndex.m_Value);
    v3->m_CulledHeroes.m_Value[0] = 1;
    v3 = (v3 + 1);
  }
  while ( v3 != p_m_BaseMemPool );
}


// CDOTAGameManager::GetUnitTableIndex  (line 1286, @0x00000000024f1090, libserver.so)  // inlines: Find, IsAddOnGame
// calls: CUtlRBTree<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Find
// callers: CDOTA_BaseNPC::SetUnitName
int __fastcall CDOTAGameManager::GetUnitTableIndex(CDOTAGameManager *const this, const char *pUnitName)
{
  CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t search; // [rsp+0h] [rbp-10h] BYREF

  if ( this->m_bCustomGame || this->m_bEventGame )
  {
    if ( pUnitName != 0 )
    {
      search.key = pUnitName;
      return CUtlRBTree<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Find(
               &this->m_AddOnUnitNames.m_Elements.m_Tree,
               &search);
    }
  }
  else if ( pUnitName != 0 )
  {
    search.key = pUnitName;
    return CUtlRBTree<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Find(
             &this->m_UnitNames.m_Elements.m_Tree,
             &search);
  }
  return -1;
}


// CDOTAGameManager::GetUnitTableNameByIndex  (line 1302, @0x00000000024c3370, libserver.so)  // inlines: GetElementName, IsAddOnGame, IsIdxValid, IsValidIndex, LeftChild, operator[]
const char *__fastcall CDOTAGameManager::GetUnitTableNameByIndex(CDOTAGameManager *const this, int nIndex)
{
  const char *result; // rax
  UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v3; // rdx

  if ( this->m_bCustomGame || this->m_bEventGame )
  {
    if ( nIndex >= 0LL )
    {
      result = 0;
      if ( nIndex >= this->m_AddOnUnitNames.m_Elements.m_Tree.m_Elements.m_nAllocationCount )
        return result;
      if ( nIndex > this->m_AddOnUnitNames.m_Elements.m_Tree.m_LastAlloc.index )
        return result;
      if ( nIndex == -1 )
        return result;
      v3 = &this->m_AddOnUnitNames.m_Elements.m_Tree.m_Elements.m_pMemory[nIndex];
      if ( nIndex == v3->m_Left )
        return result;
      return v3->m_Data.key;
    }
    return 0;
  }
  if ( nIndex < 0LL )
    return 0;
  result = 0;
  if ( nIndex < this->m_UnitNames.m_Elements.m_Tree.m_Elements.m_nAllocationCount
    && nIndex <= this->m_UnitNames.m_Elements.m_Tree.m_LastAlloc.index
    && nIndex != -1 )
  {
    v3 = &this->m_UnitNames.m_Elements.m_Tree.m_Elements.m_pMemory[nIndex];
    if ( nIndex != v3->m_Left )
      return v3->m_Data.key;
  }
  return result;
}


// CDOTAGameManager::GetAbilityIndex  (line 1324, @0x00000000024dee60, libserver.so)  // inlines: Find, IsAddOnGame, V_strlen, operator=, operator==
// calls: strlen, CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul>::Find, CUtlRBTree<CUtlMap<CUtlSymbolLarge, KeyValues*, short unsigned int>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, KeyValues*, short unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, KeyValues*, short unsigned int>::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CDOTABaseAbility::OnAbilityPinged, CDOTA_Ability_DataDriven::LookupModifierCreateParameters, CDOTA_CombatLog::SendKillCamInformation, CDOTAGameManager::GetAbilityByName, CDOTAGameManager::GetAbilityDataByName, CDOTAGamerules::GetItemStockCount, CDOTAGamerules::GetItemStockTime, CDOTAGamerules::GetItemStockDuration, CDOTAGamerules::RemoveItemStockInfo, CDOTAGamerules::IncreaseItemStock, CDOTAGamerules::ReduceItemStock, CDOTAGamerules::ClientMsg_EnemyItemAlert (18 total)
unsigned __int16 __fastcall CDOTAGameManager::GetAbilityIndex(CDOTAGameManager *const this, const char *pszAbilityName)
{
  CUtlSymbolTableLarge *p_m_AbilityNameTable; // r13
  int v5; // ecx
  unsigned __int16 result; // ax
  int v7; // ecx
  CUtlSymbolLarge symName; // [rsp+0h] [rbp-40h] BYREF
  CUtlMap<CUtlSymbolLarge,KeyValues*,short unsigned int,bool (*)(const CUtlSymbolLarge&,const CUtlSymbolLarge&)>::Node_t search; // [rsp+10h] [rbp-30h] BYREF

  if ( *&this->m_bCustomGame != 0 )
  {
    v7 = 0;
    if ( pszAbilityName != 0 )
      v7 = strlen(pszAbilityName);
    CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::Find(
      &symName,
      &this->m_AddOnAbilityNameTable,
      pszAbilityName,
      v7);
    result = -1;
    if ( symName.u.m_Id != 0 )
    {
      search.key = symName;
      return CUtlRBTree<CUtlMap<CUtlSymbolLarge,KeyValues *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,KeyValues *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,KeyValues *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::Find(
               &this->m_AddOnAbilitiesDict.m_Tree,
               &search);
    }
  }
  else
  {
    p_m_AbilityNameTable = &this->m_AbilityNameTable;
    v5 = 0;
    if ( pszAbilityName != 0 )
      v5 = strlen(pszAbilityName);
    CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::Find(
      &symName,
      p_m_AbilityNameTable,
      pszAbilityName,
      v5);
    result = -1;
    if ( symName.u.m_Id != 0 )
    {
      search.key = symName;
      return CUtlRBTree<CUtlMap<CUtlSymbolLarge,KeyValues *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,KeyValues *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,KeyValues *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::Find(
               &this->m_AbilitiesDict.m_Tree,
               &search);
    }
  }
  return result;
}


// CDOTAGameManager::IsValidAbilityIndex  (line 1348, @0x00000000024c3410, libserver.so)  // inlines: IsAddOnGame, IsIdxValid, IsValidIndex, LeftChild
bool __fastcall CDOTAGameManager::IsValidAbilityIndex(CDOTAGameManager *const this, unsigned __int16 nIndex)
{
  bool result; // al
  unsigned __int16 m_Left; // ax

  if ( this->m_bCustomGame || (result = this->m_bEventGame) )
  {
    result = 0;
    if ( nIndex < this->m_AddOnAbilitiesDict.m_Tree.m_Elements.m_nAllocationCount
      && nIndex <= this->m_AddOnAbilitiesDict.m_Tree.m_LastAlloc.index )
    {
      m_Left = nIndex;
      if ( nIndex != 0xFFFF )
        m_Left = this->m_AddOnAbilitiesDict.m_Tree.m_Elements.m_pMemory[nIndex].m_Left;
      return nIndex != m_Left;
    }
  }
  else if ( nIndex < this->m_AbilitiesDict.m_Tree.m_Elements.m_nAllocationCount
         && nIndex <= this->m_AbilitiesDict.m_Tree.m_LastAlloc.index )
  {
    m_Left = nIndex;
    if ( nIndex != 0xFFFF )
      return nIndex != this->m_AbilitiesDict.m_Tree.m_Elements.m_pMemory[nIndex].m_Left;
    return nIndex != m_Left;
  }
  return result;
}


// CDOTAGameManager::GetNumAbilityData  (line 1363, @0x00000000024c34b0, libserver.so)
int __fastcall CDOTAGameManager::GetNumAbilityData(CDOTAGameManager *const this)
{
  return this->m_AbilitiesDataDict.m_Tree.m_NumElements;
}


// CDOTAGameManager::GetInvalidAbilityIndex  (line 1371, @0x00000000024c34c0, libserver.so)
// callers: CDOTA_CombatLog::SendKillCamInformation
unsigned __int16 __fastcall CDOTAGameManager::GetInvalidAbilityIndex(const CDOTAGameManager *const this)
{
  return -1;
}


// CDOTAGameManager::GetAbilityByIndex  (line 1380, @0x00000000024c34d0, libserver.so)  // inlines: IsAddOnGame, IsIdxValid, IsValidIndex, LeftChild, operator[]
KeyValues *__fastcall CDOTAGameManager::GetAbilityByIndex(CDOTAGameManager *const this, unsigned __int16 nIndex)
{
  KeyValues *result; // rax
  UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,KeyValues*,short unsigned int>::Node_t,short unsigned int> *v3; // rdx

  if ( this->m_bCustomGame || this->m_bEventGame )
  {
    result = 0;
    if ( nIndex >= this->m_AddOnAbilitiesDict.m_Tree.m_Elements.m_nAllocationCount )
      return result;
    if ( nIndex > this->m_AddOnAbilitiesDict.m_Tree.m_LastAlloc.index )
      return result;
    if ( nIndex == 0xFFFF )
      return result;
    v3 = &this->m_AddOnAbilitiesDict.m_Tree.m_Elements.m_pMemory[nIndex];
    if ( nIndex == v3->m_Left )
      return result;
    return v3->m_Data.elem;
  }
  result = 0;
  if ( nIndex < this->m_AbilitiesDict.m_Tree.m_Elements.m_nAllocationCount
    && nIndex <= this->m_AbilitiesDict.m_Tree.m_LastAlloc.index
    && nIndex != 0xFFFF )
  {
    v3 = &this->m_AbilitiesDict.m_Tree.m_Elements.m_pMemory[nIndex];
    if ( nIndex != v3->m_Left )
      return v3->m_Data.elem;
  }
  return result;
}


// CDOTAGameManager::GetAbilityByName  (line 1402, @0x00000000024def40, libserver.so)  // inlines: Element, IsAddOnGame, operator[]
// calls: CDOTAGameManager::GetAbilityIndex
// callers: DOTA_CreateAbility, CDOTAGamerules::AddItemToWhiteList, CDOTAGamerules::RemoveItemFromWhiteList, CDOTAGamerules::IsItemInWhiteList, CDOTAGameManager::SetupSingleItemCombine, GetClassNameForItemName, CDOTA_Item::GetMaxLevel, CDOTA_Item::GetItemID, CDOTA_Item::OnlyPurchasableAtSecretShop, CDOTA_Item::PurchasableAtSecretShop, CDOTA_Item::PurchasableAtSideShop, CDOTA_Item::GetWorldDropSound (20 total)
KeyValues *__fastcall CDOTAGameManager::GetAbilityByName(CDOTAGameManager *const this, const char *pszAbilityName)
{
  unsigned __int16 AbilityIndex; // ax
  unsigned __int16 v5; // ax

  if ( this->m_bCustomGame || this->m_bEventGame )
  {
    AbilityIndex = CDOTAGameManager::GetAbilityIndex(this, pszAbilityName);
    if ( AbilityIndex != 0xFFFF )
      return this->m_AddOnAbilitiesDict.m_Tree.m_Elements.m_pMemory[AbilityIndex].m_Data.elem;
  }
  else
  {
    v5 = CDOTAGameManager::GetAbilityIndex(this, pszAbilityName);
    if ( v5 != 0xFFFF )
      return this->m_AbilitiesDict.m_Tree.m_Elements.m_pMemory[v5].m_Data.elem;
  }
  return 0;
}


// CDOTAGameManager::GetAbilityDataByIndex  (line 1426, @0x00000000024c3570, libserver.so)  // inlines: IsAddOnGame, IsIdxValid, IsValidIndex, LeftChild, operator[]
// callers: CDOTA_Modifier_DataDriven::GetAbilityKeyValues, CDOTA_BaseNPC::CreateAbilities
DOTAAbilityData_t *__fastcall CDOTAGameManager::GetAbilityDataByIndex(
        CDOTAGameManager *const this,
        unsigned __int16 nIndex)
{
  DOTAAbilityData_t *result; // rax
  UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t*,short unsigned int>::Node_t,short unsigned int> *v3; // rdx

  if ( this->m_bCustomGame || this->m_bEventGame )
  {
    result = 0;
    if ( nIndex >= this->m_AddOnAbilitiesDataDict.m_Tree.m_Elements.m_nAllocationCount )
      return result;
    if ( nIndex > this->m_AddOnAbilitiesDataDict.m_Tree.m_LastAlloc.index )
      return result;
    if ( nIndex == 0xFFFF )
      return result;
    v3 = &this->m_AddOnAbilitiesDataDict.m_Tree.m_Elements.m_pMemory[nIndex];
    if ( nIndex == v3->m_Left )
      return result;
    return v3->m_Data.elem;
  }
  result = 0;
  if ( nIndex < this->m_AbilitiesDataDict.m_Tree.m_Elements.m_nAllocationCount
    && nIndex <= this->m_AbilitiesDataDict.m_Tree.m_LastAlloc.index
    && nIndex != 0xFFFF )
  {
    v3 = &this->m_AbilitiesDataDict.m_Tree.m_Elements.m_pMemory[nIndex];
    if ( nIndex != v3->m_Left )
      return v3->m_Data.elem;
  }
  return result;
}


// CDOTAGameManager::GetAbilityDataByID  (line 1447, @0x00000000024c3610, libserver.so)  // inlines: IsAddOnGame, IsIdxValid, IsValidIndex, LeftChild
// callers: CDOTA_BaseNPC_Hero::DumpItemAbilityHistory, CDOTAGCServerSystem::FillMatchDetailsForTeam
DOTAAbilityData_t *__fastcall CDOTAGameManager::GetAbilityDataByID(CDOTAGameManager *const this, int nAbilityID)
{
  int v2; // r8d
  __int64 v3; // rcx
  int v4; // edx
  UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t*,short unsigned int>::Node_t,short unsigned int> *v5; // rax
  DOTAAbilityData_t *result; // rax
  int m_nAllocationCount; // r8d
  __int64 v8; // rcx
  int v9; // edx
  UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t*,short unsigned int>::Node_t,short unsigned int> *m_pMemory; // rax

  if ( !this->m_bCustomGame && !this->m_bEventGame )
  {
    m_nAllocationCount = this->m_AbilitiesDataDict.m_Tree.m_Elements.m_nAllocationCount;
    v8 = 0;
    v9 = 0;
    if ( m_nAllocationCount != 0 )
    {
      while ( 1 )
      {
        if ( m_nAllocationCount > v9 && v9 <= this->m_AbilitiesDataDict.m_Tree.m_LastAlloc.index )
        {
          m_pMemory = this->m_AbilitiesDataDict.m_Tree.m_Elements.m_pMemory;
          if ( m_pMemory[v9].m_Left != v9 )
          {
            result = m_pMemory[v8].m_Data.elem;
            if ( nAbilityID == result->m_iAbilityID )
              break;
          }
        }
        ++v9;
        ++v8;
        if ( v9 == m_nAllocationCount )
          return 0;
      }
      return result;
    }
    return 0;
  }
  v2 = this->m_AddOnAbilitiesDataDict.m_Tree.m_Elements.m_nAllocationCount;
  v3 = 0;
  v4 = 0;
  if ( v2 == 0 )
    return 0;
  while ( 1 )
  {
    if ( v4 < v2 && v4 <= this->m_AddOnAbilitiesDataDict.m_Tree.m_LastAlloc.index )
    {
      v5 = this->m_AddOnAbilitiesDataDict.m_Tree.m_Elements.m_pMemory;
      if ( v5[v4].m_Left != v4 )
      {
        result = v5[v3].m_Data.elem;
        if ( result->m_iAbilityID == nAbilityID )
          break;
      }
    }
    ++v4;
    ++v3;
    if ( v4 == v2 )
      return 0;
  }
  return result;
}


// CDOTAGameManager::GetAbilityDataByItemID  (line 1471, @0x00000000024c36e0, libserver.so)  // inlines: IsAddOnGame, IsIdxValid, IsValidIndex, LeftChild
// callers: GetItemNameFromEventBlock, GenerateChallengeVariableString, CDOTA_BaseNPC_Hero::DumpItemAbilityHistory
DOTAAbilityData_t *__fastcall CDOTAGameManager::GetAbilityDataByItemID(CDOTAGameManager *const this, int nItemID)
{
  int v2; // r8d
  __int64 v3; // rcx
  int v4; // edx
  UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t*,short unsigned int>::Node_t,short unsigned int> *v5; // rax
  DOTAAbilityData_t *result; // rax
  int m_nAllocationCount; // r8d
  __int64 v8; // rcx
  int v9; // edx
  UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t*,short unsigned int>::Node_t,short unsigned int> *m_pMemory; // rax

  if ( !this->m_bCustomGame && !this->m_bEventGame )
  {
    m_nAllocationCount = this->m_AbilitiesDataDict.m_Tree.m_Elements.m_nAllocationCount;
    v8 = 0;
    v9 = 0;
    if ( m_nAllocationCount != 0 )
    {
      while ( 1 )
      {
        if ( m_nAllocationCount > v9 && v9 <= this->m_AbilitiesDataDict.m_Tree.m_LastAlloc.index )
        {
          m_pMemory = this->m_AbilitiesDataDict.m_Tree.m_Elements.m_pMemory;
          if ( m_pMemory[v9].m_Left != v9 )
          {
            result = m_pMemory[v8].m_Data.elem;
            if ( nItemID == result->m_iItemID )
              break;
          }
        }
        ++v9;
        ++v8;
        if ( v9 == m_nAllocationCount )
          return 0;
      }
      return result;
    }
    return 0;
  }
  v2 = this->m_AddOnAbilitiesDataDict.m_Tree.m_Elements.m_nAllocationCount;
  v3 = 0;
  v4 = 0;
  if ( v2 == 0 )
    return 0;
  while ( 1 )
  {
    if ( v4 < v2 && v4 <= this->m_AddOnAbilitiesDataDict.m_Tree.m_LastAlloc.index )
    {
      v5 = this->m_AddOnAbilitiesDataDict.m_Tree.m_Elements.m_pMemory;
      if ( v5[v4].m_Left != v4 )
      {
        result = v5[v3].m_Data.elem;
        if ( result->m_iItemID == nItemID )
          break;
      }
    }
    ++v4;
    ++v3;
    if ( v4 == v2 )
      return 0;
  }
  return result;
}


// CDOTAGameManager::GetAbilityDataByName  (line 1495, @0x00000000024df1a0, libserver.so)  // inlines: Element, IsAddOnGame, operator[]
// calls: CDOTAGameManager::GetAbilityIndex
// callers: CDOTABaseAbility::LoadAbilityData, CDOTAGamerules::ABILITYDRAFT_ExtractAbilitiesFromHero, CDOTAGameManager::SetupSingleItemCombine, CDOTA_Item::OnPurchase, CDotaSubquestBuyItems::Spawn, CDOTA_Tutorial::ParseLessonKeys, CDOTA_UnitInventory::SellItem, CDOTA_BaseNPC::AttemptToPurchaseItem, CDOTA_Item_Ward_Dispenser::GetCost
DOTAAbilityData_t *__fastcall CDOTAGameManager::GetAbilityDataByName(
        CDOTAGameManager *const this,
        const char *pszAbilityName)
{
  unsigned __int16 AbilityIndex; // ax
  unsigned __int16 v5; // ax

  if ( this->m_bCustomGame || this->m_bEventGame )
  {
    AbilityIndex = CDOTAGameManager::GetAbilityIndex(this, pszAbilityName);
    if ( AbilityIndex != 0xFFFF )
      return this->m_AddOnAbilitiesDataDict.m_Tree.m_Elements.m_pMemory[AbilityIndex].m_Data.elem;
  }
  else
  {
    v5 = CDOTAGameManager::GetAbilityIndex(this, pszAbilityName);
    if ( v5 != 0xFFFF )
      return this->m_AbilitiesDataDict.m_Tree.m_Elements.m_pMemory[v5].m_Data.elem;
  }
  return 0;
}


// CDOTAGameManager::DestroyGameKeyValues  (line 1569, @0x00000000024f19f0, libserver.so)  // inlines: Destruct<DOTAAbilityData_t>, IsIdxValid, IsValidIndex, LeftChild, Purge, PurgeAndDeleteElements, RemoveAll
// calls: CUtlDict<int, int>::Purge, CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int, CTreeEntryLess<CNonThreadsafeTree<false>, false>, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int> >::Purge, CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false>::StringPool_t*, int>::Purge, CUtlRBTree<CUtlMap<CUtlSymbolLarge, KeyValues*, short unsigned int>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, KeyValues*, short unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, KeyValues*, short unsigned int>::Node_t, short unsigned int>, short unsigned int> >::PurgeAndDeleteElements, DOTAAbilityData_t::~DOTAAbilityData_t, CUtlRBTree<CUtlMap<CUtlSymbolLarge, DOTAAbilityData_t*, short unsigned int>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, DOTAAbilityData_t*, short unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, DOTAAbilityData_t*, short unsigned int>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlHashtable<short unsigned int, int, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, int>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<short unsigned int, int>, int>::Purge, CUtlHashtable<int, short unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, short unsigned int>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<int, short unsigned int>, int>::Purge, CVarBitVecBase<int, 32>::Resize, CUtlMemory<CUtlHashMapLarge<int, KeyValues*>::HashBucket_t, int>::Purge (21 total)
// callers: CDOTAGameManager::DestroyKeyValuesFiles, CDOTAGameManager::ReloadGameKeyValues, CDOTAGameManager::InitAddOnGame, CDOTAGameManager::OnAddonListChanged
// globals: sm_PortraitSymbolTable
void __fastcall CDOTAGameManager::DestroyGameKeyValues(CDOTAGameManager *const this)
{
  __int64 v2; // r13
  int v3; // r12d
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *v4; // rsi
  bool v5; // zf
  __int64 v6; // r13
  int v7; // r12d
  int m_nAllocationCount; // eax
  UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t*,short unsigned int>::Node_t,short unsigned int> *m_pMemory; // rcx
  __int64 v10; // r13
  int v11; // r12d
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *v12; // rsi

  if ( this->m_pkvHeroes != 0 )
  {
    (*(*g_pKeyValueCache + 112LL))(g_pKeyValueCache);
    this->m_pkvHeroes = 0;
  }
  if ( this->m_pkvUnits != 0 )
  {
    (*(*g_pKeyValueCache + 112LL))(g_pKeyValueCache);
    this->m_pkvUnits = 0;
  }
  if ( this->m_pkvAbilities != 0 )
  {
    (*(*g_pKeyValueCache + 112LL))(g_pKeyValueCache);
    this->m_pkvAbilities = 0;
  }
  CUtlDict<int,int>::Purge(&this->m_UnitNames);
  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::Purge(&this->m_AbilityNameTable.m_Lookup);
  if ( this->m_AbilityNameTable.m_StringPools.m_Size > 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      ++v3;
      v4 = this->m_AbilityNameTable.m_StringPools.m_Memory.m_pMemory[v2++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v4);
    }
    while ( v3 < this->m_AbilityNameTable.m_StringPools.m_Size );
  }
  v5 = (this->m_AbilityNameTable.m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_AbilityNameTable.m_StringPools.m_Size = 0;
  if ( v5 )
    CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Purge(&this->m_AbilityNameTable.m_StringPools.m_Memory);
  v6 = 0;
  v7 = 0;
  CUtlRBTree<CUtlMap<CUtlSymbolLarge,KeyValues *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,KeyValues *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,KeyValues *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::PurgeAndDeleteElements(&this->m_AbilitiesDict.m_Tree);
  m_nAllocationCount = this->m_AbilitiesDataDict.m_Tree.m_Elements.m_nAllocationCount;
  if ( m_nAllocationCount != 0 )
  {
    do
    {
      if ( m_nAllocationCount > v7 && v7 <= this->m_AbilitiesDataDict.m_Tree.m_LastAlloc.index )
      {
        m_pMemory = this->m_AbilitiesDataDict.m_Tree.m_Elements.m_pMemory;
        if ( m_pMemory[v7].m_Left != v7 )
        {
          DOTAAbilityData_t::~DOTAAbilityData_t(m_pMemory[v6].m_Data.elem);
          m_nAllocationCount = this->m_AbilitiesDataDict.m_Tree.m_Elements.m_nAllocationCount;
        }
      }
      ++v7;
      ++v6;
    }
    while ( m_nAllocationCount > v7 );
  }
  CUtlRBTree<CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_AbilitiesDataDict.m_Tree);
  CUtlHashtable<unsigned short,int,DefaultHashFunctor<unsigned short>,DefaultEqualFunctor<unsigned short>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned short,int>,int>>::RemoveAll(&this->m_AbilitiesIndexToIDMap);
  if ( (this->m_AbilitiesIndexToIDMap.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned short,int>,int>::Purge(&this->m_AbilitiesIndexToIDMap.m_table);
  CUtlHashtable<int,unsigned short,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,unsigned short>,int>>::RemoveAll(&this->m_AbilitiesIDToIndexMap);
  if ( (this->m_AbilitiesIDToIndexMap.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<int,unsigned short>,int>::Purge(&this->m_AbilitiesIDToIndexMap.m_table);
  this->m_mapAbilitiesByID.m_cElements = 0;
  this->m_mapAbilitiesByID.m_nMaxElement = 0;
  this->m_mapAbilitiesByID.m_iNodeFreeListHead = -1;
  this->m_mapAbilitiesByID.m_nMinRehashedBucket = -1;
  this->m_mapAbilitiesByID.m_nMaxRehashedBucket = -1;
  CVarBitVecBase<int,32>::Resize(&this->m_mapAbilitiesByID.m_bitsMigratedBuckets, 0, 0);
  if ( (this->m_mapAbilitiesByID.m_memNodes.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashMapLarge<int,KeyValues *,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::Node_t,int>::Purge(&this->m_mapAbilitiesByID.m_memNodes);
  v5 = (this->m_mapAbilitiesByID.m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapAbilitiesByID.m_vecHashBuckets.m_Size = 0;
  if ( v5 )
    CUtlMemory<CUtlHashMapLarge<int,KeyValues *,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::HashBucket_t,int>::Purge(&this->m_mapAbilitiesByID.m_vecHashBuckets.m_Memory);
  this->m_mapHeroesByID.m_cElements = 0;
  this->m_mapHeroesByID.m_nMaxElement = 0;
  this->m_mapHeroesByID.m_iNodeFreeListHead = -1;
  this->m_mapHeroesByID.m_nMinRehashedBucket = -1;
  this->m_mapHeroesByID.m_nMaxRehashedBucket = -1;
  CVarBitVecBase<int,32>::Resize(&this->m_mapHeroesByID.m_bitsMigratedBuckets, 0, 0);
  if ( (this->m_mapHeroesByID.m_memNodes.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::Node_t,int>::Purge(&this->m_mapHeroesByID.m_memNodes);
  v5 = (this->m_mapHeroesByID.m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapHeroesByID.m_vecHashBuckets.m_Size = 0;
  if ( v5 )
    CUtlMemory<CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int>>::HashBucket_t,int>::Purge(&this->m_mapHeroesByID.m_vecHashBuckets.m_Memory);
  v5 = (this->m_ServerPortraitInfo.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_nHighestHeroID = 0;
  this->m_ServerPortraitInfo.m_Vector.m_Size = 0;
  if ( v5 )
    CUtlMemory<CUtlSymbolLarge,int>::Purge(&this->m_ServerPortraitInfo.m_Vector.m_Memory);
  CUtlSymbolTable::RemoveAll(&this->m_ServerPortraitInfo.m_SymbolTable);
  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::Purge(&sm_PortraitSymbolTable.m_Lookup);
  if ( sm_PortraitSymbolTable.m_StringPools.m_Size > 0 )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      ++v11;
      v12 = sm_PortraitSymbolTable.m_StringPools.m_Memory.m_pMemory[v10++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v12);
    }
    while ( v11 < sm_PortraitSymbolTable.m_StringPools.m_Size );
  }
  sm_PortraitSymbolTable.m_StringPools.m_Size = 0;
  if ( (sm_PortraitSymbolTable.m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>::Purge(&sm_PortraitSymbolTable.m_StringPools.m_Memory);
  CUtlScratchMemoryPool::FreeAll(&this->m_BaseMemPool);
  CDOTAGameManager::DestroyAddOnGameKeyValues(this);
}


// CDOTAGameManager::DestroyAddOnGameKeyValues  (line 1630, @0x00000000024f1740, libserver.so)  // inlines: Destruct<DOTAAbilityData_t>, IsIdxValid, IsValidIndex, LeftChild, Purge, PurgeAndDeleteElements, RemoveAll
// calls: CUtlDict<int, int>::Purge, CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int, CTreeEntryLess<CNonThreadsafeTree<false>, false>, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int> >::Purge, CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false>::StringPool_t*, int>::Purge, CUtlRBTree<CUtlMap<CUtlSymbolLarge, KeyValues*, short unsigned int>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, KeyValues*, short unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, KeyValues*, short unsigned int>::Node_t, short unsigned int>, short unsigned int> >::PurgeAndDeleteElements, DOTAAbilityData_t::~DOTAAbilityData_t, CUtlRBTree<CUtlMap<CUtlSymbolLarge, DOTAAbilityData_t*, short unsigned int>::Node_t, short unsigned int, CUtlMap<CUtlSymbolLarge, DOTAAbilityData_t*, short unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge, DOTAAbilityData_t*, short unsigned int>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlHashtable<short unsigned int, int, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, int>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<short unsigned int, int>, int>::Purge, CUtlHashtable<int, short unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, short unsigned int>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<int, short unsigned int>, int>::Purge, CUtlScratchMemoryPool::FreeAll
// callers: CDOTAGameManager::ShutdownAddOnGame, CDOTAGameManager::ServerShutdown, CDOTAGameManager::LevelShutdown, CDOTAGameManager::DestroyGameKeyValues, CDOTAGameManager::DestroyKeyValuesFiles, CDOTAGameManager::SetupAddOnGameKeyValues
void __fastcall CDOTAGameManager::DestroyAddOnGameKeyValues(CDOTAGameManager *const this)
{
  __int64 v2; // r13
  int v3; // ebx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *v4; // rsi
  bool v5; // zf
  __int64 v6; // r13
  int v7; // ebx
  int m_nAllocationCount; // eax
  UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t*,short unsigned int>::Node_t,short unsigned int> *m_pMemory; // rcx

  if ( this->m_pkvAddOnHeroes != 0 )
  {
    (*(*g_pKeyValueCache + 112LL))(g_pKeyValueCache);
    this->m_pkvAddOnHeroes = 0;
  }
  if ( this->m_pkvAddOnAbilities != 0 )
  {
    (*(*g_pKeyValueCache + 112LL))(g_pKeyValueCache);
    this->m_pkvAddOnAbilities = 0;
  }
  if ( this->m_pkvAddOnUnits != 0 )
  {
    (*(*g_pKeyValueCache + 112LL))(g_pKeyValueCache);
    this->m_pkvAddOnUnits = 0;
  }
  if ( this->m_pAddonInfoKeyValues != 0 )
  {
    (*(*g_pKeyValueCache + 112LL))(g_pKeyValueCache);
    this->m_pAddonInfoKeyValues = 0;
  }
  CUtlDict<int,int>::Purge(&this->m_AddOnUnitNames);
  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<false>,false>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::Purge(&this->m_AddOnAbilityNameTable.m_Lookup);
  if ( this->m_AddOnAbilityNameTable.m_StringPools.m_Size > 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      ++v3;
      v4 = this->m_AddOnAbilityNameTable.m_StringPools.m_Memory.m_pMemory[v2++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v4);
    }
    while ( v3 < this->m_AddOnAbilityNameTable.m_StringPools.m_Size );
  }
  v5 = (this->m_AddOnAbilityNameTable.m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_AddOnAbilityNameTable.m_StringPools.m_Size = 0;
  if ( v5 )
    CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>,false,2048ul>::StringPool_t *,int>::Purge(&this->m_AddOnAbilityNameTable.m_StringPools.m_Memory);
  v6 = 0;
  v7 = 0;
  CUtlRBTree<CUtlMap<CUtlSymbolLarge,KeyValues *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,KeyValues *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,KeyValues *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::PurgeAndDeleteElements(&this->m_AddOnAbilitiesDict.m_Tree);
  m_nAllocationCount = this->m_AddOnAbilitiesDataDict.m_Tree.m_Elements.m_nAllocationCount;
  if ( m_nAllocationCount != 0 )
  {
    do
    {
      if ( v7 < m_nAllocationCount && v7 <= this->m_AddOnAbilitiesDataDict.m_Tree.m_LastAlloc.index )
      {
        m_pMemory = this->m_AddOnAbilitiesDataDict.m_Tree.m_Elements.m_pMemory;
        if ( m_pMemory[v7].m_Left != v7 )
        {
          DOTAAbilityData_t::~DOTAAbilityData_t(m_pMemory[v6].m_Data.elem);
          m_nAllocationCount = this->m_AddOnAbilitiesDataDict.m_Tree.m_Elements.m_nAllocationCount;
        }
      }
      ++v7;
      ++v6;
    }
    while ( m_nAllocationCount > v7 );
  }
  CUtlRBTree<CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short,CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlSymbolLarge,DOTAAbilityData_t *,unsigned short,bool (*)(CUtlSymbolLarge const&,CUtlSymbolLarge const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_AddOnAbilitiesDataDict.m_Tree);
  CUtlHashtable<unsigned short,int,DefaultHashFunctor<unsigned short>,DefaultEqualFunctor<unsigned short>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned short,int>,int>>::RemoveAll(&this->m_AddOnAbilitiesIndexToIDMap);
  if ( (this->m_AddOnAbilitiesIndexToIDMap.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned short,int>,int>::Purge(&this->m_AddOnAbilitiesIndexToIDMap.m_table);
  CUtlHashtable<int,unsigned short,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,unsigned short>,int>>::RemoveAll(&this->m_AddOnAbilitiesIDToIndexMap);
  if ( (this->m_AddOnAbilitiesIDToIndexMap.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<int,unsigned short>,int>::Purge(&this->m_AddOnAbilitiesIDToIndexMap.m_table);
  CUtlScratchMemoryPool::FreeAll(&this->m_AddOnMemPool);
}


// CDOTAGameManager::DestroyKeyValuesFiles  (line 1681, @0x00000000024f9620, libserver.so)  // inlines: Purge
// calls: CDOTAGameManager::DestroyGameKeyValues, CDOTAGameManager::DestroyAddOnGameKeyValues, CUtlRBTree<CUtlMap<unsigned int, KeyValues*>::Node_t, short unsigned int, CUtlMap<unsigned int, KeyValues*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, KeyValues*>::Node_t, short unsigned int>, short unsigned int> >::Purge, KeyValues::deleteThis, CUtlDict<char const*, int>::Purge
// callers: CDOTAGameManager::Shutdown, CDOTAGameManager::LoadKeyValuesFiles
void __fastcall CDOTAGameManager::DestroyKeyValuesFiles(CDOTAGameManager *const this)
{
  KeyValues *m_pCountryKeyValues; // rdi
  KeyValues *m_pSurveyQuestionData; // rdi

  CDOTAGameManager::DestroyGameKeyValues(this);
  CDOTAGameManager::DestroyAddOnGameKeyValues(this);
  if ( this->m_pPortraitsLightPreselects != 0 )
  {
    (*(*g_pKeyValueCache + 112LL))(g_pKeyValueCache);
    this->m_pPortraitsLightPreselects = 0;
  }
  if ( this->m_pAnimationStatues != 0 )
  {
    (*(*g_pKeyValueCache + 112LL))(g_pKeyValueCache);
    this->m_pAnimationStatues = 0;
  }
  if ( this->m_pRegionKeyValues != 0 )
  {
    (*(*g_pKeyValueCache + 112LL))(g_pKeyValueCache);
    this->m_pRegionKeyValues = 0;
    CUtlRBTree<CUtlMap<unsigned int,KeyValues *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,KeyValues *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,KeyValues *,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_mapRegionToKeyValues.m_Tree);
  }
  if ( this->m_pDivisionKeyValues != 0 )
  {
    (*(*g_pKeyValueCache + 112LL))(g_pKeyValueCache);
    this->m_pDivisionKeyValues = 0;
  }
  if ( this->m_pMatchGroupsKeyValues != 0 )
  {
    (*(*g_pKeyValueCache + 112LL))(g_pKeyValueCache);
    this->m_pMatchGroupsKeyValues = 0;
  }
  if ( this->m_pEmoticonsKeyValues != 0 )
  {
    (*(*g_pKeyValueCache + 112LL))(g_pKeyValueCache);
    this->m_pEmoticonsKeyValues = 0;
  }
  m_pCountryKeyValues = this->m_pCountryKeyValues;
  if ( m_pCountryKeyValues != 0 )
  {
    KeyValues::deleteThis(m_pCountryKeyValues);
    CUtlDict<char const*,int>::Purge(&this->m_CountryDict);
    this->m_pCountryKeyValues = 0;
  }
  m_pSurveyQuestionData = this->m_pSurveyQuestionData;
  if ( m_pSurveyQuestionData != 0 )
  {
    KeyValues::deleteThis(m_pSurveyQuestionData);
    this->m_pSurveyQuestionData = 0;
  }
  if ( this->m_pTutorialTipKeyValues != 0 )
  {
    (*(*g_pKeyValueCache + 112LL))(g_pKeyValueCache);
    this->m_pTutorialTipKeyValues = 0;
  }
  if ( this->m_pTutorialLessonKeyValues != 0 )
  {
    (*(*g_pKeyValueCache + 112LL))(g_pKeyValueCache);
    this->m_pTutorialLessonKeyValues = 0;
  }
}


// CDOTAGameManager::ReloadPortraitData  (line 1752, @0x00000000025336f0, libserver.so)  // inlines: AddMultipleToTail, AddString, AddToTail, CUtlSymbolLarge, CUtlSymbolLarge_Hash, Construct<CUtlSymbolLarge>, CopyConstruct<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true>::StringPool_t*>, Element, EnsureCount, FindPoolWithSpace, GetKeyValues, GrowMemory, GrowVector, HashStringFastCaseless, Insert, InsertMultipleBefore, IsAddOnGame, Purge, RemoveAll, ToSymbol, V_memcpy, V_strlen, memcpy, operator const UtlSymId_t, operator=, operator[]
// calls: CUtlMemory<CUtlSymbolLarge, int>::Purge, CUtlSymbolTable::RemoveAll, CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int, CTreeEntryLess<CNonThreadsafeTree<true>, true>, CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t*, long long int>, long long int> >::Purge, CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>, true>::StringPool_t*, int>::Purge, KeyValues::LoadTemporaryFromFile, KeyValues::GetFirstTrueSubKey, strlen, KeyValues::GetNextTrueSubKey, KeyValues::GetString, KeyValues::GetName, CUtlSymbolTable::AddString, CUtlMemory<CUtlSymbolLarge, int>::Grow (19 total)
// callers: CDOTAGameManager::SetupGameKeyValues
// strings: "scripts/npc/portraits.txt", "PortraitBackgroundTexture", "scripts/npc/portraits_staging.txt", "scripts/npc/portraits_custom.txt"
// globals: sm_PortraitSymbolTable
void __fastcall CDOTAGameManager::ReloadPortraitData(CDOTAGameManager *const this)
{
  bool v2; // zf
  __int64 v3; // r14
  int v4; // r12d
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *v5; // rsi
  IBaseFileSystem *v6; // rsi
  CTemporaryKeyValues *TemporaryFromFile; // rax
  KeyValues *FirstTrueSubKey; // r12
  int v9; // r8d
  char *m_String; // rax
  const char *String; // r13
  const char *Name; // rax
  __int64 v13; // r14
  __int64 m_Size; // rax
  int v15; // edx
  int v16; // r8d
  int m_nAllocationCount; // ecx
  __int64 v18; // rax
  int i; // edx
  CUtlSymbolLarge *v20; // rcx
  int v21; // r8d
  signed int v22; // r9d
  int v23; // ecx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t **v24; // rsi
  int m_SpaceUsed; // edi
  __int64 v26; // rsi
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *v27; // rax
  __int64 v28; // rdx
  int v29; // ecx
  __int64 v30; // rdx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t **v31; // rdx
  IBaseFileSystem *v32; // rsi
  CTemporaryKeyValues *v33; // rax
  KeyValues *NextTrueSubKey; // r12
  int v35; // r8d
  char *v36; // rax
  const char *v37; // r13
  const char *v38; // rax
  __int64 v39; // r14
  __int64 v40; // rax
  int v41; // edx
  int v42; // r8d
  int v43; // ecx
  __int64 v44; // rax
  int j; // edx
  CUtlSymbolLarge *v46; // rcx
  int v47; // r8d
  signed int v48; // r9d
  int v49; // ecx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t **v50; // rsi
  int v51; // edi
  __int64 v52; // rsi
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *v53; // rax
  __int64 v54; // rdx
  int v55; // ecx
  __int64 v56; // rdx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t **v57; // rdx
  IBaseFileSystem *v58; // rsi
  CTemporaryKeyValues *v59; // rax
  KeyValues *v60; // r12
  int v61; // r8d
  char *v62; // rax
  const char *v63; // r13
  const char *v64; // rax
  __int64 v65; // r14
  __int64 v66; // rax
  int v67; // edx
  int v68; // r8d
  int v69; // ecx
  __int64 v70; // rax
  int k; // edx
  CUtlSymbolLarge *v72; // rcx
  int v73; // r8d
  signed int v74; // r9d
  int v75; // ecx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t **v76; // rsi
  int v77; // edi
  __int64 v78; // rsi
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *v79; // rax
  __int64 v80; // rdx
  int v81; // ecx
  __int64 v82; // rdx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t **v83; // rdx
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *v84; // rax
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *v85; // rax
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *v86; // rax
  int v87; // [rsp+0h] [rbp-A0h]
  int v88; // [rsp+0h] [rbp-A0h]
  int v89; // [rsp+0h] [rbp-A0h]
  int v90; // [rsp+0h] [rbp-A0h]
  int v91; // [rsp+0h] [rbp-A0h]
  int v92; // [rsp+0h] [rbp-A0h]
  int v93; // [rsp+8h] [rbp-98h]
  unsigned int v94; // [rsp+8h] [rbp-98h]
  int v95; // [rsp+8h] [rbp-98h]
  unsigned int v96; // [rsp+8h] [rbp-98h]
  unsigned int v97; // [rsp+8h] [rbp-98h]
  CUtlSymbolTableLargeBaseTreeEntry_t *v98; // [rsp+8h] [rbp-98h]
  CUtlSymbolTableLargeBaseTreeEntry_t *v99; // [rsp+8h] [rbp-98h]
  int v100; // [rsp+8h] [rbp-98h]
  char *v101; // [rsp+8h] [rbp-98h]
  int v102; // [rsp+8h] [rbp-98h]
  int v103; // [rsp+8h] [rbp-98h]
  int v104; // [rsp+8h] [rbp-98h]
  int v105; // [rsp+10h] [rbp-90h]
  int v106; // [rsp+10h] [rbp-90h]
  int v107; // [rsp+10h] [rbp-90h]
  int v108; // [rsp+10h] [rbp-90h]
  int v109; // [rsp+10h] [rbp-90h]
  int v110; // [rsp+10h] [rbp-90h]
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *v111; // [rsp+10h] [rbp-90h]
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *v112; // [rsp+10h] [rbp-90h]
  CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *v113; // [rsp+10h] [rbp-90h]
  CUtlVectorBase<CUtlSymbolLarge,CUtlMemory<CUtlSymbolLarge,int> >::CAllocator *p_m_Memory; // [rsp+20h] [rbp-80h]
  CTemporaryKeyValues *pAddOnKeyValues; // [rsp+28h] [rbp-78h]
  CTemporaryKeyValues *pAddOnKeyValuesa; // [rsp+28h] [rbp-78h]
  CTemporaryKeyValues *pAddOnKeyValuesb; // [rsp+28h] [rbp-78h]
  int v118; // [rsp+30h] [rbp-70h]
  int v119; // [rsp+30h] [rbp-70h]
  unsigned int v120; // [rsp+30h] [rbp-70h]
  int v121; // [rsp+30h] [rbp-70h]
  int v122; // [rsp+30h] [rbp-70h]
  unsigned int v123; // [rsp+30h] [rbp-70h]
  int v124; // [rsp+30h] [rbp-70h]
  unsigned int v125; // [rsp+30h] [rbp-70h]
  char *v126; // [rsp+30h] [rbp-70h]
  char *v127; // [rsp+30h] [rbp-70h]
  int v128; // [rsp+30h] [rbp-70h]
  char *v129; // [rsp+30h] [rbp-70h]
  CUtlSymbolTable *p_m_SymbolTable; // [rsp+38h] [rbp-68h]
  char *v131; // [rsp+40h] [rbp-60h] BYREF
  CUtlSymbolTableLargeBaseTreeEntry_t *v132; // [rsp+50h] [rbp-50h] BYREF
  CUtlSymbolTableLargeBaseTreeEntry_t *v133; // [rsp+58h] [rbp-48h] BYREF
  char *v134[8]; // [rsp+60h] [rbp-40h] BYREF

  p_m_Memory = &this->m_ServerPortraitInfo.m_Vector.m_Memory;
  v2 = (this->m_ServerPortraitInfo.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ServerPortraitInfo.m_Vector.m_Size = 0;
  if ( v2 )
    CUtlMemory<CUtlSymbolLarge,int>::Purge(&this->m_ServerPortraitInfo.m_Vector.m_Memory);
  p_m_SymbolTable = &this->m_ServerPortraitInfo.m_SymbolTable;
  CUtlSymbolTable::RemoveAll(&this->m_ServerPortraitInfo.m_SymbolTable);
  CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::Purge(&sm_PortraitSymbolTable.m_Lookup);
  if ( sm_PortraitSymbolTable.m_StringPools.m_Size > 0 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      ++v4;
      v5 = sm_PortraitSymbolTable.m_StringPools.m_Memory.m_pMemory[v3++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v5);
    }
    while ( v4 < sm_PortraitSymbolTable.m_StringPools.m_Size );
  }
  sm_PortraitSymbolTable.m_StringPools.m_Size = 0;
  if ( (sm_PortraitSymbolTable.m_StringPools.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>::Purge(&sm_PortraitSymbolTable.m_StringPools.m_Memory);
  v6 = 0;
  if ( g_pFullFileSystem != 0 )
    v6 = &g_pFullFileSystem->IBaseFileSystem;
  TemporaryFromFile = KeyValues::LoadTemporaryFromFile(0, v6, "scripts/npc/portraits.txt", "GAME", 0);
  pAddOnKeyValues = TemporaryFromFile;
  if ( TemporaryFromFile->m_pKeyValues != 0 )
  {
    FirstTrueSubKey = KeyValues::GetFirstTrueSubKey(TemporaryFromFile->m_pKeyValues);
    if ( FirstTrueSubKey != 0 )
    {
      while ( 1 )
      {
        String = KeyValues::GetString(FirstTrueSubKey, "PortraitBackgroundTexture", 0, 0, 0);
        if ( String == 0 )
          goto LABEL_16;
        Name = KeyValues::GetName(FirstTrueSubKey);
        CUtlSymbolTable::AddString(p_m_SymbolTable, Name);
        v13 = LOWORD(v134[0]);
        m_Size = this->m_ServerPortraitInfo.m_Vector.m_Size;
        if ( LOWORD(v134[0]) >= m_Size )
        {
          v15 = LOWORD(v134[0]) + 1;
          if ( m_Size < v15 )
          {
            v16 = v15 - m_Size;
            if ( v15 != m_Size )
            {
              m_nAllocationCount = this->m_ServerPortraitInfo.m_Vector.m_Memory.m_nAllocationCount;
              if ( v15 > m_nAllocationCount )
              {
                v93 = v15 - m_Size;
                v105 = this->m_ServerPortraitInfo.m_Vector.m_Size;
                v118 = LOWORD(v134[0]) + 1;
                CUtlMemory<CUtlSymbolLarge,int>::Grow(p_m_Memory, v15 - m_nAllocationCount);
                v16 = v93;
                m_Size = v105;
                v15 = v118;
              }
              this->m_ServerPortraitInfo.m_Vector.m_Size = v15;
              v18 = m_Size;
              for ( i = 0; v16 > i; ++v18 )
              {
                v20 = &this->m_ServerPortraitInfo.m_Vector.m_Memory.m_pMemory[v18];
                if ( v20 != 0 )
                  v20->u.m_Id = 0;
                ++i;
              }
              v13 = LOWORD(v134[0]);
            }
          }
        }
        v9 = strlen(String);
        m_String = 0;
        if ( v9 > 0 && *String != 0 )
        {
          v119 = v9;
          CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::Find(
            v134,
            &sm_PortraitSymbolTable,
            String,
            v9);
          m_String = v134[0];
          v21 = v119;
          if ( v134[0] == 0 )
            break;
        }
LABEL_15:
        this->m_ServerPortraitInfo.m_Vector.m_Memory.m_pMemory[v13].u.m_Id = m_String;
LABEL_16:
        FirstTrueSubKey = KeyValues::GetNextTrueSubKey(FirstTrueSubKey);
        if ( FirstTrueSubKey == 0 )
          goto LABEL_41;
      }
      v22 = (v119 + 16) & 0xFFFFFFF8;
      if ( sm_PortraitSymbolTable.m_StringPools.m_Size > 0 )
      {
        v23 = 0;
        v24 = sm_PortraitSymbolTable.m_StringPools.m_Memory.m_pMemory + 1;
        m_SpaceUsed = (*sm_PortraitSymbolTable.m_StringPools.m_Memory.m_pMemory)->m_SpaceUsed;
        if ( v22 <= **sm_PortraitSymbolTable.m_StringPools.m_Memory.m_pMemory - m_SpaceUsed )
        {
          v85 = *sm_PortraitSymbolTable.m_StringPools.m_Memory.m_pMemory;
LABEL_114:
          v85->m_SpaceUsed = v22 + m_SpaceUsed;
          v88 = v21;
          v99 = &v85->m_Data[m_SpaceUsed];
          v127 = v85 + m_SpaceUsed;
          *(v127 + 1) = MurmurHash2LowerCase(String, 0x3501A674u);
          memcpy(v127 + 16, String, v88);
          v127[v88 + 16] = 0;
          v132 = v99;
          m_String = sm_PortraitSymbolTable.m_Lookup.m_Elements.m_pMemory[CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::Insert(
                                                                            &sm_PortraitSymbolTable.m_Lookup,
                                                                            &v132,
                                                                            ERBTreeInsertBehavior::k_eInsertAssertAboutDupes)].m_Data->m_String;
          goto LABEL_15;
        }
        while ( ++v23 != sm_PortraitSymbolTable.m_StringPools.m_Size )
        {
          v85 = *v24++;
          m_SpaceUsed = v85->m_SpaceUsed;
          if ( v22 <= v85->m_TotalLen - m_SpaceUsed )
          {
            if ( v23 == -1 )
              break;
            goto LABEL_114;
          }
        }
      }
      if ( (v22 + 12LL) <= 0x800 )
      {
        v94 = 2036;
        v26 = 2048;
      }
      else
      {
        v94 = (v119 + 16) & 0xFFFFFFF8;
        v26 = v22 + 12;
      }
      v106 = v119;
      v120 = (v119 + 16) & 0xFFFFFFF8;
      v27 = (**g_pMemAlloc)(g_pMemAlloc, v26);
      v27->m_SpaceUsed = 0;
      v22 = v120;
      v21 = v106;
      v27->m_TotalLen = v94;
      v28 = sm_PortraitSymbolTable.m_StringPools.m_Size;
      v29 = sm_PortraitSymbolTable.m_StringPools.m_Size;
      if ( sm_PortraitSymbolTable.m_StringPools.m_Size == sm_PortraitSymbolTable.m_StringPools.m_Memory.m_nAllocationCount )
      {
        v90 = v106;
        v102 = sm_PortraitSymbolTable.m_StringPools.m_Size;
        v111 = v27;
        CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>::Grow(
          &sm_PortraitSymbolTable.m_StringPools.m_Memory,
          1);
        v29 = sm_PortraitSymbolTable.m_StringPools.m_Size;
        v21 = v90;
        v28 = v102;
        v27 = v111;
        v22 = v120;
      }
      v30 = v28;
      sm_PortraitSymbolTable.m_StringPools.m_Size = v29 + 1;
      if ( &sm_PortraitSymbolTable.m_StringPools.m_Memory.m_pMemory[v30] != 0 )
      {
        sm_PortraitSymbolTable.m_StringPools.m_Memory.m_pMemory[v30] = v27;
        v31 = &sm_PortraitSymbolTable.m_StringPools.m_Memory.m_pMemory[v30];
      }
      else
      {
        v31 = 0;
      }
      v85 = *v31;
      m_SpaceUsed = (*v31)->m_SpaceUsed;
      goto LABEL_114;
    }
  }
LABEL_41:
  CTemporaryKeyValues::~CTemporaryKeyValues(pAddOnKeyValues);
  operator delete(pAddOnKeyValues);
  v32 = 0;
  if ( g_pFullFileSystem != 0 )
    v32 = &g_pFullFileSystem->IBaseFileSystem;
  v33 = KeyValues::LoadTemporaryFromFile(0, v32, "scripts/npc/portraits_staging.txt", "GAME", 0);
  pAddOnKeyValuesa = v33;
  if ( v33->m_pKeyValues != 0 )
  {
    NextTrueSubKey = KeyValues::GetFirstTrueSubKey(v33->m_pKeyValues);
    if ( NextTrueSubKey != 0 )
    {
      while ( 1 )
      {
        v37 = KeyValues::GetString(NextTrueSubKey, "PortraitBackgroundTexture", 0, 0, 0);
        if ( v37 == 0 )
          goto LABEL_49;
        v38 = KeyValues::GetName(NextTrueSubKey);
        CUtlSymbolTable::AddString(p_m_SymbolTable, v38);
        v39 = LOWORD(v134[0]);
        v40 = this->m_ServerPortraitInfo.m_Vector.m_Size;
        if ( LOWORD(v134[0]) >= v40 )
        {
          v41 = LOWORD(v134[0]) + 1;
          if ( v40 < v41 )
          {
            v42 = v41 - v40;
            if ( v41 != v40 )
            {
              v43 = this->m_ServerPortraitInfo.m_Vector.m_Memory.m_nAllocationCount;
              if ( v41 > v43 )
              {
                v95 = v41 - v40;
                v107 = this->m_ServerPortraitInfo.m_Vector.m_Size;
                v121 = LOWORD(v134[0]) + 1;
                CUtlMemory<CUtlSymbolLarge,int>::Grow(p_m_Memory, v41 - v43);
                v42 = v95;
                v40 = v107;
                v41 = v121;
              }
              this->m_ServerPortraitInfo.m_Vector.m_Size = v41;
              v44 = v40;
              for ( j = 0; v42 > j; ++v44 )
              {
                v46 = &this->m_ServerPortraitInfo.m_Vector.m_Memory.m_pMemory[v44];
                if ( v46 != 0 )
                  v46->u.m_Id = 0;
                ++j;
              }
              v39 = LOWORD(v134[0]);
            }
          }
        }
        v35 = strlen(v37);
        v36 = 0;
        if ( v35 > 0 && *v37 != 0 )
        {
          v122 = v35;
          CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::Find(v134, &sm_PortraitSymbolTable, v37, v35);
          v36 = v134[0];
          v47 = v122;
          if ( v134[0] == 0 )
            break;
        }
LABEL_48:
        this->m_ServerPortraitInfo.m_Vector.m_Memory.m_pMemory[v39].u.m_Id = v36;
LABEL_49:
        NextTrueSubKey = KeyValues::GetNextTrueSubKey(NextTrueSubKey);
        if ( NextTrueSubKey == 0 )
          goto LABEL_74;
      }
      v48 = (v122 + 16) & 0xFFFFFFF8;
      if ( sm_PortraitSymbolTable.m_StringPools.m_Size > 0 )
      {
        v49 = 0;
        v50 = sm_PortraitSymbolTable.m_StringPools.m_Memory.m_pMemory + 1;
        v51 = (*sm_PortraitSymbolTable.m_StringPools.m_Memory.m_pMemory)->m_SpaceUsed;
        if ( v48 <= **sm_PortraitSymbolTable.m_StringPools.m_Memory.m_pMemory - v51 )
        {
          v84 = *sm_PortraitSymbolTable.m_StringPools.m_Memory.m_pMemory;
LABEL_112:
          v84->m_SpaceUsed = v48 + v51;
          v87 = v47;
          v98 = &v84->m_Data[v51];
          v126 = v84 + v51;
          *(v126 + 1) = MurmurHash2LowerCase(v37, 0x3501A674u);
          memcpy(v126 + 16, v37, v87);
          v126[v87 + 16] = 0;
          v133 = v98;
          v36 = sm_PortraitSymbolTable.m_Lookup.m_Elements.m_pMemory[CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::Insert(
                                                                       &sm_PortraitSymbolTable.m_Lookup,
                                                                       &v133,
                                                                       ERBTreeInsertBehavior::k_eInsertAssertAboutDupes)].m_Data->m_String;
          goto LABEL_48;
        }
        while ( ++v49 != sm_PortraitSymbolTable.m_StringPools.m_Size )
        {
          v84 = *v50++;
          v51 = v84->m_SpaceUsed;
          if ( v48 <= v84->m_TotalLen - v51 )
          {
            if ( v49 == -1 )
              break;
            goto LABEL_112;
          }
        }
      }
      if ( (v48 + 12LL) <= 0x800 )
      {
        v96 = 2036;
        v52 = 2048;
      }
      else
      {
        v96 = (v122 + 16) & 0xFFFFFFF8;
        v52 = v48 + 12;
      }
      v108 = v122;
      v123 = (v122 + 16) & 0xFFFFFFF8;
      v53 = (**g_pMemAlloc)(g_pMemAlloc, v52);
      v53->m_SpaceUsed = 0;
      v48 = v123;
      v47 = v108;
      v53->m_TotalLen = v96;
      v54 = sm_PortraitSymbolTable.m_StringPools.m_Size;
      v55 = sm_PortraitSymbolTable.m_StringPools.m_Size;
      if ( sm_PortraitSymbolTable.m_StringPools.m_Size == sm_PortraitSymbolTable.m_StringPools.m_Memory.m_nAllocationCount )
      {
        v91 = v108;
        v103 = sm_PortraitSymbolTable.m_StringPools.m_Size;
        v112 = v53;
        CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>::Grow(
          &sm_PortraitSymbolTable.m_StringPools.m_Memory,
          1);
        v55 = sm_PortraitSymbolTable.m_StringPools.m_Size;
        v47 = v91;
        v54 = v103;
        v53 = v112;
        v48 = v123;
      }
      v56 = v54;
      sm_PortraitSymbolTable.m_StringPools.m_Size = v55 + 1;
      if ( &sm_PortraitSymbolTable.m_StringPools.m_Memory.m_pMemory[v56] != 0 )
      {
        sm_PortraitSymbolTable.m_StringPools.m_Memory.m_pMemory[v56] = v53;
        v57 = &sm_PortraitSymbolTable.m_StringPools.m_Memory.m_pMemory[v56];
      }
      else
      {
        v57 = 0;
      }
      v84 = *v57;
      v51 = (*v57)->m_SpaceUsed;
      goto LABEL_112;
    }
  }
LABEL_74:
  CTemporaryKeyValues::~CTemporaryKeyValues(pAddOnKeyValuesa);
  operator delete(pAddOnKeyValuesa);
  if ( this->m_bCustomGame || this->m_bEventGame )
  {
    v58 = 0;
    if ( g_pFullFileSystem != 0 )
      v58 = &g_pFullFileSystem->IBaseFileSystem;
    v59 = KeyValues::LoadTemporaryFromFile(0, v58, "scripts/npc/portraits_custom.txt", "GAME", 0);
    pAddOnKeyValuesb = v59;
    if ( v59->m_pKeyValues != 0 )
    {
      v60 = KeyValues::GetFirstTrueSubKey(v59->m_pKeyValues);
      if ( v60 != 0 )
      {
        while ( 1 )
        {
          v63 = KeyValues::GetString(v60, "PortraitBackgroundTexture", 0, 0, 0);
          if ( v63 == 0 )
            goto LABEL_84;
          v64 = KeyValues::GetName(v60);
          CUtlSymbolTable::AddString(p_m_SymbolTable, v64);
          v65 = v131;
          v66 = this->m_ServerPortraitInfo.m_Vector.m_Size;
          if ( v131 >= v66 )
          {
            v67 = v131 + 1;
            if ( v66 < v67 )
            {
              v68 = v67 - v66;
              if ( v67 != v66 )
              {
                v69 = this->m_ServerPortraitInfo.m_Vector.m_Memory.m_nAllocationCount;
                if ( v67 > v69 )
                {
                  v100 = v67 - v66;
                  v110 = this->m_ServerPortraitInfo.m_Vector.m_Size;
                  v128 = v131 + 1;
                  CUtlMemory<CUtlSymbolLarge,int>::Grow(p_m_Memory, v67 - v69);
                  v68 = v100;
                  v66 = v110;
                  v67 = v128;
                }
                this->m_ServerPortraitInfo.m_Vector.m_Size = v67;
                v70 = v66;
                for ( k = 0; v68 > k; ++v70 )
                {
                  v72 = &this->m_ServerPortraitInfo.m_Vector.m_Memory.m_pMemory[v70];
                  if ( v72 != 0 )
                    v72->u.m_Id = 0;
                  ++k;
                }
                v65 = v131;
              }
            }
          }
          v61 = strlen(v63);
          v62 = 0;
          if ( v61 > 0 && *v63 != 0 )
          {
            v124 = v61;
            CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::Find(
              &v131,
              &sm_PortraitSymbolTable,
              v63,
              v61);
            v62 = v131;
            v73 = v124;
            if ( v131 == 0 )
              break;
          }
LABEL_83:
          this->m_ServerPortraitInfo.m_Vector.m_Memory.m_pMemory[v65].u.m_Id = v62;
LABEL_84:
          v60 = KeyValues::GetNextTrueSubKey(v60);
          if ( v60 == 0 )
            goto LABEL_96;
        }
        v74 = (v124 + 16) & 0xFFFFFFF8;
        if ( sm_PortraitSymbolTable.m_StringPools.m_Size > 0 )
        {
          v75 = 0;
          v76 = sm_PortraitSymbolTable.m_StringPools.m_Memory.m_pMemory + 1;
          v77 = (*sm_PortraitSymbolTable.m_StringPools.m_Memory.m_pMemory)->m_SpaceUsed;
          if ( **sm_PortraitSymbolTable.m_StringPools.m_Memory.m_pMemory - v77 >= v74 )
          {
            v86 = *sm_PortraitSymbolTable.m_StringPools.m_Memory.m_pMemory;
LABEL_116:
            v86->m_SpaceUsed = v74 + v77;
            v89 = v73;
            v101 = &v86->m_Data[v77];
            v129 = v86 + v77;
            *(v129 + 1) = MurmurHash2LowerCase(v63, 0x3501A674u);
            memcpy(v129 + 16, v63, v89);
            v129[v89 + 16] = 0;
            v134[0] = v101;
            v62 = sm_PortraitSymbolTable.m_Lookup.m_Elements.m_pMemory[CUtlRBTree<CUtlSymbolTableLargeBaseTreeEntry_t *,long long,CTreeEntryLess<CNonThreadsafeTree<true>,true>,CUtlMemory<UtlRBTreeNode_t<CUtlSymbolTableLargeBaseTreeEntry_t *,long long>,long long>>::Insert(
                                                                         &sm_PortraitSymbolTable.m_Lookup,
                                                                         v134,
                                                                         ERBTreeInsertBehavior::k_eInsertAssertAboutDupes)].m_Data->m_String;
            goto LABEL_83;
          }
          while ( ++v75 != sm_PortraitSymbolTable.m_StringPools.m_Size )
          {
            v86 = *v76++;
            v77 = v86->m_SpaceUsed;
            if ( v74 <= v86->m_TotalLen - v77 )
            {
              if ( v75 == -1 )
                break;
              goto LABEL_116;
            }
          }
        }
        if ( (v74 + 12LL) > 0x800 )
        {
          v97 = (v124 + 16) & 0xFFFFFFF8;
          v78 = v74 + 12;
        }
        else
        {
          v97 = 2036;
          v78 = 2048;
        }
        v109 = v124;
        v125 = (v124 + 16) & 0xFFFFFFF8;
        v79 = (**g_pMemAlloc)(g_pMemAlloc, v78);
        v79->m_SpaceUsed = 0;
        v74 = v125;
        v73 = v109;
        v79->m_TotalLen = v97;
        v80 = sm_PortraitSymbolTable.m_StringPools.m_Size;
        v81 = sm_PortraitSymbolTable.m_StringPools.m_Size;
        if ( sm_PortraitSymbolTable.m_StringPools.m_Size == sm_PortraitSymbolTable.m_StringPools.m_Memory.m_nAllocationCount )
        {
          v92 = v109;
          v104 = sm_PortraitSymbolTable.m_StringPools.m_Size;
          v113 = v79;
          CUtlMemory<CUtlSymbolTableLargeBase<CNonThreadsafeTree<true>,true,2048ul>::StringPool_t *,int>::Grow(
            &sm_PortraitSymbolTable.m_StringPools.m_Memory,
            1);
          v81 = sm_PortraitSymbolTable.m_StringPools.m_Size;
          v73 = v92;
          v80 = v104;
          v79 = v113;
          v74 = v125;
        }
        v82 = v80;
        sm_PortraitSymbolTable.m_StringPools.m_Size = v81 + 1;
        if ( &sm_PortraitSymbolTable.m_StringPools.m_Memory.m_pMemory[v82] != 0 )
        {
          sm_PortraitSymbolTable.m_StringPools.m_Memory.m_pMemory[v82] = v79;
          v83 = &sm_PortraitSymbolTable.m_StringPools.m_Memory.m_pMemory[v82];
        }
        else
        {
          v83 = 0;
        }
        v86 = *v83;
        v77 = (*v83)->m_SpaceUsed;
        goto LABEL_116;
      }
    }
LABEL_96:
    CTemporaryKeyValues::~CTemporaryKeyValues(pAddOnKeyValuesb);
    operator delete(pAddOnKeyValuesb);
  }
}


// CDOTAGameManager::VerifyHeroIDs  (line 1849, @0x00000000024eaca0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<int>, Element, GetHeroesKeyValues, GetInt, GrowMemory, HKeySymbol, IsAddOnGame, LeafCodeInfo_t, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: KeyValues::GetFirstSubKey, KeyValues::GetNextKey, KeyValues::GetName, V_stricmp_fast, KeyValues::GetString, KeyValues::FindKey, CKeyValues_Data::Internal_GetInt, CUtlVectorBase<int, CUtlMemory<int, int> >::Find, CUtlMemory<int, int>::Purge, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess (16 total)
// callers: CDOTAGameManager::SetupGameKeyValues
// strings: "npc_dota_hero_base", "override_hero", "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/_generated_code/serve, "VerifyHeroIDs", "Hero %s has no HeroID defined.  This will break stats tracking!", "Hero %s has a HeroID that's larger than MAX_HERO_ID!" (7 total)
void __fastcall CDOTAGameManager::VerifyHeroIDs(CDOTAGameManager *const this)
{
  int v1; // r15d
  bool v3; // zf
  KeyValues *m_pkvHeroes; // rdi
  KeyValues *FirstSubKey; // rbx
  CUtlVector<int,CUtlMemory<int,int> > *p_aHeroIDs; // r13
  const char *Name; // rax
  KeyValues *Key; // rax
  int Int; // eax
  int m_Size; // eax
  int *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  const char *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  const char *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  const char *v26; // rax
  int v27; // [rsp+14h] [rbp-8Ch]
  int nHeroID; // [rsp+2Ch] [rbp-74h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > aHeroIDs; // [rsp+30h] [rbp-70h] BYREF
  LeafCodeInfo_t v30; // [rsp+50h] [rbp-50h] BYREF

  aHeroIDs.m_Size = 0;
  v3 = !this->m_bCustomGame;
  aHeroIDs.m_Memory.m_pMemory = 0;
  aHeroIDs.m_Memory.m_nAllocationCount = 0;
  aHeroIDs.m_Memory.m_nGrowSize = 0;
  if ( v3 && !this->m_bEventGame )
    m_pkvHeroes = this->m_pkvHeroes;
  else
    m_pkvHeroes = this->m_pkvAddOnHeroes;
  FirstSubKey = KeyValues::GetFirstSubKey(m_pkvHeroes);
  if ( FirstSubKey != 0 )
  {
    p_aHeroIDs = &aHeroIDs;
    while ( 1 )
    {
      Name = KeyValues::GetName(FirstSubKey);
      if ( V_stricmp_fast(Name, "npc_dota_hero_base") != 0
        && KeyValues::GetFirstSubKey(FirstSubKey) != 0
        && KeyValues::GetString(FirstSubKey, "override_hero", 0, 0, 0) == 0 )
      {
        break;
      }
LABEL_6:
      FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
      if ( FirstSubKey == 0 )
        goto LABEL_17;
    }
    Key = KeyValues::FindKey(FirstSubKey, this->m_hKvSymbols[3]);
    if ( Key != 0 )
    {
      Int = CKeyValues_Data::Internal_GetInt(Key);
      v1 = Int;
      nHeroID = Int;
      if ( Int != 0 )
      {
        if ( Int > 127 )
        {
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          {
            v21 = KeyValues::GetName(FirstSubKey);
            v30.m_nLine = 1874;
            v30.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/_generated_code/server_do"
                           "ta/release/linuxsteamrt64/../../../../game/shared/dota/dota_game_manager.cpp";
            v30.m_szFunction = "VerifyHeroIDs";
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              &v30,
              "Hero %s has a HeroID that's larger than MAX_HERO_ID!",
              v21);
          }
          if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v19, v20, v17, v18) != 0 )
            loc_0 = -559038737;
          Plat_ExitProcess(1);
LABEL_34:
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          {
            v26 = KeyValues::GetName(FirstSubKey);
            v30.m_nLine = 1880;
            v30.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/_generated_code/server_do"
                           "ta/release/linuxsteamrt64/../../../../game/shared/dota/dota_game_manager.cpp";
            v30.m_szFunction = "VerifyHeroIDs";
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              &v30,
              "Hero %s is using a duplicate HeroID.  This will break stats tracking!",
              v26);
          }
          if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v24, v25, v22, v23) != 0 )
            loc_0 = -559038737;
          Plat_ExitProcess(1);
          JUMPOUT(0x24EB028);
        }
        if ( CUtlVectorBase<int,CUtlMemory<int,int>>::Find(p_aHeroIDs, &nHeroID) != -1 )
          goto LABEL_34;
        m_Size = aHeroIDs.m_Size;
        v27 = aHeroIDs.m_Size;
        if ( aHeroIDs.m_Size != aHeroIDs.m_Memory.m_nAllocationCount )
          goto LABEL_15;
        goto LABEL_28;
      }
    }
    else
    {
      nHeroID = 0;
    }
    p_aHeroIDs = &LOG_GENERAL;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v16 = KeyValues::GetName(FirstSubKey);
      v30.m_nLine = 1868;
      v30.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/_generated_code/server_dota/rel"
                     "ease/linuxsteamrt64/../../../../game/shared/dota/dota_game_manager.cpp";
      v30.m_szFunction = "VerifyHeroIDs";
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v30,
        "Hero %s has no HeroID defined.  This will break stats tracking!",
        v16);
    }
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v14, v15, v12, v13) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
LABEL_28:
    CUtlMemory<int,int>::Grow(&aHeroIDs.m_Memory, 1);
    m_Size = aHeroIDs.m_Size;
LABEL_15:
    aHeroIDs.m_Size = m_Size + 1;
    v11 = &aHeroIDs.m_Memory.m_pMemory[v27];
    if ( v11 != 0 )
      *v11 = v1;
    goto LABEL_6;
  }
LABEL_17:
  aHeroIDs.m_Size = 0;
  if ( (aHeroIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&aHeroIDs.m_Memory);
    if ( (aHeroIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&aHeroIDs.m_Memory);
  }
}


// CDOTAGameManager::VerifyUniqueAbilityIDs  (line 1892, @0x00000000024ea9b0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<int>, Element, GetAbilitiesKeyValues, GetInt, GrowMemory, HKeySymbol, IsAddOnGame, LeafCodeInfo_t, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: KeyValues::GetFirstSubKey, KeyValues::GetNextKey, KeyValues::GetName, V_stricmp_fast, KeyValues::FindKey, CKeyValues_Data::Internal_GetInt, CUtlVectorBase<int, CUtlMemory<int, int> >::Find, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, CUtlMemory<int, int>::Purge, CUtlMemory<int, int>::Grow (15 total)
// callers: CDOTAGameManager::SetupGameKeyValues
// strings: "ability_base", "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/_generated_code/serve, "VerifyUniqueAbilityIDs", "Ability/Item %s has no ID defined.  This will break stats tracking!", "Ability/Item %s is using a duplicate ID.  This will break stats tracking!"
void __fastcall CDOTAGameManager::VerifyUniqueAbilityIDs(CDOTAGameManager *const this)
{
  KeyValues *m_pkvAddOnAbilities; // rdi
  KeyValues *FirstSubKey; // rbx
  const char *Name; // rax
  KeyValues *Key; // rax
  int Int; // r15d
  __int64 m_Size; // r14
  int v7; // eax
  int *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  const char *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  const char *v18; // rax
  int v19; // ebx
  int v20; // edx
  int v21; // ecx
  int v22; // esi
  int v23; // r8d
  int v24; // r9d
  int nID; // [rsp+2Ch] [rbp-74h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > aIDs; // [rsp+30h] [rbp-70h] BYREF
  LeafCodeInfo_t v28; // [rsp+50h] [rbp-50h] BYREF

  if ( this->m_bCustomGame || this->m_bEventGame )
    m_pkvAddOnAbilities = this->m_pkvAddOnAbilities;
  else
    m_pkvAddOnAbilities = this->m_pkvAbilities;
  if ( m_pkvAddOnAbilities == 0 )
    return;
  aIDs.m_Size = 0;
  aIDs.m_Memory.m_pMemory = 0;
  aIDs.m_Memory.m_nAllocationCount = 0;
  aIDs.m_Memory.m_nGrowSize = 0;
  FirstSubKey = KeyValues::GetFirstSubKey(m_pkvAddOnAbilities);
  if ( FirstSubKey == 0 )
    goto LABEL_23;
  while ( 1 )
  {
    if ( KeyValues::GetFirstSubKey(FirstSubKey) == 0 )
      goto LABEL_7;
    Name = KeyValues::GetName(FirstSubKey);
    if ( V_stricmp_fast(Name, "ability_base") == 0 )
      goto LABEL_7;
    Key = KeyValues::FindKey(FirstSubKey, this->m_hKvSymbols[0]);
    if ( Key == 0 )
      break;
    Int = CKeyValues_Data::Internal_GetInt(Key);
    nID = Int;
    if ( Int == 0 )
      goto LABEL_18;
    if ( CUtlVectorBase<int,CUtlMemory<int,int>>::Find(&aIDs, &nID) != -1 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v18 = KeyValues::GetName(FirstSubKey);
        v28.m_nLine = 1917;
        v28.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/_generated_code/server_dota/r"
                       "elease/linuxsteamrt64/../../../../game/shared/dota/dota_game_manager.cpp";
        v28.m_szFunction = "VerifyUniqueAbilityIDs";
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &v28,
          "Ability/Item %s is using a duplicate ID.  This will break stats tracking!",
          v18);
      }
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v16, v17, v14, v15) != 0 )
        loc_0 = -559038737;
      v19 = Plat_ExitProcess(1);
      CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&aIDs);
      Unwind_Resume(v19, v22, v20, v21, v23, v24);
    }
    m_Size = aIDs.m_Size;
    v7 = aIDs.m_Size;
    if ( aIDs.m_Size == aIDs.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<int,int>::Grow(&aIDs.m_Memory, 1);
      v7 = aIDs.m_Size;
    }
    aIDs.m_Size = v7 + 1;
    v8 = &aIDs.m_Memory.m_pMemory[m_Size];
    if ( v8 != 0 )
      *v8 = Int;
LABEL_7:
    FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
    if ( FirstSubKey == 0 )
      goto LABEL_23;
  }
  nID = 0;
LABEL_18:
  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v13 = KeyValues::GetName(FirstSubKey);
    v28.m_nLine = 1912;
    v28.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/_generated_code/server_dota/relea"
                   "se/linuxsteamrt64/../../../../game/shared/dota/dota_game_manager.cpp";
    v28.m_szFunction = "VerifyUniqueAbilityIDs";
    LoggingSystem_Log(
      LOG_GENERAL,
      LoggingSeverity_t::LS_ERROR,
      &v28,
      "Ability/Item %s has no ID defined.  This will break stats tracking!",
      v13);
  }
  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v11, v12, v9, v10) != 0 )
    loc_0 = -559038737;
  Plat_ExitProcess(1);
LABEL_23:
  aIDs.m_Size = 0;
  if ( (aIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&aIDs.m_Memory);
    if ( (aIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&aIDs.m_Memory);
  }
}


// CDOTAGameManager::VerifyUniqueItemAbilitySpecials  (line 1929, @0x00000000024e9f50, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<int>, Element, GetAbilitiesKeyValues, GrowMemory, IsAddOnGame, Purge, RemoveAll, atoi, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: KeyValues::GetFirstSubKey, KeyValues::GetNextKey, KeyValues::GetName, V_stricmp_fast, KeyValues::FindKey, strtol, CUtlVectorBase<int, CUtlMemory<int, int> >::Find, CUtlMemory<int, int>::Grow, CUtlMemory<int, int>::Purge, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTAGameManager::SetupGameKeyValues
// strings: "ability_base", "AbilitySpecial"
void __fastcall CDOTAGameManager::VerifyUniqueItemAbilitySpecials(CDOTAGameManager *const this)
{
  KeyValues *m_pkvAddOnAbilities; // rdi
  const char *Name; // rax
  KeyValues *Key; // rax
  KeyValues *j; // rax
  const KeyValues *v5; // rbx
  const char *v6; // rax
  int v7; // r12d
  __int64 v8; // r13
  int v9; // eax
  int *v10; // rax
  KeyValues *i; // [rsp-8h] [rbp-70h]
  int v12; // [rsp+Ch] [rbp-5Ch] BYREF
  int v13; // [rsp+10h] [rbp-58h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > nUsedIDs; // [rsp+18h] [rbp-50h] BYREF

  if ( this->m_bCustomGame || this->m_bEventGame )
    m_pkvAddOnAbilities = this->m_pkvAddOnAbilities;
  else
    m_pkvAddOnAbilities = this->m_pkvAbilities;
  if ( m_pkvAddOnAbilities != 0 )
  {
    for ( i = KeyValues::GetFirstSubKey(m_pkvAddOnAbilities); i != 0; i = KeyValues::GetNextKey(i) )
    {
      if ( KeyValues::GetFirstSubKey(i) != 0 )
      {
        Name = KeyValues::GetName(i);
        if ( V_stricmp_fast(Name, "ability_base") != 0 )
        {
          Key = KeyValues::FindKey(i, "AbilitySpecial", 0);
          if ( Key != 0 )
          {
            v13 = 0;
            *&nUsedIDs.m_Size = 0;
            nUsedIDs.m_Memory.m_pMemory = 0;
            for ( j = KeyValues::GetFirstSubKey(Key); ; j = KeyValues::GetNextKey(v5) )
            {
              v5 = j;
              if ( j == 0 )
                break;
              v6 = KeyValues::GetName(j);
              v7 = strtol(v6, 0, 10);
              v12 = v7;
              if ( CUtlVectorBase<int,CUtlMemory<int,int>>::Find(&v13, &v12) == -1 )
              {
                v8 = v13;
                v9 = v13;
                if ( v13 == LODWORD(nUsedIDs.m_Memory.m_pMemory) )
                {
                  CUtlMemory<int,int>::Grow(&nUsedIDs, 1);
                  v9 = v13;
                }
                v13 = v9 + 1;
                v10 = (*&nUsedIDs.m_Size + 4 * v8);
                if ( v10 != 0 )
                  *v10 = v7;
              }
            }
            v13 = 0;
            if ( (HIDWORD(nUsedIDs.m_Memory.m_pMemory) & 0xC0000000) == 0 )
            {
              CUtlMemory<int,int>::Purge(&nUsedIDs);
              if ( (HIDWORD(nUsedIDs.m_Memory.m_pMemory) & 0xC0000000) == 0 )
                CUtlMemory<int,int>::Purge(&nUsedIDs);
            }
          }
        }
      }
    }
  }
}


// CDOTAGameManager::GetHighestHeroID  (line 2045, @0x00000000025362e0, libserver.so)  // inlines: GetHeroesKeyValues, IsAddOnGame
// calls: CDOTAGameManager::LoadKeyValuesFiles
// callers: CSource2Server::GetCharacterList, CDOTAGamerules::GetSmartRandomHeroList, dev_auto_draft_test, CDOTAGamerules::CreateDemoPlayers, CDOTA_Hero_Recorder::ChangeHero, CDOTAItemSchema::GetCharacterCount
int __fastcall CDOTAGameManager::GetHighestHeroID(CDOTAGameManager *const this)
{
  KeyValues *m_pkvAddOnHeroes; // rax
  KeyValues *v4; // rax

  if ( this->m_bCustomGame || this->m_bEventGame )
    m_pkvAddOnHeroes = this->m_pkvAddOnHeroes;
  else
    m_pkvAddOnHeroes = this->m_pkvHeroes;
  if ( m_pkvAddOnHeroes != 0 )
    return this->m_nHighestHeroID;
  CDOTAGameManager::LoadKeyValuesFiles(this);
  v4 = *&this->m_bCustomGame != 0 ? this->m_pkvAddOnHeroes : this->m_pkvHeroes;
  if ( v4 != 0 )
    return this->m_nHighestHeroID;
  else
    return -1;
}


// CDOTAGameManager::GetHeroRowColumnInLegacySelection  (line 2065, @0x00000000024c37b0, libserver.so)  // inlines: FStrEq, _V_strcmp
// calls: KeyValues::GetString, GetAttributeIndexFromString
// callers: CDOTAGameManager::GetHeroGroupIndex
// strings: "AttributePrimary"
bool __fastcall CDOTAGameManager::GetHeroRowColumnInLegacySelection(
        CDOTAGameManager *const this,
        KeyValues *pkvHero,
        int *nRow,
        int *nColumn)
{
  const char *String; // rax
  Attributes AttributeIndexFromString; // eax
  char *v9; // rax

  if ( pkvHero == 0 )
    return 0;
  String = KeyValues::GetString(pkvHero, "AttributePrimary", 0, 0, 0);
  AttributeIndexFromString = GetAttributeIndexFromString(String);
  if ( AttributeIndexFromString == Attributes::DOTA_ATTRIBUTE_INVALID )
    return 0;
  *nRow = AttributeIndexFromString;
  v9 = KeyValues::GetString(pkvHero, "Team", "", 0, 0);
  if ( v9 != "Good" && strcmp(v9, "Good") != 0 )
  {
    if ( v9 == "Bad" || strcmp(v9, "Bad") == 0 )
    {
      *nColumn = 1;
      return 1;
    }
    return 0;
  }
  *nColumn = 0;
  return 1;
}


// CDOTAGameManager::GetHeroGroupIndex  (line 2106, @0x00000000024c3890, libserver.so)
// calls: CDOTAGameManager::GetHeroRowColumnInLegacySelection
int __fastcall CDOTAGameManager::GetHeroGroupIndex(CDOTAGameManager *const this, KeyValues *pkvHero)
{
  int nRow; // [rsp+8h] [rbp-8h] BYREF
  int nColumn; // [rsp+Ch] [rbp-4h] BYREF

  if ( CDOTAGameManager::GetHeroRowColumnInLegacySelection(this, pkvHero, &nRow, &nColumn) )
    return nColumn + 2 * nRow;
  else
    return -1;
}


// IsHeroAvailableByKV  (line 2119, @0x00000000024cd290, libserver.so)  // inlines: AD_IsHeroBanned, DOTAGameRules, GetBool, GetGameMode, GetInt, IsAddOnGame
// calls: IsAppDota2Main, KeyValues::FindKey, CKeyValues_Data::Internal_GetInt, KeyValues::GetName, CDOTA_PlayerResource::IsHeroSelected, CDOTAGamerules::IsHeroUnavailableToPlayer, KeyValues::GetInt
// callers: CDOTAGameManager::IsHeroAvailableByHeroID
bool __fastcall IsHeroAvailableByKV(int iPlayerID, KeyValues *pkvHero)
{
  KeyValues *Key; // rax
  CDOTAGamerules *v6; // rdi
  int v7; // eax
  const char *Name; // rax
  bool IsHeroSelected; // al
  int v10; // eax
  int Int; // eax
  __int64 v12; // rdx

  if ( pkvHero != 0 && g_pGameRules != 0 )
  {
    if ( IsAppDota2Main() && dota_debug_game_internal.m_pParent->m_Value.m_nValue != 0 )
      return 1;
    Key = KeyValues::FindKey(pkvHero, g_DOTAGameManager.m_hKvSymbols[2]);
    if ( Key != 0 && CKeyValues_Data::Internal_GetInt(Key) != 0 )
    {
      v6 = g_pGameRules;
      v7 = *&g_pGameRules[6].m_szQuestName[68];
      if ( v7 == 22 )
      {
        Int = KeyValues::GetInt(pkvHero, "HeroID", 0);
        v6 = g_pGameRules;
        v12 = 0;
        while ( Int != *&g_pGameRules[10].m_szQuestName[v12 + 96] )
        {
          v12 += 4;
          if ( v12 == 40 )
          {
            v7 = *&g_pGameRules[6].m_szQuestName[68];
            goto LABEL_9;
          }
        }
      }
      else
      {
LABEL_9:
        if ( (v7 == 15 || v7 == 19) && v6->m_bSameHeroSelectionEnabled.m_Value )
          return 1;
        if ( g_pDOTAPlayerResource == 0 )
          return !CDOTAGamerules::IsHeroUnavailableToPlayer(v6, iPlayerID, pkvHero);
        Name = KeyValues::GetName(pkvHero);
        IsHeroSelected = CDOTA_PlayerResource::IsHeroSelected(g_pDOTAPlayerResource, Name);
        v6 = g_pGameRules;
        if ( !IsHeroSelected )
          return !CDOTAGamerules::IsHeroUnavailableToPlayer(v6, iPlayerID, pkvHero);
        v10 = *&g_pGameRules[6].m_szQuestName[68];
        if ( v10 == 11 || v10 == 21 )
          return !CDOTAGamerules::IsHeroUnavailableToPlayer(v6, iPlayerID, pkvHero);
      }
    }
  }
  return 0;
}


// CDOTAGameManager::IsHeroAvailableByHeroID  (line 2150, @0x000000000253a280, libserver.so)  // inlines: GetCurrentMode
// calls: IsStableMode, CDOTAGameManager::GetHeroDataByHeroID, IsHeroAvailableByKV
// callers: CDOTAGameManager::IsHeroAvailableByName, CDOTAGamerules::HeroPickState_Think_CD_SELECT, CDOTAGamerules::HeroPickState_Enter_ALL_DRAFT_SELECT, CDOTAGamerules::MakeRandomHeroSelection, CDOTAGamerules::HeroPickState_Enter_SD_SELECT, CDOTAGamerules::GetSmartRandomHeroList, CDOTAGamerules::SelectSmartRandomHero, CDOTAGamerules::CreateDemoPlayers, CDOTA_PlayerResource::SetSuggestedHeroSelection, CDOTA_PlayerResource::SetPossibleHeroSelection, CDOTAPlayer::HandleSuggestHeroPick
bool __fastcall CDOTAGameManager::IsHeroAvailableByHeroID(CDOTAGameManager *const this, int iPlayerID, int iHeroID)
{
  KeyValues *HeroDataByHeroID; // rax

  if ( iHeroID > 0x7F )
    return 0;
  if ( IsStableMode() )
  {
    if ( this->m_StableHeroAvailable.m_Value[iHeroID] )
      goto LABEL_5;
    return 0;
  }
  if ( !this->m_CurrentHeroAvailable.m_Value[iHeroID] )
    return 0;
LABEL_5:
  HeroDataByHeroID = CDOTAGameManager::GetHeroDataByHeroID(this, iHeroID);
  return IsHeroAvailableByKV(iPlayerID, HeroDataByHeroID);
}


// CDOTAGameManager::IsHeroCulledByHeroID  (line 2178, @0x00000000024c38c0, libserver.so)
bool __fastcall CDOTAGameManager::IsHeroCulledByHeroID(CDOTAGameManager *const this, int iHeroID)
{
  bool result; // al

  result = 0;
  if ( iHeroID <= 0x7F )
    return this->m_CulledHeroes.m_Value[iHeroID];
  return result;
}


// CDOTAGameManager::IsHeroAvailableByName  (line 2190, @0x000000000253a2f0, libserver.so)  // inlines: GetHeroesKeyValues, GetInt, HKeySymbol, IsAddOnGame
// calls: KeyValues::FindKey, CKeyValues_Data::Internal_GetInt, CDOTAGameManager::IsHeroAvailableByHeroID
// callers: CDOTAGamerules::HeroPickState_Think_CM_SELECT, CDOTAPlayer::HandleHeroSelection
bool __fastcall CDOTAGameManager::IsHeroAvailableByName(
        CDOTAGameManager *const this,
        int iPlayerID,
        const char *pszHeroName)
{
  KeyValues *m_pkvAddOnHeroes; // rdi
  KeyValues *Key; // rax
  KeyValues *v8; // rax
  int Int; // edx

  if ( this->m_bCustomGame || this->m_bEventGame )
    m_pkvAddOnHeroes = this->m_pkvAddOnHeroes;
  else
    m_pkvAddOnHeroes = this->m_pkvHeroes;
  if ( m_pkvAddOnHeroes == 0 )
    return 0;
  if ( *pszHeroName == 0 )
    return 0;
  Key = KeyValues::FindKey(m_pkvAddOnHeroes, pszHeroName, 0);
  if ( Key == 0 )
    return 0;
  v8 = KeyValues::FindKey(Key, this->m_hKvSymbols[3]);
  Int = 0;
  if ( v8 != 0 )
    Int = CKeyValues_Data::Internal_GetInt(v8);
  return CDOTAGameManager::IsHeroAvailableByHeroID(this, iPlayerID, Int);
}


// CDOTAGameManager::SetHeroAvailableByHeroID  (line 2211, @0x00000000024c38e0, libserver.so)  // inlines: Get, GetCurrentMode, NetworkStateChanged, Set, operator CEntityInstance*
// calls: IsStableMode
// callers: CDOTAGamerules::CM_AddBannedHero, CDOTAGamerules::HeroPickState_Enter_ALL_DRAFT_SELECT, CDOTAGamerules::HeroPickState_Enter_CM_INTRO, CDOTAGamerules::HeroPickState_Enter_CD_INTRO
void __fastcall CDOTAGameManager::SetHeroAvailableByHeroID(CDOTAGameManager *const this, int iHeroID, bool bAvailable)
{
  CEntityInstance *v6; // rdi
  CEntityInstance *m_pObj; // rdi

  if ( iHeroID <= 0x7F )
  {
    if ( IsStableMode() )
    {
      if ( this->m_StableHeroAvailable.m_Value[iHeroID] != bAvailable )
      {
        m_pObj = this->__m_pChainEntity.m_pObj;
        if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 )
          (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 1560, iHeroID, this->__m_pChainEntity.m_PathIndex.m_Value);
        this->m_StableHeroAvailable.m_Value[iHeroID] = bAvailable;
      }
    }
    else if ( this->m_CurrentHeroAvailable.m_Value[iHeroID] != bAvailable )
    {
      v6 = this->__m_pChainEntity.m_pObj;
      if ( v6 != 0 && (v6->m_pEntity->m_flags & 0x400) == 0 )
        (*(v6->_vptr_IHandleEntity + 22))(v6, 1688, iHeroID, this->__m_pChainEntity.m_PathIndex.m_Value);
      this->m_CurrentHeroAvailable.m_Value[iHeroID] = bAvailable;
    }
  }
}


// CDOTAGameManager::PrintHighestFreeIDs  (line 2237, @0x0000000002536370, libserver.so)  // inlines: GetAbilitiesKeyValues, GetHeroesKeyValues, GetInt, HKeySymbol, IsAddOnGame
// calls: KeyValues::GetFirstSubKey, KeyValues::GetNextKey, KeyValues::GetName, V_stricmp_fast, KeyValues::FindKey, CKeyValues_Data::Internal_GetInt, Msg, CDOTAGameManager::LoadKeyValuesFiles
// strings: "npc_dota_hero_base", "ability_base", "Next free IDs:\n", "  Hero ID: %d\n", "  Item ID: %d\n", "  Ability ID: %d\n"
void __fastcall CDOTAGameManager::PrintHighestFreeIDs(CDOTAGameManager *const this)
{
  KeyValues *m_pkvHeroes; // rdi
  int Int; // r13d
  KeyValues *i; // rbx
  const char *Name; // rax
  KeyValues *Key; // rax
  KeyValues *v7; // rax
  KeyValues *m_pkvAddOnAbilities; // rdi
  KeyValues *FirstSubKey; // rbx
  int v10; // r14d
  int v11; // r15d
  const char *v12; // rax
  KeyValues *v13; // rax
  int v14; // eax
  int v15; // r15d
  int v16; // r14d

  if ( !this->m_bCustomGame && !this->m_bEventGame )
  {
    m_pkvHeroes = this->m_pkvHeroes;
    if ( m_pkvHeroes != 0 )
      goto LABEL_4;
LABEL_36:
    CDOTAGameManager::LoadKeyValuesFiles(this);
    if ( this->m_bCustomGame || this->m_bEventGame )
      m_pkvHeroes = this->m_pkvAddOnHeroes;
    else
      m_pkvHeroes = this->m_pkvHeroes;
    if ( m_pkvHeroes == 0 )
      return;
    goto LABEL_4;
  }
  m_pkvHeroes = this->m_pkvAddOnHeroes;
  if ( m_pkvHeroes == 0 )
    goto LABEL_36;
LABEL_4:
  Int = 0;
  for ( i = KeyValues::GetFirstSubKey(m_pkvHeroes); i != 0; i = KeyValues::GetNextKey(i) )
  {
    while ( 1 )
    {
      Name = KeyValues::GetName(i);
      if ( V_stricmp_fast(Name, "npc_dota_hero_base") != 0 && KeyValues::GetFirstSubKey(i) != 0 )
      {
        Key = KeyValues::FindKey(i, this->m_hKvSymbols[3]);
        if ( Key != 0 )
          LODWORD(Key) = CKeyValues_Data::Internal_GetInt(Key);
        if ( Key >= Int )
        {
          Int = 0;
          v7 = KeyValues::FindKey(i, this->m_hKvSymbols[3]);
          if ( v7 != 0 )
            break;
        }
      }
      i = KeyValues::GetNextKey(i);
      if ( i == 0 )
        goto LABEL_14;
    }
    Int = CKeyValues_Data::Internal_GetInt(v7);
  }
LABEL_14:
  if ( this->m_bCustomGame || this->m_bEventGame )
  {
    m_pkvAddOnAbilities = this->m_pkvAddOnAbilities;
    if ( m_pkvAddOnAbilities == 0 )
      return;
  }
  else
  {
    m_pkvAddOnAbilities = this->m_pkvAbilities;
    if ( m_pkvAddOnAbilities == 0 )
      return;
  }
  FirstSubKey = KeyValues::GetFirstSubKey(m_pkvAddOnAbilities);
  if ( FirstSubKey != 0 )
  {
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( KeyValues::GetFirstSubKey(FirstSubKey) != 0 )
        {
          v12 = KeyValues::GetName(FirstSubKey);
          if ( V_stricmp_fast(v12, "ability_base") != 0 )
            break;
        }
LABEL_18:
        FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
        if ( FirstSubKey == 0 )
          goto LABEL_26;
      }
      v13 = KeyValues::FindKey(FirstSubKey, this->m_hKvSymbols[0]);
      if ( v13 == 0 )
        break;
      v14 = CKeyValues_Data::Internal_GetInt(v13);
      if ( v14 <= 4999 )
        goto LABEL_29;
      if ( v10 < v14 )
        v10 = v14;
      FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
      if ( FirstSubKey == 0 )
      {
LABEL_26:
        v15 = v11 + 1;
        v16 = v10 + 1;
        goto LABEL_27;
      }
    }
    v14 = 0;
LABEL_29:
    if ( v11 < v14 )
      v11 = v14;
    goto LABEL_18;
  }
  v16 = 1;
  v15 = 1;
LABEL_27:
  Msg("Next free IDs:\n");
  Msg("  Hero ID: %d\n", Int + 1);
  Msg("  Item ID: %d\n", v15);
  Msg("  Ability ID: %d\n", v16);
}


// CDOTAGameManager::GetHeroDataByName  (line 2300, @0x00000000024c39b0, libserver.so)  // inlines: GetHeroesKeyValues, IsAddOnGame
// calls: KeyValues::FindKey
// callers: CDOTAGameManager::GetDataForHeroOrUnit, CDOTAGamerules::AD_AddBannedHero, CDOTAGamerules::CM_IsSelectedHero, CDOTAGamerules::CM_IsBannedHero, CDOTAGamerules::CD_IsBannedHero, CDOTAGamerules::AddTeamCompToCriteria, CDOTAGameManager::GetHeroDataByName_Script, CDOTAGamerules::CM_AddBannedHero, CDOTAGamerules::CM_AddSelectedHero, ParseChallengeVariable, FindLeastPickedHeroClassForTeam, CDOTA_Bot::Init (13 total)
KeyValues *__fastcall CDOTAGameManager::GetHeroDataByName(CDOTAGameManager *const this, const char *pszHeroName)
{
  KeyValues *m_pkvAddOnHeroes; // rdi

  if ( this->m_bCustomGame || this->m_bEventGame )
    m_pkvAddOnHeroes = this->m_pkvAddOnHeroes;
  else
    m_pkvAddOnHeroes = this->m_pkvHeroes;
  if ( m_pkvAddOnHeroes != 0 && *pszHeroName != 0 )
    return KeyValues::FindKey(m_pkvAddOnHeroes, pszHeroName, 0);
  else
    return 0;
}


// CDOTAGameManager::GetHeroDataByName_Script  (line 2315, @0x00000000024de180, libserver.so)  // inlines: CVariantBase, CreateTableFromKeyValues, TakeOwnership
// calls: CDOTAGameManager::GetHeroDataByName, Recursive_ConvertKeyValuesToTable, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
__int64 __fastcall CDOTAGameManager::GetHeroDataByName_Script(
        __int64 a1,
        CDOTAGameManager *const this,
        const char *pszHeroName)
{
  KeyValues *HeroDataByName; // rax
  KeyValues *v5; // r13
  IScriptVM *v6; // r12

  HeroDataByName = CDOTAGameManager::GetHeroDataByName(this, pszHeroName);
  *(a1 + 10) = 0;
  v5 = HeroDataByName;
  *(a1 + 8) = 0;
  *a1 = 0;
  if ( HeroDataByName == 0 )
    return a1;
  v6 = g_pScriptVM;
  (*(*g_pScriptVM + 264LL))(g_pScriptVM, a1);
  if ( *a1 != 0 )
  {
    Recursive_ConvertKeyValuesToTable(v5, v6, *a1);
    if ( *(a1 + 8) != 31 )
      return a1;
  }
  else if ( *(a1 + 8) != 31 )
  {
    return a1;
  }
  *(a1 + 8) = 36;
  return a1;
}


// CDOTAGameManager::GetDataForHeroOrUnit  (line 2332, @0x00000000024c3a00, libserver.so)  // inlines: GetUnitsKeyValues, IsAddOnGame, V_isempty
// calls: KeyValues::FindKey, CDOTAGameManager::GetHeroDataByName
// callers: CSource2Server::GetDefaultScaleForCharacter, CSource2Server::GetModelNameForCharacter, CSource2Server::GetEconItemNamesForCharacter, CSource2Server::FindUnitDataByModelNameCheckModelModifiers, CSource2Server::GetEconItemsInfoForCharacter, CDOTA_PlayerResource::ReplaceHeroWith, dota_unit_setvalue, CDOTA_BaseNPC_Creature::InitializeWearableItemDefs, CDOTA_BaseNPC_Hero::BuildWearableSpawnList, CDOTA_BaseNPC::Precache, CDOTA_BaseNPC_Creature::InitializeCreature, CDOTA_Modifier_Juggernaut_Omnislash::OnIntervalThink (13 total)
KeyValues *__fastcall CDOTAGameManager::GetDataForHeroOrUnit(CDOTAGameManager *const this, const char *pszName)
{
  KeyValues *v4; // rdi
  KeyValues *result; // rax

  if ( pszName == 0 || *pszName == 0 )
    return 0;
  v4 = this->m_bCustomGame || this->m_bEventGame ? this->m_pkvAddOnUnits : this->m_pkvUnits;
  if ( v4 == 0 )
    return 0;
  result = KeyValues::FindKey(v4, pszName, 0);
  if ( result == 0 )
    return CDOTAGameManager::GetHeroDataByName(this, pszName);
  return result;
}


// CDOTAGameManager::GetHeroDataByHeroID  (line 2352, @0x0000000002536600, libserver.so)  // inlines: Find, FindInBucket, Get, GetHeroesKeyValues, IsAddOnGame, ModPowerOf2<unsigned int, int>, MurmurHash3Int, MurmurHash3Item<int>, operator(), operator[]
// calls: CDOTAGameManager::LoadKeyValuesFiles
// callers: CSource2Server::FindUnitDataByModelNameCheckModelModifiers, CDOTAGameManager::ResetEnabledHeroes, CDOTAGameManager::ResetLowViolenceHeroes, CDOTAGameManager::IsHeroAvailableByHeroID, CDOTAGameManager::GetHeroUnitNameByID, CDOTAGamerules::HeroPickState_Enter_CM_INTRO, CDOTAGamerules::HeroPickState_Enter_CD_INTRO, CDOTAGamerules::GetSmartRandomHeroList, CDOTAGamerules::CreateDemoPlayers, CDOTAGamerules::StartCreateHeroStatues, CDOTA_Hero_Recorder::ChangeHero, CDOTA_PlayerResource::GetSelectedHeroName (20 total)
KeyValues *__fastcall CDOTAGameManager::GetHeroDataByHeroID(CDOTAGameManager *const this, int iHeroID)
{
  KeyValues *m_pkvAddOnHeroes; // rax
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::HashBucket_t *m_pMemory; // r8
  int m_Size; // edx
  unsigned int v6; // edi
  __int64 m_iNode; // rax
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v8; // rcx
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v9; // rax
  __int64 m_iNextNode; // rax
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::IndexType_t m_nMinRehashedBucket; // r9d
  int i; // edx
  int v13; // ecx
  __int64 v14; // rax
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v15; // rcx
  __int64 v16; // rax
  KeyValues *m_pkvHeroes; // rax
  int iHeroIDa; // [rsp+Ch] [rbp-14h]

  if ( this->m_bCustomGame || this->m_bEventGame )
    m_pkvAddOnHeroes = this->m_pkvAddOnHeroes;
  else
    m_pkvAddOnHeroes = this->m_pkvHeroes;
  if ( m_pkvAddOnHeroes != 0
    || ((iHeroIDa = iHeroID, CDOTAGameManager::LoadKeyValuesFiles(this), iHeroID = iHeroIDa, *&this->m_bCustomGame == 0)
      ? (m_pkvHeroes = this->m_pkvHeroes)
      : (m_pkvHeroes = this->m_pkvAddOnHeroes),
        m_pkvHeroes != 0) )
  {
    if ( (iHeroID - 1) <= 0x7E && this->m_mapHeroesByID.m_cElements != 0 )
    {
      m_pMemory = this->m_mapHeroesByID.m_vecHashBuckets.m_Memory.m_pMemory;
      m_Size = this->m_mapHeroesByID.m_vecHashBuckets.m_Size;
      v6 = (-1028477387 * ((-2048144789 * iHeroID) ^ ((-2048144789 * iHeroID) >> 13)))
         ^ ((-1028477387 * ((-2048144789 * iHeroID) ^ ((-2048144789 * iHeroID) >> 13))) >> 16);
      m_iNode = m_pMemory[v6 & (m_Size - 1)].m_iNode;
      if ( m_iNode != -1 )
      {
        v8 = this->m_mapHeroesByID.m_memNodes.m_pMemory;
        v9 = &v8[m_iNode];
        if ( v9->m_key == iHeroID )
          return v9->m_elem.m_pKeyValues;
        while ( 1 )
        {
          m_iNextNode = v9->m_iNextNode;
          if ( m_iNextNode == -1 )
            break;
          v9 = &v8[m_iNextNode];
          if ( v9->m_key == iHeroID )
            return v9->m_elem.m_pKeyValues;
        }
      }
      m_nMinRehashedBucket = this->m_mapHeroesByID.m_nMinRehashedBucket;
      for ( i = m_Size >> 1; i >= m_nMinRehashedBucket; i >>= 1 )
      {
        v13 = v6 & (i - 1);
        if ( ((1 << (v6 & (i - 1))) & this->m_mapHeroesByID.m_bitsMigratedBuckets.m_pInt[v13 >> 5]) == 0 )
        {
          v14 = m_pMemory[v13].m_iNode;
          if ( v14 != -1 )
          {
            v15 = this->m_mapHeroesByID.m_memNodes.m_pMemory;
            v9 = &v15[v14];
            if ( v9->m_key == iHeroID )
              return v9->m_elem.m_pKeyValues;
            while ( 1 )
            {
              v16 = v9->m_iNextNode;
              if ( v16 == -1 )
                break;
              v9 = &v15[v16];
              if ( v9->m_key == iHeroID )
                return v9->m_elem.m_pKeyValues;
            }
          }
        }
      }
    }
  }
  return 0;
}


// CDOTAGameManager::GetHeroDataStructByHeroID  (line 2376, @0x00000000025416b0, libserver.so)  // inlines: Find, FindInBucket, Get, GetHeroesKeyValues, IsAddOnGame, ModPowerOf2<unsigned int, int>, MurmurHash3Int, MurmurHash3Item<int>, operator(), operator[]
// calls: CDOTAGameManager::LoadKeyValuesFiles
const HeroData_t *__fastcall CDOTAGameManager::GetHeroDataStructByHeroID(CDOTAGameManager *const this, int iHeroID)
{
  KeyValues *m_pkvAddOnHeroes; // rax
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::HashBucket_t *m_pMemory; // r8
  int m_Size; // edx
  unsigned int v6; // edi
  __int64 m_iNode; // rax
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v8; // rcx
  const HeroData_t *v9; // rax
  __int64 m_nModelCount; // rax
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::IndexType_t m_nMinRehashedBucket; // r9d
  int i; // edx
  int v13; // ecx
  __int64 v14; // rax
  CUtlHashMapLarge<int,CDOTAGameManager::HeroInfo_t,CUtlHashMapLargeDefEquals<int>,MurmurHash3Functor<int> >::Node_t *v15; // rcx
  __int64 v16; // rax
  KeyValues *m_pkvHeroes; // rax
  int iHeroIDa; // [rsp+Ch] [rbp-14h]

  if ( this->m_bCustomGame || this->m_bEventGame )
    m_pkvAddOnHeroes = this->m_pkvAddOnHeroes;
  else
    m_pkvAddOnHeroes = this->m_pkvHeroes;
  if ( m_pkvAddOnHeroes != 0
    || ((iHeroIDa = iHeroID, CDOTAGameManager::LoadKeyValuesFiles(this), iHeroID = iHeroIDa, *&this->m_bCustomGame == 0)
      ? (m_pkvHeroes = this->m_pkvHeroes)
      : (m_pkvHeroes = this->m_pkvAddOnHeroes),
        m_pkvHeroes != 0) )
  {
    if ( (iHeroID - 1) <= 0x7E && this->m_mapHeroesByID.m_cElements != 0 )
    {
      m_pMemory = this->m_mapHeroesByID.m_vecHashBuckets.m_Memory.m_pMemory;
      m_Size = this->m_mapHeroesByID.m_vecHashBuckets.m_Size;
      v6 = (-1028477387 * ((-2048144789 * iHeroID) ^ ((-2048144789 * iHeroID) >> 13)))
         ^ ((-1028477387 * ((-2048144789 * iHeroID) ^ ((-2048144789 * iHeroID) >> 13))) >> 16);
      m_iNode = m_pMemory[v6 & (m_Size - 1)].m_iNode;
      if ( m_iNode != -1 )
      {
        v8 = this->m_mapHeroesByID.m_memNodes.m_pMemory;
        v9 = &v8[m_iNode];
        if ( v9->m_nModelCount == iHeroID )
          return v9 + 2;
        while ( 1 )
        {
          m_nModelCount = v9[6].m_nModelCount;
          if ( m_nModelCount == -1 )
            break;
          v9 = &v8[m_nModelCount];
          if ( v9->m_nModelCount == iHeroID )
            return v9 + 2;
        }
      }
      m_nMinRehashedBucket = this->m_mapHeroesByID.m_nMinRehashedBucket;
      for ( i = m_Size >> 1; i >= m_nMinRehashedBucket; i >>= 1 )
      {
        v13 = v6 & (i - 1);
        if ( ((1 << (v6 & (i - 1))) & this->m_mapHeroesByID.m_bitsMigratedBuckets.m_pInt[v13 >> 5]) == 0 )
        {
          v14 = m_pMemory[v13].m_iNode;
          if ( v14 != -1 )
          {
            v15 = this->m_mapHeroesByID.m_memNodes.m_pMemory;
            v9 = &v15[v14];
            if ( v9->m_nModelCount == iHeroID )
              return v9 + 2;
            while ( 1 )
            {
              v16 = v9[6].m_nModelCount;
              if ( v16 == -1 )
                break;
              v9 = &v15[v16];
              if ( v9->m_nModelCount == iHeroID )
                return v9 + 2;
            }
          }
        }
      }
    }
  }
  return 0;
}


// CDOTAGameManager::GetHeroDataByModelName  (line 2400, @0x0000000002541850, libserver.so)  // inlines: GetHeroesKeyValues, IsAddOnGame
// calls: CDOTAGameManager::GetFirstHero, CDOTAGameManager::GetNextHero, KeyValues::GetString, V_stricmp_fast, CDOTAGameManager::LoadKeyValuesFiles
// callers: CSource2Server::FindUnitDataByModelNameCheckModelModifiers
KeyValues *__fastcall CDOTAGameManager::GetHeroDataByModelName(CDOTAGameManager *const this, const char *pModelName)
{
  KeyValues *FirstHero; // rbx
  const char *String; // rax
  KeyValues *m_pkvAddOnHeroes; // rax

  if ( *&this->m_bCustomGame != 0 )
    m_pkvAddOnHeroes = this->m_pkvAddOnHeroes;
  else
    m_pkvAddOnHeroes = this->m_pkvHeroes;
  if ( m_pkvAddOnHeroes == 0 )
    CDOTAGameManager::LoadKeyValuesFiles(this);
  FirstHero = CDOTAGameManager::GetFirstHero(this);
  if ( FirstHero == 0 )
    return 0;
  while ( 1 )
  {
    String = KeyValues::GetString(FirstHero, "Model", "", 0, 0);
    if ( String != 0 && *String != 0 && V_stricmp_fast(String, pModelName) == 0 )
      break;
    FirstHero = CDOTAGameManager::GetNextHero(this, FirstHero);
    if ( FirstHero == 0 )
      return 0;
  }
  return FirstHero;
}


// CDOTAGameManager::GetUnitDataByModelName  (line 2422, @0x0000000002541930, libserver.so)  // inlines: GetUnitsKeyValues, IsAddOnGame, V_isempty
// calls: KeyValues::GetFirstSubKey, KeyValues::GetString, V_stricmp_fast, KeyValues::GetNextKey, CDOTAGameManager::LoadKeyValuesFiles
// callers: CSource2Server::FindUnitDataByModelNameCheckModelModifiers
KeyValues *__fastcall CDOTAGameManager::GetUnitDataByModelName(CDOTAGameManager *const this, const char *pModelName)
{
  KeyValues *FirstSubKey; // rbx
  const char *String; // rax
  KeyValues *m_pkvAddOnUnits; // rbx

  if ( *&this->m_bCustomGame != 0 )
    m_pkvAddOnUnits = this->m_pkvAddOnUnits;
  else
    m_pkvAddOnUnits = this->m_pkvUnits;
  if ( m_pkvAddOnUnits == 0 )
    CDOTAGameManager::LoadKeyValuesFiles(this);
  FirstSubKey = KeyValues::GetFirstSubKey(m_pkvAddOnUnits);
  if ( FirstSubKey == 0 )
    return 0;
  while ( 1 )
  {
    String = KeyValues::GetString(FirstSubKey, "Model", "", 0, 0);
    if ( String != 0 && *String != 0 && V_stricmp_fast(String, pModelName) == 0 )
      break;
    FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
    if ( FirstSubKey == 0 )
      return 0;
  }
  return FirstSubKey;
}


// CDOTAGameManager::GetFirstHero  (line 2446, @0x00000000024c3a80, libserver.so)  // inlines: GetBool, GetHeroesKeyValues, GetInt, HKeySymbol, IsAddOnGame
// calls: KeyValues::GetFirstSubKey, IsAppDota2Main, KeyValues::GetNextKey, KeyValues::FindKey, CKeyValues_Data::Internal_GetInt
// callers: CDOTAGameManager::LoadHeroWhitelist, CDOTAGamerules::HeroPickState_Enter_ARDM_SELECT, CDOTAGamerules::HeroPickState_Enter_Ability_Draft_SELECT, CDOTAGamerules::HeroPickState_Think_CM_SELECT, CDOTAGamerules::HeroPickState_Think_CD_SELECT, CDOTAGamerules::MakeRandomHeroSelection, CDOTAGamerules::HeroPickState_Enter_SD_SELECT, CDOTAGamerules::SelectSmartRandomHero, CDOTAGameManager::GetHeroDataByModelName, CDOTA_Grinder::FrameUpdateHeroes
KeyValues *__fastcall CDOTAGameManager::GetFirstHero(CDOTAGameManager *const this)
{
  KeyValues *m_pkvAddOnHeroes; // rdi
  KeyValues *FirstSubKey; // rbx
  KeyValues *Key; // rax

  if ( this->m_bCustomGame || this->m_bEventGame )
    m_pkvAddOnHeroes = this->m_pkvAddOnHeroes;
  else
    m_pkvAddOnHeroes = this->m_pkvHeroes;
  if ( m_pkvAddOnHeroes == 0 )
    return 0;
  FirstSubKey = KeyValues::GetFirstSubKey(m_pkvAddOnHeroes);
  if ( FirstSubKey == 0 )
    return 0;
  while ( 1 )
  {
    Key = KeyValues::FindKey(FirstSubKey, this->m_hKvSymbols[2]);
    if ( Key != 0 && CKeyValues_Data::Internal_GetInt(Key) != 0 )
      break;
    if ( IsAppDota2Main() )
    {
      if ( dota_debug_game_internal.m_pParent->m_Value.m_nValue != 0 )
        return FirstSubKey;
      FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
      if ( FirstSubKey == 0 )
        return 0;
    }
    else
    {
      FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
      if ( FirstSubKey == 0 )
        return 0;
    }
  }
  return FirstSubKey;
}


// CDOTAGameManager::GetNextHero  (line 2466, @0x00000000024c3b40, libserver.so)  // inlines: GetBool, GetInt, HKeySymbol
// calls: KeyValues::GetNextKey, IsAppDota2Main, KeyValues::FindKey, CKeyValues_Data::Internal_GetInt
// callers: CDOTAGameManager::LoadHeroWhitelist, CDOTAGamerules::HeroPickState_Enter_ARDM_SELECT, CDOTAGamerules::HeroPickState_Enter_Ability_Draft_SELECT, CDOTAGamerules::HeroPickState_Think_CM_SELECT, CDOTAGamerules::HeroPickState_Think_CD_SELECT, CDOTAGamerules::MakeRandomHeroSelection, CDOTAGamerules::HeroPickState_Enter_SD_SELECT, CDOTAGamerules::SelectSmartRandomHero, CDOTAGameManager::GetHeroDataByModelName, CDOTA_Grinder::FrameUpdateHeroes
KeyValues *__fastcall CDOTAGameManager::GetNextHero(CDOTAGameManager *const this, KeyValues *pkvHero)
{
  KeyValues *NextKey; // rbx
  KeyValues *Key; // rax

  if ( pkvHero == 0 )
    return 0;
  NextKey = KeyValues::GetNextKey(pkvHero);
  if ( NextKey == 0 )
    return 0;
  while ( 1 )
  {
    Key = KeyValues::FindKey(NextKey, this->m_hKvSymbols[2]);
    if ( Key != 0 && CKeyValues_Data::Internal_GetInt(Key) != 0 )
      break;
    if ( IsAppDota2Main() )
    {
      if ( dota_debug_game_internal.m_pParent->m_Value.m_nValue != 0 )
        return NextKey;
      NextKey = KeyValues::GetNextKey(NextKey);
      if ( NextKey == 0 )
        return 0;
    }
    else
    {
      NextKey = KeyValues::GetNextKey(NextKey);
      if ( NextKey == 0 )
        return 0;
    }
  }
  return NextKey;
}


// CDOTAGameManager::GetHeroIDByName  (line 2486, @0x00000000024b89a0, libserver.so)  // inlines: GetHeroesKeyValues, GetInt, HKeySymbol, IsAddOnGame
// calls: V_stricmp_fast, KeyValues::FindKey, CKeyValues_Data::Internal_GetInt
// callers: CSource2Server::GetEconItemNamesForCharacter, CSource2Server::GetEconItemsInfoForCharacter, CDOTABaseGameMode::SetCustomGameForceHero, CDOTA_BaseNPC::BuildWearableSpawnList, CDOTAGamerules::State_Enter_POST_GAME, CDOTA_Hero_Recorder::ChangeHero, CDOTAInGamePredictionGameSystem::BuildActivePredictions, CDOTA_PlayerResource::WhoSelectedHero, CDOTA_PlayerResource::SetSelectedHeroID, CDOTAPlayer::HandleSuggestHeroSelection, CDOTA_PlayerResource::SetPossibleHeroSelection, CDOTAPlayer::HandleSuggestHeroPick (21 total)
// strings: "player_loadout"
int __fastcall CDOTAGameManager::GetHeroIDByName(CDOTAGameManager *const this, const char *pszHeroName)
{
  int v4; // edx
  int result; // eax
  KeyValues *v6; // rdi
  KeyValues *Key; // rax
  KeyValues *v8; // rax

  if ( pszHeroName == 0 || *pszHeroName == 0 )
    return -1;
  v4 = V_stricmp_fast(pszHeroName, "player_loadout");
  result = 1000;
  if ( v4 == 0 )
    return result;
  v6 = this->m_bCustomGame || this->m_bEventGame ? this->m_pkvAddOnHeroes : this->m_pkvHeroes;
  if ( v6 != 0
    && (Key = KeyValues::FindKey(v6, pszHeroName, 0)) != 0
    && (v8 = KeyValues::FindKey(Key, this->m_hKvSymbols[3])) != 0 )
  {
    return CKeyValues_Data::Internal_GetInt(v8);
  }
  else
  {
    return -1;
  }
}


// CDOTAGameManager::GetHeroNameByID  (line 2515, @0x000000000253e3a0, libserver.so)  // inlines: GetHeroNameForUnitName, StringAfterPrefix<char const>
// calls: CDOTAGameManager::GetHeroUnitNameByID, _V_StringAfterPrefix
// callers: dev_auto_draft_test, GenerateChallengeVariableString
// strings: "npc_dota_hero_"
const char *__fastcall CDOTAGameManager::GetHeroNameByID(CDOTAGameManager *const this, int iHeroID)
{
  const char *HeroUnitNameByID; // rax

  HeroUnitNameByID = CDOTAGameManager::GetHeroUnitNameByID(this, iHeroID);
  if ( HeroUnitNameByID != 0 && *HeroUnitNameByID != 0 )
    return _V_StringAfterPrefix(HeroUnitNameByID, "npc_dota_hero_");
  else
    return 0;
}


// CDOTAGameManager::GetHeroNameForUnitName  (line 2521, @0x00000000024b4e00, libserver.so)  // inlines: StringAfterPrefix<char const>
// calls: _V_StringAfterPrefix
// strings: "npc_dota_hero_"
const char *__fastcall CDOTAGameManager::GetHeroNameForUnitName(
        CDOTAGameManager *const this,
        const char *pszHeroUnitName)
{
  if ( pszHeroUnitName != 0 && *pszHeroUnitName != 0 )
    return _V_StringAfterPrefix(pszHeroUnitName, "npc_dota_hero_");
  else
    return 0;
}


// CDOTAGameManager::GetUnitNameForHeroName  (line 2529, @0x00000000024c3be0, libserver.so)
// calls: V_snprintf, V_strlower_fast
// strings: "npc_dota_hero_%s"
void __fastcall CDOTAGameManager::GetUnitNameForHeroName(
        CDOTAGameManager *const this,
        const char *pszHeroName,
        char *pUnitName,
        int nBufLen)
{
  if ( pszHeroName != 0 && *pszHeroName != 0 )
  {
    V_snprintf(pUnitName, nBufLen, "npc_dota_hero_%s", pszHeroName);
    V_strlower_fast(pUnitName);
  }
  else
  {
    *pUnitName = 0;
  }
}


// CDOTAGameManager::GetHeroUnitNameByID  (line 2544, @0x000000000253e370, libserver.so)
// calls: CDOTAGameManager::GetHeroDataByHeroID, KeyValues::GetName
// callers: CSource2Server::GetCharacterList, CDOTAGameManager::GetHeroNameByID, CDOTAGamerules::HeroPickState_Think_CUSTOMGAME_SELECT, CDOTAGamerules::OnDemoHero, CDOTAGamerules::CreateDemoPlayers, CDOTA_TeamCommander::MakeHeroSelection, CDOTA_BaseNPC_Effigy_Statue::GetBaseModelName, CDOTA_Unit_Hero_Oracle::ModifyOrAppendCriteria
const char *__fastcall CDOTAGameManager::GetHeroUnitNameByID(CDOTAGameManager *const this, int iHeroID)
{
  KeyValues *HeroDataByHeroID; // rax

  HeroDataByHeroID = CDOTAGameManager::GetHeroDataByHeroID(this, iHeroID);
  if ( HeroDataByHeroID != 0 )
    return KeyValues::GetName(HeroDataByHeroID);
  else
    return 0;
}


// CDOTAGameManager::GetTutorialTipDataByName  (line 2557, @0x00000000024c3c30, libserver.so)
// calls: KeyValues::FindKey
KeyValues *__fastcall CDOTAGameManager::GetTutorialTipDataByName(CDOTAGameManager *const this, const char *pszTipName)
{
  KeyValues *m_pTutorialTipKeyValues; // rdi

  m_pTutorialTipKeyValues = this->m_pTutorialTipKeyValues;
  if ( m_pTutorialTipKeyValues != 0 && *pszTipName != 0 )
    return KeyValues::FindKey(m_pTutorialTipKeyValues, pszTipName, 0);
  else
    return 0;
}


// CDOTAGameManager::GetTutorialLessonDataByName  (line 2570, @0x00000000024c3c60, libserver.so)
// calls: KeyValues::FindKey
// callers: CDOTA_Tutorial::FindLessonKey
KeyValues *__fastcall CDOTAGameManager::GetTutorialLessonDataByName(
        CDOTAGameManager *const this,
        const char *pszLessonName)
{
  KeyValues *m_pTutorialLessonKeyValues; // rdi

  m_pTutorialLessonKeyValues = this->m_pTutorialLessonKeyValues;
  if ( m_pTutorialLessonKeyValues != 0 && *pszLessonName != 0 )
    return KeyValues::FindKey(m_pTutorialLessonKeyValues, pszLessonName, 0);
  else
    return 0;
}


// CDOTAGameManager::GetTutorialLessonKeys  (line 2583, @0x00000000024c3c90, libserver.so)
// callers: TutorialLessonAutocomplete
KeyValues *__fastcall CDOTAGameManager::GetTutorialLessonKeys(CDOTAGameManager *const this)
{
  return this->m_pTutorialLessonKeyValues;
}


// CDOTAGameManager::GetPortraitBackgroundMaterialByModel  (line 2604, @0x00000000024c3ca0, libserver.so)  // inlines: Find, String, operator const UtlSymId_t, operator[]
// calls: CUtlSymbolTable::Find
// callers: CDOTA_BaseNPC_Hero::GetPortraitMaterial, CDOTA_BaseNPC::Precache
const char *__fastcall CDOTAGameManager::GetPortraitBackgroundMaterialByModel(
        CDOTAGameManager *const this,
        const char *pszModelName)
{
  CUtlSymbolLarge *v3; // rdx
  const char *result; // rax
  UtlSymId_t id; // [rsp+0h] [rbp-28h]

  if ( pszModelName == 0 )
    return 0;
  CUtlSymbolTable::Find(&this->m_ServerPortraitInfo.m_SymbolTable, pszModelName);
  if ( id == 0xFFFF )
    return 0;
  v3 = &this->m_ServerPortraitInfo.m_Vector.m_Memory.m_pMemory[id];
  result = "";
  if ( v3->u.m_Id != 0 )
    return v3->u.m_Id;
  return result;
}


// CDOTAGameManager::LoadHeroWhitelist  (line 2621, @0x00000000024c3d10, libserver.so)  // inlines: GetBool, SetBool
// calls: KeyValues::operator new, KeyValues::KeyValues, KeyValues::LoadFromFile, CDOTAGameManager::GetFirstHero, KeyValues::GetName, KeyValues::GetInt, KeyValues::SetInt, CDOTAGameManager::GetNextHero, KeyValues::deleteThis, KeyValues::operator delete, _Unwind_Resume
// callers: CDOTAGameManager::SetupGameKeyValues
// strings: "pWhitelistKeyValues", "scripts/npc/activelist.txt"
// globals: g_DOTAGameManager
void __fastcall CDOTAGameManager::LoadHeroWhitelist(CDOTAGameManager *const this)
{
  KeyValues *v1; // r12
  IBaseFileSystem *v2; // rsi
  KeyValues *i; // rbx
  const char *Name; // rax
  int Int; // eax

  v1 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v1, "pWhitelistKeyValues");
  if ( v1 != 0 )
  {
    v2 = 0;
    if ( g_pFullFileSystem != 0 )
      v2 = &g_pFullFileSystem->IBaseFileSystem;
    if ( KeyValues::LoadFromFile(v1, v2, "scripts/npc/activelist.txt", "GAME", 0) )
    {
      for ( i = CDOTAGameManager::GetFirstHero(&g_DOTAGameManager);
            i != 0;
            i = CDOTAGameManager::GetNextHero(&g_DOTAGameManager, i) )
      {
        Name = KeyValues::GetName(i);
        Int = KeyValues::GetInt(v1, Name, 0);
        KeyValues::SetInt(i, "Enabled", Int != 0);
      }
    }
    KeyValues::deleteThis(v1);
  }
}


// CDOTAGameManager::LoadCustomHeroList  (line 2665, @0x00000000024c3e00, libserver.so)  // inlines: GetBool, GetHeroesKeyValues, GetInt, HKeySymbol, IsAddOnGame, SetBool
// calls: KeyValues::operator new, KeyValues::KeyValues, KeyValues::LoadFromFile, KeyValues::GetFirstSubKey, KeyValues::FindKey, CKeyValues_Data::Internal_GetInt, KeyValues::GetName, KeyValues::GetInt, KeyValues::SetInt, KeyValues::GetNextKey, KeyValues::deleteThis, KeyValues::operator delete (13 total)
// callers: CDOTAGamerules::State_Enter_INIT
// strings: "CustomHeroList", "scripts/npc/herolist.txt"
void __fastcall CDOTAGameManager::LoadCustomHeroList(CDOTAGameManager *const this)
{
  KeyValues *v2; // r13
  IBaseFileSystem *v3; // rsi
  const KeyValues *v4; // rdi
  KeyValues *i; // rbx
  KeyValues *Key; // rax
  const char *Name; // rax
  int Int; // eax

  v2 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v2, "CustomHeroList");
  if ( v2 != 0 )
  {
    v3 = 0;
    if ( g_pFullFileSystem != 0 )
      v3 = &g_pFullFileSystem->IBaseFileSystem;
    if ( KeyValues::LoadFromFile(v2, v3, "scripts/npc/herolist.txt", "GAME", 0) )
    {
      v4 = this->m_bCustomGame || this->m_bEventGame ? this->m_pkvAddOnHeroes : this->m_pkvHeroes;
      for ( i = KeyValues::GetFirstSubKey(v4); i != 0; i = KeyValues::GetNextKey(i) )
      {
        Key = KeyValues::FindKey(i, this->m_hKvSymbols[3]);
        if ( Key != 0 && CKeyValues_Data::Internal_GetInt(Key) > 0 )
        {
          Name = KeyValues::GetName(i);
          Int = KeyValues::GetInt(v2, Name, 0);
          KeyValues::SetInt(i, "Enabled", Int != 0);
        }
      }
    }
    KeyValues::deleteThis(v2);
  }
}


// CDOTAGameManager::LoadCustomHeroes  (line 2694, @0x00000000024c3f50, libserver.so)  // inlines: GetHeroesKeyValues, IsAddOnGame, _V_strcmp
// calls: KeyValues::operator new, KeyValues::KeyValues, KeyValues::LoadFromFile, KeyValues::GetFirstSubKey, KeyValues::GetString, KeyValues::FindKey, KeyValues::GetNextKey, KeyValues::GetName, KeyValues::SetString, KeyValues::deleteThis, KeyValues::operator delete, _Unwind_Resume
// callers: CDOTAGamerules::State_Enter_INIT
// strings: "CustomHeroes", "scripts/npc/npc_heroes_custom.txt", "override_hero"
void __fastcall CDOTAGameManager::LoadCustomHeroes(CDOTAGameManager *const this)
{
  KeyValues *v1; // rbx
  IBaseFileSystem *v2; // rsi
  bool v3; // al
  KeyValues *v4; // rdi
  KeyValues *i; // r13
  const char *String; // rax
  KeyValues *j; // r15
  const char *Name; // r14
  const char *v9; // rax
  KeyValues *pkvHero; // [rsp+10h] [rbp-40h]
  KeyValues *m_pkvAddOnHeroes; // [rsp+18h] [rbp-38h]

  if ( this->m_bCustomGame || this->m_bEventGame )
  {
    m_pkvAddOnHeroes = this->m_pkvAddOnHeroes;
    if ( m_pkvAddOnHeroes == 0 )
      return;
  }
  else
  {
    m_pkvAddOnHeroes = this->m_pkvHeroes;
    if ( m_pkvAddOnHeroes == 0 )
      return;
  }
  v1 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v1, "CustomHeroes");
  if ( v1 != 0 )
  {
    v2 = 0;
    if ( g_pFullFileSystem != 0 )
      v2 = &g_pFullFileSystem->IBaseFileSystem;
    v3 = KeyValues::LoadFromFile(v1, v2, "scripts/npc/npc_heroes_custom.txt", "GAME", 0);
    v4 = v1;
    if ( v3 )
    {
      for ( i = KeyValues::GetFirstSubKey(v1); i != 0; i = KeyValues::GetNextKey(i) )
      {
        String = KeyValues::GetString(i, "override_hero", 0, 0, 0);
        if ( String != 0 )
        {
          pkvHero = KeyValues::FindKey(m_pkvAddOnHeroes, String, 0);
          if ( pkvHero != 0 )
          {
            for ( j = KeyValues::GetFirstSubKey(i); j != 0; j = KeyValues::GetNextKey(j) )
            {
              while ( 1 )
              {
                Name = KeyValues::GetName(j);
                if ( strcmp(Name, "override_hero") != 0 && KeyValues::GetFirstSubKey(j) == 0 )
                  break;
                j = KeyValues::GetNextKey(j);
                if ( j == 0 )
                  goto LABEL_17;
              }
              v9 = KeyValues::GetString(j, 0, "", 0, 0);
              KeyValues::SetString(pkvHero, Name, v9);
            }
          }
        }
LABEL_17:
        ;
      }
      v4 = v1;
    }
    KeyValues::deleteThis(v4);
  }
}


// CDOTAGameManager::AddCountries  (line 2744, @0x000000000252f060, libserver.so)  // inlines: Find, LeafCodeInfo_t, V_strcpy_safe<3ul>
// calls: KeyValues::GetFirstSubKey, KeyValues::GetNextKey, KeyValues::GetName, KeyValues::GetString, _V_strncpy, V_strlower_fast, CUtlRBTree<CUtlMap<char const*, char const*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, char const*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, char const*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Find, CUtlDict<char const*, int>::Insert, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CDOTAGameManager::LoadCountryCodes
// strings: "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/_generated_code/serve, "AddCountries", "Invalid country entry (bad country name)", "Invalid country entry (bad country code)", "Invalid country block"
void __fastcall CDOTAGameManager::AddCountries(CDOTAGameManager *const this, KeyValues *pKeys)
{
  KeyValues *FirstSubKey; // rbx
  CUtlDict<char const*,int> *p_m_CountryDict; // r13
  const char *Name; // r15
  const char *String; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  char szCountryCode[8]; // [rsp+10h] [rbp-60h] BYREF
  const char *pszCountryName; // [rsp+18h] [rbp-58h] BYREF
  LeafCodeInfo_t search[3]; // [rsp+20h] [rbp-50h] BYREF

  if ( pKeys == 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      search[0].m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/_generated_code/server_do"
                           "ta/release/linuxsteamrt64/../../../../game/shared/dota/dota_game_manager.cpp";
      search[0].m_szFunction = "AddCountries";
      search[0].m_nLine = 2748;
      LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, search, "Invalid country block");
    }
    goto LABEL_14;
  }
  FirstSubKey = KeyValues::GetFirstSubKey(pKeys);
  if ( FirstSubKey != 0 )
  {
    p_m_CountryDict = &this->m_CountryDict;
    do
    {
      while ( 1 )
      {
        Name = KeyValues::GetName(FirstSubKey);
        String = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        pszCountryName = String;
        if ( Name == 0 || *Name == 0 )
        {
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          {
            search[0].m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/_generated_code/ser"
                                 "ver_dota/release/linuxsteamrt64/../../../../game/shared/dota/dota_game_manager.cpp";
            search[0].m_szFunction = "AddCountries";
            search[0].m_nLine = 2756;
            LoggingSystem_Log(
              LOG_GENERAL,
              LoggingSeverity_t::LS_ERROR,
              search,
              "Invalid country entry (bad country code)");
          }
          goto LABEL_14;
        }
        if ( String == 0 || *String == 0 )
        {
          while ( 1 )
          {
            if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
            {
              search[0].m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/_generated_code/s"
                                   "erver_dota/release/linuxsteamrt64/../../../../game/shared/dota/dota_game_manager.cpp";
              search[0].m_szFunction = "AddCountries";
              search[0].m_nLine = 2760;
              LoggingSystem_Log(
                LOG_GENERAL,
                LoggingSeverity_t::LS_ERROR,
                search,
                "Invalid country entry (bad country name)");
            }
LABEL_14:
            if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v9, v10, v7, v8) != 0 )
              loc_0 = -559038737;
            Plat_ExitProcess(1);
          }
        }
        _V_strncpy(szCountryCode, Name, 3);
        V_strlower_fast(szCountryCode);
        search[0].m_szFile = szCountryCode;
        if ( CUtlRBTree<CUtlMap<char const*,char const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,char const*,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,char const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Find(
               &p_m_CountryDict->m_Elements.m_Tree,
               search) == -1 )
          break;
        FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
        if ( FirstSubKey == 0 )
          return;
      }
      CUtlDict<char const*,int>::Insert(p_m_CountryDict, szCountryCode, &pszCountryName);
      FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
    }
    while ( FirstSubKey != 0 );
  }
}


// CDOTAGameManager::GetCountryCount  (line 2785, @0x00000000024c4150, libserver.so)
int __fastcall CDOTAGameManager::GetCountryCount(CDOTAGameManager *const this)
{
  return this->m_CountryDict.m_Elements.m_Tree.m_NumElements;
}


// CDOTAGameManager::GetCountryName  (line 2790, @0x00000000024c4160, libserver.so)  // inlines: Element, operator[]
const char *__fastcall CDOTAGameManager::GetCountryName(CDOTAGameManager *const this, int index)
{
  if ( index == -1 )
    return 0;
  else
    return this->m_CountryDict.m_Elements.m_Tree.m_Elements.m_pMemory[index].m_Data.elem;
}


// CDOTAGameManager::GetCountryCode  (line 2797, @0x00000000024c4190, libserver.so)  // inlines: Element, GetElementName, Key, operator[]
const char *__fastcall CDOTAGameManager::GetCountryCode(CDOTAGameManager *const this, int index)
{
  if ( index == -1 )
    return 0;
  else
    return this->m_CountryDict.m_Elements.m_Tree.m_Elements.m_pMemory[index].m_Data.key;
}


// CDOTAGameManager::LoadCountryCodes  (line 2804, @0x000000000252f290, libserver.so)  // inlines: LeafCodeInfo_t, NotifySteamMissingFiles
// calls: KeyValues::operator new, KeyValues::KeyValues, KeyValues::LoadFromFile, KeyValues::FindKey, CDOTAGameManager::AddCountries, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), KeyValues::operator delete, _Unwind_Resume
// callers: CDOTAGameManager::LoadKeyValuesFiles
// strings: "Countries", "resource/countrycodes.vdf", "eucountries", "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/_generated_code/serve, "LoadCountryCodes", "Failed to load %s"
void __fastcall CDOTAGameManager::LoadCountryCodes(CDOTAGameManager *const this)
{
  KeyValues *v2; // r12
  IBaseFileSystem *v3; // rsi
  KeyValues *Key; // rax
  KeyValues *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  LeafCodeInfo_t v10; // [rsp+0h] [rbp-40h] BYREF

  v2 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v2, "Countries");
  v3 = 0;
  this->m_pCountryKeyValues = v2;
  if ( g_pFullFileSystem != 0 )
    v3 = &g_pFullFileSystem->IBaseFileSystem;
  if ( !KeyValues::LoadFromFile(v2, v3, "resource/countrycodes.vdf", "GAME", 0) )
  {
    if ( g_pFullFileSystem != 0 )
      (*(g_pFullFileSystem->_vptr_IAppSystem + 146))(g_pFullFileSystem, 1, 0);
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_11;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v8, v9, v6, v7) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_11:
      v10.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/_generated_code/server_dota/rel"
                     "ease/linuxsteamrt64/../../../../game/shared/dota/dota_game_manager.cpp";
      v10.m_szFunction = "LoadCountryCodes";
      v10.m_nLine = 2810;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v10,
        "Failed to load %s",
        "resource/countrycodes.vdf");
    }
  }
  Key = KeyValues::FindKey(this->m_pCountryKeyValues, "countries", 0);
  CDOTAGameManager::AddCountries(this, Key);
  v5 = KeyValues::FindKey(this->m_pCountryKeyValues, "eucountries", 0);
  CDOTAGameManager::AddCountries(this, v5);
}


// CDOTAGameManager::LookupCountryCode  (line 2818, @0x00000000024c41c0, libserver.so)  // inlines: GetElementName
// calls: V_stricmp_fast
const char *__fastcall CDOTAGameManager::LookupCountryCode(CDOTAGameManager *const this, const char *szCountryName)
{
  int m_NumElements; // r12d
  unsigned __int64 v5; // rbx
  __int64 v6; // r12

  m_NumElements = this->m_CountryDict.m_Elements.m_Tree.m_NumElements;
  if ( m_NumElements <= 0 )
    return 0;
  v5 = 0;
  v6 = 32 * ((m_NumElements - 1) + 1LL);
  while ( V_stricmp_fast(
            szCountryName,
            this->m_CountryDict.m_Elements.m_Tree.m_Elements.m_pMemory[v5 / 0x20].m_Data.elem) != 0 )
  {
    v5 += 32LL;
    if ( v5 == v6 )
      return 0;
  }
  return this->m_CountryDict.m_Elements.m_Tree.m_Elements.m_pMemory[v5 / 0x20].m_Data.key;
}


// CDOTAGameManager::GetCountryName  (line 2831, @0x00000000024f1d90, libserver.so)  // inlines: Element, Find, operator[]
// calls: CUtlRBTree<CUtlMap<char const*, char const*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, char const*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, char const*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Find
const char *__fastcall CDOTAGameManager::GetCountryName(CDOTAGameManager *const this, const char *szCountryCode)
{
  int v3; // eax
  CUtlMap<char const*,char const*,int,bool (*)(char const* const&,char const* const&)>::Node_t v5; // [rsp-28h] [rbp-28h] BYREF

  if ( szCountryCode == 0 )
    return 0;
  v5.key = szCountryCode;
  v3 = CUtlRBTree<CUtlMap<char const*,char const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,char const*,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,char const*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Find(
         &this->m_CountryDict.m_Elements.m_Tree,
         &v5);
  if ( v3 == -1 )
    return 0;
  else
    return this->m_CountryDict.m_Elements.m_Tree.m_Elements.m_pMemory[v3].m_Data.elem;
}


// CDOTAGameManager::LoadSurveyQuestionData  (line 2842, @0x00000000024c4240, libserver.so)  // inlines: LeafCodeInfo_t, NotifySteamMissingFiles
// calls: KeyValues::~KeyValues, KeyValues::operator delete, KeyValues::operator new, KeyValues::KeyValues, KeyValues::LoadFromFile, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), _Unwind_Resume
// callers: CDOTAGameManager::LoadKeyValuesFiles
// strings: "scripts/survey_questions.txt", "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/_generated_code/serve, "LoadSurveyQuestionData", "Failed to load %s"
void __fastcall CDOTAGameManager::LoadSurveyQuestionData(CDOTAGameManager *const this)
{
  KeyValues *m_pSurveyQuestionData; // rbx
  KeyValues *v3; // rbx
  IBaseFileSystem *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  LeafCodeInfo_t v9; // [rsp+0h] [rbp-30h] BYREF

  m_pSurveyQuestionData = this->m_pSurveyQuestionData;
  if ( m_pSurveyQuestionData != 0 )
  {
    KeyValues::~KeyValues(this->m_pSurveyQuestionData);
    KeyValues::operator delete(m_pSurveyQuestionData);
    this->m_pSurveyQuestionData = 0;
  }
  v3 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v3, "SurveyQuestionData");
  this->m_pSurveyQuestionData = v3;
  v4 = 0;
  if ( g_pFullFileSystem != 0 )
    v4 = &g_pFullFileSystem->IBaseFileSystem;
  if ( !KeyValues::LoadFromFile(v3, v4, "scripts/survey_questions.txt", "GAME", 0) )
  {
    if ( g_pFullFileSystem != 0 )
      (*(g_pFullFileSystem->_vptr_IAppSystem + 146))(g_pFullFileSystem, 1, 0);
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_12;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v7, v8, v5, v6) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_12:
      v9.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/_generated_code/server_dota/rele"
                    "ase/linuxsteamrt64/../../../../game/shared/dota/dota_game_manager.cpp";
      v9.m_szFunction = "LoadSurveyQuestionData";
      v9.m_nLine = 2854;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v9,
        "Failed to load %s",
        "scripts/survey_questions.txt");
    }
  }
}


// CDOTAGameManager::GetSurveyQuestionData  (line 2858, @0x00000000024c4380, libserver.so)
KeyValues *__fastcall CDOTAGameManager::GetSurveyQuestionData(CDOTAGameManager *const this)
{
  return this->m_pSurveyQuestionData;
}


// CDOTAGameManager::GetSurveyQuestionDataBySurveyID  (line 2863, @0x00000000024d87a0, libserver.so)
// calls: CFmtStrN<256, false>::CFmtStrN, KeyValues::FindKey, __stack_chk_fail
// callers: CDOTAGamerules::State_Enter_POST_GAME
KeyValues *__fastcall CDOTAGameManager::GetSurveyQuestionDataBySurveyID(CDOTAGameManager *const this, uint8 nID)
{
  KeyValues *result; // rax
  CFmtStrN<256,false> v4; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v5; // [rsp+118h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  result = this->m_pSurveyQuestionData;
  if ( result != 0 )
  {
    CFmtStrN<256,false>::CFmtStrN(&v4, "%d", nID);
    return KeyValues::FindKey(this->m_pSurveyQuestionData, v4.m_szBuf, 0);
  }
  return result;
}


// CDOTAGameManager::GetEnabledSurveyQuestionIDs  (line 2874, @0x00000000024ea8d0, libserver.so)  // inlines: AddToTail, CopyConstruct<int>, Element, GetBool, GrowMemory, atoi, operator[]
// calls: KeyValues::GetFirstSubKey, KeyValues::GetNextKey, KeyValues::GetInt, KeyValues::GetName, strtol, CUtlMemory<int, int>::Grow
void __fastcall CDOTAGameManager::GetEnabledSurveyQuestionIDs(
        CDOTAGameManager *const this,
        CUtlVector<int,CUtlMemory<int,int> > *const vecEnabledSurveyIDs)
{
  KeyValues *m_pSurveyQuestionData; // rdi
  KeyValues *i; // rbx
  const char *Name; // rax
  int v6; // eax
  __int64 m_Size; // r13
  int v8; // edx
  int *v9; // rdx
  int v10; // [rsp-30h] [rbp-30h]

  m_pSurveyQuestionData = this->m_pSurveyQuestionData;
  if ( m_pSurveyQuestionData != 0 )
  {
    for ( i = KeyValues::GetFirstSubKey(m_pSurveyQuestionData); i != 0; i = KeyValues::GetNextKey(i) )
    {
      while ( 1 )
      {
        if ( KeyValues::GetInt(i, "enabled", 0) != 0 )
        {
          Name = KeyValues::GetName(i);
          v6 = strtol(Name, 0, 10);
          m_Size = vecEnabledSurveyIDs->m_Size;
          v8 = vecEnabledSurveyIDs->m_Size;
          if ( m_Size == vecEnabledSurveyIDs->m_Memory.m_nAllocationCount )
          {
            v10 = v6;
            CUtlMemory<int,int>::Grow(&vecEnabledSurveyIDs->m_Memory, 1);
            v8 = vecEnabledSurveyIDs->m_Size;
            v6 = v10;
          }
          vecEnabledSurveyIDs->m_Size = v8 + 1;
          v9 = &vecEnabledSurveyIDs->m_Memory.m_pMemory[m_Size];
          if ( v9 != 0 )
            break;
        }
        i = KeyValues::GetNextKey(i);
        if ( i == 0 )
          return;
      }
      *v9 = v6;
    }
  }
}


// CDOTAGameManager::IsAddonPlayable  (line 2889, @0x00000000024c4390, libserver.so)  // inlines: GetBool
// calls: KeyValues::KeyValues, KeyValues::GetInt, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "AddonInfo", "IsPlayable"
bool __fastcall CDOTAGameManager::IsAddonPlayable(CDOTAGameManager *const this, const char *pszAddonName)
{
  bool result; // al
  bool v4; // [rsp+Ch] [rbp-34h]
  KeyValues kv; // [rsp+10h] [rbp-30h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-18h]

  v6 = __readfsqword(0x28u);
  result = 0;
  if ( pszAddonName == 0 )
    return 0;
  if ( *pszAddonName != 0 )
  {
    KeyValues::KeyValues(&kv, "AddonInfo");
    (*(g_pApplication->_vptr_IAppSystem + 42))(g_pApplication, &kv, pszAddonName);
    v4 = KeyValues::GetInt(&kv, "IsPlayable", 1) != 0;
    KeyValues::~KeyValues(&kv);
    return v4;
  }
  return result;
}


// CDOTAGameManager::OnAddonListChanged  (line 2902, @0x0000000002541f40, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Destruct<CUtlString>, Element, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTAGameManager::DestroyGameKeyValues, CDOTAGameManager::SetupGameKeyValues, CUtlString::FreeMemoryBlock, CUtlMemory<CUtlString, int>::Purge, _Unwind_Resume
void __fastcall CDOTAGameManager::OnAddonListChanged(CDOTAGameManager *const this)
{
  int m_Size; // ebx
  __int64 i; // r12
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > vecAddons; // [rsp+0h] [rbp-40h] BYREF

  vecAddons.m_Size = 0;
  vecAddons.m_Memory.m_pMemory = 0;
  vecAddons.m_Memory.m_nAllocationCount = 0;
  vecAddons.m_Memory.m_nGrowSize = 0;
  (*(g_pApplication->_vptr_IAppSystem + 36))(g_pApplication, &vecAddons);
  m_Size = vecAddons.m_Size;
  if ( vecAddons.m_Size == 0 )
  {
    CDOTAGameManager::DestroyGameKeyValues(this);
    CDOTAGameManager::SetupGameKeyValues(this, 0);
    m_Size = vecAddons.m_Size;
  }
  for ( i = 8LL * m_Size - 8; --m_Size >= 0; i -= 8 )
  {
    if ( *(&vecAddons.m_Memory.m_pMemory->m_pString + i) != 0 )
      CUtlString::FreeMemoryBlock((vecAddons.m_Memory.m_pMemory + i));
  }
  vecAddons.m_Size = 0;
  if ( (vecAddons.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlString,int>::Purge(&vecAddons.m_Memory);
    if ( (vecAddons.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&vecAddons.m_Memory);
  }
}


// CDOTAGameManager::InitDefaultStrings  (line 2961, @0x00000000024c4450, libserver.so)  // inlines: operator=
// calls: AllocPooledString
// callers: CDOTAGameManager::GameActivate
// strings: "item_tpscroll", "item_dust", "item_gem", "item_ward_sentry", "item_ward_observer", "item_courier" (7 total)
void __fastcall CDOTAGameManager::InitDefaultStrings(CDOTAGameManager *const this)
{
  _QWORD v2[4]; // [rsp+0h] [rbp-20h] BYREF

  AllocPooledString(v2, "item_tpscroll");
  this->m_DOTAStrings.m_item_tpscroll.u.m_Id = v2[0];
  AllocPooledString(v2, "item_dust");
  this->m_DOTAStrings.m_item_dust.u.m_Id = v2[0];
  AllocPooledString(v2, "item_gem");
  this->m_DOTAStrings.m_item_gem.u.m_Id = v2[0];
  AllocPooledString(v2, "item_ward_sentry");
  this->m_DOTAStrings.m_item_ward_sentry.u.m_Id = v2[0];
  AllocPooledString(v2, "item_ward_observer");
  this->m_DOTAStrings.m_item_ward_observer.u.m_Id = v2[0];
  AllocPooledString(v2, "item_courier");
  this->m_DOTAStrings.m_item_courier.u.m_Id = v2[0];
  AllocPooledString(v2, "item_flying_courier");
  this->m_DOTAStrings.m_item_flying_courier.u.m_Id = v2[0];
}


// CDOTAGameManager::GameActivate  (line 2974, @0x00000000024c4530, libserver.so)
// calls: CDOTAGameManager::InitDefaultStrings
void __fastcall CDOTAGameManager::GameActivate(CDOTAGameManager *const this, const EventGameActivate_t *const msg)
{
  CDOTAGameManager::InitDefaultStrings(this);
}


// CDOTAGameManager::GameDeactivate  (line 3001, @0x00000000024b42f0, libserver.so)
void __fastcall CDOTAGameManager::GameDeactivate(CDOTAGameManager *const this, const EventGameDeactivate_t *const msg)
{
  ;
}


// CDOTAGameManager::InitAddOnDirectory  (line 3013, @0x00000000024c4540, libserver.so)  // inlines: V_strcpy_safe<128ul>
// calls: _V_strncpy, V_stristr_fast(char const*,char const*)
// callers: CDOTAGameConfiguration::InitGameSession
bool __fastcall CDOTAGameManager::InitAddOnDirectory(
        CDOTAGameManager *const this,
        const char *pCustomGameMode,
        const char *pCustomMap,
        bool bValidateAddons)
{
  char *m_szAddOnGame; // r12
  int v8; // r14d
  unsigned int i; // ebx
  const char *v10; // rax

  if ( pCustomGameMode != 0 && *pCustomGameMode != 0 )
  {
    m_szAddOnGame = this->m_szAddOnGame;
    _V_strncpy(this->m_szAddOnGame, pCustomGameMode, 128);
    _V_strncpy(this->m_szAddOnMap, pCustomMap, 128);
    if ( bValidateAddons )
    {
      v8 = (*(*g_pEngineServiceMgr + 312LL))(g_pEngineServiceMgr);
      if ( v8 > 0 )
      {
        for ( i = 0; i != v8; ++i )
        {
          v10 = (*(*g_pEngineServiceMgr + 320LL))(g_pEngineServiceMgr, i);
          if ( V_stristr_fast(m_szAddOnGame, v10) != 0 )
            break;
        }
      }
    }
    return 1;
  }
  else
  {
    this->m_szAddOnGame[0] = 0;
    this->m_szAddOnMap[0] = 0;
    return 0;
  }
}


// CDOTAGameManager::InitAddOnGame  (line 3054, @0x0000000002541b10, libserver.so)  // inlines: SetValue
// calls: __cxa_guard_acquire, ConVarRef::IsValid, CDOTAGameManager::DestroyGameKeyValues, CDOTAGameManager::SetupAddOnGameKeyValues, ConVarRef::ConVarRef, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CDOTAGameConfiguration::InitGameSession
// strings: "resource/addon_%language%.txt", "scripts/custom_events.txt", "r_flashoverbudget"
// globals: `guard variable for'CDOTAGameManager::InitAddOnGame(int)::r_flashoverbudget, CDOTAGameManager::InitAddOnGame(int)::r_flashoverbudget
void __fastcall CDOTAGameManager::InitAddOnGame(CDOTAGameManager *const this, int nGameMode)
{
  double v4; // xmm0_8

  if ( `guard variable for'CDOTAGameManager::InitAddOnGame(int)::r_flashoverbudget == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAGameManager::InitAddOnGame(int)::r_flashoverbudget) != 0 )
  {
    ConVarRef::ConVarRef(&CDOTAGameManager::InitAddOnGame(int)::r_flashoverbudget, "r_flashoverbudget", 1);
    __cxa_guard_release(&`guard variable for'CDOTAGameManager::InitAddOnGame(int)::r_flashoverbudget);
  }
  if ( !ConVarRef::IsValid(&CDOTAGameManager::InitAddOnGame(int)::r_flashoverbudget) )
  {
    if ( nGameMode != 15 )
      goto LABEL_6;
LABEL_10:
    this->m_bCustomGame = 1;
    goto LABEL_8;
  }
  (*(CDOTAGameManager::InitAddOnGame(int)::r_flashoverbudget.m_pConVar->_vptr_IConVar + 2))(
    CDOTAGameManager::InitAddOnGame(int)::r_flashoverbudget.m_pConVar,
    0);
  if ( nGameMode == 15 )
    goto LABEL_10;
LABEL_6:
  if ( nGameMode == 19 )
    this->m_bEventGame = 1;
LABEL_8:
  CDOTAGameManager::DestroyGameKeyValues(this);
  CDOTAGameManager::SetupAddOnGameKeyValues(this);
  (*(*g_pVGuiLocalize + 88LL))(g_pVGuiLocalize, "resource/addon_%language%.txt", v4, "GAME");
  (*(gameeventmanager->_vptr_IBaseInterface + 2))(gameeventmanager, "scripts/custom_events.txt");
}


// OnActivatePortraitPhysics  (line 3625, @0x00000000024c4620, libserver.so)
void __fastcall OnActivatePortraitPhysics(CSkeletonInstance *pSkel)
{
  HPhysicsSoftbody m_hCloth2; // rbx

  m_hCloth2 = pSkel->m_modelState.m_hCloth2;
  if ( m_hCloth2 != 0 )
  {
    (*(*m_hCloth2 + 968LL))(pSkel->m_modelState.m_hCloth2, 6.0);
    (*(*m_hCloth2 + 952LL))(m_hCloth2, 0);
  }
}


// CDOTAGameManager::IsSupportedLobbyGameMode  (line 3635, @0x00000000024c4670, libserver.so)
bool __fastcall CDOTAGameManager::IsSupportedLobbyGameMode(CDOTAGameManager *const this, DOTA_GameMode nGameMode)
{
  bool result; // al

  result = 0;
  if ( (nGameMode - 1) <= 0x15 )
    return ((1LL << (nGameMode - 1)) & 0x3A9C9F) != 0;
  return result;
}


// CDOTAGameManager::InitSearchableItems  (line 3665, @0x00000000024c4690, libserver.so)  // inlines: Purge, RemoveAll
// calls: CUtlMemory<CDOTAGameManager::LocalizedToScriptNameItem_t, int>::Purge
void __fastcall CDOTAGameManager::InitSearchableItems(CDOTAGameManager *const this)
{
  bool v1; // zf

  v1 = (this->m_vecLocalizedItemNames.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecLocalizedItemNames.m_Size = 0;
  if ( v1 )
    CUtlMemory<CDOTAGameManager::LocalizedToScriptNameItem_t,int>::Purge(&this->m_vecLocalizedItemNames.m_Memory);
}


// CDOTAGameManager::SearchShopItems  (line 3724, @0x00000000024c46c0, libserver.so)
void __fastcall CDOTAGameManager::SearchShopItems(
        CDOTAGameManager *const this,
        const char *pszSearchQuery,
        CUtlVector<short unsigned int,CUtlMemory<short unsigned int,int> > *const vecMatchingItemIndices)
{
  ;
}


// CDOTAGameManager::SearchShopItems  (line 3753, @0x00000000024c46d0, libserver.so)
void __fastcall CDOTAGameManager::SearchShopItems(
        CDOTAGameManager *const this,
        const wchar_t *pwzSearchQuery,
        CUtlVector<short unsigned int,CUtlMemory<short unsigned int,int> > *const vecMatchingItemIndices)
{
  ;
}


