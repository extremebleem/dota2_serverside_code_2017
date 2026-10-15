
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseCombatCharacter::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 148, @0x0000000001fb7640, libserver.so)
// globals: CBaseCombatCharacter::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CBaseCombatCharacter::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CBaseCombatCharacter::CEntityInstanceEntityClass *const this)
{
  return CBaseCombatCharacter::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CBaseCombatCharacter::CEntityInstanceEntityClass::DestructInstance  (line 148, @0x0000000001fb7650, libserver.so)  // inlines: Destruct<CBaseCombatCharacter>
void __fastcall CBaseCombatCharacter::CEntityInstanceEntityClass::DestructInstance(
        CBaseCombatCharacter::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CBaseCombatCharacter::CEntityInstanceEntityClass::FreeInstance  (line 148, @0x0000000001fb7670, libserver.so)
void __fastcall CBaseCombatCharacter::CEntityInstanceEntityClass::FreeInstance(
        CBaseCombatCharacter::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CBaseCombatCharacter::CEntityInstanceEntityClass::CanAllocate  (line 148, @0x0000000001fb7690, libserver.so)
bool __fastcall CBaseCombatCharacter::CEntityInstanceEntityClass::CanAllocate(
        const CBaseCombatCharacter::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CBaseCombatCharacter::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 148, @0x0000000001fb76a0, libserver.so)
// globals: CBaseCombatCharacter::s_pSchemaBinding
const ISchemaBinding *__fastcall CBaseCombatCharacter::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CBaseCombatCharacter::CEntityInstanceEntityClass *const this)
{
  return CBaseCombatCharacter::s_pSchemaBinding;
}


// CBaseCombatCharacter::CEntityInstanceEntityClass::AllocateInstance  (line 148, @0x0000000001fb99a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CBaseCombatCharacter::CEntityInstanceEntityClass::AllocateInstance(
        CBaseCombatCharacter::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1888);
  memset(v1, 0, 0x760u);
  return v1;
}


// CBaseCombatCharacter::CEntityInstanceEntityClass::ConstructInstance  (line 148, @0x0000000001fb9e80, libserver.so)  // inlines: Construct<CBaseCombatCharacter>
// calls: CBaseCombatCharacter::CBaseCombatCharacter
CEntityInstance *__fastcall CBaseCombatCharacter::CEntityInstanceEntityClass::ConstructInstance(
        CBaseCombatCharacter::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CBaseCombatCharacter::CBaseCombatCharacter(p);
  return p;
}


// CBaseCombatCharacter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 148, @0x0000000001fbd940, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CBaseCombatCharacter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseCombatCharacter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CBaseCombatCharacter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 148, @0x0000000001fbd960, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CBaseCombatCharacter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseCombatCharacter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CBaseCombatCharacter::GetEntityClassInfo  (line 148, @0x0000000001fc4020, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseAnimatingOverlay::GetEntityClassInfo
// callers: CBaseMultiplayerPlayer::GetEntityClassInternal, CPhysicsCannister::GetEntityClassInternal, CBasePlayer::GetEntityClassInternal, CBasePlayer::CEntityInstanceEntityClass::InitOptionalTables, CBaseMultiplayerPlayer::GetEntityClassInfo, CDOTA_BaseNPC::GetEntityClassInfo, CDOTA_BaseNPC_Building::GetEntityClassInfo, CDOTA_BaseNPC_Tower::GetEntityClassInfo, CDOTA_BaseNPC::GetEntityClassInternal, CDOTA_BaseNPC_Building::GetEntityClassInternal
// strings: "CBaseCombatCharacter"
// globals: `guard variable for'CBaseCombatCharacter::GetEntityClassInfo(void)::g_EntityCBaseCombatCharacterClassInfo, CBaseCombatCharacter::GetEntityClassInfo(void)::g_EntityCBaseCombatCharacterClassInfo, `guard variable for'CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo, CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo
CEntityClassInfo *__cdecl CBaseCombatCharacter::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBaseCombatCharacter::GetEntityClassInfo(void)::g_EntityCBaseCombatCharacterClassInfo != 0 )
    return &CBaseCombatCharacter::GetEntityClassInfo(void)::g_EntityCBaseCombatCharacterClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CBaseCombatCharacter::GetEntityClassInfo(void)::g_EntityCBaseCombatCharacterClassInfo) == 0 )
    return &CBaseCombatCharacter::GetEntityClassInfo(void)::g_EntityCBaseCombatCharacterClassInfo;
  if ( `guard variable for'CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo) != 0 )
  {
    EntityClassInfo = CBaseAnimatingOverlay::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo,
      "CBaseFlex",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CBaseCombatCharacter::GetEntityClassInfo(void)::g_EntityCBaseCombatCharacterClassInfo,
    "CBaseCombatCharacter",
    0,
    0,
    &CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo);
  __cxa_guard_release(&`guard variable for'CBaseCombatCharacter::GetEntityClassInfo(void)::g_EntityCBaseCombatCharacterClassInfo);
  return &CBaseCombatCharacter::GetEntityClassInfo(void)::g_EntityCBaseCombatCharacterClassInfo;
}


