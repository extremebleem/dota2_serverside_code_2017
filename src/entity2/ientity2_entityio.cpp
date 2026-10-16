// Reconstructed from DWARF by pahole; not original source.

// src/entity2/ientity2_entityio.cpp:337
class CEventsSaveDataOps : public ISaveRestoreOps {
public:

	CEventsSaveDataOps(CEventsSaveDataOps &);
	CEventsSaveDataOps(const CEventsSaveDataOps &);
	CEventsSaveDataOps();

private:

	virtual void Save(const SaveRestoreFieldInfo_t &, ISave *);
	virtual void Restore(const SaveRestoreFieldInfo_t &, IRestore *);
	virtual bool IsEmpty(const SaveRestoreFieldInfo_t &);
	virtual void MakeEmpty(const SaveRestoreFieldInfo_t &);
	virtual bool Parse(const SaveRestoreFieldInfo_t &, const char *);

	// vtable[0] Save
	// vtable[1] Restore
	// vtable[2] IsEmpty
	// vtable[3] MakeEmpty
	// vtable[4] Parse
	// sizeof = 8
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_ientity2_entityio.cpp  (line 0, @0x0000000001a687c0, libserver.so)  // inlines: CFieldPathHuffmanEncoder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixed, CVariantBase, Color, Purge, RemoveAll, SetColor, __static_initialization_and_destruction_0, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixed
// calls: DataMapInit<EntityIOConnectionDesc_t>, DataMapInit<EntityIOConnection_t>, DataMapInit<CEntityIOOutput>, CFieldPathHuffmanEncoder::BuildOpCodeCodeToHuffmanLookup, __cxa_atexit, _Unwind_Resume, CUtlMemory<CFieldPathHuffmanEncoder::composed_t, int>::Purge, CUtlMemory<int, int>::Purge
// globals: UNSPECIFIED_LOGGING_COLOR, `guard variable for'g_HuffmanEncoder, `guard variable for'CEntityKeyValues::sm_EmptyVariant, EntityIOConnectionDesc_t_DataDescInit::g_DataMapHolder, EntityIOConnection_t_DataDescInit::g_DataMapHolder, CEntityIOOutput_DataDescInit::g_DataMapHolder, g_HuffmanEncoder, __dso_handle (11 total)
void __cdecl GLOBAL__sub_I_ientity2_entityio_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  // init once: g_HuffmanEncoder
  g_HuffmanEncoder.m_pRoot = 0;
  g_HuffmanEncoder.m_Frequencies.m_Size = 0;
  g_HuffmanEncoder.m_Frequencies.m_Memory.m_pMemory = 0;
  g_HuffmanEncoder.m_Frequencies.m_Memory.m_nAllocationCount = 0;
  g_HuffmanEncoder.m_Frequencies.m_Memory.m_nGrowSize = 0;
  g_HuffmanEncoder.m_OpCodeToHuffmanLookup.m_Size = 0;
  g_HuffmanEncoder.m_FixedTree.m_Size = 0;
  g_HuffmanEncoder.m_FixedTree.m_Memory.m_pMemory = 0;
  g_HuffmanEncoder.m_FixedTree.m_Memory.m_nAllocationCount = 0;
  g_HuffmanEncoder.m_FixedTree.m_Memory.m_nGrowSize = 0;
  CFieldPathHuffmanEncoder::BuildOpCodeCodeToHuffmanLookup(&g_HuffmanEncoder);
  __cxa_atexit(CFieldPathHuffmanEncoder::~CFieldPathHuffmanEncoder, &g_HuffmanEncoder, &_dso_handle);
  // init once: CEntityKeyValues::sm_EmptyVariant
  CEntityKeyValues::sm_EmptyVariant.m_type = 0;
  CEntityKeyValues::sm_EmptyVariant.m_flags = 0;
  CEntityKeyValues::sm_EmptyVariant.m_uint64 = 0;
  __cxa_atexit(CVariantBase<CEntityVariantAllocator>::~CVariantBase, &CEntityKeyValues::sm_EmptyVariant, &_dso_handle);
  EntityIOConnectionDesc_t_DataDescInit::g_DataMapHolder = DataMapInit<EntityIOConnectionDesc_t>(0);
  EntityIOConnection_t_DataDescInit::g_DataMapHolder = DataMapInit<EntityIOConnection_t>(0);
  CEntityIOOutput_DataDescInit::g_DataMapHolder = DataMapInit<CEntityIOOutput>(0);
}


