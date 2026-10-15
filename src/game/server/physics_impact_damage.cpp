// Reconstructed from DWARF by pahole; not original source.

// src/game/server/physics_impact_damage.cpp:353
struct damagetable_t {
	const char * pszTableName;  // +0x0

	// sizeof = 16
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// ReadDamageTable  (line 390, @0x00000000022d1da0, libserver.so)  // inlines: FastSqrt, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, curtime
// calls: Msg
// callers: CalculatePhysicsImpactDamage
// strings: "Damage %.0f, energy %.0f (%.2f)\n", "Ignoring impact, energy %.0f (%.2f)\n"
float __fastcall ReadDamageTable(impactentry_t *pTable, __int64 tableCount, float impulse, __int64 bDebug, double a5)
{
  double v7; // xmm0_8
  impactentry_t *v8; // rcx
  __int64 i; // rbx
  int v10; // eax
  impactentry_t *v11; // rbx
  float result; // xmm0_4
  double m_flCurrentTime; // xmm2_8
  CGlobalVars *v14; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v16; // xmm1_8
  CGlobalVars *v17; // rbx
  FnGlobalVarsWarningFunc v18; // rax
  float impulsea; // [rsp+Ch] [rbp-24h]
  float impulseb; // [rsp+Ch] [rbp-24h]

  if ( pTable != 0 && tableCount > 0 && (*&v7 = LODWORD(pTable->impulse), *&v7 <= impulse) )
  {
    v8 = pTable;
    for ( i = 0; ; i = v10 )
    {
      v10 = i + 1;
      if ( i + 1 == tableCount )
        break;
      ++v8;
      *&a5 = LODWORD(v8->impulse);
      if ( *&a5 > impulse )
      {
        if ( v10 <= 0 )
          goto LABEL_20;
        break;
      }
    }
    if ( bDebug != 0 )
    {
      m_flCurrentTime = 0.0;
      v14 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
          {
            impulsea = impulse;
            (m_pfnWarningFunc)(1, tableCount, bDebug, v8, v7, a5, 0.0);
            impulse = impulsea;
          }
        }
        m_flCurrentTime = v14->m_flCurrentTime;
      }
      v11 = &pTable[i];
      Msg("Damage %.0f, energy %.0f (%.2f)\n", tableCount, bDebug, v8, v11->damage, fsqrt(impulse), m_flCurrentTime);
    }
    else
    {
      v11 = &pTable[i];
    }
    return v11->damage;
  }
  else
  {
LABEL_20:
    result = 0.0;
    if ( bDebug != 0 )
    {
      v16 = 0.0;
      v17 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v18 = gpGlobals->m_pfnWarningFunc;
          if ( v18 != 0 )
          {
            impulseb = impulse;
            (v18)(1, tableCount, 0.0, 0.0);
            impulse = impulseb;
          }
        }
        v16 = v17->m_flCurrentTime;
      }
      Msg("Ignoring impact, energy %.0f (%.2f)\n", tableCount, fsqrt(impulse), v16);
      return 0.0;
    }
  }
  return result;
}


