
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseFlex::FindSceneFile  (line 20, @0x0000000001ed7cc0, libserver.so)  // inlines: CUtlString, String, StringAfterPrefix<char const>, StringHasPrefix, V_ComposeFileName<long unsigned int>, V_FixupPathName<long unsigned int>, V_StripExtension<long unsigned int>, V_StripLastDir<long unsigned int>, V_strlen, V_strncpy<long unsigned int>, ~CUtlString
// calls: CBaseAnimating::GetModelPtr, CModel::pszName, _V_StringAfterPrefix, _V_strncpy, CUtlString::Set, CUtlString::Replace, CUtlString::FreeMemoryBlock, CUtlString::Get, _V_StripExtension, _V_FixupPathName, _V_StripLastDir, _V_ComposeFileName (14 total)
// callers: CBaseFlex::ProcessFlexSettingSceneEvent
// strings: "heroes_staging"
// globals: CBaseFlex::FindSceneFile(char const*)::szExtendedName
const flexsettinghdr_t *__fastcall CBaseFlex::FindSceneFile(CBaseFlex *const this, const char *filename)
{
  const CModel *ModelPtr; // rax
  const char *v5; // rax
  const char *v6; // r14
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  const char *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  char *v15; // rdx
  int v16; // ecx
  unsigned int v17; // eax
  const flexsettinghdr_t *result; // rax
  IFlexSceneFileManager *v19; // rdi
  CUtlString s; // [rsp+0h] [rbp-160h] BYREF
  CUtlString v21; // [rsp+10h] [rbp-150h] BYREF
  char szExtendedPath[264]; // [rsp+20h] [rbp-140h] BYREF
  unsigned __int64 v23; // [rsp+128h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  ModelPtr = CBaseAnimating::GetModelPtr(this);
  if ( ModelPtr != 0 && (v5 = CModel::pszName(ModelPtr), v6 = v5, v5 != 0) )
  {
    if ( _V_StringAfterPrefix(v5, "models") != 0 )
    {
      v9 = _V_StringAfterPrefix(v6, "models");
      _V_strncpy(szExtendedPath, v9 + 1, 260, v10, v11);
    }
    else
    {
      _V_strncpy(szExtendedPath, v6, 260, v7, v8);
    }
    if ( _V_StringAfterPrefix(szExtendedPath, "heroes_staging") != 0 )
    {
      v21.m_pString = 0;
      CUtlString::Set(&v21, szExtendedPath);
      CUtlString::Replace(&v21, "heroes_staging", "heroes", 0);
      if ( v21.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&v21);
      v12 = CUtlString::Get(&s);
      _V_strncpy(szExtendedPath, v12, 260, v13, v14);
      if ( s.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&s);
    }
    _V_StripExtension(szExtendedPath, szExtendedPath, 260);
    _V_FixupPathName(szExtendedPath, 260, szExtendedPath, 1);
    do
    {
      v15 = szExtendedPath;
      do
      {
        v16 = *v15;
        v15 += 4;
        v17 = ~v16 & (v16 - 16843009) & 0x80808080;
      }
      while ( v17 == 0 );
      if ( (~v16 & (v16 - 16843009) & 0x8080) == 0 )
      {
        v17 >>= 16;
        v15 += 2;
      }
      if ( (&v15[-__CFADD__(v17, v17) - 3] - szExtendedPath) <= 2 )
        break;
      _V_ComposeFileName(szExtendedPath, filename, CBaseFlex::FindSceneFile(char const*)::szExtendedName, 260);
      result = g_pFlexSceneFileManager->FindSceneFile(this,
                 CBaseFlex::FindSceneFile(char const*)::szExtendedName,
                 0);
      if ( result != 0 )
        return result;
    }
    while ( _V_StripLastDir(szExtendedPath, 260) != 0 );
    v19 = g_pFlexSceneFileManager;
  }
  else
  {
    v19 = g_pFlexSceneFileManager;
  }
  return v19->FindSceneFile(this, filename, 0);
}


// CBaseFlex::SetViewtarget  (line 84, @0x0000000001ed7f40, libserver.so)  // inlines: NetworkStateChanged, Set, operator!=, operator=
void __fastcall CBaseFlex::SetViewtarget(CBaseFlex *const this, const Vector *const viewtarget)
{
  if ( viewtarget->x != this->m_viewtarget.m_Value.x
    || viewtarget->y != this->m_viewtarget.m_Value.y
    || viewtarget->z != this->m_viewtarget.m_Value.z )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1240, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_viewtarget.m_Value.x = viewtarget->x;
    this->m_viewtarget.m_Value.y = viewtarget->y;
    this->m_viewtarget.m_Value.z = viewtarget->z;
  }
}


