// Reconstructed from DWARF by pahole; not original source.

// src/game/server/envfade.cpp:18
class CEnvFade : public CLogicalEntity {
	class NetworkVar_m_fadeColor {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	float m_Duration;  // +0x30c
	float m_HoldTime;  // +0x310

	COutputEvent m_OnBeginFade;  // +0x318

	static datamap_t m_DataMap;
	typedef CLogicalEntity BaseClass;
	typedef CEnvFade ThisClass;

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
	CEnvFade(CEnvFade &);
	CEnvFade(CEnvFade &);
	CEnvFade();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Spawn(const CEntityKeyValues *);
	float Duration();
	float HoldTime();
	void SetDuration(float);
	void SetHoldTime(float);
	virtual int DrawDebugTextOverlays(uint64, int);
	void InputFade(inputdata_t &);
	virtual ~CEnvFade();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[79] DrawDebugTextOverlays
	// sizeof = 816
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEnvFade::~CEnvFade  (line 18, @0x0000000002210c80, libserver.so)  // inlines: ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CEnvFade::~CEnvFade(CEnvFade *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CEnvFade::~CEnvFade  (line 18, @0x0000000002210ca0, libserver.so)  // inlines: ~CEnvFade, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CEnvFade::~CEnvFade(CEnvFade *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvFade::GetEntityClass  (line 20, @0x000000000220de10, libserver.so)
CEntityClass *__cdecl CEnvFade::GetEntityClass()
{
  return g_pEntityCEnvFadeClass;
}


// CEnvFade::Schema_DynamicBinding  (line 20, @0x000000000220de20, libserver.so)
// globals: CEnvFade::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvFade::Schema_DynamicBinding(const CEnvFade *const this)
{
  return CEnvFade::s_pSchemaBinding;
}


// CEnvFade::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 20, @0x000000000220de30, libserver.so)
// globals: CEnvFade::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvFade::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvFade::CEntityInstanceEntityClass *const this)
{
  return CEnvFade::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvFade::CEntityInstanceEntityClass::DestructInstance  (line 20, @0x000000000220de40, libserver.so)  // inlines: Destruct<CEnvFade>
void __fastcall CEnvFade::CEntityInstanceEntityClass::DestructInstance(
        CEnvFade::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvFade::CEntityInstanceEntityClass::FreeInstance  (line 20, @0x000000000220de60, libserver.so)
void __fastcall CEnvFade::CEntityInstanceEntityClass::FreeInstance(
        CEnvFade::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvFade::CEntityInstanceEntityClass::CanAllocate  (line 20, @0x000000000220de80, libserver.so)
bool __fastcall CEnvFade::CEntityInstanceEntityClass::CanAllocate(
        const CEnvFade::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvFade::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 20, @0x000000000220de90, libserver.so)
// globals: CEnvFade::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvFade::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvFade::CEntityInstanceEntityClass *const this)
{
  return CEnvFade::s_pSchemaBinding;
}


// CEnvFade::CEntityInstanceEntityClass::AllocateInstance  (line 20, @0x000000000220fa20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvFade::CEntityInstanceEntityClass::AllocateInstance(
        CEnvFade::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 816);
  memset(v1, 0, 0x330u);
  return v1;
}


// CEnvFade::CEntityInstanceEntityClass::ConstructInstance  (line 20, @0x0000000002211a90, libserver.so)  // inlines: CEntityIOOutput, CEnvFade, CLogicalEntity, CNetworkColorBase, CNetworkVarBase, CServerOnlyEntity, Color, Construct<CEnvFade>, Init, NetworkStateChanged, SetAlpha, SetBlue, SetComponent, SetGreen, SetVal, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::CBaseEntity, CBaseEntity::~CBaseEntity, _Unwind_Resume
CEntityInstance *__fastcall CEnvFade::CEntityInstanceEntityClass::ConstructInstance(
        CEnvFade::CEntityInstanceEntityClass *const this,
        void *p)
{
  bool v3; // zf

  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 194) = 0;
    v3 = *(p + 777) == 0;
    *p = &off_402D470;
    if ( !v3 )
    {
      CBaseEntity::NetworkStateChanged(p, 0x308u, -1, -1);
      *(p + 777) = 0;
    }
    if ( *(p + 778) != 0 )
    {
      (*(*p + 176LL))(p, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      *(p + 778) = 0;
    }
    if ( *(p + 779) != 0 )
    {
      (*(*p + 176LL))(p, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      *(p + 779) = 0;
    }
    *(p + 99) = off_3F7C190;
  }
  return p;
}


// CEnvFade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 20, @0x0000000002212170, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvFade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvFade::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CEnvFade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 20, @0x0000000002212190, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvFade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvFade::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvFade::GetEntityClassInternal  (line 20, @0x0000000002215560, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CLogicalEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "env_fade", "CEnvFade"
// globals: `guard variable for'CEnvFade::GetEntityClassInternal(void)::g_EntityCEnvFadeClass, CEnvFade::GetEntityClassInternal(void)::g_EntityCEnvFadeClass, __dso_handle, CEnvFade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvFade::GetEntityClassInfo(void)::g_EntityCEnvFadeClassInfo, CEnvFade::GetEntityClassInfo(void)::g_EntityCEnvFadeClassInfo
CEntityClass *__cdecl CEnvFade::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvFade::GetEntityClassInternal(void)::g_EntityCEnvFadeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvFade::GetEntityClassInternal(void)::g_EntityCEnvFadeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEnvFade::GetEntityClassInternal(void)::g_EntityCEnvFadeClass);
    CEnvFade::GetEntityClassInternal(void)::g_EntityCEnvFadeClass._vptr_CEntityClass = off_402D3F0;
    __cxa_guard_release(&`guard variable for'CEnvFade::GetEntityClassInternal(void)::g_EntityCEnvFadeClass);
    __cxa_atexit(
      CEnvFade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvFade::GetEntityClassInternal(void)::g_EntityCEnvFadeClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvFadeClass != 0 )
    return &CEnvFade::GetEntityClassInternal(void)::g_EntityCEnvFadeClass;
  if ( `guard variable for'CEnvFade::GetEntityClassInfo(void)::g_EntityCEnvFadeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvFade::GetEntityClassInfo(void)::g_EntityCEnvFadeClassInfo) != 0 )
  {
    EntityClassInfo = CLogicalEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvFade::GetEntityClassInfo(void)::g_EntityCEnvFadeClassInfo,
      "CEnvFade",
      "env_fade",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvFade::GetEntityClassInfo(void)::g_EntityCEnvFadeClassInfo);
  }
  CEnvFade::GetEntityClassInternal(void)::g_EntityCEnvFadeClass.m_pClassInfo = &CEnvFade::GetEntityClassInfo(void)::g_EntityCEnvFadeClassInfo;
  CEnvFade::GetEntityClassInternal(void)::g_EntityCEnvFadeClass.m_pBaseClassInfo = CEnvFade::GetEntityClassInfo(void)::g_EntityCEnvFadeClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvFadeClass = &CEnvFade::GetEntityClassInternal(void)::g_EntityCEnvFadeClass;
  CEnvFade::GetEntityClassInfo(void)::g_EntityCEnvFadeClassInfo.m_pClass = &CEnvFade::GetEntityClassInternal(void)::g_EntityCEnvFadeClass;
  CEnvFade::GetEntityClassInternal(void)::g_EntityCEnvFadeClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCEnvFadeClass->m_pComponentOverrides = 0;
  return &CEnvFade::GetEntityClassInternal(void)::g_EntityCEnvFadeClass;
}


// CEnvFade::GetDataDescMap  (line 48, @0x00000000021ee590, libserver.so)
// globals: CEnvFade::m_DataMap
datamap_t *__fastcall CEnvFade::GetDataDescMap(CEnvFade *const this)
{
  return &CEnvFade::m_DataMap;
}


// CEnvFade::AddDatadescMetadataKeys  (line 48, @0x00000000021f86d0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvFade::GetEntityClass(void)
void __fastcall CEnvFade::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvFade::GetEntityClass);
}


