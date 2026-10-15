// Reconstructed from DWARF by pahole; not original source.

// src/game/server/env_debughistory.cpp:22
class CDebugHistory : public CBaseEntity {
public:

private:

	static datamap_t m_DataMap;

	char m_DebugLines[5][256000];  // +0x308
	char * m_DebugLineEnd[5];  // +0x138b08
	typedef CBaseEntity BaseClass;

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
	CDebugHistory(CDebugHistory &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CDebugHistory();
	virtual ~CDebugHistory();

protected:

	virtual void Spawn(const CEntityKeyValues *);
	void AddDebugHistoryLine(int, const char *);
	void ClearHistories();
	void DumpDebugHistory(int);
	virtual int Save(ISave &);
	virtual int Restore(IRestore &);
	virtual int ObjectCaps();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[15] Save
	// vtable[16] Restore
	// vtable[19] ObjectCaps
	// sizeof = 1280816
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDebugHistory::GetEntityClass  (line 24, @0x00000000021df160, libserver.so)
CEntityClass *__cdecl CDebugHistory::GetEntityClass()
{
  return g_pEntityCDebugHistoryClass;
}


// CDebugHistory::Schema_DynamicBinding  (line 24, @0x00000000021df170, libserver.so)
// globals: CDebugHistory::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDebugHistory::Schema_DynamicBinding(const CDebugHistory *const this)
{
  return CDebugHistory::s_pSchemaBinding;
}


// CDebugHistory::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 24, @0x00000000021df180, libserver.so)
// globals: CDebugHistory::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDebugHistory::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDebugHistory::CEntityInstanceEntityClass *const this)
{
  return CDebugHistory::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDebugHistory::CEntityInstanceEntityClass::DestructInstance  (line 24, @0x00000000021df190, libserver.so)  // inlines: Destruct<CDebugHistory>
void __fastcall CDebugHistory::CEntityInstanceEntityClass::DestructInstance(
        CDebugHistory::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDebugHistory::CEntityInstanceEntityClass::FreeInstance  (line 24, @0x00000000021df1b0, libserver.so)
void __fastcall CDebugHistory::CEntityInstanceEntityClass::FreeInstance(
        CDebugHistory::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDebugHistory::CEntityInstanceEntityClass::CanAllocate  (line 24, @0x00000000021df1d0, libserver.so)
bool __fastcall CDebugHistory::CEntityInstanceEntityClass::CanAllocate(
        const CDebugHistory::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDebugHistory::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 24, @0x00000000021df1e0, libserver.so)
// globals: CDebugHistory::s_pSchemaBinding
const ISchemaBinding *__fastcall CDebugHistory::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDebugHistory::CEntityInstanceEntityClass *const this)
{
  return CDebugHistory::s_pSchemaBinding;
}


// CDebugHistory::CEntityInstanceEntityClass::AllocateInstance  (line 24, @0x00000000021e09c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDebugHistory::CEntityInstanceEntityClass::AllocateInstance(
        CDebugHistory::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1280816);
  memset(v1, 0, 0x138B30u);
  return v1;
}


// CDebugHistory::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 24, @0x00000000021e3010, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDebugHistory::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDebugHistory::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDebugHistory::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 24, @0x00000000021e3030, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDebugHistory::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDebugHistory::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDebugHistory::GetEntityClassInternal  (line 24, @0x00000000021ea410, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "env_debughistory", "CDebugHistory"
// globals: `guard variable for'CDebugHistory::GetEntityClassInternal(void)::g_EntityCDebugHistoryClass, CDebugHistory::GetEntityClassInternal(void)::g_EntityCDebugHistoryClass, __dso_handle, CDebugHistory::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDebugHistory::GetEntityClassInfo(void)::g_EntityCDebugHistoryClassInfo, CDebugHistory::GetEntityClassInfo(void)::g_EntityCDebugHistoryClassInfo
CEntityClass *__cdecl CDebugHistory::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDebugHistory::GetEntityClassInternal(void)::g_EntityCDebugHistoryClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDebugHistory::GetEntityClassInternal(void)::g_EntityCDebugHistoryClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDebugHistory::GetEntityClassInternal(void)::g_EntityCDebugHistoryClass);
    CDebugHistory::GetEntityClassInternal(void)::g_EntityCDebugHistoryClass._vptr_CEntityClass = off_4024990;
    __cxa_guard_release(&`guard variable for'CDebugHistory::GetEntityClassInternal(void)::g_EntityCDebugHistoryClass);
    __cxa_atexit(
      CDebugHistory::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDebugHistory::GetEntityClassInternal(void)::g_EntityCDebugHistoryClass,
      &_dso_handle);
  }
  if ( g_pEntityCDebugHistoryClass != 0 )
    return &CDebugHistory::GetEntityClassInternal(void)::g_EntityCDebugHistoryClass;
  if ( `guard variable for'CDebugHistory::GetEntityClassInfo(void)::g_EntityCDebugHistoryClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDebugHistory::GetEntityClassInfo(void)::g_EntityCDebugHistoryClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDebugHistory::GetEntityClassInfo(void)::g_EntityCDebugHistoryClassInfo,
      "CDebugHistory",
      "env_debughistory",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDebugHistory::GetEntityClassInfo(void)::g_EntityCDebugHistoryClassInfo);
  }
  CDebugHistory::GetEntityClassInternal(void)::g_EntityCDebugHistoryClass.m_pClassInfo = &CDebugHistory::GetEntityClassInfo(void)::g_EntityCDebugHistoryClassInfo;
  CDebugHistory::GetEntityClassInternal(void)::g_EntityCDebugHistoryClass.m_pBaseClassInfo = CDebugHistory::GetEntityClassInfo(void)::g_EntityCDebugHistoryClassInfo.m_pBaseClassInfo;
  g_pEntityCDebugHistoryClass = &CDebugHistory::GetEntityClassInternal(void)::g_EntityCDebugHistoryClass;
  CDebugHistory::GetEntityClassInfo(void)::g_EntityCDebugHistoryClassInfo.m_pClass = &CDebugHistory::GetEntityClassInternal(void)::g_EntityCDebugHistoryClass;
  CDebugHistory::GetEntityClassInternal(void)::g_EntityCDebugHistoryClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCDebugHistoryClass->m_pComponentOverrides = 0;
  return &CDebugHistory::GetEntityClassInternal(void)::g_EntityCDebugHistoryClass;
}