// CBaseFlex::RemoveSceneEvent  (line 94, @0x0000000001ee0500, libserver.so)
// calls: operator delete, CUtlVectorBase<CSceneEventInfo*, CUtlMemory<CSceneEventInfo*, int> >::Remove
// callers: CSceneEntity::DispatchEndExpression, CSceneEntity::DispatchEndFlexAnimation, CSceneEntity::DispatchEndGeneric, CSceneEntity::DispatchEndLookAt, CSceneEntity::DispatchEndMoveTo, CSceneEntity::DispatchEndFace, CSceneEntity::DispatchEndSequence, CSceneEntity::DispatchEndSpeak, CSceneEntity::DispatchEndGesture
void __fastcall CBaseFlex::RemoveSceneEvent(
        CBaseFlex *const this,
        CChoreoScene *scene,
        CChoreoEvent *event,
        bool fastKill,
        bool bCancel)
{
  _BOOL4 v5; // r8d
  _BOOL4 v6; // r9d
  CUtlVector<CSceneEventInfo*,CUtlMemory<CSceneEventInfo*,int> > *p_m_SceneEvents; // r10
  __int64 i; // rbx
  CSceneEventInfo *v12; // r13
  char v13; // al
  CUtlVector<CSceneEventInfo*,CUtlMemory<CSceneEventInfo*,int> > *v14; // [rsp+8h] [rbp-48h]
  _BOOL4 v15; // [rsp+8h] [rbp-48h]
  _BOOL4 v16; // [rsp+14h] [rbp-3Ch]
  _BOOL4 v17; // [rsp+18h] [rbp-38h]
  CUtlVectorBase<CSceneEventInfo*,CUtlMemory<CSceneEventInfo*,int> > *v18; // [rsp+18h] [rbp-38h]

  v5 = bCancel;
  v6 = fastKill;
  p_m_SceneEvents = &this->m_SceneEvents;
  for ( i = 0; i < this->m_SceneEvents.m_Size; ++i )
  {
    v12 = this->m_SceneEvents.m_Memory.m_pMemory[i];
    if ( v12->m_pScene == scene && v12->m_pEvent == event )
    {
      v14 = p_m_SceneEvents;
      v16 = bCancel;
      v17 = v6;
      v13 = (*(this->_vptr_IHandleEntity + 255))(this, v12, v6, bCancel);
      v6 = v17;
      *&bCancel = v16;
      p_m_SceneEvents = v14;
      if ( v13 != 0 )
      {
        v15 = v17;
        v18 = p_m_SceneEvents;
        operator delete(v12);
        CUtlVectorBase<CSceneEventInfo *,CUtlMemory<CSceneEventInfo *,int>>::Remove(v18, i);
        v6 = v15;
        *&bCancel = v16;
        p_m_SceneEvents = v18;
      }
    }
  }
}


// CBaseFlex::CheckSceneEvent  (line 124, @0x0000000001ed7fe0, libserver.so)
// callers: CSceneEntity::CheckEvent
bool __fastcall CBaseFlex::CheckSceneEvent(
        CBaseFlex *const this,
        double currenttime,
        CChoreoScene *scene,
        CChoreoEvent *event)
{
  int m_Size; // r9d
  CSceneEventInfo **m_pMemory; // r10
  __int64 v6; // rax
  CSceneEventInfo *v7; // r8

  m_Size = this->m_SceneEvents.m_Size;
  if ( m_Size <= 0 )
    return 1;
  m_pMemory = this->m_SceneEvents.m_Memory.m_pMemory;
  v6 = 0;
  while ( 1 )
  {
    v7 = m_pMemory[v6];
    if ( v7->m_pScene == scene && v7->m_pEvent == event )
      break;
    if ( m_Size <= ++v6 )
      return 1;
  }
  return (*(this->_vptr_IHandleEntity + 256))(this, m_pMemory[v6], scene, event, currenttime);
}


// CBaseFlex::FlexControllerLocalToGlobal  (line 150, @0x0000000001ee9690, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Element, FS_LocalToGlobal_t, Find, Get, GetClassNameAsCStr, GetClassname, LeafCodeInfo_t, LeftChild, Node_t, Purge, RemoveAll, RightChild, String, entindex, operator(), operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~FS_LocalToGlobal_t, ~Node_t
// calls: CEntityInstance::GetEntityIndex, Warning, CBaseFlex::EnsureTranslations, CUtlMemory<LocalFlexController_t, int>::Purge, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, CUtlVectorBase<LocalFlexController_t, CUtlMemory<LocalFlexController_t, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CBaseFlex::AddFlexSetting
// strings: "Unable to find mapping for flexcontroller %i, settings %p on %i/%s\n", "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/shared/baseflex_, "FlexControllerLocalToGlobal", "CBaseFlex::FlexControllerLocalToGlobal failed!\n"
LocalFlexController_t __fastcall CBaseFlex::FlexControllerLocalToGlobal(
        const CBaseFlex *const this,
        const flexsettinghdr_t *pSettinghdr,
        int key)
{
  int m_Root; // r12d
  UtlRBTreeNode_t<CUtlMap<const flexsettinghdr_t*,FS_LocalToGlobal_t,short unsigned int>::Node_t,short unsigned int> *m_pMemory; // rax
  unsigned __int64 v6; // r14
  unsigned int v7; // eax
  __int64 v8; // rax
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // r12
  CEntityIndex v11; // eax
  int m_Left; // r12d
  UtlRBTreeNode_t<CUtlMap<const flexsettinghdr_t*,FS_LocalToGlobal_t,short unsigned int>::Node_t,short unsigned int> *v13; // rax
  unsigned __int64 v14; // r14
  unsigned int v15; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  int v21; // ebx
  int v22; // edx
  int v23; // ecx
  int v24; // esi
  int v25; // r8d
  int v26; // r9d
  LeafCodeInfo_t v29; // [rsp+10h] [rbp-50h] BYREF
  int v30; // [rsp+28h] [rbp-38h]
  int v31; // [rsp+2Ch] [rbp-34h]

  m_Root = this->m_LocalToGlobal.m_Tree.m_Root;
  v29.m_nLine = 0;
  v29.m_szFunction = 0;
  v30 = 0;
  v31 = 0;
  v29.m_szFile = pSettinghdr;
  if ( m_Root == 0xFFFF )
  {
    v29.m_nLine = 0;
    m_Root = 0xFFFF;
LABEL_23:
    CUtlMemory<LocalFlexController_t,int>::Purge(&v29.m_szFunction);
    if ( (v31 & 0xC0000000) == 0 )
      CUtlMemory<LocalFlexController_t,int>::Purge(&v29.m_szFunction);
    goto LABEL_9;
  }
  m_pMemory = this->m_LocalToGlobal.m_Tree.m_Elements.m_pMemory;
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = m_Root;
      if ( !this->m_LocalToGlobal.m_Tree.m_LessFunc.m_LessFunc(&v29, &m_pMemory[v6].m_Data) )
        break;
      m_pMemory = this->m_LocalToGlobal.m_Tree.m_Elements.m_pMemory;
      m_Root = m_pMemory[m_Root].m_Left;
      if ( m_Root == 0xFFFF )
        goto LABEL_7;
    }
    if ( !this->m_LocalToGlobal.m_Tree.m_LessFunc.m_LessFunc(
            &this->m_LocalToGlobal.m_Tree.m_Elements.m_pMemory[v6].m_Data,
            &v29) )
      break;
    m_pMemory = this->m_LocalToGlobal.m_Tree.m_Elements.m_pMemory;
    m_Root = m_pMemory[v6].m_Right;
    if ( m_Root == 0xFFFF )
    {
LABEL_7:
      m_Root = 0xFFFF;
      v7 = v31 & 0xC0000000;
      goto LABEL_8;
    }
  }
  v7 = v31 & 0xC0000000;
