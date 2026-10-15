
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseEntity::CEntityInstanceEntityClass::DestructInstance  (line 192, @0x0000000001ea0d00, libserver.so)  // inlines: Destruct<CBaseEntity>
void __fastcall CBaseEntity::CEntityInstanceEntityClass::DestructInstance(
        CBaseEntity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CBaseEntity::CEntityInstanceEntityClass::FreeInstance  (line 192, @0x0000000001ea0d20, libserver.so)
void __fastcall CBaseEntity::CEntityInstanceEntityClass::FreeInstance(
        CBaseEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CBaseEntity::CEntityInstanceEntityClass::CanAllocate  (line 192, @0x0000000001ea0d40, libserver.so)
bool __fastcall CBaseEntity::CEntityInstanceEntityClass::CanAllocate(
        const CBaseEntity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CBaseEntity::CEntityInstanceEntityClass::AllocateInstance  (line 192, @0x0000000001ea1a90, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CBaseEntity::CEntityInstanceEntityClass::AllocateInstance(
        CBaseEntity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 776);
  memset(v1, 0, 0x308u);
  return v1;
}


// CBaseEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 192, @0x0000000001ea1d30, libserver.so)  // inlines: Schema_StaticBinding
// calls: CBaseEntity::Schema_VerifyBindingIsRegistered
const ISchemaBinding *__fastcall CBaseEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CBaseEntity::CEntityInstanceEntityClass *const this)
{
  CBaseEntity::Schema_VerifyBindingIsRegistered();
  return CBaseEntity::s_pSchemaBinding;
}


// CBaseEntity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 192, @0x0000000001ea1d50, libserver.so)
// calls: CBaseEntity::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBaseEntity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CBaseEntity::CEntityInstanceEntityClass *const this)
{
  CBaseEntity::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered();
  return CBaseEntity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CBaseEntity::CEntityInstanceEntityClass::ConstructInstance  (line 192, @0x0000000001ea1d70, libserver.so)  // inlines: Construct<CBaseEntity>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CBaseEntity::CEntityInstanceEntityClass::ConstructInstance(
        CBaseEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CBaseEntity::CBaseEntity(p);
  return p;
}


// CBaseEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 192, @0x0000000001ea26e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CBaseEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CBaseEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 192, @0x0000000001ea2700, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CBaseEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CBaseEntity::GetEntityClassInfo  (line 192, @0x0000000001ea3ab0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release
// callers: CBaseAnimating::GetEntityClassInfo, CDevtestHierarchy::GetEntityClassInternal, CDevtestHierarchy2::GetEntityClassInternal, CPlasma::GetEntityClassInternal, CBaseClientUIEntity::GetEntityClassInternal, CPointClientUIWorldPanel::GetEntityClassInternal, CBaseClientUIEntity::GetEntityClassInfo, CLogicalEntity::GetEntityClassInfo, CLightEntity::GetEntityClassInfo, CLightDirectionalEntity::GetEntityClassInfo, CTonemapController2::GetEntityClassInternal, CPointEntity::GetEntityClassInternal (154 total)
// strings: "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo, CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo
CEntityClassInfo *__cdecl CBaseEntity::GetEntityClassInfo()
{
  if ( `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo != 0 )
    return &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo) == 0 )
    return &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo;
  if ( `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo) != 0 )
  {
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo,
      "CGameEntity",
      0,
      0,
      &g_EntityRootClassInfo);
    __cxa_guard_release(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo,
    "CBaseEntity",
    0,
    0,
    &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
  return &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo;
}


// CBaseEntity::GetEntityClassInternal  (line 192, @0x0000000001fcb9c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CBaseEntity>, CBaseEntity::SetupEntClassInputs, CBaseEntity::SetupEntClassComponentOverrides, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_01.cpp
// strings: "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CBaseEntity::GetEntityClassInternal(void)::g_EntityCBaseEntityClass, CBaseEntity::GetEntityClassInternal(void)::g_EntityCBaseEntityClass, __dso_handle, CBaseEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo, CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo
CEntityClass *__cdecl CBaseEntity::GetEntityClassInternal()
{
  if ( `guard variable for'CBaseEntity::GetEntityClassInternal(void)::g_EntityCBaseEntityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseEntity::GetEntityClassInternal(void)::g_EntityCBaseEntityClass) != 0 )
  {
    CEntityClass::CEntityClass(&CBaseEntity::GetEntityClassInternal(void)::g_EntityCBaseEntityClass);
    CBaseEntity::GetEntityClassInternal(void)::g_EntityCBaseEntityClass._vptr_CEntityClass = off_3FAF430;
    __cxa_guard_release(&`guard variable for'CBaseEntity::GetEntityClassInternal(void)::g_EntityCBaseEntityClass);
    __cxa_atexit(
      CBaseEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CBaseEntity::GetEntityClassInternal(void)::g_EntityCBaseEntityClass,
      &_dso_handle);
  }
  if ( g_pEntityCBaseEntityClass != 0 )
    return &CBaseEntity::GetEntityClassInternal(void)::g_EntityCBaseEntityClass;
  if ( `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo) != 0 )
  {
    if ( `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo) != 0 )
    {
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo,
        "CGameEntity",
        0,
        0,
        &g_EntityRootClassInfo);
      __cxa_guard_release(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo,
      "CBaseEntity",
      0,
      0,
      &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
  }
  CBaseEntity::GetEntityClassInternal(void)::g_EntityCBaseEntityClass.m_pClassInfo = &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo;
  CBaseEntity::GetEntityClassInternal(void)::g_EntityCBaseEntityClass.m_pBaseClassInfo = CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo.m_pBaseClassInfo;
  g_pEntityCBaseEntityClass = &CBaseEntity::GetEntityClassInternal(void)::g_EntityCBaseEntityClass;
  CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo.m_pClass = &CBaseEntity::GetEntityClassInternal(void)::g_EntityCBaseEntityClass;
  CBaseEntity::GetEntityClassInternal(void)::g_EntityCBaseEntityClass.m_pScriptClassDesc = GetScriptDesc<CBaseEntity>(0);
  CBaseEntity::SetupEntClassInputs(g_pEntityCBaseEntityClass);
  CBaseEntity::SetupEntClassComponentOverrides(g_pEntityCBaseEntityClass);
  return &CBaseEntity::GetEntityClassInternal(void)::g_EntityCBaseEntityClass;
}


// CBaseEntity::GetEntityClass  (line 192, @0x0000000002179620, libserver.so)
CEntityClass *__cdecl CBaseEntity::GetEntityClass()
{
  return g_pEntityCBaseEntityClass;
}


// CBaseEntity::Schema_DynamicBinding  (line 192, @0x000000000217b300, libserver.so)
// calls: CBaseEntity::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBaseEntity::Schema_DynamicBinding(const CBaseEntity *const this)
{
  CBaseEntity::Schema_VerifyBindingIsRegistered();
  return CBaseEntity::s_pSchemaBinding;
}


// CBaseEntity::HackToMakeAVTable  (line 261, @0x0000000001eea030, libserver.so)
void __fastcall CBaseEntity::HackToMakeAVTable(const CBaseEntity *const this)
{
  ;
}


// CBaseEntity::ScriptGetForward  (line 314, @0x0000000001fba090, libserver.so)
// calls: __cxa_guard_acquire, __cxa_guard_release
// globals: `guard variable for'CBaseEntity::ScriptGetForward(void)::vecForward, CBaseEntity::ScriptGetForward(void)::vecForward
const Vector *__fastcall CBaseEntity::ScriptGetForward(CBaseEntity *const this)
{
  if ( `guard variable for'CBaseEntity::ScriptGetForward(void)::vecForward == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseEntity::ScriptGetForward(void)::vecForward) != 0 )
  {
    __cxa_guard_release(&`guard variable for'CBaseEntity::ScriptGetForward(void)::vecForward);
  }
  (*(this->_vptr_IHandleEntity + 61))(this, &CBaseEntity::ScriptGetForward(void)::vecForward, 0, 0);
  return &CBaseEntity::ScriptGetForward(void)::vecForward;
}


// CBaseEntity::ScriptGetRight  (line 315, @0x0000000001fba030, libserver.so)
// calls: __cxa_guard_acquire, __cxa_guard_release
// globals: `guard variable for'CBaseEntity::ScriptGetRight(void)::vecRight, CBaseEntity::ScriptGetRight(void)::vecRight
const Vector *__fastcall CBaseEntity::ScriptGetRight(CBaseEntity *const this)
{
  if ( `guard variable for'CBaseEntity::ScriptGetRight(void)::vecRight == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseEntity::ScriptGetRight(void)::vecRight) != 0 )
  {
    __cxa_guard_release(&`guard variable for'CBaseEntity::ScriptGetRight(void)::vecRight);
  }
  (*(this->_vptr_IHandleEntity + 61))(this, 0, &CBaseEntity::ScriptGetRight(void)::vecRight, 0);
  return &CBaseEntity::ScriptGetRight(void)::vecRight;
}


// CBaseEntity::ScriptGetUp  (line 316, @0x0000000001fb9fd0, libserver.so)
// calls: __cxa_guard_acquire, __cxa_guard_release
// globals: `guard variable for'CBaseEntity::ScriptGetUp(void)::vecUp, CBaseEntity::ScriptGetUp(void)::vecUp
const Vector *__fastcall CBaseEntity::ScriptGetUp(CBaseEntity *const this)
{
  if ( `guard variable for'CBaseEntity::ScriptGetUp(void)::vecUp == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseEntity::ScriptGetUp(void)::vecUp) != 0 )
  {
    __cxa_guard_release(&`guard variable for'CBaseEntity::ScriptGetUp(void)::vecUp);
  }
  (*(this->_vptr_IHandleEntity + 61))(this, 0, 0, &CBaseEntity::ScriptGetUp(void)::vecUp);
  return &CBaseEntity::ScriptGetUp(void)::vecUp;
}


// CBaseEntity::ScriptEyePosition  (line 327, @0x0000000001fba0f0, libserver.so)  // inlines: operator=
// calls: __cxa_guard_acquire, __cxa_guard_release
// globals: `guard variable for'CBaseEntity::ScriptEyePosition(void)::vec, CBaseEntity::ScriptEyePosition(void)::vec
const Vector *__fastcall CBaseEntity::ScriptEyePosition(CBaseEntity *const this)
{
  double v2; // xmm0_8
  vec_t v4; // xmm1_4

  if ( `guard variable for'CBaseEntity::ScriptEyePosition(void)::vec == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseEntity::ScriptEyePosition(void)::vec) != 0 )
  {
    __cxa_guard_release(&`guard variable for'CBaseEntity::ScriptEyePosition(void)::vec);
  }
  v2 = (*(this->_vptr_IHandleEntity + 164))(this);
  CBaseEntity::ScriptEyePosition(void)::vec.z = v4;
  *&CBaseEntity::ScriptEyePosition(void)::vec.x = v2;
  return &CBaseEntity::ScriptEyePosition(void)::vec;
}


// CBaseEntity::ScriptSetAngles  (line 328, @0x0000000001fb7370, libserver.so)  // inlines: QAngle
void __fastcall CBaseEntity::ScriptSetAngles(CBaseEntity *const this, double a2, vec_t fPitch, vec_t fYaw, float fRoll)
{
  int (**vptr_IHandleEntity)(...); // rax
  QAngle angles; // [rsp+0h] [rbp-10h] BYREF

  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  angles.x = *&a2;
  angles.y = fPitch;
  angles.z = fYaw;
  vptr_IHandleEntity[128](this, 0, &angles, 0, a2, fPitch, fYaw, fRoll);
}


// CBaseEntity::ScriptGetAngles  (line 329, @0x0000000001fb9f50, libserver.so)
// calls: CBaseEntity::GetAbsAngles, __cxa_guard_acquire, __cxa_guard_release
// globals: `guard variable for'CBaseEntity::ScriptGetAngles(void)::vec, CBaseEntity::ScriptGetAngles(void)::vec
const Vector *__fastcall CBaseEntity::ScriptGetAngles(CBaseEntity *const this)
{
  const QAngle *AbsAngles; // rax
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4

  if ( `guard variable for'CBaseEntity::ScriptGetAngles(void)::vec == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseEntity::ScriptGetAngles(void)::vec) != 0 )
  {
    __cxa_guard_release(&`guard variable for'CBaseEntity::ScriptGetAngles(void)::vec);
  }
  AbsAngles = CBaseEntity::GetAbsAngles(this);
  y = AbsAngles->y;
  z = AbsAngles->z;
  CBaseEntity::ScriptGetAngles(void)::vec.x = AbsAngles->x;
  CBaseEntity::ScriptGetAngles(void)::vec.y = y;
  CBaseEntity::ScriptGetAngles(void)::vec.z = z;
  return &CBaseEntity::ScriptGetAngles(void)::vec;
}


// CBaseEntity::ScriptEyeAngles  (line 330, @0x0000000001fb73a0, libserver.so)
const QAngle *__fastcall CBaseEntity::ScriptEyeAngles(CBaseEntity *const this)
{
  return (*(this->_vptr_IHandleEntity + 165))(this);
}


// CBaseEntity::ScriptSetOrigin  (line 331, @0x0000000001fb73c0, libserver.so)
void __fastcall CBaseEntity::ScriptSetOrigin(CBaseEntity *const this, const Vector *const v)
{
  (*(this->_vptr_IHandleEntity + 128))(this, v, 0, 0);
}


// CBaseEntity::ScriptSetLocalAngles  (line 332, @0x0000000001fba290, libserver.so)  // inlines: QAngle
// calls: CBaseEntity::SetLocalAngles
void __fastcall CBaseEntity::ScriptSetLocalAngles(
        CBaseEntity *const this,
        vec_t a2,
        vec_t fPitch,
        vec_t fYaw,
        float fRoll)
{
  QAngle angles; // [rsp+0h] [rbp-10h] BYREF

  angles.x = a2;
  angles.y = fPitch;
  angles.z = fYaw;
  CBaseEntity::SetLocalAngles(this, &angles);
}


// CBaseEntity::ScriptGetLocalAngles  (line 333, @0x0000000001fb9da0, libserver.so)
// calls: CBaseEntity::GetLocalAngles
const QAngle *__fastcall CBaseEntity::ScriptGetLocalAngles(const CBaseEntity *const this)
{
  return CBaseEntity::GetLocalAngles(this);
}


// CBaseEntity::ScriptSetLocalOrigin  (line 334, @0x0000000001fba280, libserver.so)
// calls: CBaseEntity::SetLocalOrigin
void __fastcall CBaseEntity::ScriptSetLocalOrigin(CBaseEntity *const this, const Vector *const origin)
{
  CBaseEntity::SetLocalOrigin(this, origin);
}


// CBaseEntity::ScriptGetLocalOrigin  (line 335, @0x0000000001fba270, libserver.so)
// calls: CBaseEntity::GetLocalOrigin
const Vector *__fastcall CBaseEntity::ScriptGetLocalOrigin(const CBaseEntity *const this)
{
  return CBaseEntity::GetLocalOrigin(this);
}


// CBaseEntity::ScriptSetForward  (line 336, @0x0000000001fba230, libserver.so)
// calls: VectorAngles
void __fastcall CBaseEntity::ScriptSetForward(CBaseEntity *const this, const Vector *const v)
{
  QAngle angles; // [rsp+0h] [rbp-20h] BYREF

  VectorAngles(v, &angles);
  (*(this->_vptr_IHandleEntity + 128))(this, 0, &angles, 0);
}


// CBaseEntity::ScriptAddEffects  (line 342, @0x0000000001fba220, libserver.so)
// calls: CBaseEntity::AddEffects
void __fastcall CBaseEntity::ScriptAddEffects(CBaseEntity *const this, int nFlags)
{
  CBaseEntity::AddEffects(this, nFlags);
}


// CBaseEntity::ScriptRemoveEffects  (line 343, @0x0000000001fba1d0, libserver.so)  // inlines: MarkPVSInformationDirty, RemoveEffects
// calls: CBaseEntity::DispatchUpdateTransmitState
void __fastcall CBaseEntity::ScriptRemoveEffects(CBaseEntity *const this, int nFlags)
{
  char v2; // r12

  v2 = nFlags;
  (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & ~nFlags);
  if ( (v2 & 0x20) != 0 )
  {
    this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
    CBaseEntity::DispatchUpdateTransmitState(this);
  }
}


// CBaseEntity::ScriptSetAttributeFloatValue  (line 345, @0x0000000001fca9b0, libserver.so)  // inlines: Attribute_SetFloatValue, CThreadFastMutex, CUtlIntrusiveList, CUtlTSOpenHash, CUtlTSOpenHashConcurrencyModelLockFree, GetEntityAttributes, MakeStringToken, SetFloatValue, SetValue<float>
// calls: CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod, CUtlTSOpenHashConcurrencyModelLockFree>::Insert, MurmurHash2LowerCase, operator new, RegisterStringToken
void __fastcall CBaseEntity::ScriptSetAttributeFloatValue(
        CBaseEntity *const this,
        const char *pName,
        __m128i a3,
        float flValue)
{
  unsigned int v5; // r12d
  unsigned int v7; // esi
  CEntityIdentity *m_pEntity; // rbx
  size_t m_pAttributes; // rdi
  uint32 v10; // eax
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *v11; // rax
  unsigned int v12; // [rsp+0h] [rbp-24h]
  uint32 v13; // [rsp+0h] [rbp-24h]

  v5 = _mm_cvtsi128_si32(a3);
  v7 = 0x8000000;
  if ( pName == 0 || *pName == 0 )
  {
    m_pEntity = this->m_pEntity;
    m_pAttributes = m_pEntity->m_pAttributes;
    if ( m_pAttributes != 0 )
      goto LABEL_4;
LABEL_8:
    LOBYTE(m_pAttributes) = 56;
    v12 = v7;
    v11 = operator new(m_pAttributes);
    v7 = v12;
    v11->m_hashTable.m_tables.m_pHead = 0;
    m_pAttributes = v11;
    v11->m_hashTable.m_concurrencyModel.m_mutex.m_ownerID = 0;
    v11->m_hashTable.m_concurrencyModel.m_mutex.m_depth = 0;
    v11->m_hashTable.m_nNumKeysDeleted = 0;
    v11->m_hashTable.m_nCurrentTableSize = 64;
    v11->m_hashTable.m_nDeletedKeyValue = -1;
    v11->m_hashTable.m_nEmptyKeyValue = -2;
    v11->m_pParentTable = 0;
    m_pEntity->m_pAttributes = v11;
    goto LABEL_4;
  }
  v10 = MurmurHash2LowerCase(pName, 0x31415926u);
  if ( g_bUpdateStringTokenDatabase )
  {
    v13 = v10;
    RegisterStringToken(v10, pName, 0, 1);
    v10 = v13;
  }
  m_pEntity = this->m_pEntity;
  v7 = v10 & 0x7FFFFFF | 0x8000000;
  m_pAttributes = m_pEntity->m_pAttributes;
  if ( m_pAttributes == 0 )
    goto LABEL_8;
LABEL_4:
  CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::Insert(
    (m_pAttributes + 8),
    v7,
    v5,
    0);
}


// CBaseEntity::ScriptGetAttributeFloatValue  (line 346, @0x0000000001fbca90, libserver.so)  // inlines: Attribute_GetFloatValue, CThreadFastMutex, CUtlIntrusiveList, CUtlTSOpenHash, CUtlTSOpenHashConcurrencyModelLockFree, Compare, FindEntry_Inline, Find_Inline, GetEntityAttributes, GetFloatValue, GetValue<float>, Hash, Head, MakeStringToken
// calls: MurmurHash2LowerCase, operator new, RegisterStringToken
float __fastcall CBaseEntity::ScriptGetAttributeFloatValue(
        CBaseEntity *const this,
        const char *pName,
        float result,
        float flDefault)
{
  int v6; // ebx
  CEntityIdentity *m_pEntity; // r13
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *m_pAttributes; // r12
  int m_nCurrentTableSize; // r13d
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *v10; // r11
  CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::HashTable_t *m_pHead; // rax
  CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::HashTable_t *v12; // rdi
  int v13; // edx
  int m_key; // ecx
  __int64 m_value; // rdx
  int v16; // ecx
  uint32 v17; // eax
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *v18; // rax
  float v19; // [rsp+8h] [rbp-28h]
  float flDefaulta; // [rsp+Ch] [rbp-24h]
  float flDefaultc; // [rsp+Ch] [rbp-24h]
  uint32 flDefaultb; // [rsp+Ch] [rbp-24h]

  v6 = 0x8000000;
  if ( pName != 0 && *pName != 0 )
  {
    flDefaulta = result;
    v17 = MurmurHash2LowerCase(pName, 0x31415926u);
    result = flDefaulta;
    if ( g_bUpdateStringTokenDatabase )
    {
      v19 = flDefaulta;
      flDefaultb = v17;
      RegisterStringToken(v17, pName, 0, 1);
      result = v19;
      v17 = flDefaultb;
    }
    m_pEntity = this->m_pEntity;
    v6 = v17 & 0x7FFFFFF | 0x8000000;
    m_pAttributes = m_pEntity->m_pAttributes;
    if ( m_pAttributes != 0 )
      goto LABEL_4;
    goto LABEL_23;
  }
  m_pEntity = this->m_pEntity;
  m_pAttributes = m_pEntity->m_pAttributes;
  if ( m_pAttributes == 0 )
  {
LABEL_23:
    flDefaultc = result;
    v18 = operator new(0x38u);
    result = flDefaultc;
    v18->m_hashTable.m_tables.m_pHead = 0;
    m_pAttributes = v18;
    v18->m_hashTable.m_concurrencyModel.m_mutex.m_ownerID = 0;
    v18->m_hashTable.m_concurrencyModel.m_mutex.m_depth = 0;
    v18->m_hashTable.m_nNumKeysDeleted = 0;
    v18->m_hashTable.m_nCurrentTableSize = 64;
    v18->m_hashTable.m_nDeletedKeyValue = -1;
    v18->m_hashTable.m_nEmptyKeyValue = -2;
    v18->m_pParentTable = 0;
    m_pEntity->m_pAttributes = v18;
  }
LABEL_4:
  m_nCurrentTableSize = m_pAttributes->m_hashTable.m_nCurrentTableSize;
  v10 = m_pAttributes;
  m_pHead = m_pAttributes->m_hashTable.m_tables.m_pHead;
LABEL_5:
  while ( 2 )
  {
    v12 = m_pHead;
    if ( m_pHead == 0 )
      goto LABEL_17;
    while ( 2 )
    {
      v13 = v6 & (m_nCurrentTableSize - 1) & 0x7FFFFFF;
      do
      {
        m_key = v12->m_entries[v13].m_key;
        if ( ((m_key ^ v6) & 0x7FFFFFF) == 0 )
        {
          m_value = v12->m_entries[v13].m_value;
          if ( m_key >= 0 )
          {
            if ( m_key != v6 )
            {
              v16 = m_key & 0x78000000;
              if ( v16 == 0 )
                return m_value;
              if ( v16 != 0x8000000 )
                goto LABEL_5;
            }
            return *&m_value;
          }
          return *(&m_pAttributes->m_pOwningObject->m_pInstance + m_value);
        }
        if ( m_key == v10->m_hashTable.m_nEmptyKeyValue )
          break;
        v13 = (m_nCurrentTableSize - 1) & (v13 + 1);
      }
      while ( (v6 & (m_nCurrentTableSize - 1) & 0x7FFFFFF) != v13 );
      v12 = v12->m_pNext;
      if ( v12 != 0 )
        continue;
      break;
    }
LABEL_17:
    v10 = v10->m_pParentTable;
    if ( v10 != 0 )
    {
      m_nCurrentTableSize = v10->m_hashTable.m_nCurrentTableSize;
      m_pHead = v10->m_hashTable.m_tables.m_pHead;
      continue;
    }
    return result;
  }
}


// CBaseEntity::ScriptSetAttributeIntValue  (line 347, @0x0000000001fca8b0, libserver.so)  // inlines: Attribute_SetIntValue, CThreadFastMutex, CUtlIntrusiveList, CUtlTSOpenHash, CUtlTSOpenHashConcurrencyModelLockFree, GetEntityAttributes, MakeStringToken, SetIntValue, SetValue<int>
// calls: CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod, CUtlTSOpenHashConcurrencyModelLockFree>::Insert, MurmurHash2LowerCase, operator new, RegisterStringToken
void __fastcall CBaseEntity::ScriptSetAttributeIntValue(CBaseEntity *const this, const char *pName, int nValue)
{
  unsigned int v6; // esi
  CEntityIdentity *m_pEntity; // rbx
  size_t m_pAttributes; // rdi
  uint32 v9; // eax
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *v10; // rax
  unsigned int v11; // [rsp+Ch] [rbp-24h]
  uint32 v12; // [rsp+Ch] [rbp-24h]

  v6 = 0;
  if ( pName == 0 || *pName == 0 )
  {
    m_pEntity = this->m_pEntity;
    m_pAttributes = m_pEntity->m_pAttributes;
    if ( m_pAttributes != 0 )
      goto LABEL_4;
LABEL_8:
    LOBYTE(m_pAttributes) = 56;
    v11 = v6;
    v10 = operator new(m_pAttributes);
    v6 = v11;
    v10->m_hashTable.m_tables.m_pHead = 0;
    m_pAttributes = v10;
    v10->m_hashTable.m_concurrencyModel.m_mutex.m_ownerID = 0;
    v10->m_hashTable.m_concurrencyModel.m_mutex.m_depth = 0;
    v10->m_hashTable.m_nNumKeysDeleted = 0;
    v10->m_hashTable.m_nCurrentTableSize = 64;
    v10->m_hashTable.m_nDeletedKeyValue = -1;
    v10->m_hashTable.m_nEmptyKeyValue = -2;
    v10->m_pParentTable = 0;
    m_pEntity->m_pAttributes = v10;
    goto LABEL_4;
  }
  v9 = MurmurHash2LowerCase(pName, 0x31415926u);
  if ( g_bUpdateStringTokenDatabase )
  {
    v12 = v9;
    RegisterStringToken(v9, pName, 0, 1);
    v9 = v12;
  }
  m_pEntity = this->m_pEntity;
  v6 = v9 & 0x7FFFFFF;
  m_pAttributes = m_pEntity->m_pAttributes;
  if ( m_pAttributes == 0 )
    goto LABEL_8;
LABEL_4:
  CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::Insert(
    (m_pAttributes + 8),
    v6,
    nValue,
    0);
}


// CBaseEntity::ScriptGetAttributeIntValue  (line 348, @0x0000000001fbcc60, libserver.so)  // inlines: Attribute_GetIntValue, CThreadFastMutex, CUtlIntrusiveList, CUtlTSOpenHash, CUtlTSOpenHashConcurrencyModelLockFree, Compare, FindEntry_Inline, Find_Inline, GetEntityAttributes, GetIntValue, GetValue<int>, Hash, Head, MakeStringToken
// calls: MurmurHash2LowerCase, operator new, RegisterStringToken
float __fastcall CBaseEntity::ScriptGetAttributeIntValue(CBaseEntity *const this, const char *pName, int nDefault)
{
  int v6; // ebx
  CEntityIdentity *m_pEntity; // r13
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *m_pAttributes; // rax
  int m_nCurrentTableSize; // r13d
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *v10; // r10
  CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::HashTable_t *i; // r11
  CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::HashTable_t *v12; // r8
  int v13; // ecx
  int m_key; // esi
  __int64 m_value; // rdx
  int v16; // esi
  uint32 v18; // eax
  uint32 v19; // [rsp+Ch] [rbp-24h]

  v6 = 0;
  if ( pName != 0 && *pName != 0 )
  {
    v18 = MurmurHash2LowerCase(pName, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      v19 = v18;
      RegisterStringToken(v18, pName, 0, 1);
      v18 = v19;
    }
    m_pEntity = this->m_pEntity;
    v6 = v18 & 0x7FFFFFF;
    m_pAttributes = m_pEntity->m_pAttributes;
    if ( m_pAttributes != 0 )
      goto LABEL_4;
    goto LABEL_22;
  }
  m_pEntity = this->m_pEntity;
  m_pAttributes = m_pEntity->m_pAttributes;
  if ( m_pAttributes == 0 )
  {
LABEL_22:
    m_pAttributes = operator new(0x38u);
    m_pAttributes->m_hashTable.m_tables.m_pHead = 0;
    m_pAttributes->m_hashTable.m_concurrencyModel.m_mutex.m_ownerID = 0;
    m_pAttributes->m_hashTable.m_concurrencyModel.m_mutex.m_depth = 0;
    m_pAttributes->m_hashTable.m_nNumKeysDeleted = 0;
    m_pAttributes->m_hashTable.m_nCurrentTableSize = 64;
    m_pAttributes->m_hashTable.m_nDeletedKeyValue = -1;
    m_pAttributes->m_hashTable.m_nEmptyKeyValue = -2;
    m_pAttributes->m_pParentTable = 0;
    m_pEntity->m_pAttributes = m_pAttributes;
  }
LABEL_4:
  m_nCurrentTableSize = m_pAttributes->m_hashTable.m_nCurrentTableSize;
  v10 = m_pAttributes;
  for ( i = m_pAttributes->m_hashTable.m_tables.m_pHead; ; i = v10->m_hashTable.m_tables.m_pHead )
  {
LABEL_5:
    v12 = i;
    if ( i != 0 )
    {
      while ( 2 )
      {
        v13 = (m_nCurrentTableSize - 1) & v6;
        do
        {
          m_key = v12->m_entries[v13].m_key;
          if ( ((m_key ^ v6) & 0x7FFFFFF) == 0 )
          {
            m_value = v12->m_entries[v13].m_value;
            if ( m_key < 0 )
            {
              LODWORD(m_value) = *(&m_pAttributes->m_pOwningObject->m_pInstance + m_value);
            }
            else if ( m_key != v6 )
            {
              v16 = m_key & 0x78000000;
              if ( v16 != 0 )
              {
                if ( v16 != 0x8000000 )
                  goto LABEL_5;
                LODWORD(m_value) = *&m_value;
              }
            }
            return m_value;
          }
          if ( m_key == v10->m_hashTable.m_nEmptyKeyValue )
            break;
          v13 = (m_nCurrentTableSize - 1) & (v13 + 1);
        }
        while ( ((m_nCurrentTableSize - 1) & v6) != v13 );
        v12 = v12->m_pNext;
        if ( v12 != 0 )
          continue;
        break;
      }
    }
    v10 = v10->m_pParentTable;
    if ( v10 == 0 )
      break;
    m_nCurrentTableSize = v10->m_hashTable.m_nCurrentTableSize;
  }
  LODWORD(m_value) = nDefault;
  return m_value;
}


// CBaseEntity::ScriptHasAttribute  (line 349, @0x0000000001fbc930, libserver.so)  // inlines: CThreadFastMutex, CUtlIntrusiveList, CUtlTSOpenHash, CUtlTSOpenHashConcurrencyModelLockFree, Compare, FindEntry_Inline, Find_Inline, GetEntityAttributes, GetValue<int>, HasAttribute, Hash, Head, MakeStringToken
// calls: MurmurHash2LowerCase, operator new, RegisterStringToken
bool __fastcall CBaseEntity::ScriptHasAttribute(CBaseEntity *const this, const char *pName)
{
  int v4; // ebx
  CEntityIdentity *m_pEntity; // r12
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *m_pAttributes; // rax
  int m_nCurrentTableSize; // r11d
  CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::HashTable_t *m_pHead; // rdi
  int v9; // edx
  int m_key; // ecx
  int v11; // ecx
  uint32 v13; // ebx

  v4 = 0;
  if ( pName != 0 && *pName != 0 )
  {
    v13 = MurmurHash2LowerCase(pName, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
      RegisterStringToken(v13, pName, 0, 1);
    m_pEntity = this->m_pEntity;
    v4 = v13 & 0x7FFFFFF;
    m_pAttributes = m_pEntity->m_pAttributes;
    if ( m_pAttributes != 0 )
      goto LABEL_4;
    goto LABEL_21;
  }
  m_pEntity = this->m_pEntity;
  m_pAttributes = m_pEntity->m_pAttributes;
  if ( m_pAttributes == 0 )
  {
LABEL_21:
    m_pAttributes = operator new(0x38u);
    m_pAttributes->m_hashTable.m_tables.m_pHead = 0;
    m_pAttributes->m_hashTable.m_concurrencyModel.m_mutex.m_ownerID = 0;
    m_pAttributes->m_hashTable.m_concurrencyModel.m_mutex.m_depth = 0;
    m_pAttributes->m_hashTable.m_nNumKeysDeleted = 0;
    m_pAttributes->m_hashTable.m_nCurrentTableSize = 64;
    m_pAttributes->m_hashTable.m_nDeletedKeyValue = -1;
    m_pAttributes->m_hashTable.m_nEmptyKeyValue = -2;
    m_pAttributes->m_pParentTable = 0;
    m_pEntity->m_pAttributes = m_pAttributes;
    goto LABEL_4;
  }
  do
  {
LABEL_4:
    m_nCurrentTableSize = m_pAttributes->m_hashTable.m_nCurrentTableSize;
LABEL_5:
    m_pHead = m_pAttributes->m_hashTable.m_tables.m_pHead;
    if ( m_pHead != 0 )
    {
      while ( 2 )
      {
        v9 = (m_nCurrentTableSize - 1) & v4;
        do
        {
          m_key = m_pHead->m_entries[v9].m_key;
          if ( ((m_key ^ v4) & 0x7FFFFFF) == 0 )
          {
            if ( m_key < 0 )
              return 1;
            if ( m_key == v4 )
              return 1;
            v11 = m_key & 0x78000000;
            if ( v11 == 0 || v11 == 0x8000000 )
              return 1;
            goto LABEL_5;
          }
          if ( m_key == m_pAttributes->m_hashTable.m_nEmptyKeyValue )
            break;
          v9 = (m_nCurrentTableSize - 1) & (v9 + 1);
        }
        while ( ((m_nCurrentTableSize - 1) & v4) != v9 );
        m_pHead = m_pHead->m_pNext;
        if ( m_pHead != 0 )
          continue;
        break;
      }
    }
    m_pAttributes = m_pAttributes->m_pParentTable;
  }
  while ( m_pAttributes != 0 );
  return 0;
}


// CBaseEntity::ScriptDeleteAttribute  (line 350, @0x0000000001fbbb40, libserver.so)  // inlines: CThreadFastMutex, CUtlIntrusiveList, CUtlTSOpenHash, CUtlTSOpenHashConcurrencyModelLockFree, Compare, Delete, DeleteAttr, DeleteAttribute, FindEntry_Inline, GetEntityAttributes, Hash, Head, MakeStringToken, ThreadInterlockedCompareExchange
// calls: MurmurHash2LowerCase, operator new, RegisterStringToken
void __fastcall CBaseEntity::ScriptDeleteAttribute(CBaseEntity *const this, const char *pName)
{
  int v4; // ebx
  CEntityIdentity *m_pEntity; // r12
  size_t m_pAttributes; // rdi
  _QWORD *v7; // rsi
  int i; // r10d
  int v9; // edx
  volatile signed __int32 *v10; // r8
  signed __int32 v11; // eax
  uint32 v12; // eax
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *v13; // rax
  uint32 v14; // [rsp+Ch] [rbp-24h]

  v4 = 0;
  if ( pName == 0 || *pName == 0 )
  {
    m_pEntity = this->m_pEntity;
    m_pAttributes = m_pEntity->m_pAttributes;
    if ( m_pAttributes != 0 )
      goto LABEL_4;
    goto LABEL_16;
  }
  v12 = MurmurHash2LowerCase(pName, 0x31415926u);
  if ( g_bUpdateStringTokenDatabase )
  {
    v14 = v12;
    RegisterStringToken(v12, pName, 0, 1);
    v12 = v14;
  }
  m_pEntity = this->m_pEntity;
  v4 = v12 & 0x7FFFFFF;
  m_pAttributes = m_pEntity->m_pAttributes;
  if ( m_pAttributes == 0 )
  {
LABEL_16:
    LOBYTE(m_pAttributes) = 56;
    v13 = operator new(m_pAttributes);
    v13->m_hashTable.m_tables.m_pHead = 0;
    m_pAttributes = v13;
    v13->m_hashTable.m_concurrencyModel.m_mutex.m_ownerID = 0;
    v13->m_hashTable.m_concurrencyModel.m_mutex.m_depth = 0;
    v13->m_hashTable.m_nNumKeysDeleted = 0;
    v13->m_hashTable.m_nCurrentTableSize = 64;
    v13->m_hashTable.m_nDeletedKeyValue = -1;
    v13->m_hashTable.m_nEmptyKeyValue = -2;
    v13->m_pParentTable = 0;
    m_pEntity->m_pAttributes = v13;
  }
LABEL_4:
  v7 = *(m_pAttributes + 8);
  for ( i = *(m_pAttributes + 24) - 1; v7 != 0; v7 = *v7 )
  {
    v9 = i & v4;
    do
    {
      v10 = &v7[v9 + 1];
      v11 = *v10;
      if ( ((*v10 ^ v4) & 0x7FFFFFF) == 0 )
      {
        _InterlockedCompareExchange(v10, *(m_pAttributes + 16), v11);
        return;
      }
      if ( v11 == *(m_pAttributes + 20) )
        break;
      v9 = i & (v9 + 1);
    }
    while ( (i & v4) != v9 );
  }
}


// CBaseEntity::GetCollideable  (line 357, @0x0000000001eea040, libserver.so)
ICollideable *__fastcall CBaseEntity::GetCollideable(CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::PopulatePoseParameters  (line 362, @0x0000000001b500a0, libserver.so)
void __fastcall CBaseEntity::PopulatePoseParameters(CBaseEntity *const this)
{
  ;
}


// CBaseEntity::GetBaseModelEntity  (line 394, @0x0000000001eea050, libserver.so)
CBaseModelEntity *__fastcall CBaseEntity::GetBaseModelEntity(CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::GetBaseModelEntity  (line 395, @0x0000000001eea060, libserver.so)
const CBaseModelEntity *__fastcall CBaseEntity::GetBaseModelEntity(const CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::GetBaseAnimating  (line 398, @0x0000000001b500b0, libserver.so)
CBaseAnimating *__fastcall CBaseEntity::GetBaseAnimating(CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::GetBaseAnimating  (line 399, @0x0000000001b500c0, libserver.so)
const CBaseAnimating *__fastcall CBaseEntity::GetBaseAnimating(const CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::GetBaseAnimatingOverlay  (line 402, @0x0000000001b500d0, libserver.so)
CBaseAnimatingOverlay *__fastcall CBaseEntity::GetBaseAnimatingOverlay(CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::GetBaseAnimatingOverlay  (line 403, @0x0000000001b500e0, libserver.so)
const CBaseAnimatingOverlay *__fastcall CBaseEntity::GetBaseAnimatingOverlay(const CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::Classify  (line 406, @0x0000000001b500f0, libserver.so)
Class_T __fastcall CBaseEntity::Classify(CBaseEntity *const this)
{
  return Class_T::CLASS_NONE;
}


// CBaseEntity::ForceVPhysicsCollide  (line 457, @0x0000000001b50100, libserver.so)
bool __fastcall CBaseEntity::ForceVPhysicsCollide(CBaseEntity *const this, CBaseEntity *pEntity)
{
  return 0;
}


// CBaseEntity::GetRootPVSParent  (line 684, @0x0000000001b50ac0, libserver.so)
// calls: CBaseEntity::GetRootMoveParent
CBaseEntity *__fastcall CBaseEntity::GetRootPVSParent(const CBaseEntity *const this)
{
  return CBaseEntity::GetRootMoveParent(this);
}


// CBaseEntity::OnBoneTransformsChanged  (line 687, @0x0000000001b50110, libserver.so)
void __fastcall CBaseEntity::OnBoneTransformsChanged(CBaseEntity *const this)
{
  ;
}


// CBaseEntity::Script_GetTeamNumber  (line 692, @0x0000000001fb73e0, libserver.so)  // inlines: GetTeamNumber
int __fastcall CBaseEntity::Script_GetTeamNumber(const CBaseEntity *const this)
{
  return this->m_iTeamNum.m_Value;
}


// CBaseEntity::GetUseType  (line 715, @0x0000000001b50120, libserver.so)
CBaseEntity::UseType __fastcall CBaseEntity::GetUseType(CBaseEntity *const this, CBaseEntity *pActivator)
{
  return CBaseEntity::UseType::USE_NORMAL;
}


// CBaseEntity::GetGlowEntity  (line 717, @0x0000000001eea070, libserver.so)
CBaseModelEntity *__fastcall CBaseEntity::GetGlowEntity(CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::GetResponseSystem  (line 719, @0x0000000001b50130, libserver.so)
IResponseSystem *__fastcall CBaseEntity::GetResponseSystem(CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::IsSaveNonNetworkable  (line 742, @0x0000000001b50140, libserver.so)
bool __fastcall CBaseEntity::IsSaveNonNetworkable(CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::LoadSessionPersisterValues  (line 745, @0x0000000001b50150, libserver.so)
void __fastcall CBaseEntity::LoadSessionPersisterValues(CBaseEntity *const this, KeyValues *const kvPersisterKeys)
{
  ;
}


// CBaseEntity::ShouldDraw  (line 756, @0x0000000001eea080, libserver.so)
bool __fastcall CBaseEntity::ShouldDraw(CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::Script_Trigger  (line 790, @0x0000000001fc6c30, libserver.so)  // inlines: CVariantBase, Free, ~CVariantBase
// calls: CEntityInstance::AcceptInput, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CBaseEntity::Script_Trigger(CBaseEntity *const this)
{
  variant_t emptyVariant; // [rsp+0h] [rbp-20h] BYREF

  emptyVariant.m_type = 0;
  emptyVariant.m_flags = 0;
  emptyVariant.m_uint64 = 0;
  CEntityInstance::AcceptInput(this, "Trigger", 0, 0, &emptyVariant, 0);
  if ( (emptyVariant.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, emptyVariant.m_uint64);
}


// CBaseEntity::GetHammerUniqueID  (line 828, @0x0000000001b50160, libserver.so)
const char *__fastcall CBaseEntity::GetHammerUniqueID(const CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::RequiredEdictIndex  (line 839, @0x0000000001b50170, libserver.so)
CEntityIndex __fastcall CBaseEntity::RequiredEdictIndex(CBaseEntity *const this)
{
  return -1;
}


// CBaseEntity::FakeScriptThinkFunc  (line 852, @0x0000000001eea090, libserver.so)
void __fastcall CBaseEntity::FakeScriptThinkFunc(CBaseEntity *const this)
{
  ;
}


// CBaseEntity::DeathNotice  (line 899, @0x0000000001b50180, libserver.so)
void __fastcall CBaseEntity::DeathNotice(CBaseEntity *const this, CBaseEntity *pVictim)
{
  ;
}


// CBaseEntity::ShouldAttractAutoAim  (line 900, @0x0000000001b50190, libserver.so)
bool __fastcall CBaseEntity::ShouldAttractAutoAim(CBaseEntity *const this, CBaseEntity *pAimingEnt)
{
  return HIWORD(this->m_fFlags.m_Value) & 1;
}


// CBaseEntity::GetAutoAimCenter  (line 902, @0x0000000001b501a0, libserver.so)
Vector __fastcall CBaseEntity::GetAutoAimCenter(CBaseEntity *const this)
{
  return (*(this->_vptr_IHandleEntity + 62))(this);
}


// CBaseEntity::CanBeHitByMeleeAttack  (line 908, @0x0000000001b501c0, libserver.so)
bool __fastcall CBaseEntity::CanBeHitByMeleeAttack(CBaseEntity *const this, CBaseEntity *pAttacker)
{
  return 1;
}


// CBaseEntity::Event_KilledOther  (line 940, @0x0000000001b501d0, libserver.so)
void __fastcall CBaseEntity::Event_KilledOther(
        CBaseEntity *const this,
        CBaseEntity *pVictim,
        const CTakeDamageInfo *const info)
{
  ;
}


// CBaseEntity::IsTriggered  (line 942, @0x0000000001b501e0, libserver.so)
bool __fastcall CBaseEntity::IsTriggered(CBaseEntity *const this, CBaseEntity *pActivator)
{
  return 1;
}


// CBaseEntity::GetDelay  (line 944, @0x0000000001b501f0, libserver.so)
float __fastcall CBaseEntity::GetDelay(CBaseEntity *const this)
{
  return 0.0;
}


// CBaseEntity::OnControls  (line 953, @0x0000000001b50200, libserver.so)
bool __fastcall CBaseEntity::OnControls(CBaseEntity *const this, CBaseEntity *pControls)
{
  return 0;
}


// CBaseEntity::IsNetClient  (line 955, @0x0000000001b50210, libserver.so)
bool __fastcall CBaseEntity::IsNetClient(const CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::GetServerVehicle  (line 958, @0x0000000001b50220, libserver.so)
IServerVehicle *__fastcall CBaseEntity::GetServerVehicle(CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::CanStandOn  (line 969, @0x0000000001b50ad0, libserver.so)
// calls: CBaseEntity::IsStandable
bool __fastcall CBaseEntity::CanStandOn(const CBaseEntity *const this, CBaseEntity *pSurface)
{
  return pSurface == 0 || CBaseEntity::IsStandable(pSurface);
}


// CBaseEntity::GetEnemy  (line 970, @0x0000000001b50230, libserver.so)
CBaseEntity *__fastcall CBaseEntity::GetEnemy(const CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::GetPlayerName  (line 980, @0x0000000001b50240, libserver.so)
const char *__fastcall CBaseEntity::GetPlayerName(const CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::PullStart  (line 1010, @0x0000000001b50250, libserver.so)
void __fastcall CBaseEntity::PullStart(CBaseEntity *const this)
{
  ;
}


// CBaseEntity::StartBlocked  (line 1017, @0x0000000001b50260, libserver.so)
void __fastcall CBaseEntity::StartBlocked(CBaseEntity *const this, CBaseEntity *pOther)
{
  ;
}


// CBaseEntity::EndBlocked  (line 1019, @0x0000000001b50270, libserver.so)
void __fastcall CBaseEntity::EndBlocked(CBaseEntity *const this)
{
  ;
}


// CBaseEntity::MoveDone  (line 1040, @0x0000000001b50280, libserver.so)
void __fastcall CBaseEntity::MoveDone(CBaseEntity *const this)
{
  void (*pfn)(CGameEntity *); // rax
  CGameEntity *v2; // rdi

  pfn = this->m_pfnMoveDone.__pfn;
  if ( pfn != 0 )
  {
    v2 = (this + this->m_pfnMoveDone.__delta);
    if ( (pfn & 1) != 0 )
      (*(v2->_vptr_IHandleEntity + pfn - 1))();
    else
      pfn(v2);
  }
}


// CBaseEntity::ForceSimulation  (line 1064, @0x0000000001b502c0, libserver.so)
void __fastcall CBaseEntity::ForceSimulation(CBaseEntity *const this)
{
  ;
}


// CBaseEntity::PhysicsLandedOnGround  (line 1081, @0x0000000001b502d0, libserver.so)
void __fastcall CBaseEntity::PhysicsLandedOnGround(CBaseEntity *const this, double a2, float flFallingSpeed)
{
  ;
}


// CBaseEntity::ClothGetEntityInstanceSettings  (line 1115, @0x0000000001b502e0, libserver.so)
void *__fastcall CBaseEntity::ClothGetEntityInstanceSettings(CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::StopLoopingSounds  (line 1117, @0x0000000001b502f0, libserver.so)
void __fastcall CBaseEntity::StopLoopingSounds(CBaseEntity *const this)
{
  ;
}


// CBaseEntity::SUB_CallUseToggle  (line 1136, @0x0000000002179630, libserver.so)
void __fastcall CBaseEntity::SUB_CallUseToggle(CBaseEntity *const this)
{
  (*(this->_vptr_IHandleEntity + 108))(this, this, this, 3, 0.0);
}


// CBaseEntity::ShouldDrawWaterImpacts  (line 1163, @0x0000000001b50300, libserver.so)
bool __fastcall CBaseEntity::ShouldDrawWaterImpacts(CBaseEntity *const this)
{
  return 1;
}


// CBaseEntity::IsPlayer  (line 1177, @0x0000000001b50310, libserver.so)
bool __fastcall CBaseEntity::IsPlayer(const CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::IsControlledByPlayer  (line 1178, @0x0000000001b50320, libserver.so)
bool __fastcall CBaseEntity::IsControlledByPlayer(const CBaseEntity *const this)
{
  return (*(this->_vptr_IHandleEntity + 140))(this);
}


// CBaseEntity::IsHMDAvatar  (line 1179, @0x0000000001b50340, libserver.so)
bool __fastcall CBaseEntity::IsHMDAvatar(const CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::IsWorld  (line 1181, @0x0000000001b50350, libserver.so)
bool __fastcall CBaseEntity::IsWorld(const CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::IsNPC  (line 1186, @0x0000000001fb73f0, libserver.so)
bool __fastcall CBaseEntity::IsNPC(CBaseEntity *const this)
{
  return this->m_bIsNPC;
}


// CBaseEntity::IsBaseCombatCharacter  (line 1192, @0x0000000001b50360, libserver.so)
bool __fastcall CBaseEntity::IsBaseCombatCharacter(const CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::MyCombatCharacterPointer  (line 1193, @0x0000000001b50370, libserver.so)
CBaseCombatCharacter *__fastcall CBaseEntity::MyCombatCharacterPointer(CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::MyCombatCharacterPointer  (line 1194, @0x0000000001b50380, libserver.so)
const CBaseCombatCharacter *__fastcall CBaseEntity::MyCombatCharacterPointer(const CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::IsBaseCombatWeapon  (line 1196, @0x0000000001b50390, libserver.so)
bool __fastcall CBaseEntity::IsBaseCombatWeapon(const CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::MyCombatWeaponPointer  (line 1197, @0x0000000001b503a0, libserver.so)
CBaseCombatWeapon *__fastcall CBaseEntity::MyCombatWeaponPointer(CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::IsBaseObject  (line 1199, @0x0000000001b503b0, libserver.so)
bool __fastcall CBaseEntity::IsBaseObject(const CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::IsBaseTrain  (line 1201, @0x0000000001b503c0, libserver.so)
bool __fastcall CBaseEntity::IsBaseTrain(const CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::MyNextBotPointer  (line 1208, @0x0000000001b503d0, libserver.so)
INextBot *__fastcall CBaseEntity::MyNextBotPointer(CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::Respawn  (line 1214, @0x0000000001b503e0, libserver.so)
CBaseEntity *__fastcall CBaseEntity::Respawn(CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::IsLockedByMaster  (line 1218, @0x0000000001b503f0, libserver.so)
bool __fastcall CBaseEntity::IsLockedByMaster(CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::ModifyOrAppendDerivedCriteria  (line 1232, @0x0000000001b50400, libserver.so)
void __fastcall CBaseEntity::ModifyOrAppendDerivedCriteria(CBaseEntity *const this, CResponseCriteriaSet *const set)
{
  ;
}


// CBaseEntity::GetDamage  (line 1281, @0x0000000001b50410, libserver.so)
float __fastcall CBaseEntity::GetDamage(CBaseEntity *const this)
{
  return 0.0;
}


// CBaseEntity::SetDamage  (line 1282, @0x0000000001b50420, libserver.so)
void __fastcall CBaseEntity::SetDamage(CBaseEntity *const this, double a2, float flDamage)
{
  ;
}


// CBaseEntity::OnGroundChanged  (line 1368, @0x0000000001b50430, libserver.so)
void __fastcall CBaseEntity::OnGroundChanged(CBaseEntity *const this, CBaseEntity *oldGround, CBaseEntity *newGround)
{
  ;
}


// CBaseEntity::GetGroundVelocityToApply  (line 1371, @0x0000000001b50440, libserver.so)  // inlines: operator=
void __fastcall CBaseEntity::GetGroundVelocityToApply(CBaseEntity *const this, Vector *const vecGroundVel)
{
  *vecGroundVel = vec3_origin;
}


// CBaseEntity::CanBeSeenBy  (line 1400, @0x0000000001b50470, libserver.so)
bool __fastcall CBaseEntity::CanBeSeenBy(CBaseEntity *const this, CAI_BaseNPC *pNPC)
{
  return 1;
}


// CBaseEntity::OnSeenBy  (line 1403, @0x0000000001b50480, libserver.so)
CBaseEntity *__fastcall CBaseEntity::OnSeenBy(CBaseEntity *const this, CAI_BaseNPC *pNPC)
{
  return this;
}


// CBaseEntity::PhysicsSplash  (line 1405, @0x0000000001b50490, libserver.so)
__int64 __fastcall CBaseEntity::PhysicsSplash(
        CBaseEntity *const this,
        const Vector *const centerPoint,
        const Vector *const normal,
        float rawSpeed,
        float scaledSpeed)
{
  return 0;
}


// CBaseEntity::Splash  (line 1406, @0x0000000001b504a0, libserver.so)
void __fastcall CBaseEntity::Splash(CBaseEntity *const this)
{
  ;
}


// CBaseEntity::CanPushEntity  (line 1539, @0x0000000001b504b0, libserver.so)
bool __fastcall CBaseEntity::CanPushEntity(const CBaseEntity *const this, CBaseEntity *other)
{
  return 1;
}


// CBaseEntity::HasPhysicsAttacker  (line 1542, @0x0000000001b504c0, libserver.so)
CBasePlayer *__fastcall CBaseEntity::HasPhysicsAttacker(CBaseEntity *const this, double a2, float dt)
{
  return 0;
}


// CBaseEntity::OnCreatedServerRagdoll  (line 1546, @0x0000000001b504d0, libserver.so)
void __fastcall CBaseEntity::OnCreatedServerRagdoll(CBaseEntity *const this, CBaseModelEntity *pRagdoll)
{
  ;
}


// CBaseEntity::Cm_vecVelocityInitializer::NetworkStateChanged  (line 1703, @0x0000000002179650, libserver.so)
void __fastcall CBaseEntity::Cm_vecVelocityInitializer::NetworkStateChanged(
        CBaseEntity::Cm_vecVelocityInitializer *const this,
        void *ptr,
        int32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  bool v6; // zf
  __int64 v7; // rax
  CBaseEntity::Cm_vecVelocityInitializer *v8; // rdi

  v6 = *(this - 30) == 0;
  v7 = *(this - 63);
  v8 = this - 63;
  if ( !v6 )
    nLocalOffset = 0;
  (*(v7 + 176))(v8, (nLocalOffset + ptr - v8), nArrayIndex, nPathIndex.m_Value);
}


// CBaseEntity::Cm_vecVelocityInitializer::NetworkStateChangedLog  (line 1703, @0x0000000002179690, libserver.so)
// strings: "m_vecVelocity"
void __fastcall CBaseEntity::Cm_vecVelocityInitializer::NetworkStateChangedLog(
        const CBaseEntity::Cm_vecVelocityInitializer *const this,
        const char *pMsg)
{
  (*(*(this - 63) + 184LL))(this - 63, "m_vecVelocity", pMsg);
}


// CBaseEntity::Spawn  (line 1807, @0x0000000001b504e0, libserver.so)
bool __fastcall CBaseEntity::Spawn(CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::Precache  (line 1810, @0x0000000001b504f0, libserver.so)
int __fastcall CBaseEntity::Precache(CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::OnParseMapDataFinished  (line 1811, @0x0000000001b50500, libserver.so)
bool __fastcall CBaseEntity::OnParseMapDataFinished(CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::ShouldPrecache  (line 1812, @0x0000000001b50510, libserver.so)
void __fastcall CBaseEntity::ShouldPrecache(CBaseEntity *const this)
{
  ;
}


// CBaseEntity::SetName  (line 1815, @0x0000000001b50520, libserver.so)
__int64 __fastcall CBaseEntity::SetName(CBaseEntity *const this, string_t newTarget)
{
  return 0;
}


// CBaseEntity::PreFirstNetworkUpdate  (line 1819, @0x0000000001b50530, libserver.so)
void __fastcall CBaseEntity::PreFirstNetworkUpdate(CBaseEntity *const this)
{
  ;
}


// CBaseEntity::KeyValue  (line 1822, @0x0000000001b50540, libserver.so)
float __fastcall CBaseEntity::KeyValue(CBaseEntity *const this, CUtlStringToken szKeyName, const char *szValue)
{
  return 0.0;
}


// CBaseEntity::KeyValue  (line 1823, @0x0000000001b50550, libserver.so)
float __fastcall CBaseEntity::KeyValue(CBaseEntity *const this, CUtlStringToken szKeyName, double a3, float flValue)
{
  return 0.0;
}


// CBaseEntity::KeyValue  (line 1824, @0x0000000001b50560, libserver.so)
float __fastcall CBaseEntity::KeyValue(
        CBaseEntity *const this,
        CUtlStringToken szKeyName,
        const Vector *const vecValue)
{
  return 0.0;
}


// CBaseEntity::GetKeyValue  (line 1825, @0x0000000001b50570, libserver.so)
void __fastcall CBaseEntity::GetKeyValue(CBaseEntity *const this, const char *szKeyName, char *szValue, int iMaxLen)
{
  ;
}


// CBaseEntity::PostConstructor  (line 1828, @0x0000000001b50580, libserver.so)
bool __fastcall CBaseEntity::PostConstructor(CBaseEntity *const this, const char *szClassname)
{
  return 0;
}


// CBaseEntity::ModifyEconParticles  (line 1836, @0x0000000001b50590, libserver.so)
void __fastcall CBaseEntity::ModifyEconParticles(CBaseEntity *const this, int iIndex, Color *pDefaultColor)
{
  ;
}


// CBaseEntity::ScriptGetAbsOrigin  (line 1838, @0x0000000001fb9d80, libserver.so)
// calls: CBaseEntity::GetAbsOrigin
Vector __fastcall CBaseEntity::ScriptGetAbsOrigin(CBaseEntity *const this)
{
  const Vector *AbsOrigin; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  *&result.x = *&AbsOrigin->x;
  result.z = AbsOrigin->z;
  return result;
}


// CServerOnlyEntity::~CServerOnlyEntity  (line 1924, @0x0000000002180f20, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CServerOnlyEntity::~CServerOnlyEntity(CServerOnlyEntity *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CServerOnlyEntity::~CServerOnlyEntity  (line 1924, @0x0000000002180f40, libserver.so)  // inlines: operator delete, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CServerOnlyEntity::~CServerOnlyEntity(CServerOnlyEntity *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this);
}


// CServerOnlyEntity::CEntityInstanceEntityClass::DestructInstance  (line 1926, @0x0000000001eea0a0, libserver.so)  // inlines: Destruct<CServerOnlyEntity>
void __fastcall CServerOnlyEntity::CEntityInstanceEntityClass::DestructInstance(
        CServerOnlyEntity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CServerOnlyEntity::CEntityInstanceEntityClass::FreeInstance  (line 1926, @0x0000000001eea0c0, libserver.so)
void __fastcall CServerOnlyEntity::CEntityInstanceEntityClass::FreeInstance(
        CServerOnlyEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CServerOnlyEntity::CEntityInstanceEntityClass::CanAllocate  (line 1926, @0x0000000001eea0e0, libserver.so)
bool __fastcall CServerOnlyEntity::CEntityInstanceEntityClass::CanAllocate(
        const CServerOnlyEntity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CServerOnlyEntity::CEntityInstanceEntityClass::AllocateInstance  (line 1926, @0x0000000001eebce0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CServerOnlyEntity::CEntityInstanceEntityClass::AllocateInstance(
        CServerOnlyEntity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 776);
  memset(v1, 0, 0x308u);
  return v1;
}


// CServerOnlyEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1926, @0x0000000001eec2e0, libserver.so)  // inlines: Schema_StaticBinding
// calls: CServerOnlyEntity::Schema_VerifyBindingIsRegistered
const ISchemaBinding *__fastcall CServerOnlyEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CServerOnlyEntity::CEntityInstanceEntityClass *const this)
{
  CServerOnlyEntity::Schema_VerifyBindingIsRegistered();
  return CServerOnlyEntity::s_pSchemaBinding;
}


// CServerOnlyEntity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1926, @0x0000000001eec300, libserver.so)
// calls: CServerOnlyEntity::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CServerOnlyEntity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CServerOnlyEntity::CEntityInstanceEntityClass *const this)
{
  CServerOnlyEntity::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered();
  return CServerOnlyEntity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CServerOnlyEntity::CEntityInstanceEntityClass::ConstructInstance  (line 1926, @0x0000000001eec320, libserver.so)  // inlines: CServerOnlyEntity, Construct<CServerOnlyEntity>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CServerOnlyEntity::CEntityInstanceEntityClass::ConstructInstance(
        CServerOnlyEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_4005410;
  }
  return p;
}


// CServerOnlyEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1926, @0x0000000001eed9a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CServerOnlyEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CServerOnlyEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CServerOnlyEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1926, @0x0000000001eed9c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CServerOnlyEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CServerOnlyEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CServerOnlyEntity::GetEntityClassInfo  (line 1926, @0x0000000001fc3e50, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release
// callers: CServerOnlyPointEntity::GetEntityClassInternal, CLogicalEntity::GetEntityClassInternal, CParticleLight::GetEntityClassInternal, CInfoData::GetEntityClassInternal, CPointPrefab::GetEntityClassInternal, CPointTemplate::GetEntityClassInternal, CPointTemplate::CEntityInstanceEntityClass::InitOptionalTables
// strings: "CServerOnlyEntity", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo, CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo, CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo
CEntityClassInfo *__cdecl CServerOnlyEntity::GetEntityClassInfo()
{
  if ( `guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo != 0 )
    return &CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo) == 0 )
    return &CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo;
  if ( `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo) != 0 )
  {
    if ( `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo) != 0 )
    {
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo,
        "CGameEntity",
        0,
        0,
        &g_EntityRootClassInfo);
      __cxa_guard_release(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo,
      "CBaseEntity",
      0,
      0,
      &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo,
    "CServerOnlyEntity",
    0,
    0,
    &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo);
  return &CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo;
}


// CServerOnlyEntity::GetEntityClassInternal  (line 1926, @0x0000000001fcb2b0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CBaseEntity>, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_01.cpp, _GLOBAL__sub_I__unity_base_01.cpp
// strings: "CServerOnlyEntity"
// globals: `guard variable for'CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass, CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CServerOnlyEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo, CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo
CEntityClass *__cdecl CServerOnlyEntity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass) != 0 )
  {
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_designerName.u.m_Id = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass._vptr_CEntityClass = off_3F79390;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_ComponentOffsets.m_Size = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_AllHelpers.m_Size = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_instanceUnserializer.m_atomicFields,
      4);
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_classInputs.m_Size = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_classInputs.m_Memory.m_pMemory = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_classOutputs.m_Size = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_requiredEHandle.m_Index = -1;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_hNetworkSerializer = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_pBaseClassInfo = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_pClassInfo = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_flags = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_nAllHelpersFlags = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_pScriptClassDesc = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_pInputs = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_nInputCount = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_pOutputs = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_nOutputCount = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_pGameClass = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass._vptr_CEntityClass = off_3FB60F0;
    __cxa_guard_release(&`guard variable for'CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass);
    __cxa_atexit(
      CServerOnlyEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass,
      &_dso_handle);
  }
  if ( g_pEntityCServerOnlyEntityClass != 0 )
    return &CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass;
  if ( `guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo,
      "CServerOnlyEntity",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo);
  }
  CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_pClassInfo = &CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo;
  CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_pBaseClassInfo = CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo.m_pBaseClassInfo;
  g_pEntityCServerOnlyEntityClass = &CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass;
  CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo.m_pClass = &CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass;
  CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_pScriptClassDesc = GetScriptDesc<CBaseEntity>(0);
  g_pEntityCServerOnlyEntityClass->m_pComponentOverrides = 0;
  return &CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass;
}


// CServerOnlyEntity::GetEntityClass  (line 1926, @0x00000000021796c0, libserver.so)
CEntityClass *__cdecl CServerOnlyEntity::GetEntityClass()
{
  return g_pEntityCServerOnlyEntityClass;
}


// CServerOnlyEntity::Schema_DynamicBinding  (line 1926, @0x000000000217b320, libserver.so)
// calls: CServerOnlyEntity::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CServerOnlyEntity::Schema_DynamicBinding(const CServerOnlyEntity *const this)
{
  CServerOnlyEntity::Schema_VerifyBindingIsRegistered();
  return CServerOnlyEntity::s_pSchemaBinding;
}


// CServerOnlyEntity::ObjectCaps  (line 1929, @0x0000000001eec420, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CServerOnlyEntity::ObjectCaps(CServerOnlyEntity *const this)
{
  int result; // eax

  result = CBaseEntity::ObjectCaps(this);
  LOBYTE(result) = result & 0x7F;
  return result;
}


// CServerOnlyPointEntity::~CServerOnlyPointEntity  (line 1937, @0x0000000002180f80, libserver.so)  // inlines: ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CServerOnlyPointEntity::~CServerOnlyPointEntity(CServerOnlyPointEntity *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CServerOnlyPointEntity::~CServerOnlyPointEntity  (line 1937, @0x0000000002180fa0, libserver.so)  // inlines: operator delete, ~CServerOnlyEntity, ~CServerOnlyPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CServerOnlyPointEntity::~CServerOnlyPointEntity(CServerOnlyPointEntity *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this);
}


// CServerOnlyPointEntity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1939, @0x0000000001fb7400, libserver.so)
// globals: CServerOnlyPointEntity::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CServerOnlyPointEntity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CServerOnlyPointEntity::CEntityInstanceEntityClass *const this)
{
  return CServerOnlyPointEntity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CServerOnlyPointEntity::CEntityInstanceEntityClass::DestructInstance  (line 1939, @0x0000000001fb7410, libserver.so)  // inlines: Destruct<CServerOnlyPointEntity>
void __fastcall CServerOnlyPointEntity::CEntityInstanceEntityClass::DestructInstance(
        CServerOnlyPointEntity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CServerOnlyPointEntity::CEntityInstanceEntityClass::FreeInstance  (line 1939, @0x0000000001fb7430, libserver.so)
void __fastcall CServerOnlyPointEntity::CEntityInstanceEntityClass::FreeInstance(
        CServerOnlyPointEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CServerOnlyPointEntity::CEntityInstanceEntityClass::CanAllocate  (line 1939, @0x0000000001fb7450, libserver.so)
bool __fastcall CServerOnlyPointEntity::CEntityInstanceEntityClass::CanAllocate(
        const CServerOnlyPointEntity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CServerOnlyPointEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1939, @0x0000000001fb7460, libserver.so)
// globals: CServerOnlyPointEntity::s_pSchemaBinding
const ISchemaBinding *__fastcall CServerOnlyPointEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CServerOnlyPointEntity::CEntityInstanceEntityClass *const this)
{
  return CServerOnlyPointEntity::s_pSchemaBinding;
}


// CServerOnlyPointEntity::CEntityInstanceEntityClass::AllocateInstance  (line 1939, @0x0000000001fb98a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CServerOnlyPointEntity::CEntityInstanceEntityClass::AllocateInstance(
        CServerOnlyPointEntity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 776);
  memset(v1, 0, 0x308u);
  return v1;
}


// CServerOnlyPointEntity::CEntityInstanceEntityClass::ConstructInstance  (line 1939, @0x0000000001fb9c90, libserver.so)  // inlines: CServerOnlyEntity, CServerOnlyPointEntity, Construct<CServerOnlyPointEntity>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CServerOnlyPointEntity::CEntityInstanceEntityClass::ConstructInstance(
        CServerOnlyPointEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_4005AB0;
  }
  return p;
}


// CServerOnlyPointEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1939, @0x0000000001fbd620, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CServerOnlyPointEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CServerOnlyPointEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CServerOnlyPointEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1939, @0x0000000001fbd640, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CServerOnlyPointEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CServerOnlyPointEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CServerOnlyPointEntity::GetEntityClassInternal  (line 1939, @0x0000000001fcb5f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CBaseEntity>, CServerOnlyEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_01.cpp
// strings: "CServerOnlyPointEntity"
// globals: `guard variable for'CServerOnlyPointEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyPointEntityClass, CServerOnlyPointEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyPointEntityClass, __dso_handle, CServerOnlyPointEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CServerOnlyPointEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyPointEntityClassInfo, CServerOnlyPointEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyPointEntityClassInfo
CEntityClass *__cdecl CServerOnlyPointEntity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CServerOnlyPointEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyPointEntityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CServerOnlyPointEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyPointEntityClass) != 0 )
  {
    CEntityClass::CEntityClass(&CServerOnlyPointEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyPointEntityClass);
    CServerOnlyPointEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyPointEntityClass._vptr_CEntityClass = off_3FD0390;
    __cxa_guard_release(&`guard variable for'CServerOnlyPointEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyPointEntityClass);
    __cxa_atexit(
      CServerOnlyPointEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CServerOnlyPointEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyPointEntityClass,
      &_dso_handle);
  }
  if ( g_pEntityCServerOnlyPointEntityClass != 0 )
    return &CServerOnlyPointEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyPointEntityClass;
  if ( `guard variable for'CServerOnlyPointEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyPointEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CServerOnlyPointEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyPointEntityClassInfo) != 0 )
  {
    EntityClassInfo = CServerOnlyEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CServerOnlyPointEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyPointEntityClassInfo,
      "CServerOnlyPointEntity",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CServerOnlyPointEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyPointEntityClassInfo);
  }
  CServerOnlyPointEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyPointEntityClass.m_pClassInfo = &CServerOnlyPointEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyPointEntityClassInfo;
  CServerOnlyPointEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyPointEntityClass.m_pBaseClassInfo = CServerOnlyPointEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyPointEntityClassInfo.m_pBaseClassInfo;
  g_pEntityCServerOnlyPointEntityClass = &CServerOnlyPointEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyPointEntityClass;
  CServerOnlyPointEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyPointEntityClassInfo.m_pClass = &CServerOnlyPointEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyPointEntityClass;
  CServerOnlyPointEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyPointEntityClass.m_pScriptClassDesc = GetScriptDesc<CBaseEntity>(0);
  g_pEntityCServerOnlyPointEntityClass->m_pComponentOverrides = 0;
  return &CServerOnlyPointEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyPointEntityClass;
}


// CServerOnlyPointEntity::GetEntityClass  (line 1939, @0x00000000021796d0, libserver.so)
CEntityClass *__cdecl CServerOnlyPointEntity::GetEntityClass()
{
  return g_pEntityCServerOnlyPointEntityClass;
}


// CServerOnlyPointEntity::Schema_DynamicBinding  (line 1939, @0x000000000217b340, libserver.so)
// calls: CServerOnlyPointEntity::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CServerOnlyPointEntity::Schema_DynamicBinding(
        const CServerOnlyPointEntity *const this)
{
  CServerOnlyPointEntity::Schema_VerifyBindingIsRegistered();
  return CServerOnlyPointEntity::s_pSchemaBinding;
}


// CLogicalEntity::~CLogicalEntity  (line 1950, @0x0000000001eec7a0, libserver.so)  // inlines: ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CLogicalEntity::~CLogicalEntity(CLogicalEntity *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CLogicalEntity::~CLogicalEntity  (line 1950, @0x0000000001eec7c0, libserver.so)  // inlines: ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CLogicalEntity::~CLogicalEntity(CLogicalEntity *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CLogicalEntity::CEntityInstanceEntityClass::DestructInstance  (line 1952, @0x0000000001eea0f0, libserver.so)  // inlines: Destruct<CLogicalEntity>
void __fastcall CLogicalEntity::CEntityInstanceEntityClass::DestructInstance(
        CLogicalEntity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CLogicalEntity::CEntityInstanceEntityClass::FreeInstance  (line 1952, @0x0000000001eea110, libserver.so)
void __fastcall CLogicalEntity::CEntityInstanceEntityClass::FreeInstance(
        CLogicalEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CLogicalEntity::CEntityInstanceEntityClass::CanAllocate  (line 1952, @0x0000000001eea130, libserver.so)
bool __fastcall CLogicalEntity::CEntityInstanceEntityClass::CanAllocate(
        const CLogicalEntity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CLogicalEntity::CEntityInstanceEntityClass::AllocateInstance  (line 1952, @0x0000000001eebd20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CLogicalEntity::CEntityInstanceEntityClass::AllocateInstance(
        CLogicalEntity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 776);
  memset(v1, 0, 0x308u);
  return v1;
}


// CLogicalEntity::CEntityInstanceEntityClass::ConstructInstance  (line 1952, @0x0000000001eec360, libserver.so)  // inlines: CLogicalEntity, CServerOnlyEntity, Construct<CLogicalEntity>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CLogicalEntity::CEntityInstanceEntityClass::ConstructInstance(
        CLogicalEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_3FB6BB0;
  }
  return p;
}


// CLogicalEntity::Schema_DynamicBinding  (line 1952, @0x0000000001eec460, libserver.so)
// calls: CLogicalEntity::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CLogicalEntity::Schema_DynamicBinding(const CLogicalEntity *const this)
{
  CLogicalEntity::Schema_VerifyBindingIsRegistered();
  return CLogicalEntity::s_pSchemaBinding;
}


// CLogicalEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1952, @0x0000000001eec480, libserver.so)  // inlines: Schema_StaticBinding
// calls: CLogicalEntity::Schema_VerifyBindingIsRegistered
const ISchemaBinding *__fastcall CLogicalEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CLogicalEntity::CEntityInstanceEntityClass *const this)
{
  CLogicalEntity::Schema_VerifyBindingIsRegistered();
  return CLogicalEntity::s_pSchemaBinding;
}


// CLogicalEntity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1952, @0x0000000001eec4a0, libserver.so)
// calls: CLogicalEntity::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CLogicalEntity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CLogicalEntity::CEntityInstanceEntityClass *const this)
{
  CLogicalEntity::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered();
  return CLogicalEntity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CLogicalEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1952, @0x0000000001eed9f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CLogicalEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicalEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CLogicalEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1952, @0x0000000001eeda10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CLogicalEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicalEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CLogicalEntity::GetEntityClassInfo  (line 1952, @0x0000000001eeffd0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseEntity::GetEntityClassInfo
// callers: CMultiLightProxy::GetEntityClassInternal, CLogicRelay::GetEntityClassInternal, CLogicBranch::GetEntityClassInternal, CEnvFade::GetEntityClassInternal, CLogicMeasureMovement::GetEntityClassInternal, CLogicNavigation::GetEntityClassInternal, CLogicPlayerProxy::GetEntityClassInternal, CTimerEntity::GetEntityClassInternal, CLogicLineToEntity::GetEntityClassInternal, CMathRemap::GetEntityClassInternal, CMathColorBlend::GetEntityClassInternal, CEnvGlobal::GetEntityClassInternal (25 total)
// strings: "CLogicalEntity", "CServerOnlyEntity"
// globals: `guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo, CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo, `guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo, CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo
CEntityClassInfo *__cdecl CLogicalEntity::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo != 0 )
    return &CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo) == 0 )
    return &CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo;
  if ( `guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo,
      "CServerOnlyEntity",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo,
    "CLogicalEntity",
    0,
    0,
    &CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo);
  return &CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo;
}


// CLogicalEntity::GetEntityClassInternal  (line 1952, @0x0000000001fcb730, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CBaseEntity>, CServerOnlyEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_01.cpp
// strings: "CLogicalEntity"
// globals: `guard variable for'CLogicalEntity::GetEntityClassInternal(void)::g_EntityCLogicalEntityClass, CLogicalEntity::GetEntityClassInternal(void)::g_EntityCLogicalEntityClass, __dso_handle, CLogicalEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo, CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo
CEntityClass *__cdecl CLogicalEntity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CLogicalEntity::GetEntityClassInternal(void)::g_EntityCLogicalEntityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicalEntity::GetEntityClassInternal(void)::g_EntityCLogicalEntityClass) != 0 )
  {
    CEntityClass::CEntityClass(&CLogicalEntity::GetEntityClassInternal(void)::g_EntityCLogicalEntityClass);
    CLogicalEntity::GetEntityClassInternal(void)::g_EntityCLogicalEntityClass._vptr_CEntityClass = off_3FB6170;
    __cxa_guard_release(&`guard variable for'CLogicalEntity::GetEntityClassInternal(void)::g_EntityCLogicalEntityClass);
    __cxa_atexit(
      CLogicalEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CLogicalEntity::GetEntityClassInternal(void)::g_EntityCLogicalEntityClass,
      &_dso_handle);
  }
  if ( g_pEntityCLogicalEntityClass != 0 )
    return &CLogicalEntity::GetEntityClassInternal(void)::g_EntityCLogicalEntityClass;
  if ( `guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo) != 0 )
  {
    EntityClassInfo = CServerOnlyEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo,
      "CLogicalEntity",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo);
  }
  CLogicalEntity::GetEntityClassInternal(void)::g_EntityCLogicalEntityClass.m_pClassInfo = &CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo;
  CLogicalEntity::GetEntityClassInternal(void)::g_EntityCLogicalEntityClass.m_pBaseClassInfo = CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo.m_pBaseClassInfo;
  g_pEntityCLogicalEntityClass = &CLogicalEntity::GetEntityClassInternal(void)::g_EntityCLogicalEntityClass;
  CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo.m_pClass = &CLogicalEntity::GetEntityClassInternal(void)::g_EntityCLogicalEntityClass;
  CLogicalEntity::GetEntityClassInternal(void)::g_EntityCLogicalEntityClass.m_pScriptClassDesc = GetScriptDesc<CBaseEntity>(0);
  g_pEntityCLogicalEntityClass->m_pComponentOverrides = 0;
  return &CLogicalEntity::GetEntityClassInternal(void)::g_EntityCLogicalEntityClass;
}


// CLogicalEntity::GetEntityClass  (line 1952, @0x00000000021796e0, libserver.so)
CEntityClass *__cdecl CLogicalEntity::GetEntityClass()
{
  return g_pEntityCLogicalEntityClass;
}


// Server_EHandleToInt  (line 1999, @0x00000000025e5e40 libserver.so, @0x00000000026575c0 libserver.so, @0x00000000027a92e0 libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToNetworkableInt, operator CEntityInstance*
// callers: CDOTA_Buff::MakeEntry, CDOTA_Buff::SendBuffRemovalToClients
// globals: CEntityHandle::gm_pEntityList
uint32 __fastcall Server_EHandleToInt(const EHANDLE *const hIn)
{
  uint32 result; // eax
  uint32 m_Index; // edx
  __int16 v3; // si
  int v4; // edi
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx

  result = 0xFFFFFF;
  m_Index = hIn->m_Index;
  if ( hIn->m_Index + 2 > 1 )
  {
    v3 = hIn->m_Index;
    v4 = hIn->m_Index & 0x7FFF;
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[v4 >> 9];
    if ( v5 != 0 )
    {
      v6 = &v5[v3 & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index && v6->m_pInstance != 0 )
        return v4 | (m_Index >> 1) & 0xFFC000;
    }
  }
  return result;
}


// CBaseEntity::Instance  (line 2139, @0x0000000001f83f30, libserver.so)  // inlines: GetInstance, IndexToIdentity, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex
// callers: CCustomGameEventManager::ReceiveClientMsgCustomGameEvent, CSource2GameClients::ClientPutInServer, CSource2GameClients::ProcessUsercmds, CSource2GameClients::ClientSetupVisibility, CRagdollProp::VPhysicsCollision, CBasePlayer::WaterMove, CBasePlayer::EntSelectSpawnPoint, CDOTAGamerules::ClientDisconnected
CBaseEntity *__fastcall CBaseEntity::Instance(CEntityIndex iEnt)
{
  CBaseEntity *result; // rax
  CEntityIdentity *v2; // rcx
  CEntityIdentity *v3; // rdx
  __int64 v4; // [rsp-8h] [rbp-8h]

  result = 0;
  if ( iEnt.m_Data <= 0x7FFE )
  {
    v2 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[iEnt.m_Data >> 9];
    if ( v2 != 0 )
    {
      v3 = &v2[iEnt.m_Data & 0x1FF];
      if ( v3 != 0 )
      {
        *(&v4 - 8) = v3->m_EHandle.m_Index;
        if ( (*(&v4 - 2) & 0x7FFF) == iEnt.m_Data )
          return v3->m_pInstance;
      }
    }
  }
  return result;
}


// CBaseEntity::ScriptGetModelName  (line 2197, @0x0000000001fb7470, libserver.so)  // inlines: CUtlSymbolLarge, GetModelName, GetSkeletonInstance
const char *__fastcall CBaseEntity::ScriptGetModelName(const CBaseEntity *const this)
{
  const char *v1; // rdx
  const char *result; // rax

  v1 = *((*(this->m_CBodyComponent->m_pSceneNode->_vptr_CGameSceneNode + 9))(this->m_CBodyComponent->m_pSceneNode) + 488);
  result = "";
  if ( v1 != 0 )
    return v1;
  return result;
}


// CBaseEntity::GetAIAddOn  (line 2211, @0x0000000001b505a0, libserver.so)  // inlines: CUtlSymbolLarge
string_t __fastcall CBaseEntity::GetAIAddOn(UtlSymLargeId_t *a1, const CBaseEntity *const this)
{
  *a1 = this->m_AIAddOn.u.m_Id;
  return a1;
}


// CBaseEntity::GetDistanceToEntity  (line 2218, @0x0000000002812ac0, libserver.so)  // inlines: FastSqrt, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CBaseEntity::GetAbsOrigin
// callers: CDOTA_BotMode_Attack::GetAttackScore, CDOTA_BotMode_DefendTower::Think, CDOTA_BotMode_Roam::GetDesire, CDOTA_BotMode_Laning::Think, CDOTA_BotMode_PushTower::Think, CDOTA_BotMode_Roshan::Think, CDOTA_BotMode_Roam::GetRoamScore, CDOTA_Bot_AbilityUsage_Juggernaut_BladeFury::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Lich_DarkRitual::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Necrolyte_DeathPulse::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Sniper_Assassinate::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Tidehunter_Gush::GetCurrentUsageDesire (16 total)
float __fastcall CBaseEntity::GetDistanceToEntity(const CBaseEntity *const this, const CBaseEntity *other)
{
  const Vector *AbsOrigin; // rbx
  const Vector *v4; // rax

  if ( other == 0 )
    return -1.0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(other);
  v4 = CBaseEntity::GetAbsOrigin(this);
  return fsqrt(
           (((v4->x - AbsOrigin->x) * (v4->x - AbsOrigin->x)) + ((v4->y - AbsOrigin->y) * (v4->y - AbsOrigin->y)))
         + ((v4->z - AbsOrigin->z) * (v4->z - AbsOrigin->z)));
}


// CBaseEntity::NetworkStateChanged  (line 2271, @0x0000000001b51480, libserver.so)  // inlines: ClearAll, SetChangeInfoSerialNumber, StateChanged, curtime, memset
void __fastcall CBaseEntity::NetworkStateChanged(CBaseEntity *const this)
{
  CEventRegister *m_pTimerEvent; // rax
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v4; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  m_pTimerEvent = this->m_NetworkTransmitComponent.m_pTimerEvent;
  if ( m_pTimerEvent != 0 && m_pTimerEvent->m_bRegistered )
  {
    this->m_NetworkTransmitComponent.m_bPendingStateChange = 1;
  }
  else
  {
    this->m_NetworkTransmitComponent.m_nStateFlags |= 3u;
    this->m_NetworkTransmitComponent.m_Accessor.m_iChangeInfoSerialNumber = 0;
  }
  m_flCurrentTime = 0.0;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v4->m_flCurrentTime;
  }
  this->m_lastNetworkChange = m_flCurrentTime;
  this->m_isSteadyState = 0;
}


// CBaseEntity::NetworkStateChanged  (line 2281, @0x0000000001b50af0, libserver.so)
// calls: CNetworkTransmitComponent::StateChanged
// callers: CBaseClientUIEntity::CBaseClientUIEntity, CPointClientUIWorldPanel::CPointClientUIWorldPanel, CDevtestHierarchy::CDevtestHierarchy, CTonemapController2::CTonemapController2, CEnvCombinedLightProbeVolume::CEnvCombinedLightProbeVolume, CEnvCubemap::CEnvCubemap, CEnvLightProbeVolume::CEnvLightProbeVolume, CBaseVRHandAttachment::CBaseVRHandAttachment, CBaseViewModel::CBaseViewModel, CColorCorrection::CColorCorrection, CColorCorrectionVolume::CColorCorrectionVolume, CPrecipitation::CPrecipitation (51 total)
void __fastcall CBaseEntity::NetworkStateChanged(
        CBaseEntity *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  CNetworkTransmitComponent::StateChanged(
    &this->m_NetworkTransmitComponent,
    this,
    nLocalOffset,
    nArrayIndex,
    nPathIndex);
}


// CBaseEntity::AddChangeAccessorPath  (line 2288, @0x0000000001b50b10, libserver.so)
// calls: CNetworkTransmitComponent::AddChangeAccessorPath
ChangeAccessorFieldPathIndex_t __fastcall CBaseEntity::AddChangeAccessorPath(
        CBaseEntity *const this,
        const CFieldPath *const path)
{
  return CNetworkTransmitComponent::AddChangeAccessorPath(&this->m_NetworkTransmitComponent, this, path);
}


