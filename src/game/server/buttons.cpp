// Reconstructed from DWARF by pahole; not original source.

// src/game/server/buttons.cpp:97
class C_CBaseButton_MapInstall {
	C_CBaseButton_MapInstall();

	// sizeof = 1
};

// src/game/server/buttons.cpp:1708
class C_CButtonTimed_MapInstall {
	C_CButtonTimed_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseButton::GetDataDescMap  (line 43, @0x0000000002187570, libserver.so)
// globals: CBaseButton::m_DataMap
datamap_t *__fastcall CBaseButton::GetDataDescMap(CBaseButton *const this)
{
  return &CBaseButton::m_DataMap;
}


// CBaseButton::AddDatadescMetadataKeys  (line 43, @0x0000000002192ce0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CBaseButton::GetEntityClass(void)
void __fastcall CBaseButton::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CBaseButton::GetEntityClass);
}


// CBaseButton::GetBaseMap  (line 43, @0x0000000002192d00, libserver.so)
datamap_t *__cdecl CBaseButton::GetBaseMap()
{
  return &CBaseToggle::m_DataMap;
}


// DataMapInit<CBaseButton>  (line 43, @0x00000000021ae7e0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "CBaseButton"
// globals: `guard variable for'DataMapInit<CBaseButton>(CBaseButton *)::nameHolder, `guard variable for'DataMapInit<CBaseButton>(CBaseButton *)::dataDesc, CBaseButton::GetEntityClass(void), CBaseButton::m_DataMap, DataMapInit<CBaseButton>(CBaseButton *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CBaseButton>(CBaseButton *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax
  char *v6; // r12
  __int64 v7; // rbx
  int v8; // eax
  char **v9; // rax
  char *v10; // r12
  __int64 v11; // rbx
  int v12; // eax
  char **v13; // rax
  char *v14; // r12
  __int64 v15; // rbx
  int v16; // eax
  char **v17; // rax
  char *v18; // r12
  __int64 v19; // rbx
  int v20; // eax
  char **v21; // rax
  char *v22; // r12
  __int64 v23; // rbx
  int v24; // eax
  char **v25; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CBaseButton>(CBaseButton *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseButton>(CBaseButton *)::nameHolder) != 0 )
  {
    DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_pszBase = "CBaseButton";
    DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseButton>(CBaseButton *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBaseButton>(CBaseButton *)::nameHolder,
      &_dso_handle);
  }
  CBaseButton::m_DataMap.baseMap = &CBaseToggle::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CBaseButton>(CBaseButton *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseButton>(CBaseButton *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_nLenBase + 12);
    strcpy(stpcpy(v2, DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_pszBase), "ButtonTouch");
    m_Size = DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Size == DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CBaseButton>(CBaseButton *)::dataDesc[17].fieldName = v2;
    v6 = operator new[](DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_nLenBase + 12);
    strcpy(stpcpy(v6, DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_pszBase), "ButtonSpark");
    v7 = DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Size == DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Memory, 1);
      v8 = DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CBaseButton>(CBaseButton *)::dataDesc[18].fieldName = v6;
    v10 = operator new[](DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_nLenBase + 15);
    strcpy(stpcpy(v10, DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_pszBase), "TriggerAndWait");
    v11 = DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Size;
    v12 = DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Size == DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Memory, 1);
      v12 = DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Size = v12 + 1;
    v13 = &DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Memory.m_pMemory[v11];
    if ( v13 != 0 )
      *v13 = v10;
    DataMapInit<CBaseButton>(CBaseButton *)::dataDesc[19].fieldName = v10;
    v14 = operator new[](DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_nLenBase + 13);
    strcpy(stpcpy(v14, DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_pszBase), "ButtonReturn");
    v15 = DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Size;
    v16 = DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Size == DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Memory, 1);
      v16 = DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Size = v16 + 1;
    v17 = &DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Memory.m_pMemory[v15];
    if ( v17 != 0 )
      *v17 = v14;
    DataMapInit<CBaseButton>(CBaseButton *)::dataDesc[20].fieldName = v14;
    v18 = operator new[](DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_nLenBase + 15);
    strcpy(stpcpy(v18, DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_pszBase), "ButtonBackHome");
    v19 = DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Size;
    v20 = DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Size == DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Memory, 1);
      v20 = DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Size = v20 + 1;
    v21 = &DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Memory.m_pMemory[v19];
    if ( v21 != 0 )
      *v21 = v18;
    DataMapInit<CBaseButton>(CBaseButton *)::dataDesc[21].fieldName = v18;
    v22 = operator new[](DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_nLenBase + 10);
    strcpy(stpcpy(v22, DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_pszBase), "ButtonUse");
    v23 = DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Size;
    v24 = DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Size == DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Memory, 1);
      v24 = DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Size = v24 + 1;
    v25 = &DataMapInit<CBaseButton>(CBaseButton *)::nameHolder.m_Names.m_Memory.m_pMemory[v23];
    if ( v25 != 0 )
      *v25 = v22;
    DataMapInit<CBaseButton>(CBaseButton *)::dataDesc[22].fieldName = v22;
    DataMapInit<CBaseButton>(CBaseButton *)::dataDesc[28].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseButton>(CBaseButton *)::dataDesc[29].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseButton>(CBaseButton *)::dataDesc[30].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseButton>(CBaseButton *)::dataDesc[31].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseButton>(CBaseButton *)::dataDesc[32].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseButton>(CBaseButton *)::dataDesc);
  }
  CBaseButton::m_DataMap.dataNumFields = 35;
  CBaseButton::m_DataMap.dataDesc = &DataMapInit<CBaseButton>(CBaseButton *)::dataDesc[1];
  AddDatadescMetadataKeys(&CBaseButton::m_DataMap, CBaseButton::GetEntityClass);
  return &CBaseButton::m_DataMap;
}


// CBaseButton::YouForgotToImplementOrDeclareServerClass  (line 97, @0x0000000002187580, libserver.so)
int __fastcall CBaseButton::YouForgotToImplementOrDeclareServerClass(CBaseButton *const this)
{
  return 0;
}


// CBaseButton::GetServerClass  (line 97, @0x000000000218f080, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CBaseButton::GetServerClass(CBaseButton *const this)
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


// CBaseButton::Precache  (line 101, @0x0000000002192d80, libserver.so)  // inlines: String, ToCStr
// calls: CBaseToggle::Precache, MakeButtonSound, CBaseEntity::PrecacheScriptSound
void __fastcall CBaseButton::Precache(CBaseButton *const this, const CEntityPrecacheContext *pContext)
{
  int m_bLockedSound; // esi
  int m_bUnlockedSound; // esi
  int m_sounds; // esi
  const char *v7; // rdi
  const char *v8; // rdi
  const char *m_pAsString; // rdi
  string_t sNoise; // [rsp+0h] [rbp-20h] BYREF

  CBaseToggle::Precache(this, pContext);
  m_bLockedSound = this->m_bLockedSound;
  if ( m_bLockedSound != 0 )
  {
    MakeButtonSound(&sNoise, m_bLockedSound);
    m_pAsString = "";
    if ( sNoise.u.m_Id != 0 )
      m_pAsString = sNoise.u.m_pAsString;
    CBaseEntity::PrecacheScriptSound(m_pAsString, pContext->m_pManifest);
  }
  m_bUnlockedSound = this->m_bUnlockedSound;
  if ( m_bUnlockedSound != 0 )
  {
    MakeButtonSound(&sNoise, m_bUnlockedSound);
    v8 = "";
    if ( sNoise.u.m_Id != 0 )
      v8 = sNoise.u.m_pAsString;
    CBaseEntity::PrecacheScriptSound(v8, pContext->m_pManifest);
  }
  m_sounds = this->m_sounds;
  if ( m_sounds != 0 )
  {
    MakeButtonSound(&sNoise, m_sounds);
    v7 = "";
    if ( sNoise.u.m_Id != 0 )
      v7 = sNoise.u.m_pAsString;
    CBaseEntity::PrecacheScriptSound(v7, pContext->m_pManifest);
  }
}


// CBaseButton::Lock  (line 133, @0x0000000002187590, libserver.so)
void __fastcall CBaseButton::Lock(CBaseButton *const this)
{
  this->m_bLocked = 1;
}


// CBaseButton::Unlock  (line 142, @0x000000000218a270, libserver.so)
// calls: CBaseEntity::SetMoveDoneTime
// globals: CBaseButton::TriggerAndWait(void)
void __fastcall CBaseButton::Unlock(CBaseButton *const this)
{
  float v1; // xmm1_4
  bool v2; // zf

  v2 = this->m_toggle_state == TOGGLE_STATE::TS_GOING_UP;
  this->m_bLocked = 0;
  if ( v2 )
  {
    this->m_pfnMoveDone.__delta = 0;
    this->m_pfnMoveDone.__pfn = CBaseButton::TriggerAndWait;
    CBaseEntity::SetMoveDoneTime(this, 0.1, v1);
  }
}


// CBaseButton::InputLock  (line 161, @0x00000000021875a0, libserver.so)
void __fastcall CBaseButton::InputLock(CBaseButton *const this, inputdata_t *const inputdata)
{
  (*(this->_vptr_IHandleEntity + 214))(this, inputdata);
}


// CBaseButton::InputUnlock  (line 170, @0x00000000021875c0, libserver.so)
void __fastcall CBaseButton::InputUnlock(CBaseButton *const this, inputdata_t *const inputdata)
{
  (*(this->_vptr_IHandleEntity + 215))(this, inputdata);
}


// CBaseButton::Press  (line 179, @0x00000000021acaf0, libserver.so)  // inlines: CEntityIndex, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, EmitSound_t, FireOutput, Free, Purge, RemoveAll, SetSoundName, SoundEventGuid_t, String, ToCStr, entindex, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase, ~EmitSound_t
// calls: PlayLockSounds, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, CRecipientFilter::~CRecipientFilter, CEntityIOOutput::FireOutputInternal, CBaseButton::ButtonReturn, CBaseButton::ButtonActivate, CUtlMemory<Vector, int>::Purge, __stack_chk_fail (15 total)
// callers: CBaseButton::InputPress, CBaseButton::InputPressIn, CBaseButton::InputPressOut
void __fastcall CBaseButton::Press(CBaseButton *const this, CBaseEntity *pActivator, CBaseButton::BUTTON_CODE eCode)
{
  int v5; // xmm1_4
  float v6; // xmm1_4
  bool v7; // zf
  const char *m_pAsString; // rax
  CEntityIndex v9; // eax
  EmitSound_t ep; // [rsp+0h] [rbp-1D0h] BYREF
  CPASAttenuationFilter filter; // [rsp+60h] [rbp-170h] BYREF
  unsigned __int64 v12; // [rsp+198h] [rbp-38h]

  v12 = __readfsqword(0x28u);
  if ( eCode == CBaseButton::BUTTON_CODE::BUTTON_PRESS )
  {
    if ( (this->m_toggle_state - 2) <= 1 )
      return;
    goto LABEL_5;
  }
  if ( eCode != CBaseButton::BUTTON_CODE::BUTTON_ACTIVATE )
  {
    if ( eCode == CBaseButton::BUTTON_CODE::BUTTON_RETURN && (this->m_toggle_state & 0xFFFFFFFD) == 1 )
      return;
LABEL_5:
    if ( !this->m_bLocked )
      goto LABEL_6;
LABEL_12:
    PlayLockSounds(this, &this->m_ls, 1, 1, 0);
    return;
  }
  if ( (this->m_toggle_state & 0xFFFFFFFD) == 0 )
    return;
  if ( this->m_bLocked )
    goto LABEL_12;
LABEL_6:
  this->m_pfnTouch.__pfn = 0;
  this->m_pfnTouch.__delta = 0;
  if ( eCode == CBaseButton::BUTTON_CODE::BUTTON_PRESS )
  {
    if ( this->m_toggle_state != TOGGLE_STATE::TS_AT_TOP )
    {
LABEL_25:
      LODWORD(ep.m_pSoundName) = 0;
      *&ep.m_nChannel = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnPressed, pActivator, this, &ep, 0.0);
      if ( (BYTE2(ep.m_pSoundName) & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&ep.m_nChannel);
      CBaseButton::ButtonActivate(this);
      return;
    }
  }
  else
  {
    if ( eCode != CBaseButton::BUTTON_CODE::BUTTON_RETURN )
    {
      if ( eCode != CBaseButton::BUTTON_CODE::BUTTON_ACTIVATE || (this->m_toggle_state & 0xFFFFFFFD) != 1 )
        return;
      goto LABEL_25;
    }
    if ( (this->m_toggle_state & 0xFFFFFFFD) != 0 )
      return;
  }
  if ( this->m_sNoise.u.m_Id != 0 )
  {
    *&ep.m_nChannel = (*(this->_vptr_IHandleEntity + 186))(this);
    LODWORD(ep.m_pSoundName) = v5;
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::AddRecipientsByPAS(&filter, &ep);
    filter._vptr_IRecipientFilter = &off_3FECD70;
    *&ep.m_nChannel = (*(this->_vptr_IHandleEntity + 186))(this);
    *&ep.m_pSoundName = v6;
    CPASAttenuationFilter::Filter(&filter, &ep, 0.80000001, v6);
    v7 = this->m_sNoise.u.m_Id == 0;
    ep.m_flVolume = 1.0;
    m_pAsString = "";
    ep.m_nFlags = 0;
    ep.m_nPitch = 100;
    ep.m_pOrigin = 0;
    ep.m_flSoundTime = 0.0;
    ep.m_pflSoundDuration = 0;
    ep.m_bEmitCloseCaption = 1;
    ep.m_bWarnOnMissingCloseCaption = 0;
    ep.m_bWarnOnDirectWaveReference = 0;
    ep.m_nSpeakerEntity.m_Data = -1;
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
    ep.m_nChannel = 2;
    if ( !v7 )
      m_pAsString = this->m_sNoise.u.m_pAsString;
    ep.m_pSoundName = m_pAsString;
    ep.m_SoundLevel = soundlevel_t::SNDLVL_NORM;
    v9.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    CBaseEntity::EmitSound(&filter, v9, &ep);
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
      if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
    }
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
  LODWORD(ep.m_pSoundName) = 0;
  *&ep.m_nChannel = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnPressed, pActivator, this, &ep, 0.0);
  if ( (BYTE2(ep.m_pSoundName) & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&ep.m_nChannel);
  CBaseButton::ButtonReturn(this);
}


// CBaseButton::InputPress  (line 238, @0x00000000021acf70, libserver.so)
// calls: CBaseButton::Press
void __fastcall CBaseButton::InputPress(CBaseButton *const this, inputdata_t *const inputdata)
{
  CBaseButton::Press(this, inputdata->pActivator, CBaseButton::BUTTON_CODE::BUTTON_PRESS);
}


// CBaseButton::InputPressIn  (line 247, @0x00000000021acf90, libserver.so)
// calls: CBaseButton::Press
void __fastcall CBaseButton::InputPressIn(CBaseButton *const this, inputdata_t *const inputdata)
{
  CBaseButton::Press(this, inputdata->pActivator, CBaseButton::BUTTON_CODE::BUTTON_ACTIVATE);
}


// CBaseButton::InputPressOut  (line 256, @0x00000000021acfb0, libserver.so)
// calls: CBaseButton::Press
void __fastcall CBaseButton::InputPressOut(CBaseButton *const this, inputdata_t *const inputdata)
{
  CBaseButton::Press(this, inputdata->pActivator, CBaseButton::BUTTON_CODE::BUTTON_RETURN);
}


// CBaseButton::RejectDamage  (line 265, @0x00000000021a8e40, libserver.so)  // inlines: CVariantBase, FireOutput, Free, Get, GetAttacker, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, operator CBaseEntity*, operator CEntityInstance*, operator=, operator==<CBaseEntity>, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CBaseButton::ButtonResponseToTouch, CBaseEntity::GetHealth, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CBaseButton::RejectDamage(CBaseButton *const this, const CTakeDamageInfo *const info)
{
  CEntityInstance *m_pInstance; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  uint32 v8; // eax
  CConcreteEntityList *v9; // rsi
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *m_pEntity; // rdx
  int v14; // eax
  __int16 v15; // cx
  uint32 v16; // eax
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  m_pInstance = 0;
  m_Index = this->m_hActivator.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActivator.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[this->m_hActivator.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnDamaged, m_pInstance, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  if ( (this->m_spawnflags.m_Value & 0x200) == 0 && CBaseEntity::GetHealth(this) == 0
    || CBaseButton::ButtonResponseToTouch(this) == CBaseButton::BUTTON_CODE::BUTTON_NOTHING )
  {
    return 1;
  }
  v8 = info->m_hAttacker.m_Index;
  v9 = CEntityHandle::gm_pEntityList;
  if ( v8 + 2 <= 1
    || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F]) == 0
    || (v11 = &v10[info->m_hAttacker.m_Index & 0x1FF]) == 0
    || v8 != v11->m_EHandle.m_Index
    || v11->m_pInstance == 0
    || (m_pEntity = v11->m_pInstance->m_pEntity) == 0 )
  {
    this->m_hActivator.m_Index = -1;
    return 1;
  }
  v14 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  v15 = 0x7FFF;
  if ( m_pEntity->m_EHandle.m_Index != -1 )
    v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  LOWORD(this->m_hActivator.m_Index) = v15 | this->m_hActivator.m_Index & 0x8000;
  v16 = (v14 << 15) | this->m_hActivator.m_Index & 0x7FFF;
  this->m_hActivator.m_Index = v16;
  if ( v16 + 2 <= 1 )
    return 1;
  v17 = v9->m_pIdentityChunks[(LOWORD(this->m_hActivator.m_Index) >> 9) & 0x3F];
  if ( v17 == 0 )
    return 1;
  v18 = &v17[this->m_hActivator.m_Index & 0x1FF];
  if ( v18 == 0 || v16 != v18->m_EHandle.m_Index || v18->m_pInstance == 0 )
    return 1;
  return this->m_bLocked;
}


