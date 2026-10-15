// Reconstructed from DWARF by pahole; not original source.

// src/game/server/env_effectsscript.cpp:30
class CEffectScriptElement {
private:

	char m_szEffectName[128];  // +0x0
	bool m_bTrailActive;  // +0x80

	int m_iType;  // +0x88
	int m_iRenderType;  // +0x8c
	int m_iR;  // +0x90
	int m_iG;  // +0x94
	int m_iB;  // +0x98
	int m_iA;  // +0x9c
	char m_szAttachment[128];  // +0xa0
	char m_szMaterial[128];  // +0x120
	float m_flScale;  // +0x1a0
	float m_flFadeTime;  // +0x1a4
	float m_flTextureRes;  // +0x1a8
	bool m_bStopFollowOnKill;  // +0x1ac
	bool m_bActive;  // +0x1ad

	CEffectScriptElement();
	bool IsActive();
	void Activate();
	void Deactivate();
	CEffectScriptElement & operator=(const CEffectScriptElement &);
	CEffectScriptElement(const CEffectScriptElement &);

	// sizeof = 432
};

// src/game/server/env_effectsscript.cpp:91
class CEnvEffectsScript : public CBaseAnimating {
public:

private:

	static datamap_t m_DataMap;

	string_t m_iszScriptName;  // +0x4c0
	typedef CBaseAnimating BaseClass;

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
	CEnvEffectsScript(CEnvEffectsScript &);
	CEnvEffectsScript(CEnvEffectsScript &);
	CEnvEffectsScript();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual int UpdateTransmitState();
	void InputSetSequence(inputdata_t &);
	void ParseScriptFile(IEntityResourceManifest *, CUtlVector<CEffectScriptElement, CUtlMemory<CEffectScriptElement, int> > *);
	void LoadFromBuffer(const char *, const char *, IEntityResourceManifest *, CUtlVector<CEffectScriptElement, CUtlMemory<CEffectScriptElement, int> > *);
	virtual void Think();
	void ParseNewEffect(IEntityResourceManifest *, CUtlVector<CEffectScriptElement, CUtlMemory<CEffectScriptElement, int> > *);
	const char * GetScriptFile();
	virtual void HandleAnimEvent(animevent_t *);
	void TrailEffectEvent(CEffectScriptElement *);
	void SpriteEffectEvent(CEffectScriptElement *);
	CEffectScriptElement * GetScriptElementByName(const char *);
	bool IsRootCommand();
	virtual ~CEnvEffectsScript();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[6] Precache
	// vtable[8] Spawn
	// vtable[64] UpdateTransmitState
	// vtable[117] Think
	// vtable[229] HandleAnimEvent
	// sizeof = 1248
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEffectScriptElement::CEffectScriptElement  (line 67, @0x00000000021cfa20, libserver.so)  // inlines: CEntityHandle, CHandle, Deactivate
void __fastcall CEffectScriptElement::CEffectScriptElement(CEffectScriptElement *const this)
{
  this->m_bTrailActive = 0;
  this->m_pSprite.m_Index = -1;
  this->m_iType = 0;
  this->m_bActive = 0;
  this->m_iRenderType = 5;
  this->m_iR = 255;
  this->m_iG = 0;
  this->m_iB = 0;
  this->m_iA = 255;
  this->m_flScale = 1.0;
  this->m_flFadeTime = 1.0;
  this->m_flTextureRes = -1.0;
  this->m_bStopFollowOnKill = 0;
}


// CEnvEffectsScript::~CEnvEffectsScript  (line 91, @0x00000000021eb780, libserver.so)  // inlines: Purge, ~CBaseAnimating, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CEffectScriptElement, CUtlMemory<CEffectScriptElement, int> >::RemoveAll, CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CEffectScriptElement, int>::Purge
void __fastcall CEnvEffectsScript::~CEnvEffectsScript(CEnvEffectsScript *const this)
{
  this->_vptr_IHandleEntity = &off_4025FB0;
  CUtlVectorBase<CEffectScriptElement,CUtlMemory<CEffectScriptElement,int>>::RemoveAll(&this->m_ScriptElements);
  if ( (this->m_ScriptElements.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEffectScriptElement,int>::Purge(&this->m_ScriptElements.m_Memory);
    if ( (this->m_ScriptElements.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEffectScriptElement,int>::Purge(&this->m_ScriptElements.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(&this->m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CEnvEffectsScript::~CEnvEffectsScript  (line 91, @0x00000000021eb800, libserver.so)  // inlines: Purge, ~CBaseAnimating, ~CEnvEffectsScript, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CEffectScriptElement, CUtlMemory<CEffectScriptElement, int> >::RemoveAll, CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CEffectScriptElement, int>::Purge
void __fastcall CEnvEffectsScript::~CEnvEffectsScript(CEnvEffectsScript *const this)
{
  this->_vptr_IHandleEntity = &off_4025FB0;
  CUtlVectorBase<CEffectScriptElement,CUtlMemory<CEffectScriptElement,int>>::RemoveAll(&this->m_ScriptElements);
  if ( (this->m_ScriptElements.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEffectScriptElement,int>::Purge(&this->m_ScriptElements.m_Memory);
    if ( (this->m_ScriptElements.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEffectScriptElement,int>::Purge(&this->m_ScriptElements.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(&this->m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvEffectsScript::GetEntityClass  (line 93, @0x00000000021df200, libserver.so)
CEntityClass *__cdecl CEnvEffectsScript::GetEntityClass()
{
  return g_pEntityCEnvEffectsScriptClass;
}


// CEnvEffectsScript::Schema_DynamicBinding  (line 93, @0x00000000021df210, libserver.so)
// globals: CEnvEffectsScript::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvEffectsScript::Schema_DynamicBinding(const CEnvEffectsScript *const this)
{
  return CEnvEffectsScript::s_pSchemaBinding;
}


// CEnvEffectsScript::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 93, @0x00000000021df220, libserver.so)
// globals: CEnvEffectsScript::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvEffectsScript::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvEffectsScript::CEntityInstanceEntityClass *const this)
{
  return CEnvEffectsScript::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvEffectsScript::CEntityInstanceEntityClass::DestructInstance  (line 93, @0x00000000021df230, libserver.so)  // inlines: Destruct<CEnvEffectsScript>
void __fastcall CEnvEffectsScript::CEntityInstanceEntityClass::DestructInstance(
        CEnvEffectsScript::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvEffectsScript::CEntityInstanceEntityClass::FreeInstance  (line 93, @0x00000000021df250, libserver.so)
void __fastcall CEnvEffectsScript::CEntityInstanceEntityClass::FreeInstance(
        CEnvEffectsScript::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvEffectsScript::CEntityInstanceEntityClass::CanAllocate  (line 93, @0x00000000021df270, libserver.so)
bool __fastcall CEnvEffectsScript::CEntityInstanceEntityClass::CanAllocate(
        const CEnvEffectsScript::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvEffectsScript::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 93, @0x00000000021df280, libserver.so)
// globals: CEnvEffectsScript::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvEffectsScript::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvEffectsScript::CEntityInstanceEntityClass *const this)
{
  return CEnvEffectsScript::s_pSchemaBinding;
}


// CEnvEffectsScript::CEntityInstanceEntityClass::AllocateInstance  (line 93, @0x00000000021e0a00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvEffectsScript::CEntityInstanceEntityClass::AllocateInstance(
        CEnvEffectsScript::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1248);
  memset(v1, 0, 0x4E0u);
  return v1;
}


// CEnvEffectsScript::CEntityInstanceEntityClass::ConstructInstance  (line 93, @0x00000000021e2170, libserver.so)  // inlines: CEnvEffectsScript, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, Construct<CEnvEffectsScript>
// calls: CBaseAnimating::CBaseAnimating
CEntityInstance *__fastcall CEnvEffectsScript::CEntityInstanceEntityClass::ConstructInstance(
        CEnvEffectsScript::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseAnimating::CBaseAnimating(p);
    *(p + 152) = 0;
    *p = &off_4025FB0;
    *(p + 306) = 0;
    *(p + 154) = 0;
    *(p + 310) = 0;
    *(p + 311) = 0;
  }
  return p;
}


// CEnvEffectsScript::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 93, @0x00000000021e2bb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvEffectsScript::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvEffectsScript::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CEnvEffectsScript::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 93, @0x00000000021e2bd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvEffectsScript::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvEffectsScript::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvEffectsScript::GetEntityClassInternal  (line 93, @0x00000000021ea6b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CBaseAnimating::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "env_effectscript", "CEnvEffectsScript"
// globals: `guard variable for'CEnvEffectsScript::GetEntityClassInternal(void)::g_EntityCEnvEffectsScriptClass, CEnvEffectsScript::GetEntityClassInternal(void)::g_EntityCEnvEffectsScriptClass, __dso_handle, CEnvEffectsScript::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvEffectsScript::GetEntityClassInfo(void)::g_EntityCEnvEffectsScriptClassInfo, CEnvEffectsScript::GetEntityClassInfo(void)::g_EntityCEnvEffectsScriptClassInfo
CEntityClass *__cdecl CEnvEffectsScript::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvEffectsScript::GetEntityClassInternal(void)::g_EntityCEnvEffectsScriptClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvEffectsScript::GetEntityClassInternal(void)::g_EntityCEnvEffectsScriptClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEnvEffectsScript::GetEntityClassInternal(void)::g_EntityCEnvEffectsScriptClass);
    CEnvEffectsScript::GetEntityClassInternal(void)::g_EntityCEnvEffectsScriptClass._vptr_CEntityClass = off_4025F30;
    __cxa_guard_release(&`guard variable for'CEnvEffectsScript::GetEntityClassInternal(void)::g_EntityCEnvEffectsScriptClass);
    __cxa_atexit(
      CEnvEffectsScript::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvEffectsScript::GetEntityClassInternal(void)::g_EntityCEnvEffectsScriptClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvEffectsScriptClass != 0 )
    return &CEnvEffectsScript::GetEntityClassInternal(void)::g_EntityCEnvEffectsScriptClass;
  if ( `guard variable for'CEnvEffectsScript::GetEntityClassInfo(void)::g_EntityCEnvEffectsScriptClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvEffectsScript::GetEntityClassInfo(void)::g_EntityCEnvEffectsScriptClassInfo) != 0 )
  {
    EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvEffectsScript::GetEntityClassInfo(void)::g_EntityCEnvEffectsScriptClassInfo,
      "CEnvEffectsScript",
      "env_effectscript",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvEffectsScript::GetEntityClassInfo(void)::g_EntityCEnvEffectsScriptClassInfo);
  }
  CEnvEffectsScript::GetEntityClassInternal(void)::g_EntityCEnvEffectsScriptClass.m_pClassInfo = &CEnvEffectsScript::GetEntityClassInfo(void)::g_EntityCEnvEffectsScriptClassInfo;
  CEnvEffectsScript::GetEntityClassInternal(void)::g_EntityCEnvEffectsScriptClass.m_pBaseClassInfo = CEnvEffectsScript::GetEntityClassInfo(void)::g_EntityCEnvEffectsScriptClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvEffectsScriptClass = &CEnvEffectsScript::GetEntityClassInternal(void)::g_EntityCEnvEffectsScriptClass;
  CEnvEffectsScript::GetEntityClassInfo(void)::g_EntityCEnvEffectsScriptClassInfo.m_pClass = &CEnvEffectsScript::GetEntityClassInternal(void)::g_EntityCEnvEffectsScriptClass;
  CEnvEffectsScript::GetEntityClassInternal(void)::g_EntityCEnvEffectsScriptClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCEnvEffectsScriptClass->m_pComponentOverrides = 0;
  return &CEnvEffectsScript::GetEntityClassInternal(void)::g_EntityCEnvEffectsScriptClass;
}


// ParseToken  (line 140, @0x00000000021bbf60, libserver.so)
// calls: V_ParseToken
// callers: CEnvEffectsScript::ParseNewEffect
// globals: currenttoken, token
bool __cdecl ParseToken()
{
  currenttoken = V_ParseToken(currenttoken, token, 1204, 0, 0);
  return currenttoken != 0;
}


// CEnvEffectsScript::GetDataDescMap  (line 180, @0x00000000021bafd0, libserver.so)
// globals: CEnvEffectsScript::m_DataMap
datamap_t *__fastcall CEnvEffectsScript::GetDataDescMap(CEnvEffectsScript *const this)
{
  return &CEnvEffectsScript::m_DataMap;
}


// CEnvEffectsScript::AddDatadescMetadataKeys  (line 180, @0x00000000021cfab0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvEffectsScript::GetEntityClass(void)
void __fastcall CEnvEffectsScript::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvEffectsScript::GetEntityClass);
}


// CEnvEffectsScript::GetBaseMap  (line 180, @0x00000000021cfad0, libserver.so)
datamap_t *__cdecl CEnvEffectsScript::GetBaseMap()
{
  return &CBaseAnimating::m_DataMap;
}


// DataMapInit<CEnvEffectsScript>  (line 180, @0x00000000021d89d0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CEnvEffectsScript"
// globals: `guard variable for'DataMapInit<CEnvEffectsScript>(CEnvEffectsScript *)::nameHolder, `guard variable for'DataMapInit<CEnvEffectsScript>(CEnvEffectsScript *)::dataDesc, CEnvEffectsScript::GetEntityClass(void), CEnvEffectsScript::m_DataMap, DataMapInit<CEnvEffectsScript>(CEnvEffectsScript *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvEffectsScript>(CEnvEffectsScript *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CEnvEffectsScript>(CEnvEffectsScript *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvEffectsScript>(CEnvEffectsScript *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvEffectsScript>(CEnvEffectsScript *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvEffectsScript>(CEnvEffectsScript *)::nameHolder.m_pszBase = "CEnvEffectsScript";
    DataMapInit<CEnvEffectsScript>(CEnvEffectsScript *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvEffectsScript>(CEnvEffectsScript *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvEffectsScript>(CEnvEffectsScript *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvEffectsScript>(CEnvEffectsScript *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvEffectsScript>(CEnvEffectsScript *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvEffectsScript>(CEnvEffectsScript *)::nameHolder,
      &_dso_handle);
  }
  CEnvEffectsScript::m_DataMap.baseMap = &CBaseAnimating::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CEnvEffectsScript>(CEnvEffectsScript *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvEffectsScript>(CEnvEffectsScript *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CEnvEffectsScript>(CEnvEffectsScript *)::nameHolder.m_nLenBase + 6);
    strcpy(stpcpy(v2, DataMapInit<CEnvEffectsScript>(CEnvEffectsScript *)::nameHolder.m_pszBase), "Think");
    m_Size = DataMapInit<CEnvEffectsScript>(CEnvEffectsScript *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CEnvEffectsScript>(CEnvEffectsScript *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CEnvEffectsScript>(CEnvEffectsScript *)::nameHolder.m_Names.m_Size == DataMapInit<CEnvEffectsScript>(CEnvEffectsScript *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CEnvEffectsScript>(CEnvEffectsScript *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CEnvEffectsScript>(CEnvEffectsScript *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CEnvEffectsScript>(CEnvEffectsScript *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CEnvEffectsScript>(CEnvEffectsScript *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CEnvEffectsScript>(CEnvEffectsScript *)::dataDesc[4].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvEffectsScript>(CEnvEffectsScript *)::dataDesc);
  }
  CEnvEffectsScript::m_DataMap.dataNumFields = 4;
  CEnvEffectsScript::m_DataMap.dataDesc = &DataMapInit<CEnvEffectsScript>(CEnvEffectsScript *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvEffectsScript::m_DataMap, CEnvEffectsScript::GetEntityClass);
  return &CEnvEffectsScript::m_DataMap;
}


// CEnvEffectsScript::UpdateTransmitState  (line 194, @0x00000000021bb170, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CEnvEffectsScript::UpdateTransmitState(CEnvEffectsScript *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CEnvEffectsScript::Precache  (line 202, @0x00000000021de1e0, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheModelFromKeyValues, Warning, CEnvEffectsScript::ParseScriptFile
// strings: "CEnvEffectsScript with no script!\n"
void __fastcall CEnvEffectsScript::Precache(CEnvEffectsScript *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  CBaseEntity::PrecacheModelFromKeyValues(this, pContext, 0, 0);
  if ( this->m_iszScriptName.u.m_Id != 0 )
    CEnvEffectsScript::ParseScriptFile(this, pContext->m_pManifest, 0);
  else
    Warning("CEnvEffectsScript with no script!\n");
}


// CEnvEffectsScript::Spawn  (line 216, @0x00000000021dc730, libserver.so)  // inlines: curtime
// calls: CBaseAnimating::Spawn, Warning, CBaseModelEntity::SetModelFromKeyValues, CBaseEntity::AddEffects, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CEnvEffectsScript::ParseScriptFile
// strings: "CEnvEffectsScript with no script!\n"
void __fastcall CEnvEffectsScript::Spawn(CEnvEffectsScript *const this, const CEntityKeyValues *pKeyValues)
{
  double v4; // xmm1_8
  CGlobalVars *v5; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CBaseAnimating::Spawn(this, pKeyValues);
  if ( this->m_iszScriptName.u.m_Id != 0 )
    CEnvEffectsScript::ParseScriptFile(this, 0, &this->m_ScriptElements);
  else
    Warning("CEnvEffectsScript with no script!\n");
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  CBaseEntity::AddEffects(this, 32);
  CBaseEntity::ThinkSet(this, 0x3A9uLL, 0.0, 0, 0);
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(COERCE_UNSIGNED_INT(v5->m_flCurrentTime + 0.1)), v4, 0);
  }
  else
  {
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(1036831949), v4, 0);
  }
}


// CEnvEffectsScript::Think  (line 234, @0x00000000021bf410, libserver.so)  // inlines: curtime
// calls: CBaseAnimating::StudioFrameAdvance, CBaseAnimating::DispatchAnimEvents, CBaseEntity::SetNextThink
void __fastcall CEnvEffectsScript::Think(CEnvEffectsScript *const this)
{
  double v2; // xmm1_8
  CGlobalVars *v3; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CBaseAnimating::StudioFrameAdvance(this, AnimationAdvanceType_t::ANIM_ADVANCE_NORMAL);
  CBaseAnimating::DispatchAnimEvents(this, this);
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(COERCE_UNSIGNED_INT(v3->m_flCurrentTime + 0.1)), v2, 0);
  }
  else
  {
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(1036831949), v2, 0);
  }
}


// CEnvEffectsScript::TrailEffectEvent  (line 242, @0x00000000021cfae0, libserver.so)  // inlines: Activate
// calls: DispatchParticleEffect
// callers: CEnvEffectsScript::HandleAnimEvent
void __fastcall CEnvEffectsScript::TrailEffectEvent(CEnvEffectsScript *const this, CEffectScriptElement *pEffect)
{
  if ( !pEffect->m_bActive && !pEffect->m_bTrailActive )
  {
    DispatchParticleEffect(
      pEffect->m_szMaterial,
      ParticleAttachment_t::PATTACH_POINT_FOLLOW,
      this,
      pEffect->m_szAttachment,
      0,
      -1,
      0);
    pEffect->m_bTrailActive = 1;
    pEffect->m_bActive = 1;
  }
}


// CEnvEffectsScript::SpriteEffectEvent  (line 256, @0x00000000021cfb50, libserver.so)  // inlines: Activate, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, NetworkStateChanged, Set, SetAlpha, SetAttachment, SetBlue, SetColor, SetComponent, SetGreen, SetRed, SetRenderColor, SetRenderFX, SetTransparency, SetVal, a, operator CEntityInstance*, operator!=, operator->, operator=, operator=<RenderFx_t>, operator=<int>, operator==<CSprite>
// calls: CBaseEntity::GetAbsOrigin, CSprite::SpriteCreate, CEntityHandle::operator CEntityInstance*, CBaseEntity::FollowEntity, CBaseModelEntity::SetRenderMode, CSprite::SetBrightness, CSprite::SetScale, CSprite::TurnOn, CBaseAnimating::LookupAttachment
// callers: CEnvEffectsScript::HandleAnimEvent
// globals: CEntityHandle::gm_pEntityList
void __fastcall CEnvEffectsScript::SpriteEffectEvent(CEnvEffectsScript *const this, CEffectScriptElement *pEffect)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  const Vector *AbsOrigin; // rax
  CSprite *v8; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v10; // eax
  __int16 v11; // cx
  CBaseEntity *v12; // rax
  char m_iR; // r15
  CEntityInstance *v14; // r12
  float v15; // xmm1_4
  char v16; // al
  CSprite *v17; // rax
  float v18; // xmm2_4
  CSprite *v19; // rax
  int v20; // r12d
  CEntityInstance *v21; // rax
  CBaseEntity *v22; // rbx
  int v23; // eax
  CEntityIdentity *v24; // rdx
  CEntityIdentity *v25; // rdx
  CEntityIdentity *v26; // rdx
  int v27; // eax
  __int16 v28; // cx
  char m_pEntity_high; // [rsp+3h] [rbp-3Dh]
  int m_iG; // [rsp+4h] [rbp-3Ch]
  char v31; // [rsp+4h] [rbp-3Ch]
  int m_iB; // [rsp+8h] [rbp-38h]
  int brightness; // [rsp+Ch] [rbp-34h]

  if ( !pEffect->m_bActive )
  {
    m_Index = pEffect->m_pSprite.m_Index;
    if ( m_Index + 2 <= 1
      || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pEffect->m_pSprite.m_Index) >> 9) & 0x3F]) == 0
      || (v6 = &v5[pEffect->m_pSprite.m_Index & 0x1FF]) == 0
      || m_Index != v6->m_EHandle.m_Index
      || v6->m_pInstance == 0 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      v8 = CSprite::SpriteCreate(pEffect->m_szMaterial, AbsOrigin, 1);
      if ( v8 != 0 && (m_pEntity = v8->m_pEntity) != 0 )
      {
        v10 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v11 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(pEffect->m_pSprite.m_Index) = v11 | pEffect->m_pSprite.m_Index & 0x8000;
        pEffect->m_pSprite.m_Index = (v10 << 15) | pEffect->m_pSprite.m_Index & 0x7FFF;
      }
      else
      {
        pEffect->m_pSprite.m_Index = -1;
      }
      v12 = CEntityHandle::operator CEntityInstance *(&pEffect->m_pSprite);
      CBaseEntity::FollowEntity(v12, this, 1);
      brightness = pEffect->m_iA;
      m_iG = pEffect->m_iG;
      m_iR = pEffect->m_iR;
      m_iB = pEffect->m_iB;
      v14 = CEntityHandle::operator CEntityInstance *(&pEffect->m_pSprite);
      CBaseModelEntity::SetRenderMode(v14, pEffect->m_iRenderType);
      v16 = m_iG;
      m_pEntity_high = HIBYTE(v14[17].m_pEntity);
      if ( m_iR != BYTE4(v14[17].m_pEntity) )
      {
        (*(v14->_vptr_IHandleEntity + 22))(v14, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v16 = m_iG;
        BYTE4(v14[17].m_pEntity) = m_iR;
      }
      v31 = v16;
      if ( v16 != BYTE5(v14[17].m_pEntity) )
      {
        (*(v14->_vptr_IHandleEntity + 22))(v14, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        BYTE5(v14[17].m_pEntity) = v31;
      }
      if ( m_iB != BYTE6(v14[17].m_pEntity) )
      {
        (*(v14->_vptr_IHandleEntity + 22))(v14, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        BYTE6(v14[17].m_pEntity) = m_iB;
      }
      if ( m_pEntity_high != HIBYTE(v14[17].m_pEntity) )
      {
        (*(v14->_vptr_IHandleEntity + 22))(v14, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        HIBYTE(v14[17].m_pEntity) = m_pEntity_high;
      }
      CSprite::SetBrightness(v14, brightness, v15);
      if ( BYTE6(v14[16].m_CScriptComponent) != 0 )
      {
        (*(v14->_vptr_IHandleEntity + 22))(v14, 814, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        BYTE6(v14[16].m_CScriptComponent) = 0;
      }
      v17 = CEntityHandle::operator CEntityInstance *(&pEffect->m_pSprite);
      CSprite::SetScale(v17, 0.0, v18);
      v19 = CEntityHandle::operator CEntityInstance *(&pEffect->m_pSprite);
      CSprite::TurnOn(v19);
      v20 = CBaseAnimating::LookupAttachment(this, pEffect->m_szAttachment);
      v21 = CEntityHandle::operator CEntityInstance *(&pEffect->m_pSprite);
      v22 = v21;
      if ( this != 0 )
      {
        v23 = v21[24].m_pEntity;
        if ( (v23 + 2) <= 1
          || (v24 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v22[1].m_iGlobalname.u.m_Id) >> 9) & 0x3F]) == 0
          || (v25 = &v24[v22[1].m_iGlobalname.u.m_Id & 0x1FF]) == 0
          || v23 != v25->m_EHandle.m_Index
          || this != v25->m_pInstance )
        {
          (*(v22->_vptr_IHandleEntity + 22))(v22, 1160, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          v26 = this->m_pEntity;
          if ( v26 != 0 )
          {
            v27 = (v26->m_EHandle.m_Index >> 15) - (v26->m_flags & 1);
            if ( v26->m_EHandle.m_Index == -1 )
              v28 = 0x7FFF;
            else
              v28 = v26->m_EHandle.m_Index & 0x7FFF;
            LOWORD(v22[1].m_iGlobalname.u.m_Id) = v28 | v22[1].m_iGlobalname.u.m_Id & 0x8000;
            LODWORD(v22[1].m_iGlobalname.u.m_Id) = (v27 << 15) | v22[1].m_iGlobalname.u.m_Id & 0x7FFF;
          }
          else
          {
            LODWORD(v22[1].m_iGlobalname.u.m_Id) = -1;
          }
        }
        if ( v20 != HIDWORD(v22[1].m_iGlobalname.u.m_pAsString) )
        {
          (*(v22->_vptr_IHandleEntity + 22))(v22, 1164, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          HIDWORD(v22[1].m_iGlobalname.u.m_pAsString) = v20;
        }
        CBaseEntity::FollowEntity(v22, this, 1);
      }
      pEffect->m_bActive = 1;
    }
  }
}


// CEnvEffectsScript::HandleAnimEvent  (line 275, @0x00000000021d0030, libserver.so)  // inlines: Deactivate, FadeAndDie, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, curtime, operator CEntityInstance*, operator!=, operator->, operator=, operator=<int>
// calls: CBaseAnimating::HandleAnimEvent, CEnvEffectsScript::GetScriptElementByName, CEntityHandle::operator CEntityInstance*, CSprite::SetBrightness, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CEnvEffectsScript::SpriteEffectEvent, CBaseAnimating::GetAttachment, CBaseEntity::StopFollowingEntity, CConcreteEntityList::LookupEntity, CBaseEntity::SetAbsOrigin, StopParticleEffects (13 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CEnvEffectsScript::HandleAnimEvent(CEnvEffectsScript *const this, animevent_t *pEvent)
{
  CEffectScriptElement *v3; // rax
  CEffectScriptElement *v4; // r12
  int v5; // eax
  CSprite *v6; // r13
  float v7; // xmm1_4
  double v8; // xmm1_8
  CGlobalVars *v9; // rbx
  CGlobalVars *v10; // rax
  CGlobalVars *v11; // r15
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  void (__fastcall *v13)(__int64); // rax
  double v14; // xmm0_8
  CEffectScriptElement *ScriptElementByName; // rax
  int m_iType; // edx
  uint32 m_Index; // edx
  CEntityInstance *m_pInstance; // rax
  CEntityIdentity *v19; // rcx
  __int64 v20; // rax
  bool v21; // zf
  CEntityIdentity *v22; // rcx
  uint32 v23; // eax
  CBaseEntity *v24; // rdi
  CEntityIdentity *v25; // rdx
  CEntityIdentity *v26; // rdx
  uint32 v27; // r14d
  const CEntityHandle *v28; // r15
  unsigned int v29; // ebx
  CEntityIdentity *v30; // rax
  CEntityIdentity *v31; // rax
  CEntityIdentity *v32; // rax
  CConcreteEntityList *v33; // rdx
  uint32 v34; // eax
  CEntityInstance *v35; // r14
  CEntityIdentity *v36; // rcx
  CEntityIdentity *v37; // rcx
  CBaseEntity *v38; // rdi
  CEntityIdentity *v39; // rdx
  CEntityIdentity *v40; // rdx
  float m_flFadeTime; // [rsp+8h] [rbp-48h]
  CConcreteEntityList *v42; // [rsp+8h] [rbp-48h]
  Vector vOrigin; // [rsp+10h] [rbp-40h] BYREF

  if ( pEvent->event == 19 )
  {
    ScriptElementByName = CEnvEffectsScript::GetScriptElementByName(this, pEvent->options);
    if ( ScriptElementByName != 0 )
    {
      m_iType = ScriptElementByName->m_iType;
      if ( m_iType == 1 )
      {
        CEnvEffectsScript::TrailEffectEvent(this, ScriptElementByName);
      }
      else if ( m_iType == 2 )
      {
        CEnvEffectsScript::SpriteEffectEvent(this, ScriptElementByName);
      }
    }
  }
  else if ( pEvent->event == 20 )
  {
    v3 = CEnvEffectsScript::GetScriptElementByName(this, pEvent->options);
    v4 = v3;
    if ( v3 != 0 && v3->m_bActive )
    {
      v3->m_bActive = 0;
      v5 = v3->m_iType;
      if ( v5 == 1 )
      {
        StopParticleEffects(this);
        v4->m_bTrailActive = 0;
      }
      else if ( v5 == 2 )
      {
        if ( v4->m_bStopFollowOnKill )
        {
          m_Index = v4->m_pSprite.m_Index;
          m_pInstance = 0;
          if ( m_Index + 2 > 1 )
          {
            v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->m_pSprite.m_Index) >> 9) & 0x3F];
            if ( v19 != 0 )
            {
              v20 = v4->m_pSprite.m_Index & 0x1FF;
              v21 = &v19[v20] == 0;
              v22 = &v19[v20];
              m_pInstance = 0;
              if ( !v21 && m_Index == v22->m_EHandle.m_Index )
                m_pInstance = v22->m_pInstance;
            }
          }
          CBaseAnimating::GetAttachment(this, BYTE4(m_pInstance[24].m_pEntity), &vOrigin);
          v23 = v4->m_pSprite.m_Index;
          v24 = 0;
          if ( v23 + 2 > 1 )
          {
            v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->m_pSprite.m_Index) >> 9) & 0x3F];
            if ( v25 != 0 )
            {
              v26 = &v25[v4->m_pSprite.m_Index & 0x1FF];
              if ( v26 != 0 && v23 == v26->m_EHandle.m_Index )
                v24 = v26->m_pInstance;
            }
          }
          CBaseEntity::StopFollowingEntity(v24);
          v27 = v4->m_pSprite.m_Index;
          v28 = 0;
          v29 = v27 + 2;
          if ( v27 + 2 > 1 )
          {
            v30 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->m_pSprite.m_Index) >> 9) & 0x3F];
            if ( v30 != 0 )
            {
              v31 = &v30[v4->m_pSprite.m_Index & 0x1FF];
              if ( v31 != 0 && v27 == v31->m_EHandle.m_Index )
                v28 = v31->m_pInstance;
            }
          }
          v42 = CEntityHandle::gm_pEntityList;
          v32 = CConcreteEntityList::LookupEntity(CEntityHandle::gm_pEntityList, v28 + 290);
          v33 = v42;
          if ( v32 != 0 && v32->m_pInstance != 0 )
          {
            (*(*&v28->m_Index + 176LL))(v28, 1160, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            v33 = CEntityHandle::gm_pEntityList;
            v28[290].m_Index = -1;
            v34 = v4->m_pSprite.m_Index;
            v29 = v34 + 2;
          }
          else
          {
            v34 = v27;
          }
          v35 = 0;
          if ( v29 > 1 )
          {
            v36 = v33->m_pIdentityChunks[(LOWORD(v4->m_pSprite.m_Index) >> 9) & 0x3F];
            if ( v36 != 0 )
            {
              v37 = &v36[v4->m_pSprite.m_Index & 0x1FF];
              if ( v37 != 0 && v37->m_EHandle.m_Index == v34 )
                v35 = v37->m_pInstance;
            }
          }
          if ( HIDWORD(v35[24].m_pEntity) != 0 )
          {
            (*(v35->_vptr_IHandleEntity + 22))(v35, 1164, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            v33 = CEntityHandle::gm_pEntityList;
            HIDWORD(v35[24].m_pEntity) = 0;
            v34 = v4->m_pSprite.m_Index;
            v29 = v34 + 2;
          }
          v38 = 0;
          if ( v29 > 1 )
          {
            v39 = v33->m_pIdentityChunks[(LOWORD(v4->m_pSprite.m_Index) >> 9) & 0x3F];
            if ( v39 != 0 )
            {
              v40 = &v39[v4->m_pSprite.m_Index & 0x1FF];
              if ( v40 != 0 && v40->m_EHandle.m_Index == v34 )
                v38 = v40->m_pInstance;
            }
          }
          CBaseEntity::SetAbsOrigin(v38, &vOrigin);
        }
        m_flFadeTime = v4->m_flFadeTime;
        v6 = CEntityHandle::operator CEntityInstance *(&v4->m_pSprite);
        CSprite::SetBrightness(v6, 0, v7);
        CBaseEntity::ThinkSet(v6, CSprite::AnimateUntilDead, 0.0, 0, 0);
        v9 = gpGlobals;
        v10 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          v11 = gpGlobals;
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
            v11 = gpGlobals;
            if ( m_pfnWarningFunc != 0 )
            {
              m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
              v11 = gpGlobals;
              v10 = gpGlobals;
            }
          }
          v6->m_flDieTime = m_flFadeTime + v9->m_flCurrentTime;
          if ( v10 != 0 )
          {
            if ( !v11->m_bEnableAssertions && !v11->m_bInSimulation )
            {
              v13 = v11->m_pfnWarningFunc;
              if ( v13 != 0 )
                v13(1);
            }
            *&v14 = LODWORD(v11->m_flCurrentTime);
          }
          else
          {
            v14 = 0.0;
          }
        }
        else
        {
          *&v8 = LODWORD(m_flFadeTime);
          v14 = 0.0;
          *&v8 = m_flFadeTime + 0.0;
          v6->m_flDieTime = m_flFadeTime + 0.0;
        }
        CBaseEntity::SetNextThink(v6, v14, v8, 0);
        v4->m_pSprite.m_Index = -1;
      }
    }
  }
  else
  {
    CBaseAnimating::HandleAnimEvent(this, pEvent);
  }
}


// CEnvEffectsScript::InputSetSequence  (line 335, @0x00000000021c4240, libserver.so)  // inlines: AssignTo, SetPlaybackRate, String, StringID, TempString, ToCStr, ToString
// calls: MakeEntitySystemString, V_snprintf, VariantFieldTypeName, Warning, CBaseAnimating::LookupSequence, CBaseAnimating::SetSequence, CBaseAnimating::ResetSequenceInfo, CBaseAnimating::SetCycle, CBaseAnimating::GetBaseAnimatingController
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_21C4278, jpt_21C42D1, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CEnvEffectsScript::InputSetSequence(CEnvEffectsScript *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  char *m_pszString; // rsi
  int16 v6; // ax
  const char *v7; // rax
  char *v8; // rsi
  HSequence v9; // eax
  float v10; // xmm1_4
  CBaseAnimatingController *BaseAnimatingController; // rax
  double m_float; // xmm0_8
  const char *v13; // rcx
  const char *v14; // rdx
  const char *v15; // rax
  double m_float64; // xmm0_8
  const char *v17; // rcx
  const char *v18; // rdx
  char *pSequenceName; // [rsp+10h] [rbp-30h]

  m_type = inputdata->value.m_type;
  if ( m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_11;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_17;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_22;
      case 6:
        v13 = "true";
        v14 = "%s";
        if ( inputdata->value.m_char == 0 )
          v13 = "false";
        goto LABEL_19;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_22;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        v13 = inputdata->value.m_pszString;
        v14 = "%lld";
LABEL_19:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, v14, v13);
        goto LABEL_20;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_20:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_17:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_22:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v7 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v7);
LABEL_11:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  MakeEntitySystemString(m_pszString);
  if ( pSequenceName != 0 )
  {
    v6 = inputdata->value.m_type;
    if ( v6 == 30 )
    {
      v8 = inputdata->value.m_pszString;
    }
    else
    {
      switch ( v6 )
      {
        case 0:
          goto LABEL_34;
        case 1:
          m_float64 = inputdata->value.m_float;
          goto LABEL_36;
        case 3:
        case 39:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%g %g %g",
            *inputdata->value.m_pszString,
            *(inputdata->value.m_uint64 + 4),
            *(inputdata->value.m_uint64 + 8));
          v8 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 4:
        case 27:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%g %g %g %g",
            *inputdata->value.m_pszString,
            *(inputdata->value.m_uint64 + 4),
            *(inputdata->value.m_uint64 + 8),
            *(inputdata->value.m_uint64 + 12));
          v8 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 5:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%d",
            inputdata->value.m_uint);
          goto LABEL_45;
        case 6:
          v17 = "true";
          v18 = "%s";
          if ( inputdata->value.m_char == 0 )
            v17 = "false";
          goto LABEL_38;
        case 8:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%c",
            inputdata->value.m_char);
          goto LABEL_45;
        case 9:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%d %d %d %d",
            inputdata->value.m_int,
            BYTE1(inputdata->value.m_int),
            BYTE2(inputdata->value.m_int),
            HIBYTE(inputdata->value.m_int));
          v8 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 25:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%g %g",
            *inputdata->value.m_pszString,
            *(inputdata->value.m_uint64 + 4));
          v8 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 26:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%lld",
            inputdata->value.m_uint64);
          goto LABEL_39;
        case 33:
          v17 = inputdata->value.m_pszString;
          v18 = "%llu";
