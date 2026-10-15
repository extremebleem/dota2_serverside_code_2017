// Reconstructed from DWARF by pahole; not original source.

// src/game/server/te.cpp:76
class CTempEntsSystem : public ITempEntsSystem {
public:

	CTempEntsSystem(CTempEntsSystem &);
	CTempEntsSystem(const CTempEntsSystem &);
	CTempEntsSystem();

private:

	virtual bool SuppressTE(IRecipientFilter &);
	virtual void ArmorRicochet(IRecipientFilter &, float, const Vector *, const Vector *);
	virtual void BeamEntPoint(IRecipientFilter &, float, CEntityIndex, const Vector *, CEntityIndex, const Vector *, HMaterial, HMaterial, int, int, float, float, float, int, float, int, int, int, int, int);
	virtual void BeamEnts(IRecipientFilter &, float, CEntityIndex, CEntityIndex, HMaterial, HMaterial, int, int, float, float, float, int, float, int, int, int, int, int);
	virtual void BeamPoints(IRecipientFilter &, float, const Vector *, const Vector *, HMaterial, HMaterial, int, int, float, float, float, int, float, int, int, int, int, int);
	virtual void BeamRing(IRecipientFilter &, float, CEntityIndex, CEntityIndex, HMaterial, HMaterial, int, int, float, float, int, float, int, int, int, int, int, int);
	virtual void BloodStream(IRecipientFilter &, float, const Vector *, const Vector *, int, int, int, int, int);
	virtual void BreakModel(IRecipientFilter &, float, const Vector &, const QAngle &, const Vector &, const Vector &, HModel, int, int, float, int);
	virtual void BSPDecal(IRecipientFilter &, float, const Vector *, const Vector *, const Vector *, CEntityIndex, int);
	virtual void ProjectDecal(IRecipientFilter &, float, const Vector *, const QAngle *, float, int);
	virtual void Bubbles(IRecipientFilter &, float, const Vector *, const Vector *, float, int, float);
	virtual void BubbleTrail(IRecipientFilter &, float, const Vector *, const Vector *, float, int, float);
	virtual void Decal(IRecipientFilter &, float, const Vector *, const Vector *, CEntityIndex, int, int);
	virtual void Explosion(IRecipientFilter &, float, const Vector *, float, int, int, int, int, const Vector *, unsigned char, bool);
	virtual void ShatterSurface(IRecipientFilter &, float, const Vector *, const QAngle *, const Vector *, const Vector *, float, float, float, ShatterSurface_t, int, int, int, int, int, int);
	virtual void GlowSprite(IRecipientFilter &, float, const Vector *, float, float, int);
	virtual void Fizz(IRecipientFilter &, float, const CBaseEntity *, int, int);
	virtual void LargeFunnel(IRecipientFilter &, float, const Vector *, int);
	virtual void EnergySplash(IRecipientFilter &, float, const Vector *, const Vector *, bool);
	virtual void PlayerDecal(IRecipientFilter &, float, const Vector *, CEntityIndex, CEntityIndex);
	virtual void Smoke(IRecipientFilter &, float, const Vector *, float);
	virtual void Sparks(IRecipientFilter &, float, const Vector *, int, int, const Vector *);
	virtual void WorldDecal(IRecipientFilter &, float, const Vector *, const Vector *, int);
	virtual void MuzzleFlash(IRecipientFilter &, float, const Vector &, const QAngle &, float, int);
	virtual void Dust(IRecipientFilter &, float, const Vector &, const Vector &, float, float);
	virtual void PhysicsProp(IRecipientFilter &, float, HModel, CUtlStringToken, const Vector &, const QAngle &, float, const Vector &, int, int, int, int, int, int);
	virtual float Time();
	virtual bool IsServer();
	virtual void SuppressEffectsSounds(bool);
	virtual bool IsSuppressingEffectsSounds();
	virtual ~CTempEntsSystem();