// CBaseButton::ReactToDamage  (line 294, @0x00000000021aa560, libserver.so)  // inlines: CEntityIndex, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, EmitSound_t, FireOutput, Free, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, SetSoundName, SoundEventGuid_t, String, ToCStr, entindex, operator CEntityInstance*, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase, ~EmitSound_t
// calls: CBaseButton::ButtonResponseToTouch, CEntityIOOutput::FireOutputInternal, CBaseButton::ButtonActivate, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, CRecipientFilter::~CRecipientFilter, CBaseButton::ButtonReturn, CUtlMemory<Vector, int>::Purge, __stack_chk_fail (15 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBaseButton::ReactToDamage(CBaseButton *const this, const CTakeDamageInfo *const info)
{
  uint32 v3; // eax
  CEntityInstance *v4; // rsi
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  int v7; // xmm1_4
  float v8; // xmm1_4
  bool v9; // zf
  const char *m_pAsString; // rax
  CEntityIndex v11; // eax
  uint32 m_Index; // eax
  CEntityInstance *m_pInstance; // rsi
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  EmitSound_t ep; // [rsp+0h] [rbp-1C0h] BYREF
  CPASAttenuationFilter filter; // [rsp+60h] [rbp-160h] BYREF
  unsigned __int64 v18; // [rsp+198h] [rbp-28h]

  this->m_pfnTouch.__pfn = 0;
  this->m_pfnTouch.__delta = 0;
  v18 = __readfsqword(0x28u);
  if ( CBaseButton::ButtonResponseToTouch(this) == CBaseButton::BUTTON_CODE::BUTTON_RETURN )
  {
    if ( this->m_sNoise.u.m_Id != 0 )
    {
      *&ep.m_nChannel = (*(this->_vptr_IHandleEntity + 186))(this);
      LODWORD(ep.m_pSoundName) = v7;
      CRecipientFilter::CRecipientFilter(&filter);
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::AddRecipientsByPAS(&filter, &ep);
      filter._vptr_IRecipientFilter = &off_3FECD70;
      *&ep.m_nChannel = (*(this->_vptr_IHandleEntity + 186))(this);
      *&ep.m_pSoundName = v8;
      CPASAttenuationFilter::Filter(&filter, &ep, 0.80000001, v8);
      v9 = this->m_sNoise.u.m_Id == 0;
      ep.m_flVolume = 1.0;
      m_pAsString = "";
      ep.m_nFlags = 0;
      ep.m_nPitch = 100;
      ep.m_pOrigin = 0;
      ep.m_flSoundTime = 0.0;
      ep.m_pflSoundDuration = 0;
      ep.m_bEmitCloseCaption = 1;
      ep.m_bWarnOnMissingCloseCaption = 0;
      ep.m_bWarnOnDirectWaveReference = 0;
      ep.m_nSpeakerEntity.m_Data = -1;
      ep.m_UtlVecSoundOrigin.m_Size = 0;
      memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
      ep.m_nChannel = 2;
      if ( !v9 )
        m_pAsString = this->m_sNoise.u.m_pAsString;
      ep.m_pSoundName = m_pAsString;
      ep.m_SoundLevel = soundlevel_t::SNDLVL_NORM;
      v11.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
      CBaseEntity::EmitSound(&filter, v11, &ep);
      ep.m_UtlVecSoundOrigin.m_Size = 0;
      if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
        if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
      }
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::~CRecipientFilter(&filter);
    }
    m_Index = this->m_hActivator.m_Index;
    m_pInstance = 0;
    if ( m_Index + 2 > 1 )
    {
      v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActivator.m_Index) >> 9) & 0x3F];
      if ( v14 != 0 )
      {
        v15 = &v14[this->m_hActivator.m_Index & 0x1FF];
        if ( v15 != 0 && m_Index == v15->m_EHandle.m_Index )
          m_pInstance = v15->m_pInstance;
      }
    }
    LODWORD(ep.m_pSoundName) = 0;
    *&ep.m_nChannel = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnPressed, m_pInstance, this, &ep, 0.0);
    if ( (BYTE2(ep.m_pSoundName) & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&ep.m_nChannel);
    CBaseButton::ButtonReturn(this);
  }
  else
  {
    v3 = this->m_hActivator.m_Index;
    v4 = 0;
    if ( v3 + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActivator.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[this->m_hActivator.m_Index & 0x1FF];
        if ( v6 != 0 && v3 == v6->m_EHandle.m_Index )
          v4 = v6->m_pInstance;
      }
    }
    LODWORD(ep.m_pSoundName) = 0;
    *&ep.m_nChannel = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnPressed, v4, this, &ep, 0.0);
    if ( (BYTE2(ep.m_pSoundName) & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&ep.m_nChannel);
    CBaseButton::ButtonActivate(this);
  }
}


// CBaseButton::OnTakeDamage  (line 334, @0x00000000021acfd0, libserver.so)  // inlines: CEntityIndex, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, EmitSound_t, FireOutput, Free, Get, GetAttacker, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, Set, SetSoundName, SoundEventGuid_t, String, ToCStr, entindex, operator CBaseEntity*, operator CEntityInstance*, operator=, operator==<CBaseEntity>, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase, ~EmitSound_t
// calls: CEntityIOOutput::FireOutputInternal, CBaseButton::ButtonResponseToTouch, CBaseEntity::GetHealth, __stack_chk_fail, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume, CEntityIOOutput::FireOutput, CBaseButton::ButtonActivate, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CEntityInstance::GetEntityIndex (17 total)
// globals: CEntityHandle::gm_pEntityList
int __fastcall CBaseButton::OnTakeDamage(CBaseButton *const this, const CTakeDamageInfo *const info)
{
  CEntityInstance *m_pInstance; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CBaseButton::BUTTON_CODE v8; // eax
  uint32 v9; // edx
  CConcreteEntityList *v10; // rdi
  CEntityIdentity *v11; // rcx
  CEntityIdentity *v12; // rcx
  CEntityIdentity *m_pEntity; // rcx
  int v15; // edx
  __int16 v16; // si
  uint32 v17; // r8d
  uint32 v18; // r10d
  unsigned __int64 m_Index_low; // r9
  char *v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rax
  CEntityInstance *v25; // rsi
  __int64 v26; // rax
  int v27; // xmm1_4
  float v28; // xmm1_4
  bool v29; // zf
  const char *m_pAsString; // rax
  CEntityIndex v31; // eax
  CEntityInstance *v32; // rsi
  CEntityIdentity *v33; // rax
  CEntityIdentity *v34; // rax
  EmitSound_t ep; // [rsp+0h] [rbp-1C0h] BYREF
  CPASAttenuationFilter filter; // [rsp+60h] [rbp-160h] BYREF
  unsigned __int64 v37; // [rsp+198h] [rbp-28h]

  m_pInstance = 0;
  v37 = __readfsqword(0x28u);
  m_Index = this->m_hActivator.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActivator.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[this->m_hActivator.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  LODWORD(ep.m_pSoundName) = 0;
  *&ep.m_nChannel = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnDamaged, m_pInstance, this, &ep, 0.0);
  if ( (BYTE2(ep.m_pSoundName) & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&ep.m_nChannel);
  if ( (this->m_spawnflags.m_Value & 0x200) != 0 || CBaseEntity::GetHealth(this) != 0 )
  {
    v8 = CBaseButton::ButtonResponseToTouch(this);
    if ( v8 != CBaseButton::BUTTON_CODE::BUTTON_NOTHING )
    {
      v9 = info->m_hAttacker.m_Index;
      v10 = CEntityHandle::gm_pEntityList;
      if ( v9 + 2 <= 1
        || (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F]) == 0
        || (v12 = &v11[info->m_hAttacker.m_Index & 0x1FF]) == 0
        || v9 != v12->m_EHandle.m_Index
        || v12->m_pInstance == 0
        || (m_pEntity = v12->m_pInstance->m_pEntity) == 0 )
      {
        this->m_hActivator.m_Index = -1;
        return 0;
      }
      v15 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v16 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hActivator.m_Index) = v16 | this->m_hActivator.m_Index & 0x8000;
      v17 = (v15 << 15) | this->m_hActivator.m_Index & 0x7FFF;
      this->m_hActivator.m_Index = v17;
      v18 = v17;
      if ( v17 + 2 > 1 )
      {
        m_Index_low = LOWORD(this->m_hActivator.m_Index);
        v20 = &v10->m_Lock.gap0 + ((m_Index_low >> 6) & 0x1F8);
        v21 = *(v20 + 1);
        if ( v21 != 0 )
        {
          v22 = 120 * (m_Index_low & 0x1FF);
          v23 = v22 + v21;
          if ( v23 != 0 && *(v23 + 16) == v17 && *v23 != 0 && !this->m_bLocked )
          {
            this->m_pfnTouch.__pfn = 0;
            this->m_pfnTouch.__delta = 0;
            if ( v8 != CBaseButton::BUTTON_CODE::BUTTON_RETURN )
            {
              v24 = *(v20 + 1);
              v25 = 0;
              if ( v24 != 0 )
              {
                v26 = v22 + v24;
                if ( v26 != 0 && v17 == *(v26 + 16) )
                  v25 = *v26;
              }
              CEntityIOOutput::FireOutput(&this->m_OnPressed, v25, this);
              CBaseButton::ButtonActivate(this);
              return 0;
            }
            if ( this->m_sNoise.u.m_Id != 0 )
            {
              *&ep.m_nChannel = (*(this->_vptr_IHandleEntity + 186))(this);
              LODWORD(ep.m_pSoundName) = v27;
              CRecipientFilter::CRecipientFilter(&filter);
              filter._vptr_IRecipientFilter = &off_3FCB190;
              CRecipientFilter::AddRecipientsByPAS(&filter, &ep);
              filter._vptr_IRecipientFilter = &off_3FECD70;
              *&ep.m_nChannel = (*(this->_vptr_IHandleEntity + 186))(this);
              *&ep.m_pSoundName = v28;
              CPASAttenuationFilter::Filter(&filter, &ep, 0.80000001, v28);
              v29 = this->m_sNoise.u.m_Id == 0;
              ep.m_flVolume = 1.0;
              m_pAsString = "";
              ep.m_nFlags = 0;
              ep.m_nPitch = 100;
              ep.m_pOrigin = 0;
              ep.m_flSoundTime = 0.0;
              ep.m_pflSoundDuration = 0;
              ep.m_bEmitCloseCaption = 1;
              ep.m_bWarnOnMissingCloseCaption = 0;
              ep.m_bWarnOnDirectWaveReference = 0;
              ep.m_nSpeakerEntity.m_Data = -1;
              ep.m_UtlVecSoundOrigin.m_Size = 0;
              memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
              ep.m_nChannel = 2;
              if ( !v29 )
                m_pAsString = this->m_sNoise.u.m_pAsString;
              ep.m_pSoundName = m_pAsString;
              ep.m_SoundLevel = soundlevel_t::SNDLVL_NORM;
              v31.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
              CBaseEntity::EmitSound(&filter, v31, &ep);
              ep.m_UtlVecSoundOrigin.m_Size = 0;
              if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              {
                CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
                if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                  CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
              }
              filter._vptr_IRecipientFilter = &off_3FCB190;
              CRecipientFilter::~CRecipientFilter(&filter);
              v18 = this->m_hActivator.m_Index;
              v32 = 0;
              v10 = CEntityHandle::gm_pEntityList;
              if ( v18 + 2 <= 1 )
                goto LABEL_44;
              m_Index_low = LOWORD(this->m_hActivator.m_Index);
            }
            v33 = v10->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
            if ( v33 != 0 )
            {
              v32 = 0;
              v34 = &v33[m_Index_low & 0x1FF];
              if ( v34 != 0 && v18 == v34->m_EHandle.m_Index )
                v32 = v34->m_pInstance;
            }
            else
            {
              v32 = 0;
            }
LABEL_44:
            LODWORD(ep.m_pSoundName) = 0;
            *&ep.m_nChannel = 0;
            CEntityIOOutput::FireOutputInternal(&this->m_OnPressed, v32, this, &ep, 0.0);
            if ( (BYTE2(ep.m_pSoundName) & 1) != 0 )
              (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&ep.m_nChannel);
            CBaseButton::ButtonReturn(this);
          }
        }
      }
    }
  }
  return 0;
}


