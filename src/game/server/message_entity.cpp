// Reconstructed from DWARF by pahole; not original source.

// src/game/server/message_entity.cpp:27
class CMessageEntity : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;

protected:

	int m_radius;  // +0x308

	string_t m_messageText;  // +0x310
	bool m_drawText;  // +0x318
	bool m_bDeveloperOnly;  // +0x319
	bool m_bEnabled;  // +0x31a
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
	CMessageEntity(CMessageEntity &);
	CMessageEntity(CMessageEntity &);
	CMessageEntity();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual void Think();
	virtual void UpdateOnRemove();
	void DrawOverlays();
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	void InputSetMessage(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CMessageEntity();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[117] Think
	// vtable[11] UpdateOnRemove
	// vtable[34] GetDataDescMap
	// sizeof = 800
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CMessageEntity::~CMessageEntity  (line 27, @0x00000000022a9420, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CMessageEntity::~CMessageEntity(CMessageEntity *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CMessageEntity::~CMessageEntity  (line 27, @0x00000000022a9440, libserver.so)  // inlines: ~CMessageEntity, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CMessageEntity::~CMessageEntity(CMessageEntity *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CMessageEntity::GetEntityClass  (line 29, @0x00000000022a6940, libserver.so)
CEntityClass *__cdecl CMessageEntity::GetEntityClass()
{
  return g_pEntityCMessageEntityClass;
}


// CMessageEntity::Schema_DynamicBinding  (line 29, @0x00000000022a6950, libserver.so)
// globals: CMessageEntity::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CMessageEntity::Schema_DynamicBinding(const CMessageEntity *const this)
{
  return CMessageEntity::s_pSchemaBinding;
}


// CMessageEntity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x00000000022a6960, libserver.so)
// globals: CMessageEntity::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CMessageEntity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CMessageEntity::CEntityInstanceEntityClass *const this)
{
  return CMessageEntity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CMessageEntity::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x00000000022a6970, libserver.so)  // inlines: Destruct<CMessageEntity>
void __fastcall CMessageEntity::CEntityInstanceEntityClass::DestructInstance(
        CMessageEntity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CMessageEntity::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x00000000022a6990, libserver.so)
void __fastcall CMessageEntity::CEntityInstanceEntityClass::FreeInstance(
        CMessageEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CMessageEntity::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x00000000022a69b0, libserver.so)
bool __fastcall CMessageEntity::CEntityInstanceEntityClass::CanAllocate(
        const CMessageEntity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CMessageEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x00000000022a69c0, libserver.so)
// globals: CMessageEntity::s_pSchemaBinding
const ISchemaBinding *__fastcall CMessageEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CMessageEntity::CEntityInstanceEntityClass *const this)
{
  return CMessageEntity::s_pSchemaBinding;
}


// CMessageEntity::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x00000000022a8800, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CMessageEntity::CEntityInstanceEntityClass::AllocateInstance(
        CMessageEntity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 800);
  memset(v1, 0, 0x320u);
  return v1;
}


// CMessageEntity::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x00000000022a8e80, libserver.so)  // inlines: CMessageEntity, CPointEntity, CUtlSymbolLarge, Construct<CMessageEntity>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CMessageEntity::CEntityInstanceEntityClass::ConstructInstance(
        CMessageEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 98) = 0;
    *p = &off_406E6B0;
  }
  return p;
}


// CMessageEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x00000000022ab0e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CMessageEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CMessageEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CMessageEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x00000000022ab100, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CMessageEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CMessageEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CMessageEntity::GetEntityClassInternal  (line 29, @0x00000000022b47a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "point_message", "CMessageEntity"
// globals: `guard variable for'CMessageEntity::GetEntityClassInternal(void)::g_EntityCMessageEntityClass, CMessageEntity::GetEntityClassInternal(void)::g_EntityCMessageEntityClass, __dso_handle, CMessageEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CMessageEntity::GetEntityClassInfo(void)::g_EntityCMessageEntityClassInfo, CMessageEntity::GetEntityClassInfo(void)::g_EntityCMessageEntityClassInfo
CEntityClass *__cdecl CMessageEntity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CMessageEntity::GetEntityClassInternal(void)::g_EntityCMessageEntityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CMessageEntity::GetEntityClassInternal(void)::g_EntityCMessageEntityClass) != 0 )
  {
    CEntityClass::CEntityClass(&CMessageEntity::GetEntityClassInternal(void)::g_EntityCMessageEntityClass);
    CMessageEntity::GetEntityClassInternal(void)::g_EntityCMessageEntityClass._vptr_CEntityClass = off_406E630;
    __cxa_guard_release(&`guard variable for'CMessageEntity::GetEntityClassInternal(void)::g_EntityCMessageEntityClass);
    __cxa_atexit(
      CMessageEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CMessageEntity::GetEntityClassInternal(void)::g_EntityCMessageEntityClass,
      &_dso_handle);
  }
  if ( g_pEntityCMessageEntityClass != 0 )
    return &CMessageEntity::GetEntityClassInternal(void)::g_EntityCMessageEntityClass;
  if ( `guard variable for'CMessageEntity::GetEntityClassInfo(void)::g_EntityCMessageEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CMessageEntity::GetEntityClassInfo(void)::g_EntityCMessageEntityClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CMessageEntity::GetEntityClassInfo(void)::g_EntityCMessageEntityClassInfo,
      "CMessageEntity",
      "point_message",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CMessageEntity::GetEntityClassInfo(void)::g_EntityCMessageEntityClassInfo);
  }
  CMessageEntity::GetEntityClassInternal(void)::g_EntityCMessageEntityClass.m_pClassInfo = &CMessageEntity::GetEntityClassInfo(void)::g_EntityCMessageEntityClassInfo;
  CMessageEntity::GetEntityClassInternal(void)::g_EntityCMessageEntityClass.m_pBaseClassInfo = CMessageEntity::GetEntityClassInfo(void)::g_EntityCMessageEntityClassInfo.m_pBaseClassInfo;
  g_pEntityCMessageEntityClass = &CMessageEntity::GetEntityClassInternal(void)::g_EntityCMessageEntityClass;
  CMessageEntity::GetEntityClassInfo(void)::g_EntityCMessageEntityClassInfo.m_pClass = &CMessageEntity::GetEntityClassInternal(void)::g_EntityCMessageEntityClass;
  CMessageEntity::GetEntityClassInternal(void)::g_EntityCMessageEntityClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCMessageEntityClass->m_pComponentOverrides = 0;
  return &CMessageEntity::GetEntityClassInternal(void)::g_EntityCMessageEntityClass;
}


// CMessageEntity::GetDataDescMap  (line 53, @0x0000000002283e40, libserver.so)
// globals: CMessageEntity::m_DataMap
datamap_t *__fastcall CMessageEntity::GetDataDescMap(CMessageEntity *const this)
{
  return &CMessageEntity::m_DataMap;
}


// CMessageEntity::AddDatadescMetadataKeys  (line 53, @0x0000000002299370, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CMessageEntity::GetEntityClass(void)
void __fastcall CMessageEntity::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CMessageEntity::GetEntityClass);
}