// CBaseCombatCharacter::GetEntityClassInternal  (line 148, @0x0000000001fccee0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CBaseCombatCharacter>, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseAnimatingOverlay::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_01.cpp
// strings: "CBaseCombatCharacter"
// globals: `guard variable for'CBaseCombatCharacter::GetEntityClassInternal(void)::g_EntityCBaseCombatCharacterClass, CBaseCombatCharacter::GetEntityClassInternal(void)::g_EntityCBaseCombatCharacterClass, __dso_handle, CBaseCombatCharacter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CBaseCombatCharacter::GetEntityClassInfo(void)::g_EntityCBaseCombatCharacterClassInfo, CBaseCombatCharacter::GetEntityClassInfo(void)::g_EntityCBaseCombatCharacterClassInfo, `guard variable for'CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo, CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo
CEntityClass *__cdecl CBaseCombatCharacter::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBaseCombatCharacter::GetEntityClassInternal(void)::g_EntityCBaseCombatCharacterClass == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseCombatCharacter::GetEntityClassInternal(void)::g_EntityCBaseCombatCharacterClass) != 0 )
  {
    CEntityClass::CEntityClass(&CBaseCombatCharacter::GetEntityClassInternal(void)::g_EntityCBaseCombatCharacterClass);
    CBaseCombatCharacter::GetEntityClassInternal(void)::g_EntityCBaseCombatCharacterClass._vptr_CEntityClass = off_3FD0590;
    __cxa_guard_release(&`guard variable for'CBaseCombatCharacter::GetEntityClassInternal(void)::g_EntityCBaseCombatCharacterClass);
    __cxa_atexit(
      CBaseCombatCharacter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CBaseCombatCharacter::GetEntityClassInternal(void)::g_EntityCBaseCombatCharacterClass,
      &_dso_handle);
  }
  if ( g_pEntityCBaseCombatCharacterClass != 0 )
    return &CBaseCombatCharacter::GetEntityClassInternal(void)::g_EntityCBaseCombatCharacterClass;
  if ( `guard variable for'CBaseCombatCharacter::GetEntityClassInfo(void)::g_EntityCBaseCombatCharacterClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseCombatCharacter::GetEntityClassInfo(void)::g_EntityCBaseCombatCharacterClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo) != 0 )
    {
      EntityClassInfo = CBaseAnimatingOverlay::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo,
        "CBaseFlex",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseCombatCharacter::GetEntityClassInfo(void)::g_EntityCBaseCombatCharacterClassInfo,
      "CBaseCombatCharacter",
      0,
      0,
      &CBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseCombatCharacter::GetEntityClassInfo(void)::g_EntityCBaseCombatCharacterClassInfo);
  }
  CBaseCombatCharacter::GetEntityClassInternal(void)::g_EntityCBaseCombatCharacterClass.m_pClassInfo = &CBaseCombatCharacter::GetEntityClassInfo(void)::g_EntityCBaseCombatCharacterClassInfo;
  CBaseCombatCharacter::GetEntityClassInternal(void)::g_EntityCBaseCombatCharacterClass.m_pBaseClassInfo = CBaseCombatCharacter::GetEntityClassInfo(void)::g_EntityCBaseCombatCharacterClassInfo.m_pBaseClassInfo;
  g_pEntityCBaseCombatCharacterClass = &CBaseCombatCharacter::GetEntityClassInternal(void)::g_EntityCBaseCombatCharacterClass;
  CBaseCombatCharacter::GetEntityClassInfo(void)::g_EntityCBaseCombatCharacterClassInfo.m_pClass = &CBaseCombatCharacter::GetEntityClassInternal(void)::g_EntityCBaseCombatCharacterClass;
  CBaseCombatCharacter::GetEntityClassInternal(void)::g_EntityCBaseCombatCharacterClass.m_pScriptClassDesc = GetScriptDesc<CBaseCombatCharacter>(0);
  g_pEntityCBaseCombatCharacterClass->m_pComponentOverrides = 0;
  return &CBaseCombatCharacter::GetEntityClassInternal(void)::g_EntityCBaseCombatCharacterClass;
}