// CBaseButton::Spawn  (line 392, @0x0000000002192e40, libserver.so)  // inlines: CUtlSymbolLarge, DotProductAbs, FastSqrt, FloatMakePositive, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, Length, LookupEntity, NetworkStateChanged, OBBSize, QAngle, Set, SetSolid, VectorAdd, VectorLength, VectorMultiply, VectorRotate, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator!=, operator*, operator+, operator-, operator=, operator=<bool>
// calls: CBaseEntity::Spawn, MakeButtonSound, MakeEntitySystemString, CBaseEntity::SetMoveType, CBaseModelEntity::SetModelFromKeyValues, AngleVectors, CBaseEntity::SetDamageOptions, CBaseEntity::GetLocalOrigin, CGameEntitySystem::FindEntityByName, CBaseEntity::ThinkSet, CGlobalVarsBase::curtime, CBaseEntity::SetNextThink (14 total)
// callers: CButtonTimed::Spawn, CRotButton::Spawn
// strings: "EH", "ECON", "ERAD", "ECHEM", "EF", "EA" (11 total)
// globals: jpt_2192E98, jpt_2192F12, CBaseButton::ButtonUse(CBaseEntity *,CBaseEntity *,USE_TYPE,float), CBaseButton::ButtonTouch(CBaseEntity *), CEntityHandle::gm_pEntityList, CBaseButton::ButtonSpark(void)
void __fastcall CBaseButton::Spawn(CBaseButton *const this, const CEntityKeyValues *pKeyValues)
{
  int m_bLockedSound; // esi
  int m_bUnlockedSound; // esi
  int m_sounds; // esi
  bool v7; // zf
  vec_t y; // xmm1_4
  vec_t x; // xmm2_4
  float v10; // xmm5_4
  float v11; // xmm4_4
  float z; // xmm3_4
  float v13; // xmm0_4
  const Vector *LocalOrigin; // rax
  float v15; // xmm0_4
  float v16; // xmm5_4
  float v17; // xmm2_4
  vec_t v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm4_4
  vec_t v21; // xmm2_4
  float v22; // xmm3_4
  unsigned int m_Value; // eax
  vec_t v24; // xmm1_4
  CBaseEntity *EntityByName; // rax
  uint32 m_Index; // edx
  CBaseEntity *m_pInstance; // rcx
  CBaseEntity *v28; // r12
  CEntityIdentity *v29; // rax
  CEntityIdentity *v30; // rax
  double v31; // xmm0_8
  double v32; // xmm1_8
  CEntityIdentity *m_pEntity; // rdx
  int v34; // eax
  __int16 v35; // cx
  matrix3x4_t *v36; // rax
  matrix3x4_t *v37; // rax
  QAngle angMoveDir; // [rsp+10h] [rbp-50h] BYREF
  Vector vecMoveDelta; // [rsp+20h] [rbp-40h] BYREF
  string_t iszName[6]; // [rsp+30h] [rbp-30h] BYREF

  CBaseEntity::Spawn(this, pKeyValues);
  m_bLockedSound = this->m_bLockedSound;
  if ( m_bLockedSound != 0 )
  {
    MakeButtonSound(iszName, m_bLockedSound);
    this->m_ls.sLockedSound = iszName[0];
  }
  m_bUnlockedSound = this->m_bUnlockedSound;
  if ( m_bUnlockedSound != 0 )
  {
    MakeButtonSound(iszName, m_bUnlockedSound);
    this->m_ls.sUnlockedSound = iszName[0];
  }
  switch ( this->m_bLockedSentence )
  {
    case 1u:
      MakeEntitySystemString("NA");
      this->m_ls.sLockedSentence = iszName[0];
      break;
    case 2u:
      MakeEntitySystemString("ND");
      this->m_ls.sLockedSentence = iszName[0];
      break;
    case 3u:
      MakeEntitySystemString("NF");
      this->m_ls.sLockedSentence = iszName[0];
      break;
    case 4u:
      MakeEntitySystemString("NFIRE");
      this->m_ls.sLockedSentence = iszName[0];
      break;
    case 5u:
      MakeEntitySystemString("NCHEM");
      this->m_ls.sLockedSentence = iszName[0];
      break;
    case 6u:
      MakeEntitySystemString("NRAD");
      this->m_ls.sLockedSentence = iszName[0];
      break;
    case 7u:
      MakeEntitySystemString("NCON");
      this->m_ls.sLockedSentence = iszName[0];
      break;
    case 8u:
      MakeEntitySystemString("NH");
      this->m_ls.sLockedSentence = iszName[0];
      break;
    case 9u:
      MakeEntitySystemString("NG");
      this->m_ls.sLockedSentence = iszName[0];
      break;
    default:
      this->m_ls.sLockedSentence.u.m_Id = 0;
      break;
  }
  switch ( this->m_bUnlockedSentence )
  {
    case 1u:
      MakeEntitySystemString("EA");
      this->m_ls.sUnlockedSentence = iszName[0];
      goto LABEL_9;
    case 2u:
      MakeEntitySystemString("ED");
      this->m_ls.sUnlockedSentence = iszName[0];
      goto LABEL_9;
    case 3u:
      MakeEntitySystemString("EF");
      this->m_ls.sUnlockedSentence = iszName[0];
      goto LABEL_9;
    case 4u:
      MakeEntitySystemString("EFIRE");
      this->m_ls.sUnlockedSentence = iszName[0];
      goto LABEL_9;
    case 5u:
      MakeEntitySystemString("ECHEM");
      this->m_ls.sUnlockedSentence = iszName[0];
      goto LABEL_9;
    case 6u:
      MakeEntitySystemString("ERAD");
      this->m_ls.sUnlockedSentence = iszName[0];
      goto LABEL_9;
    case 7u:
      MakeEntitySystemString("ECON");
      m_sounds = this->m_sounds;
      this->m_ls.sUnlockedSentence = iszName[0];
      if ( m_sounds != 0 )
        goto LABEL_39;
      goto LABEL_10;
    case 8u:
      MakeEntitySystemString("EH");
      this->m_ls.sUnlockedSentence = iszName[0];
      goto LABEL_9;
    default:
      this->m_ls.sUnlockedSentence.u.m_Id = 0;
LABEL_9:
      m_sounds = this->m_sounds;
      if ( m_sounds != 0 )
      {
LABEL_39:
        MakeButtonSound(iszName, m_sounds);
        v7 = (this->m_spawnflags.m_Value & 0x1000) == 0;
        this->m_sNoise = iszName[0];
        if ( v7 )
          goto LABEL_11;
      }
      else
      {
LABEL_10:
        v7 = (this->m_spawnflags.m_Value & 0x1000) == 0;
        this->m_sNoise.u.m_Id = 0;
        if ( v7 )
          goto LABEL_11;
      }
      CBaseEntity::ThinkSet(this, CBaseButton::ButtonSpark, 0.0, 0, 0);
      *&v31 = CGlobalVarsBase::curtime(gpGlobals, 0) + 0.5;
      CBaseEntity::SetNextThink(this, v31, v32, 0);
LABEL_11:
      CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_PUSH, MoveCollide_t::MOVECOLLIDE_DEFAULT);
      (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 1);
      CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
      y = this->m_vecMoveDir.y;
      x = this->m_vecMoveDir.x;
      angMoveDir.z = this->m_vecMoveDir.z;
      angMoveDir.y = y;
      angMoveDir.x = x;
      AngleVectors(&angMoveDir, &this->m_vecMoveDir, 0, 0);
      v10 = this->m_vecMoveDir.x;
      v11 = this->m_vecMoveDir.y;
      z = this->m_vecMoveDir.z;
      v7 = !this->m_bMoveDirIsLocal;
      v13 = ((fabs((this->m_Collision.m_vecMaxs.m_Value.x - this->m_Collision.m_vecMins.m_Value.x) * v10)
            + fabs((this->m_Collision.m_vecMaxs.m_Value.y - this->m_Collision.m_vecMins.m_Value.y) * v11))
           + fabs((this->m_Collision.m_vecMaxs.m_Value.z - this->m_Collision.m_vecMins.m_Value.z) * z))
          - this->m_flLip;
      vecMoveDelta.x = v10 * v13;
      vecMoveDelta.y = v11 * v13;
      vecMoveDelta.z = v13 * z;
      if ( !v7 )
      {
        v36 = CBaseEntity::EntityToWorldTransform(this);
        VectorRotate(&this->m_vecMoveDir.x, v36, iszName);
        *&this->m_vecMoveDir.x = iszName[0];
        this->m_vecMoveDir.z = *&iszName[1].u.m_Id;
        v37 = CBaseEntity::EntityToWorldTransform(this);
        VectorRotate(&vecMoveDelta.x, v37, iszName);
        vecMoveDelta = *&iszName[0].u.m_Id;
      }
      if ( this->m_flSpeed == 0.0 )
        this->m_flSpeed = 40.0;
      CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_YES);
      if ( this->m_flWait == 0.0 )
        this->m_flWait = 1.0;
      if ( this->m_flLip == 0.0 )
        this->m_flLip = 4.0;
      this->m_toggle_state = TOGGLE_STATE::TS_AT_BOTTOM;
      LocalOrigin = CBaseEntity::GetLocalOrigin(this);
      v15 = vecMoveDelta.x;
      v16 = LocalOrigin->x;
      v17 = vecMoveDelta.y;
      this->m_vecPosition1.x = LocalOrigin->x;
      v18 = v15 + v16;
      v19 = vecMoveDelta.z;
      v20 = LocalOrigin->y;
      v21 = v17 + v20;
      this->m_vecPosition1.y = v20;
      v22 = LocalOrigin->z;
      this->m_vecPosition2.x = v18;
      m_Value = this->m_spawnflags.m_Value;
      v24 = v19 + v22;
      this->m_vecPosition2.y = v21;
      this->m_vecPosition1.z = v22;
      this->m_vecPosition2.z = v24;
      if ( fsqrt((((v18 - v16) * (v18 - v16)) + ((v21 - v20) * (v21 - v20))) + ((v24 - v22) * (v24 - v22))) < 1.0
        || (m_Value & 1) != 0 )
      {
        this->m_vecPosition2.x = v16;
        this->m_vecPosition2.y = v20;
        this->m_vecPosition2.z = v22;
      }
      this->m_fRotating = 0;
      this->m_fStayPushed = this->m_flWait == -1.0;
      if ( (m_Value & 0x800) != 0 )
        this->m_bLocked = 1;
      if ( (m_Value & 0x400) != 0 )
      {
        v7 = this->m_usable.m_Value;
        this->m_pfnUse.__delta = 0;
        this->m_pfnUse.__pfn = CBaseButton::ButtonUse;
        if ( !v7 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 1532, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          m_Value = this->m_spawnflags.m_Value;
          this->m_usable.m_Value = 1;
        }
      }
      else
      {
        v7 = !this->m_usable.m_Value;
        this->m_pfnUse.__pfn = 0;
        this->m_pfnUse.__delta = 0;
        if ( !v7 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 1532, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_usable.m_Value = 0;
          m_Value = this->m_spawnflags.m_Value;
        }
      }
      if ( (m_Value & 0x100) != 0 )
      {
        this->m_pfnTouch.__delta = 0;
        this->m_pfnTouch.__pfn = CBaseButton::ButtonTouch;
      }
      else
      {
        this->m_pfnTouch.__pfn = 0;
        this->m_pfnTouch.__delta = 0;
      }
      iszName[0] = this->m_sGlowEntity;
      EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, iszName, 0, 0, 0, 0);
      m_Index = this->m_glowEntity.m_Value.m_Index;
      m_pInstance = 0;
      v28 = EntityByName;
      if ( m_Index + 2 > 1 )
      {
        v29 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_glowEntity.m_Value.m_Index) >> 9) & 0x3F];
        if ( v29 != 0 )
        {
          v30 = &v29[this->m_glowEntity.m_Value.m_Index & 0x1FF];
          if ( v30 != 0 && m_Index == v30->m_EHandle.m_Index )
            m_pInstance = v30->m_pInstance;
        }
      }
      if ( v28 != m_pInstance )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1528, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        if ( v28 != 0 && (m_pEntity = v28->m_pEntity) != 0 )
        {
          v34 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          if ( m_pEntity->m_EHandle.m_Index == -1 )
            v35 = 0x7FFF;
          else
            v35 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(this->m_glowEntity.m_Value.m_Index) = v35 | this->m_glowEntity.m_Value.m_Index & 0x8000;
          this->m_glowEntity.m_Value.m_Index = (v34 << 15) | this->m_glowEntity.m_Value.m_Index & 0x7FFF;
        }
        else
        {
          this->m_glowEntity.m_Value.m_Index = -1;
        }
      }
      (*(this->_vptr_IHandleEntity + 49))(this);
      if ( (this->m_spawnflags.m_Value & 0x4000) != 0 )
        (*(this->m_Collision._vptr_ICollideable + 18))(&this->m_Collision);
      return;
  }
}


// CBaseButton::CreateVPhysics  (line 551, @0x0000000002199560, libserver.so)  // inlines: GetCollisionGroup, GetCollisionGroup_Inline
// calls: CCollisionProperty::SetupPhysicsFromUnscaledModel
bool __fastcall CBaseButton::CreateVPhysics(CBaseButton *const this)
{
  CCollisionProperty *m_pCollision; // rax
  int m_Value; // edx

  m_pCollision = this->m_pCollision;
  if ( m_pCollision != 0 )
    m_Value = m_pCollision->m_CollisionGroup.m_Value;
  else
    m_Value = 4;
  CCollisionProperty::SetupPhysicsFromUnscaledModel(
    &this->m_Collision,
    VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED,
    m_Value,
    0);
  return 1;
}


// MakeButtonSound  (line 564, @0x0000000002192d10, libserver.so)
// calls: V_snprintf, AllocPooledString, __stack_chk_fail
// callers: CBaseButton::Precache, CBaseButton::Spawn, CRotButton::Spawn, CMomentaryRotButton::Spawn
// strings: "Buttons.snd%d"
string_t __fastcall MakeButtonSound(__int64 a1, int sound)
{
  char tmp[1032]; // [rsp+0h] [rbp-420h] BYREF
  unsigned __int64 v5; // [rsp+408h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  V_snprintf(tmp, 1024, "Buttons.snd%d", sound);
  AllocPooledString(a1, tmp);
  return a1;
}


// CBaseButton::ButtonSpark  (line 575, @0x000000000218c9b0, libserver.so)  // inlines: curtime
// calls: CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, DoSpark
// globals: CBaseButton::ButtonSpark(void)
void __fastcall CBaseButton::ButtonSpark(CBaseButton *const this)
{
  CGlobalVars *v2; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v4; // xmm2_8
  float v5; // xmm0_4
  double v6; // xmm1_8
  vec_t v7; // xmm1_4
  double v8; // [rsp+8h] [rbp-28h]
  Vector location; // [rsp+10h] [rbp-20h] BYREF

  CBaseEntity::ThinkSet(this, CBaseButton::ButtonSpark, 0.0, 0, 0);
  v2 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    v4 = v2->m_flCurrentTime + 0.1;
  }
  else
  {
    v4 = 0.1;
  }
  v8 = v4;
  v5 = (*(*random_valve + 8LL))(random_valve, 0.0, 1.5);
  CBaseEntity::SetNextThink(this, v5 + v8, v6, 0);
  *&location.x = (*(this->_vptr_IHandleEntity + 62))(this);
  location.z = v7;
  DoSpark(this, &location, 1, 1, 1, &vec3_origin);
}


// CBaseButton::OnUseLocked  (line 587, @0x00000000021a95a0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, curtime, ~CVariantBase
// calls: PlayLockSounds, CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CButtonTimed::UseTimed, CBaseButton::ButtonUse, CMomentaryRotButton::Use
bool __fastcall CBaseButton::OnUseLocked(CBaseButton *const this, CBaseEntity *pActivator)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v5; // r12
  bool result; // al
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CGlobalVars *v8; // r12
  FnGlobalVarsWarningFunc v9; // rax
  float v10; // xmm0_4
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  PlayLockSounds(this, &this->m_ls, 1, 1, 0);
  m_flCurrentTime = 0.0;
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v5->m_flCurrentTime;
  }
  result = 0;
  if ( m_flCurrentTime > this->m_flUseLockedTime )
  {
    value.m_flags = 0;
    value.m_type = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnUseLocked, pActivator, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    v8 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v9 = gpGlobals->m_pfnWarningFunc;
        if ( v9 != 0 )
          v9(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      v10 = v8->m_flCurrentTime + 0.5;
    }
    else
    {
      v10 = 0.5;
    }
    this->m_flUseLockedTime = v10;
    return 1;
  }
  return result;
}


// CBaseButton::ButtonUse  (line 609, @0x00000000021ac170, libserver.so)  // inlines: CEntityIndex, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, EmitSound_t, FireOutput, Free, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, Set, SetSoundName, SoundEventGuid_t, String, ToCStr, entindex, operator CEntityInstance*, operator=, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase, ~EmitSound_t
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, CRecipientFilter::~CRecipientFilter, CEntityIOOutput::FireOutputInternal, CBaseButton::ButtonReturn, CBaseButton::ButtonActivate, CBaseButton::OnUseLocked, CUtlMemory<Vector, int>::Purge, __stack_chk_fail (15 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBaseButton::ButtonUse(
        CBaseButton *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        double value)
{
  TOGGLE_STATE m_toggle_state; // ecx
  CEntityIdentity *m_pEntity; // rdx
  int v8; // eax
  __int16 v9; // si
  int v10; // xmm1_4
  float v11; // xmm1_4
  bool v12; // zf
  const char *m_pAsString; // rax
  CEntityIndex v14; // eax
  uint32 v15; // eax
  CEntityInstance *v16; // rsi
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  uint32 m_Index; // eax
  CEntityInstance *m_pInstance; // rsi
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx
  EmitSound_t ep; // [rsp+0h] [rbp-1C0h] BYREF
  CPASAttenuationFilter filter; // [rsp+60h] [rbp-160h] BYREF
  unsigned __int64 v25; // [rsp+198h] [rbp-28h]

  v25 = __readfsqword(0x28u);
  m_toggle_state = this->m_toggle_state;
  if ( (m_toggle_state - 2) > 1 )
  {
    if ( this->m_bLocked )
    {
      CBaseButton::OnUseLocked(this, pActivator);
    }
    else
    {
      if ( pActivator != 0 && (m_pEntity = pActivator->m_pEntity) != 0 )
      {
        v8 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v9 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hActivator.m_Index) = v9 | this->m_hActivator.m_Index & 0x8000;
        this->m_hActivator.m_Index = (v8 << 15) | this->m_hActivator.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hActivator.m_Index = -1;
      }
      if ( m_toggle_state != TOGGLE_STATE::TS_AT_TOP )
      {
        m_Index = this->m_hActivator.m_Index;
        m_pInstance = 0;
        if ( m_Index + 2 > 1 )
        {
          v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActivator.m_Index) >> 9) & 0x3F];
          if ( v21 != 0 )
          {
            v22 = &v21[this->m_hActivator.m_Index & 0x1FF];
            if ( v22 != 0 && m_Index == v22->m_EHandle.m_Index )
              m_pInstance = v22->m_pInstance;
          }
        }
        LODWORD(ep.m_pSoundName) = 0;
        *&ep.m_nChannel = 0;
        CEntityIOOutput::FireOutputInternal(&this->m_OnPressed, m_pInstance, this, &ep, 0.0);
        if ( (BYTE2(ep.m_pSoundName) & 1) != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&ep.m_nChannel);
        CBaseButton::ButtonActivate(this);
      }
      else if ( (this->m_spawnflags.m_Value & 0x20) != 0 )
      {
        if ( this->m_sNoise.u.m_Id != 0 )
        {
          *&ep.m_nChannel = (*(this->_vptr_IHandleEntity + 186))(this, value);
          LODWORD(ep.m_pSoundName) = v10;
          CRecipientFilter::CRecipientFilter(&filter);
          filter._vptr_IRecipientFilter = &off_3FCB190;
          CRecipientFilter::AddRecipientsByPAS(&filter, &ep);
          filter._vptr_IRecipientFilter = &off_3FECD70;
          *&ep.m_nChannel = (*(this->_vptr_IHandleEntity + 186))(this);
          *&ep.m_pSoundName = v11;
          CPASAttenuationFilter::Filter(&filter, &ep, 0.80000001, v11);
          v12 = this->m_sNoise.u.m_Id == 0;
          ep.m_flVolume = 1.0;
          m_pAsString = "";
          ep.m_nFlags = 0;
          ep.m_nPitch = 100;
          ep.m_pOrigin = 0;
          ep.m_flSoundTime = 0.0;
          ep.m_pflSoundDuration = 0;
          ep.m_bEmitCloseCaption = 1;
          ep.m_bWarnOnMissingCloseCaption = 0;
          ep.m_bWarnOnDirectWaveReference = 0;
          ep.m_nSpeakerEntity.m_Data = -1;
          ep.m_UtlVecSoundOrigin.m_Size = 0;
          memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
          ep.m_nChannel = 2;
          if ( !v12 )
            m_pAsString = this->m_sNoise.u.m_pAsString;
          ep.m_pSoundName = m_pAsString;
          ep.m_SoundLevel = soundlevel_t::SNDLVL_NORM;
          v14.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
          CBaseEntity::EmitSound(&filter, v14, &ep);
          ep.m_UtlVecSoundOrigin.m_Size = 0;
          if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          {
            CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
            if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
          }
          filter._vptr_IRecipientFilter = &off_3FCB190;
          CRecipientFilter::~CRecipientFilter(&filter);
        }
        v15 = this->m_hActivator.m_Index;
        v16 = 0;
        if ( v15 + 2 > 1 )
        {
          v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActivator.m_Index) >> 9) & 0x3F];
          if ( v17 != 0 )
          {
            v18 = &v17[this->m_hActivator.m_Index & 0x1FF];
            if ( v18 != 0 && v15 == v18->m_EHandle.m_Index )
              v16 = v18->m_pInstance;
          }
        }
        LODWORD(ep.m_pSoundName) = 0;
        *&ep.m_nChannel = 0;
        CEntityIOOutput::FireOutputInternal(&this->m_OnPressed, v16, this, &ep, 0.0);
        if ( (BYTE2(ep.m_pSoundName) & 1) != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&ep.m_nChannel);
        CBaseButton::ButtonReturn(this);
      }
    }
  }
}


// CBaseButton::ButtonResponseToTouch  (line 664, @0x0000000002193a30, libserver.so)  // inlines: HasSpawnFlags
// callers: CBaseButton::RejectDamage, CBaseButton::ReactToDamage, CBaseButton::ButtonTouch, CBaseButton::OnTakeDamage
CBaseButton::BUTTON_CODE __fastcall CBaseButton::ButtonResponseToTouch(CBaseButton *const this)
{
  TOGGLE_STATE m_toggle_state; // edx
  CBaseButton::BUTTON_CODE result; // eax

  m_toggle_state = this->m_toggle_state;
  result = CBaseButton::BUTTON_CODE::BUTTON_NOTHING;
  if ( (m_toggle_state - 2) > 1 )
  {
    LOBYTE(result) = 1;
    if ( m_toggle_state == TOGGLE_STATE::TS_AT_TOP )
    {
      LOBYTE(result) = 0;
      if ( !this->m_fStayPushed )
        return (this->m_spawnflags.m_Value >> 4) & 2;
    }
  }
  return result;
}