// CMessageEntity::GetBaseMap  (line 53, @0x0000000002299390, libserver.so)
datamap_t *__cdecl CMessageEntity::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CMessageEntity>  (line 53, @0x00000000022993a0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CMessageEntity"
// globals: `guard variable for'DataMapInit<CMessageEntity>(CMessageEntity *)::nameHolder, CMessageEntity::GetEntityClass(void), CMessageEntity::m_DataMap, DataMapInit<CMessageEntity>(CMessageEntity *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CMessageEntity>(CMessageEntity *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CMessageEntity>(CMessageEntity *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CMessageEntity>(CMessageEntity *)::nameHolder) != 0 )
  {
    DataMapInit<CMessageEntity>(CMessageEntity *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CMessageEntity>(CMessageEntity *)::nameHolder.m_pszBase = "CMessageEntity";
    DataMapInit<CMessageEntity>(CMessageEntity *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CMessageEntity>(CMessageEntity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CMessageEntity>(CMessageEntity *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CMessageEntity>(CMessageEntity *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CMessageEntity>(CMessageEntity *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CMessageEntity>(CMessageEntity *)::nameHolder,
      &_dso_handle);
  }
  CMessageEntity::m_DataMap.dataNumFields = 8;
  CMessageEntity::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  CMessageEntity::m_DataMap.dataDesc = &DataMapInit<CMessageEntity>(CMessageEntity *)::dataDesc[1];
  AddDatadescMetadataKeys(&CMessageEntity::m_DataMap, CMessageEntity::GetEntityClass);
  return &CMessageEntity::m_DataMap;
}


// CMessageEntity::Spawn  (line 73, @0x0000000002289500, libserver.so)  // inlines: HasSpawnFlags, curtime
// calls: CPointEntity::Spawn, CBaseEntity::SetNextThink
void __fastcall CMessageEntity::Spawn(CMessageEntity *const this, const CEntityKeyValues *pKeyValues)
{
  double v3; // xmm1_8
  CGlobalVars *v4; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v6; // xmm0_8
  unsigned int m_Value; // eax

  CPointEntity::Spawn(this, pKeyValues);
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v6) = 0;
    *&v6 = v4->m_flCurrentTime + 0.1;
  }
  else
  {
    *&v6 = 1036831949;
  }
  CBaseEntity::SetNextThink(this, v6, v3, 0);
  m_Value = this->m_spawnflags.m_Value;
  this->m_drawText = 0;
  this->m_bDeveloperOnly = 0;
  this->m_bEnabled = !(m_Value & 1);
  this->m_bEnabled &= 1u;
}


// CMessageEntity::Activate  (line 86, @0x00000000022a1230, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CMessageEntity> >, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Set, operator=, operator[]
// calls: CBaseEntity::Activate, CUtlMemory<CHandle<CMessageEntity>, int>::Grow
// globals: g_MessageEntities
void __fastcall CMessageEntity::Activate(CMessageEntity *const this, ActivateType_t activateType)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v4; // cx
  __int64 m_Size; // rbx
  int v6; // eax
  CHandle<CMessageEntity> *v7; // rax
  int h; // [rsp+0h] [rbp-20h]

  CBaseEntity::Activate(this, activateType);
  h = -1;
  if ( this != 0 )
  {
    m_pEntity = this->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      h = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF;
    }
  }
  m_Size = g_MessageEntities.m_Size;
  v6 = g_MessageEntities.m_Size;
  if ( g_MessageEntities.m_Size == g_MessageEntities.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CHandle<CMessageEntity>,int>::Grow(&g_MessageEntities.m_Memory, 1);
    v6 = g_MessageEntities.m_Size;
  }
  g_MessageEntities.m_Size = v6 + 1;
  v7 = &g_MessageEntities.m_Memory.m_pMemory[m_Size];
  if ( v7 != 0 )
    v7->m_Index = h;
}


// CMessageEntity::UpdateOnRemove  (line 98, @0x000000000229d430, libserver.so)  // inlines: CEntityHandle, CHandle, Find, FindAndRemove, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, operator CEntityInstance*, operator=, operator==<CMessageEntity>
// calls: CUtlVectorBase<CHandle<CMessageEntity>, CUtlMemory<CHandle<CMessageEntity>, int> >::Remove, CBaseEntity::UpdateOnRemove
// globals: g_MessageEntities, CEntityHandle::gm_pEntityList
void __fastcall CMessageEntity::UpdateOnRemove(CMessageEntity *const this)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v3; // cx
  int v4; // esi
  CHandle<CMessageEntity> *m_pMemory; // rax
  CEntityInstance *v6; // rcx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityInstance *m_pInstance; // r8
  CEntityIdentity *v10; // rcx
  CEntityIdentity *v11; // rcx
  int h; // [rsp+0h] [rbp-40h]

  h = -1;
  if ( this != 0 )
  {
    m_pEntity = this->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v3 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v3 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      h = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v3 & 0x7FFF;
    }
  }
  if ( g_MessageEntities.m_Size > 0 )
  {
    v4 = 0;
    m_pMemory = g_MessageEntities.m_Memory.m_pMemory;
    while ( 1 )
    {
      m_pInstance = 0;
      if ( m_pMemory->m_Index + 2 > 1 )
      {
        v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
        if ( v10 != 0 )
        {
          v11 = &v10[m_pMemory->m_Index & 0x1FF];
          if ( v11 != 0 && m_pMemory->m_Index == v11->m_EHandle.m_Index )
            m_pInstance = v11->m_pInstance;
        }
      }
      v6 = 0;
      if ( (h + 2) > 1 )
      {
        v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(h & 0x7FFF) >> 9];
        if ( v7 != 0 )
        {
          v8 = &v7[h & 0x1FF];
          if ( v8 != 0 && v8->m_EHandle.m_Index == h )
            v6 = v8->m_pInstance;
        }
      }
      if ( m_pInstance == v6 )
        break;
      ++v4;
      ++m_pMemory;
      if ( v4 == g_MessageEntities.m_Size )
        goto LABEL_21;
    }
    CUtlVectorBase<CHandle<CMessageEntity>,CUtlMemory<CHandle<CMessageEntity>,int>>::Remove(&g_MessageEntities, v4);
  }
