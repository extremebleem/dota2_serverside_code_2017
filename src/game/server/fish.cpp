// Reconstructed from DWARF by pahole; not original source.

// src/game/server/fish.cpp:63
class C_CFish_MapInstall {
	C_CFish_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFish::GetDataDescMap  (line 28, @0x00000000021ee940, libserver.so)
// globals: CFish::m_DataMap
datamap_t *__fastcall CFish::GetDataDescMap(CFish *const this)
{
  return &CFish::m_DataMap;
}


// CFish::AddDatadescMetadataKeys  (line 28, @0x00000000021fec70, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFish::GetEntityClass(void)
void __fastcall CFish::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFish::GetEntityClass);
}


// CFish::GetBaseMap  (line 28, @0x00000000021fec90, libserver.so)
datamap_t *__cdecl CFish::GetBaseMap()
{
  return &CBaseAnimating::m_DataMap;
}


// DataMapInit<CFish>  (line 28, @0x00000000021feca0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CFish"
// globals: `guard variable for'DataMapInit<CFish>(CFish *)::nameHolder, CFish::GetEntityClass(void), CFish::m_DataMap, DataMapInit<CFish>(CFish *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFish>(CFish *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFish>(CFish *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFish>(CFish *)::nameHolder) != 0 )
  {
    DataMapInit<CFish>(CFish *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFish>(CFish *)::nameHolder.m_pszBase = "CFish";
    DataMapInit<CFish>(CFish *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFish>(CFish *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFish>(CFish *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFish>(CFish *)::nameHolder.m_nLenBase = 5;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFish>(CFish *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFish>(CFish *)::nameHolder,
      &_dso_handle);
  }
  CFish::m_DataMap.dataNumFields = 24;
  CFish::m_DataMap.baseMap = &CBaseAnimating::m_DataMap;
  CFish::m_DataMap.dataDesc = &DataMapInit<CFish>(CFish *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFish::m_DataMap, CFish::GetEntityClass);
  return &CFish::m_DataMap;
}


// CFish::YouForgotToImplementOrDeclareServerClass  (line 63, @0x00000000021ee950, libserver.so)
int __fastcall CFish::YouForgotToImplementOrDeclareServerClass(CFish *const this)
{
  return 0;
}


// CFish::GetServerClass  (line 63, @0x00000000021f46f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CFish::GetServerClass(CFish *const this)
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


// CFish::CFish  (line 69, @0x00000000021fed70, libserver.so)  // inlines: CEntityHandle, CHandle, CNetworkVarBase, CNetworkVectorBase, CUtlMemory, CUtlVector, CUtlVectorBase, EnsureValidValue, EnsureValidValue<float>, Zero, ~CBaseAnimating
// calls: CBaseAnimating::CBaseAnimating, CountdownTimer::CountdownTimer, CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume
// callers: CFish::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CFish::CFish(CFish *const this)
{
  CBaseAnimating::CBaseAnimating(this);
  this->m_pool.m_Index = -1;
  this->_vptr_IHandleEntity = &off_403BC30;
  this->m_x.m_Value = 0.0;
  this->m_y.m_Value = 0.0;
  this->m_z.m_Value = 0.0;
  this->m_angle.m_Value = 0.0;
  this->m_poolOrigin.m_Value.z = 0.0;
  this->m_poolOrigin.m_Value.y = 0.0;
  this->m_poolOrigin.m_Value.x = 0.0;
  this->m_waterLevel.m_Value = 0.0;
  CountdownTimer::CountdownTimer(&this->m_turnTimer);
  CountdownTimer::CountdownTimer(&this->m_goTimer);
  CountdownTimer::CountdownTimer(&this->m_moveTimer);
  CountdownTimer::CountdownTimer(&this->m_panicTimer);
  CountdownTimer::CountdownTimer(&this->m_disperseTimer);
  CountdownTimer::CountdownTimer(&this->m_proximityTimer);
  this->m_visible.m_Size = 0;
  this->m_visible.m_Memory.m_pMemory = 0;
  this->m_visible.m_Memory.m_nAllocationCount = 0;
  this->m_visible.m_Memory.m_nGrowSize = 0;
}


// CFish::~CFish  (line 75, @0x00000000021f12d0, libserver.so)  // inlines: Purge, RemoveAll, ~CBaseAnimating, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CFish*, int>::Purge
// callers: CFish::~CFish
void __fastcall CFish::~CFish(CFish *const this)
{
  bool v2; // zf
  CUtlVectorBase<CFish*,CUtlMemory<CFish*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_visible.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_403BC30;
  this->m_visible.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_visible.m_Memory;
    CUtlMemory<CFish *,int>::Purge(&this->m_visible.m_Memory);
    if ( (this->m_visible.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CFish *,int>::Purge(p_m_Memory);
  }
  this->_vptr_IHandleEntity = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(&this->m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFish::~CFish  (line 75, @0x00000000021f1350, libserver.so)
// calls: CFish::~CFish, CBaseEntity::operator delete
void __fastcall CFish::~CFish(CFish *const this)
{
  CFish::~CFish(this);
  CBaseEntity::operator delete(this);
}


// CFish::Initialize  (line 81, @0x00000000021fee90, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, NetworkStateChanged, Set, VectorSubtract, operator!=, operator-, operator=, operator=<float>
// calls: CBaseEntity::GetAbsOrigin, CBaseModelEntity::SetModel
// callers: CFishPool::Spawn
void __fastcall CFish::Initialize(CFish *const this, CFishPool *pool, const char *pModelName, unsigned int id)
{
  CEntityIdentity *m_pEntity; // rdx
  int v8; // eax
  __int16 v9; // si
  const Vector *AbsOrigin; // rax
  const Vector *v11; // rax
  float v12; // xmm0_4
  float v13; // [rsp+4h] [rbp-2Ch]
  vec_t *p_x; // [rsp+8h] [rbp-28h]
  float z; // [rsp+8h] [rbp-28h]
  float v16; // [rsp+8h] [rbp-28h]
  float v17; // [rsp+8h] [rbp-28h]
  float m_waterLevel; // [rsp+8h] [rbp-28h]

  if ( pool != 0 && (m_pEntity = pool->m_pEntity) != 0 )
  {
    v8 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v9 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_pool.m_Index) = v9 | this->m_pool.m_Index & 0x8000;
    this->m_pool.m_Index = (v8 << 15) | this->m_pool.m_Index & 0x7FFF;
  }
  else
  {
    this->m_pool.m_Index = -1;
  }
  this->m_id = id;
  AbsOrigin = CBaseEntity::GetAbsOrigin(pool);
  if ( AbsOrigin->x != this->m_poolOrigin.m_Value.x
    || AbsOrigin->y != this->m_poolOrigin.m_Value.y
    || AbsOrigin->z != this->m_poolOrigin.m_Value.z )
  {
    p_x = &AbsOrigin->x;
    (*(this->_vptr_IHandleEntity + 22))(this, 1268, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_poolOrigin.m_Value.x = *p_x;
    this->m_poolOrigin.m_Value.y = p_x[1];
    this->m_poolOrigin.m_Value.z = p_x[2];
  }
  if ( pool->m_waterLevel != this->m_waterLevel.m_Value )
  {
    m_waterLevel = pool->m_waterLevel;
    (*(this->_vptr_IHandleEntity + 22))(this, 1280, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_waterLevel.m_Value = m_waterLevel;
  }
  v11 = CBaseEntity::GetAbsOrigin(this);
  v12 = v11->y - this->m_poolOrigin.m_Value.y;
  if ( (v11->x - this->m_poolOrigin.m_Value.x) != this->m_x.m_Value )
  {
    v13 = v11->y - this->m_poolOrigin.m_Value.y;
    v17 = v11->x - this->m_poolOrigin.m_Value.x;
    (*(this->_vptr_IHandleEntity + 22))(this, 1224, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v12 = v13;
    this->m_x.m_Value = v17;
  }
  if ( v12 != this->m_y.m_Value )
  {
    v16 = v12;
    (*(this->_vptr_IHandleEntity + 22))(this, 1228, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_y.m_Value = v16;
  }
  if ( this->m_poolOrigin.m_Value.z != this->m_z.m_Value )
  {
    z = this->m_poolOrigin.m_Value.z;
    (*(this->_vptr_IHandleEntity + 22))(this, 1232, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_z.m_Value = z;
  }
  CBaseModelEntity::SetModel(this, pModelName);
}


// CFish::Spawn  (line 99, @0x00000000021f3600, libserver.so)  // inlines: AddSolidFlags, NetworkStateChanged, Set, Start, operator=, operator=<float>
// calls: CBaseAnimating::Spawn, CCollisionProperty::EnableTouchPersistsNotification, CCollisionProperty::SetupPhysicsFromUnscaledAABB, CCollisionProperty::SetSolidFlags, CBaseEntity::SetMoveType, RandomFloat, RandomInt, CBaseEntity::SetMaxHealth, CBaseEntity::SetDamageOptions, CountdownTimer::Now
void __fastcall CFish::Spawn(CFish *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r12
  const Vector *v4; // r13
  const Vector *v5; // rax
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  double v10; // xmm0_8
  double v11; // xmm1_8
  double v12; // xmm2_8
  double v13; // xmm3_8
  double v14; // xmm0_8
  double v15; // xmm1_8
  double v16; // xmm2_8
  double v17; // xmm3_8
  double v18; // xmm4_8
  double v19; // xmm0_8
  double v20; // xmm1_8
  double v21; // xmm2_8
  double v22; // xmm3_8
  double v23; // xmm4_8
  double v24; // xmm5_8
  float v25; // [rsp+8h] [rbp-28h]
  float v26; // [rsp+8h] [rbp-28h]
  float v27; // [rsp+8h] [rbp-28h]
  float v28; // [rsp+Ch] [rbp-24h]
  float v29; // [rsp+Ch] [rbp-24h]
  float v30; // [rsp+Ch] [rbp-24h]
  float v31; // [rsp+Ch] [rbp-24h]

  p_m_Collision = &this->m_Collision;
  CBaseAnimating::Spawn(this, pKeyValues);
  CCollisionProperty::EnableTouchPersistsNotification(p_m_Collision);
  v4 = (*(this->m_Collision._vptr_ICollideable + 2))(p_m_Collision);
  v5 = (*(this->m_Collision._vptr_ICollideable + 1))(p_m_Collision);
  CCollisionProperty::SetupPhysicsFromUnscaledAABB(
    p_m_Collision,
    VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED,
    2,
    v5,
    v4);
  CCollisionProperty::SetSolidFlags(p_m_Collision, this->m_Collision.m_usSolidFlags.m_Value | 1);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_FLY, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  v6 = RandomFloat(0.0, 360.0);
  if ( v6 != this->m_angle.m_Value )
  {
    v31 = v6;
    (*(this->_vptr_IHandleEntity + 22))(this, 1236, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_angle.m_Value = v31;
  }
  this->m_angleChange = 0.0;
  this->m_forward.y = 0.0;
  this->m_forward.z = 0.0;
  this->m_perp.z = 0.0;
  this->m_speed = 0.0;
  this->m_forward.x = 1.0;
  this->m_perp.x = -0.0;
  this->m_perp.y = 1.0;
  v7 = RandomFloat(10.0, 20.0);
  this->m_calmSpeed = 3.0 * v7;
  this->m_panicSpeed = RandomFloat(4.0, 5.0) * (3.0 * v7);
  this->m_desiredSpeed = this->m_calmSpeed;
  this->m_turnClockwise = RandomInt(0, 100) <= 49;
  v8 = RandomFloat(40.0, 75.0);
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  this->m_avoidRange = v8 * 3.0;
  vptr_IHandleEntity[157](this, 1);
  CBaseEntity::SetMaxHealth(this, 1);
  CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_YES);
  v28 = RandomFloat(0.0, 10.0);
  *&v10 = CountdownTimer::Now(&this->m_disperseTimer) + v28;
  if ( *&v10 != this->m_disperseTimer.m_timestamp.m_Value )
  {
    v25 = *&v10;
    (*(this->m_disperseTimer._vptr_CountdownTimer + 2))(&this->m_disperseTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v10 = LODWORD(v25);
    this->m_disperseTimer.m_timestamp.m_Value = v25;
  }
  if ( v28 != this->m_disperseTimer.m_duration.m_Value )
  {
    (*(this->m_disperseTimer._vptr_CountdownTimer + 2))(
      &this->m_disperseTimer,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v10,
      v11,
      v12,
      v13,
      v28);
    this->m_disperseTimer.m_duration.m_Value = v28;
  }
  v29 = RandomFloat(10.0, 60.0);
  *&v14 = CountdownTimer::Now(&this->m_goTimer) + v29;
  if ( *&v14 != this->m_goTimer.m_timestamp.m_Value )
  {
    v27 = *&v14;
    (*(this->m_goTimer._vptr_CountdownTimer + 2))(&this->m_goTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v14 = LODWORD(v27);
    this->m_goTimer.m_timestamp.m_Value = v27;
  }
  if ( v29 != this->m_goTimer.m_duration.m_Value )
  {
    (*(this->m_goTimer._vptr_CountdownTimer + 2))(
      &this->m_goTimer,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v14,
      v15,
      v16,
      v17,
      v18,
      v29);
    this->m_goTimer.m_duration.m_Value = v29;
  }
  v30 = RandomFloat(2.0, 10.0);
  *&v19 = CountdownTimer::Now(&this->m_moveTimer) + v30;
  if ( *&v19 != this->m_moveTimer.m_timestamp.m_Value )
  {
    v26 = *&v19;
    (*(this->m_moveTimer._vptr_CountdownTimer + 2))(&this->m_moveTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v19 = LODWORD(v26);
    this->m_moveTimer.m_timestamp.m_Value = v26;
  }
  if ( v30 != this->m_moveTimer.m_duration.m_Value )
  {
    (*(this->m_moveTimer._vptr_CountdownTimer + 2))(
      &this->m_moveTimer,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v30);
    this->m_moveTimer.m_duration.m_Value = v30;
  }
  this->m_desiredSpeed = this->m_calmSpeed;
}


// CFish::Event_Killed  (line 138, @0x00000000021ef950, libserver.so)
// calls: CBaseEntity::SetDamageOptions, CBaseEntity::SetLifeState
void __fastcall CFish::Event_Killed(CFish *const this, const CTakeDamageInfo *const info)
{
  CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_NO);
  CBaseEntity::SetLifeState(this, LifeState_t::LIFE_DEAD);
}


// CFish::Touch  (line 149, @0x00000000021ffd90, libserver.so)
// calls: CFish::Panic
void __fastcall CFish::Touch(CFish *const this, CBaseEntity *other)
{
  if ( other != 0 && (*(other->_vptr_IHandleEntity + 140))(other) != 0 )
    CFish::Panic(this);
}


// CFish::FlockTo  (line 165, @0x00000000021ff140, libserver.so)  // inlines: DotProduct, Get, GetAbsVelocity, GetInstance, IsElapsed, NormalizeInPlace, VectorSubtract, operator-, operator->
// calls: CountdownTimer::Now, CBaseEntity::GetAbsOrigin, VectorNormalize, CEntityHandle::operator CEntityInstance*, CBaseEntity::CalcAbsoluteVelocity
// callers: CFish::Update
void __fastcall CFish::FlockTo(CFish *const this, CFish *other, __m128i a3, float amount)
{
  float v4; // r14d
  const Vector *AbsOrigin; // r13
  const Vector *v8; // rax
  vec_t v9; // xmm1_4
  vec_t v10; // xmm0_4
  float v11; // xmm0_4
  float x; // xmm1_4
  float y; // xmm8_4
  float z; // xmm7_4
  float v15; // xmm5_4
  float v16; // xmm4_4
  float v17; // xmm2_4
  __m128 v18; // xmm1
  float v19; // xmm2_4
  __m128 v20; // xmm4
  float v21; // xmm4_4
  float v22; // xmm1_4
  CEntityInstance *v23; // rax
  const Vector *v24; // r12
  const CBaseEntity *v25; // rax
  const Vector *v26; // rax
  vec_t v27; // xmm1_4
  vec_t v28; // xmm0_4
  float rangeb; // [rsp+4h] [rbp-34h]
  float rangea; // [rsp+4h] [rbp-34h]
  float range; // [rsp+4h] [rbp-34h]
  Vector to; // [rsp+8h] [rbp-30h] BYREF

  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(a3));
  if ( CountdownTimer::Now(&this->m_disperseTimer) >= this->m_disperseTimer.m_timestamp.m_Value )
  {
    if ( other != 0 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      v8 = CBaseEntity::GetAbsOrigin(other);
      v9 = v8->y - AbsOrigin->y;
      v10 = v8->z - AbsOrigin->z;
      to.x = v8->x - AbsOrigin->x;
      to.y = v9;
      to.z = v10;
      v11 = VectorNormalize(&to);
      if ( v11 > 300.0 )
        return;
      if ( v11 < 75.0 )
      {
        if ( (this->m_iEFlags & 0x1000) != 0 )
        {
          range = v11;
          CBaseEntity::CalcAbsoluteVelocity(this);
          v11 = range;
        }
        if ( (other->m_iEFlags & 0x1000) != 0 )
        {
          rangea = v11;
          CBaseEntity::CalcAbsoluteVelocity(other);
          v11 = rangea;
        }
        x = to.x;
        y = to.y;
        z = to.z;
        v15 = 300.0;
        if ( ((((other->m_vecAbsVelocity.m_Value.x - this->m_vecAbsVelocity.m_Value.x) * to.x)
             + ((other->m_vecAbsVelocity.m_Value.y - this->m_vecAbsVelocity.m_Value.y) * to.y))
            + ((other->m_vecAbsVelocity.m_Value.z - this->m_vecAbsVelocity.m_Value.z) * to.z)) < 0.0 )
        {
          v22 = (1.0 - (v11 / 75.0)) * 5.0;
          if ( (((to.x * this->m_perp.x) + (to.y * this->m_perp.y)) + (to.z * this->m_perp.z)) > 0.0 )
          {
            this->m_angleChange = this->m_angleChange - v22;
            return;
          }
          goto LABEL_10;
        }
      }
      else
      {
        x = to.x;
        y = to.y;
        z = to.z;
        v15 = 300.0;
      }
LABEL_6:
      v16 = -this->m_forward.y;
      v17 = ((v16 * y) - (this->m_forward.x * x)) - (this->m_forward.z * z);
      v18.m128_f32[0] = ((x * v16) + (this->m_forward.x * y)) + (z * 0.0);
      v19 = v17 + 1.0;
      v20 = _mm_cmplt_ss(0x3F800000u, v18);
      LODWORD(v21) = _mm_andnot_ps(v20, 0xBF800000).m128_u32[0] | v20.m128_i32[0] & 0x3F800000;
      if ( v19 > 1.0 )
      {
        v21 = -1.0;
        if ( this->m_turnClockwise )
          v21 = 1.0;
      }
      v22 = (((v4 * 0.69999999) * (1.0 - (v11 / v15))) * v21) * v19;
LABEL_10:
      this->m_angleChange = v22 + this->m_angleChange;
      return;
    }
    v23 = CEntityHandle::operator CEntityInstance *(&this->m_pool);
    rangeb = (*&v23[16].m_iszPrivateVScripts.u.m_Id + *&v23[16].m_iszPrivateVScripts.u.m_Id) * 3.0;
    v24 = CBaseEntity::GetAbsOrigin(this);
    v25 = CEntityHandle::operator CEntityInstance *(&this->m_pool);
    v26 = CBaseEntity::GetAbsOrigin(v25);
    v27 = v26->y - v24->y;
    v28 = v26->z - v24->z;
    to.x = v26->x - v24->x;
    to.y = v27;
    to.z = v28;
    v11 = VectorNormalize(&to);
    v15 = rangeb;
    if ( v11 <= rangeb )
    {
      x = to.x;
      y = to.y;
      z = to.z;
      goto LABEL_6;
    }
  }
}


// CFish::Avoid  (line 228, @0x00000000021ff4c0, libserver.so)  // inlines: CGameTrace, DotProduct, EnableInteractsWith, Get, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, IndexToIdentity, Init, IsLengthGreaterThan, IsValid, LengthSqr, LookupEntity, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, operator CEntityInstance*, operator*, operator+, operator-, operator->
// calls: CBaseEntity::GetAbsOrigin, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay
// callers: CFish::Update
// globals: CEntityHandle::gm_pEntityList
float __fastcall CFish::Avoid(CFish *const this)
{
  const Vector *AbsOrigin; // rax
  const CBaseEntity *m_pInstance; // rdi
  float *p_x; // rbx
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  const Vector *v8; // rax
  CEntityInstance *v9; // rcx
  float x; // xmm4_4
  float y; // xmm3_4
  float z; // xmm2_4
  uint32 v13; // eax
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  float v20; // xmm0_4
  float m_avoidRange; // xmm1_4
  const Vector *v22; // rax
  const Vector *v23; // rax
  float m_fValue; // xmm4_4
  float v25; // xmm7_4
  float v26; // xmm6_4
  const Vector *v27; // rax
  const Vector *v28; // rax
  float v29; // xmm5_4
  float v30; // xmm0_4
  float rightDanger; // [rsp+10h] [rbp-180h]
  float v32; // [rsp+14h] [rbp-17Ch]
  float v33; // [rsp+14h] [rbp-17Ch]
  float v34; // [rsp+14h] [rbp-17Ch]
  float v35; // [rsp+14h] [rbp-17Ch]
  float v36; // [rsp+18h] [rbp-178h]
  float v37; // [rsp+18h] [rbp-178h]
  float v38; // [rsp+18h] [rbp-178h]
  float v39; // [rsp+18h] [rbp-178h]
  float v40; // [rsp+1Ch] [rbp-174h]
  float v41; // [rsp+1Ch] [rbp-174h]
  float v42; // [rsp+1Ch] [rbp-174h]
  float v43; // [rsp+1Ch] [rbp-174h]
  CTraceFilterSimple v44; // [rsp+20h] [rbp-170h] BYREF
  Ray_t ray; // [rsp+60h] [rbp-130h] BYREF
  trace_t v46; // [rsp+B0h] [rbp-E0h] BYREF

  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  m_pInstance = 0;
  p_x = &AbsOrigin->x;
  m_Index = this->m_pool.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_pool.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[this->m_pool.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  v8 = CBaseEntity::GetAbsOrigin(m_pInstance);
  v9 = 0;
  x = v8->x;
  y = v8->y;
  z = v8->z;
  v13 = this->m_pool.m_Index;
  v14 = x - *p_x;
  v15 = y - p_x[1];
  v16 = z - p_x[2];
  if ( v13 + 2 > 1 )
  {
    v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_pool.m_Index) >> 9) & 0x3F];
    if ( v17 != 0 )
    {
      v18 = &v17[this->m_pool.m_Index & 0x1FF];
      if ( v18 != 0 && v13 == v18->m_EHandle.m_Index )
        v9 = v18->m_pInstance;
    }
  }
  if ( (((v14 * v14) + (v15 * v15)) + (v16 * v16)) <= ((*&v9[16].m_iszPrivateVScripts.u.m_Id - 60.0)
                                                     * (*&v9[16].m_iszPrivateVScripts.u.m_Id - 60.0)) )
  {
    memset(&v46.m_ShapeAttributes, 0, 31);
    v46.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    CGameTrace::Init(&v46);
    m_avoidRange = this->m_avoidRange;
    v32 = ((this->m_perp.x * 0.2) + this->m_forward.x) * m_avoidRange;
    v36 = ((this->m_perp.y * 0.2) + this->m_forward.y) * m_avoidRange;
    v40 = ((0.2 * this->m_perp.z) + this->m_forward.z) * m_avoidRange;
    v22 = CBaseEntity::GetAbsOrigin(this);
    v33 = v32 + v22->x;
    v37 = v36 + v22->y;
    v41 = v40 + v22->z;
    v23 = CBaseEntity::GetAbsOrigin(this);
    m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
    ray.m_Start.w = 0.0;
    memset(&ray.m_Delta.w, 0, 36);
    ray.m_flRadius = m_fValue;
    ray.m_Delta.x = v33 - v23->x;
    ray.m_Delta.y = v37 - v23->y;
    ray.m_Delta.z = v41 - v23->z;
    ray.m_IsRay = 1;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                   + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
    ray.m_Start.Vector = *v23;
    CTraceFilterSimple::CTraceFilterSimple(&v44, this, 4, 0);
    v44.m_attr.m_nInteractsWith |= 0x87001uLL;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v44, &v46);
    if ( v46.fraction < 1.0 )
      v25 = 1.0 - (v46.fraction * v46.fraction);
    else
      v25 = 0.0;
    rightDanger = v25;
    v26 = this->m_avoidRange;
    v34 = (this->m_forward.x - (this->m_perp.x * 0.2)) * v26;
    v38 = (this->m_forward.y - (this->m_perp.y * 0.2)) * v26;
    v42 = (this->m_forward.z - (0.2 * this->m_perp.z)) * v26;
    v27 = CBaseEntity::GetAbsOrigin(this);
    v35 = v34 + v27->x;
    v39 = v38 + v27->y;
    v43 = v42 + v27->z;
    v28 = CBaseEntity::GetAbsOrigin(this);
    v29 = phys_traceline_radius.m_pParent->m_Value.m_fValue;
    ray.m_Start.w = 0.0;
    memset(&ray.m_Delta.w, 0, 36);
    ray.m_flRadius = v29;
    ray.m_Delta.x = v35 - v28->x;
    ray.m_Delta.y = v39 - v28->y;
    ray.m_Delta.z = v43 - v28->z;
    ray.m_IsRay = 1;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                   + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
    ray.m_Start.Vector = *v28;
    CTraceFilterSimple::CTraceFilterSimple(&v44, this, 4, 0);
    v44.m_attr.m_nInteractsWith |= 0x87001uLL;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v44, &v46);
    if ( v46.fraction < 1.0 )
    {
      v30 = 1.0 - (v46.fraction * v46.fraction);
      if ( !this->m_turnClockwise )
      {
        if ( v30 <= 0.0 )
          goto LABEL_22;
        goto LABEL_26;
      }
    }
    else
    {
      v30 = 0.0;
      if ( !this->m_turnClockwise )
      {
LABEL_22:
        this->m_angleChange = this->m_angleChange - (100.0 * rightDanger);
        return fmaxf(v30, rightDanger);
      }
    }
    if ( rightDanger > 0.0 )
      goto LABEL_22;
LABEL_26:
    this->m_angleChange = (100.0 * v30) + this->m_angleChange;
    return fmaxf(v30, rightDanger);
  }
  if ( (((v14 * this->m_forward.x) + (v15 * this->m_forward.y)) + (v16 * this->m_forward.z)) >= 0.0 )
    return 1.0;
  v20 = 100.0;
  if ( this->m_turnClockwise )
    v20 = -100.0;
  this->m_angleChange = v20 + this->m_angleChange;
  return 1.0;
}


// CFish::Panic  (line 302, @0x00000000021ffbe0, libserver.so)  // inlines: NetworkStateChanged, Set, Start, operator=<float>
// calls: RandomFloat, CountdownTimer::Now
// callers: CFish::Touch, CFishPool::FireGameEvent, CFish::Update
void __fastcall CFish::Panic(CFish *const this)
{
  CountdownTimer *p_m_panicTimer; // r12
  double v3; // xmm0_8
  double v4; // xmm1_8
  double v5; // xmm0_8
  double v6; // xmm1_8
  double v7; // xmm2_8
  float v8; // [rsp+8h] [rbp-18h]
  float v9; // [rsp+8h] [rbp-18h]
  float v10; // [rsp+Ch] [rbp-14h]
  float v11; // [rsp+Ch] [rbp-14h]

  p_m_panicTimer = &this->m_panicTimer;
  v10 = RandomFloat(5.0, 15.0);
  *&v3 = CountdownTimer::Now(p_m_panicTimer) + v10;
  if ( *&v3 != this->m_panicTimer.m_timestamp.m_Value )
  {
    v9 = *&v3;
    (*(this->m_panicTimer._vptr_CountdownTimer + 2))(p_m_panicTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v3 = LODWORD(v9);
    this->m_panicTimer.m_timestamp.m_Value = v9;
  }
  if ( v10 != this->m_panicTimer.m_duration.m_Value )
  {
    (*(this->m_panicTimer._vptr_CountdownTimer + 2))(p_m_panicTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v3, v4, v10);
    this->m_panicTimer.m_duration.m_Value = v10;
  }
  v11 = RandomFloat(10.0, 20.0);
  *&v5 = CountdownTimer::Now(&this->m_moveTimer) + v11;
  if ( *&v5 != this->m_moveTimer.m_timestamp.m_Value )
  {
    v8 = *&v5;
    (*(this->m_moveTimer._vptr_CountdownTimer + 2))(&this->m_moveTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v5 = LODWORD(v8);
    this->m_moveTimer.m_timestamp.m_Value = v8;
  }
  if ( v11 != this->m_moveTimer.m_duration.m_Value )
  {
    (*(this->m_moveTimer._vptr_CountdownTimer + 2))(&this->m_moveTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v5, v6, v7, v11);
    this->m_moveTimer.m_duration.m_Value = v11;
  }
  this->m_desiredSpeed = this->m_panicSpeed;
}


// CFish::Update  (line 315, @0x00000000021fffd0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, DotProduct, Get, GetAbsVelocity, GetInstance, GetRemainingTime, IsElapsed, IsLengthGreaterThan, IsLengthLessThan, LengthSqr, NetworkStateChanged, NormalizeInPlace, Purge, RemoveAll, Set, VectorMultiply, VectorSubtract, operator*, operator+=<float>, operator-, operator-=, operator->, operator=, operator=<float>, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::GetAbsOrigin, CBaseEntity::GetLifeState, CountdownTimer::Now, RandomFloat, CountdownTimer::Start, NextBotManager::CollectAllBots, CFish::Panic, CFish::Avoid, CFish::FlockTo, sincos, CEntityHandle::operator CEntityInstance*, CBaseEntity::SetAbsVelocity (16 total)
// callers: CFishPool::Update
// local variable allocation has failed, the output may be wrong!
void __fastcall CFish::Update(CFish *const this, float a2, float deltaT)
{
  const Vector *AbsOrigin; // rax
  float v5; // xmm0_4
  float v6; // xmm7_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  __int64 v10; // r13
  int v11; // r14d
  const Vector *v12; // r12
  const CBaseEntity *v13; // rax
  const Vector *v14; // rax
  float m_Value; // r12d
  CountdownTimer *p_m_moveTimer; // r15
  float v17; // xmm0_4
  float v18; // xmm1_4
  __m128i v19; // xmm5
  __int64 v20; // r13
  int v21; // r12d
  unsigned int v22; // r14d
  CFish *v23; // rsi
  float m_speed; // xmm1_4
  float m_angleChange; // xmm3_4
  float v26; // xmm0_4
  float v27; // xmm2_4
  float v28; // xmm0_4
  vec_t v29; // xmm0_4
  double v30; // xmm2_8
  float m_desiredSpeed; // xmm0_4
  __m128 m_desiredSpeed_low; // xmm0
  float v33; // xmm0_4
  vec_t v34; // xmm3_4
  vec_t v35; // xmm2_4
  CEntityInstance *v36; // rax
  CEntityInstance *v37; // rax
  float v38; // xmm0_4
  float v39; // xmm1_4
  float v40; // r12d
  __m128i v41; // xmm7
  float v42; // xmm0_4
  float v43; // xmm0_4
  float v44; // xmm1_4
  float v45; // xmm0_4
  float v46; // xmm1_4
  float x; // [rsp+8h] [rbp-98h]
  float v48; // [rsp+Ch] [rbp-94h]
  float v49; // [rsp+Ch] [rbp-94h]
  float v50; // [rsp+Ch] [rbp-94h]
  float v51; // [rsp+10h] [rbp-90h]
  float z; // [rsp+10h] [rbp-90h]
  float v53; // [rsp+10h] [rbp-90h]
  float v54; // [rsp+20h] [rbp-80h]
  float v55; // [rsp+24h] [rbp-7Ch]
  float deltaTb; // [rsp+28h] [rbp-78h]
  float v58; // [rsp+2Ch] [rbp-74h]
  double cosx; // [rsp+30h] [rbp-70h] BYREF
  double sinx; // [rsp+38h] [rbp-68h] BYREF
  Vector vel; // [rsp+40h] [rbp-60h] BYREF
  __int128 toCenter; // [rsp+50h] [rbp-50h] OVERLAPPED BYREF
  int v63; // [rsp+60h] [rbp-40h]
  int v64; // [rsp+64h] [rbp-3Ch]

  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v5 = 512.0;
  v6 = AbsOrigin->x - this->m_poolOrigin.m_Value.x;
  v55 = v6;
  v58 = AbsOrigin->y - this->m_poolOrigin.m_Value.y;
  v54 = AbsOrigin->z - this->m_poolOrigin.m_Value.z;
  if ( v6 <= 512.0 )
    v5 = fmaxf(-512.0, v6);
  if ( v5 != this->m_x.m_Value )
  {
    v51 = v5;
    (*(this->_vptr_IHandleEntity + 22))(this, 1224, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_x.m_Value = v51;
  }
  v7 = 512.0;
  if ( v58 <= 512.0 )
    v7 = fmaxf(-512.0, v58);
  if ( v7 != this->m_y.m_Value )
  {
    v53 = v7;
    (*(this->_vptr_IHandleEntity + 22))(this, 1228, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_y.m_Value = v53;
  }
  if ( this->m_poolOrigin.m_Value.z != this->m_z.m_Value )
  {
    z = this->m_poolOrigin.m_Value.z;
    (*(this->_vptr_IHandleEntity + 22))(this, 1232, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_z.m_Value = z;
  }
  if ( CBaseEntity::GetLifeState(this) != LifeState_t::LIFE_DEAD )
  {
    if ( CountdownTimer::Now(&this->m_proximityTimer) >= this->m_proximityTimer.m_timestamp.m_Value )
    {
      v8 = RandomFloat(0.5, 1.0);
      CountdownTimer::Start(&this->m_proximityTimer, v8, v9);
      LODWORD(toCenter) = 0;
      *(&toCenter + 1) = 0;
      v63 = 0;
      v64 = 0;
      NextBotManager::CollectAllBots(&g_NextBotManager, &toCenter);
      if ( toCenter > 0 )
      {
        v10 = 0;
        v11 = 0;
        while ( 1 )
        {
          v12 = CBaseEntity::GetAbsOrigin(this);
          v13 = (*(**(*(&toCenter + 1) + v10) + 528LL))(*(*(&toCenter + 1) + v10));
          v14 = CBaseEntity::GetAbsOrigin(v13);
          if ( (((v14->x - v12->x) * (v14->x - v12->x)) + ((v14->y - v12->y) * (v14->y - v12->y))) < 40000.0 )
            break;
          ++v11;
          v10 += 8;
          if ( toCenter <= v11 )
            goto LABEL_18;
        }
        CFish::Panic(this);
      }
LABEL_18:
      LODWORD(toCenter) = 0;
      if ( (v64 & 0xC0000000) == 0 )
      {
        CUtlMemory<INextBot *,int>::Purge((&toCenter + 8));
        if ( (v64 & 0xC0000000) == 0 )
          CUtlMemory<INextBot *,int>::Purge((&toCenter + 8));
      }
    }
    if ( CountdownTimer::Now(&this->m_turnTimer) >= this->m_turnTimer.m_timestamp.m_Value )
    {
      v38 = RandomFloat(10.0, 30.0);
      CountdownTimer::Start(&this->m_turnTimer, v38, v39);
      this->m_turnClockwise ^= 1u;
    }
    m_Value = this->m_panicTimer.m_timestamp.m_Value;
    if ( (m_Value - CountdownTimer::Now(&this->m_panicTimer)) <= 0.0 )
    {
      v40 = this->m_moveTimer.m_timestamp.m_Value;
      p_m_moveTimer = &this->m_moveTimer;
      if ( (v40 - CountdownTimer::Now(&this->m_moveTimer)) <= 0.0 )
      {
        if ( CountdownTimer::Now(&this->m_goTimer) < this->m_goTimer.m_timestamp.m_Value )
          goto LABEL_23;
        v43 = RandomFloat(10.0, 60.0);
        CountdownTimer::Start(&this->m_goTimer, v43, v44);
        v45 = RandomFloat(2.0, 10.0);
        CountdownTimer::Start(&this->m_moveTimer, v45, v46);
      }
      this->m_desiredSpeed = this->m_calmSpeed;
    }
    else
    {
      p_m_moveTimer = &this->m_moveTimer;
      this->m_desiredSpeed = this->m_panicSpeed;
    }
LABEL_23:
    v17 = CFish::Avoid(this);
    if ( this->m_visible.m_Size <= 0 )
    {
      v41 = _mm_cvtsi32_si128(0x3F800000u);
      *v41.m128i_i32 = *v41.m128i_i32 - v17;
      v22 = _mm_cvtsi128_si32(v41);
    }
    else
    {
      v19 = _mm_cvtsi32_si128(0x3F800000u);
      v20 = 0;
      v21 = 0;
      *v19.m128i_i32 = *v19.m128i_i32 - v17;
      v22 = _mm_cvtsi128_si32(v19);
      do
      {
        ++v21;
        v23 = this->m_visible.m_Memory.m_pMemory[v20++];
        CFish::FlockTo(this, v23, _mm_cvtsi32_si128(v22), v18);
      }
      while ( this->m_visible.m_Size > v21 );
    }
    CFish::FlockTo(this, 0, _mm_cvtsi32_si128(v22), v18);
    m_speed = this->m_speed;
    m_angleChange = this->m_angleChange;
    v26 = (((m_speed / this->m_panicSpeed) * 175.0) + 25.0) * a2;
    if ( m_angleChange <= v26 )
    {
      v26 = -v26;
      if ( v26 <= m_angleChange )
        v26 = this->m_angleChange;
      else
        this->m_angleChange = v26;
    }
    else
    {
      this->m_angleChange = v26;
    }
    v27 = this->m_angle.m_Value;
    v28 = v26 + v27;
    if ( v27 != v28 )
    {
      v50 = v28;
      (*(this->_vptr_IHandleEntity + 22))(this, 1236, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      m_speed = this->m_speed;
      this->m_angle.m_Value = v50;
      v27 = v50;
    }
    this->m_angleChange = 0.0;
    v48 = m_speed;
    sincos(v27 * 3.141592653589793 / 180.0, &sinx, &cosx);
    v29 = cosx;
    this->m_forward.x = v29;
    v30 = sinx;
    this->m_perp.y = v29;
    m_desiredSpeed = this->m_desiredSpeed;
    this->m_forward.z = 0.0;
    *&v30 = v30;
    this->m_forward.y = *&v30;
    this->m_perp.z = 0.0;
    this->m_perp.x = -*&v30;
    this->m_speed = (((m_desiredSpeed - v48) + (m_desiredSpeed - v48)) * a2) + v48;
    if ( CountdownTimer::Now(p_m_moveTimer) >= this->m_moveTimer.m_timestamp.m_Value )
    {
      m_desiredSpeed_low = LODWORD(this->m_desiredSpeed);
      m_desiredSpeed_low.m128_f32[0] = m_desiredSpeed_low.m128_f32[0] - a2;
      LODWORD(this->m_desiredSpeed) = _mm_cmpge_ss(m_desiredSpeed_low, 0LL).m128_u32[0] & m_desiredSpeed_low.m128_i32[0];
    }
    v33 = this->m_speed;
    v34 = this->m_forward.y * v33;
    v35 = this->m_forward.z * v33;
    vel.x = this->m_forward.x * v33;
    x = vel.x;
    vel.y = v34;
    v49 = v34;
    vel.z = v35;
    deltaTb = v35;
    v36 = CEntityHandle::operator CEntityInstance *(&this->m_pool);
    if ( (((v55 * v55) + (v58 * v58)) + (v54 * v54)) > ((*&v36[16].m_iszPrivateVScripts.u.m_Id - 5.0)
                                                      * (*&v36[16].m_iszPrivateVScripts.u.m_Id - 5.0)) )
    {
      *&toCenter = -v55;
      *(&toCenter + 2) = -v54;
      *(&toCenter + 1) = -v58;
      if ( (((-v55 * x) + (v49 * -v58)) + (-v54 * deltaTb)) < 0.0 )
      {
        VectorNormalize(&toCenter);
        v42 = ((vel.x * -*(&toCenter + 1)) + (vel.y * *&toCenter)) + (0.0 * vel.z);
        vel.x = -*(&toCenter + 1) * v42;
        vel.y = *&toCenter * v42;
        vel.z = 0.0 * v42;
      }
    }
    CBaseEntity::SetAbsVelocity(this, &vel);
    this->m_flSpeed = this->m_speed;
    return;
  }
  v37 = CEntityHandle::operator CEntityInstance *(&this->m_pool);
  if ( (((v55 * v55) + (v58 * v58)) + (v54 * v54)) > ((*&v37[16].m_iszPrivateVScripts.u.m_Id - 5.0)
                                                    * (*&v37[16].m_iszPrivateVScripts.u.m_Id - 5.0)) )
  {
    CBaseEntity::SetAbsVelocity(this, &vec3_origin);
  }
  else
  {
    if ( (this->m_iEFlags & 0x1000) != 0 )
      CBaseEntity::CalcAbsoluteVelocity(this);
    *&toCenter = *&this->m_vecAbsVelocity.m_Value.x;
    DWORD2(toCenter) = LODWORD(this->m_vecAbsVelocity.m_Value.z);
    *&toCenter = *&toCenter - (a2 * *&toCenter);
    *(&toCenter + 1) = *(&toCenter + 1) - (a2 * *(&toCenter + 1));
    *(&toCenter + 2) = *(&toCenter + 2) - (a2 * *(&toCenter + 2));
    CBaseEntity::SetAbsVelocity(this, &toCenter);
  }
}


// CFish::ResetVisible  (line 489, @0x00000000022008e0, libserver.so)  // inlines: RemoveAll
void __fastcall CFish::ResetVisible(CFish *const this)
{
  this->m_visible.m_Size = 0;
}


// CFish::AddVisible  (line 499, @0x000000000220a9a0, libserver.so)  // inlines: AddToTail, CopyConstruct<CFish*>, Element, GrowMemory, operator[]
// calls: CUtlMemory<CFish*, int>::Grow
void __fastcall CFish::AddVisible(CFish *const this, CFish *fish)
{
  __int64 m_Size; // r12
  int v5; // eax
  CFish **v6; // rax

  m_Size = this->m_visible.m_Size;
  v5 = this->m_visible.m_Size;
  if ( m_Size == this->m_visible.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CFish *,int>::Grow(&this->m_visible.m_Memory, 1);
    v5 = this->m_visible.m_Size;
  }
  this->m_visible.m_Size = v5 + 1;
  v6 = &this->m_visible.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
    *v6 = fish;
}


// CFishPool::GetDataDescMap  (line 511, @0x00000000021ee960, libserver.so)
// globals: CFishPool::m_DataMap
datamap_t *__fastcall CFishPool::GetDataDescMap(CFishPool *const this)
{
  return &CFishPool::m_DataMap;
}


// CFishPool::AddDatadescMetadataKeys  (line 511, @0x00000000022008f0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFishPool::GetEntityClass(void)
void __fastcall CFishPool::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFishPool::GetEntityClass);
}


// CFishPool::GetBaseMap  (line 511, @0x0000000002200910, libserver.so)
datamap_t *__cdecl CFishPool::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CFishPool>  (line 511, @0x0000000002205430, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorDataOps, CopyConstruct<char*>, Element, GenerateName, GetDataOps<CUtlVector<CHandle<CFish> > >, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CFishPool"
// globals: `guard variable for'DataMapInit<CFishPool>(CFishPool *)::nameHolder, `guard variable for'DataMapInit<CFishPool>(CFishPool *)::dataDesc, CFishPool::GetEntityClass(void), CFishPool::m_DataMap, `guard variable for'CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CFish>,CUtlMemory<CHandle<CFish>,int>>>(CUtlVector<CHandle<CFish>,CUtlMemor, CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CFish>,CUtlMemory<CHandle<CFish>,int>>>(CUtlVector<CHandle<CFish>,CUtlMemory<CHandle<CFish>,int, DataMapInit<CFishPool>(CFishPool *)::nameHolder, __dso_handle (9 total)
datamap_t *__fastcall DataMapInit<CFishPool>(CFishPool *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CFishPool>(CFishPool *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFishPool>(CFishPool *)::nameHolder) != 0 )
  {
    DataMapInit<CFishPool>(CFishPool *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFishPool>(CFishPool *)::nameHolder.m_pszBase = "CFishPool";
    DataMapInit<CFishPool>(CFishPool *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFishPool>(CFishPool *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFishPool>(CFishPool *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFishPool>(CFishPool *)::nameHolder.m_nLenBase = 9;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFishPool>(CFishPool *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFishPool>(CFishPool *)::nameHolder,
      &_dso_handle);
  }
  CFishPool::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CFishPool>(CFishPool *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFishPool>(CFishPool *)::dataDesc) != 0 )
  {
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CFish>,CUtlMemory<CHandle<CFish>,int>>>(CUtlVector<CHandle<CFish>,CUtlMemory<CHandle<CFish>,int>> *)::ops == 0
      && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CFish>,CUtlMemory<CHandle<CFish>,int>>>(CUtlVector<CHandle<CFish>,CUtlMemory<CHandle<CFish>,int>> *)::ops) != 0 )
    {
      CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CFish>,CUtlMemory<CHandle<CFish>,int>>>(CUtlVector<CHandle<CFish>,CUtlMemory<CHandle<CFish>,int>> *)::ops = off_403E610;
      __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CFish>,CUtlMemory<CHandle<CFish>,int>>>(CUtlVector<CHandle<CFish>,CUtlMemory<CHandle<CFish>,int>> *)::ops);
    }
    DataMapInit<CFishPool>(CFishPool *)::dataDesc[6].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CFish>,CUtlMemory<CHandle<CFish>,int>>>(CUtlVector<CHandle<CFish>,CUtlMemory<CHandle<CFish>,int>> *)::ops;
    v2 = operator new[](DataMapInit<CFishPool>(CFishPool *)::nameHolder.m_nLenBase + 7);
    strcpy(stpcpy(v2, DataMapInit<CFishPool>(CFishPool *)::nameHolder.m_pszBase), "Update");
    m_Size = DataMapInit<CFishPool>(CFishPool *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CFishPool>(CFishPool *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CFishPool>(CFishPool *)::nameHolder.m_Names.m_Size == DataMapInit<CFishPool>(CFishPool *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CFishPool>(CFishPool *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CFishPool>(CFishPool *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CFishPool>(CFishPool *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CFishPool>(CFishPool *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CFishPool>(CFishPool *)::dataDesc[7].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFishPool>(CFishPool *)::dataDesc);
  }
  CFishPool::m_DataMap.dataNumFields = 8;
  CFishPool::m_DataMap.dataDesc = &DataMapInit<CFishPool>(CFishPool *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFishPool::m_DataMap, CFishPool::GetEntityClass);
  return &CFishPool::m_DataMap;
}


// CFishPool::CFishPool  (line 528, @0x0000000002200920, libserver.so)  // inlines: CGameEventListener, CUtlMemory, CUtlVector, CUtlVectorBase, NetworkStateChanged, Purge, RemoveAll, Set, Start, operator=<float>, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::CBaseEntity, CountdownTimer::CountdownTimer, CountdownTimer::Now, CGameEventListener::~CGameEventListener, CBaseEntity::~CBaseEntity, _Unwind_Resume, CUtlMemory<CHandle<CFish>, int>::Purge
// callers: CFishPool::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CFishPool::CFishPool(CFishPool *const this)
{
  CountdownTimer *p_m_visTimer; // r12
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  float v5; // r13d

  p_m_visTimer = &this->m_visTimer;
  CBaseEntity::CBaseEntity(this);
  this->_vptr_IHandleEntity = &off_403C430;
  this->m_bRegisteredForEvents = 0;
  this->_vptr_IGameEventListener2 = off_403CAC0;
  this->m_fishes.m_Size = 0;
  this->m_fishes.m_Memory.m_pMemory = 0;
  this->m_fishes.m_Memory.m_nAllocationCount = 0;
  this->m_fishes.m_Memory.m_nGrowSize = 0;
  CountdownTimer::CountdownTimer(p_m_visTimer);
  this->m_fishCount = 0;
  this->m_maxRange = 512.0;
  this->m_swimDepth = 0.0;
  this->m_isDormant = 0;
  *v3.m128i_i32 = CountdownTimer::Now(p_m_visTimer);
  v4 = v3;
  *v4.m128i_i32 = *v3.m128i_i32 + 0.5;
  v5 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
  if ( (*v3.m128i_i32 + 0.5) != this->m_visTimer.m_timestamp.m_Value )
  {
    (*(this->m_visTimer._vptr_CountdownTimer + 2))(p_m_visTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_visTimer.m_timestamp.m_Value = v5;
  }
  if ( this->m_visTimer.m_duration.m_Value != 0.5 )
  {
    (*(this->m_visTimer._vptr_CountdownTimer + 2))(p_m_visTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_visTimer.m_duration.m_Value = 0.5;
  }
}


// CFishPool::Precache  (line 542, @0x000000000220d580, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheModelFromKeyValues
void __fastcall CFishPool::Precache(CFishPool *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  CBaseEntity::PrecacheModelFromKeyValues(this, pContext, 0, 0);
}


// CFishPool::Spawn  (line 548, @0x000000000220b060, libserver.so)  // inlines: AddToTail, AssignTo, Base, CEntityHandle, CGameTrace, CHandle, CopyConstruct<CHandle<CFish> >, Element, FindKeyHash, Get<float>, GetEHandle, GetEntryIndex, GetModelNameFromKeyValues, GetSerialNumber, GetValue, GetValue<float>, GrowMemory, ListenForGameEvent, QAngle, RnCollisionAttr_t, Set, atof, operator[]
// calls: CBaseEntity::Spawn, CEntityKeyValues::HasValue, CEntityKeyValues::GetValue<float>, CBaseEntity::ThinkSet, CGlobalVarsBase::curtime, CBaseEntity::SetNextThink, CBaseEntity::GetAbsOrigin, UTIL_WaterLevel, GetModelNameFromKeyValues, CGameTrace::Init, RandomFloat, CBaseEntity::Create (18 total)
// strings: "fish", "player_shoot", "player_footstep", "weapon_fire", "hegrenade_detonate", "flashbang_detonate" (9 total)
// globals: CFishPool::Update(void), CEntityKeyValues::sm_EmptyVariant, jpt_220B496, jpt_220B5AB
void __fastcall CFishPool::Spawn(CFishPool *const this, const CEntityKeyValues *pKeyValues)
{
  int m_nCount; // ecx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // si
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  CEntityVariant *p_m_value; // rdx
  float m_int; // xmm1_4
  float v11; // xmm0_4
  double v12; // xmm0_8
  double v13; // xmm1_8
  const Vector *AbsOrigin; // rax
  float v15; // xmm2_4
  float v16; // xmm0_4
  const CEntityKeyValues *v17; // rdi
  signed int v18; // r12d
  const char *ModelNameFromKeyValues; // rax
  const char *v20; // r13
  CHandle<CFish> *v21; // rax
  vec_t v22; // xmm0_4
  const Vector *v23; // rax
  CFish *v24; // r15
  CEntityIdentity *m_pEntity; // rax
  __int16 v26; // cx
  int m_Size; // r15d
  int v28; // edx
  IGameEventManager2 *v29; // rdi
  IGameEventManager2 *v30; // rdi
  IGameEventManager2 *v31; // rdi
  IGameEventManager2 *v32; // rdi
  IGameEventManager2 *v33; // rdi
  IGameEventManager2 *v34; // rdi
  int16 m_type; // ax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v36; // si
  __int64 v37; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v38; // rdx
  const char *m_uint64; // rax
  float m_float; // xmm0_4
  __int64 v41; // rdx
  const char *v42; // rax
  CEntityVariant *v43; // rdx
  int16 v44; // ax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v45; // rdx
  const char *v46; // rax
  __int64 v47; // rdx
  __m128d v48; // xmm0
  const char *v49; // rax
  float minz; // [rsp+4h] [rbp-10Ch]
  int hFish; // [rsp+10h] [rbp-100h]
  QAngle heading; // [rsp+20h] [rbp-F0h] BYREF
  trace_t result; // [rsp+30h] [rbp-E0h] BYREF

  CBaseEntity::Spawn(this, pKeyValues);
  if ( !CEntityKeyValues::HasValue(pKeyValues, 245717106) )
    goto LABEL_17;
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_30:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_31;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v6 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v6) == 245717106 )
      goto LABEL_10;
LABEL_7:
    if ( m_nCount <= ++v6 )
      goto LABEL_30;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v6] != 245717106 )
    goto LABEL_7;
LABEL_10:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v8 = pKeyValues->m_keyValues.m_pElements;
  else
    v8 = 0;
  p_m_value = &v8[v6].m_value;
LABEL_31:
  m_type = p_m_value->m_type;
  switch ( m_type )
  {
    case 0:
      goto LABEL_33;
    case 1:
      m_float = p_m_value->m_float;
      goto LABEL_43;
    case 5:
      m_float = p_m_value->m_int;
      goto LABEL_43;
    case 6:
      m_float = p_m_value->m_char;
      goto LABEL_43;
    case 26:
      m_float = p_m_value->m_uint64;
      goto LABEL_43;
    case 30:
      m_float = strtod(p_m_value->m_pszString, 0);
      goto LABEL_43;
    case 33:
      m_uint64 = p_m_value->m_uint64;
      if ( p_m_value->m_int64 >= 0 )
        goto LABEL_42;
      v41 = p_m_value->m_uint64 & 1 | (p_m_value->m_uint64 >> 1);
      m_float = v41 + v41;
      goto LABEL_43;
    case 34:
      m_float = p_m_value->m_float64;
      goto LABEL_43;
    case 37:
      LODWORD(m_uint64) = p_m_value->m_int;
LABEL_42:
      m_float = m_uint64;
LABEL_43:
      if ( m_float > 255.0 )
      {
        this->m_maxRange = 255.0;
        goto LABEL_17;
      }
      m_nCount = pKeyValues->m_keyHashes.m_nCount;
LABEL_33:
      if ( m_nCount <= 0 )
        goto LABEL_54;
      v36 = pKeyValues->m_keyHashes.m_nAllocated;
      v37 = 0;
      break;
    default:
      v42 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to float now\n", v42);
      m_nCount = pKeyValues->m_keyHashes.m_nCount;
      goto LABEL_33;
  }
  while ( 1 )
  {
    if ( v36 != 0 )
    {
      v38 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
      if ( v36 > 9 )
        v38 = pKeyValues->m_keyHashes.m_pElements;
    }
    else
    {
      v38 = 0;
    }
    if ( v38[v37] == 245717106 )
      break;
    if ( m_nCount <= ++v37 )
    {
LABEL_54:
      v43 = &CEntityKeyValues::sm_EmptyVariant;
      goto LABEL_55;
    }
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v45 = pKeyValues->m_keyValues.m_pElements;
  else
    v45 = 0;
  v43 = &v45[v37].m_value;
LABEL_55:
  v44 = v43->m_type;
  switch ( v44 )
  {
    case 0:
      m_int = 0.0;
      break;
    case 1:
      m_int = v43->m_float;
      break;
    case 5:
      m_int = v43->m_int;
      break;
    case 6:
      m_int = v43->m_char;
      break;
    case 26:
      m_int = v43->m_uint64;
      break;
    case 30:
      v48.m128d_f64[0] = strtod(v43->m_pszString, 0);
      m_int = _mm_movedup_pd(v48).m128d_f64[0];
      break;
    case 33:
      v46 = v43->m_uint64;
      if ( v43->m_int64 >= 0 )
        goto LABEL_60;
      v47 = v43->m_uint64 & 1 | (v43->m_uint64 >> 1);
      m_int = v47 + v47;
      break;
    case 34:
      m_int = v43->m_float64;
      break;
    case 37:
      LODWORD(v46) = v43->m_int;
LABEL_60:
      m_int = v46;
      break;
    default:
      v49 = VariantFieldTypeName(v44);
      Warning("No conversion from %s to float now\n", v49);
      m_int = 0.0;
      break;
  }
  v11 = 1.0;
  if ( m_int >= 1.0 )
    v11 = CEntityKeyValues::GetValue<float>(pKeyValues, 245717106);
  this->m_maxRange = v11;
LABEL_17:
  CBaseEntity::ThinkSet(this, CFishPool::Update, 0.0, 0, 0);
  *&v12 = CGlobalVarsBase::curtime(gpGlobals, 0);
  CBaseEntity::SetNextThink(this, v12, v13, 0);
  minz = CBaseEntity::GetAbsOrigin(this)->z + 1000.0;
  CBaseEntity::GetAbsOrigin(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v16 = UTIL_WaterLevel(AbsOrigin, minz, v15);
  v17 = pKeyValues;
  this->m_waterLevel = v16;
  v18 = 0;
  ModelNameFromKeyValues = GetModelNameFromKeyValues(v17, "");
  memset(&result.m_ShapeAttributes, 0, 31);
  v20 = ModelNameFromKeyValues;
  result.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&result);
  if ( this->m_fishCount > 0 )
  {
    do
    {
      v22 = RandomFloat(0.0, 360.0);
      heading.x = 0.0;
      heading.y = v22;
      heading.z = 0.0;
      v23 = CBaseEntity::GetAbsOrigin(this);
      v24 = CBaseEntity::Create("fish", v23, &heading, this);
      CFish::Initialize(v24, this, v20, v18);
      if ( v24 != 0 )
      {
        hFish = -1;
        m_pEntity = v24->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v26 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v26 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          hFish = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v26 & 0x7FFF;
        }
        m_Size = this->m_fishes.m_Size;
        v28 = m_Size;
        if ( m_Size == this->m_fishes.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CHandle<CFish>,int>::Grow(&this->m_fishes.m_Memory, 1);
          v28 = this->m_fishes.m_Size;
        }
        this->m_fishes.m_Size = v28 + 1;
        v21 = &this->m_fishes.m_Memory.m_pMemory[m_Size];
        if ( v21 != 0 )
          v21->m_Index = hFish;
      }
      ++v18;
    }
    while ( this->m_fishCount > v18 );
  }
  this->m_bRegisteredForEvents = 1;
  (*(gameeventmanager->_vptr_IBaseInterface + 4))(gameeventmanager, &this->CGameEventListener, "player_shoot", 1);
  v29 = gameeventmanager;
  this->m_bRegisteredForEvents = 1;
  (*(v29->_vptr_IBaseInterface + 4))(v29, &this->CGameEventListener, "player_footstep", 1);
  v30 = gameeventmanager;
  this->m_bRegisteredForEvents = 1;
  (*(v30->_vptr_IBaseInterface + 4))(v30, &this->CGameEventListener, "weapon_fire", 1);
  v31 = gameeventmanager;
  this->m_bRegisteredForEvents = 1;
  (*(v31->_vptr_IBaseInterface + 4))(v31, &this->CGameEventListener, "hegrenade_detonate", 1);
  v32 = gameeventmanager;
  this->m_bRegisteredForEvents = 1;
  (*(v32->_vptr_IBaseInterface + 4))(v32, &this->CGameEventListener, "flashbang_detonate", 1);
  v33 = gameeventmanager;
  this->m_bRegisteredForEvents = 1;
  (*(v33->_vptr_IBaseInterface + 4))(v33, &this->CGameEventListener, "smokegrenade_detonate", 1);
  v34 = gameeventmanager;
  this->m_bRegisteredForEvents = 1;
  (*(v34->_vptr_IBaseInterface + 4))(v34, &this->CGameEventListener, "bomb_exploded", 1);
}


// CFishPool::FireGameEvent  (line 598, @0x00000000021ffdd0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsLengthGreaterThan, IsValid, LengthSqr, LookupEntity, VectorSubtract, _V_strcmp, operator CEntityInstance*, operator-, operator->, operator[]
// calls: UTIL_PlayerByUserId, CBaseEntity::GetAbsOrigin, CFish::Panic
// strings: "player_footstep"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CFishPool::FireGameEvent(CFishPool *const this, IGameEvent *event)
{
  int v4; // eax
  CBasePlayer *v5; // r14
  __int64 v6; // rbx
  int i; // r12d
  const Vector *AbsOrigin; // r13
  const Vector *v9; // rax
  float v10; // xmm1_4
  CFish *v11; // rdi
  CHandle<CFish> *v12; // rdx
  uint32 v13; // eax
  __int16 v14; // cx
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  const CBaseEntity *m_pInstance; // rdi
  CHandle<CFish> *v18; // rdx
  uint32 m_Index; // eax
  __int16 v20; // cx
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx
  float range; // [rsp+Ch] [rbp-34h]

  v4 = (*(event->_vptr_IGameEvent + 8))(event, "userid", 0);
  v5 = UTIL_PlayerByUserId(v4);
  range = 75.0;
  if ( strcmp("player_footstep", (*(event->_vptr_IGameEvent + 2))(event)) != 0 )
    range = 500.0;
  v6 = 0;
  for ( i = 0; this->m_fishes.m_Size > i; ++v6 )
  {
    if ( v5 == 0 )
      goto LABEL_6;
    m_pInstance = 0;
    v18 = &this->m_fishes.m_Memory.m_pMemory[v6];
    m_Index = v18->m_Index;
    if ( v18->m_Index + 2 > 1 )
    {
      v20 = v18->m_Index;
      v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v18->m_Index) >> 9) & 0x3F];
      if ( v21 != 0 )
      {
        v22 = &v21[v20 & 0x1FF];
        if ( v22 != 0 && m_Index == v22->m_EHandle.m_Index )
          m_pInstance = v22->m_pInstance;
      }
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
    v9 = CBaseEntity::GetAbsOrigin(v5);
    v10 = v9->z - AbsOrigin->z;
    if ( ((((v9->x - AbsOrigin->x) * (v9->x - AbsOrigin->x)) + ((v9->y - AbsOrigin->y) * (v9->y - AbsOrigin->y)))
        + (v10 * v10)) <= (range * range) )
    {
LABEL_6:
      v11 = 0;
      v12 = &this->m_fishes.m_Memory.m_pMemory[v6];
      v13 = v12->m_Index;
      if ( v12->m_Index + 2 > 1 )
      {
        v14 = v12->m_Index;
        v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v12->m_Index) >> 9) & 0x3F];
        if ( v15 != 0 )
        {
          v16 = &v15[v14 & 0x1FF];
          if ( v16 != 0 && v13 == v16->m_EHandle.m_Index )
            v11 = v16->m_pInstance;
        }
      }
      CFish::Panic(v11);
    }
    ++i;
  }
}


// CFishPool::Update  (line 628, @0x000000000220aa10, libserver.so)  // inlines: AddToTail, AddVisible, CGameTrace, CopyConstruct<CFish*>, Element, Get, GetBool, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, GrowMemory, IndexToIdentity, IsElapsed, IsValid, LookupEntity, NetworkStateChanged, RemoveAll, Reset, ResetVisible, RnCollisionAttr_t, Set, operator CEntityInstance*, operator CFish*, operator->, operator=<float>, operator[]
// calls: CGlobalVarsBase::curtime, CBaseEntity::SetNextThink, CBaseEntity::SetAbsVelocity, CountdownTimer::Now, CFish::Update, CGameTrace::Init, CEntityHandle::operator CEntityInstance*, CUtlMemory<CFish*, int>::Grow
// globals: CEntityHandle::gm_pEntityList
void __fastcall CFishPool::Update(CFishPool *const this)
{
  double v2; // xmm0_8
  double v3; // xmm1_8
  __int64 v4; // r13
  int v5; // r12d
  CBaseEntity *m_pInstance; // rdi
  CHandle<CFish> *v7; // rdx
  uint32 m_Index; // eax
  __int16 v9; // cx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  float v12; // xmm1_4
  int m_Size; // eax
  __int64 v14; // r13
  int v15; // r12d
  CFish *v16; // rdi
  CHandle<CFish> *v17; // rdx
  uint32 v18; // eax
  __int16 v19; // cx
  CEntityIdentity *v20; // rdx
  CEntityIdentity *v21; // rdx
  float v22; // xmm0_4
  __int64 v23; // r13
  int v24; // r12d
  __int64 v25; // rdi
  int v26; // r14d
  __int64 v27; // r13
  int v28; // edx
  CEntityInstance *v29; // rax
  int v30; // r15d
  __int64 v31; // r12
  CEntityInstance *v32; // rdi
  unsigned __int16 *v33; // rcx
  int v34; // eax
  __int16 v35; // si
  CEntityIdentity *v36; // rcx
  CEntityIdentity *v37; // rcx
  CHandle<CFish> *m_pMemory; // rax
  CEntityInstance *v39; // r8
  unsigned __int16 *v40; // rsi
  int v41; // ecx
  __int16 v42; // r9
  CEntityIdentity *v43; // rsi
  CEntityIdentity *v44; // rsi
  unsigned __int16 *v45; // rsi
  CEntityInstance *v46; // rax
  int v47; // ecx
  __int16 v48; // r9
  CEntityIdentity *v49; // rsi
  CEntityIdentity *v50; // rsi
  __int64 m_hScope_low; // rcx
  int m_hScope; // esi
  CEntityInstance **v53; // rax
  CHandle<CFish> *v54; // rax
  CEntityInstance *v55; // r8
  unsigned __int16 *v56; // rsi
  int v57; // ecx
  __int16 v58; // r9
  CEntityIdentity *v59; // rsi
  CEntityIdentity *v60; // rsi
  unsigned __int16 *v61; // rsi
  CEntityInstance *v62; // rax
  int v63; // ecx
  __int16 v64; // r9
  CEntityIdentity *v65; // rsi
  CEntityIdentity *v66; // rsi
  __int64 v67; // rcx
  int v68; // esi
  CEntityInstance **v69; // rax
  int v70; // [rsp+4h] [rbp-FCh]
  int v71; // [rsp+4h] [rbp-FCh]
  CEntityInstance *v72; // [rsp+8h] [rbp-F8h]
  CEntityInstance *v73; // [rsp+8h] [rbp-F8h]
  CEntityInstance *v74; // [rsp+10h] [rbp-F0h]
  CEntityInstance *v75; // [rsp+10h] [rbp-F0h]
  __int64 v76; // [rsp+18h] [rbp-E8h]
  float v77; // [rsp+18h] [rbp-E8h]
  trace_t result; // [rsp+20h] [rbp-E0h] BYREF

  *&v2 = CGlobalVarsBase::curtime(gpGlobals, 0) + 0.1;
  CBaseEntity::SetNextThink(this, v2, v3, 0);
  if ( fish_dormant.m_pParent->m_Value.m_nValue != 0 )
  {
    if ( !this->m_isDormant )
    {
      if ( this->m_fishes.m_Size > 0 )
      {
        v4 = 0;
        v5 = 0;
        do
        {
          m_pInstance = 0;
          v7 = &this->m_fishes.m_Memory.m_pMemory[v4];
          m_Index = v7->m_Index;
          if ( v7->m_Index + 2 > 1 )
          {
            v9 = v7->m_Index;
            v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_Index) >> 9) & 0x3F];
            if ( v10 != 0 )
            {
              v11 = &v10[v9 & 0x1FF];
              if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
                m_pInstance = v11->m_pInstance;
            }
          }
          ++v5;
          ++v4;
          CBaseEntity::SetAbsVelocity(m_pInstance, &vec3_origin);
        }
        while ( this->m_fishes.m_Size > v5 );
      }
      this->m_isDormant = 1;
    }
  }
  else
  {
    this->m_isDormant = 0;
    if ( CountdownTimer::Now(&this->m_visTimer) >= this->m_visTimer.m_timestamp.m_Value )
    {
      v22 = CountdownTimer::Now(&this->m_visTimer) + this->m_visTimer.m_duration.m_Value;
      if ( v22 != this->m_visTimer.m_timestamp.m_Value )
      {
        v77 = v22;
        (*(this->m_visTimer._vptr_CountdownTimer + 2))(&this->m_visTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_visTimer.m_timestamp.m_Value = v77;
      }
      memset(&result.m_ShapeAttributes, 0, 31);
      result.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
      CGameTrace::Init(&result);
      m_Size = this->m_fishes.m_Size;
      if ( m_Size > 0 )
      {
        v23 = 0;
        v24 = 0;
        do
        {
          v25 = v23;
          ++v24;
          v23 += 4;
          LODWORD(CEntityHandle::operator CEntityInstance *((this->m_fishes.m_Memory.m_pMemory + v25))[30].m_hPrivateScope.m_hScope) = 0;
          m_Size = this->m_fishes.m_Size;
        }
        while ( v24 < m_Size );
        if ( m_Size > 0 )
        {
          v26 = 1;
          v27 = 0;
          do
          {
            v29 = CEntityHandle::operator CEntityInstance *((this->m_fishes.m_Memory.m_pMemory + v27));
            if ( (*(v29->_vptr_IHandleEntity + 139))(v29) != 0 )
            {
              m_Size = this->m_fishes.m_Size;
              if ( v26 >= m_Size )
                break;
              v30 = v26;
              v76 = v27 + 4;
              v31 = v27 + 4;
              do
              {
                v32 = 0;
                v33 = (this->m_fishes.m_Memory.m_pMemory + v31);
                v34 = *v33;
                if ( (*v33 + 2) > 1 )
                {
                  v35 = *v33;
                  v36 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v33 >> 9) & 0x3F];
                  if ( v36 != 0 )
                  {
                    v37 = &v36[v35 & 0x1FF];
                    if ( v37 != 0 && v34 == v37->m_EHandle.m_Index )
                      v32 = v37->m_pInstance;
                  }
                }
                if ( (*(v32->_vptr_IHandleEntity + 139))(v32) != 0 )
                {
                  m_pMemory = this->m_fishes.m_Memory.m_pMemory;
                  v39 = 0;
                  v40 = (m_pMemory + v31);
                  v41 = *(&m_pMemory->m_Index + v31);
                  if ( (v41 + 2) > 1 )
                  {
                    v42 = *v40;
                    v43 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v40 >> 9) & 0x3F];
                    if ( v43 != 0 )
                    {
                      v44 = &v43[v42 & 0x1FF];
                      if ( v44 != 0 && v41 == v44->m_EHandle.m_Index )
                        v39 = v44->m_pInstance;
                    }
                  }
                  v45 = (m_pMemory + v27);
                  v46 = 0;
                  v47 = *v45;
                  if ( (*v45 + 2) > 1 )
                  {
                    v48 = *v45;
                    v49 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v45 >> 9) & 0x3F];
                    if ( v49 != 0 )
                    {
                      v50 = &v49[v48 & 0x1FF];
                      if ( v50 != 0 && v47 == v50->m_EHandle.m_Index )
                        v46 = v50->m_pInstance;
                    }
                  }
                  m_hScope_low = SLODWORD(v46[30].m_hPrivateScope.m_hScope);
                  m_hScope = v46[30].m_hPrivateScope.m_hScope;
                  if ( m_hScope_low == v46[30].m_worldGroupId.m_nHashCode )
                  {
                    v70 = v46[30].m_hPrivateScope.m_hScope;
                    v72 = v39;
                    v74 = v46;
                    CUtlMemory<CFish *,int>::Grow(&v46[30].m_iszPrivateVScripts, 1);
                    v46 = v74;
                    m_hScope_low = v70;
                    v39 = v72;
                    m_hScope = v74[30].m_hPrivateScope.m_hScope;
                  }
                  LODWORD(v46[30].m_hPrivateScope.m_hScope) = m_hScope + 1;
                  v53 = (v46[30].m_iszPrivateVScripts.u.m_Id + 8 * m_hScope_low);
                  if ( v53 != 0 )
                    *v53 = v39;
                  v54 = this->m_fishes.m_Memory.m_pMemory;
                  v55 = 0;
                  v56 = (v54 + v27);
                  v57 = *(&v54->m_Index + v27);
                  if ( (v57 + 2) > 1 )
                  {
                    v58 = *v56;
                    v59 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v56 >> 9) & 0x3F];
                    if ( v59 != 0 )
                    {
                      v60 = &v59[v58 & 0x1FF];
                      if ( v60 != 0 && v57 == v60->m_EHandle.m_Index )
                        v55 = v60->m_pInstance;
                    }
                  }
                  v61 = (v54 + v31);
                  v62 = 0;
                  v63 = *v61;
                  if ( (*v61 + 2) > 1 )
                  {
                    v64 = *v61;
                    v65 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v61 >> 9) & 0x3F];
                    if ( v65 != 0 )
                    {
                      v66 = &v65[v64 & 0x1FF];
                      if ( v66 != 0 && v63 == v66->m_EHandle.m_Index )
                        v62 = v66->m_pInstance;
                    }
                  }
                  v67 = SLODWORD(v62[30].m_hPrivateScope.m_hScope);
                  v68 = v62[30].m_hPrivateScope.m_hScope;
                  if ( v67 == v62[30].m_worldGroupId.m_nHashCode )
                  {
                    v71 = v62[30].m_hPrivateScope.m_hScope;
                    v73 = v55;
                    v75 = v62;
                    CUtlMemory<CFish *,int>::Grow(&v62[30].m_iszPrivateVScripts, 1);
                    v62 = v75;
                    v67 = v71;
                    v55 = v73;
                    v68 = v75[30].m_hPrivateScope.m_hScope;
                  }
                  LODWORD(v62[30].m_hPrivateScope.m_hScope) = v68 + 1;
                  v69 = (v62[30].m_iszPrivateVScripts.u.m_Id + 8 * v67);
                  if ( v69 != 0 )
                    *v69 = v55;
                }
                m_Size = this->m_fishes.m_Size;
                ++v30;
                v31 += 4;
              }
              while ( v30 < m_Size );
              v28 = v26;
            }
            else
            {
              m_Size = this->m_fishes.m_Size;
              v28 = v26;
              v76 = v27 + 4;
            }
            ++v26;
            v27 = v76;
          }
          while ( m_Size > v28 );
        }
      }
    }
    else
    {
      m_Size = this->m_fishes.m_Size;
    }
    if ( m_Size > 0 )
    {
      v14 = 0;
      v15 = 0;
      do
      {
        v16 = 0;
        v17 = &this->m_fishes.m_Memory.m_pMemory[v14];
        v18 = v17->m_Index;
        if ( v17->m_Index + 2 > 1 )
        {
          v19 = v17->m_Index;
          v20 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v17->m_Index) >> 9) & 0x3F];
          if ( v20 != 0 )
          {
            v21 = &v20[v19 & 0x1FF];
            if ( v21 != 0 && v18 == v21->m_EHandle.m_Index )
              v16 = v21->m_pInstance;
          }
        }
        ++v15;
        ++v14;
        CFish::Update(v16, 0.1, v12);
      }
      while ( v15 < this->m_fishes.m_Size );
    }
  }
}