// CBaseButton::ButtonTouch  (line 690, @0x00000000021ac650, libserver.so)  // inlines: CEntityIndex, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, CVariantBase, EmitSound_t, FireOutput, Free, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, Set, SetSoundName, SoundEventGuid_t, String, ToCStr, entindex, operator CEntityInstance*, operator=, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase, ~EmitSound_t
// calls: CBaseButton::ButtonResponseToTouch, UTIL_IsMasterTriggered, CEntityIOOutput::FireOutputInternal, CBaseButton::ButtonActivate, PlayLockSounds, CPASAttenuationFilter::CPASAttenuationFilter, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, CRecipientFilter::~CRecipientFilter, CBaseButton::ButtonReturn, CUtlMemory<Vector, int>::Purge, __stack_chk_fail (15 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBaseButton::ButtonTouch(CBaseButton *const this, CBaseEntity *pOther)
{
  CEntityIdentity *m_pEntity; // rdx
  int v5; // eax
  __int16 v6; // cx
  CBaseButton::BUTTON_CODE v7; // r13d
  float v8; // xmm1_4
  uint32 v9; // eax
  CEntityInstance *v10; // rsi
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  bool v13; // zf
  const char *m_pAsString; // rax
  CEntityIndex v15; // eax
  uint32 m_Index; // eax
  CEntityInstance *m_pInstance; // rsi
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  EmitSound_t ep; // [rsp+0h] [rbp-1C0h] BYREF
  CPASAttenuationFilter filter; // [rsp+60h] [rbp-160h] BYREF
  unsigned __int64 v22; // [rsp+198h] [rbp-28h]

  v22 = __readfsqword(0x28u);
  if ( (*(pOther->_vptr_IHandleEntity + 140))(pOther) != 0 )
  {
    m_pEntity = pOther->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v5 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v6 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hActivator.m_Index) = v6 | this->m_hActivator.m_Index & 0x8000;
      this->m_hActivator.m_Index = (v5 << 15) | this->m_hActivator.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hActivator.m_Index = -1;
    }
    v7 = CBaseButton::ButtonResponseToTouch(this);
    if ( v7 != CBaseButton::BUTTON_CODE::BUTTON_NOTHING )
    {
      *&ep.m_nChannel = this->m_sMaster.u.m_Id;
      if ( !UTIL_IsMasterTriggered(&ep, pOther) || this->m_bLocked )
      {
        PlayLockSounds(this, &this->m_ls, 1, 1, 0);
      }
      else
      {
        this->m_pfnTouch.__pfn = 0;
        this->m_pfnTouch.__delta = 0;
        if ( v7 == CBaseButton::BUTTON_CODE::BUTTON_RETURN )
        {
          if ( this->m_sNoise.u.m_Id != 0 )
          {
            CPASAttenuationFilter::CPASAttenuationFilter(&filter, this, 0x3F4CCCCDu, v8);
            v13 = this->m_sNoise.u.m_Id == 0;
            ep.m_flVolume = 1.0;
            ep.m_nFlags = 0;
            ep.m_nPitch = 100;
            m_pAsString = "";
            ep.m_pOrigin = 0;
            ep.m_flSoundTime = 0.0;
            ep.m_pflSoundDuration = 0;
            ep.m_bEmitCloseCaption = 1;
            ep.m_bWarnOnMissingCloseCaption = 0;
            ep.m_bWarnOnDirectWaveReference = 0;
            ep.m_nSpeakerEntity.m_Data = -1;
            ep.m_UtlVecSoundOrigin.m_Size = 0;
            memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
            ep.m_nChannel = 2;
            if ( !v13 )
              m_pAsString = this->m_sNoise.u.m_pAsString;
            ep.m_pSoundName = m_pAsString;
            ep.m_SoundLevel = soundlevel_t::SNDLVL_NORM;
            v15.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
            CBaseEntity::EmitSound(&filter, v15, &ep);
            ep.m_UtlVecSoundOrigin.m_Size = 0;
            if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            {
              CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
              if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
            }
            filter._vptr_IRecipientFilter = &off_3FCB190;
            CRecipientFilter::~CRecipientFilter(&filter);
          }
          m_Index = this->m_hActivator.m_Index;
          m_pInstance = 0;
          if ( m_Index + 2 > 1 )
          {
            v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActivator.m_Index) >> 9) & 0x3F];
            if ( v18 != 0 )
            {
              v19 = &v18[this->m_hActivator.m_Index & 0x1FF];
              if ( v19 != 0 && m_Index == v19->m_EHandle.m_Index )
                m_pInstance = v19->m_pInstance;
            }
          }
          LODWORD(ep.m_pSoundName) = 0;
          *&ep.m_nChannel = 0;
          CEntityIOOutput::FireOutputInternal(&this->m_OnPressed, m_pInstance, this, &ep, 0.0);
          if ( (BYTE2(ep.m_pSoundName) & 1) != 0 )
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&ep.m_nChannel);
          CBaseButton::ButtonReturn(this);
        }
        else
        {
          v9 = this->m_hActivator.m_Index;
          v10 = 0;
          if ( v9 + 2 > 1 )
          {
            v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActivator.m_Index) >> 9) & 0x3F];
            if ( v11 != 0 )
            {
              v12 = &v11[this->m_hActivator.m_Index & 0x1FF];
              if ( v12 != 0 && v9 == v12->m_EHandle.m_Index )
                v10 = v12->m_pInstance;
            }
          }
          LODWORD(ep.m_pSoundName) = 0;
          *&ep.m_nChannel = 0;
          CEntityIOOutput::FireOutputInternal(&this->m_OnPressed, v10, this, &ep, 0.0);
          if ( (BYTE2(ep.m_pSoundName) & 1) != 0 )
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&ep.m_nChannel);
          CBaseButton::ButtonActivate(this);
        }
      }
    }
  }
}


// CBaseButton::ButtonActivate  (line 744, @0x00000000021a7b90, libserver.so)  // inlines: CEntityIndex, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, EmitSound_t, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, SetSoundName, SoundEventGuid_t, String, ToCStr, entindex, operator CBaseEntity*, operator CEntityInstance*, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, CRecipientFilter::~CRecipientFilter, UTIL_IsMasterTriggered, PlayLockSounds, CBaseToggle::AngularMove, CBaseToggle::LinearMove, CUtlMemory<Vector, int>::Purge, __stack_chk_fail (14 total)
// callers: CBaseButton::ReactToDamage, CBaseButton::ButtonUse, CBaseButton::ButtonTouch, CBaseButton::Press, CBaseButton::OnTakeDamage
// globals: CEntityHandle::gm_pEntityList, CBaseButton::TriggerAndWait(void)
void __fastcall CBaseButton::ButtonActivate(CBaseButton *const this)
{
  int v2; // xmm1_4
  float v3; // xmm1_4
  bool v4; // zf
  const char *m_pAsString; // rax
  CEntityIndex v6; // eax
  uint32 m_Index; // eax
  CBaseEntity *m_pInstance; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  float v11; // xmm1_4
  EmitSound_t ep; // [rsp+0h] [rbp-1C0h] BYREF
  CPASAttenuationFilter filter; // [rsp+60h] [rbp-160h] BYREF
  unsigned __int64 v14; // [rsp+198h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  if ( this->m_sNoise.u.m_Id != 0 )
  {
    *&ep.m_nChannel = (*(this->_vptr_IHandleEntity + 186))(this);
    LODWORD(ep.m_pSoundName) = v2;
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::AddRecipientsByPAS(&filter, &ep);
    filter._vptr_IRecipientFilter = &off_3FECD70;
    *&ep.m_nChannel = (*(this->_vptr_IHandleEntity + 186))(this);
    *&ep.m_pSoundName = v3;
    CPASAttenuationFilter::Filter(&filter, &ep, 0.80000001, v3);
    v4 = this->m_sNoise.u.m_Id == 0;
    ep.m_flVolume = 1.0;
    m_pAsString = "";
    ep.m_nFlags = 0;
    ep.m_nPitch = 100;
    ep.m_pOrigin = 0;
    ep.m_flSoundTime = 0.0;
    ep.m_pflSoundDuration = 0;
    ep.m_bEmitCloseCaption = 1;
    ep.m_bWarnOnMissingCloseCaption = 0;
    ep.m_bWarnOnDirectWaveReference = 0;
    ep.m_nSpeakerEntity.m_Data = -1;
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
    ep.m_nChannel = 2;
    if ( !v4 )
      m_pAsString = this->m_sNoise.u.m_pAsString;
    ep.m_pSoundName = m_pAsString;
    ep.m_SoundLevel = soundlevel_t::SNDLVL_NORM;
    v6.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    CBaseEntity::EmitSound(&filter, v6, &ep);
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
      if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
    }
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
  m_Index = this->m_hActivator.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActivator.m_Index) >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[this->m_hActivator.m_Index & 0x1FF];
      if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
        m_pInstance = v10->m_pInstance;
    }
  }
  *&ep.m_nChannel = this->m_sMaster.u.m_Id;
  if ( UTIL_IsMasterTriggered(&ep, m_pInstance) && !this->m_bLocked )
  {
    PlayLockSounds(this, &this->m_ls, 0, 1, 0);
    v4 = !this->m_fRotating;
    this->m_toggle_state = TOGGLE_STATE::TS_GOING_UP;
    this->m_pfnMoveDone.__pfn = CBaseButton::TriggerAndWait;
    this->m_pfnMoveDone.__delta = 0;
    if ( v4 )
      CBaseToggle::LinearMove(this, &this->m_vecPosition2, v11);
    else
      CBaseToggle::AngularMove(this, &this->m_vecAngle2, v11);
  }
  else
  {
    PlayLockSounds(this, &this->m_ls, 1, 1, 0);
  }
}


// CBaseButton::ObjectCaps  (line 785, @0x00000000021878f0, libserver.so)  // inlines: HasSpawnFlags
// calls: CBaseEntity::ObjectCaps
// callers: CButtonTimed::ObjectCaps, CMomentaryRotButton::ObjectCaps
int __fastcall CBaseButton::ObjectCaps(CBaseButton *const this)
{
  int v2; // eax

  v2 = CBaseEntity::ObjectCaps(this);
  LOBYTE(v2) = v2 & 0x7F;
  return v2 | ((this->m_spawnflags.m_Value << 21) >> 31) & 0x21;
}


// CBaseButton::TriggerAndWait  (line 796, @0x00000000021a9950, libserver.so)  // inlines: CUtlSymbolLarge, CVariantBase, FireOutput, Free, Get, GetEntityIdentity, GetEntryIndex, GetInstance, HasSpawnFlags, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator CBaseEntity*, operator CEntityInstance*, operator=<bool>, ~CVariantBase
// calls: UTIL_IsMasterTriggered, CEntityIOOutput::FireOutputInternal, CGlobalVarsBase::curtime, CBaseEntity::SetNextThink, CBaseEntity::ThinkSet, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList, CBaseButton::ButtonTouch(CBaseEntity *), CBaseButton::ButtonReturn(void)
void __fastcall CBaseButton::TriggerAndWait(CBaseButton *const this)
{
  CBaseEntity *m_pInstance; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  unsigned int m_Value; // eax
  bool v7; // r13
  uint32 v8; // eax
  CEntityInstance *v9; // rsi
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  double v12; // xmm0_8
  double v13; // xmm1_8
  CVariant sMaster[3]; // [rsp+0h] [rbp-30h] BYREF

  m_pInstance = 0;
  m_Index = this->m_hActivator.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActivator.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hActivator.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
        m_pInstance = v5->m_pInstance;
    }
  }
  sMaster[0].m_uint64 = this->m_sMaster.u.m_Id;
  if ( UTIL_IsMasterTriggered(sMaster, m_pInstance) && !this->m_bLocked )
  {
    this->m_toggle_state = TOGGLE_STATE::TS_AT_TOP;
    m_Value = this->m_spawnflags.m_Value;
    v7 = (m_Value & 0x20) != 0;
    if ( v7 != this->m_usable.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1532, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      m_Value = this->m_spawnflags.m_Value;
      this->m_usable.m_Value = v7;
    }
    if ( this->m_fStayPushed || (m_Value & 0x20) != 0 )
    {
      if ( (m_Value & 0x100) != 0 )
      {
        this->m_pfnTouch.__delta = 0;
        this->m_pfnTouch.__pfn = CBaseButton::ButtonTouch;
      }
      else
      {
        this->m_pfnTouch.__pfn = 0;
        this->m_pfnTouch.__delta = 0;
      }
    }
    else
    {
      *&v12 = CGlobalVarsBase::curtime(gpGlobals, 0) + this->m_flWait;
      CBaseEntity::SetNextThink(this, v12, v13, 0);
      CBaseEntity::ThinkSet(this, CBaseButton::ButtonReturn, 0.0, 0, 0);
    }
    v8 = this->m_hActivator.m_Index;
    v9 = 0;
    this->m_nState = 1;
    if ( v8 + 2 > 1 )
    {
      v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActivator.m_Index) >> 9) & 0x3F];
      if ( v10 != 0 )
      {
        v11 = &v10[this->m_hActivator.m_Index & 0x1FF];
        if ( v11 != 0 && v8 == v11->m_EHandle.m_Index )
          v9 = v11->m_pInstance;
      }
    }
    sMaster[0].m_type = 0;
    sMaster[0].m_flags = 0;
    sMaster[0].m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnIn, v9, this, sMaster, 0.0);
    if ( (sMaster[0].m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, sMaster[0].m_uint64);
  }
}


// CBaseButton::ButtonReturn  (line 842, @0x0000000002188630, libserver.so)
// calls: CBaseToggle::AngularMove, CBaseToggle::LinearMove
// callers: CBaseButton::ReactToDamage, CBaseButton::ButtonUse, CBaseButton::ButtonTouch, CBaseButton::Press, CBaseButton::OnTakeDamage
// globals: CBaseButton::ButtonBackHome(void)
void __fastcall CBaseButton::ButtonReturn(CBaseButton *const this)
{
  float v1; // xmm1_4
  bool v3; // zf

  this->m_pfnMoveDone.__pfn = CBaseButton::ButtonBackHome;
  v3 = !this->m_fRotating;
  this->m_toggle_state = TOGGLE_STATE::TS_GOING_DOWN;
  this->m_pfnMoveDone.__delta = 0;
  if ( v3 )
    CBaseToggle::LinearMove(this, &this->m_vecPosition1, v1);
  else
    CBaseToggle::AngularMove(this, &this->m_vecAngle1, v1);
  this->m_nState = 0;
}


// CBaseButton::ButtonBackHome  (line 861, @0x00000000021a9220, libserver.so)  // inlines: CVariantBase, FireOutput, Free, GetEntityIdentity, GetEntryIndex, GetInstance, HasSpawnFlags, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, curtime, operator CEntityInstance*, operator=<bool>, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList, CBaseButton::ButtonTouch(CBaseEntity *), CBaseButton::ButtonSpark(void)
void __fastcall CBaseButton::ButtonBackHome(CBaseButton *const this)
{
  uint32 m_Index; // eax
  CEntityInstance *m_pInstance; // rsi
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  unsigned int m_Value; // eax
  double v7; // xmm1_8
  CGlobalVars *v8; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v10; // xmm0_8
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  this->m_toggle_state = TOGGLE_STATE::TS_AT_BOTTOM;
  if ( !this->m_usable.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1532, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_usable.m_Value = 1;
  }
  m_Index = this->m_hActivator.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActivator.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hActivator.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
        m_pInstance = v5->m_pInstance;
    }
  }
  value.m_uint64 = 0;
  value.m_type = 0;
  value.m_flags = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnOut, m_pInstance, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  m_Value = this->m_spawnflags.m_Value;
  if ( (m_Value & 0x100) != 0 )
  {
    this->m_pfnTouch.__delta = 0;
    this->m_pfnTouch.__pfn = CBaseButton::ButtonTouch;
    if ( (m_Value & 0x1000) == 0 )
      return;
  }
  else
  {
    this->m_pfnTouch.__pfn = 0;
    this->m_pfnTouch.__delta = 0;
    if ( (m_Value & 0x1000) == 0 )
      return;
  }
  CBaseEntity::ThinkSet(this, CBaseButton::ButtonSpark, 0.0, 0, 0);
  v8 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v10) = 0;
    *&v10 = v8->m_flCurrentTime + 0.5;
  }
  else
  {
    *&v10 = 1056964608;
  }
  CBaseEntity::SetNextThink(this, v10, v7, 0);
}


// CBaseButton::DrawDebugTextOverlays  (line 893, @0x0000000002187960, libserver.so)
// calls: CBaseEntity::DrawDebugTextOverlays, V_snprintf, CBaseEntity::EntityText, __stack_chk_fail
// callers: CMomentaryRotButton::DrawDebugTextOverlays
// strings: "State: %s"
// globals: CBaseButton::DrawDebugTextOverlays(ulong long,int)::pszStates
int __fastcall CBaseButton::DrawDebugTextOverlays(
        CBaseButton *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v3; // r14
  char v4; // r13
  int v6; // r12d
  __int64 m_toggle_state; // rax
  int v8; // r14d
  const char *v9; // rcx
  char tempstr[264]; // [rsp+10h] [rbp-130h] BYREF
  unsigned __int64 v12; // [rsp+118h] [rbp-28h]

  v3 = iDebugFilterFlags;
  v4 = nDebugOverlayBits;
  v12 = __readfsqword(0x28u);
  v6 = CBaseEntity::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v4 & 1) != 0 && (v3 & 0x4000) != 0 )
  {
    m_toggle_state = 4;
    v8 = v6 + 1;
    if ( this->m_toggle_state <= TOGGLE_STATE::TS_GOING_DOWN )
      m_toggle_state = this->m_toggle_state;
    V_snprintf(
      tempstr,
      255,
      "State: %s",
      CBaseButton::DrawDebugTextOverlays(unsigned long long,int)::pszStates[m_toggle_state]);
    CBaseEntity::EntityText(this, v6, tempstr, 0.0, 255, 255, 255, 255);
    v9 = "Locked";
    if ( !this->m_bLocked )
      v9 = "Unlocked";
    v6 += 2;
    V_snprintf(tempstr, 255, "%s", v9);
    CBaseEntity::EntityText(this, v8, tempstr, 0.0, 255, 255, 255, 255);
  }
  return v6;
}


// CRotButton::GetDataDescMap  (line 932, @0x00000000021875e0, libserver.so)
// globals: CRotButton::m_DataMap
datamap_t *__fastcall CRotButton::GetDataDescMap(CRotButton *const this)
{
  return &CRotButton::m_DataMap;
}


// CRotButton::AddDatadescMetadataKeys  (line 932, @0x0000000002193a70, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CRotButton::GetEntityClass(void)
void __fastcall CRotButton::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CRotButton::GetEntityClass);
}