LABEL_8:
  v29.m_nLine = 0;
  if ( v7 == 0 )
    goto LABEL_23;
LABEL_9:
  v8 = m_Root;
  if ( m_Root != 0xFFFF )
    return this->m_LocalToGlobal.m_Tree.m_Elements.m_pMemory[v8].m_Data.elem.m_Mapping.m_Memory.m_pMemory[key];
  m_pEntity = this->m_pEntity;
  m_pAsString = "";
  if ( m_pEntity->m_designerName.u.m_Id != 0 )
    m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
  v11.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  Warning(
    "Unable to find mapping for flexcontroller %i, settings %p on %i/%s\n",
    key,
    pSettinghdr,
    v11.m_Data,
    m_pAsString);
  CBaseFlex::EnsureTranslations(this, pSettinghdr);
  m_Left = this->m_LocalToGlobal.m_Tree.m_Root;
  v29.m_nLine = 0;
  v29.m_szFunction = 0;
  v30 = 0;
  v31 = 0;
  v29.m_szFile = pSettinghdr;
  if ( m_Left == 0xFFFF )
  {
    v29.m_nLine = 0;
    m_Left = 0xFFFF;
  }
  else
  {
    v13 = this->m_LocalToGlobal.m_Tree.m_Elements.m_pMemory;
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = m_Left;
        if ( !this->m_LocalToGlobal.m_Tree.m_LessFunc.m_LessFunc(&v29, &v13[v14].m_Data) )
          break;
        v13 = this->m_LocalToGlobal.m_Tree.m_Elements.m_pMemory;
        m_Left = v13[m_Left].m_Left;
        if ( m_Left == 0xFFFF )
          goto LABEL_18;
      }
      if ( !this->m_LocalToGlobal.m_Tree.m_LessFunc.m_LessFunc(
              &this->m_LocalToGlobal.m_Tree.m_Elements.m_pMemory[v14].m_Data,
              &v29) )
        break;
      v13 = this->m_LocalToGlobal.m_Tree.m_Elements.m_pMemory;
      m_Left = v13[v14].m_Right;
      if ( m_Left == 0xFFFF )
      {
LABEL_18:
        m_Left = 0xFFFF;
        v15 = v31 & 0xC0000000;
        goto LABEL_19;
      }
    }
    v15 = v31 & 0xC0000000;
LABEL_19:
    v29.m_nLine = 0;
    if ( v15 != 0 )
      goto LABEL_20;
  }
  CUtlMemory<LocalFlexController_t,int>::Purge(&v29.m_szFunction);
  if ( (v31 & 0xC0000000) == 0 )
    CUtlMemory<LocalFlexController_t,int>::Purge(&v29.m_szFunction);
LABEL_20:
  v8 = m_Left;
  if ( m_Left == 0xFFFF )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v29.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/shared/baseflex_shared.cpp";
      v29.m_szFunction = "FlexControllerLocalToGlobal";
      v29.m_nLine = 162;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v29,
        "CBaseFlex::FlexControllerLocalToGlobal failed!\n");
    }
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v19, v20, v17, v18) != 0 )
      loc_0 = -559038737;
    v21 = Plat_ExitProcess(1);
    CUtlVectorBase<LocalFlexController_t,CUtlMemory<LocalFlexController_t,int>>::~CUtlVectorBase(&v29.m_nLine);
    Unwind_Resume(v21, v24, v22, v23, v25, v26, pSettinghdr);
  }
  return this->m_LocalToGlobal.m_Tree.m_Elements.m_pMemory[v8].m_Data.elem.m_Mapping.m_Memory.m_pMemory[key];
}


// CBaseFlex::FindFlexController  (line 171, @0x0000000001ed8040, libserver.so)
// calls: CBaseAnimating::GetFlexControllerName, V_stricmp_fast, CBaseAnimating::GetNumFlexControllers
// callers: CBaseFlex::EnsureTranslations, CBaseFlex::AddFlexAnimation, CBasePlayerAnimState::OnNewModel
LocalFlexController_t __fastcall CBaseFlex::FindFlexController(const CBaseFlex *const this, const char *szName)
{
  LocalFlexController_t v4; // ebx
  LocalFlexController_t v5; // esi
  const char *FlexControllerName; // rax
  LocalFlexController_t v7; // r13d

  v4 = 0;
  do
  {
    v7 = v4;
    if ( v4 >= CBaseAnimating::GetNumFlexControllers(this) )
      return LocalFlexController_t::DUMMY_FLEX_CONTROLLER|0x80000000;
    v5 = v4++;
    FlexControllerName = CBaseAnimating::GetFlexControllerName(this, v5);
  }
  while ( V_stricmp_fast(FlexControllerName, szName) != 0 );
  return v7;
}