// CDebugHistory::CEntityInstanceEntityClass::ConstructInstance  (line 24, @0x00000000021ea560, libserver.so)  // inlines: Construct<CDebugHistory>
// calls: CDebugHistory::CDebugHistory
CEntityInstance *__fastcall CDebugHistory::CEntityInstanceEntityClass::ConstructInstance(
        CDebugHistory::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CDebugHistory::CDebugHistory(p);
  return p;
}


// CDebugHistory::ObjectCaps  (line 40, @0x00000000021e0df0, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CDebugHistory::ObjectCaps(CDebugHistory *const this)
{
  int result; // eax

  result = CBaseEntity::ObjectCaps(this);
  LOBYTE(result) = result & 0x7F;
  return result;
}


// CDebugHistory::GetDataDescMap  (line 50, @0x00000000021baf50, libserver.so)
// globals: CDebugHistory::m_DataMap
datamap_t *__fastcall CDebugHistory::GetDataDescMap(CDebugHistory *const this)
{
  return &CDebugHistory::m_DataMap;
}


// CDebugHistory::AddDatadescMetadataKeys  (line 50, @0x00000000021ceeb0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CDebugHistory::GetEntityClass(void)
void __fastcall CDebugHistory::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CDebugHistory::GetEntityClass);
}


// CDebugHistory::GetBaseMap  (line 50, @0x00000000021ceed0, libserver.so)
datamap_t *__cdecl CDebugHistory::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CDebugHistory>  (line 50, @0x00000000021ceee0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CDebugHistory"
// globals: `guard variable for'DataMapInit<CDebugHistory>(CDebugHistory *)::nameHolder, CDebugHistory::GetEntityClass(void), CDebugHistory::m_DataMap, DataMapInit<CDebugHistory>(CDebugHistory *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CDebugHistory>(CDebugHistory *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CDebugHistory>(CDebugHistory *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CDebugHistory>(CDebugHistory *)::nameHolder) != 0 )
  {
    DataMapInit<CDebugHistory>(CDebugHistory *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CDebugHistory>(CDebugHistory *)::nameHolder.m_pszBase = "CDebugHistory";
    DataMapInit<CDebugHistory>(CDebugHistory *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CDebugHistory>(CDebugHistory *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CDebugHistory>(CDebugHistory *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CDebugHistory>(CDebugHistory *)::nameHolder.m_nLenBase = 13;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CDebugHistory>(CDebugHistory *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CDebugHistory>(CDebugHistory *)::nameHolder,
      &_dso_handle);
  }
  CDebugHistory::m_DataMap.dataNumFields = 2;
  CDebugHistory::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  CDebugHistory::m_DataMap.dataDesc = &DataMapInit<CDebugHistory>(CDebugHistory *)::dataDesc[1];
  AddDatadescMetadataKeys(&CDebugHistory::m_DataMap, CDebugHistory::GetEntityClass);
  return &CDebugHistory::m_DataMap;
}


// CDebugHistory::CDebugHistory  (line 58, @0x00000000021cefb0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// calls: CBaseEntity::CBaseEntity, CBaseEntity::IsDatadescValidating, CBaseEntity::~CBaseEntity, _Unwind_Resume
// callers: CDebugHistory::CEntityInstanceEntityClass::ConstructInstance
// globals: s_DebugHistory
void __fastcall CDebugHistory::CDebugHistory(CDebugHistory *const this)
{
  CEntityIdentity *m_pEntity; // rdx
  int v3; // eax
  __int16 v4; // cx

  CBaseEntity::CBaseEntity(this);
  this->_vptr_IHandleEntity = &off_4024A10;
  if ( !CBaseEntity::IsDatadescValidating() )
  {
    m_pEntity = this->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v3 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v4 = 0x7FFF;
      else
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(s_DebugHistory.m_Index) = v4 | s_DebugHistory.m_Index & 0x8000;
      s_DebugHistory.m_Index = (v3 << 15) | s_DebugHistory.m_Index & 0x7FFF;
    }
    else
    {
      s_DebugHistory.m_Index = -1;
    }
  }
}


// CDebugHistory::~CDebugHistory  (line 70, @0x00000000021bbb80, libserver.so)  // inlines: Set, operator=
// calls: CBaseEntity::IsDatadescValidating, CBaseEntity::~CBaseEntity
// callers: CDebugHistory::~CDebugHistory
// globals: s_DebugHistory
void __fastcall CDebugHistory::~CDebugHistory(CDebugHistory *const this)
{
  this->_vptr_IHandleEntity = &off_4024A10;
  if ( !CBaseEntity::IsDatadescValidating() )
    s_DebugHistory.m_Index = -1;
  CBaseEntity::~CBaseEntity(this);
}


// CDebugHistory::~CDebugHistory  (line 70, @0x00000000021bbbc0, libserver.so)
// calls: CDebugHistory::~CDebugHistory, CBaseEntity::operator delete
void __fastcall CDebugHistory::~CDebugHistory(CDebugHistory *const this)
{
  CDebugHistory::~CDebugHistory(this);
  CBaseEntity::operator delete(this);
}


// CDebugHistory::Spawn  (line 85, @0x00000000021cf3f0, libserver.so)
// calls: CBaseEntity::Spawn, Warning, CDebugHistory::ClearHistories, UTIL_Remove
// strings: "DEBUG HISTORY IS ENABLED. Disable before release (in env_debughistory.h).\n"
void __fastcall CDebugHistory::Spawn(CDebugHistory *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseEntity::Spawn(this, pKeyValues);
  if ( g_pGameRules != 0 && (*(g_pGameRules->_vptr_CGameRules + 39))(g_pGameRules) != 0 )
  {
    UTIL_Remove(this);
    CDebugHistory::ClearHistories(this);
  }
  else
  {
    Warning("DEBUG HISTORY IS ENABLED. Disable before release (in env_debughistory.h).\n");
    CDebugHistory::ClearHistories(this);
  }
}


// CDebugHistory::AddDebugHistoryLine  (line 108, @0x00000000021cf060, libserver.so)  // inlines: V_strlen, memcpy
// calls: strlen, memcpy, Warning, __stack_chk_fail
// callers: AddDebugHistoryLine
// strings: "Attempted to add a debughistory line to category %d. Valid categories are %d to %d.\n"
void __fastcall CDebugHistory::AddDebugHistoryLine(CDebugHistory *const this, int iCategory, const char *szLine)
{
  __int64 v3; // r14
  int (***v5)(...); // r15
  char *v6; // r13
  const char *v7; // rcx
  int v8; // eax
  int v9; // r12d
  const char *v10; // rax
  char *i; // r14
  int v12; // ebx
  const char *pszRemaininga; // [rsp+8h] [rbp-148h]
  char szTmpBuffer[264]; // [rsp+10h] [rbp-140h] BYREF
  unsigned __int64 v16; // [rsp+118h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  if ( iCategory > 4 )
  {
    Warning("Attempted to add a debughistory line to category %d. Valid categories are %d to %d.\n", iCategory, 0, 4);
    return;
  }
  v3 = iCategory;
  v5 = &this->_vptr_IHandleEntity + iCategory;
  v6 = v5[160097];
  if ( v6 != 0 )
  {
    v7 = szLine;
    if ( szLine != 0 )
    {
      v8 = strlen(szLine);
      v7 = szLine;
      v9 = v8 + 1;
      if ( v8 + 1 <= 256 )
      {
        if ( v8 == -1 )
          return;
      }
      else
      {
        v9 = 256;
        v10 = memcpy(szTmpBuffer, szLine, 0x100u);
        szTmpBuffer[255] = 0;
        v7 = v10;
      }
    }
    else
    {
      v9 = 1;
    }
    for ( i = this->m_DebugLines[v3]; ; v6 = i )
    {
      v12 = i - v6 + 256000;
      if ( v12 > v9 )
        break;
      pszRemaininga = v7;
      memcpy(v6, v7, v12);
      v5[160097] = i;
      v7 = &pszRemaininga[v12];
      v9 -= v12;
      if ( v9 == 0 )
        return;
    }
    memcpy(v6, v7, v9);
    v5[160097] = (v5[160097] + v9);
  }
}


// CDebugHistory::DumpDebugHistory  (line 156, @0x00000000021cf200, libserver.so)
// calls: Msg, Warning, __stack_chk_fail
// callers: CC_DebugHistory_Dump
// strings: "Debug History of Category %d is EMPTY\n", "Attempted to dump a history for category %d. Valid categories are %d to %d.\n", "Starting Debug History Dump of Category %d\n", "Ended Debug History Dump of Category %d\n"
void __fastcall CDebugHistory::DumpDebugHistory(CDebugHistory *const this, int iCategory)
{
  int (***v3)(...); // r14
  char *v4; // rdx
  char *v5; // rbx
  char *v6; // r12
  char *v7; // rcx
  char *v8; // rax
  char szMsgBuffer[264]; // [rsp+0h] [rbp-140h] BYREF
  unsigned __int64 v10; // [rsp+108h] [rbp-38h]

  v10 = __readfsqword(0x28u);
  if ( iCategory > 4 )
  {
    Warning("Attempted to dump a history for category %d. Valid categories are %d to %d.\n", iCategory, 0, 4);
    return;
  }
  v3 = &this->_vptr_IHandleEntity + iCategory;
  v4 = v3[160097];
  v5 = v4 + 1;
  v6 = this->m_DebugLines[iCategory];
  if ( (v4 + 1 - v6) >= 0x3E800 )
    v5 = this->m_DebugLines[iCategory];
  while ( v5 != v6 )
  {
    if ( *(v5 - 1) == 0 )
      goto LABEL_6;
LABEL_7:
    if ( (++v5 - v6) >= 0x3E800 )
      v5 = this->m_DebugLines[iCategory];
    if ( v5 == v4 )
    {
      Msg("Debug History of Category %d is EMPTY\n", iCategory);
      return;
    }
  }
  if ( v5[255999] != 0 )
    goto LABEL_7;
LABEL_6:
  if ( *v5 == 0 )
    goto LABEL_7;
  Msg("Starting Debug History Dump of Category %d\n", iCategory);
  v7 = v3[160097];
  v8 = szMsgBuffer;
  while ( v5 != v7 )
  {
    *v8++ = *v5;
    if ( *v5 == 0 )
    {
      if ( szMsgBuffer[0] != 0 )
      {
        Msg("%s", szMsgBuffer);
        v7 = v3[160097];
      }
      szMsgBuffer[0] = 0;
      v8 = szMsgBuffer;
    }
    if ( (++v5 - v6) >= 0x3E800 )
      v5 = v6;
  }
  Msg("Ended Debug History Dump of Category %d\n", iCategory);
}


// CDebugHistory::ClearHistories  (line 230, @0x00000000021cf3a0, libserver.so)  // inlines: memset
// calls: memset
// callers: CDebugHistory::Spawn, CDebugHistory::Restore
void __fastcall CDebugHistory::ClearHistories(CDebugHistory *const this)
{
  char *v2; // r12
  __int64 i; // rbx

  v2 = this->m_DebugLines[0];
  for ( i = 0; i != 5; ++i )
  {
    memset(v2, 0, 0x3E800u);
    this->m_DebugLineEnd[i] = v2;
    v2 += 256000;
  }
}


// CDebugHistory::Save  (line 242, @0x00000000021bb220, libserver.so)
// calls: CBaseEntity::Save
int __fastcall CDebugHistory::Save(CDebugHistory *const this, ISave *const save)
{
  __int64 v3; // r13
  char *v4; // r12
  int (**vptr_ISave)(...); // rax
  char *v7; // rax
  char *v8; // rsi
  int iVersion; // [rsp+4h] [rbp-3Ch] BYREF
  int iMaxCategorys; // [rsp+8h] [rbp-38h] BYREF
  int iEnd[13]; // [rsp+Ch] [rbp-34h] BYREF

  v3 = 0;
  v4 = this->m_DebugLines[0];
  iVersion = 6;
  (*(save->_vptr_ISave + 11))(save, &iVersion, 1);
  vptr_ISave = save->_vptr_ISave;
  iMaxCategorys = 5;
  vptr_ISave[11](save, &iMaxCategorys, 1);
  do
  {
    v7 = this->m_DebugLineEnd[v3++];
    iEnd[0] = v7 - v4;
    (*(save->_vptr_ISave + 11))(save, iEnd, 1);
    v8 = v4;
    v4 += 256000;
    (*(save->_vptr_ISave + 18))(save, v8, iEnd[0]);
  }
  while ( v3 != 5 );
  return CBaseEntity::Save(this, save);
}


// CDebugHistory::Restore  (line 261, @0x00000000021cf460, libserver.so)
// calls: CDebugHistory::ClearHistories, CBaseEntity::Restore
// strings: "debugline"
int __fastcall CDebugHistory::Restore(CDebugHistory *const this, IRestore *const restore)
{
  int v5; // eax
  int v6; // edx
  char *v7; // r12
  CDebugHistory *v8; // r13
  char *v9; // r15
  unsigned int v10; // eax
  char *v11; // rdx

  CDebugHistory::ClearHistories(this);
  if ( (*(restore->_vptr_IRestore + 13))(restore) != 6 )
    return 0;
  v5 = (*(restore->_vptr_IRestore + 13))(restore);
  v6 = 5;
  if ( v5 <= 5 )
    v6 = v5;
  if ( v6 > 0 )
  {
    v7 = this->m_DebugLines[0];
    v8 = this;
    v9 = &stru_3EB08 + this + 256000 * (v6 - 1);
    do
    {
      v8 = (v8 + 8);
      v10 = (*(restore->_vptr_IRestore + 13))(restore);
      *&v8->m_DebugLines[4][255992] = &v7[v10];
      v11 = v7;
      v7 += 256000;
      (*(restore->_vptr_IRestore + 31))(restore, "debugline", v11, v10, 0);
    }
    while ( v7 != v9 );
  }
  return CBaseEntity::Restore(this, restore);
}


// GetDebugHistory  (line 286, @0x00000000021dd090, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddKeyValue<QAngle>, AddKeyValue<Vector>, AddToTail, Allocate<Vector>, Base, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CUtlString, CopyData<Vector>, CreateAndSpawnEntity<CDebugHistory>, Element, Free, Get, GetEntityClass, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, Init, IsValid, LookupEntity, OverrideAllocator, SetValue<CEntityHandle>, SetValue<QAngle>, SetValue<Vector>, SetValues, SetWorldTransform, Spawn, operator CDebugHistory*, operator CEntityInstance*, operator=, operator==<CDebugHistory>, operator[], ~CEntitySpawner
// calls: CGameEntitySystem::FindEntityByClassname, CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::SetValue<CEntityHandle>, CEntitySpawner<CDebugHistory>::Spawn, CEntitySpawnerBase<CDebugHistory>::~CEntitySpawnerBase, CEntityKeyValues::FindKeyHash, Warning, CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int>::AddToTailGetPtr, CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, CEntityVariantAllocator::Allocate (14 total)
// callers: InitDebugHistory, AddDebugHistoryLine, CC_DebugHistory_Dump
// strings: "env_debughistory", "Attempted to set attribute %s as if it was a non-attribute key!\n"
// globals: s_DebugHistory, CEntityHandle::gm_pEntityList, CEntityKeyValuesModifyScope::sm_pAllocatorOverride
CDebugHistory *__cdecl GetDebugHistory()
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntitySystem *v6; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v8; // rdx
  char v9; // al
  CEntityKeyValues *m_pEntityKeyValues; // rbx
  int KeyHash; // eax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v12; // rbx
  __int64 v13; // rax
  int16 m_nQueuedForSpawnCount; // ax
  int v15; // eax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v16; // rdx
  __int64 v17; // rax
  __int16 v18; // r14
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v21; // r13
  __int64 v22; // r14
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v23; // r13
  uint16 m_flags; // ax
  Vector *v25; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v26; // rax
  __int16 v27; // r13
  unsigned __int64 v28; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v29; // rax
  bool v30; // dl
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v31; // rax
  __int64 v32; // r13
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v33; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v34; // rbx
  uint16 v35; // ax
  Vector *v36; // rax
  int v37[4]; // [rsp+0h] [rbp-E0h] BYREF
  CEntityHandle value; // [rsp+10h] [rbp-D0h] BYREF
  CEntitySpawner<CDebugHistory> v39; // [rsp+20h] [rbp-C0h] BYREF

  if ( g_pGameRules != 0 && (*(g_pGameRules->_vptr_CGameRules + 39))(g_pGameRules) != 0 )
    return 0;
  m_Index = s_DebugHistory.m_Index;
  if ( s_DebugHistory.m_Index + 2 > 1 )
  {
    v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(s_DebugHistory.m_Index) >> 9) & 0x3F];
    if ( v2 != 0 )
    {
      v3 = &v2[s_DebugHistory.m_Index & 0x1FF];
      if ( v3 != 0 && s_DebugHistory.m_Index == v3->m_EHandle.m_Index && v3->m_pInstance != 0 )
      {
        v5 = &v2[s_DebugHistory.m_Index & 0x1FF];
        goto LABEL_12;
      }
    }
  }
  if ( CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, 0, "env_debughistory") == 0 )
  {
    v39.m_modifyScope.m_pKeyValues = 0;
    v39.m_modifyScope.m_pPrevAllocator = 0;
    CEntityKeyValuesModifyScope::BeginModify(&v39.m_modifyScope, 0);
    v39._vptr_CEntitySpawnerBase = off_4029070;
    v39.m_scriptClassName.m_pString = 0;
    v39.m_pContext = 0;
    v6 = g_pEntitySystem;
    v39.m_pSpawnBatch = 0;
    v39.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
    ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v6->m_entitySpawnerData;
    v39.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v6);
    SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
    *&v39.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
    v8 = *&SpawnOriginOffset->m_flMatVal[0][2];
    v39.m_pEntityKeyValues = 0;
    *&v39.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v8;
    *&v39.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
    *&v39.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
    v39.m_pEntityClass = g_pEntityCDebugHistoryClass;
    if ( g_pApplication != 0 )
      v9 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
    else
      v9 = 0;
    v39.m_bValidateKeys = v9;
    v39.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
    (*v39._vptr_CEntitySpawnerBase)(&v39);
    m_pEntityKeyValues = v39.m_pEntityKeyValues;
    if ( v39.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
      goto LABEL_17;
    KeyHash = CEntityKeyValues::FindKeyHash(v39.m_pEntityKeyValues, -467664362);
    if ( KeyHash < 0 )
    {
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyHashes);
      v18 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
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
      m_pElements[v18] = -467664362;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v21 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v21 = 0;
      v22 = v18;
      v23 = &v21[v22];
      m_flags = v23->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v23->m_value.m_flags = m_flags & 0xFFFE;
      v23->m_value.m_uint64 = 0;
      v23->m_value.m_type = 3;
      v25 = CEntityVariantAllocator::Allocate(0xCu);
      v23->m_value.m_uint64 = v25;
      *v25 = vec3_origin;
      v23->m_value.m_flags |= 1u;
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v26 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v26 = 0;
      v26[v22].m_pAttributeName = 0;
      m_pEntityKeyValues = v39.m_pEntityKeyValues;
      m_nQueuedForSpawnCount = v39.m_pEntityKeyValues->m_nQueuedForSpawnCount;
LABEL_24:
      if ( m_nQueuedForSpawnCount > 0 )
      {
LABEL_17:
        value.m_Index = -1;
        CEntityKeyValues::SetValue<CEntityHandle>(m_pEntityKeyValues, -1104771937, &value);
        CEntitySpawner<CDebugHistory>::Spawn(v37, &v39);
        v39._vptr_CEntitySpawnerBase = off_4029070;
        CEntitySpawnerBase<CDebugHistory>::~CEntitySpawnerBase(&v39);
        goto LABEL_9;
      }
      v15 = CEntityKeyValues::FindKeyHash(m_pEntityKeyValues, -1164387633);
      if ( v15 < 0 )
      {
        CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyHashes);
        v27 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
        v28 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
        if ( v28 != 0 )
        {
          if ( v28 <= 9 )
            v29 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          else
            v29 = m_pEntityKeyValues->m_keyHashes.m_pElements;
        }
        else
        {
          v29 = 0;
        }
        v29[v27] = -1164387633;
        CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
        if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
          v31 = m_pEntityKeyValues->m_keyValues.m_pElements;
        else
          v31 = 0;
        v32 = v27;
        CVariantBase<CEntityVariantAllocator>::CopyData<QAngle>(&v31[v32].m_value, &vec3_angle, v30);
        if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
          v33 = m_pEntityKeyValues->m_keyValues.m_pElements;
        else
          v33 = 0;
        v33[v32].m_pAttributeName = 0;
        m_pEntityKeyValues = v39.m_pEntityKeyValues;
        goto LABEL_17;
      }
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      {
        v16 = m_pEntityKeyValues->m_keyValues.m_pElements;
        v17 = v15;
        if ( v16[v17].m_pAttributeName != 0 )
        {
LABEL_28:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v16[v17].m_pAttributeName);
LABEL_29:
          m_pEntityKeyValues = v39.m_pEntityKeyValues;
          goto LABEL_17;
        }
      }
      else
      {
        v16 = 0;
        v17 = v15;
        if ( *(v17 * 24 + 16) != 0 )
          goto LABEL_28;
      }
      CVariantBase<CEntityVariantAllocator>::CopyData<QAngle>(&v16[v17].m_value, &vec3_angle, v16);
      goto LABEL_29;
    }
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v12 = m_pEntityKeyValues->m_keyValues.m_pElements;
      v13 = KeyHash;
      if ( v12[v13].m_pAttributeName != 0 )
      {
LABEL_22:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v12[v13].m_pAttributeName);
LABEL_23:
        m_pEntityKeyValues = v39.m_pEntityKeyValues;
        m_nQueuedForSpawnCount = v39.m_pEntityKeyValues->m_nQueuedForSpawnCount;
        goto LABEL_24;
      }
    }
    else
    {
      v12 = 0;
      v13 = KeyHash;
      if ( *(v13 * 24 + 16) != 0 )
        goto LABEL_22;
    }
    v34 = &v12[v13];
    v35 = v34->m_value.m_flags;
    if ( (v35 & 1) != 0 )
      v34->m_value.m_flags = v35 & 0xFFFE;
    v34->m_value.m_uint64 = 0;
    v34->m_value.m_type = 3;
    v36 = CEntityVariantAllocator::Allocate(0xCu);
    v34->m_value.m_uint64 = v36;
    *v36 = vec3_origin;
    v34->m_value.m_flags |= 1u;
    goto LABEL_23;
  }