LABEL_38:
          V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, v18, v17);
LABEL_39:
          v8 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 34:
          m_float64 = inputdata->value.m_float64;
LABEL_36:
          V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float64);
          v8 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 37:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%u",
            inputdata->value.m_uint);
LABEL_45:
          v8 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        default:
          v15 = VariantFieldTypeName(v6);
          Warning("No conversion from %s to string at the moment!\n", v15);
LABEL_34:
          CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
          v8 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
      }
    }
    MakeEntitySystemString(v8);
    v9.m_Data = CBaseAnimating::LookupSequence(this, pSequenceName).m_Data;
    if ( v9.m_Data != -1 )
    {
      CBaseAnimating::SetSequence(this, v9, SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE);
      CBaseAnimating::ResetSequenceInfo(this);
      CBaseAnimating::SetCycle(this, 0.0, v10);
      BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
      (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 22))(BaseAnimatingController, 1.0);
    }
  }
}


// CEnvEffectsScript::ParseScriptFile  (line 350, @0x00000000021dc640, libserver.so)  // inlines: GetScriptFile, String, ToCStr, memset
// calls: CUtlVectorBase<CEffectScriptElement, CUtlMemory<CEffectScriptElement, int> >::RemoveAll, memset, UTIL_LoadFileForMe, CEnvEffectsScript::LoadFromBuffer, UTIL_FreeFile, DevMsg
// callers: CEnvEffectsScript::Spawn, CEnvEffectsScript::Precache
// strings: "CEnvEffectsScript:  failed to load %s\n"
// globals: g_bUnget, token, currenttoken
void __fastcall CEnvEffectsScript::ParseScriptFile(
        const CEnvEffectsScript *const this,
        IEntityResourceManifest *pManifest,
        CUtlVector<CEffectScriptElement,CUtlMemory<CEffectScriptElement,int> > *pOutputScriptElements)
{
  const char *m_pAsString; // r12
  uint8 *FileForMe; // rax
  uint8 *v8; // rbx
  int length[13]; // [rsp+Ch] [rbp-34h] BYREF

  length[0] = 0;
  if ( pOutputScriptElements != 0 )
    CUtlVectorBase<CEffectScriptElement,CUtlMemory<CEffectScriptElement,int>>::RemoveAll(pOutputScriptElements);
  m_pAsString = "";
  if ( this->m_iszScriptName.u.m_Id != 0 )
    m_pAsString = this->m_iszScriptName.u.m_pAsString;
  g_bUnget = 0;
  currenttoken = 0;
  memset(token, 0, sizeof(token));
  FileForMe = UTIL_LoadFileForMe(m_pAsString, length);
  v8 = FileForMe;
  if ( length[0] > 0 && FileForMe != 0 )
  {
    currenttoken = FileForMe;
    CEnvEffectsScript::LoadFromBuffer(this, m_pAsString, FileForMe, pManifest, pOutputScriptElements);
    UTIL_FreeFile(v8);
  }
  else
  {
    DevMsg(1, "CEnvEffectsScript:  failed to load %s\n", m_pAsString);
  }
}