// CBaseFlex::StartChoreoScene  (line 188, @0x0000000001ee7db0, libserver.so)  // inlines: AddToTail, CopyConstruct<CChoreoScene*>, Element, GrowMemory, operator[]
// calls: CUtlVectorBase<CChoreoScene*, CUtlMemory<CChoreoScene*, int> >::Find, CUtlMemory<CChoreoScene*, int>::Grow
// callers: CSceneEntity::OnRestore, CSceneEntity::CheckActors
void __fastcall CBaseFlex::StartChoreoScene(CBaseFlex *const this, CChoreoScene *scene)
{
  __int64 m_Size; // r12
  int v4; // eax
  CChoreoScene **v5; // rax
  CChoreoScene *scenea; // [rsp+8h] [rbp-18h] BYREF

  scenea = scene;
  if ( CUtlVectorBase<CChoreoScene *,CUtlMemory<CChoreoScene *,int>>::Find(&this->m_ActiveChoreoScenes, &scenea) == -1 )
  {
    m_Size = this->m_ActiveChoreoScenes.m_Size;
    v4 = this->m_ActiveChoreoScenes.m_Size;
    if ( m_Size == this->m_ActiveChoreoScenes.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CChoreoScene *,int>::Grow(&this->m_ActiveChoreoScenes.m_Memory, 1);
      v4 = this->m_ActiveChoreoScenes.m_Size;
    }
    this->m_ActiveChoreoScenes.m_Size = v4 + 1;
    v5 = &this->m_ActiveChoreoScenes.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = scenea;
    this->m_bUpdateLayerPriorities = 1;
  }
}


// CBaseFlex::RemoveChoreoScene  (line 204, @0x0000000001ee0720, libserver.so)  // inlines: Element, FindAndRemove, Remove, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: CUtlVectorBase<CChoreoScene*, CUtlMemory<CChoreoScene*, int> >::Find, memmove
// callers: CSceneEntity::UnloadScene, CSceneEntity::OnSceneFinished
void __fastcall CBaseFlex::RemoveChoreoScene(CBaseFlex *const this, CChoreoScene *scene, bool canceled)
{
  int v4; // eax
  int m_Size; // ecx
  CChoreoScene **v6; // rsi
  CChoreoScene *scenea; // [rsp+8h] [rbp-18h] BYREF

  scenea = scene;
  v4 = CUtlVectorBase<CChoreoScene *,CUtlMemory<CChoreoScene *,int>>::Find(&this->m_ActiveChoreoScenes, &scenea);
  if ( v4 != -1 )
  {
    m_Size = this->m_ActiveChoreoScenes.m_Size;
    if ( m_Size - v4 - 1 > 0 )
    {
      v6 = &this->m_ActiveChoreoScenes.m_Memory.m_pMemory[v4 + 1];
      memmove(v6 - 1, v6, 8LL * (this->m_ActiveChoreoScenes.m_Size - v4 - 1));
      m_Size = this->m_ActiveChoreoScenes.m_Size;
    }
    this->m_ActiveChoreoScenes.m_Size = m_Size - 1;
  }
  this->m_bUpdateLayerPriorities = 1;
}


// CBaseFlex::AddFlexSetting  (line 232, @0x0000000001ee9a00, libserver.so)  // inlines: psetting
// calls: CBaseFlex::FindNamedSetting, CBaseFlex::GetFlexWeight, CBaseFlex::SetFlexWeight, CBaseFlex::FlexControllerLocalToGlobal
// callers: CBaseFlex::ProcessFlexSettingSceneEvent
void __fastcall CBaseFlex::AddFlexSetting(
        CBaseFlex *const this,
        const char *expr,
        float scale,
        const flexsettinghdr_t *pSettinghdr,
        bool newexpression)
{
  const flexsetting_t *NamedSetting; // rax
  int numsettings; // edx
  float *v9; // rbx
  char *v10; // r14
  float v11; // xmm1_4
  float FlexWeight; // xmm0_4
  LocalFlexController_t v13; // eax
  LocalFlexController_t v14; // r15d
  float v15; // xmm1_4
  float s; // [rsp+Ch] [rbp-34h]

  NamedSetting = CBaseFlex::FindNamedSetting(this, pSettinghdr, expr);
  if ( NamedSetting != 0 )
  {
    numsettings = NamedSetting->numsettings;
    v9 = (&NamedSetting->nameindex + NamedSetting->settingindex);
    if ( v9 != 0 && numsettings > 0 )
    {
      v10 = &v9[3 * (numsettings - 1) + 3];
      do
      {
        v13 = CBaseFlex::FlexControllerLocalToGlobal(this, pSettinghdr, *v9);
        v14 = v13;
        v15 = scale * v9[2];
        if ( v15 > 1.0 )
          v11 = 1.0;
        else
          v11 = fmaxf(0.0, v15);
        s = v11;
        FlexWeight = CBaseFlex::GetFlexWeight(this, v13);
        v9 += 3;
        CBaseFlex::SetFlexWeight(this, v14, (FlexWeight * (1.0 - s)) + (s * *(v9 - 2)), s * *(v9 - 2));
      }
      while ( v10 != v9 );
    }
  }
}