LABEL_21:
  CBaseEntity::UpdateOnRemove(this);
}


// CMessageEntity::Think  (line 110, @0x00000000022897b0, libserver.so)  // inlines: FastSqrt, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, curtime, operator-
// calls: CBaseEntity::SetNextThink, UTIL_PlayerByIndex, CBaseEntity::GetAbsOrigin
void __fastcall CMessageEntity::Think(CMessageEntity *const this)
{
  double v1; // xmm1_8
  CGlobalVars *v3; // rbx
  double v4; // xmm0_8
  char *v5; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v7; // xmm1_4
  const Vector *AbsOrigin; // rax
  double worldTargetPosition; // [rsp+10h] [rbp-20h]
  float worldTargetPosition_8; // [rsp+18h] [rbp-18h]

  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v4) = 0;
    *&v4 = v3->m_flCurrentTime + 0.1;
  }
  else
  {
    *&v4 = 1036831949;
  }
  CBaseEntity::SetNextThink(this, v4, v1, 0);
  v5 = UTIL_PlayerByIndex(1);
  if ( v5 != 0 && v5[441] >= 0 )
  {
    worldTargetPosition = (*(*v5 + 1312LL))(v5);
    worldTargetPosition_8 = v7;
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    this->m_drawText = fsqrt(
                         (((*&worldTargetPosition - AbsOrigin->x) * (*&worldTargetPosition - AbsOrigin->x))
                        + ((*(&worldTargetPosition + 1) - AbsOrigin->y) * (*(&worldTargetPosition + 1) - AbsOrigin->y)))
                       + ((worldTargetPosition_8 - AbsOrigin->z) * (worldTargetPosition_8 - AbsOrigin->z))) <= this->m_radius;
  }
}