// CRotButton::GetBaseMap  (line 932, @0x0000000002193a90, libserver.so)
// globals: CBaseButton::m_DataMap
datamap_t *__cdecl CRotButton::GetBaseMap()
{
  return &CBaseButton::m_DataMap;
}


// DataMapInit<CRotButton>  (line 932, @0x0000000002193aa0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "CRotButton"
// globals: `guard variable for'DataMapInit<CRotButton>(CRotButton *)::nameHolder, CBaseButton::m_DataMap, CRotButton::GetEntityClass(void), DataMapInit<CRotButton>(CRotButton *)::dataDesc, CRotButton::m_DataMap, DataMapInit<CRotButton>(CRotButton *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CRotButton>(CRotButton *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CRotButton>(CRotButton *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CRotButton>(CRotButton *)::nameHolder) != 0 )
  {
    DataMapInit<CRotButton>(CRotButton *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CRotButton>(CRotButton *)::nameHolder.m_pszBase = "CRotButton";
    DataMapInit<CRotButton>(CRotButton *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CRotButton>(CRotButton *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CRotButton>(CRotButton *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CRotButton>(CRotButton *)::nameHolder.m_nLenBase = 10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CRotButton>(CRotButton *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CRotButton>(CRotButton *)::nameHolder,
      &_dso_handle);
  }
  CRotButton::m_DataMap.dataNumFields = 1;
  CRotButton::m_DataMap.baseMap = &CBaseButton::m_DataMap;
  CRotButton::m_DataMap.dataDesc = DataMapInit<CRotButton>(CRotButton *)::dataDesc;
  AddDatadescMetadataKeys(&CRotButton::m_DataMap, CRotButton::GetEntityClass);
  return &CRotButton::m_DataMap;
}


// CRotButton::Spawn  (line 935, @0x0000000002193780, libserver.so)  // inlines: AddEFlags, SetSolid, operator*, operator+, operator=
// calls: CBaseButton::Spawn, CBaseToggle::AxisDir, CBaseEntity::SetMoveType, CBaseModelEntity::SetModelFromKeyValues, CBaseEntity::GetHealth, CBaseEntity::SetDamageOptions, CBaseEntity::GetLocalAngles, MakeButtonSound
// callers: CMomentaryRotButton::Spawn
// globals: CBaseButton::ButtonUse(CBaseEntity *,CBaseEntity *,USE_TYPE,float), CBaseButton::ButtonTouch(CBaseEntity *)
void __fastcall CRotButton::Spawn(CRotButton *const this, const CEntityKeyValues *pKeyValues)
{
  int m_sounds; // esi
  float z; // xmm1_4
  float x; // xmm3_4
  QAngle *LocalAngles; // rax
  __m128i x_low; // xmm4
  __m128i y_low; // xmm5
  float m_flMoveDistance; // xmm0_4
  float v11; // r12d
  float v12; // r13d
  const QAngle *v13; // rax
  vec_t v14; // xmm1_4
  vec_t v15; // xmm0_4
  vec_t v16; // xmm2_4
  bool v17; // zf
  float v18; // [rsp+Ch] [rbp-34h]
  UtlSymLargeId_t v19[6]; // [rsp+10h] [rbp-30h] BYREF

  CBaseButton::Spawn(this, pKeyValues);
  m_sounds = this->m_sounds;
  if ( m_sounds != 0 )
  {
    MakeButtonSound(v19, m_sounds);
    this->m_sNoise.u.m_Id = v19[0];
  }
  else
  {
    this->m_sNoise.u.m_Id = 0;
  }
  CBaseToggle::AxisDir(this);
  if ( (this->m_spawnflags.m_Value & 2) != 0 )
  {
    z = this->m_vecMoveAng.z;
    x = this->m_vecMoveAng.x;
    this->m_vecMoveAng.y = -this->m_vecMoveAng.y;
    this->m_vecMoveAng.z = -z;
    this->m_vecMoveAng.x = -x;
  }
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_PUSH, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 6);
  if ( (this->m_spawnflags.m_Value & 1) != 0 )
  {
    this->m_iEFlags |= 0x40000u;
    (*(this->m_Collision._vptr_ICollideable + 18))(&this->m_Collision);
  }
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  if ( this->m_flSpeed == 0.0 )
    this->m_flSpeed = 40.0;
  if ( this->m_flWait == 0.0 )
    this->m_flWait = 1.0;
  if ( CBaseEntity::GetHealth(this) > 0 )
    CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_YES);
  this->m_toggle_state = TOGGLE_STATE::TS_AT_BOTTOM;
  LocalAngles = CBaseEntity::GetLocalAngles(this);
  x_low = LODWORD(this->m_vecMoveAng.x);
  y_low = LODWORD(this->m_vecMoveAng.y);
  this->m_vecAngle1 = *LocalAngles;
  m_flMoveDistance = this->m_flMoveDistance;
  *x_low.m128i_i32 = *x_low.m128i_i32 * m_flMoveDistance;
  *y_low.m128i_i32 = *y_low.m128i_i32 * m_flMoveDistance;
  v11 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
  v12 = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
  v18 = m_flMoveDistance * this->m_vecMoveAng.z;
  v13 = CBaseEntity::GetLocalAngles(this);
  v14 = v12 + v13->y;
  v15 = v18 + v13->z;
  v16 = v11 + v13->x;
  this->m_fRotating = 1;
  this->m_vecAngle2.y = v14;
  this->m_vecAngle2.z = v15;
  this->m_vecAngle2.x = v16;
  v17 = this->m_flWait == -1.0;
  this->m_pfnUse.__delta = 0;
  LOBYTE(v13) = v17;
  v17 = (this->m_spawnflags.m_Value & 0x100) == 0;
  this->m_fStayPushed = v13;
  this->m_pfnUse.__pfn = CBaseButton::ButtonUse;
  if ( v17 )
  {
    this->m_pfnTouch.__pfn = 0;
    this->m_pfnTouch.__delta = 0;
  }
  else
  {
    this->m_pfnTouch.__delta = 0;
    this->m_pfnTouch.__pfn = CBaseButton::ButtonTouch;
  }
  (*(this->_vptr_IHandleEntity + 49))(this);
}


// CMomentaryRotButton::GetDataDescMap  (line 1017, @0x00000000021875f0, libserver.so)
// globals: CMomentaryRotButton::m_DataMap
datamap_t *__fastcall CMomentaryRotButton::GetDataDescMap(CMomentaryRotButton *const this)
{
  return &CMomentaryRotButton::m_DataMap;
}


// CMomentaryRotButton::AddDatadescMetadataKeys  (line 1017, @0x0000000002193b70, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CMomentaryRotButton::GetEntityClass(void)
void __fastcall CMomentaryRotButton::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CMomentaryRotButton::GetEntityClass);
}


// CMomentaryRotButton::GetBaseMap  (line 1017, @0x0000000002193b90, libserver.so)
// globals: CRotButton::m_DataMap
datamap_t *__cdecl CMomentaryRotButton::GetBaseMap()
{
  return &CRotButton::m_DataMap;
}


// DataMapInit<CMomentaryRotButton>  (line 1017, @0x00000000021ae430, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "CMomentaryRotButton"
// globals: `guard variable for'DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder, `guard variable for'DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::dataDesc, CRotButton::m_DataMap, CMomentaryRotButton::GetEntityClass(void), CMomentaryRotButton::m_DataMap, DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax
  char *v6; // r12
  __int64 v7; // rbx
  int v8; // eax
  char **v9; // rax
  char *v10; // r12
  __int64 v11; // rbx
  int v12; // eax
  char **v13; // rax
  char *v14; // r12
  __int64 v15; // rbx
  int v16; // eax
  char **v17; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder) != 0 )
  {
    DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_pszBase = "CMomentaryRotButton";
    DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_nLenBase = 19;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder,
      &_dso_handle);
  }
  CMomentaryRotButton::m_DataMap.baseMap = &CRotButton::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_nLenBase + 12);
    strcpy(stpcpy(v2, DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_pszBase), "UseMoveDone");
    m_Size = DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Size == DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(
        &DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Memory,
        1);
      v4 = DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::dataDesc[11].fieldName = v2;
    v6 = operator new[](DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_nLenBase + 15);
    strcpy(stpcpy(v6, DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_pszBase), "ReturnMoveDone");
    v7 = DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Size == DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(
        &DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Memory,
        1);
      v8 = DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::dataDesc[12].fieldName = v6;
    v10 = operator new[](DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_nLenBase + 20);
    strcpy(
      stpcpy(v10, DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_pszBase),
      "SetPositionMoveDone");
    v11 = DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Size;
    v12 = DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Size == DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(
        &DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Memory,
        1);
      v12 = DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Size = v12 + 1;
    v13 = &DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Memory.m_pMemory[v11];
    if ( v13 != 0 )
      *v13 = v10;
    DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::dataDesc[13].fieldName = v10;
    v14 = operator new[](DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_nLenBase + 12);
    strcpy(stpcpy(v14, DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_pszBase), "UpdateThink");
    v15 = DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Size;
    v16 = DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Size == DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(
        &DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Memory,
        1);
      v16 = DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Size = v16 + 1;
    v17 = &DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::nameHolder.m_Names.m_Memory.m_pMemory[v15];
    if ( v17 != 0 )
      *v17 = v14;
    DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::dataDesc[14].fieldName = v14;
    DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::dataDesc[19].pSaveRestoreOps = eventFuncs;
    DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::dataDesc[20].pSaveRestoreOps = eventFuncs;
    DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::dataDesc[21].pSaveRestoreOps = eventFuncs;
    DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::dataDesc[22].pSaveRestoreOps = eventFuncs;
    DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::dataDesc[23].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::dataDesc);
  }
  CMomentaryRotButton::m_DataMap.dataNumFields = 26;
  CMomentaryRotButton::m_DataMap.dataDesc = &DataMapInit<CMomentaryRotButton>(CMomentaryRotButton *)::dataDesc[1];
  AddDatadescMetadataKeys(&CMomentaryRotButton::m_DataMap, CMomentaryRotButton::GetEntityClass);
  return &CMomentaryRotButton::m_DataMap;
}


// CMomentaryRotButton::Spawn  (line 1061, @0x00000000021a8720, libserver.so)  // inlines: AddEFlags, CUtlSymbolLarge, GetDebugName, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, HasSpawnFlags, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetSolid, UpdateTarget, operator!=, operator*, operator+, operator-, operator=, operator=<bool>
// calls: CRotButton::Spawn, CBaseToggle::AxisDir, CEntityIdentity::GetDebugName, Warning, CBaseEntity::GetLocalAngles, CMomentaryRotButton::UpdateTarget, CBaseEntity::SetMoveType, CBaseModelEntity::SetModelFromKeyValues, CGameEntitySystem::FindEntityByName, MakeButtonSound
// strings: "WARNING: Momentary door (%s) start position not between 0 and 1.  Clamping.\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CMomentaryRotButton::Spawn(CMomentaryRotButton *const this, const CEntityKeyValues *pKeyValues)
{
  bool v4; // zf
  float m_flStartPosition; // xmm0_4
  const char *DebugName; // rax
  __m128 m_IdealYaw_low; // xmm1
  int m_direction; // eax
  float m_flMoveDistance; // xmm1_4
  float x; // xmm2_4
  float y; // xmm3_4
  float v12; // xmm4_4
  const QAngle *LocalAngles; // rax
  float v14; // xmm4_4
  vec_t v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  float v18; // xmm3_4
  float v19; // xmm1_4
  const QAngle *v20; // rax
  float v21; // xmm1_4
  vec_t v22; // xmm3_4
  vec_t v23; // xmm2_4
  float v24; // xmm0_4
  unsigned int m_Value; // eax
  int m_sounds; // esi
  CBaseEntity *EntityByName; // rax
  uint32 m_Index; // edx
  CBaseEntity *m_pInstance; // rcx
  CBaseEntity *v30; // r12
  CEntityIdentity *v31; // rax
  CEntityIdentity *v32; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v34; // eax
  __int16 v35; // cx
  float z; // xmm4_4
  float v37; // [rsp+10h] [rbp-40h]
  float v38; // [rsp+10h] [rbp-40h]
  float v39; // [rsp+14h] [rbp-3Ch]
  float v40; // [rsp+14h] [rbp-3Ch]
  float v41; // [rsp+18h] [rbp-38h]
  float v42; // [rsp+18h] [rbp-38h]
  string_t iszName; // [rsp+20h] [rbp-30h] BYREF

  CRotButton::Spawn(this, pKeyValues);
  CBaseToggle::AxisDir(this);
  v4 = this->m_flSpeed == 0.0;
  this->m_bUpdateTarget = 1;
  if ( v4 )
    this->m_flSpeed = 100.0;
  m_flStartPosition = this->m_flStartPosition;
  if ( m_flStartPosition < 0.0 || m_flStartPosition > 1.0 )
  {
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    Warning("WARNING: Momentary door (%s) start position not between 0 and 1.  Clamping.\n", DebugName);
    m_IdealYaw_low = LODWORD(this->m_IdealYaw);
    m_flStartPosition = 1.0;
    if ( m_IdealYaw_low.m128_f32[0] <= 1.0 )
      m_flStartPosition = _mm_andnot_ps(_mm_cmplt_ss(m_IdealYaw_low, 0LL), m_IdealYaw_low).m128_f32[0];
    this->m_flStartPosition = m_flStartPosition;
  }
  m_direction = this->m_direction;
  if ( m_direction != -1 && m_direction != 1 )
    this->m_direction = 1;
  m_flMoveDistance = this->m_flMoveDistance;
  x = this->m_vecMoveAng.x;
  if ( m_flMoveDistance < 0.0 )
  {
    z = this->m_vecMoveAng.z;
    x = -x;
    m_flMoveDistance = -m_flMoveDistance;
    y = -this->m_vecMoveAng.y;
    this->m_vecMoveAng.x = x;
    v12 = -z;
    this->m_vecMoveAng.y = y;
    this->m_vecMoveAng.z = v12;
    this->m_flMoveDistance = m_flMoveDistance;
  }
  else
  {
    y = this->m_vecMoveAng.y;
    v12 = this->m_vecMoveAng.z;
  }
  v37 = (x * m_flMoveDistance) * m_flStartPosition;
  v39 = (y * m_flMoveDistance) * m_flStartPosition;
  v41 = (m_flMoveDistance * v12) * m_flStartPosition;
  LocalAngles = CBaseEntity::GetLocalAngles(this);
  v14 = LocalAngles->y;
  v15 = LocalAngles->x - v37;
  this->m_start.z = LocalAngles->z - v41;
  v16 = this->m_vecMoveAng.x;
  v17 = this->m_flMoveDistance;
  v18 = this->m_vecMoveAng.y;
  this->m_start.x = v15;
  this->m_start.y = v14 - v39;
  v19 = 1.0 - this->m_flStartPosition;
  v38 = (v16 * v17) * v19;
  v40 = (v18 * v17) * v19;
  v42 = (v17 * this->m_vecMoveAng.z) * v19;
  v20 = CBaseEntity::GetLocalAngles(this);
  v22 = v40 + v20->y;
  v23 = v38 + v20->x;
  this->m_end.z = v42 + v20->z;
  v24 = this->m_flStartPosition;
  this->m_end.y = v22;
  this->m_end.x = v23;
  this->m_IdealYaw = v24;
  if ( v24 == 0.0 )
  {
    this->m_direction = -1;
  }
  else if ( v24 == 1.0 )
  {
    this->m_direction = 1;
  }
  m_Value = this->m_spawnflags.m_Value;
  if ( (m_Value & 0x800) != 0 )
    this->m_bLocked = 1;
  if ( (m_Value & 0x400) != 0 )
  {
    m_sounds = this->m_sounds;
    if ( m_sounds != 0 )
    {
      MakeButtonSound(&iszName, m_sounds);
      this->m_sNoise = iszName;
    }
    else
    {
      this->m_sNoise.u.m_Id = 0;
    }
    v4 = !this->m_bUpdateTarget;
    this->m_lastUsed = 0;
    if ( !v4 && this->m_Position.m_Value != 0.0 )
      CMomentaryRotButton::UpdateTarget(this, 0.0, v21, this);
  }
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 6);
  if ( (this->m_spawnflags.m_Value & 1) != 0 )
  {
    this->m_iEFlags |= 0x40000u;
    (*(this->m_Collision._vptr_ICollideable + 18))(&this->m_Collision);
  }
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_PUSH, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  (*(this->_vptr_IHandleEntity + 49))(this);
  if ( this->m_bSolidBsp )
    (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 1);
  v4 = (this->m_spawnflags.m_Value & 0x400) == 0;
  this->m_bDisabled = 0;
  if ( v4 )
  {
    if ( this->m_usable.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1532, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_usable.m_Value = 0;
    }
  }
  else if ( !this->m_usable.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1532, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_usable.m_Value = 1;
  }
  iszName.u.m_Id = this->m_sGlowEntity.u.m_Id;
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, 0, 0, 0, 0);
  m_Index = this->m_glowEntity.m_Value.m_Index;
  m_pInstance = 0;
  v30 = EntityByName;
  if ( m_Index + 2 > 1 )
  {
    v31 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_glowEntity.m_Value.m_Index) >> 9) & 0x3F];
    if ( v31 != 0 )
    {
      v32 = &v31[this->m_glowEntity.m_Value.m_Index & 0x1FF];
      if ( v32 != 0 && m_Index == v32->m_EHandle.m_Index )
        m_pInstance = v32->m_pInstance;
    }
  }
  if ( v30 != m_pInstance )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1528, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    if ( v30 != 0 && (m_pEntity = v30->m_pEntity) != 0 )
    {
      v34 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v35 = 0x7FFF;
      else
        v35 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_glowEntity.m_Value.m_Index) = v35 | this->m_glowEntity.m_Value.m_Index & 0x8000;
      this->m_glowEntity.m_Value.m_Index = (v34 << 15) | this->m_glowEntity.m_Value.m_Index & 0x7FFF;
    }
    else
    {
      this->m_glowEntity.m_Value.m_Index = -1;
    }
  }
}