// CEnvEffectsScript::LoadFromBuffer  (line 376, @0x00000000021dc580, libserver.so)  // inlines: ParseToken
// calls: V_stricmp_fast, CEnvEffectsScript::ParseNewEffect, V_ParseToken, Warning
// callers: CEnvEffectsScript::ParseScriptFile
// strings: "CEnvEffectsScript: Unknown entry type '%s'\n"
// globals: token, g_bUnget, currenttoken
void __fastcall CEnvEffectsScript::LoadFromBuffer(
        const CEnvEffectsScript *const this,
        const char *scriptfile,
        const char *buffer,
        IEntityResourceManifest *pManifest,
        CUtlVector<CEffectScriptElement,CUtlMemory<CEffectScriptElement,int> > *pOutputScriptElements)
{
  while ( 1 )
  {
    if ( g_bUnget )
    {
      g_bUnget = 0;
      if ( token[0] == 0 )
        return;
    }
    else
    {
      currenttoken = V_ParseToken(currenttoken, token, 1204, 0, 0);
      if ( token[0] == 0 )
        return;
    }
    if ( V_stricmp_fast(token, "effect") != 0 )
      break;
    CEnvEffectsScript::ParseNewEffect(this, pManifest, pOutputScriptElements);
  }
  Warning("CEnvEffectsScript: Unknown entry type '%s'\n", token);
}


