// Reconstructed from DWARF by pahole; not original source.

// src/game/server/env_zoom.cpp:18
class CEnvZoom : public CPointEntity {
public:

private:

	float m_flSpeed;  // +0x308
	int m_nFOV;  // +0x30c

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
	CEnvZoom(CEnvZoom &);
	CEnvZoom(CEnvZoom &);
	CEnvZoom();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	void InputZoom(inputdata_t &);
	void InputUnZoom(inputdata_t &);
	int GetFOV();
	float GetSpeed();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CEnvZoom();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// sizeof = 784
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEnvZoom::~CEnvZoom  (line 18, @0x0000000002210640, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CEnvZoom::~CEnvZoom(CEnvZoom *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CEnvZoom::~CEnvZoom  (line 18, @0x0000000002210660, libserver.so)  // inlines: ~CEnvZoom, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CEnvZoom::~CEnvZoom(CEnvZoom *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvZoom::GetEntityClass  (line 20, @0x000000000220dcd0, libserver.so)
CEntityClass *__cdecl CEnvZoom::GetEntityClass()
{
  return g_pEntityCEnvZoomClass;
}


// CEnvZoom::Schema_DynamicBinding  (line 20, @0x000000000220dce0, libserver.so)
// globals: CEnvZoom::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvZoom::Schema_DynamicBinding(const CEnvZoom *const this)
{
  return CEnvZoom::s_pSchemaBinding;
}


// CEnvZoom::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 20, @0x000000000220dcf0, libserver.so)
// globals: CEnvZoom::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvZoom::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvZoom::CEntityInstanceEntityClass *const this)
{
  return CEnvZoom::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvZoom::CEntityInstanceEntityClass::DestructInstance  (line 20, @0x000000000220dd00, libserver.so)  // inlines: Destruct<CEnvZoom>
void __fastcall CEnvZoom::CEntityInstanceEntityClass::DestructInstance(
        CEnvZoom::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvZoom::CEntityInstanceEntityClass::FreeInstance  (line 20, @0x000000000220dd20, libserver.so)
void __fastcall CEnvZoom::CEntityInstanceEntityClass::FreeInstance(
        CEnvZoom::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvZoom::CEntityInstanceEntityClass::CanAllocate  (line 20, @0x000000000220dd40, libserver.so)
bool __fastcall CEnvZoom::CEntityInstanceEntityClass::CanAllocate(
        const CEnvZoom::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvZoom::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 20, @0x000000000220dd50, libserver.so)
// globals: CEnvZoom::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvZoom::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvZoom::CEntityInstanceEntityClass *const this)
{
  return CEnvZoom::s_pSchemaBinding;
}


// CEnvZoom::CEntityInstanceEntityClass::AllocateInstance  (line 20, @0x000000000220f9a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvZoom::CEntityInstanceEntityClass::AllocateInstance(
        CEnvZoom::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 784);
  memset(v1, 0, 0x310u);
  return v1;
}


// CEnvZoom::CEntityInstanceEntityClass::ConstructInstance  (line 20, @0x000000000220ff90, libserver.so)  // inlines: CEnvZoom, CPointEntity, Construct<CEnvZoom>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CEnvZoom::CEntityInstanceEntityClass::ConstructInstance(
        CEnvZoom::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_402C2F0;
  }
  return p;
}


// CEnvZoom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 20, @0x00000000022122b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvZoom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvZoom::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CEnvZoom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 20, @0x00000000022122d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvZoom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvZoom::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvZoom::GetEntityClassInternal  (line 20, @0x0000000002214fe0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "env_zoom", "CEnvZoom"
// globals: `guard variable for'CEnvZoom::GetEntityClassInternal(void)::g_EntityCEnvZoomClass, CEnvZoom::GetEntityClassInternal(void)::g_EntityCEnvZoomClass, __dso_handle, CEnvZoom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvZoom::GetEntityClassInfo(void)::g_EntityCEnvZoomClassInfo, CEnvZoom::GetEntityClassInfo(void)::g_EntityCEnvZoomClassInfo
CEntityClass *__cdecl CEnvZoom::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvZoom::GetEntityClassInternal(void)::g_EntityCEnvZoomClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvZoom::GetEntityClassInternal(void)::g_EntityCEnvZoomClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEnvZoom::GetEntityClassInternal(void)::g_EntityCEnvZoomClass);
    CEnvZoom::GetEntityClassInternal(void)::g_EntityCEnvZoomClass._vptr_CEntityClass = off_402C270;
    __cxa_guard_release(&`guard variable for'CEnvZoom::GetEntityClassInternal(void)::g_EntityCEnvZoomClass);
    __cxa_atexit(
      CEnvZoom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvZoom::GetEntityClassInternal(void)::g_EntityCEnvZoomClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvZoomClass != 0 )
    return &CEnvZoom::GetEntityClassInternal(void)::g_EntityCEnvZoomClass;
  if ( `guard variable for'CEnvZoom::GetEntityClassInfo(void)::g_EntityCEnvZoomClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvZoom::GetEntityClassInfo(void)::g_EntityCEnvZoomClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvZoom::GetEntityClassInfo(void)::g_EntityCEnvZoomClassInfo,
      "CEnvZoom",
      "env_zoom",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvZoom::GetEntityClassInfo(void)::g_EntityCEnvZoomClassInfo);
  }
  CEnvZoom::GetEntityClassInternal(void)::g_EntityCEnvZoomClass.m_pClassInfo = &CEnvZoom::GetEntityClassInfo(void)::g_EntityCEnvZoomClassInfo;
  CEnvZoom::GetEntityClassInternal(void)::g_EntityCEnvZoomClass.m_pBaseClassInfo = CEnvZoom::GetEntityClassInfo(void)::g_EntityCEnvZoomClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvZoomClass = &CEnvZoom::GetEntityClassInternal(void)::g_EntityCEnvZoomClass;
  CEnvZoom::GetEntityClassInfo(void)::g_EntityCEnvZoomClassInfo.m_pClass = &CEnvZoom::GetEntityClassInternal(void)::g_EntityCEnvZoomClass;
  CEnvZoom::GetEntityClassInternal(void)::g_EntityCEnvZoomClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCEnvZoomClass->m_pComponentOverrides = 0;
  return &CEnvZoom::GetEntityClassInternal(void)::g_EntityCEnvZoomClass;
}