// CEnvFade::GetBaseMap  (line 48, @0x00000000021f86f0, libserver.so)
datamap_t *__cdecl CEnvFade::GetBaseMap()
{
  return &CLogicalEntity::m_DataMap;
}


// DataMapInit<CEnvFade>  (line 48, @0x00000000021f8700, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CEnvFade"
// globals: `guard variable for'DataMapInit<CEnvFade>(CEnvFade *)::nameHolder, `guard variable for'DataMapInit<CEnvFade>(CEnvFade *)::dataDesc, CEnvFade::GetEntityClass(void), CEnvFade::m_DataMap, DataMapInit<CEnvFade>(CEnvFade *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvFade>(CEnvFade *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEnvFade>(CEnvFade *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvFade>(CEnvFade *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvFade>(CEnvFade *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvFade>(CEnvFade *)::nameHolder.m_pszBase = "CEnvFade";
    DataMapInit<CEnvFade>(CEnvFade *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvFade>(CEnvFade *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvFade>(CEnvFade *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvFade>(CEnvFade *)::nameHolder.m_nLenBase = 8;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvFade>(CEnvFade *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvFade>(CEnvFade *)::nameHolder,
      &_dso_handle);
  }
  CEnvFade::m_DataMap.baseMap = &CLogicalEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CEnvFade>(CEnvFade *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvFade>(CEnvFade *)::dataDesc) != 0 )
  {
    DataMapInit<CEnvFade>(CEnvFade *)::dataDesc[5].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvFade>(CEnvFade *)::dataDesc);
  }
  CEnvFade::m_DataMap.dataNumFields = 5;
  CEnvFade::m_DataMap.dataDesc = &DataMapInit<CEnvFade>(CEnvFade *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvFade::m_DataMap, CEnvFade::GetEntityClass);
  return &CEnvFade::m_DataMap;
}


