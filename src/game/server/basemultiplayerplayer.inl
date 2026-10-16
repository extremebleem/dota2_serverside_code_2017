
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseMultiplayerPlayer::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000001fb7790, libserver.so)
// globals: CBaseMultiplayerPlayer::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CBaseMultiplayerPlayer::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CBaseMultiplayerPlayer::CEntityInstanceEntityClass *const this)
{
  return CBaseMultiplayerPlayer::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CBaseMultiplayerPlayer::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000001fb77a0, libserver.so)  // inlines: Destruct<CBaseMultiplayerPlayer>
void __fastcall CBaseMultiplayerPlayer::CEntityInstanceEntityClass::DestructInstance(
        CBaseMultiplayerPlayer::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CBaseMultiplayerPlayer::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000001fb77c0, libserver.so)
void __fastcall CBaseMultiplayerPlayer::CEntityInstanceEntityClass::FreeInstance(
        CBaseMultiplayerPlayer::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CBaseMultiplayerPlayer::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000001fb77e0, libserver.so)
bool __fastcall CBaseMultiplayerPlayer::CEntityInstanceEntityClass::CanAllocate(
        const CBaseMultiplayerPlayer::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CBaseMultiplayerPlayer::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000001fb77f0, libserver.so)
// globals: CBaseMultiplayerPlayer::s_pSchemaBinding
const ISchemaBinding *__fastcall CBaseMultiplayerPlayer::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CBaseMultiplayerPlayer::CEntityInstanceEntityClass *const this)
{
  return CBaseMultiplayerPlayer::s_pSchemaBinding;
}


// CBaseMultiplayerPlayer::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000001fb9a60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CBaseMultiplayerPlayer::CEntityInstanceEntityClass::AllocateInstance(
        CBaseMultiplayerPlayer::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4544);
  memset(v1, 0, 0x11C0u);
  return v1;
}


// CBaseMultiplayerPlayer::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000001fba170, libserver.so)  // inlines: Construct<CBaseMultiplayerPlayer>
// calls: CBaseMultiplayerPlayer::CBaseMultiplayerPlayer
CEntityInstance *__fastcall CBaseMultiplayerPlayer::CEntityInstanceEntityClass::ConstructInstance(
        CBaseMultiplayerPlayer::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CBaseMultiplayerPlayer::CBaseMultiplayerPlayer(p);
  return p;
}


// CBaseMultiplayerPlayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000001fbd9e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CBaseMultiplayerPlayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseMultiplayerPlayer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CBaseMultiplayerPlayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000001fbda00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CBaseMultiplayerPlayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseMultiplayerPlayer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CBaseMultiplayerPlayer::GetEntityClassInternal  (line 28, @0x0000000001fca720, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBasePlayer::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseCombatCharacter::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_01.cpp
// strings: "CBaseMultiplayerPlayer", "CBasePlayer"
// globals: `guard variable for'CBaseMultiplayerPlayer::GetEntityClassInternal(void)::g_EntityCBaseMultiplayerPlayerClass, CBaseMultiplayerPlayer::GetEntityClassInternal(void)::g_EntityCBaseMultiplayerPlayerClass, __dso_handle, CBaseMultiplayerPlayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CBaseMultiplayerPlayer::GetEntityClassInfo(void)::g_EntityCBaseMultiplayerPlayerClassInfo, CBaseMultiplayerPlayer::GetEntityClassInfo(void)::g_EntityCBaseMultiplayerPlayerClassInfo, `guard variable for'CBasePlayer::GetEntityClassInfo(void)::g_EntityCBasePlayerClassInfo, CBasePlayer::GetEntityClassInfo(void)::g_EntityCBasePlayerClassInfo
CEntityClass *__cdecl CBaseMultiplayerPlayer::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBaseMultiplayerPlayer::GetEntityClassInternal(void)::g_EntityCBaseMultiplayerPlayerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseMultiplayerPlayer::GetEntityClassInternal(void)::g_EntityCBaseMultiplayerPlayerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CBaseMultiplayerPlayer::GetEntityClassInternal(void)::g_EntityCBaseMultiplayerPlayerClass);
    CBaseMultiplayerPlayer::GetEntityClassInternal(void)::g_EntityCBaseMultiplayerPlayerClass._vptr_CEntityClass = off_3FD0710;
    __cxa_guard_release(&`guard variable for'CBaseMultiplayerPlayer::GetEntityClassInternal(void)::g_EntityCBaseMultiplayerPlayerClass);
    __cxa_atexit(
      CBaseMultiplayerPlayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CBaseMultiplayerPlayer::GetEntityClassInternal(void)::g_EntityCBaseMultiplayerPlayerClass,
      &_dso_handle);
  }
  if ( g_pEntityCBaseMultiplayerPlayerClass != 0 )
    return &CBaseMultiplayerPlayer::GetEntityClassInternal(void)::g_EntityCBaseMultiplayerPlayerClass;
  if ( `guard variable for'CBaseMultiplayerPlayer::GetEntityClassInfo(void)::g_EntityCBaseMultiplayerPlayerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseMultiplayerPlayer::GetEntityClassInfo(void)::g_EntityCBaseMultiplayerPlayerClassInfo) != 0 )
  {
    if ( `guard variable for'CBasePlayer::GetEntityClassInfo(void)::g_EntityCBasePlayerClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBasePlayer::GetEntityClassInfo(void)::g_EntityCBasePlayerClassInfo) != 0 )
    {
      EntityClassInfo = CBaseCombatCharacter::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBasePlayer::GetEntityClassInfo(void)::g_EntityCBasePlayerClassInfo,
        "CBasePlayer",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBasePlayer::GetEntityClassInfo(void)::g_EntityCBasePlayerClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseMultiplayerPlayer::GetEntityClassInfo(void)::g_EntityCBaseMultiplayerPlayerClassInfo,
      "CBaseMultiplayerPlayer",
      0,
      0,
      &CBasePlayer::GetEntityClassInfo(void)::g_EntityCBasePlayerClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseMultiplayerPlayer::GetEntityClassInfo(void)::g_EntityCBaseMultiplayerPlayerClassInfo);
  }
  CBaseMultiplayerPlayer::GetEntityClassInternal(void)::g_EntityCBaseMultiplayerPlayerClass.m_pClassInfo = &CBaseMultiplayerPlayer::GetEntityClassInfo(void)::g_EntityCBaseMultiplayerPlayerClassInfo;
  CBaseMultiplayerPlayer::GetEntityClassInternal(void)::g_EntityCBaseMultiplayerPlayerClass.m_pBaseClassInfo = CBaseMultiplayerPlayer::GetEntityClassInfo(void)::g_EntityCBaseMultiplayerPlayerClassInfo.m_pBaseClassInfo;
  g_pEntityCBaseMultiplayerPlayerClass = &CBaseMultiplayerPlayer::GetEntityClassInternal(void)::g_EntityCBaseMultiplayerPlayerClass;
  CBaseMultiplayerPlayer::GetEntityClassInfo(void)::g_EntityCBaseMultiplayerPlayerClassInfo.m_pClass = &CBaseMultiplayerPlayer::GetEntityClassInternal(void)::g_EntityCBaseMultiplayerPlayerClass;
  CBaseMultiplayerPlayer::GetEntityClassInternal(void)::g_EntityCBaseMultiplayerPlayerClass.m_pScriptClassDesc = CBasePlayer::InitScriptDesc();
  g_pEntityCBaseMultiplayerPlayerClass->m_pComponentOverrides = 0;
  return &CBaseMultiplayerPlayer::GetEntityClassInternal(void)::g_EntityCBaseMultiplayerPlayerClass;
}


// CBaseMultiplayerPlayer::Schema_DynamicBinding  (line 28, @0x000000000217b490, libserver.so)
// calls: CBaseMultiplayerPlayer::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBaseMultiplayerPlayer::Schema_DynamicBinding(
        const CBaseMultiplayerPlayer *const this)
{
  CBaseMultiplayerPlayer::Schema_VerifyBindingIsRegistered();
  return CBaseMultiplayerPlayer::s_pSchemaBinding;
}


// CBaseMultiplayerPlayer::GetEntityClassInfo  (line 28, @0x00000000026a8510, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseCombatCharacter::GetEntityClassInfo
// callers: CDOTAPlayer::GetEntityClassInternal
// strings: "CBaseMultiplayerPlayer", "CBasePlayer"
// globals: `guard variable for'CBaseMultiplayerPlayer::GetEntityClassInfo(void)::g_EntityCBaseMultiplayerPlayerClassInfo, CBaseMultiplayerPlayer::GetEntityClassInfo(void)::g_EntityCBaseMultiplayerPlayerClassInfo, `guard variable for'CBasePlayer::GetEntityClassInfo(void)::g_EntityCBasePlayerClassInfo, CBasePlayer::GetEntityClassInfo(void)::g_EntityCBasePlayerClassInfo
CEntityClassInfo *__cdecl CBaseMultiplayerPlayer::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBaseMultiplayerPlayer::GetEntityClassInfo(void)::g_EntityCBaseMultiplayerPlayerClassInfo != 0 )
    return &CBaseMultiplayerPlayer::GetEntityClassInfo(void)::g_EntityCBaseMultiplayerPlayerClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CBaseMultiplayerPlayer::GetEntityClassInfo(void)::g_EntityCBaseMultiplayerPlayerClassInfo) == 0 )
    return &CBaseMultiplayerPlayer::GetEntityClassInfo(void)::g_EntityCBaseMultiplayerPlayerClassInfo;
  if ( `guard variable for'CBasePlayer::GetEntityClassInfo(void)::g_EntityCBasePlayerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBasePlayer::GetEntityClassInfo(void)::g_EntityCBasePlayerClassInfo) != 0 )
  {
    EntityClassInfo = CBaseCombatCharacter::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBasePlayer::GetEntityClassInfo(void)::g_EntityCBasePlayerClassInfo,
      "CBasePlayer",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBasePlayer::GetEntityClassInfo(void)::g_EntityCBasePlayerClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CBaseMultiplayerPlayer::GetEntityClassInfo(void)::g_EntityCBaseMultiplayerPlayerClassInfo,
    "CBaseMultiplayerPlayer",
    0,
    0,
    &CBasePlayer::GetEntityClassInfo(void)::g_EntityCBasePlayerClassInfo);
  __cxa_guard_release(&`guard variable for'CBaseMultiplayerPlayer::GetEntityClassInfo(void)::g_EntityCBaseMultiplayerPlayerClassInfo);
  return &CBaseMultiplayerPlayer::GetEntityClassInfo(void)::g_EntityCBaseMultiplayerPlayerClassInfo;
}