// CMomentaryRotButton::ObjectCaps  (line 1162, @0x0000000002187920, libserver.so)
// calls: CBaseButton::ObjectCaps
int __fastcall CMomentaryRotButton::ObjectCaps(CMomentaryRotButton *const this)
{
  int result; // eax

  result = CBaseButton::ObjectCaps(this);
  if ( (this->m_spawnflags.m_Value & 0x400) != 0 )
    return result | 0x22;
  return result;
}


// CMomentaryRotButton::PlaySound  (line 1179, @0x00000000021a7f30, libserver.so)  // inlines: CEntityIndex, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, EmitSound_t, Purge, RemoveAll, SetSoundName, SoundEventGuid_t, String, ToCStr, entindex, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, CRecipientFilter::~CRecipientFilter, CUtlMemory<Vector, int>::Purge, __stack_chk_fail, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CMomentaryRotButton::UpdateSelf
void __fastcall CMomentaryRotButton::PlaySound(CMomentaryRotButton *const this)
{
  int v2; // xmm1_4
  float v3; // xmm1_4
  bool v4; // zf
  const char *m_pAsString; // rax
  CEntityIndex v6; // eax
  EmitSound_t ep; // [rsp+0h] [rbp-1C0h] BYREF
  CPASAttenuationFilter filter; // [rsp+60h] [rbp-160h] BYREF
  unsigned __int64 v9; // [rsp+198h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  if ( this->m_sNoise.u.m_Id != 0 )
  {
    *&ep.m_nChannel = (*(this->_vptr_IHandleEntity + 186))(this);
    LODWORD(ep.m_pSoundName) = v2;
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::AddRecipientsByPAS(&filter, &ep);
    filter._vptr_IRecipientFilter = &off_3FECD70;
    *&ep.m_nChannel = (*(this->_vptr_IHandleEntity + 186))(this);
    *&ep.m_pSoundName = v3;
    CPASAttenuationFilter::Filter(&filter, &ep, 0.80000001, v3);
    v4 = this->m_sNoise.u.m_Id == 0;
    ep.m_flVolume = 1.0;
    m_pAsString = "";
    ep.m_nFlags = 0;
    ep.m_nPitch = 100;
    ep.m_pOrigin = 0;
    ep.m_flSoundTime = 0.0;
    ep.m_pflSoundDuration = 0;
    ep.m_bEmitCloseCaption = 1;
    ep.m_bWarnOnMissingCloseCaption = 0;
    ep.m_bWarnOnDirectWaveReference = 0;
    ep.m_nSpeakerEntity.m_Data = -1;
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
    ep.m_nChannel = 2;
    if ( !v4 )
      m_pAsString = this->m_sNoise.u.m_pAsString;
    ep.m_pSoundName = m_pAsString;
    ep.m_SoundLevel = soundlevel_t::SNDLVL_NORM;
    v6.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    CBaseEntity::EmitSound(&filter, v6, &ep);
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
      if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
    }
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
}


// CMomentaryRotButton::GetPos  (line 1200, @0x0000000002193ba0, libserver.so)
// calls: CBaseToggle::AxisDelta
// callers: CMomentaryRotButton::DrawDebugTextOverlays, CMomentaryRotButton::InputSetPosition, CMomentaryRotButton::ReturnMoveDone, CMomentaryRotButton::UpdateThink, CMomentaryRotButton::UseMoveDone, CMomentaryRotButton::SetPositionMoveDone, CMomentaryRotButton::Use
float __fastcall CMomentaryRotButton::GetPos(CMomentaryRotButton *const this, const QAngle *const vecAngles)
{
  float v3; // xmm1_4
  float result; // xmm0_4
  float v5; // xmm1_4
  float flScale; // [rsp+0h] [rbp-1Ch]

  if ( this->m_vecMoveAng.x < 0.0 || this->m_vecMoveAng.y < 0.0 || this->m_vecMoveAng.z < 0.0 )
    flScale = -1.0;
  else
    flScale = 1.0;
  v3 = flScale * CBaseToggle::AxisDelta(this->m_spawnflags.m_Value, vecAngles, &this->m_start);
  result = 1.0;
  v5 = v3 / this->m_flMoveDistance;
  if ( v5 <= 1.0 )
    return fmaxf(0.0, v5);
  return result;
}


// CMomentaryRotButton::InputSetPosition  (line 1217, @0x0000000002193ee0, libserver.so)  // inlines: Float, curtime, operator float, operator*, operator+
// calls: CBaseEntity::GetLocalAngles, CMomentaryRotButton::GetPos, CBaseEntity::SetLocalAngularVelocity, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CBaseToggle::AxisDelta, CBaseEntity::SetMoveDoneTime
// globals: CMomentaryRotButton::SetPositionMoveDone(void), CMomentaryRotButton::UpdateThink(void)
void __fastcall CMomentaryRotButton::InputSetPosition(CMomentaryRotButton *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm1_4
  float v4; // xmm0_4
  const QAngle *LocalAngles; // rax
  float Pos; // xmm0_4
  float m_IdealYaw; // xmm1_4
  float v8; // xmm0_4
  vec_t v9; // xmm2_4
  vec_t v10; // xmm1_4
  vec_t v11; // xmm0_4
  double v12; // xmm1_8
  double v13; // xmm0_8
  CGlobalVars *v14; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v16; // xmm0_4
  vec_t v17; // xmm2_4
  vec_t v18; // xmm1_4
  vec_t v19; // xmm0_4
  const QAngle *v20; // rax
  float v21; // xmm0_4
  float v22; // xmm2_4
  float interval_per_tick; // xmm1_4
  float v24; // xmm0_4
  float m_flSpeed; // xmm0_4
  vec_t v26; // xmm2_4
  vec_t v27; // xmm1_4
  vec_t v28; // xmm0_4
  float v29; // xmm0_4
  float m_direction; // xmm2_4
  vec_t v31; // xmm4_4
  vec_t v32; // xmm3_4
  vec_t v33; // xmm0_4
  float dt; // [rsp+Ch] [rbp-44h]
  QAngle vecNewAngles; // [rsp+10h] [rbp-40h] BYREF
  QAngle vAngVelocity; // [rsp+20h] [rbp-30h] BYREF

  if ( inputdata->value.m_type == 34 )
  {
    v4 = 1.0;
    m_float64 = inputdata->value.m_float64;
    if ( m_float64 > 1.0 )
      goto LABEL_3;
  }
  else
  {
    m_float64 = inputdata->value.m_float;
    v4 = 1.0;
    if ( m_float64 > 1.0 )
      goto LABEL_3;
  }
  v4 = fmaxf(0.0, m_float64);
LABEL_3:
  this->m_IdealYaw = v4;
  LocalAngles = CBaseEntity::GetLocalAngles(this);
  Pos = CMomentaryRotButton::GetPos(this, LocalAngles);
  m_IdealYaw = this->m_IdealYaw;
  if ( m_IdealYaw > Pos )
  {
    m_flSpeed = this->m_flSpeed;
    v26 = this->m_vecMoveAng.y * m_flSpeed;
    v27 = this->m_vecMoveAng.z * m_flSpeed;
    v28 = m_flSpeed * this->m_vecMoveAng.x;
    vAngVelocity.y = v26;
    vAngVelocity.z = v27;
    vAngVelocity.x = v28;
    CBaseEntity::SetLocalAngularVelocity(this, &vAngVelocity);
    this->m_direction = 1;
  }
  else
  {
    if ( Pos <= m_IdealYaw )
    {
      CBaseEntity::SetLocalAngularVelocity(this, &vec3_angle);
      return;
    }
    v8 = -this->m_flSpeed;
    v9 = this->m_vecMoveAng.y * v8;
    v10 = this->m_vecMoveAng.z * v8;
    v11 = v8 * this->m_vecMoveAng.x;
    vAngVelocity.y = v9;
    vAngVelocity.z = v10;
    vAngVelocity.x = v11;
    CBaseEntity::SetLocalAngularVelocity(this, &vAngVelocity);
    this->m_direction = -1;
  }
  this->m_pfnMoveDone.__pfn = CMomentaryRotButton::SetPositionMoveDone;
  this->m_pfnMoveDone.__delta = 0;
  CBaseEntity::ThinkSet(this, CMomentaryRotButton::UpdateThink, 0.0, 0, 0);
  v13 = 0.0;
  v14 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v13 = LODWORD(v14->m_flCurrentTime);
  }
  CBaseEntity::SetNextThink(this, v13, v12, 0);
  v16 = this->m_IdealYaw * this->m_flMoveDistance;
  v17 = (this->m_vecMoveAng.y * v16) + this->m_start.y;
  v18 = (this->m_vecMoveAng.z * v16) + this->m_start.z;
  v19 = (v16 * this->m_vecMoveAng.x) + this->m_start.x;
  vecNewAngles.y = v17;
  vecNewAngles.z = v18;
  vecNewAngles.x = v19;
  v20 = CBaseEntity::GetLocalAngles(this);
  v21 = fabs(CBaseToggle::AxisDelta(this->m_spawnflags.m_Value, &vecNewAngles, v20));
  v22 = v21 / this->m_flSpeed;
  interval_per_tick = gpGlobals->interval_per_tick;
  if ( interval_per_tick > v22 )
  {
    v29 = v21 / interval_per_tick;
    dt = gpGlobals->interval_per_tick;
    m_direction = this->m_direction;
    v31 = (this->m_vecMoveAng.y * v29) * m_direction;
    v32 = (this->m_vecMoveAng.z * v29) * m_direction;
    v33 = (v29 * this->m_vecMoveAng.x) * m_direction;
    vAngVelocity.y = v31;
    vAngVelocity.z = v32;
    vAngVelocity.x = v33;
    CBaseEntity::SetLocalAngularVelocity(this, &vAngVelocity);
    v22 = dt;
    interval_per_tick = gpGlobals->interval_per_tick;
  }
  v24 = 6.0 * interval_per_tick;
  if ( v22 <= (6.0 * interval_per_tick) )
  {
    interval_per_tick = fmaxf(interval_per_tick, v22);
    v24 = interval_per_tick;
  }
  CBaseEntity::SetMoveDoneTime(this, v24, interval_per_tick);
}


// CMomentaryRotButton::InputSetPositionImmediately  (line 1270, @0x00000000021881e0, libserver.so)  // inlines: Float, operator float, operator*, operator+
// calls: CBaseEntity::SetLocalAngles
void __fastcall CMomentaryRotButton::InputSetPositionImmediately(
        CMomentaryRotButton *const this,
        inputdata_t *const inputdata)
{
  float m_float64; // xmm1_4
  float v3; // xmm0_4
  float v4; // xmm0_4
  vec_t v5; // xmm2_4
  vec_t v6; // xmm1_4
  vec_t v7; // xmm0_4
  QAngle angles; // [rsp+0h] [rbp-10h] BYREF

  if ( inputdata->value.m_type == 34 )
  {
    v3 = 1.0;
    m_float64 = inputdata->value.m_float64;
    if ( m_float64 > 1.0 )
      goto LABEL_3;
LABEL_5:
    v3 = fmaxf(0.0, m_float64);
    goto LABEL_3;
  }
  m_float64 = inputdata->value.m_float;
  v3 = 1.0;
  if ( m_float64 <= 1.0 )
    goto LABEL_5;
LABEL_3:
  this->m_IdealYaw = v3;
  v4 = v3 * this->m_flMoveDistance;
  v5 = (this->m_vecMoveAng.y * v4) + this->m_start.y;
  v6 = (this->m_vecMoveAng.z * v4) + this->m_start.z;
  v7 = (v4 * this->m_vecMoveAng.x) + this->m_start.x;
  angles.y = v5;
  angles.z = v6;
  angles.x = v7;
  CBaseEntity::SetLocalAngles(this, &angles);
}


// CMomentaryRotButton::InputDisableUpdateTarget  (line 1281, @0x0000000002187600, libserver.so)
void __fastcall CMomentaryRotButton::InputDisableUpdateTarget(
        CMomentaryRotButton *const this,
        inputdata_t *const inputdata)
{
  this->m_bUpdateTarget = 0;
}


// CMomentaryRotButton::InputEnableUpdateTarget  (line 1290, @0x0000000002187610, libserver.so)
void __fastcall CMomentaryRotButton::InputEnableUpdateTarget(
        CMomentaryRotButton *const this,
        inputdata_t *const inputdata)
{
  this->m_bUpdateTarget = 1;
}


// CMomentaryRotButton::Lock  (line 1300, @0x00000000021884a0, libserver.so)  // inlines: Lock
// calls: CBaseEntity::SetLocalAngularVelocity, CBaseEntity::SetMoveDoneTime, CBaseEntity::SetNextThink, CBaseEntity::ThinkSet
void __fastcall CMomentaryRotButton::Lock(CMomentaryRotButton *const this)
{
  float v2; // xmm1_4
  double v3; // xmm1_8

  this->m_bLocked = 1;
  CBaseEntity::SetLocalAngularVelocity(this, &vec3_angle);
  CBaseEntity::SetMoveDoneTime(this, -1.0, v2);
  this->m_pfnMoveDone.__pfn = 0;
  this->m_pfnMoveDone.__delta = 0;
  CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v3, 0);
  CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
}


// CMomentaryRotButton::Unlock  (line 1316, @0x00000000021890e0, libserver.so)  // inlines: Unlock
// calls: CBaseEntity::SetMoveDoneTime
// globals: CMomentaryRotButton::ReturnMoveDone(void), CBaseButton::TriggerAndWait(void)
void __fastcall CMomentaryRotButton::Unlock(CMomentaryRotButton *const this)
{
  float v1; // xmm1_4

  this->m_bLocked = 0;
  if ( this->m_toggle_state == TOGGLE_STATE::TS_GOING_UP )
  {
    this->m_pfnMoveDone.__delta = 0;
    this->m_pfnMoveDone.__pfn = CBaseButton::TriggerAndWait;
    CBaseEntity::SetMoveDoneTime(this, 0.1, v1);
  }
  this->m_pfnMoveDone.__pfn = CMomentaryRotButton::ReturnMoveDone;
  this->m_pfnMoveDone.__delta = 0;
  CBaseEntity::SetMoveDoneTime(this, 0.1, v1);
}


// CMomentaryRotButton::OutputMovementComplete  (line 1330, @0x00000000021aa180, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CMomentaryRotButton::SetPositionMoveDone
void __fastcall CMomentaryRotButton::OutputMovementComplete(CMomentaryRotButton *const this)
{
  float m_IdealYaw; // xmm1_4
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  m_IdealYaw = this->m_IdealYaw;
  if ( m_IdealYaw != 1.0 )
  {
    if ( m_IdealYaw != 0.0 )
      goto LABEL_3;
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnFullyOpen, this, this, &value, 0.0);
    if ( (value.m_flags & 1) == 0 )
      goto LABEL_3;
    goto LABEL_8;
  }
  value.m_flags = 0;
  value.m_type = 0;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnFullyClosed, this, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
LABEL_8:
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
LABEL_3:
  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnReachedPosition, this, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


// CMomentaryRotButton::SetPositionMoveDone  (line 1349, @0x00000000021aa2f0, libserver.so)  // inlines: UpdateTarget, operator*, operator+
// calls: CBaseEntity::GetLocalAngles, CMomentaryRotButton::GetPos, CBaseToggle::AxisDelta, CBaseEntity::SetMoveDoneTime, CBaseEntity::SetLocalAngularVelocity, CBaseEntity::SetLocalAngles, CBaseEntity::SetNextThink, CMomentaryRotButton::OutputMovementComplete, CMomentaryRotButton::UpdateTarget
void __fastcall CMomentaryRotButton::SetPositionMoveDone(CMomentaryRotButton *const this)
{
  const QAngle *LocalAngles; // rax
  float Pos; // xmm0_4
  float m_IdealYaw; // xmm1_4
  float v5; // xmm1_4
  vec_t v6; // xmm2_4
  vec_t v7; // xmm0_4
  vec_t v8; // xmm1_4
  const QAngle *v9; // rax
  float v10; // xmm0_4
  float v11; // xmm2_4
  float interval_per_tick; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  vec_t v15; // xmm2_4
  vec_t v16; // xmm1_4
  vec_t v17; // xmm0_4
  double v18; // xmm1_8
  float v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  float m_direction; // xmm2_4
  vec_t v24; // xmm4_4
  vec_t v25; // xmm3_4
  vec_t v26; // xmm0_4
  float dt; // [rsp+Ch] [rbp-34h]
  QAngle vecNewAngles; // [rsp+10h] [rbp-30h] BYREF
  QAngle angles; // [rsp+20h] [rbp-20h] BYREF

  LocalAngles = CBaseEntity::GetLocalAngles(this);
  Pos = CMomentaryRotButton::GetPos(this, LocalAngles);
  m_IdealYaw = this->m_IdealYaw;
  if ( Pos >= m_IdealYaw && this->m_direction == 1 || m_IdealYaw >= Pos && this->m_direction == -1 )
  {
    CBaseEntity::SetLocalAngularVelocity(this, &vec3_angle);
    v14 = this->m_IdealYaw * this->m_flMoveDistance;
    v15 = (this->m_vecMoveAng.y * v14) + this->m_start.y;
    v16 = (this->m_vecMoveAng.z * v14) + this->m_start.z;
    v17 = (v14 * this->m_vecMoveAng.x) + this->m_start.x;
    angles.y = v15;
    angles.z = v16;
    angles.x = v17;
    CBaseEntity::SetLocalAngles(this, &angles);
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v18, 0);
    CBaseEntity::SetMoveDoneTime(this, -1.0, v19);
    v21 = this->m_IdealYaw;
    if ( this->m_bUpdateTarget && v21 != this->m_Position.m_Value )
      CMomentaryRotButton::UpdateTarget(this, v21, v20, this);
    CMomentaryRotButton::OutputMovementComplete(this);
  }
  else
  {
    v5 = m_IdealYaw * this->m_flMoveDistance;
    v6 = (this->m_vecMoveAng.y * v5) + this->m_start.y;
    v7 = (this->m_vecMoveAng.z * v5) + this->m_start.z;
    v8 = (v5 * this->m_vecMoveAng.x) + this->m_start.x;
    vecNewAngles.y = v6;
    vecNewAngles.z = v7;
    vecNewAngles.x = v8;
    v9 = CBaseEntity::GetLocalAngles(this);
    v10 = fabs(CBaseToggle::AxisDelta(this->m_spawnflags.m_Value, &vecNewAngles, v9));
    v11 = v10 / this->m_flSpeed;
    interval_per_tick = gpGlobals->interval_per_tick;
    if ( interval_per_tick > v11 )
    {
      v22 = v10 / interval_per_tick;
      dt = gpGlobals->interval_per_tick;
      m_direction = this->m_direction;
      v24 = (this->m_vecMoveAng.y * v22) * m_direction;
      v25 = (this->m_vecMoveAng.z * v22) * m_direction;
      v26 = (v22 * this->m_vecMoveAng.x) * m_direction;
      angles.y = v24;
      angles.z = v25;
      angles.x = v26;
      CBaseEntity::SetLocalAngularVelocity(this, &angles);
      v11 = dt;
      interval_per_tick = gpGlobals->interval_per_tick;
    }
    v13 = 6.0 * interval_per_tick;
    if ( v11 <= (6.0 * interval_per_tick) )
    {
      interval_per_tick = fmaxf(interval_per_tick, v11);
      v13 = interval_per_tick;
    }
    CBaseEntity::SetMoveDoneTime(this, v13, interval_per_tick);
  }
}


