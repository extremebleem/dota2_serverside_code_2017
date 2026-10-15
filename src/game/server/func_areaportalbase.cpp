
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFuncAreaPortalBase::GetDataDescMap  (line 25, @0x000000000221a400, libserver.so)
// globals: CFuncAreaPortalBase::m_DataMap
datamap_t *__fastcall CFuncAreaPortalBase::GetDataDescMap(CFuncAreaPortalBase *const this)
{
  return &CFuncAreaPortalBase::m_DataMap;
}


// CFuncAreaPortalBase::AddDatadescMetadataKeys  (line 25, @0x0000000002226650, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFuncAreaPortalBase::GetEntityClass(void)
void __fastcall CFuncAreaPortalBase::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFuncAreaPortalBase::GetEntityClass);
}


// CFuncAreaPortalBase::GetBaseMap  (line 25, @0x0000000002226670, libserver.so)
datamap_t *__cdecl CFuncAreaPortalBase::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CFuncAreaPortalBase>  (line 25, @0x0000000002226680, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_05.cpp
// strings: "CFuncAreaPortalBase"
// globals: `guard variable for'DataMapInit<CFuncAreaPortalBase>(CFuncAreaPortalBase *)::nameHolder, CFuncAreaPortalBase::GetEntityClass(void), CFuncAreaPortalBase::m_DataMap, DataMapInit<CFuncAreaPortalBase>(CFuncAreaPortalBase *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFuncAreaPortalBase>(CFuncAreaPortalBase *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFuncAreaPortalBase>(CFuncAreaPortalBase *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncAreaPortalBase>(CFuncAreaPortalBase *)::nameHolder) != 0 )
  {
    DataMapInit<CFuncAreaPortalBase>(CFuncAreaPortalBase *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFuncAreaPortalBase>(CFuncAreaPortalBase *)::nameHolder.m_pszBase = "CFuncAreaPortalBase";
    DataMapInit<CFuncAreaPortalBase>(CFuncAreaPortalBase *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFuncAreaPortalBase>(CFuncAreaPortalBase *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFuncAreaPortalBase>(CFuncAreaPortalBase *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFuncAreaPortalBase>(CFuncAreaPortalBase *)::nameHolder.m_nLenBase = 19;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncAreaPortalBase>(CFuncAreaPortalBase *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFuncAreaPortalBase>(CFuncAreaPortalBase *)::nameHolder,
      &_dso_handle);
  }
  CFuncAreaPortalBase::m_DataMap.dataNumFields = 3;
  CFuncAreaPortalBase::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  CFuncAreaPortalBase::m_DataMap.dataDesc = &DataMapInit<CFuncAreaPortalBase>(CFuncAreaPortalBase *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFuncAreaPortalBase::m_DataMap, CFuncAreaPortalBase::GetEntityClass);
  return &CFuncAreaPortalBase::m_DataMap;
}


// CFuncAreaPortalBase::CFuncAreaPortalBase  (line 37, @0x000000000223b2a0, libserver.so)  // inlines: AddToTail, CopyConstruct<CFuncAreaPortalBase*>, InsertBefore, InternalElement, LinkBefore, operator[]
// calls: CBaseModelEntity::CBaseModelEntity, CUtlLinkedList<CFuncAreaPortalBase*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CFuncAreaPortalBase*, short unsigned int>, short unsigned int> >::AllocInternal, CUtlLinkedList<CFuncAreaPortalBase*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CFuncAreaPortalBase*, short unsigned int>, short unsigned int> >::Unlink, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume
// callers: CFuncAreaPortalBase::CEntityInstanceEntityClass::ConstructInstance, CAreaPortal::CAreaPortal, CAreaPortal::CEntityInstanceEntityClass::ConstructInstance, CFuncAreaPortalWindow::CFuncAreaPortalWindow
// globals: g_AreaPortals
void __fastcall CFuncAreaPortalBase::CFuncAreaPortalBase(CFuncAreaPortalBase *const this)
{
  unsigned __int16 v2; // ax
  unsigned __int16 v3; // r12
  UtlLinkedListElem_t<CFuncAreaPortalBase*,short unsigned int> *m_pMemory; // rcx
  UtlLinkedListElem_t<CFuncAreaPortalBase*,short unsigned int> *v5; // rax
  __int64 m_Tail; // rdx
  bool v7; // zf

  CBaseModelEntity::CBaseModelEntity(this);
  this->_vptr_IHandleEntity = &off_40409F0;
  this->m_portalNumber = -1;
  v2 = CUtlLinkedList<CFuncAreaPortalBase *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CFuncAreaPortalBase *,unsigned short>,unsigned short>>::AllocInternal(
         &g_AreaPortals,
         0);
  v3 = v2;
  if ( v2 != 0xFFFF )
  {
    CUtlLinkedList<CFuncAreaPortalBase *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CFuncAreaPortalBase *,unsigned short>,unsigned short>>::Unlink(
      &g_AreaPortals,
      v2);
    m_pMemory = g_AreaPortals.m_Memory.m_pMemory;
    v5 = &g_AreaPortals.m_Memory.m_pMemory[v3];
    v5->m_Next = -1;
    m_Tail = g_AreaPortals.m_Tail;
    v7 = g_AreaPortals.m_Tail == 0xFFFF;
    v5->m_Previous = g_AreaPortals.m_Tail;
    g_AreaPortals.m_Tail = v3;
    if ( v7 )
      g_AreaPortals.m_Head = v3;
    else
      m_pMemory[m_Tail].m_Next = v3;
    ++g_AreaPortals.m_ElementCount;
    v5->m_Element = this;
  }
  this->m_AreaPortalsElement = v3;
  this->m_iPortalVersion = 0;
}


// CFuncAreaPortalBase::~CFuncAreaPortalBase  (line 45, @0x0000000002237ae0, libserver.so)  // inlines: Free, InternalElement, Remove, operator[]
// calls: CUtlLinkedList<CFuncAreaPortalBase*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CFuncAreaPortalBase*, short unsigned int>, short unsigned int> >::Unlink, CBaseModelEntity::~CBaseModelEntity
// callers: CFuncAreaPortalBase::~CFuncAreaPortalBase, CFuncAreaPortalWindow::~CFuncAreaPortalWindow, CAreaPortal::~CAreaPortal
// globals: g_AreaPortals
void __fastcall CFuncAreaPortalBase::~CFuncAreaPortalBase(CFuncAreaPortalBase *const this)
{
  unsigned __int16 m_AreaPortalsElement; // r12

  m_AreaPortalsElement = this->m_AreaPortalsElement;
  this->_vptr_IHandleEntity = &off_40409F0;
  CUtlLinkedList<CFuncAreaPortalBase *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CFuncAreaPortalBase *,unsigned short>,unsigned short>>::Unlink(
    &g_AreaPortals,
    m_AreaPortalsElement);
  g_AreaPortals.m_Memory.m_pMemory[m_AreaPortalsElement].m_Next = g_AreaPortals.m_FirstFree;
  g_AreaPortals.m_FirstFree = m_AreaPortalsElement;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFuncAreaPortalBase::~CFuncAreaPortalBase  (line 45, @0x0000000002237b40, libserver.so)
// calls: CFuncAreaPortalBase::~CFuncAreaPortalBase, CBaseEntity::operator delete
void __fastcall CFuncAreaPortalBase::~CFuncAreaPortalBase(CFuncAreaPortalBase *const this)
{
  CFuncAreaPortalBase::~CFuncAreaPortalBase(this);
  CBaseEntity::operator delete(this);
}


// CFuncAreaPortalBase::UpdateVisibility  (line 51, @0x000000000221d7d0, libserver.so)  // inlines: DistTo, Dot, DotProduct, operator[]
// calls: CEntitySystem::GetActiveSpawnGroupHandle
// callers: CFuncAreaPortalBase::UpdateVisibility, CAreaPortal::UpdateVisibility, CFuncAreaPortalWindow::UpdateVisibility
__int64 __fastcall CFuncAreaPortalBase::UpdateVisibility(
        CFuncAreaPortalBase *const this,
        const CUtlVector<Vector,CUtlMemory<Vector,int> > *const vecOrigins,
        float fovDistanceAdjustFactor,
        bool *const bIsOpenOnClient)
{
  int (*v6)(...); // r12
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // eax
  __int64 v8; // r9
  __int64 v9; // r12
  int v10; // r15d
  Vector *v11; // rbx
  __int64 v13; // [rsp+8h] [rbp-48h]
  VPlane plane; // [rsp+10h] [rbp-40h] BYREF

  v6 = *g_pPVSManager->_vptr_IPVSManager;
  ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
  v8 = (v6)(g_pPVSManager, ActiveSpawnGroupHandle);
  if ( v8 == 0 || vecOrigins->m_Size <= 0 )
    return 0;
  v9 = 0;
  v10 = 0;
  while ( 1 )
  {
    v11 = &vecOrigins->m_Memory.m_pMemory[v9];
    v13 = v8;
    if ( (*(*v8 + 144LL))(v8, v11, this->m_portalNumber, &plane) == 0
      || (((((v11->x * plane.m_Normal.x) + (v11->y * plane.m_Normal.y)) + (v11->z * plane.m_Normal.z)) - plane.m_Dist)
        + 80.0) > 0.0 )
    {
      break;
    }
    ++v10;
    ++v9;
    v8 = v13;
    if ( v10 >= vecOrigins->m_Size )
      return 0;
  }
  return 1;
}


// CFuncAreaPortalBase::UpdateVisibility  (line 51, @0x000000000221d8f0, libserver.so)
// calls: CFuncAreaPortalBase::UpdateVisibility
__int64 __fastcall CFuncAreaPortalBase::UpdateVisibility(
        CFuncAreaPortalBase *const this,
        const CUtlVector<Vector,CUtlMemory<Vector,int> > *const vecOrigins,
        float fovDistanceAdjustFactor,
        bool *const bIsOpenOnClient)
{
  if ( this->m_portalNumber == -1 )
    return 0;
  else
    return CFuncAreaPortalBase::UpdateVisibility(this, vecOrigins, fovDistanceAdjustFactor, bIsOpenOnClient);
}


