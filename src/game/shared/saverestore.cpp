// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/saverestore.cpp:46
class CEntitySaveRestoreBlockHandler : public ISaveRestoreBlockHandler {
public:

private:

	bool m_bGlobalEntityDatabaseValid;  // +0x38
	CEntitySaveRestoreBlockHandler(CEntitySaveRestoreBlockHandler &);
	CEntitySaveRestoreBlockHandler(const CEntitySaveRestoreBlockHandler &);
	CEntitySaveRestoreBlockHandler();
	virtual const char * GetBlockName();
	virtual void PreSave(CSaveRestoreData *, const CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > &);
	virtual void Save(ISave *);
	virtual void WriteSaveHeaders(ISave *);
	virtual void PostSave(const CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > &);
	virtual void ReadRestoreHeaders(IRestore *);
	virtual void Restore(IRestore *, SpawnGroupHandle_t, bool);
	virtual void PreRestore();
	virtual void PostRestore();
	bool SaveInitEntities(CSaveRestoreData *, const CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > &);
	bool DoRestoreEntity(CEntityInstance *, IRestore *, SpawnGroupHandle_t);
	int RestoreEntity(CEntityInstance *, IRestore *, entitytable_t *, SpawnGroupHandle_t);
	void SaveEntityOnTable(CEntityInstance *, CSaveRestoreData *, int &);
	CEntityInstance * FindGlobalEntity(string_t, string_t);
	int RestoreGlobalEntity(CEntityInstance *, CSaveRestoreData *, entitytable_t *, SpawnGroupHandle_t);
	void BuildGlobalEntityDatabase();
	void ReleaseGlobalEntityDatabase();
	~CEntitySaveRestoreBlockHandler();

	// vtable[0] GetBlockName
	// vtable[1] PreSave
	// vtable[2] Save
	// vtable[3] WriteSaveHeaders
	// vtable[4] PostSave
	// vtable[6] ReadRestoreHeaders
	// vtable[7] Restore
	// vtable[5] PreRestore
	// vtable[8] PostRestore
	// sizeof = 64
};

// src/game/shared/saverestore.cpp:701
struct SaveRestoreBlockHeader_t {
	char m_sBlockName[32];  // +0x0
	int m_locHeader;  // +0x20
	int m_locBody;  // +0x24

	static datamap_t m_DataMap;
	SaveRestoreBlockHeader_t();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// sizeof = 40
};

// src/game/shared/saverestore.cpp:713
class CSaveRestoreBlockSet : public ISaveRestoreBlockSet {
public:

private:

	int m_SizeHeaders;  // +0x10
	int m_SizeBodies;  // +0x14
	CSaveRestoreBlockSet(CSaveRestoreBlockSet &);
	CSaveRestoreBlockSet(const CSaveRestoreBlockSet &);
	CSaveRestoreBlockSet(const char *);
	virtual const char * GetBlockName();
	virtual void PreSave(CSaveRestoreData *, const CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > &);
	virtual void Save(ISave *);
	virtual void WriteSaveHeaders(ISave *);
	virtual void PostSave(const CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > &);
	virtual void PreRestore();
	virtual void ReadRestoreHeaders(IRestore *);
	virtual void CallBlockHandlerRestore(ISaveRestoreBlockHandler *, int, IRestore *, SpawnGroupHandle_t, bool);
	virtual void Restore(IRestore *, SpawnGroupHandle_t, bool);
	virtual void PostRestore();
	virtual void AddBlockHandler(ISaveRestoreBlockHandler *);
	virtual void RemoveBlockHandler(ISaveRestoreBlockHandler *);
	int GetBlockBodyLoc(const char *);
	int GetBlockHeaderLoc(const char *);
	~CSaveRestoreBlockSet();

	// vtable[0] GetBlockName
	// vtable[1] PreSave
	// vtable[2] Save
	// vtable[3] WriteSaveHeaders
	// vtable[4] PostSave
	// vtable[5] PreRestore
	// vtable[6] ReadRestoreHeaders
	// vtable[11] CallBlockHandlerRestore
	// vtable[7] Restore
	// vtable[8] PostRestore
	// vtable[9] AddBlockHandler
	// vtable[10] RemoveBlockHandler
	// sizeof = 72
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// entitytable_t::AddDatadescMetadataKeys  (line 29, @0x00000000020b3c10, libserver.so)
void __fastcall entitytable_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// entitytable_t::GetBaseMap  (line 29, @0x00000000020b3c20, libserver.so)
datamap_t *__cdecl entitytable_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<entitytable_t>  (line 29, @0x00000000020b3c30, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: __static_initialization_and_destruction_0
// strings: "entitytable_t"
// globals: `guard variable for'DataMapInit<entitytable_t>(entitytable_t *)::nameHolder, entitytable_t::m_DataMap, DataMapInit<entitytable_t>(entitytable_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<entitytable_t>(entitytable_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<entitytable_t>(entitytable_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<entitytable_t>(entitytable_t *)::nameHolder) != 0 )
  {
    DataMapInit<entitytable_t>(entitytable_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<entitytable_t>(entitytable_t *)::nameHolder.m_pszBase = "entitytable_t";
    DataMapInit<entitytable_t>(entitytable_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<entitytable_t>(entitytable_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<entitytable_t>(entitytable_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<entitytable_t>(entitytable_t *)::nameHolder.m_nLenBase = 13;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<entitytable_t>(entitytable_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<entitytable_t>(entitytable_t *)::nameHolder,
      &_dso_handle);
  }
  entitytable_t::m_DataMap.baseMap = 0;
  entitytable_t::m_DataMap.dataDesc = &DataMapInit<entitytable_t>(entitytable_t *)::dataDesc[1];
  entitytable_t::m_DataMap.dataNumFields = 9;
  return &entitytable_t::m_DataMap;
}


// CEntitySaveRestoreBlockHandler::~CEntitySaveRestoreBlockHandler  (line 46, @0x00000000021188b0, libserver.so)  // inlines: Purge, ~CUtlDict, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlDict<CEntityHandle, int>::Purge, CUtlRBTree<CUtlMap<char const*, CEntityHandle, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CEntityHandle, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEntityHandle, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CEntityHandle, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge
void __fastcall CEntitySaveRestoreBlockHandler::~CEntitySaveRestoreBlockHandler(
        CEntitySaveRestoreBlockHandler *const this)
{
  CUtlDict<CEntityHandle,int> *p_m_GlobalEntityDict; // r12

  p_m_GlobalEntityDict = &this->m_GlobalEntityDict;
  this->_vptr_ISaveRestoreBlockHandler = &off_3FFC490;
  CUtlDict<CEntityHandle,int>::Purge(&this->m_GlobalEntityDict);
  CUtlRBTree<CUtlMap<char const*,CEntityHandle,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CEntityHandle,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityHandle,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&p_m_GlobalEntityDict->m_Elements.m_Tree);
  if ( (this->m_GlobalEntityDict.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CEntityHandle,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_GlobalEntityDict.m_Elements.m_Tree.m_Elements);
}


// CEntitySaveRestoreBlockHandler::PostSave  (line 54, @0x00000000020f1bb0, libserver.so)
void __fastcall CEntitySaveRestoreBlockHandler::PostSave(
        CEntitySaveRestoreBlockHandler *const this,
        const CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *const list)
{
  ;
}


// GetEntitySaveRestoreBlockHandler  (line 89, @0x00000000020b3cf0, libserver.so)
// callers: CSource2Server::Shutdown, CSource2Server::Init
// globals: g_EntitySaveRestoreBlockHandler
ISaveRestoreBlockHandler *__cdecl GetEntitySaveRestoreBlockHandler()
{
  return &g_EntitySaveRestoreBlockHandler;
}


// CEntitySaveRestoreBlockHandler::PreRestore  (line 96, @0x000000000209d480, libserver.so)
// calls: CEntitySystem::ForceSetInPVSCallsIntoQueue
// globals: g_pGameEntitySystem
void __fastcall CEntitySaveRestoreBlockHandler::PreRestore(CEntitySaveRestoreBlockHandler *const this)
{
  CEntitySystem::ForceSetInPVSCallsIntoQueue(g_pGameEntitySystem, 1);
}


// CEntitySaveRestoreBlockHandler::PostRestore  (line 101, @0x000000000209d4a0, libserver.so)
// calls: CEntitySystem::ForceSetInPVSCallsIntoQueue
// globals: g_pGameEntitySystem
void __fastcall CEntitySaveRestoreBlockHandler::PostRestore(CEntitySaveRestoreBlockHandler *const this)
{
  CEntitySystem::ForceSetInPVSCallsIntoQueue(g_pGameEntitySystem, 0);
}


// CEntitySaveRestoreBlockHandler::GetBlockName  (line 109, @0x000000000209c7c0, libserver.so)
const char *__fastcall CEntitySaveRestoreBlockHandler::GetBlockName(const CEntitySaveRestoreBlockHandler *const this)
{
  return "Entities";
}


// CEntitySaveRestoreBlockHandler::PreSave  (line 116, @0x00000000020b3f30, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventSaveGame_t&)>, DispatchEvent<EventSaveGame_t>, GetEntityIdentity, GetEntryIndex, GetInstance, GetVTableIndex, IndexToIdentity, IsValid, LookupEntity, operator->, operator[], ~CDontUseThisGameSystem
// calls: IGameSystem::DispatchEventInternal, CEntitySaveRestoreBlockHandler::SaveInitEntities, IGameSystem::~IGameSystem, __cxa_guard_acquire, __cxa_guard_release, _Unwind_Resume
// globals: EventSaveGame_t::GetVTableIndex(void)::s_nComputedIndex, CEntityHandle::gm_pEntityList, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSaveGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(Even, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSaveGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSaveGame_t const&))
void __fastcall CEntitySaveRestoreBlockHandler::PreSave(
        CEntitySaveRestoreBlockHandler *const this,
        CSaveRestoreData *pSaveData,
        const CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *const list)
{
  GameSystemEventId_t v6; // edi
  __int64 v7; // r12
  int v8; // ebx
  CEntityInstance *m_pInstance; // rdi
  CEntityHandle *v10; // rdx
  uint32 m_Index; // eax
  __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  EventSaveGame_t msg; // [rsp+0h] [rbp-50h] BYREF
  IGameSystem v16; // [rsp+10h] [rbp-40h] BYREF

  msg.m_pEntityList = list;
  v6 = EventSaveGame_t::GetVTableIndex(void)::s_nComputedIndex;
  if ( EventSaveGame_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v16._vptr_IGameSystem = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSaveGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSaveGame_t const&))::ppVTableNew == 0
      && __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSaveGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSaveGame_t const&))::ppVTableNew) != 0 )
    {
      ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSaveGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSaveGame_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSaveGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSaveGame_t const&))::calculator;
      __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSaveGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSaveGame_t const&))::ppVTableNew);
    }
    v16._vptr_IGameSystem = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSaveGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSaveGame_t const&))::ppVTableNew;
    EventSaveGame_t::GetVTableIndex(void)::s_nComputedIndex = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSaveGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSaveGame_t const&))::ppVTableNew
                                                               + 248))(&v16);
    v16._vptr_IGameSystem = off_3FC3E30;
    IGameSystem::~IGameSystem(&v16);
    v6 = EventSaveGame_t::GetVTableIndex(void)::s_nComputedIndex;
  }
  v7 = 0;
  v8 = 0;
  IGameSystem::DispatchEventInternal(v6, 0xF9uLL, &msg);
  if ( list->m_Size > 0 )
  {
    do
    {
      m_pInstance = 0;
      v10 = &list->m_Memory.m_pMemory[v7];
      m_Index = v10->m_Index;
      if ( v10->m_Index + 2 > 1 )
      {
        v12 = v10->m_Index;
        v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_Index) >> 9) & 0x3F];
        if ( v13 != 0 )
        {
          v14 = &v13[v12 & 0x1FF];
          if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index )
            m_pInstance = v14->m_pInstance;
        }
      }
      ++v8;
      ++v7;
      (*(m_pInstance->_vptr_IHandleEntity + 17))(m_pInstance);
    }
    while ( list->m_Size > v8 );
  }
  CEntitySaveRestoreBlockHandler::SaveInitEntities(this, pSaveData, list);
}


// CEntitySaveRestoreBlockHandler::Save  (line 133, @0x00000000020c3e20, libserver.so)  // inlines: CEntityHandle, CSaveFlushScope, CSaveRestoreCurrentEntityContext, CUtlString, CUtlSymbolLarge, GetClassName, GetClassNameAsCStr, GetEHandle, GetEntityIdentity, GetEntityNameAsCStr, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, Release, String, operator CEntityInstance*, operator char const*, operator=, ~CSaveFlushScope, ~CSaveRestoreCurrentEntityContext, ~CUtlString
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CGameSaveRestoreInfo::NumEntities, CGameSaveRestoreInfo::GetEntityInfo, CFmtStrN<256, false>::CFmtStrN, __dynamic_cast, CUtlString::Set, CGameSaveRestoreInfo::SetCurrentEntityContext, CUtlString::FreeMemoryBlock, IsPlayerIndex, CUtlString::Get, _Unwind_Resume (14 total)
// strings: "%s:  skip %d %s [%s] FCAP_DONT_SAVE\n", "SV", "%s:  %d | ", "%s:  save %d %s [%s] %d bytes\n"
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CSave, `typeinfo for'ISave
void __fastcall CEntitySaveRestoreBlockHandler::Save(CEntitySaveRestoreBlockHandler *const this, ISave *pSave)
{
  int v2; // r14d
  CGameSaveRestoreInfo *v4; // r15
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r12
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rax
  const char *v9; // rsi
  const char *v10; // r9
  unsigned __int16 v11; // cx
  __int64 v12; // r8
  entitytable_t *EntityInfo; // rbx
  int v14; // eax
  CConcreteEntityList *v15; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *m_pEntity; // rdx
  int v18; // ecx
  CSave *v19; // rax
  int m_nFlushScopeDepth; // eax
  int v21; // esi
  int v22; // eax
  __int64 v23; // rdi
  CEntityIdentity *v24; // rax
  const char *m_pAsString; // rcx
  const char *v26; // r9
  __int64 v27; // r8
  CEntityIdentity *v28; // rax
  CEntityIndex v29; // edi
  const char *v30; // rax
  __int64 v31; // [rsp+8h] [rbp-1A8h]
  void (__fastcall *v32)(CSave *, const char *); // [rsp+30h] [rbp-180h]
  CSaveFlushScope flush; // [rsp+50h] [rbp-160h] BYREF
  CFmtStrN<256,false> v34; // [rsp+60h] [rbp-150h] BYREF
  unsigned __int64 v35; // [rsp+178h] [rbp-38h]

  v2 = 0;
  v35 = __readfsqword(0x28u);
  v4 = (*(pSave->_vptr_ISave + 73))(pSave);
  while ( v2 < CGameSaveRestoreInfo::NumEntities(v4) )
  {
    EntityInfo = CGameSaveRestoreInfo::GetEntityInfo(v4, v2);
    v14 = (*(pSave->_vptr_ISave + 3))(pSave);
    EntityInfo->size = 0;
    v15 = CEntityHandle::gm_pEntityList;
    EntityInfo->location = v14;
    m_Index = EntityInfo->hEnt.m_Index;
    if ( m_Index + 2 > 1 && (v5 = v15->m_pIdentityChunks[(LOWORD(EntityInfo->hEnt.m_Index) >> 9) & 0x3F]) != 0 )
    {
      m_pInstance = 0;
      v7 = &v5[EntityInfo->hEnt.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
      {
        m_pInstance = v7->m_pInstance;
        if ( v7->m_pInstance != 0 && (*(m_pInstance->_vptr_IHandleEntity + 19))(v7->m_pInstance) >= 0 )
        {
          m_pEntity = m_pInstance->m_pEntity;
          if ( m_pEntity == 0 )
            goto LABEL_51;
          LOWORD(v18) = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            LOWORD(v18) = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          v18 = v18;
          if ( ((((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v18 & 0x7FFF) == 0xFFFFFFFF )
LABEL_51:
            v18 = 0x7FFF;
          CFmtStrN<256,false>::CFmtStrN(&v34, "%s:  %d | ", "SV", v18);
          v19 = __dynamic_cast(pSave, &`typeinfo for'ISave, &`typeinfo for'CSave, 0);
          flush.m_sScopeName.m_pString = 0;
          flush.m_pSave = v19;
          CUtlString::Set(&flush.m_sScopeName, v34.m_szBuf);
          m_nFlushScopeDepth = flush.m_pSave->m_nFlushScopeDepth;
          flush.m_pSave->m_nFlushScopeDepth = m_nFlushScopeDepth + 1;
          if ( m_nFlushScopeDepth == 0 )
            (*(flush.m_pSave->_vptr_ISave + 74))(flush.m_pSave, "");
          CGameSaveRestoreInfo::SetCurrentEntityContext(v4, m_pInstance);
          (*(m_pInstance->_vptr_IHandleEntity + 15))(m_pInstance, pSave);
          CGameSaveRestoreInfo::SetCurrentEntityContext(v4, 0);
          if ( flush.m_pSave != 0 )
          {
            v21 = flush.m_pSave->m_nFlushScopeDepth;
            flush.m_pSave->m_nFlushScopeDepth = v21 - 1;
            if ( v21 == 1 )
            {
              v32 = *(flush.m_pSave->_vptr_ISave + 74);
              v30 = CUtlString::Get(&flush.m_sScopeName);
              v32(flush.m_pSave, v30);
            }
          }
          if ( flush.m_sScopeName.m_pString != 0 )
            CUtlString::FreeMemoryBlock(&flush.m_sScopeName);
          v22 = (*(pSave->_vptr_ISave + 3))(pSave);
          v23 = LOG_SAVERESTORE;
          EntityInfo->size = v22 - EntityInfo->location;
          if ( LoggingSystem_IsChannelEnabled(v23, 0) != 0 )
          {
            v24 = m_pInstance->m_pEntity;
            m_pAsString = "";
            if ( v24->m_name.u.m_Id != 0 )
              m_pAsString = v24->m_name.u.m_pAsString;
            v26 = "";
            if ( v24->m_designerName.u.m_Id != 0 )
              v26 = v24->m_designerName.u.m_pAsString;
            LOWORD(v27) = 0x7FFF;
            if ( v24->m_EHandle.m_Index != -1 )
              LOWORD(v27) = v24->m_EHandle.m_Index & 0x7FFF;
            v27 = v27;
            if ( ((((v24->m_EHandle.m_Index >> 15) - (v24->m_flags & 1)) << 15) | v27 & 0x7FFF) == 0xFFFFFFFF )
              v27 = 0x7FFF;
            LODWORD(v31) = EntityInfo->size;
            LoggingSystem_Log(LOG_SAVERESTORE, 0, "%s:  save %d %s [%s] %d bytes\n", "SV", v27, v26, m_pAsString, v31);
          }
          EntityInfo->classname.u.m_Id = m_pInstance->m_pEntity->m_designerName.u.m_Id;
          EntityInfo->globalname.u.m_Id = m_pInstance[8]._vptr_IHandleEntity;
          EntityInfo->landmarkModelSpace = vec3_origin;
          v28 = m_pInstance->m_pEntity;
          if ( v28 == 0 )
            goto LABEL_50;
          LOWORD(v29.m_Data) = 0x7FFF;
          if ( v28->m_EHandle.m_Index != -1 )
            LOWORD(v29.m_Data) = v28->m_EHandle.m_Index & 0x7FFF;
          if ( ((((v28->m_EHandle.m_Index >> 15) - (v28->m_flags & 1)) << 15) | v29.m_Data & 0x7FFF) == 0xFFFFFFFF )