LABEL_9:
  m_Index = s_DebugHistory.m_Index;
  if ( s_DebugHistory.m_Index + 2 <= 1 )
    return 0;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(s_DebugHistory.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    return 0;
  v5 = &v4[s_DebugHistory.m_Index & 0x1FF];
  if ( v5 == 0 )
    return 0;
LABEL_12:
  if ( m_Index != v5->m_EHandle.m_Index )
    return 0;
  return v5->m_pInstance;
}


// InitDebugHistory  (line 313, @0x00000000021dd650, libserver.so)
// calls: GetDebugHistory
void __cdecl InitDebugHistory()
{
  GetDebugHistory();
}


// ClearDebugHistory  (line 318, @0x00000000021cf540, libserver.so)  // inlines: Set, operator=
// globals: s_DebugHistory
void __cdecl ClearDebugHistory()
{
  s_DebugHistory.m_Index = -1;
}


// AddDebugHistoryLine  (line 326, @0x00000000021dd660, libserver.so)
// calls: GetDebugHistory, CDebugHistory::AddDebugHistoryLine, Warning
// callers: CEntityIONotify::OnEntityIOConnectionRemoved, CEntityIONotify::OnEntityIOOutput, CEntityIONotify::OnEntityIOInput, CC_DebugHistory_AddLine, CBasePlayer::OnTakeDamage, LocalScene_Printf
// strings: "Failed to find or create an env_debughistory.\n"
void __fastcall AddDebugHistoryLine(int iCategory, const char *pszLine)
{
  CDebugHistory *DebugHistory; // rax

  if ( g_pGameRules == 0 || (*(g_pGameRules->_vptr_CGameRules + 39))(g_pGameRules) == 0 )
  {
    if ( GetDebugHistory() != 0 )
    {
      DebugHistory = GetDebugHistory();
      CDebugHistory::AddDebugHistoryLine(DebugHistory, iCategory, pszLine);
    }
    else
    {
      Warning("Failed to find or create an env_debughistory.\n");
    }
  }
}