// CBaseCombatCharacter::GetEntityClass  (line 148, @0x0000000002179710, libserver.so)
CEntityClass *__cdecl CBaseCombatCharacter::GetEntityClass()
{
  return g_pEntityCBaseCombatCharacterClass;
}


// CBaseCombatCharacter::Schema_DynamicBinding  (line 148, @0x000000000217b3d0, libserver.so)
// calls: CBaseCombatCharacter::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBaseCombatCharacter::Schema_DynamicBinding(
        const CBaseCombatCharacter *const this)
{
  CBaseCombatCharacter::Schema_VerifyBindingIsRegistered();
  return CBaseCombatCharacter::s_pSchemaBinding;
}


// CBaseCombatCharacter::HackToMakeAVTable  (line 162, @0x0000000002179720, libserver.so)
void __fastcall CBaseCombatCharacter::HackToMakeAVTable(const CBaseCombatCharacter *const this)
{
  ;
}


// CBaseCombatCharacter::FVisible  (line 185, @0x000000000217cec0, libserver.so)
// calls: CBaseEntity::FVisible
bool __fastcall CBaseCombatCharacter::FVisible(
        CBaseCombatCharacter *const this,
        const Vector *const vecTarget,
        uint64 traceMask,
        CBaseEntity **ppBlocker)
{
  return CBaseEntity::FVisible(this, vecTarget, traceMask, ppBlocker);
}


// CBaseCombatCharacter::TakeClubbedDamage  (line 188, @0x0000000002179730, libserver.so)
bool __fastcall CBaseCombatCharacter::TakeClubbedDamage(CBaseCombatCharacter *const this)
{
  return 1;
}


// CBaseCombatCharacter::HeadDirection2D  (line 215, @0x0000000002179740, libserver.so)
Vector __fastcall CBaseCombatCharacter::HeadDirection2D(CBaseCombatCharacter *const this)
{
  return (*(this->_vptr_IHandleEntity + 272))(this);
}


// CBaseCombatCharacter::HeadDirection3D  (line 216, @0x0000000002179760, libserver.so)
Vector __fastcall CBaseCombatCharacter::HeadDirection3D(CBaseCombatCharacter *const this)
{
  return (*(this->_vptr_IHandleEntity + 272))(this);
}


// CBaseCombatCharacter::EyeDirection2D  (line 217, @0x0000000002179780, libserver.so)
Vector __fastcall CBaseCombatCharacter::EyeDirection2D(CBaseCombatCharacter *const this)
{
  return (*(this->_vptr_IHandleEntity + 274))(this);
}


// CBaseCombatCharacter::EyeDirection3D  (line 218, @0x00000000021797a0, libserver.so)
Vector __fastcall CBaseCombatCharacter::EyeDirection3D(CBaseCombatCharacter *const this)
{
  return (*(this->_vptr_IHandleEntity + 275))(this);
}


// CBaseCombatCharacter::IsInFieldOfView  (line 251, @0x00000000021797c0, libserver.so)
bool __fastcall CBaseCombatCharacter::IsInFieldOfView(const CBaseCombatCharacter *const this, CBaseEntity *pEntity)
{
  return (*(this->_vptr_IHandleEntity + 288))(this, pEntity);
}


// CBaseCombatCharacter::OnFootstep  (line 267, @0x00000000021797e0, libserver.so)
void __fastcall CBaseCombatCharacter::OnFootstep(
        CBaseCombatCharacter *const this,
        const Vector *const origin,
        bool leftFoot,
        bool jumping)
{
  ;
}


// CBaseCombatCharacter::GetFootstepSound  (line 270, @0x00000000021797f0, libserver.so)
const char *__fastcall CBaseCombatCharacter::GetFootstepSound(
        const CBaseCombatCharacter *const this,
        const char *baseSound,
        bool rightFoot,
        float speed,
        bool jumping)
{
  return baseSound;
}