// CMomentaryRotButton::Use  (line 1392, @0x00000000021ad5a0, libserver.so)  // inlines: AddEvent, CVariantBase, FireOutput, Free, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, SetFloat, operator CEntityInstance*, operator=, ~CVariantBase
// calls: CBaseEntity::GetLocalAngles, CMomentaryRotButton::GetPos, CMomentaryRotButton::UpdateSelf, CBaseButton::OnUseLocked, CEntitySystem::AddEntityIOEvent, CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>, CEntityIOOutput::FireOutputInternal, CBaseEntity::ThinkSet, CGlobalVarsBase::curtime, CBaseEntity::SetNextThink, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "_DisableUpdateTarget", "_EnableUpdateTarget"
// globals: CEntityHandle::gm_pEntityList, CMomentaryRotButton::UpdateThink(void)
void __fastcall CMomentaryRotButton::Use(
        CMomentaryRotButton *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float a5)
{
  bool v6; // r12
  const QAngle *LocalAngles; // rax
  float Pos; // xmm0_4
  float v9; // xmm1_4
  __m128i v10; // xmm2
  unsigned int v11; // r12d
  __m128i v12; // xmm1
  unsigned int v13; // r12d
  CEntityInstance *m_pInstance; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  double v18; // xmm0_8
  double v19; // xmm1_8
  variant_t value; // [rsp+10h] [rbp-80h] BYREF
  CVariantBase<CVariantDefaultAllocator> pDest; // [rsp+20h] [rbp-70h] BYREF
  CVariantBase<CVariantDefaultAllocator> v22; // [rsp+30h] [rbp-60h] BYREF
  CVariantBase<CVariantDefaultAllocator> v23; // [rsp+40h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v24; // [rsp+50h] [rbp-40h] BYREF

  if ( !this->m_bDisabled )
  {
    if ( this->m_bLocked )
    {
      if ( CBaseButton::OnUseLocked(this, pActivator) && (this->m_spawnflags.m_Value & 0x2000) != 0 )
      {
        v10 = _mm_cvtsi32_si128(0x40000000u);
        *v10.m128i_i32 = *v10.m128i_i32 / this->m_flMoveDistance;
        v11 = _mm_cvtsi128_si32(v10);
        CEntitySystem::AddEntityIOEvent(g_pEntitySystem, this, "_DisableUpdateTarget", this, this, 0.0, 0);
        value.m_flags = 0;
        value.m_type = 1;
        value.m_uint64 = v11;
        pDest.m_type = 0;
        pDest.m_flags = 0;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&value, &pDest);
        CEntitySystem::AddEntityIOEvent(g_pEntitySystem, this, "SetPosition", this, this, &pDest, 0.0099999998, 0);
        if ( (pDest.m_flags & 1) != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pDest.m_uint64);
        if ( (value.m_flags & 1) != 0 )
        {
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
          value.m_flags &= ~1u;
        }
        value.m_uint64 = 0;
        value.m_type = 1;
        v22.m_type = 0;
        v22.m_flags = 0;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&value, &v22);
        CEntitySystem::AddEntityIOEvent(g_pEntitySystem, this, "SetPosition", this, this, &v22, 0.1, 0);
        if ( (v22.m_flags & 1) != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v22.m_uint64);
        v12 = _mm_cvtsi32_si128(v11);
        *v12.m128i_i32 = *v12.m128i_i32 * 0.5;
        v13 = _mm_cvtsi128_si32(v12);
        if ( (value.m_flags & 1) != 0 )
        {
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
          value.m_flags &= ~1u;
        }
        value.m_type = 1;
        value.m_uint64 = v13;
        v23.m_type = 0;
        v23.m_flags = 0;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&value, &v23);
        CEntitySystem::AddEntityIOEvent(g_pEntitySystem, this, "SetPosition", this, this, &v23, 0.2, 0);
        if ( (v23.m_flags & 1) != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v23.m_uint64);
        if ( (value.m_flags & 1) != 0 )
        {
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
          value.m_flags &= ~1u;
        }
        v24.m_type = 0;
        value.m_uint64 = 0;
        value.m_type = 1;
        v24.m_flags = 0;
        CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(&value, &v24);
        CEntitySystem::AddEntityIOEvent(g_pEntitySystem, this, "SetPosition", this, this, &v24, 0.30000001, 0);
        if ( (v24.m_flags & 1) != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v24.m_uint64);
        CEntitySystem::AddEntityIOEvent(g_pEntitySystem, this, "_EnableUpdateTarget", this, this, 0.5, 0);
        if ( (value.m_flags & 1) != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
      }
    }
    else
    {
      v6 = 0;
      if ( this->m_lastUsed == 0 )
      {
        this->m_direction = -this->m_direction;
        m_pInstance = 0;
        m_Index = this->m_hActivator.m_Index;
        if ( m_Index + 2 > 1 )
        {
          v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActivator.m_Index) >> 9) & 0x3F];
          if ( v16 != 0 )
          {
            v17 = &v16[this->m_hActivator.m_Index & 0x1FF];
            if ( v17 != 0 && m_Index == v17->m_EHandle.m_Index )
              m_pInstance = v17->m_pInstance;
          }
        }
        v24.m_type = 0;
        v24.m_flags = 0;
        v24.m_uint64 = 0;
        CEntityIOOutput::FireOutputInternal(&this->m_OnPressed, m_pInstance, this, &v24, 0.0);
        if ( (v24.m_flags & 1) != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v24.m_uint64);
        v6 = 1;
      }
      this->m_lastUsed = 1;
      LocalAngles = CBaseEntity::GetLocalAngles(this);
      Pos = CMomentaryRotButton::GetPos(this, LocalAngles);
      CMomentaryRotButton::UpdateSelf(this, Pos, v9, v6);
      if ( this->m_think.__pfn == 0 )
      {
        CBaseEntity::ThinkSet(this, CMomentaryRotButton::UpdateThink, 0.0, 0, 0);
        *&v18 = CGlobalVarsBase::curtime(gpGlobals, 0);
        CBaseEntity::SetNextThink(this, v18, v19, 0);
      }
    }
  }
}


// CMomentaryRotButton::UpdateSelf  (line 1467, @0x00000000021a9fd0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, operator*, ~CVariantBase
// calls: CBaseEntity::SetMoveDoneTime, CBaseEntity::SetLocalAngularVelocity, CBaseEntity::SetLocalAngles, CEntityIOOutput::FireOutputInternal, CEntityIOOutput::FireOutput, CMomentaryRotButton::PlaySound, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CMomentaryRotButton::Use
// globals: CMomentaryRotButton::UseMoveDone(void)
void __fastcall CMomentaryRotButton::UpdateSelf(
        CMomentaryRotButton *const this,
        float a2,
        float value,
        bool bPlaySound)
{
  int m_direction; // eax
  float v7; // xmm0_4
  unsigned int v8; // xmm2_4
  float v9; // xmm1_4
  unsigned int v10; // xmm0_4
  CVariant vAngVelocity[2]; // [rsp+10h] [rbp-20h] BYREF

  CBaseEntity::SetMoveDoneTime(this, 0.1, value);
  m_direction = this->m_direction;
  if ( m_direction <= 0 )
  {
    if ( m_direction != 0 && a2 <= 0.0 )
    {
      CBaseEntity::SetLocalAngularVelocity(this, &vec3_angle);
      CBaseEntity::SetLocalAngles(this, &this->m_start);
      CEntityIOOutput::FireOutput(&this->m_OnFullyOpen, this, this);
      return;
    }
    goto LABEL_3;
  }
  if ( a2 < 1.0 )
  {
LABEL_3:
    if ( bPlaySound )
    {
      CMomentaryRotButton::PlaySound(this);
      m_direction = this->m_direction;
    }
    v7 = m_direction * this->m_flSpeed;
    *&v8 = this->m_vecMoveAng.y * v7;
    v9 = this->m_vecMoveAng.z * v7;
    *&v10 = v7 * this->m_vecMoveAng.x;
    *&vAngVelocity[0].m_type = v9;
    vAngVelocity[0].m_uint64 = __PAIR64__(v8, v10);
    CBaseEntity::SetLocalAngularVelocity(this, vAngVelocity);
    this->m_pfnMoveDone.__delta = 0;
    this->m_pfnMoveDone.__pfn = CMomentaryRotButton::UseMoveDone;
    return;
  }
  CBaseEntity::SetLocalAngularVelocity(this, &vec3_angle);
  CBaseEntity::SetLocalAngles(this, &this->m_end);
  *&vAngVelocity[0].m_type = 0;
  vAngVelocity[0].m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnFullyClosed, this, this, vAngVelocity, 0.0);
  if ( (vAngVelocity[0].m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, vAngVelocity[0].m_uint64);
}


// CMomentaryRotButton::UpdateTarget  (line 1512, @0x00000000021a8430, libserver.so)  // inlines: CVariantBase, FireOutput<float>, Free, Set, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CMomentaryRotButton::UpdateTarget, CMomentaryRotButton::ReturnMoveDone, CMomentaryRotButton::UpdateThink, CMomentaryRotButton::Spawn, CMomentaryRotButton::UseMoveDone, CMomentaryRotButton::SetPositionMoveDone
void __fastcall CMomentaryRotButton::UpdateTarget(
        CMomentaryRotButton *const this,
        float a2,
        float value,
        CBaseEntity *pActivator)
{
  COutputFloat *p_m_Position; // rdi
  CVariant v6; // [rsp+0h] [rbp-20h] BYREF

  p_m_Position = &this->m_Position;
  p_m_Position->m_Value = a2;
  v6.m_type = 1;
  v6.m_float = a2;
  v6.m_flags = 0;
  CEntityIOOutput::FireOutputInternal(p_m_Position, pActivator, this, &v6, 0.0);
  if ( (v6.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v6.m_uint64);
}


// CMomentaryRotButton::UpdateTarget  (line 1512, @0x00000000021a84b0, libserver.so)
// calls: CMomentaryRotButton::UpdateTarget
void __fastcall CMomentaryRotButton::UpdateTarget(
        CMomentaryRotButton *const this,
        float a2,
        float value,
        CBaseEntity *pActivator)
{
  if ( this->m_bUpdateTarget && a2 != this->m_Position.m_Value )
    CMomentaryRotButton::UpdateTarget(this, a2, value, pActivator);
}


// CMomentaryRotButton::UseMoveDone  (line 1527, @0x00000000021a93f0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, UpdateTarget, operator CEntityInstance*, ~CVariantBase
// calls: CBaseEntity::SetLocalAngularVelocity, CBaseEntity::GetLocalAngles, CMomentaryRotButton::GetPos, CEntityIOOutput::FireOutputInternal, CBaseEntity::SetMoveDoneTime, CBaseEntity::ThinkSet, CMomentaryRotButton::UpdateTarget, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList, CMomentaryRotButton::ReturnMoveDone(void)
void __fastcall CMomentaryRotButton::UseMoveDone(CMomentaryRotButton *const this)
{
  const QAngle *LocalAngles; // rax
  float Pos; // xmm0_4
  float v4; // xmm1_4
  uint32 m_Index; // eax
  CEntityInstance *m_pInstance; // rsi
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  float v9; // xmm1_4
  bool v10; // zf
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  CBaseEntity::SetLocalAngularVelocity(this, &vec3_angle);
  LocalAngles = CBaseEntity::GetLocalAngles(this);
  Pos = CMomentaryRotButton::GetPos(this, LocalAngles);
  if ( this->m_bUpdateTarget && Pos != this->m_Position.m_Value )
    CMomentaryRotButton::UpdateTarget(this, Pos, v4, this);
  m_Index = this->m_hActivator.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActivator.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[this->m_hActivator.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  value.m_uint64 = 0;
  value.m_type = 0;
  value.m_flags = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnUnpressed, m_pInstance, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  v10 = (this->m_spawnflags.m_Value & 0x20) == 0;
  this->m_lastUsed = 0;
  if ( v10 && this->m_returnSpeed > 0.0 )
  {
    this->m_pfnMoveDone.__pfn = CMomentaryRotButton::ReturnMoveDone;
    this->m_pfnMoveDone.__delta = 0;
    this->m_direction = -1;
    CBaseEntity::SetMoveDoneTime(this, 0.1, v9);
  }
  else
  {
    CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
    this->m_pfnMoveDone.__pfn = 0;
    this->m_pfnMoveDone.__delta = 0;
  }
}


// CMomentaryRotButton::ReturnMoveDone  (line 1559, @0x00000000021a84e0, libserver.so)  // inlines: UpdateTarget, curtime, operator*
// calls: CBaseEntity::GetLocalAngles, CMomentaryRotButton::GetPos, CBaseEntity::SetLocalAngularVelocity, CBaseEntity::SetMoveDoneTime, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CBaseEntity::SetLocalAngles, CMomentaryRotButton::UpdateTarget
// globals: CMomentaryRotButton::UpdateThink(void)
void __fastcall CMomentaryRotButton::ReturnMoveDone(CMomentaryRotButton *const this)
{
  const QAngle *LocalAngles; // rax
  float v3; // xmm0_4
  vec_t v4; // xmm2_4
  vec_t v5; // xmm1_4
  vec_t v6; // xmm0_4
  float v7; // xmm1_4
  double v8; // xmm1_8
  CGlobalVars *v9; // r12
  double v10; // xmm0_8
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v12; // xmm1_4
  double v13; // xmm1_8
  QAngle vAngVelocity; // [rsp+0h] [rbp-20h] BYREF

  LocalAngles = CBaseEntity::GetLocalAngles(this);
  if ( CMomentaryRotButton::GetPos(this, LocalAngles) <= 0.0 )
  {
    CBaseEntity::SetLocalAngularVelocity(this, &vec3_angle);
    CBaseEntity::SetLocalAngles(this, &this->m_start);
    if ( this->m_bUpdateTarget && this->m_Position.m_Value != 0.0 )
      CMomentaryRotButton::UpdateTarget(this, 0.0, v12, 0);
    CBaseEntity::SetMoveDoneTime(this, -1.0, v12);
    this->m_pfnMoveDone.__pfn = 0;
    this->m_pfnMoveDone.__delta = 0;
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v13, 0);
    CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
  }
  else
  {
    v3 = -this->m_returnSpeed;
    v4 = this->m_vecMoveAng.y * v3;
    v5 = this->m_vecMoveAng.z * v3;
    v6 = v3 * this->m_vecMoveAng.x;
    vAngVelocity.y = v4;
    vAngVelocity.z = v5;
    vAngVelocity.x = v6;
    CBaseEntity::SetLocalAngularVelocity(this, &vAngVelocity);
    CBaseEntity::SetMoveDoneTime(this, 0.1, v7);
    CBaseEntity::ThinkSet(this, CMomentaryRotButton::UpdateThink, 0.0, 0, 0);
    v9 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      HIDWORD(v10) = 0;
      *&v10 = v9->m_flCurrentTime + 0.0099999998;
    }
    else
    {
      *&v10 = 1008981770;
    }
    CBaseEntity::SetNextThink(this, v10, v8, 0);
  }
}


// CMomentaryRotButton::UpdateThink  (line 1592, @0x00000000021a8690, libserver.so)  // inlines: UpdateTarget, curtime
// calls: CBaseEntity::GetLocalAngles, CMomentaryRotButton::GetPos, CBaseEntity::SetNextThink, CMomentaryRotButton::UpdateTarget
void __fastcall CMomentaryRotButton::UpdateThink(CMomentaryRotButton *const this)
{
  const QAngle *LocalAngles; // rax
  float Pos; // xmm0_4
  double v4; // xmm1_8
  double v5; // xmm0_8
  CGlobalVars *v6; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  LocalAngles = CBaseEntity::GetLocalAngles(this);
  Pos = CMomentaryRotButton::GetPos(this, LocalAngles);
  if ( this->m_bUpdateTarget && Pos != this->m_Position.m_Value )
    CMomentaryRotButton::UpdateTarget(this, Pos, *&v4, 0);
  v5 = 0.0;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v5 = LODWORD(v6->m_flCurrentTime);
  }
  CBaseEntity::SetNextThink(this, v5, v4, 0);
}