LABEL_50:
            v29.m_Data = 0x7FFF;
          else
            v29.m_Data = LOWORD(v29.m_Data);
          if ( IsPlayerIndex(v29) )
            EntityInfo->flags |= 0x80000000;
          goto LABEL_15;
        }
      }
    }
    else
    {
      m_pInstance = 0;
    }
    if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 0) != 0 )
    {
      v8 = m_pInstance->m_pEntity;
      v9 = "";
      if ( v8->m_name.u.m_Id != 0 )
        v9 = v8->m_name.u.m_pAsString;
      v10 = "";
      if ( v8->m_designerName.u.m_Id != 0 )
        v10 = v8->m_designerName.u.m_pAsString;
      v11 = 0x7FFF;
      if ( v8->m_EHandle.m_Index != -1 )
        v11 = v8->m_EHandle.m_Index & 0x7FFF;
      v12 = 0x7FFF;
      if ( ((((v8->m_EHandle.m_Index >> 15) - (v8->m_flags & 1)) << 15) | v11 & 0x7FFF) != 0xFFFFFFFF )
        v12 = v11;
      LoggingSystem_Log(LOG_SAVERESTORE, 0, "%s:  skip %d %s [%s] FCAP_DONT_SAVE\n", "SV", v12, v10, v9);
    }
LABEL_15:
    ++v2;
  }
}


// CEntitySaveRestoreBlockHandler::WriteSaveHeaders  (line 181, @0x00000000020c43d0, libserver.so)  // inlines: CSaveFlushScope, CUtlString, Release, operator char const*, ~CSaveFlushScope, ~CUtlString
// calls: CFmtStrN<256, false>::CFmtStrN, __dynamic_cast, CUtlString::Set, CGameSaveRestoreInfo::NumEntities, CGameSaveRestoreInfo::GetEntityInfo, CUtlString::FreeMemoryBlock, CUtlString::Get, _Unwind_Resume, CSaveFlushScope::~CSaveFlushScope, __stack_chk_fail
// strings: "%s | ", "ETABLE"
// globals: `typeinfo for'CSave, `typeinfo for'ISave, entitytable_t::m_DataMap
void __fastcall CEntitySaveRestoreBlockHandler::WriteSaveHeaders(
        CEntitySaveRestoreBlockHandler *const this,
        ISave *pSave)
{
  const char *v3; // rax
  CSave *v4; // rax
  CSave *m_pSave; // rdi
  int m_nFlushScopeDepth; // eax
  int i; // ebx
  unsigned int dataNumFields; // r15d
  typedescription_t *dataDesc; // r14
  void (__fastcall *v10)(ISave *, const char *, entitytable_t *, _QWORD, typedescription_t *, _QWORD); // r13
  entitytable_t *EntityInfo; // rax
  CSave *v12; // rax
  int v13; // ecx
  void (__fastcall *v14)(CSave *, const char *); // rbx
  const char *v15; // rax
  CGameSaveRestoreInfo *pSaveData; // [rsp+8h] [rbp-178h]
  int nEntities; // [rsp+1Ch] [rbp-164h] BYREF
  CSaveFlushScope guard; // [rsp+20h] [rbp-160h] BYREF
  CFmtStrN<256,false> v19; // [rsp+30h] [rbp-150h] BYREF
  unsigned __int64 v20; // [rsp+148h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  v3 = this->GetBlockName();
  CFmtStrN<256,false>::CFmtStrN(&v19, "%s | ", v3);
  if ( pSave != 0 )
    v4 = __dynamic_cast(pSave, &`typeinfo for'ISave, &`typeinfo for'CSave, 0);
  else
    v4 = 0;
  guard.m_pSave = v4;
  guard.m_sScopeName.m_pString = 0;
  CUtlString::Set(&guard.m_sScopeName, v19.m_szBuf);
  m_pSave = guard.m_pSave;
  m_nFlushScopeDepth = guard.m_pSave->m_nFlushScopeDepth;
  guard.m_pSave->m_nFlushScopeDepth = m_nFlushScopeDepth + 1;
  if ( m_nFlushScopeDepth == 0 )
    (*(m_pSave->_vptr_ISave + 74))(m_pSave, "");
  pSaveData = (*(pSave->_vptr_ISave + 73))(pSave);
  nEntities = CGameSaveRestoreInfo::NumEntities(pSaveData);
  (*(pSave->_vptr_ISave + 11))(pSave, &nEntities, 1);
  for ( i = 0; nEntities > i; ++i )
  {
    dataNumFields = entitytable_t::m_DataMap.dataNumFields;
    dataDesc = entitytable_t::m_DataMap.dataDesc;
    v10 = *(pSave->_vptr_ISave + 6);
    EntityInfo = CGameSaveRestoreInfo::GetEntityInfo(pSaveData, i);
    v10(pSave, "ETABLE", EntityInfo, 0, dataDesc, dataNumFields);
  }
  v12 = guard.m_pSave;
  if ( guard.m_pSave != 0 )
  {
    v13 = guard.m_pSave->m_nFlushScopeDepth;
    guard.m_pSave->m_nFlushScopeDepth = v13 - 1;
    if ( v13 == 1 )
    {
      v14 = *(v12->_vptr_ISave + 74);
      v15 = CUtlString::Get(&guard.m_sScopeName);
      v14(guard.m_pSave, v15);
    }
    guard.m_pSave = 0;
  }
  if ( guard.m_sScopeName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&guard.m_sScopeName);
}


// CEntitySaveRestoreBlockHandler::ReadRestoreHeaders  (line 196, @0x000000000209d4c0, libserver.so)
// calls: CGameSaveRestoreInfo::InitEntityTable, CGameSaveRestoreInfo::GetEntityInfo, CGameSaveRestoreInfo::NumEntities
// strings: "ETABLE"
// globals: entitytable_t::m_DataMap
void __fastcall CEntitySaveRestoreBlockHandler::ReadRestoreHeaders(
        CEntitySaveRestoreBlockHandler *const this,
        IRestore *pRestore)
{
  int v3; // ebx
  int v4; // esi
  unsigned int dataNumFields; // r15d
  typedescription_t *dataDesc; // r14
  void (__fastcall *v7)(IRestore *, const char *, entitytable_t *, _QWORD, typedescription_t *, _QWORD); // r13
  entitytable_t *EntityInfo; // rax
  CGameSaveRestoreInfo *pSaveData; // [rsp+8h] [rbp-48h]
  int nEntities[13]; // [rsp+1Ch] [rbp-34h] BYREF

  v3 = 0;
  pSaveData = (*(pRestore->_vptr_IRestore + 51))(pRestore);
  (*(pRestore->_vptr_IRestore + 24))(pRestore, nEntities, 1, 0);
  CGameSaveRestoreInfo::InitEntityTable(pSaveData, nEntities[0]);
  while ( v3 < CGameSaveRestoreInfo::NumEntities(pSaveData) )
  {
    v4 = v3++;
    dataNumFields = entitytable_t::m_DataMap.dataNumFields;
    dataDesc = entitytable_t::m_DataMap.dataDesc;
    v7 = *(pRestore->_vptr_IRestore + 3);
    EntityInfo = CGameSaveRestoreInfo::GetEntityInfo(pSaveData, v4);
    v7(pRestore, "ETABLE", EntityInfo, 0, dataDesc, dataNumFields);
  }
}


// CEntitySaveRestoreBlockHandler::Restore  (line 215, @0x00000000020b47a0, libserver.so)  // inlines: CEntityHandle, GetClassNameAsCStr, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSaveRestore, GetSerialNumber, IndexToIdentity, Init, IsUsed, IsValid, LookupEntity, LookupEntityByIndex, Set, String, ToCStr, operator CEntityInstance*, operator=
// calls: CGameSaveRestoreInfo::NumEntities, CGameSaveRestoreInfo::GetEntityInfo, LoggingSystem_IsChannelEnabled, CEntitySystem::CreateEntity, IsPlayerIndex, LoggingSystem_Log, CBasePlayer::CreatePlayer, CEntitySaveRestoreBlockHandler::RestoreEntity, CEntitySystem::QueueDestroyEntity
// strings: "ENTITY IS NOT A PLAYER: %d\n", "SV", "%s:  restoring %d %s took %d bytes\n", "%s:  restoring world from save data\n", "%s:  CEntitySaveRestoreBlockHandler::Restore:  Player already exists\n"
// globals: CEntityHandle::gm_pEntityList, g_pGameEntitySystem
void __fastcall CEntitySaveRestoreBlockHandler::Restore(
        CEntitySaveRestoreBlockHandler *const this,
        IRestore *pRestore,
        SpawnGroupHandle_t handle,
        bool bCreatePlayers)
{
  int v4; // r12d
  CGameSaveRestoreInfo *v5; // rbx
  entitytable_t *EntityInfo; // rax
  bool v7; // zf
  entitytable_t *v8; // r15
  int v9; // eax
  const char *v10; // rdx
  CBasePlayer *Entity; // r13
  int m_Data; // eax
  CEntityIdentity *v13; // rcx
  const char *v14; // rdi
  CEntityIdentity *m_pEntity; // rdx
  int v16; // eax
  __int16 v17; // cx
  CEntityIdentity *v18; // rax
  int v19; // ecx
  const char *v20; // r9
  CEntityIdentity *v21; // rax
  int i; // r12d
  entitytable_t *v23; // r15
  uint32 m_Index; // eax
  CEntityIdentity *v25; // rdx
  CEntityIdentity *v26; // rdx
  CEntityInstance *m_pInstance; // r14
  const char *m_pAsString; // rdx
  CEntityIdentity *v29; // rcx
  CEntityIdentity *v30; // rdx
  CEntityIdentity *v31; // rdx

  v4 = 0;
  v5 = (*(pRestore->_vptr_IRestore + 51))(pRestore);
  if ( CGameSaveRestoreInfo::NumEntities(v5) > 0 )
  {
    while ( 1 )
    {
      EntityInfo = CGameSaveRestoreInfo::GetEntityInfo(v5, v4);
      v7 = EntityInfo->classname.u.m_Id == 0;
      v8 = EntityInfo;
      EntityInfo->restoreentityindex.m_Data = -1;
      EntityInfo->hEnt.m_Index = -1;
      if ( !v7 && EntityInfo->size != 0 && (EntityInfo->flags & 0x40000000) == 0 )
        break;
LABEL_38:
      if ( ++v4 >= CGameSaveRestoreInfo::NumEntities(v5) )
        goto LABEL_39;
    }
    if ( EntityInfo->edictindex.m_Data != 0 )
    {
      if ( !IsPlayerIndex(EntityInfo->edictindex) )
      {
        m_pAsString = "";
        if ( v8->classname.u.m_Id != 0 )
          m_pAsString = v8->classname.u.m_pAsString;
        Entity = CEntitySystem::CreateEntity(
                   g_pEntitySystem,
                   handle,
                   m_pAsString,
                   EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT,
                   -1,
                   -1,
                   0,
                   0);
        if ( Entity != 0 )
          goto LABEL_23;
        goto LABEL_53;
      }
      if ( v8->flags >= 0 && LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 2) != 0 )
        LoggingSystem_Log(LOG_SAVERESTORE, 2, "ENTITY IS NOT A PLAYER: %d\n", v4);
      m_Data = v8->edictindex.m_Data;
      if ( m_Data <= 0x7FFE
        && (v13 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[m_Data >> 9]) != 0
        && (v31 = &v13[m_Data & 0x1FF]) != 0
        && (v31->m_EHandle.m_Index & 0x7FFF) == m_Data
        || !bCreatePlayers )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 2) != 0 )
          LoggingSystem_Log(
            LOG_SAVERESTORE,
            2,
            "%s:  CEntitySaveRestoreBlockHandler::Restore:  Player already exists\n",
            "SV");
        goto LABEL_53;
      }
      v14 = "";
      if ( v8->classname.u.m_Id != 0 )
        v14 = v8->classname.u.m_pAsString;
      Entity = CBasePlayer::CreatePlayer(v14, v8->edictindex);
    }
    else
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 1) != 0 )
        LoggingSystem_Log(LOG_SAVERESTORE, 1, "%s:  restoring world from save data\n", "SV");
      v9 = v8->edictindex.m_Data;
      if ( v9 > 0x7FFE
        || (v29 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v9 >> 9]) == 0
        || (v30 = &v29[v9 & 0x1FF]) == 0
        || v9 != (v30->m_EHandle.m_Index & 0x7FFF)
        || (Entity = v30->m_pInstance, v30->m_pInstance == 0) )
      {
        v10 = "";
        if ( v8->classname.u.m_Id != 0 )
          v10 = v8->classname.u.m_pAsString;
        Entity = CEntitySystem::CreateEntity(
                   g_pEntitySystem,
                   handle,
                   v10,
                   EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT,
                   -1,
                   -1,
                   0,
                   0);
      }
      (*(pRestore->_vptr_IRestore + 1))(pRestore, v8->location);
      if ( CEntitySaveRestoreBlockHandler::RestoreEntity(this, Entity, pRestore, v8, handle) < 0 )
      {
        v8->hEnt.m_Index = -1;
        v8->restoreentityindex.m_Data = -1;
        CEntitySystem::QueueDestroyEntity(g_pEntitySystem, Entity);
      }
      else
      {
        (*(**(&stru_1A0B8.r_offset + g_pGameEntitySystem) + 48LL))(
          *(&stru_1A0B8.r_offset + g_pGameEntitySystem),
          Entity);
      }
    }
    if ( Entity != 0 )
    {
LABEL_23:
      m_pEntity = Entity->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v16 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v17 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(v8->hEnt.m_Index) = v17 | v8->hEnt.m_Index & 0x8000;
        v8->hEnt.m_Index = (v16 << 15) | v8->hEnt.m_Index & 0x7FFF;
      }
      else
      {
        v8->hEnt.m_Index = -1;
      }
      v18 = Entity->m_pEntity;
      if ( v18 == 0 )
        goto LABEL_54;
      LOWORD(v19) = 0x7FFF;
      if ( v18->m_EHandle.m_Index != -1 )
        LOWORD(v19) = v18->m_EHandle.m_Index & 0x7FFF;
      if ( ((((v18->m_EHandle.m_Index >> 15) - (v18->m_flags & 1)) << 15) | v19 & 0x7FFF) == 0xFFFFFFFF )