// CMessageEntity::DrawOverlays  (line 135, @0x0000000002299470, libserver.so)  // inlines: GetInt, String, ToCStr
// calls: V_snprintf, CBaseEntity::EntityText, __stack_chk_fail
// callers: DrawMessageEntities
void __fastcall CMessageEntity::DrawOverlays(CMessageEntity *const this)
{
  const char *m_pAsString; // rcx
  char tempstr[520]; // [rsp+10h] [rbp-220h] BYREF
  unsigned __int64 v4; // [rsp+218h] [rbp-18h]

  v4 = __readfsqword(0x28u);
  if ( this->m_drawText
    && (!this->m_bDeveloperOnly || g_pDeveloper->m_pParent->m_Value.m_nValue != 0)
    && this->m_bEnabled )
  {
    m_pAsString = "";
    if ( this->m_messageText.u.m_Id != 0 )
      m_pAsString = this->m_messageText.u.m_pAsString;
    V_snprintf(tempstr, 512, "%s", m_pAsString);
    CBaseEntity::EntityText(this, 0, tempstr, 0.0, 255, 255, 255, 255);
  }
}


// CMessageEntity::InputEnable  (line 155, @0x0000000002283e50, libserver.so)
void __fastcall CMessageEntity::InputEnable(CMessageEntity *const this, inputdata_t *const inputdata)
{
  this->m_bEnabled = 1;
}


// CMessageEntity::InputDisable  (line 163, @0x0000000002283e60, libserver.so)
void __fastcall CMessageEntity::InputDisable(CMessageEntity *const this, inputdata_t *const inputdata)
{
  this->m_bEnabled = 0;
}


// CMessageEntity::InputSetMessage  (line 170, @0x000000000228b6f0, libserver.so)  // inlines: AssignTo, TempString, ToString, operator=
// calls: AllocPooledString, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_228B721, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CMessageEntity::InputSetMessage(CMessageEntity *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  char *m_pszString; // rsi
  const char *v5; // rax
  const char *v6; // rcx
  double m_float; // xmm0_8
  UtlSymLargeId_t v8[4]; // [rsp+10h] [rbp-20h] BYREF

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
        goto LABEL_8;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_19;
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
        goto LABEL_11;
      case 6:
        v6 = "true";
        if ( inputdata->value.m_char == 0 )
          v6 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v6);
        goto LABEL_15;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_11;
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
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_15;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_15:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_19:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_11:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v5 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v5);
LABEL_8:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  AllocPooledString(v8, m_pszString);
  this->m_messageText.u.m_Id = v8[0];
}


// DrawMessageEntities  (line 177, @0x000000000229d380, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator CMessageEntity*, operator[]
// calls: CUtlVectorBase<CHandle<CMessageEntity>, CUtlMemory<CHandle<CMessageEntity>, int> >::Remove, CMessageEntity::DrawOverlays
// callers: CEntityDebugGameSystem::OnPostSimulate
// globals: g_MessageEntities, CEntityHandle::gm_pEntityList
void __cdecl DrawMessageEntities()
{
  int v0; // ebx
  __int64 v1; // r12
  int v2; // esi
  CHandle<CMessageEntity> *v3; // rdx
  uint32 m_Index; // eax
  __int16 v5; // cx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx

  v0 = g_MessageEntities.m_Size - 1;
  v1 = g_MessageEntities.m_Size - 1;
  if ( g_MessageEntities.m_Size - 1 >= 0 )
  {
    do
    {
      while ( 1 )
      {
        v3 = &g_MessageEntities.m_Memory.m_pMemory[v1];
        m_Index = g_MessageEntities.m_Memory.m_pMemory[v1].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v5 = v3->m_Index;
          v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v3->m_Index) >> 9) & 0x3F];
          if ( v6 != 0 )
          {
            v7 = &v6[v5 & 0x1FF];
            if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index && v7->m_pInstance != 0 )
              break;
          }
        }
        v2 = v0--;
        CUtlVectorBase<CHandle<CMessageEntity>,CUtlMemory<CHandle<CMessageEntity>,int>>::Remove(&g_MessageEntities, v2);
        --v1;
        if ( v0 == -1 )
          return;
      }
      CMessageEntity::DrawOverlays(v7->m_pInstance);
      --v0;
      --v1;
    }
    while ( v0 != -1 );
  }
}