// CalculatePhysicsImpactDamage  (line 421, @0x00000000022d1f30, libserver.so)  // inlines: DotProductAbs, FastSqrt, FloatMakePositive, GetFloat, Init, Length, LengthSqr, VectorLength, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
// calls: PhysGetEntityMass, CBaseEntity::IsFloating, ReadDamageTable, UTIL_GetLocalPlayer, UTIL_PlayerByIndex
// callers: CBaseCombatCharacter::VPhysicsShadowCollision, CalculateDefaultPhysicsDamage, CRagdollProp::VPhysicsCollision, CPropVehicleDriveable::VPhysicsCollision
// globals: gVRCB_NPCImpactDamageTable, gDefaultNPCImpactDamageTable, gDefaultPropsImpactDamageTable, gVRCB_PropsImpactDamageTable, gGlassImpactDamageTable, gVRCB_GlassImpactDamageTable
float __fastcall CalculatePhysicsImpactDamage(
        int index,
        gamevcollisionevent_t *pEvent,
        impactdamagetable_t *table,
        float energyScale,
        bool allowStaticDamage,
        int *const damageType,
        bool bDamageFromHeldObjects)
{
  CBaseEntity **v10; // rbx
  CBaseEntity *v12; // rdi
  float result; // xmm0_4
  Vector *p_otherInertia; // r15
  int v15; // eax
  CBaseEntity *const *v16; // r15
  _BOOL8 v17; // r12
  uint32 v18; // eax
  float v19; // xmm0_4
  char v20; // dh
  impactdamagetable_t *v21; // r12
  Vector *v22; // rax
  float v23; // xmm0_4
  float v24; // xmm0_4
  float v25; // xmm2_4
  float v26; // xmm0_4
  float v27; // xmm2_4
  float v28; // xmm1_4
  float *v29; // rdx
  float v30; // xmm3_4
  float v31; // xmm4_4
  bool v32; // zf
  __int64 v33; // rax
  double v34; // xmm1_8
  char v35; // al
  CBasePlayer *LocalPlayer; // rax
  float v37; // xmm0_4
  int v38; // r13d
  CBasePlayer *v39; // rax
  float v40; // xmm0_4
  __int64 angularCount; // rsi
  float v42; // xmm1_4
  double v43; // xmm1_8
  CBasePlayer *v44; // rax
  float v45; // xmm0_4
  float z; // [rsp+0h] [rbp-2080h]
  float y; // [rsp+4h] [rbp-207Ch]
  float *v48; // [rsp+8h] [rbp-2078h]
  Vector *v49; // [rsp+10h] [rbp-2070h]
  __int64 indexa; // [rsp+18h] [rbp-2068h]
  float x; // [rsp+20h] [rbp-2060h]
  uint32 nOtherGameFlags; // [rsp+24h] [rbp-205Ch]
  _BOOL8 v53; // [rsp+28h] [rbp-2058h]
  vec_t *damage; // [rsp+30h] [rbp-2050h]
  float damagea; // [rsp+30h] [rbp-2050h]
  float damageb; // [rsp+30h] [rbp-2050h]
  _BOOL4 flOtherMass; // [rsp+38h] [rbp-2048h]
  float flOtherMassa; // [rsp+38h] [rbp-2048h]
  float flTotalEliminatedEnergya; // [rsp+3Ch] [rbp-2044h]
  float invMassa; // [rsp+40h] [rbp-2040h]
  float invMassb; // [rsp+40h] [rbp-2040h]
  float energyScaleb; // [rsp+4Ch] [rbp-2034h]
  Vector otherInertia; // [rsp+50h] [rbp-2030h] BYREF

  *damageType = 1;
  v10 = &pEvent->pObjects[index == 0];
  flOtherMass = index == 0;
  if ( *v10 == 0 )
    return 0.0;
  if ( pEvent->pEntities[0] == pEvent->pEntities[1] )
    return 0.0;
  if ( ((*((*v10)->_vptr_IHandleEntity + 162))(*v10) & 0x800) != 0 )
  {
    v12 = pEvent->pEntities[index];
    if ( v12->m_bIsNPC || (*(v12->_vptr_IHandleEntity + 140))(v12) != 0 )
      return 0.0;
  }
  if ( ((*((*v10)->_vptr_IHandleEntity + 162))(*v10) & 0x200) != 0
    && (pEvent->pEntities[index]->m_iEFlags & 0x8000000) == 0 )
  {
    *damageType |= 0x4000000u;
    return 1000.0;
  }
  if ( energyScale <= 0.0
    || ((*((*v10)->_vptr_IHandleEntity + 162))(*v10) & 0x402) != 0
    || !bDamageFromHeldObjects && ((*((*v10)->_vptr_IHandleEntity + 162))(*v10) & 4) != 0 )
  {
    return 0.0;
  }
  if ( ((*((*v10)->_vptr_IHandleEntity + 162))(*v10) & 0x10) != 0 )
  {
    p_otherInertia = &otherInertia;
    v15 = (*(v10[18]->_vptr_IHandleEntity + 53))(v10[18], &otherInertia, 1024);
    if ( v15 > 0 )
    {
      damage = &otherInertia.z + 2 * (v15 - 1);
      while ( ((*(**&p_otherInertia->x + 1296LL))(*&p_otherInertia->x) & 0x402) == 0 )
      {
        p_otherInertia = (p_otherInertia + 8);
        if ( p_otherInertia == damage )
          goto LABEL_17;
      }
      return 0.0;
    }
  }
LABEL_17:
  v16 = &pEvent->pObjects[index];
  indexa = index;
  if ( ((*(**v16 + 1296LL))(*v16) & 4) != 0 )
  {
    if ( (*(v10[18]->_vptr_IHandleEntity + 140))(v10[18]) != 0 )
      return 0.0;
    allowStaticDamage = 0;
  }
  v53 = flOtherMass;
  v17 = flOtherMass;
  v48 = (&pEvent->pInternalData + v17 * 12);
  v49 = &pEvent->preVelocity[v17];
  x = v49->x;
  y = pEvent->preVelocity[v17].y;
  z = pEvent->preVelocity[v17].z;
  v18 = (*((*v10)->_vptr_IHandleEntity + 162))(*v10);
  damagea = 0.0;
  if ( (v18 & 1) != 0 )
    damagea = (pEvent->preAngularVelocity[v17].z * pEvent->preAngularVelocity[v17].z)
            + ((pEvent->preAngularVelocity[v17].y * pEvent->preAngularVelocity[v17].y)
             + (pEvent->preAngularVelocity[v17].x * pEvent->preAngularVelocity[v17].x));
  nOtherGameFlags = v18;
  v19 = (*((*v10)->_vptr_IHandleEntity + 26))(*v10);
  v20 = BYTE1(nOtherGameFlags);
  flOtherMassa = v19;
  if ( (nOtherGameFlags & 4) != 0 )
  {
    LocalPlayer = UTIL_GetLocalPlayer();
    v20 = BYTE1(nOtherGameFlags);
    if ( LocalPlayer != 0 )
    {
      v37 = (*(LocalPlayer->_vptr_IHandleEntity + 481))(LocalPlayer, *v10, nOtherGameFlags);
      v20 = BYTE1(nOtherGameFlags);
      flOtherMassa = v37;
    }
  }
  v21 = table;
  if ( (v20 & 0x10) != 0 )
  {
    *damageType = 128;
    v21 = &gVRCB_NPCImpactDamageTable;
    v22 = &pEvent->postVelocity[v53];
    v22->x = 0.0;
    v22->y = 0.0;
    v22->z = 0.0;
    energyScale = crowbar_impact_damage_scale.m_pParent->m_Value.m_fValue;
    flOtherMassa = crowbar_impact_damage_mass.m_pParent->m_Value.m_fValue;
    if ( table != &gDefaultNPCImpactDamageTable )
    {
      v21 = &gVRCB_PropsImpactDamageTable;
      if ( table != &gDefaultPropsImpactDamageTable )
      {
        v21 = &gVRCB_GlassImpactDamageTable;
        if ( table != &gGlassImpactDamageTable )
          v21 = table;
      }
    }
  }
  if ( v10[18] != 0 && ((*((*v10)->_vptr_IHandleEntity + 162))(*v10) & 0x10) != 0 )
    flOtherMassa = PhysGetEntityMass(v10[18]);
  if ( ((*((*v10)->_vptr_IHandleEntity + 162))(*v10) & 0x20) != 0 )
  {
    flOtherMassa = v21->largeMassMin;
    energyScale = fmaxf(2.0, energyScale);
  }
  if ( !allowStaticDamage )
  {
    if ( v21->minMass > flOtherMassa )
      return 0.0;
    v23 = ((x * x) + (y * y)) + (z * z);
    if ( v21->smallMassMax > flOtherMassa && v21->smallMassMinSpeedSqr > v23 )
      return 0.0;
    if ( v21->minSpeedSqr > v23 && v21->minRotSpeedSqr > damagea )
      return 0.0;
  }
  if ( CBaseEntity::IsFloating(v16[18]) && (*(v10[18]->_vptr_IHandleEntity + 143))(v10[18]) == 0 )
    energyScale = fmaxf(3.0, energyScale);
  if ( damagea > v21->minRotSpeedSqr )
  {
    *&otherInertia.x = (*((*v10)->_vptr_IHandleEntity + 201))(*v10);
    angularCount = v21->angularCount;
    otherInertia.z = v42;
    *&v43 = COERCE_UNSIGNED_INT(fabs(v42 * pEvent->preAngularVelocity[v53].z));
    damageb = ReadDamageTable(
                v21->angularTable,
                angularCount,
                ((fabs(otherInertia.x * pEvent->preAngularVelocity[v53].x)
                + fabs(otherInertia.y * pEvent->preAngularVelocity[v53].y))
               + *&v43)
              * energyScale,
                0,
                v43);
    if ( damageb > 0.0 )
      *damageType |= 4u;
  }
  else
  {
    damageb = 0.0;
  }
  invMassa = fsqrt(
               ((pEvent->preVelocity[indexa].x * pEvent->preVelocity[indexa].x)
              + (pEvent->preVelocity[indexa].y * pEvent->preVelocity[indexa].y))
             + (pEvent->preVelocity[indexa].z * pEvent->preVelocity[indexa].z))
           - fsqrt(
               ((pEvent->postVelocity[indexa].x * pEvent->postVelocity[indexa].x)
              + (pEvent->postVelocity[indexa].y * pEvent->postVelocity[indexa].y))
             + (pEvent->postVelocity[indexa].z * pEvent->postVelocity[indexa].z));
  (*(**v16 + 208LL))();
  if ( invMassa <= 0.0 || (v25 = 0.0, v21->myMinVelocity <= invMassa) )
    v25 = invMassa * invMassa;
  v26 = v24 * v25;
  v27 = fsqrt(((v48[2] * v48[2]) + (v49->y * v49->y)) + (v49->z * v49->z))
      - fsqrt(
          ((pEvent->postVelocity[v53].x * pEvent->postVelocity[v53].x)
         + (pEvent->postVelocity[v53].y * pEvent->postVelocity[v53].y))
        + (pEvent->postVelocity[v53].z * pEvent->postVelocity[v53].z));
  v28 = (v27 * v27) * flOtherMassa;
  if ( flOtherMassa >= v21->largeMassMin )
  {
    v29 = (pEvent + 12 * v53);
    v28 = v28 * v21->largeMassScale;
    v30 = v29[20];
    v31 = v29[26];
    if ( v27 > 0.0 && (v30 - v31) < 0.0 && v30 < 0.0 )
      v28 = v28 * (((v21->largeMassFallingScale - 1.0) * fabs((v30 - v31) / v27)) + 1.0);
  }
  flTotalEliminatedEnergya = v26 + v28;
  invMassb = (*(**v16 + 1600LL))(*v16);
  v32 = (*(**v16 + 1512LL))(*v16) == 0;
  v33 = **v16;
  if ( v32 )
  {
    invMassb = 1.0 / (*(v33 + 208))();
  }
  else if ( ((*(v33 + 1296))() & 4) != 0 )
  {
    v38 = 0;
    if ( gpGlobals->maxClients > 1 )
    {
      while ( 1 )
      {
        v39 = UTIL_PlayerByIndex(++v38);
        if ( v39 != 0 )
        {
          v40 = (*(v39->_vptr_IHandleEntity + 481))(v39, *v16);
          if ( v40 > 0.0 )
            break;
        }
        if ( v38 >= gpGlobals->maxClients )
          goto LABEL_50;
      }
      invMassb = 1.0 / v40;
    }
    else
    {
      v44 = UTIL_GetLocalPlayer();
      if ( v44 != 0 )
      {
        v45 = (*(v44->_vptr_IHandleEntity + 481))(v44, *v16);
        if ( v45 > 0.0 )
          invMassb = 1.0 / v45;
      }
    }
  }
LABEL_50:
  energyScaleb = damageb
               + ReadDamageTable(
                   v21->linearTable,
                   v21->linearCount,
                   (invMassb * energyScale) * flTotalEliminatedEnergya,
                   0,
                   v34);
  v35 = (*((*v10)->_vptr_IHandleEntity + 182))(*v10);
  result = energyScaleb;
  if ( v35 == 0 && v21->smallMassMax > flOtherMassa )
  {
    result = v21->smallMassCap;
    if ( result <= 0.0 )
      return energyScaleb;
    if ( energyScaleb <= result )
    {
      if ( energyScaleb >= 0.0 )
        return energyScaleb;
      return 0.0;
    }
  }
  return result;
}