// CBaseFlex::ClearSceneEvents  (line 271, @0x0000000001ee05e0, libserver.so)  // inlines: Purge, PurgeAndDeleteElements, RemoveAll
// calls: operator delete, CUtlVectorBase<CSceneEventInfo*, CUtlMemory<CSceneEventInfo*, int> >::Remove
// callers: CSceneEntity::ClearSceneEvents
// local variable allocation has failed, the output may be wrong!
void __fastcall CBaseFlex::ClearSceneEvents(CBaseFlex *const this, CChoreoScene *scene, bool canceled)
{
  __int64 v3; // rcx
  CChoreoScene *v4; // r8
  int v6; // ebx
  CUtlVector<CSceneEventInfo*,CUtlMemory<CSceneEventInfo*,int> > *p_m_SceneEvents; // r14
  _BOOL4 v8; // r9d
  __int64 v9; // r12
  CSceneEventInfo *v10; // r13
  __int64 v11; // r12
  int i; // ebx
  CSceneEventInfo *v13; // rdi
  bool v14; // zf
  CSceneEventInfo **m_pMemory; // rsi
  CChoreoScene *v16; // [rsp+0h] [rbp-40h]
  _BOOL4 v17; // [rsp+Ch] [rbp-34h]

  v4 = scene;
  if ( scene != 0 )
  {
    v6 = this->m_SceneEvents.m_Size - 1;
    if ( v6 >= 0 )
    {
      p_m_SceneEvents = &this->m_SceneEvents;
      v8 = canceled;
      v9 = v6;
      do
      {
        v10 = this->m_SceneEvents.m_Memory.m_pMemory[v9];
        if ( v10->m_pScene == v4 )
        {
          v16 = v4;
          v17 = v8;
          (*(this->_vptr_IHandleEntity + 255))(this, v10, 0, v8);
          operator delete(v10);
          CUtlVectorBase<CSceneEventInfo *,CUtlMemory<CSceneEventInfo *,int>>::Remove(p_m_SceneEvents, v6);
          v4 = v16;
          v8 = v17;
        }
        --v6;
        --v9;
      }
      while ( v6 != -1 );
    }
  }
  else
  {
    v11 = 0;
    for ( i = 0; i < this->m_SceneEvents.m_Size; ++i )
    {
      v13 = this->m_SceneEvents.m_Memory.m_pMemory[v11++];
      operator delete(v13);
    }
    v14 = (this->m_SceneEvents.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_SceneEvents.m_Size = 0;
    if ( v14 )
    {
      m_pMemory = this->m_SceneEvents.m_Memory.m_pMemory;
      if ( m_pMemory != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pMemory, canceled, v3, v4);
        this->m_SceneEvents.m_Memory.m_pMemory = 0;
      }
      this->m_SceneEvents.m_Memory.m_nAllocationCount = 0;
    }
  }
}