// EntityIOConnectionDesc_t::AddDatadescMetadataKeys  (line 13, @0x00000000030cca50, libserver.so)
void __fastcall EntityIOConnectionDesc_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// EntityIOConnectionDesc_t::GetBaseMap  (line 13, @0x00000000030cca60, libserver.so)
datamap_t *__cdecl EntityIOConnectionDesc_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<EntityIOConnectionDesc_t>  (line 13, @0x00000000030cca70, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I_ientity2_entityio.cpp
// strings: "EntityIOConnectionDesc_t"
// globals: `guard variable for'DataMapInit<EntityIOConnectionDesc_t>(EntityIOConnectionDesc_t *)::nameHolder, EntityIOConnectionDesc_t::m_DataMap, DataMapInit<EntityIOConnectionDesc_t>(EntityIOConnectionDesc_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<EntityIOConnectionDesc_t>(EntityIOConnectionDesc_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<EntityIOConnectionDesc_t>(EntityIOConnectionDesc_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<EntityIOConnectionDesc_t>(EntityIOConnectionDesc_t *)::nameHolder) != 0 )
  {
    DataMapInit<EntityIOConnectionDesc_t>(EntityIOConnectionDesc_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<EntityIOConnectionDesc_t>(EntityIOConnectionDesc_t *)::nameHolder.m_pszBase = "EntityIOConnectionDesc_t";
    DataMapInit<EntityIOConnectionDesc_t>(EntityIOConnectionDesc_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<EntityIOConnectionDesc_t>(EntityIOConnectionDesc_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<EntityIOConnectionDesc_t>(EntityIOConnectionDesc_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<EntityIOConnectionDesc_t>(EntityIOConnectionDesc_t *)::nameHolder.m_nLenBase = 24;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<EntityIOConnectionDesc_t>(EntityIOConnectionDesc_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<EntityIOConnectionDesc_t>(EntityIOConnectionDesc_t *)::nameHolder,
      &_dso_handle);
  }
  EntityIOConnectionDesc_t::m_DataMap.baseMap = 0;
  EntityIOConnectionDesc_t::m_DataMap.dataDesc = &DataMapInit<EntityIOConnectionDesc_t>(EntityIOConnectionDesc_t *)::dataDesc[1];
  EntityIOConnectionDesc_t::m_DataMap.dataNumFields = 7;
  return &EntityIOConnectionDesc_t::m_DataMap;
}


// EntityIOConnection_t::AddDatadescMetadataKeys  (line 23, @0x00000000030ccb30, libserver.so)
void __fastcall EntityIOConnection_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// EntityIOConnection_t::GetBaseMap  (line 23, @0x00000000030ccb40, libserver.so)
// globals: EntityIOConnectionDesc_t::m_DataMap
datamap_t *__cdecl EntityIOConnection_t::GetBaseMap()
{
  return &EntityIOConnectionDesc_t::m_DataMap;
}


// DataMapInit<EntityIOConnection_t>  (line 23, @0x00000000030ccb50, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I_ientity2_entityio.cpp
// strings: "EntityIOConnection_t"
// globals: `guard variable for'DataMapInit<EntityIOConnection_t>(EntityIOConnection_t *)::nameHolder, EntityIOConnectionDesc_t::m_DataMap, EntityIOConnection_t::m_DataMap, DataMapInit<EntityIOConnection_t>(EntityIOConnection_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<EntityIOConnection_t>(EntityIOConnection_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<EntityIOConnection_t>(EntityIOConnection_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<EntityIOConnection_t>(EntityIOConnection_t *)::nameHolder) != 0 )
  {
    DataMapInit<EntityIOConnection_t>(EntityIOConnection_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<EntityIOConnection_t>(EntityIOConnection_t *)::nameHolder.m_pszBase = "EntityIOConnection_t";
    DataMapInit<EntityIOConnection_t>(EntityIOConnection_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<EntityIOConnection_t>(EntityIOConnection_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<EntityIOConnection_t>(EntityIOConnection_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<EntityIOConnection_t>(EntityIOConnection_t *)::nameHolder.m_nLenBase = 20;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<EntityIOConnection_t>(EntityIOConnection_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<EntityIOConnection_t>(EntityIOConnection_t *)::nameHolder,
      &_dso_handle);
  }
  EntityIOConnection_t::m_DataMap.dataNumFields = 1;
  EntityIOConnection_t::m_DataMap.baseMap = &EntityIOConnectionDesc_t::m_DataMap;
  EntityIOConnection_t::m_DataMap.dataDesc = &DataMapInit<EntityIOConnection_t>(EntityIOConnection_t *)::dataDesc[1];
  return &EntityIOConnection_t::m_DataMap;
}


// CEntityIOOutput::AddDatadescMetadataKeys  (line 29, @0x00000000030ccc10, libserver.so)
void __fastcall CEntityIOOutput::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CEntityIOOutput::GetBaseMap  (line 29, @0x00000000030ccc20, libserver.so)
datamap_t *__cdecl CEntityIOOutput::GetBaseMap()
{
  return 0;
}


// DataMapInit<CEntityIOOutput>  (line 29, @0x00000000030ccc30, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I_ientity2_entityio.cpp
// strings: "CEntityIOOutput"
// globals: `guard variable for'DataMapInit<CEntityIOOutput>(CEntityIOOutput *)::nameHolder, DataMapInit<CEntityIOOutput>(CEntityIOOutput *)::dataDesc, CEntityIOOutput::m_DataMap, DataMapInit<CEntityIOOutput>(CEntityIOOutput *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEntityIOOutput>(CEntityIOOutput *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEntityIOOutput>(CEntityIOOutput *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEntityIOOutput>(CEntityIOOutput *)::nameHolder) != 0 )
  {
    DataMapInit<CEntityIOOutput>(CEntityIOOutput *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEntityIOOutput>(CEntityIOOutput *)::nameHolder.m_pszBase = "CEntityIOOutput";
    DataMapInit<CEntityIOOutput>(CEntityIOOutput *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEntityIOOutput>(CEntityIOOutput *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEntityIOOutput>(CEntityIOOutput *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEntityIOOutput>(CEntityIOOutput *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEntityIOOutput>(CEntityIOOutput *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEntityIOOutput>(CEntityIOOutput *)::nameHolder,
      &_dso_handle);
  }
  CEntityIOOutput::m_DataMap.baseMap = 0;
  CEntityIOOutput::m_DataMap.dataDesc = DataMapInit<CEntityIOOutput>(CEntityIOOutput *)::dataDesc;
  CEntityIOOutput::m_DataMap.dataNumFields = 1;
  return &CEntityIOOutput::m_DataMap;
}


// EntityIOConnectionDesc_t::EntityIOConnectionDesc_t  (line 35, @0x00000000030ccd90, libserver.so)  // inlines: CEntityHandle, CUtlSymbolLarge
// calls: EntityIOConnectionDesc_t::Init
// callers: CEntityInstance::ConnectOutputToScript
void __fastcall EntityIOConnectionDesc_t::EntityIOConnectionDesc_t(
        EntityIOConnectionDesc_t *const this,
        EntityIOTargetType_t nTargetType,
        const char *pTarget,
        const char *pInputName,
        const char *pValueOverride,
        int32 nTimesToFire,
        float flDelay)
{
  this->m_targetDesc.u.m_Id = 0;
  this->m_targetInput.u.m_Id = 0;
  this->m_valueOverride.u.m_Id = 0;
  this->m_hTarget.m_Index = -1;
  EntityIOConnectionDesc_t::Init(this, nTargetType, pTarget, pInputName, pValueOverride, nTimesToFire, flDelay);
}


// EntityIOConnectionDesc_t::Init  (line 41, @0x00000000030cccf0, libserver.so)  // inlines: operator=
// calls: CEntitySystem::AllocPooledString
// callers: CGameEntitySystem::UniqueifyEntityNames, CCommentarySystem::ReplaceQuotesInEntityKeyValues, CEntityClass::Unserialize, CEntityInstance::InputAddOutput, EntityIOConnectionDesc_t::EntityIOConnectionDesc_t
void __fastcall EntityIOConnectionDesc_t::Init(
        EntityIOConnectionDesc_t *const this,
        EntityIOTargetType_t nTargetType,
        const char *pTarget,
        const char *pInputName,
        const char *pValueOverride,
        int32 nTimesToFire,
        float flDelay)
{
  float v10; // xmm0_4
  char *v11; // rax
  char *v14[8]; // [rsp+10h] [rbp-40h] BYREF

  this->m_nTargetType = nTargetType;
  CEntitySystem::AllocPooledString(v14, g_pEntitySystem, pTarget);
  this->m_targetDesc.u.m_Id = v14[0];
  CEntitySystem::AllocPooledString(v14, g_pEntitySystem, pInputName);
  v10 = flDelay;
  this->m_targetInput.u.m_Id = v14[0];
  v11 = 0;
  if ( pValueOverride != 0 )
  {
    CEntitySystem::AllocPooledString(v14, g_pEntitySystem, pValueOverride);
    v11 = v14[0];
    v10 = flDelay;
  }
  this->m_nTimesToFire = nTimesToFire;
  this->m_valueOverride.u.m_Id = v11;
  this->m_flDelay = v10;
}


// CEntityIOOutput::AddConnection  (line 52, @0x00000000030ccdc0, libserver.so)  // inlines: CEntityHandle, CUtlSymbolLarge, EntityIOConnectionDesc_t, EntityIOConnection_t, operator=
// calls: operator new, CEntitySystem::AllocPooledString
// callers: CEntityIOOutput::ParseAndAddConnection
EntityIOConnection_t *__fastcall CEntityIOOutput::AddConnection(
        CEntityIOOutput *const this,
        uint32 *hTarget,
        const char *pTargetInputName,
        float flDelay)
{
  EntityIOConnection_t *v7; // rax
  EntityIOConnection_t *v8; // rbx
  char *v9; // rax
  char *v12; // [rsp+10h] [rbp-30h] BYREF

  v7 = operator new(0x38u);
  v7->m_targetDesc.u.m_Id = 0;
  v8 = v7;
  v7->m_targetInput.u.m_Id = 0;
  v7->m_valueOverride.u.m_Id = 0;
  v7->m_hTarget.m_Index = -1;
  v7->m_nTargetType = EntityIOTargetType_t::ENTITY_IO_TARGET_EHANDLE;
  v7->m_hTarget.m_Index = *hTarget;
  CEntitySystem::AllocPooledString(&v12, g_pEntitySystem, pTargetInputName);
  v9 = v12;
  v8->m_nTimesToFire = -1;
  v8->m_valueOverride.u.m_Id = 0;
  v8->m_bMarkedForRemoval = 0;
  v8->m_flDelay = flDelay;
  v8->m_targetInput.u.m_Id = v9;
  v8->m_pNext = this->m_pConnections;
  this->m_pConnections = v8;
  return v8;
}


// CEntityIOOutput::ParseAndAddConnection  (line 71, @0x00000000030cce70, libserver.so)  // inlines: CEntityHandle, atof, atoi, operator=, strchr
// calls: CEntityIOOutput::AddConnection, strchr, nexttoken, CEntitySystem::AllocPooledString, strtol, strtod, __stack_chk_fail
// callers: CEventsSaveDataOps::Parse
void __fastcall CEntityIOOutput::ParseAndAddConnection(CEntityIOOutput *const this, const char *pszConnectionData)
{
  EntityIOConnection_t *v3; // rax
  EntityIOConnection_t *v4; // r14
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rax
  char *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // eax
  int v12; // edx
  __m128d v13; // xmm0
  const char *psz; // [rsp+8h] [rbp-158h]
  const char *psza; // [rsp+8h] [rbp-158h]
  const char *pszc; // [rsp+8h] [rbp-158h]
  const char *pszb; // [rsp+8h] [rbp-158h]
  EHANDLE2 hTarget[2]; // [rsp+10h] [rbp-150h] BYREF
  char szToken[264]; // [rsp+20h] [rbp-140h] BYREF
  unsigned __int64 v20; // [rsp+128h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  if ( pszConnectionData != 0 )
  {
    hTarget[0].m_Index = -1;
    v3 = CEntityIOOutput::AddConnection(this, &hTarget[0].m_Index, 0, 0.0);
    v3->m_nTargetType = EntityIOTargetType_t::ENTITY_IO_TARGET_ENTITYNAME_OR_CLASSNAME;
    v4 = v3;
    v5 = strchr(pszConnectionData, 27) == 0 ? 44 : 27;
    v6 = nexttoken(szToken, pszConnectionData, v5);
    if ( szToken[0] != 0 )
    {
      psza = v6;
      CEntitySystem::AllocPooledString(hTarget, g_pEntitySystem, szToken);
      v6 = psza;
      v4->m_targetDesc.u.m_Id = *&hTarget[0].m_Index;
    }
    v7 = nexttoken(szToken, v6, v5);
    v8 = szToken;
    psz = v7;
    if ( szToken[0] == 0 )
      v8 = "Use";
    CEntitySystem::AllocPooledString(hTarget, g_pEntitySystem, v8);
    v4->m_targetInput.u.m_Id = *&hTarget[0].m_Index;
    v9 = nexttoken(szToken, psz, v5);
    if ( szToken[0] != 0 )
    {
      pszb = v9;
      CEntitySystem::AllocPooledString(hTarget, g_pEntitySystem, szToken);
      v9 = pszb;
      v4->m_valueOverride.u.m_Id = *&hTarget[0].m_Index;
    }
    v10 = nexttoken(szToken, v9, v5);
    if ( szToken[0] != 0 )
    {
      pszc = v10;
      v13.m128d_f64[0] = strtod(szToken, 0);
      v10 = pszc;
      v4->m_flDelay = _mm_movedup_pd(v13).m128d_f64[0];
    }
    nexttoken(szToken, v10, v5);
    if ( szToken[0] != 0 )
    {
      v11 = strtol(szToken, 0, 10);
      v12 = -1;
      if ( v11 != 0 )
        v12 = v11;
      v4->m_nTimesToFire = v12;
    }
  }
}


// CEntityIOOutput::RemoveConnection  (line 142, @0x00000000030cd080, libserver.so)
// callers: CEntityInstance::DisconnectOutputFromScript
void __fastcall CEntityIOOutput::RemoveConnection(CEntityIOOutput *const this, EntityIOConnectionHandle_t hConnection)
{
  if ( hConnection != 0 )
    *(hConnection + 40) = 1;
}


// CEntityIOOutput::RemoveAllConnections  (line 155, @0x00000000030cd090, libserver.so)
// calls: operator delete
void __fastcall CEntityIOOutput::RemoveAllConnections(CEntityIOOutput *const this)
{
  EntityIOConnection_t *m_pConnections; // rdi
  EntityIOConnection_t *m_pNext; // rbx

  m_pConnections = this->m_pConnections;
  if ( m_pConnections != 0 )
  {
    while ( 1 )
    {
      m_pNext = m_pConnections->m_pNext;
      operator delete(m_pConnections);
      if ( m_pNext == 0 )
        break;
      m_pConnections = m_pNext;
    }
  }
  this->m_pConnections = 0;
}


// CEntityIOOutput::GetActionForTarget  (line 169, @0x00000000030cd0d0, libserver.so)  // inlines: operator==
// callers: CEntitySystem::FindEntityByOutputTarget
const EntityIOConnection_t *__fastcall CEntityIOOutput::GetActionForTarget(
        const CEntityIOOutput *const this,
        string_t searchTarget)
{
  const EntityIOConnection_t *result; // rax

  result = this->m_pConnections;
  if ( result == 0 )
    return 0;
  if ( result->m_targetDesc.u.m_Id != *searchTarget.u.m_Id )
  {
    do
      result = result->m_pNext;
    while ( result != 0 && result->m_targetDesc.u.m_Id != *searchTarget.u.m_Id );
  }
  return result;
}


// CEntityIOOutput::GetActionForTargetEntity  (line 180, @0x00000000030cd110, libserver.so)  // inlines: operator==
// callers: CEntityInstance::DisconnectOutputFromScript
const EntityIOConnection_t *__fastcall CEntityIOOutput::GetActionForTargetEntity(
        const CEntityIOOutput *const this,
        _DWORD *hTarget)
{
  const EntityIOConnection_t *result; // rax

  result = this->m_pConnections;
  if ( result == 0 )
    return 0;
  if ( result->m_hTarget.m_Index != *hTarget )
  {
    do
      result = result->m_pNext;
    while ( result != 0 && result->m_hTarget.m_Index != *hTarget );
  }
  return result;
}


// CEntityIOOutput::FireOutputInternal  (line 192, @0x00000000030cd150, libserver.so)  // inlines: Allocate, Allocate<QAngle>, Allocate<Quaternion>, Allocate<Vector2D>, AssignTo<CVariantDefaultAllocator>, CEntityHandle, CUtlSymbolLarge, CVariantBase, CopyData, CopyData<QAngle>, CopyData<Quaternion>, CopyData<Vector2D>, CopyData<Vector4D>, Free, GetEntityIONotify, String, ToCStr, V_strlen, memcpy, operator=, ~CVariantBase
// calls: operator delete, CEntitySystem::AddEntityIOEvent, strlen, memcpy, _Unwind_Resume
// callers: CEntityIOOutput::FireOutput<char const*>, CBaseClientUIEntity::OnClientFireOutput, CInfoWorldLayer::SpawnGroupCreationComplete, CBaseAnimating::Ignite, CDynamicProp::PropSetAnim, CBreakableProp::AnimateThink, CBreakableProp::OnAttemptPhysGunPickup, CBreakableProp::OnTakeDamage, CBreakableProp::Break, CBreakableProp::UpdateHealth, CDynamicProp::AnimThink, CLogicRelay::InputTrigger (187 total)
// globals: jpt_30CD26C
void __fastcall CEntityIOOutput::FireOutputInternal(
        CEntityIOOutput *const this,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        const CVariant *const value,
        float flDelay)
{
  EntityIOConnection_t *m_pConnections; // rbx
  EntityIOConnection_t *v6; // r14
  IEntityIONotify *m_pEntityIONotify; // r13
  EntityIOConnection_t *m_pNext; // rax
  EntityIOConnection_t *v9; // r12
  bool m_bMarkedForRemoval; // r12
  int32 m_nTimesToFire; // eax
  int32 v12; // eax
  _DWORD *m_uint64; // r15
  _DWORD *v14; // rax
  uint64 m_Id; // r15
  EntityIOTargetType_t m_nTargetType; // esi
  float v17; // xmm0_4
  const char *v18; // r15
  _DWORD *v19; // r15
  _DWORD *v20; // rax
  _DWORD *v21; // r15
  _DWORD *v22; // rax
  unsigned int v24; // [rsp+28h] [rbp-88h]
  _QWORD v29[2]; // [rsp+50h] [rbp-60h] BYREF
  _QWORD v30[2]; // [rsp+60h] [rbp-50h] BYREF
  CVariant eventValue; // [rsp+70h] [rbp-40h] BYREF

  m_pConnections = this->m_pConnections;
  if ( m_pConnections != 0 )
  {
    v6 = 0;
    m_pEntityIONotify = g_pEntitySystem->m_pEntityIONotify;
    do
    {
      while ( 1 )
      {
        m_bMarkedForRemoval = m_pConnections->m_bMarkedForRemoval;
        if ( !m_bMarkedForRemoval )
        {
          eventValue.m_flags = 0;
          switch ( value->m_type )
          {
            case 3:
              eventValue.m_uint64 = 0;
              eventValue.m_type = 3;
              m_uint64 = value->m_uint64;
              goto LABEL_16;
            case 4:
              eventValue.m_uint64 = 0;
              eventValue.m_type = 4;
              v19 = value->m_uint64;
              goto LABEL_30;
            case 0x19:
              eventValue.m_uint64 = 0;
              eventValue.m_type = 25;
              v21 = value->m_uint64;
              v22 = (**g_pMemAlloc)(g_pMemAlloc, 8);
              eventValue.m_uint64 = v22;
              *v22 = *v21;
              v22[1] = v21[1];
              eventValue.m_flags |= 1u;
              break;
            case 0x1B:
              eventValue.m_uint64 = 0;
              eventValue.m_type = 27;
              v19 = value->m_uint64;
LABEL_30:
              v20 = (**g_pMemAlloc)(g_pMemAlloc, 16);
              eventValue.m_uint64 = v20;
              *v20 = *v19;
              v20[1] = v19[1];
              v20[2] = v19[2];
              v20[3] = v19[3];
              eventValue.m_flags |= 1u;
              break;
            case 0x1E:
              eventValue.m_uint64 = 0;
              v18 = value->m_uint64;
              eventValue.m_type = 30;
              if ( v18 != 0 )
              {
                v24 = strlen(v18) + 1;
                eventValue.m_uint64 = (**g_pMemAlloc)(g_pMemAlloc, v24);
                memcpy(eventValue.m_pData, v18, v24);
                eventValue.m_flags |= 1u;
              }
              break;
            case 0x27:
              eventValue.m_uint64 = 0;
              eventValue.m_type = 39;
              m_uint64 = value->m_uint64;
LABEL_16:
              v14 = (**g_pMemAlloc)(g_pMemAlloc, 12);
              eventValue.m_uint64 = v14;
              *v14 = *m_uint64;
              v14[1] = m_uint64[1];
              v14[2] = m_uint64[2];
              eventValue.m_flags |= 1u;
              break;
            default:
              eventValue.m_type = value->m_type;
              eventValue.m_uint64 = value->m_uint64;
              break;
          }
          if ( m_pConnections->m_valueOverride.u.m_Id != 0 )
          {
            m_Id = m_pConnections->m_valueOverride.u.m_Id;
            if ( (eventValue.m_flags & 1) != 0 )
            {
              (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, eventValue.m_uint64);
              eventValue.m_flags &= ~1u;
            }
            eventValue.m_uint64 = m_Id;
            eventValue.m_type = 30;
          }
          m_nTargetType = m_pConnections->m_nTargetType;
          v17 = flDelay + m_pConnections->m_flDelay;
          v30[0] = m_pConnections->m_targetInput.u.m_Id;
          if ( m_nTargetType == EntityIOTargetType_t::ENTITY_IO_TARGET_EHANDLE )
          {
            LODWORD(v29[0]) = m_pConnections->m_hTarget.m_Index;
            CEntitySystem::AddEntityIOEvent(g_pEntitySystem, v29, v30, pActivator, pCaller, &eventValue, v17, 0);
          }
          else
          {
            v29[0] = m_pConnections->m_targetDesc.u.m_Id;
            CEntitySystem::AddEntityIOEvent(
              g_pEntitySystem,
              m_nTargetType,
              v29,
              v30,
              pActivator,
              pCaller,
              v17,
              &eventValue,
              0);
          }
          if ( m_pEntityIONotify != 0 )
            m_pEntityIONotify->OnEntityIOOutput(pActivator, pCaller, m_pConnections);
          if ( (eventValue.m_flags & 1) != 0 )
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, eventValue.m_uint64);
        }
        m_nTimesToFire = m_pConnections->m_nTimesToFire;
        if ( m_nTimesToFire != -1 )
        {
          v12 = m_nTimesToFire - 1;
          m_pConnections->m_nTimesToFire = v12;
          if ( v12 == 0 )
            break;
        }
        if ( m_bMarkedForRemoval )
          break;
        v6 = m_pConnections;
        m_pConnections = m_pConnections->m_pNext;
        if ( m_pConnections == 0 )
          return;
      }
      if ( m_pEntityIONotify != 0 )
        (*(m_pEntityIONotify->_vptr_IEntityIONotify + 2))(m_pEntityIONotify, pActivator, pCaller, m_pConnections);
      m_pNext = m_pConnections->m_pNext;
      if ( v6 != 0 )
        v6->m_pNext = m_pNext;
      else
        this->m_pConnections = m_pNext;
      v9 = m_pConnections->m_pNext;
      operator delete(m_pConnections);
      m_pConnections = v9;
    }
    while ( v9 != 0 );
  }
}


// CEntityIOOutput::Save  (line 276, @0x00000000030cd5b0, libserver.so)  // inlines: WriteAll<EntityIOConnection_t>
// callers: CEventsSaveDataOps::Save
// globals: CEntityIOOutput::m_DataMap, EntityIOConnection_t::m_DataMap
int __fastcall CEntityIOOutput::Save(CEntityIOOutput *const this, ISave *const save)
{
  EntityIOConnection_t *m_pConnections; // rbx

  if ( (*(save->_vptr_ISave + 6))(
         save,
         "Value",
         this,
         0,
         CEntityIOOutput::m_DataMap.dataDesc,
         CEntityIOOutput::m_DataMap.dataNumFields) == 0 )
    return 0;
  m_pConnections = this->m_pConnections;
  if ( m_pConnections != 0 )
  {
    while ( (*(save->_vptr_ISave + 5))(save, m_pConnections, &EntityIOConnection_t::m_DataMap) != 0 )
    {
      m_pConnections = m_pConnections->m_pNext;
      if ( m_pConnections == 0 )
        return 1;
    }
    return 0;
  }
  return 1;
}


// CEntityIOOutput::Restore  (line 291, @0x00000000030cd630, libserver.so)  // inlines: CEntityHandle, EntityIOConnectionDesc_t, ReadAll<EntityIOConnection_t>
// calls: operator new
// callers: CEventsSaveDataOps::Restore
// globals: CEntityIOOutput::m_DataMap, EntityIOConnection_t::m_DataMap
int __fastcall CEntityIOOutput::Restore(CEntityIOOutput *const this, IRestore *const restore, int elementCount)
{
  int v5; // r14d
  EntityIOConnection_t *v6; // r15
  EntityIOConnection_t *v7; // rbx

  if ( (*(restore->_vptr_IRestore + 3))(
         restore,
         "Value",
         this,
         0,
         CEntityIOOutput::m_DataMap.dataDesc,
         CEntityIOOutput::m_DataMap.dataNumFields) == 0 )
    return 0;
  v5 = 0;
  v6 = 0;
  this->m_pConnections = 0;
  if ( elementCount > 0 )
  {
    while ( 1 )
    {
      v7 = operator new(0x38u);
      memset(v7, 0, sizeof(EntityIOConnection_t));
      v7->m_hTarget.m_Index = -1;
      if ( (*(restore->_vptr_IRestore + 2))(restore, v7, &EntityIOConnection_t::m_DataMap) == 0 )
        break;
      if ( v6 != 0 )
        v6->m_pNext = v7;
      else
        this->m_pConnections = v7;
      ++v5;
      v7->m_pNext = 0;
      if ( v5 == elementCount )
        return 1;
      v6 = v7;
    }
    return 0;
  }
  return 1;
}


// CEntityIOOutput::NumberOfElements  (line 324, @0x00000000030cd720, libserver.so)
int __fastcall CEntityIOOutput::NumberOfElements(CEntityIOOutput *const this)
{
  EntityIOConnection_t *m_pConnections; // rdx
  int result; // eax

  m_pConnections = this->m_pConnections;
  for ( result = 0; m_pConnections != 0; ++result )
    m_pConnections = m_pConnections->m_pNext;
  return result;
}


// CEventsSaveDataOps::Save  (line 339, @0x00000000030cd7d0, libserver.so)  // inlines: NumberOfElements
// calls: CEntityIOOutput::Save
void __fastcall CEventsSaveDataOps::Save(
        CEventsSaveDataOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  CEntityIOOutput *pField; // r14
  int fieldSize; // eax
  CEntityIOOutput *v6; // r13
  EntityIOConnection_t *m_pConnections; // rax
  int i; // ecx
  int (**vptr_ISave)(...); // rax
  int numElements[9]; // [rsp+Ch] [rbp-24h] BYREF

  pField = fieldInfo->pField;
  fieldSize = fieldInfo->pTypeDesc->fieldSize;
  if ( fieldSize != 0 )
  {
    v6 = &pField[(fieldSize - 1) + 1];
    do
    {
      m_pConnections = pField->m_pConnections;
      for ( i = 0; m_pConnections != 0; ++i )
        m_pConnections = m_pConnections->m_pNext;
      vptr_ISave = pSave->_vptr_ISave;
      numElements[0] = i;
      vptr_ISave[11](pSave, numElements, 1);
      CEntityIOOutput::Save(pField++, pSave);
    }
    while ( pField != v6 );
  }
}


// CEventsSaveDataOps::Restore  (line 356, @0x00000000030cd860, libserver.so)
// calls: CEntityIOOutput::Restore
void __fastcall CEventsSaveDataOps::Restore(
        CEventsSaveDataOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  CEntityIOOutput *pField; // rbx
  int fieldSize; // eax
  CEntityIOOutput *v6; // r13
  int v7; // eax
  CEntityIOOutput *v8; // rdi

  pField = fieldInfo->pField;
  fieldSize = fieldInfo->pTypeDesc->fieldSize;
  if ( fieldSize != 0 )
  {
    v6 = &pField[(fieldSize - 1) + 1];
    do
    {
      v7 = (*(pRestore->_vptr_IRestore + 13))(pRestore);
      v8 = pField++;
      CEntityIOOutput::Restore(v8, pRestore, v7);
    }
    while ( pField != v6 );
  }
}


// CEventsSaveDataOps::IsEmpty  (line 372, @0x00000000030cd740, libserver.so)  // inlines: NumberOfElements
bool __fastcall CEventsSaveDataOps::IsEmpty(
        CEventsSaveDataOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  _QWORD *pField; // rbx
  int fieldSize; // eax
  _QWORD *v4; // r12

  pField = fieldInfo->pField;
  fieldSize = fieldInfo->pTypeDesc->fieldSize;
  if ( fieldSize == 0 )
    return 1;
  v4 = &pField[3 * (fieldSize - 1) + 3];
  while ( pField[1] == 0 && (*(*pField + 8LL))(pField) == 0 )
  {
    pField += 3;
    if ( pField == v4 )
      return 1;
  }
  return 0;
}


// CEventsSaveDataOps::MakeEmpty  (line 390, @0x00000000030cd7a0, libserver.so)
void __fastcall CEventsSaveDataOps::MakeEmpty(
        CEventsSaveDataOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  ;
}


// CEventsSaveDataOps::Parse  (line 396, @0x00000000030cd7b0, libserver.so)
// calls: CEntityIOOutput::ParseAndAddConnection
bool __fastcall CEventsSaveDataOps::Parse(
        CEventsSaveDataOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        const char *szValue)
{
  CEntityIOOutput::ParseAndAddConnection(fieldInfo->pField, szValue);
  return 1;
}