// CEnvFade::Spawn  (line 71, @0x00000000021ef2d0, libserver.so)
// calls: CLogicalEntity::Spawn
void __fastcall CEnvFade::Spawn(CEnvFade *const this, const CEntityKeyValues *pKeyValues)
{
  CLogicalEntity::Spawn(this, pKeyValues);
}


// CEnvFade::InputFade  (line 80, @0x00000000022035f0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, UTIL_ScreenFadeAll, UTIL_ScreenFade, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CEnvFade::InputFade(CEnvFade *const this, inputdata_t *const inputdata)
{
  float v2; // xmm2_4
  unsigned int m_Value; // eax
  unsigned int v6; // ebx
  CBaseEntity *pActivator; // rsi
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  m_Value = this->m_spawnflags.m_Value;
  v6 = 2 - (m_Value & 1);
  if ( (m_Value & 2) != 0 )
    v6 = (2 - (this->m_spawnflags.m_Value & 1)) | 4;
  if ( (m_Value & 8) != 0 )
    v6 |= 8u;
  if ( (m_Value & 4) != 0 )
  {
    if ( (*(inputdata->pActivator->_vptr_IHandleEntity + 100))(inputdata->pActivator) != 0 )
      UTIL_ScreenFade(inputdata->pActivator, &this->m_fadeColor.m_Value, this->m_Duration, this->m_HoldTime, v6);
  }
  else
  {
    UTIL_ScreenFadeAll(&this->m_fadeColor.m_Value, this->m_HoldTime, v2, v6 | 0x10);
  }
  pActivator = inputdata->pActivator;
  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnBeginFade, pActivator, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


// GetFadeParms  (line 137, @0x00000000021f1000, libserver.so)  // inlines: Arg, SetAlpha, SetBlue, SetColor, SetGreen, SetRed, atof, operator[]
// calls: strtod, V_atoi
// callers: CC_FadeOut, CC_FadeIn
void __fastcall GetFadeParms(const CCommand *const args, float *const flTime, Color *const clrFade)
{
  __m128d v6; // xmm0
  unsigned __int8 v7; // al
  const char *v8; // rdi

  *flTime = 2.0;
  if ( args->m_nArgc > 1 )
  {
    v6.m128d_f64[0] = strtod(args->m_ppArgv[1], 0);
    *flTime = _mm_movedup_pd(v6).m128d_f64[0];
  }
  clrFade->_color[0] = 0;
  clrFade->_color[1] = 0;
  clrFade->_color[2] = 0;
  clrFade->_color[3] = -1;
  if ( args->m_nArgc > 4 )
  {
    v7 = V_atoi(args->m_ppArgv[2]);
    v8 = "";
    clrFade->_color[0] = v7;
    if ( args->m_nArgc > 3 )
      v8 = args->m_ppArgv[3];
    clrFade->_color[1] = V_atoi(v8);
    if ( args->m_nArgc > 4 )
    {
      clrFade->_color[2] = V_atoi(args->m_ppArgv[4]);
      if ( args->m_nArgc <= 5 )
        return;
    }
    else
    {
      clrFade->_color[2] = V_atoi("");
      if ( args->m_nArgc <= 5 )
        return;
    }
    clrFade->_color[3] = V_atoi(args->m_ppArgv[5]);
  }
}


// CC_FadeOut  (line 165, @0x00000000021f10e0, libserver.so)  // inlines: Color
// calls: GetFadeParms, UTIL_GetCommandClient, UTIL_ScreenFade, __stack_chk_fail
void __fastcall CC_FadeOut(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  float flTime; // [rsp+Ch] [rbp-24h] BYREF
  Color clrFade; // [rsp+10h] [rbp-20h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-18h]

  clrFade = 0;
  v5 = __readfsqword(0x28u);
  GetFadeParms(args, &flTime, &clrFade);
  CommandClient = UTIL_GetCommandClient();
  UTIL_ScreenFade(CommandClient, &clrFade, flTime, 0.0, 26);
}


// CC_FadeIn  (line 180, @0x00000000021f1150, libserver.so)  // inlines: Color
// calls: GetFadeParms, UTIL_GetCommandClient, UTIL_ScreenFade, __stack_chk_fail
void __fastcall CC_FadeIn(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  float flTime; // [rsp+Ch] [rbp-24h] BYREF
  Color clrFade; // [rsp+10h] [rbp-20h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-18h]

  clrFade = 0;
  v5 = __readfsqword(0x28u);
  GetFadeParms(args, &flTime, &clrFade);
  CommandClient = UTIL_GetCommandClient();
  UTIL_ScreenFade(CommandClient, &clrFade, flTime, 0.0, 17);
}


// CEnvFade::DrawDebugTextOverlays  (line 197, @0x00000000021eebf0, libserver.so)
// calls: CBaseEntity::DrawDebugTextOverlays, V_snprintf, CBaseEntity::EntityText, __stack_chk_fail
// strings: "    duration: %f", "    hold time: %f"
int __fastcall CEnvFade::DrawDebugTextOverlays(CEnvFade *const this, uint64 nDebugOverlayBits, int iDebugFilterFlags)
{
  __int16 v3; // r14
  char v5; // bl
  int v6; // r13d
  char tempstr[520]; // [rsp+10h] [rbp-230h] BYREF
  unsigned __int64 v9; // [rsp+218h] [rbp-28h]

  v3 = iDebugFilterFlags;
  v5 = nDebugOverlayBits;
  v9 = __readfsqword(0x28u);
  v6 = CBaseEntity::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v5 & 1) != 0 && (v3 & 0x4000) != 0 )
  {
    V_snprintf(tempstr, 512, "    duration: %f", this->m_Duration);
    CBaseEntity::EntityText(this, v6, tempstr, 0.0, 255, 255, 255, 255);
    V_snprintf(tempstr, 512, "    hold time: %f", this->m_HoldTime);
    CBaseEntity::EntityText(this, v6 + 1, tempstr, 0.0, 255, 255, 255, 255);
    v6 += 2;
  }
  return v6;
}