// CBaseFlex::ClearSceneEvent  (line 305, @0x0000000001ed80b0, libserver.so)
// calls: CChoreoEvent::GetType, CChoreoEvent::GetParameters, CBaseEntity::StopSound, CBaseAnimatingOverlay::RemoveLayer, CBaseAnimatingOverlay::FastRemoveLayer
// globals: jpt_1ED80E8
bool __fastcall CBaseFlex::ClearSceneEvent(CBaseFlex *const this, CSceneEventInfo *info, bool fastKill, bool canceled)
{
  int m_iLayer; // esi
  bool result; // al
  const char *Parameters; // rax
  float v11; // xmm2_4

  switch ( CChoreoEvent::GetType(info->m_pEvent) )
  {
    case EXPRESSION:
    case LOOKAT:
    case FACE:
    case FLEXANIMATION:
    case GENERIC:
    case CAMERA:
    case SCRIPT:
      goto LABEL_3;
    case MOVETO:
      (*(this->_vptr_IHandleEntity + 144))(this);
      return 1;
    case SPEAK:
      if ( canceled )
      {
        Parameters = CChoreoEvent::GetParameters(info->m_pEvent);
        CBaseEntity::StopSound(this, Parameters);
      }
      goto LABEL_3;
    case GESTURE:
    case SEQUENCE:
      m_iLayer = info->m_iLayer;
      if ( m_iLayer >= 0 )
      {
        if ( fastKill )
        {
          CBaseAnimatingOverlay::FastRemoveLayer(this, m_iLayer);
        }
        else
        {
          CChoreoEvent::GetType(info->m_pEvent);
          CBaseAnimatingOverlay::RemoveLayer(this, info->m_iLayer, 0.0, v11);
        }
      }
LABEL_3:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


// CBaseFlex::FindNamedSetting  (line 401, @0x0000000001ed8210, libserver.so)  // inlines: pSetting, pszName
// calls: V_stricmp_fast
// callers: CBaseFlex::AddFlexSetting
const flexsetting_t *__fastcall CBaseFlex::FindNamedSetting(
        const CBaseFlex *const this,
        const flexsettinghdr_t *pSettinghdr,
        const char *expr)
{
  int v4; // r13d
  __int64 v5; // r12
  __int64 v7; // rax
  bool v8; // zf
  const flexsetting_t *v9; // rax
  const flexsetting_t *v10; // r15

  v4 = 0;
  v5 = 0;
  if ( pSettinghdr->numflexsettings <= 0 )
    return 0;
  while ( 1 )
  {
    v7 = v5 + pSettinghdr->flexsettingindex;
    v8 = (pSettinghdr + v7) == 0;
    v9 = (pSettinghdr + v7);
    v10 = v9;
    if ( !v8 && V_stricmp_fast(v9 + v9->nameindex, expr) == 0 )
      break;
    ++v4;
    v5 += 24;
    if ( pSettinghdr->numflexsettings <= v4 )
      return 0;
  }
  return v10;
}


// CBaseFlex::SetFlexWeight  (line 418, @0x0000000001ed82a0, libserver.so)  // inlines: NetworkStateChanged, Set, V_memcmp, operator[]
// calls: memcmp
// callers: CBaseFlex::SetFlexWeight
void __fastcall CBaseFlex::SetFlexWeight(
        CBaseFlex *const this,
        const CFlexController *pflexcontroller,
        unsigned int index,
        float value)
{
  float max; // xmm2_4
  float min; // xmm1_4
  int v8; // eax
  float v9; // xmm2_4
  float v10; // xmm1_4
  __m128i v11; // xmm0
  unsigned int valuea[9]; // [rsp+Ch] [rbp-24h] BYREF

  *valuea = value;
  max = pflexcontroller->max;
  min = pflexcontroller->min;
  if ( max == min )
  {
    v8 = valuea[0] & 0x7F800000;
  }
  else
  {
    v11 = valuea[0];
    v9 = max - min;
    v8 = 1065353216;
    *v11.m128i_i32 = *valuea - min;
    v10 = 1.0;
    *v11.m128i_i32 = *v11.m128i_i32 / v9;
    if ( *v11.m128i_i32 <= 1.0 )
    {
      v10 = 0.0;
      v8 = 0;
      if ( *v11.m128i_i32 >= 0.0 )
      {
        v10 = *v11.m128i_i32;
        v8 = _mm_cvtsi128_si32(v11) & 0x7F800000;
      }
    }
    *valuea = v10;
  }
  if ( v8 == 2139095040 )
    *valuea = 0.5;
  if ( memcmp(&this->m_flexWeight.m_Vector.m_Memory.m_pMemory[index], valuea, 4u) != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1216, index, 0xFFFFFFFFLL);
    this->m_flexWeight.m_Vector.m_Memory.m_pMemory[index] = *valuea;
  }
}


// CBaseFlex::GetFlexWeight  (line 434, @0x0000000001ed8380, libserver.so)  // inlines: Get, operator[]
// callers: CBaseFlex::GetFlexWeight
float __fastcall CBaseFlex::GetFlexWeight(
        const CBaseFlex *const this,
        const CFlexController *pflexcontroller,
        LocalFlexController_t index)
{
  float max; // xmm0_4
  float min; // xmm1_4

  max = pflexcontroller->max;
  min = pflexcontroller->min;
  if ( max == min )
    return this->m_flexWeight.m_Vector.m_Memory.m_pMemory[index];
  else
    return ((max - min) * this->m_flexWeight.m_Vector.m_Memory.m_pMemory[index]) + min;
}


// CBaseFlex::SetFlexWeight  (line 444, @0x0000000001ed83d0, libserver.so)
// calls: CBaseAnimating::GetNumFlexControllers, CBaseAnimating::GetModelPtr, CModel::GetFlexController, CBaseFlex::SetFlexWeight
// callers: CBaseFlex::AddFlexSetting, CBaseFlex::ProcessSceneEvents, CBaseFlex::AddFlexAnimation, CBaseFlex::OnNewModel, CFlexCycler::FlexThink
void __fastcall CBaseFlex::SetFlexWeight(CBaseFlex *const this, LocalFlexController_t index, float a3, float value)
{
  const CModel *ModelPtr; // rax
  const CFlexController *FlexController; // rax

  if ( index >= 0 && index < CBaseAnimating::GetNumFlexControllers(this) )
  {
    ModelPtr = CBaseAnimating::GetModelPtr(this);
    if ( ModelPtr != 0 )
    {
      FlexController = CModel::GetFlexController(ModelPtr, index);
      CBaseFlex::SetFlexWeight(this, FlexController, index, a3);
    }
  }
}


// CBaseFlex::GetFlexWeight  (line 457, @0x0000000001ed8450, libserver.so)
// calls: CBaseAnimating::GetNumFlexControllers, CBaseAnimating::GetModelPtr, CModel::GetFlexController, CBaseFlex::GetFlexWeight
// callers: CBaseFlex::AddFlexSetting, CBasePlayerAnimState::ComputePoseParam_FlexAnim, CBaseFlex::ProcessSceneEvents, CBaseFlex::AddFlexAnimation, CFlexCycler::FlexThink
float __fastcall CBaseFlex::GetFlexWeight(const CBaseFlex *const this, LocalFlexController_t index)
{
  const CModel *ModelPtr; // rdi
  const CFlexController *FlexController; // rax

  if ( index < 0 )
    return 0.0;
  if ( index >= CBaseAnimating::GetNumFlexControllers(this) )
    return 0.0;
  ModelPtr = CBaseAnimating::GetModelPtr(this);
  if ( ModelPtr == 0 )
    return 0.0;
  FlexController = CModel::GetFlexController(ModelPtr, index);
  return CBaseFlex::GetFlexWeight(this, FlexController, index);
}


// CBaseFlex::EnsureTranslations  (line 475, @0x0000000001ee92f0, libserver.so)  // inlines: AddMultipleToTail, CUtlMemory, CUtlVector, CUtlVectorBase, Element, EnsureCount, FS_LocalToGlobal_t, Find, FindInsertionPosition, Insert, InsertAt, InsertMultipleBefore, LeftChild, Node_t, Purge, RemoveAll, RightChild, SetCount, SetMapping, operator(), operator=, operator[], pLocalName, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~FS_LocalToGlobal_t, ~Node_t
// calls: CUtlMemory<LocalFlexController_t, int>::Purge, CUtlVectorBase<LocalFlexController_t, CUtlMemory<LocalFlexController_t, int> >::SetCount, CUtlRBTree<CUtlMap<const flexsettinghdr_t*, FS_LocalToGlobal_t, short unsigned int>::Node_t, short unsigned int, CUtlMap<const flexsettinghdr_t*, FS_LocalToGlobal_t, short unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<const flexsettinghdr_t*, FS_LocalToGlobal_t, short unsigned int>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<const flexsettinghdr_t*, FS_LocalToGlobal_t, short unsigned int>::Node_t, short unsigned int, CUtlMap<const flexsettinghdr_t*, FS_LocalToGlobal_t, short unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<const flexsettinghdr_t*, FS_LocalToGlobal_t, short unsigned int>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent, CUtlVectorBase<LocalFlexController_t, CUtlMemory<LocalFlexController_t, int> >::GrowVector, CUtlVectorBase<LocalFlexController_t, CUtlMemory<LocalFlexController_t, int> >::ShiftElementsRight, CBaseFlex::FindFlexController, CUtlVectorBase<LocalFlexController_t, CUtlMemory<LocalFlexController_t, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CBaseFlex::FlexControllerLocalToGlobal, CFlexSceneFileManager::FindSceneFile
void __fastcall CBaseFlex::EnsureTranslations(const CBaseFlex *const this, const flexsettinghdr_t *pSettinghdr)
{
  unsigned __int16 m_Root; // r12
  UtlRBTreeNode_t<CUtlMap<const flexsettinghdr_t*,FS_LocalToGlobal_t,short unsigned int>::Node_t,short unsigned int> *m_pMemory; // rdx
  unsigned __int64 v5; // r14
  int numkeys; // r12d
  int m_Size; // r12d
  unsigned __int64 v8; // rax
  unsigned __int16 v9; // r12
  bool v10; // r13
  unsigned __int16 m_Right; // ax
  bool v12; // zf
  UtlRBTreeNode_t<CUtlMap<const flexsettinghdr_t*,FS_LocalToGlobal_t,short unsigned int>::Node_t,short unsigned int> *v13; // rax
  unsigned __int16 v14; // ax
  unsigned __int64 v15; // rax
  __int64 v16; // r12
  LocalFlexController_t FlexController; // eax
  FS_LocalToGlobal_t entry; // [rsp+10h] [rbp-70h] BYREF
  CUtlMap<const flexsettinghdr_t*,FS_LocalToGlobal_t,short unsigned int,bool (*)(const flexsettinghdr_t* const&,const flexsettinghdr_t* const&)>::Node_t pCopyFrom; // [rsp+30h] [rbp-50h] BYREF

  m_Root = this->m_LocalToGlobal.m_Tree.m_Root;
  pCopyFrom.elem.m_Mapping.m_Size = 0;
  pCopyFrom.elem.m_Mapping.m_Memory.m_pMemory = 0;
  pCopyFrom.elem.m_Mapping.m_Memory.m_nAllocationCount = 0;
  pCopyFrom.elem.m_Mapping.m_Memory.m_nGrowSize = 0;
  pCopyFrom.key = pSettinghdr;
  if ( m_Root == 0xFFFF )
  {
    pCopyFrom.elem.m_Mapping.m_Size = 0;
  }
  else
  {
    m_pMemory = this->m_LocalToGlobal.m_Tree.m_Elements.m_pMemory;
    do
    {
      while ( 1 )
      {
        v5 = m_Root;
        if ( !this->m_LocalToGlobal.m_Tree.m_LessFunc.m_LessFunc(&pCopyFrom, &m_pMemory[v5].m_Data) )
          break;
        m_pMemory = this->m_LocalToGlobal.m_Tree.m_Elements.m_pMemory;
        m_Root = m_pMemory[m_Root].m_Left;
        if ( m_Root == 0xFFFF )
          goto LABEL_7;
      }
      if ( !this->m_LocalToGlobal.m_Tree.m_LessFunc.m_LessFunc(
              &this->m_LocalToGlobal.m_Tree.m_Elements.m_pMemory[v5].m_Data,
              &pCopyFrom) )
        break;
      m_pMemory = this->m_LocalToGlobal.m_Tree.m_Elements.m_pMemory;
      m_Root = m_pMemory[v5].m_Right;
    }
    while ( m_Root != 0xFFFF );
LABEL_7:
    pCopyFrom.elem.m_Mapping.m_Size = 0;
    if ( (pCopyFrom.elem.m_Mapping.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      goto LABEL_8;
  }
  CUtlMemory<LocalFlexController_t,int>::Purge(&pCopyFrom.elem.m_Mapping.m_Memory);
  if ( (pCopyFrom.elem.m_Mapping.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<LocalFlexController_t,int>::Purge(&pCopyFrom.elem.m_Mapping.m_Memory);
    if ( m_Root != 0xFFFF )
      return;
    goto LABEL_13;
  }
LABEL_8:
  if ( m_Root != 0xFFFF )
    return;
LABEL_13:
  entry.m_Mapping.m_Size = 0;
  entry.m_Mapping.m_Memory.m_pMemory = 0;
  entry.m_Mapping.m_Memory.m_nAllocationCount = 0;
  entry.m_Mapping.m_Memory.m_nGrowSize = 0;
  numkeys = pSettinghdr->numkeys;
  if ( numkeys > 0 )
  {
    CUtlVectorBase<LocalFlexController_t,CUtlMemory<LocalFlexController_t,int>>::GrowVector(&entry.m_Mapping, numkeys);
    CUtlVectorBase<LocalFlexController_t,CUtlMemory<LocalFlexController_t,int>>::ShiftElementsRight(
      &entry.m_Mapping,
      0,
      numkeys);
    v15 = 0;
    do
    {
      entry.m_Mapping.m_Memory.m_pMemory[v15 / 4] = 0;
      v15 += 4LL;
    }
    while ( v15 != 4LL * (numkeys - 1) + 4 );
    if ( pSettinghdr->numkeys > 0 )
    {
      v16 = 0;
      do
      {
        FlexController = CBaseFlex::FindFlexController(
                           this,
                           pSettinghdr + *(&pSettinghdr->id + 4 * v16 + pSettinghdr->keynameindex));
        entry.m_Mapping.m_Memory.m_pMemory[v16++] = FlexController;
      }
      while ( pSettinghdr->numkeys > v16 );
    }
  }
  m_Size = entry.m_Mapping.m_Size;
  pCopyFrom.elem.m_Mapping.m_Size = 0;
  pCopyFrom.elem.m_Mapping.m_Memory.m_pMemory = 0;
  pCopyFrom.elem.m_Mapping.m_Memory.m_nAllocationCount = 0;
  pCopyFrom.elem.m_Mapping.m_Memory.m_nGrowSize = 0;
  pCopyFrom.key = pSettinghdr;
  CUtlVectorBase<LocalFlexController_t,CUtlMemory<LocalFlexController_t,int>>::SetCount(
    &pCopyFrom.elem.m_Mapping,
    entry.m_Mapping.m_Size);
  if ( m_Size > 0 )
  {
    v8 = 0;
    do
    {
      pCopyFrom.elem.m_Mapping.m_Memory.m_pMemory[v8 / 4] = entry.m_Mapping.m_Memory.m_pMemory[v8 / 4];
      v8 += 4LL;
    }
    while ( v8 != 4LL * (m_Size - 1) + 4 );
  }
  v9 = this->m_LocalToGlobal.m_Tree.m_Root;
  v10 = 0;
  if ( v9 != 0xFFFF )
  {
    while ( 1 )
    {
      v12 = !this->m_LocalToGlobal.m_Tree.m_LessFunc.m_LessFunc(
               &pCopyFrom,
               &this->m_LocalToGlobal.m_Tree.m_Elements.m_pMemory[v9].m_Data);
      v13 = this->m_LocalToGlobal.m_Tree.m_Elements.m_pMemory;
      if ( v12 )
      {
        m_Right = v13[v9].m_Right;
        v10 = 0;
        if ( m_Right == 0xFFFF )
          break;
      }
      else
      {
        m_Right = v13[v9].m_Left;
        v10 = 1;
        if ( m_Right == 0xFFFF )
          break;
      }
      v9 = m_Right;
    }
  }
  v14 = CUtlRBTree<CUtlMap<flexsettinghdr_t const*,FS_LocalToGlobal_t,unsigned short,bool (*)(flexsettinghdr_t const* const&,flexsettinghdr_t const* const&)>::Node_t,unsigned short,CUtlMap<flexsettinghdr_t const*,FS_LocalToGlobal_t,unsigned short,bool (*)(flexsettinghdr_t const* const&,flexsettinghdr_t const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<flexsettinghdr_t const*,FS_LocalToGlobal_t,unsigned short,bool (*)(flexsettinghdr_t const* const&,flexsettinghdr_t const* const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
          &this->m_LocalToGlobal.m_Tree,
          &pCopyFrom);
  CUtlRBTree<CUtlMap<flexsettinghdr_t const*,FS_LocalToGlobal_t,unsigned short,bool (*)(flexsettinghdr_t const* const&,flexsettinghdr_t const* const&)>::Node_t,unsigned short,CUtlMap<flexsettinghdr_t const*,FS_LocalToGlobal_t,unsigned short,bool (*)(flexsettinghdr_t const* const&,flexsettinghdr_t const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<flexsettinghdr_t const*,FS_LocalToGlobal_t,unsigned short,bool (*)(flexsettinghdr_t const* const&,flexsettinghdr_t const* const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
    &this->m_LocalToGlobal.m_Tree,
    v14,
    v9,
    v10);
  pCopyFrom.elem.m_Mapping.m_Size = 0;
  ++this->m_LocalToGlobal.m_Tree.m_NumElements;
  if ( (pCopyFrom.elem.m_Mapping.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<LocalFlexController_t,int>::Purge(&pCopyFrom.elem.m_Mapping.m_Memory);
    if ( (pCopyFrom.elem.m_Mapping.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<LocalFlexController_t,int>::Purge(&pCopyFrom.elem.m_Mapping.m_Memory);
  }
  entry.m_Mapping.m_Size = 0;
  if ( (entry.m_Mapping.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<LocalFlexController_t,int>::Purge(&entry.m_Mapping.m_Memory);
    if ( (entry.m_Mapping.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<LocalFlexController_t,int>::Purge(&entry.m_Mapping.m_Memory);
  }
}


// CBaseFlex::ProcessFlexSettingSceneEvent  (line 501, @0x0000000001ee9af0, libserver.so)
// calls: CChoreoEvent::HasEndTime, CChoreoEvent::GetParameters, CChoreoEvent::GetParameters2, CChoreoScene::GetTime, CChoreoEvent::GetIntensity, CBaseFlex::AddFlexSetting, CBaseFlex::FindSceneFile
// callers: CBaseFlex::ProcessSceneEvent
bool __fastcall CBaseFlex::ProcessFlexSettingSceneEvent(
        CBaseFlex *const this,
        CSceneEventInfo *info,
        CChoreoScene *scene,
        CChoreoEvent *event)
{
  const char *Parameters; // r15
  const char *Parameters2; // rax
  const char *v11; // r8
  float v12; // xmm1_4
  float Intensity; // xmm0_4
  const flexsettinghdr_t *SceneFile; // rax
  const char *name; // [rsp+8h] [rbp-38h]
  const char *namea; // [rsp+8h] [rbp-38h]

  if ( CChoreoEvent::HasEndTime(event) )
  {
    Parameters = CChoreoEvent::GetParameters(event);
    Parameters2 = CChoreoEvent::GetParameters2(event);
    v11 = Parameters2;
    if ( Parameters2 != 0 && Parameters != 0 )
    {
      if ( info->m_pExpHdr != 0
        || (namea = Parameters2,
            SceneFile = CBaseFlex::FindSceneFile(this, Parameters),
            v11 = namea,
            info->m_pExpHdr = SceneFile,
            SceneFile != 0) )
      {
        name = v11;
        CChoreoScene::GetTime(scene);
        Intensity = CChoreoEvent::GetIntensity(event, v12);
        CBaseFlex::AddFlexSetting(this, name, Intensity, info->m_pExpHdr, !info->m_bStarted);
      }
    }
  }
  return 1;
}