// CBaseCombatCharacter::AreFootstepsAudible  (line 271, @0x0000000002179800, libserver.so)
bool __fastcall CBaseCombatCharacter::AreFootstepsAudible(const CBaseCombatCharacter *const this)
{
  return (this->m_fFlags.m_Value & 0x60) == 0;
}


// CBaseCombatCharacter::IsFootstepAudible  (line 272, @0x0000000002179810, libserver.so)
__int64 __fastcall CBaseCombatCharacter::IsFootstepAudible(
        const CBaseCombatCharacter *const this,
        double a2,
        float speed,
        bool jumping)
{
  return 1;
}


// CBaseCombatCharacter::AddPlayerItem  (line 317, @0x0000000002179820, libserver.so)
bool __fastcall CBaseCombatCharacter::AddPlayerItem(CBaseCombatCharacter *const this, CBaseCombatWeapon *pItem)
{
  return 0;
}


// CBaseCombatCharacter::RemovePlayerItem  (line 318, @0x0000000002179830, libserver.so)
bool __fastcall CBaseCombatCharacter::RemovePlayerItem(CBaseCombatCharacter *const this, CBaseCombatWeapon *pItem)
{
  return 0;
}


// CBaseCombatCharacter::CanBecomeServerRagdoll  (line 320, @0x0000000002179840, libserver.so)
bool __fastcall CBaseCombatCharacter::CanBecomeServerRagdoll(CBaseCombatCharacter *const this)
{
  return 1;
}


// CBaseCombatCharacter::OnFriendDamaged  (line 340, @0x0000000002179850, libserver.so)
void __fastcall CBaseCombatCharacter::OnFriendDamaged(
        CBaseCombatCharacter *const this,
        CBaseCombatCharacter *pSquadmate,
        CBaseEntity *pAttacker)
{
  ;
}


// CBaseCombatCharacter::NotifyFriendsOfDamage  (line 341, @0x0000000002179860, libserver.so)
void __fastcall CBaseCombatCharacter::NotifyFriendsOfDamage(
        CBaseCombatCharacter *const this,
        CBaseEntity *pAttackerEntity)
{
  ;
}


// CBaseCombatCharacter::OnPlayerKilledOther  (line 346, @0x0000000002179870, libserver.so)
void __fastcall CBaseCombatCharacter::OnPlayerKilledOther(
        CBaseCombatCharacter *const this,
        CBaseEntity *pVictim,
        const CTakeDamageInfo *const info)
{
  ;
}


// CBaseCombatCharacter::ShouldGib  (line 358, @0x0000000002179880, libserver.so)
bool __fastcall CBaseCombatCharacter::ShouldGib(CBaseCombatCharacter *const this, const CTakeDamageInfo *const info)
{
  return 0;
}


// CBaseCombatCharacter::ShouldDropActiveWeaponWhenKilled  (line 368, @0x0000000002179890, libserver.so)
bool __fastcall CBaseCombatCharacter::ShouldDropActiveWeaponWhenKilled(CBaseCombatCharacter *const this)
{
  return 1;
}


// CBaseCombatCharacter::OnKilledNPC  (line 372, @0x00000000021798a0, libserver.so)
void __fastcall CBaseCombatCharacter::OnKilledNPC(CBaseCombatCharacter *const this, CBaseCombatCharacter *pKilled)
{
  ;
}


// CBaseCombatCharacter::MyCombatCharacterPointer  (line 392, @0x00000000021798b0, libserver.so)
CBaseCombatCharacter *__fastcall CBaseCombatCharacter::MyCombatCharacterPointer(CBaseCombatCharacter *const this)
{
  return this;
}


// CBaseCombatCharacter::MyCombatCharacterPointer  (line 393, @0x00000000021798c0, libserver.so)
const CBaseCombatCharacter *__fastcall CBaseCombatCharacter::MyCombatCharacterPointer(
        const CBaseCombatCharacter *const this)
{
  return this;
}


// CBaseCombatCharacter::PushawayTouch  (line 402, @0x00000000021798d0, libserver.so)
void __fastcall CBaseCombatCharacter::PushawayTouch(CBaseCombatCharacter *const this, CBaseEntity *pOther)
{
  ;
}