LABEL_54:
        v19 = 0x7FFF;
      else
        v19 = v19;
      v8->restoreentityindex.m_Data = v19;
      goto LABEL_33;
    }
LABEL_53:
    v8->hEnt.m_Index = -1;
    Entity = 0;
    v8->restoreentityindex.m_Data = -1;
LABEL_33:
    if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 0) != 0 )
    {
      v20 = "null";
      if ( Entity != 0 )
      {
        v21 = Entity->m_pEntity;
        v20 = "";
        if ( v21->m_designerName.u.m_Id != 0 )
          v20 = v21->m_designerName.u.m_pAsString;
      }
      LoggingSystem_Log(
        LOG_SAVERESTORE,
        0,
        "%s:  restoring %d %s took %d bytes\n",
        "SV",
        v8->restoreentityindex.m_Data,
        v20,
        v8->size);
    }
    goto LABEL_38;
  }
LABEL_39:
  for ( i = 0; i < CGameSaveRestoreInfo::NumEntities(v5); ++i )
  {
    v23 = CGameSaveRestoreInfo::GetEntityInfo(v5, i);
    if ( v23->edictindex.m_Data != 0 )
    {
      m_Index = v23->hEnt.m_Index;
      if ( m_Index + 2 > 1 )
      {
        v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v23->hEnt.m_Index) >> 9) & 0x3F];
        if ( v25 != 0 )
        {
          v26 = &v25[v23->hEnt.m_Index & 0x1FF];
          if ( v26 != 0 && m_Index == v26->m_EHandle.m_Index )
          {
            m_pInstance = v26->m_pInstance;
            if ( v26->m_pInstance != 0 )
            {
              (*(pRestore->_vptr_IRestore + 1))(pRestore, v23->location);
              if ( CEntitySaveRestoreBlockHandler::RestoreEntity(this, m_pInstance, pRestore, v23, handle) < 0 )
              {
                v23->hEnt.m_Index = -1;
                v23->restoreentityindex.m_Data = -1;
                CEntitySystem::QueueDestroyEntity(g_pEntitySystem, m_pInstance);
              }
              else
              {
                (*(**(&stru_1A0B8.r_offset + g_pGameEntitySystem) + 48LL))(
                  *(&stru_1A0B8.r_offset + g_pGameEntitySystem),
                  m_pInstance);
              }
            }
          }
        }
      }
    }
  }
}


// CEntitySaveRestoreBlockHandler::SaveEntityOnTable  (line 406, @0x00000000020b3d00, libserver.so)  // inlines: CEntityHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Init, Set, operator=
// calls: CGameSaveRestoreInfo::GetEntityInfo
// callers: CEntitySaveRestoreBlockHandler::SaveInitEntities
void __fastcall CEntitySaveRestoreBlockHandler::SaveEntityOnTable(
        CEntitySaveRestoreBlockHandler *const this,
        CEntityInstance *pEntity,
        CSaveRestoreData *pSaveData,
        int *const iSlot)
{
  entitytable_t *EntityInfo; // rbx
  int32 v7; // eax
  CEntityIdentity *m_pEntity; // rax
  int v9; // ecx
  CEntityIdentity *v10; // rax
  int v11; // edx
  __int16 v12; // cx

  EntityInfo = CGameSaveRestoreInfo::GetEntityInfo(&pSaveData->CGameSaveRestoreInfo, *iSlot);
  EntityInfo->id = *iSlot;
  v7 = (*(pEntity->_vptr_IHandleEntity + 20))(pEntity);
  EntityInfo->restoreentityindex.m_Data = -1;
  EntityInfo->edictindex.m_Data = v7;
  m_pEntity = pEntity->m_pEntity;
  if ( m_pEntity == 0 )
    goto LABEL_11;
  LOWORD(v9) = 0x7FFF;
  if ( m_pEntity->m_EHandle.m_Index != -1 )
    LOWORD(v9) = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  if ( ((((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v9 & 0x7FFF) == 0xFFFFFFFF )
LABEL_11:
    v9 = 0x7FFF;
  else
    v9 = v9;
  EntityInfo->saveentityindex.m_Data = v9;
  v10 = pEntity->m_pEntity;
  if ( v10 != 0 )
  {
    v11 = (v10->m_EHandle.m_Index >> 15) - (v10->m_flags & 1);
    if ( v10->m_EHandle.m_Index == -1 )
      v12 = 0x7FFF;
    else
      v12 = v10->m_EHandle.m_Index & 0x7FFF;
    LOWORD(EntityInfo->hEnt.m_Index) = v12 | EntityInfo->hEnt.m_Index & 0x8000;
    EntityInfo->hEnt.m_Index = (v11 << 15) | EntityInfo->hEnt.m_Index & 0x7FFF;
  }
  else
  {
    EntityInfo->hEnt.m_Index = -1;
  }
  EntityInfo->flags = 0;
  EntityInfo->location = 0;
  EntityInfo->size = 0;
  EntityInfo->classname.u.m_Id = 0;
  ++*iSlot;
}


// CEntitySaveRestoreBlockHandler::SaveInitEntities  (line 426, @0x00000000020b3e30, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator[]
// calls: CGameSaveRestoreInfo::InitEntityTable, CEntitySaveRestoreBlockHandler::SaveEntityOnTable, CGameSaveRestoreInfo::BuildEntityHash, CGameSaveRestoreInfo::NumEntities
// callers: CEntitySaveRestoreBlockHandler::PreSave
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CEntitySaveRestoreBlockHandler::SaveInitEntities(
        CEntitySaveRestoreBlockHandler *const this,
        CSaveRestoreData *pSaveData,
        const CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *const list)
{
  int m_Size; // r15d
  __int64 v7; // r15
  int v8; // ebx
  CEntityInstance *m_pInstance; // rsi
  CEntityHandle *v10; // rdi
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  int v13; // eax
  CGameSaveRestoreInfo *v15; // [rsp+0h] [rbp-50h]
  int slot[13]; // [rsp+1Ch] [rbp-34h] BYREF

  v15 = &pSaveData->CGameSaveRestoreInfo;
  CGameSaveRestoreInfo::InitEntityTable(&pSaveData->CGameSaveRestoreInfo, list->m_Size);
  m_Size = list->m_Size;
  slot[0] = 0;
  if ( m_Size > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      m_pInstance = 0;
      v10 = &list->m_Memory.m_pMemory[v7];
      if ( v10->m_Index + 2 > 1 )
      {
        v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_Index) >> 9) & 0x3F];
        if ( v11 != 0 )
        {
          v12 = &v11[v10->m_Index & 0x1FF];
          if ( v12 != 0 && v10->m_Index == v12->m_EHandle.m_Index )
            m_pInstance = v12->m_pInstance;
        }
      }
      ++v8;
      ++v7;
      CEntitySaveRestoreBlockHandler::SaveEntityOnTable(this, m_pInstance, pSaveData, slot);
    }
    while ( list->m_Size > v8 );
  }
  CGameSaveRestoreInfo::BuildEntityHash(v15);
  v13 = CGameSaveRestoreInfo::NumEntities(v15);
  return v13 == slot[0];
}


// CEntitySaveRestoreBlockHandler::BuildGlobalEntityDatabase  (line 453, @0x00000000020ee330, libserver.so)  // inlines: CEntityHandle, FirstEnt, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, Init
// calls: CUtlDict<CEntityHandle, int>::Purge, CGameEntitySystem::NextEnt, CUtlDict<CEntityHandle, int>::Insert
// callers: CreateEntityTransitionList
// globals: g_pGameEntitySystem
void __fastcall CEntitySaveRestoreBlockHandler::BuildGlobalEntityDatabase(CEntitySaveRestoreBlockHandler *const this)
{
  CUtlDict<CEntityHandle,int> *p_m_GlobalEntityDict; // r12
  CBaseEntity *i; // rbx
  CEntityIdentity *m_pEntity; // rdx
  int v5; // eax
  __int16 v6; // cx
  uint32 v7; // eax
  CEntityIdentity *j; // rbx
  CEntityInstance *m_pInstance; // rax
  CEntityIdentity *v10; // rcx
  int v11; // edx
  __int16 v12; // si
  uint32 v13; // edx
  CEntityHandle element; // [rsp+0h] [rbp-30h] BYREF

  p_m_GlobalEntityDict = &this->m_GlobalEntityDict;
  CUtlDict<CEntityHandle,int>::Purge(&this->m_GlobalEntityDict);
  for ( i = CGameEntitySystem::NextEnt(g_pGameEntitySystem, 0);
        i != 0;
        i = CGameEntitySystem::NextEnt(g_pGameEntitySystem, i) )
  {
    if ( i->m_iGlobalname.u.m_Id != 0 )
    {
      m_pEntity = i->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v5 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v6 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(element.m_Index) = v6 | element.m_Index & 0x8000;
        v7 = (v5 << 15) | element.m_Index & 0x7FFF;
      }
      else
      {
        v7 = -1;
      }
      element.m_Index = v7;
      CUtlDict<CEntityHandle,int>::Insert(p_m_GlobalEntityDict, i->m_iGlobalname.u.m_pAsString, &element);
    }
  }
  for ( j = g_pEntitySystem->m_EntityList.m_dormantList.m_pHead; j != 0; j = j->m_pNext )
  {
    m_pInstance = j->m_pInstance;
    if ( j->m_pInstance != 0 && m_pInstance[8]._vptr_IHandleEntity != 0 )
    {
      v10 = m_pInstance->m_pEntity;
      if ( v10 != 0 )
      {
        v11 = (v10->m_EHandle.m_Index >> 15) - (v10->m_flags & 1);
        v12 = 0x7FFF;
        if ( v10->m_EHandle.m_Index != -1 )
          v12 = v10->m_EHandle.m_Index & 0x7FFF;
        LOWORD(element.m_Index) = v12 | element.m_Index & 0x8000;
        v13 = (v11 << 15) | element.m_Index & 0x7FFF;
      }
      else
      {
        v13 = -1;
      }
      element.m_Index = v13;
      CUtlDict<CEntityHandle,int>::Insert(p_m_GlobalEntityDict, m_pInstance[8]._vptr_IHandleEntity, &element);
    }
  }
  this->m_bGlobalEntityDatabaseValid = 1;
}


// CEntitySaveRestoreBlockHandler::ReleaseGlobalEntityDatabase  (line 479, @0x00000000020e05c0, libserver.so)
// calls: CUtlDict<CEntityHandle, int>::Purge
void __fastcall CEntitySaveRestoreBlockHandler::ReleaseGlobalEntityDatabase(CEntitySaveRestoreBlockHandler *const this)
{
  CUtlDict<CEntityHandle,int>::Purge(&this->m_GlobalEntityDict);
  this->m_bGlobalEntityDatabaseValid = 0;
}


// CEntitySaveRestoreBlockHandler::FindGlobalEntity  (line 488, @0x00000000020b40b0, libserver.so)  // inlines: CEntityHandle, ClassMatches, Element, FClassnameIs, Find, GetClassNameAsCStr, GetClassname, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LeftChild, LookupEntity, Node_t, RightChild, String, ToCStr, operator CBaseEntity*, operator(), operator[]
// calls: CEntityIdentity::ClassMatches, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// callers: CEntitySaveRestoreBlockHandler::RestoreGlobalEntity
// strings: "SV", "%s:  global entity found %s, wrong class %s [expects class %s]\n"
// globals: CEntityHandle::gm_pEntityList
CEntityInstance *__fastcall CEntitySaveRestoreBlockHandler::FindGlobalEntity(
        CEntitySaveRestoreBlockHandler *const this,
        string_t classname,
        string_t globalname)
{
  const char *v5; // rax
  CEntityInstance *m_pInstance; // rbx
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,CEntityHandle,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  __int64 v10; // r15
  UtlRBTreeNode_t<CUtlMap<char const*,CEntityHandle,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v11; // rdx
  uint32 m_Index; // eax
  unsigned __int16 v13; // cx
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  const char *v16; // rsi
  const char *v17; // rax
  CEntityIdentity *m_pEntity; // rdx
  const char *m_pAsString; // r9
  const char *v20; // r8
  const char *v22; // [rsp+10h] [rbp-40h] BYREF
  int v23; // [rsp+18h] [rbp-38h]

  if ( *globalname.u.m_Id != 0 )
    v5 = *globalname.u.m_pAsString;
  else
    v5 = "";
  m_Root = this->m_GlobalEntityDict.m_Elements.m_Tree.m_Root;
  v23 = -1;
  v22 = v5;
  if ( m_Root == -1 )
    return 0;
  m_pMemory = this->m_GlobalEntityDict.m_Elements.m_Tree.m_Elements.m_pMemory;
  while ( 1 )
  {
    v10 = m_Root;
    if ( !this->m_GlobalEntityDict.m_Elements.m_Tree.m_LessFunc.m_LessFunc(&v22, &m_pMemory[v10].m_Data) )
      break;
    m_pMemory = this->m_GlobalEntityDict.m_Elements.m_Tree.m_Elements.m_pMemory;
    m_Root = m_pMemory[m_Root].m_Left;
LABEL_9:
    if ( m_Root == -1 )
      return 0;
  }
  if ( this->m_GlobalEntityDict.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
         &this->m_GlobalEntityDict.m_Elements.m_Tree.m_Elements.m_pMemory[v10].m_Data,
         &v22) )
  {
    m_pMemory = this->m_GlobalEntityDict.m_Elements.m_Tree.m_Elements.m_pMemory;
    m_Root = m_pMemory[v10].m_Right;
    goto LABEL_9;
  }
  v11 = &this->m_GlobalEntityDict.m_Elements.m_Tree.m_Elements.m_pMemory[v10];
  m_Index = v11->m_Data.elem.m_Index;
  if ( m_Index + 2 <= 1 )
    return 0;
  v13 = v11->m_Data.elem.m_Index;
  v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v13 >> 9) & 0x3F];
  if ( v14 == 0 )
    return 0;
  v15 = &v14[v13 & 0x1FF];
  if ( v15 == 0 )
    return 0;
  if ( m_Index != v15->m_EHandle.m_Index )
    return 0;
  m_pInstance = v15->m_pInstance;
  if ( v15->m_pInstance == 0 )
    return 0;
  v16 = "";
  if ( *classname.u.m_Id != 0 )
    v16 = *classname.u.m_pAsString;
  if ( !CEntityIdentity::ClassMatches(m_pInstance->m_pEntity, v16) )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 2) != 0 )
    {
      v17 = "";
      if ( *classname.u.m_Id != 0 )
        v17 = *classname.u.m_pAsString;
      m_pEntity = m_pInstance->m_pEntity;
      m_pAsString = "";
      if ( m_pEntity->m_designerName.u.m_Id != 0 )
        m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
      v20 = "";
      if ( *globalname.u.m_Id != 0 )
        v20 = *globalname.u.m_pAsString;
      m_pInstance = 0;
      LoggingSystem_Log(
        LOG_SAVERESTORE,
        2,
        "%s:  global entity found %s, wrong class %s [expects class %s]\n",
        "SV",
        v20,
        m_pAsString,
        v17);
      return m_pInstance;
    }
    return 0;
  }
  return m_pInstance;
}


// CEntitySaveRestoreBlockHandler::DoRestoreEntity  (line 516, @0x00000000020b4290, libserver.so)  // inlines: CEntityHandle, CSaveRestoreCurrentEntityContext, GetClassNameAsCStr, GetEHandle, GetEntryIndex, GetSerialNumber, Init, Release, RemoveFlags, Set, String, operator=, ~CSaveRestoreCurrentEntityContext
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CGameSaveRestoreInfo::SetCurrentEntityContext, _Unwind_Resume
// callers: CEntitySaveRestoreBlockHandler::RestoreEntity, CEntitySaveRestoreBlockHandler::RestoreGlobalEntity
// strings: "SV", "%s:  onrestore %d %s\n"
bool __fastcall CEntitySaveRestoreBlockHandler::DoRestoreEntity(
        CEntitySaveRestoreBlockHandler *const this,
        CEntityInstance *pEntity,
        IRestore *pRestore,
        SpawnGroupHandle_t handle)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v7; // si
  CEntityIdentity *v8; // rax
  const char *m_pAsString; // r9
  __int64 v10; // r8
  CEntityIdentity *v11; // rax
  uint32 m_flags; // edx
  CGameSaveRestoreInfo *v13; // r13
  int hEntity; // [rsp+0h] [rbp-40h]

  hEntity = -1;
  if ( pEntity == 0 )
    return 0;
  m_pEntity = pEntity->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v7 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    hEntity = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v7 & 0x7FFF;
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 0) != 0 )
  {
    v8 = pEntity->m_pEntity;
    m_pAsString = "";
    if ( v8->m_designerName.u.m_Id != 0 )
      m_pAsString = v8->m_designerName.u.m_pAsString;
    LOWORD(v10) = 0x7FFF;
    if ( v8->m_EHandle.m_Index != -1 )
      LOWORD(v10) = v8->m_EHandle.m_Index & 0x7FFF;
    v10 = v10;
    if ( ((((v8->m_EHandle.m_Index >> 15) - (v8->m_flags & 1)) << 15) | v10 & 0x7FFF) == 0xFFFFFFFF )
      v10 = 0x7FFF;
    LoggingSystem_Log(LOG_SAVERESTORE, 0, "%s:  onrestore %d %s\n", "SV", v10, m_pAsString, hEntity);
  }
  v11 = pEntity->m_pEntity;
  m_flags = v11->m_flags;
  if ( (m_flags & 0x100) != 0 )
  {
    BYTE1(m_flags) &= ~1u;
    v11->m_flags = m_flags;
  }
  v13 = (*(pRestore->_vptr_IRestore + 51))(pRestore);
  CGameSaveRestoreInfo::SetCurrentEntityContext(v13, pEntity);
  (*(pEntity->_vptr_IHandleEntity + 16))(pEntity, pRestore);
  CGameSaveRestoreInfo::SetCurrentEntityContext(v13, 0);
  return hEntity != -1;
}