// CalculateDefaultPhysicsDamage  (line 694, @0x00000000022d28b0, libserver.so)  // inlines: _V_strcmp
// calls: strcmp, Warning, CalculatePhysicsImpactDamage
// callers: CBreakable::VPhysicsCollision, CPhysicsProp::VPhysicsCollision
// strings: "Failed to find custom physics damage table name: %s\n"
// globals: gDamageTableRegistry, gDefaultNPCImpactDamageTable
float __fastcall CalculateDefaultPhysicsDamage(
        int index,
        gamevcollisionevent_t *pEvent,
        float energyScale,
        bool allowStaticDamage,
        int *const damageType,
        string_t iszDamageTableName,
        bool bDamageFromHeldObjects)
{
  const char *v9; // rbx
  const damagetable_t *v10; // r13
  int v11; // r12d
  int v12; // eax
  int *v13; // r8
  bool v14; // cl
  bool v15; // r9
  impactdamagetable_t *pTable; // rdx
  float energyScalea; // [rsp+1Ch] [rbp-34h]

  if ( *iszDamageTableName.u.m_Id != 0 )
  {
    v9 = *iszDamageTableName.u.m_pAsString;
    v10 = gDamageTableRegistry;
    v11 = 0;
    while ( 1 )
    {
      energyScalea = energyScale;
      v12 = strcmp(v10->pszTableName, v9);
      energyScale = energyScalea;
      if ( v12 == 0 )
        break;
      ++v11;
      ++v10;
      if ( v11 == 5 )
      {
        Warning("Failed to find custom physics damage table name: %s\n", v9);
        energyScale = energyScalea;
        goto LABEL_6;
      }
    }
    v14 = allowStaticDamage;
    v15 = bDamageFromHeldObjects;
    v13 = damageType;
    pTable = gDamageTableRegistry[v11].pTable;
  }
  else
  {
LABEL_6:
    v13 = damageType;
    v14 = allowStaticDamage;
    v15 = bDamageFromHeldObjects;
    pTable = &gDefaultNPCImpactDamageTable;
  }
  return CalculatePhysicsImpactDamage(index, pEvent, pTable, energyScale, v14, v13, v15);
}