	// vtable[2] SuppressTE
	// vtable[3] ArmorRicochet
	// vtable[4] BeamEntPoint
	// vtable[5] BeamEnts
	// vtable[6] BeamPoints
	// vtable[7] BeamRing
	// vtable[8] BloodStream
	// vtable[9] BreakModel
	// vtable[10] BSPDecal
	// vtable[11] ProjectDecal
	// vtable[12] Bubbles
	// vtable[13] BubbleTrail
	// vtable[14] Decal
	// vtable[15] Explosion
	// vtable[16] ShatterSurface
	// vtable[17] GlowSprite
	// vtable[18] Fizz
	// vtable[19] LargeFunnel
	// vtable[20] EnergySplash
	// vtable[21] PlayerDecal
	// vtable[22] Smoke
	// vtable[23] Sparks
	// vtable[24] WorldDecal
	// vtable[25] MuzzleFlash
	// vtable[26] Dust
	// vtable[27] PhysicsProp
	// vtable[28] Time
	// vtable[29] IsServer
	// vtable[30] SuppressEffectsSounds
	// vtable[31] IsSuppressingEffectsSounds
	// sizeof = 40
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CTempEntsSystem::~CTempEntsSystem  (line 76, @0x0000000002f4fa30, libserver.so)  // inlines: ~IPredictionSystem, ~ITempEntsSystem
void __fastcall CTempEntsSystem::~CTempEntsSystem(CTempEntsSystem *const this)
{
  this->_vptr_IPredictionSystem = off_3FFC070;
}


// CTempEntsSystem::~CTempEntsSystem  (line 76, @0x0000000002f50060, libserver.so)  // inlines: ~CTempEntsSystem, ~IPredictionSystem, ~ITempEntsSystem
// calls: operator delete
void __fastcall CTempEntsSystem::~CTempEntsSystem(CTempEntsSystem *const this)
{
  this->_vptr_IPredictionSystem = off_3FFC070;
  operator delete(this);
}


// CTempEntsSystem::SuppressTE  (line 84, @0x0000000002f500a0, libserver.so)  // inlines: GetSuppressHost
// calls: CRecipientFilter::IgnorePredictionCull, CRecipientFilter::RemoveRecipient
bool __fastcall CTempEntsSystem::SuppressTE(CTempEntsSystem *const this, IRecipientFilter *const filter)
{
  bool result; // al
  CEntityInstance *m_pSuppressHost; // rsi

  result = 0;
  if ( this->m_nStatusPushed <= 0 && this->m_pSuppressHost != 0 )
  {
    if ( !CRecipientFilter::IgnorePredictionCull(filter) )
    {
      m_pSuppressHost = 0;
      if ( this->m_nStatusPushed <= 0 )
        m_pSuppressHost = this->m_pSuppressHost;
      CRecipientFilter::RemoveRecipient(filter, m_pSuppressHost);
    }
    return (*(filter->_vptr_IRecipientFilter + 5))(filter) == 0;
  }
  return result;
}


// CTempEntsSystem::ArmorRicochet  (line 107, @0x0000000002f57400, libserver.so)
// calls: TE_ArmorRicochet
void __fastcall CTempEntsSystem::ArmorRicochet(
        CTempEntsSystem *const this,
        IRecipientFilter *const filter,
        float delay,
        const Vector *pos,
        const Vector *dir)
{
  if ( (*(this->_vptr_IPredictionSystem + 2))(this) == 0 )
    TE_ArmorRicochet(filter, delay, pos, dir);
}


// CTempEntsSystem::BeamEntPoint  (line 116, @0x0000000002f57510, libserver.so)  // inlines: CWeakHandle, Init
// calls: TE_BeamEntPoint
void __fastcall CTempEntsSystem::BeamEntPoint(
        CTempEntsSystem *const this,
        IRecipientFilter *const filter,
        float delay,
        CEntityIndex nStartEntity,
        const Vector *pStart,
        CEntityIndex nEndEntity,
        const Vector *pEnd,
        float life,
        float width,
        float endWidth,
        float amplitude,
        HMaterial *p_modelindex,
        HMaterial *p_haloindex,
        int startframe,
        int framerate,
        int fadeLength,
        char r,
        char g,
        unsigned __int8 b,
        int a,
        int speed)
{
  HMaterial modelindex; // [rsp+60h] [rbp-50h] BYREF
  HMaterial v32; // [rsp+70h] [rbp-40h] BYREF

  if ( (*(this->_vptr_IPredictionSystem + 2))(this) == 0 )
  {
    v32.m_pBinding = p_haloindex->m_pBinding;
    modelindex.m_pBinding = p_modelindex->m_pBinding;
    TE_BeamEntPoint(
      filter,
      delay,
      nStartEntity,
      pStart,
      nEndEntity,
      pEnd,
      &modelindex,
      life,
      width,
      endWidth,
      amplitude,
      &v32,
      startframe,
      framerate,
      fadeLength,
      r,
      g,
      b,
      a,
      speed);
  }
}


// CTempEntsSystem::BeamEnts  (line 129, @0x0000000002f576b0, libserver.so)  // inlines: CWeakHandle, Init
// calls: TE_BeamEnts
void __fastcall CTempEntsSystem::BeamEnts(
        CTempEntsSystem *const this,
        IRecipientFilter *const filter,
        float delay,
        CEntityIndex start,
        CEntityIndex end,
        HMaterial modelindex,
        HMaterial haloindex,
        float life,
        float width,
        float endWidth,
        float amplitude,
        int startframe,
        int framerate,
        int fadeLength,
        char r,
        char g,
        unsigned __int8 b,
        int a,
        int speed)
{
  HMaterial modelindexa; // [rsp+50h] [rbp-50h] BYREF
  HMaterial haloindexa; // [rsp+60h] [rbp-40h] BYREF

  if ( (*(this->_vptr_IPredictionSystem + 2))(this) == 0 )
  {
    haloindexa.m_pBinding = haloindex.m_pBinding->m_pData;
    modelindexa.m_pBinding = modelindex.m_pBinding->m_pData;
    TE_BeamEnts(
      filter,
      COERCE_DOUBLE(LODWORD(delay)),
      start,
      end,
      &modelindexa,
      &haloindexa,
      startframe,
      life,
      width,
      endWidth,
      amplitude,
      framerate,
      fadeLength,
      r,
      g,
      b,
      a,
      speed);
  }
}


// CTempEntsSystem::BeamPoints  (line 142, @0x0000000002f57840, libserver.so)  // inlines: CWeakHandle, Init
// calls: TE_BeamPoints
void __fastcall CTempEntsSystem::BeamPoints(
        CTempEntsSystem *const this,
        IRecipientFilter *const filter,
        float delay,
        const Vector *start,
        const Vector *end,
        HMaterial modelindex,
        HMaterial haloindex,
        float life,
        float width,
        float endWidth,
        float amplitude,
        int startframe,
        int framerate,
        int fadeLength,
        char r,
        char g,
        unsigned __int8 b,
        int a,
        int speed)
{
  HMaterial haloindexa; // [rsp+50h] [rbp-50h] BYREF
  HMaterial modelindexa; // [rsp+60h] [rbp-40h] BYREF

  if ( (*(this->_vptr_IPredictionSystem + 2))(this) == 0 )
  {
    haloindexa.m_pBinding = haloindex.m_pBinding->m_pData;
    modelindexa.m_pBinding = modelindex.m_pBinding->m_pData;
    TE_BeamPoints(
      filter,
      delay,
      start,
      end,
      &modelindexa,
      &haloindexa,
      startframe,
      life,
      width,
      endWidth,
      amplitude,
      framerate,
      fadeLength,
      r,
      g,
      b,
      a,
      speed);
  }
}


// CTempEntsSystem::BeamRing  (line 155, @0x0000000002f579d0, libserver.so)  // inlines: CWeakHandle, Init
// calls: TE_BeamRing
void __fastcall CTempEntsSystem::BeamRing(
        CTempEntsSystem *const this,
        IRecipientFilter *const filter,
        float delay,
        CEntityIndex start,
        CEntityIndex end,
        HMaterial modelindex,
        HMaterial haloindex,
        float life,
        float width,
        float amplitude,
        int startframe,
        int framerate,
        int spread,
        char r,
        char g,
        unsigned __int8 b,
        int a,
        int speed,
        int flags)
{
  HMaterial modelindexa; // [rsp+50h] [rbp-50h] BYREF
  HMaterial haloindexa; // [rsp+60h] [rbp-40h] BYREF

  if ( (*(this->_vptr_IPredictionSystem + 2))(this) == 0 )
  {
    haloindexa.m_pBinding = haloindex.m_pBinding->m_pData;
    modelindexa.m_pBinding = modelindex.m_pBinding->m_pData;
    TE_BeamRing(
      filter,
      COERCE_DOUBLE(LODWORD(delay)),
      start,
      end,
      &modelindexa,
      &haloindexa,
      startframe,
      life,
      width,
      amplitude,
      framerate,
      spread,
      r,
      g,
      b,
      a,
      speed,
      flags);
  }
}


// CTempEntsSystem::BloodStream  (line 166, @0x0000000002f57b60, libserver.so)
// calls: TE_BloodStream
void __fastcall CTempEntsSystem::BloodStream(
        CTempEntsSystem *const this,
        IRecipientFilter *const filter,
        float delay,
        const Vector *org,
        const Vector *dir,
        char r,
        char g,
        unsigned __int8 b,
        int a,
        int amount)
{
  if ( (*(this->_vptr_IPredictionSystem + 2))(this) == 0 )
    TE_BloodStream(filter, delay, org, dir, r, g, b, a, amount);
}


// CTempEntsSystem::BreakModel  (line 174, @0x0000000002f57cb0, libserver.so)  // inlines: CWeakHandle, Init
// calls: TE_BreakModel
void __fastcall CTempEntsSystem::BreakModel(
        CTempEntsSystem *const this,
        IRecipientFilter *const filter,
        float delay,
        const Vector *const pos,
        const QAngle *const angle,
        const Vector *const size,
        const Vector *const vel,
        float time,
        HModel *p_modelindex,
        int randomization,
        int count,
        int flags)
{
  HModel modelindex; // [rsp+20h] [rbp-40h] BYREF

  if ( (*(this->_vptr_IPredictionSystem + 2))(this) == 0 )
  {
    modelindex.m_pBinding = p_modelindex->m_pBinding;
    TE_BreakModel(filter, delay, pos, angle, size, vel, &modelindex, time, randomization, count, flags);
  }
}


// CTempEntsSystem::BSPDecal  (line 183, @0x0000000002f57e00, libserver.so)
// calls: TE_BSPDecal
void __fastcall CTempEntsSystem::BSPDecal(
        CTempEntsSystem *const this,
        IRecipientFilter *const filter,
        float delay,
        const Vector *pos,
        const Vector *normal,
        const Vector *saxis,
        CEntityIndex entity,
        int index)
{
  if ( (*(this->_vptr_IPredictionSystem + 2))(this) == 0 )
    TE_BSPDecal(filter, delay, pos, normal, saxis, entity, index);
}


// CTempEntsSystem::ProjectDecal  (line 192, @0x0000000002f50110, libserver.so)
// calls: TE_ProjectDecal
void __fastcall CTempEntsSystem::ProjectDecal(
        CTempEntsSystem *const this,
        IRecipientFilter *const filter,
        float delay,
        const Vector *pos,
        const QAngle *angles,
        float distance,
        int index)
{
  if ( (*(this->_vptr_IPredictionSystem + 2))(this) == 0 )
    TE_ProjectDecal(filter, delay, pos, angles, distance, index);
}


// CTempEntsSystem::Bubbles  (line 201, @0x0000000002f57f40, libserver.so)
// calls: TE_Bubbles
void __fastcall CTempEntsSystem::Bubbles(
        CTempEntsSystem *const this,
        IRecipientFilter *const filter,
        float delay,
        const Vector *mins,
        const Vector *maxs,
        float height,
        int count,
        float speed)
{
  if ( (*(this->_vptr_IPredictionSystem + 2))(this) == 0 )
    TE_Bubbles(filter, delay, mins, maxs, height, count, speed);
}


// CTempEntsSystem::BubbleTrail  (line 209, @0x0000000002f58070, libserver.so)
// calls: TE_BubbleTrail
void __fastcall CTempEntsSystem::BubbleTrail(
        CTempEntsSystem *const this,
        IRecipientFilter *const filter,
        float delay,
        const Vector *mins,
        const Vector *maxs,
        float flWaterZ,
        int count,
        float speed)
{
  if ( (*(this->_vptr_IPredictionSystem + 2))(this) == 0 )
    TE_BubbleTrail(filter, delay, mins, maxs, flWaterZ, count, speed);
}


// CTempEntsSystem::Decal  (line 217, @0x0000000002f581a0, libserver.so)
// calls: TE_Decal
void __fastcall CTempEntsSystem::Decal(
        CTempEntsSystem *const this,
        IRecipientFilter *const filter,
        float delay,
        const Vector *pos,
        const Vector *start,
        CEntityIndex entity,
        int hitbox,
        int index)
{
  if ( (*(this->_vptr_IPredictionSystem + 2))(this) == 0 )
    TE_Decal(filter, delay, pos, start, entity, hitbox, index);
}


// CTempEntsSystem::Explosion  (line 225, @0x0000000002f584c0, libserver.so)
// calls: TE_Explosion
void __fastcall CTempEntsSystem::Explosion(
        CTempEntsSystem *const this,
        IRecipientFilter *const filter,
        float delay,
        const Vector *pos,
        float scale,
        int framerate,
        int flags,
        int radius,
        int magnitude,
        const Vector *normal,
        unsigned __int8 materialType,
        char bShouldAffectRagdolls)
{
  if ( (*(this->_vptr_IPredictionSystem + 2))(this) == 0 )
    TE_Explosion(
      filter,
      delay,
      pos,
      scale,
      framerate,
      flags,
      radius,
      magnitude,
      normal,
      materialType,
      bShouldAffectRagdolls);
}


// CTempEntsSystem::ShatterSurface  (line 233, @0x0000000002f50180, libserver.so)
// calls: TE_ShatterSurface
void __fastcall CTempEntsSystem::ShatterSurface(
        CTempEntsSystem *const this,
        IRecipientFilter *const filter,
        float delay,
        const Vector *pos,
        const QAngle *angle,
        const Vector *vForce,
        const Vector *vForcePos,
        float width,
        float height,
        float shardsize,
        ShatterSurface_t surfacetype,
        int front_r,
        int front_g,
        int front_b,
        int back_r,
        int back_g,
        int back_b)
{
  if ( (*(this->_vptr_IPredictionSystem + 2))(this) == 0 )
    TE_ShatterSurface(
      filter,
      delay,
      pos,
      angle,
      vForce,
      vForcePos,
      width,
      height,
      shardsize,
      surfacetype,
      front_r,
      front_g,
      front_b,
      back_r,
      back_g,
      back_b);
}


// CTempEntsSystem::GlowSprite  (line 244, @0x0000000002f50260, libserver.so)
// calls: TE_GlowSprite
void __fastcall CTempEntsSystem::GlowSprite(
        CTempEntsSystem *const this,
        IRecipientFilter *const filter,
        float delay,
        const Vector *pos,
        float life,
        float size,
        int brightness)
{
  if ( (*(this->_vptr_IPredictionSystem + 2))(this) == 0 )
    TE_GlowSprite(filter, delay, pos, life, size, brightness);
}


// CTempEntsSystem::Fizz  (line 252, @0x0000000002f58630, libserver.so)
// calls: TE_Fizz
void __fastcall CTempEntsSystem::Fizz(
        CTempEntsSystem *const this,
        IRecipientFilter *const filter,
        float delay,
        const CBaseEntity *ed,
        int density,
        int current)
{
  if ( (*(this->_vptr_IPredictionSystem + 2))(this) == 0 )
    TE_Fizz(filter, delay, ed, density, current);
}


// CTempEntsSystem::LargeFunnel  (line 261, @0x0000000002f502d0, libserver.so)
// calls: TE_LargeFunnel
void __fastcall CTempEntsSystem::LargeFunnel(
        CTempEntsSystem *const this,
        IRecipientFilter *const filter,
        float delay,
        const Vector *pos,
        int reversed)
{
  if ( (*(this->_vptr_IPredictionSystem + 2))(this) == 0 )
    TE_LargeFunnel(filter, delay, pos, reversed);
}


// CTempEntsSystem::EnergySplash  (line 269, @0x0000000002f583a0, libserver.so)
// calls: TE_EnergySplash
void __fastcall CTempEntsSystem::EnergySplash(
        CTempEntsSystem *const this,
        IRecipientFilter *const filter,
        float delay,
        const Vector *pos,
        const Vector *dir,
        char bExplosive)
{
  if ( (*(this->_vptr_IPredictionSystem + 2))(this) == 0 )
    TE_EnergySplash(filter, delay, pos, dir, bExplosive);
}


// CTempEntsSystem::PlayerDecal  (line 278, @0x0000000002f50320, libserver.so)
// calls: TE_PlayerDecal
void __fastcall CTempEntsSystem::PlayerDecal(
        CTempEntsSystem *const this,
        IRecipientFilter *const filter,
        float delay,
        const Vector *pos,
        CEntityIndex player,
        CEntityIndex entity)
{
  if ( (*(this->_vptr_IPredictionSystem + 2))(this) == 0 )
    TE_PlayerDecal(filter, delay, pos, player, entity);
}


// CTempEntsSystem::Smoke  (line 287, @0x0000000002f50380, libserver.so)
// calls: TE_Smoke
void __fastcall CTempEntsSystem::Smoke(
        CTempEntsSystem *const this,
        IRecipientFilter *const filter,
        float delay,
        const Vector *pos,
        float scale)
{
  float v7; // xmm2_4

  if ( (*(this->_vptr_IPredictionSystem + 2))(this) == 0 )
    TE_Smoke(filter, scale, pos, v7);
}


// CTempEntsSystem::Sparks  (line 296, @0x0000000002f503e0, libserver.so)
// calls: TE_Sparks
void __fastcall CTempEntsSystem::Sparks(
        CTempEntsSystem *const this,
        IRecipientFilter *const filter,
        float delay,
        const Vector *pos,
        int nMagnitude,
        int nTrailLength,
        const Vector *pDir)
{
  if ( (*(this->_vptr_IPredictionSystem + 2))(this) == 0 )
    TE_Sparks(filter, delay, pos, nMagnitude, nTrailLength, pDir);
}


// CTempEntsSystem::WorldDecal  (line 305, @0x0000000002f50450, libserver.so)
// calls: TE_WorldDecal
void __fastcall CTempEntsSystem::WorldDecal(
        CTempEntsSystem *const this,
        IRecipientFilter *const filter,
        float delay,
        const Vector *pos,
        const Vector *normal,
        int index)
{
  if ( (*(this->_vptr_IPredictionSystem + 2))(this) == 0 )
    TE_WorldDecal(filter, delay, pos, normal, index);
}


// CTempEntsSystem::MuzzleFlash  (line 314, @0x0000000002f504b0, libserver.so)
// calls: TE_MuzzleFlash
void __fastcall CTempEntsSystem::MuzzleFlash(
        CTempEntsSystem *const this,
        IRecipientFilter *const filter,
        float delay,
        const Vector *const start,
        const QAngle *const angles,
        float scale,
        int type)
{
  if ( (*(this->_vptr_IPredictionSystem + 2))(this) == 0 )
    TE_MuzzleFlash(filter, delay, start, angles, scale, type);
}


// CTempEntsSystem::Dust  (line 323, @0x0000000002f58750, libserver.so)
// calls: TE_Dust
void __fastcall CTempEntsSystem::Dust(
        CTempEntsSystem *const this,
        IRecipientFilter *const filter,
        float delay,
        const Vector *const pos,
        const Vector *const dir,
        float size,
        float speed)
{
  if ( (*(this->_vptr_IPredictionSystem + 2))(this) == 0 )
    TE_Dust(filter, delay, pos, dir, LODWORD(size), speed);
}


// CTempEntsSystem::PhysicsProp  (line 332, @0x0000000002f50520, libserver.so)  // inlines: CWeakHandle, Init
// calls: TE_PhysicsProp
void __fastcall CTempEntsSystem::PhysicsProp(
        CTempEntsSystem *const this,
        IRecipientFilter *const filter,
        float delay,
        HModel modelindex,
        CUtlStringToken skin,
        const Vector *const pos,
        const QAngle *const angles,
        float flScale,
        const Vector *const vel,
        int flags,
        int effects,
        int r,
        int g,
        int b,
        int breakModelsNotToMake)
{
  HModel modelindexa; // [rsp+40h] [rbp-40h] BYREF

  if ( (*(this->_vptr_IPredictionSystem + 2))(this) == 0 )
  {
    modelindexa.m_pBinding = modelindex.m_pBinding->m_pData;
    TE_PhysicsProp(
      filter,
      delay,
      &modelindexa,
      skin,
      pos,
      angles,
      flScale,
      vel,
      flags,
      effects,
      r,
      g,
      b,
      breakModelsNotToMake);
  }
}


// CTempEntsSystem::Time  (line 341, @0x0000000002f523c0, libserver.so)  // inlines: curtime
float __fastcall CTempEntsSystem::Time(CTempEntsSystem *const this)
{
  float result; // xmm0_4
  CGlobalVars *v2; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  result = 0.0;
  v2 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    return v2->m_flCurrentTime;
  }
  return result;
}


// CTempEntsSystem::IsServer  (line 346, @0x0000000002f4f7e0, libserver.so)
bool __fastcall CTempEntsSystem::IsServer(CTempEntsSystem *const this)
{
  return 1;
}


// CTempEntsSystem::SuppressEffectsSounds  (line 351, @0x0000000002f4f7f0, libserver.so)
void __fastcall CTempEntsSystem::SuppressEffectsSounds(CTempEntsSystem *const this, bool bSuppress)
{
  ;
}


// CTempEntsSystem::IsSuppressingEffectsSounds  (line 356, @0x0000000002f4f800, libserver.so)
bool __fastcall CTempEntsSystem::IsSuppressingEffectsSounds(const CTempEntsSystem *const this)
{
  return 0;
}