// CEnvZoom::GetDataDescMap  (line 36, @0x00000000021ee570, libserver.so)
// globals: CEnvZoom::m_DataMap
datamap_t *__fastcall CEnvZoom::GetDataDescMap(CEnvZoom *const this)
{
  return &CEnvZoom::m_DataMap;
}


// CEnvZoom::AddDatadescMetadataKeys  (line 36, @0x00000000021f6110, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvZoom::GetEntityClass(void)
void __fastcall CEnvZoom::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvZoom::GetEntityClass);
}


// CEnvZoom::GetBaseMap  (line 36, @0x00000000021f6130, libserver.so)
datamap_t *__cdecl CEnvZoom::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CEnvZoom>  (line 36, @0x00000000021f6140, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CEnvZoom"
// globals: `guard variable for'DataMapInit<CEnvZoom>(CEnvZoom *)::nameHolder, CEnvZoom::GetEntityClass(void), CEnvZoom::m_DataMap, DataMapInit<CEnvZoom>(CEnvZoom *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvZoom>(CEnvZoom *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEnvZoom>(CEnvZoom *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvZoom>(CEnvZoom *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvZoom>(CEnvZoom *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvZoom>(CEnvZoom *)::nameHolder.m_pszBase = "CEnvZoom";
    DataMapInit<CEnvZoom>(CEnvZoom *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvZoom>(CEnvZoom *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvZoom>(CEnvZoom *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvZoom>(CEnvZoom *)::nameHolder.m_nLenBase = 8;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvZoom>(CEnvZoom *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvZoom>(CEnvZoom *)::nameHolder,
      &_dso_handle);
  }
  CEnvZoom::m_DataMap.dataNumFields = 4;
  CEnvZoom::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  CEnvZoom::m_DataMap.dataDesc = &DataMapInit<CEnvZoom>(CEnvZoom *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvZoom::m_DataMap, CEnvZoom::GetEntityClass);
  return &CEnvZoom::m_DataMap;
}


// CanOverrideEnvZoomOwner  (line 46, @0x00000000021f6210, libserver.so)
// calls: __dynamic_cast
// callers: CBasePlayer::SetFOV, GetZoomOwnerDesiredFOV
// globals: `typeinfo for'CEnvZoom
bool __fastcall CanOverrideEnvZoomOwner(CBaseEntity *pZoomOwner)
{
  _DWORD *v1; // rax
  _BOOL4 v2; // eax

  if ( pZoomOwner != 0 )
  {
    v1 = __dynamic_cast(pZoomOwner, &`typeinfo for'CBaseEntity, &`typeinfo for'CEnvZoom, 0);
    if ( v1 != 0 )
      return v1[101] & 1;
    else
      LOBYTE(v2) = 0;
  }
  else
  {
    LOBYTE(v2) = 0;
  }
  return v2;
}


// GetZoomOwnerDesiredFOV  (line 56, @0x00000000021f6250, libserver.so)
// calls: CanOverrideEnvZoomOwner, __dynamic_cast
// globals: `typeinfo for'CEnvZoom
float __fastcall GetZoomOwnerDesiredFOV(CBaseEntity *pZoomOwner)
{
  bool v2; // al
  float result; // xmm0_4
  int *v4; // rax

  v2 = CanOverrideEnvZoomOwner(pZoomOwner);
  result = 0.0;
  if ( v2 )
  {
    if ( pZoomOwner != 0 )
      v4 = __dynamic_cast(pZoomOwner, &`typeinfo for'CBaseEntity, &`typeinfo for'CEnvZoom, 0);
    else
      v4 = 0;
    return v4[195];
  }
  return result;
}


// CEnvZoom::InputZoom  (line 72, @0x00000000021f1c00, libserver.so)  // inlines: CEntityHandle, ClassMatches, FClassnameIs, Get, GetEntryIndex, GetFOVOwner, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: UTIL_GetLocalPlayer, CBasePlayer::SetFOV, CEntityIdentity::ClassMatches, CBasePlayer::ClearZoomOwner
// strings: "env_zoom"
void __fastcall CEnvZoom::InputZoom(CEnvZoom *const this, inputdata_t *const inputdata)
{
  CBasePlayer *LocalPlayer; // rax
  CBasePlayer *v4; // rbx
  unsigned __int16 v5; // dx
  int v6; // esi
  int v7; // edx
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rax
  CEntityInstance *m_pInstance; // rax

  LocalPlayer = UTIL_GetLocalPlayer();
  v4 = LocalPlayer;
  if ( LocalPlayer != 0 )
  {
    if ( LocalPlayer->m_hZoomOwner.m_Value.m_Index == -1 )
    {
      v5 = 0x7FFF;
      v6 = 0x7FFF;
    }
    else
    {
      v5 = LocalPlayer->m_hZoomOwner.m_Value.m_Index & 0x7FFF;
      v6 = v5;
    }
    v7 = (LocalPlayer->m_hZoomOwner.m_Value.m_Index >> 15 << 15) | v5 & 0x7FFF;
    if ( (v7 + 2) > 1 )
    {
      v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9];
      if ( v8 != 0 )
      {
        v9 = &v8[v6 & 0x1FF];
        if ( v9 != 0 && v7 == v9->m_EHandle.m_Index )
        {
          m_pInstance = v9->m_pInstance;
          if ( m_pInstance != 0 && CEntityIdentity::ClassMatches(m_pInstance->m_pEntity, "env_zoom") )
            CBasePlayer::ClearZoomOwner(v4);
        }
      }
    }
    CBasePlayer::SetFOV(v4, this, this->m_nFOV, LODWORD(this->m_flSpeed), 0);
  }
}


// CEnvZoom::InputUnZoom  (line 105, @0x00000000021ef270, libserver.so)
// calls: UTIL_GetLocalPlayer, CBasePlayer::SetFOV
void __fastcall CEnvZoom::InputUnZoom(CEnvZoom *const this, inputdata_t *const inputdata)
{
  CBasePlayer *LocalPlayer; // rax

  LocalPlayer = UTIL_GetLocalPlayer();
  if ( LocalPlayer != 0 )
    CBasePlayer::SetFOV(LocalPlayer, this, 0, 0LL, 0);
}