// CalculateObjectStress  (line 727, @0x00000000022f9270, libserver.so)  // inlines: AddToTail, CEntityHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CBaseEntity*>, CopyConstruct<Vector>, Element, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetGroundEntity, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, GrowMemory, IndexToIdentity, Init, IsNavIgnored, IsPhysicallyControlled, Length, LookupEntity, Purge, RemoveAll, VectorLength, VectorMultiply, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator*, operator*=, operator+=, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CBaseEntity*, int>::Grow, CGlobalVarsBase::curtime, IPhysicsBody::GetGameData, GetWorldEntity, CEntityHandle::GetHandleEntity, CUtlMemory<Vector, int>::Purge, CUtlMemory<CBaseEntity*, int>::Purge, CUtlMemory<Vector, int>::Grow, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, CUtlVectorBase<CBaseEntity*, CUtlMemory<CBaseEntity*, int> >::~CUtlVectorBase, _Unwind_Resume, CBaseEntity::VPhysicsWorld (15 total)
// callers: CBaseCombatCharacter::CalculatePhysicsStressDamage, CPhysicsProp::DrawDebugTextOverlays
// globals: CEntityHandle::gm_pEntityList
float __fastcall CalculateObjectStress(
        IPhysicsObject *pObject,
        CBaseEntity *pInputOwnerEntity,
        vphysics_objectstress_t *pOutput)
{
  __int64 m_Size; // rbx
  int v5; // eax
  Vector *v6; // rax
  vec_t z; // edx
  __int64 v8; // rbx
  int v9; // eax
  CBaseEntity **v10; // rax
  __int64 v11; // rbx
  int v12; // eax
  Vector *v13; // rax
  vec_t v14; // edx
  __int64 v15; // rbx
  int v16; // r14d
  __int64 v17; // rax
  Vector *v18; // rax
  vec_t v19; // xmm0_4
  vec_t v20; // xmm2_4
  const IPhysicsBody *v21; // r13
  IHandleEntity *GameData; // r12
  unsigned __int16 v23; // dx
  __int64 v24; // rsi
  int v25; // eax
  CEntitySystem *v26; // rcx
  CEntityIdentity *v27; // rdx
  __int64 v28; // rsi
  Vector *m_pMemory; // rax
  int v30; // esi
  __int64 v31; // rdx
  __int64 v32; // rsi
  Vector *v33; // rdx
  __int64 v34; // rax
  float v35; // xmm0_4
  vec_t v36; // eax
  __int64 i; // rax
  float v38; // xmm1_4
  float v39; // xmm0_4
  vec_t v40; // eax
  CEntityIdentity *v41; // rdx
  CEntityIdentity *v42; // rdx
  float v43; // xmm0_4
  float v44; // xmm2_4
  float v45; // xmm1_4
  float v46; // xmm0_4
  float v47; // xmm2_4
  float v48; // xmm0_4
  float v49; // xmm1_4
  IHandleEntity *HandleEntity; // rax
  char v52; // cl
  CBaseEntity **v53; // rax
  int v54; // eax
  CBaseEntity **v55; // rax
  int v56; // eax
  Vector *v57; // rax
  vec_t v58; // edx
  CBaseEntity *m_pInstance; // rax
  IVPhysics2World *v60; // rax
  float *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  float SimulationTimestep; // xmm0_4
  float v65; // xmm4_4
  float x; // xmm6_4
  float v67; // xmm0_4
  float y; // xmm5_4
  float v69; // xmm1_4
  float v70; // xmm3_4
  float v71; // xmm1_4
  __m128 v72; // xmm0
  __m128 v73; // xmm5
  float v74; // xmm3_4
  __int32 v75; // xmm3_4
  float v76; // xmm1_4
  float v77; // xmm2_4
  float v78; // xmm3_4
  float v79; // xmm0_4
  __int64 v80; // rax
  __m128 v81; // xmm6
  __m128d v82; // xmm0
  vec_t v83; // xmm0_4
  __int64 v84; // rax
  vec_t v85; // xmm0_4
  vec_t v86; // xmm0_4
  CBasePlayer *v87; // rax
  IPhysicsPlayerController *m_pPhysicsController; // rdi
  float v90; // [rsp+18h] [rbp-E8h]
  int v91; // [rsp+1Ch] [rbp-E4h]
  CBaseCombatCharacter *pBCC; // [rsp+20h] [rbp-E0h]
  float deltaLena; // [rsp+28h] [rbp-D8h]
  float deltaLenb; // [rsp+28h] [rbp-D8h]
  CBaseEntity *invGravity; // [rsp+30h] [rbp-D0h]
  int invGravitya; // [rsp+30h] [rbp-D0h]
  float invGravityb; // [rsp+30h] [rbp-D0h]
  bool hasLargeObject; // [rsp+3Bh] [rbp-C5h]
  float force; // [rsp+3Ch] [rbp-C4h]
  float forcea; // [rsp+3Ch] [rbp-C4h]
  Vector negativeForce; // [rsp+40h] [rbp-C0h]
  Vector positiveForce; // [rsp+50h] [rbp-B0h] BYREF
  Vector internalForce; // [rsp+60h] [rbp-A0h] BYREF
  Vector externalForce; // [rsp+70h] [rbp-90h] BYREF
  Vector lastVel; // [rsp+80h] [rbp-80h] BYREF
  CUtlVector<CBaseEntity*,CUtlMemory<CBaseEntity*,int> > pObjectList; // [rsp+90h] [rbp-70h] BYREF
  CUtlVector<Vector,CUtlMemory<Vector,int> > objectForce; // [rsp+B0h] [rbp-50h] BYREF

  pObjectList.m_Memory.m_pMemory = 0;
  pObjectList.m_Memory.m_nAllocationCount = 0;
  pObjectList.m_Memory.m_nGrowSize = 0;
  objectForce.m_Size = 0;
  objectForce.m_Memory.m_pMemory = 0;
  objectForce.m_Memory.m_nAllocationCount = 0;
  objectForce.m_Memory.m_nGrowSize = 0;
  CUtlMemory<CBaseEntity *,int>::Grow(&pObjectList.m_Memory, 1);
  pObjectList.m_Size = 1;
  if ( pObjectList.m_Memory.m_pMemory != 0 )
    *pObjectList.m_Memory.m_pMemory = 0;
  m_Size = objectForce.m_Size;
  v5 = objectForce.m_Size;
  if ( objectForce.m_Size == objectForce.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<Vector,int>::Grow(&objectForce.m_Memory, 1);
    v5 = objectForce.m_Size;
  }
  objectForce.m_Size = v5 + 1;
  v6 = &objectForce.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
  {
    z = vec3_origin.z;
    *&v6->x = *&vec3_origin.x;
    v6->z = z;
  }
  v8 = pObjectList.m_Size;
  v9 = pObjectList.m_Size;
  if ( pObjectList.m_Size == pObjectList.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CBaseEntity *,int>::Grow(&pObjectList.m_Memory, 1);
    v9 = pObjectList.m_Size;
  }
  pObjectList.m_Size = v9 + 1;
  v10 = &pObjectList.m_Memory.m_pMemory[v8];
  if ( v10 != 0 )
    *v10 = 0;
  v11 = objectForce.m_Size;
  v12 = objectForce.m_Size;
  if ( objectForce.m_Size == objectForce.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<Vector,int>::Grow(&objectForce.m_Memory, 1);
    v12 = objectForce.m_Size;
  }
  objectForce.m_Size = v12 + 1;
  v13 = &objectForce.m_Memory.m_pMemory[v11];
  if ( v13 != 0 )
  {
    v14 = vec3_origin.z;
    *&v13->x = *&vec3_origin.x;
    v13->z = v14;
  }
  pBCC = (*(pInputOwnerEntity->_vptr_IHandleEntity + 147))(pInputOwnerEntity);
  v15 = (*(*pObject + 1872LL))(pObject);
  v90 = (*(*pObject + 208LL))(pObject);
  hasLargeObject = 0;
  if ( v15 != 0 )
  {
    while ( 1 )
    {
      if ( (*(*v15 + 16LL))(v15) == 0 )
        goto LABEL_42;
      force = (*(*v15 + 56LL))(v15);
      if ( force > 0.0 )
        break;
LABEL_28:
      (*(*v15 + 96LL))(v15);
    }
    v21 = (*(*v15 + 24LL))(v15, 1);
    GameData = IPhysicsBody::GetGameData(v21);
    if ( GameData == 0 )
      GameData = GetWorldEntity();
    if ( HIDWORD(GameData[67]._vptr_IHandleEntity) == -1 )
    {
      v23 = 0x7FFF;
      v24 = 0x7FFF;
    }
    else
    {
      v23 = WORD2(GameData[67]._vptr_IHandleEntity) & 0x7FFF;
      v24 = v23;
    }
    v25 = (HIDWORD(GameData[67]._vptr_IHandleEntity) >> 15 << 15) | v23 & 0x7FFF;
    LODWORD(lastVel.x) = v25;
    v26 = g_pEntitySystem;
    v27 = (v25 + 2);
    if ( v27 > 1
      && (v27 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v24 >> 9]) != 0
      && (v28 = v24 & 0x1FF, v26 = (8 * v28), v24 = 120 * v28, (v27 = (v27 + v24)) != 0)
      && v25 == v27->m_EHandle.m_Index )
    {
      m_pInstance = v27->m_pInstance;
      if ( v27->m_pInstance == 0 )
        m_pInstance = GameData;
      invGravity = m_pInstance;
    }
    else
    {
      invGravity = GameData;
    }
    if ( (*(*v21 + 1512LL))(v21, v24, v27, v26) == 0 )
    {
      v16 = 0;
LABEL_27:
      (*(*v15 + 48LL))(v15, &lastVel);
      v18 = &objectForce.m_Memory.m_pMemory[v16];
      v19 = (lastVel.z * force) + v18->z;
      v20 = (force * lastVel.x) + v18->x;
      v18->y = (lastVel.y * force) + v18->y;
      v18->z = v19;
      v18->x = v20;
      goto LABEL_28;
    }
    if ( pBCC != 0
      && ((*(pBCC->_vptr_IHandleEntity + 344))(pBCC, invGravity) == 3
       || *(&GameData[91]._vptr_IHandleEntity + 1) >= CGlobalVarsBase::curtime(gpGlobals, 0))
      || ((*(*v21 + 1296LL))(v21) & 4) != 0 )
    {
      v16 = 1;
LABEL_22:
      if ( pInputOwnerEntity->m_MoveType.m_Value != MoveType_t::MOVETYPE_VPHYSICS
        && BYTE5(GameData[42]._vptr_IHandleEntity) != 6 )
      {
        if ( (*(*v21 + 536LL))(v21) == 0 || (v17 = (*(*v21 + 536LL))(v21), (*(*v17 + 72LL))(v17) == 0) )
          force = 0.0;
      }
      goto LABEL_27;
    }
    if ( (*(*v21 + 208LL))(v21) >= 500.0 )
    {
      HandleEntity = CEntityHandle::GetHandleEntity(&pInputOwnerEntity->m_hGroundEntity.m_Value);
      v52 = hasLargeObject;
      if ( GameData != HandleEntity )
        v52 = 1;
      hasLargeObject = v52;
    }
    v16 = pObjectList.m_Size - 1;
    v91 = pObjectList.m_Size;
    if ( pObjectList.m_Size - 1 > 1 )
    {
      if ( pObjectList.m_Memory.m_pMemory[v16] == invGravity )
      {
LABEL_85:
        if ( v16 != pObjectList.m_Size )
          goto LABEL_22;
LABEL_75:
        v54 = pObjectList.m_Size;
        if ( pObjectList.m_Size == pObjectList.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CBaseEntity *,int>::Grow(&pObjectList.m_Memory, 1);
          v54 = pObjectList.m_Size;
        }
        pObjectList.m_Size = v54 + 1;
        v55 = &pObjectList.m_Memory.m_pMemory[v91];
        if ( v55 != 0 )
          *v55 = invGravity;
        v56 = objectForce.m_Size;
        invGravitya = objectForce.m_Size;
        if ( objectForce.m_Size == objectForce.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<Vector,int>::Grow(&objectForce.m_Memory, 1);
          v56 = objectForce.m_Size;
        }
        objectForce.m_Size = v56 + 1;
        v57 = &objectForce.m_Memory.m_pMemory[invGravitya];
        if ( v57 != 0 )
        {
          v58 = vec3_origin.z;
          *&v57->x = *&vec3_origin.x;
          v57->z = v58;
        }
        if ( v16 == 0 )
          goto LABEL_27;
        goto LABEL_22;
      }
      v53 = &pObjectList.m_Memory.m_pMemory[v16 - 1];
      while ( --v16 != 1 )
      {
        --v53;
        if ( v53[1] == invGravity )
          goto LABEL_85;
      }
    }
    v16 = pObjectList.m_Size;
    goto LABEL_75;
  }