// CBaseMultiplayerPlayer::Precache  (line 37, @0x000000000217b4b0, libserver.so)
// calls: CBasePlayer::Precache
void __fastcall CBaseMultiplayerPlayer::Precache(
        CBaseMultiplayerPlayer *const this,
        const CEntityPrecacheContext *pContext)
{
  CBasePlayer::Precache(this, pContext);
}


// CBaseMultiplayerPlayer::CanSpeak  (line 55, @0x000000000217a380, libserver.so)
bool __fastcall CBaseMultiplayerPlayer::CanSpeak(CBaseMultiplayerPlayer *const this)
{
  return 1;
}


// CBaseMultiplayerPlayer::CanSpeakVoiceCommand  (line 59, @0x000000000217a390, libserver.so)
bool __fastcall CBaseMultiplayerPlayer::CanSpeakVoiceCommand(CBaseMultiplayerPlayer *const this)
{
  return 1;
}


// CBaseMultiplayerPlayer::NoteSpokeVoiceCommand  (line 61, @0x000000000217a3a0, libserver.so)
void __fastcall CBaseMultiplayerPlayer::NoteSpokeVoiceCommand(
        CBaseMultiplayerPlayer *const this,
        const char *pszScenePlayed)
{
  ;
}


// CBaseMultiplayerPlayer::OnAchievementEarned  (line 63, @0x000000000217a3b0, libserver.so)
void __fastcall CBaseMultiplayerPlayer::OnAchievementEarned(CBaseMultiplayerPlayer *const this, int iAchievement)
{
  ;
}


// CBaseMultiplayerPlayer::GetExpresser  (line 76, @0x000000000217a3c0, libserver.so)
CAI_Expresser *__fastcall CBaseMultiplayerPlayer::GetExpresser(CBaseMultiplayerPlayer *const this)
{
  return this->m_pExpresser;
}


// CBaseMultiplayerPlayer::GetMultiplayerExpresser  (line 77, @0x000000000217a3d0, libserver.so)
CMultiplayer_Expresser *__fastcall CBaseMultiplayerPlayer::GetMultiplayerExpresser(CBaseMultiplayerPlayer *const this)
{
  return this->m_pExpresser;
}