// CEntitySaveRestoreBlockHandler::RestoreEntity  (line 540, @0x00000000020b4440, libserver.so)  // inlines: CEntityHandle, CUtlSymbolLarge, FStrEq, GetClassNameAsCStr, GetClassname, GetEHandle, GetEntryIndex, GetSerialNumber, GlobalEntity_Add, GlobalEntity_GetIndex, Init, SetInPVS, String, ToCStr, _V_strcmp, operator!=
// calls: CEntitySaveRestoreBlockHandler::DoRestoreEntity, GlobalEntity_GetIndex, GlobalEntity_GetState, GlobalEntity_GetMap, strcmp, GlobalEntity_Add, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CEntitySystem::SetInPVS
// callers: CEntitySaveRestoreBlockHandler::Restore, CreateEntityTransitionList
// strings: "%s:  added global entity %d %s (%s)\n", "SV", "%s:  removing GLOBAL_DEAD global entity %d %s (%s)\n", "%s:  marking global entity dormant (current:'%s' vs last active in:'%s') %d %s (%s)\n"
// globals: g_pGameEntitySystem
int __fastcall CEntitySaveRestoreBlockHandler::RestoreEntity(
        CEntitySaveRestoreBlockHandler *const this,
        CEntityInstance *pEntity,
        IRestore *pRestore,
        entitytable_t *pEntInfo,
        SpawnGroupHandle_t handle)
{
  bool v6; // al
  int v7; // edx
  int (**vptr_IHandleEntity)(...); // rdi
  int Index; // eax
  int v10; // r12d
  const char *Map; // rax
  const char *mapname; // rdi
  int (**v14)(...); // r12
  const char *v15; // rdi
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // r9
  unsigned __int16 v18; // cx
  __int64 v19; // r8
  char IsChannelEnabled; // al
  int (**v21)(...); // rsi
  CEntityIdentity *v22; // rax
  const char *v23; // r9
  unsigned __int16 v24; // cx
  __int64 v25; // r8
  int (**v26)(...); // rsi
  CEntityIdentity *v27; // rax
  const char *v28; // r15
  unsigned __int16 v29; // cx
  int v30; // edx
  const char *v31; // rax
  const char *v32; // [rsp+20h] [rbp-50h]
  int v33; // [rsp+2Ch] [rbp-44h]
  SetInPVSInfo_t pInfo; // [rsp+30h] [rbp-40h] BYREF

  v6 = CEntitySaveRestoreBlockHandler::DoRestoreEntity(this, pEntity, pRestore, handle);
  v7 = 0;
  if ( v6 && pEntity != 0 )
  {
    vptr_IHandleEntity = pEntity[8]._vptr_IHandleEntity;
    if ( vptr_IHandleEntity != 0 )
    {
      Index = GlobalEntity_GetIndex(vptr_IHandleEntity);
      v10 = Index;
      if ( Index < 0 )
      {
        v14 = "";
        v15 = pEntity[8]._vptr_IHandleEntity;
        if ( v15 == 0 )
          v15 = "";
        GlobalEntity_Add(v15, gpGlobals->mapname, GLOBALESTATE::GLOBAL_ON);
        if ( LoggingSystem_IsChannelEnabled(LOG_GLOBALSTATE, 0) == 0 )
          return 0;
        if ( pEntity[8]._vptr_IHandleEntity != 0 )
          v14 = pEntity[8]._vptr_IHandleEntity;
        m_pEntity = pEntity->m_pEntity;
        m_pAsString = "";
        if ( m_pEntity->m_designerName.u.m_Id != 0 )
          m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
        v18 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v19 = 0x7FFF;
        if ( ((((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v18 & 0x7FFF) != 0xFFFFFFFF )
          v19 = v18;
        LoggingSystem_Log(LOG_GLOBALSTATE, 0, "%s:  added global entity %d %s (%s)\n", "SV", v19, m_pAsString, v14);
        return 0;
      }
      else if ( GlobalEntity_GetState(Index) == GLOBALESTATE::GLOBAL_DEAD )
      {
        IsChannelEnabled = LoggingSystem_IsChannelEnabled(LOG_GLOBALSTATE, 0);
        v7 = -1;
        if ( IsChannelEnabled != 0 )
        {
          v21 = "";
          if ( pEntity[8]._vptr_IHandleEntity != 0 )
            v21 = pEntity[8]._vptr_IHandleEntity;
          v22 = pEntity->m_pEntity;
          v23 = "";
          if ( v22->m_designerName.u.m_Id != 0 )
            v23 = v22->m_designerName.u.m_pAsString;
          v24 = 0x7FFF;
          if ( v22->m_EHandle.m_Index != -1 )
            v24 = v22->m_EHandle.m_Index & 0x7FFF;
          v25 = 0x7FFF;
          if ( ((((v22->m_EHandle.m_Index >> 15) - (v22->m_flags & 1)) << 15) | v24 & 0x7FFF) != 0xFFFFFFFF )
            v25 = v24;
          LoggingSystem_Log(
            LOG_GLOBALSTATE,
            0,
            "%s:  removing GLOBAL_DEAD global entity %d %s (%s)\n",
            "SV",
            v25,
            v23,
            v21);
          return -1;
        }
      }
      else
      {
        Map = GlobalEntity_GetMap(v10);
        mapname = gpGlobals->mapname;
        if ( Map == mapname || strcmp(mapname, Map) == 0 || SLOBYTE(pEntity->m_pEntity->m_flags) < 0 )
          return 0;
        if ( LoggingSystem_IsChannelEnabled(LOG_GLOBALSTATE, 0) != 0 )
        {
          v26 = "";
          if ( pEntity[8]._vptr_IHandleEntity != 0 )
            v26 = pEntity[8]._vptr_IHandleEntity;
          v27 = pEntity->m_pEntity;
          v28 = "";
          if ( v27->m_designerName.u.m_Id != 0 )
            v28 = v27->m_designerName.u.m_pAsString;
          v29 = 0x7FFF;
          if ( v27->m_EHandle.m_Index != -1 )
            v29 = v27->m_EHandle.m_Index & 0x7FFF;
          v32 = v26;
          v30 = 0x7FFF;
          LODWORD(pInfo.m_pEntity) = (((v27->m_EHandle.m_Index >> 15) - (v27->m_flags & 1)) << 15) | v29 & 0x7FFF;
          if ( LODWORD(pInfo.m_pEntity) != -1 )
            v30 = v29;
          v33 = v30;
          v31 = GlobalEntity_GetMap(v10);
          LoggingSystem_Log(
            LOG_GLOBALSTATE,
            0,
            "%s:  marking global entity dormant (current:'%s' vs last active in:'%s') %d %s (%s)\n",
            "SV",
            gpGlobals->mapname,
            v31,
            v33,
            v28,
            v32);
        }
        pInfo.m_pEntity = pEntity;
        pInfo.m_bInPVS = 0;
        CEntitySystem::SetInPVS(g_pGameEntitySystem, 1, &pInfo);
        return 0;
      }
    }
  }
  return v7;
}


// CEntitySaveRestoreBlockHandler::RestoreGlobalEntity  (line 587, @0x00000000020c3890, libserver.so)  // inlines: CEntityHandle, CUtlSymbolLarge, FStrEq, GetClassNameAsCStr, GetEHandle, GetEntryIndex, GetSerialNumber, GlobalEntity_GetIndex, Init, Purge, RemoveAll, Set, SetGlobalMode, SetInPVS, String, ToCStr, _V_strcmp, operator char const*, operator=, ~CRestore, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CRestore::CRestore, GlobalEntity_GetIndex, GlobalEntity_GetMap, CUtlString::Get, strcmp, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CEntitySaveRestoreBlockHandler::FindGlobalEntity, CEntitySystem::QueueDestroyEntity, GlobalEntity_SetMap, CEntitySaveRestoreBlockHandler::DoRestoreEntity, CUtlMemory<int, int>::Purge (15 total)
// callers: CreateEntityTransitionList
// strings: "SV", "%s:  global entity ignored, not using same map (current:'%s' vs last active in:'%s') with, "%s:  global entity overlay %s with %d %s (%s), discarding %d\n", "%s:  no match for global entity (%s) found in destination level\n"
// globals: g_pGameEntitySystem
int __fastcall CEntitySaveRestoreBlockHandler::RestoreGlobalEntity(
        CEntitySaveRestoreBlockHandler *const this,
        CEntityInstance *pEntity,
        CSaveRestoreData *pSaveData,
        entitytable_t *pEntInfo,
        SpawnGroupHandle_t handle)
{
  char *m_Id; // r12
  const char *v8; // rdi
  const char *m_pAsString; // r14
  int Index; // eax
  const char *Map; // r13
  const char *v12; // rax
  CEntityIdentity *m_pEntity; // rax
  int v14; // ebx
  const char *v15; // rax
  int result; // eax
  CEntityInstance *GlobalEntity; // r13
  CEntityIdentity *v18; // rax
  int v19; // edx
  unsigned __int16 v20; // cx
  int v21; // edi
  CEntityIdentity *v22; // rax
  int v23; // r9d
  int v24; // edx
  const char *v25; // r8
  CEntityIdentity *v26; // rdx
  int v27; // eax
  __int16 v28; // cx
  const char *v29; // r8
  const CUtlString *p_m_sCurrentMapName; // [rsp+20h] [rbp-C0h]
  int globalIndex; // [rsp+34h] [rbp-ACh]
  int pEntityb; // [rsp+48h] [rbp-98h]
  string_t v36; // [rsp+50h] [rbp-90h] BYREF
  SetInPVSInfo_t v37; // [rsp+60h] [rbp-80h] BYREF
  CRestore restoreHelper; // [rsp+70h] [rbp-70h] BYREF

  CRestore::CRestore(&restoreHelper, pSaveData);
  m_Id = pEntInfo->globalname.u.m_Id;
  v8 = "";
  m_pAsString = pEntInfo->classname.u.m_pAsString;
  if ( m_Id != 0 )
    v8 = pEntInfo->globalname.u.m_pAsString;
  Index = GlobalEntity_GetIndex(v8);
  globalIndex = Index;
  if ( Index < 0 )
    goto LABEL_17;
  Map = GlobalEntity_GetMap(Index);
  p_m_sCurrentMapName = &pSaveData->m_levelInfo.m_sCurrentMapName;
  v12 = CUtlString::Get(&pSaveData->m_levelInfo.m_sCurrentMapName);
  if ( Map != v12 && strcmp(v12, Map) != 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GLOBALSTATE, 0) != 0 )
    {
      if ( m_Id == 0 )
        m_Id = "";
      if ( m_pAsString == 0 )
        m_pAsString = "";
      m_pEntity = pEntity->m_pEntity;
      if ( m_pEntity == 0 )
        goto LABEL_51;
      LOWORD(v14) = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        LOWORD(v14) = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LODWORD(v37.m_pEntity) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v14 & 0x7FFF;
      if ( LODWORD(v37.m_pEntity) == -1 )
LABEL_51:
        v14 = 0x7FFF;
      else
        v14 = v14;
      v15 = CUtlString::Get(p_m_sCurrentMapName);
      LoggingSystem_Log(
        LOG_GLOBALSTATE,
        0,
        "%s:  global entity ignored, not using same map (current:'%s' vs last active in:'%s') with %d %s (%s)\n",
        "SV",
        v15,
        Map,
        v14,
        m_pAsString,
        m_Id);
    }
LABEL_17:
    result = 0;
    goto LABEL_18;
  }
  v37.m_pEntity = m_Id;
  v36.u.m_Id = m_pAsString;
  GlobalEntity = CEntitySaveRestoreBlockHandler::FindGlobalEntity(this, &v36, &v37);
  if ( GlobalEntity == 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GLOBALSTATE, 2) != 0 )
    {
      v29 = "";
      if ( m_Id != 0 )
        v29 = m_Id;
      LoggingSystem_Log(
        LOG_GLOBALSTATE,
        2,
        "%s:  no match for global entity (%s) found in destination level\n",
        "SV",
        v29);
    }
    goto LABEL_17;
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_GLOBALSTATE, 0) != 0 )
  {
    v18 = pEntity->m_pEntity;
    if ( v18 == 0 )
      goto LABEL_52;
    v19 = (v18->m_EHandle.m_Index >> 15) - (v18->m_flags & 1);
    v20 = 0x7FFF;
    if ( v18->m_EHandle.m_Index != -1 )
      v20 = v18->m_EHandle.m_Index & 0x7FFF;
    LOWORD(v37.m_pEntity) = v20 | v37.m_pEntity & 0x8000;
    LODWORD(v37.m_pEntity) = (v19 << 15) | v37.m_pEntity & 0x7FFF;
    if ( LODWORD(v37.m_pEntity) == -1 )
LABEL_52:
      v21 = 0x7FFF;
    else
      v21 = v20;
    if ( m_Id == 0 )
      m_Id = "";
    if ( m_pAsString == 0 )
      m_pAsString = "";
    v22 = GlobalEntity->m_pEntity;
    if ( v22 == 0 )
      goto LABEL_53;
    LOWORD(v23) = 0x7FFF;
    v24 = (v22->m_EHandle.m_Index >> 15) - (v22->m_flags & 1);
    if ( v22->m_EHandle.m_Index != -1 )
      LOWORD(v23) = v22->m_EHandle.m_Index & 0x7FFF;
    LOWORD(v36.u.m_Id) = v23 | v36.u.m_Id & 0x8000;
    LODWORD(v36.u.m_Id) = (v24 << 15) | v36.u.m_Id & 0x7FFF;
    if ( LODWORD(v36.u.m_Id) == -1 )
LABEL_53:
      v23 = 0x7FFF;
    else
      v23 = v23;
    v25 = "";
    if ( v22->m_designerName.u.m_Id != 0 )
      v25 = v22->m_designerName.u.m_pAsString;
    LoggingSystem_Log(
      LOG_GLOBALSTATE,
      0,
      "%s:  global entity overlay %s with %d %s (%s), discarding %d\n",
      "SV",
      v25,
      v23,
      m_pAsString,
      m_Id,
      v21);
  }
  restoreHelper.m_global = 1;
  pSaveData->m_modelSpaceOffset = vec3_origin;
  CEntitySystem::QueueDestroyEntity(g_pEntitySystem, pEntity);
  v26 = GlobalEntity->m_pEntity;
  if ( v26 != 0 )
  {
    v27 = (v26->m_EHandle.m_Index >> 15) - (v26->m_flags & 1);
    v28 = 0x7FFF;
    if ( v26->m_EHandle.m_Index != -1 )
      v28 = v26->m_EHandle.m_Index & 0x7FFF;
    LOWORD(pEntInfo->hEnt.m_Index) = v28 | pEntInfo->hEnt.m_Index & 0x8000;
    pEntInfo->hEnt.m_Index = (v27 << 15) | pEntInfo->hEnt.m_Index & 0x7FFF;
  }
  else
  {
    pEntInfo->hEnt.m_Index = -1;
  }
  (*(GlobalEntity->_vptr_IHandleEntity + 51))(GlobalEntity);
  if ( SLOBYTE(GlobalEntity->m_pEntity->m_flags) < 0 )
  {
    v37.m_pEntity = GlobalEntity;
    v37.m_bInPVS = 1;
    CEntitySystem::SetInPVS(g_pGameEntitySystem, 1, &v37);
  }
  GlobalEntity_SetMap(globalIndex, gpGlobals->mapname);
  if ( CEntitySaveRestoreBlockHandler::DoRestoreEntity(this, GlobalEntity, &restoreHelper, handle) )
  {
    pSaveData->m_modelSpaceOffset.x = 0.0;
    result = 1;
  }
  else
  {
    pSaveData->m_modelSpaceOffset.x = 0.0;
    result = 0;
  }
  pSaveData->m_modelSpaceOffset.y = 0.0;
  pSaveData->m_modelSpaceOffset.z = 0.0;