LABEL_42:
  (*(*pObject + 1880LL))(pObject, v15);
  m_pMemory = objectForce.m_Memory.m_pMemory;
  v30 = pObjectList.m_Size;
  objectForce.m_Memory.m_pMemory[1].x = 0.0;
  m_pMemory[1].y = 0.0;
  v31 = *&vec3_origin.x;
  m_pMemory[1].z = 0.0;
  *&m_pMemory = vec3_origin.z;
  v32 = (v30 - 1);
  *&negativeForce.x = v31;
  LODWORD(negativeForce.z) = m_pMemory;
  *&positiveForce.x = v31;
  LODWORD(positiveForce.z) = m_pMemory;
  if ( v32 < 0 )
  {
    forcea = 0.0;
  }
  else
  {
    forcea = 0.0;
    v33 = &objectForce.m_Memory.m_pMemory[v32];
    do
    {
      v34 = 0;
      forcea = fsqrt(((v33->x * v33->x) + (v33->y * v33->y)) + (v33->z * v33->z)) + forcea;
      do
      {
        v35 = *(&v33->x + v34);
        if ( v35 < 0.0 )
          *(&negativeForce.x + v34) = *(&negativeForce.x + v34) - v35;
        else
          *(&positiveForce.x + v34) = v35 + *(&positiveForce.x + v34);
        v34 += 4;
      }
      while ( v34 != 12 );
      v32 = (v32 - 1);
      --v33;
    }
    while ( v32 != -1 );
  }
  v36 = vec3_origin.z;
  *&internalForce.x = *&vec3_origin.x;
  internalForce.z = v36;
  *&externalForce.x = *&vec3_origin.x;
  externalForce.z = v36;
  for ( i = 0; i != 12; i += 4 )
  {
    v38 = *(&negativeForce.x + i);
    v39 = *(&positiveForce.x + i);
    if ( v39 <= v38 )
    {
      *(&externalForce.x + i) = v39;
      *(&internalForce.x + i) = v38 - v39;
    }
    else
    {
      *(&externalForce.x + i) = v38;
      *(&internalForce.x + i) = v39 - v38;
    }
  }
  LODWORD(v40) = (*(*pObject + 1328LL))(pObject, v32, &internalForce, &positiveForce);
  lastVel.x = v40;
  if ( (LODWORD(v40) + 2) > 1 )
  {
    v41 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(lastVel.x) >> 9) & 0x3F];
    if ( v41 != 0 )
    {
      v42 = &v41[LOWORD(lastVel.x) & 0x1FF];
      if ( v42 != 0 && LODWORD(v40) == v42->m_EHandle.m_Index && v42->m_pInstance != 0 )
      {
        v60 = CBaseEntity::VPhysicsWorld(v42->m_pInstance);
        v61 = (*(*v60 + 184LL))(v60);
        invGravityb = fsqrt(((*v61 * *v61) + (v61[1] * v61[1])) + (v61[2] * v61[2]));
        if ( pInputOwnerEntity->m_MoveType.m_Value == MoveType_t::MOVETYPE_VPHYSICS
          || (*(*pObject + 1512LL))(pObject) == 0 )
        {
          x = internalForce.x;
          y = internalForce.y;
          v65 = internalForce.z;
          v78 = externalForce.x;
          v77 = externalForce.y;
          v76 = externalForce.z;
        }
        else
        {
          v62 = *pObject;
          lastVel.x = 0.0;
          lastVel.y = 0.0;
          lastVel.z = 0.0;
          if ( (*(v62 + 536))(pObject) != 0 )
          {
            v63 = (*(*pObject + 536LL))(pObject);
            (*(*v63 + 80LL))(v63, &lastVel);
          }
          else if ( ((*(*pObject + 1584LL))(pObject) & 0x2000) != 0 )
          {
            v87 = ToBasePlayer(pInputOwnerEntity);
            if ( v87 != 0 )
            {
              m_pPhysicsController = v87->m_pPhysicsController;
              if ( m_pPhysicsController != 0 )
                (*(m_pPhysicsController->_vptr_IPhysicsPlayerController + 13))(m_pPhysicsController, &lastVel);
            }
          }
          deltaLena = fsqrt(((lastVel.x * lastVel.x) + (lastVel.y * lastVel.y)) + (lastVel.z * lastVel.z));
          SimulationTimestep = CPhysicsGameSystem::GetSimulationTimestep();
          v65 = internalForce.z;
          x = internalForce.x;
          v67 = (deltaLena * (1.0 / SimulationTimestep)) * v90;
          y = internalForce.y;
          if ( v67 <= 0.0
            || (v69 = fsqrt(
                        ((internalForce.x * internalForce.x) + (internalForce.y * internalForce.y))
                      + (internalForce.z * internalForce.z)),
                v67 <= v69) )
          {
            v78 = externalForce.x;
            v77 = externalForce.y;
            v76 = externalForce.z;
          }
          else
          {
            v70 = 1.0 - (v69 / v67);
            v71 = (v70 * internalForce.z) * (v70 * internalForce.z);
            internalForce.x = internalForce.x + (v70 * internalForce.x);
            internalForce.y = internalForce.y + (v70 * internalForce.y);
            internalForce.z = internalForce.z + (v70 * internalForce.z);
            deltaLenb = fsqrt((((v70 * x) * (v70 * x)) + ((v70 * y) * (v70 * y))) + v71);
            forcea = forcea - deltaLenb;
            v72.m128_f32[0] = VectorNormalize(&externalForce) - deltaLenb;
            v73.m128_i32[0] = 0;
            x = internalForce.x;
            v74 = _mm_cmpge_ss(v72, v73).m128_f32[0];
            v65 = internalForce.z;
            y = internalForce.y;
            v75 = LODWORD(v74) & v72.m128_i32[0];
            v76 = externalForce.z * *&v75;
            v77 = externalForce.y * *&v75;
            v78 = *&v75 * externalForce.x;
          }
        }
        v79 = 1.0;
        if ( invGravityb > 0.0 )
          v79 = 1.0 / invGravityb;
        v80 = *pObject;
        internalForce.x = x * v79;
        internalForce.y = y * v79;
        forcea = forcea * v79;
        internalForce.z = v65 * v79;
        externalForce.x = v78 * v79;
        externalForce.y = v77 * v79;
        externalForce.z = v79 * v76;
        if ( (*(v80 + 1512))(pObject) != 0 )
        {
          if ( forcea > v90 )
          {
            v81 = _mm_unpacklo_ps(LODWORD(v90), LODWORD(v90));
            v82 = _mm_cvtps_pd(v81);
            v82.m128d_f64[0] = v82.m128d_f64[0] + (forcea - v81.m128_f32[0]) * 0.5;
            forcea = _mm_movedup_pd(v82).m128d_f64[0];
          }
        }
        else
        {
          v83 = internalForce.x;
          internalForce.x = 0.0;
          v84 = *pObject;
          externalForce.x = v83;
          v85 = internalForce.y;
          internalForce.y = 0.0;
          externalForce.y = v85;
          v86 = internalForce.z;
          internalForce.z = 0.0;
          externalForce.z = v86;
          if ( (*(v84 + 1456))(pObject) == 0 )
            forcea = forcea + v90;
        }
      }
    }
  }
  if ( pOutput != 0 )
  {
    v43 = internalForce.x * internalForce.x;
    v44 = internalForce.y * internalForce.y;
    v45 = internalForce.z * internalForce.z;
    pOutput->hasNonStaticStress = pObjectList.m_Size > 2;
    v46 = v43 + v44;
    v47 = externalForce.y * externalForce.y;
    pOutput->hasLargeObjectContact = hasLargeObject;
    v48 = v46 + v45;
    v49 = externalForce.z * externalForce.z;
    pOutput->exertedStress = fsqrt(v48);
    pOutput->receivedStress = fsqrt(((externalForce.x * externalForce.x) + v47) + v49);
  }
  objectForce.m_Size = 0;
  if ( (objectForce.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<Vector,int>::Purge(&objectForce.m_Memory), (objectForce.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    pObjectList.m_Size = 0;
    if ( (pObjectList.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      return forcea;
  }
  else
  {
    CUtlMemory<Vector,int>::Purge(&objectForce.m_Memory);
    pObjectList.m_Size = 0;
    if ( (pObjectList.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      return forcea;
  }
  CUtlMemory<CBaseEntity *,int>::Purge(&pObjectList.m_Memory);
  if ( (pObjectList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CBaseEntity *,int>::Purge(&pObjectList.m_Memory);
  return forcea;
}