// CMomentaryRotButton::DrawDebugTextOverlays  (line 1604, @0x0000000002193c50, libserver.so)
// calls: CBaseButton::DrawDebugTextOverlays, CBaseEntity::GetLocalAngles, V_snprintf, CBaseEntity::EntityText, CMomentaryRotButton::GetPos, __stack_chk_fail
// strings: "QAngle: %.2f %.2f %.2f", "AVelocity: %.2f %.2f %.2f", "Target Pos:   %3.3f", "Current Pos:   %3.3f", "Direction: %s"
int __fastcall CMomentaryRotButton::DrawDebugTextOverlays(
        CMomentaryRotButton *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v3; // r14
  char v4; // r13
  int v6; // r12d
  int v8; // r14d
  const QAngle *LocalAngles; // rax
  const QAngle *v10; // rax
  float Pos; // xmm0_4
  const char *v12; // rcx
  double z; // [rsp+10h] [rbp-140h]
  double y; // [rsp+18h] [rbp-138h]
  char tempstr[264]; // [rsp+20h] [rbp-130h] BYREF
  unsigned __int64 v16; // [rsp+128h] [rbp-28h]

  v3 = iDebugFilterFlags;
  v4 = nDebugOverlayBits;
  v16 = __readfsqword(0x28u);
  v6 = CBaseButton::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v4 & 1) != 0 && (v3 & 0x4000) != 0 )
  {
    v8 = v6 + 4;
    z = CBaseEntity::GetLocalAngles(this)->z;
    y = CBaseEntity::GetLocalAngles(this)->y;
    LocalAngles = CBaseEntity::GetLocalAngles(this);
    V_snprintf(tempstr, 255, "QAngle: %.2f %.2f %.2f", LocalAngles->x, y, z);
    CBaseEntity::EntityText(this, v6, tempstr, 0.0, 255, 255, 255, 255);
    V_snprintf(
      tempstr,
      255,
      "AVelocity: %.2f %.2f %.2f",
      this->m_vecAngVelocity.x,
      this->m_vecAngVelocity.y,
      this->m_vecAngVelocity.z);
    CBaseEntity::EntityText(this, v6 + 1, tempstr, 0.0, 255, 255, 255, 255);
    V_snprintf(tempstr, 255, "Target Pos:   %3.3f", this->m_IdealYaw);
    CBaseEntity::EntityText(this, v6 + 2, tempstr, 0.0, 255, 255, 255, 255);
    v10 = CBaseEntity::GetLocalAngles(this);
    Pos = CMomentaryRotButton::GetPos(this, v10);
    V_snprintf(tempstr, 255, "Current Pos:   %3.3f", Pos);
    CBaseEntity::EntityText(this, v6 + 3, tempstr, 0.0, 255, 255, 255, 255);
    v12 = "Forward";
    if ( this->m_direction != 1 )
      v12 = "Backward";
    v6 += 5;
    V_snprintf(tempstr, 255, "Direction: %s", v12);
    CBaseEntity::EntityText(this, v8, tempstr, 0.0, 255, 255, 255, 255);
  }
  return v6;
}


// CMomentaryRotButton::InputEnable  (line 1640, @0x0000000002187620, libserver.so)
void __fastcall CMomentaryRotButton::InputEnable(CMomentaryRotButton *const this, inputdata_t *const inputdata)
{
  (*(this->_vptr_IHandleEntity + 216))(this, inputdata);
}


// CMomentaryRotButton::InputDisable  (line 1649, @0x0000000002187640, libserver.so)
void __fastcall CMomentaryRotButton::InputDisable(CMomentaryRotButton *const this, inputdata_t *const inputdata)
{
  (*(this->_vptr_IHandleEntity + 217))(this, inputdata);
}


// CMomentaryRotButton::Enable  (line 1657, @0x0000000002187660, libserver.so)
void __fastcall CMomentaryRotButton::Enable(CMomentaryRotButton *const this)
{
  this->m_bDisabled = 0;
}


// CMomentaryRotButton::Disable  (line 1666, @0x0000000002187670, libserver.so)
void __fastcall CMomentaryRotButton::Disable(CMomentaryRotButton *const this)
{
  this->m_bDisabled = 1;
}


// CButtonTimed::GetDataDescMap  (line 1680, @0x0000000002187680, libserver.so)
// globals: CButtonTimed::m_DataMap
datamap_t *__fastcall CButtonTimed::GetDataDescMap(CButtonTimed *const this)
{
  return &CButtonTimed::m_DataMap;
}


// CButtonTimed::AddDatadescMetadataKeys  (line 1680, @0x0000000002194200, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CButtonTimed::GetEntityClass(void)
void __fastcall CButtonTimed::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CButtonTimed::GetEntityClass);
}


// CButtonTimed::GetBaseMap  (line 1680, @0x0000000002194220, libserver.so)
// globals: CBaseButton::m_DataMap
datamap_t *__cdecl CButtonTimed::GetBaseMap()
{
  return &CBaseButton::m_DataMap;
}


// DataMapInit<CButtonTimed>  (line 1680, @0x00000000021adec0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "CButtonTimed"
// globals: `guard variable for'DataMapInit<CButtonTimed>(CButtonTimed *)::nameHolder, `guard variable for'DataMapInit<CButtonTimed>(CButtonTimed *)::dataDesc, CBaseButton::m_DataMap, CButtonTimed::GetEntityClass(void), CButtonTimed::m_DataMap, DataMapInit<CButtonTimed>(CButtonTimed *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CButtonTimed>(CButtonTimed *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax
  char *v6; // r12
  __int64 v7; // rbx
  int v8; // eax
  char **v9; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CButtonTimed>(CButtonTimed *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CButtonTimed>(CButtonTimed *)::nameHolder) != 0 )
  {
    DataMapInit<CButtonTimed>(CButtonTimed *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CButtonTimed>(CButtonTimed *)::nameHolder.m_pszBase = "CButtonTimed";
    DataMapInit<CButtonTimed>(CButtonTimed *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CButtonTimed>(CButtonTimed *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CButtonTimed>(CButtonTimed *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CButtonTimed>(CButtonTimed *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CButtonTimed>(CButtonTimed *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CButtonTimed>(CButtonTimed *)::nameHolder,
      &_dso_handle);
  }
  CButtonTimed::m_DataMap.baseMap = &CBaseButton::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CButtonTimed>(CButtonTimed *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CButtonTimed>(CButtonTimed *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CButtonTimed>(CButtonTimed *)::nameHolder.m_nLenBase + 9);
    strcpy(stpcpy(v2, DataMapInit<CButtonTimed>(CButtonTimed *)::nameHolder.m_pszBase), "UseTimed");
    m_Size = DataMapInit<CButtonTimed>(CButtonTimed *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CButtonTimed>(CButtonTimed *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CButtonTimed>(CButtonTimed *)::nameHolder.m_Names.m_Size == DataMapInit<CButtonTimed>(CButtonTimed *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CButtonTimed>(CButtonTimed *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CButtonTimed>(CButtonTimed *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CButtonTimed>(CButtonTimed *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CButtonTimed>(CButtonTimed *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CButtonTimed>(CButtonTimed *)::dataDesc[5].fieldName = v2;
    v6 = operator new[](DataMapInit<CButtonTimed>(CButtonTimed *)::nameHolder.m_nLenBase + 9);
    strcpy(stpcpy(v6, DataMapInit<CButtonTimed>(CButtonTimed *)::nameHolder.m_pszBase), "UseThink");
    v7 = DataMapInit<CButtonTimed>(CButtonTimed *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CButtonTimed>(CButtonTimed *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CButtonTimed>(CButtonTimed *)::nameHolder.m_Names.m_Size == DataMapInit<CButtonTimed>(CButtonTimed *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CButtonTimed>(CButtonTimed *)::nameHolder.m_Names.m_Memory, 1);
      v8 = DataMapInit<CButtonTimed>(CButtonTimed *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CButtonTimed>(CButtonTimed *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CButtonTimed>(CButtonTimed *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CButtonTimed>(CButtonTimed *)::dataDesc[6].fieldName = v6;
    DataMapInit<CButtonTimed>(CButtonTimed *)::dataDesc[9].pSaveRestoreOps = eventFuncs;
    DataMapInit<CButtonTimed>(CButtonTimed *)::dataDesc[10].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CButtonTimed>(CButtonTimed *)::dataDesc);
  }
  CButtonTimed::m_DataMap.dataNumFields = 13;
  CButtonTimed::m_DataMap.dataDesc = &DataMapInit<CButtonTimed>(CButtonTimed *)::dataDesc[1];
  AddDatadescMetadataKeys(&CButtonTimed::m_DataMap, CButtonTimed::GetEntityClass);
  return &CButtonTimed::m_DataMap;
}


// CButtonTimed::YouForgotToImplementOrDeclareServerClass  (line 1708, @0x0000000002187690, libserver.so)
int __fastcall CButtonTimed::YouForgotToImplementOrDeclareServerClass(CButtonTimed *const this)
{
  return 0;
}


// CButtonTimed::GetServerClass  (line 1708, @0x000000000218f1c0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CButtonTimed::GetServerClass(CButtonTimed *const this)
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


// CButtonTimed::CButtonTimed  (line 1712, @0x0000000002194230, libserver.so)  // inlines: CBaseButton, CEntityHandle, CEntityIOOutput, CNetworkHandleBase, CNetworkVarBase, CUtlSymbolLarge, EnsureValidValue<bool>, locksound_t
// calls: CBaseToggle::CBaseToggle
// callers: CButtonTimed::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CButtonTimed::CButtonTimed(CButtonTimed *const this)
{
  CBaseToggle::CBaseToggle(this);
  this->m_ls.sLockedSound.u.m_Id = 0;
  this->m_ls._vptr_locksound_t = &off_3FD2260;
  this->_vptr_IHandleEntity = &off_400FB10;
  this->m_ls.sLockedSentence.u.m_Id = 0;
  this->m_ls.sUnlockedSound.u.m_Id = 0;
  this->m_ls.sUnlockedSentence.u.m_Id = 0;
  this->m_sNoise.u.m_Id = 0;
  this->m_OnDamaged._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnPressed._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnUseLocked._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnIn._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnOut._vptr_CEntityIOOutput = off_3F7C190;
  this->m_sGlowEntity.u.m_Id = 0;
  this->m_glowEntity.m_Value.m_Index = -1;
  this->m_usable.m_Value = 0;
  this->m_szDisplayText.m_Value.u.m_Id = 0;
  this->m_sUseString.m_Value.u.m_Id = 0;
  this->m_sUseSubString.m_Value.u.m_Id = 0;
  this->m_OnUnpressed._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnTimeUp._vptr_CEntityIOOutput = off_3F7C190;
  this->m_nUseTime = 5;
  this->m_bInUse = 0;
  this->m_flUseStartTime = 0.0;
  this->m_bAutoDisable = 1;
}


// CButtonTimed::Spawn  (line 1722, @0x0000000002193720, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
// calls: CBaseButton::Spawn
// globals: CButtonTimed::UseTimed(CBaseEntity *,CBaseEntity *,USE_TYPE,float)
void __fastcall CButtonTimed::Spawn(CButtonTimed *const this, const CEntityKeyValues *pKeyValues)
{
  bool m_Value; // zf

  CBaseButton::Spawn(this, pKeyValues);
  m_Value = this->m_usable.m_Value;
  this->m_pfnUse.__pfn = CButtonTimed::UseTimed;
  this->m_pfnUse.__delta = 0;
  if ( !m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1532, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_usable.m_Value = 1;
  }
}


// CButtonTimed::UseTimed  (line 1751, @0x00000000021a9700, libserver.so)  // inlines: CVariantBase, FireOutput, Free, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, curtime, operator CEntityInstance*, operator=, operator==, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CGlobalVarsBase::curtime, CBaseButton::OnUseLocked, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CButtonTimed::UseThink(void), CEntityHandle::gm_pEntityList
void __fastcall CButtonTimed::UseTimed(
        CButtonTimed *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value)
{
  CEntityIdentity *m_pEntity; // rdx
  int v7; // eax
  __int16 v8; // cx
  double v9; // xmm1_8
  CGlobalVars *v10; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v12; // xmm0_8
  CGlobalVars *v13; // r12
  float m_flCurrentTime; // xmm0_4
  void (__fastcall *v15)(__int64, double); // rax
  uint32 m_Index; // eax
  CBaseEntity *m_pInstance; // rcx
  unsigned __int64 m_Index_low; // rdi
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CVariant v21; // [rsp+0h] [rbp-30h] BYREF

  if ( this->m_bLocked )
  {
    CBaseButton::OnUseLocked(this, pActivator);
  }
  else if ( this->m_bInUse )
  {
    m_Index = this->m_hActivator.m_Index;
    m_pInstance = 0;
    if ( m_Index + 2 > 1 )
    {
      m_Index_low = LOWORD(this->m_hActivator.m_Index);
      v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
      if ( v19 != 0 )
      {
        v20 = &v19[m_Index_low & 0x1FF];
        if ( v20 != 0 && m_Index == v20->m_EHandle.m_Index )
          m_pInstance = v20->m_pInstance;
      }
    }
    if ( pActivator == m_pInstance )
      this->m_flLastUseTime = CGlobalVarsBase::curtime(gpGlobals, 0);
  }
  else
  {
    if ( pActivator != 0 && (m_pEntity = pActivator->m_pEntity) != 0 )
    {
      v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v8 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hActivator.m_Index) = v8 | this->m_hActivator.m_Index & 0x8000;
      this->m_hActivator.m_Index = (v7 << 15) | this->m_hActivator.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hActivator.m_Index = -1;
    }
    v21.m_type = 0;
    v21.m_flags = 0;
    v21.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnPressed, pActivator, this, &v21, 0.0);
    if ( (v21.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v21.m_uint64);
    CBaseEntity::ThinkSet(this, CButtonTimed::UseThink, 0.0, 0, 0);
    v10 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      *&v12 = LODWORD(v10->m_flCurrentTime);
    }
    else
    {
      v12 = 0.0;
    }
    CBaseEntity::SetNextThink(this, v12, v9, 0);
    v13 = gpGlobals;
    this->m_bInUse = 1;
    m_flCurrentTime = 0.0;
    if ( v13 != 0 )
    {
      if ( !v13->m_bEnableAssertions && !v13->m_bInSimulation )
      {
        v15 = v13->m_pfnWarningFunc;
        if ( v15 != 0 )
          v15(1, 0.0);
      }
      m_flCurrentTime = v13->m_flCurrentTime;
    }
    this->m_flLastUseTime = m_flCurrentTime;
    this->m_flUseStartTime = m_flCurrentTime;
  }
}


// CButtonTimed::UseThink  (line 1811, @0x000000000218c030, libserver.so)  // inlines: curtime
// calls: CBaseEntity::SetNextThink
void __fastcall CButtonTimed::UseThink(CButtonTimed *const this)
{
  double v1; // xmm0_8
  double v2; // xmm1_8
  CGlobalVars *v4; // rbx
  CGlobalVars *v5; // rbx
  double v6; // xmm0_8
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  FnGlobalVarsWarningFunc v8; // rax

  v2 = 0.0;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, v1, 0.0);
    }
    *&v2 = LODWORD(v4->m_flCurrentTime);
  }
  if ( *&v2 > (this->m_nUseTime + this->m_flUseStartTime) )
  {
    (*(this->_vptr_IHandleEntity + 217))(this);
  }
  else
  {
    v5 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v8 = gpGlobals->m_pfnWarningFunc;
        if ( v8 != 0 )
          v8(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      HIDWORD(v6) = 0;
      *&v6 = v5->m_flCurrentTime + 0.033;
    }
    else
    {
      *&v6 = 1023879938;
    }
    CBaseEntity::SetNextThink(this, v6, v2, 0);
  }
}


// CButtonTimed::StopUse  (line 1854, @0x00000000021a9150, libserver.so)  // inlines: CVariantBase, FireOutput, Free, Set, operator=, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CButtonTimed::StopUse(CButtonTimed *const this)
{
  COutputEvent *p_m_OnUnpressed; // rdi
  double v4; // xmm1_8
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  if ( this->m_bInUse )
  {
    this->m_bInUse = 0;
    value.m_type = 0;
    this->m_flUseStartTime = 0.0;
    p_m_OnUnpressed = &this->m_OnUnpressed;
    value.m_flags = 0;
    HIDWORD(p_m_OnUnpressed[-15].m_pDesc) = -1;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(p_m_OnUnpressed, 0, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v4, 0);
  }
}


// CButtonTimed::InputEnable  (line 1882, @0x00000000021876a0, libserver.so)
void __fastcall CButtonTimed::InputEnable(CButtonTimed *const this, inputdata_t *const inputdata)
{
  (*(this->_vptr_IHandleEntity + 218))(this, inputdata);
}


// CButtonTimed::InputDisable  (line 1889, @0x00000000021876c0, libserver.so)
void __fastcall CButtonTimed::InputDisable(CButtonTimed *const this, inputdata_t *const inputdata)
{
  (*(this->_vptr_IHandleEntity + 219))(this, inputdata);
}


// CButtonTimed::Enable  (line 1896, @0x000000000218a680, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
// globals: CButtonTimed::UseTimed(CBaseEntity *,CBaseEntity *,USE_TYPE,float)
void __fastcall CButtonTimed::Enable(CButtonTimed *const this)
{
  bool m_Value; // zf

  this->m_pfnUse.__pfn = CButtonTimed::UseTimed;
  m_Value = this->m_usable.m_Value;
  this->m_pfnUse.__delta = 0;
  if ( !m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1532, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_usable.m_Value = 1;
  }
}


// CButtonTimed::Disable  (line 1904, @0x000000000218a7e0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
// calls: CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
void __fastcall CButtonTimed::Disable(CButtonTimed *const this)
{
  double v2; // xmm1_8

  (*(this->_vptr_IHandleEntity + 216))(this);
  if ( this->m_usable.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1532, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_usable.m_Value = 0;
  }
  this->m_pfnUse.__pfn = 0;
  this->m_pfnUse.__delta = 0;
  CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
  CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v2, 0);
}


// CButtonTimed::OnUseFinished  (line 1915, @0x00000000021a8d40, libserver.so)  // inlines: CVariantBase, FireOutput, Free, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CButtonTimed::OnUseFinished(CButtonTimed *const this)
{
  CEntityInstance *m_pInstance; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  m_pInstance = 0;
  m_Index = this->m_hActivator.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActivator.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hActivator.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
        m_pInstance = v5->m_pInstance;
    }
  }
  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnTimeUp, m_pInstance, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  (*(this->_vptr_IHandleEntity + 216))(this);
  if ( this->m_bAutoDisable )
    (*(this->_vptr_IHandleEntity + 219))(this);
}