LABEL_18:
  restoreHelper.m_BlockEndStack.m_Size = 0;
  restoreHelper._vptr_IRestore = &off_3FF5F30;
  if ( (restoreHelper.m_BlockEndStack.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    pEntityb = result;
    CUtlMemory<int,int>::Purge(&restoreHelper.m_BlockEndStack.m_Memory);
    result = pEntityb;
    if ( (restoreHelper.m_BlockEndStack.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<int,int>::Purge(&restoreHelper.m_BlockEndStack.m_Memory);
      return pEntityb;
    }
  }
  return result;
}


// CSaveRestoreBlockSet::~CSaveRestoreBlockSet  (line 713, @0x00000000020fbe50, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlString::FreeMemoryBlock, CUtlMemory<SaveRestoreBlockHeader_t, int>::Purge, CUtlMemory<ISaveRestoreBlockHandler*, int>::Purge
void __fastcall CSaveRestoreBlockSet::~CSaveRestoreBlockSet(CSaveRestoreBlockSet *const this)
{
  bool v2; // zf
  CUtlString *p_m_Name; // rdi
  CUtlVectorBase<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_BlockHeaders.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_ISaveRestoreBlockHandler = &off_3FFC4F0;
  this->m_BlockHeaders.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_BlockHeaders.m_Memory,
        CUtlMemory<SaveRestoreBlockHeader_t,int>::Purge(&this->m_BlockHeaders.m_Memory),
        (this->m_BlockHeaders.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v2 = (this->m_Handlers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_Handlers.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  else
  {
    CUtlMemory<SaveRestoreBlockHeader_t,int>::Purge(p_m_Memory);
    v2 = (this->m_Handlers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_Handlers.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  CUtlMemory<ISaveRestoreBlockHandler *,int>::Purge(&this->m_Handlers.m_Memory);
  if ( (this->m_Handlers.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
  {
LABEL_3:
    p_m_Name = &this->m_Name;
    if ( this->m_Name.m_pString == 0 )
      return;
    goto LABEL_4;
  }
  CUtlMemory<ISaveRestoreBlockHandler *,int>::Purge(&this->m_Handlers.m_Memory);
  p_m_Name = &this->m_Name;
  if ( this->m_Name.m_pString != 0 )
LABEL_4:
    CUtlString::FreeMemoryBlock(p_m_Name);
}


// CSaveRestoreBlockSet::GetBlockName  (line 721, @0x00000000020f4e80, libserver.so)  // inlines: String
// calls: CUtlString::Get
const char *__fastcall CSaveRestoreBlockSet::GetBlockName(const CSaveRestoreBlockSet *const this)
{
  return CUtlString::Get(&this->m_Name);
}


// CSaveRestoreBlockSet::PreSave  (line 728, @0x000000000211e2c0, libserver.so)  // inlines: V_strncpy<long unsigned int>, operator[]
// calls: CUtlVectorBase<SaveRestoreBlockHeader_t, CUtlMemory<SaveRestoreBlockHeader_t, int> >::SetCount, _V_strncpy
void __fastcall CSaveRestoreBlockSet::PreSave(
        CSaveRestoreBlockSet *const this,
        CSaveRestoreData *pData,
        const CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *const list)
{
  int v3; // r15d
  __int64 v5; // rbx
  SaveRestoreBlockHeader_t *v6; // r13
  ISaveRestoreBlockHandler *v7; // r12
  __int64 v8; // rax

  v3 = 0;
  v5 = 0;
  CUtlVectorBase<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>>::SetCount(
    &this->m_BlockHeaders,
    this->m_Handlers.m_Size);
  if ( this->m_Handlers.m_Size > 0 )
  {
    do
    {
      ++v3;
      v6 = &this->m_BlockHeaders.m_Memory.m_pMemory[v5];
      v7 = this->m_Handlers.m_Memory.m_pMemory[v5++];
      v8 = v7->GetBlockName();
      _V_strncpy(v6, v8, 32);
      (*(v7->_vptr_ISaveRestoreBlockHandler + 1))(v7, pData, list);
    }
    while ( this->m_Handlers.m_Size > v3 );
  }
}


// CSaveRestoreBlockSet::Save  (line 740, @0x000000000210d170, libserver.so)  // inlines: CSaveFlushScope, CUtlString, Release, operator char const*, operator[], ~CSaveFlushScope, ~CUtlString
// calls: CUtlString::FreeMemoryBlock, V_stricmp_fast, CFmtStrN<256, false>::CFmtStrN, __dynamic_cast, CUtlString::Set, CUtlString::Get, CSaveFlushScope::~CSaveFlushScope, _Unwind_Resume, __stack_chk_fail
// strings: "%-16.16s | "
// globals: `typeinfo for'CSave, `typeinfo for'ISave
void __fastcall CSaveRestoreBlockSet::Save(CSaveRestoreBlockSet *const this, ISave *pSave)
{
  __int64 v4; // r12
  int v5; // r15d
  int m_nFlushScopeDepth; // eax
  int v7; // ecx
  ISaveRestoreBlockHandler *v8; // rbx
  __int64 v9; // rax
  const char *v10; // rax
  CSave *v11; // rax
  void (__fastcall *v12)(CSave *, const char *); // rbx
  const char *v13; // rax
  int base; // [rsp+1Ch] [rbp-174h]
  SaveRestoreBlockHeader_t *v15; // [rsp+20h] [rbp-170h]
  CSaveFlushScope guard; // [rsp+30h] [rbp-160h] BYREF
  CFmtStrN<256,false> v17; // [rsp+40h] [rbp-150h] BYREF
  unsigned __int64 v18; // [rsp+158h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  base = (*(pSave->_vptr_ISave + 3))(pSave);
  if ( this->m_Handlers.m_Size > 0 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v8 = this->m_Handlers.m_Memory.m_pMemory[v4];
      v15 = &this->m_BlockHeaders.m_Memory.m_pMemory[v4];
      v15->m_locBody = (*(pSave->_vptr_ISave + 3))(pSave) - base;
      v9 = v8->GetBlockName();
      LODWORD(v15) = V_stricmp_fast(v9, "Entities");
      v10 = v8->GetBlockName();
      CFmtStrN<256,false>::CFmtStrN(&v17, "%-16.16s | ", v10);
      v11 = __dynamic_cast(pSave, &`typeinfo for'ISave, &`typeinfo for'CSave, 0);
      guard.m_sScopeName.m_pString = 0;
      guard.m_pSave = v11;
      CUtlString::Set(&guard.m_sScopeName, v17.m_szBuf);
      if ( v15 != 0 )
      {
        m_nFlushScopeDepth = guard.m_pSave->m_nFlushScopeDepth;
        guard.m_pSave->m_nFlushScopeDepth = m_nFlushScopeDepth + 1;
        if ( m_nFlushScopeDepth == 0 )
          (*(guard.m_pSave->_vptr_ISave + 74))(guard.m_pSave, "");
      }
      else
      {
        guard.m_pSave = 0;
      }
      (*(v8->_vptr_ISaveRestoreBlockHandler + 2))(v8, pSave);
      if ( guard.m_pSave != 0 )
      {
        v7 = guard.m_pSave->m_nFlushScopeDepth;
        guard.m_pSave->m_nFlushScopeDepth = v7 - 1;
        if ( v7 == 1 )
        {
          v12 = *(guard.m_pSave->_vptr_ISave + 74);
          v13 = CUtlString::Get(&guard.m_sScopeName);
          v12(guard.m_pSave, v13);
        }
      }
      if ( guard.m_sScopeName.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&guard.m_sScopeName);
      ++v5;
      ++v4;
    }
    while ( this->m_Handlers.m_Size > v5 );
  }
  this->m_SizeBodies = (*(pSave->_vptr_ISave + 3))(pSave) - base;
}


// CSaveRestoreBlockSet::WriteSaveHeaders  (line 759, @0x000000000211e350, libserver.so)  // inlines: CSaveFlushScope, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CUtlVectorDataOps, GetDataOps<CUtlVector<SaveRestoreBlockHeader_t> >, Purge, Release, RemoveAll, Save, V_strncpy<long unsigned int>, memset, operator char const*, operator[], ~CSaveFlushScope, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<SaveRestoreBlockHeader_t, CUtlMemory<SaveRestoreBlockHeader_t, int> >::SetCount, memset, _V_strncpy, CUtlString::FreeMemoryBlock, CFmtStrN<256, false>::CFmtStrN, __dynamic_cast, CUtlString::Set, CUtlString::Get, __cxa_guard_acquire, __cxa_guard_release, CUtlMemory<SaveRestoreBlockHeader_t, int>::Purge, CSaveFlushScope::~CSaveFlushScope (15 total)
// strings: "%-16.16s | ", "Block Headers | "
// globals: `guard variable for'CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>>>(CUtlVector<Save, CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>>>(CUtlVector<SaveRestoreBlockHeader_t, `typeinfo for'ISave, `typeinfo for'CSave
void __fastcall CSaveRestoreBlockSet::WriteSaveHeaders(CSaveRestoreBlockSet *const this, ISave *pSave)
{
  unsigned int v4; // eax
  int m_Size; // esi
  __int64 v6; // rbx
  int v7; // r12d
  __int64 v8; // rax
  __int64 v9; // rbx
  CSave *v10; // rax
  int v11; // ecx
  SaveRestoreBlockHeader_t *v12; // r15
  ISaveRestoreBlockHandler *v13; // r12
  const char *v14; // rax
  CSave *v15; // rax
  CSave *m_pSave; // rdi
  int m_nFlushScopeDepth; // eax
  void (__fastcall *v18)(CSave *, const char *); // r12
  const char *v19; // rax
  CSave *v20; // rax
  CSave *v21; // rdi
  int v22; // eax
  unsigned int v23; // r12d
  CSave *p_m_BlockHeaders; // r13
  CSave *v25; // rax
  int v26; // ecx
  void (__fastcall *v27)(CSave *, const char *); // r12
  const char *v28; // rax
  unsigned int base; // [rsp+28h] [rbp-1D8h]
  int v30; // [rsp+2Ch] [rbp-1D4h]
  int dummyInt; // [rsp+3Ch] [rbp-1C4h] BYREF
  CSaveFlushScope headers; // [rsp+40h] [rbp-1C0h] BYREF
  CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int> > dummyArr; // [rsp+50h] [rbp-1B0h] BYREF
  _QWORD v34[4]; // [rsp+70h] [rbp-190h] BYREF
  CSaveFlushScope guard; // [rsp+90h] [rbp-170h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-160h]
  CFmtStrN<256,false> v37; // [rsp+B0h] [rbp-150h] BYREF
  unsigned __int64 v38; // [rsp+1C8h] [rbp-38h]

  v38 = __readfsqword(0x28u);
  (*(pSave->_vptr_ISave + 74))(pSave, "");
  v4 = (*(pSave->_vptr_ISave + 3))(pSave);
  m_Size = this->m_BlockHeaders.m_Size;
  dummyInt = -1;
  base = v4;
  dummyArr.m_Size = 0;
  dummyArr.m_Memory.m_pMemory = 0;
  dummyArr.m_Memory.m_nAllocationCount = 0;
  dummyArr.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>>::SetCount(&dummyArr, m_Size);
  v6 = 0;
  v7 = 0;
  memset(dummyArr.m_Memory.m_pMemory, 255, 40LL * dummyArr.m_Size);
  if ( this->m_Handlers.m_Size > 0 )
  {
    do
    {
      v8 = (*this->m_Handlers.m_Memory.m_pMemory[v6]->_vptr_ISaveRestoreBlockHandler)(this->m_Handlers.m_Memory.m_pMemory[v6]);
      _V_strncpy(&dummyArr.m_Memory.m_pMemory[v6], v8, 32);
      ++v7;
      ++v6;
    }
    while ( this->m_Handlers.m_Size > v7 );
  }
  (*(pSave->_vptr_ISave + 11))(pSave, &dummyInt, 1);
  (*(pSave->_vptr_ISave + 11))(pSave, &dummyInt, 1);
  (*(pSave->_vptr_ISave + 75))(pSave, 1);
  if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>>>(CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>> *)::ops == 0
    && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>>>(CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>> *)::ops) != 0 )
  {
    CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>>>(CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>> *)::ops = off_3FFCBB0;
    __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>>>(CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>> *)::ops);
  }
  v34[1] = 0;
  v34[2] = 0;
  v34[0] = &dummyArr;
  (*CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>>>(CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>> *)::ops)(
    &CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>>>(CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>> *)::ops,
    v34,
    pSave);
  (*(pSave->_vptr_ISave + 75))(pSave, 0);
  if ( this->m_Handlers.m_Size > 0 )
  {
    v9 = 0;
    v30 = 0;
    do
    {
      v12 = &this->m_BlockHeaders.m_Memory.m_pMemory[v9];
      v13 = this->m_Handlers.m_Memory.m_pMemory[v9];
      v12->m_locHeader = (*(pSave->_vptr_ISave + 3))(pSave) - base;
      v14 = v13->GetBlockName();
      CFmtStrN<256,false>::CFmtStrN(&v37, "%-16.16s | ", v14);
      v15 = __dynamic_cast(pSave, &`typeinfo for'ISave, &`typeinfo for'CSave, 0);
      guard.m_sScopeName.m_pString = 0;
      guard.m_pSave = v15;
      CUtlString::Set(&guard.m_sScopeName, v37.m_szBuf);
      m_pSave = guard.m_pSave;
      m_nFlushScopeDepth = guard.m_pSave->m_nFlushScopeDepth;
      guard.m_pSave->m_nFlushScopeDepth = m_nFlushScopeDepth + 1;
      if ( m_nFlushScopeDepth == 0 )
        (*(m_pSave->_vptr_ISave + 74))(m_pSave, "");
      (*(v13->_vptr_ISaveRestoreBlockHandler + 3))(v13, pSave);
      v10 = guard.m_pSave;
      if ( guard.m_pSave != 0 )
      {
        v11 = guard.m_pSave->m_nFlushScopeDepth;
        guard.m_pSave->m_nFlushScopeDepth = v11 - 1;
        if ( v11 == 1 )
        {
          v18 = *(v10->_vptr_ISave + 74);
          v19 = CUtlString::Get(&guard.m_sScopeName);
          v18(guard.m_pSave, v19);
        }
        guard.m_pSave = 0;
      }
      if ( guard.m_sScopeName.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&guard.m_sScopeName);
      ++v30;
      ++v9;
    }
    while ( this->m_Handlers.m_Size > v30 );
  }
  this->m_SizeHeaders = (*(pSave->_vptr_ISave + 3))(pSave) - base;
  v20 = __dynamic_cast(pSave, &`typeinfo for'ISave, &`typeinfo for'CSave, 0);
  headers.m_sScopeName.m_pString = 0;
  headers.m_pSave = v20;
  CUtlString::Set(&headers.m_sScopeName, "Block Headers | ");
  v21 = headers.m_pSave;
  v22 = headers.m_pSave->m_nFlushScopeDepth;
  headers.m_pSave->m_nFlushScopeDepth = v22 + 1;
  if ( v22 == 0 )
    (*(v21->_vptr_ISave + 74))(v21, "");
  v23 = (*(pSave->_vptr_ISave + 3))(pSave);
  (*(pSave->_vptr_ISave + 4))(pSave, base);
  (*(pSave->_vptr_ISave + 11))(pSave, &this->m_SizeHeaders, 1);
  (*(pSave->_vptr_ISave + 11))(pSave, &this->m_SizeBodies, 1);
  p_m_BlockHeaders = &this->m_BlockHeaders;
  if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>>>(CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>> *)::ops == 0
    && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>>>(CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>> *)::ops) != 0 )
  {
    CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>>>(CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>> *)::ops = off_3FFCBB0;
    __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>>>(CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>> *)::ops);
  }
  guard.m_sScopeName.m_pString = 0;
  guard.m_pSave = p_m_BlockHeaders;
  v36 = 0;
  (*CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>>>(CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>> *)::ops)(
    &CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>>>(CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>> *)::ops,
    &guard,
    pSave);
  (*(pSave->_vptr_ISave + 4))(pSave, v23);
  v25 = headers.m_pSave;
  if ( headers.m_pSave != 0 )
  {
    v26 = headers.m_pSave->m_nFlushScopeDepth;
    headers.m_pSave->m_nFlushScopeDepth = v26 - 1;
    if ( v26 == 1 )
    {
      v27 = *(v25->_vptr_ISave + 74);
      v28 = CUtlString::Get(&headers.m_sScopeName);
      v27(headers.m_pSave, v28);
    }
    headers.m_pSave = 0;
  }
  if ( headers.m_sScopeName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&headers.m_sScopeName);
  dummyArr.m_Size = 0;
  if ( (dummyArr.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<SaveRestoreBlockHeader_t,int>::Purge(&dummyArr.m_Memory);
    if ( (dummyArr.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<SaveRestoreBlockHeader_t,int>::Purge(&dummyArr.m_Memory);
  }
}


// CSaveRestoreBlockSet::PostSave  (line 821, @0x00000000020fb1b0, libserver.so)  // inlines: Purge, RemoveAll
// calls: CUtlMemory<SaveRestoreBlockHeader_t, int>::Purge
void __fastcall CSaveRestoreBlockSet::PostSave(
        CSaveRestoreBlockSet *const this,
        const CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *const list)
{
  __int64 i; // rbx
  ISaveRestoreBlockHandler *v5; // rdi
  bool v6; // zf

  for ( i = 0; this->m_Handlers.m_Size > i; ++i )
  {
    v5 = this->m_Handlers.m_Memory.m_pMemory[i];
    (*(v5->_vptr_ISaveRestoreBlockHandler + 4))(v5, list);
  }
  v6 = (this->m_BlockHeaders.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_BlockHeaders.m_Size = 0;
  if ( v6 )
    CUtlMemory<SaveRestoreBlockHeader_t,int>::Purge(&this->m_BlockHeaders.m_Memory);
}


// CSaveRestoreBlockSet::PreRestore  (line 833, @0x00000000020fb160, libserver.so)
void __fastcall CSaveRestoreBlockSet::PreRestore(CSaveRestoreBlockSet *const this)
{
  __int64 v2; // r12
  int i; // ebx
  ISaveRestoreBlockHandler *v4; // rdi

  v2 = 0;
  for ( i = 0; this->m_Handlers.m_Size > i; ++i )
  {
    v4 = this->m_Handlers.m_Memory.m_pMemory[v2++];
    (*(v4->_vptr_ISaveRestoreBlockHandler + 5))(v4);
  }
}


// CSaveRestoreBlockSet::ReadRestoreHeaders  (line 842, @0x00000000020fde10, libserver.so)  // inlines: CUtlVectorDataOps, GetBlockHeaderLoc, GetDataOps<CUtlVector<SaveRestoreBlockHeader_t> >, Restore, _V_strcmp
// calls: strcmp, __cxa_guard_acquire, __cxa_guard_release
// globals: `guard variable for'CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>>>(CUtlVector<Save, CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>>>(CUtlVector<SaveRestoreBlockHeader_t
void __fastcall CSaveRestoreBlockSet::ReadRestoreHeaders(CSaveRestoreBlockSet *const this, IRestore *pRestore)
{
  ISaveRestoreBlockHandler *v4; // r14
  const char *v5; // rbx
  int m_Size; // eax
  SaveRestoreBlockHeader_t *m_pMemory; // r15
  __int64 m_sBlockName; // r12
  int m_locHeader; // esi
  __int64 v11; // [rsp+10h] [rbp-60h]
  int base; // [rsp+18h] [rbp-58h]
  int i; // [rsp+1Ch] [rbp-54h]
  _QWORD v14[10]; // [rsp+20h] [rbp-50h] BYREF

  base = pRestore->GetReadPos();
  (*(pRestore->_vptr_IRestore + 24))(pRestore, &this->m_SizeHeaders, 1, 0);
  (*(pRestore->_vptr_IRestore + 24))(pRestore, &this->m_SizeBodies, 1, 0);
  if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>>>(CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>> *)::ops == 0
    && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>>>(CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>> *)::ops) != 0 )
  {
    CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>>>(CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>> *)::ops = off_3FFCBB0;
    __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>>>(CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>> *)::ops);
  }
  v14[0] = &this->m_BlockHeaders;
  v14[1] = 0;
  v14[2] = 0;
  (*(CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>>>(CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>> *)::ops
   + 8))(
    &CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>>>(CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>> *)::ops,
    v14,
    pRestore);
  v11 = 0;
  for ( i = 0; this->m_Handlers.m_Size > i; ++v11 )
  {
    v4 = this->m_Handlers.m_Memory.m_pMemory[v11];
    v5 = v4->GetBlockName();
    m_Size = this->m_BlockHeaders.m_Size;
    if ( m_Size > 0 )
    {
      m_pMemory = this->m_BlockHeaders.m_Memory.m_pMemory;
      m_sBlockName = m_pMemory[(m_Size - 1) + 1].m_sBlockName;
      while ( strcmp(m_pMemory->m_sBlockName, v5) != 0 )
      {
        if ( ++m_pMemory == m_sBlockName )
          goto LABEL_9;
      }
      m_locHeader = m_pMemory->m_locHeader;
      if ( m_locHeader != -1 )
      {
        (*(pRestore->_vptr_IRestore + 1))(pRestore, (base + m_locHeader));
        (*(v4->_vptr_ISaveRestoreBlockHandler + 6))(v4, pRestore);
      }
    }
LABEL_9:
    ++i;
  }
  (*(pRestore->_vptr_IRestore + 1))(pRestore, (this->m_SizeHeaders + base));
}


// CSaveRestoreBlockSet::CallBlockHandlerRestore  (line 864, @0x00000000020fb2c0, libserver.so)  // inlines: GetBlockBodyLoc, _V_strcmp
// calls: strcmp
void __fastcall CSaveRestoreBlockSet::CallBlockHandlerRestore(
        CSaveRestoreBlockSet *const this,
        ISaveRestoreBlockHandler *pHandler,
        int baseFilePos,
        IRestore *pRestore,
        SpawnGroupHandle_t handle,
        bool fCreatePlayers)
{
  const char *v9; // rbx
  int m_Size; // eax
  SaveRestoreBlockHeader_t *m_pMemory; // r15
  __int64 m_sBlockName; // r12
  int m_locBody; // esi

  v9 = pHandler->GetBlockName();
  m_Size = this->m_BlockHeaders.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_BlockHeaders.m_Memory.m_pMemory;
    m_sBlockName = m_pMemory[(m_Size - 1) + 1].m_sBlockName;
    while ( strcmp(m_pMemory->m_sBlockName, v9) != 0 )
    {
      if ( ++m_pMemory == m_sBlockName )
        return;
    }
    m_locBody = m_pMemory->m_locBody;
    if ( m_locBody != -1 )
    {
      (*(pRestore->_vptr_IRestore + 1))(pRestore, (baseFilePos + m_locBody));
      (*(pHandler->_vptr_ISaveRestoreBlockHandler + 7))(pHandler, pRestore, handle, fCreatePlayers);
    }
  }
}


// CSaveRestoreBlockSet::Restore  (line 874, @0x00000000020fb0d0, libserver.so)
void __fastcall CSaveRestoreBlockSet::Restore(
        CSaveRestoreBlockSet *const this,
        IRestore *pRestore,
        SpawnGroupHandle_t handle,
        bool fCreatePlayers)
{
  unsigned int v8; // r13d
  _BOOL4 v9; // eax
  __int64 v10; // r14
  _BOOL4 i; // [rsp+Ch] [rbp-34h]

  v8 = pRestore->GetReadPos();
  v9 = fCreatePlayers;
  v10 = 0;
  for ( i = v9; this->m_Handlers.m_Size > v10; ++v10 )
    (*(this->_vptr_ISaveRestoreBlockHandler + 11))(
      this,
      this->m_Handlers.m_Memory.m_pMemory[v10],
      v8,
      pRestore,
      handle,
      i);
  (*(pRestore->_vptr_IRestore + 1))(pRestore, v8 + this->m_SizeBodies);
}


// CSaveRestoreBlockSet::PostRestore  (line 886, @0x00000000020fc620, libserver.so)  // inlines: Purge, RemoveAll
// calls: CUtlMemory<SaveRestoreBlockHeader_t, int>::Purge
void __fastcall CSaveRestoreBlockSet::PostRestore(CSaveRestoreBlockSet *const this)
{
  __int64 v2; // r12
  int i; // ebx
  ISaveRestoreBlockHandler *v4; // rdi
  bool v5; // zf

  v2 = 0;
  for ( i = 0; this->m_Handlers.m_Size > i; ++i )
  {
    v4 = this->m_Handlers.m_Memory.m_pMemory[v2++];
    (*(v4->_vptr_ISaveRestoreBlockHandler + 8))(v4);
  }
  v5 = (this->m_BlockHeaders.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_BlockHeaders.m_Size = 0;
  if ( v5 )
    CUtlMemory<SaveRestoreBlockHeader_t,int>::Purge(&this->m_BlockHeaders.m_Memory);
}


// CSaveRestoreBlockSet::AddBlockHandler  (line 898, @0x0000000002116440, libserver.so)  // inlines: AddToTail, CopyConstruct<ISaveRestoreBlockHandler*>, Element, GrowMemory, operator[]
// calls: CUtlMemory<ISaveRestoreBlockHandler*, int>::Grow
void __fastcall CSaveRestoreBlockSet::AddBlockHandler(
        CSaveRestoreBlockSet *const this,
        ISaveRestoreBlockHandler *pHandler)
{
  __int64 m_Size; // r12
  int v5; // eax
  ISaveRestoreBlockHandler **v6; // rax

  m_Size = this->m_Handlers.m_Size;
  v5 = this->m_Handlers.m_Size;
  if ( m_Size == this->m_Handlers.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<ISaveRestoreBlockHandler *,int>::Grow(&this->m_Handlers.m_Memory, 1);
    v5 = this->m_Handlers.m_Size;
  }
  this->m_Handlers.m_Size = v5 + 1;
  v6 = &this->m_Handlers.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
    *v6 = pHandler;
}


// CSaveRestoreBlockSet::RemoveBlockHandler  (line 907, @0x00000000020fb230, libserver.so)  // inlines: Element, Find, FindAndRemove, Remove, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: memmove
void __fastcall CSaveRestoreBlockSet::RemoveBlockHandler(
        CSaveRestoreBlockSet *const this,
        ISaveRestoreBlockHandler *pHandler)
{
  int m_Size; // ecx
  ISaveRestoreBlockHandler **m_pMemory; // rdi
  ISaveRestoreBlockHandler **v5; // rdx
  int v6; // eax

  m_Size = this->m_Handlers.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_Handlers.m_Memory.m_pMemory;
    if ( *m_pMemory == pHandler )
    {
      v6 = 0;
LABEL_8:
      if ( m_Size - v6 - 1 > 0 )
      {
        memmove(&m_pMemory[v6], &m_pMemory[v6 + 1], 8LL * (m_Size - v6 - 1));
        m_Size = this->m_Handlers.m_Size;
      }
      this->m_Handlers.m_Size = m_Size - 1;
    }
    else
    {
      v5 = m_pMemory + 1;
      v6 = 0;
      while ( ++v6 != m_Size )
      {
        if ( *v5++ == pHandler )
        {
          if ( v6 == -1 )
            return;
          goto LABEL_8;
        }
      }
    }
  }
}


// ParseKeyvalue  (line 960, @0x00000000020be2e0, libserver.so)  // inlines: AllocPooledString, FStrEq, UTIL_StringToVector, _V_strcmp, atof, atoi, operator=
// calls: strcmp, CUtlString::Set, V_atoi, strtod, V_atoui64, V_atoi64, UTIL_StringToFloatArray, V_StringToColor, strtol, CEntitySystem::AllocPooledString, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// callers: CDOTABaseAbility::LoadAbilityData, DOTA_LoadEntityDataDesc
// strings: "Bad field in entity!!\n"
// globals: jpt_20BE3C3
bool __fastcall ParseKeyvalue(
        void *pObject,
        typedescription_t *pFields,
        int iNumFields,
        const char *szKeyName,
        const char *szValue)
{
  __int64 v5; // rdx
  typedescription_t *v8; // r15
  __int64 fieldOffset; // r13
  const char *externalName; // rsi
  bool result; // al
  datamap_t *td; // r14
  __m128d v13; // xmm0
  char *pEmbeddedObject; // [rsp+8h] [rbp-68h]
  typedescription_t *v15; // [rsp+10h] [rbp-60h]
  SaveRestoreFieldInfo_t fieldInfo; // [rsp+20h] [rbp-50h] BYREF

  if ( iNumFields <= 0 )
    return 0;
  v5 = (iNumFields - 1);
  v8 = pFields;
  v15 = &pFields[v5 + 1];
  while ( 1 )
  {
    fieldOffset = v8->fieldOffset;
    if ( v8->fieldType == fieldtype_t::FIELD_EMBEDDED && v8->fieldSize == 1 )
    {
      td = v8->td;
      if ( td != 0 )
        break;
    }
LABEL_4:
    if ( (v8->flags & 4) != 0 )
    {
      externalName = v8->externalName;
      if ( szKeyName == externalName || strcmp(szKeyName, externalName) == 0 )
      {
        switch ( v8->fieldType )
        {
          case fieldtype_t::FIELD_FLOAT:
          case fieldtype_t::FIELD_TIME:
            v13.m128d_f64[0] = strtod(szValue, 0);
            *(pObject + fieldOffset) = _mm_movedup_pd(v13).m128d_f64[0];
            result = 1;
            break;
          case fieldtype_t::FIELD_STRING:
          case fieldtype_t::FIELD_SOUNDNAME:
            CEntitySystem::AllocPooledString(g_pEntitySystem, szValue);
            *(pObject + fieldOffset) = fieldInfo.pField;
            result = 1;
            break;
          case fieldtype_t::FIELD_VECTOR:
          case fieldtype_t::FIELD_POSITION_VECTOR:
            UTIL_StringToFloatArray((pObject + fieldOffset), 3, szValue);
            result = 1;
            break;
          case fieldtype_t::FIELD_INTEGER:
          case fieldtype_t::FIELD_TICK:
            *(pObject + fieldOffset) = strtol(szValue, 0, 10);
            result = 1;
            break;
          case fieldtype_t::FIELD_BOOLEAN:
            *(pObject + fieldOffset) = strtol(szValue, 0, 10) != 0;
            result = 1;
            break;
          case fieldtype_t::FIELD_SHORT:
            *(pObject + fieldOffset) = strtol(szValue, 0, 10);
            result = 1;
            break;
          case fieldtype_t::FIELD_CHARACTER:
            *(pObject + fieldOffset) = strtol(szValue, 0, 10);
            result = 1;
            break;
          case fieldtype_t::FIELD_COLOR32:
            V_StringToColor(pObject + fieldOffset, szValue, v5, szKeyName, szValue);
            result = 1;
            break;
          case fieldtype_t::FIELD_CUSTOM:
            fieldInfo.pTypeDesc = v8;
            fieldInfo.pOwner = pObject;
            fieldInfo.pField = pObject + fieldOffset;
            (*(v8->pSaveRestoreOps->_vptr_ISaveRestoreOps + 4))(v8->pSaveRestoreOps, &fieldInfo, szValue);
            result = 1;
            break;
          case fieldtype_t::FIELD_VMATRIX:
          case fieldtype_t::FIELD_VMATRIX_WORLDSPACE:
            UTIL_StringToFloatArray((pObject + fieldOffset), 16, szValue);
            result = 1;
            break;
          case fieldtype_t::FIELD_MATRIX3X4_WORLDSPACE:
            UTIL_StringToFloatArray((pObject + fieldOffset), 12, szValue);
            result = 1;
            break;
          case fieldtype_t::FIELD_INTEGER64:
            *(pObject + fieldOffset) = V_atoi64(szValue);
            result = 1;
            break;
          case fieldtype_t::FIELD_UINT64:
            *(pObject + fieldOffset) = V_atoui64(szValue, externalName, v5, szKeyName);
            result = 1;
            break;
          case fieldtype_t::FIELD_FLOAT64:
            *(pObject + fieldOffset) = strtod(szValue, 0);
            result = 1;
            break;
          case fieldtype_t::FIELD_UINT:
            *(pObject + fieldOffset) = V_atoi(szValue);
            result = 1;
            break;
          case fieldtype_t::FIELD_UTLSTRING:
            CUtlString::Set((pObject + fieldOffset), szValue);
            result = 1;
            break;
          default:
            if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 2) != 0 )
              LoggingSystem_Log(LOG_SAVERESTORE, 2, "Bad field in entity!!\n");
            goto LABEL_7;
        }
        return result;
      }
    }
LABEL_7:
    if ( ++v8 == v15 )
      return 0;
  }
  pEmbeddedObject = pObject + fieldOffset;
  for ( result = ParseKeyvalue(pEmbeddedObject, td->dataDesc, td->dataNumFields, szKeyName, szValue);
        !result;
        result = ParseKeyvalue(pEmbeddedObject, td->dataDesc, td->dataNumFields, szKeyName, szValue) )
  {
    td = td->baseMap;
    if ( td == 0 )
      goto LABEL_4;
  }
  return result;
}


// ExtractKeyValueFromField  (line 1084, @0x00000000020b4d90, libserver.so)  // inlines: String, ToCStr, V_strncpy<int>
// calls: __cxa_guard_acquire, CUtlSymbolTable::CUtlSymbolTable, __cxa_guard_release, __cxa_atexit, CUtlSymbolTable::Find, CUtlSymbolTable::AddString, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CUtlString::Get, _V_strncpy, V_snprintf, __cxa_guard_abort (13 total)
// callers: ExtractKeyvalue, DOTA_SaveEntityDataDesc
// strings: "Bad field type in entity (%s::%s)!!\n", "%d %d %d %d"
// globals: jpt_20B4DC2, `guard variable for'ExtractKeyValueFromField(void *,char const*,typedescription_t *,char *,int)::s_FieldsSeen, ExtractKeyValueFromField(void *,char const*,typedescription_t *,char *,int)::s_FieldsSeen, __dso_handle
bool __fastcall ExtractKeyValueFromField(
        void *pObject,
        const char *pClassname,
        typedescription_t *pField,
        char *szValue,
        int iMaxLen)
{
  __int64 fieldOffset; // rcx
  const char *v10; // rax
  double v11; // xmm0_8
  const char *v12; // rax
  const char **v13; // rdi
  int v14; // ecx
  __int16 v16; // [rsp+20h] [rbp-30h]

  fieldOffset = pField->fieldOffset;
  switch ( pField->fieldType )
  {
    case fieldtype_t::FIELD_FLOAT:
    case fieldtype_t::FIELD_TIME:
      v11 = *(pObject + fieldOffset);
      goto LABEL_13;
    case fieldtype_t::FIELD_STRING:
    case fieldtype_t::FIELD_SOUNDNAME:
      v12 = "";
      v13 = (pObject + fieldOffset);
      if ( *v13 != 0 )
        v12 = *v13;
      _V_strncpy(szValue, v12, iMaxLen);
      return 1;
    case fieldtype_t::FIELD_VECTOR:
    case fieldtype_t::FIELD_POSITION_VECTOR:
      V_snprintf(
        szValue,
        iMaxLen,
        "%f %f %f",
        *(pObject + fieldOffset),
        *(pObject + fieldOffset + 4),
        *(pObject + fieldOffset + 8));
      return 1;
    case fieldtype_t::FIELD_INTEGER:
    case fieldtype_t::FIELD_TICK:
      v14 = *(pObject + fieldOffset);
      goto LABEL_20;
    case fieldtype_t::FIELD_BOOLEAN:
      v14 = *(pObject + fieldOffset);
      goto LABEL_20;
    case fieldtype_t::FIELD_SHORT:
      v14 = *(pObject + fieldOffset);
      goto LABEL_20;
    case fieldtype_t::FIELD_CHARACTER:
      v14 = *(pObject + fieldOffset);
LABEL_20:
      V_snprintf(szValue, iMaxLen, "%d", v14);
      return 1;
    case fieldtype_t::FIELD_COLOR32:
      V_snprintf(
        szValue,
        iMaxLen,
        "%d %d %d %d",
        *(pObject + fieldOffset),
        *(pObject + fieldOffset + 4),
        *(pObject + fieldOffset + 8),
        *(pObject + fieldOffset + 12));
      return 1;
    case fieldtype_t::FIELD_CUSTOM:
    case fieldtype_t::FIELD_VMATRIX:
    case fieldtype_t::FIELD_VMATRIX_WORLDSPACE:
    case fieldtype_t::FIELD_MATRIX3X4_WORLDSPACE:
      return 0;
    case fieldtype_t::FIELD_INTEGER64:
      V_snprintf(szValue, iMaxLen, "%lld", *(pObject + fieldOffset));
      return 1;
    case fieldtype_t::FIELD_UINT64:
      V_snprintf(szValue, iMaxLen, "%llu", *(pObject + fieldOffset));
      return 1;
    case fieldtype_t::FIELD_FLOAT64:
      v11 = *(pObject + fieldOffset);
LABEL_13:
      V_snprintf(szValue, iMaxLen, "%f", v11);
      return 1;
    case fieldtype_t::FIELD_UINT:
      V_snprintf(szValue, iMaxLen, "%u", *(pObject + fieldOffset));
      return 1;
    case fieldtype_t::FIELD_UTLSTRING:
      v10 = CUtlString::Get((pObject + fieldOffset));
      _V_strncpy(szValue, v10, iMaxLen);
      return 0;
    default:
      if ( `guard variable for'ExtractKeyValueFromField(void *,char const*,typedescription_t *,char *,int)::s_FieldsSeen == 0
        && __cxa_guard_acquire(&`guard variable for'ExtractKeyValueFromField(void *,char const*,typedescription_t *,char *,int)::s_FieldsSeen) != 0 )
      {
        CUtlSymbolTable::CUtlSymbolTable(
          &ExtractKeyValueFromField(void *,char const*,typedescription_t *,char *,int)::s_FieldsSeen,
          0,
          16,
          0);
        __cxa_guard_release(&`guard variable for'ExtractKeyValueFromField(void *,char const*,typedescription_t *,char *,int)::s_FieldsSeen);
        __cxa_atexit(
          CUtlSymbolTable::~CUtlSymbolTable,
          &ExtractKeyValueFromField(void *,char const*,typedescription_t *,char *,int)::s_FieldsSeen,
          &_dso_handle);
      }
      CUtlSymbolTable::Find(
        &ExtractKeyValueFromField(void *,char const*,typedescription_t *,char *,int)::s_FieldsSeen,
        pField->fieldName);
      if ( v16 == -1 )
      {
        CUtlSymbolTable::AddString(
          &ExtractKeyValueFromField(void *,char const*,typedescription_t *,char *,int)::s_FieldsSeen,
          pField->fieldName);
        if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 2) != 0 )
          LoggingSystem_Log(LOG_SAVERESTORE, 2, "Bad field type in entity (%s::%s)!!\n", pClassname, pField->fieldName);
      }
      return 0;
  }
}


// ExtractKeyvalue  (line 1205, @0x00000000020b5070, libserver.so)  // inlines: FStrEq, _V_strcmp
// calls: strcmp, ExtractKeyValueFromField
bool __fastcall ExtractKeyvalue(
        void *pObject,
        const char *pClassname,
        typedescription_t *pFields,
        int iNumFields,
        const char *szKeyName,
        char *szValue,
        int iMaxLen)
{
  typedescription_t *v8; // r13
  const char *externalName; // rsi
  char *v10; // r12
  datamap_t *td; // r13
  bool result; // al
  typedescription_t *pField; // [rsp+8h] [rbp-58h]
  typedescription_t *v17; // [rsp+28h] [rbp-38h]

  if ( iNumFields <= 0 )
    return 0;
  v17 = &pFields[(iNumFields - 1) + 1];
  v8 = pFields;
  while ( v8->fieldType != fieldtype_t::FIELD_EMBEDDED || v8->fieldSize != 1 || v8->td == 0 )
  {
LABEL_3:
    if ( (v8->flags & 4) != 0 )
    {
      externalName = v8->externalName;
      if ( szKeyName == externalName || strcmp(szKeyName, externalName) == 0 )
        return ExtractKeyValueFromField(pObject, pClassname, v8, szValue, iMaxLen);
    }
    if ( ++v8 == v17 )
      return 0;
  }
  pField = v8;
  v10 = pObject + v8->fieldOffset;
  td = v8->td;
  while ( 1 )
  {
    result = ExtractKeyvalue(v10, td->dataClassName, td->dataDesc, td->dataNumFields, szKeyName, szValue, iMaxLen);
    if ( result )
      return result;
    td = td->baseMap;
    if ( td == 0 )
    {
      v8 = pField;
      goto LABEL_3;
    }
  }
}


// SaveRestoreBlockHeader_t::AddDatadescMetadataKeys  (line 1242, @0x00000000020b51c0, libserver.so)
void __fastcall SaveRestoreBlockHeader_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// SaveRestoreBlockHeader_t::GetBaseMap  (line 1242, @0x00000000020b51d0, libserver.so)
datamap_t *__cdecl SaveRestoreBlockHeader_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<SaveRestoreBlockHeader_t>  (line 1242, @0x00000000020b51e0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: __static_initialization_and_destruction_0
// strings: "SaveRestoreBlockHeader_t"
// globals: `guard variable for'DataMapInit<SaveRestoreBlockHeader_t>(SaveRestoreBlockHeader_t *)::nameHolder, SaveRestoreBlockHeader_t::m_DataMap, DataMapInit<SaveRestoreBlockHeader_t>(SaveRestoreBlockHeader_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<SaveRestoreBlockHeader_t>(SaveRestoreBlockHeader_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<SaveRestoreBlockHeader_t>(SaveRestoreBlockHeader_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<SaveRestoreBlockHeader_t>(SaveRestoreBlockHeader_t *)::nameHolder) != 0 )
  {
    DataMapInit<SaveRestoreBlockHeader_t>(SaveRestoreBlockHeader_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<SaveRestoreBlockHeader_t>(SaveRestoreBlockHeader_t *)::nameHolder.m_pszBase = "SaveRestoreBlockHeader_t";
    DataMapInit<SaveRestoreBlockHeader_t>(SaveRestoreBlockHeader_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<SaveRestoreBlockHeader_t>(SaveRestoreBlockHeader_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<SaveRestoreBlockHeader_t>(SaveRestoreBlockHeader_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<SaveRestoreBlockHeader_t>(SaveRestoreBlockHeader_t *)::nameHolder.m_nLenBase = 24;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<SaveRestoreBlockHeader_t>(SaveRestoreBlockHeader_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<SaveRestoreBlockHeader_t>(SaveRestoreBlockHeader_t *)::nameHolder,
      &_dso_handle);
  }
  SaveRestoreBlockHeader_t::m_DataMap.baseMap = 0;
  SaveRestoreBlockHeader_t::m_DataMap.dataDesc = &DataMapInit<SaveRestoreBlockHeader_t>(SaveRestoreBlockHeader_t *)::dataDesc[1];
  SaveRestoreBlockHeader_t::m_DataMap.dataNumFields = 3;
  return &SaveRestoreBlockHeader_t::m_DataMap;
}


// CreateEntitiesInTransitionList  (line 1259, @0x00000000020b52a0, libserver.so)  // inlines: CEntityHandle, GetEHandle, GetEntryIndex, GetSerialNumber, IndexToIdentity, Init, IsUsed, LookupEntityByIndex, Set, String, ToCStr, operator=
// calls: LoggingSystem_IsChannelEnabled, CGameSaveRestoreInfo::NumEntities, CGameSaveRestoreInfo::GetEntityInfo, IsPlayerIndex, CBasePlayer::CreatePlayer, LoggingSystem_Log, CEntitySystem::CreateEntity, _Unwind_Resume
// callers: CreateEntityTransitionList
// strings: "SV", "%s:  transition %s into %d\n", "%s:  entity (%d) with data saved, but with no classname\n", "ENTITY IS NOT A PLAYER: %d\n"
void __fastcall CreateEntitiesInTransitionList(CSaveRestoreData *pSaveData, int levelMask, SpawnGroupHandle_t handle)
{
  CGameSaveRestoreInfo *v3; // r13
  int i; // r12d
  entitytable_t *EntityInfo; // rax
  int size; // ecx
  entitytable_t *v7; // rbx
  bool v8; // r14
  int m_Data; // eax
  CEntityIdentity *v10; // rcx
  CEntityIdentity *v11; // rdx
  CBasePlayer *Player; // r15
  int v13; // r9d
  const char *m_pAsString; // rdi
  CEntityIdentity *m_pEntity; // rax
  unsigned __int16 v16; // cx
  const char *v17; // r8
  CEntityIdentity *v18; // rdx
  int v19; // eax
  __int16 v20; // cx
  const char *v21; // rdx
  CEntityIdentity *v22; // rax
  unsigned __int16 v23; // cx

  v3 = &pSaveData->CGameSaveRestoreInfo;
  for ( i = 0; i < CGameSaveRestoreInfo::NumEntities(v3); ++i )
  {
    EntityInfo = CGameSaveRestoreInfo::GetEntityInfo(v3, i);
    size = EntityInfo->size;
    v7 = EntityInfo;
    EntityInfo->hEnt.m_Index = -1;
    if ( size == 0 || EntityInfo->edictindex.m_Data == 0 )
      continue;
    if ( EntityInfo->classname.u.m_Id == 0 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 2) != 0 )
        LoggingSystem_Log(LOG_SAVERESTORE, 2, "%s:  entity (%d) with data saved, but with no classname\n", "SV", i);
      continue;
    }
    v8 = (levelMask & EntityInfo->flags) != 0;
    if ( IsPlayerIndex(EntityInfo->edictindex) )
    {
      m_Data = v7->edictindex.m_Data;
      if ( m_Data <= 0x7FFE
        && (v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[m_Data >> 9]) != 0
        && (v11 = &v10[m_Data & 0x1FF]) != 0
        && m_Data == (v11->m_EHandle.m_Index & 0x7FFF)
        || !v8 )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 0) == 0 )
          goto LABEL_17;
        Player = 0;
        v13 = -1;
      }
      else
      {
        if ( v7->flags >= 0 && LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 2) != 0 )
          LoggingSystem_Log(LOG_SAVERESTORE, 2, "ENTITY IS NOT A PLAYER: %d\n", i);
        m_pAsString = "";
        if ( v7->classname.u.m_Id != 0 )
          m_pAsString = v7->classname.u.m_pAsString;
        Player = CBasePlayer::CreatePlayer(m_pAsString, v7->edictindex);
        if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 0) == 0 )
          goto LABEL_34;
        v13 = -1;
        if ( Player != 0 )
        {
          m_pEntity = Player->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v16 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            v13 = 0x7FFF;
            if ( ((((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v16 & 0x7FFF) != 0xFFFFFFFF )
              v13 = v16;
          }
          else
          {
            v13 = 0x7FFF;
          }
        }
      }
      v17 = "";
      if ( v7->classname.u.m_Id != 0 )
        v17 = v7->classname.u.m_pAsString;
      goto LABEL_33;
    }
    if ( !v8 )
      goto LABEL_17;
    v21 = "";
    if ( v7->classname.u.m_Id != 0 )
      v21 = v7->classname.u.m_pAsString;
    Player = CEntitySystem::CreateEntity(
               g_pEntitySystem,
               handle,
               v21,
               EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT,
               -1,
               -1,
               0,
               0);
    if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 0) != 0 )
    {
      v13 = -1;
      if ( Player != 0 )
      {
        v22 = Player->m_pEntity;
        if ( v22 != 0 )
        {
          v23 = 0x7FFF;
          if ( v22->m_EHandle.m_Index != -1 )
            v23 = v22->m_EHandle.m_Index & 0x7FFF;
          v13 = 0x7FFF;
          if ( ((((v22->m_EHandle.m_Index >> 15) - (v22->m_flags & 1)) << 15) | v23 & 0x7FFF) != 0xFFFFFFFF )
            v13 = v23;
        }
        else
        {
          v13 = 0x7FFF;
        }
      }
      v17 = "";
      if ( v7->classname.u.m_Id != 0 )
        v17 = v7->classname.u.m_pAsString;
LABEL_33:
      LoggingSystem_Log(LOG_SAVERESTORE, 0, "%s:  transition %s into %d\n", "SV", v17, v13);
    }
LABEL_34:
    if ( Player == 0 || (v18 = Player->m_pEntity) == 0 )
    {
LABEL_17:
      v7->hEnt.m_Index = -1;
      continue;
    }
    v19 = (v18->m_EHandle.m_Index >> 15) - (v18->m_flags & 1);
    v20 = 0x7FFF;
    if ( v18->m_EHandle.m_Index != -1 )
      v20 = v18->m_EHandle.m_Index & 0x7FFF;
    LOWORD(v7->hEnt.m_Index) = v20 | v7->hEnt.m_Index & 0x8000;
    v7->hEnt.m_Index = (v19 << 15) | v7->hEnt.m_Index & 0x7FFF;
  }
}


// CreateEntityTransitionList  (line 1309, @0x00000000020ee4c0, libserver.so)  // inlines: AddToTail, CEntityHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityHandle>, CopyConstruct<int>, Element, EnsureCapacity, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSaveRestore, GetSerialNumber, GrowMemory, IndexToIdentity, Init, IsValid, LookupEntity, Purge, ReleaseGlobalEntityDatabase, RemoveAll, Seek, String, ToCStr, memcpy, operator CEntityInstance*, operator->, operator=, operator[], ~CRestore, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CreateEntitiesInTransitionList, CEntitySaveRestoreBlockHandler::BuildGlobalEntityDatabase, CGameSaveRestoreInfo::NumEntities, CEntitySystem::ForceSetInPVSCallsIntoQueue, CGameSaveRestoreInfo::GetEntityInfo, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CEntitySaveRestoreBlockHandler::RestoreGlobalEntity, CUtlDict<CEntityHandle, int>::Purge, UTIL_EntityInSolid, CEntitySystem::QueueDestroyEntity, CUtlMemory<int, int>::Purge (19 total)
// callers: CEntity2SaveRestore::LoadAdjacentEnts
// strings: "SV", "%s:  merge changes for global entity %d %s\n", "%s:  suppress %d %s (in solid)\n", "%s:  transition %d %s\n"
// globals: g_EntitySaveRestoreBlockHandler, g_pGameEntitySystem, CEntityHandle::gm_pEntityList
int __fastcall CreateEntityTransitionList(
        CSaveRestoreData *pSaveData,
        int levelMask,
        SpawnGroupHandle_t handle,
        CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *pEntitiesRestored)
{
  int v6; // r12d
  int v7; // r13d
  entitytable_t *EntityInfo; // r12
  __int64 location; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CEntityInstance *m_pInstance; // r14
  bool v14; // zf
  int flags; // eax
  const char *m_pAsString; // r9
  CEntityIdentity *m_pEntity; // rax
  int v18; // r8d
  int v19; // edx
  uint32 v20; // r8d
  CConcreteEntityList *v21; // r10
  CEntityIdentity *v22; // rdx
  CEntityIdentity *v23; // rax
  int v24; // edx
  unsigned __int16 v25; // cx
  int v26; // esi
  CGameEntitySystem *v27; // rax
  CEntityInstance *v28; // rsi
  __int64 v29; // rdi
  CEntityIdentity *v30; // rax
  CEntityIdentity *v31; // rax
  CEntityIdentity *v32; // rdx
  __int16 v33; // cx
  int v34; // r14d
  __int64 m_Size; // r12
  int v36; // eax
  CEntityHandle *v37; // rax
  int v38; // eax
  unsigned __int64 v39; // rbx
  unsigned __int64 v40; // r14
  entitytable_t *v41; // r12
  uint32 v42; // eax
  CEntityIdentity *v43; // rdx
  CEntityIdentity *v44; // rdx
  CBaseEntity *v45; // r13
  const char *v46; // r9
  CEntityIdentity *v47; // rax
  int v48; // r8d
  int v49; // edx
  CEntityIdentity *v51; // rdx
  int v52; // eax
  int v53; // ecx
  CGameEntitySystem *v54; // rax
  CEntityIdentity *v55; // rdx
  __int16 v56; // cx
  int v57; // r13d
  __int64 v58; // r12
  int v59; // eax
  CEntityHandle *v60; // rax
  const char *v61; // r9
  CEntityIdentity *v62; // rax
  int v63; // r8d
  int v64; // edx
  __int64 v65; // r12
  int v66; // eax
  int *v67; // rax
  int movedCount; // [rsp+24h] [rbp-ACh]
  CGameSaveRestoreInfo *v71; // [rsp+38h] [rbp-98h]
  CUtlVector<int,CUtlMemory<int,int> > checkList; // [rsp+40h] [rbp-90h] BYREF
  CRestore restoreHelper; // [rsp+60h] [rbp-70h] BYREF

  CreateEntitiesInTransitionList(pSaveData, levelMask, handle);
  CEntitySaveRestoreBlockHandler::BuildGlobalEntityDatabase(&g_EntitySaveRestoreBlockHandler);
  checkList.m_Memory.m_nAllocationCount = 0;
  checkList.m_Size = 0;
  checkList.m_Memory.m_pMemory = 0;
  checkList.m_Memory.m_nGrowSize = 0;
  v71 = &pSaveData->CGameSaveRestoreInfo;
  v6 = CGameSaveRestoreInfo::NumEntities(&pSaveData->CGameSaveRestoreInfo);
  if ( v6 > 0 )
  {
    checkList.m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v6);
    checkList.m_Memory.m_nAllocationCount = v6;
  }
  CEntitySystem::ForceSetInPVSCallsIntoQueue(g_pGameEntitySystem, 1);
  v7 = 0;
  movedCount = 0;
  while ( CGameSaveRestoreInfo::NumEntities(v71) > v7 )
  {
    EntityInfo = CGameSaveRestoreInfo::GetEntityInfo(v71, v7);
    location = EntityInfo->location;
    if ( location >= 0 && location < pSaveData->bufferSize )
    {
      pSaveData->size = location;
      pSaveData->pCurrentData = &pSaveData->pBaseData[location];
    }
    m_Index = EntityInfo->hEnt.m_Index;
    if ( m_Index + 2 > 1
      && (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(EntityInfo->hEnt.m_Index) >> 9) & 0x3F]) != 0
      && (v12 = &v11[EntityInfo->hEnt.m_Index & 0x1FF]) != 0
      && m_Index == v12->m_EHandle.m_Index )
    {
      m_pInstance = v12->m_pInstance;
      v14 = v12->m_pInstance == 0;
      pSaveData->m_modelSpaceOffset = vec3_origin;
      if ( !v14 )
      {
        flags = EntityInfo->flags;
        if ( (flags & levelMask) != 0 )
        {
          if ( (flags & 0x10000000) != 0 )
          {
            if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 0) != 0 )
            {
              m_pAsString = "";
              if ( EntityInfo->classname.u.m_Id != 0 )
                m_pAsString = EntityInfo->classname.u.m_pAsString;
              m_pEntity = m_pInstance->m_pEntity;
              if ( m_pEntity == 0 )
                goto LABEL_104;
              LOWORD(v18) = 0x7FFF;
              v19 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
              if ( m_pEntity->m_EHandle.m_Index != -1 )
                LOWORD(v18) = m_pEntity->m_EHandle.m_Index & 0x7FFF;
              LOWORD(restoreHelper._vptr_IRestore) = v18 | restoreHelper._vptr_IRestore & 0x8000;
              LODWORD(restoreHelper._vptr_IRestore) = (v19 << 15) | restoreHelper._vptr_IRestore & 0x7FFF;
              if ( LODWORD(restoreHelper._vptr_IRestore) == -1 )
LABEL_104:
                v18 = 0x7FFF;
              else
                v18 = v18;
              LoggingSystem_Log(
                LOG_SAVERESTORE,
                0,
                "%s:  merge changes for global entity %d %s\n",
                "SV",
                v18,
                m_pAsString);
            }
            if ( CEntitySaveRestoreBlockHandler::RestoreGlobalEntity(
                   &g_EntitySaveRestoreBlockHandler,
                   m_pInstance,
                   pSaveData,
                   EntityInfo,
                   handle) <= 0 )
            {
              CEntitySystem::QueueDestroyEntity(g_pEntitySystem, m_pInstance);
            }
            else
            {
              v20 = EntityInfo->hEnt.m_Index;
              ++movedCount;
              v21 = CEntityHandle::gm_pEntityList;
              if ( v20 + 2 > 1
                && (v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(EntityInfo->hEnt.m_Index) >> 9)
                                                                         & 0x3F]) != 0
                && (v23 = &v22[EntityInfo->hEnt.m_Index & 0x1FF]) != 0
                && v20 == v23->m_EHandle.m_Index )
              {
                v24 = (v20 >> 15) - (v23->m_flags & 1);
              }
              else
              {
                v24 = 124;
                v23 = 0;
              }
              v25 = v23->m_EHandle.m_Index & 0x7FFF;
              v26 = v25;
              LOWORD(restoreHelper._vptr_IRestore) = v25 | restoreHelper._vptr_IRestore & 0x8000;
              LODWORD(restoreHelper._vptr_IRestore) = (v24 << 15) | restoreHelper._vptr_IRestore & 0x7FFF;
              if ( LODWORD(restoreHelper._vptr_IRestore) == -1 )
                v26 = 0x7FFF;
              v27 = g_pGameEntitySystem;
              EntityInfo->restoreentityindex.m_Data = v26;
              v28 = 0;
              v29 = *(&stru_1A0B8.r_offset + v27);
              if ( v20 + 2 > 1 )
              {
                v30 = v21->m_pIdentityChunks[(LOWORD(EntityInfo->hEnt.m_Index) >> 9) & 0x3F];
                if ( v30 != 0 )
                {
                  v31 = &v30[EntityInfo->hEnt.m_Index & 0x1FF];
                  if ( v31 != 0 && v20 == v31->m_EHandle.m_Index )
                    v28 = v31->m_pInstance;
                }
              }
              (*(*v29 + 48LL))(v29, v28);
              v32 = m_pInstance->m_pEntity;
              if ( v32 != 0 )
              {
                v33 = 0x7FFF;
                if ( v32->m_EHandle.m_Index != -1 )
                  v33 = v32->m_EHandle.m_Index & 0x7FFF;
                v34 = (((v32->m_EHandle.m_Index >> 15) - (v32->m_flags & 1)) << 15) | v33 & 0x7FFF;
                LODWORD(restoreHelper._vptr_IRestore) = v34;
              }
              else
              {
                v34 = -1;
              }
              m_Size = pEntitiesRestored->m_Size;
              v36 = pEntitiesRestored->m_Size;
              if ( m_Size == pEntitiesRestored->m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CEntityHandle,int>::Grow(&pEntitiesRestored->m_Memory, 1);
                v36 = pEntitiesRestored->m_Size;
              }
              pEntitiesRestored->m_Size = v36 + 1;
              v37 = &pEntitiesRestored->m_Memory.m_pMemory[m_Size];
              if ( v37 != 0 )
                v37->m_Index = v34;
            }
          }
          else
          {
            if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 0) != 0 )
            {
              v61 = "";
              if ( EntityInfo->classname.u.m_Id != 0 )
                v61 = EntityInfo->classname.u.m_pAsString;
              v62 = m_pInstance->m_pEntity;
              if ( v62 == 0 )
                goto LABEL_103;
              LOWORD(v63) = 0x7FFF;
              v64 = (v62->m_EHandle.m_Index >> 15) - (v62->m_flags & 1);
              if ( v62->m_EHandle.m_Index != -1 )
                LOWORD(v63) = v62->m_EHandle.m_Index & 0x7FFF;
              LOWORD(restoreHelper._vptr_IRestore) = v63 | restoreHelper._vptr_IRestore & 0x8000;
              LODWORD(restoreHelper._vptr_IRestore) = (v64 << 15) | restoreHelper._vptr_IRestore & 0x7FFF;
              if ( LODWORD(restoreHelper._vptr_IRestore) == -1 )
LABEL_103:
                v63 = 0x7FFF;
              else
                v63 = v63;
              LoggingSystem_Log(LOG_SAVERESTORE, 0, "%s:  transition %d %s\n", "SV", v63, v61);
            }
            CRestore::CRestore(&restoreHelper, pSaveData);
            if ( CEntitySaveRestoreBlockHandler::RestoreEntity(
                   &g_EntitySaveRestoreBlockHandler,
                   m_pInstance,
                   &restoreHelper,
                   EntityInfo,
                   handle) < 0 )
            {
              CEntitySystem::QueueDestroyEntity(g_pEntitySystem, m_pInstance);
            }
            else
            {
              v65 = checkList.m_Size;
              v66 = checkList.m_Size;
              if ( checkList.m_Size == checkList.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<int,int>::Grow(&checkList.m_Memory, 1);
                v66 = checkList.m_Size;
              }
              checkList.m_Size = v66 + 1;
              v67 = &checkList.m_Memory.m_pMemory[v65];
              if ( v67 != 0 )
                *v67 = v7;
            }
            restoreHelper.m_BlockEndStack.m_Size = 0;
            restoreHelper._vptr_IRestore = &off_3FF5F30;
            if ( (restoreHelper.m_BlockEndStack.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            {
              CUtlMemory<int,int>::Purge(&restoreHelper.m_BlockEndStack.m_Memory);
              if ( (restoreHelper.m_BlockEndStack.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                CUtlMemory<int,int>::Purge(&restoreHelper.m_BlockEndStack.m_Memory);
            }
          }
        }
      }
    }
    else
    {
      pSaveData->m_modelSpaceOffset = vec3_origin;
    }
    ++v7;
  }
  CEntitySystem::ForceSetInPVSCallsIntoQueue(g_pGameEntitySystem, 0);
  CUtlDict<CEntityHandle,int>::Purge(&g_EntitySaveRestoreBlockHandler.m_GlobalEntityDict);
  g_EntitySaveRestoreBlockHandler.m_bGlobalEntityDatabaseValid = 0;
  v38 = checkList.m_Size - 1;
  if ( checkList.m_Size - 1 >= 0 )
  {
    v39 = 4LL * v38;
    v40 = 4 * (v38 - v38) - 4;
    do
    {
      while ( 1 )
      {
        v41 = CGameSaveRestoreInfo::GetEntityInfo(v71, checkList.m_Memory.m_pMemory[v39 / 4]);
        v42 = v41->hEnt.m_Index;
        if ( v42 + 2 > 1 )
        {
          v43 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v41->hEnt.m_Index) >> 9) & 0x3F];
          if ( v43 != 0 )
          {
            v44 = &v43[v41->hEnt.m_Index & 0x1FF];
            if ( v44 != 0 && v42 == v44->m_EHandle.m_Index )
            {
              v45 = v44->m_pInstance;
              if ( v44->m_pInstance != 0 && (v45->m_pEntity->m_flags & 0x200) == 0 )
                break;
            }
          }
        }