// CC_DebugHistory_AddLine  (line 347, @0x00000000021dd6d0, libserver.so)  // inlines: Arg, atoi, operator[]
// calls: strtol, AddDebugHistoryLine, Warning
// strings: "Incorrect parameters. Format: <category id> <line>\n"
void __fastcall CC_DebugHistory_AddLine(const CCommandContext *const ctx, const CCommand *const args)
{
  int v3; // eax

  if ( args->m_nArgc <= 2 )
  {
    Warning("Incorrect parameters. Format: <category id> <line>\n");
  }
  else
  {
    v3 = strtol(args->m_ppArgv[1], 0, 10);
    if ( args->m_nArgc > 2 )
      AddDebugHistoryLine(v3, args->m_ppArgv[2]);
    else
      AddDebugHistoryLine(v3, "");
  }
}


// CC_DebugHistory_Dump  (line 364, @0x00000000021dd740, libserver.so)  // inlines: Arg, atoi, operator[]
// calls: GetDebugHistory, strtol, CDebugHistory::DumpDebugHistory, Warning
// strings: "Incorrect parameters. Format: <category id>\n"
void __fastcall CC_DebugHistory_Dump(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v3; // rdi
  int v4; // ebx
  CDebugHistory *DebugHistory; // rax

  if ( args->m_nArgc <= 1 )
  {
    Warning("Incorrect parameters. Format: <category id>\n");
  }
  else if ( GetDebugHistory() != 0 )
  {
    v3 = "";
    if ( args->m_nArgc > 1 )
      v3 = args->m_ppArgv[1];
    v4 = strtol(v3, 0, 10);
    DebugHistory = GetDebugHistory();
    CDebugHistory::DumpDebugHistory(DebugHistory, v4);
  }
}