// CBaseCombatCharacter::IsInAVehicle  (line 417, @0x00000000021798e0, libserver.so)
bool __fastcall CBaseCombatCharacter::IsInAVehicle(const CBaseCombatCharacter *const this)
{
  return 0;
}


// CBaseCombatCharacter::GetVehicle  (line 418, @0x00000000021798f0, libserver.so)
IServerVehicle *__fastcall CBaseCombatCharacter::GetVehicle(CBaseCombatCharacter *const this)
{
  return 0;
}


// CBaseCombatCharacter::GetVehicle  (line 419, @0x0000000002179900, libserver.so)
const IServerVehicle *__fastcall CBaseCombatCharacter::GetVehicle(const CBaseCombatCharacter *const this)
{
  return 0;
}


// CBaseCombatCharacter::GetVehicleEntity  (line 420, @0x0000000002179910, libserver.so)
CBaseEntity *__fastcall CBaseCombatCharacter::GetVehicleEntity(CBaseCombatCharacter *const this)
{
  return 0;
}


// CBaseCombatCharacter::ExitVehicle  (line 421, @0x0000000002179920, libserver.so)
bool __fastcall CBaseCombatCharacter::ExitVehicle(CBaseCombatCharacter *const this)
{
  return 0;
}


// CBaseCombatCharacter::GetFaction  (line 470, @0x0000000001fb76b0, libserver.so)
int __fastcall CBaseCombatCharacter::GetFaction(const CBaseCombatCharacter *const this)
{
  return this->m_nFaction;
}


// CBaseCombatCharacter::OnChangeActiveWeapon  (line 493, @0x0000000002179930, libserver.so)
void __fastcall CBaseCombatCharacter::OnChangeActiveWeapon(
        CBaseCombatCharacter *const this,
        CBaseCombatWeapon *pOldWeapon,
        CBaseCombatWeapon *pNewWeapon)
{
  ;
}


// CBaseCombatCharacter::GetLastKnownArea  (line 512, @0x0000000002179940, libserver.so)  // inlines: operator CNavArea*
CNavArea *__fastcall CBaseCombatCharacter::GetLastKnownArea(const CBaseCombatCharacter *const this)
{
  CNavArea *result; // rax

  result = 0;
  if ( this->m_lastValidNavArea.m_pAssociatedNavMesh == TheNavMesh )
    return this->m_lastValidNavArea.m_pData;
  return result;
}


// CBaseCombatCharacter::GetCurrentArea  (line 513, @0x0000000002179970, libserver.so)  // inlines: operator CNavArea*
CNavArea *__fastcall CBaseCombatCharacter::GetCurrentArea(const CBaseCombatCharacter *const this)
{
  CNavArea *result; // rax

  result = 0;
  if ( this->m_currentNavArea.m_pAssociatedNavMesh == TheNavMesh )
    return this->m_currentNavArea.m_pData;
  return result;
}


// CBaseCombatCharacter::OnNavAreaChanged  (line 518, @0x00000000021799a0, libserver.so)
void __fastcall CBaseCombatCharacter::OnNavAreaChanged(
        CBaseCombatCharacter *const this,
        CNavArea *enteredArea,
        CNavArea *leftArea)
{
  ;
}


// CBaseCombatCharacter::IsGhost  (line 535, @0x00000000021799b0, libserver.so)
bool __fastcall CBaseCombatCharacter::IsGhost(const CBaseCombatCharacter *const this)
{
  return 0;
}


// CBaseCombatCharacter::GetAliveDuration  (line 685, @0x000000000217c400, libserver.so)  // inlines: GetElapsedTime
// calls: IntervalTimer::Now
float __fastcall CBaseCombatCharacter::GetAliveDuration(const CBaseCombatCharacter *const this)
{
  if ( this->m_aliveTimer.m_timestamp.m_Value <= 0.0 )
    return 99999.898;
  else
    return IntervalTimer::Now(&this->m_aliveTimer) - this->m_aliveTimer.m_timestamp.m_Value;
}


// CBaseCombatCharacter::WeaponCount  (line 713, @0x0000000001fb76c0, libserver.so)
int __fastcall CBaseCombatCharacter::WeaponCount(const CBaseCombatCharacter *const this)
{
  return this->m_hMyWeapons.m_Vector.m_Size;
}