LABEL_49:
        v39 -= 4LL;
        if ( v39 == v40 )
          goto LABEL_68;
      }
      if ( v41->flags < 0 || UTIL_EntityInSolid(v44->m_pInstance) == 0 )
      {
        v41->flags = 0x40000000;
        v51 = v45->m_pEntity;
        ++movedCount;
        if ( v51 == 0 )
          goto LABEL_101;
        v52 = (v51->m_EHandle.m_Index >> 15) - (v51->m_flags & 1);
        LOWORD(v53) = 0x7FFF;
        if ( v51->m_EHandle.m_Index != -1 )
          LOWORD(v53) = v51->m_EHandle.m_Index & 0x7FFF;
        v53 = v53;
        LOWORD(restoreHelper._vptr_IRestore) = v53 | restoreHelper._vptr_IRestore & 0x8000;
        LODWORD(restoreHelper._vptr_IRestore) = (v52 << 15) | restoreHelper._vptr_IRestore & 0x7FFF;
        if ( LODWORD(restoreHelper._vptr_IRestore) == -1 )
LABEL_101:
          v53 = 0x7FFF;
        v54 = g_pGameEntitySystem;
        v41->restoreentityindex.m_Data = v53;
        (*(**(&stru_1A0B8.r_offset + v54) + 48LL))(*(&stru_1A0B8.r_offset + v54), v45);
        v55 = v45->m_pEntity;
        if ( v55 != 0 )
        {
          v56 = 0x7FFF;
          if ( v55->m_EHandle.m_Index != -1 )
            v56 = v55->m_EHandle.m_Index & 0x7FFF;
          v57 = (((v55->m_EHandle.m_Index >> 15) - (v55->m_flags & 1)) << 15) | v56 & 0x7FFF;
          LODWORD(restoreHelper._vptr_IRestore) = v57;
        }
        else
        {
          v57 = -1;
        }
        v58 = pEntitiesRestored->m_Size;
        v59 = pEntitiesRestored->m_Size;
        if ( v58 == pEntitiesRestored->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CEntityHandle,int>::Grow(&pEntitiesRestored->m_Memory, 1);
          v59 = pEntitiesRestored->m_Size;
        }
        pEntitiesRestored->m_Size = v59 + 1;
        v60 = &pEntitiesRestored->m_Memory.m_pMemory[v58];
        if ( v60 != 0 )
          v60->m_Index = v57;
        goto LABEL_49;
      }
      if ( LoggingSystem_IsChannelEnabled(LOG_SAVERESTORE, 0) != 0 )
      {
        v46 = "";
        if ( v41->classname.u.m_Id != 0 )
          v46 = v41->classname.u.m_pAsString;
        v47 = v45->m_pEntity;
        if ( v47 == 0 )
          goto LABEL_106;
        LOWORD(v48) = 0x7FFF;
        v49 = (v47->m_EHandle.m_Index >> 15) - (v47->m_flags & 1);
        if ( v47->m_EHandle.m_Index != -1 )
          LOWORD(v48) = v47->m_EHandle.m_Index & 0x7FFF;
        LOWORD(restoreHelper._vptr_IRestore) = v48 | restoreHelper._vptr_IRestore & 0x8000;
        LODWORD(restoreHelper._vptr_IRestore) = (v49 << 15) | restoreHelper._vptr_IRestore & 0x7FFF;
        if ( LODWORD(restoreHelper._vptr_IRestore) == -1 )
LABEL_106:
          v48 = 0x7FFF;
        else
          v48 = v48;
        LoggingSystem_Log(LOG_SAVERESTORE, 0, "%s:  suppress %d %s (in solid)\n", "SV", v48, v46);
      }
      CEntitySystem::QueueDestroyEntity(g_pEntitySystem, v45);
      v39 -= 4LL;
    }
    while ( v39 != v40 );
  }
LABEL_68:
  if ( (checkList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&checkList.m_Memory);
    if ( (checkList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&checkList.m_Memory);
  }
  return movedCount;
}


// dumpsavedir  (line 1412, @0x000000000209d700, libserver.so)
// calls: DumpSaveRestoreDirctory
void __fastcall dumpsavedir(const CCommandContext *const ctx, const CCommand *const args)
{
  DumpSaveRestoreDirctory();
}