// CEnvEffectsScript::ParseNewEffect  (line 399, @0x00000000021dbca0, libserver.so)  // inlines: AddToTail, CEffectScriptElement, CEntityHandle, CHandle, CopyConstruct<CEffectScriptElement>, Deactivate, Element, GrowMemory, IsRootCommand, ParseToken, Unget, V_strncpy<long unsigned int>, atof, atoi, operator[]
// calls: _V_strncpy, V_stricmp_fast, V_ParseToken, CBaseEntity::PrecacheModel, sscanf, CUtlMemory<CEffectScriptElement, int>::Grow, ParseToken, strtod, strtol, __stack_chk_fail
// callers: CEnvEffectsScript::LoadFromBuffer
// strings: "trail", "%i %i %i %i", "texturescale", "fadetime", "stopfollowonkill"
// globals: g_bUnget, token, currenttoken
void __fastcall CEnvEffectsScript::ParseNewEffect(
        const CEnvEffectsScript *const this,
        IEntityResourceManifest *pManifest,
        CUtlVector<CEffectScriptElement,CUtlMemory<CEffectScriptElement,int> > *pOutputScriptElements)
{
  __int64 m_Size; // r12
  int v6; // eax
  CEffectScriptElement *v7; // rax
  __m128d v8; // xmm0
  float v9; // xmm0_4
  float v10; // xmm0_4
  __m128d v11; // xmm0
  CEffectScriptElement NewElement; // [rsp+10h] [rbp-1F0h] BYREF
  unsigned __int64 v13; // [rsp+1C8h] [rbp-38h]

  NewElement.m_bTrailActive = 0;
  v13 = __readfsqword(0x28u);
  NewElement.m_bActive = 0;
  NewElement.m_pSprite.m_Index = -1;
  NewElement.m_iType = 0;
  NewElement.m_iRenderType = 5;
  NewElement.m_iR = 255;
  NewElement.m_iG = 0;
  NewElement.m_iB = 0;
  NewElement.m_iA = 255;
  NewElement.m_flScale = 1.0;
  NewElement.m_flFadeTime = 1.0;
  NewElement.m_flTextureRes = -1.0;
  NewElement.m_bStopFollowOnKill = 0;
  if ( g_bUnget )
    g_bUnget = 0;
  else
    currenttoken = V_ParseToken(currenttoken, token, 1204, 0, 0);
  _V_strncpy(&NewElement, token, 128);
  do
  {
    if ( g_bUnget )
      g_bUnget = 0;
    else
      currenttoken = V_ParseToken(currenttoken, token, 1204, 0, 0);
    if ( V_stricmp_fast(token, "effect") == 0 )
    {
      g_bUnget = 1;
      goto LABEL_10;
    }
  }
  while ( V_stricmp_fast(token, "{") != 0 );
LABEL_16:
  if ( g_bUnget )
  {
LABEL_17:
    g_bUnget = 0;
    goto LABEL_18;
  }
  while ( 1 )
  {
    currenttoken = V_ParseToken(currenttoken, token, 1204, 0, 0);
LABEL_18:
    if ( V_stricmp_fast(token, "}") == 0 )
      break;
    if ( V_stricmp_fast(token, "type") != 0 )
    {
      if ( V_stricmp_fast(token, "material") != 0 )
      {
        if ( V_stricmp_fast(token, "attachment") != 0 )
        {
          if ( V_stricmp_fast(token, "color") != 0 )
          {
            if ( V_stricmp_fast(token, "scale") != 0 )
            {
              if ( V_stricmp_fast(token, "texturescale") != 0 )
              {
                if ( V_stricmp_fast(token, "fadetime") != 0 )
                {
                  if ( V_stricmp_fast(token, "stopfollowonkill") == 0 )
                  {
                    if ( g_bUnget )
                      g_bUnget = 0;
                    else
                      ParseToken();
                    NewElement.m_bStopFollowOnKill = strtol(token, 0, 10) != 0;
                  }
                }
                else
                {
                  if ( g_bUnget )
                    g_bUnget = 0;
                  else
                    ParseToken();
                  v11.m128d_f64[0] = strtod(token, 0);
                  NewElement.m_flFadeTime = _mm_movedup_pd(v11).m128d_f64[0];
                }
              }
              else
              {
                if ( g_bUnget )
                  g_bUnget = 0;
                else
                  ParseToken();
                v9 = strtod(token, 0);
                if ( v9 <= 0.0 )
                  v10 = 0.0;
                else
                  v10 = 1.0 / v9;
                NewElement.m_flTextureRes = v10;
              }
            }
            else
            {
              if ( g_bUnget )
                g_bUnget = 0;
              else
                ParseToken();
              v8.m128d_f64[0] = strtod(token, 0);
              NewElement.m_flScale = _mm_movedup_pd(v8).m128d_f64[0];
            }
          }
          else
          {
            if ( g_bUnget )
              g_bUnget = 0;
            else
              ParseToken();
            sscanf(token, "%i %i %i %i", &NewElement.m_iR, &NewElement.m_iG, &NewElement.m_iB, &NewElement.m_iA);
          }
        }
        else
        {
          if ( g_bUnget )
            g_bUnget = 0;
          else
            ParseToken();
          _V_strncpy(NewElement.m_szAttachment, token, 128);
        }
      }
      else
      {
        if ( g_bUnget )
          g_bUnget = 0;
        else
          currenttoken = V_ParseToken(currenttoken, token, 1204, 0, 0);
        _V_strncpy(NewElement.m_szMaterial, token, 128);
        if ( pManifest != 0 )
          CBaseEntity::PrecacheModel(NewElement.m_szMaterial, pManifest);
      }
      goto LABEL_16;
    }
    if ( g_bUnget )
      g_bUnget = 0;
    else
      currenttoken = V_ParseToken(currenttoken, token, 1204, 0, 0);
    if ( V_stricmp_fast(token, "trail") != 0 )
    {
      if ( V_stricmp_fast(token, "sprite") == 0 )
        NewElement.m_iType = 2;
      goto LABEL_16;
    }
    NewElement.m_iType = 1;
    if ( g_bUnget )
      goto LABEL_17;
  }
LABEL_10:
  if ( pOutputScriptElements != 0 )
  {
    m_Size = pOutputScriptElements->m_Size;
    v6 = pOutputScriptElements->m_Size;
    if ( m_Size == pOutputScriptElements->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CEffectScriptElement,int>::Grow(&pOutputScriptElements->m_Memory, 1);
      v6 = pOutputScriptElements->m_Size;
    }
    pOutputScriptElements->m_Size = v6 + 1;
    v7 = &pOutputScriptElements->m_Memory.m_pMemory[m_Size];
    if ( v7 != 0 )
      *v7 = NewElement;
  }
}


// CEnvEffectsScript::GetScriptElementByName  (line 511, @0x00000000021cffa0, libserver.so)  // inlines: Element, operator[]
// calls: V_stricmp_fast
// callers: CEnvEffectsScript::HandleAnimEvent
CEffectScriptElement *__fastcall CEnvEffectsScript::GetScriptElementByName(
        CEnvEffectsScript *const this,
        const char *pName)
{
  int v3; // r13d
  __int64 v5; // rbx
  CEffectScriptElement *v6; // r14

  v3 = 0;
  v5 = 0;
  if ( this->m_ScriptElements.m_Size <= 0 )
    return 0;
  while ( 1 )
  {
    v6 = &this->m_ScriptElements.m_Memory.m_pMemory[v5];
    if ( v6 != 0 && V_stricmp_fast(&this->m_ScriptElements.m_Memory.m_pMemory[v5], pName) == 0 )
      break;
    ++v3;
    ++v5;
    if ( this->m_ScriptElements.m_Size <= v3 )
      return 0;
  }
  return v6;
}


