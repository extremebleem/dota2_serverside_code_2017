// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/npc/dota_npc_base.cpp:188
class CDamageCalculator {
private:

	const CDOTA_AttackRecord * m_pRecord;  // +0x0
	float fAttackDamage_Physical;  // +0x8
	float fAttackDamage_Physical_IllusionDisplay;  // +0xc
	float fAttackDamage_Magical;  // +0x10
	float fAttackDamage_Pure;  // +0x14
	float fAttackDamage_Total;  // +0x18
	float fAttackDamage_Total_IllusionDisplayTarget;  // +0x1c
	float fAttackDamage_Total_IllusionDisplaySource;  // +0x20
	const bool bProcessOrbs;  // +0x24

	const CBaseEntity * m_pAttackerEntity;  // +0x28
	const CBaseEntity * m_pTargetEntity;  // +0x30
	CDamageCalculator(CDOTA_AttackRecord *);
	~CDamageCalculator();
	CBaseEntity * GetAttackerEntity();
	CBaseEntity * GetTargetEntity();
	CDOTA_BaseNPC * GetAttacker();
	CDOTA_BaseNPC * GetTarget();
	CDOTAPlayer * GetAttackerPlayer();
	CDOTAPlayer * GetTargetPlayer();
	void HandleTargetNotNPC(CBaseEntity *);
	void CalculateSingleFrameProcAttackBonus(const CModifierParams &);
	void CalculateModifierConstantBlock(CModifierParams &);
	void CalculateCombatProficiency();
	void CalculateMagicImmunity();
	void CalculateSpellDamage(const CModifierParams &);
	void CalculateArmorReduction();
	void CalculateDamageMultipliers(CModifierParams &);
	void CalculateSuppressImmuneDamage(const CModifierParams &);
	float CalculateTotalDamage();
	void CalculateOverallDamageReduction(CModifierParams &);
	void CalculateOrbPreEffects(const CModifierParams &);
	void CalculateOrbEffects(const CModifierParams &);
	void CalculateTutorialDamageReduction();
	void PerformPlayerFlashEffect();
	Vector PerformTakeDamageInfo();
	void PerformBloodSpatter(const Vector &);
	void AlertNearbyUnits();

	// sizeof = 88
};

// src/game/server/dota/npc/dota_npc_base.cpp:1376
class C_CDOTA_BaseNPC_MapInstall {
	C_CDOTA_BaseNPC_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/npc/dota_npc_base.cpp:1384
class CTeamFilter : public CRecipientFilter {
public:

	CTeamFilter(CDOTA_BaseNPC *);
	void AddTeam(int);
	virtual ~CTeamFilter();

	// sizeof = 312
};

// src/game/server/dota/npc/dota_npc_base.cpp:6601
class CDOTA_EnemyData {
	float flRange;  // +0x8
	int nRelationshipClass;  // +0xc
	int nAttackBonus;  // +0x10
	CDOTA_EnemyData();
	void DetermineAttackBonus(CDOTA_BaseNPC *, CDOTA_BaseNPC *, float);

	// sizeof = 24
};

// src/game/server/dota/npc/dota_npc_base.cpp:8172
class C_CDOTA_BaseNPC_Additive_MapInstall {
	C_CDOTA_BaseNPC_Additive_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/npc/dota_npc_base.cpp:8639
class CDOTA_BossAttackableTrigger : public CBaseTrigger {
public:

private:

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CDOTA_BossAttackableTrigger(CDOTA_BossAttackableTrigger &);
	CDOTA_BossAttackableTrigger(CDOTA_BossAttackableTrigger &);
	CDOTA_BossAttackableTrigger();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual ~CDOTA_BossAttackableTrigger();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// sizeof = 1480
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GetSequenceVariantForActivity  (line 73, @0x0000000002901250, libserver.so)
// calls: CBaseAnimating::GetModelPtr, CModel::GetActivityToSequenceMapping, CActivityToSequenceMapping::GetSequenceVariantForActivity
// callers: CDOTABody::StartAnimation, TE_UnitAnimation
int __fastcall GetSequenceVariantForActivity(HSequence iSequence, CDOTA_BaseNPC *pEntity, int act)
{
  const CModel *ModelPtr; // rax
  CActivityToSequenceMapping *ActivityToSequenceMapping; // rax

  ModelPtr = CBaseAnimating::GetModelPtr(pEntity);
  if ( ModelPtr == 0 )
    return 0;
  ActivityToSequenceMapping = CModel::GetActivityToSequenceMapping(ModelPtr);
  return CActivityToSequenceMapping::GetSequenceVariantForActivity(ActivityToSequenceMapping, iSequence, act);
}


// GetUnitCombatProficiency  (line 82, @0x0000000002901290, libserver.so)
// callers: CDOTA_Bot::DoCreepAttackAndDeny, CDOTA_TeamCommander::DoCreepHealthAnalysis, DamageImpact, CDOTA_Modifier_DeathProphet_Exorcism::OnIntervalThink
float __fastcall GetUnitCombatProficiency(int AttackClass, int ArmorClass)
{
  float result; // xmm0_4

  switch ( AttackClass )
  {
    case 0:
      if ( ArmorClass != 0 )
        return 1.0;
      return 0.5;
    case 1:
      if ( ArmorClass == 1 )
        return 0.75;
      if ( ArmorClass != 0 )
        return 1.0;
      return 0.69999999;
    case 2:
      if ( ArmorClass == 1 )
        return 0.5;
      if ( ArmorClass != 2 )
      {
        result = 0.34999999;
        if ( ArmorClass != 0 )
          return 1.0;
        return result;
      }
      return 1.5;
    default:
      break;
  }
  if ( AttackClass != 3 )
    return 1.0;
  if ( ArmorClass == 0 )
    return 1.5;
  result = 0.85000002;
  if ( ArmorClass != 1 )
    return 1.0;
  return result;
}


// ApplyDamage  (line 148, @0x000000000295afc0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// calls: CBaseEntity::GetHealth, GetAttackRecordsManager, CDOTA_AttackRecordManager::AddNewAttackRecord, DamageImpact
// callers: CDOTA_ActionRunner::PerformAction_Damage, CDOTA_Ability_Creature_Fire_Breath::OnProjectileHit, CDOTA_Ability_Slithereen_Riptide::OnSpellStart, CDOTA_Modifier_Lesser_NightCrawler_Pounce::UpdateHorizontalMotion, CDOTA_Ability_Greevil_Miniboss_Black_BrainSap::OnSpellStart, CDOTA_Ability_Greevil_Miniboss_Orange_DragonSlave::OnProjectileHit, CDOTA_Ability_SatyrHellcaller_Shockwave::OnProjectileHit, CDOTA_Buff::PerformDOT, CDOTA_Modifier_Spawnlord_Master_Freeze_Root::OnIntervalThink, CDOTA_Modifier_GnollAssassin_EnvenomedWeapon_Poison::OnIntervalThink, CDOTA_Modifier_Greevil_Miniboss_Purple_VenomousGale::OnIntervalThink, CDOTA_Modifier_Tornado_Tempest::OnIntervalThink (366 total)
double __fastcall ApplyDamage(
        CDOTA_BaseNPC *pAttacker,
        CDOTA_BaseNPC *pTarget,
        CDOTABaseAbility *pInflictor,
        float flDamage,
        int iDamageType,
        int iDamageFlags)
{
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *v12; // rax
  CEntityIdentity *m_pEntity; // rcx
  int v14; // edx
  __int16 v15; // si
  CEntityIdentity *v16; // rcx
  int v17; // edx
  __int16 v18; // si
  CEntityIdentity *v19; // rdx
  int v20; // ecx
  __int16 v21; // si
  double result; // xmm0_8

  if ( pTarget == 0 || CBaseEntity::GetHealth(pTarget) <= 0 )
    return 0.0;
  AttackRecordsManager = GetAttackRecordsManager();
  v12 = CDOTA_AttackRecordManager::AddNewAttackRecord(AttackRecordsManager);
  if ( pAttacker != 0 && (m_pEntity = pAttacker->m_pEntity) != 0 )
  {
    v14 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v15 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(v12->m_hSource.m_Index) = v15 | v12->m_hSource.m_Index & 0x8000;
    v12->m_hSource.m_Index = (v14 << 15) | v12->m_hSource.m_Index & 0x7FFF;
  }
  else
  {
    v12->m_hSource.m_Index = -1;
  }
  if ( pInflictor != 0 && (v16 = pInflictor->m_pEntity) != 0 )
  {
    v17 = (v16->m_EHandle.m_Index >> 15) - (v16->m_flags & 1);
    v18 = 0x7FFF;
    if ( v16->m_EHandle.m_Index != -1 )
      v18 = v16->m_EHandle.m_Index & 0x7FFF;
    LOWORD(v12->m_hInflictor.m_Index) = v18 | v12->m_hInflictor.m_Index & 0x8000;
    v12->m_hInflictor.m_Index = (v17 << 15) | v12->m_hInflictor.m_Index & 0x7FFF;
  }
  else
  {
    v12->m_hInflictor.m_Index = -1;
  }
  v19 = pTarget->m_pEntity;
  if ( v19 != 0 )
  {
    v20 = (v19->m_EHandle.m_Index >> 15) - (v19->m_flags & 1);
    v21 = 0x7FFF;
    if ( v19->m_EHandle.m_Index != -1 )
      v21 = v19->m_EHandle.m_Index & 0x7FFF;
    LOWORD(v12->m_hTarget.m_Index) = v21 | v12->m_hTarget.m_Index & 0x8000;
    v12->m_hTarget.m_Index = (v20 << 15) | v12->m_hTarget.m_Index & 0x7FFF;
  }
  else
  {
    v12->m_hTarget.m_Index = -1;
  }
  v12->m_flDamage = flDamage;
  v12->m_iDamageType = iDamageType;
  v12->m_iFlags = iDamageFlags;
  v12->m_bAttack = 0;
  v12->m_iDamageCategory = 0;
  v12->m_flOriginalDamage = flDamage;
  switch ( iDamageType )
  {
    case 2:
      v12->m_flDamageMagical = flDamage;
      break;
    case 4:
      v12->m_flDamagePure = flDamage;
      break;
    case 1:
      v12->m_flDamagePhysical = flDamage;
      break;
    default:
      break;
  }
  *&result = DamageImpact(v12);
  return result;
}


// DamageImpact  (line 864, @0x00000000029586a0, libserver.so)  // inlines: AlertNearbyUnits, CBroadcastRecipientFilter, CDOTAPVSFilter, CDOTAUserMsg_TEDotaBloodImpact_t, CDamageCalculator, CEntityHandle, CHandle, CModifierParams, CNetMessagePB, CReliableBroadcastRecipientFilter, CUserMessagePB, CVProfScope, CalculateArmorReduction, CalculateCombatProficiency, CalculateDamageMultipliers, CalculateMagicImmunity, CalculateModifierConstantBlock, CalculateOrbEffects, CalculateOrbPreEffects, CalculateOverallDamageReduction, CalculateSingleFrameProcAttackBonus, CalculateSpellDamage, CalculateSuppressImmuneDamage, CalculateTotalDamage, CalculateTutorialDamageReduction, Clamp<float>, FindGameEvent<CDOTAUserMsg_TEDotaBloodImpact_t>, FindModifierByName, FindOrCreateGameEvent<CDOTAUserMsg_TEDotaBloodImpact_t>, Get, GetBool, GetContainedItem, GetEHandle, GetEntryIndex, GetFloat, GetInstance, GetInt, GetModifier_Constant_Additive, GetModifier_Constant_First, GetModifier_Constant_Highest, GetModifier_Percentage_Additive, GetModifier_Percentage_Multiplicative, GetOwnerEntity, GetSerialNumber, GetTeamNumber, HandleTargetNotNPC, InState, InValidate, Init, IsBuilding, IsEnabled, IsInvulnerable, IsListeningToEvent, IsRealHero, Min<float>, NormalizeInPlace, PerformBloodSpatter, PerformPlayerFlashEffect, PerformTakeDamageInfo, PostEvent<CDOTAUserMsg_TEDotaBloodImpact_t>, SendUserMessage<CDOTAUserMsg_TEDotaBloodImpact_t>, Set, SetAttacker, SetDamageRecord, SetDotaDamageCategory, SetDotaDamageType, SetOriginalDamage, SetTarget, ToBasePlayer, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAPlayer, ToNetworkableInt, VectorSubtract, operator CBaseEntity*, operator CDOTA_Item*, operator-, operator=, operator[], set_entity, set_has_entity, set_has_ynormal, set_scale, set_xnormal, set_ynormal, ~CBroadcastRecipientFilter, ~CDOTAPVSFilter, ~CDOTAUserMsg_TEDotaBloodImpact_t, ~CDamageCalculator, ~CNetMessagePB, ~CReliableBroadcastRecipientFilter, ~CUserMessagePB, ~CVProfScope
// calls: CEntityHandle::operator CEntityInstance*, CEntityHandle::GetHandleEntity, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, SendOverheadEventMessage, GetUnitCombatProficiency, CDOTA_ModifierManager::GetModifier_Constant_First_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal, FireModifierEvent, CBaseEntity::GetAbsOrigin, CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::TakeDamage (61 total)
// callers: CDOTA_AttackRecord::OnProjectileHit, CDOTA_Modifier_ControllerTest_MeleeAttack::OnIntervalThink, ApplyDamage, CDOTA_BaseNPC::PerformAttack, CDOTA_Ability_Holdout_Multishot::OnProjectileHit_ExtraData, CDOTA_Ability_Luna_MoonGlaive::OnProjectileHit_ExtraData
// strings: "CDOTA_BaseNPC::DamageImpact", "Evade_Melee.Player", "Damage_Melee.Player", "particles/generic_gameplay/damage_flash_big.vpcf", "particles/generic_gameplay/damage_flash.vpcf", "attach_hitloc" (14 total)
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TEDotaBloodImpact_t>(bool)::s_hEvent
float __fastcall DamageImpact(CDOTA_AttackRecord *pRecord)
{
  int m_enabled; // r9d
  CEntityInstance *v3; // r13
  CEntityInstance *v4; // r12
  IHandleEntity *HandleEntity; // rax
  CDOTAPlayer *v6; // r14
  IHandleEntity *v7; // rax
  CDOTAPlayer *v8; // r15
  CEntityIdentity *m_pEntity; // rdx
  __int16 v10; // cx
  CEntityIdentity *v11; // rdx
  __int16 v12; // cx
  int m_iFailType; // eax
  CDOTA_Orb *m_pOrb; // rdx
  __int16 m_iRecord; // si
  CDOTA_Orb *m_pOrb2; // rdx
  int m_iDamageCategory; // ecx
  bool v18; // zf
  int m_iFlags; // edx
  __int64 m_CScriptComponent_low; // rax
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  float v26; // xmm2_4
  __int64 v27; // rax
  float v28; // xmm0_4
  float UnitCombatProficiency; // xmm0_4
  __int64 v30; // rax
  float v31; // xmm5_4
  __int64 v32; // rax
  float v33; // xmm0_4
  int v34; // eax
  __int64 v35; // rax
  float v36; // xmm0_4
  CDOTA_ModifierManager *p_m_worldGroupId; // r15
  __int64 vptr_IHandleEntity_high; // rax
  __int64 m_pEntity_low; // rax
  __int64 v40; // rax
  float v41; // r14d
  __int64 v42; // rax
  __int64 v43; // rax
  IHandleEntity *v44; // rax
  CDOTAPlayer *v45; // r14
  IHandleEntity *v46; // rax
  CDOTAPlayer *v47; // r14
  IHandleEntity *v48; // rax
  IHandleEntity *v49; // r14
  float m_flCriticalDisplay; // xmm0_4
  int v51; // ecx
  const Vector *AbsOrigin; // r14
  const Vector *v53; // rax
  vec_t v54; // xmm2_4
  vec_t v55; // xmm0_4
  float m_flDamage; // xmm1_4
  int v57; // r15d
  const Vector *v58; // r8
  CBaseEntity *v59; // rax
  int m_iDamageType; // eax
  vec_t z; // r15d
  double v62; // xmm0_8
  __int64 v63; // rax
  CDOTAPlayer *v64; // r14
  float v65; // xmm0_4
  const char *v66; // rsi
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  float result; // xmm0_4
  float v69; // xmm0_4
  __m128d v70; // xmm1
  float v71; // xmm5_4
  float ArmorReductionForDamageType; // xmm0_4
  __int64 v73; // rax
  float v74; // xmm0_4
  __int64 v75; // rax
  int Modifier_Constant_Additive_Internal; // edi
  CDOTA_Orb *v77; // rdi
  CDOTA_Orb *v78; // rdi
  CDOTA_Orb *v79; // rdi
  CDOTA_Orb *v80; // rdi
  __int64 v81; // rax
  float v82; // xmm0_4
  __int64 v83; // rax
  float v84; // xmm0_4
  __m128i v85; // xmm3
  CEntityInstance *v86; // r12
  float v87; // xmm1_4
  CDOTA_Commander *v88; // rax
  __int64 v89; // rax
  const CEntityInstance *v90; // r15
  char v91; // al
  const CEntityInstance *v92; // rsi
  const char *v93; // r15
  CDOTA_ParticleManager *ParticleManager; // rax
  int v95; // r15d
  CDOTA_ParticleManager *v96; // rax
  CDOTA_ParticleManager *v97; // rax
  int m_Id; // eax
  int v99; // eax
  __m128i v100; // xmm0
  int v101; // r14d
  CEntityIdentity *v102; // rax
  int v103; // edx
  unsigned __int16 v104; // cx
  int v105; // ecx
  const Vector *v106; // r14
  __int64 v107; // r14
  IGameEventSystem *v108; // r15
  __int64 v109; // rax
  CDOTAPlayer *v110; // r14
  float v111; // xmm0_4
  __int64 v112; // rax
  float v113; // xmm0_4
  __m128i v114; // xmm7
  __int64 m_pAsString_high; // rax
  float v116; // xmm0_4
  float v117; // xmm0_4
  __m128i v118; // xmm5
  float Modifier_Constant_Additive; // xmm0_4
  float v120; // xmm0_4
  CDOTA_ParticleManager *v121; // rax
  int Particle; // r15d
  CDOTA_ParticleManager *v123; // rax
  CDOTA_ParticleManager *v124; // rax
  __int64 v125; // rax
  float Modifier_Percentage_Additive_Internal; // xmm0_4
  float AttackRange; // xmm0_4
  float v128; // xmm1_4
  const char *v129; // rax
  const CEntityInstance *v130; // rax
  const char *v131; // rsi
  const char *v132; // rax
  CModifieractoryDictionary *v133; // rax
  IModifierFactory *Factory; // rax
  CDOTAPlayer *v135; // rax
  CDOTAPlayer *v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  float v139; // xmm0_4
  float v140; // xmm2_4
  __int64 v141; // rax
  __int64 v142; // rax
  float Modifier_Constant_Highest_Internal; // xmm0_4
  CDOTAPlayer *v144; // rax
  CDOTAPlayer *v145; // rax
  void *v146; // rax
  CEntityInstance *v147; // r14
  const char *ReplacementSound; // rax
  const char *v149; // rsi
  float v150; // [rsp+18h] [rbp-488h]
  int fOurHeightb; // [rsp+20h] [rbp-480h]
  float fOurHeight; // [rsp+20h] [rbp-480h]
  float fOurHeighta; // [rsp+20h] [rbp-480h]
  bool bWasAlive; // [rsp+28h] [rbp-478h]
  CDOTA_ModifierManager *bWasAlivea; // [rsp+28h] [rbp-478h]
  float bWasAliveb; // [rsp+28h] [rbp-478h]
  float bWasAlivec; // [rsp+28h] [rbp-478h]
  char bWasAlived; // [rsp+28h] [rbp-478h]
  float bWasAlivee; // [rsp+28h] [rbp-478h]
  float bWasAlivef; // [rsp+28h] [rbp-478h]
  bool VProf_866; // [rsp+3Fh] [rbp-461h]
  CDOTA_BaseNPC *pUnit; // [rsp+40h] [rbp-460h]
  CDOTA_BaseNPC *v163; // [rsp+48h] [rbp-458h]
  CEntityInstance *lpsrc; // [rsp+50h] [rbp-450h]
  float lpsrca; // [rsp+50h] [rbp-450h]
  CDOTA_ModifierManager *lpsrcb; // [rsp+50h] [rbp-450h]
  CDOTA_ModifierManager *lpsrcc; // [rsp+50h] [rbp-450h]
  float m_flDamagePhysical_IllusionDisplay; // [rsp+58h] [rbp-448h]
  float v169; // [rsp+58h] [rbp-448h]
  float flDamage; // [rsp+5Ch] [rbp-444h]
  float flDamagea; // [rsp+5Ch] [rbp-444h]
  float flDamageb; // [rsp+5Ch] [rbp-444h]
  float damagePosition; // [rsp+60h] [rbp-440h]
  Vector *damagePositiona; // [rsp+60h] [rbp-440h]
  Vector *damagePositionb; // [rsp+60h] [rbp-440h]
  float pAttacker; // [rsp+68h] [rbp-438h]
  float pAttackera; // [rsp+68h] [rbp-438h]
  float pAttackerb; // [rsp+68h] [rbp-438h]
  CBaseEntity *pAttackerd; // [rsp+68h] [rbp-438h]
  float pAttackerc; // [rsp+68h] [rbp-438h]
  EHANDLE hAbility; // [rsp+70h] [rbp-430h] BYREF
  Vector vecForceDir; // [rsp+80h] [rbp-420h] BYREF
  Vector damageForce; // [rsp+90h] [rbp-410h] BYREF
  _QWORD v184[2]; // [rsp+A0h] [rbp-400h] BYREF
  int v185; // [rsp+B0h] [rbp-3F0h]
  int v186; // [rsp+B8h] [rbp-3E8h]
  int v187; // [rsp+BCh] [rbp-3E4h]
  vec_t x; // [rsp+C0h] [rbp-3E0h]
  vec_t y; // [rsp+C4h] [rbp-3DCh]
  CModifierParams params; // [rsp+D0h] [rbp-3D0h] BYREF
  CTakeDamageInfo inputInfo; // [rsp+160h] [rbp-340h] BYREF
  CRecipientFilter pFilter; // [rsp+1F0h] [rbp-2B0h] BYREF
  CRecipientFilter filter; // [rsp+330h] [rbp-170h] BYREF
  unsigned __int64 v194; // [rsp+468h] [rbp-38h]

  v194 = __readfsqword(0x28u);
  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_866 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_BaseNPC::DamageImpact", 0, "Bots", 0, 4);
  damagePosition = pRecord->m_flDamagePhysical;
  bWasAlive = pRecord->m_bProcessProcs;
  m_flDamagePhysical_IllusionDisplay = pRecord->m_flDamagePhysical_IllusionDisplay;
  pAttacker = pRecord->m_flDamageMagical;
  flDamage = pRecord->m_flDamagePure;
  v3 = CEntityHandle::operator CEntityInstance *(&pRecord->m_hSource);
  lpsrc = CEntityHandle::operator CEntityInstance *(&pRecord->m_hTarget);
  if ( v3 == 0 || BYTE3(v3[7]._vptr_IHandleEntity) == 0 )
    v3 = 0;
  if ( lpsrc != 0 && BYTE3(lpsrc[7]._vptr_IHandleEntity) != 0 )
    v4 = lpsrc;
  else
    v4 = 0;
  if ( v3 == 0
    || (HandleEntity = CEntityHandle::GetHandleEntity(&v3[11].m_pEntity + 1), v6 = HandleEntity, HandleEntity == 0)
    || (*(HandleEntity->_vptr_IHandleEntity + 140))(HandleEntity) == 0 )
  {
    v6 = 0;
  }
  if ( v4 == 0
    || (v7 = CEntityHandle::GetHandleEntity(&v4[11].m_pEntity + 1), v8 = v7, v7 == 0)
    || (*(v7->_vptr_IHandleEntity + 140))(v7) == 0 )
  {
    v8 = 0;
  }
  if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 )
    v163 = v3;
  else
    v163 = 0;
  if ( v4 != 0 && BYTE3(v4[7]._vptr_IHandleEntity) != 0 )
    pUnit = v4;
  else
    pUnit = 0;
  params.ability.m_Index = -1;
  params.fDamage = 0.0;
  params.fOriginalDamage = 0.0;
  params.nActivity = -1;
  params.bTooltip = 0;
  params.nTooltipParam = 0;
  params.bIgnoreInvis = 0;
  params.bNoCooldown = 0;
  params.bReincarnate = 0;
  params.bDoNotConsume = 0;
  params.fDistance = 0.0;
  params.inflictor.m_Index = -1;
  params.nDamageflags = 0;
  params.nDamageCategory = 0;
  memset(&params.pOrb, 0, 24);
  params.bCraniumBasherTested = 0;
  params.bHeartRegenApplied = 0;
  params.bDiffusalApplied = 0;
  params.bChainLightningConsidered = 0;
  params.bSuppressDamage = 0;
  params.bRangedAttack = 0;
  params.nPlayerids_stick = 0;
  params.hattacker.m_Index = -1;
  params.htarget.m_Index = -1;
  params.hunit.m_Index = -1;
  if ( v3 != 0 )
  {
    m_pEntity = v3->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v10 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      params.hattacker.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                               | v10 & 0x7FFF;
    }
  }
  if ( v4 != 0 )
  {
    v11 = v4->m_pEntity;
    if ( v11 != 0 )
    {
      v12 = 0x7FFF;
      if ( v11->m_EHandle.m_Index != -1 )
        v12 = v11->m_EHandle.m_Index & 0x7FFF;
      params.htarget.m_Index = (((v11->m_EHandle.m_Index >> 15) - (v11->m_flags & 1)) << 15) | v12 & 0x7FFF;
    }
  }
  if ( pRecord->m_iDamageCategory != 1 || v163 == 0 || pUnit == 0 )
    goto LABEL_31;
  m_iFailType = pRecord->m_iFailType;
  if ( m_iFailType == 6 )
    goto LABEL_32;
  if ( !pRecord->m_bNeverMiss || (pUnit->m_iUnitType & 0x10) != 0 )
  {
    if ( (v163->m_iAttackCapabilities.m_Value & 2) != 0
      && (pUnit->m_iUnitType & 0x20000) == 0
      && pUnit->m_pCollision != 0 )
    {
      fOurHeightb = pRecord->m_flAttackHeight;
      if ( fOurHeightb < CDOTAFogOfWarSystem::FindHeightLevelForEntity(&g_DOTAFogOfWarSystem, pUnit)
        && RollPercentage(25) )
      {
        pRecord->m_iFailType = 1;
      }
    }
    if ( !pRecord->m_bRangedAttack )
    {
      AttackRange = CDOTA_BaseNPC::GetAttackRange(v163);
      if ( !CDOTA_BaseNPC::IsEntityInRange(v163, pUnit, AttackRange + 350.0, v128) )
        pRecord->m_iFailType = 5;
    }
    v75 = v163->m_ModifierManager.m_buffsForModifiers[44];
    if ( v75 == 0xFF || v163->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v75].m_Size <= 0 )
      Modifier_Constant_Additive_Internal = 0;
    else
      Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                              &v163->m_ModifierManager,
                                              modifierfunction::MODIFIER_PROPERTY_MISS_PERCENTAGE,
                                              &CModifierParams::s_Default);
    if ( (pUnit->m_iUnitType & 0x20000) == 0 && RollPercentage(Modifier_Constant_Additive_Internal) )
      pRecord->m_iFailType = 2;
    if ( (pUnit->m_nUnitState64.m_Value & 0x2000) == 0 )
    {
      v141 = pUnit->m_ModifierManager.m_buffsForModifiers[40];
      if ( v141 == 0xFF )
        fOurHeighta = 0.0;
      else
        fOurHeighta = pUnit->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v141].m_Size <= 0
                    ? 0.0
                    : (CDOTA_ModifierManager::GetModifier_Percentage_Multiplicative_Internal(
                         &pUnit->m_ModifierManager,
                         modifierfunction::MODIFIER_PROPERTY_EVASION_CONSTANT,
                         &params)
                     - 1.0)
                    * 100.0;
      v142 = pUnit->m_ModifierManager.m_buffsForModifiers[41];
      if ( v142 == 0xFF || pUnit->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v142].m_Size <= 0 )
        Modifier_Constant_Highest_Internal = 0.0;
      else
        Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                               &pUnit->m_ModifierManager,
                                               modifierfunction::MODIFIER_PROPERTY_NEGATIVE_EVASION_CONSTANT,
                                               &CModifierParams::s_Default);
      if ( RollPseudoRandomPercentage(
             (fOurHeighta - Modifier_Constant_Highest_Internal),
             DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_GENERIC_EVASION,
             pUnit) )
      {
        pRecord->m_iFailType = 3;
        if ( (v163->m_iUnitType & 1) == 0
          || v163->m_bIsIllusion.m_Value
          || (pUnit->m_iUnitType & 1) == 0
          || pUnit->m_bIsIllusion.m_Value )
        {
          goto LABEL_329;
        }
        CDOTA_CombatLog::AddAttackEvadeEvent(&g_DOTACombatLog, pUnit, 0);
      }
    }
    m_iFailType = pRecord->m_iFailType;
  }
  if ( (m_iFailType & 0xFFFFFFFB) != 0 )
  {
LABEL_329:
    v135 = (*(v163->_vptr_IHandleEntity + 413))(v163);
    if ( v135 != 0 )
      SendOverheadEventMessage(v135, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_MISS, pUnit, 0, v135);
    v136 = (*(pUnit->_vptr_IHandleEntity + 413))(pUnit);
    if ( v136 != 0 )
      SendOverheadEventMessage(v136, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_EVADE, pUnit, 0, v136);
  }
  if ( pRecord->m_bRangedAttack && pRecord->m_bUseProjectile )
  {
    v129 = (*(v163->_vptr_IHandleEntity + 460))(v163);
    if ( v129 != 0 && *v129 != 0 )
    {
      CFmtStrN<256,false>::CFmtStrN(&filter, "%s.ProjectileImpact", v129);
      ReplacementSound = CDOTA_BaseNPC::FindReplacementSound(v163, &filter.m_nBufType + 1);
      v149 = "Hero_Range.Miss";
      if ( pRecord->m_iFailType == 0 )
        v149 = ReplacementSound;
      CDOTA_BaseNPC::UnitEmitSound(pUnit, v149, 0.0, 0, 0);
    }
    if ( (*(pUnit->_vptr_IHandleEntity + 413))(pUnit) != 0
      && (pUnit->m_iUnitType & 1) != 0
      && !pUnit->m_bIsIllusion.m_Value )
    {
      CRecipientFilter::CRecipientFilter(&filter);
      CRecipientFilter::RemoveAllRecipients(&filter);
      v130 = (*(pUnit->_vptr_IHandleEntity + 413))(pUnit);
      CRecipientFilter::AddRecipient(&filter, v130);
      if ( (v163->m_iUnitType & 4) != 0 )
      {
        v131 = "Tower.HeroImpact";
        v132 = "Evade_Tower.Player";
      }
      else
      {
        v131 = "Damage_Projectile.Player";
        v132 = "Evade_Projectile.Player";
      }
      if ( pRecord->m_iFailType != 0 )
        v131 = v132;
      CDOTA_BaseNPC::UnitEmitSound(pUnit, v131, 0.0, 0, &filter);
      CRecipientFilter::~CRecipientFilter(&filter);
    }
    goto LABEL_31;
  }
  m_iFailType = pRecord->m_iFailType;
  if ( m_iFailType != 0 && pRecord->m_guidAttackSound.m_nGuid.m_Data != 0 )
  {
    CBaseEntity::StopSound(&pRecord->m_guidAttackSound);
    pRecord->m_guidAttackSound.m_nGuid.m_Data = 0;
    m_iFailType = pRecord->m_iFailType;
    pRecord->m_guidAttackSound.m_hStackHash = -1;
  }
  if ( (pUnit->m_iUnitType & 1) != 0 && !pUnit->m_bIsIllusion.m_Value )
  {
    v66 = "Evade_Melee.Player";
    if ( m_iFailType == 0 )
      v66 = "Damage_Melee.Player";
    DOTA_EmitSound(1, v66, pUnit);
LABEL_31:
    m_iFailType = pRecord->m_iFailType;
  }
LABEL_32:
  if ( v4 == 0 )
  {
    if ( (m_iFailType - 1) > 1 && m_iFailType != 5 && lpsrc != 0 )
    {
      v86 = __dynamic_cast(lpsrc, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_Item_Rune, 0);
      if ( v86 != 0 )
      {
        if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 && (v3[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          CDOTA_BaseNPC_Hero::PerformAutoTaunt(v3, COERCE_DOUBLE(1065353216), v87, 0);
      }
      else
      {
        v146 = __dynamic_cast(lpsrc, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_Item_Physical, 0);
        v86 = v146;
        if ( v146 == 0 )
          goto LABEL_182;
        if ( (*(*(v146 + 1) + 49LL) & 2) != 0 )
          goto LABEL_182;
        v147 = CEntityHandle::operator CEntityInstance *(v146 + 308);
        if ( v147 == 0 || (*(v147->_vptr_IHandleEntity + 352))(v147) == 0 )
          goto LABEL_182;
        (*(v147->_vptr_IHandleEntity + 342))(v147, v3);
        UTIL_RemoveImmediate(v147);
      }
      UTIL_RemoveImmediate(v86);
    }
LABEL_182:
    v65 = 0.0;
    goto LABEL_183;
  }
  m_pOrb = pRecord->m_pOrb;
  params.iFailType = m_iFailType;
  m_iRecord = pRecord->m_iRecord;
  params.bSuppressDamage = 0;
  params.pOrb = m_pOrb;
  m_pOrb2 = pRecord->m_pOrb2;
  params.iRecord = m_iRecord;
  LOBYTE(m_iRecord) = pRecord->m_bRangedAttack;
  m_iDamageCategory = pRecord->m_iDamageCategory;
  params.fDamage = damagePosition;
  v18 = !pRecord->m_bFakeAttack;
  params.pOrb2 = m_pOrb2;
  LODWORD(m_pOrb2) = pRecord->m_hInflictor.m_Index;
  params.bRangedAttack = m_iRecord;
  LOBYTE(m_iRecord) = pRecord->m_bProcessProcs;
  params.nDamageCategory = m_iDamageCategory;
  params.inflictor.m_Index = m_pOrb2;
  LODWORD(m_pOrb2) = pRecord->m_iDamageType;
  params.bProcessProcs = m_iRecord;
  pRecord->m_flOriginalDamage = (pAttacker + damagePosition) + flDamage;
  params.fOriginalDamage = (pAttacker + damagePosition) + flDamage;
  params.nDamageType = m_pOrb2;
  m_iFlags = pRecord->m_iFlags;
  params.nDamageflags = m_iFlags;
  if ( !v18 )
  {
    params.fOriginalDamage = 0.0;
    pRecord->m_flOriginalDamage = 0.0;
    flDamage = 0.0;
    pAttacker = 0.0;
    damagePosition = 0.0;
  }
  if ( (m_iFlags & 4) == 0 && (LOBYTE(v4[71]._vptr_IHandleEntity) != 0 || (BYTE1(v4[58]._vptr_IHandleEntity) & 1) != 0) )
  {
    pRecord->m_iFailType = 4;
    if ( v163 == 0
      || (v163->m_iUnitType & 1) == 0
      || v163->m_bIsIllusion.m_Value
      || pUnit == 0
      || (pUnit->m_iUnitType & 1) == 0
      || pUnit->m_bIsIllusion.m_Value )
    {
      goto LABEL_181;
    }
    CDOTA_CombatLog::AddAttackEvadeEvent(&g_DOTACombatLog, pUnit, m_iDamageCategory == 0);
    m_iFailType = pRecord->m_iFailType;
  }
  if ( m_iFailType != 6 && m_iFailType != 0 )
  {
LABEL_181:
    FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_ATTACK_FAIL, &params);
    goto LABEL_182;
  }
  if ( pRecord->m_iDamageCategory != 1 )
    goto LABEL_40;
  v77 = pRecord->m_pOrb;
  if ( v77 != 0 )
    (*(v77->_vptr_CDOTA_Orb + 7))(v77, &params);
  v78 = pRecord->m_pOrb2;
  if ( v78 != 0 )
    (*(v78->_vptr_CDOTA_Orb + 7))(v78, &params);
  if ( pRecord->m_iDamageCategory != 1 )
    goto LABEL_40;
  if ( (v4[58]._vptr_IHandleEntity & 4) == 0 )
    goto LABEL_219;
  v133 = ModifierFactoryDictionary();
  Factory = CModifieractoryDictionary::FindFactory(v133, "MODIFIER_PROPERTY_OVERRIDE_ATTACK_MAGICAL");
  if ( CDOTA_ModifierManager::FindModifierByName(
         &v163->m_ModifierManager,
         Factory,
         "MODIFIER_PROPERTY_OVERRIDE_ATTACK_MAGICAL",
         0) == 0 )
    goto LABEL_181;
  if ( pRecord->m_iDamageCategory == 1 )
  {
LABEL_219:
    if ( v3 == 0 )
    {
      pRecord->m_flOriginalDamage = (pAttacker + damagePosition) + flDamage;
      params.fOriginalDamage = (pAttacker + damagePosition) + flDamage;
      goto LABEL_72;
    }
    if ( bWasAlive )
    {
      lpsrcb = &v3[64].m_worldGroupId;
      Modifier_Constant_Additive = CDOTA_ModifierManager::GetModifier_Constant_Additive(
                                     &v3[64].m_worldGroupId,
                                     modifierfunction::MODIFIER_PROPERTY_PROCATTACK_BONUS_DAMAGE_PHYSICAL,
                                     &params);
      fOurHeight = Modifier_Constant_Additive;
      if ( LOBYTE(v3[71].m_pEntity) == 0 )
      {
        damagePosition = damagePosition + Modifier_Constant_Additive;
        pAttacker = CDOTA_ModifierManager::GetModifier_Constant_Additive(
                      lpsrcb,
                      modifierfunction::MODIFIER_PROPERTY_PROCATTACK_BONUS_DAMAGE_MAGICAL,
                      &params)
                  + pAttacker;
        flDamage = CDOTA_ModifierManager::GetModifier_Constant_Additive(
                     lpsrcb,
                     modifierfunction::MODIFIER_PROPERTY_PROCATTACK_BONUS_DAMAGE_PURE,
                     &params)
                 + flDamage;
      }
      v120 = CDOTA_ModifierManager::GetModifier_Constant_Additive(
               lpsrcb,
               modifierfunction::MODIFIER_PROPERTY_PROCATTACK_FEEDBACK,
               &params);
      damagePosition = damagePosition + v120;
      m_flDamagePhysical_IllusionDisplay = (v120 + fOurHeight) + m_flDamagePhysical_IllusionDisplay;
      FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_ATTACK_LANDED, &params);
    }
    pRecord->m_flOriginalDamage = (pAttacker + damagePosition) + flDamage;
    params.fOriginalDamage = (pAttacker + damagePosition) + flDamage;
  }
  else
  {
LABEL_40:
    pRecord->m_flOriginalDamage = (pAttacker + damagePosition) + flDamage;
    params.fOriginalDamage = (pAttacker + damagePosition) + flDamage;
    if ( v3 == 0 )
      goto LABEL_72;
  }
  if ( LOBYTE(v4[71].m_pEntity) == 0 )
  {
    bWasAlivea = &v4[64].m_worldGroupId;
    m_CScriptComponent_low = LOBYTE(v4[67].m_CScriptComponent);
    params.fDamage = damagePosition;
    if ( m_CScriptComponent_low == 0xFF )
    {
      v21 = 0.0;
    }
    else if ( *(*&v4[65].m_worldGroupId.m_nHashCode + 24LL * m_CScriptComponent_low) <= 0 )
    {
      v21 = 0.0;
    }
    else
    {
      v21 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
              bWasAlivea,
              modifierfunction::MODIFIER_PROPERTY_TOTAL_CONSTANT_BLOCK_UNAVOIDABLE_PRE_ARMOR,
              &params);
      m_CScriptComponent_low = LOBYTE(v4[67].m_CScriptComponent);
    }
    v22 = fminf(damagePosition, v21);
    if ( v22 > 0.0 )
    {
      damagePosition = damagePosition - v22;
      m_flDamagePhysical_IllusionDisplay = m_flDamagePhysical_IllusionDisplay - v22;
    }
    params.fDamage = pAttacker;
    if ( m_CScriptComponent_low == 0xFF || *(*&v4[65].m_worldGroupId.m_nHashCode + 24LL * m_CScriptComponent_low) <= 0 )
    {
      v23 = 0.0;
    }
    else
    {
      v23 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
              bWasAlivea,
              modifierfunction::MODIFIER_PROPERTY_TOTAL_CONSTANT_BLOCK_UNAVOIDABLE_PRE_ARMOR,
              &params);
      m_CScriptComponent_low = LOBYTE(v4[67].m_CScriptComponent);
    }
    v24 = fminf(pAttacker, v23);
    if ( v24 > 0.0 )
      pAttacker = pAttacker - v24;
    params.fDamage = flDamage;
    if ( m_CScriptComponent_low == 0xFF || *(*&v4[65].m_worldGroupId.m_nHashCode + 24 * m_CScriptComponent_low) <= 0 )
      v25 = 0.0;
    else
      v25 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
              bWasAlivea,
              modifierfunction::MODIFIER_PROPERTY_TOTAL_CONSTANT_BLOCK_UNAVOIDABLE_PRE_ARMOR,
              &params);
    v26 = fminf(flDamage, v25);
    if ( v26 > 0.0 )
      flDamage = flDamage - v26;
    params.fDamage = damagePosition;
  }
  if ( (v3[43].m_iszPrivateVScripts.u.m_Id & 0x193) != 0
    && (BYTE1(v4[58]._vptr_IHandleEntity) & 0x10) == 0
    && (pRecord->m_iFlags & 8) == 0 )
  {
    lpsrcc = &v4[64].m_worldGroupId;
    v137 = *(&v4[67].m_worldGroupId + 6);
    params.fDamage = damagePosition;
    if ( v137 == 0xFF )
      bWasAlivee = 0.0;
    else
      bWasAlivee = *(*&v4[65].m_worldGroupId.m_nHashCode + 24 * v137) <= 0
                 ? 0.0
                 : CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                     lpsrcc,
                     modifierfunction::MODIFIER_PROPERTY_PHYSICAL_CONSTANT_BLOCK,
                     &params);
    v138 = *(&v4[67].m_worldGroupId + 7);
    if ( v138 == 0xFF )
      v139 = 0.0;
    else
      v139 = *(*&v4[65].m_worldGroupId.m_nHashCode + 24 * v138) <= 0
           ? 0.0
           : CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
               lpsrcc,
               modifierfunction::MODIFIER_PROPERTY_PHYSICAL_CONSTANT_BLOCK_SPECIAL,
               &params);
    v140 = fminf(damagePosition, v139 + bWasAlivee);
    bWasAlivef = v140;
    if ( v140 > 0.0 )
    {
      damagePosition = damagePosition - v140;
      m_flDamagePhysical_IllusionDisplay = m_flDamagePhysical_IllusionDisplay - v140;
      if ( v8 != 0 )
      {
        SendOverheadEventMessage(v8, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BLOCK, v4, v140, 0);
      }
      else
      {
        v145 = (*(v4->_vptr_IHandleEntity + 413))(v4);
        if ( v145 != 0 )
          SendOverheadEventMessage(v145, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BLOCK, v4, bWasAlivef, 0);
      }
      if ( v6 != 0 )
        SendOverheadEventMessage(v6, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BLOCK, v4, bWasAlivef, 0);
    }
  }
  if ( pAttacker > 0.0 && (BYTE1(v4[58]._vptr_IHandleEntity) & 2) == 0 )
  {
    v27 = *(&v4[67].m_worldGroupId + 5);
    params.fDamage = pAttacker;
    if ( v27 == 0xFF || *(*&v4[65].m_worldGroupId.m_nHashCode + 24 * v27) <= 0 )
    {
      if ( pAttacker < 0.0 )
      {
        bWasAliveb = pAttacker;
        goto LABEL_65;
      }
    }
    else
    {
      v28 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
              &v4[64].m_worldGroupId,
              modifierfunction::MODIFIER_PROPERTY_MAGICAL_CONSTANT_BLOCK,
              &params);
      bWasAliveb = v28;
      if ( v28 > pAttacker )
      {
        bWasAliveb = pAttacker;
        goto LABEL_65;
      }
      if ( v28 > 0.0 )
      {
LABEL_65:
        pAttacker = pAttacker - bWasAliveb;
        if ( v8 != 0 )
        {
          SendOverheadEventMessage(v8, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_MAGICAL_BLOCK, v4, bWasAliveb, 0);
        }
        else
        {
          v144 = (*(v4->_vptr_IHandleEntity + 413))(v4);
          if ( v144 != 0 )
            SendOverheadEventMessage(v144, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_MAGICAL_BLOCK, v4, bWasAliveb, 0);
        }
        if ( v6 != 0 )
          SendOverheadEventMessage(v6, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_MAGICAL_BLOCK, v4, bWasAliveb, 0);
      }
    }
  }
  if ( pRecord->m_iDamageCategory == 1 || (pRecord->m_iFlags & 0x100) != 0 )
  {
    UnitCombatProficiency = GetUnitCombatProficiency(HIDWORD(v3[50].m_pEntity), v4[50].m_hPrivateScope.m_hScope);
    damagePosition = damagePosition * UnitCombatProficiency;
    m_flDamagePhysical_IllusionDisplay = m_flDamagePhysical_IllusionDisplay * UnitCombatProficiency;
    pAttacker = pAttacker * UnitCombatProficiency;
    flDamage = UnitCombatProficiency * flDamage;
  }
LABEL_72:
  if ( v163 != 0 )
  {
    v30 = v163->m_ModifierManager.m_buffsForModifiers[113];
    if ( v30 != 0xFF
      && v163->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v30].m_Size > 0
      && CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
           &v163->m_ModifierManager,
           modifierfunction::MODIFIER_PROPERTY_OVERRIDE_ATTACK_MAGICAL,
           &params) == 1.0 )
    {
      m_flDamagePhysical_IllusionDisplay = 0.0;
      v31 = pAttacker + damagePosition;
      damagePosition = 0.0;
      pAttacker = v31;
    }
  }
  if ( (BYTE1(v4[58]._vptr_IHandleEntity) & 2) != 0 )
    pAttacker = 0.0;
  if ( pRecord->m_iDamageCategory == 0 )
  {
    v32 = *(&v4[66].m_worldGroupId + 7);
    params.fDamage = pAttacker;
    if ( v32 == 0xFF || *(*&v4[65].m_worldGroupId.m_nHashCode + 24 * v32) <= 0 )
      v33 = 0.0;
    else
      v33 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              &v4[64].m_worldGroupId,
              modifierfunction::MODIFIER_PROPERTY_INCOMING_SPELL_DAMAGE_CONSTANT,
              &params);
    pAttacker = v33 + pAttacker;
  }
  v34 = pRecord->m_iFlags;
  if ( (v34 & 2) == 0 )
  {
    ArmorReductionForDamageType = CDOTA_BaseNPC::GetArmorReductionForDamageType(v4, 1);
    v34 = pRecord->m_iFlags;
    damagePosition = damagePosition * (1.0 - ArmorReductionForDamageType);
    m_flDamagePhysical_IllusionDisplay = (1.0 - ArmorReductionForDamageType) * m_flDamagePhysical_IllusionDisplay;
  }
  if ( (v34 & 1) == 0 )
  {
    v69 = CDOTA_BaseNPC::GetArmorReductionForDamageType(v4, 2);
    v70 = 0x3FF0000000000000uLL;
    v34 = pRecord->m_iFlags;
    v70.m128d_f64[0] = (1.0 - v69) * pAttacker;
    pAttacker = _mm_movedup_pd(v70).m128d_f64[0];
  }
  if ( (v34 & 0x200) == 0 && pRecord->m_iDamageCategory == 1 )
  {
    v125 = *(&v4[66].m_worldGroupId + 5);
    params.fDamage = damagePosition;
    if ( v125 == 0xFF || *(*&v4[65].m_worldGroupId.m_nHashCode + 24 * v125) <= 0 )
      Modifier_Percentage_Additive_Internal = 1.0;
    else
      Modifier_Percentage_Additive_Internal = CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal(
                                                &v4[64].m_worldGroupId,
                                                modifierfunction::MODIFIER_PROPERTY_INCOMING_PHYSICAL_DAMAGE_PERCENTAGE,
                                                &params);
    damagePosition = damagePosition * Modifier_Percentage_Additive_Internal;
    m_flDamagePhysical_IllusionDisplay = Modifier_Percentage_Additive_Internal * m_flDamagePhysical_IllusionDisplay;
  }
  if ( v3 != 0 )
  {
    v35 = BYTE1(v3[66].m_worldGroupId.m_nHashCode);
    if ( v35 == 0xFF || *(*&v3[65].m_worldGroupId.m_nHashCode + 24 * v35) <= 0 )
      v36 = 1.0;
    else
      v36 = CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal(
              &v3[64].m_worldGroupId,
              modifierfunction::MODIFIER_PROPERTY_MAGICDAMAGEOUTGOING_PERCENTAGE,
              &params);
    pAttacker = v36 * pAttacker;
  }
  p_m_worldGroupId = &v4[64].m_worldGroupId;
  if ( pRecord->m_iDamageCategory == 1 )
  {
    p_m_worldGroupId = &v4[64].m_worldGroupId;
    v73 = *(&v4[66].m_worldGroupId + 6);
    params.fDamage = damagePosition;
    if ( v73 == 0xFF || *(*&v4[65].m_worldGroupId.m_nHashCode + 24 * v73) <= 0 )
      v74 = 0.0;
    else
      v74 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              &v4[64].m_worldGroupId,
              modifierfunction::MODIFIER_PROPERTY_INCOMING_PHYSICAL_DAMAGE_CONSTANT,
              &params);
    damagePosition = damagePosition + v74;
    m_flDamagePhysical_IllusionDisplay = v74 + m_flDamagePhysical_IllusionDisplay;
  }
  vptr_IHandleEntity_high = HIBYTE(v4[68]._vptr_IHandleEntity);
  if ( vptr_IHandleEntity_high != 0xFF
    && *(*&v4[65].m_worldGroupId.m_nHashCode + 24 * vptr_IHandleEntity_high) > 0
    && CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
         p_m_worldGroupId,
         modifierfunction::MODIFIER_PROPERTY_ABSOLUTE_NO_DAMAGE_PHYSICAL,
         &params) == 1.0 )
  {
    m_flDamagePhysical_IllusionDisplay = 0.0;
    damagePosition = 0.0;
  }
  m_pEntity_low = LOBYTE(v4[68].m_pEntity);
  if ( m_pEntity_low != 0xFF
    && *(*&v4[65].m_worldGroupId.m_nHashCode + 24 * m_pEntity_low) > 0
    && CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
         p_m_worldGroupId,
         modifierfunction::MODIFIER_PROPERTY_ABSOLUTE_NO_DAMAGE_MAGICAL,
         &params) == 1.0 )
  {
    pAttacker = 0.0;
  }
  v40 = BYTE1(v4[68].m_pEntity);
  if ( v40 != 0xFF
    && *(*&v4[65].m_worldGroupId.m_nHashCode + 24 * v40) > 0
    && CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
         p_m_worldGroupId,
         modifierfunction::MODIFIER_PROPERTY_ABSOLUTE_NO_DAMAGE_PURE,
         &params) == 1.0 )
  {
    flDamage = 0.0;
  }
  if ( params.bSuppressDamage )
  {
    pAttackera = 0.0;
    flDamagea = 0.0;
    damagePosition = 0.0;
  }
  else
  {
    v71 = flDamage + (m_flDamagePhysical_IllusionDisplay + pAttacker);
    pAttackera = (pAttacker + damagePosition) + flDamage;
    flDamagea = v71;
  }
  v18 = (pRecord->m_iFlags & 0x200) == 0;
  params.fDamage = pAttackera;
  v41 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(pAttackera)));
  if ( v18 )
  {
    v81 = *(&v4[66].m_worldGroupId + 4);
    if ( v81 == 0xFF
      || *(*&v4[65].m_worldGroupId.m_nHashCode + 24 * v81) <= 0
      || (v82 = CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal(
                  p_m_worldGroupId,
                  modifierfunction::MODIFIER_PROPERTY_INCOMING_DAMAGE_PERCENTAGE,
                  &params),
          pAttackera = pAttackera * v82,
          flDamagea = v82 * flDamagea,
          (pRecord->m_iFlags & 0x200) == 0) )
    {
      v83 = BYTE4(v4[69].m_iszPrivateVScripts.u.m_pAsString);
      if ( v83 == 0xFF || *(*&v4[65].m_worldGroupId.m_nHashCode + 24 * v83) <= 0 )
        v84 = 1.0;
      else
        v84 = CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal(
                p_m_worldGroupId,
                modifierfunction::MODIFIER_PROPERTY_INCOMING_DAMAGE_ILLUSION,
                &params);
      v85 = LODWORD(pAttackera);
      *v85.m128i_i32 = pAttackera * v84;
      v41 = COERCE_FLOAT(_mm_cvtsi128_si32(v85));
      flDamagea = v84 * flDamagea;
    }
    else
    {
      v41 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(pAttackera)));
    }
  }
  params.fDamage = v41;
  if ( v3 != 0 )
  {
    if ( (pRecord->m_iFlags & 0x200) == 0 )
    {
      v112 = BYTE6(v3[66].m_iszPrivateVScripts.u.m_pAsString);
      if ( v112 == 0xFF || *(*&v3[65].m_worldGroupId.m_nHashCode + 24 * v112) <= 0 )
        v113 = 1.0;
      else
        v113 = CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal(
                 &v3[64].m_worldGroupId,
                 modifierfunction::MODIFIER_PROPERTY_TOTALDAMAGEOUTGOING_PERCENTAGE,
                 &params);
      v114 = _mm_cvtsi32_si128(LODWORD(v41));
      *v114.m128i_i32 = *v114.m128i_i32 * v113;
      v41 = COERCE_FLOAT(_mm_cvtsi128_si32(v114));
      pAttackera = pAttackera * v113;
      flDamagea = v113 * flDamagea;
    }
    v18 = (pRecord->m_iFlags & 0x600) == 0;
    params.fDamage = v41;
    if ( v18 && params.nDamageCategory == 0 )
    {
      if ( (v3[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        lpsrca = (0.0625 * (*(v3->_vptr_IHandleEntity + 498))(v3)) / 100.0;
      else
        lpsrca = 0.0;
      m_pAsString_high = HIBYTE(v3[66].m_iszPrivateVScripts.u.m_pAsString);
      if ( m_pAsString_high == 0xFF || *(*&v3[65].m_worldGroupId.m_nHashCode + 24 * m_pAsString_high) <= 0 )
        v116 = 1.0;
      else
        v116 = CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal(
                 &v3[64].m_worldGroupId,
                 modifierfunction::MODIFIER_PROPERTY_SPELL_AMPLIFY_PERCENTAGE,
                 &params);
      v117 = v116 + lpsrca;
      v118 = _mm_cvtsi32_si128(LODWORD(v41));
      *v118.m128i_i32 = *v118.m128i_i32 * v117;
      v41 = COERCE_FLOAT(_mm_cvtsi128_si32(v118));
      pAttackera = pAttackera * v117;
      flDamagea = v117 * flDamagea;
    }
  }
  v42 = BYTE2(v4[66].m_CScriptComponent);
  params.fDamage = v41;
  if ( v42 != 0xFF
    && *(*&v4[65].m_worldGroupId.m_nHashCode + 24 * v42) > 0
    && CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
         p_m_worldGroupId,
         modifierfunction::MODIFIER_PROPERTY_AVOID_DAMAGE,
         &params) > 0.0 )
  {
    flDamagea = 0.0;
    v41 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
    pAttackera = 0.0;
  }
  v43 = BYTE1(v4[67].m_CScriptComponent);
  params.fDamage = v41;
  if ( v43 == 0xFF )
  {
    bWasAlivec = 0.0;
  }
  else if ( *(*&v4[65].m_worldGroupId.m_nHashCode + 24 * v43) <= 0 )
  {
    bWasAlivec = 0.0;
  }
  else
  {
    bWasAlivec = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                   p_m_worldGroupId,
                   modifierfunction::MODIFIER_PROPERTY_TOTAL_CONSTANT_BLOCK,
                   &params);
  }
  v169 = fmaxf(v41 - bWasAlivec, 0.0);
  v150 = fmaxf(pAttackera - bWasAlivec, 0.0);
  pAttackerb = fmaxf(flDamagea - bWasAlivec, 0.0);
  if ( bWasAlivec > 0.0 )
  {
    v44 = CEntityHandle::GetHandleEntity(&v4[11].m_pEntity + 1);
    v45 = v44;
    if ( v44 != 0 && (*(v44->_vptr_IHandleEntity + 140))(v44) != 0 )
      SendOverheadEventMessage(v45, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BLOCK, v4, bWasAlivec, 0);
    if ( v3 != 0 )
    {
      v46 = CEntityHandle::GetHandleEntity(&v3[11].m_pEntity + 1);
      v47 = v46;
      if ( v46 != 0 && (*(v46->_vptr_IHandleEntity + 140))(v46) != 0 )
        SendOverheadEventMessage(v47, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BLOCK, v4, bWasAlivec, 0);
    }
  }
  if ( pRecord->m_iDamageCategory == 1 )
  {
    v79 = pRecord->m_pOrb;
    if ( v79 != 0 )
      (*(v79->_vptr_CDOTA_Orb + 8))(v79, &params);
    v80 = pRecord->m_pOrb2;
    if ( v80 != 0 )
      (*(v80->_vptr_CDOTA_Orb + 8))(v80, &params);
  }
  if ( dota_tutorial_percent_damage_decrease.m_pParent->m_Value.m_fValue > 0.0 )
  {
    v48 = CEntityHandle::GetHandleEntity(&v4[11].m_pEntity + 1);
    v49 = v48;
    if ( v48 != 0 && (*(v48->_vptr_IHandleEntity + 140))(v48) != 0 && (*(v49->_vptr_IHandleEntity + 391))(v49) == 0 )
      v169 = ((100.0 - dota_tutorial_percent_damage_decrease.m_pParent->m_Value.m_fValue) * 0.0099999998) * v169;
  }
  if ( SLOBYTE(pRecord->m_iFlags) < 0 )
    v169 = fminf(CBaseEntity::GetHealth(v4) - 1.0, v169);
  if ( pRecord->m_flCriticalBonus <= 1.0 )
  {
    if ( pUnit != 0 )
    {
      v109 = (*(pUnit->_vptr_IHandleEntity + 413))(pUnit);
      v110 = v109;
      if ( v109 != 0
        && (*(*v109 + 1120LL))(v109) != 0
        && (v163 == 0
         || (pRecord->m_iFlags & 0x800) == 0
         || CBaseModelEntity::CanBeSeenByTeam(v163, v110->m_iTeamNum.m_Value)) )
      {
        v111 = roundf(pAttackerb + 0.5);
        SendOverheadEventMessage(v110, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_INCOMING_DAMAGE, v4, v111, v110);
      }
    }
  }
  else
  {
    m_flCriticalDisplay = pRecord->m_flCriticalDisplay;
    if ( m_flCriticalDisplay == 0.0 )
      v51 = damagePosition;
    else
      v51 = m_flCriticalDisplay;
    SendOverheadEventMessage(0, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_CRITICAL, v4, v51, 0);
  }
  v18 = pRecord->m_iDamageCategory == 1;
  pRecord->m_flDamage = v169;
  if ( v18 )
  {
    FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_ATTACKED, &params);
    if ( v163 != 0 && (v163->m_iUnitType & 1) != 0 )
    {
      v88 = DOTACommander();
      CDOTA_Commander::OnAttacked(v88, v163, pRecord);
      if ( dota_damage_flash.m_pParent->m_Value.m_nValue != 0 && v3 != 0 && (*(v3->_vptr_IHandleEntity + 413))(v3) != 0 )
      {
        CRecipientFilter::CRecipientFilter(&pFilter);
        pFilter._vptr_IRecipientFilter = &off_3FB63F0;
        CRecipientFilter::AddAllPlayers(&pFilter);
        pFilter._vptr_IRecipientFilter = &off_3FCB130;
        CRecipientFilter::MakeReliable(&pFilter);
        CRecipientFilter::RemoveAllRecipients(&pFilter);
        v89 = (*(v3->_vptr_IHandleEntity + 413))(v3);
        v90 = v89;
        if ( v89 != 0 )
        {
          v91 = (*(*v89 + 1120LL))(v89);
          v92 = 0;
          if ( v91 != 0 )
            v92 = v90;
        }
        else
        {
          v92 = 0;
        }
        CRecipientFilter::AddRecipient(&pFilter, v92);
        v93 = "particles/generic_gameplay/damage_flash_big.vpcf";
        if ( dota_tutorial_game.m_pParent->m_Value.m_nValue == 0 )
          v93 = "particles/generic_gameplay/damage_flash.vpcf";
        ParticleManager = GetParticleManager();
        v95 = CDOTA_ParticleManager::CreateParticle(ParticleManager, v93, 2, v4, &pFilter, 0);
        v96 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v96, v95, 0, v4, 5, "attach_hitloc", vec3_invalid, 0);
        v97 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v97, v95);
        pFilter._vptr_IRecipientFilter = &off_3FB63F0;
        CRecipientFilter::~CRecipientFilter(&pFilter);
      }
    }
    else if ( dota_tutorial_game.m_pParent->m_Value.m_nValue != 0 )
    {
      v121 = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   v121,
                   "particles/generic_gameplay/damage_flash_creep.vpcf",
                   2,
                   v4,
                   0,
                   0);
      v123 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v123, Particle, 0, v4, 5, "attach_hitloc", vec3_invalid, 1);
      v124 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v124, Particle);
    }
  }
  FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_TAKEDAMAGE_KILLCREDIT, &params);
  bWasAlived = (*(pUnit->_vptr_IHandleEntity + 408))(pUnit);
  if ( v3 != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
    v53 = CBaseEntity::GetAbsOrigin(v4);
    v54 = v53->x - AbsOrigin->x;
    v55 = v53->z - AbsOrigin->z;
    damageForce.y = v53->y - AbsOrigin->y;
    m_flDamage = pRecord->m_flDamage;
    damageForce.x = v54;
    v57 = pRecord->m_iFlags;
    damageForce.z = v55;
    flDamageb = m_flDamage;
    v58 = CBaseEntity::GetAbsOrigin(v3);
  }
  else
  {
    v58 = &vec3_origin;
    v57 = pRecord->m_iFlags;
    flDamageb = pRecord->m_flDamage;
    damageForce = vec3_origin;
  }
  damagePositiona = v58;
  pAttackerd = CEntityHandle::operator CEntityInstance *(&pRecord->m_hSource);
  v59 = CEntityHandle::operator CEntityInstance *(&pRecord->m_hInflictor);
  CTakeDamageInfo::CTakeDamageInfo(&inputInfo, v59, pAttackerd, &damageForce, damagePositiona, flDamageb, v57, 0, 0);
  m_iDamageType = pRecord->m_iDamageType;
  inputInfo.m_flOriginalDamage = pRecord->m_flOriginalDamage;
  inputInfo.m_bitsDotaDamageType = m_iDamageType;
  inputInfo.m_nDotaDamageCategory = pRecord->m_iDamageCategory;
  inputInfo.m_iRecord = pRecord->m_iRecord;
  CBaseEntity::TakeDamage(v4, &inputInfo);
  z = damageForce.z;
  *&damagePositiona = damageForce.x;
  *&pAttackerd = damageForce.y;
  CTakeDamageInfo::~CTakeDamageInfo(&inputInfo);
  LODWORD(vecForceDir.x) = damagePositiona;
  LODWORD(vecForceDir.y) = pAttackerd;
  vecForceDir.z = z;
  *&v62 = VectorNormalize(&vecForceDir);
  if ( pRecord->m_iDamageCategory != 1 )
    goto LABEL_153;
  m_Id = v4[43].m_iszPrivateVScripts.u.m_Id;
  if ( (m_Id & 0x10) != 0 || v3 == 0 )
    goto LABEL_153;
  v18 = (m_Id & 1) == 0;
  v99 = v3[43].m_iszPrivateVScripts.u.m_Id;
  if ( !v18 || (v99 & 1) != 0 )
    goto LABEL_264;
  if ( RollPercentage(75) )
  {
    v99 = v3[43].m_iszPrivateVScripts.u.m_Id;
LABEL_264:
    v100 = 0x3CA3D70Au;
    if ( (v99 & 0x400) != 0
      || (v101 = 0, v100 = LODWORD(v169), *v100.m128i_i32 = v169 / 175.0, (v169 / 175.0) >= 0.0)
      && (v101 = 1082130432, *v100.m128i_i32 <= 4.0) )
    {
      v101 = _mm_cvtsi128_si32(v100);
    }
    CDOTAUserMsg_TE_DotaBloodImpact::CDOTAUserMsg_TE_DotaBloodImpact(v184);
    v184[0] = off_42D53B0;
    v102 = v4->m_pEntity;
    if ( v102 == 0 )
      goto LABEL_349;
    v103 = (v102->m_EHandle.m_Index >> 15) - (v102->m_flags & 1);
    v104 = 0x7FFF;
    if ( v102->m_EHandle.m_Index != -1 )
      v104 = v102->m_EHandle.m_Index & 0x7FFF;
    LOWORD(inputInfo._vptr_CTakeDamageInfo) = v104 | inputInfo._vptr_CTakeDamageInfo & 0x8000;
    LODWORD(inputInfo._vptr_CTakeDamageInfo) = (v103 << 15) | inputInfo._vptr_CTakeDamageInfo & 0x7FFF;
    if ( LODWORD(inputInfo._vptr_CTakeDamageInfo) == -1 )
LABEL_349:
      v105 = 0xFFFFFF;
    else
      v105 = ((v103 & 0x3FF) << 14) | v104;
    v186 = v105;
    v187 = v101;
    x = vecForceDir.x;
    v185 |= 0xFu;
    y = vecForceDir.y;
    v106 = CBaseEntity::GetAbsOrigin(v4);
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_42B2CB0;
    CDOTAPVSFilter::AddRecipientsByDOTAPVS(&filter, v106);
    v107 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TEDotaBloodImpact_t>(bool)::s_hEvent;
    v108 = g_pGameEventSystem;
    damagePositionb = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TEDotaBloodImpact_t>(bool)::s_hEvent);
    (damagePositionb)(v108, 0, 0, &filter, v107, v184, 40);
    if ( (v4[43].m_iszPrivateVScripts.u.m_Id & 0x400) != 0 && RollPercentage(40) )
      CDOTA_BaseNPC::StartGesture(v4, 1507, 0.0, 0.1, 6, &filter, 1.0);
    filter._vptr_IRecipientFilter = &off_42B2CB0;
    CRecipientFilter::~CRecipientFilter(&filter);
    v184[0] = &off_42D5230;
    CDOTAUserMsg_TE_DotaBloodImpact::~CDOTAUserMsg_TE_DotaBloodImpact(v184);
  }
LABEL_153:
  if ( v163 != 0 )
  {
    v63 = (*(v163->_vptr_IHandleEntity + 413))(v163, v62);
    v64 = v63;
    if ( v63 != 0
      && (*(*v63 + 1120LL))(v63) != 0
      && bWasAlived != 0
      && !pUnit->m_bIsWaitingToSpawn.m_Value
      && (pUnit->m_nUnitState64.m_Value & 0x100) == 0 )
    {
      SendOverheadEventMessage(v64, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_OUTGOING_DAMAGE, v4, v150, v64);
    }
  }
  if ( v3 != 0
    && (pRecord->m_iFlags & 0x30) == 0
    && (v4[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0
    && dota_unit_alert_range.m_pParent->m_Value.m_fValue >= CDOTA_BaseNPC::GetRangeToUnit(v3, v4) )
  {
    hAbility.m_Index = pRecord->m_hInflictor.m_Index;
    CDOTA_BaseNPC::AlertNearbyUnits(v4, v3, &hAbility.m_Index);
  }
  v65 = pRecord->m_flDamage;
LABEL_183:
  pAttackerc = v65;
  AttackRecordsManager = GetAttackRecordsManager();
  CDOTA_AttackRecordManager::RemoveRecord(AttackRecordsManager, pRecord);
  result = pAttackerc;
  if ( VProf_866 )
  {
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return pAttackerc;
  }
  return result;
}


// TE_UnitAnimation  (line 1186, @0x0000000002901340, libserver.so)  // inlines: CBroadcastRecipientFilter, CDOTAUserMsg_TEUnitAnimation_t, CEntityHandle, CNetMessagePB, CUserMessagePB, FindGameEvent<CDOTAUserMsg_TEUnitAnimation_t>, FindOrCreateGameEvent<CDOTAUserMsg_TEUnitAnimation_t>, GetEHandle, GetEntryIndex, GetGestureinSlot, GetSerialNumber, Init, PostEvent<CDOTAUserMsg_TEUnitAnimation_t>, SendUserMessage<CDOTAUserMsg_TEUnitAnimation_t>, ToNetworkableInt, curtime, operator[], set_activity, set_castpoint, set_entity, set_has_activity, set_has_castpoint, set_has_entity, set_has_type, set_playbackrate, set_sequencevariant, set_type, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_TEUnitAnimation_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CBaseAnimating::GetSequenceActivity, CDOTAUserMsg_TE_UnitAnimation::CDOTAUserMsg_TE_UnitAnimation, GetSequenceVariantForActivity, CDOTA_BaseNPC::GetCastPoint, CBaseAnimating::IsSequenceDebugging, LoggingSystem_IsChannelEnabled, CBaseAnimatingOverlay::GetBaseAnimatingOverlayController, CBaseAnimatingController::DescribeSequences, CDOTAAnimState::RestartGesture, CAnimationLayer::SetPlaybackRate (18 total)
// callers: CDOTA_BaseNPC::StartAbilityAnimation, CDOTA_BaseNPC::StartAttackAnimation, CDOTA_BaseNPC::UpdateAttackAnimSpeed, CDOTA_BaseNPC::StartTauntAnimation
// strings: "TE_UnitAnimation", "SV:  %f tick(%d) curtime(%f) TE_UnitAnimation to %d seq %d\n"
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TEUnitAnimation_t>(bool)::s_hEvent
void __fastcall TE_UnitAnimation(CDOTA_BaseNPC *pEntity, HSequence iSequence, float flPlaybackRate, int iType)
{
  Activity SequenceActivity; // r14d
  CEntityIdentity *m_pEntity; // rax
  int v9; // edx
  unsigned __int16 v10; // cx
  int v11; // ecx
  int v12; // eax
  int SequenceVariantForActivity; // eax
  int v14; // edx
  CBaseAnimatingOverlayController *BaseAnimatingOverlayController; // rax
  __int64 v16; // r15
  IGameEventSystem *v17; // r14
  double v18; // xmm1_8
  GestureSlot_t *v19; // rax
  unsigned int v20; // r14d
  CGlobalVars *v21; // r15
  CGlobalVars *v22; // rax
  unsigned int tickcount; // r15d
  double v24; // xmm0_8
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  void (__fastcall *flPlaybackRatec)(IGameEventSystem *, _QWORD, _QWORD, CBroadcastRecipientFilter *, __int64, _QWORD *, __int64); // [rsp+10h] [rbp-1C0h]
  double flPlaybackRateb; // [rsp+10h] [rbp-1C0h]
  _QWORD v29[2]; // [rsp+30h] [rbp-1A0h] BYREF
  int v30; // [rsp+40h] [rbp-190h]
  int v31; // [rsp+48h] [rbp-188h]
  int variant; // [rsp+4Ch] [rbp-184h]
  float v33; // [rsp+50h] [rbp-180h]
  float CastPoint; // [rsp+54h] [rbp-17Ch]
  int iGestureSlot; // [rsp+58h] [rbp-178h]
  Activity iGestureActivity; // [rsp+5Ch] [rbp-174h]
  CBroadcastRecipientFilter filter; // [rsp+60h] [rbp-170h] BYREF
  unsigned __int64 v38; // [rsp+198h] [rbp-38h]

  v38 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  SequenceActivity = CBaseAnimating::GetSequenceActivity(pEntity, iSequence);
  CDOTAUserMsg_TE_UnitAnimation::CDOTAUserMsg_TE_UnitAnimation(v29);
  v29[0] = off_42D55F0;
  m_pEntity = pEntity->m_pEntity;
  if ( m_pEntity == 0 )
    goto LABEL_22;
  v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  v10 = 0x7FFF;
  if ( m_pEntity->m_EHandle.m_Index != -1 )
    v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  if ( ((v9 << 15) | v10 & 0x7FFF) == 0xFFFFFFFF )
LABEL_22:
    v11 = 0xFFFFFF;
  else
    v11 = ((v9 & 0x3FF) << 14) | v10;
  v31 = v11;
  iGestureActivity = SequenceActivity;
  v12 = v30 | 0x21;
  v30 |= 0x21u;
  if ( SequenceActivity == -1 )
  {
    v14 = v12;
    SequenceVariantForActivity = 0;
  }
  else
  {
    SequenceVariantForActivity = GetSequenceVariantForActivity(iSequence, pEntity, SequenceActivity);
    v14 = v30;
  }
  variant = SequenceVariantForActivity;
  v30 = v14 | 0x16;
  v33 = flPlaybackRate;
  iGestureSlot = iType;
  CastPoint = CDOTA_BaseNPC::GetCastPoint(pEntity, iType == 1);
  v30 |= 8u;
  if ( CBaseAnimating::IsSequenceDebugging(pEntity) )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
    {
      v20 = iGestureActivity;
      v21 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( gpGlobals->m_bEnableAssertions
          || gpGlobals->m_bInSimulation
          || (m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc) == 0 )
        {
          v22 = gpGlobals;
        }
        else
        {
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v22 = gpGlobals;
        }
        flPlaybackRateb = v21->m_flCurrentTime;
      }
      else
      {
        v22 = 0;
        flPlaybackRateb = 0.0;
      }
      tickcount = v22->tickcount;
      v24 = Plat_FloatTime();
      LoggingSystem_Log(
        LOG_SERVER,
        1,
        "SV:  %f tick(%d) curtime(%f) TE_UnitAnimation to %d seq %d\n",
        tickcount,
        v20,
        iSequence.m_Data,
        v24,
        flPlaybackRateb);
    }
    BaseAnimatingOverlayController = CBaseAnimatingOverlay::GetBaseAnimatingOverlayController(pEntity);
    CBaseAnimatingController::DescribeSequences(BaseAnimatingOverlayController, "TE_UnitAnimation");
  }
  v16 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TEUnitAnimation_t>(bool)::s_hEvent;
  v17 = g_pGameEventSystem;
  flPlaybackRatec = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TEUnitAnimation_t>(bool)::s_hEvent);
  flPlaybackRatec(v17, 0, 0, &filter, v16, v29, 48);
  if ( iSequence.m_Data != -1 )
    CDOTAAnimState::RestartGesture(
      pEntity->m_pAnimState,
      iGestureSlot,
      iGestureActivity,
      1,
      iSequence,
      gpGlobals->interval_per_tick,
      gpGlobals->interval_per_tick,
      1.0);
  v19 = &pEntity->m_pAnimState->m_aGestureSlots.m_Memory.m_pMemory[iGestureSlot];
  if ( v19 != 0 )
    CAnimationLayer::SetPlaybackRate(v19->m_pAnimLayer, COERCE_DOUBLE(LODWORD(v33)), v18);
  v29[0] = &off_42D5470;
  CDOTAUserMsg_TE_UnitAnimation::~CDOTAUserMsg_TE_UnitAnimation(v29);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// TE_UnitAnimationEnd  (line 1226, @0x0000000002901760, libserver.so)  // inlines: CBroadcastRecipientFilter, CDOTAUserMsg_TEUnitAnimationEnd_t, CEntityHandle, CNetMessagePB, CUserMessagePB, FindGameEvent<CDOTAUserMsg_TEUnitAnimationEnd_t>, FindOrCreateGameEvent<CDOTAUserMsg_TEUnitAnimationEnd_t>, GetEHandle, GetEntryIndex, GetSerialNumber, Init, PostEvent<CDOTAUserMsg_TEUnitAnimationEnd_t>, SendUserMessage<CDOTAUserMsg_TEUnitAnimationEnd_t>, ToNetworkableInt, set_entity, set_has_entity, set_has_snap, set_snap, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_TEUnitAnimationEnd_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CDOTAUserMsg_TE_UnitAnimationEnd::CDOTAUserMsg_TE_UnitAnimationEnd, CDOTAAnimState::ResetGestureSlot, CDOTAUserMsg_TE_UnitAnimationEnd::~CDOTAUserMsg_TE_UnitAnimationEnd, CRecipientFilter::~CRecipientFilter, CDOTAAnimState::FadeAndDestroyGesture, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_BaseNPC::EndAttackAnimation
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TEUnitAnimationEnd_t>(bool)::s_hEvent
void __fastcall TE_UnitAnimationEnd(CDOTA_BaseNPC *pEntity, bool bSnap)
{
  CEntityIdentity *m_pEntity; // rax
  int v5; // edx
  unsigned __int16 v6; // cx
  int v7; // ecx
  __int64 v8; // r14
  IGameEventSystem *v9; // r13
  CDOTAAnimState *m_pAnimState; // rdi
  void (__fastcall *v11)(IGameEventSystem *, _QWORD, _QWORD, CBroadcastRecipientFilter *, __int64, _QWORD *, __int64); // [rsp+8h] [rbp-1A8h]
  _QWORD v12[2]; // [rsp+20h] [rbp-190h] BYREF
  int v13; // [rsp+30h] [rbp-180h]
  int v14; // [rsp+38h] [rbp-178h]
  bool v15; // [rsp+3Ch] [rbp-174h]
  CBroadcastRecipientFilter filter; // [rsp+40h] [rbp-170h] BYREF
  unsigned __int64 v17; // [rsp+178h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  CDOTAUserMsg_TE_UnitAnimationEnd::CDOTAUserMsg_TE_UnitAnimationEnd(v12);
  v12[0] = off_42D5830;
  m_pEntity = pEntity->m_pEntity;
  if ( m_pEntity == 0 )
    goto LABEL_10;
  v5 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  v6 = 0x7FFF;
  if ( m_pEntity->m_EHandle.m_Index != -1 )
    v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  if ( ((v5 << 15) | v6 & 0x7FFF) == 0xFFFFFFFF )
LABEL_10:
    v7 = 0xFFFFFF;
  else
    v7 = ((v5 & 0x3FF) << 14) | v6;
  v15 = bSnap;
  v14 = v7;
  v8 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TEUnitAnimationEnd_t>(bool)::s_hEvent;
  v13 |= 3u;
  v9 = g_pGameEventSystem;
  v11 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_TEUnitAnimationEnd_t>(bool)::s_hEvent);
  v11(v9, 0, 0, &filter, v8, v12, 32);
  m_pAnimState = pEntity->m_pAnimState;
  if ( v15 )
    CDOTAAnimState::ResetGestureSlot(m_pAnimState, 1);
  else
    CDOTAAnimState::FadeAndDestroyGesture(m_pAnimState, -1, 1);
  v12[0] = &off_42D56B0;
  CDOTAUserMsg_TE_UnitAnimationEnd::~CDOTAUserMsg_TE_UnitAnimationEnd(v12);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDOTA_BaseNPC::GetDataDescMap  (line 1252, @0x00000000028f4f40, libserver.so)
// globals: CDOTA_BaseNPC::m_DataMap
datamap_t *__fastcall CDOTA_BaseNPC::GetDataDescMap(CDOTA_BaseNPC *const this)
{
  return &CDOTA_BaseNPC::m_DataMap;
}


// CDOTA_BaseNPC::AddDatadescMetadataKeys  (line 1252, @0x00000000029019a0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CDOTA_BaseNPC::GetEntityClass(void)
void __fastcall CDOTA_BaseNPC::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CDOTA_BaseNPC::GetEntityClass);
}


// CDOTA_BaseNPC::GetBaseMap  (line 1252, @0x00000000029019c0, libserver.so)
datamap_t *__cdecl CDOTA_BaseNPC::GetBaseMap()
{
  return 0;
}


// DataMapInit<CDOTA_BaseNPC>  (line 1252, @0x00000000029019d0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "CDOTA_BaseNPC"
// globals: `guard variable for'DataMapInit<CDOTA_BaseNPC>(CDOTA_BaseNPC *)::nameHolder, CDOTA_BaseNPC::GetEntityClass(void), CDOTA_BaseNPC::m_DataMap, DataMapInit<CDOTA_BaseNPC>(CDOTA_BaseNPC *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CDOTA_BaseNPC>(CDOTA_BaseNPC *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CDOTA_BaseNPC>(CDOTA_BaseNPC *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CDOTA_BaseNPC>(CDOTA_BaseNPC *)::nameHolder) != 0 )
  {
    DataMapInit<CDOTA_BaseNPC>(CDOTA_BaseNPC *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CDOTA_BaseNPC>(CDOTA_BaseNPC *)::nameHolder.m_pszBase = "CDOTA_BaseNPC";
    DataMapInit<CDOTA_BaseNPC>(CDOTA_BaseNPC *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CDOTA_BaseNPC>(CDOTA_BaseNPC *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CDOTA_BaseNPC>(CDOTA_BaseNPC *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CDOTA_BaseNPC>(CDOTA_BaseNPC *)::nameHolder.m_nLenBase = 13;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CDOTA_BaseNPC>(CDOTA_BaseNPC *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CDOTA_BaseNPC>(CDOTA_BaseNPC *)::nameHolder,
      &_dso_handle);
  }
  CDOTA_BaseNPC::m_DataMap.baseMap = 0;
  CDOTA_BaseNPC::m_DataMap.dataDesc = &DataMapInit<CDOTA_BaseNPC>(CDOTA_BaseNPC *)::dataDesc[1];
  CDOTA_BaseNPC::m_DataMap.dataNumFields = 58;
  AddDatadescMetadataKeys(&CDOTA_BaseNPC::m_DataMap, CDOTA_BaseNPC::GetEntityClass);
  return &CDOTA_BaseNPC::m_DataMap;
}


// Abilities_UserGroupFunc  (line 1366, @0x00000000028f8990, libserver.so)  // inlines: ClearAll, ClearAllRecipients, memset
// calls: CDOTA_BaseNPC::GetAbilityByIndex
void __fastcall Abilities_UserGroupFunc(
        const char *pUserGroupName,
        const void *pStructBase,
        CSendProxyRecipients *pRecipients,
        int objectID)
{
  if ( !CDOTA_BaseNPC::GetAbilityByIndex(pStructBase, 0) )
    *pRecipients = 0;
}


// CDOTA_BaseNPC::YouForgotToImplementOrDeclareServerClass  (line 1376, @0x00000000028f4f50, libserver.so)
int __fastcall CDOTA_BaseNPC::YouForgotToImplementOrDeclareServerClass(CDOTA_BaseNPC *const this)
{
  return 0;
}


// CDOTA_BaseNPC::GetServerClass  (line 1376, @0x00000000029004d0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_BaseNPC::GetServerClass(CDOTA_BaseNPC *const this)
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


// CDOTA_BaseNPC::CDOTA_BaseNPCIntention::~CDOTA_BaseNPCIntention  (line 1378, @0x00000000028f4f60, libserver.so)  // inlines: ~IContextualQuery, ~IIntention, ~INextBotComponent, ~INextBotEventResponder
void __fastcall CDOTA_BaseNPC::CDOTA_BaseNPCIntention::~CDOTA_BaseNPCIntention(
        CDOTA_BaseNPC::CDOTA_BaseNPCIntention *const this)
{
  Behavior<CDOTA_BaseNPC> *m_behavior; // rdi

  this->_vptr_INextBotEventResponder = &off_42D9030;
  this->_vptr_IContextualQuery = &off_42D9290;
  m_behavior = this->m_behavior;
  if ( m_behavior != 0 )
    (*(m_behavior->_vptr_INextBotEventResponder + 2))(m_behavior);
  this->_vptr_IContextualQuery = &off_3F7A990;
  this->_vptr_INextBotEventResponder = &off_3F7A570;
}


// CDOTA_BaseNPC::CDOTA_BaseNPCIntention::~CDOTA_BaseNPCIntention  (line 1378, @0x00000000028f5730, libserver.so)  // inlines: ~CDOTA_BaseNPCIntention, ~IContextualQuery, ~IIntention, ~INextBotComponent, ~INextBotEventResponder
// calls: operator delete
void __fastcall CDOTA_BaseNPC::CDOTA_BaseNPCIntention::~CDOTA_BaseNPCIntention(
        CDOTA_BaseNPC::CDOTA_BaseNPCIntention *const this)
{
  Behavior<CDOTA_BaseNPC> *m_behavior; // rdi

  this->_vptr_INextBotEventResponder = &off_42D9030;
  this->_vptr_IContextualQuery = &off_42D9290;
  m_behavior = this->m_behavior;
  if ( m_behavior != 0 )
    (*(m_behavior->_vptr_INextBotEventResponder + 2))(m_behavior);
  this->_vptr_IContextualQuery = &off_3F7A990;
  this->_vptr_INextBotEventResponder = &off_3F7A570;
  operator delete(this);
}


// CDOTA_BaseNPC::CDOTA_BaseNPCIntention::Reset  (line 1378, @0x00000000028fa110, libserver.so)  // inlines: Action, Behavior, CDOTABehavior, EventDesiredResult, IActionResult, ~IContextualQuery, ~INextBotEventResponder
// calls: operator new, CUtlSymbol::CUtlSymbol, operator delete, _Unwind_Resume
void __fastcall CDOTA_BaseNPC::CDOTA_BaseNPCIntention::Reset(CDOTA_BaseNPC::CDOTA_BaseNPCIntention *const this)
{
  Behavior<CDOTA_BaseNPC> *m_behavior; // rdi
  Action<CDOTA_BaseNPC> *v3; // rax
  Action<CDOTA_BaseNPC> *v4; // rbx
  Behavior<CDOTA_BaseNPC> *v5; // r12

  m_behavior = this->m_behavior;
  if ( m_behavior != 0 )
    (*(m_behavior->_vptr_INextBotEventResponder + 2))(m_behavior);
  v3 = operator new(0x68u);
  v3->m_eventResult.m_type = ActionResultType::CONTINUE;
  v4 = v3;
  v3->m_eventResult.m_action = 0;
  v3->m_eventResult.m_reason = 0;
  v3->m_parent = 0;
  v3->m_child = 0;
  v3->m_buriedUnderMe = 0;
  v3->m_coveringMe = 0;
  v3->m_actor = 0;
  v3->m_behavior = 0;
  v3->m_isStarted = 0;
  v3->m_isSuspended = 0;
  v3->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
  v3->_vptr_INextBotEventResponder = &off_42C14D0;
  v3->_vptr_IContextualQuery = &off_42C18F0;
  v5 = operator new(0x20u);
  v5->_vptr_INextBotEventResponder = &off_42D5B70;
  v5->_vptr_IContextualQuery = &off_42D5DB0;
  CUtlSymbol::CUtlSymbol(&v5->m_name, "Behavior");
  v5->m_action = v4;
  this->m_behavior = v5;
}


// CDOTA_BaseNPC::CDOTA_BaseNPCIntention::CDOTA_BaseNPCIntention  (line 1378, @0x0000000002901aa0, libserver.so)  // inlines: Action, Behavior, CDOTABehavior, EventDesiredResult, IActionResult, IIntention, ~IContextualQuery, ~IIntention, ~INextBotComponent, ~INextBotEventResponder
// calls: INextBotComponent::INextBotComponent, operator new, CUtlSymbol::CUtlSymbol, _Unwind_Resume, operator delete
// callers: CDOTA_BaseNPC::CDOTA_BaseNPC
void __fastcall CDOTA_BaseNPC::CDOTA_BaseNPCIntention::CDOTA_BaseNPCIntention(
        CDOTA_BaseNPC::CDOTA_BaseNPCIntention *const this,
        CDOTA_BaseNPC *me)
{
  INextBot *v2; // rax
  Action<CDOTA_BaseNPC> *v4; // rbx
  Behavior<CDOTA_BaseNPC> *v5; // r12

  v2 = 0;
  if ( me != 0 )
    v2 = &me->INextBot;
  INextBotComponent::INextBotComponent(this, v2);
  this->_vptr_INextBotEventResponder = &off_42D9030;
  this->_vptr_IContextualQuery = &off_42D9290;
  v4 = operator new(0x68u);
  v4->m_eventResult.m_type = ActionResultType::CONTINUE;
  v4->m_eventResult.m_action = 0;
  v4->m_eventResult.m_reason = 0;
  v4->m_parent = 0;
  v4->m_child = 0;
  v4->m_buriedUnderMe = 0;
  v4->m_coveringMe = 0;
  v4->m_actor = 0;
  v4->m_behavior = 0;
  v4->m_isStarted = 0;
  v4->m_isSuspended = 0;
  v4->m_eventResult.m_priority = EventResultPriorityType::RESULT_NONE;
  v4->_vptr_INextBotEventResponder = &off_42C14D0;
  v4->_vptr_IContextualQuery = &off_42C18F0;
  v5 = operator new(0x20u);
  v5->_vptr_INextBotEventResponder = &off_42D5B70;
  v5->_vptr_IContextualQuery = &off_42D5DB0;
  CUtlSymbol::CUtlSymbol(&v5->m_name, "Behavior");
  v5->m_action = v4;
  this->m_behavior = v5;
}


// CDOTA_BaseNPC::CDOTA_BaseNPCIntention::Update  (line 1378, @0x0000000002928d50, libserver.so)
// calls: Behavior<CDOTA_BaseNPC>::Update
void __fastcall CDOTA_BaseNPC::CDOTA_BaseNPCIntention::Update(CDOTA_BaseNPC::CDOTA_BaseNPCIntention *const this)
{
  float v1; // xmm1_4
  CDOTA_BaseNPC *p_m_timestamp; // rsi
  INextBot *m_bot; // rax
  double v4; // xmm0_8
  Behavior<CDOTA_BaseNPC> *m_behavior; // rdi

  p_m_timestamp = 0;
  m_bot = this->m_bot;
  *&v4 = LODWORD(this->m_curInterval);
  m_behavior = this->m_behavior;
  if ( m_bot != 0 )
    p_m_timestamp = &m_bot[-13].m_immobileTimer.m_timestamp;
  Behavior<CDOTA_BaseNPC>::Update(m_behavior, p_m_timestamp, v4, v1);
}


// CDOTA_BaseNPC::CDOTA_BaseNPC  (line 1420, @0x0000000002928d80, libserver.so)  // inlines: CCopyableUtlVector, CEntityHandle, CHandle, CLocalNPCObstructionsCache, CNetworkArrayBase, CNetworkColorBase, CNetworkVarBase, CObstructionObject, CPlainAutoPtr, CUnitOrders, CUtlHashtable, CUtlMemory, CUtlQueue, CUtlString, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ClearAbilities, Color, DOTAGameRules, Delete, Destruct<WearableSpawnInfo_t>, Detach, Element, EnsureValidValue<DOTA_SHOP_TYPE>, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, EnsureValidValue<long long int>, EnsureValidValue<long long unsigned int>, EnsureValidValue<unsigned char>, GetGameTime, Init, NetworkStateChanged, NetworkVar_m_Inventory, NetworkVar_m_ModifierManager, Purge, RemoveAll, Reset, Set, SetAlpha, SetBlue, SetColor, SetComponent, SetFirstSpawn, SetGreen, SetModelScale, SetPlaybackRate, SetVal, item_definition_index_t, operator=, operator=<DOTA_SHOP_TYPE>, operator=<bool>, operator=<float>, operator=<int>, operator[], ~CCopyableUtlVector, ~CLocalNPCObstructionsCache, ~CPlainAutoPtr, ~CUnitOrders, ~CUtlMemory, ~CUtlQueue, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~NetworkVar_m_Inventory, ~NetworkVar_m_ModifierManager, ~NextBotCombatCharacter
// calls: NextBotCombatCharacter::NextBotCombatCharacter, CountdownTimer::CountdownTimer, CDOTA_ModifierManager::CDOTA_ModifierManager, CDOTA_SpeechHandle::CDOTA_SpeechHandle, CAssetModifierContainer::CAssetModifierContainer, CDOTA_UnitInventory::CDOTA_UnitInventory, operator new, CDOTALocomotor::CDOTALocomotor, CDOTABody::CDOTABody, CDOTA_BaseNPC::CDOTA_BaseNPCIntention::CDOTA_BaseNPCIntention, CBaseAnimating::SetModelScale, CBaseAnimating::GetBaseAnimatingController (35 total)
// callers: CDOTA_BaseNPC::CEntityInstanceEntityClass::ConstructInstance, CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass::ConstructInstance, CDOTA_NPC_DataDriven::CEntityInstanceEntityClass::ConstructInstance, CDOTA_NPC_DataDriven::CDOTA_NPC_DataDriven, CDOTA_BaseNPC_Thinker::CEntityInstanceEntityClass::ConstructInstance, CDOTA_BaseNPC_Creep::CDOTA_BaseNPC_Creep, CDOTA_BaseNPC_Creep::CEntityInstanceEntityClass::ConstructInstance, CDOTA_BaseNPC_Creep_Talking::CEntityInstanceEntityClass::ConstructInstance, CDOTA_BaseNPC_Pet::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Unit_Roquelaire::CEntityInstanceEntityClass::ConstructInstance, CDOTA_BaseNPC_Building::CEntityInstanceEntityClass::ConstructInstance, CDOTA_BaseNPC_Filler::CEntityInstanceEntityClass::ConstructInstance (58 total)
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_BaseNPC::CDOTA_BaseNPC(CDOTA_BaseNPC *const this)
{
  CUtlSymbolLarge *m_iszAbilityList; // r12
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *p_m_hAbilities; // rax
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  bool v8; // zf
  CDOTALocomotor *v9; // r14
  CDOTABody *v10; // r14
  CDOTA_BaseNPC::CDOTA_BaseNPCIntention *v11; // r14
  float v12; // xmm1_4
  uint16 m_Data; // ax
  int m_Value; // eax
  float v15; // xmm0_4
  CBaseAnimatingController *BaseAnimatingController; // rax
  __int64 v17; // rax
  CDOTA_BaseNPC *p_m_vLastVisibilityChange; // rax
  CDOTA_Bot_Script *v19; // r12

  m_iszAbilityList = this->m_iszAbilityList;
  NextBotCombatCharacter::NextBotCombatCharacter(this);
  this->m_pObstructionRecord = 0;
  this->_vptr_IHandleEntity = &off_42D7D50;
  this->_vptr_INextBotEventResponder = &off_42D8CB0;
  this->_vptr_CObstructionObject = off_42D8FE0;
  v3 = m_iszAbilityList;
  this->m_bSelectionRingVisible.m_Value = 0;
  this->m_nObstructionProperties = 0;
  this->m_colorGemColor = 0;
  this->m_pGeneratingEconItem.m_p = 0;
  this->m_iszBaseClass.u.m_Id = 0;
  this->m_iCurrentLevel.m_Value = 0;
  this->m_flMana.m_Value = 0.0;
  this->m_flMaxMana.m_Value = 0.0;
  this->m_flManaThinkRegen.m_Value = 0.0;
  this->m_flHealthThinkRegen.m_Value = 0.0;
  this->m_nHealthBarOffsetOverride.m_Value = 0;
  this->m_bIsPhantom.m_Value = 0;
  this->m_bIsAncient.m_Value = 0;
  this->m_bIsNeutralUnitType.m_Value = 0;
  this->m_bIsSummoned.m_Value = 0;
  this->m_bCanBeDominated.m_Value = 0;
  this->m_bHasUpgradeableAbilities.m_Value = 0;
  this->m_iBKBChargesUsed.m_Value = 0;
  this->m_iBotDebugData.m_Value = 0;
  this->m_bIsMoving.m_Value = 0;
  this->m_nTotalDamageTaken.m_Value = 0;
  this->m_iMoveSpeed.m_Value = 0;
  this->m_flTauntCooldown.m_Value = 0.0;
  this->m_iszAutoAttackRangedParticle.u.m_Id = 0;
  this->m_iszParticleFolder.u.m_Id = 0;
  this->m_iszGameSoundsFile.u.m_Id = 0;
  this->m_iszVoiceFile.u.m_Id = 0;
  this->m_iszSoundSet.u.m_Id = 0;
  this->m_iszSelectionGroup.u.m_Id = 0;
  this->m_iszAnimationModifier.u.m_Id = 0;
  this->m_iDayTimeVisionRange.m_Value = 0;
  this->m_iNightTimeVisionRange.m_Value = 0;
  this->m_flPhysicalArmorValue.m_Value = 0.0;
  this->m_flMagicalResistanceValue.m_Value = 0.0;
  this->m_iAttackCapabilities.m_Value = 0;
  this->m_iSpecialAbility.m_Value = 0;
  this->m_nPlayerOwnerID.m_Value = 0;
  do
  {
    v3->_vptr_IHandleEntity = 0;
    v3 = (v3 + 8);
  }
  while ( v3 != &this->m_iAttackDamageType );
  CountdownTimer::CountdownTimer(&this->m_AngerTimer);
  CountdownTimer::CountdownTimer(&this->m_AlertTimer);
  this->m_hAngerTarget.m_Index = -1;
  p_m_hAbilities = &this->m_hAbilities;
  this->m_hAlertTarget.m_Index = -1;
  this->m_hForceAttackTarget.m_Index = -1;
  this->m_vPastGroundHeights.m_memory.m_pMemory = 0;
  this->m_vPastGroundHeights.m_memory.m_nAllocationCount = 0;
  this->m_vPastGroundHeights.m_memory.m_nGrowSize = 0;
  this->m_vPastGroundHeights.m_head = QueueIter_t::QUEUE_ITERATOR_INVALID;
  this->m_vPastGroundHeights.m_tail = QueueIter_t::QUEUE_ITERATOR_INVALID;
  this->m_nUnitState64.m_Value = 0;
  this->m_hAttackTarget.m_Index = -1;
  this->m_hAggroTarget.m_Index = -1;
  this->m_hCommandAttackTarget.m_Index = -1;
  this->m_iszOriginalModel.u.m_Id = 0;
  this->m_DamageEventQueue.m_memory.m_pMemory = 0;
  this->m_DamageEventQueue.m_memory.m_nAllocationCount = 0;
  this->m_DamageEventQueue.m_memory.m_nGrowSize = 0;
  this->m_DamageEventQueue.m_head = QueueIter_t::QUEUE_ITERATOR_INVALID;
  this->m_DamageEventQueue.m_tail = QueueIter_t::QUEUE_ITERATOR_INVALID;
  this->m_iTaggedAsVisibleByTeam.m_Value = 0;
  this->m_iIsControllableByPlayer64.m_Value = 0;
  do
  {
    LODWORD(p_m_hAbilities->_vptr_IHandleEntity) = -1;
    p_m_hAbilities = (p_m_hAbilities + 4);
  }
  while ( p_m_hAbilities != &this->m_associatedEmptyAbilities );
  this->m_associatedEmptyAbilities.m_Size = 0;
  this->m_associatedEmptyAbilities.m_Memory.m_pMemory = 0;
  this->m_associatedEmptyAbilities.m_Memory.m_nAllocationCount = 0;
  this->m_associatedEmptyAbilities.m_Memory.m_nGrowSize = 0;
  this->m_hActiveAbility.m_Index = -1;
  this->m_hCursorTarget.m_Index = -1;
  CDOTA_ModifierManager::CDOTA_ModifierManager(&this->m_ModifierManager);
  this->m_ModifierManager._vptr_CDOTA_ModifierManager = &off_42D5AF0;
  CDOTA_SpeechHandle::CDOTA_SpeechHandle(&this->m_Speech);
  this->m_iszMapUnitName.u.m_Id = 0;
  this->m_iszUnitName.m_Value.u.m_Id = 0;
  this->m_iUnitNameIndex.m_Value = 0;
  this->m_iDamageMin.m_Value = 0;
  this->m_iDamageMax.m_Value = 0;
  this->m_iDamageBonus.m_Value = 0;
  this->m_bIsWaitingToSpawn.m_Value = 0;
  this->m_bIsIllusion.m_Value = 0;
  this->m_nUnitLabelIndex.m_Value = 0;
  this->m_szUnitLabel.m_pString = 0;
  this->m_strAnimationModifier.m_pString = 0;
  CAssetModifierContainer::CAssetModifierContainer(&this->m_AssetModifiers);
  this->m_initialGoalEntity.m_Index = -1;
  this->m_QueuedOrders.m_memory.m_pMemory = 0;
  this->m_QueuedOrders.m_memory.m_nAllocationCount = 0;
  this->m_QueuedOrders.m_memory.m_nGrowSize = 0;
  x = vec3_origin.x;
  this->m_CurrentQueuedOrder.m_bQueue = 0;
  this->m_QueuedOrders.m_head = QueueIter_t::QUEUE_ITERATOR_INVALID;
  y = vec3_origin.y;
  z = vec3_origin.z;
  this->m_QueuedOrders.m_tail = QueueIter_t::QUEUE_ITERATOR_INVALID;
  this->m_CurrentQueuedOrder.m_nUnits.m_Size = 0;
  this->m_CurrentQueuedOrder.m_nUnits.m_Memory.m_pMemory = 0;
  this->m_CurrentQueuedOrder.m_nUnits.m_Memory.m_nAllocationCount = 0;
  this->m_CurrentQueuedOrder.m_nUnits.m_Memory.m_nGrowSize = 0;
  this->m_CurrentQueuedOrder.m_nOrderSequenceNumber = 0;
  this->m_CurrentQueuedOrder.m_nIssuerPlayerIndex = -1;
  this->m_CurrentQueuedOrder.m_nOrderType = 0;
  this->m_CurrentQueuedOrder.m_nTargetIndex.m_Data = 0;
  this->m_CurrentQueuedOrder.m_vPosition.x = x;
  this->m_CurrentQueuedOrder.m_vPosition.y = y;
  this->m_CurrentQueuedOrder.m_vPosition.z = z;
  this->m_CurrentQueuedOrder.m_nAbilityIndex.m_Data = 0;
  this->m_PseudoQueuedOrders.m_nUnits.m_Size = 0;
  this->m_PseudoQueuedOrders.m_nUnits.m_Memory.m_pMemory = 0;
  this->m_PseudoQueuedOrders.m_nUnits.m_Memory.m_nAllocationCount = 0;
  this->m_PseudoQueuedOrders.m_nUnits.m_Memory.m_nGrowSize = 0;
  this->m_PseudoQueuedOrders.m_nOrderSequenceNumber = 0;
  this->m_PseudoQueuedOrders.m_nIssuerPlayerIndex = -1;
  this->m_PseudoQueuedOrders.m_nOrderType = 0;
  this->m_PseudoQueuedOrders.m_nTargetIndex.m_Data = 0;
  this->m_PseudoQueuedOrders.m_vPosition.x = x;
  this->m_PseudoQueuedOrders.m_vPosition.y = y;
  this->m_PseudoQueuedOrders.m_vPosition.z = z;
  this->m_PseudoQueuedOrders.m_nAbilityIndex.m_Data = 0;
  this->m_PseudoQueuedOrders.m_bQueue = 0;
  CDOTA_UnitInventory::CDOTA_UnitInventory(&this->m_Inventory);
  this->m_hItemToDrop.m_Index = -1;
  this->m_Inventory._vptr_CDOTA_UnitInventory = &off_42D5B30;
  this->m_iCurShop.m_Value = DOTA_SHOP_TYPE::DOTA_SHOP_HOME;
  this->m_hLastNearShop.m_Index = -1;
  this->m_hChaseEntity.m_Index = -1;
  this->m_ActivityModifiers.m_Size = 0;
  this->m_ActivityModifiers.m_Memory.m_pMemory = 0;
  this->m_ActivityModifiers.m_Memory.m_nAllocationCount = 0;
  this->m_ActivityModifiers.m_Memory.m_nGrowSize = 0;
  this->m_bStolenScepter.m_Value = 0;
  this->m_LocalNPCObstructionsCache.m_nLastUpdatedTick = 0;
  this->m_LocalNPCObstructionsCache.m_flRadius = 0.0;
  this->m_LocalNPCObstructionsCache.m_hCachedNPCs.m_Size = 0;
  this->m_LocalNPCObstructionsCache.m_hCachedNPCs.m_Memory.m_pMemory = 0;
  this->m_LocalNPCObstructionsCache.m_hCachedNPCs.m_Memory.m_nAllocationCount = 0;
  this->m_LocalNPCObstructionsCache.m_hCachedNPCs.m_Memory.m_nGrowSize = 0;
  this->m_pseudorandom.m_table.m_pMemory = 0;
  this->m_pseudorandom.m_table.m_nAllocationCount = 0;
  this->m_pseudorandom.m_table.m_nGrowSize = 0;
  this->m_pseudorandom.m_nUsed = 0;
  this->m_pseudorandom.m_nMinSize = 32;
  this->m_pseudorandom.m_bSizeLocked = 0;
  this->m_CompanionEntity.m_Index = -1;
  this->m_wearableSpawnList.m_Size = 0;
  this->m_wearableSpawnList.m_Memory.m_pMemory = 0;
  this->m_wearableSpawnList.m_Memory.m_nAllocationCount = 0;
  this->m_wearableSpawnList.m_Memory.m_nGrowSize = 0;
  CountdownTimer::CountdownTimer(&this->m_AngerCooldownTimer);
  this->m_CustomHealthLabelColor = 0;
  v8 = this->m_CustomHealthLabelColor.m_Value._color[1] == 0;
  this->m_strLastKillerAbility.m_pString = 0;
  this->m_anglediff.m_Value = 0;
  this->m_NetworkActivity.m_Value = 0;
  this->m_NetworkSequenceIndex.m_Value = 0;
  this->m_bShouldDoFlyHeightVisual.m_Value = 0;
  this->m_flStartSequenceCycle.m_Value = 0.0;
  this->m_hTutorialSpawner.m_Index = -1;
  if ( !v8 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4460, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_CustomHealthLabelColor.m_Value._color[1] = 0;
  }
  if ( this->m_CustomHealthLabelColor.m_Value._color[2] != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4460, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_CustomHealthLabelColor.m_Value._color[2] = 0;
  }
  if ( this->m_CustomHealthLabelColor.m_Value._color[3] != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4460, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_CustomHealthLabelColor.m_Value._color[3] = 0;
  }
  this->m_defaultColorGemColor = 0;
  v8 = this->m_nPlayerOwnerID.m_Value == -1;
  this->m_nWearableDefIndex.m_Data = 0;
  this->m_ActivitiesStarted.m_Size = 0;
  this->m_ActivitiesStarted.m_Memory.m_pMemory = 0;
  this->m_ActivitiesStarted.m_Memory.m_nAllocationCount = 0;
  this->m_ActivitiesStarted.m_Memory.m_nGrowSize = 0;
  if ( !v8 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2468, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nPlayerOwnerID.m_Value = -1;
  }
  v8 = this->m_iIsControllableByPlayer64.m_Value == 0;
  this->m_bIsPlayingSingleForcedActivity = 0;
  this->m_bExpired = 0;
  this->m_pAutoStyleCriteria = 0;
  this->m_nControllingPlayerID = -1;
  if ( !v8 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2944, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iIsControllableByPlayer64.m_Value = 0;
  }
  v9 = operator new(0x508u);
  CDOTALocomotor::CDOTALocomotor(v9, this);
  this->m_locomotor = v9;
  v10 = operator new(0x38u);
  CDOTABody::CDOTABody(v10, this);
  this->m_body = v10;
  this->m_bNeverMoveToClearSpace = 0;
  this->m_bMustReachEachGoalEntity = 0;
  v11 = operator new(0x30u);
  CDOTA_BaseNPC::CDOTA_BaseNPCIntention::CDOTA_BaseNPCIntention(v11, this);
  m_Data = INVALID_ITEM_DEF_INDEX.m_Data;
  this->m_intention = v11;
  this->m_nArcanaLevel = 0;
  this->m_nDefaultArcanaLevel = 0;
  this->m_pAnimState = 0;
  this->m_nWearableDefIndex.m_Data = m_Data;
  m_Value = this->m_anglediff.m_Value;
  this->m_bFirstSpawn = 0;
  this->m_nObstructionProperties = 16;
  this->m_defaultColorGemColor._color[0] = 0;
  this->m_defaultColorGemColor._color[1] = 0;
  this->m_defaultColorGemColor._color[2] = 0;
  this->m_defaultColorGemColor._color[3] = 0;
  this->m_colorGemColor._color[0] = 0;
  this->m_colorGemColor._color[1] = 0;
  this->m_colorGemColor._color[2] = 0;
  this->m_colorGemColor._color[3] = 0;
  if ( m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4176, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_anglediff.m_Value = 0;
  }
  if ( this->m_iCurShop.m_Value != DOTA_SHOP_TYPE::DOTA_SHOP_NONE )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 3876, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iCurShop.m_Value = DOTA_SHOP_TYPE::DOTA_SHOP_NONE;
  }
  v8 = !this->m_bIsIllusion.m_Value;
  this->m_hLastNearShop.m_Index = -1;
  if ( !v8 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 3416, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bIsIllusion.m_Value = 0;
  }
  if ( this->m_iTaggedAsVisibleByTeam.m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2936, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iTaggedAsVisibleByTeam.m_Value = 0;
  }
  this->m_iLastAbilityPlayer = -1;
  CBaseAnimating::SetModelScale(this, COERCE_DOUBLE(1065353216), v12);
  this->m_flBaselineModelScale = 1.0;
  v8 = this->m_flTauntCooldown.m_Value == 0.0;
  this->m_flHullRadius = 3.0;
  this->m_flCollisionPadding = 2.0;
  if ( !v8 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2316, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flTauntCooldown.m_Value = 0.0;
  }
  v15 = 0.0;
  this->m_flProjectileCollisionSize = 0.0;
  this->m_ObstructionRelationshipClass = ObstructionRelationshipClass_t::DOTA_OBSTRUCTION_RELATIONSHIP_NPC;
  if ( g_pGameRules != 0 )
    v15 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_flCreationTime = v15;
  BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
  (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 22))(BaseAnimatingController, 1.0);
  this->m_flTimeSinceLastAbilityNag = 0.0;
  v17 = 0;
  this->m_bActivityModifiersDirty = 0;
  this->m_flBlinkDaggerTime = 0.0;
  this->m_flAdditionalBattleMusicWeight = 0.0;
  this->m_flAttackRegulator = 0.0;
  while ( 1 )
  {
    m_iszAbilityList->u.m_Id = 0;
    if ( v17 == 23 )
      break;
    m_iszAbilityList = &this->m_iszAbilityList[++v17];
  }
  v8 = this->m_nHealthBarOffsetOverride.m_Value == -1;
  this->m_bIsDOTANPC = 1;
  this->m_bMidLoading = 0;
  this->m_flCompanionDistance = 250.0;
  this->m_flBaselineModelScale = -1.0;
  this->m_fModelScaleMultiplier = 1.0;
  this->m_flPreviousModelScale = 1.0;
  if ( !v8 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2160, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nHealthBarOffsetOverride.m_Value = -1;
  }
  v8 = this->m_bShouldDoFlyHeightVisual.m_Value;
  this->m_bCursorTargetingNothing = 1;
  this->m_iUnitType = 0;
  this->m_bChaseTargetMoves = 1;
  this->m_flChaseDistance = 150.0;
  if ( !v8 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4188, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bShouldDoFlyHeightVisual.m_Value = 1;
  }
  if ( this->m_nTotalDamageTaken.m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2240, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nTotalDamageTaken.m_Value = 0;
  }
  this->m_bTrackDamageTaken = 0;
  p_m_vLastVisibilityChange = &this->m_vLastVisibilityChange;
  this->m_flLastIdleChangeTime = 0.0;
  for ( this->m_flCritBashFailUntil = 0.0;
        &this->m_pAnimState != p_m_vLastVisibilityChange;
        p_m_vLastVisibilityChange = (p_m_vLastVisibilityChange + 4) )
  {
    LODWORD(p_m_vLastVisibilityChange->_vptr_IHandleEntity) = 0;
  }
  this->m_bUseNeutralCreepBehavior = 0;
  this->m_nPoseParameterTurn = -1;
  this->m_bCanSellItems = 1;
  this->m_NeutralType = DOTA_NEUTRAL_TYPE::DOTA_NEUTRAL_NONE;
  v19 = operator new(0x178u);
  CDOTA_Bot_Script::CDOTA_Bot_Script(v19);
  this->m_pBotScript = v19;
  CDOTA_BaseNPC::EnableAutoStyles(this);
}


// CDOTA_BaseNPC::~CDOTA_BaseNPC  (line 1519, @0x0000000002929c80, libserver.so)  // inlines: Delete, Destruct<WearableSpawnInfo_t>, Detach, Element, MarkInvalid, Purge, RemoveAll, operator[], ~CAutoStyleCriteria, ~CCopyableUtlVector, ~CDOTA_UnitInventory, ~CLocalNPCObstructionsCache, ~CPlainAutoPtr, ~CUnitOrders, ~CUtlHashtable, ~CUtlMemory, ~CUtlQueue, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~NetworkVar_m_Inventory, ~NetworkVar_m_ModifierManager, ~NextBotCombatCharacter
// calls: operator delete, CUtlString::FreeMemoryBlock, WearableSpawnInfo_t::~WearableSpawnInfo_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAPseudoRandom>, int>::Purge, CUtlVectorBase<CHandle<CDOTA_BaseNPC>, CUtlMemory<CHandle<CDOTA_BaseNPC>, int> >::RemoveAll, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlVectorBase<sSharedCooldownInfo, CUtlMemory<sSharedCooldownInfo, int> >::RemoveAll, CUtlMemory<CUnitOrders, int>::Purge, CAssetModifierContainer::~CAssetModifierContainer, CDOTA_SpeechHandle::~CDOTA_SpeechHandle, CDOTA_ModifierManager::~CDOTA_ModifierManager, CUtlMemory<CDOTA_BaseNPC::sDamageEvent, int>::Purge (22 total)
// callers: CDOTA_NPC_DataDriven::~CDOTA_NPC_DataDriven, CDOTA_BaseNPC_Thinker::~CDOTA_BaseNPC_Thinker, CDOTA_BaseNPC::~CDOTA_BaseNPC, CDOTA_BaseNPC_Additive::~CDOTA_BaseNPC_Additive, CDOTA_BaseNPC_Creep::~CDOTA_BaseNPC_Creep, CDOTA_BaseNPC_Creep_Lane::~CDOTA_BaseNPC_Creep_Lane, CDOTA_BaseNPC_Creep_Siege::~CDOTA_BaseNPC_Creep_Siege, CDOTA_BaseNPC_Creep_Neutral::~CDOTA_BaseNPC_Creep_Neutral, CDOTA_BaseNPC_Creep_Talking::~CDOTA_BaseNPC_Creep_Talking, CDOTA_Unit_Roquelaire::~CDOTA_Unit_Roquelaire, CDOTA_BaseNPC_Building::~CDOTA_BaseNPC_Building, CDOTA_BaseNPC_Pet::~CDOTA_BaseNPC_Pet (73 total)
void __fastcall CDOTA_BaseNPC::~CDOTA_BaseNPC(CDOTA_BaseNPC *const this)
{
  CDOTA_BaseNPC::CDOTA_BaseNPCIntention *m_intention; // rdi
  CDOTABody *m_body; // rdi
  CDOTALocomotor *m_locomotor; // rdi
  CDOTAAnimState *m_pAnimState; // rdi
  CAutoStyleCriteria *m_pAutoStyleCriteria; // r12
  int m_nUsed; // ecx
  int v8; // edx
  CUtlHashtableEntry<CUtlStringToken,float> *v9; // rax
  bool v10; // zf
  int v11; // r12d
  __int64 v12; // r13
  __int64 v13; // rdi
  int v14; // ecx
  int v15; // edx
  CUtlHashtableEntry<int,CDOTAPseudoRandom> *v16; // rax
  CEconItemView *m_p; // rdi

  this->_vptr_IHandleEntity = &off_42D7D50;
  this->_vptr_INextBotEventResponder = &off_42D8CB0;
  this->_vptr_CObstructionObject = off_42D8FE0;
  m_intention = this->m_intention;
  if ( m_intention != 0 )
    (*(m_intention->_vptr_INextBotEventResponder + 2))(m_intention);
  m_body = this->m_body;
  if ( m_body != 0 )
    (*(m_body->_vptr_INextBotEventResponder + 2))(m_body);
  m_locomotor = this->m_locomotor;
  if ( m_locomotor != 0 )
    (*(m_locomotor->_vptr_INextBotEventResponder + 2))(m_locomotor);
  m_pAnimState = this->m_pAnimState;
  if ( m_pAnimState != 0 )
  {
    (*(m_pAnimState->_vptr_CDOTAAnimState + 2))(m_pAnimState);
    this->m_pAnimState = 0;
  }
  operator delete(this->m_pBotScript);
  m_pAutoStyleCriteria = this->m_pAutoStyleCriteria;
  if ( m_pAutoStyleCriteria != 0 )
  {
    m_nUsed = m_pAutoStyleCriteria->m_criteria.m_nUsed;
    if ( m_nUsed != 0 )
    {
      v8 = m_pAutoStyleCriteria->m_criteria.m_table.m_nAllocationCount - 1;
      if ( v8 >= 0 )
      {
        v9 = &m_pAutoStyleCriteria->m_criteria.m_table.m_pMemory[v8];
        do
        {
          if ( v9->flags_and_hash >= 0 )
          {
            --m_nUsed;
            v9->flags_and_hash = 0x80000000;
            if ( m_nUsed == 0 )
              break;
          }
          --v8;
          --v9;
        }
        while ( v8 != -1 );
      }
      m_pAutoStyleCriteria->m_criteria.m_nUsed = 0;
    }
    if ( (m_pAutoStyleCriteria->m_criteria.m_table.m_nGrowSize & 0xC0000000) == 0 )
    {
      if ( m_pAutoStyleCriteria->m_criteria.m_table.m_pMemory != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        m_pAutoStyleCriteria->m_criteria.m_table.m_pMemory = 0;
      }
      m_pAutoStyleCriteria->m_criteria.m_table.m_nAllocationCount = 0;
    }
    operator delete(m_pAutoStyleCriteria);
  }
  v10 = (this->m_ActivitiesStarted.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ActivitiesStarted.m_Size = 0;
  if ( v10 )
  {
    CUtlMemory<int,int>::Purge(&this->m_ActivitiesStarted.m_Memory);
    if ( (this->m_ActivitiesStarted.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&this->m_ActivitiesStarted.m_Memory);
  }
  if ( this->m_strLastKillerAbility.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_strLastKillerAbility);
  v11 = this->m_wearableSpawnList.m_Size - 1;
  v12 = 16LL * v11;
  if ( v11 >= 0 )
  {
    do
    {
      v13 = v12;
      --v11;
      v12 -= 16;
      WearableSpawnInfo_t::~WearableSpawnInfo_t((this->m_wearableSpawnList.m_Memory.m_pMemory + v13));
    }
    while ( v11 != -1 );
  }
  v10 = (this->m_wearableSpawnList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_wearableSpawnList.m_Size = 0;
  if ( v10 )
  {
    CUtlMemory<WearableSpawnInfo_t,int>::Purge(&this->m_wearableSpawnList.m_Memory);
    if ( (this->m_wearableSpawnList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<WearableSpawnInfo_t,int>::Purge(&this->m_wearableSpawnList.m_Memory);
  }
  v14 = this->m_pseudorandom.m_nUsed;
  if ( v14 != 0 )
  {
    v15 = this->m_pseudorandom.m_table.m_nAllocationCount - 1;
    if ( v15 >= 0 )
    {
      v16 = &this->m_pseudorandom.m_table.m_pMemory[v15];
      do
      {
        if ( v16->flags_and_hash >= 0 )
        {
          --v14;
          v16->flags_and_hash = 0x80000000;
          if ( v14 == 0 )
            break;
        }
        --v15;
        --v16;
      }
      while ( v15 != -1 );
    }
    this->m_pseudorandom.m_nUsed = 0;
  }
  if ( (this->m_pseudorandom.m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<int,CDOTAPseudoRandom>,int>::Purge(&this->m_pseudorandom.m_table);
  CUtlVectorBase<CHandle<CDOTA_BaseNPC>,CUtlMemory<CHandle<CDOTA_BaseNPC>,int>>::RemoveAll(&this->m_LocalNPCObstructionsCache.m_hCachedNPCs);
  if ( (this->m_LocalNPCObstructionsCache.m_hCachedNPCs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CDOTA_BaseNPC>,int>::Purge(&this->m_LocalNPCObstructionsCache.m_hCachedNPCs.m_Memory);
    if ( (this->m_LocalNPCObstructionsCache.m_hCachedNPCs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CDOTA_BaseNPC>,int>::Purge(&this->m_LocalNPCObstructionsCache.m_hCachedNPCs.m_Memory);
  }
  v10 = (this->m_ActivityModifiers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ActivityModifiers.m_Size = 0;
  if ( v10 )
  {
    CUtlMemory<CUtlSymbol,int>::Purge(&this->m_ActivityModifiers.m_Memory);
    if ( (this->m_ActivityModifiers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlSymbol,int>::Purge(&this->m_ActivityModifiers.m_Memory);
  }
  this->m_Inventory._vptr_CDOTA_UnitInventory = off_40DC990;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_Inventory.m_vecRecentlyDroppedItems);
  if ( (this->m_Inventory.m_vecRecentlyDroppedItems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Inventory.m_vecRecentlyDroppedItems.m_Memory);
    if ( (this->m_Inventory.m_vecRecentlyDroppedItems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Inventory.m_vecRecentlyDroppedItems.m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_Inventory.m_hPendingCombineItemRemoves);
  if ( (this->m_Inventory.m_hPendingCombineItemRemoves.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Inventory.m_hPendingCombineItemRemoves.m_Memory);
    if ( (this->m_Inventory.m_hPendingCombineItemRemoves.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Inventory.m_hPendingCombineItemRemoves.m_Memory);
  }
  CUtlVectorBase<sSharedCooldownInfo,CUtlMemory<sSharedCooldownInfo,int>>::RemoveAll(&this->m_Inventory.m_SharedCooldownList);
  if ( (this->m_Inventory.m_SharedCooldownList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<sSharedCooldownInfo,int>::Purge(&this->m_Inventory.m_SharedCooldownList.m_Memory);
    if ( (this->m_Inventory.m_SharedCooldownList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<sSharedCooldownInfo,int>::Purge(&this->m_Inventory.m_SharedCooldownList.m_Memory);
  }
  v10 = (this->m_PseudoQueuedOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_PseudoQueuedOrders.m_nUnits.m_Size = 0;
  if ( v10 )
  {
    CUtlMemory<CEntityIndex,int>::Purge(&this->m_PseudoQueuedOrders.m_nUnits.m_Memory);
    if ( (this->m_PseudoQueuedOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(&this->m_PseudoQueuedOrders.m_nUnits.m_Memory);
  }
  v10 = (this->m_CurrentQueuedOrder.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_CurrentQueuedOrder.m_nUnits.m_Size = 0;
  if ( v10 )
  {
    CUtlMemory<CEntityIndex,int>::Purge(&this->m_CurrentQueuedOrder.m_nUnits.m_Memory);
    if ( (this->m_CurrentQueuedOrder.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(&this->m_CurrentQueuedOrder.m_nUnits.m_Memory);
  }
  CUtlMemory<CUnitOrders,int>::Purge(&this->m_QueuedOrders.m_memory);
  CAssetModifierContainer::~CAssetModifierContainer(&this->m_AssetModifiers);
  if ( this->m_strAnimationModifier.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_strAnimationModifier);
  if ( this->m_szUnitLabel.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szUnitLabel);
  CDOTA_SpeechHandle::~CDOTA_SpeechHandle(&this->m_Speech);
  this->m_ModifierManager._vptr_CDOTA_ModifierManager = &off_42D5AF0;
  CDOTA_ModifierManager::~CDOTA_ModifierManager(&this->m_ModifierManager);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_associatedEmptyAbilities);
  if ( (this->m_associatedEmptyAbilities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_associatedEmptyAbilities.m_Memory);
    if ( (this->m_associatedEmptyAbilities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_associatedEmptyAbilities.m_Memory);
  }
  CUtlMemory<CDOTA_BaseNPC::sDamageEvent,int>::Purge(&this->m_DamageEventQueue.m_memory);
  if ( (this->m_vPastGroundHeights.m_memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<Vector,int>::Purge(&this->m_vPastGroundHeights.m_memory);
  m_p = this->m_pGeneratingEconItem.m_p;
  this->m_pGeneratingEconItem.m_p = 0;
  if ( m_p != 0 )
    (*(m_p->_vptr_IEconItemInterface + 2))(m_p);
  this->_vptr_IHandleEntity = &off_47B13F0;
  this->_vptr_INextBotEventResponder = &off_47B1FB8;
  INextBot::~INextBot(&this->INextBot);
  CBaseCombatCharacter::~CBaseCombatCharacter(this);
}


// CDOTA_BaseNPC::~CDOTA_BaseNPC  (line 1519, @0x000000000292a270, libserver.so)
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_BaseNPC::~CDOTA_BaseNPC(CDOTA_BaseNPC *const this)
{
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BaseNPC::UpdateOnRemove  (line 1535, @0x00000000028fd8d0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator[]
// calls: DOTACommander, CDOTA_Commander::UnregisterUnit, CBaseCombatCharacter::UpdateOnRemove, C2DGridObstructionManager::RemoveObjectObstruction, UTIL_Remove
// callers: CDOTA_Unit_Nian_Attachment::UpdateOnRemove, CDOTA_Unit_Broodmother_Web::UpdateOnRemove
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC::UpdateOnRemove(CDOTA_BaseNPC *const this)
{
  CDOTA_Commander *v2; // rax
  CNetworkArrayBase<CHandle<CBaseEntity>,24,CDOTA_BaseNPC::NetworkVar_m_hAbilities> *p_m_hAbilities; // rbx
  int i; // r12d
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  int m_Size; // eax
  unsigned __int64 v8; // rbx
  __int64 v9; // r12
  CEntityInstance *m_pInstance; // rdi
  CHandle<CBaseEntity> *v11; // rdx
  uint32 m_Index; // eax
  __int16 v13; // cx
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx

  v2 = DOTACommander();
  CDOTA_Commander::UnregisterUnit(v2, this);
  CBaseCombatCharacter::UpdateOnRemove(this);
  if ( g_GridNav.m_bLoaded && this->m_pObstructionRecord != 0 )
    C2DGridObstructionManager::RemoveObjectObstruction(&g_GridNav.m_ObstructionManager, &this->CObstructionObject);
  p_m_hAbilities = &this->m_hAbilities;
  for ( i = 0; i != 24; ++i )
  {
    while ( 1 )
    {
      if ( p_m_hAbilities->m_Value[0].m_Index + 2 > 1 )
      {
        v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(p_m_hAbilities->m_Value[0].m_Index) >> 9) & 0x3F];
        if ( v5 != 0 )
        {
          v6 = &v5[p_m_hAbilities->m_Value[0].m_Index & 0x1FF];
          if ( v6 != 0 && p_m_hAbilities->m_Value[0].m_Index == v6->m_EHandle.m_Index && v6->m_pInstance != 0 )
            break;
        }
      }
      ++i;
      p_m_hAbilities = (p_m_hAbilities + 4);
      if ( i == 24 )
        goto LABEL_12;
    }
    UTIL_Remove(v6->m_pInstance);
    p_m_hAbilities = (p_m_hAbilities + 4);
  }
LABEL_12:
  m_Size = this->m_associatedEmptyAbilities.m_Size;
  if ( m_Size > 0 )
  {
    v8 = 0;
    v9 = 4LL * (m_Size - 1) + 4;
    do
    {
      m_pInstance = 0;
      v11 = &this->m_associatedEmptyAbilities.m_Memory.m_pMemory[v8 / 4];
      m_Index = v11->m_Index;
      if ( v11->m_Index + 2 > 1 )
      {
        v13 = v11->m_Index;
        v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v11->m_Index) >> 9) & 0x3F];
        if ( v14 != 0 )
        {
          v15 = &v14[v13 & 0x1FF];
          if ( v15 != 0 && m_Index == v15->m_EHandle.m_Index )
            m_pInstance = v15->m_pInstance;
        }
      }
      UTIL_Remove(m_pInstance);
      v8 += 4LL;
    }
    while ( v8 != v9 );
  }
}


// CDOTA_BaseNPC::SetModelScale  (line 1562, @0x00000000028f5af0, libserver.so)
// calls: CBaseAnimating::SetModelScale
void __fastcall CDOTA_BaseNPC::SetModelScale(CDOTA_BaseNPC *const this, double a2, float flScale)
{
  float flScalea; // [rsp+Ch] [rbp-14h]

  flScalea = *&a2;
  CBaseAnimating::SetModelScale(this, a2, *&a2);
  this->m_flBaselineModelScale = flScalea;
}


// CDOTA_BaseNPC::SetBot  (line 1569, @0x0000000002901bf0, libserver.so)
// calls: CDOTA_Bot_Script::SetBot
// callers: CDOTA_TeamCommander::GameShutdown, CDOTA_TeamCommander::UnregisterUnit, CDOTA_TeamCommander::RegisterUnit
void __fastcall CDOTA_BaseNPC::SetBot(CDOTA_BaseNPC *const this, CDOTA_Bot *pBot)
{
  this->m_pBot = pBot;
  CDOTA_Bot_Script::SetBot(this->m_pBotScript, pBot);
}


// CDOTA_BaseNPC::UnserializeUnitName  (line 1578, @0x0000000002922820, libserver.so)  // inlines: CUtlString, operator=, ~CUtlString
// calls: CUtlString::Set, CDOTA_BaseNPC::GetUnitNameFromKeyValues, CUtlString::Get, CDOTA_BaseNPC::SetUnitName, CUtlString::FreeMemoryBlock, _Unwind_Resume
// callers: CDOTA_BaseNPC::Precache, CDOTA_BaseNPC_Hero::Precache
void __fastcall CDOTA_BaseNPC::UnserializeUnitName(CDOTA_BaseNPC *const this, const CEntityKeyValues *pKeyValues)
{
  const char *v4; // rax
  bool v5; // zf
  CUtlString strUnitName; // [rsp+0h] [rbp-30h] BYREF

  strUnitName.m_pString = 0;
  CUtlString::Set(&strUnitName, "");
  CDOTA_BaseNPC::GetUnitNameFromKeyValues(pKeyValues, &strUnitName);
  v4 = CUtlString::Get(&strUnitName);
  CDOTA_BaseNPC::SetUnitName(this, v4);
  v5 = strUnitName.m_pString == 0;
  this->m_iszMapUnitName.u.m_Id = 0;
  if ( !v5 )
    CUtlString::FreeMemoryBlock(&strUnitName);
}


// CDOTA_BaseNPC::GetUnitNameFromKeyValues  (line 1598, @0x0000000002922640, libserver.so)  // inlines: Base, Element, FindKeyHash, GetValue, GetValueString, TempString, operator[]
// calls: CEntityKeyValues::HasValue, CUtlString::Set, ExtractUnitName, __stack_chk_fail
// callers: CDotaMapLoadEntityFilter::FilterSpawnGroupEntities, CDOTA_BaseNPC::UnserializeUnitName
// globals: CEntityKeyValues::sm_EmptyVariant
void __fastcall CDOTA_BaseNPC::GetUnitNameFromKeyValues(
        const CEntityKeyValues *pKeyValues,
        CUtlString *const strUnitName)
{
  const char *m_uint64; // r13
  int v5; // edi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v6; // cx
  __int64 v7; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v8; // rdx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v11; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CEntityVariant *v13; // rax
  const char *v14; // rdi
  CEntityVariant *p_m_value; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v16; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v17; // rdx
  char szUnitName[264]; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v19; // [rsp+108h] [rbp-28h]

  v19 = __readfsqword(0x28u);
  if ( pKeyValues == 0 )
  {
    m_uint64 = 0;
LABEL_4:
    CUtlString::Set(strUnitName, m_uint64);
    return;
  }
  m_uint64 = 0;
  if ( CEntityKeyValues::HasValue(pKeyValues, -782893907) )
  {
    m_nCount = pKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_27:
      p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    }
    else
    {
      m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
      v11 = 0;
      while ( 1 )
      {
        if ( m_nAllocated != 0 )
        {
          m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( m_nAllocated > 9 )
            m_pElements = pKeyValues->m_keyHashes.m_pElements;
        }
        else
        {
          m_pElements = 0;
        }
        if ( m_pElements[v11] == -782893907 )
          break;
        if ( m_nCount <= ++v11 )
          goto LABEL_27;
      }
      if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
        v17 = pKeyValues->m_keyValues.m_pElements;
      else
        v17 = 0;
      p_m_value = &v17[v11].m_value;
    }
    m_uint64 = 0;
    if ( p_m_value->m_type == 30 )
      m_uint64 = p_m_value->m_uint64;
  }
  if ( !CEntityKeyValues::HasValue(pKeyValues, 358247079) )
    goto LABEL_4;
  v5 = pKeyValues->m_keyHashes.m_nCount;
  if ( v5 <= 0 )
  {
LABEL_22:
    v13 = &CEntityKeyValues::sm_EmptyVariant;
  }
  else
  {
    v6 = pKeyValues->m_keyHashes.m_nAllocated;
    v7 = 0;
    while ( 1 )
    {
      if ( v6 != 0 )
      {
        v8 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v6 > 9 )
          v8 = pKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v8 = 0;
      }
      if ( v8[v7] == 358247079 )
        break;
      if ( v5 <= ++v7 )
        goto LABEL_22;
    }
    v16 = pKeyValues->m_keyValues.m_nAllocated != 0 ? pKeyValues->m_keyValues.m_pElements : 0LL;
    v13 = &v16[v7].m_value;
  }
  if ( v13->m_type != 30 )
    goto LABEL_4;
  v14 = v13->m_uint64;
  if ( m_uint64 != 0 || v14 == 0 )
    goto LABEL_4;
  ExtractUnitName(v14, szUnitName);
  CUtlString::Set(strUnitName, szUnitName);
}


// CDOTA_BaseNPC::Precache  (line 1634, @0x000000000294b520, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, GetGameMode, GetModelName, GetModelNameFromKeyValues, GetModifier, GetUnitName, GetValue, GetValue<int>, Min<unsigned int>, NetworkStateChanged, Set, String, ToCStr, V_strcpy_safe<512ul>, atoi, operator=<int>, operator[]
// calls: CBaseCombatCharacter::Precache, CDOTA_BaseNPC::PrecacheShared, CEntityKeyValues::HasValue, CDOTA_BaseNPC::PrecacheWearables, GetModelNameFromKeyValues, FindAssetModifier<CDOTA_BaseNPC, CEntityModelModifier>, CUtlString::Get, CBaseEntity::PrecacheModel, CBaseEntity::PrecacheScriptSound, PrecacheParticleSystem, _V_strncpy, strtok (29 total)
// callers: CDOTA_BaseNPC_Building::Precache, CDOTA_BaseNPC_Creature::Precache, CDOTA_BaseNPC_Pet::Precache, CDOTA_BaseNPC_Hero::Precache, CDOTA_Unit_Announcer::Precache, CDOTA_Unit_Courier::Precache, CDOTA_BaseNPC_Warlock_Golem::Precache, CDOTA_Unit_VisageFamiliar::Precache, CDOTA_NPC_Observer_Ward::Precache
// strings: "General.Attack", "Bow.Attack", "Melee.Attack", "precache", "Ability%d", "No conversion from %s to int now\n"
// globals: jpt_294B60B, CEntityKeyValues::sm_EmptyVariant
void __fastcall CDOTA_BaseNPC::Precache(CDOTA_BaseNPC *const this, const CEntityPrecacheContext *pContext)
{
  __int64 v4; // r8
  const CEntityKeyValues *m_pKeyValues; // rcx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::lambda::lambda v6; // edi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // si
  __int64 v8; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v10; // rdx
  CEntityVariant *p_m_value; // rcx
  int16 m_type; // ax
  uint64 m_uint64; // r12
  const char *ModelNameFromKeyValues; // rax
  const char *v15; // r12
  const char *m_pAsString; // rsi
  const CEntityModelModifier *Asset; // rax
  char *i; // rax
  const char *v19; // r12
  CDOTAGameManager *v20; // rax
  KeyValues *DataForHeroOrUnit; // rax
  KeyValues *v22; // r14
  KeyValues *Key; // rax
  int j; // ebx
  const char *String; // rax
  const char *v26; // rbx
  CDOTAGameManager *v27; // rax
  const char *PortraitBackgroundMaterialByModel; // rax
  const char *v29; // rax
  char abilityKeyName[520]; // [rsp+0h] [rbp-230h] BYREF
  unsigned __int64 v31; // [rsp+208h] [rbp-28h]

  v31 = __readfsqword(0x28u);
  CBaseCombatCharacter::Precache(this, pContext);
  CDOTA_BaseNPC::PrecacheShared(this, pContext);
  if ( (this->m_iUnitType & 1) == 0 )
  {
    CDOTA_BaseNPC::UnserializeUnitName(this, pContext->m_pKeyValues);
    CDOTA_BaseNPC::LoadUnitsFile(this, pContext->m_pKeyValues);
  }
  if ( CEntityKeyValues::HasValue(pContext->m_pKeyValues, -330746118) )
  {
    m_pKeyValues = pContext->m_pKeyValues;
    v6 = pContext->m_pKeyValues->m_keyHashes.0;
    if ( *&v6 > 0 )
    {
      m_nAllocated = m_pKeyValues->m_keyHashes.m_nAllocated;
      v8 = 0;
      v4 = m_nAllocated;
      do
      {
        if ( m_nAllocated != 0 )
        {
          m_pElements = (&m_pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( m_nAllocated > 9 )
            m_pElements = m_pKeyValues->m_keyHashes.m_pElements;
          if ( m_pElements[v8] == -330746118 )
          {
LABEL_12:
            if ( m_pKeyValues->m_keyValues.m_nAllocated != 0 )
              v10 = m_pKeyValues->m_keyValues.m_pElements;
            else
              v10 = 0;
            p_m_value = &v10[v8].m_value;
            m_type = p_m_value->m_type;
            if ( m_type != 0 )
              goto LABEL_15;
LABEL_17:
            LOBYTE(m_uint64) = 0;
            goto LABEL_18;
          }
        }
        else if ( *(4 * v8) == -330746118 )
        {
          goto LABEL_12;
        }
        ++v8;
      }
      while ( *&v6 > v8 );
    }
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( m_type == 0 )
      goto LABEL_17;
LABEL_15:
    switch ( m_type )
    {
      case 1:
        LODWORD(m_uint64) = p_m_value->m_float;
        break;
      case 5:
      case 6:
        LOBYTE(m_uint64) = p_m_value->m_char;
        break;
      case 26:
        LOBYTE(m_uint64) = -1;
        if ( p_m_value->m_int64 <= 0x7FFFFFFF )
        {
          LOBYTE(m_uint64) = 0;
          if ( p_m_value->m_uint64 >= 0xFFFFFFFF80000000LL )
            m_uint64 = p_m_value->m_uint64;
        }
        break;
      case 30:
        LOBYTE(m_uint64) = strtol(p_m_value->m_pszString, 0, 10);
        break;
      case 33:
        LOBYTE(m_uint64) = -1;
        if ( p_m_value->m_uint64 <= 0x7FFFFFFE )
          LOBYTE(m_uint64) = p_m_value->m_uint64;
        break;
      case 34:
        LODWORD(m_uint64) = p_m_value->m_float64;
        break;
      case 37:
        LOBYTE(m_uint64) = -1;
        if ( p_m_value->m_int <= 0x7FFFFFFEu )
          LODWORD(m_uint64) = p_m_value->m_int;
        break;
      default:
        v29 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to int now\n", v29);
        goto LABEL_17;
    }
LABEL_18:
    if ( this->m_iTeamNum.m_Value != m_uint64 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 383, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v4);
      this->m_iTeamNum.m_Value = m_uint64;
    }
  }
  CDOTA_BaseNPC::PrecacheWearables(this, pContext);
  if ( !this->m_bIsIllusion.m_Value )
  {
    ModelNameFromKeyValues = GetModelNameFromKeyValues(pContext->m_pKeyValues, "");
    v15 = ModelNameFromKeyValues;
    if ( ModelNameFromKeyValues != 0 && *ModelNameFromKeyValues != 0 )
    {
      m_pAsString = "";
      if ( this->m_iszUnitName.m_Value.u.m_Id != 0 )
        m_pAsString = this->m_iszUnitName.m_Value.u.m_pAsString;
      Asset = FindAssetModifier<CDOTA_BaseNPC,CEntityModelModifier>(this, m_pAsString);
      if ( Asset != 0 )
        v15 = CUtlString::Get(&Asset->m_strModifier);
      CBaseEntity::PrecacheModel(v15, pContext);
      CBaseEntity::PrecacheScriptSound("General.Attack", pContext);
      CBaseEntity::PrecacheScriptSound("Bow.Attack", pContext);
      CBaseEntity::PrecacheScriptSound("Melee.Attack", pContext);
    }
    if ( this->m_iszAutoAttackRangedParticle.u.m_Id != 0 )
      PrecacheParticleSystem(this->m_iszAutoAttackRangedParticle.u.m_pAsString, pContext);
    if ( this->m_iszParticleFolder.u.m_Id != 0 )
    {
      _V_strncpy(abilityKeyName, this->m_iszParticleFolder.u.m_Id, 512);
      for ( i = strtok(abilityKeyName, ","); i != 0; i = strtok(0, ",") )
        PrecacheParticleFolderAndSystems(i, pContext);
    }
    if ( this->m_iszGameSoundsFile.u.m_Id != 0 )
      PrecacheGameSoundsFile(
        this->m_iszGameSoundsFile.u.m_pAsString,
        pContext,
        *&g_pGameRules[6].m_szQuestName[68] != 20);
    if ( this->m_iszVoiceFile.u.m_Id != 0 )
    {
      PrecacheGameSoundsFile(this->m_iszVoiceFile.u.m_pAsString, pContext, 0);
      CDOTA_SpeechHandle::Init(&this->m_Speech, this);
    }
    v19 = "";
    if ( this->m_iszUnitName.m_Value.u.m_Id != 0 )
      v19 = this->m_iszUnitName.m_Value.u.m_pAsString;
    v20 = DOTAGameManager();
    DataForHeroOrUnit = CDOTAGameManager::GetDataForHeroOrUnit(v20, v19);
    v22 = DataForHeroOrUnit;
    if ( DataForHeroOrUnit != 0 )
    {
      Key = KeyValues::FindKey(DataForHeroOrUnit, "precache", 0);
      if ( Key != 0 )
        CDOTAGamerules::PrecacheResourcesFromKeys(Key, pContext->m_pManifest);
      for ( j = 1; j != 25; ++j )
      {
        while ( 1 )
        {
          V_snprintf(abilityKeyName, 64, "Ability%d", j);
          String = KeyValues::GetString(v22, abilityKeyName, 0, 0, 0);
          if ( String != 0 && *String != 0 )
            break;
          if ( ++j == 25 )
            goto LABEL_48;
        }
        DOTA_PrecacheAbilityByNameSync(String, pContext);
      }
LABEL_48:
      v26 = KeyValues::GetString(v22, "Model", "", 0, 0);
      v27 = DOTAGameManager();
      PortraitBackgroundMaterialByModel = CDOTAGameManager::GetPortraitBackgroundMaterialByModel(v27, v26);
      if ( PortraitBackgroundMaterialByModel != 0 )
        (**pContext->m_pManifest)(pContext->m_pManifest, PortraitBackgroundMaterialByModel);
    }
  }
}


// CDOTA_BaseNPC::ChangeTeam  (line 1741, @0x00000000028f6fe0, libserver.so)  // inlines: GetClassNameAsCStr, GetEntityNameAsCStr, GetTeamMapping, GetTeamNumber, IsPlayerTeam, String
// calls: CBaseCombatCharacter::ChangeTeam, CBaseEntity::FirstMoveChild, CBaseEntity::NextMovePeer, DOTACommander, CDOTA_Commander::ChangeUnitTeam, CDOTA_BaseNPC::GetAbilityByIndex, FoW_TeamNumberToFoWIndex, Warning, CDOTAFogOfWarSystem::RemoveFOWEntity, CDOTAFogOfWarSystem::AddFOWEntity
// strings: "Cannot change team for %s '%s'. Ensure that you have specified TeamCount in your addoninf
void __fastcall CDOTA_BaseNPC::ChangeTeam(CDOTA_BaseNPC *const this, int iTeamNum)
{
  int m_Value; // r14d
  CBaseEntity *i; // rbx
  CDOTA_Commander *v6; // rax
  int j; // ebx
  CDOTABaseAbility *AbilityByIndex; // rax
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rdx
  const char *v11; // rsi

  if ( ((iTeamNum - 6) <= 7 || (iTeamNum - 2) <= 1) && FoW_TeamNumberToFoWIndex(iTeamNum) == 10000 )
  {
    m_pEntity = this->m_pEntity;
    m_pAsString = "";
    if ( m_pEntity->m_name.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_name.u.m_pAsString;
    v11 = "";
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      v11 = m_pEntity->m_designerName.u.m_pAsString;
    Warning(
      "Cannot change team for %s '%s'. Ensure that you have specified TeamCount in your addoninfo.txt!\n",
      v11,
      m_pAsString);
  }
  else
  {
    m_Value = this->m_iTeamNum.m_Value;
    CBaseCombatCharacter::ChangeTeam(this, iTeamNum);
    if ( m_Value != this->m_iTeamNum.m_Value )
    {
      if ( (*(this->_vptr_IHandleEntity + 212))(this) != 0
        && CDOTAFogOfWarSystem::RemoveFOWEntity(&g_DOTAFogOfWarSystem, this) )
      {
        CDOTAFogOfWarSystem::AddFOWEntity(&g_DOTAFogOfWarSystem, this);
      }
      for ( i = CBaseEntity::FirstMoveChild(this); i != 0; i = CBaseEntity::NextMovePeer(i) )
        (*(i->_vptr_IHandleEntity + 70))(i, iTeamNum);
      v6 = DOTACommander();
      CDOTA_Commander::ChangeUnitTeam(v6, this, m_Value);
    }
    for ( j = 0; j != 24; ++j )
    {
      AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(this, j);
      if ( AbilityByIndex != 0 )
        (*(AbilityByIndex->_vptr_IHandleEntity + 70))(AbilityByIndex, iTeamNum);
    }
  }
}


// CDOTA_BaseNPC::Connect  (line 1792, @0x00000000028f5b20, libserver.so)
// calls: CBaseModelEntity::Connect, operator new, CDOTAAnimState::CDOTAAnimState, CBaseAnimating::UseClientSideAnimation, operator delete, _Unwind_Resume
void __fastcall CDOTA_BaseNPC::Connect(CDOTA_BaseNPC *const this)
{
  CDOTAAnimState *v2; // r12

  CBaseModelEntity::Connect(this);
  v2 = operator new(0x38u);
  CDOTAAnimState::CDOTAAnimState(v2, this);
  this->m_pAnimState = v2;
  CBaseAnimating::UseClientSideAnimation(this, 1);
}


// CDOTA_BaseNPC::Spawn  (line 1804, @0x000000000294bc20, libserver.so)  // inlines: AddObstructionProperty, AddSolidFlags, AssignTo, Base, CreateEvent, DOTAGameRules, Element, FindKeyHash, Get<float>, GetEHandle, GetEntryIndex, GetGameTime, GetModelName, GetModelNameFromKeyValues, GetModifier, GetSerialNumber, GetSkeletonInstance, GetUnitName, GetValue, GetValue<bool>, GetValue<float>, HasFlyMovementCapability, InState, MarkPVSInformationDirty, NetworkStateChanged, OBBSize, RemoveEffects, Set, SetInitialGoalEntity, SetInitialGoalPosition, SetInt, SetSelectionRingVisibility, SetShouldAnimate, SetSolid, String, ToCStr, Vector, VectorSubtract, _V_strcmp, atof, curtime, entindex, operator!=, operator-, operator=, operator=<bool>, operator=<float>, operator[]
// calls: CSkeletonInstance::CleanupPhysics, CEntityKeyValues::HasValue, CEntityKeyValues::GetValue<int>, CBaseEntity::SetLifeState, CEntityKeyValues::GetValueString, CGameEntitySystem::FindEntityByName, NextBotCombatCharacter::Spawn, GetModelNameFromKeyValues, FindAssetModifier<CDOTA_BaseNPC, CEntityModelModifier>, CUtlString::Get, CBaseModelEntity::SetModel, CBaseAnimating::GetModelPtr (35 total)
// callers: CDOTA_NPC_DataDriven::Spawn, CDOTA_BaseNPC_Creep::Spawn, CDOTA_BaseNPC_Creep_Neutral::Spawn, CDOTA_BaseNPC_Creep_Lane::Spawn, CDOTA_Unit_Roquelaire::Spawn, CDOTA_BaseNPC_Creature::Spawn, CDOTA_BaseNPC_Building::Spawn, CDOTA_BaseNPC_Pet::Spawn, CDOTA_BaseNPC_Hero::Spawn, CDOTA_Unit_ZeusCloud::Spawn, CDOTA_PhantomAssassin_Gravestone::Spawn, CDOTA_Unit_Announcer::Spawn (21 total)
// strings: "No conversion from %s to float now\n", "npc_spawned", "false", "true", "Invalid conversion : CString '%s' to bool\n", "No conversion from %s to bool now\n"
// globals: jpt_294BD2C, CEntityKeyValues::sm_EmptyVariant, jpt_294BE5C, jpt_294BF06, jpt_294C75C, jpt_294C976
void __fastcall CDOTA_BaseNPC::Spawn(CDOTA_BaseNPC *const this, const CEntityKeyValues *pKeyValues)
{
  CSkeletonInstance *v4; // rax
  void (__fastcall *v5)(CDOTA_BaseNPC *const, _QWORD); // r13
  unsigned int v6; // eax
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v11; // rdx
  CEntityVariant *p_m_value; // rdx
  int16 m_type; // ax
  char m_char; // r14
  bool v15; // zf
  char v16; // r13
  int v17; // r8d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v18; // cx
  __int64 j; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v20; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v21; // rdx
  CEntityVariant *v22; // rdx
  int16 v23; // ax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v24; // cx
  __int64 v25; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v26; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v27; // rdx
  CEntityVariant *v28; // rdx
  int16 v29; // ax
  const char *ValueString; // rax
  CBaseEntity *EntityByName; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v33; // eax
  __int16 v34; // cx
  char v35; // al
  const char *ModelNameFromKeyValues; // rax
  const char *v37; // rdx
  const char *m_pAsString; // rsi
  const CEntityModelModifier *Asset; // rax
  const char *v40; // rdx
  const CModel *ModelPtr; // rax
  bool v42; // r13
  const Vector *v43; // r14
  const Vector *v44; // rax
  float v45; // xmm0_4
  void (__fastcall *v46)(CDOTA_BaseNPC *const, int *); // rax
  float v47; // xmm0_4
  const Vector *AbsOrigin; // rax
  vec_t z; // xmm0_4
  CGlobalVars *v50; // r14
  void (__fastcall *m_pfnWarningFunc)(__int64); // rax
  bool m_bAutoAttacksByDefault; // al
  AutoattackUnitType_t AutoattackUnitType; // r14d
  CDOTAPlayer *v54; // rax
  CDOTABody *v55; // rax
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t v58; // xmm0_4
  int v59; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v60; // cx
  __int64 m; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v62; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v63; // rdx
  float v64; // xmm0_4
  CEntityVariant *v65; // rdi
  bool v66; // al
  float m_float; // xmm0_4
  int v68; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v69; // cx
  __int64 k; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v71; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v72; // rdx
  CEntityVariant *v73; // rdx
  const char *m_uint64; // rax
  __int64 v75; // rdx
  const char *v76; // rax
  int (**vptr_IHandleEntity)(...); // rax
  int v78; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v79; // cx
  __int64 n; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v81; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v82; // rdx
  CEntityVariant *v83; // rdx
  int16 v84; // ax
  __int64 v85; // r12
  CEntityIndex v86; // eax
  const Vector *v87; // rax
  unsigned int m_Value; // esi
  vec_t v89; // xmm1_4
  vec_t v90; // xmm0_4
  int (**v91)(...); // rax
  ObstructionRecord_t *m_pObstructionRecord; // rdx
  int v93; // eax
  char v94; // al
  int16 v95; // ax
  float m_int; // xmm0_4
  const char *v97; // rax
  __int64 v98; // rdx
  const char *v99; // rax
  const char *v100; // rax
  const char *v101; // rax
  const char *v102; // rax
  const char *pModelName; // [rsp+10h] [rbp-50h]
  const char *pModelNamea; // [rsp+10h] [rbp-50h]
  float pModelNamec; // [rsp+10h] [rbp-50h]
  float pModelNameb; // [rsp+10h] [rbp-50h]
  int defaultValue[2]; // [rsp+20h] [rbp-40h] BYREF
  float v108; // [rsp+28h] [rbp-38h]

  v4 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode);
  CSkeletonInstance::CleanupPhysics(v4);
  if ( CEntityKeyValues::HasValue(pKeyValues, 1544343146) )
  {
    v5 = *(this->_vptr_IHandleEntity + 157);
    defaultValue[0] = 0;
    v6 = CEntityKeyValues::GetValue<int>(pKeyValues, 1544343146, defaultValue);
    v5(this, v6);
  }
  if ( CEntityKeyValues::HasValue(pKeyValues, 1744754256) )
  {
    ValueString = CEntityKeyValues::GetValueString(pKeyValues, 1744754256, 0);
    if ( ValueString != 0 )
    {
      EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, ValueString, 0, 0, 0, 0);
      if ( EntityByName != 0 && (m_pEntity = EntityByName->m_pEntity) != 0 )
      {
        v33 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v34 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v34 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_initialGoalEntity.m_Index) = v34 | this->m_initialGoalEntity.m_Index & 0x8000;
        this->m_initialGoalEntity.m_Index = (v33 << 15) | this->m_initialGoalEntity.m_Index & 0x7FFF;
      }
      else
      {
        this->m_initialGoalEntity.m_Index = -1;
      }
    }
  }
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount > 0 )
  {
    m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
    for ( i = 0; m_nCount > i; ++i )
    {
      if ( m_nAllocated != 0 )
      {
        m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( m_nAllocated > 9 )
          m_pElements = pKeyValues->m_keyHashes.m_pElements;
        if ( m_pElements[i] == 1662916433 )
        {
LABEL_12:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v11 = pKeyValues->m_keyValues.m_pElements;
          else
            v11 = 0;
          p_m_value = &v11[i].m_value;
          m_type = p_m_value->m_type;
          if ( m_type != 0 )
            goto LABEL_15;
LABEL_17:
          m_char = 0;
          goto LABEL_18;
        }
      }
      else if ( *(4 * i) == 1662916433 )
      {
        goto LABEL_12;
      }
    }
  }
  p_m_value = &CEntityKeyValues::sm_EmptyVariant;
  m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( m_type == 0 )
    goto LABEL_17;
LABEL_15:
  switch ( m_type )
  {
    case 1:
      m_char = p_m_value->m_float != 0.0;
      break;
    case 5:
    case 37:
      m_char = p_m_value->m_int != 0;
      break;
    case 6:
      m_char = p_m_value->m_char;
      break;
    case 26:
      m_char = p_m_value->m_uint64 != 0;
      break;
    case 30:
      if ( strcmp(p_m_value->m_pszString, "0") == 0 )
      {
        m_char = 0;
      }
      else if ( strcmp(p_m_value->m_pszString, "false") == 0 )
      {
        m_char = 0;
      }
      else
      {
        if ( strcmp(p_m_value->m_pszString, "no") == 0 )
          goto LABEL_208;
        if ( strcmp(p_m_value->m_pszString, "1") == 0 )
        {
          m_char = 1;
        }
        else if ( strcmp(p_m_value->m_pszString, "true") == 0 )
        {
          m_char = 1;
        }
        else
        {
          if ( strcmp(p_m_value->m_pszString, "yes") != 0 )
          {
            Warning("Invalid conversion : CString '%s' to bool\n", p_m_value->m_pszString);
            goto LABEL_208;
          }
          m_char = 1;
        }
      }
      break;
    case 33:
      m_char = p_m_value->m_uint64 != 0;
      break;
    case 34:
      m_char = p_m_value->m_float64 != 0.0;
      break;
    default:
      v101 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to bool now\n", v101);
LABEL_208:
      m_char = 0;
      break;
  }
LABEL_18:
  if ( this->m_bIsPhantom.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2164, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bIsPhantom.m_Value = 0;
  }
  v15 = !this->m_bSelectionRingVisible.m_Value;
  this->m_bIsPhantomBlocker = 0;
  if ( v15 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2096, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bSelectionRingVisible.m_Value = 1;
  }
  this->m_bBlocksCreepSpawn = 1;
  CBaseEntity::SetLifeState(this, LifeState_t::LIFE_ALIVE);
  if ( this->m_flBaselineModelScale < 0.0 )
    this->m_flBaselineModelScale = CBaseAnimating::GetModelScale(this);
  this->m_fModelScaleMultiplier = 1.0;
  v16 = 0;
  v15 = !this->m_bFirstSpawn;
  this->m_nFarmClaimPlayerID = -1;
  if ( v15 )
  {
    v16 = 1;
    (*(this->_vptr_IHandleEntity + 392))(this);
  }
  v17 = pKeyValues->m_keyHashes.m_nCount;
  if ( v17 > 0 )
  {
    v18 = pKeyValues->m_keyHashes.m_nAllocated;
    for ( j = 0; v17 > j; ++j )
    {
      if ( v18 != 0 )
      {
        v20 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v18 > 9 )
          v20 = pKeyValues->m_keyHashes.m_pElements;
        if ( v20[j] == 1526165316 )
        {
LABEL_34:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v21 = pKeyValues->m_keyValues.m_pElements;
          else
            v21 = 0;
          v22 = &v21[j].m_value;
          v23 = v22->m_type;
          if ( v23 != 0 )
            goto LABEL_37;
          goto LABEL_39;
        }
      }
      else if ( *(4 * j) == 1526165316 )
      {
        goto LABEL_34;
      }
    }
  }
  v22 = &CEntityKeyValues::sm_EmptyVariant;
  v23 = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( v23 != 0 )
  {
LABEL_37:
    switch ( v23 )
    {
      case 1:
        v35 = v22->m_float != 0.0;
        goto LABEL_59;
      case 5:
      case 37:
        v35 = v22->m_int != 0;
        goto LABEL_59;
      case 6:
        v35 = v22->m_char;
        goto LABEL_59;
      case 26:
      case 33:
        v35 = v22->m_uint64 != 0;
        goto LABEL_59;
      case 30:
        if ( strcmp(v22->m_pszString, "0") == 0
          || strcmp(v22->m_pszString, "false") == 0
          || strcmp(v22->m_pszString, "no") == 0 )
        {
          break;
        }
        if ( strcmp(v22->m_pszString, "1") == 0
          || strcmp(v22->m_pszString, "true") == 0
          || strcmp(v22->m_pszString, "yes") == 0 )
        {
          goto LABEL_60;
        }
        Warning("Invalid conversion : CString '%s' to bool\n", v22->m_pszString);
        goto LABEL_204;
      case 34:
        v35 = v22->m_float64 != 0.0;
LABEL_59:
        if ( v35 == 0 )
          break;
LABEL_60:
        (*(this->_vptr_IHandleEntity + 51))(this);
        NextBotCombatCharacter::Spawn(this, pKeyValues);
        (*(this->_vptr_IHandleEntity + 51))(this);
        goto LABEL_61;
      default:
        v100 = VariantFieldTypeName(v23);
        Warning("No conversion from %s to bool now\n", v100);
LABEL_204:
        v17 = pKeyValues->m_keyHashes.m_nCount;
        break;
    }
  }
LABEL_39:
  if ( v17 <= 0 )
  {
LABEL_50:
    v28 = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_51;
  }
  v24 = pKeyValues->m_keyHashes.m_nAllocated;
  v25 = 0;
  while ( v24 == 0 )
  {
    if ( *(4 * v25) == -1940737618 )
      goto LABEL_47;
LABEL_44:
    if ( v17 <= ++v25 )
      goto LABEL_50;
  }
  v26 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( v24 > 9 )
    v26 = pKeyValues->m_keyHashes.m_pElements;
  if ( v26[v25] != -1940737618 )
    goto LABEL_44;
LABEL_47:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v27 = pKeyValues->m_keyValues.m_pElements;
  else
    v27 = 0;
  v28 = &v27[v25].m_value;
LABEL_51:
  v29 = v28->m_type;
  switch ( v29 )
  {
    case 0:
      m_float = 0.0;
      break;
    case 1:
      m_float = v28->m_float;
      break;
    case 5:
      m_float = v28->m_int;
      break;
    case 6:
      m_float = v28->m_char;
      break;
    case 26:
      m_float = v28->m_uint64;
      break;
    case 30:
      m_float = strtod(v28->m_pszString, 0);
      break;
    case 33:
      m_uint64 = v28->m_uint64;
      if ( v28->m_int64 >= 0 )
        goto LABEL_125;
      v75 = v28->m_uint64 & 1 | (v28->m_uint64 >> 1);
      m_float = v75 + v75;
      break;
    case 34:
      m_float = v28->m_float64;
      break;
    case 37:
      LODWORD(m_uint64) = v28->m_int;
LABEL_125:
      m_float = m_uint64;
      break;
    default:
      v76 = VariantFieldTypeName(v29);
      Warning("No conversion from %s to float now\n", v76);
      m_float = 0.0;
      break;
  }
  if ( m_float != this->m_flPhysicalArmorValue.m_Value )
  {
    pModelNameb = m_float;
    (*(this->_vptr_IHandleEntity + 22))(this, 2424, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flPhysicalArmorValue.m_Value = pModelNameb;
  }
  v68 = pKeyValues->m_keyHashes.m_nCount;
  if ( v68 > 0 )
  {
    v69 = pKeyValues->m_keyHashes.m_nAllocated;
    for ( k = 0; v68 > k; ++k )
    {
      if ( v69 != 0 )
      {
        v71 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v69 > 9 )
          v71 = pKeyValues->m_keyHashes.m_pElements;
        if ( v71[k] == -2026226497 )
        {
LABEL_117:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v72 = pKeyValues->m_keyValues.m_pElements;
          else
            v72 = 0;
          v73 = &v72[k].m_value;
          goto LABEL_158;
        }
      }
      else if ( *(4 * k) == -2026226497 )
      {
        goto LABEL_117;
      }
    }
  }
  v73 = &CEntityKeyValues::sm_EmptyVariant;
LABEL_158:
  v95 = v73->m_type;
  switch ( v95 )
  {
    case 0:
      m_int = 0.0;
      break;
    case 1:
      m_int = v73->m_float;
      break;
    case 5:
      m_int = v73->m_int;
      break;
    case 6:
      m_int = v73->m_char;
      break;
    case 26:
      m_int = v73->m_uint64;
      break;
    case 30:
      m_int = strtod(v73->m_pszString, 0);
      break;
    case 33:
      v97 = v73->m_uint64;
      if ( v73->m_int64 >= 0 )
        goto LABEL_164;
      v98 = v73->m_uint64 & 1 | (v73->m_uint64 >> 1);
      m_int = v98 + v98;
      break;
    case 34:
      m_int = v73->m_float64;
      break;
    case 37:
      LODWORD(v97) = v73->m_int;
LABEL_164:
      m_int = v97;
      break;
    default:
      v99 = VariantFieldTypeName(v95);
      Warning("No conversion from %s to float now\n", v99);
      m_int = 0.0;
      break;
  }
  if ( m_int != this->m_flMagicalResistanceValue.m_Value )
  {
    pModelNamec = m_int;
    (*(this->_vptr_IHandleEntity + 22))(this, 2428, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flMagicalResistanceValue.m_Value = pModelNamec;
  }
  NextBotCombatCharacter::Spawn(this, pKeyValues);
LABEL_61:
  ModelNameFromKeyValues = GetModelNameFromKeyValues(pKeyValues, "");
  v37 = ModelNameFromKeyValues;
  if ( ModelNameFromKeyValues != 0 && v16 != 0 && *ModelNameFromKeyValues != 0 )
  {
    m_pAsString = "";
    if ( this->m_iszUnitName.m_Value.u.m_Id != 0 )
      m_pAsString = this->m_iszUnitName.m_Value.u.m_pAsString;
    pModelName = ModelNameFromKeyValues;
    Asset = FindAssetModifier<CDOTA_BaseNPC,CEntityModelModifier>(this, m_pAsString);
    v40 = pModelName;
    if ( Asset != 0 )
      v40 = CUtlString::Get(&Asset->m_strModifier);
    pModelNamea = v40;
    CBaseModelEntity::SetModel(this, v40);
    v37 = pModelNamea;
  }
  if ( this->m_iszOriginalModel.u.m_Id == 0 )
  {
    MakeEntitySystemString(v37);
    this->m_iszOriginalModel.u.m_Id = *defaultValue;
  }
  ModelPtr = CBaseAnimating::GetModelPtr(this);
  v42 = CModel::FirstSequence(ModelPtr).m_Data != -1;
  *((*(this->_vptr_IHandleEntity + 377))(this) + 48) = v42;
  CDOTA_BaseNPC::SpawnWearables(this, pKeyValues);
  CDOTA_BaseNPC::CreateCollisionBounds(this);
  if ( m_char != 0 )
  {
    CBaseEntity::AddEffects(this, 32);
  }
  else
  {
    (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & 0xFFFFFFDF);
    this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
    CBaseEntity::DispatchUpdateTransmitState(this);
  }
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 2);
  CCollisionProperty::SetSolidFlags(&this->m_Collision, this->m_Collision.m_usSolidFlags.m_Value | 1);
  CCollisionProperty::EnableTouchEvents(&this->m_Collision);
  v43 = (*(this->m_Collision._vptr_ICollideable + 2))(&this->m_Collision);
  v44 = (*(this->m_Collision._vptr_ICollideable + 1))(&this->m_Collision);
  CCollisionProperty::SetupPhysicsFromUnscaledAABB(
    &this->m_Collision,
    VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED,
    12,
    v44,
    v43);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  v45 = this->m_Collision.m_vecMaxs.m_Value.z - this->m_Collision.m_vecMins.m_Value.z;
  v46 = *(this->_vptr_IHandleEntity + 211);
  defaultValue[0] = 0;
  defaultValue[1] = 0;
  v108 = v45;
  v46(this, defaultValue);
  CBaseCombatCharacter::SetBloodColor(this, 2);
  if ( this->m_flFieldOfView.m_Value != 0.69999999 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1380, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flFieldOfView.m_Value = 0.69999999;
  }
  v47 = 0.0;
  if ( g_pGameRules != 0 )
    v47 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_flPositionUpdateTime = v47;
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  this->m_vLastPositionSent.x = AbsOrigin->x;
  this->m_vLastPositionSent.y = AbsOrigin->y;
  z = AbsOrigin->z;
  this->m_hAttackTarget.m_Index = -1;
  this->m_hAggroTarget.m_Index = -1;
  this->m_vLastPositionSent.z = z;
  this->m_hCommandAttackTarget.m_Index = -1;
  v50 = gpGlobals;
  this->m_nNextUnitThink = gpGlobals->tickcount + ((0.1 / gpGlobals->interval_per_tick) + 0.5);
  this->m_nNextRegenThink = v50->tickcount + ((0.1 / v50->interval_per_tick) + 0.5);
  this->m_nNextModifierThink = v50->tickcount;
  if ( !v50->m_bEnableAssertions && !v50->m_bInSimulation )
  {
    m_pfnWarningFunc = v50->m_pfnWarningFunc;
    if ( m_pfnWarningFunc != 0 )
      m_pfnWarningFunc(1);
  }
  CBaseEntity::ThinkSet(this, 0xC09uLL, v50->m_flCurrentTime, 1182249421, 0);
  m_bAutoAttacksByDefault = this->m_bAutoAttacksByDefault;
  this->m_bHold = 0;
  v15 = !this->m_bIsMoving.m_Value;
  this->m_bIsIdle = 0;
  this->m_bPseudoQueueOrders = 0;
  this->m_bCastLocked = 0;
  this->m_hForceAttackTarget.m_Index = -1;
  this->m_bAllowAllyForceAttack = 0;
  this->m_bWasKilledPassively = 0;
  this->m_nObstructionProperties = 16;
  this->m_bInAggressiveStance = 0;
  this->m_bInInjuredAggressiveStance = 0;
  this->m_PseudoQueuedOrders.m_nOrderType = 0;
  this->m_bWantsToFlee = 0;
  this->m_bIsCamped = 0;
  this->m_bIsReturningHome = 0;
  this->m_bIdleAcquire = m_bAutoAttacksByDefault;
  if ( !v15 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2184, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bIsMoving.m_Value = 0;
  }
  if ( (*(this->_vptr_IHandleEntity + 413))(this) != 0 )
  {
    AutoattackUnitType = CDOTA_BaseNPC::GetAutoattackUnitType(this);
    v54 = (*(this->_vptr_IHandleEntity + 413))(this);
    this->m_bIdleAcquire = CDOTAPlayer::GetUnitsAutoAttackMode(v54, AutoattackUnitType) != CDOTAClientMsg_UnitsAutoAttackMode_EMode::CDOTAClientMsg_UnitsAutoAttackMode_EMode_NEVER;
  }
  if ( (*(this->_vptr_IHandleEntity + 448))(this) != 0 )
    this->m_bIdleAcquire = 1;
  v15 = !this->m_bStolenScepter.m_Value;
  this->m_bCanFollowUnseenUnits = 0;
  this->m_iLeashType = 0;
  if ( !v15 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4004, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bStolenScepter.m_Value = 0;
  }
  v55 = (*(this->_vptr_IHandleEntity + 377))(this);
  CDOTABody::StartAnimation(v55, 0x5FEu, 1, 1.0);
  this->m_bCurrentOrderIsMovement = 0;
  v15 = (this->m_iMoveCapabilities & 2) == 0;
  this->m_bPreviousOrderIsMovement = 0;
  this->m_bResumePreviousMovement = 0;
  x = vec3_origin.x;
  y = vec3_origin.y;
  v58 = vec3_origin.z;
  this->m_vCurrentMovementOrderDestination.x = vec3_origin.x;
  this->m_vCurrentMovementOrderDestination.y = y;
  this->m_vCurrentMovementOrderDestination.z = v58;
  this->m_vPreviousMovementOrderDestination.x = x;
  this->m_vPreviousMovementOrderDestination.y = y;
  this->m_vPreviousMovementOrderDestination.z = v58;
  this->m_vResumePreviousMovementRequestLocation.x = x;
  this->m_vResumePreviousMovementRequestLocation.y = y;
  this->m_vResumePreviousMovementRequestLocation.z = v58;
  if ( !v15 || (BYTE3(this->m_nUnitState64.m_Value) & 1 | ((this->m_nUnitState64.m_Value & 0x200000000LL) != 0)) != 0 )
  {
    m_pObstructionRecord = this->m_pObstructionRecord;
    v93 = this->m_nObstructionProperties | 4;
    this->m_nObstructionProperties = v93;
    if ( m_pObstructionRecord != 0 )
      m_pObstructionRecord->m_ObjectProperties = v93;
  }
  v59 = pKeyValues->m_keyHashes.m_nCount;
  if ( v59 > 0 )
  {
    v60 = pKeyValues->m_keyHashes.m_nAllocated;
    for ( m = 0; v59 > m; ++m )
    {
      if ( v60 != 0 )
      {
        v62 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v60 > 9 )
          v62 = pKeyValues->m_keyHashes.m_pElements;
        if ( v62[m] == -1267449798 )
        {
LABEL_99:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v63 = pKeyValues->m_keyValues.m_pElements;
          else
            v63 = 0;
          v64 = 1.0;
          v65 = &v63[m].m_value;
          if ( v65->m_type != 0 )
            goto LABEL_102;
          goto LABEL_132;
        }
      }
      else if ( *(4 * m) == -1267449798 )
      {
        goto LABEL_99;
      }
    }
  }
  v65 = &CEntityKeyValues::sm_EmptyVariant;
  v64 = 1.0;
  if ( CEntityKeyValues::sm_EmptyVariant.m_type != 0 )
  {
LABEL_102:
    v66 = CVariantBase<CEntityVariantAllocator>::AssignTo(v65, defaultValue);
    v64 = 1.0;
    if ( v66 )
      v64 = *defaultValue;
  }
LABEL_132:
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  this->m_flPathfindingSearchDepthScale = v64;
  vptr_IHandleEntity[471](this);
  if ( this->m_bConsideredHero )
    this->m_iUnitType |= 2u;
  v78 = pKeyValues->m_keyHashes.m_nCount;
  if ( v78 > 0 )
  {
    v79 = pKeyValues->m_keyHashes.m_nAllocated;
    for ( n = 0; v78 > n; ++n )
    {
      if ( v79 != 0 )
      {
        v81 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v79 > 9 )
          v81 = pKeyValues->m_keyHashes.m_pElements;
        if ( v81[n] == 1963146453 )
        {
LABEL_142:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v82 = pKeyValues->m_keyValues.m_pElements;
          else
            v82 = 0;
          v83 = &v82[n].m_value;
          v84 = v83->m_type;
          if ( v84 != 0 )
            goto LABEL_145;
          goto LABEL_147;
        }
      }
      else if ( *(4 * n) == 1963146453 )
      {
        goto LABEL_142;
      }
    }
  }
  v83 = &CEntityKeyValues::sm_EmptyVariant;
  v84 = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( v84 != 0 )
  {
LABEL_145:
    switch ( v84 )
    {
      case 1:
        v94 = v83->m_float != 0.0;
        goto LABEL_154;
      case 5:
      case 37:
        v94 = v83->m_int != 0;
        goto LABEL_154;
      case 6:
        v94 = v83->m_char;
        goto LABEL_154;
      case 26:
      case 33:
        v94 = v83->m_uint64 != 0;
        goto LABEL_154;
      case 30:
        if ( strcmp(v83->m_pszString, "0") == 0
          || strcmp(v83->m_pszString, "false") == 0
          || strcmp(v83->m_pszString, "no") == 0 )
        {
          break;
        }
        if ( strcmp(v83->m_pszString, "1") == 0
          || strcmp(v83->m_pszString, "true") == 0
          || strcmp(v83->m_pszString, "yes") == 0 )
        {
          goto LABEL_155;
        }
        Warning("Invalid conversion : CString '%s' to bool\n", v83->m_pszString);
        break;
      case 34:
        v94 = v83->m_float64 != 0.0;
LABEL_154:
        if ( v94 != 0 )
LABEL_155:
          this->m_iUnitType |= 0x800u;
        break;
      default:
        v102 = VariantFieldTypeName(v84);
        Warning("No conversion from %s to bool now\n", v102);
        break;
    }
  }
LABEL_147:
  this->m_bFacePlayer = 0;
  v85 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "npc_spawned", 0, 0);
  if ( v85 != 0 )
  {
    v86.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    (*(*v85 + 112LL))(v85, "entindex", v86.m_Data);
    (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v85, 0);
  }
  CCollisionProperty::EnableInteractsAsMask(&this->m_Collision, 0x40080000u);
  v87 = CBaseEntity::GetAbsOrigin(this);
  m_Value = this->m_fEffects.m_Value;
  v89 = v87->y;
  v90 = v87->z;
  this->m_vInitialGoalPosition.x = v87->x;
  v91 = this->_vptr_IHandleEntity;
  this->m_vInitialGoalPosition.y = v89;
  this->m_vInitialGoalPosition.z = v90;
  v91[188](this, m_Value & 0xFFFFFFEF);
}


// CDOTA_BaseNPC::InitialSpawn  (line 2028, @0x00000000028f5b80, libserver.so)  // inlines: FStrEq, GetClassNameAsCStr, GetClassname, QueueConcept, SetActive, SetEntityName, SetFirstSpawn, State_Get, String, _V_strcmp
// calls: CEntityIdentity::SetEntityName, CDOTA_ModifierManager::SetParent, CDOTA_UnitInventory::SetParent, CDOTA_Speech::QueueConcept
// callers: CDOTA_BaseNPC_Hero::InitialSpawn
// strings: "npc_dota_thinker"
void __fastcall CDOTA_BaseNPC::InitialSpawn(CDOTA_BaseNPC *const this)
{
  CEntityIdentity *m_pEntity; // rdi
  const char *m_pAsString; // rsi
  const char *v4; // rsi
  CDOTA_Speech *m_pSpeech; // rdi

  m_pEntity = this->m_pEntity;
  if ( m_pEntity->m_name.u.m_Id == 0 )
  {
    m_pAsString = "";
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    CEntityIdentity::SetEntityName(m_pEntity, m_pAsString);
  }
  CDOTA_ModifierManager::SetParent(&this->m_ModifierManager, this);
  CDOTA_UnitInventory::SetParent(&this->m_Inventory, this);
  this->m_Inventory.m_bIsActive = this->m_bHasInventory;
  (*(this->_vptr_IHandleEntity + 398))(this);
  this->m_bFirstSpawn = 1;
  if ( !this->m_bIsIllusion.m_Value && SLOBYTE(this->m_iUnitType) >= 0 && !this->m_bIsPhantom.m_Value )
  {
    v4 = this->m_pEntity->m_designerName.u.m_pAsString;
    if ( (v4 == 0 || v4 != "npc_dota_thinker" && strcmp(v4, "npc_dota_thinker") != 0)
      && *&g_pGameRules[6].m_szQuestName[28] != 8 )
    {
      m_pSpeech = this->m_Speech.m_pSpeech;
      if ( m_pSpeech != 0 )
        CDOTA_Speech::QueueConcept(m_pSpeech, 0, 0.5, 0, 0, 1, 0, 0, 0);
    }
  }
}


// CDOTA_BaseNPC::Activate  (line 2052, @0x00000000028f5cb0, libserver.so)
// calls: CBaseAnimating::Activate, CDOTA_Bot_Script::SetBaseNPC, DOTACommander, CDOTA_Commander::RegisterUnit
void __fastcall CDOTA_BaseNPC::Activate(CDOTA_BaseNPC *const this, ActivateType_t activateType)
{
  CDOTA_Commander *v3; // rax

  CBaseAnimating::Activate(this, activateType);
  CDOTA_Bot_Script::SetBaseNPC(this->m_pBotScript, this);
  v3 = DOTACommander();
  CDOTA_Commander::RegisterUnit(v3, this);
}


// CDOTA_BaseNPC::SetLevel  (line 2062, @0x00000000028fa0d0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
void __fastcall CDOTA_BaseNPC::SetLevel(CDOTA_BaseNPC *const this, int iLevel)
{
  if ( this->m_iCurrentLevel.m_Value != iLevel )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2132, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iCurrentLevel.m_Value = iLevel;
  }
}


// CDOTA_BaseNPC::GetInventory  (line 2070, @0x0000000002901c10, libserver.so)
// callers: CDOTABaseAbility::StartCooldown, CDOTABaseAbility::EndCooldown, CDOTA_ActionRunner::PerformAction_DropParentItem, CDOTABaseAbility::Think, CDOTABaseAbility::CastAbility, CDOTA_Modifier_LootDrop_Thinker::OnIntervalThink, OnDemoHeroSpawnComplete, CDOTAGamerules::SwapPlayers, CDOTAGamerules::OnARDMDuringMatchSpawnComplete, DOTA_ExecuteOrders, CDOTA_Item::OnUnequip, CDOTA_Item::Think (106 total)
CDOTA_UnitInventory *__fastcall CDOTA_BaseNPC::GetInventory(CDOTA_BaseNPC *const this)
{
  return &this->m_Inventory;
}


// CDOTA_BaseNPC::Script_GetItemInSlot  (line 2078, @0x00000000028fa610, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, ToHScript
// calls: CDOTA_UnitInventory::GetItemInSlot, CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall CDOTA_BaseNPC::Script_GetItemInSlot(CDOTA_BaseNPC *const this, int i)
{
  CDOTA_Item *ItemInSlot; // rax
  CDOTA_Item *v4; // [rsp+8h] [rbp-8h]

  ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(&this->m_Inventory, i);
  if ( ItemInSlot == 0 )
    return 0;
  if ( ItemInSlot->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return ItemInSlot->m_pEntity->m_hPublicScope.m_hScope;
  v4 = ItemInSlot;
  CEntityInstance::CreatePublicScriptScope(ItemInSlot, 0);
  return v4->m_pEntity->m_hPublicScope.m_hScope;
}


// CDOTA_BaseNPC::BoundingRadius2D  (line 2086, @0x00000000028f5cf0, libserver.so)
// calls: CCollisionProperty::BoundingRadius2D
float __fastcall CDOTA_BaseNPC::BoundingRadius2D(CDOTA_BaseNPC *const this)
{
  return CCollisionProperty::BoundingRadius2D(&this->m_Collision);
}


// CDOTA_BaseNPC::Script_CastAbilityOnTarget  (line 2094, @0x000000000292c250, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTAAbility, ToEnt
// calls: GetScriptDesc<CEntityInstance>, __dynamic_cast, CDOTA_BaseNPC::CastAbilityOnTarget
void __fastcall CDOTA_BaseNPC::Script_CastAbilityOnTarget(
        CDOTA_BaseNPC *const this,
        HSCRIPT hTarget,
        HSCRIPT hAbility,
        int iPlayerIndex)
{
  __int64 (__fastcall *v7)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax
  CBaseEntity *v9; // r15
  __int64 (__fastcall *v10)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *v11; // rax
  const void *v12; // rax
  CDOTABaseAbility *v13; // rax

  if ( hTarget != 0 )
  {
    v7 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v9 = v7(g_pScriptVM, hTarget, Script);
  }
  else
  {
    v9 = 0;
  }
  if ( hAbility != 0 )
  {
    v10 = *(*g_pScriptVM + 208LL);
    v11 = GetScriptDesc<CEntityInstance>(0);
    v12 = v10(g_pScriptVM, hAbility, v11);
    if ( v12 != 0 )
    {
      v13 = __dynamic_cast(v12, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
      if ( v13 != 0 && v9 != 0 )
        CDOTA_BaseNPC::CastAbilityOnTarget(this, v9, v13, iPlayerIndex);
    }
  }
}


// CDOTA_BaseNPC::Script_CastAbilityNoTarget  (line 2107, @0x000000000292bdf0, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTAAbility, ToEnt
// calls: GetScriptDesc<CEntityInstance>, __dynamic_cast, CDOTA_BaseNPC::CastAbilityNoTarget
void __fastcall CDOTA_BaseNPC::Script_CastAbilityNoTarget(
        CDOTA_BaseNPC *const this,
        HSCRIPT hAbility,
        int iPlayerIndex)
{
  __int64 (__fastcall *v6)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *Script; // rax
  const void *v8; // rax
  CDOTABaseAbility *v9; // rax

  if ( hAbility != 0 )
  {
    v6 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v8 = v6(g_pScriptVM, hAbility, Script);
    if ( v8 != 0 )
    {
      v9 = __dynamic_cast(v8, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
      if ( v9 != 0 )
        CDOTA_BaseNPC::CastAbilityNoTarget(this, v9, iPlayerIndex);
    }
  }
}


// CDOTA_BaseNPC::MakePhantomBlocker  (line 2120, @0x00000000028f5d10, libserver.so)  // inlines: AddObstructionProperty
// calls: C2DGridObstructionManager::UpdateObjectObstruction
// callers: Thinker_Create
void __fastcall CDOTA_BaseNPC::MakePhantomBlocker(CDOTA_BaseNPC *const this)
{
  int m_nObstructionProperties; // eax
  ObstructionRecord_t *m_pObstructionRecord; // rdx
  int v3; // eax

  m_nObstructionProperties = this->m_nObstructionProperties;
  this->m_bIsPhantomBlocker = 1;
  m_pObstructionRecord = this->m_pObstructionRecord;
  v3 = m_nObstructionProperties | 8;
  this->m_nObstructionProperties = v3;
  if ( m_pObstructionRecord != 0 )
    m_pObstructionRecord->m_ObjectProperties = v3;
  C2DGridObstructionManager::UpdateObjectObstruction(&g_GridNav.m_ObstructionManager, &this->CObstructionObject);
}


// CDOTA_BaseNPC::AddSpecialAbility  (line 2127, @0x0000000002901c20, libserver.so)  // inlines: NetworkStateChanged, Set, operator|=<DOTA_SPECIAL_ABILITY>
// callers: OnCreateIllusionsSpawnCompletion, CDOTA_BaseNPC_Hero::UpgradeAbility, CDOTA_Ability_Meepo_DividedWeStand::OnAbilityUpgrade, CDOTA_Ability_ArcWarden_TempestDouble::OnSpellStart
void __fastcall CDOTA_BaseNPC::AddSpecialAbility(CDOTA_BaseNPC *const this, int iState)
{
  int m_Value; // r12d

  switch ( iState )
  {
    case 1:
      m_Value = this->m_iSpecialAbility.m_Value | 1;
      if ( this->m_iSpecialAbility.m_Value == m_Value )
        return;
      goto LABEL_5;
    case 2:
      m_Value = this->m_iSpecialAbility.m_Value | 2;
      if ( this->m_iSpecialAbility.m_Value == m_Value )
        return;
      goto LABEL_5;
    case 3:
      m_Value = this->m_iSpecialAbility.m_Value | 4;
      if ( this->m_iSpecialAbility.m_Value == m_Value )
        return;
      goto LABEL_5;
    case 4:
      m_Value = this->m_iSpecialAbility.m_Value | 8;
      if ( this->m_iSpecialAbility.m_Value == m_Value )
        return;
LABEL_5:
      LOWORD(iState) = 2440;
      (*(this->_vptr_IHandleEntity + 22))(this, iState, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_iSpecialAbility.m_Value = m_Value;
      return;
    case 5:
      m_Value = this->m_iSpecialAbility.m_Value | 0x10;
      if ( this->m_iSpecialAbility.m_Value != m_Value )
        goto LABEL_5;
      break;
    case 6:
      m_Value = this->m_iSpecialAbility.m_Value | 0x20;
      if ( this->m_iSpecialAbility.m_Value != m_Value )
        goto LABEL_5;
      break;
    case 7:
      m_Value = this->m_iSpecialAbility.m_Value | 0x40;
      if ( this->m_iSpecialAbility.m_Value != m_Value )
        goto LABEL_5;
      break;
    case 8:
      m_Value = this->m_iSpecialAbility.m_Value;
      LOBYTE(m_Value) = m_Value | 0x80;
      if ( this->m_iSpecialAbility.m_Value != m_Value )
        goto LABEL_5;
      break;
    default:
      break;
  }
}


// CDOTA_BaseNPC::IsAllowedToMove  (line 2157, @0x0000000002901e30, libserver.so)  // inlines: HasFlyMovementCapability, HasMovementCapability, InState, IsRooted
// calls: CDOTA_BaseNPC::IsActionLocked
// callers: CGridNavPath::Build, CGridNavPath::Update, CDOTALocomotor::ShouldTurnAnimate, CDOTABehaviorMoveTo::Update
bool __fastcall CDOTA_BaseNPC::IsAllowedToMove(CDOTA_BaseNPC *const this)
{
  return ((this->m_iMoveCapabilities & 3) != 0
       || (BYTE3(this->m_nUnitState64.m_Value) & 1 | ((this->m_nUnitState64.m_Value & 0x200000000LL) != 0)) != 0)
      && !this->m_bHold
      && !CDOTA_BaseNPC::IsActionLocked(this)
      && !(this->m_nUnitState64.m_Value & 1);
}


// CDOTA_BaseNPC::IsAllowedToBeAttacked  (line 2177, @0x0000000002901d70, libserver.so)  // inlines: InState, IsAttackImmune, IsInvulnerable, IsPhantom
// callers: CDOTABehaviorAttackPhase::Update, CDOTABehaviorMoveToNPCToAttack::Update, CDOTA_BaseNPC::CanBeAutoAttacked, CDOTA_Modifier_Gyrocopter_Flak_Cannon_Scepter::OnIntervalThink
bool __fastcall CDOTA_BaseNPC::IsAllowedToBeAttacked(CDOTA_BaseNPC *const this)
{
  bool result; // al

  result = (*(this->_vptr_IHandleEntity + 408))(this);
  if ( result )
  {
    result = this->m_bIsPhantom.m_Value;
    if ( result )
    {
      return 0;
    }
    else if ( (this->m_nUnitState64.m_Value & 4) == 0 && !this->m_bIsWaitingToSpawn.m_Value )
    {
      return (this->m_nUnitState64.m_Value & 0x100) == 0;
    }
  }
  return result;
}


// CDOTA_BaseNPC::IsActionLocked  (line 2194, @0x0000000002901de0, libserver.so)  // inlines: IsElapsed, IsMovementStunned
// calls: CountdownTimer::Now
// callers: CDOTALocomotor::IsTurnPrevented, CDOTABehaviorAbilityPhase::UpdateBackswing, CDOTABehaviorAbilityChannel::Update, CDOTABehaviorAttack::Update, CDOTABehaviorAbilityPhase::Update, CDOTABehaviorAttackPhase::Update, CDOTABehaviorCommandMoveToPositionToCast::Update, CDOTABehaviorCommandCastHere::CheckTransition, CDOTABehaviorCommandMoveToTargetToCast::Update, CDOTABehaviorCommandMoveToTargetToAttack::Update, CDOTABehaviorMoveTo::Update, CDOTABehaviorMoveToNPCToAttack::Update (14 total)
bool __fastcall CDOTA_BaseNPC::IsActionLocked(CDOTA_BaseNPC *const this)
{
  bool result; // al
  __int64 v2; // rbx

  result = 1;
  if ( (this->m_nUnitState64.m_Value & 0x20) == 0 )
  {
    v2 = (*(this->_vptr_IHandleEntity + 376))(this);
    return CountdownTimer::Now((v2 + 184)) < *(v2 + 196);
  }
  return result;
}


// CDOTA_BaseNPC::IsPhased  (line 2208, @0x00000000028fac60, libserver.so)  // inlines: HasFlyMovementCapability, InState
// calls: CDOTALocomotor::IsPhasedFromMotionControl
// callers: GetCommonObstructionManagerFlagsForNPC, CDOTALocomotor::PostRemoveMotionController, CDOTALocomotor::ApplyHorizontalMotionController, CDOTALocomotor::ApplyVerticalMotionController, CDOTA_BaseNPC::RemoveState
bool __fastcall CDOTA_BaseNPC::IsPhased(CDOTA_BaseNPC *const this)
{
  bool result; // al
  CDOTALocomotor *v3; // rax

  if ( (this->m_nUnitState64.m_Value & 0x2000000) != 0 )
    return 1;
  v3 = (*(this->_vptr_IHandleEntity + 376))(this);
  if ( CDOTALocomotor::IsPhasedFromMotionControl(v3) )
    return 1;
  result = 1;
  if ( (this->m_iMoveCapabilities & 2) == 0
    && (BYTE3(this->m_nUnitState64.m_Value) & 1 | ((this->m_nUnitState64.m_Value & 0x200000000LL) != 0)) == 0 )
  {
    return this->m_bIsReturningHome;
  }
  return result;
}


// CDOTA_BaseNPC::IsMovementImpaired  (line 2216, @0x00000000028f4fc0, libserver.so)  // inlines: InState, IsNightmared, IsRooted, IsStunned
// callers: CDOTA_BotMode_Attack::GetAttackScore, CDOTA_TeamCommander::IsMovementImpaired, CDOTA_Bot_AbilityUsage_AbyssalBlade::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_DiffusalBlade::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Cyclone::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Sheepstick::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_CrystalMaiden_Frostbite::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Dazzle_PoisonTouch::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_ChaosKnight_ChaosBolt::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_DragonKnight_DragonTail::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_CrystalMaiden_CrystalNova::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Dazzle_ShadowWave::GetCurrentUsageDesire (27 total)
bool __fastcall CDOTA_BaseNPC::IsMovementImpaired(CDOTA_BaseNPC *const this)
{
  bool result; // al
  float v3; // xmm0_4

  if ( (this->m_nUnitState64.m_Value & 1) != 0 )
    return 1;
  if ( (this->m_nUnitState64.m_Value & 0x20) != 0 || (this->m_nUnitState64.m_Value & 0x800) != 0 )
    return 1;
  if ( (*(this->_vptr_IHandleEntity + 443))(this) != 0 )
    return 1;
  v3 = (*(this->_vptr_IHandleEntity + 386))(this);
  result = 0;
  if ( this->m_iMoveSpeed.m_Value > v3 )
    return 1;
  return result;
}


// CDOTA_BaseNPC::HasItemInInventory  (line 2227, @0x00000000028f5d50, libserver.so)
// calls: CDOTA_UnitInventory::FindItemInInventory
bool __fastcall CDOTA_BaseNPC::HasItemInInventory(CDOTA_BaseNPC *const this, const char *pItemName)
{
  return CDOTA_UnitInventory::FindItemInInventory(&this->m_Inventory, pItemName, 1, 0, -1) != 0;
}


// CDOTA_BaseNPC::HasScepter  (line 2232, @0x00000000028f9dd0, libserver.so)  // inlines: IsListeningToEvent
// callers: CDOTABaseAbility::GetCastExecuteCriteria, CDOTA_Bot_Script::HasScepter, CDOTA_Bot_AbilityUsage_Axe_CullingBlade::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Luna_Eclipse::UseAbility, CDOTA_Bot_Hero_Juggernaut::GetOmniSlashTotalDamage, CDOTA_Bot_AbilityUsage_Luna_Eclipse::GetLocationScore, CDOTA_Bot_AbilityUsage_Necrolyte_Scythe::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Luna_Eclipse::GetCurrentUsageDesire, CDOTA_Bot_Hero_Tiny::GetCleavePercent, CDOTA_Bot_AbilityUsage_WitchDoctor_DeathWard::GetCurrentUsageDesire, CDOTA_Ability_Bane_FiendsGrip::GetAbilityDamage, CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter::IsHidden (284 total)
bool __fastcall CDOTA_BaseNPC::HasScepter(CDOTA_BaseNPC *const this)
{
  bool result; // al
  __int64 v2; // rdx

  result = 1;
  if ( !this->m_bStolenScepter.m_Value )
  {
    v2 = this->m_ModifierManager.m_buffsForModifiers[154];
    result = 0;
    if ( v2 != 0xFF )
      return this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v2].m_Size > 0;
  }
  return result;
}


// CDOTA_BaseNPC::HasAnyActiveAbilities  (line 2237, @0x00000000028f5960, libserver.so)  // inlines: IsPassive
// calls: CDOTA_BaseNPC::GetAbilityByIndex
// callers: CDOTABehavior::InitialContainedAction
bool __fastcall CDOTA_BaseNPC::HasAnyActiveAbilities(CDOTA_BaseNPC *const this)
{
  int i; // ebx
  CDOTABaseAbility *AbilityByIndex; // rax

  for ( i = 0; i != 24; ++i )
  {
    if ( CDOTA_BaseNPC::GetAbilityByIndex(this, i) != 0 )
    {
      AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(this, i);
      if ( ((*(AbilityByIndex->_vptr_IHandleEntity + 251))(AbilityByIndex) & 2) == 0 )
        return 1;
    }
  }
  return 0;
}


// CDOTA_BaseNPC::Script_GetAbilityByIndex  (line 2247, @0x00000000028fa800, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, ToHScript
// calls: LoggingSystem_IsChannelEnabled, CDOTA_BaseNPC::GetAbilityByIndex, LoggingSystem_Log, CEntityInstance::CreatePublicScriptScope
// strings: "GetAbilityByIndex requested for invalid index %d\n"
HSCRIPT __fastcall CDOTA_BaseNPC::Script_GetAbilityByIndex(CDOTA_BaseNPC *const this, int iIndex)
{
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTABaseAbility *v5; // [rsp+8h] [rbp-18h]

  if ( iIndex > 0x17 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 2) != 0 )
      LoggingSystem_Log(LOG_VSCRIPT, 2, "GetAbilityByIndex requested for invalid index %d\n", iIndex);
    return 0;
  }
  AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(this, iIndex);
  if ( AbilityByIndex == 0 )
    return 0;
  if ( AbilityByIndex->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return AbilityByIndex->m_pEntity->m_hPublicScope.m_hScope;
  v5 = AbilityByIndex;
  CEntityInstance::CreatePublicScriptScope(AbilityByIndex, 0);
  return v5->m_pEntity->m_hPublicScope.m_hScope;
}


// CDOTA_BaseNPC::IsEnemyInAgressiveStanceRange  (line 2260, @0x00000000029170b0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, CVProfScope, CanBeSeenByTeam, CanEntityBeSeenByMyTeam, GetAcquisitionRange, GetAttackRangeBuffer, GetTeamNumber, IsEnabled, Max<float>, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat, ~CVProfScope
// calls: CDOTA_BaseNPC::GetAttackRange, CGridNav::GetNPCsInRange, CBaseModelEntity::CanBeSeenByTeam, CDOTA_BaseNPC::CanAutoAttackTarget, CVProfile::ExitScope, CUtlMemory<CDOTA_BaseNPC*, int>::Purge, CVProfile::EnterScope, __stack_chk_fail, CUtlVectorBase<CDOTA_BaseNPC*, CUtlMemory<CDOTA_BaseNPC*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_BaseNPC::UpdateAggressiveStance
// strings: "CDOTA_BaseNPC::UpdateAggressiveStance"
bool __fastcall CDOTA_BaseNPC::IsEnemyInAgressiveStanceRange(CDOTA_BaseNPC *const this)
{
  int m_enabled; // edi
  float AttackRange; // xmm0_4
  __int64 v4; // rbx
  int v5; // r12d
  CDOTA_BaseNPC *v6; // r13
  bool CanAutoAttackTarget; // r14
  int m_Value; // esi
  bool VProf_2262; // [rsp+Fh] [rbp-251h]
  GridNavBaseNPCStackVec_t npcs; // [rsp+10h] [rbp-250h] BYREF
  unsigned __int64 v12; // [rsp+228h] [rbp-38h]

  v12 = __readfsqword(0x28u);
  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_2262 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_BaseNPC::UpdateAggressiveStance", 0, "Bots", 0, 4);
  npcs.m_Size = 0;
  npcs.m_Memory.m_nAllocationCount = 64;
  npcs.m_Memory.m_nGrowSize = 0x80000000;
  npcs.m_Memory.m_pMemory = &npcs.m_FixedMemory;
  AttackRange = CDOTA_BaseNPC::GetAttackRange(this);
  CGridNav::GetNPCsInRange(
    &g_GridNav,
    this,
    fmaxf(this->m_iAcquisitionRange, AttackRange + this->m_iAttackRangeBuffer),
    &npcs);
  v4 = 0;
  v5 = 0;
  if ( npcs.m_Size > 0 )
  {
    while ( 1 )
    {
      v6 = npcs.m_Memory.m_pMemory[v4];
      CanAutoAttackTarget = CDOTA_BaseNPC::CanAutoAttackTarget(this, v6, 0);
      if ( CanAutoAttackTarget )
      {
        m_Value = this->m_iTeamNum.m_Value;
        if ( (m_Value == 4 || v6->m_pCollision == 0 || CBaseModelEntity::CanBeSeenByTeam(v6, m_Value))
          && SLOBYTE(v6->m_nUnitState64.m_Value) >= 0 )
        {
          break;
        }
      }
      ++v5;
      ++v4;
      if ( npcs.m_Size <= v5 )
        goto LABEL_15;
    }
  }
  else
  {
LABEL_15:
    CanAutoAttackTarget = 0;
  }
  npcs.m_Size = 0;
  if ( (npcs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&npcs.m_Memory);
    if ( (npcs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&npcs.m_Memory);
  }
  if ( VProf_2262 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  return CanAutoAttackTarget;
}


// CDOTA_BaseNPC::UpdateAggressiveStance  (line 2284, @0x0000000002918400, libserver.so)  // inlines: FStrEq, GetHealthPercent, String, ToCStr, _V_strcmp
// calls: CBaseEntity::GetHealth, CBaseEntity::GetModelName, strcmp, CDOTA_BaseNPC::IsEnemyInAgressiveStanceRange, CDOTA_BaseNPC::CheckIfActivityModifiersDirty
// callers: CDOTABehavior::Update, CDOTA_BaseNPC::ManageModelChanges
void __fastcall CDOTA_BaseNPC::UpdateAggressiveStance(CDOTA_BaseNPC *const this)
{
  char m_bInInjuredAggressiveStance; // r13
  __int64 v3; // r12
  int v4; // eax
  __int64 v5; // rcx
  const char *m_pAsString; // rsi
  const char *v7; // r14
  const char *v8; // rdi
  const char *v9; // rsi
  const char *v10; // r13
  const char *v11; // rdi
  bool m_bInAggressiveStance; // r12
  char IsEnemyInAgressiveStanceRange; // al
  _QWORD v14[6]; // [rsp+0h] [rbp-30h] BYREF

  m_bInInjuredAggressiveStance = this->m_bInInjuredAggressiveStance;
  v3 = 100LL * CBaseEntity::GetHealth(this);
  v4 = (*(this->_vptr_IHandleEntity + 156))(this);
  v5 = 1;
  if ( v4 > 0 )
    v5 = v4;
  if ( (v3 / v5) <= 25 )
  {
    m_pAsString = this->m_iszOriginalModel.u.m_pAsString;
    if ( m_pAsString == 0 )
      m_pAsString = "";
    v7 = m_pAsString;
    CBaseEntity::GetModelName(v14, this);
    v8 = v14[0];
    if ( v14[0] == 0 )
      v8 = "";
    if ( v7 == v8 || strcmp(v8, v7) == 0 )
    {
      IsEnemyInAgressiveStanceRange = CDOTA_BaseNPC::IsEnemyInAgressiveStanceRange(this);
      this->m_bInInjuredAggressiveStance = IsEnemyInAgressiveStanceRange != 0;
      if ( m_bInInjuredAggressiveStance != IsEnemyInAgressiveStanceRange )
        CDOTA_BaseNPC::CheckIfActivityModifiersDirty(this);
    }
    goto LABEL_10;
  }
  if ( m_bInInjuredAggressiveStance == 0 )
  {
    if ( this->m_iHasAggressiveStance != 0 )
      goto LABEL_14;
LABEL_10:
    this->m_bInAggressiveStance = 0;
    return;
  }
  this->m_bInInjuredAggressiveStance = 0;
  CDOTA_BaseNPC::CheckIfActivityModifiersDirty(this);
  if ( this->m_iHasAggressiveStance == 0 )
    goto LABEL_10;
LABEL_14:
  v9 = this->m_iszOriginalModel.u.m_pAsString;
  if ( v9 == 0 )
    v9 = "";
  v10 = v9;
  CBaseEntity::GetModelName(v14, this);
  v11 = v14[0];
  if ( v14[0] == 0 )
    v11 = "";
  if ( v10 != v11 && strcmp(v11, v10) != 0 )
    goto LABEL_10;
  m_bInAggressiveStance = this->m_bInAggressiveStance;
  if ( CDOTA_BaseNPC::IsEnemyInAgressiveStanceRange(this) )
  {
    this->m_bInAggressiveStance = 1;
    if ( !m_bInAggressiveStance )
    {
LABEL_22:
      CDOTA_BaseNPC::CheckIfActivityModifiersDirty(this);
      (*(this->_vptr_IHandleEntity + 446))(this, this->m_bInAggressiveStance);
    }
  }
  else
  {
    this->m_bInAggressiveStance = 0;
    if ( m_bInAggressiveStance )
      goto LABEL_22;
  }
}


// CDOTA_BaseNPC::UpdateTransmitState  (line 2353, @0x00000000028f58f0, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CDOTA_BaseNPC::UpdateTransmitState(CDOTA_BaseNPC *const this)
{
  return CBaseEntity::SetTransmitState(this, 0);
}


// CDOTA_BaseNPC::SetMana  (line 2361, @0x00000000028f9ca0, libserver.so)  // inlines: GetMaxMana, NetworkStateChanged, Set, operator=<float>
// callers: CDOTABaseAbility::RefundManaCost, CDOTAPlayer::CheatHeroRefresh, HeroRefresh, OnCreateIllusionsSpawnCompletion, CDOTA_BaseNPC::ReduceMana, CDOTA_BaseNPC::GiveMana, CDOTA_BaseNPC::SpendMana, CDOTA_BaseNPC_Creature::CreatureLevelUp, CDOTA_BaseNPC_Hero::CalculateStatBonus, CDOTA_BaseNPC::SetStartingValues, CDOTA_BaseNPC::StatsRegenerationThink, CDOTA_BaseNPC_Hero::Buyback (33 total)
void __fastcall CDOTA_BaseNPC::SetMana(CDOTA_BaseNPC *const this, float a2, float flMana)
{
  float m_Value; // xmm1_4
  float v5; // [rsp+Ch] [rbp-14h]

  m_Value = this->m_flMaxMana.m_Value;
  if ( a2 <= m_Value )
    m_Value = fmaxf(0.0, a2);
  if ( m_Value != this->m_flMana.m_Value )
  {
    v5 = m_Value;
    (*(this->_vptr_IHandleEntity + 22))(this, 2136, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flMana.m_Value = v5;
  }
}


// CDOTA_BaseNPC::Script_GiveMana  (line 2366, @0x0000000002902180, libserver.so)
// calls: CDOTA_BaseNPC::GiveMana
void __fastcall CDOTA_BaseNPC::Script_GiveMana(CDOTA_BaseNPC *const this, float a2, float flMana)
{
  CDOTA_BaseNPC::GiveMana(this, a2, 0, 1);
}


// CDOTA_BaseNPC::GiveMana  (line 2374, @0x0000000002901ea0, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, GetEHandle, GetEntryIndex, GetMana, GetModifier_Constant_Additive, GetSerialNumber, IsListeningToEvent, Set, SetUnit, ToDOTAAbility, operator=
// calls: FireModifierEvent, __dynamic_cast, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::SetMana, CDOTA_CombatLog::AddManaRestoredEvent, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal
// callers: CDOTA_ActionRunner::PerformAction_Heal, CDOTA_BaseNPC::Script_GiveMana, CDOTA_BaseNPC::StatsRegenerationThink, CDOTA_Modifier_Bane_FiendsGrip::OnIntervalThink, CDOTA_Ability_CrystalMaiden_BrillianceAura::OnSpellStart, CDOTA_Ability_Lich_DarkRitual::OnSpellStart, CDOTA_Modifier_VengefulSpirit_NetherSwap::OnDeath, CDOTA_Modifier_Lion_ManaDrain::PerformDrain, CDOTA_Modifier_Pugna_LifeDrain::OnTakeDamage, CDOTA_Modifier_Invoker_EMP::OnDestroy, CDOTA_Ability_Invoker_Invoke::OnSpellStart, CDOTA_Modifier_KeeperOfTheLight_ChakraMagic::OnCreated (22 total)
void __fastcall CDOTA_BaseNPC::GiveMana(
        CDOTA_BaseNPC *const this,
        float flMana,
        CBaseEntity *pInflictor,
        bool bAmplify)
{
  float v4; // xmm1_4
  CEntityIdentity *m_pEntity; // rax
  __int16 v8; // cx
  float m_Value; // xmm2_4
  CDOTABaseAbility *v10; // rax
  CDOTABaseAbility *v11; // r12
  CDOTA_BaseNPC *Caster; // rax
  float v13; // xmm0_4
  __int64 v14; // rax
  float v15; // xmm2_4
  float Modifier_Constant_Additive_Internal; // xmm0_4
  float v17; // [rsp-14h] [rbp-B4h]
  float v18; // [rsp-10h] [rbp-B0h]
  float v20; // [rsp-Ch] [rbp-ACh]
  float v21; // [rsp-Ch] [rbp-ACh]
  _DWORD v22[2]; // [rsp-8h] [rbp-A8h] BYREF
  CModifierParams params; // [rsp+0h] [rbp-A0h] BYREF

  v4 = flMana;
  if ( flMana >= 0.0 )
  {
    if ( (this->m_iUnitType & 1) == 0 )
      goto LABEL_12;
    if ( bAmplify )
    {
      v14 = this->m_ModifierManager.m_buffsForModifiers[32];
      v15 = 1.0;
      if ( v14 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v14].m_Size > 0 )
      {
        Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                                &this->m_ModifierManager,
                                                modifierfunction::MODIFIER_PROPERTY_HEAL_AMPLIFY_PERCENTAGE,
                                                &CModifierParams::s_Default);
        v4 = flMana;
        v15 = (Modifier_Constant_Additive_Internal / 100.0) + 1.0;
      }
      v4 = v4 * v15;
    }
    m_pEntity = this->m_pEntity;
    params.vNewLoc.y = 0.0;
    v22[0] = -1;
    v22[1] = 0;
    params.ability.m_Index = 0;
    LOBYTE(params.fOriginalDamage) = 0;
    params.fDamage = NAN;
    params.nActivity = 0;
    params.bTooltip = 0;
    *(&params.bTooltip + 1) = 0;
    *(&params.bTooltip + 2) = 0;
    *(&params.bTooltip + 3) = 0;
    params.nTooltipParam = 0;
    params.fAttackTimeRemaining = NAN;
    params.inflictor.m_Index = 0;
    params.nDamageType = 0;
    memset(&params.iRecord, 0, 24);
    LOWORD(params.vNewLoc.z) = 0;
    *&params.bCraniumBasherTested = 0;
    *&params.bSuppressDamage = -1;
    params.nPlayerids_stick = -1;
    params.hattacker.m_Index = -1;
    if ( m_pEntity != 0 )
    {
      v8 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      params.hattacker.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v8 & 0x7FFF;
    }
    *&params.bIgnoreInvis = v4;
    v20 = v4;
    FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_MANA_GAINED, v22);
    m_Value = this->m_flMana.m_Value;
    v4 = v20;
    v21 = fminf(this->m_flMaxMana.m_Value - m_Value, v20);
    if ( v21 <= 0.0
      || pInflictor == 0
      || (v17 = v4,
          v18 = this->m_flMana.m_Value,
          v10 = __dynamic_cast(pInflictor, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0),
          m_Value = v18,
          v11 = v10,
          v4 = v17,
          v10 == 0) )
    {
      v13 = m_Value;
      goto LABEL_13;
    }
    Caster = CDOTABaseAbility::GetCaster(v10);
    v4 = v17;
    if ( this != Caster )
    {
      CDOTA_CombatLog::AddManaRestoredEvent(&g_DOTACombatLog, v11, Caster, this, v21);
      v13 = this->m_flMana.m_Value;
      v4 = v17;
    }
    else
    {
LABEL_12:
      v13 = this->m_flMana.m_Value;
    }
LABEL_13:
    CDOTA_BaseNPC::SetMana(this, v13 + v4, v4);
  }
}


// CDOTA_BaseNPC::SpendMana  (line 2412, @0x00000000029021a0, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, FindModifierByProperty_Constant_Highest, GetEHandle, GetEntryIndex, GetModifier_Constant_Additive, GetSerialNumber, IsListeningToEvent, Set, SetUnit, operator< <float>, operator=
// calls: CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTA_ModifierManager::FindModifierByProperty_Constant_Highest_Internal, CDOTA_Buff::GetCaster, CDOTA_PlayerResource::AddManaSpent, CDOTA_BaseNPC::SetMana, FireModifierEvent
// callers: CDOTABaseAbility::Script_PayManaCost, CDOTABaseAbility::OnChannelThink, CDOTA_ActionRunner::PerformAction_SpendMana, CDOTABaseAbility::PayManaCost, CDOTA_BaseNPC::Script_SpendMana, CDOTA_Modifier_Morphling_Morph_Agi::OnIntervalThink, CDOTA_Modifier_Morphling_Morph_Str::OnIntervalThink, CDOTA_OrbDrowRanger_FrostArrow::OnOrbFire, CDOTA_OrbHoldout_Multishot::OnOrbFire, CDOTA_Ability_StormSpirit_BallLightning::OnProjectileThink, CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal::OnIntervalThink, CDOTA_Modifier_Viper_PoisonAttack::OnAttack (19 total)
void __fastcall CDOTA_BaseNPC::SpendMana(
        CDOTA_BaseNPC *const this,
        float flManaSpent,
        CDOTABaseAbility *pAbility,
        CDOTA_BaseNPC *pTarget)
{
  __int64 v6; // rax
  float v8; // xmm0_4
  float v9; // xmm1_4
  CDOTA_BaseNPC::NetworkVar_m_ModifierManager *p_m_ModifierManager; // r15
  float Modifier_Constant_Additive_Internal; // xmm0_4
  __int64 v12; // rax
  CDOTA_Buff *v13; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v15; // cx
  CEntityIdentity *v16; // rdx
  __int16 v17; // cx
  float v18; // [rsp-10h] [rbp-D0h]
  float v19; // [rsp-Ch] [rbp-CCh]
  _DWORD v20[2]; // [rsp-8h] [rbp-C8h] BYREF
  CModifierParams params; // [rsp+0h] [rbp-C0h] BYREF

  if ( flManaSpent >= 0.0 )
  {
    v6 = this->m_ModifierManager.m_buffsForModifiers[159];
    v8 = fminf(this->m_flMana.m_Value, flManaSpent);
    v9 = v8;
    if ( v6 == 0xFF
      || this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v6].m_Size <= 0
      || (p_m_ModifierManager = &this->m_ModifierManager,
          v18 = v8,
          Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                                  &this->m_ModifierManager,
                                                  modifierfunction::MODIFIER_PROPERTY_SPELLS_REQUIRE_HP,
                                                  &CModifierParams::s_Default),
          v9 = v18,
          Modifier_Constant_Additive_Internal <= 0.0) )
    {
      v19 = v9;
      CDOTA_PlayerResource::AddManaSpent(g_pDOTAPlayerResource, v9, this, pAbility, pTarget);
      CDOTA_BaseNPC::SetMana(this, this->m_flMana.m_Value - v19, v19);
      m_pEntity = this->m_pEntity;
      LOBYTE(params.fOriginalDamage) = 0;
      v20[0] = -1;
      v20[1] = 0;
      params.ability.m_Index = 0;
      params.vNewLoc.y = 0.0;
      params.fDamage = NAN;
      params.nActivity = 0;
      params.bTooltip = 0;
      *(&params.bTooltip + 1) = 0;
      *(&params.bTooltip + 2) = 0;
      *(&params.bTooltip + 3) = 0;
      params.nTooltipParam = 0;
      params.fAttackTimeRemaining = NAN;
      params.inflictor.m_Index = 0;
      params.nDamageType = 0;
      memset(&params.iRecord, 0, 24);
      LOWORD(params.vNewLoc.z) = 0;
      *&params.bCraniumBasherTested = 0;
      *&params.bSuppressDamage = -1;
      params.nPlayerids_stick = -1;
      params.hattacker.m_Index = -1;
      if ( m_pEntity != 0 )
      {
        v15 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        params.hattacker.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                 | v15 & 0x7FFF;
      }
      if ( pAbility != 0 )
      {
        v16 = pAbility->m_pEntity;
        if ( v16 != 0 )
        {
          v17 = 0x7FFF;
          if ( v16->m_EHandle.m_Index != -1 )
            v17 = v16->m_EHandle.m_Index & 0x7FFF;
          v20[0] = (((v16->m_EHandle.m_Index >> 15) - (v16->m_flags & 1)) << 15) | v17 & 0x7FFF;
        }
      }
      LODWORD(params.pOrb2) = v19;
      FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_SPENT_MANA, v20);
    }
    else
    {
      v12 = this->m_ModifierManager.m_buffsForModifiers[159];
      if ( v12 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v12].m_Size > 0 )
      {
        v13 = CDOTA_ModifierManager::FindModifierByProperty_Constant_Highest_Internal(
                p_m_ModifierManager,
                modifierfunction::MODIFIER_PROPERTY_SPELLS_REQUIRE_HP,
                &CModifierParams::s_Default);
        if ( v13 != 0 )
          CDOTA_Buff::GetCaster(v13);
      }
    }
  }
}


// CDOTA_BaseNPC::Script_SpendMana  (line 2447, @0x0000000002902480, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTAAbility, ToEnt
// calls: GetScriptDesc<CEntityInstance>, __dynamic_cast, CDOTA_BaseNPC::SpendMana
void __fastcall CDOTA_BaseNPC::Script_SpendMana(
        CDOTA_BaseNPC *const this,
        float a2,
        float flManaSpent,
        HSCRIPT hAbility)
{
  __int64 (__fastcall *v6)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  const void *v8; // rax
  CDOTABaseAbility *v9; // rax
  CDOTABaseAbility *v10; // rsi
  float flManaSpenta; // [rsp+Ch] [rbp-24h]

  if ( hAbility != 0
    && (flManaSpenta = a2,
        v6 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        v8 = v6(g_pScriptVM, hAbility, Script),
        a2 = flManaSpenta,
        v8 != 0) )
  {
    v9 = __dynamic_cast(v8, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
    a2 = flManaSpenta;
    v10 = v9;
  }
  else
  {
    v10 = 0;
  }
  CDOTA_BaseNPC::SpendMana(this, a2, v10, 0);
}


// CDOTA_BaseNPC::ReduceMana  (line 2454, @0x00000000028f9d10, libserver.so)
// calls: CDOTA_BaseNPC::SetMana
// callers: CDOTA_Ability_SatyrSoulstealer_ManaBurn::OnSpellStart, CDOTA_Modifier_Bane_FiendsGrip::OnIntervalThink, CDOTA_Modifier_AntiMage_ManaBreak::GetModifierProcAttack_Feedback, CDOTA_Modifier_Lion_ManaDrain::PerformDrain, CDOTA_Modifier_Invoker_EMP::OnDestroy, CDOTA_Modifier_Rattletrap_CogPush::OnDestroy, CDOTA_Modifier_Medusa_ManaShield::GetModifierPhysical_ConstantBlockUnavoidablePreArmor, CDOTA_Ability_Nyx_Assassin_ManaBurn::OnSpellStart, CDOTA_Modifier_KeeperOfTheLight_ManaLeak::OnIntervalThink, CDOTA_Ability_Medusa_MysticSnake::OnProjectileHit, CDOTA_Modifier_Wisp_Overcharge::OnIntervalThink, CDOTA_Modifier_Item_Diffusal_Blade::GetModifierProcAttack_Feedback (14 total)
void __fastcall CDOTA_BaseNPC::ReduceMana(CDOTA_BaseNPC *const this, float a2, float flAmount)
{
  CDOTA_BaseNPC::SetMana(this, this->m_flMana.m_Value - a2, a2);
}


// CDOTA_BaseNPC::GetThreatRange  (line 2462, @0x0000000002902520, libserver.so)  // inlines: GetAttackRange, GetModifier_Constant_Additive, GetModifier_Constant_Highest, IsListeningToEvent
// calls: CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTA_BaseNPC::GetAttackRange
// callers: CDOTA_BaseNPC::GetAutoAttackTarget
float __fastcall CDOTA_BaseNPC::GetThreatRange(CDOTA_BaseNPC *const this)
{
  float Modifier_Constant_Highest_Internal; // xmm2_4
  CDOTA_BaseNPC::NetworkVar_m_ModifierManager *p_m_ModifierManager; // r12
  __int64 v4; // rax
  __int64 v5; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  float m_iAttackRange; // xmm3_4
  __int64 v8; // rax
  float v9; // xmm3_4
  float v10; // xmm0_4
  __int64 v11; // rax
  float v12; // xmm0_4
  float v13; // xmm1_4
  __int64 v14; // rax
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  __int64 v19; // rax
  float v20; // [rsp-18h] [rbp-20h]
  float v21; // [rsp-18h] [rbp-20h]
  float v22; // [rsp-14h] [rbp-1Ch]
  float v23; // [rsp-14h] [rbp-1Ch]
  float v24; // [rsp-14h] [rbp-1Ch]
  float v25; // [rsp-14h] [rbp-1Ch]

  Modifier_Constant_Highest_Internal = 0.0;
  p_m_ModifierManager = &this->m_ModifierManager;
  v4 = this->m_ModifierManager.m_buffsForModifiers[71];
  if ( v4 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v4].m_Size > 0 )
    Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                           &this->m_ModifierManager,
                                           modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                                           &CModifierParams::s_Default);
  v5 = this->m_ModifierManager.m_buffsForModifiers[69];
  Modifier_Constant_Additive_Internal = 0.0;
  m_iAttackRange = this->m_iAttackRange;
  if ( v5 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v5].m_Size > 0 )
  {
    v20 = Modifier_Constant_Highest_Internal;
    v22 = this->m_iAttackRange;
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            p_m_ModifierManager,
                                            modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                                            &CModifierParams::s_Default);
    Modifier_Constant_Highest_Internal = v20;
    m_iAttackRange = v22;
  }
  v8 = this->m_ModifierManager.m_buffsForModifiers[70];
  v9 = m_iAttackRange + Modifier_Constant_Additive_Internal;
  v10 = 0.0;
  if ( v8 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v8].m_Size > 0 )
  {
    v21 = Modifier_Constant_Highest_Internal;
    v23 = v9;
    v10 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
            p_m_ModifierManager,
            modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
            &CModifierParams::s_Default);
    Modifier_Constant_Highest_Internal = v21;
    v9 = v23;
  }
  if ( Modifier_Constant_Highest_Internal > (v9 + v10) )
  {
    v19 = this->m_ModifierManager.m_buffsForModifiers[71];
    v17 = 0.0;
    if ( v19 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v19].m_Size > 0 )
    {
      if ( CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
             p_m_ModifierManager,
             modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
             &CModifierParams::s_Default) <= 300.0 )
        return 300.0;
      return CDOTA_BaseNPC::GetAttackRange(this);
    }
  }
  else
  {
    v11 = this->m_ModifierManager.m_buffsForModifiers[69];
    v12 = 0.0;
    v13 = this->m_iAttackRange;
    if ( v11 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v11].m_Size > 0 )
    {
      v24 = this->m_iAttackRange;
      v12 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              p_m_ModifierManager,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
              &CModifierParams::s_Default);
      v13 = v24;
    }
    v14 = this->m_ModifierManager.m_buffsForModifiers[70];
    v15 = v13 + v12;
    v16 = 0.0;
    if ( v14 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v14].m_Size > 0 )
    {
      v25 = v15;
      v16 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
              p_m_ModifierManager,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
              &CModifierParams::s_Default);
      v15 = v25;
    }
    v17 = v16 + v15;
  }
  if ( v17 <= 300.0 )
    return 300.0;
  return CDOTA_BaseNPC::GetAttackRange(this);
}


// CDOTA_BaseNPC::GetFountain  (line 2472, @0x0000000002902730, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, GetTeamNumber, IndexToIdentity, Init, LookupEntity
// calls: CDOTAGamerules::GetFountain
// callers: CDOTA_BotMode_Assemble::Think, CDOTA_BotMode_Retreat::Think, CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Riki_BlinkStrike::GetCurrentUsageDesire
CBaseEntity *__fastcall CDOTA_BaseNPC::GetFountain(CDOTA_BaseNPC *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx

  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  if ( v3 + 2 > 1
    && (v4 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9]) != 0
    && (v5 = &v4[v2 & 0x1FF]) != 0
    && v3 == v5->m_EHandle.m_Index
    && v5->m_pInstance != 0 )
  {
    return CDOTAGamerules::GetFountain(g_pGameRules, HIBYTE(v5->m_pInstance[7].m_CScriptComponent));
  }
  else
  {
    return 0;
  }
}


// CDOTA_BaseNPC::StatsRegenerationThink  (line 2484, @0x000000000294e950, libserver.so)  // inlines: DOTAGameRules, GetModifier_Constant_Additive, IsGamePaused, IsListeningToEvent, NetworkStateChanged, ReduceMana, Set, operator*=<float>, operator=<float>
// calls: CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, floorf, CDOTA_BaseNPC::GiveMana, CDOTA_BaseNPC::Heal, CBaseEntity::GetHealth, CDOTA_BaseNPC::ModifyHealth, CDOTA_BaseNPC::SetMana
void __fastcall CDOTA_BaseNPC::StatsRegenerationThink(CDOTA_BaseNPC *const this)
{
  float v2; // xmm0_4
  __int64 v3; // rax
  float v4; // xmm0_4
  float m_Value; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  int v9; // eax
  float v10; // xmm0_4
  __int64 v11; // rax
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  int v17; // r12d
  int Health; // eax
  float v19; // [rsp+Ch] [rbp-14h]
  float v20; // [rsp+Ch] [rbp-14h]
  float v21; // [rsp+Ch] [rbp-14h]
  float v22; // [rsp+Ch] [rbp-14h]
  float v23; // [rsp+Ch] [rbp-14h]
  float v24; // [rsp+Ch] [rbp-14h]
  float v25; // [rsp+Ch] [rbp-14h]
  float v26; // [rsp+Ch] [rbp-14h]

  if ( (*(this->_vptr_IHandleEntity + 408))(this) != 0 && (g_pGameRules == 0 || g_pGameRules[19].m_szQuestName[29] == 0) )
  {
    v2 = (*(this->_vptr_IHandleEntity + 430))(this);
    if ( v2 != this->m_flHealthThinkRegen.m_Value )
    {
      v22 = v2;
      (*(this->_vptr_IHandleEntity + 22))(this, 2156, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flHealthThinkRegen.m_Value = v22;
    }
    v3 = this->m_ModifierManager.m_buffsForModifiers[32];
    if ( v3 == 0xFF )
    {
      v4 = 1.0;
    }
    else if ( this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v3].m_Size <= 0 )
    {
      v4 = 1.0;
    }
    else
    {
      v4 = (CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              &this->m_ModifierManager,
              modifierfunction::MODIFIER_PROPERTY_HEAL_AMPLIFY_PERCENTAGE,
              &CModifierParams::s_Default)
          / 100.0)
         + 1.0;
    }
    m_Value = this->m_flHealthThinkRegen.m_Value;
    v6 = v4 * m_Value;
    if ( m_Value == v6 )
    {
      v7 = this->m_flHealthThinkRegen.m_Value;
    }
    else
    {
      v25 = v6;
      (*(this->_vptr_IHandleEntity + 22))(this, 2156, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v7 = v25;
      this->m_flHealthThinkRegen.m_Value = v25;
    }
    v8 = (v7 * 0.1) + this->m_flHealthRegenCounter;
    this->m_flHealthRegenCounter = v8;
    v9 = floorf(v8);
    if ( v9 != 0 )
    {
      v24 = v9;
      CDOTA_BaseNPC::Heal(this, v9, 0, 0, 0);
      Health = CBaseEntity::GetHealth(this);
      CDOTA_BaseNPC::ModifyHealth(this, Health, 0, 0, 0);
      this->m_flHealthRegenCounter = this->m_flHealthRegenCounter - v24;
    }
    v19 = (*(this->_vptr_IHandleEntity + 431))(this);
    v20 = v19 + (*(this->_vptr_IHandleEntity + 426))(this);
    v21 = v20 * (*(this->_vptr_IHandleEntity + 427))(this);
    v10 = (*(this->_vptr_IHandleEntity + 428))(this);
    if ( (v21 + v10) != this->m_flManaThinkRegen.m_Value )
    {
      v23 = v21 + v10;
      (*(this->_vptr_IHandleEntity + 22))(this, 2148, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flManaThinkRegen.m_Value = v23;
    }
    v11 = this->m_ModifierManager.m_buffsForModifiers[32];
    v12 = 1.0;
    if ( v11 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v11].m_Size > 0 )
      v12 = (CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
               &this->m_ModifierManager,
               modifierfunction::MODIFIER_PROPERTY_HEAL_AMPLIFY_PERCENTAGE,
               &CModifierParams::s_Default)
           / 100.0)
          + 1.0;
    v13 = this->m_flManaThinkRegen.m_Value;
    v14 = v12 * v13;
    if ( v13 == v14 )
    {
      v15 = this->m_flManaThinkRegen.m_Value;
    }
    else
    {
      v26 = v14;
      (*(this->_vptr_IHandleEntity + 22))(this, 2148, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v15 = v26;
      this->m_flManaThinkRegen.m_Value = v26;
    }
    v16 = (0.1 * v15) + this->m_flManaRegenCounter;
    this->m_flManaRegenCounter = v16;
    v17 = floorf(v16);
    if ( v17 != 0 )
    {
      if ( v17 < 0 )
        CDOTA_BaseNPC::SetMana(this, this->m_flMana.m_Value - -v17, -v17);
      else
        CDOTA_BaseNPC::GiveMana(this, v17, 0, 0);
      this->m_flManaRegenCounter = this->m_flManaRegenCounter - v17;
    }
  }
}


// CDOTA_BaseNPC::GetDamageBonus  (line 2531, @0x00000000029027f0, libserver.so)  // inlines: GetModifier_Constant_Additive, GetModifier_Percentage_Additive, GetModifier_Percentage_Highest, IsListeningToEvent
// calls: floor, CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal, CDOTA_ModifierManager::GetModifier_Percentage_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal
// callers: CDOTA_Bot_Script::GetAttackDamage
int __fastcall CDOTA_BaseNPC::GetDamageBonus(CDOTA_BaseNPC *const this)
{
  CDOTA_BaseNPC::NetworkVar_m_ModifierManager *p_m_ModifierManager; // r12
  double v3; // xmm0_8
  __int64 v4; // rax
  double v5; // xmm1_8
  double v6; // xmm2_8
  float Modifier_Percentage_Additive_Internal; // xmm0_4
  __int64 v8; // rax
  float Modifier_Percentage_Highest_Internal; // xmm0_4
  int v10; // r13d
  __int64 v11; // rax
  float v12; // xmm1_4
  float Modifier_Constant_Additive_Internal; // xmm0_4
  int v14; // r13d
  int v15; // r13d
  double v16; // xmm0_8
  __int64 v17; // rax
  double v18; // xmm2_8
  double v19; // xmm3_8
  float v20; // xmm0_4
  __int64 v21; // rax
  float v22; // xmm0_4
  int v23; // r13d
  double v25; // [rsp+8h] [rbp-28h]
  double v26; // [rsp+8h] [rbp-28h]

  p_m_ModifierManager = &this->m_ModifierManager;
  v3 = floor((this->m_iDamageMax.m_Value + this->m_iDamageMin.m_Value) * 0.5);
  v4 = this->m_ModifierManager.m_buffsForModifiers[34];
  v5 = 0.0;
  v6 = v3;
  if ( v4 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v4].m_Size > 0 )
  {
    v25 = v3;
    Modifier_Percentage_Additive_Internal = CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal(
                                              p_m_ModifierManager,
                                              modifierfunction::MODIFIER_PROPERTY_BASEDAMAGEOUTGOING_PERCENTAGE,
                                              &CModifierParams::s_Default);
    v6 = v25;
    v5 = (Modifier_Percentage_Additive_Internal - 1.0);
  }
  v8 = this->m_ModifierManager.m_buffsForModifiers[35];
  Modifier_Percentage_Highest_Internal = 1.0;
  v10 = (v5 * v6);
  if ( v8 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v8].m_Size > 0 )
    Modifier_Percentage_Highest_Internal = CDOTA_ModifierManager::GetModifier_Percentage_Highest_Internal(
                                             p_m_ModifierManager,
                                             modifierfunction::MODIFIER_PROPERTY_BASEDAMAGEOUTGOING_PERCENTAGE_UNIQUE,
                                             &CModifierParams::s_Default);
  v11 = this->m_ModifierManager.m_buffsForModifiers[0];
  v12 = v10 * Modifier_Percentage_Highest_Internal;
  Modifier_Constant_Additive_Internal = 0.0;
  v14 = v12;
  if ( v11 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v11].m_Size > 0 )
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            p_m_ModifierManager,
                                            modifierfunction::MODIFIER_PROPERTY_PREATTACK_BONUS_DAMAGE,
                                            &CModifierParams::s_Default);
  v15 = (v14 + Modifier_Constant_Additive_Internal);
  v16 = floor((this->m_iDamageMax.m_Value + this->m_iDamageMin.m_Value) * 0.5);
  v17 = this->m_ModifierManager.m_buffsForModifiers[28];
  v18 = 0.0;
  v19 = v16;
  if ( v17 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v17].m_Size > 0 )
  {
    v26 = v16;
    v20 = CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal(
            p_m_ModifierManager,
            modifierfunction::MODIFIER_PROPERTY_DAMAGEOUTGOING_PERCENTAGE,
            &CModifierParams::s_Default);
    v19 = v26;
    v18 = (v20 - 1.0);
  }
  v21 = this->m_ModifierManager.m_buffsForModifiers[29];
  v22 = 1.0;
  v23 = (v15 + v18 * v19);
  if ( v21 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v21].m_Size > 0 )
    v22 = CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal(
            p_m_ModifierManager,
            modifierfunction::MODIFIER_PROPERTY_DAMAGEOUTGOING_PERCENTAGE_ILLUSION,
            &CModifierParams::s_Default);
  return (v23 * v22);
}


// CDOTA_BaseNPC::SetHealth  (line 2546, @0x00000000028f9e10, libserver.so)  // inlines: GetModifier_Constant_Lowest, IsListeningToEvent
// calls: CDOTA_ModifierManager::GetModifier_Constant_Lowest_Internal, CBaseEntity::SetHealth
void __fastcall CDOTA_BaseNPC::SetHealth(CDOTA_BaseNPC *const this, int amt)
{
  int Modifier_Constant_Lowest_Internal; // r13d
  __int64 v5; // rax
  int v6; // esi

  Modifier_Constant_Lowest_Internal = 0;
  v5 = this->m_ModifierManager.m_buffsForModifiers[102];
  if ( v5 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v5].m_Size > 0 )
    Modifier_Constant_Lowest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Lowest_Internal(
                                          &this->m_ModifierManager,
                                          modifierfunction::MODIFIER_PROPERTY_MIN_HEALTH,
                                          &CModifierParams::s_Default);
  if ( (*(this->_vptr_IHandleEntity + 156))(this) < amt )
  {
    v6 = (*(this->_vptr_IHandleEntity + 156))(this);
  }
  else
  {
    v6 = amt;
    if ( Modifier_Constant_Lowest_Internal >= amt )
      v6 = Modifier_Constant_Lowest_Internal;
  }
  CBaseEntity::SetHealth(this, v6);
  (*(this->_vptr_IHandleEntity + 465))(this);
}


// CDOTA_BaseNPC::HealthFraction  (line 2557, @0x00000000029029f0, libserver.so)
// calls: CBaseEntity::GetHealth
// callers: CDOTA_BaseNPC::IsDeniable, CDOTA_Ability_Greevil_Miniboss_White_Purification::DoDesiredCast, CDOTA_BaseNPC::DrawDebugTextOverlays, CDOTA_Ability_Sniper_Assassinate::OnProjectileHit, CDOTA_Modifier_Huskar_Inner_Vitality::GetModifierConstantHealthRegen
float __fastcall CDOTA_BaseNPC::HealthFraction(const CDOTA_BaseNPC *const this)
{
  float result; // xmm0_4
  int Health; // r12d
  float v4; // xmm1_4

  if ( (*(this->_vptr_IHandleEntity + 156))(this) == 0 )
    return 1.0;
  Health = CBaseEntity::GetHealth(this);
  v4 = Health / (*(this->_vptr_IHandleEntity + 156))(this);
  result = 1.0;
  if ( v4 <= 1.0 )
    return fmaxf(0.0, v4);
  return result;
}


// CDOTA_BaseNPC::GetCurrentActiveAbility  (line 2570, @0x0000000002902a60, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// callers: CDOTA_BaseNPC::CalculateActivityModifiers, DOTA_ExecuteOrders, CDOTA_Modifier_Spawnlord_Master_Freeze::OnAttackStart, CDOTA_Bot::IsUsingAbility, CDOTA_Bot::IsUsingItem, CDOTA_BotAction_UseAbility::Think, CDOTA_Bot::FindNearbyChannelingEnemy, CDOTA_Bot_Script::GetCurrentActiveAbility, CDOTALocomotor::GetCastAngle, CDOTABehaviorAbilityChannel::OnEnd, CDOTABehaviorAbilityPhase::OnEnd, CDOTABehaviorAbilityChannel::OnStart (39 total)
// globals: CEntityHandle::gm_pEntityList
CDOTABaseAbility *__fastcall CDOTA_BaseNPC::GetCurrentActiveAbility(CDOTA_BaseNPC *const this)
{
  CDOTABaseAbility *result; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx

  result = 0;
  m_Index = this->m_hActiveAbility.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActiveAbility.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hActiveAbility.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
        return v4->m_pInstance;
    }
  }
  return result;
}


// CDOTA_BaseNPC::Script_GetCurrentActiveAbility  (line 2575, @0x00000000028fd410, libserver.so)  // inlines: EntityToHScript, Get, GetCurrentActiveAbility, GetEntityIdentity, GetEntryIndex, GetInstance, GetPublicScriptScope, IndexToIdentity, IsValid, LookupEntity, ToHScript, operator CEntityInstance*
// calls: CEntityInstance::CreatePublicScriptScope
// globals: CEntityHandle::gm_pEntityList
HSCRIPT __fastcall CDOTA_BaseNPC::Script_GetCurrentActiveAbility(CDOTA_BaseNPC *const this)
{
  uint32 m_Index; // edx
  HSCRIPT result; // rax
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx
  CEntityInstance *m_pInstance; // rbx

  m_Index = this->m_hActiveAbility.m_Index;
  result = 0;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActiveAbility.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hActiveAbility.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 )
        {
          result = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          if ( result == 0 )
          {
            CEntityInstance::CreatePublicScriptScope(v4->m_pInstance, 0);
            return m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          }
        }
      }
    }
  }
  return result;
}


// CDOTA_BaseNPC::GetUltimateAbility  (line 2583, @0x0000000002902ac0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// callers: CDOTAGCServerSystem::UpdateRealtimeGameState
// globals: CEntityHandle::gm_pEntityList
CDOTABaseAbility *__fastcall CDOTA_BaseNPC::GetUltimateAbility(CDOTA_BaseNPC *const this)
{
  int v1; // r12d
  CNetworkArrayBase<CHandle<CBaseEntity>,24,CDOTA_BaseNPC::NetworkVar_m_hAbilities> *p_m_hAbilities; // rbx
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTABaseAbility *m_pInstance; // r13

  v1 = 0;
  p_m_hAbilities = &this->m_hAbilities;
  do
  {
    if ( p_m_hAbilities->m_Value[0].m_Index + 2 > 1 )
    {
      v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(p_m_hAbilities->m_Value[0].m_Index) >> 9) & 0x3F];
      if ( v3 != 0 )
      {
        v4 = &v3[p_m_hAbilities->m_Value[0].m_Index & 0x1FF];
        if ( v4 != 0 && p_m_hAbilities->m_Value[0].m_Index == v4->m_EHandle.m_Index )
        {
          m_pInstance = v4->m_pInstance;
          if ( v4->m_pInstance != 0
            && (*(m_pInstance->_vptr_IHandleEntity + 214))(v4->m_pInstance) == 1
            && !m_pInstance->m_bStolen.m_Value )
          {
            return m_pInstance;
          }
        }
      }
    }
    ++v1;
    p_m_hAbilities = (p_m_hAbilities + 4);
  }
  while ( v1 != 24 );
  return 0;
}


// CDOTA_BaseNPC::GetSpecialAbilityIndex  (line 2595, @0x0000000002902b80, libserver.so)  // inlines: FStrEq, GetAbilityName, _V_strcmp
// calls: strcmp, CDOTA_BaseNPC::GetAbilityByIndex
// callers: DOTA_ExecuteOrders, CDOTA_BaseNPC_Hero::UpgradeAbility
// strings: "<NoAbilityName>"
int __fastcall CDOTA_BaseNPC::GetSpecialAbilityIndex(CDOTA_BaseNPC *const this, const char *pszAbilityName)
{
  int v4; // r13d
  int i; // ebx
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTABaseAbility *v7; // r12
  const char **p_m_pszAbilityName; // rax
  const char *v9; // rdi
  const char *v10; // rax

  v4 = 1;
  for ( i = 0; i != 24; ++i )
  {
    AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(this, i);
    v7 = AbilityByIndex;
    if ( AbilityByIndex != 0 && (*(AbilityByIndex->_vptr_IHandleEntity + 238))(AbilityByIndex) != 0 )
    {
      p_m_pszAbilityName = &v7->m_pAbilityData->m_pszAbilityName;
      v9 = "<NoAbilityName>";
      if ( p_m_pszAbilityName != 0 )
      {
        v10 = *p_m_pszAbilityName;
        v9 = "<NoAbilityName>";
        if ( v10 != 0 )
          v9 = v10;
      }
      if ( pszAbilityName == v9 || strcmp(v9, pszAbilityName) == 0 )
        return v4;
      ++v4;
    }
  }
  return 0;
}


// CDOTA_BaseNPC::SetCurrentActiveAbility  (line 2617, @0x0000000002902ff0, libserver.so)  // inlines: Get, GetCurrentActiveAbility, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, operator CEntityInstance*, operator=
// callers: CDOTABehaviorCommandCastHere::OnEnd, CDOTABehaviorAbilityChannel::OnEnd, CDOTABehaviorCommandMoveToPositionToCast::OnEnd, CDOTABehaviorCommandMoveToTargetToCast::OnEnd, CDOTABehaviorAbilityPhase::OnEnd, CDOTABehaviorCommandMoveToTargetToCast::OnResume, CDOTABehaviorAbilityChannel::OnStart, CDOTABehaviorAbilityPhase::OnStart, CDOTABehaviorAbilityPhase::Update, CDOTABehaviorCommandCastHere::CheckTransition, CDOTABehaviorCommandMoveToPositionToCast::OnStart, CDOTABehaviorCommandMoveToTargetToCast::OnStart
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC::SetCurrentActiveAbility(CDOTA_BaseNPC *const this, CDOTABaseAbility *pAbility)
{
  uint32 m_Index; // eax
  CDOTABaseAbility *m_pInstance; // rcx
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityIdentity *m_pEntity; // rdx
  int v7; // eax
  __int16 v8; // cx

  m_Index = this->m_hActiveAbility.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActiveAbility.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hActiveAbility.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
        m_pInstance = v5->m_pInstance;
    }
  }
  if ( pAbility != m_pInstance )
  {
    if ( pAbility != 0 && (m_pEntity = pAbility->m_pEntity) != 0 )
    {
      v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v8 = 0x7FFF;
      else
        v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hActiveAbility.m_Index) = v8 | this->m_hActiveAbility.m_Index & 0x8000;
      this->m_hActiveAbility.m_Index = (v7 << 15) | this->m_hActiveAbility.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hActiveAbility.m_Index = -1;
    }
  }
}


// CDOTA_BaseNPC::CastAbilityOnTarget  (line 2628, @0x000000000292be90, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, FStrEq, Get, GetAbilityName, GetEHandle, GetEntryIndex, GetInstance, GetParent, GetSerialNumber, GrowMemory, Purge, RemoveAll, Reset, Set, SetCursorCastTarget, SetPseudoQueuedOrder, _V_strcmp, entindex, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CGameSceneNode::GetOwnerEntity, CDOTA_BaseNPC::IsEntityInRangeForCast, CDOTA_BaseNPC::CastAbilityImmediately, CDOTABaseAbility::GetCaster, CEntityHandle::operator CEntityInstance*, CEntityInstance::GetEntityIndex, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::SetCount, CUtlMemory<CEntityIndex, int>::Purge, CUtlMemory<CEntityIndex, int>::Grow, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: DOTA_ExecuteOrders, CDOTA_BaseNPC::Script_CastAbilityOnTarget
void __fastcall CDOTA_BaseNPC::CastAbilityOnTarget(
        CDOTA_BaseNPC *const this,
        CBaseEntity *pEntity,
        CDOTABaseAbility *pAbility,
        int iPlayerIndex)
{
  int v8; // r15d
  __m128i v9; // xmm0
  float v10; // xmm1_4
  CBaseEntity *OwnerEntity; // rax
  CGameSceneNode *m_pParent; // rdi
  CEntityIdentity *m_pEntity; // rdx
  int v14; // eax
  __int16 v15; // cx
  CBaseEntity *v16; // r14
  CEntityIndex v17; // r14d
  int m_Size; // r13d
  unsigned __int64 v19; // rax
  int m_nOrderType; // eax
  bool v21; // zf
  vec_t y; // xmm0_4
  int32 m_Data; // eax
  DOTAAbilityData_t *m_pAbilityData; // rax
  char *m_pszAbilityName; // rsi
  CUnitOrders orders; // [rsp+0h] [rbp-70h] BYREF

  this->m_iLastAbilityPlayer = iPlayerIndex;
  if ( ((*(pAbility->_vptr_IHandleEntity + 251))(pAbility) & 0x800) == 0 )
  {
    if ( CDOTABaseAbility::GetCaster(pAbility) != pEntity )
      goto LABEL_13;
    m_pAbilityData = pAbility->m_pAbilityData;
    if ( m_pAbilityData == 0 )
      goto LABEL_13;
    m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName == 0
      || m_pszAbilityName != "item_ward_dispenser" && strcmp(m_pszAbilityName, "item_ward_dispenser") != 0 )
    {
      goto LABEL_13;
    }
  }
  v8 = (*(pAbility->_vptr_IHandleEntity + 230))(pAbility, &vec3_origin, 0);
  OwnerEntity = 0;
  m_pParent = pAbility->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
  if ( pEntity == OwnerEntity || (*v9.m128i_i32 = v8, CDOTA_BaseNPC::IsEntityInRangeForCast(this, pEntity, v9, v10)) )
  {
    if ( pEntity != 0 && (m_pEntity = pEntity->m_pEntity) != 0 )
    {
      v14 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v15 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hCursorTarget.m_Index) = v15 | this->m_hCursorTarget.m_Index & 0x8000;
      this->m_hCursorTarget.m_Index = (v14 << 15) | this->m_hCursorTarget.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hCursorTarget.m_Index = -1;
    }
    CDOTA_BaseNPC::CastAbilityImmediately(this, pAbility, iPlayerIndex);
    this->m_hCursorTarget.m_Index = -1;
  }
  else
  {
LABEL_13:
    v16 = CEntityHandle::operator CEntityInstance *(&this->m_hCommandAttackTarget);
    (*(this->_vptr_INextBotEventResponder + 51))(&this->INextBot, pAbility, pEntity);
    if ( pEntity == v16 && ((*(pAbility->_vptr_IHandleEntity + 251))(pAbility) & 0x2000000) == 0 )
    {
      orders.m_bQueue = 0;
      memset(&orders.m_nUnits.m_Memory, 0, 28);
      orders.m_vPosition = vec3_origin;
      v17.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
      CUtlMemory<CEntityIndex,int>::Grow(&orders.m_nUnits.m_Memory, 1);
      orders.m_nUnits.m_Size = 1;
      if ( orders.m_nUnits.m_Memory.m_pMemory != 0 )
        orders.m_nUnits.m_Memory.m_pMemory->m_Data = v17.m_Data;
      orders.m_nOrderType = 4;
      orders.m_nTargetIndex = CEntityInstance::GetEntityIndex(pEntity);
      this->m_PseudoQueuedOrders.m_nIssuerPlayerIndex = -1;
      this->m_PseudoQueuedOrders.m_nOrderSequenceNumber = 0;
      if ( &this->m_PseudoQueuedOrders.m_nUnits != &orders.m_nUnits )
      {
        m_Size = orders.m_nUnits.m_Size;
        CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::SetCount(
          &this->m_PseudoQueuedOrders.m_nUnits,
          orders.m_nUnits.m_Size);
        if ( m_Size > 0 )
        {
          v19 = 0;
          do
          {
            this->m_PseudoQueuedOrders.m_nUnits.m_Memory.m_pMemory[v19 / 4].m_Data = orders.m_nUnits.m_Memory.m_pMemory[v19 / 4].m_Data;
            v19 += 4LL;
          }
          while ( v19 != 4LL * (m_Size - 1) + 4 );
        }
      }
      m_nOrderType = orders.m_nOrderType;
      orders.m_nUnits.m_Size = 0;
      v21 = (orders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0;
      this->m_PseudoQueuedOrders.m_vPosition.x = orders.m_vPosition.x;
      y = orders.m_vPosition.y;
      this->m_PseudoQueuedOrders.m_nOrderType = m_nOrderType;
      m_Data = orders.m_nTargetIndex.m_Data;
      this->m_PseudoQueuedOrders.m_vPosition.y = y;
      this->m_PseudoQueuedOrders.m_vPosition.z = orders.m_vPosition.z;
      this->m_PseudoQueuedOrders.m_nTargetIndex.m_Data = m_Data;
      this->m_PseudoQueuedOrders.m_nAbilityIndex.m_Data = orders.m_nAbilityIndex.m_Data;
      this->m_PseudoQueuedOrders.m_bQueue = orders.m_bQueue;
      if ( v21 )
      {
        CUtlMemory<CEntityIndex,int>::Purge(&orders.m_nUnits.m_Memory);
        if ( (orders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CEntityIndex,int>::Purge(&orders.m_nUnits.m_Memory);
      }
    }
  }
}


// CDOTA_BaseNPC::CastAbilityOnPosition  (line 2665, @0x0000000002903170, libserver.so)  // inlines: SetCursorPosition, operator=
// calls: CDOTA_BaseNPC::CastAbilityImmediately
// callers: DOTA_ExecuteOrders, CDOTA_BaseNPC::Script_CastAbilityOnPosition
void __fastcall CDOTA_BaseNPC::CastAbilityOnPosition(
        CDOTA_BaseNPC *const this,
        CDOTABaseAbility *pAbility,
        int iPlayerIndex,
        double a4,
        vec_t a5)
{
  int (**vptr_IHandleEntity)(...); // rax
  int (**vptr_INextBotEventResponder)(...); // rax
  vec_t z; // xmm0_4
  vec_t x; // xmm2_4
  Vector vPositiona; // [rsp+0h] [rbp-30h] BYREF

  *&vPositiona.x = a4;
  vptr_IHandleEntity = pAbility->_vptr_IHandleEntity;
  vPositiona.z = a5;
  if ( ((vptr_IHandleEntity[251])(pAbility) & 0x800) != 0 )
  {
    this->m_vCursorLocation = vPositiona;
    CDOTA_BaseNPC::CastAbilityImmediately(this, pAbility, iPlayerIndex);
    z = vec3_origin.z;
    x = vec3_origin.x;
    this->m_vCursorLocation.y = vec3_origin.y;
    this->m_vCursorLocation.z = z;
    this->m_vCursorLocation.x = x;
  }
  else
  {
    vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
    this->m_iLastAbilityPlayer = iPlayerIndex;
    vptr_INextBotEventResponder[50](&this->INextBot, pAbility, &vPositiona);
  }
}


// CDOTA_BaseNPC::Script_CastAbilityOnPosition  (line 2680, @0x0000000002903240, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTAAbility, ToEnt
// calls: GetScriptDesc<CEntityInstance>, __dynamic_cast, CDOTA_BaseNPC::CastAbilityOnPosition
void __fastcall CDOTA_BaseNPC::Script_CastAbilityOnPosition(
        CDOTA_BaseNPC *const this,
        HSCRIPT hAbility,
        int iPlayerIndex,
        double a4,
        vec_t a5)
{
  __int64 (__fastcall *v8)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *Script; // rax
  const void *v10; // rax
  CDOTABaseAbility *v11; // rax

  if ( hAbility != 0 )
  {
    v8 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v10 = v8(g_pScriptVM, hAbility, Script);
    if ( v10 != 0 )
    {
      v11 = __dynamic_cast(v10, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
      if ( v11 != 0 )
        CDOTA_BaseNPC::CastAbilityOnPosition(this, v11, iPlayerIndex, a4, a5);
    }
  }
}


// CDOTA_BaseNPC::CastAbilityNoTarget  (line 2691, @0x000000000292bb70, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, Get, GetInstance, GrowMemory, Purge, RemoveAll, Reset, Set, SetCursorCastTarget, SetPseudoQueuedOrder, entindex, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityHandle::operator CEntityInstance*, CEntityInstance::GetEntityIndex, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::SetCount, CDOTA_BaseNPC::CastAbilityImmediately, CUtlMemory<CEntityIndex, int>::Purge, CUtlMemory<CEntityIndex, int>::Grow, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: DOTA_ExecuteOrders, CDOTA_BaseNPC::Script_CastAbilityNoTarget, CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::OnSpellStart
void __fastcall CDOTA_BaseNPC::CastAbilityNoTarget(
        CDOTA_BaseNPC *const this,
        CDOTABaseAbility *pAbility,
        int iPlayerIndex)
{
  CEntityInstance *v6; // r13
  CEntityIndex v7; // r15d
  int m_Size; // r13d
  unsigned __int64 v9; // rax
  int m_nOrderType; // eax
  bool v11; // zf
  vec_t y; // xmm0_4
  int32 m_Data; // eax
  CUnitOrders orders; // [rsp+0h] [rbp-70h] BYREF

  this->m_hCursorTarget.m_Index = -1;
  this->m_iLastAbilityPlayer = iPlayerIndex;
  if ( ((*(pAbility->_vptr_IHandleEntity + 251))(pAbility) & 0x800) != 0 )
  {
    CDOTA_BaseNPC::CastAbilityImmediately(this, pAbility, iPlayerIndex);
  }
  else
  {
    v6 = CEntityHandle::operator CEntityInstance *(&this->m_hCommandAttackTarget);
    (*(this->_vptr_INextBotEventResponder + 49))(&this->INextBot, pAbility);
    if ( v6 != 0 && ((*(pAbility->_vptr_IHandleEntity + 251))(pAbility) & 0x2000000) == 0 )
    {
      orders.m_bQueue = 0;
      orders.m_nUnits.m_Size = 0;
      memset(&orders.m_nUnits.m_Memory, 0, 28);
      orders.m_vPosition = vec3_origin;
      v7.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
      CUtlMemory<CEntityIndex,int>::Grow(&orders.m_nUnits.m_Memory, 1);
      ++orders.m_nUnits.m_Size;
      if ( orders.m_nUnits.m_Memory.m_pMemory != 0 )
        orders.m_nUnits.m_Memory.m_pMemory->m_Data = v7.m_Data;
      orders.m_nOrderType = 4;
      orders.m_nTargetIndex = CEntityInstance::GetEntityIndex(v6);
      this->m_PseudoQueuedOrders.m_nIssuerPlayerIndex = -1;
      this->m_PseudoQueuedOrders.m_nOrderSequenceNumber = 0;
      if ( &this->m_PseudoQueuedOrders.m_nUnits != &orders.m_nUnits )
      {
        m_Size = orders.m_nUnits.m_Size;
        CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::SetCount(
          &this->m_PseudoQueuedOrders.m_nUnits,
          orders.m_nUnits.m_Size);
        if ( m_Size > 0 )
        {
          v9 = 0;
          do
          {
            this->m_PseudoQueuedOrders.m_nUnits.m_Memory.m_pMemory[v9 / 4].m_Data = orders.m_nUnits.m_Memory.m_pMemory[v9 / 4].m_Data;
            v9 += 4LL;
          }
          while ( v9 != 4LL * (m_Size - 1) + 4 );
        }
      }
      m_nOrderType = orders.m_nOrderType;
      orders.m_nUnits.m_Size = 0;
      v11 = (orders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0;
      this->m_PseudoQueuedOrders.m_vPosition.x = orders.m_vPosition.x;
      y = orders.m_vPosition.y;
      this->m_PseudoQueuedOrders.m_nOrderType = m_nOrderType;
      m_Data = orders.m_nTargetIndex.m_Data;
      this->m_PseudoQueuedOrders.m_vPosition.y = y;
      this->m_PseudoQueuedOrders.m_vPosition.z = orders.m_vPosition.z;
      this->m_PseudoQueuedOrders.m_nTargetIndex.m_Data = m_Data;
      this->m_PseudoQueuedOrders.m_nAbilityIndex.m_Data = orders.m_nAbilityIndex.m_Data;
      this->m_PseudoQueuedOrders.m_bQueue = orders.m_bQueue;
      if ( v11 )
      {
        CUtlMemory<CEntityIndex,int>::Purge(&orders.m_nUnits.m_Memory);
        if ( (orders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CEntityIndex,int>::Purge(&orders.m_nUnits.m_Memory);
      }
    }
  }
}


// CDOTA_BaseNPC::CastAbilityToggle  (line 2721, @0x00000000029030e0, libserver.so)
// calls: CDOTABaseAbility::ToggleAbility
// callers: DOTA_ExecuteOrders
void __fastcall CDOTA_BaseNPC::CastAbilityToggle(
        CDOTA_BaseNPC *const this,
        CDOTABaseAbility *pAbility,
        int iPlayerIndex)
{
  this->m_iLastAbilityPlayer = iPlayerIndex;
  CDOTABaseAbility::ToggleAbility(pAbility);
}


// CDOTA_BaseNPC::Script_CastAbilityToggle  (line 2727, @0x00000000028fc1a0, libserver.so)  // inlines: CastAbilityToggle, HScriptToEntity<CBaseEntity>, ToDOTAAbility, ToEnt
// calls: GetScriptDesc<CEntityInstance>, __dynamic_cast, CDOTABaseAbility::ToggleAbility
void __fastcall CDOTA_BaseNPC::Script_CastAbilityToggle(CDOTA_BaseNPC *const this, HSCRIPT hAbility, int iPlayerIndex)
{
  __int64 (__fastcall *v6)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *Script; // rax
  const void *v8; // rax
  CDOTABaseAbility *v9; // rax

  if ( hAbility != 0 )
  {
    v6 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v8 = v6(g_pScriptVM, hAbility, Script);
    if ( v8 != 0 )
    {
      v9 = __dynamic_cast(v8, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
      if ( v9 != 0 )
      {
        this->m_iLastAbilityPlayer = iPlayerIndex;
        CDOTABaseAbility::ToggleAbility(v9);
      }
    }
  }
}


// CDOTA_BaseNPC::CastAbilityImmediately  (line 2737, @0x0000000002903100, libserver.so)  // inlines: FStrEq, GetAbilityName, _V_strcmp
// calls: CDOTABaseAbility::CastAbility, CDOTA_BaseNPC::InterruptChannel
// callers: CDOTA_Tutorial::ParseLessonKeys, CDOTA_Grinder::FrameUpdateHeroes, CDOTA_UnitInventory::AddItem, CDOTA_BaseNPC::CastAbilityOnPosition, CDOTA_BaseNPC::Script_CastAbilityImmediately, CDOTA_BaseNPC::CastAbilityNoTarget, CDOTA_BaseNPC::CastAbilityOnTarget
void __fastcall CDOTA_BaseNPC::CastAbilityImmediately(
        CDOTA_BaseNPC *const this,
        CDOTABaseAbility *pAbility,
        int iPlayerIndex)
{
  DOTAAbilityData_t *m_pAbilityData; // rax
  char *m_pszAbilityName; // rsi

  this->m_iLastAbilityPlayer = iPlayerIndex;
  CDOTABaseAbility::CastAbility(pAbility);
  if ( ((*(pAbility->_vptr_IHandleEntity + 251))(pAbility) & 0x400000) == 0 )
  {
    m_pAbilityData = pAbility->m_pAbilityData;
    if ( m_pAbilityData == 0
      || (m_pszAbilityName = m_pAbilityData->m_pszAbilityName, m_pAbilityData->m_pszAbilityName == 0)
      || m_pszAbilityName != "item_ward_dispenser" && strcmp(m_pszAbilityName, "item_ward_dispenser") != 0 )
    {
      CDOTA_BaseNPC::InterruptChannel(this);
    }
  }
}


// CDOTA_BaseNPC::Script_CastAbilityImmediately  (line 2747, @0x00000000029032f0, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTAAbility, ToEnt
// calls: GetScriptDesc<CEntityInstance>, __dynamic_cast, CDOTA_BaseNPC::CastAbilityImmediately
void __fastcall CDOTA_BaseNPC::Script_CastAbilityImmediately(
        CDOTA_BaseNPC *const this,
        HSCRIPT hAbility,
        int iPlayerIndex)
{
  __int64 (__fastcall *v6)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *Script; // rax
  const void *v8; // rax
  CDOTABaseAbility *v9; // rax

  if ( hAbility != 0 )
  {
    v6 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v8 = v6(g_pScriptVM, hAbility, Script);
    if ( v8 != 0 )
    {
      v9 = __dynamic_cast(v8, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
      if ( v9 != 0 )
        CDOTA_BaseNPC::CastAbilityImmediately(this, v9, iPlayerIndex);
    }
  }
}


// CDOTA_BaseNPC::Hold  (line 2757, @0x0000000002904510, libserver.so)
// calls: CDOTA_BaseNPC::Stop
// callers: DOTA_ExecuteOrders
void __fastcall CDOTA_BaseNPC::Hold(CDOTA_BaseNPC *const this)
{
  this->m_bHold = 1;
  CDOTA_BaseNPC::Stop(this);
}


// CDOTA_BaseNPC::Stop  (line 2766, @0x0000000002904440, libserver.so)  // inlines: AdvanceMovementOrderTracking, ClearPseudoQueuedOrder, ClearQueuedOrders, RemoveAll, operator=
// calls: CDOTA_BaseNPC::UpdatePseudoQueuedOrder
// callers: DOTA_ExecuteOrders, CDOTA_BaseNPC::Hold, CDOTA_Modifier_Brewmaster_PrimalSplit::OnDestroy, CDOTA_Ability_Tusk_Snowball::LoadUnit, CDOTAHeroTaunt::ApplyEffects
void __fastcall CDOTA_BaseNPC::Stop(CDOTA_BaseNPC *const this)
{
  vec_t x; // xmm0_4
  vec_t v3; // xmm3_4
  vec_t y; // xmm2_4
  vec_t z; // xmm1_4
  bool m_bCurrentOrderIsMovement; // al
  vec_t v7; // xmm0_4

  this->m_QueuedOrders.m_tail = QueueIter_t::QUEUE_ITERATOR_INVALID;
  this->m_QueuedOrders.m_head = QueueIter_t::QUEUE_ITERATOR_INVALID;
  this->m_PseudoQueuedOrders.m_nOrderType = 0;
  CDOTA_BaseNPC::UpdatePseudoQueuedOrder(this, 1);
  this->m_bResumePreviousMovement = 0;
  x = this->m_vCurrentMovementOrderDestination.x;
  this->m_bIsPatrolling = 0;
  this->m_vPreviousMovementOrderDestination.x = x;
  v3 = vec3_origin.x;
  y = vec3_origin.y;
  this->m_vPreviousMovementOrderDestination.y = this->m_vCurrentMovementOrderDestination.y;
  z = vec3_origin.z;
  this->m_vCurrentMovementOrderDestination.x = v3;
  m_bCurrentOrderIsMovement = this->m_bCurrentOrderIsMovement;
  this->m_vCurrentMovementOrderDestination.y = y;
  v7 = this->m_vCurrentMovementOrderDestination.z;
  this->m_bCurrentOrderIsMovement = 0;
  this->m_vCurrentMovementOrderDestination.z = z;
  this->m_vPreviousMovementOrderDestination.z = v7;
  this->m_bPreviousOrderIsMovement = m_bCurrentOrderIsMovement;
  (*(this->_vptr_INextBotEventResponder + 56))(&this->INextBot);
}


// CDOTA_BaseNPC::Continue  (line 2774, @0x0000000002903390, libserver.so)  // inlines: SetIdleAcquire
void __fastcall CDOTA_BaseNPC::Continue(CDOTA_BaseNPC *const this)
{
  this->m_bIdleAcquire = 1;
}


// CDOTA_BaseNPC::MoveToPosition  (line 2782, @0x00000000028f5030, libserver.so)
// callers: DOTA_ExecuteOrders, dota_path_repro, CDOTA_Ability_Courier_GoToSecretShop::OnSpellStart, CDOTA_Modifier_Courier_ReturnStashItems::OnCreated, CDOTA_Ability_Courier_ReturnToBase::OnSpellStart, CDOTA_Modifier_Courier_TransferItems::OnDestroy, CDOTA_Modifier_Courier_TakeStashItems::GrabStashItems, CDOTA_Modifier_Courier_TakeStashItems::OnCreated, CDOTA_Ability_Courier_TakeStashAndTransferItems::OnSpellStart, CDOTA_Ability_Courier_TakeStashItems::OnSpellStart
void __fastcall CDOTA_BaseNPC::MoveToPosition(CDOTA_BaseNPC *const this, double a2, vec_t a3)
{
  int (**vptr_INextBotEventResponder)(...); // rax
  Vector vDesta; // [rsp+0h] [rbp-10h] BYREF

  vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
  vDesta.z = a3;
  *&vDesta.x = a2;
  vptr_INextBotEventResponder[44](&this->INextBot, &vDesta);
}


// CDOTA_BaseNPC::MoveToDirection  (line 2800, @0x00000000029033a0, libserver.so)
// callers: DOTA_ExecuteOrders
void __fastcall CDOTA_BaseNPC::MoveToDirection(CDOTA_BaseNPC *const this, double a2, vec_t a3)
{
  int (**vptr_INextBotEventResponder)(...); // rax
  Vector vDesta; // [rsp+0h] [rbp-10h] BYREF

  vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
  vDesta.z = a3;
  *&vDesta.x = a2;
  vptr_INextBotEventResponder[45](&this->INextBot, &vDesta);
}


// CDOTA_BaseNPC::MoveToPositionAggressive  (line 2808, @0x00000000028f5060, libserver.so)
// callers: DOTA_ExecuteOrders
void __fastcall CDOTA_BaseNPC::MoveToPositionAggressive(CDOTA_BaseNPC *const this, double a2, vec_t a3)
{
  int (**vptr_INextBotEventResponder)(...); // rax
  Vector vDesta; // [rsp+0h] [rbp-10h] BYREF

  vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
  vDesta.z = a3;
  *&vDesta.x = a2;
  vptr_INextBotEventResponder[46](&this->INextBot, &vDesta);
}


// CDOTA_BaseNPC::MoveToNPC  (line 2816, @0x00000000029033d0, libserver.so)
// callers: DOTA_ExecuteOrders, CDOTA_Modifier_Courier_TransferItems::OnCreated
void __fastcall CDOTA_BaseNPC::MoveToNPC(CDOTA_BaseNPC *const this, CDOTA_BaseNPC *pNPC)
{
  (*(this->_vptr_INextBotEventResponder + 32))(&this->INextBot, pNPC);
}


// CDOTA_BaseNPC::Script_MoveToNPC  (line 2821, @0x00000000028fc080, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, MoveToNPC, ToDOTABaseNPC, ToEnt
// calls: GetScriptDesc<CEntityInstance>
void __fastcall CDOTA_BaseNPC::Script_MoveToNPC(CDOTA_BaseNPC *const this, HSCRIPT hNPC)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax
  __int64 v6; // rax

  if ( hNPC != 0 )
  {
    v4 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v6 = v4(g_pScriptVM, hNPC, Script);
    if ( v6 != 0 && *(v6 + 339) != 0 )
      (*(this->_vptr_INextBotEventResponder + 32))(&this->INextBot, v6);
  }
}


// CDOTA_BaseNPC::Input_MoveTo  (line 2828, @0x00000000028ffe00, libserver.so)  // inlines: AssignTo, MoveToNPC, MoveToPosition, StringID, TempString, ToDOTABaseNPC, ToString
// calls: MakeEntitySystemString, CGameEntitySystem::FindEntityByName, CBaseEntity::GetAbsOrigin, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_28FFE33, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CDOTA_BaseNPC::Input_MoveTo(CDOTA_BaseNPC *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  char *m_pszString; // rsi
  CBaseEntity *EntityByName; // rax
  const char *v6; // rax
  const char *v7; // rcx
  double m_float; // xmm0_8
  string_t iszName[4]; // [rsp+10h] [rbp-20h] BYREF

  m_type = inputdata->value.m_type;
  if ( m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_12;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_23;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_15;
      case 6:
        v7 = "true";
        if ( inputdata->value.m_char == 0 )
          v7 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v7);
        goto LABEL_19;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_15;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_19;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_19:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_23:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_15:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v6 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v6);
LABEL_12:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  MakeEntitySystemString(m_pszString);
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, iszName, 0, 0, 0, 0);
  if ( EntityByName != 0 )
  {
    if ( EntityByName->m_bIsDOTANPC )
    {
      (*(this->_vptr_INextBotEventResponder + 32))(&this->INextBot, EntityByName);
    }
    else
    {
      *&iszName[0].u.m_Id = *CBaseEntity::GetAbsOrigin(EntityByName);
      (*(this->_vptr_INextBotEventResponder + 44))(&this->INextBot, iszName);
    }
  }
}


// CDOTA_BaseNPC::Input_MoveToPositionAggressive  (line 2845, @0x0000000002900120, libserver.so)  // inlines: AssignTo, MoveToPositionAggressive, StringID, TempString, ToString
// calls: MakeEntitySystemString, CGameEntitySystem::FindEntityByName, CBaseEntity::GetAbsOrigin, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_2900153, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CDOTA_BaseNPC::Input_MoveToPositionAggressive(CDOTA_BaseNPC *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  char *m_pszString; // rsi
  const CBaseEntity *EntityByName; // rax
  const char *v6; // rax
  const char *v7; // rcx
  double m_float; // xmm0_8
  string_t iszName[4]; // [rsp+10h] [rbp-20h] BYREF

  m_type = inputdata->value.m_type;
  if ( m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_10;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_21;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_13;
      case 6:
        v7 = "true";
        if ( inputdata->value.m_char == 0 )
          v7 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v7);
        goto LABEL_17;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_13;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_17;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_17:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_21:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_13:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v6 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v6);
LABEL_10:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  MakeEntitySystemString(m_pszString);
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, iszName, 0, 0, 0, 0);
  if ( EntityByName != 0 )
  {
    *&iszName[0].u.m_Id = *CBaseEntity::GetAbsOrigin(EntityByName);
    (*(this->_vptr_INextBotEventResponder + 46))(&this->INextBot, iszName);
  }
}


// CDOTA_BaseNPC::MoveToTargetToAttack  (line 2858, @0x00000000029033f0, libserver.so)
// callers: DOTA_ExecuteOrders, CDOTA_Modifier_SpiritBreaker_GreaterBash::OnAttackLanded
void __fastcall CDOTA_BaseNPC::MoveToTargetToAttack(CDOTA_BaseNPC *const this, CBaseEntity *pTarget)
{
  (*(this->_vptr_INextBotEventResponder + 48))(
    &this->INextBot,
    pTarget,
    this->m_iTeamNum.m_Value == pTarget->m_iTeamNum.m_Value);
}


// CDOTA_BaseNPC::Script_MoveToTargetToAttack  (line 2865, @0x00000000028fbff0, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, MoveToTargetToAttack, ToEnt
// calls: GetScriptDesc<CEntityInstance>
void __fastcall CDOTA_BaseNPC::Script_MoveToTargetToAttack(CDOTA_BaseNPC *const this, HSCRIPT hTarget)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  __int64 v6; // rax

  if ( hTarget != 0 )
  {
    v4 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v6 = v4(g_pScriptVM, hTarget, Script);
    if ( v6 != 0 )
      (*(this->_vptr_INextBotEventResponder + 48))(&this->INextBot, v6, this->m_iTeamNum.m_Value == *(v6 + 383));
  }
}


// CDOTA_BaseNPC::Input_MoveToAttack  (line 2874, @0x00000000028ffad0, libserver.so)  // inlines: AssignTo, MoveToPositionAggressive, MoveToTargetToAttack, StringID, TempString, ToDOTABaseNPC, ToString
// calls: MakeEntitySystemString, CGameEntitySystem::FindEntityByName, CBaseEntity::GetAbsOrigin, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_28FFB03, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CDOTA_BaseNPC::Input_MoveToAttack(CDOTA_BaseNPC *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  char *m_pszString; // rsi
  CBaseEntity *EntityByName; // rax
  const char *v6; // rax
  const char *v7; // rcx
  double m_float; // xmm0_8
  string_t iszName[4]; // [rsp+10h] [rbp-20h] BYREF

  m_type = inputdata->value.m_type;
  if ( m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_12;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_23;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_15;
      case 6:
        v7 = "true";
        if ( inputdata->value.m_char == 0 )
          v7 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v7);
        goto LABEL_19;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_15;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_19;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_19:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_23:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_15:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v6 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v6);
LABEL_12:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  MakeEntitySystemString(m_pszString);
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, iszName, 0, 0, 0, 0);
  if ( EntityByName != 0 )
  {
    if ( EntityByName->m_bIsDOTANPC )
    {
      (*(this->_vptr_INextBotEventResponder + 48))(
        &this->INextBot,
        EntityByName,
        this->m_iTeamNum.m_Value == EntityByName->m_iTeamNum.m_Value);
    }
    else
    {
      *&iszName[0].u.m_Id = *CBaseEntity::GetAbsOrigin(EntityByName);
      (*(this->_vptr_INextBotEventResponder + 46))(&this->INextBot, iszName);
    }
  }
}


// CDOTA_BaseNPC::PatrolToPosition  (line 2890, @0x00000000028f5090, libserver.so)
// callers: DOTA_ExecuteOrders
void __fastcall CDOTA_BaseNPC::PatrolToPosition(CDOTA_BaseNPC *const this, double a2, vec_t a3)
{
  int (**vptr_INextBotEventResponder)(...); // rax
  Vector vDesta; // [rsp+0h] [rbp-10h] BYREF

  vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
  vDesta.z = a3;
  *&vDesta.x = a2;
  vptr_INextBotEventResponder[47](&this->INextBot, &vDesta);
}


// CDOTA_BaseNPC::DropItemAtPosition  (line 2899, @0x0000000002903430, libserver.so)
// callers: DOTA_ExecuteOrders
void __fastcall CDOTA_BaseNPC::DropItemAtPosition(CDOTA_BaseNPC *const this, CBaseEntity *pItem, double a3, vec_t a4)
{
  int (**vptr_INextBotEventResponder)(...); // rax
  Vector vDesta; // [rsp+0h] [rbp-10h] BYREF

  vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
  vDesta.z = a4;
  *&vDesta.x = a3;
  vptr_INextBotEventResponder[52](&this->INextBot, &vDesta, pItem);
}


// CDOTA_BaseNPC::Script_DropItemAtPosition  (line 2904, @0x00000000028fc110, libserver.so)  // inlines: DropItemAtPosition, HScriptToEntity<CBaseEntity>, ToEnt
// calls: GetScriptDesc<CEntityInstance>
void __fastcall CDOTA_BaseNPC::Script_DropItemAtPosition(CDOTA_BaseNPC *const this, HSCRIPT hItem, double a3, float a4)
{
  __int64 (__fastcall *v6)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  __int64 v8; // rax
  int (**vptr_INextBotEventResponder)(...); // rcx
  double v12; // [rsp+10h] [rbp-30h] BYREF
  float v13; // [rsp+18h] [rbp-28h]

  if ( hItem != 0 )
  {
    v6 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v8 = v6(g_pScriptVM, hItem, Script);
    if ( v8 != 0 )
    {
      vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
      v12 = a3;
      v13 = a4;
      vptr_INextBotEventResponder[52](&this->INextBot, &v12, v8);
    }
  }
}


// CDOTA_BaseNPC::MoveToNPCToGiveItem  (line 2915, @0x0000000002903470, libserver.so)
// callers: DOTA_ExecuteOrders
void __fastcall CDOTA_BaseNPC::MoveToNPCToGiveItem(CDOTA_BaseNPC *const this, CBaseEntity *pNPC, CBaseEntity *pItem)
{
  (*(this->_vptr_INextBotEventResponder + 53))(&this->INextBot, pNPC, pItem);
}


// CDOTA_BaseNPC::Script_MoveToNPCToGiveItem  (line 2920, @0x00000000028fc610, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, MoveToNPCToGiveItem, ToEnt
// calls: GetScriptDesc<CEntityInstance>
void __fastcall CDOTA_BaseNPC::Script_MoveToNPCToGiveItem(CDOTA_BaseNPC *const this, HSCRIPT hNPC, HSCRIPT hItem)
{
  __int64 (__fastcall *v6)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *Script; // rax
  __int64 v8; // r13
  __int64 (__fastcall *v9)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *v10; // rax
  __int64 v11; // rdx

  if ( hNPC != 0 )
  {
    v6 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v8 = v6(g_pScriptVM, hNPC, Script);
  }
  else
  {
    v8 = 0;
  }
  if ( hItem != 0 )
  {
    v9 = *(*g_pScriptVM + 208LL);
    v10 = GetScriptDesc<CEntityInstance>(0);
    v11 = v9(g_pScriptVM, hItem, v10);
    if ( v11 != 0 && v8 != 0 )
      (*(this->_vptr_INextBotEventResponder + 53))(&this->INextBot, v8, v11);
  }
}


// CDOTA_BaseNPC::PickupDroppedItem  (line 2931, @0x0000000002903490, libserver.so)
// callers: DOTA_ExecuteOrders
void __fastcall CDOTA_BaseNPC::PickupDroppedItem(CDOTA_BaseNPC *const this, CBaseEntity *pItem)
{
  (*(this->_vptr_INextBotEventResponder + 54))(&this->INextBot, pItem);
}


// CDOTA_BaseNPC::Script_PickupDroppedItem  (line 2936, @0x00000000028fbef0, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, PickupDroppedItem, ToEnt
// calls: GetScriptDesc<CEntityInstance>
void __fastcall CDOTA_BaseNPC::Script_PickupDroppedItem(CDOTA_BaseNPC *const this, HSCRIPT hItem)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  __int64 v6; // rax

  if ( hItem != 0 )
  {
    v4 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v6 = v4(g_pScriptVM, hItem, Script);
    if ( v6 != 0 )
      (*(this->_vptr_INextBotEventResponder + 54))(&this->INextBot, v6);
  }
}


// CDOTA_BaseNPC::PickupRune  (line 2946, @0x00000000029034b0, libserver.so)
// callers: DOTA_ExecuteOrders
void __fastcall CDOTA_BaseNPC::PickupRune(CDOTA_BaseNPC *const this, CBaseEntity *pItem)
{
  (*(this->_vptr_INextBotEventResponder + 55))(&this->INextBot, pItem);
}


// CDOTA_BaseNPC::Script_PickupRune  (line 2951, @0x00000000028fbf70, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, PickupRune, ToEnt
// calls: GetScriptDesc<CEntityInstance>
void __fastcall CDOTA_BaseNPC::Script_PickupRune(CDOTA_BaseNPC *const this, HSCRIPT hItem)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  __int64 v6; // rax

  if ( hItem != 0 )
  {
    v4 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v6 = v4(g_pScriptVM, hItem, Script);
    if ( v6 != 0 )
      (*(this->_vptr_INextBotEventResponder + 55))(&this->INextBot, v6);
  }
}


// CDOTA_BaseNPC::HandleRunePickup  (line 2962, @0x000000000294fa60, libserver.so)
// calls: DOTACommander, CDOTA_Commander::OnRunePickup, CDOTA_UnitInventory::GetItemInSlot, CDOTA_Item_Rune::GetRuneType, CDOTA_BaseNPC::ActivateRuneEffect, CDOTA_PlayerResource::AddRunePickup, CDOTA_CombatLog::AddPickupRuneEvent, UTIL_RemoveImmediate
// callers: CDOTABehaviorCommandMoveToRuneToTake::Update
void __fastcall CDOTA_BaseNPC::HandleRunePickup(CDOTA_BaseNPC *const this, CDOTA_Item_Rune *pRune)
{
  CDOTA_Commander *v4; // rax
  int v5; // ebx
  CDOTA_Item *ItemInSlot; // rax
  CDOTA_Item *v7; // r12
  unsigned __int8 (__fastcall *v8)(CDOTA_Item *, _QWORD); // r15
  unsigned int RuneType; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  int v13; // eax

  if ( !this->m_bIsIllusion.m_Value && (pRune->m_pEntity->m_flags & 0x200) == 0 )
  {
    v4 = DOTACommander();
    v5 = 0;
    CDOTA_Commander::OnRunePickup(v4, pRune);
    while ( 1 )
    {
      ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(&this->m_Inventory, v5);
      v7 = ItemInSlot;
      if ( ItemInSlot != 0 )
      {
        v8 = *(ItemInSlot->_vptr_IHandleEntity + 338);
        RuneType = CDOTA_Item_Rune::GetRuneType(pRune);
        if ( v8(v7, RuneType) != 0 )
          break;
      }
      if ( ++v5 == 6 )
      {
        v10 = CDOTA_Item_Rune::GetRuneType(pRune);
        CDOTA_BaseNPC::ActivateRuneEffect(this, v10);
        break;
      }
    }
    if ( (*(this->_vptr_IHandleEntity + 413))(this) != 0 )
    {
      v11 = (*(this->_vptr_IHandleEntity + 414))(this);
      CDOTA_PlayerResource::AddRunePickup(g_pDOTAPlayerResource, v11);
      v12 = CDOTA_Item_Rune::GetRuneType(pRune);
      v13 = (*(this->_vptr_IHandleEntity + 414))(this);
      CDOTA_CombatLog::AddPickupRuneEvent(g_pDOTACombatLog, v13, v12);
    }
    UTIL_RemoveImmediate(pRune);
  }
}


// CDOTA_BaseNPC::ActivateRuneEffect  (line 3002, @0x000000000294eed0, libserver.so)  // inlines: CEntityHandle, CreateEvent, DOTAGameRules, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetPaddedCollisionRadius, GetSerialNumber, GetTeamNumber, HasBountyRunePickupFilter, HasScriptFilter, InState, IndexToIdentity, Init, IsInvisible, IsRangedAttacker, LookupEntity, QueueConcept, RunBountyRunePickupFilter, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAPlayer, entindex, ~CTeamRecipientFilter
// calls: CDOTAGamerules::GetDOTATime, CDOTA_BaseNPC::FindAbilityByName, CDOTAGamerules::GetGameModeEntity, KeyValues::operator new, KeyValues::KeyValues, KeyValues::SetInt, VScriptFilter::RunScriptFilter, KeyValues::~KeyValues, KeyValues::operator delete, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound (35 total)
// callers: CDOTA_BaseNPC::HandleRunePickup, CDOTA_Item_EmptyBottle::OnSpellStart
// strings: "alchemist_goblins_greed", "BountyData", "gold_bounty", "xp_bounty", "modifier_rune_arcane", "Rune.Arcane" (31 total)
// globals: jpt_294EF12
void __fastcall CDOTA_BaseNPC::ActivateRuneEffect(CDOTA_BaseNPC *const this, int iRuneType)
{
  int v4; // ebx
  int v5; // r13d
  float DOTATime; // xmm0_4
  int v7; // ebx
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseGameMode *GameModeEntity; // rax
  VScriptFilter *v10; // r12
  KeyValues *v11; // r13
  int (**vptr_IHandleEntity)(...); // rax
  int v13; // eax
  bool v14; // al
  bool v15; // cl
  KeyValues *v16; // r12
  float v17; // xmm1_4
  const char *v18; // rbx
  float v19; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  unsigned __int16 v21; // dx
  int v22; // esi
  uint32 v23; // eax
  CEntityIdentity *v24; // rdx
  CEntityIdentity *v25; // rdx
  float v26; // xmm1_4
  float v27; // xmm1_4
  float v28; // xmm1_4
  float v29; // xmm0_4
  CDOTA_BaseNPC_Hero *v30; // r12
  CDOTA_Commander *v31; // rax
  float v32; // xmm1_4
  float v33; // xmm1_4
  float v34; // xmm1_4
  int v35; // eax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_ParticleManager *v38; // rax
  CDOTA_ParticleManager *v39; // rax
  CDOTAPlayer *v40; // rax
  int Int; // eax
  bool v42; // cl
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  CDOTAPlayer *m_pInstance; // r12
  IHandleEntity *HandleEntity; // rax
  int v50; // eax
  CEntityIndex v51; // eax
  __int64 v52; // rax
  __int64 v53; // r14
  __int64 v54; // rdx
  bool v55; // [rsp+24h] [rbp-1CCh]
  bool v56; // [rsp+24h] [rbp-1CCh]
  bool v57; // [rsp+24h] [rbp-1CCh]
  int iXPBounty; // [rsp+28h] [rbp-1C8h]
  void (__fastcall *iXPBountya)(__int64, char *, __int64); // [rsp+28h] [rbp-1C8h]
  KeyValues *pFilterKeys; // [rsp+40h] [rbp-1B0h] BYREF
  CTeamRecipientFilter filterbroadcast; // [rsp+80h] [rbp-170h] BYREF
  unsigned __int64 v62; // [rsp+1B8h] [rbp-38h]

  v62 = __readfsqword(0x28u);
  switch ( iRuneType )
  {
    case 0:
      KeyValues::KeyValues(&filterbroadcast, "modifier_rune_doubledamage");
      KeyValues::SetFloat(&filterbroadcast, "duration", v26);
      CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_rune_doubledamage", &filterbroadcast, 0);
      if ( this != 0 && (this->m_iUnitType & 1) != 0 )
        DOTA_EmitSound(4, "Rune.DD", this);
      KeyValues::~KeyValues(&filterbroadcast);
      v18 = "DOTA_RUNE_DOUBLEDAMAGE";
      goto LABEL_23;
    case 1:
      KeyValues::KeyValues(&filterbroadcast, "modifier_rune_haste");
      KeyValues::SetFloat(&filterbroadcast, "duration", v27);
      CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_rune_haste", &filterbroadcast, 0);
      if ( this != 0 && (this->m_iUnitType & 1) != 0 )
        DOTA_EmitSound(4, "Rune.Haste", this);
      KeyValues::~KeyValues(&filterbroadcast);
      v18 = "DOTA_RUNE_HASTE";
      goto LABEL_23;
    case 2:
      KeyValues::KeyValues(&filterbroadcast, "modifier_illusion");
      KeyValues::SetFloat(&filterbroadcast, "duration", v28);
      KeyValues::SetInt(&filterbroadcast, "outgoing_damage", -65);
      KeyValues::SetInt(&filterbroadcast, "incoming_damage", (this->m_iAttackCapabilities.m_Value & 2) == 0 ? 100 : 200);
      v29 = this->m_flHullRadius + this->m_flCollisionPadding;
      DOTA_CreateIllusions(this, 2, (v29 + v29), 0, &filterbroadcast, 0, 0, "rune_", 1);
      v30 = 0;
      if ( (this->m_iUnitType & 1) != 0 )
        v30 = this;
      v31 = DOTACommander();
      CDOTA_Commander::ClearIllusionState(v31, v30);
      if ( (this->m_iUnitType & 1) != 0 )
        DOTA_EmitSound(4, "Rune.Illusion", this);
      KeyValues::~KeyValues(&filterbroadcast);
      v18 = "DOTA_RUNE_ILLUSION";
      goto LABEL_23;
    case 3:
      KeyValues::KeyValues(&filterbroadcast, "modifier_rune_invis");
      KeyValues::SetFloat(&filterbroadcast, "duration", v32);
      KeyValues::SetFloat(&filterbroadcast, "fadetime", v33);
      CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_rune_invis", &filterbroadcast, 0);
      if ( this != 0 && (this->m_iUnitType & 1) != 0 )
        DOTA_EmitSound(4, "Rune.Invis", this);
      KeyValues::~KeyValues(&filterbroadcast);
      v18 = "DOTA_RUNE_INVISIBILITY";
      goto LABEL_23;
    case 4:
      KeyValues::KeyValues(&filterbroadcast, "modifier_rune_regen");
      KeyValues::SetFloat(&filterbroadcast, "duration", v34);
      CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_rune_regen", &filterbroadcast, 0);
      if ( this != 0 && (this->m_iUnitType & 1) != 0 )
        DOTA_EmitSound(4, "Rune.Regen", this);
      KeyValues::~KeyValues(&filterbroadcast);
      v18 = "DOTA_RUNE_REGENERATION";
      goto LABEL_23;
    case 5:
      if ( this == 0 || !this->m_bIsDOTANPC )
        goto LABEL_54;
      if ( g_pGameRules != 0 )
      {
        v4 = 100;
        v5 = 0;
        if ( CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0) >= 120.0 )
        {
          v4 = 50;
          v5 = 50;
        }
        iXPBounty = (v5 + ((CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0) * 5.0) / 60.0));
        DOTATime = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
        v7 = (v4 + ((DOTATime + DOTATime) / 60.0));
        AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "alchemist_goblins_greed", 0);
        if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
          v7 *= 2;
        if ( g_pGameRules != 0 )
        {
          GameModeEntity = CDOTAGamerules::GetGameModeEntity(g_pGameRules);
          v10 = GameModeEntity;
          if ( GameModeEntity != 0
            && GameModeEntity->m_BountyRunePickupFilter.m_hFunction != 0
            && GameModeEntity->m_BountyRunePickupFilter.m_hContext != 0 )
          {
            v11 = KeyValues::operator new(0x14u);
            KeyValues::KeyValues(v11, "BountyData");
            vptr_IHandleEntity = this->_vptr_IHandleEntity;
            pFilterKeys = v11;
            v13 = vptr_IHandleEntity[414](this);
            KeyValues::SetInt(pFilterKeys, "player_id_const", v13);
            KeyValues::SetInt(pFilterKeys, "gold_bounty", v7);
            KeyValues::SetInt(pFilterKeys, "xp_bounty", iXPBounty);
            v14 = VScriptFilter::RunScriptFilter(v10 + 56, &pFilterKeys);
            v15 = v14;
            if ( v14 )
            {
              v56 = v14;
              Int = KeyValues::GetInt(pFilterKeys, "gold_bounty", v7);
              v42 = v56;
              if ( Int <= 99999 )
              {
                v44 = KeyValues::GetInt(pFilterKeys, "gold_bounty", v7);
                v42 = v56;
                if ( v44 >= 0 )
                {
                  v46 = KeyValues::GetInt(pFilterKeys, "gold_bounty", v7);
                  v42 = v56;
                  v7 = v46;
                }
                else
                {
                  v7 = 0;
                }
              }
              else
              {
                v7 = 99999;
              }
              v57 = v42;
              v43 = KeyValues::GetInt(pFilterKeys, "xp_bounty", iXPBounty);
              v15 = v57;
              if ( v43 <= 99999 )
              {
                v45 = KeyValues::GetInt(pFilterKeys, "xp_bounty", iXPBounty);
                v15 = v57;
                if ( v45 >= 0 )
                {
                  v47 = KeyValues::GetInt(pFilterKeys, "xp_bounty", iXPBounty);
                  v15 = v57;
                  iXPBounty = v47;
                }
                else
                {
                  iXPBounty = 0;
                }
              }
              else
              {
                iXPBounty = 99999;
              }
            }
            v16 = pFilterKeys;
            if ( pFilterKeys != 0 )
            {
              v55 = v15;
              KeyValues::~KeyValues(pFilterKeys);
              KeyValues::operator delete(v16);
              v15 = v55;
            }
            if ( !v15 )
              goto LABEL_54;
          }
        }
      }
      else
      {
        iXPBounty = 50;
        v7 = 50;
      }
      if ( (this->m_iUnitType & 1) != 0 )
        (*(this->_vptr_IHandleEntity + 493))(this, 0, 1, 1, iXPBounty);
      v35 = (*(this->_vptr_IHandleEntity + 414))(this);
      CDOTA_PlayerResource::ModifyGold(g_pDOTAPlayerResource, v35, v7, 0, 0);
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/generic_gameplay/rune_bounty_owner.vpcf",
                   2,
                   this,
                   0,
                   0);
      v38 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v38, Particle, 0, this, 5, "attach_hitloc", vec3_invalid, 1);
      v39 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v39, Particle);
      v40 = (*(this->_vptr_IHandleEntity + 413))(this);
      SendOverheadEventMessage(v40, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_GOLD, this, v7, 0);
      DOTA_EmitSound(4, "Rune.Bounty", this);
LABEL_54:
      v18 = "DOTA_RUNE_BOUNTY";
      goto LABEL_23;
    case 6:
      KeyValues::KeyValues(&filterbroadcast, "modifier_rune_arcane");
      KeyValues::SetFloat(&filterbroadcast, "duration", v17);
      CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_rune_arcane", &filterbroadcast, 0);
      if ( this != 0 && (this->m_iUnitType & 1) != 0 )
        DOTA_EmitSound(4, "Rune.Arcane", this);
      KeyValues::~KeyValues(&filterbroadcast);
      v18 = "DOTA_RUNE_ARCANE";
      goto LABEL_23;
    default:
      v18 = " ";
LABEL_23:
      CResponseCriteriaSet::CResponseCriteriaSet(&pFilterKeys);
      CResponseCriteriaSet::AppendCriteria(&pFilterKeys, "poweruptype", v18, 1.0);
      CResponseCriteriaSet::AppendCriteria(&pFilterKeys, "state_invisible", 1.0, v19);
      m_pSpeech = this->m_Speech.m_pSpeech;
      if ( m_pSpeech != 0 )
        CDOTA_Speech::QueueConcept(m_pSpeech, 16, 0.5, &pFilterKeys, 0, 0, 0, 0, 0);
      if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
      {
        v21 = 0x7FFF;
        v22 = 0x7FFF;
      }
      else
      {
        v21 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
        v22 = v21;
      }
      v23 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v21 & 0x7FFF;
      if ( v23 + 2 > 1 )
      {
        v24 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v22 >> 9];
        if ( v24 != 0 )
        {
          v25 = &v24[v22 & 0x1FF];
          if ( v25 != 0 && v23 == v25->m_EHandle.m_Index )
          {
            m_pInstance = v25->m_pInstance;
            if ( v25->m_pInstance != 0
              && ((*(m_pInstance->_vptr_IHandleEntity + 140))(v25->m_pInstance) != 0
               || (HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value)) != 0
               && BYTE3(HandleEntity[42]._vptr_IHandleEntity) != 0
               && (m_pInstance = CEntityHandle::GetHandleEntity(&HandleEntity[67]._vptr_IHandleEntity + 1)) != 0
               && (*(m_pInstance->_vptr_IHandleEntity + 140))(m_pInstance) != 0) )
            {
              CTeamRecipientFilter::CTeamRecipientFilter(&filterbroadcast, m_pInstance->m_iTeamNum.m_Value, 0);
              BuildRecipientListForTeamEvent(m_pInstance, &filterbroadcast);
              v50 = (*(m_pInstance->_vptr_IHandleEntity + 393))(m_pInstance);
              SendChatEventMessage(DOTA_CHAT_MESSAGE::CHAT_MESSAGE_RUNE_PICKUP, iRuneType, v50, -1, &filterbroadcast);
              v51.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
              CreateUnitEvent(v51, 0, 10, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_PICKUP_RUNE);
              v52 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(
                      gameeventmanager,
                      "dota_rune_activated_server",
                      0,
                      0);
              v53 = v52;
              if ( v52 != 0 )
              {
                iXPBountya = *(*v52 + 112LL);
                v54 = (*(m_pInstance->_vptr_IHandleEntity + 393))(m_pInstance);
                iXPBountya(v53, "PlayerID", v54);
                (*(*v53 + 112LL))(v53, "rune", iRuneType);
                (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v53, 1);
              }
              filterbroadcast._vptr_IRecipientFilter = &off_3FF4590;
              CRecipientFilter::~CRecipientFilter(&filterbroadcast);
            }
          }
        }
      }
      CResponseCriteriaSet::~CResponseCriteriaSet(&pFilterKeys);
      return;
  }
}


// CDOTA_BaseNPC::AttemptToPurchaseItem  (line 3237, @0x00000000029474c0, libserver.so)  // inlines: CEntityHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CreateEvent, DOTAGameRules, FStrEq, Get, GetAssignedHero, GetBool, GetClassNameAsCStr, GetClassname, GetEntryIndex, GetGameMode, GetHandleEntity, GetInstance, GetInt, GetLeagueID, GetOwnerEntity, GetPlayerOwnerID, GetSerialNumber, GetTeamNumber, GetUnitName, IndexToIdentity, Init, IsAddOnGame, IsConsideredHero, IsFreeCourierMode, IsHero, IsRealHero, LookupEntity, String, ToCStr, ToDOTABaseNPC, ToDOTABaseNPCHero, UseUniversalShopMode, _V_strcmp, operator CBaseEntity*, operator char const*, operator[], ~CUtlVector
// calls: CDOTA_PlayerResource::GetPlayer, DOTAGameManager, CDOTAGameManager::GetAbilityDataByName, CDOTAGameManager::GetAbilityByName, KeyValues::GetInt, CDOTAPlayer::GetAssignedHero, strcmp, CUtlString::Get, CDOTA_PlayerResource::GetGold, CDOTAGamerules::GetGameModeEntity, CDOTAGamerules::GetItemStockCount, IsAppDota2Main (32 total)
// callers: DOTA_ExecuteOrders, CDOTA_Bot_Script::Action_PurchaseItem, CDOTA_BaseNPC_Hero::PurchaseItems
// strings: "ItemPurchasable", "Attempt to purchase '%s' failed\n", "item_courier", "item_flying_courier", "NPC is not near a shop that sells '%s'\n", "dota_item_purchased" (8 total)
DOTA_INVALID_ORDERS __fastcall CDOTA_BaseNPC::AttemptToPurchaseItem(
        CDOTA_BaseNPC *pNPC,
        const char *pszItemName,
        int nPlayerIndex,
        int iForcedInventoryRights)
{
  CDOTAPlayer *Player; // rbx
  int v7; // r15d
  uint32 m_iUnitType; // edx
  unsigned __int16 v9; // cx
  int v10; // edi
  int v11; // eax
  CEntityIdentity *v12; // rcx
  CEntityIdentity *v13; // rcx
  DOTA_INVALID_ORDERS result; // eax
  CDOTAGameManager *v15; // rax
  DOTAAbilityData_t *AbilityDataByName; // r13
  CDOTAGameManager *v17; // rax
  KeyValues *AbilityByName; // rax
  char v19; // al
  CDOTA_BaseNPC_Hero *AssignedHero; // rax
  const char *m_pAsString; // rax
  __int64 v22; // rbx
  const char *v23; // r15
  const char *v24; // rax
  int v25; // eax
  __int64 v26; // rsi
  int v27; // eax
  char v28; // al
  int v29; // ecx
  CDOTABaseGameMode *GameModeEntity; // rax
  int v31; // eax
  int m_Value; // esi
  uint32 v33; // ecx
  CDOTA_BaseNPC_Hero *v34; // rax
  int v35; // eax
  DOTA_INVALID_ORDERS v36; // r12d
  int v37; // eax
  CDOTA_Item *EntBy; // rax
  CDOTA_Item *v39; // r12
  CDOTA_BaseNPC_Hero *HandleEntity; // r13
  CGameRules *v41; // rax
  int v42; // edx
  int v43; // eax
  CDOTA_BaseNPC_Hero *v44; // rax
  CDOTA_Unit_Courier *NthCourierForTeam; // rax
  CDOTA_BaseNPC_Hero *v46; // rax
  int v47; // eax
  int v48; // eax
  bool v49; // al
  int v50; // ecx
  bool v51; // al
  int v52; // ecx
  bool v53; // al
  CDOTA_BaseNPC *v54; // rdx
  CDOTA_BaseNPC_Hero *v55; // rax
  CDOTA_BaseNPC_Hero *v56; // rax
  CEntityIdentity *m_pEntity; // rax
  const char *v58; // rdi
  CDOTA_BaseNPC_Hero *v59; // rax
  int v60; // eax
  CDOTA_UnitInventory *PlayerPreGameInventory; // r12
  int v62; // eax
  CDOTA_Item *Item; // rsi
  CDOTA_BaseNPC_Hero *v64; // rax
  CDOTA_BaseNPC_Hero *v65; // rax
  int v66; // r15d
  int v67; // r12d
  int v68; // eax
  __int64 v69; // r12
  int i; // r15d
  __int64 v71; // rax
  __int64 v72; // r12
  __int64 v73; // rdx
  int v74; // r12d
  int v75; // eax
  int m_iItemCost; // r12d
  int v77; // eax
  CEntityInstance *m_pInstance; // rax
  CDOTA_BaseNPC *pNPCa; // [rsp+0h] [rbp-90h]
  DOTAAbilityData_t *pItemData; // [rsp+8h] [rbp-88h]
  int pOwnerEntity; // [rsp+10h] [rbp-80h]
  CDOTA_BaseNPC_Hero *pOwnerEntitya; // [rsp+10h] [rbp-80h]
  int v83; // [rsp+18h] [rbp-78h]
  int numCouriers; // [rsp+1Ch] [rbp-74h]
  int numCouriersa; // [rsp+1Ch] [rbp-74h]
  int numCouriersb; // [rsp+1Ch] [rbp-74h]
  int numCouriersc; // [rsp+1Ch] [rbp-74h]
  CDOTAPlayer *pPlayer; // [rsp+20h] [rbp-70h]
  int pPlayera; // [rsp+20h] [rbp-70h]
  char iItemAvailability; // [rsp+28h] [rbp-68h]
  unsigned int iItemAvailabilityc; // [rsp+28h] [rbp-68h]
  int iItemAvailabilitya; // [rsp+28h] [rbp-68h]
  CEntityInstance *iItemAvailabilityb; // [rsp+28h] [rbp-68h]
  char pOwnera; // [rsp+30h] [rbp-60h]
  CDOTA_BaseNPC *pOwnerb; // [rsp+30h] [rbp-60h]
  DOTA_INVALID_ORDERS iInventoryRightsa; // [rsp+38h] [rbp-58h]
  void (__fastcall *iInventoryRightsb)(__int64, char *, __int64); // [rsp+38h] [rbp-58h]
  CUtlVector<CDOTA_Item*,CUtlMemory<CDOTA_Item*,int> > resultingItems; // [rsp+40h] [rbp-50h] BYREF

  Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, nPlayerIndex);
  if ( Player == 0 )
    return DOTA_INVALID_ORDERS::DOTA_INVALID_ORDER_NOT_CONTROLLABLE_BY_PLAYER;
  LOBYTE(v7) = 0;
  if ( dota_easybuy.m_pParent->m_Value.m_nValue != 0 )
    v7 = (*(Player->_vptr_IHandleEntity + 521))(Player) ^ 1;
  if ( pNPC != 0 )
  {
    m_iUnitType = pNPC->m_iUnitType;
    if ( (m_iUnitType & 1) != 0 )
    {
      if ( Player->m_hAssignedHero.m_Value.m_Index == -1 )
      {
        v9 = 0x7FFF;
        v10 = 0x7FFF;
      }
      else
      {
        v9 = Player->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
        v10 = v9;
      }
      v11 = (Player->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v9 & 0x7FFF;
      resultingItems.m_Size = v11;
      if ( (v11 + 2) <= 1
        || (v12 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v10 >> 9]) == 0
        || (v13 = &v12[v10 & 0x1FF]) == 0
        || v11 != v13->m_EHandle.m_Index
        || (m_pInstance = v13->m_pInstance, v13->m_pInstance == 0)
        || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
        || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0
        || pNPC != m_pInstance )
      {
        if ( v7 == 0 || (m_iUnitType & 1) == 0 || pNPC->m_bIsIllusion.m_Value )
          return DOTA_INVALID_ORDERS::DOTA_INVALID_ORDER_NOT_CONTROLLABLE_BY_PLAYER;
      }
    }
  }
  v15 = DOTAGameManager();
  AbilityDataByName = CDOTAGameManager::GetAbilityDataByName(v15, pszItemName);
  if ( AbilityDataByName == 0 )
    return DOTA_INVALID_ORDERS::DOTA_INVALID_ORDER_PURCHASE_INVALID_ITEM;
  v17 = DOTAGameManager();
  AbilityByName = CDOTAGameManager::GetAbilityByName(v17, pszItemName);
  if ( AbilityByName != 0 && KeyValues::GetInt(AbilityByName, "ItemPurchasable", 1) == 0 )
    return DOTA_INVALID_ORDERS::DOTA_INVALID_ORDER_PURCHASE_INVALID_ITEM;
  v19 = *(AbilityDataByName + 376);
  if ( (v19 & 4) != 0 )
    return DOTA_INVALID_ORDERS::DOTA_INVALID_ORDER_PURCHASE_INVALID_ITEM;
  if ( (v19 & 2) == 0
    || (result = DOTA_INVALID_ORDERS::DOTA_INVALID_ORDER_PURCHASE_AUTOCOMBINE_RECIPE, AbilityDataByName->m_iItemCost != 0) )
  {
    if ( AbilityDataByName->m_InvalidHeroes.m_Size > 0 && *&g_pGameRules[6].m_szQuestName[68] != 18 )
    {
      AssignedHero = CDOTAPlayer::GetAssignedHero(Player);
      if ( AssignedHero != 0 && (AssignedHero->m_iUnitType & 1) != 0 )
      {
        m_pAsString = AssignedHero->m_iszUnitName.m_Value.u.m_pAsString;
        iItemAvailability = v7;
        pPlayer = Player;
        if ( m_pAsString == 0 )
          m_pAsString = "";
        v22 = 0;
        v23 = m_pAsString;
        while ( 1 )
        {
          v24 = CUtlString::Get(&AbilityDataByName->m_InvalidHeroes.m_Memory.m_pMemory[v22]);
          if ( v23 == v24 || strcmp(v24, v23) == 0 )
            return DOTA_INVALID_ORDERS::DOTA_INVALID_ORDER_CANT_PURCHASE_DISALLOWED_ITEM;
          if ( ++v22 >= AbilityDataByName->m_InvalidHeroes.m_Size )
          {
            LOBYTE(v7) = iItemAvailability;
            Player = pPlayer;
            goto LABEL_38;
          }
        }
      }
      return DOTA_INVALID_ORDERS::DOTA_INVALID_ORDER_NOT_CONTROLLABLE_BY_PLAYER;
    }
LABEL_38:
    if ( AbilityDataByName->m_iItemStockMax <= 0 )
    {
      v31 = (*(Player->_vptr_IHandleEntity + 393))(Player);
      if ( CDOTA_PlayerResource::GetGold(g_pDOTAPlayerResource, v31) >= AbilityDataByName->m_iItemCost || v7 != 0 )
        goto LABEL_41;
    }
    else
    {
      if ( v7 != 0 )
      {
        v25 = (*(Player->_vptr_IHandleEntity + 393))(Player);
        CDOTA_PlayerResource::GetGold(g_pDOTAPlayerResource, v25);
        goto LABEL_41;
      }
      if ( *(AbilityDataByName + 377) < 0 )
      {
        v47 = (*(Player->_vptr_IHandleEntity + 393))(Player);
        if ( CDOTAGamerules::GetItemStockCount(g_pGameRules, -1, pszItemName, v47) == 0 )
          return DOTA_INVALID_ORDERS::DOTA_INVALID_ORDER_ITEM_OUT_OF_STOCK;
      }
      else
      {
        if ( pNPC != 0 )
          m_Value = pNPC->m_iTeamNum.m_Value;
        else
          m_Value = Player->m_iTeamNum.m_Value;
        if ( CDOTAGamerules::GetItemStockCount(g_pGameRules, m_Value, pszItemName, -1) == 0 )
          return DOTA_INVALID_ORDERS::DOTA_INVALID_ORDER_ITEM_OUT_OF_STOCK;
      }
      v48 = (*(Player->_vptr_IHandleEntity + 393))(Player);
      if ( AbilityDataByName->m_iItemCost <= CDOTA_PlayerResource::GetGold(g_pDOTAPlayerResource, v48) )
      {
LABEL_41:
        iItemAvailabilityc = (*(AbilityDataByName + 376) & 8) == 0 ? 1 : 4;
        v26 = iItemAvailabilityc;
        v27 = iItemAvailabilityc | 2;
        if ( (*(AbilityDataByName + 376) & 0x10) == 0 )
          v27 = (*(AbilityDataByName + 376) & 8) == 0 ? 1 : 4;
        iItemAvailabilitya = v27;
        if ( pNPC != 0 )
        {
          v28 = (*(pNPC->_vptr_IHandleEntity + 408))(pNPC, v26, *(AbilityDataByName + 376) & 0x10);
          v29 = v7 != 0 ? 0x3F : 0;
          if ( v28 != 0 )
          {
            v49 = CDOTA_BaseNPC::IsInRangeOfShop(pNPC, DOTA_SHOP_TYPE::DOTA_SHOP_HOME, 0);
            v50 = v7 != 0 ? 0x3F : 0;
            if ( v49 )
              v50 = (v7 != 0 ? 0x3F : 0) | 1;
            numCouriersb = v50;
            v51 = CDOTA_BaseNPC::IsInRangeOfShop(pNPC, DOTA_SHOP_TYPE::DOTA_SHOP_SECRET, 0);
            v52 = numCouriersb;
            if ( v51 )
              v52 = numCouriersb | 4;
            numCouriersc = v52;
            v53 = CDOTA_BaseNPC::IsInRangeOfShop(pNPC, DOTA_SHOP_TYPE::DOTA_SHOP_SIDE, 0);
            v29 = numCouriersc;
            if ( v53 )
              v29 = numCouriersc | 2;
          }
        }
        else
        {
          v29 = (v7 != 0 ? 0x3F : 0) | 1;
        }
        if ( g_pGameRules != 0 )
        {
          numCouriers = v29;
          GameModeEntity = CDOTAGamerules::GetGameModeEntity(g_pGameRules);
          v29 = numCouriers;
          if ( GameModeEntity != 0
            && GameModeEntity->m_bStashPurchasingDisabled.m_Value
            && (numCouriers & iItemAvailabilitya) == 0 )
          {
            return DOTA_INVALID_ORDERS::DOTA_INVALID_ORDER_HOME_SHOP_NOT_IN_RANGE;
          }
        }
        if ( iForcedInventoryRights == 0 )
        {
          if ( (v29 & iItemAvailabilitya) != 0 )
          {
            if ( pNPC != 0 )
            {
              if ( ((iItemAvailabilitya & 4) != 0
                 && CDOTA_BaseNPC::IsInRangeOfShop(pNPC, DOTA_SHOP_TYPE::DOTA_SHOP_SECRET, 0)
                 || (iItemAvailabilitya & 2) != 0
                 && CDOTA_BaseNPC::IsInRangeOfShop(pNPC, DOTA_SHOP_TYPE::DOTA_SHOP_SIDE, 0))
                && !CDOTA_BaseNPC::IsInRangeOfShop(pNPC, DOTA_SHOP_TYPE::DOTA_SHOP_HOME, 0) )
              {
                iForcedInventoryRights = 5;
              }
              else
              {
                iForcedInventoryRights = 7;
              }
            }
            else
            {
              iForcedInventoryRights = 1;
            }
          }
          else
          {
            if ( (iItemAvailabilitya & 1) == 0 && g_pGameRules[6].m_szQuestName[91] == 0 )
            {
              Warning("NPC is not near a shop that sells '%s'\n", pszItemName);
              return (iItemAvailabilitya & 2) == 0 ? 62 : 66;
            }
            iForcedInventoryRights = 10;
          }
        }
        if ( !IsAppDota2Main() && HIDWORD(g_pGameRules[116]._vptr_CGameRules) != 0 )
          goto LABEL_66;
        EntBy = CGameEntitySystem::NextEntByClass<CDOTA_Item>(g_pGameEntitySystem, 0);
        numCouriersa = 0;
        pOwnerEntity = 0;
        if ( EntBy != 0 )
        {
          pNPCa = pNPC;
          v39 = EntBy;
          pItemData = AbilityDataByName;
          do
          {
            if ( !v39->m_bIsClonedItemProxy )
            {
              HandleEntity = CEntityHandle::GetHandleEntity(&v39->m_hOwnerEntity.m_Value);
              if ( HandleEntity != 0 && CDOTAPlayer::GetAssignedHero(Player) == HandleEntity )
              {
                m_pEntity = v39->m_pEntity;
                v58 = "";
                ++pOwnerEntity;
                if ( m_pEntity->m_designerName.u.m_Id != 0 )
                  v58 = m_pEntity->m_designerName.u.m_pAsString;
                numCouriersa += V_stricmp_fast(v58, "item_courier") == 0;
              }
              else if ( v39->m_iPlayerOwnerID.m_Value != -1 )
              {
                v83 = v39->m_iPlayerOwnerID.m_Value;
                pOwnerEntity += (*(Player->_vptr_IHandleEntity + 393))(Player) == v83;
              }
            }
            v39 = CGameEntitySystem::NextEntByClass<CDOTA_Item>(g_pGameEntitySystem, v39);
          }
          while ( v39 != 0 );
          AbilityDataByName = pItemData;
          pNPC = pNPCa;
        }
        if ( pOwnerEntity < dota_max_physical_items_purchase_limit.m_pParent->m_Value.m_nValue )
        {
          v41 = g_pGameRules;
          if ( g_pGameRules != 0 && g_pGameRules[5].m_szQuestName[114] != 0 )
          {
            v42 = *&g_pGameRules[6].m_szQuestName[68];
            if ( v42 == 15 || v42 == 19 )
              goto LABEL_92;
            if ( V_stricmp_fast(pszItemName, "item_courier") == 0 )
              return DOTA_INVALID_ORDERS::DOTA_INVALID_ORDER_CANT_PURCHASE_DISALLOWED_ITEM;
            v41 = g_pGameRules;
            if ( g_pGameRules != 0 && g_pGameRules[5].m_szQuestName[114] != 0 )
            {
LABEL_92:
              v43 = *&v41[6].m_szQuestName[68];
              if ( v43 != 15 && v43 != 19 && V_stricmp_fast(pszItemName, "item_flying_courier") == 0 )
                return DOTA_INVALID_ORDERS::DOTA_INVALID_ORDER_CANT_PURCHASE_DISALLOWED_ITEM;
            }
          }
          if ( V_stricmp_fast(pszItemName, "item_courier") != 0 || CDOTAPlayer::GetAssignedHero(Player) == 0 )
            goto LABEL_66;
          for ( pPlayera = 0; ; ++pPlayera )
          {
            v46 = CDOTAPlayer::GetAssignedHero(Player);
            if ( pPlayera >= CDOTA_PlayerResource::GetNumCouriersForTeam(g_pDOTAPlayerResource, v46->m_iTeamNum.m_Value) )
              break;
            v44 = CDOTAPlayer::GetAssignedHero(Player);
            NthCourierForTeam = CDOTA_PlayerResource::GetNthCourierForTeam(
                                  g_pDOTAPlayerResource,
                                  pPlayera,
                                  v44->m_iTeamNum.m_Value);
            if ( NthCourierForTeam != 0 )
            {
              pOwnerEntitya = CEntityHandle::GetHandleEntity(&NthCourierForTeam->m_hOwnerEntity.m_Value);
              if ( CDOTAPlayer::GetAssignedHero(Player) == pOwnerEntitya || Player == pOwnerEntitya )
                ++numCouriersa;
            }
          }
          if ( numCouriersa < dota_max_courier_purchase_limit.m_pParent->m_Value.m_nValue )
          {
LABEL_66:
            if ( pNPC == 0 )
            {
              resultingItems.m_Size = 0;
              resultingItems.m_Memory.m_pMemory = 0;
              resultingItems.m_Memory.m_nAllocationCount = 0;
              resultingItems.m_Memory.m_nGrowSize = 0;
              v60 = (*(Player->_vptr_IHandleEntity + 393))(Player);
              PlayerPreGameInventory = CDOTA_PlayerResource::GetPlayerPreGameInventory(g_pDOTAPlayerResource, v60);
              if ( PlayerPreGameInventory == 0
                || (v62 = (*(Player->_vptr_IHandleEntity + 393))(Player),
                    Item = DOTA_CreateItem(pszItemName, 0, v62),
                    iItemAvailabilityb = Item,
                    Item == 0) )
              {
                v37 = 33;
                goto LABEL_74;
              }
              v36 = CDOTA_UnitInventory::AddItem(
                      PlayerPreGameInventory,
                      Item,
                      iForcedInventoryRights,
                      -1,
                      &resultingItems,
                      0);
              if ( v36 != DOTA_INVALID_ORDERS::DOTA_ORDER_SUCCESS )
              {
                UTIL_Remove(iItemAvailabilityb);
                goto LABEL_73;
              }
LABEL_147:
              v64 = CDOTAPlayer::GetAssignedHero(Player);
              CDOTA_OGS::LogItemEvent(DOTA_OGS_ItemEvent::DOTA_OGS_ITEMEVENT_PURCHASE, AbilityDataByName, v64);
              v65 = CDOTAPlayer::GetAssignedHero(Player);
              if ( v65 != 0 )
                CDOTA_BaseNPC_Hero::AddItemPurchasedHistory(v65, AbilityDataByName->m_iItemID, resultingItems.m_Size);
              if ( v7 != 0 )
              {
                m_iItemCost = AbilityDataByName->m_iItemCost;
                v77 = (*(Player->_vptr_IHandleEntity + 393))(Player);
                CDOTA_PlayerResource::ModifyGold(g_pDOTAPlayerResource, v77, m_iItemCost, 0, 8);
              }
              v66 = AbilityDataByName->m_iItemCost;
              v67 = 4 - (AbilityDataByName->m_ItemQuality == ItemQuality_t::DOTA_ITEM_QUALITY_CONSUMABLE);
              v68 = (*(Player->_vptr_IHandleEntity + 393))(Player);
              CDOTA_PlayerResource::SpendGold(g_pDOTAPlayerResource, v68, v66, v67);
              if ( (*(AbilityDataByName + 376) & 0x20) != 0 )
              {
                v74 = AbilityDataByName->m_iItemCost;
                v75 = (*(Player->_vptr_IHandleEntity + 393))(Player);
                CDOTA_PlayerResource::AddGoldSpentOnSupport(g_pDOTAPlayerResource, v75, v74);
              }
              v69 = 0;
              for ( i = 0; resultingItems.m_Size > i; ++v69 )
              {
                if ( !CDOTA_Item::IsRecipeGenerated(resultingItems.m_Memory.m_pMemory[v69]) )
                  (*(resultingItems.m_Memory.m_pMemory[v69]->_vptr_IHandleEntity + 335))(
                    resultingItems.m_Memory.m_pMemory[v69],
                    0xFFFFFFFFLL,
                    0);
                ++i;
              }
              v71 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "dota_item_purchased", 0, 0);
              v72 = v71;
              if ( v71 != 0 )
              {
                iInventoryRightsb = *(*v71 + 112LL);
                v73 = (*(Player->_vptr_IHandleEntity + 393))(Player);
                iInventoryRightsb(v72, "PlayerID", v73);
                (*(*v72 + 136LL))(v72, "itemname", pszItemName);
                (*(*v72 + 112LL))(v72, "itemcost", AbilityDataByName->m_iItemCost);
                (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v72, 1);
              }
              v37 = -1;
              goto LABEL_74;
            }
            v33 = pNPC->m_iUnitType;
            if ( (v33 & 2) == 0 )
            {
              resultingItems.m_Size = 0;
              resultingItems.m_Memory.m_pMemory = 0;
              resultingItems.m_Memory.m_nAllocationCount = 0;
              resultingItems.m_Memory.m_nGrowSize = 0;
              if ( (v33 & 0x100) != 0 )
                goto LABEL_69;
              goto LABEL_120;
            }
            if ( pNPC->m_bHasInventory )
            {
              resultingItems.m_Size = 0;
              resultingItems.m_Memory.m_pMemory = 0;
              resultingItems.m_Memory.m_nAllocationCount = 0;
              resultingItems.m_Memory.m_nGrowSize = 0;
              if ( (v33 & 0x100) != 0 )
              {
LABEL_69:
                if ( (iForcedInventoryRights & 1) == 0 )
                {
LABEL_70:
                  v34 = CDOTAPlayer::GetAssignedHero(Player);
                  pNPC = v34;
                  if ( v34 == 0 )
                  {
                    v36 = DOTA_INVALID_ORDERS::DOTA_INVALID_ORDER_PURCHASE_INVALID_ITEM;
                    goto LABEL_73;
                  }
                  v35 = (*(v34->_vptr_IHandleEntity + 414))(v34);
LABEL_72:
                  v36 = CDOTA_BaseNPC::AddItem(pNPC, pszItemName, iForcedInventoryRights, v35, &resultingItems);
                  if ( v36 != DOTA_INVALID_ORDERS::DOTA_ORDER_SUCCESS )
                  {
LABEL_73:
                    Warning("Attempt to purchase '%s' failed\n", pszItemName);
                    v37 = v36;
LABEL_74:
                    iInventoryRightsa = v37;
                    CUtlVectorBase<CDOTA_Item *,CUtlMemory<CDOTA_Item *,int>>::~CUtlVectorBase(&resultingItems);
                    return iInventoryRightsa;
                  }
                  goto LABEL_147;
                }
LABEL_121:
                pOwnera = v33;
                v55 = CDOTAPlayer::GetAssignedHero(Player);
                LOBYTE(v33) = pOwnera;
                v54 = v55;
LABEL_122:
                if ( v7 != 0
                  && (v33 & 1) != 0
                  && (pOwnerb = v54, v56 = CDOTAPlayer::GetAssignedHero(Player), v54 = pOwnerb, pNPC != v56) )
                {
                  v54 = pNPC;
                }
                else if ( v54 == 0 )
                {
                  v37 = 0;
                  goto LABEL_74;
                }
                v35 = (*(v54->_vptr_IHandleEntity + 414))(v54);
                goto LABEL_72;
              }
              if ( pNPC->m_bHasInventory && (iForcedInventoryRights & 1) == 0 )
                goto LABEL_70;
LABEL_120:
              v54 = pNPC;
              if ( (v33 & 3) == 0 )
                goto LABEL_122;
              goto LABEL_121;
            }
            result = DOTA_INVALID_ORDERS::DOTA_INVALID_ORDER_SECRET_SHOP_NOT_IN_RANGE;
            if ( (iItemAvailabilitya & 1) != 0 )
            {
              v59 = CDOTAPlayer::GetAssignedHero(Player);
              return CDOTA_BaseNPC::AttemptToPurchaseItem(v59, pszItemName, nPlayerIndex, 2);
            }
            return result;
          }
        }
        return DOTA_INVALID_ORDERS::DOTA_INVALID_ORDER_CANT_PURCHASE_DISALLOWED_ITEM;
      }
    }
    return DOTA_INVALID_ORDERS::DOTA_INVALID_ORDER_NOT_ENOUGH_GOLD;
  }
  return result;
}


// CDOTA_BaseNPC::SellItem  (line 3622, @0x00000000029034d0, libserver.so)  // inlines: GetAbilityData, GetBool, GetInt
// calls: CDOTA_UnitInventory::FindItemSlotInInventory, CDOTA_UnitInventory::SellItem, CDOTA_OGS::LogItemEvent, CDOTA_BaseNPC::IsInRangeOfShop, CDOTABaseAbility::LoadAbilityData
// callers: DOTA_ExecuteOrders, CDOTA_BotMode_Retreat::Think, CDOTA_Bot_Script::Action_SellItem, CDOTA_BaseNPC::Script_SellItem, CDOTA_BaseNPC::GiveItem, CDOTA_BaseNPC::GiveItems, CDOTA_BaseNPC_Hero::RetrieveItemsFromStash, CDOTA_BaseNPC_Hero::PurchaseItems
void __fastcall CDOTA_BaseNPC::SellItem(CDOTA_BaseNPC *const this, CDOTA_Item *pItem)
{
  CDOTA_BaseNPC::NetworkVar_m_Inventory *p_m_Inventory; // r13
  DOTAAbilityData_t *m_pAbilityData; // rsi

  p_m_Inventory = &this->m_Inventory;
  if ( CDOTA_UnitInventory::FindItemSlotInInventory(&this->m_Inventory, pItem, 2) != -1
    || (*(this->_vptr_IHandleEntity + 408))(this) == 0
    || dota_easybuy.m_pParent->m_Value.m_nValue != 0
    || CDOTA_BaseNPC::IsInRangeOfShop(this, DOTA_SHOP_TYPE::DOTA_SHOP_HOME, 0)
    || CDOTA_BaseNPC::IsInRangeOfShop(this, DOTA_SHOP_TYPE::DOTA_SHOP_SIDE, 0)
    || CDOTA_BaseNPC::IsInRangeOfShop(this, DOTA_SHOP_TYPE::DOTA_SHOP_SECRET, 0) )
  {
    CDOTA_UnitInventory::SellItem(p_m_Inventory, pItem);
    m_pAbilityData = pItem->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(pItem, 0);
      m_pAbilityData = pItem->m_pAbilityData;
    }
    CDOTA_OGS::LogItemEvent(DOTA_OGS_ItemEvent::DOTA_OGS_ITEMEVENT_SELL, m_pAbilityData, this);
  }
}


// CDOTA_BaseNPC::Script_SellItem  (line 3651, @0x00000000029035b0, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTAAbility, ToDOTAItem, ToEnt
// calls: GetScriptDesc<CEntityInstance>, __dynamic_cast, CDOTA_BaseNPC::SellItem
void __fastcall CDOTA_BaseNPC::Script_SellItem(CDOTA_BaseNPC *const this, HSCRIPT hItem)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  const void *v6; // rax
  CDOTA_Item *v7; // rax
  CDOTA_Item *v8; // rbx

  if ( hItem != 0 )
  {
    v4 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v6 = v4(g_pScriptVM, hItem, Script);
    if ( v6 != 0 )
    {
      v7 = __dynamic_cast(v6, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
      v8 = v7;
      if ( v7 != 0 && (*(v7->_vptr_IHandleEntity + 223))(v7) != 0 )
        CDOTA_BaseNPC::SellItem(this, v8);
    }
  }
}


// CDOTA_BaseNPC::DisassembleItem  (line 3660, @0x0000000002903650, libserver.so)  // inlines: GetAbilityData
// calls: CDOTA_UnitInventory::DisassembleItem, CDOTA_OGS::LogItemEvent, CDOTABaseAbility::LoadAbilityData
// callers: DOTA_ExecuteOrders, CDOTA_Bot_Script::Action_DisassembleItem, CDOTA_BaseNPC::Script_DisassembleItem
void __fastcall CDOTA_BaseNPC::DisassembleItem(CDOTA_BaseNPC *const this, CDOTA_Item *pItem)
{
  DOTAAbilityData_t *m_pAbilityData; // rsi

  CDOTA_UnitInventory::DisassembleItem(&this->m_Inventory, pItem);
  m_pAbilityData = pItem->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(pItem, 0);
    m_pAbilityData = pItem->m_pAbilityData;
  }
  CDOTA_OGS::LogItemEvent(DOTA_OGS_ItemEvent::DOTA_OGS_ITEMEVENT_DISASSEMBLE, m_pAbilityData, this);
}


// CDOTA_BaseNPC::Script_DisassembleItem  (line 3675, @0x00000000029036b0, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTAAbility, ToDOTAItem, ToEnt
// calls: GetScriptDesc<CEntityInstance>, __dynamic_cast, CDOTA_BaseNPC::DisassembleItem
void __fastcall CDOTA_BaseNPC::Script_DisassembleItem(CDOTA_BaseNPC *const this, HSCRIPT hItem)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  const void *v6; // rax
  CDOTA_Item *v7; // rax
  CDOTA_Item *v8; // rbx

  if ( hItem != 0 )
  {
    v4 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v6 = v4(g_pScriptVM, hItem, Script);
    if ( v6 != 0 )
    {
      v7 = __dynamic_cast(v6, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
      v8 = v7;
      if ( v7 != 0 && (*(v7->_vptr_IHandleEntity + 223))(v7) != 0 )
        CDOTA_BaseNPC::DisassembleItem(this, v8);
    }
  }
}


// CDOTA_BaseNPC::EjectItemFromStash  (line 3685, @0x0000000002903750, libserver.so)
// calls: CDOTA_UnitInventory::FindItemSlotInInventory, CDOTA_UnitInventory::EjectItemFromStash
// callers: DOTA_ExecuteOrders, CDOTA_BaseNPC::Script_EjectItemFromStash
DOTA_INVALID_ORDERS __fastcall CDOTA_BaseNPC::EjectItemFromStash(CDOTA_BaseNPC *const this, CDOTA_Item *pItem)
{
  CDOTA_BaseNPC::NetworkVar_m_Inventory *p_m_Inventory; // rbx
  int ItemSlotInInventory; // eax
  DOTA_INVALID_ORDERS v5; // edx

  p_m_Inventory = &this->m_Inventory;
  ItemSlotInInventory = CDOTA_UnitInventory::FindItemSlotInInventory(&this->m_Inventory, pItem, 2);
  v5 = DOTA_INVALID_ORDERS::DOTA_INVALID_ORDER_ITEM_NOT_IN_INVENTORY;
  if ( ItemSlotInInventory != -1 )
  {
    CDOTA_UnitInventory::EjectItemFromStash(p_m_Inventory, pItem);
    return DOTA_INVALID_ORDERS::DOTA_ORDER_SUCCESS;
  }
  return v5;
}


// CDOTA_BaseNPC::Script_EjectItemFromStash  (line 3703, @0x00000000029037a0, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTAAbility, ToDOTAItem, ToEnt
// calls: GetScriptDesc<CEntityInstance>, __dynamic_cast, CDOTA_BaseNPC::EjectItemFromStash
void __fastcall CDOTA_BaseNPC::Script_EjectItemFromStash(CDOTA_BaseNPC *const this, HSCRIPT hItem)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  const void *v6; // rax
  CDOTA_Item *v7; // rax
  CDOTA_Item *v8; // rbx

  if ( hItem != 0 )
  {
    v4 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v6 = v4(g_pScriptVM, hItem, Script);
    if ( v6 != 0 )
    {
      v7 = __dynamic_cast(v6, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
      v8 = v7;
      if ( v7 != 0 && (*(v7->_vptr_IHandleEntity + 223))(v7) != 0 )
        CDOTA_BaseNPC::EjectItemFromStash(this, v8);
    }
  }
}


// CDOTA_BaseNPC::Script_RemoveItem  (line 3712, @0x00000000028fc560, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTAAbility, ToDOTAItem, ToEnt
// calls: GetScriptDesc<CEntityInstance>, __dynamic_cast, CDOTA_UnitInventory::RemoveItem
void __fastcall CDOTA_BaseNPC::Script_RemoveItem(CDOTA_BaseNPC *const this, HSCRIPT hItem)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  const void *v6; // rax
  CDOTA_Item *v7; // rax
  CDOTA_Item *v8; // rbx

  if ( hItem != 0 )
  {
    v4 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v6 = v4(g_pScriptVM, hItem, Script);
    if ( v6 != 0 )
    {
      v7 = __dynamic_cast(v6, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
      v8 = v7;
      if ( v7 != 0 && (*(v7->_vptr_IHandleEntity + 223))(v7) != 0 && this->m_bHasInventory )
        CDOTA_UnitInventory::RemoveItem(&this->m_Inventory, v8, 1, 0);
    }
  }
}


// CDOTA_BaseNPC::Script_TakeItem  (line 3721, @0x00000000028fc7a0, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, HScriptToEntity<CBaseEntity>, ToDOTAAbility, ToDOTAItem, ToEnt, ToHScript
// calls: GetScriptDesc<CEntityInstance>, __dynamic_cast, CDOTA_UnitInventory::RemoveItem, CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall CDOTA_BaseNPC::Script_TakeItem(CDOTA_BaseNPC *const this, HSCRIPT hItem)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  const void *v6; // rax
  CDOTA_Item *v7; // rax
  CDOTA_Item *v8; // rbx
  HSCRIPT result; // rax

  if ( hItem == 0 )
    return 0;
  v4 = *(*g_pScriptVM + 208LL);
  Script = GetScriptDesc<CEntityInstance>(0);
  v6 = v4(g_pScriptVM, hItem, Script);
  if ( v6 == 0 )
    return 0;
  v7 = __dynamic_cast(v6, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
  v8 = v7;
  if ( v7 == 0 || (*(v7->_vptr_IHandleEntity + 223))(v7) == 0 )
    return 0;
  if ( this->m_bHasInventory )
    CDOTA_UnitInventory::RemoveItem(&this->m_Inventory, v8, 0, 0);
  result = v8->m_pEntity->m_hPublicScope.m_hScope;
  if ( result == 0 )
  {
    CEntityInstance::CreatePublicScriptScope(v8, 0);
    return v8->m_pEntity->m_hPublicScope.m_hScope;
  }
  return result;
}


// CDOTA_BaseNPC::AddItem  (line 3735, @0x0000000002903840, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetPurchasedWhileDead, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=<bool>
// calls: DOTA_CreateItem, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CDOTA_UnitInventory::AddItem, UTIL_Remove
// callers: OnDemoHeroSpawnComplete, dota_create_item, CDOTA_PlayerResource::OnHeroReplaced, CDOTAPlayer::ClientCommand, CDOTA_Tutorial::GivePlayerItem, OnCreateIllusionsSpawnCompletion, dota_bot_give_item, CDOTA_BaseNPC::Script_AddItemByName, CDOTA_BaseNPC::OnLoadState, CDOTA_BaseNPC::AttemptToPurchaseItem, CDOTA_RoshanSpawner::OnRoshanSpawnCompletion, CDOTA_Ability_Meepo_DividedWeStand::OnInventoryContentsChanged (13 total)
// globals: CEntityHandle::gm_pEntityList
DOTA_INVALID_ORDERS __fastcall CDOTA_BaseNPC::AddItem(
        CDOTA_BaseNPC *const this,
        const char *pszItemName,
        int inventoryRights,
        int nOwnerPlayerID,
        CUtlVector<CDOTA_Item*,CUtlMemory<CDOTA_Item*,int> > *pResultingItems)
{
  int v5; // r15d
  CDOTA_Item *Item; // rbx
  DOTA_INVALID_ORDERS result; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  int v14; // r15d
  DOTA_INVALID_ORDERS v15; // r12d
  CEntityInstance *m_pInstance; // rdi
  int v17[16]; // [rsp+0h] [rbp-40h] BYREF

  v5 = nOwnerPlayerID;
  if ( nOwnerPlayerID == -1 )
    v5 = (*(this->_vptr_IHandleEntity + 414))(this);
  Item = DOTA_CreateItem(pszItemName, this, v5);
  result = DOTA_INVALID_ORDERS::DOTA_INVALID_ORDER_PURCHASE_INVALID_ITEM;
  if ( Item != 0 )
  {
    if ( g_pDOTAPlayerResource != 0
      && (CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(v17, g_pDOTAPlayerResource, v5), (v17[0] + 2) > 1)
      && (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v17[0]) >> 9) & 0x3F]) != 0
      && (v13 = &v12[v17[0] & 0x1FF]) != 0
      && v17[0] == v13->m_EHandle.m_Index
      && (m_pInstance = v13->m_pInstance, v13->m_pInstance != 0)
      && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
    {
      v14 = (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) ^ 1;
    }
    else
    {
      LOBYTE(v14) = 1;
    }
    if ( v14 != Item->m_bPurchasedWhileDead.m_Value )
    {
      (*(Item->_vptr_IHandleEntity + 22))(Item, 992, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      Item->m_bPurchasedWhileDead.m_Value = v14;
    }
    v15 = CDOTA_UnitInventory::AddItem(&this->m_Inventory, Item, inventoryRights, -1, pResultingItems, 0);
    result = DOTA_INVALID_ORDERS::DOTA_ORDER_SUCCESS;
    if ( v15 != DOTA_INVALID_ORDERS::DOTA_ORDER_SUCCESS )
    {
      UTIL_Remove(Item);
      return v15;
    }
  }
  return result;
}


// CDOTA_BaseNPC::Script_AddItemByName  (line 3756, @0x0000000002917780, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, EntityToHScript, Get, GetPublicScriptScope, Purge, RemoveAll, ToHScript, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_BaseNPC::AddItem, CUtlMemory<CDOTA_Item*, int>::Purge, CEntityInstance::CreatePublicScriptScope, CUtlVectorBase<CDOTA_Item*, CUtlMemory<CDOTA_Item*, int> >::~CUtlVectorBase, _Unwind_Resume
HSCRIPT __fastcall CDOTA_BaseNPC::Script_AddItemByName(CDOTA_BaseNPC *const this, const char *pszItemName)
{
  CDOTA_Item *v2; // rbx
  HSCRIPT result; // rax
  HSCRIPT v4; // [rsp+8h] [rbp-38h]
  CUtlVector<CDOTA_Item*,CUtlMemory<CDOTA_Item*,int> > vecResultingItems; // [rsp+10h] [rbp-30h] BYREF

  vecResultingItems.m_Size = 0;
  vecResultingItems.m_Memory.m_pMemory = 0;
  vecResultingItems.m_Memory.m_nAllocationCount = 0;
  vecResultingItems.m_Memory.m_nGrowSize = 0;
  CDOTA_BaseNPC::AddItem(this, pszItemName, 3, -1, &vecResultingItems);
  if ( vecResultingItems.m_Size == 0
    || (v2 = *vecResultingItems.m_Memory.m_pMemory, *vecResultingItems.m_Memory.m_pMemory == 0) )
  {
    result = 0;
    vecResultingItems.m_Size = 0;
    if ( (vecResultingItems.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      return result;
    goto LABEL_8;
  }
  result = v2->m_pEntity->m_hPublicScope.m_hScope;
  if ( result == 0 )
  {
    CEntityInstance::CreatePublicScriptScope(*vecResultingItems.m_Memory.m_pMemory, 0);
    result = v2->m_pEntity->m_hPublicScope.m_hScope;
  }
  vecResultingItems.m_Size = 0;
  if ( (vecResultingItems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
LABEL_8:
    v4 = result;
    CUtlMemory<CDOTA_Item *,int>::Purge(&vecResultingItems.m_Memory);
    result = v4;
    if ( (vecResultingItems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CDOTA_Item *,int>::Purge(&vecResultingItems.m_Memory);
      return v4;
    }
  }
  return result;
}


// CDOTA_BaseNPC::Script_AddItem  (line 3771, @0x00000000028fc930, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, HScriptToEntity<CBaseEntity>, ToDOTAAbility, ToDOTAItem, ToEnt, ToHScript
// calls: GetScriptDesc<CEntityInstance>, __dynamic_cast, CDOTA_UnitInventory::AddItem, CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall CDOTA_BaseNPC::Script_AddItem(CDOTA_BaseNPC *const this, HSCRIPT hItem)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  const void *v6; // rax
  CDOTA_Item *v7; // rax
  CDOTA_Item *v8; // rbx
  HSCRIPT result; // rax

  if ( hItem == 0 )
    return 0;
  v4 = *(*g_pScriptVM + 208LL);
  Script = GetScriptDesc<CEntityInstance>(0);
  v6 = v4(g_pScriptVM, hItem, Script);
  if ( v6 == 0 )
    return 0;
  v7 = __dynamic_cast(v6, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
  v8 = v7;
  if ( v7 == 0 || (*(v7->_vptr_IHandleEntity + 223))(v7) == 0 )
    return 0;
  CDOTA_UnitInventory::AddItem(&this->m_Inventory, v8, 3, -1, 0, 0);
  result = v8->m_pEntity->m_hPublicScope.m_hScope;
  if ( result == 0 )
  {
    CEntityInstance::CreatePublicScriptScope(v8, 0);
    return v8->m_pEntity->m_hPublicScope.m_hScope;
  }
  return result;
}


// CDOTA_BaseNPC::Script_AddAbility  (line 3786, @0x00000000029070c0, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, ToHScript
// calls: CDOTA_BaseNPC::GetAbilityByIndex, DOTA_CreateAbility, CDOTA_BaseNPC::SetAbilityByIndex, DevMsg(char const*,...), CEntityInstance::CreatePublicScriptScope
// callers: CDOTA_Modifier_Life_Stealer_Infest_Creep::OnCreated
// strings: "AddAbility - Unit doesn't have empty slot for ability %s.\n", "AddAbility - Failed to create ability %s.\n"
HSCRIPT __fastcall CDOTA_BaseNPC::Script_AddAbility(CDOTA_BaseNPC *const this, const char *pszAbilityName)
{
  int v4; // ebx
  CDOTABaseAbility *Ability; // rax
  CEntityInstance *v6; // r14
  HSCRIPT result; // rax

  if ( pszAbilityName == 0 )
    return 0;
  v4 = 0;
  while ( CDOTA_BaseNPC::GetAbilityByIndex(this, v4) != 0 )
  {
    if ( ++v4 == 24 )
    {
      DevMsg("AddAbility - Unit doesn't have empty slot for ability %s.\n", pszAbilityName);
      return 0;
    }
  }
  Ability = DOTA_CreateAbility(pszAbilityName, this);
  v6 = Ability;
  if ( Ability != 0 )
  {
    CDOTA_BaseNPC::SetAbilityByIndex(this, Ability, v4);
    (*(v6->_vptr_IHandleEntity + 262))(v6);
    result = v6->m_pEntity->m_hPublicScope.m_hScope;
    if ( result == 0 )
    {
      CEntityInstance::CreatePublicScriptScope(v6, 0);
      return v6->m_pEntity->m_hPublicScope.m_hScope;
    }
  }
  else
  {
    DevMsg("AddAbility - Failed to create ability %s.\n", pszAbilityName);
    return 0;
  }
  return result;
}


// CDOTA_BaseNPC::Script_SwapItems  (line 3822, @0x00000000028f5d80, libserver.so)
// calls: CDOTA_UnitInventory::SwapItems
void __fastcall CDOTA_BaseNPC::Script_SwapItems(CDOTA_BaseNPC *const this, int nSlot1, int nSlot2)
{
  CDOTA_BaseNPC::NetworkVar_m_Inventory *p_m_Inventory; // rdi

  p_m_Inventory = &this->m_Inventory;
  if ( p_m_Inventory != 0 )
    CDOTA_UnitInventory::SwapItems(p_m_Inventory, nSlot1, nSlot2);
}


// CDOTA_BaseNPC::Script_RemoveAbility  (line 3831, @0x0000000002923ca0, libserver.so)  // inlines: CEntityHandle, CHandle, CreateEvent, NetworkStateChanged, RemoveAbilityFromIndex, Set, operator=
// calls: CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::GetAbilityByIndex, memcmp, UTIL_Remove, DevMsg(char const*,...)
// callers: CDOTA_BaseNPC_Creature::RemoveCreatureAbility, CDOTA_Modifier_Life_Stealer_Infest_Creep::OnDominated
// strings: "dota_portrait_ability_layout_changed", "RemoveAbility - Unit does not have ability %s.\n"
void __fastcall CDOTA_BaseNPC::Script_RemoveAbility(CDOTA_BaseNPC *const this, const char *pszAbilityName)
{
  CDOTABaseAbility *AbilityByName; // r13
  unsigned int v5; // ebx
  __int64 v6; // rax
  uint32 s2[12]; // [rsp+0h] [rbp-30h] BYREF

  if ( pszAbilityName != 0 )
  {
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, pszAbilityName, 0);
    if ( AbilityByName == 0 )
      DevMsg("RemoveAbility - Unit does not have ability %s.\n", pszAbilityName);
    v5 = 0;
    while ( AbilityByName != CDOTA_BaseNPC::GetAbilityByIndex(this, v5) )
    {
      if ( ++v5 == 24 )
        return;
    }
    s2[0] = -1;
    if ( memcmp(&this->m_hAbilities.m_Value[v5], s2, 4u) != 0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 2960, v5, 0xFFFFFFFFLL);
      this->m_hAbilities.m_Value[v5].m_Index = s2[0];
    }
    UTIL_Remove(AbilityByName);
    v6 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "dota_portrait_ability_layout_changed", 0, 0);
    if ( v6 != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v6, 0);
  }
}


// CDOTA_BaseNPC::Script_HasAbility  (line 3861, @0x0000000002924010, libserver.so)
// calls: CDOTA_BaseNPC::FindAbilityByName
bool __fastcall CDOTA_BaseNPC::Script_HasAbility(CDOTA_BaseNPC *const this, const char *pszAbilityName)
{
  bool result; // al

  result = 0;
  if ( pszAbilityName != 0 )
    return CDOTA_BaseNPC::FindAbilityByName(this, pszAbilityName, 0) != 0;
  return result;
}


// CDOTA_BaseNPC::MoveItem  (line 3874, @0x0000000002903b90, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetParent, GetPlayerOwnerID, GetSerialNumber, IndexToIdentity, Init, IsCourier, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero
// calls: CGameSceneNode::GetOwnerEntity, CDOTA_UnitInventory::FindItemSlotInInventory, CDOTA_BaseNPC::IsInRangeOfShop, CDOTA_UnitInventory::MoveItem, CEntityHandle::GetHandleEntity, CDOTA_BaseNPC::GiveItem
// callers: DOTA_ExecuteOrders, CDOTA_BaseNPC::OnLoadState, CDOTA_Ability_Meepo_DividedWeStand::OnInventoryContentsChanged
void __fastcall CDOTA_BaseNPC::MoveItem(CDOTA_BaseNPC *const this, CDOTA_Item *pItem, int slot)
{
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  CDOTA_BaseNPC *v7; // r14
  bool v8; // r13
  unsigned int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // rdx
  uint32 m_iUnitType; // eax
  unsigned __int16 v13; // dx
  int v14; // esi
  uint32 v15; // eax
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  int m_Value; // r14d
  char v19; // al
  char v20; // al
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *HandleEntity; // rax
  unsigned int v23; // [rsp+0h] [rbp-50h]
  unsigned int v25; // [rsp+8h] [rbp-48h]
  unsigned int v26; // [rsp+Ch] [rbp-44h]

  v25 = slot - 9;
  v26 = slot - 15;
  while ( 1 )
  {
    m_pParent = pItem->m_pGameSceneNode->m_pParent;
    if ( m_pParent == 0 )
      break;
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    v7 = OwnerEntity;
    if ( OwnerEntity == 0 || !OwnerEntity->m_bIsDOTANPC )
      break;
    v8 = (CDOTA_UnitInventory::FindItemSlotInInventory(&OwnerEntity[4].m_iTextureFrameIndex, pItem, 3) - 9) <= 5;
    LOBYTE(v9) = CDOTA_BaseNPC::IsInRangeOfShop(this, DOTA_SHOP_TYPE::DOTA_SHOP_HOME, 0);
    v11 = v9;
    if ( (this->m_iUnitType & 1) == 0
      || this != v7
      || (v23 = v9, v19 = (*(this->_vptr_IHandleEntity + 408))(this), v11 = v23, v19 != 0)
      || (this->m_iUnitType & 1) == 0
      || (v20 = (*(this->_vptr_IHandleEntity + 438))(this), v11 = v23, v20 != 0) )
    {
      if ( (v8 || v25 <= 5) && v11 == 0 )
        break;
    }
    if ( v26 <= 1 )
      break;
    if ( v25 <= 5 && (*(pItem->_vptr_IHandleEntity + 355))(pItem, v10, v11) == 2 )
    {
      m_Value = pItem->m_iPlayerOwnerID.m_Value;
      if ( (*(this->_vptr_IHandleEntity + 414))(this) != m_Value )
        break;
    }
    m_iUnitType = this->m_iUnitType;
    if ( (m_iUnitType & 0x100) == 0 && ((m_iUnitType & 2) == 0 || !this->m_bHasInventory) )
      goto LABEL_15;
    if ( !v8 )
    {
      if ( v25 > 5 )
      {
LABEL_15:
        CDOTA_UnitInventory::MoveItem(&this->m_Inventory, pItem, slot);
        return;
      }
      HandleEntity = CEntityHandle::GetHandleEntity(&pItem->m_hOwnerEntity.m_Value);
      if ( HandleEntity != 0 && HandleEntity->m_bIsDOTANPC )
        CDOTA_BaseNPC::GiveItem(this, pItem, HandleEntity, 2, slot);
      return;
    }
    if ( v25 > 5 )
    {
      v21 = CEntityHandle::GetHandleEntity(&pItem->m_hOwnerEntity.m_Value);
      if ( v21 != 0 && v21->m_bIsDOTANPC )
        CDOTA_BaseNPC::GiveItem(v21, pItem, this, 1, slot);
      return;
    }
    if ( pItem->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v13 = 0x7FFF;
      v14 = 0x7FFF;
    }
    else
    {
      v13 = pItem->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v14 = v13;
    }
    v15 = (pItem->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v13 & 0x7FFF;
    if ( v15 + 2 > 1 )
    {
      v16 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v14 >> 9];
      if ( v16 != 0 )
      {
        v17 = &v16[v14 & 0x1FF];
        if ( v17 != 0 && v15 == v17->m_EHandle.m_Index )
        {
          this = v17->m_pInstance;
          if ( v17->m_pInstance != 0 && this->m_bIsDOTANPC )
            continue;
        }
      }
    }
    return;
  }
}


// CDOTA_BaseNPC::SetItemCombineLocked  (line 3980, @0x00000000029039b0, libserver.so)  // inlines: NetworkStateChanged, Set, SetCombineLocked, operator=<bool>
// calls: CDOTA_BaseNPC::IsInRangeOfShop, CDOTA_UnitInventory::CheckPendingCombines
// callers: DOTA_ExecuteOrders
void __fastcall CDOTA_BaseNPC::SetItemCombineLocked(CDOTA_BaseNPC *const this, CDOTA_Item *pItem, bool bCombineLocked)
{
  int v6; // r12d
  int v7; // eax

  if ( bCombineLocked != pItem->m_bCombineLocked.m_Value )
  {
    (*(pItem->_vptr_IHandleEntity + 22))(pItem, 980, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    pItem->m_bCombineLocked.m_Value = bCombineLocked;
  }
  if ( !bCombineLocked )
  {
    v6 = !CDOTA_BaseNPC::IsInRangeOfShop(this, DOTA_SHOP_TYPE::DOTA_SHOP_HOME, 0) ? 1 : 3;
    do
      v7 = (*(this->_vptr_IHandleEntity + 414))(this);
    while ( CDOTA_UnitInventory::CheckPendingCombines(&this->m_Inventory, v6, v7, 0, 0) );
  }
}


// CDOTA_BaseNPC::GiveItem  (line 4001, @0x0000000002903a60, libserver.so)
// calls: CDOTA_UnitInventory::FindItemSlotInInventory, CDOTA_UnitInventory::GetItemInSlot, CDOTA_BaseNPC::SellItem, CDOTA_UnitInventory::RemoveItem, CDOTA_BaseNPC::IsInRangeOfShop, CDOTA_UnitInventory::AddItem
// callers: CDOTABehaviorCommandMoveToNPCToGive::Update, CDOTA_BaseNPC::MoveItem, CDOTA_Modifier_Courier_TakeStashItems::GrabStashItems, CDOTA_Modifier_Courier_ReturnStashItems::OnIntervalThink
void __fastcall CDOTA_BaseNPC::GiveItem(
        CDOTA_BaseNPC *const this,
        CDOTA_Item *pItem,
        CDOTA_BaseNPC *pNPC,
        int inventoryRights,
        int iSuggestedSlot)
{
  int ItemSlotInInventory; // r15d
  CDOTA_BaseNPC::NetworkVar_m_Inventory *p_m_Inventory; // [rsp+18h] [rbp-38h]

  if ( pNPC != 0 && pItem != 0 && pNPC != this )
  {
    if ( (pNPC->m_iUnitType & 0x200) != 0 )
    {
      CDOTA_BaseNPC::SellItem(this, pItem);
    }
    else
    {
      p_m_Inventory = &this->m_Inventory;
      ItemSlotInInventory = CDOTA_UnitInventory::FindItemSlotInInventory(&this->m_Inventory, pItem, 3);
      if ( ItemSlotInInventory != -1
        && (iSuggestedSlot == -1 || CDOTA_UnitInventory::GetItemInSlot(&pNPC->m_Inventory, iSuggestedSlot) == 0) )
      {
        CDOTA_UnitInventory::RemoveItem(p_m_Inventory, pItem, 0, 0);
        if ( CDOTA_BaseNPC::IsInRangeOfShop(pNPC, DOTA_SHOP_TYPE::DOTA_SHOP_HOME, 0) )
          inventoryRights |= 5u;
        if ( CDOTA_UnitInventory::AddItem(&pNPC->m_Inventory, pItem, inventoryRights, iSuggestedSlot, 0, 0) != DOTA_INVALID_ORDERS::DOTA_ORDER_SUCCESS )
          CDOTA_UnitInventory::AddItem(
            p_m_Inventory,
            pItem,
            (ItemSlotInInventory - 9) < 7 ? 2 : 5,
            ItemSlotInInventory,
            0,
            1);
      }
    }
  }
}


// CDOTA_BaseNPC::GiveItems  (line 4058, @0x0000000002903ea0, libserver.so)  // inlines: Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CDOTA_Item*, operator CEntityInstance*, operator[]
// calls: CDOTA_BaseNPC::SellItem, CDOTA_UnitInventory::RemoveItem, CDOTA_UnitInventory::AddItems, CDOTA_UnitInventory::AddItem
// callers: CDOTA_Modifier_Courier_TransferItems::OnIntervalThink
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC::GiveItems(
        CDOTA_BaseNPC *const this,
        CUtlVector<CHandle<CDOTA_Item>,CUtlMemory<CHandle<CDOTA_Item>,int> > *pItems,
        CDOTA_BaseNPC *pNPC,
        int inventoryRights)
{
  int m_Size; // eax
  unsigned __int64 v8; // r13
  __int64 v9; // r14
  CDOTA_Item *m_pInstance; // rsi
  CHandle<CDOTA_Item> *v11; // rdx
  uint32 m_Index; // eax
  __int16 v13; // cx
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CDOTA_BaseNPC::NetworkVar_m_Inventory *p_m_Inventory; // r15
  unsigned __int64 v17; // r14
  CDOTA_Item *v18; // rsi
  CHandle<CDOTA_Item> *v19; // rcx
  uint32 v20; // edx
  __int16 v21; // di
  CEntityIdentity *v22; // rcx
  CEntityIdentity *v23; // rcx
  unsigned __int64 v24; // r13
  CDOTA_BaseNPC::NetworkVar_m_Inventory *v25; // r12
  __int64 v26; // r14
  CHandle<CDOTA_Item> *v27; // rdx
  uint32 v28; // eax
  __int16 v29; // cx
  CEntityIdentity *v30; // rdx
  CEntityIdentity *v31; // rdx
  CDOTA_Item *v32; // rsi
  __int64 v34; // [rsp+8h] [rbp-38h]

  if ( pNPC != 0 && pItems != 0 && pNPC != this )
  {
    m_Size = pItems->m_Size;
    if ( (pNPC->m_iUnitType & 0x200) != 0 )
    {
      if ( m_Size > 0 )
      {
        v8 = 0;
        v9 = 4LL * (m_Size - 1) + 4;
        do
        {
          m_pInstance = 0;
          v11 = &pItems->m_Memory.m_pMemory[v8 / 4];
          m_Index = v11->m_Index;
          if ( v11->m_Index + 2 > 1 )
          {
            v13 = v11->m_Index;
            v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v11->m_Index) >> 9) & 0x3F];
            if ( v14 != 0 )
            {
              v15 = &v14[v13 & 0x1FF];
              if ( v15 != 0 && m_Index == v15->m_EHandle.m_Index )
                m_pInstance = v15->m_pInstance;
            }
          }
          v8 += 4LL;
          CDOTA_BaseNPC::SellItem(this, m_pInstance);
        }
        while ( v8 != v9 );
      }
    }
    else
    {
      if ( m_Size > 0 )
      {
        p_m_Inventory = &this->m_Inventory;
        v17 = 0;
        v34 = 4LL * (m_Size - 1) + 4;
        do
        {
          v18 = 0;
          v19 = &pItems->m_Memory.m_pMemory[v17 / 4];
          v20 = v19->m_Index;
          if ( v19->m_Index + 2 > 1 )
          {
            v21 = v19->m_Index;
            v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v19->m_Index) >> 9) & 0x3F];
            if ( v22 != 0 )
            {
              v23 = &v22[v21 & 0x1FF];
              if ( v23 != 0 && v20 == v23->m_EHandle.m_Index )
                v18 = v23->m_pInstance;
            }
          }
          CDOTA_UnitInventory::RemoveItem(p_m_Inventory, v18, 0, 0);
          v17 += 4LL;
        }
        while ( v17 != v34 );
      }
      CDOTA_UnitInventory::AddItems(&pNPC->m_Inventory, pItems, inventoryRights);
      if ( pItems->m_Size > 0 )
      {
        v24 = 0;
        v25 = &this->m_Inventory;
        v26 = 4LL * (pItems->m_Size - 1) + 4;
        do
        {
          v27 = &pItems->m_Memory.m_pMemory[v24 / 4];
          v28 = v27->m_Index;
          if ( v27->m_Index + 2 > 1 )
          {
            v29 = v27->m_Index;
            v30 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v27->m_Index) >> 9) & 0x3F];
            if ( v30 != 0 )
            {
              v31 = &v30[v29 & 0x1FF];
              if ( v31 != 0 && v28 == v31->m_EHandle.m_Index )
              {
                v32 = v31->m_pInstance;
                if ( v31->m_pInstance != 0 && (v32->m_pEntity->m_flags & 0x200) == 0 )
                  CDOTA_UnitInventory::AddItem(v25, v32, 1, -1, 0, 1);
              }
            }
          }
          v24 += 4LL;
        }
        while ( v24 != v26 );
      }
    }
  }
}


// CDOTA_BaseNPC::QueueOrder  (line 4116, @0x000000000292b760, libserver.so)
// calls: CUtlQueue<CUnitOrders, CUtlMemory<CUnitOrders, int> >::Insert
// callers: DOTA_ExecuteOrders
void __fastcall CDOTA_BaseNPC::QueueOrder(CDOTA_BaseNPC *const this, CUnitOrders *const orders)
{
  CUtlQueue<CUnitOrders,CUtlMemory<CUnitOrders,int>>::Insert(&this->m_QueuedOrders, orders);
}


// CDOTA_BaseNPC::GetNextQueuedOrder  (line 4124, @0x000000000292b850, libserver.so)  // inlines: CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, Count, Destruct<CUnitOrders>, Next_Unchecked, Purge, RemoveAll, RemoveAtHead, Reset, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::SetCount, CUtlMemory<CEntityIndex, int>::Purge, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTABehaviorCommandMoveToNPC::Update, CDOTABehaviorCommandMoveToPosition::Update, CDOTABehaviorCommandPatrol::OnStart, CDOTABehaviorIdle::OnStartInternal, CDOTABehaviorIdle::Update
CUnitOrders *__fastcall CDOTA_BaseNPC::GetNextQueuedOrder(CDOTA_BaseNPC *const this)
{
  __int64 m_head; // r14
  QueueIter_t m_tail; // eax
  int v4; // eax
  __int64 v5; // r14
  char *v6; // r13
  vec_t z; // xmm0_4
  int v8; // r15d
  unsigned __int64 v9; // rax
  CUtlMemory<CEntityIndex,int> *v10; // r14
  float v11; // xmm0_4
  int32 v12; // eax
  float v13; // xmm0_4
  bool v14; // zf
  QueueIter_t v15; // eax
  QueueIter_t v16; // edx
  CUnitOrders *p_m_CurrentQueuedOrder; // r13
  int m_Size; // r14d
  unsigned __int64 v19; // rdx
  int v20; // eax
  vec_t v21; // xmm0_4
  int32 v22; // eax
  int v24; // [rsp+0h] [rbp-70h]
  int v25; // [rsp+4h] [rbp-6Ch]
  CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int> > count; // [rsp+8h] [rbp-68h] BYREF
  int v27; // [rsp+20h] [rbp-50h]
  int32 v28; // [rsp+24h] [rbp-4Ch]
  int32 v29; // [rsp+28h] [rbp-48h]
  vec_t x; // [rsp+2Ch] [rbp-44h]
  vec_t y; // [rsp+30h] [rbp-40h]
  vec_t v32; // [rsp+34h] [rbp-3Ch]
  bool v33; // [rsp+38h] [rbp-38h]

  m_head = this->m_QueuedOrders.m_head;
  if ( m_head == -1 )
    return 0;
  m_tail = this->m_QueuedOrders.m_tail;
  v4 = m_head <= m_tail ? m_tail + 1 - m_head : this->m_QueuedOrders.m_memory.m_nAllocationCount + m_tail + 1 - m_head;
  if ( v4 == 0 )
    return 0;
  v5 = m_head << 6;
  v33 = 0;
  v6 = this->m_QueuedOrders.m_memory.m_pMemory + v5;
  count.m_Size = 0;
  count.m_Memory.m_pMemory = 0;
  count.m_Memory.m_nAllocationCount = 0;
  count.m_Memory.m_nGrowSize = 0;
  x = vec3_origin.x;
  y = vec3_origin.y;
  z = vec3_origin.z;
  v27 = 0;
  v28 = 0;
  v32 = z;
  v29 = 0;
  v24 = *v6;
  v25 = *(v6 + 1);
  if ( &count == (v6 + 8) )
  {
    v10 = v6;
  }
  else
  {
    v8 = *(v6 + 2);
    CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::SetCount(&count, v8);
    if ( v8 > 0 )
    {
      v9 = 0;
      do
      {
        count.m_Memory.m_pMemory[v9 / 4].m_Data = *(*(v6 + 2) + v9);
        v9 += 4LL;
      }
      while ( v9 != 4LL * (v8 - 1) + 4 );
    }
    v10 = (this->m_QueuedOrders.m_memory.m_pMemory + v5);
  }
  v11 = *(v6 + 11);
  v27 = *(v6 + 8);
  v28 = *(v6 + 9);
  v12 = *(v6 + 10);
  x = v11;
  y = *(v6 + 12);
  v13 = *(v6 + 13);
  v29 = v12;
  LOBYTE(v12) = v6[56];
  v32 = v13;
  v33 = v12;
  v14 = (v10[1].m_nGrowSize & 0xC0000000) == 0;
  v10->m_nAllocationCount = 0;
  if ( v14 )
  {
    CUtlMemory<CEntityIndex,int>::Purge(v10 + 1);
    if ( (v10[1].m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(v10 + 1);
  }
  v15 = this->m_QueuedOrders.m_head;
  if ( v15 == this->m_QueuedOrders.m_tail )
  {
    this->m_QueuedOrders.m_tail = QueueIter_t::QUEUE_ITERATOR_INVALID;
    this->m_QueuedOrders.m_head = QueueIter_t::QUEUE_ITERATOR_INVALID;
  }
  else
  {
    v16 = 0;
    if ( v15 != this->m_QueuedOrders.m_memory.m_nAllocationCount - 1 )
      v16 = v15 + 1;
    this->m_QueuedOrders.m_head = v16;
  }
  p_m_CurrentQueuedOrder = &this->m_CurrentQueuedOrder;
  this->m_CurrentQueuedOrder.m_nIssuerPlayerIndex = v24;
  this->m_CurrentQueuedOrder.m_nOrderSequenceNumber = v25;
  if ( &this->m_CurrentQueuedOrder.m_nUnits != &count )
  {
    m_Size = count.m_Size;
    CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::SetCount(
      &this->m_CurrentQueuedOrder.m_nUnits,
      count.m_Size);
    if ( m_Size > 0 )
    {
      v19 = 0;
      do
      {
        this->m_CurrentQueuedOrder.m_nUnits.m_Memory.m_pMemory[v19 / 4].m_Data = count.m_Memory.m_pMemory[v19 / 4].m_Data;
        v19 += 4LL;
      }
      while ( v19 != 4LL * (m_Size - 1) + 4 );
    }
  }
  v20 = v27;
  count.m_Size = 0;
  v14 = (count.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_CurrentQueuedOrder.m_vPosition.x = x;
  v21 = y;
  this->m_CurrentQueuedOrder.m_nOrderType = v20;
  v22 = v28;
  this->m_CurrentQueuedOrder.m_vPosition.y = v21;
  this->m_CurrentQueuedOrder.m_vPosition.z = v32;
  this->m_CurrentQueuedOrder.m_nTargetIndex.m_Data = v22;
  this->m_CurrentQueuedOrder.m_nAbilityIndex.m_Data = v29;
  this->m_CurrentQueuedOrder.m_bQueue = v33;
  if ( v14 )
  {
    CUtlMemory<CEntityIndex,int>::Purge(&count.m_Memory);
    if ( (count.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(&count.m_Memory);
  }
  return p_m_CurrentQueuedOrder;
}


// CDOTA_BaseNPC::PeekNextQueuedOrder  (line 4136, @0x00000000029040e0, libserver.so)  // inlines: Count, Head, operator[]
// callers: CDOTABehaviorCommandMoveToPosition::Update, CDOTABehaviorCommandPatrol::OnStart
const CUnitOrders *__fastcall CDOTA_BaseNPC::PeekNextQueuedOrder(CDOTA_BaseNPC *const this)
{
  QueueIter_t m_head; // edx
  const CUnitOrders *result; // rax
  QueueIter_t m_tail; // ecx
  int v4; // ecx

  m_head = this->m_QueuedOrders.m_head;
  result = 0;
  if ( m_head != QueueIter_t::QUEUE_ITERATOR_INVALID )
  {
    m_tail = this->m_QueuedOrders.m_tail;
    if ( m_head <= m_tail )
      v4 = m_tail + 1 - m_head;
    else
      v4 = this->m_QueuedOrders.m_memory.m_nAllocationCount + m_tail + 1 - m_head;
    result = 0;
    if ( v4 != 0 )
      return &this->m_QueuedOrders.m_memory.m_pMemory[m_head];
  }
  return result;
}


// CDOTA_BaseNPC::PeekLastQueuedOrder  (line 4147, @0x0000000002904130, libserver.so)  // inlines: CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, Count, Reset, Tail, operator=, operator[]
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: DOTA_ExecuteOrders
// globals: `guard variable for'CUtlQueue<CUnitOrders,CUtlMemory<CUnitOrders,int>>::Tail(void)::dummy, CUtlQueue<CUnitOrders,CUtlMemory<CUnitOrders,int>>::Tail(void)::dummy, __dso_handle, CUnitOrders::~CUnitOrders()
const CUnitOrders *__fastcall CDOTA_BaseNPC::PeekLastQueuedOrder(CDOTA_BaseNPC *const this)
{
  QueueIter_t m_head; // ecx
  const CUnitOrders *result; // rax
  QueueIter_t m_tail; // ebx
  __int32 v4; // edx
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4

  m_head = this->m_QueuedOrders.m_head;
  result = 0;
  if ( m_head != QueueIter_t::QUEUE_ITERATOR_INVALID )
  {
    m_tail = this->m_QueuedOrders.m_tail;
    v4 = m_tail + 1 - m_head;
    if ( m_head > m_tail )
      v4 += this->m_QueuedOrders.m_memory.m_nAllocationCount;
    if ( v4 != 0 )
    {
      if ( m_tail == QueueIter_t::QUEUE_ITERATOR_INVALID )
      {
        if ( `guard variable for'CUtlQueue<CUnitOrders,CUtlMemory<CUnitOrders,int>>::Tail(void)::dummy == 0
          && __cxa_guard_acquire(&`guard variable for'CUtlQueue<CUnitOrders,CUtlMemory<CUnitOrders,int>>::Tail(void)::dummy) != 0 )
        {
          CUtlQueue<CUnitOrders,CUtlMemory<CUnitOrders,int>>::Tail(void)const::dummy = -1;
          dword_4C47AC8 = 0;
          qword_4C47AD0 = 0;
          dword_4C47AD8 = 0;
          dword_4C47ADC = 0;
          dword_4C47AC4 = 0;
          dword_4C47AEC = LODWORD(vec3_origin.x);
          y = vec3_origin.y;
          dword_4C47AE0 = 0;
          dword_4C47AF0 = LODWORD(y);
          z = vec3_origin.z;
          dword_4C47AE4 = 0;
          dword_4C47AF4 = LODWORD(z);
          dword_4C47AE8 = 0;
          byte_4C47AF8 = 0;
          __cxa_guard_release(&`guard variable for'CUtlQueue<CUnitOrders,CUtlMemory<CUnitOrders,int>>::Tail(void)::dummy);
          __cxa_atexit(
            CUnitOrders::~CUnitOrders,
            &CUtlQueue<CUnitOrders,CUtlMemory<CUnitOrders,int>>::Tail(void)const::dummy,
            &_dso_handle);
        }
        return &CUtlQueue<CUnitOrders,CUtlMemory<CUnitOrders,int>>::Tail(void)const::dummy;
      }
      else
      {
        return &this->m_QueuedOrders.m_memory.m_pMemory[m_tail];
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}


// CDOTA_BaseNPC::HasQueuedOrders  (line 4158, @0x0000000002904280, libserver.so)  // inlines: Count
// callers: CDOTABehaviorCommandMoveToNPC::Update, CDOTABehaviorCommandPatrol::OnStart, CDOTA_Modifier_Courier_TransferItems::OnDestroy, CDOTA_Unit_Courier::OnIdleChanged
bool __fastcall CDOTA_BaseNPC::HasQueuedOrders(CDOTA_BaseNPC *const this)
{
  QueueIter_t m_head; // eax
  QueueIter_t m_tail; // edx
  int v3; // edx

  m_head = this->m_QueuedOrders.m_head;
  if ( m_head == QueueIter_t::QUEUE_ITERATOR_INVALID )
    return 0;
  m_tail = this->m_QueuedOrders.m_tail;
  if ( m_head <= m_tail )
    v3 = m_tail + 1 - m_head;
  else
    v3 = this->m_QueuedOrders.m_memory.m_nAllocationCount + m_tail + 1 - m_head;
  return v3 > 0;
}


// CDOTA_BaseNPC::ClearQueuedOrders  (line 4166, @0x00000000029042d0, libserver.so)  // inlines: RemoveAll
// callers: DOTA_ExecuteOrders, CDOTABehaviorAbilityChannel::OnEnd, CDOTABehaviorPet::Vanish, CDOTABehaviorGameEnd::OnStart, CDOTABehaviorDie::OnStart, CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::OnCreated
void __fastcall CDOTA_BaseNPC::ClearQueuedOrders(CDOTA_BaseNPC *const this)
{
  this->m_QueuedOrders.m_tail = QueueIter_t::QUEUE_ITERATOR_INVALID;
  this->m_QueuedOrders.m_head = QueueIter_t::QUEUE_ITERATOR_INVALID;
}


// CDOTA_BaseNPC::SetPseudoQueuedOrder  (line 4174, @0x000000000292b780, libserver.so)  // inlines: operator=
// calls: CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::SetCount
// callers: DOTA_ExecuteOrders, CDOTA_Modifier_PhantomLancer_Juxtapose::OnAttacked, CDOTA_Ability_Juggernaut_HealingWard::OnSpellStart, CDOTA_Ability_PhantomLancer_SpiritLance::OnProjectileHit_ExtraData, CDOTA_Modifier_Shadow_Demon_Disruption::OnDestroy, CDOTA_Modifier_MonkeyKing_FurArmy_Soldier::OnCreated, CDOTA_Ability_Tusk_FrozenSigil::OnSpellStart, CDOTA_Ability_Terrorblade_Reflection::OnSpellStart
void __fastcall CDOTA_BaseNPC::SetPseudoQueuedOrder(CDOTA_BaseNPC *const this, CUnitOrders *const orders)
{
  CCopyableUtlVector<CEntityIndex> *p_m_nUnits; // rdi
  int m_Size; // r13d
  unsigned __int64 v6; // rax

  p_m_nUnits = &this->m_PseudoQueuedOrders.m_nUnits;
  p_m_nUnits[-1].m_Memory.m_nAllocationCount = orders->m_nIssuerPlayerIndex;
  p_m_nUnits[-1].m_Memory.m_nGrowSize = orders->m_nOrderSequenceNumber;
  if ( p_m_nUnits != &orders->m_nUnits )
  {
    m_Size = orders->m_nUnits.m_Size;
    CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::SetCount(p_m_nUnits, m_Size);
    if ( m_Size > 0 )
    {
      v6 = 0;
      do
      {
        this->m_PseudoQueuedOrders.m_nUnits.m_Memory.m_pMemory[v6 / 4].m_Data = orders->m_nUnits.m_Memory.m_pMemory[v6 / 4].m_Data;
        v6 += 4LL;
      }
      while ( v6 != 4LL * (m_Size - 1) + 4 );
    }
  }
  this->m_PseudoQueuedOrders.m_nOrderType = orders->m_nOrderType;
  this->m_PseudoQueuedOrders.m_nTargetIndex.m_Data = orders->m_nTargetIndex.m_Data;
  this->m_PseudoQueuedOrders.m_nAbilityIndex.m_Data = orders->m_nAbilityIndex.m_Data;
  this->m_PseudoQueuedOrders.m_vPosition.x = orders->m_vPosition.x;
  this->m_PseudoQueuedOrders.m_vPosition.y = orders->m_vPosition.y;
  this->m_PseudoQueuedOrders.m_vPosition.z = orders->m_vPosition.z;
  this->m_PseudoQueuedOrders.m_bQueue = orders->m_bQueue;
}


// CDOTA_BaseNPC::ClearPseudoQueuedOrder  (line 4182, @0x0000000002904420, libserver.so)
// calls: CDOTA_BaseNPC::UpdatePseudoQueuedOrder
// callers: DOTA_ExecuteOrders, CDOTABehaviorAbilityChannel::OnEnd, CDOTABehaviorPet::Vanish, CDOTABehaviorGameEnd::OnStart, CDOTABehaviorDie::OnStart, CDOTA_Ability_NianCharge::OnSpellStart, CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::OnSpellStart
void __fastcall CDOTA_BaseNPC::ClearPseudoQueuedOrder(CDOTA_BaseNPC *const this)
{
  this->m_PseudoQueuedOrders.m_nOrderType = 0;
  CDOTA_BaseNPC::UpdatePseudoQueuedOrder(this, 1);
}


// CDOTA_BaseNPC::SetReturningHome  (line 4191, @0x00000000029042f0, libserver.so)
// calls: CBaseEntity::GetAbsOrigin, FindClearSpaceForUnit
// callers: CDOTABehaviorNeutralHome::OnEnd, CDOTABehaviorNeutralHome::OnSuspend, CDOTABehaviorNeutralHome::Update
void __fastcall CDOTA_BaseNPC::SetReturningHome(CDOTA_BaseNPC *const this, bool bIsReturningHome)
{
  Vector v3; // 0:xmm0_8.8,8:xmm1_4.4

  if ( bIsReturningHome || !this->m_bIsReturningHome )
  {
    this->m_bIsReturningHome = bIsReturningHome;
  }
  else
  {
    this->m_bIsReturningHome = 0;
    v3 = *CBaseEntity::GetAbsOrigin(this);
    FindClearSpaceForUnit(this, v3, 0);
  }
}


// CDOTA_BaseNPC::UpdatePseudoQueuedOrder  (line 4206, @0x0000000002904340, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetForceAttackTarget, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: DOTA_ExecuteOrders
// callers: CDOTABehaviorCommandMoveToPositionToCast::OnEnd, CDOTABehaviorCommandMoveToTargetToCast::OnEnd, CDOTABehaviorAbilityPhase::OnEnd, CDOTABehaviorAttack::OnStart, CDOTABehaviorAttackPhase::OnEnd, CDOTABehaviorAttackPhase::OnStart, CDOTABehaviorAbilityPhase::BeginCast, CDOTABehaviorAbilityPhase::Update, CDOTABehaviorCommandMoveToPositionToCast::Update, CDOTABehaviorCommandMoveToTargetToCast::Update, CDOTABehaviorIdle::OnStartInternal, CDOTA_BaseNPC::ClearPseudoQueuedOrder (32 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC::UpdatePseudoQueuedOrder(CDOTA_BaseNPC *const this, bool bAllowedToExecuteOrders)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx

  if ( (this->m_nUnitState64.m_Value & 0x20) != 0
    || this->m_bCastLocked
    || (m_Index = this->m_hForceAttackTarget.m_Index) + 2 > 1
    && (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hForceAttackTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v5 = &v4[this->m_hForceAttackTarget.m_Index & 0x1FF]) != 0
    && m_Index == v5->m_EHandle.m_Index
    && v5->m_pInstance != 0
    && BYTE3(v5->m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    this->m_bPseudoQueueOrders = 1;
  }
  else
  {
    this->m_bPseudoQueueOrders = 0;
    if ( bAllowedToExecuteOrders && this->m_PseudoQueuedOrders.m_nOrderType != 0 )
    {
      DOTA_ExecuteOrders(&this->m_PseudoQueuedOrders, 0, 0, 0);
      this->m_PseudoQueuedOrders.m_nOrderType = 0;
    }
  }
}


// CDOTA_BaseNPC::GatherStates  (line 4219, @0x0000000002904a10, libserver.so)
// calls: CDOTA_ModifierManager::CheckAllStates, CDOTA_BaseNPC::AddState, CDOTA_BaseNPC::RemoveState
// callers: CDOTABehaviorAbilityChannel::OnEnd, CDOTA_BaseNPC::UnitThink, CDOTA_BaseNPC::GainedModifier, CDOTA_BaseNPC::LostModifier, CDOTA_Modifier_Invoker_Tornado::OnDestroy
void __fastcall CDOTA_BaseNPC::GatherStates(CDOTA_BaseNPC *const this)
{
  uint64 v2; // rax
  unsigned __int64 m_Value; // r13
  uint64 v4; // r15
  uint64 v5; // r13
  uint v6; // r12d
  __int64 v7; // rbx

  v2 = CDOTA_ModifierManager::CheckAllStates(&this->m_ModifierManager, 0);
  m_Value = this->m_nUnitState64.m_Value;
  v4 = v2;
  if ( v2 != m_Value )
  {
    v5 = v2 ^ m_Value;
    v6 = 0;
    v7 = 1;
    while ( 1 )
    {
      if ( (v5 & v7) == 0 )
        goto LABEL_4;
      if ( (v4 & v7) != 0 )
      {
        CDOTA_BaseNPC::AddState(this, v6);
LABEL_4:
        ++v6;
        v7 *= 2;
        if ( v6 == 35 )
          return;
      }
      else
      {
        CDOTA_BaseNPC::RemoveState(this, v6++);
        v7 *= 2;
        if ( v6 == 35 )
          return;
      }
    }
  }
}


// CDOTA_BaseNPC::AddState  (line 4247, @0x0000000002904590, libserver.so)  // inlines: AddObstructionProperty, CEntityHandle, CHandle, CModifierParams, Get, GetCurrentActiveAbility, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, NetworkStateChanged, Set, SetUnit, operator=, operator|=<long long unsigned int>
// calls: FireModifierEvent, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::InterruptChannel, CDOTA_BaseNPC::UpdatePseudoQueuedOrder
// callers: CDOTA_BaseNPC::GatherStates
// globals: jpt_2904722
void __fastcall CDOTA_BaseNPC::AddState(CDOTA_BaseNPC *const this, uint nState)
{
  unsigned __int64 m_Value; // rax
  unsigned __int64 v5; // rbx
  CEntityIdentity *m_pEntity; // rdx
  __int16 v7; // cx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  ObstructionRecord_t *m_pObstructionRecord; // rdx
  int v14; // eax
  CEntityInstance *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // r9
  CModifierParams params; // [rsp+0h] [rbp-B0h] BYREF

  m_Value = this->m_nUnitState64.m_Value;
  v5 = m_Value | (1LL << nState);
  if ( m_Value != v5 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2784, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    m_pEntity = this->m_pEntity;
    params.bCraniumBasherTested = 0;
    this->m_nUnitState64.m_Value = v5;
    params.ability.m_Index = -1;
    params.fDamage = 0.0;
    params.bHeartRegenApplied = 0;
    params.fOriginalDamage = 0.0;
    params.nActivity = -1;
    params.bTooltip = 0;
    params.nTooltipParam = 0;
    params.bIgnoreInvis = 0;
    params.bNoCooldown = 0;
    params.bReincarnate = 0;
    params.bDoNotConsume = 0;
    params.fDistance = 0.0;
    params.inflictor.m_Index = -1;
    params.nDamageflags = 0;
    params.nDamageCategory = 0;
    memset(&params.pOrb, 0, 24);
    params.bDiffusalApplied = 0;
    params.bChainLightningConsidered = 0;
    params.bSuppressDamage = 0;
    params.bRangedAttack = 0;
    params.nPlayerids_stick = 0;
    params.hattacker.m_Index = -1;
    params.htarget.m_Index = -1;
    params.hunit.m_Index = -1;
    if ( m_pEntity != 0 )
    {
      v7 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      params.hunit.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v7 & 0x7FFF;
    }
    FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_STATE_CHANGED, &params);
    switch ( nState )
    {
      case 3u:
        v15 = CEntityHandle::operator CEntityInstance *(&this->m_hActiveAbility);
        if ( v15 != 0
          && (*(v15->_vptr_IHandleEntity + 223))(
               v15,
               v17,
               v15->_vptr_IHandleEntity,
               v16,
               v18,
               v19,
               *&params.ability.m_Index,
               *&params.fOriginalDamage,
               *&params.bTooltip,
               *&params.bIgnoreInvis) == 0 )
        {
          CDOTA_BaseNPC::InterruptChannel(this);
        }
        break;
      case 5u:
        CDOTA_BaseNPC::UpdatePseudoQueuedOrder(this, 1);
        CDOTA_BaseNPC::InterruptChannel(this);
        break;
      case 0x18u:
      case 0x21u:
        (*(this->_vptr_INextBotEventResponder + 60))(
          &this->INextBot,
          v10,
          v8,
          v9,
          v11,
          v12,
          *&params.ability.m_Index,
          *&params.fOriginalDamage,
          *&params.bTooltip,
          *&params.bIgnoreInvis);
        break;
      case 0x19u:
        m_pObstructionRecord = this->m_pObstructionRecord;
        v14 = this->m_nObstructionProperties | 4;
        this->m_nObstructionProperties = v14;
        if ( m_pObstructionRecord != 0 )
          m_pObstructionRecord->m_ObjectProperties = v14;
        break;
      default:
        return;
    }
  }
}


// CDOTA_BaseNPC::RemoveState  (line 4295, @0x00000000029047e0, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, GetEHandle, GetEntryIndex, GetSerialNumber, NetworkStateChanged, RemoveObstructionProperty, Set, SetUnit, operator&=<long long unsigned int>, operator=
// calls: FireModifierEvent, CDOTA_BaseNPC::IsPhased, CBaseEntity::GetAbsOrigin, FindClearSpaceForUnit, CDOTA_BaseNPC::UpdatePseudoQueuedOrder
// callers: CDOTA_BaseNPC::GatherStates, CDOTA_Modifier_Obsidian_Destroyer_AstralImprisonment_Prison::OnDestroy, CDOTA_Modifier_Shadow_Demon_Disruption::OnDestroy, CDOTA_Modifier_Techies_DeployRemoteMine::OnDestroy, CDOTA_Modifier_Techies_RemoteMine::OnIntervalThink
// globals: jpt_2904974
void __fastcall CDOTA_BaseNPC::RemoveState(CDOTA_BaseNPC *const this, uint nState)
{
  unsigned __int64 m_Value; // rax
  unsigned __int64 v5; // rbx
  CEntityIdentity *m_pEntity; // rdx
  __int16 v7; // cx
  ObstructionRecord_t *m_pObstructionRecord; // rdx
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  CModifierParams params; // [rsp+0h] [rbp-B0h] BYREF
  Vector v16; // 0:xmm0_8.8,8:xmm1_4.4

  m_Value = this->m_nUnitState64.m_Value;
  v5 = m_Value & __ROL8__(-2, nState);
  if ( m_Value != v5 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2784, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    m_pEntity = this->m_pEntity;
    params.bCraniumBasherTested = 0;
    this->m_nUnitState64.m_Value = v5;
    params.ability.m_Index = -1;
    params.fDamage = 0.0;
    params.bHeartRegenApplied = 0;
    params.fOriginalDamage = 0.0;
    params.nActivity = -1;
    params.bTooltip = 0;
    params.nTooltipParam = 0;
    params.bIgnoreInvis = 0;
    params.bNoCooldown = 0;
    params.bReincarnate = 0;
    params.bDoNotConsume = 0;
    params.fDistance = 0.0;
    params.inflictor.m_Index = -1;
    params.nDamageflags = 0;
    params.nDamageCategory = 0;
    memset(&params.pOrb, 0, 24);
    params.bDiffusalApplied = 0;
    params.bChainLightningConsidered = 0;
    params.bSuppressDamage = 0;
    params.bRangedAttack = 0;
    params.nPlayerids_stick = 0;
    params.hattacker.m_Index = -1;
    params.htarget.m_Index = -1;
    params.hunit.m_Index = -1;
    if ( m_pEntity != 0 )
    {
      v7 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      params.hunit.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v7 & 0x7FFF;
    }
    FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_STATE_CHANGED, &params);
    switch ( nState )
    {
      case 5u:
        CDOTA_BaseNPC::UpdatePseudoQueuedOrder(this, 1);
        break;
      case 0x18u:
      case 0x19u:
      case 0x21u:
        if ( !CDOTA_BaseNPC::IsPhased(this) )
        {
          m_pObstructionRecord = this->m_pObstructionRecord;
          v9 = this->m_nObstructionProperties & 0xFFFFFFFB;
          this->m_nObstructionProperties = v9;
          if ( m_pObstructionRecord != 0 )
            m_pObstructionRecord->m_ObjectProperties = v9;
        }
        goto LABEL_10;
      case 0x1Fu:
LABEL_10:
        v16 = *CBaseEntity::GetAbsOrigin(this);
        FindClearSpaceForUnit(this, v16, 0);
        (*(this->_vptr_INextBotEventResponder + 60))(
          &this->INextBot,
          v12,
          v10,
          v11,
          v13,
          v14,
          *&params.ability.m_Index,
          *&params.fOriginalDamage,
          *&params.bTooltip,
          *&params.bIgnoreInvis);
        break;
      default:
        return;
    }
  }
}


// CDOTA_BaseNPC::UnitThink  (line 4344, @0x0000000002904ec0, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, DOTAGameRules, EnterScope, GetElapsed, GetModifier_Constant_Additive, GetModifier_Constant_Highest, GetModifier_Percentage_Additive, GetModifier_Percentage_Highest, GetTimebaseRegister, InTargetThread, IsEnabled, IsGamePaused, IsListeningToEvent, ModifierManagerThink, NetworkStateChanged, PLAT_CPU_TIME, Set, Think, curtime, operator*=<float>, operator+=<double>, operator+=<float>, operator=<bool>, operator=<double>, operator=<int>, ~CMicroProfilerGuard, ~CVProfScope
// calls: CBaseEntity::ThinkSet, CDOTA_Speech::Think, CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal, CBaseAnimating::SetModelScale, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, floor, CDOTA_ModifierManager::GetModifier_Percentage_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTA_BaseNPC::GatherStates, CDOTA_BaseNPC::UpdateDamageEventQueue, CVProfile::ExitScope, ThreadGetCurrentId (17 total)
// callers: CDOTA_BaseNPC_Creep_Neutral::UnitThink, CDOTA_BaseNPC_Creep_Lane::UnitThink, CDOTA_BaseNPC_HallofFame::UnitThink, CDOTA_Unit_Nian_Attachment::UnitThink, CDOTA_Unit_Nian::UnitThink, CDOTA_Unit_Roshan::UnitThink
// strings: "CDOTA_BaseNPC::UnitThink"
void __fastcall CDOTA_BaseNPC::UnitThink(CDOTA_BaseNPC *const this)
{
  int m_enabled; // r8d
  bool v3; // r15
  CGlobalVars *v4; // r13
  float m_flCurrentTime; // xmm0_4
  int m_nNextRegenThink; // eax
  int tickcount; // edx
  int m_nNextModifierThink; // eax
  int v9; // edx
  int m_nNextUnitThink; // eax
  int v11; // edx
  bool v12; // zf
  CDOTA_Speech *m_pSpeech; // rdi
  __int64 v14; // rax
  double v15; // xmm0_8
  float m_fModelScaleMultiplier; // xmm1_4
  __int64 v17; // rax
  float Modifier_Constant_Highest_Internal; // xmm0_4
  int (**v19)(...); // rax
  int v20; // r14d
  int v21; // r14d
  double v22; // xmm0_8
  __int64 v23; // rax
  double v24; // xmm0_8
  int v25; // r14d
  __int64 v26; // rax
  float Modifier_Percentage_Highest_Internal; // xmm0_4
  int m_Value; // eax
  int v29; // r14d
  __int64 v30; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  int v32; // eax
  int v33; // r14d
  double v34; // xmm0_8
  __int64 v35; // rax
  double v36; // xmm0_8
  int v37; // eax
  int v38; // r14d
  __int64 v39; // rax
  float Modifier_Percentage_Additive_Internal; // xmm0_4
  int v41; // eax
  int v42; // r13d
  char v43; // r13
  void (__fastcall *m_pfnWarningFunc)(__int64); // rax
  ThreadId_t m_TargetThreadId; // r14
  unsigned __int64 v46; // r13
  unsigned __int64 v47; // rax
  uint64 m_numTimeBaseTicks; // rcx
  uint64 v49; // rcx
  int (**vptr_IHandleEntity)(...); // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v52; // rax
  double v53; // [rsp+8h] [rbp-38h]
  double v54; // [rsp+8h] [rbp-38h]

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v46 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_BaseNPC::UnitThink" )
      {
        m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "CDOTA_BaseNPC::UnitThink", 0, "NPCs", 4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v52 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v52->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    v47 = __rdtsc();
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    v49 = m_numTimeBaseTicks - v46;
    v4 = gpGlobals;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v49 + (v47 | (HIDWORD(v47) << 32));
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_62:
    m_flCurrentTime = 0.0;
    goto LABEL_5;
  }
  v4 = gpGlobals;
  if ( gpGlobals == 0 )
    goto LABEL_62;
LABEL_3:
  if ( !v4->m_bEnableAssertions && !v4->m_bInSimulation )
  {
    m_pfnWarningFunc = v4->m_pfnWarningFunc;
    if ( m_pfnWarningFunc != 0 )
      m_pfnWarningFunc(1);
  }
  m_flCurrentTime = v4->m_flCurrentTime;
LABEL_5:
  CBaseEntity::ThinkSet(this, 0xC09uLL, m_flCurrentTime, 1182249421, 0);
  if ( g_pGameRules != 0 && g_pGameRules[19].m_szQuestName[29] != 0 )
  {
LABEL_7:
    if ( !v3 )
      return;
LABEL_56:
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return;
  }
  m_nNextRegenThink = this->m_nNextRegenThink;
  if ( m_nNextRegenThink > 0 && (tickcount = gpGlobals->tickcount, m_nNextRegenThink <= tickcount) )
  {
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    this->m_nNextRegenThink = ((0.1 / gpGlobals->interval_per_tick) + 0.5) + tickcount;
    vptr_IHandleEntity[415](this);
    m_nNextModifierThink = this->m_nNextModifierThink;
    if ( m_nNextModifierThink <= 0 )
    {
LABEL_13:
      m_nNextUnitThink = this->m_nNextUnitThink;
      if ( m_nNextUnitThink < 0 )
        goto LABEL_7;
      goto LABEL_14;
    }
  }
  else
  {
    m_nNextModifierThink = this->m_nNextModifierThink;
    if ( m_nNextModifierThink <= 0 )
      goto LABEL_13;
  }
  v9 = gpGlobals->tickcount;
  if ( m_nNextModifierThink > v9 )
    goto LABEL_13;
  this->m_nNextModifierThink = v9;
  CDOTA_ModifierManager::Think(&this->m_ModifierManager);
  m_nNextUnitThink = this->m_nNextUnitThink;
  if ( m_nNextUnitThink < 0 )
    goto LABEL_7;
LABEL_14:
  v11 = gpGlobals->tickcount;
  if ( m_nNextUnitThink > v11 )
    goto LABEL_7;
  v12 = !this->m_bHasInventory;
  this->m_nNextUnitThink = ((0.1 / gpGlobals->interval_per_tick) + 0.5) + v11;
  if ( !v12 )
    CDOTA_UnitInventory::Think(&this->m_Inventory);
  m_pSpeech = this->m_Speech.m_pSpeech;
  if ( m_pSpeech != 0 )
    CDOTA_Speech::Think(m_pSpeech);
  v14 = this->m_ModifierManager.m_buffsForModifiers[153];
  if ( v14 == 0xFF || this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v14].m_Size <= 0 )
    *&v15 = 1065353216;
  else
    *&v15 = CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal(
              &this->m_ModifierManager,
              modifierfunction::MODIFIER_PROPERTY_MODEL_SCALE,
              &CModifierParams::s_Default);
  m_fModelScaleMultiplier = this->m_fModelScaleMultiplier;
  *&v15 = ((*&v15 - m_fModelScaleMultiplier) * 0.1) + m_fModelScaleMultiplier;
  this->m_fModelScaleMultiplier = *&v15;
  *&v15 = *&v15 * this->m_flBaselineModelScale;
  CBaseAnimating::SetModelScale(this, v15, m_fModelScaleMultiplier);
  v17 = this->m_ModifierManager.m_buffsForModifiers[9];
  if ( v17 == 0xFF || this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v17].m_Size <= 0 )
    Modifier_Constant_Highest_Internal = 0.0;
  else
    Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                           &this->m_ModifierManager,
                                           modifierfunction::MODIFIER_PROPERTY_INVISIBILITY_LEVEL,
                                           &CModifierParams::s_Default);
  v19 = this->_vptr_IHandleEntity;
  this->m_flInvisibilityLevel = Modifier_Constant_Highest_Internal;
  v20 = v19[416](this);
  if ( v20 != this->m_iDamageMin.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 3396, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iDamageMin.m_Value = v20;
  }
  v21 = (*(this->_vptr_IHandleEntity + 417))(this);
  if ( v21 != this->m_iDamageMax.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 3400, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iDamageMax.m_Value = v21;
  }
  v22 = floor((this->m_iDamageMin.m_Value + v21) * 0.5);
  v23 = this->m_ModifierManager.m_buffsForModifiers[34];
  v53 = v22;
  if ( v23 == 0xFF || this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v23].m_Size <= 0 )
    v24 = 0.0;
  else
    v24 = (CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal(
             &this->m_ModifierManager,
             modifierfunction::MODIFIER_PROPERTY_BASEDAMAGEOUTGOING_PERCENTAGE,
             &CModifierParams::s_Default)
         - 1.0);
  v25 = (v24 * v53);
  if ( v25 != this->m_iDamageBonus.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 3404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iDamageBonus.m_Value = v25;
  }
  v26 = this->m_ModifierManager.m_buffsForModifiers[35];
  if ( v26 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v26].m_Size > 0 )
  {
    Modifier_Percentage_Highest_Internal = CDOTA_ModifierManager::GetModifier_Percentage_Highest_Internal(
                                             &this->m_ModifierManager,
                                             modifierfunction::MODIFIER_PROPERTY_BASEDAMAGEOUTGOING_PERCENTAGE_UNIQUE,
                                             &CModifierParams::s_Default);
    m_Value = this->m_iDamageBonus.m_Value;
    v29 = m_Value * Modifier_Percentage_Highest_Internal;
    if ( m_Value != v29 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 3404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_iDamageBonus.m_Value = v29;
    }
  }
  v30 = this->m_ModifierManager.m_buffsForModifiers[0];
  if ( v30 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v30].m_Size > 0 )
  {
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            &this->m_ModifierManager,
                                            modifierfunction::MODIFIER_PROPERTY_PREATTACK_BONUS_DAMAGE,
                                            &CModifierParams::s_Default);
    v32 = this->m_iDamageBonus.m_Value;
    v33 = v32 + Modifier_Constant_Additive_Internal;
    if ( v32 != v33 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 3404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_iDamageBonus.m_Value = v33;
    }
  }
  v34 = floor((this->m_iDamageMax.m_Value + this->m_iDamageMin.m_Value) * 0.5);
  v35 = this->m_ModifierManager.m_buffsForModifiers[28];
  v54 = v34;
  if ( v35 == 0xFF || this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v35].m_Size <= 0 )
    v36 = 0.0;
  else
    v36 = (CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal(
             &this->m_ModifierManager,
             modifierfunction::MODIFIER_PROPERTY_DAMAGEOUTGOING_PERCENTAGE,
             &CModifierParams::s_Default)
         - 1.0);
  v37 = this->m_iDamageBonus.m_Value;
  v38 = v37 + (v36 * v54);
  if ( v37 != v38 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 3404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iDamageBonus.m_Value = v38;
  }
  v39 = this->m_ModifierManager.m_buffsForModifiers[29];
  if ( v39 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v39].m_Size > 0 )
  {
    Modifier_Percentage_Additive_Internal = CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal(
                                              &this->m_ModifierManager,
                                              modifierfunction::MODIFIER_PROPERTY_DAMAGEOUTGOING_PERCENTAGE_ILLUSION,
                                              &CModifierParams::s_Default);
    v41 = this->m_iDamageBonus.m_Value;
    v42 = v41 * Modifier_Percentage_Additive_Internal;
    if ( v41 != v42 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 3404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_iDamageBonus.m_Value = v42;
    }
  }
  if ( (*(this->_vptr_IHandleEntity + 376))(this) != 0 )
    v43 = *((*(this->_vptr_IHandleEntity + 376))(this) + 144);
  else
    v43 = 0;
  if ( v43 != this->m_bIsMoving.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2184, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bIsMoving.m_Value = v43;
  }
  CDOTA_BaseNPC::GatherStates(this);
  CDOTA_BaseNPC::UpdateDamageEventQueue(this);
  if ( v3 )
    goto LABEL_56;
}


// CDOTA_BaseNPC::PerformMovementLean  (line 4401, @0x0000000002904aa0, libserver.so)  // inlines: Approach, DOTAGameRules, GetBool, GetFloat, GetGameFrameTime, GetInt, SimpleSplineRemapValClamped
// calls: CBaseAnimating::SetPoseParameter
// callers: CDOTA_BaseNPC::UpdateServerSideAnimation
void __fastcall CDOTA_BaseNPC::PerformMovementLean(CDOTA_BaseNPC *const this)
{
  float v1; // xmm1_4
  int m_nPoseParameterTurn; // esi
  float m_Value; // xmm2_4
  int m_nValue; // eax
  float v5; // xmm1_4
  float v6; // xmm0_4
  __int64 v7; // xmm0_8
  __int64 frametime_low; // xmm1_8
  __int64 m_flLean_low; // xmm2_8
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  __int64 v13; // xmm3_8

  m_nPoseParameterTurn = this->m_nPoseParameterTurn;
  if ( m_nPoseParameterTurn < 0 )
    return;
  if ( dota_unit_lean_enable.m_pParent->m_Value.m_nValue == 0 )
  {
    this->m_flLean = 0.0;
    CBaseAnimating::SetPoseParameter(this, m_nPoseParameterTurn, COERCE_DOUBLE(0x80000000LL), v1);
    return;
  }
  m_Value = this->m_anglediff.m_Value;
  m_nValue = dota_unit_lean_angle.m_pParent->m_Value.m_nValue;
  v5 = m_nValue;
  v6 = -m_nValue;
  if ( m_nValue == v6 )
  {
    v7 = 1056964608;
    if ( m_Value >= v5 )
      goto LABEL_6;
    goto LABEL_5;
  }
  v10 = m_Value - v6;
  v11 = v5 - v6;
  v7 = 1056964608;
  v12 = v10 / v11;
  if ( v12 <= 1.0 )
  {
    if ( v12 < 0.0 )
    {
LABEL_5:
      v7 = 3204448256LL;
      goto LABEL_6;
    }
    HIDWORD(v13) = 0;
    *&v13 = ((3.0 * (v12 * v12)) - (((v12 * v12) + (v12 * v12)) * v12)) - 0.5;
    v7 = v13;
  }
LABEL_6:
  frametime_low = 0;
  if ( g_pGameRules != 0 && g_pGameRules[19].m_szQuestName[29] == 0 )
    frametime_low = LODWORD(gpGlobals->frametime);
  m_flLean_low = LODWORD(this->m_flLean);
  *&frametime_low = *&frametime_low * dota_unit_lean_rate.m_pParent->m_Value.m_fValue;
  if ( (*&v7 - *&m_flLean_low) <= *&frametime_low )
  {
    if ( -*&frametime_low > (*&v7 - *&m_flLean_low) )
    {
      *&m_flLean_low = *&m_flLean_low - *&frametime_low;
      v7 = m_flLean_low;
    }
  }
  else
  {
    *&frametime_low = *&frametime_low + *&m_flLean_low;
    v7 = frametime_low;
  }
  LODWORD(this->m_flLean) = v7;
  CBaseAnimating::SetPoseParameter(this, m_nPoseParameterTurn, COERCE_DOUBLE(v7 ^ 0x80000000LL), *&frametime_low);
}


// CDOTA_BaseNPC::EnterShop  (line 4427, @0x000000000290ff20, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsRealHero, IsValid, LookupEntity, NetworkStateChanged, Set, operator CEntityInstance*, operator!=, operator=, operator=<DOTA_SHOP_TYPE>
// calls: CDOTA_UnitInventory::OnShopChange, CDOTA_BaseNPC::IsBot, CDOTA_BaseNPC_Hero::OnHeroEnterShopSpeech
// callers: CDOTA_Unit_Courier::EnterShop
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC::EnterShop(CDOTA_BaseNPC *const this, int iShopType, CBaseEntity *pShop)
{
  CBaseEntity *m_pInstance; // rcx
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *m_pEntity; // rcx
  int v11; // eax
  __int16 v12; // dx

  m_pInstance = 0;
  m_Index = this->m_hLastNearShop.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hLastNearShop.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[this->m_hLastNearShop.m_Index & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  if ( pShop != m_pInstance )
  {
    CDOTA_UnitInventory::OnShopChange(&this->m_Inventory, this->m_iCurShop.m_Value, iShopType);
    if ( iShopType != this->m_iCurShop.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 3876, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_iCurShop.m_Value = iShopType;
    }
    if ( pShop != 0 && (m_pEntity = pShop->m_pEntity) != 0 )
    {
      v11 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v12 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hLastNearShop.m_Index) = v12 | this->m_hLastNearShop.m_Index & 0x8000;
      this->m_hLastNearShop.m_Index = (v11 << 15) | this->m_hLastNearShop.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hLastNearShop.m_Index = -1;
    }
    if ( (this->m_iUnitType & 1) != 0 && !this->m_bIsIllusion.m_Value && !CDOTA_BaseNPC::IsBot(this) )
      CDOTA_BaseNPC_Hero::OnHeroEnterShopSpeech(this, iShopType);
  }
}


// CDOTA_BaseNPC::LeaveShop  (line 4443, @0x0000000002910280, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsRealHero, IsValid, LookupEntity, NetworkStateChanged, Set, operator CEntityInstance*, operator=, operator=<DOTA_SHOP_TYPE>, operator==
// calls: CDOTA_UnitInventory::OnShopChange, CDOTA_BaseNPC::IsBot, CDOTA_BaseNPC_Hero::OnHeroLeaveShopSpeech
// callers: CDOTA_ShopTrigger::EndTouch
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC::LeaveShop(CDOTA_BaseNPC *const this, int iShopType, CBaseEntity *pShop)
{
  uint32 m_Index; // eax
  CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx

  m_Index = this->m_hLastNearShop.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hLastNearShop.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[this->m_hLastNearShop.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  if ( pShop == m_pInstance )
  {
    CDOTA_UnitInventory::OnShopChange(&this->m_Inventory, this->m_iCurShop.m_Value, DOTA_SHOP_TYPE::DOTA_SHOP_NONE);
    if ( (this->m_iUnitType & 1) != 0 && !this->m_bIsIllusion.m_Value && !CDOTA_BaseNPC::IsBot(this) )
      CDOTA_BaseNPC_Hero::OnHeroLeaveShopSpeech(this, iShopType);
    if ( this->m_iCurShop.m_Value != DOTA_SHOP_TYPE::DOTA_SHOP_NONE )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 3876, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_iCurShop.m_Value = DOTA_SHOP_TYPE::DOTA_SHOP_NONE;
    }
    this->m_hLastNearShop.m_Index = -1;
  }
}


// CDOTA_BaseNPC::ModifierManagerThink  (line 4459, @0x0000000002904ce0, libserver.so)
// calls: CDOTA_ModifierManager::Think
void __fastcall CDOTA_BaseNPC::ModifierManagerThink(CDOTA_BaseNPC *const this)
{
  CDOTA_ModifierManager::Think(&this->m_ModifierManager);
}


// CDOTA_BaseNPC::DoesUnitCollideAtPosition  (line 4473, @0x0000000002904d00, libserver.so)  // inlines: CEntityHandle, CHandle, GetCollisionPadding, GetEHandle, GetEntryIndex, GetSerialNumber, Set
// calls: GetCommonObstructionManagerFlagsForNPC, CGridNav::PrepareObstructionManager, CGridNav::CheckForCollisions
// callers: CDOTA_Modifier_Rattletrap_Hookshot::UpdateHorizontalMotion, CDOTA_Modifier_Shredder_TimberChain::UpdateHorizontalMotion
bool __fastcall CDOTA_BaseNPC::DoesUnitCollideAtPosition(
        CDOTA_BaseNPC *const this,
        bool bForceNotPhased,
        double a3,
        vec_t a4)
{
  ObstructionRelationshipClass_t v6; // eax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v8; // cx
  float flRelaitonshipRadiusAdjustment; // [rsp+Ch] [rbp-34h]
  Vector vPositiona; // [rsp+10h] [rbp-30h] BYREF
  EHANDLE ignoreHandle; // [rsp+20h] [rbp-20h] BYREF
  int nAllFlags; // [rsp+28h] [rbp-18h] BYREF
  int nNoneFlags[5]; // [rsp+2Ch] [rbp-14h] BYREF

  *&vPositiona.x = a3;
  vPositiona.z = a4;
  GetCommonObstructionManagerFlagsForNPC(this, &nAllFlags, nNoneFlags);
  if ( bForceNotPhased )
    nAllFlags &= ~8u;
  flRelaitonshipRadiusAdjustment = this->m_flCollisionPadding;
  v6 = (*(this->_vptr_IHandleEntity + 454))(this);
  CGridNav::PrepareObstructionManager(
    &g_GridNav,
    this->m_flHullRadius + 0.2,
    nAllFlags,
    nNoneFlags[0],
    v6,
    flRelaitonshipRadiusAdjustment);
  m_pEntity = this->m_pEntity;
  ignoreHandle.m_Index = -1;
  if ( m_pEntity != 0 )
  {
    v8 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    ignoreHandle.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v8 & 0x7FFF;
  }
  return CGridNav::CheckForCollisions(&g_GridNav, &vPositiona, 0, &ignoreHandle.m_Index, 0);
}


// CDOTA_BaseNPC::UpdateDamageEventQueue  (line 4493, @0x0000000002904df0, libserver.so)  // inlines: Count, DOTAGameRules, GetGameTime, Head, Next_Unchecked, RemoveAtHead, operator[]
// callers: CDOTA_BaseNPC::UnitThink
void __fastcall CDOTA_BaseNPC::UpdateDamageEventQueue(CDOTA_BaseNPC *const this)
{
  QueueIter_t m_head; // eax
  ConVar *m_pParent; // r10
  CGameRules *v3; // r8
  __int64 i; // rsi
  QueueIter_t m_tail; // edx
  int v6; // ecx
  float v7; // xmm0_4

  m_head = this->m_DamageEventQueue.m_head;
  m_pParent = dota_unit_damage_event_window.m_pParent;
  v3 = g_pGameRules;
LABEL_2:
  for ( i = m_head; m_head != QueueIter_t::QUEUE_ITERATOR_INVALID; i = m_head )
  {
    m_tail = this->m_DamageEventQueue.m_tail;
    v6 = m_tail < m_head
       ? m_tail + this->m_DamageEventQueue.m_memory.m_nAllocationCount + 1 - m_head
       : m_tail + 1 - m_head;
    if ( v6 <= 0 )
      break;
    v7 = 0.0;
    if ( v3 != 0 )
      v7 = *&v3[18].m_szQuestName[20];
    if ( (v7 - m_pParent->m_Value.m_fValue) <= this->m_DamageEventQueue.m_memory.m_pMemory[i].fTime )
      break;
    if ( m_tail == m_head )
    {
      this->m_DamageEventQueue.m_tail = QueueIter_t::QUEUE_ITERATOR_INVALID;
      m_head = QueueIter_t::QUEUE_ITERATOR_INVALID;
      this->m_DamageEventQueue.m_head = QueueIter_t::QUEUE_ITERATOR_INVALID;
      goto LABEL_2;
    }
    if ( this->m_DamageEventQueue.m_memory.m_nAllocationCount - 1 == m_head++ )
      m_head = 0;
    this->m_DamageEventQueue.m_head = m_head;
  }
}


// CDOTA_BaseNPC::GetHealthEstimate  (line 4502, @0x0000000002918230, libserver.so)
// calls: CBaseEntity::GetHealth, CDOTA_BaseNPC::GetRecentIncomingDPS
// callers: CDOTA_Bot::CanKillUnit, CDOTA_Bot::IsAboutToDie, CDOTA_Bot_AbilityUsage_TeleportScroll::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_CrystalMaiden_CrystalNova::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Juggernaut_HealingWard::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Necrolyte_DeathPulse::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Sven_Warcry::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Windrunner_Powershot::GetCurrentUsageDesire
__int64 __fastcall CDOTA_BaseNPC::GetHealthEstimate(CDOTA_BaseNPC *const this, float a2, float fTime)
{
  int Health; // r12d

  Health = CBaseEntity::GetHealth(this);
  return (Health - (CDOTA_BaseNPC::GetRecentIncomingDPS(this, 0) * a2));
}


// CDOTA_BaseNPC::GetEstimatedDeathTime  (line 4507, @0x0000000002918010, libserver.so)  // inlines: DOTAGameRules, GetFloat, GetGameTime
// calls: CUtlQueue<CDOTA_BaseNPC::sDamageEvent, CUtlMemory<CDOTA_BaseNPC::sDamageEvent, int> >::Element, CUtlQueue<CDOTA_BaseNPC::sDamageEvent, CUtlMemory<CDOTA_BaseNPC::sDamageEvent, int> >::Next, CUtlQueue<CDOTA_BaseNPC::sDamageEvent, CUtlMemory<CDOTA_BaseNPC::sDamageEvent, int> >::IsValid, CBaseEntity::GetHealth
// callers: CDOTA_BaseNPC::GetEstimatedTimeUntilDeath
float __fastcall CDOTA_BaseNPC::GetEstimatedDeathTime(CDOTA_BaseNPC *const this)
{
  int v2; // r13d
  CUtlQueue<CDOTA_BaseNPC::sDamageEvent,CUtlMemory<CDOTA_BaseNPC::sDamageEvent,int> > *p_m_DamageEventQueue; // r12
  QueueIter_t i; // ebx
  float result; // xmm0_4
  float v6; // xmm1_4
  float v7; // [rsp+8h] [rbp-28h]

  v2 = 0;
  p_m_DamageEventQueue = &this->m_DamageEventQueue;
  for ( i = this->m_DamageEventQueue.m_head;
        CUtlQueue<CDOTA_BaseNPC::sDamageEvent,CUtlMemory<CDOTA_BaseNPC::sDamageEvent,int>>::IsValid(
          p_m_DamageEventQueue,
          i);
        i = CUtlQueue<CDOTA_BaseNPC::sDamageEvent,CUtlMemory<CDOTA_BaseNPC::sDamageEvent,int>>::Next(
              p_m_DamageEventQueue,
              i) )
  {
    v2 += CUtlQueue<CDOTA_BaseNPC::sDamageEvent,CUtlMemory<CDOTA_BaseNPC::sDamageEvent,int>>::Element(
            p_m_DamageEventQueue,
            i)->iDamage;
  }
  if ( v2 != 0 )
  {
    if ( g_pGameRules != 0 )
      v7 = *&g_pGameRules[18].m_szQuestName[20];
    else
      v7 = 0.0;
    v6 = v2 / dota_unit_damage_event_window.m_pParent->m_Value.m_fValue;
    return (CBaseEntity::GetHealth(this) / v6) + v7;
  }
  else
  {
    result = 999999.0;
    if ( g_pGameRules != 0 )
      return *&g_pGameRules[18].m_szQuestName[20] + 999999.0;
  }
  return result;
}


// CDOTA_BaseNPC::GetEstimatedTimeUntilDeath  (line 4523, @0x0000000002918100, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// calls: CDOTA_BaseNPC::GetEstimatedDeathTime
// callers: CDOTA_BotMode_PushTower::Think, CDOTA_TeamCommander::UpdateGlyphUsage, CDOTA_Bot_AbilityUsage_AbyssalBlade::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Sheepstick::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Axe_BattleHunger::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_BountyHunter_Track::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Bane_BrainSap::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Bane_Nightmare::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Dazzle_PoisonTouch::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Dazzle_ShallowGrave::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_ChaosKnight_ChaosBolt::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_DragonKnight_DragonTail::GetCurrentUsageDesire (34 total)
float __fastcall CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(CDOTA_BaseNPC *const this)
{
  float EstimatedDeathTime; // xmm0_4
  float v2; // xmm1_4

  EstimatedDeathTime = CDOTA_BaseNPC::GetEstimatedDeathTime(this);
  v2 = 0.0;
  if ( g_pGameRules != 0 )
    v2 = *&g_pGameRules[18].m_szQuestName[20];
  return EstimatedDeathTime - v2;
}


// CDOTA_BaseNPC::GetRecentIncomingDPS  (line 4528, @0x0000000002918130, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CEntityInstance*
// calls: CUtlQueue<CDOTA_BaseNPC::sDamageEvent, CUtlMemory<CDOTA_BaseNPC::sDamageEvent, int> >::Element, CUtlQueue<CDOTA_BaseNPC::sDamageEvent, CUtlMemory<CDOTA_BaseNPC::sDamageEvent, int> >::Next, CUtlQueue<CDOTA_BaseNPC::sDamageEvent, CUtlMemory<CDOTA_BaseNPC::sDamageEvent, int> >::IsValid
// callers: CDOTABehaviorPet::RecalculateThreat, CDOTA_Bot_AbilityUsage_Tango::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Sniper_Assassinate::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_VengefulSpirit_NetherSwap::GetCurrentUsageDesire, CDOTA_BaseNPC::GetHealthEstimate
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_BaseNPC::GetRecentIncomingDPS(CDOTA_BaseNPC *const this, bool bFromHeroesOnly)
{
  int v3; // r13d
  CUtlQueue<CDOTA_BaseNPC::sDamageEvent,CUtlMemory<CDOTA_BaseNPC::sDamageEvent,int> > *p_m_DamageEventQueue; // r12
  QueueIter_t i; // ebx
  CDOTA_BaseNPC::sDamageEvent *v6; // rax
  uint32 m_Index; // edx
  unsigned __int16 v8; // cx
  CEntityIdentity *v9; // rax
  CEntityIdentity *v10; // rax
  CEntityInstance *m_pInstance; // rax

  v3 = 0;
  p_m_DamageEventQueue = &this->m_DamageEventQueue;
  for ( i = this->m_DamageEventQueue.m_head;
        CUtlQueue<CDOTA_BaseNPC::sDamageEvent,CUtlMemory<CDOTA_BaseNPC::sDamageEvent,int>>::IsValid(
          p_m_DamageEventQueue,
          i);
        i = CUtlQueue<CDOTA_BaseNPC::sDamageEvent,CUtlMemory<CDOTA_BaseNPC::sDamageEvent,int>>::Next(
              p_m_DamageEventQueue,
              i) )
  {
    if ( bFromHeroesOnly )
    {
      v6 = CUtlQueue<CDOTA_BaseNPC::sDamageEvent,CUtlMemory<CDOTA_BaseNPC::sDamageEvent,int>>::Element(
             p_m_DamageEventQueue,
             i);
      m_Index = v6->hAttacker.m_Index;
      if ( m_Index + 2 <= 1 )
        continue;
      v8 = v6->hAttacker.m_Index;
      v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v8 >> 9) & 0x3F];
      if ( v9 == 0 )
        continue;
      v10 = &v9[v8 & 0x1FF];
      if ( v10 == 0 )
        continue;
      if ( m_Index != v10->m_EHandle.m_Index )
        continue;
      m_pInstance = v10->m_pInstance;
      if ( m_pInstance == 0
        || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
        || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
      {
        continue;
      }
    }
    v3 += CUtlQueue<CDOTA_BaseNPC::sDamageEvent,CUtlMemory<CDOTA_BaseNPC::sDamageEvent,int>>::Element(
            p_m_DamageEventQueue,
            i)->iDamage;
  }
  return v3 / dota_unit_damage_event_window.m_pParent->m_Value.m_fValue;
}


// CDOTA_BaseNPC::DeathComplete  (line 4545, @0x00000000028fcc50, libserver.so)  // inlines: GetFloat, GetModifier_Constant_First, IsListeningToEvent, IsSpecialIllusion, curtime
// calls: CDOTAFogOfWarSystem::BlindViewer, CBaseEntity::SetLifeState, CCollisionProperty::DisableTouchEvents, CDOTA_ModifierManager::GetModifier_Constant_First_Internal, CBaseEntity::SetNextThink, CBaseEntity::ThinkSet
// callers: CDOTA_BaseNPC_Hero::DeathComplete, CDOTA_BaseNPC_Building::DeathComplete
// globals: CDOTA_BaseNPC::SUB_DeadDisappear(void)
void __fastcall CDOTA_BaseNPC::DeathComplete(CDOTA_BaseNPC *const this)
{
  double v2; // xmm1_8
  __int64 v3; // rax
  CGlobalVars *v4; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v6; // xmm0_8

  CDOTAFogOfWarSystem::BlindViewer(&g_DOTAFogOfWarSystem, this);
  if ( (*(this->_vptr_IHandleEntity + 477))(this) == 0
    || this->m_bIsIllusion.m_Value
    && ((v3 = this->m_ModifierManager.m_buffsForModifiers[108]) == 0xFF
     || this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v3].m_Size <= 0
     || CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
          &this->m_ModifierManager,
          modifierfunction::MODIFIER_PROPERTY_SUPER_ILLUSION,
          &CModifierParams::s_Default) != 1.0) )
  {
    v4 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      *&v6 = LODWORD(v4->m_flCurrentTime);
    }
    else
    {
      v6 = 0.0;
    }
    *&v6 = *&v6 + dota_dead_unit_disappear_time.m_pParent->m_Value.m_fValue;
    CBaseEntity::SetNextThink(this, v6, v2, 0);
    CBaseEntity::ThinkSet(this, CDOTA_BaseNPC::SUB_DeadDisappear, 0.0, 0, 0);
  }
  CBaseEntity::SetLifeState(this, LifeState_t::LIFE_DEAD);
  (*(this->_vptr_IHandleEntity + 470))(this);
  CCollisionProperty::DisableTouchEvents(&this->m_Collision);
}


// CDOTA_BaseNPC::SUB_DeadDisappear  (line 4565, @0x00000000028fbdc0, libserver.so)  // inlines: GetFloat, curtime
// calls: CBaseEntity::AddEffects, CBaseEntity::SetNextThink, CBaseEntity::ThinkSet
void __fastcall CDOTA_BaseNPC::SUB_DeadDisappear(CDOTA_BaseNPC *const this)
{
  double v2; // xmm1_8
  double v3; // xmm0_8
  CGlobalVars *v4; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CBaseEntity::AddEffects(this, 32);
  v3 = 0.0;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v3 = LODWORD(v4->m_flCurrentTime);
  }
  *&v3 = *&v3 + dota_dead_unit_delete_time.m_pParent->m_Value.m_fValue;
  CBaseEntity::SetNextThink(this, v3, v2, 0);
  if ( (*(this->_vptr_IHandleEntity + 437))(this) == 0 )
    CBaseEntity::ThinkSet(this, CBaseEntity::SUB_Remove, 0.0, 0, 0);
}


// CDOTA_BaseNPC::OnDominated  (line 4575, @0x00000000028fba70, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, GetEHandle, GetEntryIndex, GetSerialNumber, OnDominated, Set, SetUnit, operator=
// calls: FireModifierEvent
void __fastcall CDOTA_BaseNPC::OnDominated(CDOTA_BaseNPC *const this)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v3; // cx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 i; // rbx
  CModifierParams params; // [rsp+0h] [rbp-B0h] BYREF

  params.bCraniumBasherTested = 0;
  params.ability.m_Index = -1;
  params.fDamage = 0.0;
  params.fOriginalDamage = 0.0;
  params.nActivity = -1;
  params.bTooltip = 0;
  params.nTooltipParam = 0;
  params.bIgnoreInvis = 0;
  params.bNoCooldown = 0;
  params.bReincarnate = 0;
  params.bDoNotConsume = 0;
  params.fDistance = 0.0;
  params.inflictor.m_Index = -1;
  params.nDamageflags = 0;
  params.nDamageCategory = 0;
  memset(&params.pOrb, 0, 24);
  params.bHeartRegenApplied = 0;
  params.bDiffusalApplied = 0;
  params.bChainLightningConsidered = 0;
  params.bSuppressDamage = 0;
  params.bRangedAttack = 0;
  params.nPlayerids_stick = 0;
  params.hattacker.m_Index = -1;
  params.htarget.m_Index = -1;
  params.hunit.m_Index = -1;
  if ( this != 0 )
  {
    m_pEntity = this->m_pEntity;
    if ( m_pEntity != 0 )
    {
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v3 = 0x7FFF;
      else
        v3 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      params.hunit.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v3 & 0x7FFF;
    }
  }
  FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_DOMINATED, &params);
  for ( i = (*(this->_vptr_INextBotEventResponder + 3))(
              &this->INextBot,
              v6,
              v4,
              v5,
              v7,
              v8,
              *&params.ability.m_Index,
              *&params.fOriginalDamage,
              *&params.bTooltip,
              *&params.bIgnoreInvis); i != 0; i = (*(this->_vptr_INextBotEventResponder + 4))(&this->INextBot, i) )
    (*(*i + 472LL))(i);
}


// CDOTA_BaseNPC::GetCloneSource  (line 4584, @0x00000000028f59c0, libserver.so)
// calls: CDOTA_BaseNPC::GetAbilityByIndex
CDOTA_BaseNPC *__fastcall CDOTA_BaseNPC::GetCloneSource(CDOTA_BaseNPC *const this)
{
  int v2; // ebx
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTA_BaseNPC *result; // rax

  v2 = 0;
  while ( 1 )
  {
    if ( CDOTA_BaseNPC::GetAbilityByIndex(this, v2) != 0 )
    {
      AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(this, v2);
      result = (*(AbilityByIndex->_vptr_IHandleEntity + 250))(AbilityByIndex);
      if ( result != 0 )
        break;
    }
    if ( ++v2 == 24 )
      return 0;
  }
  return result;
}


// CDOTA_BaseNPC::Script_GetCloneSource  (line 4602, @0x00000000028fa740, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, ToHScript
// calls: CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall CDOTA_BaseNPC::Script_GetCloneSource(CDOTA_BaseNPC *const this)
{
  CEntityInstance *v1; // rax
  CEntityInstance *v3; // [rsp+8h] [rbp-8h]

  v1 = (*(this->_vptr_IHandleEntity + 390))(this);
  if ( v1 == 0 )
    return 0;
  if ( v1->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return v1->m_pEntity->m_hPublicScope.m_hScope;
  v3 = v1;
  CEntityInstance::CreatePublicScriptScope(v1, 0);
  return v3->m_pEntity->m_hPublicScope.m_hScope;
}


// CDOTA_BaseNPC::CanAutoAttackTarget  (line 4608, @0x0000000002909fc0, libserver.so)  // inlines: GetTeamNumber, IsInvisibleTo
// calls: CDOTA_BaseNPC::IsInvisibleTo, CDOTA_BaseNPC::CanAttackBoss
// callers: CDOTABehaviorMoveToNPCToAttack::Update, CDOTABehaviorNeutralHome::Update, CDOTA_BaseNPC::IsEnemyInAgressiveStanceRange, CDOTA_BaseNPC::FindWakingEnemy, CDOTA_BaseNPC::AngerNearbyUnits, CDOTA_BaseNPC::GetBestEnemy, CDOTA_BaseNPC::GetAutoAttackTarget, CDOTA_BaseNPC::AlertNearbyUnits
bool __fastcall CDOTA_BaseNPC::CanAutoAttackTarget(
        CDOTA_BaseNPC *const this,
        CDOTA_BaseNPC *pTargetNPC,
        bool bAllowCamped)
{
  int m_Value; // esi
  bool result; // al

  m_Value = this->m_iTeamNum.m_Value;
  if ( m_Value == pTargetNPC->m_iTeamNum.m_Value
    || CDOTA_BaseNPC::IsInvisibleTo(pTargetNPC, m_Value)
    || (*(this->_vptr_IHandleEntity + 391))(this, pTargetNPC) == 0
    || (*(pTargetNPC->_vptr_IHandleEntity + 399))(pTargetNPC) == 0
    || pTargetNPC->m_bIsCamped && !bAllowCamped )
  {
    return 0;
  }
  result = 1;
  if ( (pTargetNPC->m_iUnitType & 0x800) != 0 )
    return CDOTA_BaseNPC::CanAttackBoss(this);
  return result;
}


// CDOTA_BaseNPC::CanCastOn  (line 4621, @0x00000000029058e0, libserver.so)  // inlines: InState, IsUnselectable, ToDOTABaseNPC
// calls: __dynamic_cast
// callers: CDOTABehaviorAbilityChannel::Update, CDOTABehaviorAbilityPhase::Update, CDOTABehaviorCommandMoveToTargetToCast::Update, CDOTA_Modifier_Item_Lotus_Orb_ChannelCheck::OnIntervalThink
bool __fastcall CDOTA_BaseNPC::CanCastOn(
        CDOTA_BaseNPC *const this,
        CBaseEntity *pTargetEntity,
        CDOTABaseAbility *pAbility)
{
  _BYTE *v5; // rax

  if ( pTargetEntity == 0 )
    return 0;
  if ( pTargetEntity->m_bIsDOTANPC
    && LOBYTE(pTargetEntity[4].m_pfnMoveDone.__pfn) == 0
    && (BYTE1(pTargetEntity[3].m_vecVelocity.m_Value.x) & 0x40) == 0
    && (this->m_nUnitState64.m_Value & 0x8000) == 0 )
  {
    return (*(pAbility->_vptr_IHandleEntity + 256))(pAbility, pTargetEntity) == 0;
  }
  v5 = __dynamic_cast(pTargetEntity, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_Tree, -2);
  if ( v5 != 0 )
    return v5[20];
  else
    return __dynamic_cast(pTargetEntity, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_Item_Rune, 0) != 0;
}


// CDOTA_BaseNPC::GetCursorPosition  (line 4643, @0x00000000028fd1a0, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetCursorCastTarget, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, LookupEntity, operator CEntityInstance*, operator bool, operator->
// calls: CBaseEntity::GetAbsOrigin
// callers: CDOTABaseAbility::GetCursorPosition, CDOTABaseAbility::CastAbility, CDOTA_Modifier_KeeperOfTheLight_SpiritForm_Illuminate::OnCreated, CDOTA_Modifier_Phoenix_SunRay::OnCreated
// globals: CEntityHandle::gm_pEntityList
Vector __fastcall CDOTA_BaseNPC::GetCursorPosition(CDOTA_BaseNPC *const this)
{
  CEntityIdentity *v1; // rdx
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v5; // rsi
  const CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v7; // rdx
  const Vector *AbsOrigin; // rax
  uint32 m_Index; // [rsp+20h] [rbp-10h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_Index = this->m_hCursorTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v1 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index >> 9) & 0x3F]) != 0
    && (v2 = &v1[m_Index & 0x1FF]) != 0
    && m_Index == v2->m_EHandle.m_Index )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      m_pInstance = 0;
      v7 = &v5[m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
    else
    {
      m_pInstance = 0;
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
    *&result.x = *&AbsOrigin->x;
    result.z = AbsOrigin->z;
  }
  else
  {
    result.z = this->m_vCursorLocation.z;
    *&result.x = *&this->m_vCursorLocation.x;
  }
  return result;
}


// CDOTA_BaseNPC::AttackReady  (line 4653, @0x00000000028fdaf0, libserver.so)  // inlines: AttackNoEarlierThan, DOTAGameRules, GetGameTime, TimeUntilNextAttack
// calls: CDOTA_BaseNPC::GetSecondsPerAttack, CDOTA_BaseNPC::GetCastPoint
// callers: CDOTABehaviorCommandMoveToTargetToCast::Update, CDOTABehaviorCommandMoveToTargetToAttack::Update, CDOTABehaviorMoveToNPCToAttack::Update, CDOTA_BaseNPC::PerformAttack
bool __fastcall CDOTA_BaseNPC::AttackReady(CDOTA_BaseNPC *const this)
{
  float m_flAttackRegulator; // xmm2_4
  float v3; // xmm3_4
  float v4; // xmm4_4
  float v5; // xmm4_4
  float v6; // xmm0_4
  float CastPoint; // xmm0_4
  float v8; // xmm1_4
  CGameRules *v9; // rax
  float v10; // xmm2_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  float flCurrentNextAttack; // [rsp+8h] [rbp-18h]
  float SecondsPerAttack; // [rsp+Ch] [rbp-14h]

  m_flAttackRegulator = this->m_flAttackRegulator;
  if ( g_pGameRules != 0 )
  {
    m_flAttackRegulator = m_flAttackRegulator - *&g_pGameRules[18].m_szQuestName[20];
    v3 = m_flAttackRegulator;
    if ( m_flAttackRegulator >= 0.0 )
      goto LABEL_3;
  }
  else if ( m_flAttackRegulator >= 0.0 )
  {
    v3 = this->m_flAttackRegulator;
LABEL_3:
    if ( m_flAttackRegulator <= 0.0 )
    {
      v6 = v3;
      v5 = 0.0;
    }
    else
    {
      if ( g_pGameRules != 0 )
        v4 = *&g_pGameRules[18].m_szQuestName[20];
      else
        v4 = 0.0;
      v5 = v4 - this->m_flLastAttackTime;
      v6 = v3;
    }
    goto LABEL_7;
  }
  v6 = 0.0;
  v5 = 0.0;
LABEL_7:
  flCurrentNextAttack = v5 + v6;
  SecondsPerAttack = CDOTA_BaseNPC::GetSecondsPerAttack(this);
  CastPoint = CDOTA_BaseNPC::GetCastPoint(this, 1);
  v8 = 0.0;
  if ( (flCurrentNextAttack - (SecondsPerAttack - CastPoint)) <= 1.0 )
  {
    v12 = this->m_flAttackRegulator;
    v9 = g_pGameRules;
  }
  else
  {
    v9 = g_pGameRules;
    v10 = (SecondsPerAttack - CastPoint) + this->m_flLastAttackTime;
    if ( g_pGameRules != 0 )
    {
      v11 = *&g_pGameRules[18].m_szQuestName[20];
      v10 = v10 - v11;
    }
    else
    {
      v11 = 0.0;
    }
    v12 = v11 + v10;
    this->m_flAttackRegulator = v12;
  }
  if ( v9 != 0 )
    v8 = *&v9[18].m_szQuestName[20];
  return v8 >= v12;
}


// CDOTA_BaseNPC::AttackNoEarlierThan  (line 4667, @0x00000000028f50c0, libserver.so)  // inlines: DOTAGameRules, GetGameTime
void __fastcall CDOTA_BaseNPC::AttackNoEarlierThan(CDOTA_BaseNPC *const this, float a2, float flTime)
{
  float v3; // xmm1_4

  v3 = 0.0;
  if ( g_pGameRules != 0 )
    v3 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_flAttackRegulator = a2 + v3;
}


// CDOTA_BaseNPC::TimeUntilNextAttack  (line 4672, @0x00000000028f50f0, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// callers: CDOTA_Bot::CanKillUnit
float __fastcall CDOTA_BaseNPC::TimeUntilNextAttack(CDOTA_BaseNPC *const this)
{
  float result; // xmm0_4

  result = this->m_flAttackRegulator;
  if ( g_pGameRules != 0 )
    result = result - *&g_pGameRules[18].m_szQuestName[20];
  if ( result < 0.0 )
    return 0.0;
  return result;
}


// CDOTA_BaseNPC::GetTimeUntilAttackPhaseEnds  (line 4677, @0x00000000029059a0, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// callers: CDOTA_Bot::DoCreepAttackAndDeny
float __fastcall CDOTA_BaseNPC::GetTimeUntilAttackPhaseEnds(CDOTA_BaseNPC *const this)
{
  float m_fAttackPhaseEndTime; // xmm0_4
  float v2; // xmm1_4

  m_fAttackPhaseEndTime = this->m_fAttackPhaseEndTime;
  v2 = 0.0;
  if ( m_fAttackPhaseEndTime == 0.0 )
    return 0.0;
  if ( g_pGameRules != 0 )
    v2 = *&g_pGameRules[18].m_szQuestName[20];
  return m_fAttackPhaseEndTime - v2;
}


// CDOTA_BaseNPC::GetAttackAnimationPoint  (line 4684, @0x00000000028fa5a0, libserver.so)  // inlines: GetModifier_Constant_First, IsListeningToEvent
// calls: CDOTA_ModifierManager::GetModifier_Constant_First_Internal
// callers: CDOTA_Ability_ControllerTest_MeleeAttack::GetCastPoint, CDOTA_Ability_ControllerTest_SvenOverheadAttack::GetCastPoint, CDOTA_Ability_ControllerTest_SvenSweepingAttack::GetCastPoint, CDOTA_Ability_ControllerTest_SvenThrustingAttack::GetCastPoint, CDOTA_Ability_ControllerTest_SlarkSpinAttack::GetCastPoint, CDOTA_Ability_ControllerTest_MeleeAttack::OnAbilityPhaseStart, CDOTA_Ability_ControllerTest_SvenOverheadAttack::OnAbilityPhaseStart, CDOTA_Ability_ControllerTest_SvenSweepingAttack::OnAbilityPhaseStart, CDOTA_Ability_ControllerTest_SvenThrustingAttack::OnAbilityPhaseStart, CDOTA_Ability_ControllerTest_SlarkSpinAttack::OnAbilityPhaseStart, CDOTABody::GetAnimationSpeed, CDOTA_Bot_Script::GetAttackPoint (16 total)
float __fastcall CDOTA_BaseNPC::GetAttackAnimationPoint(CDOTA_BaseNPC *const this)
{
  __int64 v2; // rax
  float result; // xmm0_4

  v2 = this->m_ModifierManager.m_buffsForModifiers[27];
  if ( v2 == 0xFF )
    return this->m_flAttackAnimationPoint + dota_special_attack_delay.m_pParent->m_Value.m_fValue;
  if ( this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v2].m_Size <= 0 )
    return this->m_flAttackAnimationPoint + dota_special_attack_delay.m_pParent->m_Value.m_fValue;
  result = CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
             &this->m_ModifierManager,
             modifierfunction::MODIFIER_PROPERTY_ATTACK_POINT_CONSTANT,
             &CModifierParams::s_Default);
  if ( result <= 0.0 )
    return this->m_flAttackAnimationPoint + dota_special_attack_delay.m_pParent->m_Value.m_fValue;
  return result;
}


// CDOTA_BaseNPC::PerformAttack  (line 4693, @0x000000000295b1d0, libserver.so)  // inlines: AttackNoEarlierThan, CEntityHandle, CHandle, CModifierParams, Color, DOTAGameRules, Get, GetBool, GetEHandle, GetEntryIndex, GetGameTime, GetInstance, GetInt, GetSerialNumber, GetTeamNumber, Set, SetAttacker, SetRawColor, SetTarget, String, ToCStr, ToDOTABaseNPC, operator!=, operator=, sTrackingProjectileCreateInfo
// calls: CDOTA_BaseNPC::AttackReady, CBaseEntity::HasDebugBitsSet, Msg, CDOTA_BaseNPC::GetSecondsPerAttack, CDOTA_ModifierManager::GetModifier_String_First, DOTA_EmitSound, CDOTA_ProjectileManager::CreateTrackingProjectile, CDOTA_BaseNPC::GetCastPoint, DamageImpact, FireModifierEvent, CEntityHandle::operator CEntityInstance*, UTIL_VarArgs (14 total)
// callers: CDOTA_ActionRunner::PerformAction_CreateBonusAttack, CDOTABehaviorAttack::OnStart, CDOTA_BaseNPC::Script_PerformAttack, CDOTA_Ability_DrowRanger_Marksmanship::OnProjectileHit_ExtraData, CDOTA_Ability_Holdout_Omnislash::OnProjectileHit, CDOTA_Modifier_ShadowShaman_SerpentWard::OnAttack, CDOTA_Ability_Sniper_Assassinate::OnProjectileHit, CDOTA_Modifier_Riki_TricksOfTheTrade_Phase::OnIntervalThink, CDOTA_Ability_PhantomAssassin_Stifling_Dagger::OnProjectileHit, CDOTA_Modifier_Gyrocopter_Flak_Cannon::OnAttack, CDOTA_Modifier_Gyrocopter_Flak_Cannon_Scepter::OnIntervalThink, CDOTA_Modifier_Weaver_GeminateAttack::OnIntervalThink (16 total)
// strings: "UNIT: Time between Attacks: %f\n", "Hero_Melee.Miss", "%s.Attack", "Damage_Melee.Building"
void __fastcall CDOTA_BaseNPC::PerformAttack(
        CDOTA_BaseNPC *const this,
        CDOTA_AttackRecord *pRecord,
        CBaseEntity *pTarget,
        bool bSkipCooldown,
        bool bIgnoreInvis,
        bool bUseProjectile,
        bool bSkipRangeCheck)
{
  float v12; // xmm0_4
  float v13; // xmm0_4
  CEntityIdentity *m_pEntity; // rdx
  __int64 v15; // rsi
  float v16; // xmm0_4
  __int16 v17; // cx
  __int16 v18; // cx
  bool v19; // zf
  CBaseEntity *v20; // rcx
  CDOTA_Orb *m_pOrb; // rdi
  CDOTA_Orb *m_pOrb2; // rdi
  const char *Modifier_String_First; // rax
  CDOTA_BaseNPC *v24; // rcx
  const char *v25; // rsi
  const char *m_pAsString; // r15
  CDOTA_Orb *v27; // rdi
  int v28; // eax
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  int m_iProjectileSpeed; // edx
  CEntityIdentity *v32; // rcx
  int v33; // edx
  __int16 v34; // si
  CEntityIdentity *v35; // rcx
  int v36; // edx
  __int16 v37; // si
  Color m_colorGemColor; // eax
  __m128i v39; // xmm0
  float v40; // xmm3_4
  float v41; // xmm1_4
  CBaseEntity *v42; // rax
  int m_iFailType; // eax
  const char *v44; // rax
  char *v45; // rax
  float flAttackError; // [rsp+Ch] [rbp-154h]
  float flAttackErrora; // [rsp+Ch] [rbp-154h]
  CDOTA_BaseNPC *pTargetNPCc; // [rsp+18h] [rbp-148h]
  CDOTA_BaseNPC *pTargetNPCd; // [rsp+18h] [rbp-148h]
  CDOTA_BaseNPC *pTargetNPCa; // [rsp+18h] [rbp-148h]
  CDOTA_BaseNPC *pTargetNPCe; // [rsp+18h] [rbp-148h]
  CDOTA_BaseNPC *pTargetNPCb; // [rsp+18h] [rbp-148h]
  const char *v54; // [rsp+20h] [rbp-140h] BYREF
  CModifierParams params; // [rsp+30h] [rbp-130h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+C0h] [rbp-A0h] BYREF
  unsigned __int64 v57; // [rsp+128h] [rbp-38h]
  SndOpEventGuid_t v58; // 0:rax.8

  v57 = __readfsqword(0x28u);
  if ( pRecord == 0 || !CDOTA_BaseNPC::AttackReady(this) && !bSkipCooldown )
    return;
  pRecord->m_bUseProjectile = bUseProjectile;
  if ( CBaseEntity::HasDebugBitsSet(this, 0x20000u) && dota_unit_debug_attack.m_pParent->m_Value.m_nValue != 0 )
  {
    v12 = 0.0;
    if ( g_pGameRules != 0 )
      v12 = *&g_pGameRules[18].m_szQuestName[20];
    Msg("UNIT: Time between Attacks: %f\n", (v12 - this->m_flLastAttackTime));
  }
  v13 = 0.0;
  if ( g_pGameRules != 0 )
    v13 = *&g_pGameRules[18].m_szQuestName[20];
  flAttackError = v13 - this->m_flLastAttackTime;
  if ( (gpGlobals->frametime + gpGlobals->frametime) > fabs(flAttackError - CDOTA_BaseNPC::GetSecondsPerAttack(this)) )
    flAttackErrora = flAttackError - CDOTA_BaseNPC::GetSecondsPerAttack(this);
  else
    flAttackErrora = 0.0;
  if ( !bSkipCooldown )
  {
    v16 = 0.0;
    if ( g_pGameRules != 0 )
      v16 = *&g_pGameRules[18].m_szQuestName[20];
    this->m_flLastAttackTime = v16 - flAttackErrora;
  }
  this->m_flCritBashFailUntil = 0.0;
  params.ability.m_Index = -1;
  params.fDamage = 0.0;
  params.fOriginalDamage = 0.0;
  params.nActivity = -1;
  params.bTooltip = 0;
  params.nTooltipParam = 0;
  params.bIgnoreInvis = 0;
  params.bNoCooldown = 0;
  params.bReincarnate = 0;
  params.bDoNotConsume = 0;
  params.fDistance = 0.0;
  params.inflictor.m_Index = -1;
  params.nDamageflags = 0;
  params.nDamageCategory = 0;
  memset(&params.pOrb, 0, 24);
  params.bCraniumBasherTested = 0;
  params.bHeartRegenApplied = 0;
  params.bDiffusalApplied = 0;
  params.bChainLightningConsidered = 0;
  params.bSuppressDamage = 0;
  params.bRangedAttack = 0;
  params.nPlayerids_stick = 0;
  params.hattacker.m_Index = -1;
  params.htarget.m_Index = -1;
  params.hunit.m_Index = -1;
  if ( this != 0 )
  {
    m_pEntity = this->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v17 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      m_pEntity = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15);
      params.hattacker.m_Index = m_pEntity | v17 & 0x7FFF;
    }
  }
  if ( pTarget == 0 )
  {
    params.bNoCooldown = bSkipCooldown;
    params.bIgnoreInvis = bIgnoreInvis;
LABEL_69:
    v20 = 0;
    if ( pRecord->m_bFakeAttack )
      goto LABEL_30;
    pTargetNPCb = 0;
LABEL_71:
    params.iFailType = pRecord->m_iFailType;
    params.iRecord = pRecord->m_iRecord;
    FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_ATTACK, &params);
    v42 = CEntityHandle::operator CEntityInstance *(&pRecord->m_hTarget);
    v20 = v42;
    if ( pTarget == v42 )
    {
      v20 = pTargetNPCb;
    }
    else if ( v42 != 0 )
    {
      pTarget = v42;
      if ( !v42->m_bIsDOTANPC )
        v20 = 0;
    }
    else
    {
      pTarget = 0;
    }
    goto LABEL_30;
  }
  m_pEntity = pTarget->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v18 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    m_pEntity = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15);
    params.htarget.m_Index = m_pEntity | v18 & 0x7FFF;
  }
  params.bNoCooldown = bSkipCooldown;
  v19 = !pTarget->m_bIsDOTANPC;
  params.bIgnoreInvis = bIgnoreInvis;
  if ( v19 )
    goto LABEL_69;
  v20 = pTarget;
  if ( !pRecord->m_bFakeAttack )
  {
    (*(this->_vptr_IHandleEntity + 451))(this, pTarget->m_iTeamNum.m_Value, m_pEntity, pTarget);
    pTargetNPCb = pTarget;
    goto LABEL_71;
  }
LABEL_30:
  m_pOrb = pRecord->m_pOrb;
  pRecord->m_iDamageType = this->m_iAttackDamageType;
  if ( m_pOrb != 0 )
  {
    pTargetNPCc = v20;
    (*(m_pOrb->_vptr_CDOTA_Orb + 6))(m_pOrb, &params);
    v20 = pTargetNPCc;
  }
  m_pOrb2 = pRecord->m_pOrb2;
  if ( m_pOrb2 != 0 )
  {
    pTargetNPCd = v20;
    (*(m_pOrb2->_vptr_CDOTA_Orb + 6))(m_pOrb2, &params);
    v20 = pTargetNPCd;
  }
  if ( this->m_iszSoundSet.u.m_Id != 0 && !pRecord->m_bFakeAttack )
  {
    pTargetNPCa = v20;
    Modifier_String_First = CDOTA_ModifierManager::GetModifier_String_First(
                              &this->m_ModifierManager,
                              modifierfunction::MODIFIER_PROPERTY_TRANSLATE_ATTACK_SOUND,
                              &params);
    v24 = pTargetNPCa;
    if ( Modifier_String_First == 0 )
    {
      v44 = (*(this->_vptr_IHandleEntity + 460))(this);
      v45 = UTIL_VarArgs("%s.Attack", v44);
      AllocPooledString(&v54, v45);
      Modifier_String_First = "";
      v24 = pTargetNPCa;
      if ( v54 != 0 )
        Modifier_String_First = v54;
    }
    v25 = Modifier_String_First;
    if ( !pRecord->m_bRangedAttack )
    {
      m_iFailType = pRecord->m_iFailType;
      if ( m_iFailType != 0 && m_iFailType != 6 )
        v25 = "Hero_Melee.Miss";
    }
    pTargetNPCe = v24;
    v58 = DOTA_EmitSound(10, v25, this);
    v20 = pTargetNPCe;
    pRecord->m_guidAttackSound = v58;
  }
  if ( pRecord->m_bRangedAttack && bUseProjectile )
  {
    m_pAsString = "";
    if ( pRecord->m_iszAutoAttackRangedParticle.u.m_Id != 0 )
      m_pAsString = pRecord->m_iszAutoAttackRangedParticle.u.m_pAsString;
    v27 = pRecord->m_pOrb;
    if ( v27 != 0 && (*(v27->_vptr_CDOTA_Orb + 3))(v27, v15, m_pEntity, v20) != 0 )
      m_pAsString = (*(pRecord->m_pOrb->_vptr_CDOTA_Orb + 3))(pRecord->m_pOrb);
    v28 = (*(this->_vptr_IHandleEntity + 395))(this, pRecord, m_pEntity, v20);
    v19 = pRecord->m_animation == -1;
    info.bProvidesVision = 0;
    info.hTarget.m_Index = -1;
    info.hSource.m_Index = -1;
    info.colorGemColor = 0;
    if ( v19 )
      v28 = 3;
    info.bDrawsOnMinimap = 0;
    info.iSourceAttachment = 1;
    info.pAbility = 0;
    info.iVisionTeamNumber = -1;
    info.iVisionRadius = 0;
    info.bDodgeable = 1;
    info.bIsAttack = 0;
    info.vSourceLoc.x = vec3_origin.x;
    y = vec3_origin.y;
    info.bVisibleToEnemies = 1;
    info.vSourceLoc.y = y;
    z = vec3_origin.z;
    m_iProjectileSpeed = pRecord->m_iProjectileSpeed;
    info.pKVExtraData = 0;
    info.vSourceLoc.z = z;
    info.bReplaceExisting = 0;
    info.flExpireTime = 0.0;
    info.flMaxImpactTime = 0.0;
    info.bServerOnly = 0;
    info.pszEffectName = m_pAsString;
    info.pAttackRecord = pRecord;
    info.iMoveSpeed = m_iProjectileSpeed;
    if ( this != 0 )
    {
      v32 = this->m_pEntity;
      if ( v32 != 0 )
      {
        v33 = (v32->m_EHandle.m_Index >> 15) - (v32->m_flags & 1);
        v34 = 0x7FFF;
        if ( v32->m_EHandle.m_Index != -1 )
          v34 = v32->m_EHandle.m_Index & 0x7FFF;
        LOWORD(info.hSource.m_Index) = v34 | info.hSource.m_Index & 0x8000;
        info.hSource.m_Index = (v33 << 15) | info.hSource.m_Index & 0x7FFF;
      }
    }
    if ( pTarget != 0 )
    {
      v35 = pTarget->m_pEntity;
      if ( v35 != 0 )
      {
        v36 = (v35->m_EHandle.m_Index >> 15) - (v35->m_flags & 1);
        v37 = 0x7FFF;
        if ( v35->m_EHandle.m_Index != -1 )
          v37 = v35->m_EHandle.m_Index & 0x7FFF;
        LOWORD(info.hTarget.m_Index) = v37 | info.hTarget.m_Index & 0x8000;
        info.hTarget.m_Index = (v36 << 15) | info.hTarget.m_Index & 0x7FFF;
      }
    }
    info.iSourceAttachment = v28;
    m_colorGemColor = this->m_colorGemColor;
    info.bIsAttack = 1;
    info.colorGemColor = m_colorGemColor;
    CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
  }
  else
  {
    if ( v20 != 0 && (v20[2].m_hEffectEntity.m_Value.m_Index & 0x10) != 0 )
      DOTA_EmitSound(10, "Damage_Melee.Building", v20);
    DamageImpact(pRecord);
  }
  if ( !bSkipCooldown )
  {
    *v39.m128i_i32 = CDOTA_BaseNPC::GetSecondsPerAttack(this);
    v40 = COERCE_FLOAT(_mm_cvtsi128_si32(v39)) - CDOTA_BaseNPC::GetCastPoint(this, 1);
    v41 = 0.0;
    if ( g_pGameRules != 0 )
      v41 = *&g_pGameRules[18].m_szQuestName[20];
    this->m_flAttackRegulator = (v40 - flAttackErrora) + v41;
  }
}


// CDOTA_BaseNPC::GetRangedProjectileAttachment  (line 4830, @0x00000000028f5130, libserver.so)
// callers: CDOTA_Unit_Hero_Techies::GetRangedProjectileAttachment
int __fastcall CDOTA_BaseNPC::GetRangedProjectileAttachment(CDOTA_BaseNPC *const this, CDOTA_AttackRecord *pRecord)
{
  Activity m_animation; // edx
  int result; // eax

  m_animation = pRecord->m_animation;
  result = 2;
  if ( m_animation != 1504 )
    return 2 * (m_animation == -1) + 1;
  return result;
}


// CDOTA_BaseNPC::GetCastPoint  (line 4845, @0x00000000028fda40, libserver.so)  // inlines: Get, GetCurrentActiveAbility, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CDOTA_BaseNPC::GetAttackAnimationPoint, CDOTA_BaseNPC::GetHasteFactor
// callers: CDOTA_Bot::CanKillUnit, CDOTA_Bot::DoCreepAttackAndDeny, CDOTABehaviorAttackPhase::OnStart, CDOTABehaviorAbilityPhase::BeginCast, CDOTABehaviorAttackPhase::Update, CDOTA_BaseNPC::AttackReady, TE_UnitAnimation, CDOTA_BaseNPC::CreateAttackRecord, CDOTA_BaseNPC::PerformAttack, CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition::OnAttackLanded
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_BaseNPC::GetCastPoint(CDOTA_BaseNPC *const this, bool bAttack)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rdi
  float AttackAnimationPoint; // [rsp+Ch] [rbp-14h]

  m_Index = this->m_hActiveAbility.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActiveAbility.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hActiveAbility.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( !bAttack && m_pInstance != 0 )
          return (*(m_pInstance->_vptr_IHandleEntity + 232))(m_pInstance);
      }
    }
  }
  AttackAnimationPoint = CDOTA_BaseNPC::GetAttackAnimationPoint(this);
  return AttackAnimationPoint / CDOTA_BaseNPC::GetHasteFactor(this);
}


// CDOTA_BaseNPC::Kill  (line 4858, @0x00000000029059e0, libserver.so)  // inlines: SetDamageCustom
// calls: CBaseEntity::GetHealth, CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::TakeDamage, CTakeDamageInfo::~CTakeDamageInfo, _Unwind_Resume
// callers: CDOTA_ActionRunner::PerformAction_RemoveUnit, PerformDOTALoadGame, CDOTA_PlayerResource::OnHeroReplaced, CDOTA_PlayerResource::ReplaceHeroWith, CDOTAPlayer::ClientCommand, dota_dev, CDOTA_BaseNPC::Script_Kill, CDOTA_Modifier_Morphling_Replicate::OnDeath, CDOTA_Modifier_AncientApparition_IceBlast::OnIntervalThink, CDOTA_Ability_Holdout_CullingBlade::DoChop, CDOTA_Ability_Axe_CullingBlade::OnSpellStart, CDOTA_Ability_Mirana_Arrow::OnProjectileHit_ExtraData (47 total)
void __fastcall CDOTA_BaseNPC::Kill(
        CDOTA_BaseNPC *const this,
        CDOTABaseAbility *pAbility,
        CDOTA_BaseNPC *pAttacker,
        float flOverrideDamage,
        bool bPassively)
{
  int Health; // eax
  float v10; // xmm0_4
  CTakeDamageInfo info; // [rsp+10h] [rbp-C0h] BYREF

  if ( (*(this->_vptr_IHandleEntity + 408))(this) != 0 )
  {
    Health = CBaseEntity::GetHealth(this);
    v10 = flOverrideDamage;
    if ( flOverrideDamage <= Health )
      v10 = CBaseEntity::GetHealth(this);
    CTakeDamageInfo::CTakeDamageInfo(&info, pAbility, pAttacker, v10, 0, 0);
    if ( bPassively )
      info.m_iDamageCustom = 2;
    CBaseEntity::TakeDamage(this, &info);
    CTakeDamageInfo::~CTakeDamageInfo(&info);
  }
}


// CDOTA_BaseNPC::Script_Kill  (line 4874, @0x0000000002905ac0, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTAAbility, ToDOTABaseNPC, ToEnt
// calls: GetScriptDesc<CEntityInstance>, __dynamic_cast, CDOTA_BaseNPC::Kill
void __fastcall CDOTA_BaseNPC::Script_Kill(CDOTA_BaseNPC *const this, HSCRIPT hAbility, HSCRIPT hAttacker)
{
  __int64 (__fastcall *v6)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *Script; // rax
  const void *v8; // rax
  CDOTABaseAbility *v9; // r14
  __int64 (__fastcall *v10)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *v11; // rax
  __int64 v12; // rax
  CDOTA_BaseNPC *v13; // rdx

  if ( hAbility != 0
    && (v6 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        (v8 = v6(g_pScriptVM, hAbility, Script)) != 0) )
  {
    v9 = __dynamic_cast(v8, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
  }
  else
  {
    v9 = 0;
  }
  if ( hAttacker != 0
    && (v10 = *(*g_pScriptVM + 208LL),
        v11 = GetScriptDesc<CEntityInstance>(0),
        (v12 = v10(g_pScriptVM, hAttacker, v11)) != 0)
    && *(v12 + 339) != 0 )
  {
    v13 = v12;
  }
  else
  {
    v13 = 0;
  }
  CDOTA_BaseNPC::Kill(this, v9, v13, 0.0, 0);
}


// CDOTA_BaseNPC::GetGoldBounty  (line 4881, @0x00000000028f5dc0, libserver.so)
// calls: RandomInt
int __fastcall CDOTA_BaseNPC::GetGoldBounty(CDOTA_BaseNPC *const this)
{
  return RandomInt(this->m_iGoldBountyMin, this->m_iGoldBountyMax);
}


// CDOTA_BaseNPC::GetAverageGoldBounty  (line 4886, @0x00000000028f5160, libserver.so)
float __fastcall CDOTA_BaseNPC::GetAverageGoldBounty(CDOTA_BaseNPC *const this)
{
  return (this->m_iGoldBountyMax + this->m_iGoldBountyMin) * 0.5;
}


// CDOTA_BaseNPC::UpdateControllableMask  (line 4893, @0x0000000002927780, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<int>, DOTAGameRules, Element, GetBool, GetGameMode, GetInt, GrowMemory, IsAddOnGame, IsFreeCourierMode, IsHero, NetworkStateChanged, Set, operator=<int>, operator[], operator|=<long long unsigned int>, ~CUtlVector
// calls: CDOTAPlayer::GetPlayerByPlayerID, CDOTA_PlayerResource::IsValidTeamPlayer, CDOTAGamerules::IsCheatMode, C2DGridObstructionManager::RefreshObjectClassInfo, CDOTA_PlayerResource::GetTeam, CDOTA_PlayerResource::GetConnectionState, CDOTA_PlayerResource::IsHeroSharedWithPlayerID, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, CDOTAGamerules::ShouldFillEmptySlotsWithBots, CDOTA_PlayerResource::IsFakeClient, CDOTA_PlayerResource::IsValidPlayer, CUtlMemory<int, int>::Grow (14 total)
// callers: CDOTAGamerules::ClientDisconnected, CDOTA_BaseNPC::SetControllableByPlayer, CDOTA_BaseNPC::RecalculateControllableStateForNPCS, CDOTA_BaseNPC_Building::PossiblyGiveSelfToPlayer
void __fastcall CDOTA_BaseNPC::UpdateControllableMask(CDOTA_BaseNPC *const this)
{
  CDOTAPlayer *PlayerByPlayerID; // rax
  ObstructionRelationshipClass_t v3; // eax
  bool v4; // zf
  int v5; // r13d
  int Team; // eax
  int v7; // r14d
  __int64 m_Size; // r15
  int v9; // eax
  int *v10; // rax
  uint32 m_iUnitType; // eax
  __int64 v12; // r13
  int v13; // r15d
  int m_nControllingPlayerID; // esi
  int v15; // edx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r14
  int i; // r13d
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r14
  __int64 v21; // r15
  int v22; // r14d
  unsigned __int64 m_Value; // rax
  unsigned __int64 v24; // r13
  __int64 v25; // r13
  int v26; // r15d
  int v27; // esi
  int v28; // edx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r14
  int v31; // eax
  __int64 v32; // r13
  int v33; // r15d
  int v34; // esi
  int v35; // ecx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // r14
  __int64 v38; // r15
  int j; // r14d
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // r13
  CUtlVector<int,CUtlMemory<int,int> > vecTeammatePlayerIDs; // [rsp+10h] [rbp-50h] BYREF

  if ( this->m_iIsControllableByPlayer64.m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2944, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iIsControllableByPlayer64.m_Value = 0;
  }
  if ( dota_tutorial_game.m_pParent->m_Value.m_nValue == 0
    || (PlayerByPlayerID = CDOTAPlayer::GetPlayerByPlayerID(this->m_nControllingPlayerID)) == 0
    || (*(PlayerByPlayerID->_vptr_IHandleEntity + 521))(PlayerByPlayerID) == 0
    || (this->m_iUnitType & 1) == 0 )
  {
    if ( !CDOTA_PlayerResource::IsValidTeamPlayer(g_pDOTAPlayerResource, this->m_nControllingPlayerID) )
    {
      if ( !CDOTAGamerules::IsCheatMode() )
        goto LABEL_9;
      goto LABEL_33;
    }
    v5 = 0;
    Team = CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, this->m_nControllingPlayerID);
    vecTeammatePlayerIDs.m_Size = 0;
    v7 = Team;
    vecTeammatePlayerIDs.m_Memory.m_pMemory = 0;
    vecTeammatePlayerIDs.m_Memory.m_nAllocationCount = 0;
    vecTeammatePlayerIDs.m_Memory.m_nGrowSize = 0;
    do
    {
      while ( 1 )
      {
        if ( v7 == CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v5) )
        {
          m_Size = vecTeammatePlayerIDs.m_Size;
          v9 = vecTeammatePlayerIDs.m_Size;
          if ( vecTeammatePlayerIDs.m_Size == vecTeammatePlayerIDs.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<int,int>::Grow(&vecTeammatePlayerIDs.m_Memory, 1);
            v9 = vecTeammatePlayerIDs.m_Size;
          }
          vecTeammatePlayerIDs.m_Size = v9 + 1;
          v10 = &vecTeammatePlayerIDs.m_Memory.m_pMemory[m_Size];
          if ( v10 != 0 )
            break;
        }
        if ( ++v5 == 64 )
          goto LABEL_20;
      }
      *v10 = v5++;
    }
    while ( v5 != 64 );
LABEL_20:
    if ( CDOTAPlayer::GetPlayerByPlayerID(this->m_nControllingPlayerID) == 0
      || CDOTA_PlayerResource::GetConnectionState(g_pDOTAPlayerResource, this->m_nControllingPlayerID) > DOTAConnectionState_t::DOTA_CONNECTION_STATE_CONNECTED )
    {
      if ( vecTeammatePlayerIDs.m_Size > 0 )
      {
        v21 = 0;
        v22 = 0;
        do
        {
          m_Value = this->m_iIsControllableByPlayer64.m_Value;
          v24 = m_Value | (1LL << vecTeammatePlayerIDs.m_Memory.m_pMemory[v21]);
          if ( m_Value != v24 )
          {
            (*(this->_vptr_IHandleEntity + 22))(this, 2944, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            this->m_iIsControllableByPlayer64.m_Value = v24;
          }
          ++v22;
          ++v21;
        }
        while ( vecTeammatePlayerIDs.m_Size > v22 );
      }
      goto LABEL_32;
    }
    m_iUnitType = this->m_iUnitType;
    if ( (m_iUnitType & 1) != 0 && !this->m_bIsIllusion.m_Value )
    {
      if ( vecTeammatePlayerIDs.m_Size > 0 )
      {
        v12 = 0;
        v13 = 0;
        while ( 1 )
        {
          m_nControllingPlayerID = this->m_nControllingPlayerID;
          v15 = vecTeammatePlayerIDs.m_Memory.m_pMemory[v12];
          if ( v15 == m_nControllingPlayerID )
            goto LABEL_29;
          if ( CDOTA_PlayerResource::IsHeroSharedWithPlayerID(g_pDOTAPlayerResource, m_nControllingPlayerID, v15) )
            break;
LABEL_31:
          ++v13;
          ++v12;
          if ( vecTeammatePlayerIDs.m_Size <= v13 )
            goto LABEL_32;
        }
        v15 = vecTeammatePlayerIDs.m_Memory.m_pMemory[v12];
LABEL_29:
        v16 = this->m_iIsControllableByPlayer64.m_Value;
        v17 = v16 | (1LL << v15);
        if ( v16 != v17 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 2944, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_iIsControllableByPlayer64.m_Value = v17;
        }
        goto LABEL_31;
      }
LABEL_32:
      CUtlVectorBase<int,CUtlMemory<int,int>>::~CUtlVectorBase(&vecTeammatePlayerIDs);
      if ( !CDOTAGamerules::IsCheatMode() )
      {
LABEL_9:
        v3 = 3 - (this->m_iIsControllableByPlayer64.m_Value != 0);
        if ( this->m_ObstructionRelationshipClass != v3 )
        {
          v4 = this->m_pObstructionRecord == 0;
          this->m_ObstructionRelationshipClass = v3;
          if ( !v4 )
            C2DGridObstructionManager::RefreshObjectClassInfo(
              &g_GridNav.m_ObstructionManager,
              &this->CObstructionObject);
        }
        return;
      }
LABEL_33:
      if ( !CDOTAGamerules::ShouldFillEmptySlotsWithBots(g_pGameRules)
        && CDOTA_PlayerResource::IsFakeClient(g_pDOTAPlayerResource, this->m_nControllingPlayerID) )
      {
        for ( i = 0; i != 64; ++i )
        {
          if ( CDOTA_PlayerResource::IsValidPlayer(g_pDOTAPlayerResource, i) )
          {
            v19 = this->m_iIsControllableByPlayer64.m_Value;
            v20 = v19 | (1LL << i);
            if ( v19 != v20 )
            {
              (*(this->_vptr_IHandleEntity + 22))(this, 2944, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              this->m_iIsControllableByPlayer64.m_Value = v20;
            }
          }
        }
      }
      goto LABEL_9;
    }
    if ( (m_iUnitType & 0x100) == 0 )
    {
      if ( vecTeammatePlayerIDs.m_Size <= 0 )
        goto LABEL_32;
      v25 = 0;
      v26 = 0;
      while ( 1 )
      {
        v27 = this->m_nControllingPlayerID;
        v28 = vecTeammatePlayerIDs.m_Memory.m_pMemory[v25];
        if ( v28 == v27 )
          goto LABEL_53;
        if ( CDOTA_PlayerResource::AreUnitsSharedWithPlayerID(g_pDOTAPlayerResource, v27, v28) )
          break;
LABEL_55:
        ++v26;
        ++v25;
        if ( vecTeammatePlayerIDs.m_Size <= v26 )
          goto LABEL_32;
      }
      v28 = vecTeammatePlayerIDs.m_Memory.m_pMemory[v25];
LABEL_53:
      v29 = this->m_iIsControllableByPlayer64.m_Value;
      v30 = v29 | (1LL << v28);
      if ( v29 != v30 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 2944, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_iIsControllableByPlayer64.m_Value = v30;
      }
      goto LABEL_55;
    }
    if ( g_pGameRules == 0
      || g_pGameRules[5].m_szQuestName[114] == 0
      || (v31 = *&g_pGameRules[6].m_szQuestName[68]) == 15
      || v31 == 19 )
    {
      v38 = 0;
      for ( j = 0; vecTeammatePlayerIDs.m_Size > j; ++v38 )
      {
        v40 = this->m_iIsControllableByPlayer64.m_Value;
        v41 = v40 | (1LL << vecTeammatePlayerIDs.m_Memory.m_pMemory[v38]);
        if ( v40 != v41 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 2944, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_iIsControllableByPlayer64.m_Value = v41;
        }
        ++j;
      }
      goto LABEL_32;
    }
    if ( vecTeammatePlayerIDs.m_Size <= 0 )
      goto LABEL_32;
    v32 = 0;
    v33 = 0;
    while ( 1 )
    {
      v34 = this->m_nControllingPlayerID;
      v35 = vecTeammatePlayerIDs.m_Memory.m_pMemory[v32];
      if ( v35 == v34 )
        goto LABEL_66;
      if ( CDOTA_PlayerResource::IsHeroSharedWithPlayerID(g_pDOTAPlayerResource, v34, v35) )
        break;
LABEL_68:
      ++v33;
      ++v32;
      if ( vecTeammatePlayerIDs.m_Size <= v33 )
        goto LABEL_32;
    }
    v35 = vecTeammatePlayerIDs.m_Memory.m_pMemory[v32];
LABEL_66:
    v36 = this->m_iIsControllableByPlayer64.m_Value;
    v37 = v36 | (1LL << v35);
    if ( v36 != v37 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 2944, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_iIsControllableByPlayer64.m_Value = v37;
    }
    goto LABEL_68;
  }
}


// CDOTA_BaseNPC::SetControllableByPlayer  (line 5011, @0x00000000028f9390, libserver.so)
// calls: CBaseEntity::GetAbsOrigin, FindClearSpaceForUnit
// callers: CDOTA_BaseNPC::SetControllableByPlayer
void __fastcall CDOTA_BaseNPC::SetControllableByPlayer(
        CDOTA_BaseNPC *const this,
        int nPlayerID,
        bool bSkipAdjustingPosition)
{
  Vector v4; // 0:xmm0_8.8,8:xmm1_4.4

  v4 = *CBaseEntity::GetAbsOrigin(this);
  FindClearSpaceForUnit(this, v4, 0);
}


// CDOTA_BaseNPC::SetControllableByPlayer  (line 5011, @0x0000000002927d20, libserver.so)
// calls: CDOTA_BaseNPC::UpdateControllableMask, CDOTA_BaseNPC::SetControllableByPlayer
// callers: CDOTA_ActionRunner::PerformAction_SpawnUnit, CDOTA_ActionRunner::PerformAction_ReplaceUnit, OnDemoHeroSpawnComplete, CDOTAGamerules::SwapPlayers, CDOTAGamerules::OnARDMDuringMatchSpawnComplete, CDOTAGamerules::PlayerSpawn, CDOTAGamerules::State_Enter_PRE_GAME, CDOTAGamerules::ClientDisconnected, dota_test_npc, CDOTA_Ability_EnragedWildkin_Tornado::OnSpellStart, CDOTA_Ability_DarkTrollWarlord_RaiseDead::OnSpellStart, CDOTA_Ability_Greevil_Miniboss_Purple_PlagueWard::OnSpellStart (63 total)
void __fastcall CDOTA_BaseNPC::SetControllableByPlayer(
        CDOTA_BaseNPC *const this,
        int nPlayerID,
        bool bSkipAdjustingPosition)
{
  bool v5; // dl
  int v6; // esi

  this->m_nControllingPlayerID = nPlayerID;
  CDOTA_BaseNPC::UpdateControllableMask(this);
  if ( !bSkipAdjustingPosition && this->m_nControllingPlayerID != -1 )
    CDOTA_BaseNPC::SetControllableByPlayer(this, v6, v5);
}


// CDOTA_BaseNPC::RecalculateControllableStateForNPCS  (line 5026, @0x0000000002927d60, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnitName, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, ToDOTABaseNPC, operator CEntityInstance*, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: FindUnitsInRadius, Msg, CDOTA_BaseNPC::UpdateControllableMask, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// callers: CDOTAGamerules::PlayerSpawn, CDOTAGamerules::ClientDisconnected, CDOTA_PlayerResource::SetUnitShareMaskForPlayer
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC::RecalculateControllableStateForNPCS(
        int nTeamNumber,
        bool bHeroes,
        bool bUnits,
        int nRestrictToUnitsOwnedBy)
{
  __int64 i; // rbx
  CHandle<CBaseEntity> *v7; // rdx
  uint32 m_Index; // eax
  __int16 v9; // cx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityInstance *m_pInstance; // r15
  const char *m_pAsString; // rdx
  FindUnitsStackVec_t hEntities; // [rsp+20h] [rbp-C0h] BYREF
  unsigned __int64 v15; // [rsp+A8h] [rbp-38h]

  hEntities.m_Size = 0;
  v15 = __readfsqword(0x28u);
  hEntities.m_Memory.m_pMemory = &hEntities.m_FixedMemory;
  hEntities.m_Memory.m_nAllocationCount = 25;
  hEntities.m_Memory.m_nGrowSize = 0x80000000;
  FindUnitsInRadius(nTeamNumber, &vec3_origin, 0, -1.0, &hEntities, 1, !bUnits ? 19 : 51, 64, 0, 0);
  for ( i = 0; hEntities.m_Size > i; ++i )
  {
    while ( 1 )
    {
      v7 = &hEntities.m_Memory.m_pMemory[i];
      m_Index = v7->m_Index;
      if ( v7->m_Index + 2 > 1 )
      {
        v9 = v7->m_Index;
        v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_Index) >> 9) & 0x3F];
        if ( v10 != 0 )
        {
          v11 = &v10[v9 & 0x1FF];
          if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
          {
            m_pInstance = v11->m_pInstance;
            if ( v11->m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && (nRestrictToUnitsOwnedBy == -1
               || nRestrictToUnitsOwnedBy == LODWORD(m_pInstance[61].m_iszPrivateVScripts.u.m_Id))
              && (bHeroes
               || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0
               || LOBYTE(m_pInstance[71].m_pEntity) != 0) )
            {
              break;
            }
          }
        }
      }
      if ( hEntities.m_Size <= ++i )
        goto LABEL_18;
    }
    m_pAsString = "";
    if ( m_pInstance[70].m_iszPrivateVScripts.u.m_Id != 0 )
      m_pAsString = m_pInstance[70].m_iszPrivateVScripts.u.m_pAsString;
    Msg("%d: %s\n", i, m_pAsString);
    CDOTA_BaseNPC::UpdateControllableMask(m_pInstance);
  }
LABEL_18:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
}


// CDOTA_BaseNPC::Script_GetPlayerOwner  (line 5067, @0x00000000028fa7a0, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, ToHScript
// calls: CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall CDOTA_BaseNPC::Script_GetPlayerOwner(CDOTA_BaseNPC *const this)
{
  CEntityInstance *v1; // rax
  CEntityInstance *v3; // [rsp+8h] [rbp-8h]

  v1 = (*(this->_vptr_IHandleEntity + 413))(this);
  if ( v1 == 0 )
    return 0;
  if ( v1->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return v1->m_pEntity->m_hPublicScope.m_hScope;
  v3 = v1;
  CEntityInstance::CreatePublicScriptScope(v1, 0);
  return v3->m_pEntity->m_hPublicScope.m_hScope;
}


// CDOTA_BaseNPC::ResetPlayerControls  (line 5072, @0x0000000002905ba0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// calls: C2DGridObstructionManager::RefreshObjectClassInfo
// callers: CDOTAGamerules::PlayerSpawn, CDOTAGamerules::ClientDisconnected, CDOTA_Modifier_Life_Stealer_Infest_Creep::OnCreated, CDOTA_Ability_Enchantress_Enchant::OnSpellStart, CDOTA_Ability_Chen_HolyPersuasion::OnSpellStart, CDOTA_Ability_Spectre_Haunt::OnSpellStart, CDOTA_Item_HelmOfTheDominator::OnSpellStart
void __fastcall CDOTA_BaseNPC::ResetPlayerControls(CDOTA_BaseNPC *const this)
{
  bool v2; // zf

  if ( this->m_iIsControllableByPlayer64.m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2944, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iIsControllableByPlayer64.m_Value = 0;
  }
  v2 = this->m_pObstructionRecord == 0;
  this->m_ObstructionRelationshipClass = ObstructionRelationshipClass_t::DOTA_OBSTRUCTION_RELATIONSHIP_NPC;
  if ( !v2 )
    C2DGridObstructionManager::RefreshObjectClassInfo(&g_GridNav.m_ObstructionManager, &this->CObstructionObject);
}


// CDOTA_BaseNPC::Script_Heal  (line 5082, @0x000000000294ed40, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToEnt
// calls: GetScriptDesc<CEntityInstance>, CDOTA_BaseNPC::Heal
void __fastcall CDOTA_BaseNPC::Script_Heal(CDOTA_BaseNPC *const this, float a2, float flAmount, HSCRIPT hInflictor)
{
  __int64 (__fastcall *v6)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  __int64 v8; // rax
  CBaseEntity *v9; // rsi
  float flAmounta; // [rsp+Ch] [rbp-24h]

  if ( hInflictor != 0 )
  {
    flAmounta = a2;
    v6 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v8 = v6(g_pScriptVM, hInflictor, Script);
    a2 = flAmounta;
    v9 = v8;
  }
  else
  {
    v9 = 0;
  }
  CDOTA_BaseNPC::Heal(this, a2, v9, 0, 1);
}


// CDOTA_BaseNPC::Heal  (line 5088, @0x000000000294e1e0, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, Get, GetEHandle, GetEntryIndex, GetModifier_Constant_Additive, GetModifier_Constant_Highest, GetOwnerEntity, GetSerialNumber, IsListeningToEvent, Set, SetLastHealEvent, SetUnit, ToDOTAAbility, ToDOTABaseNPC, ToDOTABaseNPCHero, operator=
// calls: FireModifierEvent, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, floorf, CBaseEntity::GetHealth, CDOTA_BaseNPC::ModifyHealth, CDOTAGamerules::GetDOTATime, CEntityHandle::GetHandleEntity, __dynamic_cast, CDOTA_CombatLog::AddHealthEvent, CDOTA_PlayerResource::AddScaledHealing, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTA_BaseNPC_Hero::AddRecentModifier
// callers: CDOTA_ActionRunner::PerformAction_Heal, CDOTA_ActionRunner::PerformAction_Lifesteal, CDOTA_Item_UpgradedBarricade::OnSpellStart, CDOTA_Ability_Greevil_Miniboss_Black_BrainSap::OnSpellStart, CDOTA_Modifier_Spawnlord_Aura_Bonus::OnAttacked, CDOTA_Modifier_BackdoorProtection::OnIntervalThink, CDOTA_Ability_ForestTrollHighPriest_Heal::OnSpellStart, CDOTA_Ability_Greevil_Miniboss_White_Purification::OnSpellStart, CDOTA_Modifier_Special_Bonus_Spell_Lifesteal::OnTakeDamage, CDOTA_Modifier_Special_Bonus_Lifesteal::OnAttacked, CDOTA_Tutorial::HealPlayer, CDOTA_Tutorial::HealNPC (76 total)
void __fastcall CDOTA_BaseNPC::Heal(
        CDOTA_BaseNPC *const this,
        float flAmount,
        CBaseEntity *pInflictor,
        bool bLifesteal,
        bool bAmplify)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v10; // cx
  CEntityIdentity *v11; // rdx
  __int16 v12; // cx
  __int64 v13; // rax
  float v14; // xmm1_4
  float Modifier_Constant_Highest_Internal; // xmm0_4
  int v16; // r13d
  int v17; // r15d
  int v18; // r13d
  int v19; // r15d
  CEntityIdentity *v20; // rdx
  int v21; // eax
  __int16 v22; // cx
  CEntityIdentity *v23; // rdx
  __int16 v24; // cx
  int v25; // r13d
  float DOTATime; // xmm0_4
  bool v27; // zf
  IHandleEntity *HandleEntity; // rax
  CDOTA_BaseNPC *v29; // r13
  _DWORD *v30; // rax
  __int64 v31; // r12
  __int64 v32; // rax
  int v33; // r13d
  int v34; // ebx
  int v35; // eax
  int Health; // eax
  __int64 v37; // rax
  float v38; // xmm2_4
  float Modifier_Constant_Additive_Internal; // xmm0_4
  int v40; // eax
  float v41; // [rsp+18h] [rbp-168h]
  float flAmountc; // [rsp+1Ch] [rbp-164h]
  bool flAmountb; // [rsp+1Ch] [rbp-164h]
  int flAmountd; // [rsp+1Ch] [rbp-164h]
  CModifierParams OnHealReceivedParams; // [rsp+30h] [rbp-150h] BYREF
  CModifierParams params; // [rsp+C0h] [rbp-C0h] BYREF

  OnHealReceivedParams.ability.m_Index = -1;
  OnHealReceivedParams.fDamage = 0.0;
  OnHealReceivedParams.fOriginalDamage = 0.0;
  OnHealReceivedParams.nActivity = -1;
  OnHealReceivedParams.bTooltip = 0;
  OnHealReceivedParams.nTooltipParam = 0;
  OnHealReceivedParams.bIgnoreInvis = 0;
  OnHealReceivedParams.bNoCooldown = 0;
  OnHealReceivedParams.bReincarnate = 0;
  OnHealReceivedParams.bDoNotConsume = 0;
  OnHealReceivedParams.fDistance = 0.0;
  OnHealReceivedParams.inflictor.m_Index = -1;
  OnHealReceivedParams.nDamageflags = 0;
  OnHealReceivedParams.nDamageCategory = 0;
  memset(&OnHealReceivedParams.pOrb, 0, 24);
  OnHealReceivedParams.bCraniumBasherTested = 0;
  OnHealReceivedParams.bHeartRegenApplied = 0;
  OnHealReceivedParams.bDiffusalApplied = 0;
  OnHealReceivedParams.bChainLightningConsidered = 0;
  OnHealReceivedParams.bSuppressDamage = 0;
  OnHealReceivedParams.bRangedAttack = 0;
  OnHealReceivedParams.nPlayerids_stick = 0;
  OnHealReceivedParams.hattacker.m_Index = -1;
  OnHealReceivedParams.htarget.m_Index = -1;
  OnHealReceivedParams.hunit.m_Index = -1;
  if ( this != 0 )
  {
    m_pEntity = this->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v10 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      OnHealReceivedParams.hunit.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                         | v10 & 0x7FFF;
    }
  }
  if ( pInflictor != 0 )
  {
    v11 = pInflictor->m_pEntity;
    if ( v11 != 0 )
    {
      v12 = 0x7FFF;
      if ( v11->m_EHandle.m_Index != -1 )
        v12 = v11->m_EHandle.m_Index & 0x7FFF;
      OnHealReceivedParams.inflictor.m_Index = (((v11->m_EHandle.m_Index >> 15) - (v11->m_flags & 1)) << 15)
                                             | v12 & 0x7FFF;
    }
  }
  OnHealReceivedParams.fGain = flAmount;
  FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_HEAL_RECEIVED, &OnHealReceivedParams);
  v13 = this->m_ModifierManager.m_buffsForModifiers[111];
  v14 = flAmount;
  if ( v13 == 0xFF
    || this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v13].m_Size <= 0
    || (Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                               &this->m_ModifierManager,
                                               modifierfunction::MODIFIER_PROPERTY_DISABLE_HEALING,
                                               &CModifierParams::s_Default),
        v14 = flAmount,
        Modifier_Constant_Highest_Internal != 1.0)
    || flAmount <= 0.0 )
  {
    if ( bAmplify )
    {
      v37 = this->m_ModifierManager.m_buffsForModifiers[32];
      v38 = 1.0;
      if ( v37 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v37].m_Size > 0 )
      {
        v41 = v14;
        Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                                &this->m_ModifierManager,
                                                modifierfunction::MODIFIER_PROPERTY_HEAL_AMPLIFY_PERCENTAGE,
                                                &CModifierParams::s_Default);
        v14 = v41;
        v38 = (Modifier_Constant_Additive_Internal / 100.0) + 1.0;
      }
      v14 = v14 * v38;
    }
    flAmountc = v14 + this->m_flAccumulatedHeal;
    v16 = floorf(flAmountc);
    this->m_flAccumulatedHeal = flAmountc - v16;
    v17 = v16 + CBaseEntity::GetHealth(this);
    if ( v17 <= (*(this->_vptr_IHandleEntity + 156))(this) )
    {
      if ( v16 + CBaseEntity::GetHealth(this) <= 0 )
      {
        flAmountb = 1;
        v18 = 1;
      }
      else
      {
        Health = CBaseEntity::GetHealth(this);
        v27 = Health + v16 == 0;
        v18 = Health + v16;
        flAmountb = !v27;
      }
    }
    else
    {
      v18 = (*(this->_vptr_IHandleEntity + 156))(this);
      flAmountb = v18 != 0;
    }
    v19 = v18 - CBaseEntity::GetHealth(this);
    if ( v19 != 0 && flAmountb )
    {
      CDOTA_BaseNPC::ModifyHealth(this, v18, 0, 0, 0);
      if ( (this->m_iUnitType & 1) != 0 )
      {
        params.bCraniumBasherTested = 0;
        params.ability.m_Index = -1;
        params.fDamage = 0.0;
        params.fOriginalDamage = 0.0;
        params.nActivity = -1;
        params.bTooltip = 0;
        params.nTooltipParam = 0;
        params.bIgnoreInvis = 0;
        params.bNoCooldown = 0;
        params.bReincarnate = 0;
        params.bDoNotConsume = 0;
        params.fDistance = 0.0;
        params.inflictor.m_Index = -1;
        params.nDamageflags = 0;
        params.nDamageCategory = 0;
        memset(&params.pOrb, 0, 24);
        params.bHeartRegenApplied = 0;
        params.bDiffusalApplied = 0;
        params.bChainLightningConsidered = 0;
        params.bSuppressDamage = 0;
        params.bRangedAttack = 0;
        params.nPlayerids_stick = 0;
        params.hattacker.m_Index = -1;
        params.htarget.m_Index = -1;
        params.hunit.m_Index = -1;
        if ( this != 0 )
        {
          v20 = this->m_pEntity;
          if ( v20 != 0 )
          {
            v21 = (v20->m_EHandle.m_Index >> 15) - (v20->m_flags & 1);
            v22 = 0x7FFF;
            if ( v20->m_EHandle.m_Index != -1 )
              v22 = v20->m_EHandle.m_Index & 0x7FFF;
            LOWORD(params.hunit.m_Index) = v22 | params.hunit.m_Index & 0x8000;
            params.hunit.m_Index = (v21 << 15) | params.hunit.m_Index & 0x7FFF;
          }
        }
        params.fGain = v19;
        FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_HEALTH_GAINED, &params);
        if ( (this->m_iUnitType & 1) != 0 )
        {
          if ( pInflictor != 0 && (v23 = pInflictor->m_pEntity) != 0 )
          {
            v24 = 0x7FFF;
            if ( v23->m_EHandle.m_Index != -1 )
              v24 = v23->m_EHandle.m_Index & 0x7FFF;
            v25 = (((v23->m_EHandle.m_Index >> 15) - (v23->m_flags & 1)) << 15) | v24 & 0x7FFF;
          }
          else
          {
            v25 = -1;
          }
          DOTATime = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
          v27 = (this->m_iUnitType & 1) == 0;
          *(this + 1173) = v19;
          *(this + 1174) = DOTATime;
          *(this + 1175) = v25;
          if ( !v27 && pInflictor != 0 )
          {
            HandleEntity = CEntityHandle::GetHandleEntity(&pInflictor->m_hOwnerEntity.m_Value);
            if ( HandleEntity != 0 )
            {
              v29 = 0;
              if ( BYTE3(HandleEntity[42]._vptr_IHandleEntity) != 0 )
                v29 = HandleEntity;
              v30 = __dynamic_cast(pInflictor, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
              if ( v30 != 0 )
              {
                flAmountd = v30[196];
                v40 = (*(v29->_vptr_IHandleEntity + 414))(v29);
                CDOTA_BaseNPC_Hero::AddRecentModifier(this, v40, flAmountd, 1);
                CDOTA_CombatLog::AddHealthEvent(g_pDOTACombatLog, 1, this, v29, pInflictor, v19, 0, 0, bLifesteal);
              }
              else
              {
                CDOTA_CombatLog::AddHealthEvent(g_pDOTACombatLog, 1, this, v29, pInflictor, v19, 0, 0, bLifesteal);
                if ( v29 == 0 )
                  return;
              }
              v31 = (*(v29->_vptr_IHandleEntity + 413))(v29);
              v32 = (*(this->_vptr_IHandleEntity + 413))(this);
              if ( v31 != 0 && v32 != 0 && v31 != v32 )
              {
                v33 = (*(this->_vptr_IHandleEntity + 156))(this);
                v34 = CBaseEntity::GetHealth(this);
                v35 = (*(*v31 + 3144LL))(v31);
                CDOTA_PlayerResource::AddScaledHealing(g_pDOTAPlayerResource, v35, v19, v34, v33);
              }
            }
          }
        }
      }
    }
  }
}


// CDOTA_BaseNPC::OnTakeDamage_Alive  (line 5158, @0x000000000291b830, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, DOTAGameRules, Get, GetAttacker, GetBool, GetEHandle, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInflictor, GetInstance, GetInt, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetAttacker, SetUnit, State_Get, State_IsGameOver, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator bool, operator+=<int>, operator->, operator=, sDamageEvent
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetHealth, NextBotCombatCharacter::OnTakeDamage_Alive, CDOTA_CombatLog::AddHealthEvent, CDOTA_UnitInventory::GetItemInSlot, CDOTA_PlayerResource::AddDamageTaken, CUtlQueue<CDOTA_BaseNPC::sDamageEvent, CUtlMemory<CDOTA_BaseNPC::sDamageEvent, int> >::Insert, FireModifierEvent
// callers: CDOTA_BaseNPC_Creature::OnTakeDamage_Alive, CDOTA_BaseNPC_Hero::OnTakeDamage_Alive, CDOTA_BaseNPC_Building::OnTakeDamage_Alive, CDOTA_Unit_Nian_Attachment::OnTakeDamage_Alive, CDOTA_Unit_Roshan::OnTakeDamage_Alive
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_BaseNPC::OnTakeDamage_Alive(CDOTA_BaseNPC *const this, const CTakeDamageInfo *const info)
{
  int result; // eax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v6; // cx
  CEntityInstance *v7; // rax
  CEntityIdentity *v8; // rdx
  __int16 v9; // cx
  CEntityInstance *v10; // rax
  CEntityIdentity *v11; // rdx
  __int16 v12; // cx
  int m_bitsDotaDamageType; // eax
  float m_flOriginalDamage; // xmm0_4
  uint32 m_bitsDamageType; // eax
  int Health; // r14d
  int nDamageType; // r14d
  CBaseEntity *v18; // rbx
  CEntityInstance *v19; // rax
  CDOTA_BaseNPC *v20; // rcx
  CNetworkArrayBase<CHandle<CBaseEntity>,24,CDOTA_BaseNPC::NetworkVar_m_hAbilities> *p_m_hAbilities; // rbx
  int i; // r14d
  CEntityIdentity *v23; // rdx
  CEntityIdentity *v24; // rdx
  int j; // ebx
  CDOTA_Item *ItemInSlot; // rax
  int v27; // eax
  CEntityInstance *v28; // rax
  CEntityInstance *v29; // rbx
  int v30; // r14d
  int v31; // xmm0_4
  CEntityInstance *v32; // rax
  CEntityIdentity *v33; // rdx
  __int16 v34; // cx
  int v35; // eax
  __int64 m_Value; // rdx
  __int64 v37; // r14
  __int64 v38; // rax
  int nDamageCategory; // [rsp+24h] [rbp-E4h]
  int v40; // [rsp+28h] [rbp-E0h]
  float v41; // [rsp+28h] [rbp-E0h]
  int v42; // [rsp+2Ch] [rbp-DCh]
  _DWORD v43[2]; // [rsp+30h] [rbp-D8h] BYREF
  CDOTA_BaseNPC::sDamageEvent event; // [rsp+38h] [rbp-D0h] BYREF
  float m_flDamage; // [rsp+44h] [rbp-C4h]
  CModifierParams params; // [rsp+48h] [rbp-C0h] BYREF

  result = dota_unit_no_damage.m_pParent->m_Value.m_nValue;
  if ( result != 0 )
    return 0;
  if ( (*&g_pGameRules[6].m_szQuestName[28] - 6) > 1 )
  {
    LOBYTE(params.fOriginalDamage) = 0;
    event.hAttacker.m_Index = -1;
    m_flDamage = 0.0;
    params.ability.m_Index = 0;
    params.fDamage = NAN;
    params.nActivity = 0;
    params.bTooltip = 0;
    *(&params.bTooltip + 1) = 0;
    *(&params.bTooltip + 2) = 0;
    *(&params.bTooltip + 3) = 0;
    params.nTooltipParam = 0;
    params.fAttackTimeRemaining = NAN;
    params.inflictor.m_Index = 0;
    params.nDamageType = 0;
    memset(&params.iRecord, 0, 24);
    params.vNewLoc.y = 0.0;
    LOWORD(params.vNewLoc.z) = 0;
    *&params.bCraniumBasherTested = 0;
    *&params.bSuppressDamage = -1;
    params.nPlayerids_stick = -1;
    params.hattacker.m_Index = -1;
    if ( this != 0 )
    {
      m_pEntity = this->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v6 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        params.hattacker.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                 | v6 & 0x7FFF;
      }
    }
    v7 = CEntityHandle::operator CEntityInstance *(&info->m_hInflictor);
    if ( v7 != 0 )
    {
      v8 = v7->m_pEntity;
      if ( v8 != 0 )
      {
        v9 = 0x7FFF;
        if ( v8->m_EHandle.m_Index != -1 )
          v9 = v8->m_EHandle.m_Index & 0x7FFF;
        LODWORD(params.fAttackTimeRemaining) = (((v8->m_EHandle.m_Index >> 15) - (v8->m_flags & 1)) << 15) | v9 & 0x7FFF;
      }
    }
    v10 = CEntityHandle::operator CEntityInstance *(&info->m_hAttacker);
    if ( v10 != 0 && (v11 = v10->m_pEntity) != 0 )
    {
      v12 = 0x7FFF;
      if ( v11->m_EHandle.m_Index != -1 )
        v12 = v11->m_EHandle.m_Index & 0x7FFF;
      *&params.bSuppressDamage = (((v11->m_EHandle.m_Index >> 15) - (v11->m_flags & 1)) << 15) | v12 & 0x7FFF;
    }
    else
    {
      *&params.bSuppressDamage = -1;
    }
    m_bitsDotaDamageType = info->m_bitsDotaDamageType;
    m_flDamage = info->m_flDamage;
    m_flOriginalDamage = info->m_flOriginalDamage;
    params.m_nIssuerPlayerIndex = m_bitsDotaDamageType;
    m_bitsDamageType = info->m_bitsDamageType;
    *&params.ability.m_Index = m_flOriginalDamage;
    params.inflictor.m_Index = m_bitsDamageType;
    LOWORD(params.nDamageCategory) = info->m_iRecord;
    Health = CBaseEntity::GetHealth(this);
    v42 = NextBotCombatCharacter::OnTakeDamage_Alive(this, info);
    if ( this->m_bTrackDamageTaken && Health > CBaseEntity::GetHealth(this) )
    {
      v35 = CBaseEntity::GetHealth(this);
      m_Value = this->m_nTotalDamageTaken.m_Value;
      v37 = m_Value + Health - v35;
      if ( m_Value != v37 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 2240, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_nTotalDamageTaken.m_Value = v37;
      }
    }
    nDamageType = info->m_bitsDotaDamageType;
    nDamageCategory = info->m_nDotaDamageCategory;
    v40 = info->m_flDamage;
    v18 = CEntityHandle::operator CEntityInstance *(&info->m_hInflictor);
    v19 = CEntityHandle::operator CEntityInstance *(&info->m_hAttacker);
    if ( v19 != 0 && BYTE3(v19[7]._vptr_IHandleEntity) != 0 )
      v20 = v19;
    else
      v20 = 0;
    CDOTA_CombatLog::AddHealthEvent(g_pDOTACombatLog, 0, this, v20, v18, v40, nDamageType, nDamageCategory, 0);
    if ( (info->m_bitsDamageType & 0x20) == 0 && (info->m_iDamageCustom & 2) == 0 )
      FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_TAKEDAMAGE, &event.hAttacker);
    p_m_hAbilities = &this->m_hAbilities;
    for ( i = 24; i != 0; --i )
    {
      if ( p_m_hAbilities->m_Value[0].m_Index + 2 > 1 )
      {
        v23 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(p_m_hAbilities->m_Value[0].m_Index) >> 9) & 0x3F];
        if ( v23 != 0 )
        {
          v24 = &v23[p_m_hAbilities->m_Value[0].m_Index & 0x1FF];
          if ( v24 != 0 && p_m_hAbilities->m_Value[0].m_Index == v24->m_EHandle.m_Index )
            (*(v24->m_pInstance->_vptr_IHandleEntity + 90))(v24->m_pInstance, info);
        }
      }
      p_m_hAbilities = (p_m_hAbilities + 4);
    }
    for ( j = 0; j != 9; ++j )
    {
      ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(&this->m_Inventory, j);
      if ( ItemInSlot != 0 )
        (*(ItemInSlot->_vptr_IHandleEntity + 90))(ItemInSlot, info);
    }
    if ( (*(this->_vptr_IHandleEntity + 413))(this) != 0 && !this->m_bIsIllusion.m_Value )
    {
      v27 = (*(this->_vptr_IHandleEntity + 414))(this);
      CDOTA_PlayerResource::AddDamageTaken(g_pDOTAPlayerResource, v27, info);
    }
    v41 = 2.5 * info->m_flDamage;
    if ( v41 > CBaseEntity::GetHealth(this) )
    {
      v28 = CEntityHandle::operator CEntityInstance *(&info->m_hAttacker);
      v29 = v28;
      if ( v28 != 0
        && BYTE3(v28[7]._vptr_IHandleEntity) != 0
        && HIBYTE(v28[7].m_CScriptComponent) != this->m_iTeamNum.m_Value )
      {
        v30 = (*(v28->_vptr_IHandleEntity + 414))(v28);
        if ( LOBYTE(v29[71].m_pEntity) != 0 )
        {
          v38 = (*(v29->_vptr_IHandleEntity + 413))(v29);
          if ( v38 != 0 )
            v30 = (*(*v38 + 3144LL))(v38);
        }
        if ( v30 != -1 )
          this->m_nFarmClaimPlayerID = v30;
      }
    }
    v31 = 0;
    event.fTime = NAN;
    if ( g_pGameRules != 0 )
      v31 = *&g_pGameRules[18].m_szQuestName[20];
    v43[0] = v31;
    v43[1] = info->m_flDamage;
    v32 = CEntityHandle::operator CEntityInstance *(&info->m_hAttacker);
    if ( v32 != 0 )
    {
      v33 = v32->m_pEntity;
      if ( v33 != 0 )
      {
        v34 = 0x7FFF;
        if ( v33->m_EHandle.m_Index != -1 )
          v34 = v33->m_EHandle.m_Index & 0x7FFF;
        LODWORD(event.fTime) = (((v33->m_EHandle.m_Index >> 15) - (v33->m_flags & 1)) << 15) | v34 & 0x7FFF;
      }
    }
    CUtlQueue<CDOTA_BaseNPC::sDamageEvent,CUtlMemory<CDOTA_BaseNPC::sDamageEvent,int>>::Insert(
      &this->m_DamageEventQueue,
      v43);
    return v42;
  }
  return result;
}


// CDOTA_BaseNPC::ShouldDrawPath  (line 5252, @0x0000000002905c20, libserver.so)
// callers: CGridNavPath::Update
bool __fastcall CDOTA_BaseNPC::ShouldDrawPath(CDOTA_BaseNPC *const this)
{
  bool result; // al

  result = 0;
  if ( dota_unit_draw_paths.m_pParent->m_Value.m_nValue != 0 )
    return this->m_iIsControllableByPlayer64.m_Value != 0;
  return result;
}


// CDOTA_BaseNPC::GetLastNagTime  (line 5258, @0x0000000002905c50, libserver.so)
// callers: CDOTABaseAbility::CastAbility, UseEconItem
float __fastcall CDOTA_BaseNPC::GetLastNagTime(CDOTA_BaseNPC *const this)
{
  return this->m_flTimeSinceLastAbilityNag;
}


// CDOTA_BaseNPC::StartNagTime  (line 5263, @0x0000000002905c60, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// callers: CDOTABaseAbility::CastAbility, UseEconItem
void __fastcall CDOTA_BaseNPC::StartNagTime(CDOTA_BaseNPC *const this)
{
  float v1; // xmm0_4

  v1 = 0.0;
  if ( g_pGameRules != 0 )
    v1 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_flTimeSinceLastAbilityNag = v1;
}


// CDOTA_BaseNPC::SetAggroTarget  (line 5268, @0x0000000002916f40, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsRealHero, IsValid, LookupEntity, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTA_BaseNPC_Hero::OnGainAggro
// callers: CDOTABehaviorCommandMoveToTargetToAttack::OnEnd, CDOTABehaviorCommandMoveToTargetToAttack::OnUnitTeleported, CDOTABehaviorCommandMoveToTargetToAttack::OnStart, CDOTABehaviorMoveToNPCToAttack::OnEnd, CDOTABehaviorMoveToNPCToAttack::OnUnitTeleported, CDOTABehaviorMoveToNPCToAttack::OnDeAggro, CDOTABehaviorTutorialRazorMoveToNPCToAttack::OnInjured, CDOTABehaviorMoveToNPCToAttack::Update, CDOTABehaviorMoveToNPCToAttack::OnStartInternal, CDOTA_BaseNPC::Script_SetAggroTarget
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC::SetAggroTarget(CDOTA_BaseNPC *const this, CBaseEntity *pTarget)
{
  CBaseEntity *m_pInstance; // rcx
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // cx

  m_pInstance = 0;
  m_Index = this->m_hAggroTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAggroTarget.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[this->m_hAggroTarget.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( pTarget == m_pInstance )
  {
    if ( pTarget == 0 )
      goto LABEL_18;
  }
  else
  {
    if ( pTarget == 0 )
    {
LABEL_18:
      this->m_hAggroTarget.m_Index = -1;
      return;
    }
    if ( pTarget->m_bIsDOTANPC
      && (pTarget[2].m_hEffectEntity.m_Value.m_Index & 1) != 0
      && LOBYTE(pTarget[4].m_pfnMoveDone.__delta) == 0 )
    {
      CDOTA_BaseNPC_Hero::OnGainAggro(pTarget, this);
    }
  }
  m_pEntity = pTarget->m_pEntity;
  if ( m_pEntity == 0 )
    goto LABEL_18;
  v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  if ( m_pEntity->m_EHandle.m_Index == -1 )
    v10 = 0x7FFF;
  else
    v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  LOWORD(this->m_hAggroTarget.m_Index) = v10 | this->m_hAggroTarget.m_Index & 0x8000;
  this->m_hAggroTarget.m_Index = (v9 << 15) | this->m_hAggroTarget.m_Index & 0x7FFF;
}


// CDOTA_BaseNPC::SetAngerTarget  (line 5283, @0x0000000002905c90, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetFloat, GetSerialNumber, NetworkStateChanged, Set, Start, operator=, operator=<float>
// calls: CountdownTimer::Now
// callers: CDOTA_BaseNPC::AngerNearbyUnits
void __fastcall CDOTA_BaseNPC::SetAngerTarget(CDOTA_BaseNPC *const this, CDOTA_BaseNPC *pTarget)
{
  CEntityIdentity *m_pEntity; // rdx
  int v4; // eax
  __int16 v5; // cx
  double v6; // xmm0_8
  double v7; // xmm1_8
  float v8; // [rsp+8h] [rbp-18h]
  float m_fValue; // [rsp+Ch] [rbp-14h]

  if ( pTarget != 0 && (m_pEntity = pTarget->m_pEntity) != 0 )
  {
    v4 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v5 = 0x7FFF;
    else
      v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hAngerTarget.m_Index) = v5 | this->m_hAngerTarget.m_Index & 0x8000;
    this->m_hAngerTarget.m_Index = (v4 << 15) | this->m_hAngerTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hAngerTarget.m_Index = -1;
  }
  m_fValue = dota_unit_anger_duration.m_pParent->m_Value.m_fValue;
  *&v6 = CountdownTimer::Now(&this->m_AngerTimer) + m_fValue;
  if ( *&v6 != this->m_AngerTimer.m_timestamp.m_Value )
  {
    v8 = *&v6;
    (*(this->m_AngerTimer._vptr_CountdownTimer + 2))(&this->m_AngerTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v6 = LODWORD(v8);
    this->m_AngerTimer.m_timestamp.m_Value = v8;
  }
  if ( m_fValue != this->m_AngerTimer.m_duration.m_Value )
  {
    (*(this->m_AngerTimer._vptr_CountdownTimer + 2))(
      &this->m_AngerTimer,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v6,
      v7,
      m_fValue);
    this->m_AngerTimer.m_duration.m_Value = m_fValue;
  }
}


// CDOTA_BaseNPC::AlertNearbyUnits  (line 5292, @0x0000000002942bd0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, CanBeSeenByTeam, CanEntityBeSeenByMyTeam, Get, GetAlertTarget, GetEHandle, GetEntryIndex, GetFloat, GetInstance, GetSerialNumber, GetTeamNumber, IsCreature, IsElapsed, IsHero, Purge, RemoveAll, Set, SetWantsToFlee, ToDOTABaseNPC, operator CBaseEntity*, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CBaseModelEntity::CanBeSeenByTeam, CDOTAHeroList::AddPossibleBattleMusicPoint, CGridNav::GetNPCsInRange, CDOTA_BaseNPC::CanAutoAttackTarget, CUtlMemory<CDOTA_BaseNPC*, int>::Purge, CDOTA_BaseNPC::GetRangeToUnit, CDOTA_BaseNPC::GetAttackRange, CountdownTimer::Now, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::IsEnemyPriorityGreater, CountdownTimer::Start, __stack_chk_fail (14 total)
// callers: CDOTABaseAbility::CastAbility, CDOTABehaviorNeutralHome::Update, CDOTA_BaseNPC::Script_AlertNearbyUnits, DamageImpact
// globals: g_HeroList
void __fastcall CDOTA_BaseNPC::AlertNearbyUnits(CDOTA_BaseNPC *const this, CDOTA_BaseNPC *pAttacker, uint32 *hAbility)
{
  unsigned __int8 m_Value; // al
  uint32 m_iUnitType; // ecx
  int v7; // ecx
  __int64 v8; // rbx
  CDOTA_BaseNPC *v9; // r12
  float v10; // xmm1_4
  CDOTA_BaseNPC *v11; // rax
  unsigned __int8 v12; // al
  float AttackRange; // xmm0_4
  CEntityIdentity *m_pEntity; // rdx
  int v15; // eax
  __int16 v16; // cx
  CDOTA_BaseNPC *flRangeFromNPCToAlertTarget; // [rsp+8h] [rbp-278h]
  float flRangeFromNPCToAlertTargeta; // [rsp+8h] [rbp-278h]
  float flRangeFromNPCToAttacker; // [rsp+1Ch] [rbp-264h]
  EHANDLE hAbilitya; // [rsp+20h] [rbp-260h] BYREF
  GridNavBaseNPCStackVec_t npcs; // [rsp+30h] [rbp-250h] BYREF
  unsigned __int64 v22; // [rsp+248h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  m_Value = this->m_iTeamNum.m_Value;
  if ( pAttacker->m_iTeamNum.m_Value == m_Value )
    return;
  m_iUnitType = pAttacker->m_iUnitType;
  if ( (m_iUnitType & 1) != 0 )
  {
    if ( (this->m_iUnitType & 0x10001) == 0 )
      goto LABEL_4;
LABEL_10:
    hAbilitya.m_Index = *hAbility;
    CDOTAHeroList::AddPossibleBattleMusicPoint(&g_HeroList, pAttacker, this, &hAbilitya);
    m_Value = this->m_iTeamNum.m_Value;
    if ( m_Value != 4 )
      goto LABEL_5;
    goto LABEL_11;
  }
  v7 = m_iUnitType & 0x10000;
  if ( (this->m_iUnitType & 0x10001) != 0 && v7 != 0 )
    goto LABEL_10;
LABEL_4:
  if ( m_Value != 4 )
  {
LABEL_5:
    if ( pAttacker->m_pCollision != 0 && !CBaseModelEntity::CanBeSeenByTeam(pAttacker, m_Value) )
      return;
  }
LABEL_11:
  npcs.m_Size = 0;
  npcs.m_Memory.m_pMemory = &npcs.m_FixedMemory;
  npcs.m_Memory.m_nAllocationCount = 64;
  npcs.m_Memory.m_nGrowSize = 0x80000000;
  CGridNav::GetNPCsInRange(&g_GridNav, this, dota_unit_alert_radius.m_pParent->m_Value.m_fValue, &npcs);
  if ( npcs.m_Size > 0 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = npcs.m_Memory.m_pMemory[v8];
      if ( v9->m_iTeamNum.m_Value != this->m_iTeamNum.m_Value
        || v9->m_iIsControllableByPlayer64.m_Value != 0 && v9 != this )
      {
        goto LABEL_13;
      }
      if ( CDOTA_BaseNPC::CanAutoAttackTarget(npcs.m_Memory.m_pMemory[v8], pAttacker, 0) )
      {
        flRangeFromNPCToAttacker = CDOTA_BaseNPC::GetRangeToUnit(v9, pAttacker);
        if ( CDOTA_BaseNPC::GetAttackRange(v9) < flRangeFromNPCToAttacker || v9->m_bIsCamped )
        {
          if ( CountdownTimer::Now(&v9->m_AlertTimer) >= v9->m_AlertTimer.m_timestamp.m_Value
            || (v11 = CEntityHandle::operator CEntityInstance *(&v9->m_hAlertTarget),
                flRangeFromNPCToAlertTarget = v11,
                v11 == 0)
            || !v11->m_bIsDOTANPC
            || pAttacker == v11
            || !CDOTA_BaseNPC::CanAutoAttackTarget(v9, v11, 0)
            || (v12 = v9->m_iTeamNum.m_Value) != 4
            && flRangeFromNPCToAlertTarget->m_pCollision != 0
            && !CBaseModelEntity::CanBeSeenByTeam(flRangeFromNPCToAlertTarget, v12)
            || !CDOTA_BaseNPC::IsEnemyPriorityGreater(v9, flRangeFromNPCToAlertTarget, pAttacker)
            && (CDOTA_BaseNPC::IsEnemyPriorityGreater(v9, pAttacker, flRangeFromNPCToAlertTarget)
             || (flRangeFromNPCToAlertTargeta = CDOTA_BaseNPC::GetRangeToUnit(v9, flRangeFromNPCToAlertTarget),
                 AttackRange = CDOTA_BaseNPC::GetAttackRange(v9),
                 v10 = flRangeFromNPCToAlertTargeta,
                 flRangeFromNPCToAlertTargeta <= AttackRange)
             || flRangeFromNPCToAttacker < flRangeFromNPCToAlertTargeta) )
          {
            CountdownTimer::Start(&v9->m_AlertTimer, 2.0, v10);
            m_pEntity = pAttacker->m_pEntity;
            if ( m_pEntity != 0 )
            {
              v15 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
              v16 = 0x7FFF;
              if ( m_pEntity->m_EHandle.m_Index != -1 )
                v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
              LOWORD(v9->m_hAlertTarget.m_Index) = v16 | v9->m_hAlertTarget.m_Index & 0x8000;
              v9->m_hAlertTarget.m_Index = (v15 << 15) | v9->m_hAlertTarget.m_Index & 0x7FFF;
            }
            else
            {
              v9->m_hAlertTarget.m_Index = -1;
            }
          }
        }
        goto LABEL_13;
      }
      if ( v9->m_bIsCamped && SLOBYTE(pAttacker->m_nUnitState64.m_Value) < 0 )
      {
        v9->m_bWantsToFlee = 1;
        if ( npcs.m_Size <= ++v8 )
          break;
      }
      else
      {
LABEL_13:
        if ( npcs.m_Size <= ++v8 )
          break;
      }
    }
  }
  npcs.m_Size = 0;
  if ( (npcs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&npcs.m_Memory);
    if ( (npcs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&npcs.m_Memory);
  }
}


// CDOTA_BaseNPC::Script_AlertNearbyUnits  (line 5374, @0x0000000002942ff0, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, HScriptToEntity<CBaseEntity>, Set, ToDOTAAbility, ToDOTABaseNPC, ToEnt
// calls: GetScriptDesc<CEntityInstance>, __dynamic_cast, CDOTA_BaseNPC::AlertNearbyUnits
void __fastcall CDOTA_BaseNPC::Script_AlertNearbyUnits(CDOTA_BaseNPC *const this, HSCRIPT hAttacker, HSCRIPT hAbility)
{
  __int64 (__fastcall *v6)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *Script; // rax
  __int64 v8; // rax
  CDOTA_BaseNPC *v9; // rbx
  __int64 (__fastcall *v10)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *v11; // rax
  const void *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int16 v15; // si
  EHANDLE v16; // [rsp+0h] [rbp-40h] BYREF

  if ( hAttacker != 0
    && (v6 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        (v8 = v6(g_pScriptVM, hAttacker, Script)) != 0)
    && *(v8 + 339) != 0 )
  {
    v9 = v8;
  }
  else
  {
    v9 = 0;
  }
  if ( hAbility != 0
    && (v10 = *(*g_pScriptVM + 208LL),
        v11 = GetScriptDesc<CEntityInstance>(0),
        (v12 = v10(g_pScriptVM, hAbility, v11)) != 0) )
  {
    v13 = __dynamic_cast(v12, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
    v16.m_Index = -1;
    if ( v13 != 0 )
    {
      v14 = v13[1];
      if ( v14 != 0 )
      {
        v15 = 0x7FFF;
        if ( *(v14 + 16) != -1 )
          v15 = *(v14 + 16) & 0x7FFF;
        v16.m_Index = (((*(v14 + 16) >> 15) - (*(v14 + 48) & 1)) << 15) | v15 & 0x7FFF;
      }
    }
  }
  else
  {
    v16.m_Index = -1;
  }
  CDOTA_BaseNPC::AlertNearbyUnits(this, v9, &v16.m_Index);
}


// CDOTA_BaseNPC::SetTargetLastKnownPosition  (line 5381, @0x0000000002905de0, libserver.so)  // inlines: operator=
// calls: GetEntityPositionLastFrame
// callers: CDOTABehaviorCommandMoveToItemToTake::OnStart, CDOTABehaviorCommandMoveToRuneToTake::OnStart, CDOTABehaviorCommandMoveToNPCToGive::OnStart, CDOTABehaviorCommandMoveToNPC::OnStart, CDOTABehaviorAttack::Update, CDOTABehaviorAbilityPhase::Update, CDOTABehaviorAttackPhase::Update, CDOTABehaviorCommandMoveToNPCToGive::Update, CDOTABehaviorCommandMoveToTargetToAttack::OnStart, CDOTABehaviorCommandMoveToTargetToCast::OnStart, CDOTABehaviorCommandMoveToTargetToCast::Update, CDOTABehaviorCommandMoveToNPC::Update (15 total)
void __fastcall CDOTA_BaseNPC::SetTargetLastKnownPosition(CDOTA_BaseNPC *const this, CBaseEntity *pTarget)
{
  this->m_vTargetLastKnownPosition = GetEntityPositionLastFrame(pTarget);
}


// CDOTA_BaseNPC::IsChanneling  (line 5387, @0x00000000028fcea0, libserver.so)  // inlines: Get, GetCurrentActiveAbility, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// callers: DOTA_ExecuteOrders, CDOTA_Bot::IsUsingAbility, CDOTA_Bot::IsUsingItem, CDOTA_Bot::FindNearbyChannelingEnemy, CDOTA_Bot::SwitchToMode, CDOTA_BotMode_Attack::GetAttackScore, CDOTA_Bot_Script::IsChanneling, CDOTABehaviorPet::UpdateEmoting, CDOTABehaviorPet::Update_CheckForEmoteOpportunities, CDOTA_Modifier_SandKing_SandStorm::OnIntervalThink, CDOTA_Ability_Pudge_Rot::OnToggle, CDOTA_Modifier_Lich_FrostArmor_Autocast::OnAttack (17 total)
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_BaseNPC::IsChanneling(CDOTA_BaseNPC *const this)
{
  bool result; // al
  uint32 m_Index; // edx
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx

  result = 0;
  m_Index = this->m_hActiveAbility.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActiveAbility.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hActiveAbility.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index && v4->m_pInstance != 0 )
        return BYTE4(v4->m_pInstance[16].m_hPrivateScope.m_hScope);
    }
  }
  return result;
}


// CDOTA_BaseNPC::Interrupt  (line 5392, @0x0000000002904530, libserver.so)  // inlines: ClearHolding, ClearPseudoQueuedOrder, ClearQueuedOrders, RemoveAll
// calls: CDOTA_BaseNPC::UpdatePseudoQueuedOrder
// callers: CDOTA_Ability_ForestTrollHighPriest_Heal::DoDesiredCast, CDOTA_Ability_Greevil_Miniboss_Green_Overgrowth::OnSpellStart, dota_path_repro, CDOTA_PlayerResource::OnHeroReplaced, CDOTAPlayer::ClientCommand, CDOTA_Modifier_TutorialNPCBlocker::GetModifierMoveSpeed_Limit, dota_dev, CDOTA_Modifier_Kunkka_XMarksTheSpot_Thinker::OnIntervalThink, CDOTA_Modifier_Axe_BerserkersCall::OnCreated, CDOTA_Ability_Pudge_MeatHook::OnProjectileHit_ExtraData, CDOTA_Modifier_Juggernaut_Omnislash::OnIntervalThink, CDOTA_Ability_VengefulSpirit_Nether_Swap::OnSpellStart (44 total)
void __fastcall CDOTA_BaseNPC::Interrupt(CDOTA_BaseNPC *const this)
{
  this->m_bHold = 0;
  this->m_QueuedOrders.m_tail = QueueIter_t::QUEUE_ITERATOR_INVALID;
  this->m_QueuedOrders.m_head = QueueIter_t::QUEUE_ITERATOR_INVALID;
  this->m_PseudoQueuedOrders.m_nOrderType = 0;
  CDOTA_BaseNPC::UpdatePseudoQueuedOrder(this, 1);
  (*(this->_vptr_INextBotEventResponder + 56))(&this->INextBot);
}


// CDOTA_BaseNPC::InterruptChannel  (line 5400, @0x00000000028fd4a0, libserver.so)  // inlines: Get, GetCurrentActiveAbility, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// callers: CDOTA_Modifier_Corpselord_Revive::OnIntervalThink, CDOTA_Ability_DarkTrollWarlord_Ensnare::OnSpellStart, CDOTA_BaseNPC::CastAbilityImmediately, CDOTA_BaseNPC::AddState, CDOTA_Modifier_Bane_FiendsGrip::OnDestroy, CDOTA_Modifier_Pudge_Dismember::OnDestroy, CDOTA_Modifier_SandKing_SandStorm::OnDestroy, CDOTA_Modifier_Bane_FiendsGrip::OnCreated, CDOTA_Modifier_Pudge_Dismember::OnCreated, CDOTA_Modifier_ShadowShaman_Shackles::OnDestroy, CDOTA_Modifier_ShadowShaman_Shackles::OnCreated, CDOTA_Modifier_Lion_ManaDrain::OnDestroy (26 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC::InterruptChannel(CDOTA_BaseNPC *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx

  m_Index = this->m_hActiveAbility.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActiveAbility.m_Index) >> 9) & 0x3F];
    if ( v2 != 0 )
    {
      v3 = &v2[this->m_hActiveAbility.m_Index & 0x1FF];
      if ( v3 != 0
        && m_Index == v3->m_EHandle.m_Index
        && v3->m_pInstance != 0
        && BYTE4(v3->m_pInstance[16].m_hPrivateScope.m_hScope) != 0 )
      {
        (*(this->_vptr_INextBotEventResponder + 56))(&this->INextBot);
      }
    }
  }
}


// CDOTA_BaseNPC::InterruptMotionControllers  (line 5409, @0x00000000028f6be0, libserver.so)  // inlines: IsCurrentlyMotionControlled
// calls: CDOTALocomotor::InterruptMotionControllers
void __fastcall CDOTA_BaseNPC::InterruptMotionControllers(CDOTA_BaseNPC *const this, bool bFindClearSpace)
{
  __int64 v4; // rax
  CDOTALocomotor *v5; // rax

  if ( (*(this->_vptr_IHandleEntity + 376))(this) != 0 )
  {
    v4 = (*(this->_vptr_IHandleEntity + 376))(this);
    if ( *(v4 + 216) != 0 || *(v4 + 224) != 0 )
    {
      v5 = (*(this->_vptr_IHandleEntity + 376))(this);
      CDOTALocomotor::InterruptMotionControllers(v5, bFindClearSpace);
    }
  }
}


// CDOTA_BaseNPC::Script_RemoveHorizontalMotionController  (line 5417, @0x00000000028f5e50, libserver.so)
// calls: ToBuff, CDOTALocomotor::RemoveHorizontalMotionController
void __fastcall CDOTA_BaseNPC::Script_RemoveHorizontalMotionController(CDOTA_BaseNPC *const this, HSCRIPT hBuff)
{
  CDOTA_Buff *v3; // r12
  CHorizontalMotionController *v4; // r12
  CDOTALocomotor *v5; // rax

  v3 = ToBuff(hBuff);
  if ( v3 != 0 && (*(this->_vptr_IHandleEntity + 376))(this) != 0 )
  {
    v4 = (*(v3->_vptr_CDOTA_Buff + 4))(v3);
    v5 = (*(this->_vptr_IHandleEntity + 376))(this);
    CDOTALocomotor::RemoveHorizontalMotionController(v5, v4);
  }
}


// CDOTA_BaseNPC::Script_RemoveVerticalMotionController  (line 5426, @0x00000000028f5eb0, libserver.so)
// calls: ToBuff, CDOTALocomotor::RemoveVerticalMotionController
void __fastcall CDOTA_BaseNPC::Script_RemoveVerticalMotionController(CDOTA_BaseNPC *const this, HSCRIPT hBuff)
{
  CDOTA_Buff *v3; // r12
  CVerticalMotionController *v4; // r12
  CDOTALocomotor *v5; // rax

  v3 = ToBuff(hBuff);
  if ( v3 != 0 && (*(this->_vptr_IHandleEntity + 376))(this) != 0 )
  {
    v4 = (*(v3->_vptr_CDOTA_Buff + 3))(v3);
    v5 = (*(this->_vptr_IHandleEntity + 376))(this);
    CDOTALocomotor::RemoveVerticalMotionController(v5, v4);
  }
}


// CDOTA_BaseNPC::CreateAbilityTriggerRecord  (line 5436, @0x0000000002905e30, libserver.so)
// calls: CDOTA_CombatLog::AddAbilityEvent
// callers: CDOTA_Modifier_Axe_CounterHelix::OnAttackLanded
void __fastcall CDOTA_BaseNPC::CreateAbilityTriggerRecord(
        CDOTA_BaseNPC *const this,
        CDOTABaseAbility *pAbility,
        CDOTA_BaseNPC *pTriggerNPC,
        CDOTA_BaseNPC *pAbilityNPC)
{
  CDOTA_CombatLog::AddAbilityEvent(g_pDOTACombatLog, 13, pTriggerNPC, pAbilityNPC, pAbility, 0, vec3_origin);
}


// CDOTA_BaseNPC::CreateAttackRecord  (line 5449, @0x0000000002905e60, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, CUtlSymbolLarge, DOTAGameRules, GetEHandle, GetEntryIndex, GetGameTime, GetModifier_Constant_Additive, GetModifier_Percentage_Additive, GetModifier_Percentage_Highest, GetProjectileSpeed, GetRangedProjectileName, GetSerialNumber, InState, IsListeningToEvent, IsRangedAttacker, IsUnableToMiss, Max<float>, PreventCritOrBashAnimations, Set, SetAttacker, SetTarget, ToDOTABaseNPC, operator=
// calls: GetAttackRecordsManager, CDOTA_AttackRecordManager::AddNewAttackRecord, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CBaseAnimating::SelectWeightedSequence, RandomInt, CDOTAFogOfWarSystem::FindHeightLevelForEntity, CDOTA_ModifierManager::GetModifier_GetFirstOrb, CDOTA_ModifierManager::GetModifier_GetSecondOrb, KeyValues::KeyValues, KeyValues::~KeyValues, FireModifierEvent, CDOTA_ModifierManager::GetModifier_Percentage_Highest_Internal (17 total)
// callers: CDOTA_ActionRunner::PerformAction_CreateBonusAttack, CDOTA_Modifier_ControllerTest_MeleeAttack::OnIntervalThink, CDOTABehaviorAttackPhase::OnStart, CDOTA_BaseNPC::Script_PerformAttack, CDOTA_Ability_Holdout_Multishot::OnProjectileHit_ExtraData, CDOTA_Ability_DrowRanger_Marksmanship::OnProjectileHit_ExtraData, CDOTA_Ability_Holdout_Omnislash::OnProjectileHit, CDOTA_Modifier_ShadowShaman_SerpentWard::OnAttack, CDOTA_Ability_Sniper_Assassinate::OnProjectileHit, CDOTA_Modifier_Riki_TricksOfTheTrade_Phase::OnIntervalThink, CDOTA_Ability_PhantomAssassin_Stifling_Dagger::OnProjectileHit, CDOTA_Modifier_Gyrocopter_Flak_Cannon::OnAttack (18 total)
// strings: "orbkv"
CDOTA_AttackRecord *__fastcall CDOTA_BaseNPC::CreateAttackRecord(
        CDOTA_BaseNPC *const this,
        CBaseEntity *pTarget,
        bool bUseCastAttackOrb,
        bool bProcessProcs,
        bool bFakeAttack,
        bool bNeverMiss,
        bool bTriggeredAttack)
{
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *v12; // rax
  CDOTA_AttackRecord *v13; // rbx
  CEntityIdentity *m_pEntity; // rdx
  int v15; // eax
  __int16 v16; // cx
  CEntityIdentity *v17; // rax
  int v18; // edx
  __int16 v19; // cx
  float Modifier_Constant_Additive_Internal; // xmm0_4
  __int64 v21; // rax
  float m_iProjectileMoveSpeed; // xmm1_4
  bool v23; // al
  CDOTA_Orb *SecondOrb; // rax
  bool v25; // zf
  CEntityIdentity *v26; // rdx
  __int16 v27; // cx
  CEntityIdentity *v28; // rax
  __int16 v29; // cx
  unsigned int v30; // eax
  float m_flDamagePhysical; // xmm1_4
  __int64 v32; // rax
  float Modifier_Percentage_Highest_Internal; // xmm0_4
  float v34; // xmm1_4
  float v35; // xmm0_4
  __int64 v36; // rax
  float v37; // xmm1_4
  __int64 v38; // rax
  float m_flDamagePhysical_IllusionDisplay; // xmm2_4
  __int64 v40; // rax
  float v41; // xmm0_4
  float v42; // xmm0_4
  float v43; // xmm1_4
  __int64 v44; // rax
  float CastPoint; // xmm0_4
  float v46; // xmm2_4
  __int64 m_PhysicalSpawnGroupHandle_low; // rax
  CDOTA_ModifierManager *v49; // rdi
  float v50; // xmm0_4
  float v51; // xmm4_4
  __int64 v52; // rax
  float v53; // xmm0_4
  float v54; // xmm4_4
  float v55; // xmm2_4
  float v56; // xmm2_4
  HSequence v57; // eax
  __int64 v58; // rax
  float v59; // xmm0_4
  float v60; // xmm2_4
  float v61; // xmm0_4
  __int64 v62; // rax
  __int64 v63; // rax
  float v64; // xmm0_4
  float v65; // xmm1_4
  float v66; // xmm0_4
  __int64 v67; // rax
  __int64 v68; // rax
  float Modifier_Percentage_Additive_Internal; // xmm0_4
  __int64 v70; // rax
  float v71; // xmm0_4
  float m_flCriticalDisplay; // xmm2_4
  float v73; // xmm0_4
  __int64 v74; // rax
  float v75; // [rsp+4h] [rbp-FCh]
  unsigned int v78; // [rsp+10h] [rbp-F0h]
  float v79; // [rsp+10h] [rbp-F0h]
  float v80; // [rsp+10h] [rbp-F0h]
  float v81; // [rsp+10h] [rbp-F0h]
  CBaseEntity *v82; // [rsp+18h] [rbp-E8h]
  float v83; // [rsp+18h] [rbp-E8h]
  float v84; // [rsp+18h] [rbp-E8h]
  float v85; // [rsp+18h] [rbp-E8h]
  float v86; // [rsp+18h] [rbp-E8h]
  float v87; // [rsp+18h] [rbp-E8h]
  float v88; // [rsp+18h] [rbp-E8h]
  float v89; // [rsp+18h] [rbp-E8h]
  float v90; // [rsp+18h] [rbp-E8h]
  CModifierParams params; // [rsp+20h] [rbp-E0h] BYREF
  KeyValues orbkv; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v93; // [rsp+C8h] [rbp-38h]

  v93 = __readfsqword(0x28u);
  if ( pTarget != 0 )
  {
    if ( pTarget->m_bIsDOTANPC )
    {
      v82 = pTarget;
      goto LABEL_4;
    }
    if ( __dynamic_cast(pTarget, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_Item_Physical, 0) != 0
      || __dynamic_cast(pTarget, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_Item_Rune, 0) != 0 )
    {
      v82 = 0;
LABEL_4:
      AttackRecordsManager = GetAttackRecordsManager();
      v12 = CDOTA_AttackRecordManager::AddNewAttackRecord(AttackRecordsManager);
      v13 = v12;
      if ( this != 0 && (m_pEntity = this->m_pEntity) != 0 )
      {
        v15 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v16 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(v13->m_hSource.m_Index) = v16 | v13->m_hSource.m_Index & 0x8000;
        v13->m_hSource.m_Index = (v15 << 15) | v13->m_hSource.m_Index & 0x7FFF;
      }
      else
      {
        v12->m_hSource.m_Index = -1;
      }
      v13->m_hInflictor.m_Index = -1;
      v17 = pTarget->m_pEntity;
      if ( v17 != 0 )
      {
        v18 = (v17->m_EHandle.m_Index >> 15) - (v17->m_flags & 1);
        v19 = 0x7FFF;
        if ( v17->m_EHandle.m_Index != -1 )
          v19 = v17->m_EHandle.m_Index & 0x7FFF;
        LOWORD(v13->m_hTarget.m_Index) = v19 | v13->m_hTarget.m_Index & 0x8000;
        v13->m_hTarget.m_Index = (v18 << 15) | v13->m_hTarget.m_Index & 0x7FFF;
      }
      else
      {
        v13->m_hTarget.m_Index = -1;
      }
      v13->m_bUseCastAttackOrb = bUseCastAttackOrb;
      Modifier_Constant_Additive_Internal = 0.0;
      v13->m_bProcessProcs = bProcessProcs;
      v21 = this->m_ModifierManager.m_buffsForModifiers[72];
      m_iProjectileMoveSpeed = this->m_iProjectileMoveSpeed;
      if ( v21 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v21].m_Size > 0 )
      {
        v75 = this->m_iProjectileMoveSpeed;
        Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                                &this->m_ModifierManager,
                                                modifierfunction::MODIFIER_PROPERTY_PROJECTILE_SPEED_BONUS,
                                                &CModifierParams::s_Default);
        m_iProjectileMoveSpeed = v75;
      }
      v13->m_iProjectileSpeed = (Modifier_Constant_Additive_Internal + m_iProjectileMoveSpeed);
      v13->m_iszAutoAttackRangedParticle.u.m_Id = this->m_iszAutoAttackRangedParticle.u.m_Id;
      if ( CBaseAnimating::SelectWeightedSequence(this, 1504).m_Data != -1 )
        v13->m_animation = 1504 - (RandomInt(0, 1) != 0);
      v13->m_bAttack = 1;
      v13->m_bFakeAttack = bFakeAttack;
      v23 = 1;
      if ( !bNeverMiss )
        v23 = (this->m_nUnitState64.m_Value & 0x10000) != 0;
      v13->m_bNeverMiss = v23;
      v13->m_bTriggeredAttack = bTriggeredAttack;
      v13->m_bRangedAttack = (this->m_iAttackCapabilities.m_Value & 2) != 0;
      v13->m_flAttackHeight = CDOTAFogOfWarSystem::FindHeightLevelForEntity(&g_DOTAFogOfWarSystem, this);
      if ( bProcessProcs )
      {
        v13->m_pOrb = CDOTA_ModifierManager::GetModifier_GetFirstOrb(&this->m_ModifierManager, v13);
        SecondOrb = CDOTA_ModifierManager::GetModifier_GetSecondOrb(&this->m_ModifierManager, v13);
        v25 = v13->m_pOrb == 0;
        v13->m_pOrb2 = SecondOrb;
        if ( !v25 )
        {
          KeyValues::KeyValues(&orbkv, "orbkv");
          (*(v13->m_pOrb->_vptr_CDOTA_Orb + 5))(v13->m_pOrb, &orbkv);
          KeyValues::~KeyValues(&orbkv);
          SecondOrb = v13->m_pOrb2;
        }
        if ( SecondOrb != 0 )
        {
          KeyValues::KeyValues(&orbkv, "orbkv");
          (*(v13->m_pOrb2->_vptr_CDOTA_Orb + 5))(v13->m_pOrb2, &orbkv);
          KeyValues::~KeyValues(&orbkv);
        }
      }
      params.bCraniumBasherTested = 0;
      params.ability.m_Index = -1;
      params.fDamage = 0.0;
      params.fOriginalDamage = 0.0;
      params.nActivity = -1;
      params.bTooltip = 0;
      params.nTooltipParam = 0;
      params.bIgnoreInvis = 0;
      params.bNoCooldown = 0;
      params.bReincarnate = 0;
      params.bDoNotConsume = 0;
      params.fDistance = 0.0;
      params.inflictor.m_Index = -1;
      params.nDamageflags = 0;
      params.nDamageCategory = 0;
      memset(&params.pOrb, 0, 24);
      params.bHeartRegenApplied = 0;
      params.bDiffusalApplied = 0;
      params.bChainLightningConsidered = 0;
      params.bSuppressDamage = 0;
      params.bRangedAttack = 0;
      params.nPlayerids_stick = 0;
      params.hattacker.m_Index = -1;
      params.htarget.m_Index = -1;
      params.hunit.m_Index = -1;
      if ( this != 0 )
      {
        v26 = this->m_pEntity;
        if ( v26 != 0 )
        {
          v27 = 0x7FFF;
          if ( v26->m_EHandle.m_Index != -1 )
            v27 = v26->m_EHandle.m_Index & 0x7FFF;
          params.hattacker.m_Index = (((v26->m_EHandle.m_Index >> 15) - (v26->m_flags & 1)) << 15) | v27 & 0x7FFF;
        }
      }
      v28 = pTarget->m_pEntity;
      if ( v28 != 0 )
      {
        v29 = 0x7FFF;
        if ( v28->m_EHandle.m_Index != -1 )
          v29 = v28->m_EHandle.m_Index & 0x7FFF;
        params.htarget.m_Index = (((v28->m_EHandle.m_Index >> 15) - (v28->m_flags & 1)) << 15) | v29 & 0x7FFF;
      }
      params.iRecord = v13->m_iRecord;
      FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_ATTACK_RECORD, &params);
      v78 = (*(this->_vptr_IHandleEntity + 417))(this);
      v30 = (*(this->_vptr_IHandleEntity + 416))(this);
      m_flDamagePhysical = RandomInt(v30, v78);
      v13->m_flDamagePhysical = m_flDamagePhysical;
      if ( !this->m_bIsIllusion.m_Value )
      {
        v68 = this->m_ModifierManager.m_buffsForModifiers[34];
        Modifier_Percentage_Additive_Internal = 1.0;
        if ( v68 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v68].m_Size > 0 )
        {
          Modifier_Percentage_Additive_Internal = CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal(
                                                    &this->m_ModifierManager,
                                                    modifierfunction::MODIFIER_PROPERTY_BASEDAMAGEOUTGOING_PERCENTAGE,
                                                    &params);
          m_flDamagePhysical = v13->m_flDamagePhysical;
        }
        v13->m_flDamagePhysical = m_flDamagePhysical * Modifier_Percentage_Additive_Internal;
      }
      v32 = this->m_ModifierManager.m_buffsForModifiers[35];
      Modifier_Percentage_Highest_Internal = 1.0;
      if ( v32 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v32].m_Size > 0 )
        Modifier_Percentage_Highest_Internal = CDOTA_ModifierManager::GetModifier_Percentage_Highest_Internal(
                                                 &this->m_ModifierManager,
                                                 modifierfunction::MODIFIER_PROPERTY_BASEDAMAGEOUTGOING_PERCENTAGE_UNIQUE,
                                                 &params);
      v34 = v13->m_flDamagePhysical * Modifier_Percentage_Highest_Internal;
      v13->m_flDamagePhysical = v34;
      if ( !this->m_bIsIllusion.m_Value )
      {
        v63 = this->m_ModifierManager.m_buffsForModifiers[0];
        v64 = 0.0;
        if ( v63 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v63].m_Size > 0 )
        {
          v64 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                  &this->m_ModifierManager,
                  modifierfunction::MODIFIER_PROPERTY_PREATTACK_BONUS_DAMAGE,
                  &params);
          v34 = v13->m_flDamagePhysical;
        }
        v65 = v34 + v64;
        v66 = 0.0;
        v13->m_flDamagePhysical = v65;
        v67 = this->m_ModifierManager.m_buffsForModifiers[1];
        if ( v67 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v67].m_Size > 0 )
        {
          v66 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                  &this->m_ModifierManager,
                  modifierfunction::MODIFIER_PROPERTY_PREATTACK_BONUS_DAMAGE_PROC,
                  &params);
          v65 = v13->m_flDamagePhysical;
        }
        v34 = v65 + v66;
        v13->m_flDamagePhysical = v34;
      }
      v13->m_flCriticalDisplay = v34;
      v35 = 1.0;
      v36 = this->m_ModifierManager.m_buffsForModifiers[28];
      if ( v36 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v36].m_Size > 0 )
      {
        v35 = CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal(
                &this->m_ModifierManager,
                modifierfunction::MODIFIER_PROPERTY_DAMAGEOUTGOING_PERCENTAGE,
                &params);
        v34 = v13->m_flDamagePhysical;
      }
      v13->m_flDamagePhysical = v34 * v35;
      v37 = 0.0;
      v38 = this->m_ModifierManager.m_buffsForModifiers[2];
      if ( v38 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v38].m_Size > 0 )
        v37 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                &this->m_ModifierManager,
                modifierfunction::MODIFIER_PROPERTY_PREATTACK_BONUS_DAMAGE_POST_CRIT,
                &params);
      if ( v82 != 0 && (v82[2].m_hEffectEntity.m_Value.m_Index & 0x10) == 0 && !bFakeAttack && bProcessProcs )
      {
        m_PhysicalSpawnGroupHandle_low = LOBYTE(v82[4].m_NetworkTransmitComponent.m_PhysicalSpawnGroupHandle);
        if ( m_PhysicalSpawnGroupHandle_low == 0xFF
          || *(&v82[4].m_CBodyComponent->_vptr_CBodyComponent + 6 * m_PhysicalSpawnGroupHandle_low) <= 0 )
        {
          v51 = 1.0;
        }
        else
        {
          v49 = &v82[4];
          v84 = v37;
          v50 = CDOTA_ModifierManager::GetModifier_Percentage_Highest_Internal(
                  v49,
                  modifierfunction::MODIFIER_PROPERTY_PREATTACK_TARGET_CRITICALSTRIKE,
                  &params);
          v37 = v84;
          v51 = v50;
        }
        v52 = this->m_ModifierManager.m_buffsForModifiers[83];
        v53 = 1.0;
        if ( v52 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v52].m_Size > 0 )
        {
          v79 = v51;
          v85 = v37;
          v53 = CDOTA_ModifierManager::GetModifier_Percentage_Highest_Internal(
                  &this->m_ModifierManager,
                  modifierfunction::MODIFIER_PROPERTY_PREATTACK_CRITICALSTRIKE,
                  &params);
          v51 = v79;
          v37 = v85;
        }
        v54 = fmaxf(v51, v53);
        v55 = v13->m_flDamagePhysical * v54;
        v13->m_flCriticalBonus = v54;
        v13->m_flDamagePhysical = v55;
        v13->m_flCriticalDamage = v55;
        if ( this->m_bIsIllusion.m_Value )
        {
          v70 = this->m_ModifierManager.m_buffsForModifiers[34];
          v71 = 1.0;
          if ( v70 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v70].m_Size > 0 )
          {
            v80 = v37;
            v89 = v54;
            v71 = CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal(
                    &this->m_ModifierManager,
                    modifierfunction::MODIFIER_PROPERTY_BASEDAMAGEOUTGOING_PERCENTAGE,
                    &CModifierParams::s_Default);
            v37 = v80;
            v54 = v89;
          }
          m_flCriticalDisplay = v13->m_flCriticalDisplay * v71;
          v73 = 0.0;
          v13->m_flCriticalDisplay = m_flCriticalDisplay;
          v74 = this->m_ModifierManager.m_buffsForModifiers[0];
          if ( v74 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v74].m_Size > 0 )
          {
            v81 = v37;
            v90 = v54;
            v73 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                    &this->m_ModifierManager,
                    modifierfunction::MODIFIER_PROPERTY_PREATTACK_BONUS_DAMAGE,
                    &params);
            m_flCriticalDisplay = v13->m_flCriticalDisplay;
            v37 = v81;
            v54 = v90;
          }
          v55 = (m_flCriticalDisplay + v73) * v54;
        }
        v13->m_flCriticalDisplay = v55 + v37;
        if ( v54 > 1.0 )
        {
          v56 = 0.0;
          if ( g_pGameRules != 0 )
            v56 = *&g_pGameRules[18].m_szQuestName[20];
          if ( this->m_flCritBashFailUntil <= v56 )
          {
            v86 = v37;
            v57.m_Data = CBaseAnimating::SelectWeightedSequence(this, 1505).m_Data;
            v37 = v86;
            if ( v57.m_Data != -1 )
              v13->m_animation = 1505;
          }
        }
      }
      m_flDamagePhysical_IllusionDisplay = v13->m_flDamagePhysical;
      v13->m_flDamagePhysical_IllusionDisplay = m_flDamagePhysical_IllusionDisplay;
      if ( this->m_bIsIllusion.m_Value )
      {
        v58 = this->m_ModifierManager.m_buffsForModifiers[34];
        v59 = 1.0;
        if ( v58 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v58].m_Size > 0 )
        {
          v87 = v37;
          v59 = CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal(
                  &this->m_ModifierManager,
                  modifierfunction::MODIFIER_PROPERTY_BASEDAMAGEOUTGOING_PERCENTAGE,
                  &CModifierParams::s_Default);
          m_flDamagePhysical_IllusionDisplay = v13->m_flDamagePhysical_IllusionDisplay;
          v37 = v87;
        }
        v60 = m_flDamagePhysical_IllusionDisplay * v59;
        v61 = 0.0;
        v13->m_flDamagePhysical_IllusionDisplay = v60;
        v62 = this->m_ModifierManager.m_buffsForModifiers[0];
        if ( v62 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v62].m_Size > 0 )
        {
          v88 = v37;
          v61 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                  &this->m_ModifierManager,
                  modifierfunction::MODIFIER_PROPERTY_PREATTACK_BONUS_DAMAGE,
                  &params);
          v60 = v13->m_flDamagePhysical_IllusionDisplay;
          v37 = v88;
        }
        v13->m_flDamagePhysical_IllusionDisplay = v60 + v61;
      }
      v40 = this->m_ModifierManager.m_buffsForModifiers[29];
      v41 = 1.0;
      if ( v40 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v40].m_Size > 0 )
      {
        v83 = v37;
        v41 = CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal(
                &this->m_ModifierManager,
                modifierfunction::MODIFIER_PROPERTY_DAMAGEOUTGOING_PERCENTAGE_ILLUSION,
                &params);
        v37 = v83;
      }
      v42 = (v41 * v13->m_flDamagePhysical) + v37;
      v43 = v37 + v13->m_flDamagePhysical_IllusionDisplay;
      v13->m_flDamagePhysical = v42;
      v13->m_flDamagePhysical_IllusionDisplay = v43;
      v44 = this->m_ModifierManager.m_buffsForModifiers[8];
      if ( v44 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v44].m_Size > 0 )
        CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
          &this->m_ModifierManager,
          modifierfunction::MODIFIER_PROPERTY_PRE_ATTACK,
          &params);
      CastPoint = CDOTA_BaseNPC::GetCastPoint(this, 1);
      v46 = 0.0;
      if ( g_pGameRules != 0 )
        v46 = *&g_pGameRules[18].m_szQuestName[20];
      this->m_flCritBashFailUntil = fmaxf(0.0, CastPoint + 0.1) + v46;
      return v13;
    }
  }
  return 0;
}


// CDOTA_BaseNPC::Script_PerformAttack  (line 5592, @0x000000000295ba30, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTABaseNPC, ToEnt
// calls: GetScriptDesc<CEntityInstance>, CDOTA_BaseNPC::CreateAttackRecord, CDOTA_BaseNPC::PerformAttack
void __fastcall CDOTA_BaseNPC::Script_PerformAttack(
        CDOTA_BaseNPC *const this,
        HSCRIPT hTarget,
        bool bUseCastAttackOrb,
        bool bProcessProcs,
        bool bSkipCooldown,
        bool bIgnoreInvis,
        bool bUseProjectile,
        bool bFakeAttack,
        bool bNeverMiss)
{
  __int64 (__fastcall *v12)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r12
  ScriptClassDesc_t *Script; // rax
  CBaseEntity *v14; // rax
  CDOTA_AttackRecord *AttackRecord; // rax
  CBaseEntity *hTargetb; // [rsp+28h] [rbp-38h]

  if ( hTarget != 0 )
  {
    v12 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v14 = v12(g_pScriptVM, hTarget, Script);
    if ( v14 != 0 && v14->m_bIsDOTANPC )
    {
      hTargetb = v14;
      AttackRecord = CDOTA_BaseNPC::CreateAttackRecord(
                       this,
                       v14,
                       bUseCastAttackOrb,
                       bProcessProcs,
                       bFakeAttack,
                       bNeverMiss,
                       0);
      CDOTA_BaseNPC::PerformAttack(this, AttackRecord, hTargetb, bSkipCooldown, bIgnoreInvis, bUseProjectile, 0);
    }
  }
}


// CDOTA_BaseNPC::GetAttackDamage  (line 5603, @0x00000000028f5de0, libserver.so)
// calls: RandomInt
// callers: CDOTA_BotMode_DefendTower::CalculateDesiredLocation, CDOTA_Bot::IsAboutToDie, CDOTA_Bot::GetGankingEstimatedDamage, CDOTA_BotMode_Attack::GetAttackScore, CDOTA_BotMode_DefendTower::Think, CDOTA_BotMode_EvasiveManeuvers::Think
int __fastcall CDOTA_BaseNPC::GetAttackDamage(CDOTA_BaseNPC *const this)
{
  unsigned int v2; // r12d
  unsigned int v3; // eax

  v2 = (*(this->_vptr_IHandleEntity + 417))(this);
  v3 = (*(this->_vptr_IHandleEntity + 416))(this);
  return RandomInt(v3, v2);
}


// CDOTA_BaseNPC::GetAverageTrueAttackDamage  (line 5608, @0x00000000029069f0, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, GetEHandle, GetEntryIndex, GetModifier_Constant_Additive, GetModifier_Percentage_Additive, GetModifier_Percentage_Highest, GetSerialNumber, IsListeningToEvent, Set, SetAttacker, SetTarget, operator=
// calls: CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal, CDOTA_ModifierManager::GetModifier_Percentage_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal
// callers: CDOTA_Modifier_Tutorial_LastHitHelper::GetDamageRatio, CDOTA_Bot::CanKillUnit, CDOTA_Bot::GetEstimatedDamageToTarget, CDOTA_BotMode_Attack::GetAttackScore, CDOTA_BotMode_Farm::GetFarmDesire, CDOTA_BotMode_Farm::GetNeutralFarmingLevel, CDOTA_TeamCommander::UpdateDefendLaneDesires, CDOTA_TeamCommander::UpdatePushLaneDesires, CDOTA_Bot_Script::GetEstimatedDamageToTarget, CDOTA_BaseNPC::Script_GetAverageTrueAttackDamage, CDOTA_Ability_PhantomLancer_SpiritLance::GetAbilityDamageToTargetOverInterval, CDOTA_Ability_PhantomAssassin_PhantomStrike::GetAbilityDamageToTargetOverInterval (27 total)
int __fastcall CDOTA_BaseNPC::GetAverageTrueAttackDamage(CDOTA_BaseNPC *const this, CDOTA_BaseNPC *pTarget)
{
  int v4; // r12d
  int v5; // eax
  CEntityIdentity *m_pEntity; // rdx
  int v7; // r12d
  __int16 v8; // ax
  CEntityIdentity *v9; // rcx
  __int16 v10; // ax
  __int64 v11; // rax
  float Modifier_Percentage_Additive_Internal; // xmm0_4
  __int64 v13; // rax
  float v14; // xmm1_4
  float Modifier_Percentage_Highest_Internal; // xmm0_4
  int v16; // r12d
  __int64 v17; // rax
  float v18; // xmm1_4
  float Modifier_Constant_Additive_Internal; // xmm0_4
  int v20; // r12d
  __int64 v21; // rax
  float v22; // xmm1_4
  float v23; // xmm0_4
  int v24; // r12d
  CModifierParams parms; // [rsp+0h] [rbp-B0h] BYREF

  v4 = (*(this->_vptr_IHandleEntity + 416))(this);
  v5 = (*(this->_vptr_IHandleEntity + 417))(this);
  m_pEntity = this->m_pEntity;
  parms.bCraniumBasherTested = 0;
  parms.bHeartRegenApplied = 0;
  parms.bDiffusalApplied = 0;
  parms.ability.m_Index = -1;
  parms.bChainLightningConsidered = 0;
  parms.fDamage = 0.0;
  parms.bSuppressDamage = 0;
  parms.fOriginalDamage = 0.0;
  parms.nActivity = -1;
  parms.bTooltip = 0;
  v7 = ((v5 + v4) * 0.5);
  parms.bIgnoreInvis = 0;
  parms.nTooltipParam = 0;
  parms.bNoCooldown = 0;
  parms.bReincarnate = 0;
  parms.bDoNotConsume = 0;
  parms.fDistance = 0.0;
  parms.inflictor.m_Index = -1;
  parms.nDamageflags = 0;
  parms.nDamageCategory = 0;
  memset(&parms.pOrb, 0, 24);
  parms.bRangedAttack = 0;
  parms.nPlayerids_stick = 0;
  parms.hattacker.m_Index = -1;
  parms.htarget.m_Index = -1;
  parms.hunit.m_Index = -1;
  if ( m_pEntity != 0 )
  {
    v8 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    parms.hattacker.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v8 & 0x7FFF;
  }
  if ( pTarget != 0 )
  {
    v9 = pTarget->m_pEntity;
    if ( v9 != 0 )
    {
      if ( v9->m_EHandle.m_Index == -1 )
        v10 = 0x7FFF;
      else
        v10 = v9->m_EHandle.m_Index & 0x7FFF;
      parms.htarget.m_Index = (((v9->m_EHandle.m_Index >> 15) - (v9->m_flags & 1)) << 15) | v10 & 0x7FFF;
    }
  }
  v11 = this->m_ModifierManager.m_buffsForModifiers[34];
  parms.bTooltip = 1;
  parms.iRecord = -1;
  Modifier_Percentage_Additive_Internal = 1.0;
  if ( v11 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v11].m_Size > 0 )
    Modifier_Percentage_Additive_Internal = CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal(
                                              &this->m_ModifierManager,
                                              modifierfunction::MODIFIER_PROPERTY_BASEDAMAGEOUTGOING_PERCENTAGE,
                                              &parms);
  v13 = this->m_ModifierManager.m_buffsForModifiers[35];
  v14 = v7 * Modifier_Percentage_Additive_Internal;
  Modifier_Percentage_Highest_Internal = 1.0;
  v16 = v14;
  if ( v13 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v13].m_Size > 0 )
    Modifier_Percentage_Highest_Internal = CDOTA_ModifierManager::GetModifier_Percentage_Highest_Internal(
                                             &this->m_ModifierManager,
                                             modifierfunction::MODIFIER_PROPERTY_BASEDAMAGEOUTGOING_PERCENTAGE_UNIQUE,
                                             &parms);
  v17 = this->m_ModifierManager.m_buffsForModifiers[0];
  v18 = v16 * Modifier_Percentage_Highest_Internal;
  Modifier_Constant_Additive_Internal = 0.0;
  v20 = v18;
  if ( v17 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v17].m_Size > 0 )
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            &this->m_ModifierManager,
                                            modifierfunction::MODIFIER_PROPERTY_PREATTACK_BONUS_DAMAGE,
                                            &parms);
  v21 = this->m_ModifierManager.m_buffsForModifiers[83];
  v22 = v20 + Modifier_Constant_Additive_Internal;
  v23 = 1.0;
  v24 = v22;
  if ( v21 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v21].m_Size > 0 )
    v23 = CDOTA_ModifierManager::GetModifier_Percentage_Highest_Internal(
            &this->m_ModifierManager,
            modifierfunction::MODIFIER_PROPERTY_PREATTACK_CRITICALSTRIKE,
            &parms);
  return (v24 * v23);
}


// CDOTA_BaseNPC::Script_GetAverageTrueAttackDamage  (line 5626, @0x0000000002906cf0, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTABaseNPC, ToEnt
// calls: GetScriptDesc<CEntityInstance>, CDOTA_BaseNPC::GetAverageTrueAttackDamage
int __fastcall CDOTA_BaseNPC::Script_GetAverageTrueAttackDamage(CDOTA_BaseNPC *const this, HSCRIPT hTarget)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  CDOTA_BaseNPC *v6; // rax

  if ( hTarget != 0
    && (v4 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        (v6 = v4(g_pScriptVM, hTarget, Script)) != 0)
    && v6->m_bIsDOTANPC )
  {
    return CDOTA_BaseNPC::GetAverageTrueAttackDamage(this, v6);
  }
  else
  {
    return CDOTA_BaseNPC::GetAverageTrueAttackDamage(this, 0);
  }
}


// CDOTA_BaseNPC::CanBeAutoAttacked  (line 5635, @0x0000000002919e20, libserver.so)  // inlines: CVariantBase, Free, ~CVariantBase
// calls: CDOTA_BaseNPC::IsAllowedToBeAttacked, CDOTA_ModifierManager::GetBuffByIndex, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
bool __fastcall CDOTA_BaseNPC::CanBeAutoAttacked(CDOTA_BaseNPC *const this)
{
  bool IsAllowedToBeAttacked; // r14
  int v3; // ebx
  CDOTA_Buff *BuffByIndex; // rax
  ScriptVariant_t returnvalue; // [rsp+0h] [rbp-30h] BYREF

  IsAllowedToBeAttacked = CDOTA_BaseNPC::IsAllowedToBeAttacked(this);
  if ( !IsAllowedToBeAttacked )
    return IsAllowedToBeAttacked;
  v3 = 0;
  if ( this->m_ModifierManager.m_bufflist.m_Size <= 0 )
    return IsAllowedToBeAttacked;
  while ( 1 )
  {
    BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(&this->m_ModifierManager, v3, 0);
    returnvalue.m_type = 0;
    returnvalue.m_flags = 0;
    returnvalue.m_uint64 = 0;
    if ( BuffByIndex != 0 && (*(BuffByIndex->_vptr_CDOTA_Buff + 13))(BuffByIndex) == 0 )
      break;
    if ( ++v3 >= this->m_ModifierManager.m_bufflist.m_Size )
      return IsAllowedToBeAttacked;
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&returnvalue);
  return 0;
}


// CDOTA_BaseNPC::CanAutoAttack  (line 5659, @0x0000000002906d70, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetModifier_Constant_Highest, IndexToIdentity, IsListeningToEvent, IsValid, LookupEntity, operator CEntityInstance*
// calls: CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal
// callers: CDOTA_BaseNPC::GetAutoAttackTarget, CDOTA_Unit_Roquelaire::Spawn
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_BaseNPC::CanAutoAttack(CDOTA_BaseNPC *const this, bool bAttackMove)
{
  bool result; // al
  __int64 v4; // rax
  __int64 v5; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx

  if ( !bAttackMove )
  {
    v4 = this->m_ModifierManager.m_buffsForModifiers[9];
    if ( v4 != 0xFF
      && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v4].m_Size > 0
      && CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
           &this->m_ModifierManager,
           modifierfunction::MODIFIER_PROPERTY_INVISIBILITY_LEVEL,
           &CModifierParams::s_Default) > 0.0 )
    {
      return 0;
    }
  }
  if ( (this->m_nUnitState64.m_Value & 2) != 0 )
    return 0;
  v5 = this->m_ModifierManager.m_buffsForModifiers[95];
  if ( v5 != 0xFF
    && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v5].m_Size > 0
    && CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
         &this->m_ModifierManager,
         modifierfunction::MODIFIER_PROPERTY_DISABLE_AUTOATTACK,
         &CModifierParams::s_Default) == 1.0 )
  {
    return 0;
  }
  if ( this->m_iAttackCapabilities.m_Value == 0 )
    return 0;
  if ( (this->m_iUnitType & 0x10) == 0 || (result = 0, dota_disable_tower_autoattacks.m_pParent->m_Value.m_nValue == 0) )
  {
    m_Index = this->m_hTutorialSpawner.m_Index;
    result = 1;
    if ( m_Index + 2 > 1 )
    {
      v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTutorialSpawner.m_Index) >> 9) & 0x3F];
      if ( v7 != 0 )
      {
        v8 = &v7[this->m_hTutorialSpawner.m_Index & 0x1FF];
        if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
          return *(&v8->m_pInstance[16].m_worldGroupId + 6) ^ 1;
      }
    }
  }
  return result;
}


// CDOTA_BaseNPC::ForceKill  (line 5686, @0x00000000028f5f10, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, SetAttacker, SetDamage, SetDamageCustom, SetInflictor, operator=
// calls: CBaseEntity::GetHealth, CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::SetHealth, CBaseEntity::TakeDamage, CTakeDamageInfo::~CTakeDamageInfo, _Unwind_Resume
// callers: CDOTA_Modifier_Healing_Campfire_Aura::OnDestroy, CDOTA_Modifier_Kill::OnDestroy, CDOTA_Modifier_Illusion::OnDestroy, CDOTA_Tutorial::MurderAllCreeps, dota_kill_creeps, dota_kill_buildings, CDOTA_BaseNPC::DrawDebugTextOverlays, CDOTA_BaseNPC_Hero::RemovePet, CDOTAHeroList::LimitedUnitEnsureSpace, CDOTA_Modifier_Juggernaut_Healing_Ward_Aura::OnDestroy, CDOTA_Modifier_Morphling_Hybrid_Special::OnThinkInternal, CDOTA_Ability_Morphling_Replicate::OnUnStolen (62 total)
void __fastcall CDOTA_BaseNPC::ForceKill(CDOTA_BaseNPC *const this, bool bReincarnate)
{
  CEntityIdentity *m_pEntity; // rax
  __int16 v5; // si
  int v6; // edx
  int v7; // edx
  __int16 v8; // cx
  CTakeDamageInfo info; // [rsp+0h] [rbp-B0h] BYREF

  if ( CBaseEntity::GetHealth(this) > 0 )
  {
    CTakeDamageInfo::CTakeDamageInfo(&info);
    info.m_flDamage = 0.0;
    if ( this != 0 && (m_pEntity = this->m_pEntity) != 0 )
    {
      v5 = 0x7FFF;
      v6 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(info.m_hAttacker.m_Index) = v5 | info.m_hAttacker.m_Index & 0x8000;
      info.m_hAttacker.m_Index = (v6 << 15) | info.m_hAttacker.m_Index & 0x7FFF;
      v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v8 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(info.m_hInflictor.m_Index) = v8 | info.m_hInflictor.m_Index & 0x8000;
      info.m_hInflictor.m_Index = (v7 << 15) | info.m_hInflictor.m_Index & 0x7FFF;
    }
    else
    {
      info.m_hAttacker.m_Index = -1;
      info.m_hInflictor.m_Index = -1;
    }
    if ( bReincarnate )
      info.m_iDamageCustom = 1;
    CBaseEntity::SetHealth(this, 0);
    CBaseEntity::TakeDamage(this, &info);
    CTakeDamageInfo::~CTakeDamageInfo(&info);
  }
}


// CDOTA_BaseNPC::OnTakeDamage  (line 5708, @0x00000000028f6050, libserver.so)
// calls: CBaseCombatCharacter::OnTakeDamage
// callers: CDOTA_Unit_Nian_Attachment::OnTakeDamage
int __fastcall CDOTA_BaseNPC::OnTakeDamage(CDOTA_BaseNPC *const this, const CTakeDamageInfo *const info)
{
  if ( g_CDOTA_Grinder.m_nMode == CDOTA_Grinder::Mode::GRINDER_HEROES )
    return 0;
  else
    return CBaseCombatCharacter::OnTakeDamage(this, info);
}


// CDOTA_BaseNPC::MarkExpired  (line 5716, @0x0000000002906ee0, libserver.so)
// callers: CDOTA_Modifier_Kill::OnDestroy, CDOTA_Modifier_Juggernaut_Healing_Ward_Aura::OnDestroy, CDOTA_Modifier_Pugna_NetherWard::OnDestroy, CDOTA_Buff_Wards::OnDestroy
void __fastcall CDOTA_BaseNPC::MarkExpired(CDOTA_BaseNPC *const this)
{
  this->m_bExpired = 1;
}


// CDOTA_BaseNPC::IsExpired  (line 5721, @0x0000000002906ef0, libserver.so)
// callers: CDOTA_BaseNPC::CalculateActivityModifiers
bool __fastcall CDOTA_BaseNPC::IsExpired(const CDOTA_BaseNPC *const this)
{
  return this->m_bExpired;
}


// CDOTA_BaseNPC::Event_Killed  (line 5726, @0x0000000002961a00, libserver.so)  // inlines: AddObstructionProperty, CUtlSymbol, DOTAGameRules, FStrEq, FindModifierByName, Get, GetAttacker, GetClassNameAsCStr, GetClassname, GetEHandle, GetEntryIndex, GetHero, GetInflictor, GetInstance, GetModifier_Constant_First, GetOwnerEntity, GetSerialNumber, GetStreak, GetUnitName, IsHero, IsListeningToEvent, IsRealHero, IsSpecialIllusion, IsStandardTeam, QueueConcept, Set, SetAttacker, SetUnit, SpeakConcept, String, ToCStr, ToDOTAAbility, ToDOTABaseNPC, ToDOTABaseNPCHero, _V_strcmp, operator CBaseEntity*, operator=, operator[]
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::RemoveAllGestures, NextBotCombatCharacter::Event_Killed, CDOTA_BaseNPC::GetAbilityByIndex, CDOTA_UnitInventory::GetItemInSlot, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, __dynamic_cast, CUtlString::operator=, CUtlString::Get, CDOTA_Speech::SpeakConcept, CEntityHandle::GetHandleEntity (40 total)
// callers: CDOTA_BaseNPC_Creep::Event_Killed, CDOTA_BaseNPC_Building::Event_Killed, CDOTA_BaseNPC_Hero::Event_Killed, CDOTA_BaseNPC_Creature::Event_Killed, CDOTA_Unit_Courier::Event_Killed, CDOTA_Unit_Roshan::Event_Killed, CDOTA_Unit_SpiritBear::Event_Killed, CDOTA_Unit_Undying_Tombstone::Event_Killed, CDOTA_NPC_Observer_Ward::Event_Killed
// strings: "npc_dota_furion_treant", "npc_dota_furion_treant_large", "targetclassname", "abilityname", "reincarnating", "herodeath" (19 total)
// globals: g_HeroList, `guard variable for'CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symRadiantHeroesLiving, `guard variable for'CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symDireHeroesLiving, `guard variable for'CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symAnnounceEvent, `guard variable for'CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symVictimName, `guard variable for'CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symVictimTeam, `guard variable for'CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symVictimKillStreak, `guard variable for'CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symVictimMultipleKill (17 total)
void __fastcall CDOTA_BaseNPC::Event_Killed(CDOTA_BaseNPC *const this, const CTakeDamageInfo *const info)
{
  const char *m_pAsString; // rax
  CEntityInstance *v5; // rax
  ObstructionRecord_t *m_pObstructionRecord; // rdx
  int v7; // eax
  int i; // ebx
  CDOTABaseAbility *AbilityByIndex; // rax
  int j; // ebx
  CDOTA_Item *ItemInSlot; // rax
  CEntityInstance *v12; // rax
  CEntityIdentity *m_pEntity; // rax
  const char *v14; // rdx
  CEntityInstance *v15; // rax
  float v16; // xmm2_4
  CEntityInstance *v17; // rax
  CEntityInstance *v18; // rbx
  void *v19; // rax
  CEntityIdentity *v20; // rax
  const char *v21; // rsi
  const char *v22; // rax
  float v23; // xmm2_4
  float v24; // xmm2_4
  int m_iDamageCustom; // eax
  CDOTA_Speech *m_pSpeech; // rdi
  IHandleEntity *HandleEntity; // rax
  IHandleEntity *v28; // rbx
  CEntityInstance *v29; // rax
  CDOTA_BaseNPC *v30; // rbx
  CBaseEntity *v31; // rax
  CBaseEntity *v32; // rbx
  CEntityInstance *v33; // rax
  CDOTA_BaseNPC *v34; // rcx
  CEntityIdentity *v35; // rax
  int v36; // edx
  __int16 v37; // cx
  CEntityInstance *v38; // rax
  CEntityIdentity *v39; // rdx
  int v40; // eax
  __int16 v41; // cx
  CEntityInstance *v42; // rax
  CEntityIdentity *v43; // rdx
  int v44; // eax
  __int16 v45; // cx
  const char *v46; // rdx
  unsigned __int8 m_Value; // al
  CDOTA_BaseNPC *v48; // r13
  int Streak; // eax
  float v50; // xmm0_4
  CModifieractoryDictionary *v51; // rax
  IModifierFactory *Factory; // rax
  __int64 v53; // r14
  int v54; // r13d
  CEntityInstance *v55; // rax
  CDOTA_BaseNPC *v56; // rbx
  float RangeToUnit; // xmm0_4
  const char *v58; // rdx
  CDOTA_Speech *vptr_IHandleEntity; // rdi
  int v60; // eax
  float v61; // xmm2_4
  __int64 v62; // rax
  CEntityInstance *v63; // rax
  CEntityInstance *v64; // rbx
  int v65; // r13d
  int v66; // eax
  CEntityIdentity *v67; // rdx
  int v68; // eax
  __int16 v69; // cx
  CEntityInstance *v70; // rax
  CEntityIdentity *v71; // rdx
  int v72; // eax
  __int16 v73; // cx
  CEntityInstance *v74; // rax
  CEntityIdentity *v75; // rdx
  int v76; // eax
  __int16 v77; // cx
  EHANDLE *p_m_hAttacker; // [rsp+20h] [rbp-130h]
  EHANDLE *p_m_hInflictor; // [rsp+28h] [rbp-128h]
  int iNearbyFriendlies; // [rsp+30h] [rbp-120h]
  int iNearbyEnemies; // [rsp+34h] [rbp-11Ch]
  float iNearbyEnemiesa; // [rsp+34h] [rbp-11Ch]
  CResponseCriteriaSet::CritSymbol_t v83; // [rsp+40h] [rbp-110h] BYREF
  CResponseCriteriaSet criteria; // [rsp+50h] [rbp-100h] BYREF
  CModifierParams params; // [rsp+90h] [rbp-C0h] BYREF

  m_pAsString = this->m_iszUnitName.m_Value.u.m_pAsString;
  if ( m_pAsString != 0
    && (m_pAsString == "npc_dota_furion_treant"
     || strcmp(m_pAsString, "npc_dota_furion_treant") == 0
     || m_pAsString == "npc_dota_furion_treant_large"
     || strcmp(m_pAsString, "npc_dota_furion_treant_large") == 0) )
  {
    v5 = CEntityHandle::operator CEntityInstance *(&info->m_hAttacker);
    if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    {
      v60 = (*(v5->_vptr_IHandleEntity + 414))(v5);
      if ( v60 != -1 )
        IncrementCommunityGoal(
          EEvent::EVENT_ID_INTERNATIONAL_2016,
          EEventCommunityGoals_t::ECG_TI6_TreesDestroyed,
          1u,
          v60);
    }
  }
  m_pObstructionRecord = this->m_pObstructionRecord;
  v7 = this->m_nObstructionProperties | 2;
  this->m_nObstructionProperties = v7;
  if ( m_pObstructionRecord != 0 )
    m_pObstructionRecord->m_ObjectProperties = v7;
  if ( this->m_ActivitiesStarted.m_Size > 0 )
    CDOTA_BaseNPC::RemoveAllGestures(this);
  NextBotCombatCharacter::Event_Killed(this, info);
  (*(this->_vptr_IHandleEntity + 469))(this);
  if ( (*(this->_vptr_IHandleEntity + 237))(this) == 0 )
  {
    UTIL_SetSize(this, &vec3_origin, &vec3_origin);
    (*(this->m_Collision._vptr_ICollideable + 15))(&this->m_Collision);
  }
  if ( (*(this->_vptr_IHandleEntity + 436))(this) == 0 )
  {
    if ( (info->m_iDamageCustom & 2) != 0 )
      this->m_bWasKilledPassively = 1;
    for ( i = 0; i != 24; ++i )
    {
      if ( CDOTA_BaseNPC::GetAbilityByIndex(this, i) != 0 )
      {
        AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(this, i);
        (*(AbilityByIndex->_vptr_IHandleEntity + 271))(AbilityByIndex);
      }
    }
    if ( this->m_bHasInventory )
    {
      for ( j = 0; j != 9; ++j )
      {
        if ( CDOTA_UnitInventory::GetItemInSlot(&this->m_Inventory, j) != 0 )
        {
          ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(&this->m_Inventory, j);
          (*(ItemInSlot->_vptr_IHandleEntity + 271))(ItemInSlot);
        }
      }
    }
    CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
    p_m_hAttacker = &info->m_hAttacker;
    v12 = CEntityHandle::operator CEntityInstance *(&info->m_hAttacker);
    if ( v12 != 0 )
    {
      m_pEntity = v12->m_pEntity;
      v14 = "";
      if ( m_pEntity->m_designerName.u.m_Id != 0 )
        v14 = m_pEntity->m_designerName.u.m_pAsString;
      CResponseCriteriaSet::AppendCriteria(&criteria, "targetclassname", v14, 1.0);
      v15 = CEntityHandle::operator CEntityInstance *(p_m_hAttacker);
      if ( v15 != 0 && BYTE3(v15[7]._vptr_IHandleEntity) != 0 )
        CResponseCriteriaSet::AppendCriteria(&criteria, "iskillerhero", 1.0, v16);
    }
    p_m_hInflictor = &info->m_hInflictor;
    v17 = CEntityHandle::operator CEntityInstance *(&info->m_hInflictor);
    v18 = v17;
    if ( v17 != 0 )
    {
      v19 = __dynamic_cast(v17, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
      if ( v19 != 0 )
      {
        (*(*v19 + 1272LL))(v19, &criteria);
        v18 = CEntityHandle::operator CEntityInstance *(p_m_hInflictor);
      }
      v20 = v18->m_pEntity;
      v21 = "";
      if ( v20->m_designerName.u.m_Id != 0 )
        v21 = v20->m_designerName.u.m_pAsString;
      CUtlString::operator=(&this->m_strLastKillerAbility, v21);
      v22 = CUtlString::Get(&this->m_strLastKillerAbility);
      CResponseCriteriaSet::AppendCriteria(&criteria, "abilityname", v22, 1.0);
    }
    else
    {
      CUtlString::Clear(&this->m_strLastKillerAbility);
    }
    CResponseCriteriaSet::AppendCriteria(&criteria, "reincarnating", 1.0, v23);
    m_iDamageCustom = info->m_iDamageCustom;
    if ( (m_iDamageCustom & 1) != 0 && (m_iDamageCustom & 2) == 0 )
    {
      if ( g_HeroList.m_hHeroList.m_Size > 0 )
      {
        iNearbyEnemies = 0;
        v53 = 0;
        v54 = 0;
        iNearbyFriendlies = 0;
        do
        {
          v55 = CEntityHandle::operator CEntityInstance *(&g_HeroList.m_hHeroList.m_Memory.m_pMemory[v53]);
          v56 = v55;
          if ( v55 != 0
            && (v55[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
            && (*(v55->_vptr_IHandleEntity + 408))(v55) != 0
            && !v56->m_bIsIllusion.m_Value )
          {
            RangeToUnit = CDOTA_BaseNPC::GetRangeToUnit(this, v56);
            v24 = 400.0;
            if ( RangeToUnit <= 400.0 )
            {
              if ( v56->m_iTeamNum.m_Value == this->m_iTeamNum.m_Value )
                ++iNearbyFriendlies;
              else
                ++iNearbyEnemies;
            }
          }
          ++v54;
          ++v53;
        }
        while ( v54 < g_HeroList.m_hHeroList.m_Size );
      }
      CResponseCriteriaSet::AppendCriteria(&criteria, "reincarnating_nearby_enemies", 1.0, v24);
      CResponseCriteriaSet::AppendCriteria(&criteria, "reincarnating_nearby_friendlies", 1.0, v61);
    }
    m_pSpeech = this->m_Speech.m_pSpeech;
    if ( m_pSpeech != 0 )
      CDOTA_Speech::SpeakConcept(m_pSpeech, 5, &criteria, 0, 0, 0, 0, 0);
    if ( (this->m_iUnitType & 1) != 0 && !this->m_bIsIllusion.m_Value && this->m_iTeamNum.m_Value - 2 <= 1 )
    {
      if ( `guard variable for'CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symRadiantHeroesLiving == 0
        && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symRadiantHeroesLiving) != 0 )
      {
        CResponseCriteriaSet::ComputeCriteriaSymbol("radiant_heroes_alive");
        __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symRadiantHeroesLiving);
      }
      if ( `guard variable for'CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symDireHeroesLiving == 0
        && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symDireHeroesLiving) != 0 )
      {
        CResponseCriteriaSet::ComputeCriteriaSymbol("dire_heroes_alive");
        __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symDireHeroesLiving);
      }
      if ( `guard variable for'CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symAnnounceEvent == 0
        && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symAnnounceEvent) != 0 )
      {
        CResponseCriteriaSet::ComputeCriteriaSymbol("announce_event");
        __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symAnnounceEvent);
      }
      if ( `guard variable for'CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symVictimName == 0
        && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symVictimName) != 0 )
      {
        CResponseCriteriaSet::ComputeCriteriaSymbol("victim_name");
        __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symVictimName);
      }
      if ( `guard variable for'CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symVictimTeam == 0
        && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symVictimTeam) != 0 )
      {
        CResponseCriteriaSet::ComputeCriteriaSymbol("victim_team");
        __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symVictimTeam);
      }
      if ( `guard variable for'CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symVictimKillStreak == 0
        && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symVictimKillStreak) != 0 )
      {
        CResponseCriteriaSet::ComputeCriteriaSymbol("victim_kill_streak");
        __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symVictimKillStreak);
      }
      if ( `guard variable for'CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symVictimMultipleKill == 0
        && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symVictimMultipleKill) != 0 )
      {
        CResponseCriteriaSet::ComputeCriteriaSymbol("victim_multiple_kill_count");
        __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symVictimMultipleKill);
      }
      if ( `guard variable for'CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symVictimInFountain == 0
        && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symVictimInFountain) != 0 )
      {
        CResponseCriteriaSet::ComputeCriteriaSymbol("victim_in_fountain");
        __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symVictimInFountain);
      }
      CDOTAHeroList::GetLivingHeroCountByTeam(&g_HeroList, &params);
      v83.m_Id = CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symRadiantHeroesLiving.m_Id;
      CResponseCriteriaSet::AppendCriteria(&criteria, &v83, SLODWORD(params.fOriginalDamage), 1.0);
      v83.m_Id = CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symDireHeroesLiving.m_Id;
      CResponseCriteriaSet::AppendCriteria(&criteria, &v83, params.nActivity, 1.0);
      v83.m_Id = CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symAnnounceEvent.m_Id;
      CResponseCriteriaSet::AppendCriteria(&criteria, &v83, "herodeath", 1.0);
      v46 = "";
      if ( this->m_iszUnitName.m_Value.u.m_Id != 0 )
        v46 = this->m_iszUnitName.m_Value.u.m_pAsString;
      v83.m_Id = CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symVictimName.m_Id;
      CResponseCriteriaSet::AppendCriteria(&criteria, &v83, v46, 1.0);
      m_Value = this->m_iTeamNum.m_Value;
      if ( m_Value == 2 )
      {
        v83.m_Id = CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symVictimTeam.m_Id;
        CResponseCriteriaSet::AppendCriteria(&criteria, &v83, "radiant", 1.0);
      }
      else if ( m_Value == 3 )
      {
        v83.m_Id = CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symVictimTeam.m_Id;
        CResponseCriteriaSet::AppendCriteria(&criteria, &v83, "dire", 1.0);
      }
      v48 = 0;
      if ( (this->m_iUnitType & 1) != 0 )
        v48 = this;
      Streak = CDOTA_PlayerResource::GetStreak(g_pDOTAPlayerResource, v48[1].m_pfnBlocked.__delta);
      v83.m_Id = CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symVictimKillStreak.m_Id;
      CResponseCriteriaSet::AppendCriteria(&criteria, &v83, Streak, 1.0);
      v50 = *&v48[1].m_vecVelocity.m_vecX.m_nEncoder;
      v83.m_Id = CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symVictimMultipleKill.m_Id;
      CResponseCriteriaSet::AppendCriteria(&criteria, &v83, v50, 1.0);
      v51 = ModifierFactoryDictionary();
      Factory = CModifieractoryDictionary::FindFactory(v51, "modifier_fountain_aura_buff");
      if ( CDOTA_ModifierManager::FindModifierByName(
             &this->m_ModifierManager,
             Factory,
             "modifier_fountain_aura_buff",
             0) != 0 )
      {
        v83.m_Id = CDOTA_BaseNPC::Event_Killed(CTakeDamageInfo const&)::symVictimInFountain.m_Id;
        CResponseCriteriaSet::AppendCriteria(&criteria, &v83, 1.0, 1.0);
      }
      CDOTAGamerules::QueueConceptForAllAnnouncers(g_pGameRules, 18, 5.0, &criteria, 5, 1);
    }
    HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value);
    v28 = HandleEntity;
    if ( HandleEntity == 0
      || BYTE3(HandleEntity[42]._vptr_IHandleEntity) == 0
      || (HandleEntity[261]._vptr_IHandleEntity & 1) == 0 )
    {
      goto LABEL_44;
    }
    v58 = "";
    if ( this->m_iszUnitName.m_Value.u.m_Id != 0 )
      v58 = this->m_iszUnitName.m_Value.u.m_pAsString;
    CResponseCriteriaSet::AppendCriteria(&criteria, "creaturename", v58, 1.0);
    vptr_IHandleEntity = v28[420]._vptr_IHandleEntity;
    if ( vptr_IHandleEntity != 0 )
    {
      CDOTA_Speech::QueueConcept(vptr_IHandleEntity, 35, 1.0, &criteria, 0, 1, 0, 0, 0);
      if ( (info->m_iDamageCustom & 3) != 0 )
      {
LABEL_51:
        v32 = CEntityHandle::operator CEntityInstance *(p_m_hInflictor);
        v33 = CEntityHandle::operator CEntityInstance *(p_m_hAttacker);
        if ( v33 != 0 && BYTE3(v33[7]._vptr_IHandleEntity) != 0 )
          v34 = v33;
        else
          v34 = 0;
        CDOTA_CombatLog::AddHealthEvent(g_pDOTACombatLog, 4, this, v34, v32, 0, 0, 0, 0);
        if ( (this->m_iUnitType & 1) != 0
          && !this->m_bIsIllusion.m_Value
          && (*(this->_vptr_IHandleEntity + 390))(this) == 0 )
        {
          v63 = CEntityHandle::operator CEntityInstance *(p_m_hAttacker);
          v64 = v63;
          if ( v63 != 0 && BYTE3(v63[7]._vptr_IHandleEntity) != 0 )
          {
            iNearbyEnemiesa = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 1, 0.0);
            v65 = (*(this->_vptr_IHandleEntity + 414))(this);
            v66 = (*(v64->_vptr_IHandleEntity + 414))(v64);
            CDOTAGamerules::AddHeroDeath(g_pGameRules, v66, v65, iNearbyEnemiesa);
          }
        }
        this->m_nNextRegenThink = -1;
        if ( (info->m_iDamageCustom & 2) == 0 )
        {
          CModifierParams::CModifierParams(&params);
          v35 = this->m_pEntity;
          if ( v35 != 0 )
          {
            v36 = (v35->m_EHandle.m_Index >> 15) - (v35->m_flags & 1);
            v37 = 0x7FFF;
            if ( v35->m_EHandle.m_Index != -1 )
              v37 = v35->m_EHandle.m_Index & 0x7FFF;
            LOWORD(params.hunit.m_Index) = v37 | params.hunit.m_Index & 0x8000;
            params.hunit.m_Index = (v36 << 15) | params.hunit.m_Index & 0x7FFF;
          }
          else
          {
            params.hunit.m_Index = -1;
          }
          v38 = CEntityHandle::operator CEntityInstance *(p_m_hAttacker);
          if ( v38 != 0 && (v39 = v38->m_pEntity) != 0 )
          {
            v40 = (v39->m_EHandle.m_Index >> 15) - (v39->m_flags & 1);
            v41 = 0x7FFF;
            if ( v39->m_EHandle.m_Index != -1 )
              v41 = v39->m_EHandle.m_Index & 0x7FFF;
            LOWORD(params.hattacker.m_Index) = v41 | params.hattacker.m_Index & 0x8000;
            params.hattacker.m_Index = (v40 << 15) | params.hattacker.m_Index & 0x7FFF;
          }
          else
          {
            params.hattacker.m_Index = -1;
          }
          params.bReincarnate = info->m_iDamageCustom & 1;
          v42 = CEntityHandle::operator CEntityInstance *(p_m_hInflictor);
          if ( v42 != 0 && (v43 = v42->m_pEntity) != 0 )
          {
            v44 = (v43->m_EHandle.m_Index >> 15) - (v43->m_flags & 1);
            v45 = 0x7FFF;
            if ( v43->m_EHandle.m_Index != -1 )
              v45 = v43->m_EHandle.m_Index & 0x7FFF;
            LOWORD(params.inflictor.m_Index) = v45 | params.inflictor.m_Index & 0x8000;
            params.inflictor.m_Index = (v44 << 15) | params.inflictor.m_Index & 0x7FFF;
          }
          else
          {
            params.inflictor.m_Index = -1;
          }
          params.iRecord = info->m_iRecord;
          FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_DEATH, &params);
          CBaseEntity::SendOnKilledGameEvent(this, info);
        }
        CDOTA_ModifierManager::RemoveAllModifiers(&this->m_ModifierManager, 0, 0, 0, 1);
        CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
        return;
      }
    }
    else
    {
LABEL_44:
      if ( (info->m_iDamageCustom & 3) != 0 )
        goto LABEL_51;
    }
    v29 = CEntityHandle::operator CEntityInstance *(p_m_hAttacker);
    v30 = v29;
    if ( v29 == 0 || BYTE3(v29[7]._vptr_IHandleEntity) == 0 )
      v30 = 0;
    v31 = CEntityHandle::operator CEntityInstance *(p_m_hInflictor);
    if ( v31 != 0 && v31->m_bIsDOTANPC )
      v30 = v31;
    CDOTAHeroList::DistributeRewardsForKill(&g_HeroList, this, v30, v31);
    goto LABEL_51;
  }
  v62 = this->m_ModifierManager.m_buffsForModifiers[108];
  if ( v62 == 0xFF
    || this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v62].m_Size <= 0
    || CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
         &this->m_ModifierManager,
         modifierfunction::MODIFIER_PROPERTY_SUPER_ILLUSION,
         &CModifierParams::s_Default) != 1.0 )
  {
    if ( (info->m_iDamageCustom & 2) == 0 )
    {
      CModifierParams::CModifierParams(&params);
      v67 = this->m_pEntity;
      if ( v67 != 0 )
      {
        v68 = (v67->m_EHandle.m_Index >> 15) - (v67->m_flags & 1);
        v69 = 0x7FFF;
        if ( v67->m_EHandle.m_Index != -1 )
          v69 = v67->m_EHandle.m_Index & 0x7FFF;
        LOWORD(params.hunit.m_Index) = v69 | params.hunit.m_Index & 0x8000;
        params.hunit.m_Index = (v68 << 15) | params.hunit.m_Index & 0x7FFF;
      }
      else
      {
        params.hunit.m_Index = -1;
      }
      v70 = CEntityHandle::operator CEntityInstance *(&info->m_hAttacker);
      if ( v70 != 0 && (v71 = v70->m_pEntity) != 0 )
      {
        v72 = (v71->m_EHandle.m_Index >> 15) - (v71->m_flags & 1);
        v73 = 0x7FFF;
        if ( v71->m_EHandle.m_Index != -1 )
          v73 = v71->m_EHandle.m_Index & 0x7FFF;
        LOWORD(params.hattacker.m_Index) = v73 | params.hattacker.m_Index & 0x8000;
        params.hattacker.m_Index = (v72 << 15) | params.hattacker.m_Index & 0x7FFF;
      }
      else
      {
        params.hattacker.m_Index = -1;
      }
      params.bReincarnate = info->m_iDamageCustom & 1;
      v74 = CEntityHandle::operator CEntityInstance *(&info->m_hInflictor);
      if ( v74 != 0 && (v75 = v74->m_pEntity) != 0 )
      {
        v76 = (v75->m_EHandle.m_Index >> 15) - (v75->m_flags & 1);
        v77 = 0x7FFF;
        if ( v75->m_EHandle.m_Index != -1 )
          v77 = v75->m_EHandle.m_Index & 0x7FFF;
        LOWORD(params.inflictor.m_Index) = v77 | params.inflictor.m_Index & 0x8000;
        params.inflictor.m_Index = (v76 << 15) | params.inflictor.m_Index & 0x7FFF;
      }
      else
      {
        params.inflictor.m_Index = -1;
      }
      params.iRecord = info->m_iRecord;
      FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_DEATH, &params);
    }
    CDOTA_ModifierManager::RemoveAllModifiers(&this->m_ModifierManager, 0, 0, 1, 1);
    if ( g_pGameRules != 0
      && CDOTAGamerules::GetGameModeEntity(g_pGameRules) != 0
      && CDOTAGamerules::GetGameModeEntity(g_pGameRules)->m_bRemoveIllusionsOnDeath )
    {
      UTIL_Remove(this);
    }
  }
}


// CDOTA_BaseNPC::DrawDebugTextOverlays  (line 5969, @0x0000000002915cd0, libserver.so)  // inlines: CUtlSymbol, GetAcquisitionRange, GetBool, GetHullRadius, GetInt, GetMana, GetManaPercent, GetMaxMana, GetModifier_Constant_Additive, IsListeningToEvent, QAngle, V_strncat<long unsigned int>, VectorAdd, operator+
// calls: CBaseAnimating::DrawDebugTextOverlays, CBaseEntity::HasDebugBitsSet, CDOTA_BaseNPC::ForceKill, CBaseEntity::ClearDebugBits, CBaseEntity::GetTeam, V_snprintf, CBaseEntity::EntityText, CDOTA_BaseNPC::HealthFraction, CBaseEntity::GetHealth, CDOTA_BaseNPC::GetAttacksPerSecond, CDOTAFogOfWarSystem::FindHeightLevelForEntity, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal (22 total)
// callers: CDOTA_BaseNPC_Hero::DrawDebugTextOverlays
// strings: "Team: %s", "Health %d/%d (%.0f)\n", "Mana %.2f/%.2f (%d)\n", "HP Regen: %f - MP Regen: %f\n", "Physical Armor: %f - Magical Armor: %f\n", "Move Speed: %f - Attacks Per Second: %f\n" (12 total)
int __fastcall CDOTA_BaseNPC::DrawDebugTextOverlays(
        CDOTA_BaseNPC *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v4; // r13
  char v5; // bl
  int v6; // r12d
  CTeam *Team; // rax
  const char *v9; // rax
  int v10; // r13d
  int v11; // r12d
  int Health; // eax
  double v13; // xmm0_8
  double v14; // xmm0_8
  double v15; // xmm0_8
  int HeightLevelForEntity; // eax
  __int64 v17; // rax
  double Modifier_Constant_Additive_Internal; // xmm0_8
  int v19; // eax
  int v20; // r12d
  int v21; // r13d
  CDOTA_Buff *BuffByIndex; // rax
  const char *Name; // rax
  int v24; // r12d
  __int64 v25; // r14
  int v26; // r13d
  UtlSymId_t m_Id; // ax
  const char *ActivityModifierName; // rax
  unsigned __int64 v29; // r14
  unsigned __int64 m_Value; // rax
  int v31; // edx
  int v32; // esi
  int DayTimeVisionRange; // eax
  int v34; // ebx
  const Vector *v35; // rax
  vec_t v36; // xmm1_4
  vec_t v37; // xmm2_4
  float m_flHullRadius; // xmm0_4
  const Vector *v39; // rax
  vec_t v40; // xmm2_4
  vec_t v41; // xmm3_4
  float m_iAcquisitionRange; // xmm0_4
  const Vector *v43; // rax
  vec_t v44; // xmm2_4
  vec_t v45; // xmm3_4
  const Vector *AbsOrigin; // rax
  vec_t v47; // xmm1_4
  vec_t v48; // xmm3_4
  float radiusb; // [rsp+Ch] [rbp-384h]
  float radiusa; // [rsp+Ch] [rbp-384h]
  float radius; // [rsp+Ch] [rbp-384h]
  float modifier; // [rsp+10h] [rbp-380h]
  double modifiera; // [rsp+10h] [rbp-380h]
  float v54; // [rsp+18h] [rbp-378h]
  float v55; // [rsp+18h] [rbp-378h]
  float v56; // [rsp+18h] [rbp-378h]
  float v57; // [rsp+18h] [rbp-378h]
  float v58; // [rsp+18h] [rbp-378h]
  float AttacksPerSecond; // [rsp+18h] [rbp-378h]
  int v60; // [rsp+18h] [rbp-378h]
  Vector position; // [rsp+20h] [rbp-370h] BYREF
  QAngle v62; // [rsp+30h] [rbp-360h] BYREF
  CFmtStrN<256,false> v63; // [rsp+40h] [rbp-350h] BYREF
  char tempstr[520]; // [rsp+150h] [rbp-240h] BYREF
  unsigned __int64 v65; // [rsp+358h] [rbp-38h]

  v4 = iDebugFilterFlags;
  v5 = nDebugOverlayBits;
  v65 = __readfsqword(0x28u);
  v6 = CBaseAnimating::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v5 & 1) != 0 && (v4 & 0x2000) != 0 )
  {
    if ( CBaseEntity::GetTeam(this) != 0 )
    {
      Team = CBaseEntity::GetTeam(this);
      v9 = (*(Team->_vptr_IHandleEntity + 208))(Team);
      V_snprintf(tempstr, 512, "Team: %s", v9);
      CBaseEntity::EntityText(this, v6, tempstr, 0.0, 255, 255, 255, 255);
    }
    v10 = v6 + 1;
    if ( this->m_bIsIllusion.m_Value )
    {
      CBaseEntity::EntityText(this, v10, "ILLUSION", 0.0, 255, 255, 255, 255);
      v10 = v6 + 2;
    }
    v54 = CDOTA_BaseNPC::HealthFraction(this);
    v11 = (*(this->_vptr_IHandleEntity + 156))(this);
    Health = CBaseEntity::GetHealth(this);
    V_snprintf(tempstr, 512, "Health %d/%d (%.0f)\n", Health, v11, (v54 * 100.0));
    CBaseEntity::EntityText(this, v10, tempstr, 0.0, 255, 0, 0, 255);
    V_snprintf(
      tempstr,
      512,
      "Mana %.2f/%.2f (%d)\n",
      this->m_flMana.m_Value,
      this->m_flMaxMana.m_Value,
      ((100.0 * this->m_flMana.m_Value) / this->m_flMaxMana.m_Value));
    CBaseEntity::EntityText(this, v10 + 1, tempstr, 0.0, 75, 75, 255, 255);
    v55 = (*(this->_vptr_IHandleEntity + 431))(this);
    v56 = v55 + (*(this->_vptr_IHandleEntity + 426))(this);
    v57 = (*(this->_vptr_IHandleEntity + 427))(this) * v56;
    modifier = (*(this->_vptr_IHandleEntity + 428))(this);
    v13 = (*(this->_vptr_IHandleEntity + 430))(this);
    V_snprintf(tempstr, 512, "HP Regen: %f - MP Regen: %f\n", *&v13, (v57 + modifier));
    CBaseEntity::EntityText(this, v10 + 2, tempstr, 0.0, 255, 255, 255, 255);
    v58 = (*(this->_vptr_IHandleEntity + 419))(this);
    v14 = (*(this->_vptr_IHandleEntity + 418))(this);
    V_snprintf(tempstr, 512, "Physical Armor: %f - Magical Armor: %f\n", *&v14, v58);
    CBaseEntity::EntityText(this, v10 + 3, tempstr, 0.0, 255, 255, 255, 255);
    AttacksPerSecond = CDOTA_BaseNPC::GetAttacksPerSecond(this);
    v15 = (*(this->_vptr_IHandleEntity + 386))(this);
    V_snprintf(tempstr, 512, "Move Speed: %f - Attacks Per Second: %f\n", *&v15, AttacksPerSecond);
    CBaseEntity::EntityText(this, v10 + 4, tempstr, 0.0, 255, 255, 255, 255);
    HeightLevelForEntity = CDOTAFogOfWarSystem::FindHeightLevelForEntity(&g_DOTAFogOfWarSystem, this);
    V_snprintf(tempstr, 512, "Height: %d\n", HeightLevelForEntity);
    CBaseEntity::EntityText(this, v10 + 5, tempstr, 0.0, 255, 255, 255, 255);
    v17 = this->m_ModifierManager.m_buffsForModifiers[0];
    Modifier_Constant_Additive_Internal = 0.0;
    if ( v17 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v17].m_Size > 0 )
      Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                              &this->m_ModifierManager,
                                              modifierfunction::MODIFIER_PROPERTY_PREATTACK_BONUS_DAMAGE,
                                              &CModifierParams::s_Default);
    modifiera = Modifier_Constant_Additive_Internal;
    v60 = (*(this->_vptr_IHandleEntity + 417))(this);
    v19 = (*(this->_vptr_IHandleEntity + 416))(this);
    V_snprintf(tempstr, 512, "Attack DMG MIN: %d - Attack DMG MAX: %d - Attack DMG Bonus: %f\n", v19, v60, modifiera);
    CBaseEntity::EntityText(this, v10 + 6, tempstr, 0.0, 255, 255, 255, 255);
    v20 = v10 + 8;
    V_snprintf(tempstr, 512, "MODIFIERS (%d):\n", this->m_ModifierManager.m_bufflist.m_Size);
    CBaseEntity::EntityText(this, v10 + 7, tempstr, 0.0, 125, 255, 255, 255);
    if ( this->m_ModifierManager.m_bufflist.m_Size > 0 )
    {
      v21 = 0;
      do
      {
        BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(&this->m_ModifierManager, v21, 0);
        if ( BuffByIndex != 0 )
        {
          Name = CDOTA_Buff::GetName(BuffByIndex);
          V_snprintf(tempstr, 512, "%s\n", Name);
          CBaseEntity::EntityText(this, v20++, tempstr, 0.0, 125, 255, 255, 255);
        }
        ++v21;
      }
      while ( v21 < this->m_ModifierManager.m_bufflist.m_Size );
    }
    V_snprintf(tempstr, 512, "Activity Modifiers (%d):\n", this->m_ActivityModifiers.m_Size);
    CBaseEntity::EntityText(this, v20, tempstr, 0.0, 255, 180, 0, 255);
    v24 = v20 + 1;
    if ( this->m_ActivityModifiers.m_Size > 0 )
    {
      v25 = 0;
      v26 = 0;
      do
      {
        ++v26;
        m_Id = this->m_ActivityModifiers.m_Memory.m_pMemory[v25++].m_Id;
        LOWORD(v62.x) = m_Id;
        ActivityModifierName = GetActivityModifierName(&v62);
        V_snprintf(tempstr, 512, "%s\n", ActivityModifierName);
        CBaseEntity::EntityText(this, v24++, tempstr, 0.0, 255, 180, 0, 255);
      }
      while ( this->m_ActivityModifiers.m_Size > v26 );
    }
    v29 = 0;
    V_snprintf(tempstr, 512, "Controllable By: ");
    do
    {
      while ( 1 )
      {
        m_Value = this->m_iIsControllableByPlayer64.m_Value;
        if ( _bittest64(&m_Value, v29) )
          break;
        v29 = (v29 + 1);
        if ( v29 == 64 )
          goto LABEL_25;
      }
      v31 = v29;
      v29 = (v29 + 1);
      CFmtStrN<256,false>::CFmtStrN(&v63, "%d ", v31);
      _V_strncat(tempstr, v63.m_szBuf, 512, 0xFFFFFFFFLL);
    }
    while ( v29 != 64 );
LABEL_25:
    v32 = v24;
    v6 = v24 + 1;
    CBaseEntity::EntityText(this, v32, tempstr, 0.0, 255, 255, 255, 255);
    if ( dota_unit_debug_attack_range.m_pParent->m_Value.m_nValue != 0 )
    {
      radius = CDOTA_BaseNPC::GetAttackRange(this);
      v62.y = 0.0;
      v62.z = 0.0;
      v62.x = -90.0;
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      v47 = AbsOrigin->z + 1.0;
      v48 = AbsOrigin->x + 0.0;
      position.y = AbsOrigin->y + 0.0;
      position.z = v47;
      position.x = v48;
      NDebugOverlay::Circle(&position, &v62, radius, 0xFFu, 0, 0, 0, 0.25, 1);
    }
    if ( dota_unit_debug_acquisition_range.m_pParent->m_Value.m_nValue != 0 )
    {
      m_iAcquisitionRange = this->m_iAcquisitionRange;
      v62.x = -90.0;
      v62.y = 0.0;
      v62.z = 0.0;
      radiusa = m_iAcquisitionRange;
      v43 = CBaseEntity::GetAbsOrigin(this);
      v44 = v43->y + 0.0;
      v45 = v43->x + 0.0;
      position.z = v43->z + 1.0;
      position.y = v44;
      position.x = v45;
      NDebugOverlay::Circle(&position, &v62, radiusa, 0, 0xFFu, 0, 0, 0.25, 1);
    }
    if ( dota_unit_debug_vision_range.m_pParent->m_Value.m_nValue != 0 )
    {
      DayTimeVisionRange = CDOTA_BaseNPC::GetDayTimeVisionRange(this);
      v62.x = -90.0;
      v62.y = 0.0;
      v34 = DayTimeVisionRange;
      v62.z = 0.0;
      v35 = CBaseEntity::GetAbsOrigin(this);
      v36 = v35->y + 0.0;
      v37 = v35->x + 0.0;
      position.z = v35->z + 1.0;
      position.y = v36;
      position.x = v37;
      NDebugOverlay::Circle(&position, &v62, v34, 0, 0xFFu, 0xFFu, 0, 0.25, 1);
    }
    m_flHullRadius = this->m_flHullRadius;
    v62.x = -90.0;
    v62.y = 0.0;
    radiusb = m_flHullRadius;
    v62.z = 0.0;
    v39 = CBaseEntity::GetAbsOrigin(this);
    v40 = v39->y + 0.0;
    v41 = v39->x + 0.0;
    position.z = v39->z + 1.0;
    position.y = v40;
    position.x = v41;
    NDebugOverlay::Circle(&position, &v62, radiusb, 0, 0, 0xFFu, 0, 0.25, 0);
  }
  if ( CBaseEntity::HasDebugBitsSet(this, 0x10000000u) )
  {
    CDOTA_BaseNPC::ForceKill(this, 0);
    CBaseEntity::ClearDebugBits(this, 0x10000000u);
  }
  return v6;
}


// CDOTA_BaseNPC::IsBot  (line 6091, @0x0000000002906f00, libserver.so)
// callers: CDOTAGamerules::State_Enter_GAME_IN_PROGRESS, EconEntity_OnOwnerKillEaterEvent, CDOTA_OGS::LogHeroDeath, CDOTA_PlayerResource::AddDamageTaken, CDOTA_Tutorial::StartNPCAnimation, dota_kill_all_bots, dota_bot_set_difficulty, dota_bot_disconnect_player, dota_bot_give_gold, dota_bot_give_level, CDOTABehaviorIdle::Update, CDOTA_BaseNPC::EnterShop (17 total)
bool __fastcall CDOTA_BaseNPC::IsBot(CDOTA_BaseNPC *const this)
{
  __int64 v2; // rax

  if ( this->m_pBot != 0 && this->m_iIsControllableByPlayer64.m_Value == 0 )
    return 1;
  if ( (*(this->_vptr_IHandleEntity + 413))(this) == 0 )
    return 0;
  v2 = (*(this->_vptr_IHandleEntity + 413))(this);
  return (*(*v2 + 3128LL))(v2);
}


// CDOTA_BaseNPC::IsAlive  (line 6096, @0x00000000028f5950, libserver.so)
// calls: CBaseEntity::GetHealth
bool __fastcall CDOTA_BaseNPC::IsAlive(CDOTA_BaseNPC *const this)
{
  return CBaseEntity::GetHealth(this) > 0;
}


// CDOTA_BaseNPC::CreateAbilities  (line 6109, @0x000000000292c330, libserver.so)  // inlines: AddToHead, AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char const*>, DOTAGameRules, Element, Get, GetEHandle, GetEntryIndex, GetGameMode, GetInstance, GetOwnerEntity, GetSerialNumber, GrowMemory, GrowVector, InsertBefore, IsAbilitySpecialBonus, IsHero, NetworkStateChanged, Purge, RemoveAll, Set, SetAbilityViaDraft, SetStolen, ShiftElementsRight, String, ToCStr, ToDOTAPlayer, V_memmove, V_strncmp<int>, memmove, operator=, operator=<bool>, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_BaseNPC::FindAbilityByName, _V_strncmp, DOTA_CreateAbility, memcmp, CDOTABaseAbility::SetAbilityIndex, CEntityHandle::operator CEntityInstance*, V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), memmove, CUtlMemory<char const*, int>::Grow, DOTAGameManager, CDOTAGameManager::GetAbilityDataByIndex, MakeEntitySystemString (19 total)
// callers: CDOTA_BaseNPC::SetStartingValues, OnHeroSpawned, CDOTA_Ability_Meepo_DividedWeStand::CreateClone
// strings: "special_bonus_"
void __fastcall CDOTA_BaseNPC::CreateAbilities(CDOTA_BaseNPC *const this, bool bCreateAbilityDraft)
{
  uint32 m_iUnitType; // eax
  CGameRules *v4; // r14
  int v5; // r12d
  CUtlSymbolLarge *m_iszAbilityList; // r14
  const char *m_Id; // rdi
  const char *v8; // rdi
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v10; // rbx
  CEntityIdentity *m_pEntity; // rax
  int v12; // edx
  __int16 v13; // cx
  CEntityInstance *v14; // rax
  bool v15; // zf
  CEntityInstance *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r14
  int i; // r13d
  __int64 m_Size; // rbx
  int m_nControllingPlayerID; // r12d
  CGameRules *v22; // rdx
  int v23; // ecx
  __int64 v24; // rbx
  __int64 v25; // rax
  unsigned __int16 v26; // r14
  CDOTAGameManager *v27; // rax
  DOTAAbilityData_t *AbilityDataByIndex; // rax
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // r13
  int j; // r12d
  const char **v33; // rax
  __int64 v34; // rbx
  char *v35; // r14
  int v36; // eax
  __int64 v37; // rbx
  int v38; // r12d
  CDOTABaseAbility *v39; // rax
  CDOTABaseAbility *v40; // r13
  CEntityIdentity *v41; // rax
  int v42; // edx
  __int16 v43; // cx
  IHandleEntity *HandleEntity; // rax
  IHandleEntity *v45; // rbx
  int v46; // eax
  CNetworkArrayBase<CHandle<CBaseEntity>,24,CDOTA_BaseNPC::NetworkVar_m_hAbilities> *v47; // [rsp+18h] [rbp-B8h]
  CEntityInstance *v48; // [rsp+20h] [rbp-B0h]
  CNetworkArrayBase<CHandle<CBaseEntity>,24,CDOTA_BaseNPC::NetworkVar_m_hAbilities> *v49; // [rsp+28h] [rbp-A8h]
  int nEmptySlot; // [rsp+44h] [rbp-8Ch]
  CNetworkArrayBase<CHandle<CBaseEntity>,24,CDOTA_BaseNPC::NetworkVar_m_hAbilities> *p_m_hAbilities; // [rsp+58h] [rbp-78h]
  const char *v52; // [rsp+58h] [rbp-78h]
  CUtlVector<char const*,CUtlMemory<char const*,int> > vecCompAbilities; // [rsp+60h] [rbp-70h] BYREF
  CUtlVector<char*,CUtlMemory<char*,int> > primaryAbilityNames; // [rsp+80h] [rbp-50h] BYREF

  m_iUnitType = this->m_iUnitType;
  if ( (m_iUnitType & 1) != 0 )
  {
    v4 = g_pGameRules;
    if ( *&g_pGameRules[6].m_szQuestName[68] == 18 )
    {
      if ( !this->m_bIsIllusion.m_Value && !bCreateAbilityDraft )
        return;
      m_nControllingPlayerID = this->m_nControllingPlayerID;
      if ( m_nControllingPlayerID == -1
        && (HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hOwnerEntity.m_Value),
            v45 = HandleEntity,
            HandleEntity != 0) )
      {
        if ( (*(HandleEntity->_vptr_IHandleEntity + 140))(HandleEntity) != 0 )
        {
          v46 = (*(v45->_vptr_IHandleEntity + 393))(v45);
          v22 = g_pGameRules;
          this->m_nControllingPlayerID = v46;
          v23 = v46;
        }
        else
        {
          v23 = this->m_nControllingPlayerID;
          v22 = g_pGameRules;
        }
      }
      else
      {
        v22 = v4;
        v23 = m_nControllingPlayerID;
      }
      v24 = 0;
      while ( 1 )
      {
        v25 = *&v22[20].m_szQuestName[32] + v24;
        if ( *(v25 + 24) == v23
          && (v26 = *(v25 + 20),
              v27 = DOTAGameManager(),
              (AbilityDataByIndex = CDOTAGameManager::GetAbilityDataByIndex(v27, v26)) != 0)
          && (v29 = *(*&g_pGameRules[20].m_szQuestName[32] + v24 + 28)) <= 23 )
        {
          v24 += 32;
          MakeEntitySystemString(AbilityDataByIndex->m_pszAbilityName);
          this->m_iszAbilityList[v29].u.m_Id = *&primaryAbilityNames.m_Size;
          if ( v24 == 1536 )
          {
LABEL_53:
            m_iUnitType = this->m_iUnitType;
            break;
          }
        }
        else
        {
          v24 += 32;
          if ( v24 == 1536 )
            goto LABEL_53;
        }
        v23 = this->m_nControllingPlayerID;
        v22 = g_pGameRules;
      }
    }
  }
  v5 = 0;
  nEmptySlot = 0;
  p_m_hAbilities = &this->m_hAbilities;
  m_iszAbilityList = this->m_iszAbilityList;
  while ( (m_iUnitType & 1) != 0 && *&g_pGameRules[6].m_szQuestName[68] == 18 && v5 > 4 )
  {
    m_Id = "";
    if ( m_iszAbilityList->u.m_Id != 0 )
      m_Id = m_iszAbilityList->u.m_Id;
    if ( _V_strncmp(m_Id, "special_bonus_", 14) == 0 )
      break;
    ++v5;
    ++m_iszAbilityList;
    if ( v5 == 24 )
      goto LABEL_15;
LABEL_7:
    m_iUnitType = this->m_iUnitType;
  }
  if ( m_iszAbilityList->u.m_Id != 0 && CDOTA_BaseNPC::FindAbilityByName(this, m_iszAbilityList->u.m_pAsString, 0) == 0 )
  {
    v8 = "";
    if ( m_iszAbilityList->u.m_Id != 0 )
      v8 = m_iszAbilityList->u.m_Id;
    Ability = DOTA_CreateAbility(v8, this);
    v10 = Ability;
    if ( Ability != 0 )
    {
      primaryAbilityNames.m_Size = -1;
      m_pEntity = Ability->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v12 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v13 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(primaryAbilityNames.m_Size) = v13 | primaryAbilityNames.m_Size & 0x8000;
        primaryAbilityNames.m_Size = (v12 << 15) | primaryAbilityNames.m_Size & 0x7FFF;
      }
      if ( memcmp(&p_m_hAbilities->m_Value[nEmptySlot], &primaryAbilityNames, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 2960, nEmptySlot, 0xFFFFFFFFLL);
        p_m_hAbilities->m_Value[nEmptySlot].m_Index = primaryAbilityNames.m_Size;
      }
      CDOTABaseAbility::SetAbilityIndex(v10, v5);
      ++nEmptySlot;
    }
  }
  ++v5;
  ++m_iszAbilityList;
  if ( v5 != 24 )
    goto LABEL_7;
LABEL_15:
  if ( (this->m_iUnitType & 1) != 0 && *&g_pGameRules[6].m_szQuestName[68] == 18 )
  {
    v47 = &this->m_hAbilities;
    v49 = &this->m_hAbilities;
    do
    {
      v14 = CEntityHandle::operator CEntityInstance *(v49);
      v48 = v14;
      if ( v14 != 0 )
      {
        v15 = *(&v14[17].m_worldGroupId + 4) == 0;
        vecCompAbilities.m_Size = 0;
        v16 = v14;
        vecCompAbilities.m_Memory.m_pMemory = 0;
        vecCompAbilities.m_Memory.m_nAllocationCount = 0;
        vecCompAbilities.m_Memory.m_nGrowSize = 0;
        if ( v15 )
        {
          (*(v14->_vptr_IHandleEntity + 22))(v14, 852, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          *(&v16[17].m_worldGroupId + 4) = 1;
        }
        if ( (*(v48->_vptr_IHandleEntity + 303))(v48) != 0 )
        {
          primaryAbilityNames.m_Size = 0;
          primaryAbilityNames.m_Memory.m_pMemory = 0;
          primaryAbilityNames.m_Memory.m_nAllocationCount = 0;
          primaryAbilityNames.m_Memory.m_nGrowSize = 0;
          v17 = (*(v48->_vptr_IHandleEntity + 303))(v48);
          V_SplitString(v17, ";", &primaryAbilityNames);
          v18 = 0;
          for ( i = 0; primaryAbilityNames.m_Size > i; ++v18 )
          {
            m_Size = vecCompAbilities.m_Size;
            v52 = primaryAbilityNames.m_Memory.m_pMemory[v18];
            if ( vecCompAbilities.m_Size + 1 > vecCompAbilities.m_Memory.m_nAllocationCount )
              CUtlMemory<char const*,int>::Grow(
                &vecCompAbilities.m_Memory,
                vecCompAbilities.m_Size + 1 - vecCompAbilities.m_Memory.m_nAllocationCount);
            ++vecCompAbilities.m_Size;
            if ( m_Size > 0 )
              memmove(vecCompAbilities.m_Memory.m_pMemory + 1, vecCompAbilities.m_Memory.m_pMemory, 8 * m_Size);
            if ( vecCompAbilities.m_Memory.m_pMemory != 0 )
              *vecCompAbilities.m_Memory.m_pMemory = v52;
            ++i;
          }
          primaryAbilityNames.m_Size = 0;
          if ( (primaryAbilityNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          {
            CUtlMemory<char *,int>::Purge(&primaryAbilityNames.m_Memory);
            if ( (primaryAbilityNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<char *,int>::Purge(&primaryAbilityNames.m_Memory);
          }
        }
        if ( (*(v48->_vptr_IHandleEntity + 304))(v48) != 0 )
        {
          primaryAbilityNames.m_Size = 0;
          primaryAbilityNames.m_Memory.m_pMemory = 0;
          primaryAbilityNames.m_Memory.m_nAllocationCount = 0;
          primaryAbilityNames.m_Memory.m_nGrowSize = 0;
          v30 = (*(v48->_vptr_IHandleEntity + 304))(v48);
          V_SplitString(v30, ";", &primaryAbilityNames);
          v31 = 0;
          for ( j = 0; primaryAbilityNames.m_Size > j; ++v31 )
          {
            v34 = vecCompAbilities.m_Size;
            v35 = primaryAbilityNames.m_Memory.m_pMemory[v31];
            v36 = vecCompAbilities.m_Size;
            if ( vecCompAbilities.m_Size == vecCompAbilities.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<char const*,int>::Grow(&vecCompAbilities.m_Memory, 1);
              v36 = vecCompAbilities.m_Size;
            }
            vecCompAbilities.m_Size = v36 + 1;
            v33 = &vecCompAbilities.m_Memory.m_pMemory[v34];
            if ( v33 != 0 )
              *v33 = v35;
            ++j;
          }
          primaryAbilityNames.m_Size = 0;
          if ( (primaryAbilityNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          {
            CUtlMemory<char *,int>::Purge(&primaryAbilityNames.m_Memory);
            if ( (primaryAbilityNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<char *,int>::Purge(&primaryAbilityNames.m_Memory);
          }
        }
        if ( vecCompAbilities.m_Size > 0 )
        {
          v37 = 0;
          v38 = 0;
          do
          {
            if ( CDOTA_BaseNPC::FindAbilityByName(this, vecCompAbilities.m_Memory.m_pMemory[v37], 0) == 0 )
            {
              v39 = DOTA_CreateAbility(vecCompAbilities.m_Memory.m_pMemory[v37], this);
              v40 = v39;
              if ( v39 != 0 )
              {
                primaryAbilityNames.m_Size = -1;
                v41 = v39->m_pEntity;
                if ( v41 != 0 )
                {
                  v42 = (v41->m_EHandle.m_Index >> 15) - (v41->m_flags & 1);
                  v43 = 0x7FFF;
                  if ( v41->m_EHandle.m_Index != -1 )
                    v43 = v41->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(primaryAbilityNames.m_Size) = v43 | primaryAbilityNames.m_Size & 0x8000;
                  primaryAbilityNames.m_Size = (v42 << 15) | primaryAbilityNames.m_Size & 0x7FFF;
                }
                if ( memcmp(&v47->m_Value[nEmptySlot], &primaryAbilityNames, 4u) != 0 )
                {
                  (*(this->_vptr_IHandleEntity + 22))(this, 2960, nEmptySlot, 0xFFFFFFFFLL);
                  v47->m_Value[nEmptySlot].m_Index = primaryAbilityNames.m_Size;
                }
                CDOTABaseAbility::SetAbilityIndex(v40, nEmptySlot);
                CDOTABaseAbility::SetHidden(v40, 1);
                ++nEmptySlot;
              }
            }
            ++v38;
            ++v37;
          }
          while ( vecCompAbilities.m_Size > v38 );
        }
        if ( (vecCompAbilities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<char const*,int>::Purge(&vecCompAbilities.m_Memory);
          if ( (vecCompAbilities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<char const*,int>::Purge(&vecCompAbilities.m_Memory);
        }
      }
      v49 = (v49 + 4);
    }
    while ( v49 != &this->m_associatedEmptyAbilities );
  }
}


// CDOTA_BaseNPC::SwapAbilities  (line 6229, @0x0000000002900c40, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetAbilityName, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator CEntityInstance*, operator=
// calls: V_stricmp_fast, CEntityHandle::operator CEntityInstance*, CDOTABaseAbility::SetHidden, CDOTABaseAbility::SetAbilityIndex, memcmp
// callers: CDOTA_Unit_Hero_AncientApparition::OnLoadState, CDOTA_Unit_Hero_Bane::OnLoadState, CDOTA_Unit_Hero_Kunkka::OnLoadState, CDOTA_Modifier_Morphling_Replicate::OnCreated, CDOTA_Modifier_Morphling_Replicate::OnDestroy, CDOTA_Ability_Kunkka_Return::OnSpellStart, CDOTA_Modifier_Kunkka_XMarksTheSpot_Thinker::OnIntervalThink, CDOTA_Ability_AncientApparition_IceBlast::OnUnStolen, CDOTA_Ability_AncientApparition_IceBlast_Release::OnSpellStart, CDOTA_Unit_Hero_AncientApparition::OnDying, CDOTA_Ability_Bane_Nightmare::SetNightmareSwapCount, CDOTA_Ability_AncientApparition_IceBlast::OnProjectileHit_ExtraData (78 total)
// strings: "<NoAbilityName>"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC::SwapAbilities(
        CDOTA_BaseNPC *const this,
        const char *pAbilityName1,
        const char *pAbilityName2,
        bool bEnable1,
        bool bEnable2)
{
  int v5; // r14d
  int v6; // r12d
  int v7; // r13d
  CNetworkArrayBase<CHandle<CBaseEntity>,24,CDOTA_BaseNPC::NetworkVar_m_hAbilities> *p_m_hAbilities; // rbx
  CEntityIdentity *v9; // rcx
  CEntityIdentity *v10; // rcx
  CEntityInstance *m_pInstance; // r15
  const char **m_Id; // rax
  const char *v13; // rdi
  const char *v14; // rax
  int v15; // eax
  const char *v16; // rdi
  bool v17; // zf
  const char **v18; // rax
  const char *v19; // rax
  CEntityHandle *v20; // rbx
  CDOTABaseAbility *v21; // rax
  CEntityHandle *v22; // r14
  CDOTABaseAbility *v23; // rax
  CEntityInstance *v24; // rax
  CEntityInstance *v25; // rax
  CDOTABaseAbility *v26; // rax
  CDOTABaseAbility *v27; // rax
  CEntityInstance *v28; // r15
  CEntityInstance *v29; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v31; // cx
  CEntityIdentity *v32; // rdx
  int v33; // eax
  __int16 v34; // cx
  CNetworkArrayBase<CHandle<CBaseEntity>,24,CDOTA_BaseNPC::NetworkVar_m_hAbilities> *v36; // [rsp+10h] [rbp-60h]
  _DWORD s2[16]; // [rsp+30h] [rbp-40h] BYREF

  v5 = 0;
  v6 = -1;
  v7 = -1;
  p_m_hAbilities = &this->m_hAbilities;
  v36 = &this->m_hAbilities;
  do
  {
    while ( 1 )
    {
      if ( p_m_hAbilities->m_Value[0].m_Index + 2 > 1 )
      {
        v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(p_m_hAbilities->m_Value[0].m_Index) >> 9) & 0x3F];
        if ( v9 != 0 )
        {
          v10 = &v9[p_m_hAbilities->m_Value[0].m_Index & 0x1FF];
          if ( v10 != 0 && p_m_hAbilities->m_Value[0].m_Index == v10->m_EHandle.m_Index )
          {
            m_pInstance = v10->m_pInstance;
            if ( v10->m_pInstance != 0 )
              break;
          }
        }
      }
      ++v5;
      p_m_hAbilities = (p_m_hAbilities + 4);
      if ( v5 == 24 )
        goto LABEL_19;
    }
    m_Id = m_pInstance[18].m_iszPrivateVScripts.u.m_Id;
    v13 = "<NoAbilityName>";
    if ( m_Id != 0 )
    {
      v14 = *m_Id;
      if ( v14 != 0 )
        v13 = v14;
    }
    v15 = V_stricmp_fast(v13, pAbilityName1);
    v16 = "<NoAbilityName>";
    v17 = v15 == 0;
    v18 = m_pInstance[18].m_iszPrivateVScripts.u.m_Id;
    if ( v17 )
      v7 = v5;
    if ( v18 != 0 )
    {
      v19 = *v18;
      if ( v19 != 0 )
        v16 = v19;
    }
    if ( V_stricmp_fast(v16, pAbilityName2) == 0 )
      v6 = v5;
    ++v5;
    p_m_hAbilities = (p_m_hAbilities + 4);
  }
  while ( v5 != 24 );
LABEL_19:
  if ( v6 != -1 && v7 != -1 )
  {
    v20 = &v36->m_Value[v7];
    v21 = CEntityHandle::operator CEntityInstance *(v20);
    CDOTABaseAbility::SetHidden(v21, !bEnable1);
    v22 = &v36->m_Value[v6];
    v23 = CEntityHandle::operator CEntityInstance *(v22);
    CDOTABaseAbility::SetHidden(v23, !bEnable2);
    v24 = CEntityHandle::operator CEntityInstance *(v20);
    (*(v24->_vptr_IHandleEntity + 297))(v24);
    v25 = CEntityHandle::operator CEntityInstance *(v22);
    (*(v25->_vptr_IHandleEntity + 297))(v25);
    v26 = CEntityHandle::operator CEntityInstance *(v20);
    CDOTABaseAbility::SetAbilityIndex(v26, v6);
    v27 = CEntityHandle::operator CEntityInstance *(v22);
    CDOTABaseAbility::SetAbilityIndex(v27, v7);
    v28 = CEntityHandle::operator CEntityInstance *(v20);
    v29 = CEntityHandle::operator CEntityInstance *(v22);
    s2[0] = -1;
    if ( v29 != 0 )
    {
      m_pEntity = v29->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v31 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v31 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        s2[0] = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v31 & 0x7FFF;
      }
    }
    if ( memcmp(v20, s2, 4u) != 0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 2960, v7, 0xFFFFFFFFLL);
      v20->m_Index = s2[0];
    }
    s2[0] = -1;
    if ( v28 != 0 )
    {
      v32 = v28->m_pEntity;
      if ( v32 != 0 )
      {
        v33 = (v32->m_EHandle.m_Index >> 15) - (v32->m_flags & 1);
        v34 = 0x7FFF;
        if ( v32->m_EHandle.m_Index != -1 )
          v34 = v32->m_EHandle.m_Index & 0x7FFF;
        LOWORD(s2[0]) = v34 | s2[0] & 0x8000;
        s2[0] = (v33 << 15) | s2[0] & 0x7FFF;
      }
    }
    if ( memcmp(v22, s2, 4u) != 0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 2960, v6, 0xFFFFFFFFLL);
      v22->m_Index = s2[0];
    }
  }
}


// CDOTA_BaseNPC::SetAbilityHidden  (line 6271, @0x0000000002924030, libserver.so)
// calls: CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::SetHidden
// callers: CDOTA_Modifier_Life_Stealer_Infest::OnCreated, CDOTA_Modifier_Life_Stealer_Infest::OnDestroy
void __fastcall CDOTA_BaseNPC::SetAbilityHidden(CDOTA_BaseNPC *const this, const char *pAbilityName, bool bHidden)
{
  CDOTABaseAbility *AbilityByName; // rax

  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, pAbilityName, 0);
  if ( AbilityByName != 0 )
    CDOTABaseAbility::SetHidden(AbilityByName, bHidden);
}


// CDOTA_BaseNPC::SetAbilityActive  (line 6280, @0x0000000002924070, libserver.so)
// calls: CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::SetActivated
// callers: CDOTA_Modifier_Life_Stealer_Assimilate::OnCreated, CDOTA_Modifier_Phoenix_IcarusDive::OnDestroy, CDOTA_Modifier_Phoenix_IcarusDive::OnCreated
void __fastcall CDOTA_BaseNPC::SetAbilityActive(CDOTA_BaseNPC *const this, const char *pAbilityName, bool bActive)
{
  CDOTABaseAbility *AbilityByName; // rax

  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, pAbilityName, 0);
  if ( AbilityByName != 0 )
    CDOTABaseAbility::SetActivated(AbilityByName, bActive);
}


// CDOTA_BaseNPC::FindAbilityByName  (line 6289, @0x0000000002923a70, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetAbilityName, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Set, operator CEntityInstance*, operator[]
// calls: V_stricmp_fast, CEntityHandle::operator CEntityInstance*, DOTA_CreateAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Grow, Warning
// callers: CDOTA_ActionRunner::PerformAction_RemoveAbility, CDOTA_ActionRunner::PerformAction_LevelUpAbility, OnDemoHeroSpawnComplete, CDOTA_PlayerResource::OnHeroReplaced, CDOTA_Tutorial::ParseHeroLevelup, CDOTA_Tutorial::UpgradePlayerAbility, CDOTA_Bot::Init, CDOTA_Bot::ConsiderCourierUsage, CDOTA_Bot_Script::GetAbilityByName, CDOTA_TeamCommander::UpdateCourierBoostUsage, CDOTA_TeamCommander::OnDeath, CDOTA_Bot_Script::Action_LevelAbility (573 total)
// strings: "<NoAbilityName>", "dota_base_ability", "Null ability name passed into FindAbilityByName!\n"
// globals: CEntityHandle::gm_pEntityList
CDOTABaseAbility *__fastcall CDOTA_BaseNPC::FindAbilityByName(
        CDOTA_BaseNPC *const this,
        const char *pAbilityName,
        bool bCreateEmptyIfNotFound)
{
  CNetworkArrayBase<CHandle<CBaseEntity>,24,CDOTA_BaseNPC::NetworkVar_m_hAbilities> *p_m_hAbilities; // r15
  int i; // ebx
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  CDOTABaseAbility *m_pInstance; // r13
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v11; // rdi
  const char *m_pszAbilityName; // rax
  CDOTABaseAbility *result; // rax
  int m_Size; // eax
  unsigned __int64 v15; // rbx
  __int64 v16; // r15
  CEntityInstance *v17; // rax
  const char **m_Id; // rax
  const char *v19; // rdi
  const char *v20; // rax
  CEntityIdentity *m_pEntity; // rcx
  __int16 v22; // si
  __int64 v23; // rbx
  int v24; // edx
  CHandle<CBaseEntity> *v25; // rdx
  CDOTABaseAbility *pEmptyAbilitya; // [rsp+8h] [rbp-48h]
  int v28; // [rsp+10h] [rbp-40h]

  if ( pAbilityName != 0 )
  {
    p_m_hAbilities = &this->m_hAbilities;
    for ( i = 24; i != 0; --i )
    {
      if ( p_m_hAbilities->m_Value[0].m_Index + 2 > 1 )
      {
        v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(p_m_hAbilities->m_Value[0].m_Index) >> 9) & 0x3F];
        if ( v7 != 0 )
        {
          v8 = &v7[p_m_hAbilities->m_Value[0].m_Index & 0x1FF];
          if ( v8 != 0 && p_m_hAbilities->m_Value[0].m_Index == v8->m_EHandle.m_Index )
          {
            m_pInstance = v8->m_pInstance;
            if ( v8->m_pInstance != 0 )
            {
              m_pAbilityData = m_pInstance->m_pAbilityData;
              v11 = "<NoAbilityName>";
              if ( m_pAbilityData != 0 )
              {
                m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
                if ( m_pszAbilityName != 0 )
                  v11 = m_pszAbilityName;
              }
              if ( V_stricmp_fast(v11, pAbilityName) == 0 )
                return m_pInstance;
            }
          }
        }
      }
      p_m_hAbilities = (p_m_hAbilities + 4);
    }
    if ( bCreateEmptyIfNotFound )
    {
      m_Size = this->m_associatedEmptyAbilities.m_Size;
      if ( m_Size > 0 )
      {
        v15 = 0;
        v16 = 4LL * (m_Size - 1) + 4;
        do
        {
          v17 = CEntityHandle::operator CEntityInstance *(&this->m_associatedEmptyAbilities.m_Memory.m_pMemory[v15 / 4]);
          m_pInstance = v17;
          if ( v17 != 0 )
          {
            m_Id = v17[18].m_iszPrivateVScripts.u.m_Id;
            v19 = "<NoAbilityName>";
            if ( m_Id != 0 )
            {
              v20 = *m_Id;
              if ( v20 != 0 )
                v19 = v20;
            }
            if ( V_stricmp_fast(v19, pAbilityName) == 0 )
              return m_pInstance;
          }
          v15 += 4LL;
        }
        while ( v15 != v16 );
      }
      result = DOTA_CreateAbility("dota_base_ability", this);
      v28 = -1;
      if ( result != 0 )
      {
        m_pEntity = result->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v22 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v22 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          v28 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v22 & 0x7FFF;
        }
      }
      v23 = this->m_associatedEmptyAbilities.m_Size;
      v24 = this->m_associatedEmptyAbilities.m_Size;
      if ( v23 == this->m_associatedEmptyAbilities.m_Memory.m_nAllocationCount )
      {
        pEmptyAbilitya = result;
        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_associatedEmptyAbilities.m_Memory, 1);
        v24 = this->m_associatedEmptyAbilities.m_Size;
        result = pEmptyAbilitya;
      }
      this->m_associatedEmptyAbilities.m_Size = v24 + 1;
      v25 = &this->m_associatedEmptyAbilities.m_Memory.m_pMemory[v23];
      if ( v25 != 0 )
        v25->m_Index = v28;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    Warning("Null ability name passed into FindAbilityByName!\n");
    return 0;
  }
  return result;
}


// CDOTA_BaseNPC::GetAbilityCount  (line 6333, @0x00000000028f5180, libserver.so)
// callers: CDOTA_ActionRunner::PerformAction_RemoveAbility, CDOTA_ActionRunner::PerformAction_AddAbility, CDOTA_CombatLog::DoCombatAnalysis, CDOTA_Grinder::FrameUpdateHeroes, CDOTA_Ability_Nevermore_Shadowraze1::OnUpgrade, CDOTA_Ability_Nevermore_Shadowraze2::OnUpgrade, CDOTA_Ability_Nevermore_Shadowraze3::OnUpgrade, CDOTA_Modifier_Morphling_Hybrid_Special::OnThinkInternal, CDOTA_Modifier_VengefulSpirit_Hybrid_Special::OnThinkInternal, CDOTA_Modifier_Brewmaster_PrimalSplitDelay::OnDestroy, CDOTA_Unit_Hero_Weaver::Spawn, CDOTA_Unit_Hero_Disruptor::Spawn (15 total)
int __fastcall CDOTA_BaseNPC::GetAbilityCount(CDOTA_BaseNPC *const this)
{
  return 24;
}


// CDOTA_BaseNPC::SetAbilityByIndex  (line 6338, @0x0000000002906f80, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator CEntityInstance*, operator!=<CBaseEntity>, operator=
// calls: memcmp, CDOTABaseAbility::SetAbilityIndex, UTIL_Remove
// callers: CDOTA_ActionRunner::PerformAction_AddAbility, CDOTA_BaseNPC::Script_AddAbility, CDOTA_BaseNPC::Script_SetAbilityByIndex, CDOTA_BaseNPC::OnLoadState, CDOTA_BaseNPC_Creature::AddNewAbility, CDOTA_Ability_DoomBringer_Devour::OnSpellStart, CDOTA_Ability_Rubick_SpellSteal::SetSpellStealAbilityIndex
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC::SetAbilityByIndex(CDOTA_BaseNPC *const this, CDOTABaseAbility *pAbility, int iIndex)
{
  CHandle<CBaseEntity> *v5; // r12
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *m_pEntity; // rdx
  __int16 v10; // cx
  int s2[12]; // [rsp+0h] [rbp-30h] BYREF

  v5 = &this->m_hAbilities.m_Value[iIndex];
  if ( v5->m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[v5->m_Index & 0x1FF];
      if ( v8 != 0 && v5->m_Index == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
        UTIL_Remove(v8->m_pInstance);
    }
  }
  s2[0] = -1;
  if ( pAbility != 0 )
  {
    m_pEntity = pAbility->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v10 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      s2[0] = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v10 & 0x7FFF;
    }
  }
  if ( memcmp(v5, s2, 4u) != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2960, iIndex, 0xFFFFFFFFLL);
    v5->m_Index = s2[0];
  }
  CDOTABaseAbility::SetAbilityIndex(pAbility, iIndex);
  (*(pAbility->_vptr_IHandleEntity + 297))(pAbility);
}


// CDOTA_BaseNPC::Script_SetAbilityByIndex  (line 6351, @0x0000000002907190, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTAAbility, ToEnt
// calls: GetScriptDesc<CEntityInstance>, __dynamic_cast, CDOTA_BaseNPC::SetAbilityByIndex
void __fastcall CDOTA_BaseNPC::Script_SetAbilityByIndex(CDOTA_BaseNPC *const this, HSCRIPT hAbility, int iIndex)
{
  __int64 (__fastcall *v6)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *Script; // rax
  const void *v8; // rax
  CDOTABaseAbility *v9; // rax

  if ( hAbility != 0 )
  {
    v6 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v8 = v6(g_pScriptVM, hAbility, Script);
    if ( v8 != 0 )
    {
      v9 = __dynamic_cast(v8, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
      if ( v9 != 0 )
        CDOTA_BaseNPC::SetAbilityByIndex(this, v9, iIndex);
    }
  }
}


// CDOTA_BaseNPC::RemoveAbilityFromIndex  (line 6360, @0x0000000002907230, libserver.so)  // inlines: CEntityHandle, CHandle, NetworkStateChanged, Set, operator=
// calls: memcmp
// callers: CDOTA_ActionRunner::PerformAction_RemoveAbility, CDOTA_Ability_Rubick_SpellSteal::SetSpellStealAbilityIndex
void __fastcall CDOTA_BaseNPC::RemoveAbilityFromIndex(CDOTA_BaseNPC *const this, int iIndex)
{
  CHandle<CBaseEntity> *v3; // r12
  int s2[12]; // [rsp+0h] [rbp-30h] BYREF

  v3 = &this->m_hAbilities.m_Value[iIndex];
  s2[0] = -1;
  if ( memcmp(v3, s2, 4u) != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2960, iIndex, 0xFFFFFFFFLL);
    v3->m_Index = s2[0];
  }
}


// CDOTA_BaseNPC::GetPhysicalArmorBaseValue  (line 6365, @0x00000000028f5190, libserver.so)
float __fastcall CDOTA_BaseNPC::GetPhysicalArmorBaseValue(CDOTA_BaseNPC *const this)
{
  return this->m_flPhysicalArmorValue.m_Value;
}


// CDOTA_BaseNPC::GetPhysicalArmorValue  (line 6370, @0x00000000028fa220, libserver.so)
float __fastcall CDOTA_BaseNPC::GetPhysicalArmorValue(CDOTA_BaseNPC *const this)
{
  float m_Value; // [rsp-Ch] [rbp-Ch]

  if ( this->m_bIsIllusion.m_Value )
    return this->m_flPhysicalArmorValue.m_Value;
  m_Value = this->m_flPhysicalArmorValue.m_Value;
  return (*(this->_vptr_IHandleEntity + 420))(this) + m_Value;
}


// CDOTA_BaseNPC::GetBonusPhysicalArmor  (line 6380, @0x00000000028face0, libserver.so)  // inlines: GetModifier_Constant_Additive, GetModifier_Constant_Highest, IsListeningToEvent
// calls: CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal
float __fastcall CDOTA_BaseNPC::GetBonusPhysicalArmor(CDOTA_BaseNPC *const this)
{
  float Modifier_Constant_Additive_Internal; // xmm1_4
  CDOTA_BaseNPC::NetworkVar_m_ModifierManager *p_m_ModifierManager; // r12
  __int64 v4; // rax
  __int64 v5; // rax
  float Modifier_Constant_Highest_Internal; // xmm0_4
  __int64 v7; // rax
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v11; // [rsp-14h] [rbp-1Ch]
  float v12; // [rsp-14h] [rbp-1Ch]

  Modifier_Constant_Additive_Internal = 0.0;
  p_m_ModifierManager = &this->m_ModifierManager;
  v4 = this->m_ModifierManager.m_buffsForModifiers[45];
  if ( v4 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v4].m_Size > 0 )
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            p_m_ModifierManager,
                                            modifierfunction::MODIFIER_PROPERTY_PHYSICAL_ARMOR_BONUS,
                                            &CModifierParams::s_Default);
  v5 = this->m_ModifierManager.m_buffsForModifiers[46];
  Modifier_Constant_Highest_Internal = 0.0;
  if ( v5 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v5].m_Size > 0 )
  {
    v11 = Modifier_Constant_Additive_Internal;
    Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                           p_m_ModifierManager,
                                           modifierfunction::MODIFIER_PROPERTY_PHYSICAL_ARMOR_BONUS_UNIQUE,
                                           &CModifierParams::s_Default);
    Modifier_Constant_Additive_Internal = v11;
  }
  v7 = this->m_ModifierManager.m_buffsForModifiers[47];
  v8 = Modifier_Constant_Additive_Internal + Modifier_Constant_Highest_Internal;
  v9 = 0.0;
  if ( v7 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v7].m_Size > 0 )
  {
    v12 = v8;
    v9 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
           p_m_ModifierManager,
           modifierfunction::MODIFIER_PROPERTY_PHYSICAL_ARMOR_BONUS_UNIQUE_ACTIVE,
           &CModifierParams::s_Default);
    v8 = v12;
  }
  return v9 + v8;
}


// CDOTA_BaseNPC::GetBonusPhysicalArmorFromHero  (line 6387, @0x00000000028f61b0, libserver.so)  // inlines: ModifierVariant_t
// calls: CDOTA_ModifierManager::GetBuffByIndex, CDOTA_Buff::GetCaster, CDOTA_Buff::GetFunctionValue
float __fastcall CDOTA_BaseNPC::GetBonusPhysicalArmorFromHero(
        CDOTA_BaseNPC *const this,
        CDOTA_BaseNPC_Hero *pHero,
        CModifierParams *const params)
{
  CDOTA_BaseNPC::NetworkVar_m_ModifierManager *p_m_ModifierManager; // r13
  int v6; // ebx
  CDOTA_Buff *BuffByIndex; // rax
  CDOTA_Buff *v8; // r15
  float flBonusArmorFromHero; // [rsp+1Ch] [rbp-44h]
  ModifierVariant_t v12; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_ModifierManager.m_bufflist.m_Size <= 0 )
    return 0.0;
  p_m_ModifierManager = &this->m_ModifierManager;
  v6 = 0;
  flBonusArmorFromHero = 0.0;
  do
  {
    BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(p_m_ModifierManager, v6, 0);
    v8 = BuffByIndex;
    if ( BuffByIndex != 0 && CDOTA_Buff::GetCaster(BuffByIndex) == pHero )
    {
      v12.m_eType = ModifierVariant_t::VariantType_t::Variant_Null;
      v12.m_flVal = 0.0;
      v12.m_szVal = 0;
      if ( CDOTA_Buff::GetFunctionValue(v8, 45, &v12, params) )
        flBonusArmorFromHero = flBonusArmorFromHero + v12.m_flVal;
      if ( CDOTA_Buff::GetFunctionValue(v8, 46, &v12, params) )
        flBonusArmorFromHero = flBonusArmorFromHero + v12.m_flVal;
      if ( CDOTA_Buff::GetFunctionValue(v8, 47, &v12, params) )
        flBonusArmorFromHero = flBonusArmorFromHero + v12.m_flVal;
    }
    ++v6;
  }
  while ( v6 < this->m_ModifierManager.m_bufflist.m_Size );
  return flBonusArmorFromHero;
}


// CDOTA_BaseNPC::GetPhysicalBlockFromHero  (line 6419, @0x00000000028f62f0, libserver.so)  // inlines: ModifierVariant_t
// calls: CDOTA_ModifierManager::GetBuffByIndex, CDOTA_Buff::GetCaster, CDOTA_Buff::GetFunctionValue
float __fastcall CDOTA_BaseNPC::GetPhysicalBlockFromHero(
        CDOTA_BaseNPC *const this,
        CDOTA_BaseNPC_Hero *pHero,
        CModifierParams *const params)
{
  CDOTA_BaseNPC::NetworkVar_m_ModifierManager *p_m_ModifierManager; // r13
  int v6; // ebx
  CDOTA_Buff *BuffByIndex; // rax
  CDOTA_Buff *v8; // r15
  float flBlockedDamageFromHero; // [rsp+1Ch] [rbp-44h]
  ModifierVariant_t v12; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_ModifierManager.m_bufflist.m_Size <= 0 )
    return 0.0;
  p_m_ModifierManager = &this->m_ModifierManager;
  v6 = 0;
  flBlockedDamageFromHero = 0.0;
  do
  {
    BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(p_m_ModifierManager, v6, 0);
    v8 = BuffByIndex;
    if ( BuffByIndex != 0 && CDOTA_Buff::GetCaster(BuffByIndex) == pHero )
    {
      v12.m_eType = ModifierVariant_t::VariantType_t::Variant_Null;
      v12.m_flVal = 0.0;
      v12.m_szVal = 0;
      if ( CDOTA_Buff::GetFunctionValue(v8, 86, &v12, params) )
        flBlockedDamageFromHero = flBlockedDamageFromHero + v12.m_flVal;
    }
    ++v6;
  }
  while ( v6 < this->m_ModifierManager.m_bufflist.m_Size );
  return flBlockedDamageFromHero;
}


// CDOTA_BaseNPC::GetPhysicalDamageReductionFromHero  (line 6441, @0x00000000028f51a0, libserver.so)
float __fastcall CDOTA_BaseNPC::GetPhysicalDamageReductionFromHero(
        CDOTA_BaseNPC *const this,
        CDOTA_BaseNPC_Hero *pHero,
        CModifierParams *const params)
{
  double v6; // xmm0_8
  float flDamageBlock; // [rsp+Ch] [rbp-24h]

  flDamageBlock = (*(this->_vptr_IHandleEntity + 422))(this);
  v6 = (*(this->_vptr_IHandleEntity + 421))(this, pHero, params);
  return ((params->fDamage - flDamageBlock)
        - ((1.0 - ((*&v6 * 0.059999999) / ((*&v6 * 0.059999999) + 1.0))) * (params->fDamage - flDamageBlock)))
       + flDamageBlock;
}


// CDOTA_BaseNPC::GetConstantBasedManaRegen  (line 6454, @0x00000000028fb1b0, libserver.so)  // inlines: GetModifier_Constant_Additive, GetModifier_Constant_Highest, IsListeningToEvent
// calls: CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal
float __fastcall CDOTA_BaseNPC::GetConstantBasedManaRegen(CDOTA_BaseNPC *const this)
{
  float result; // xmm0_4
  __int64 v3; // rax
  CDOTA_BaseNPC::NetworkVar_m_ModifierManager *p_m_ModifierManager; // r12
  float Modifier_Constant_Additive_Internal; // xmm1_4
  __int64 v6; // rax
  float Modifier_Constant_Highest_Internal; // xmm0_4
  __int64 v8; // rax
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // [rsp-14h] [rbp-1Ch]
  float v13; // [rsp-14h] [rbp-1Ch]

  result = 0.0;
  if ( !this->m_bIsIllusion.m_Value )
  {
    v3 = this->m_ModifierManager.m_buffsForModifiers[52];
    p_m_ModifierManager = &this->m_ModifierManager;
    Modifier_Constant_Additive_Internal = 0.0;
    if ( v3 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v3].m_Size > 0 )
      Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                              p_m_ModifierManager,
                                              modifierfunction::MODIFIER_PROPERTY_MANA_REGEN_CONSTANT,
                                              &CModifierParams::s_Default);
    v6 = this->m_ModifierManager.m_buffsForModifiers[53];
    Modifier_Constant_Highest_Internal = 0.0;
    if ( v6 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v6].m_Size > 0 )
    {
      v12 = Modifier_Constant_Additive_Internal;
      Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                             p_m_ModifierManager,
                                             modifierfunction::MODIFIER_PROPERTY_MANA_REGEN_CONSTANT_UNIQUE,
                                             &CModifierParams::s_Default);
      Modifier_Constant_Additive_Internal = v12;
    }
    v8 = this->m_ModifierManager.m_buffsForModifiers[55];
    v9 = Modifier_Constant_Additive_Internal + Modifier_Constant_Highest_Internal;
    v10 = 0.0;
    if ( v8 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v8].m_Size > 0 )
    {
      v13 = v9;
      v11 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              p_m_ModifierManager,
              modifierfunction::MODIFIER_PROPERTY_MANA_REGEN_TOTAL_PERCENTAGE,
              &CModifierParams::s_Default);
      v9 = v13;
      v10 = v11 / 100.0;
    }
    return (v10 * this->m_flMaxMana.m_Value) + v9;
  }
  return result;
}


// CDOTA_BaseNPC::GetHealthRegen  (line 6468, @0x00000000028fb820, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, GetModifier_Constant_Additive, IsListeningToEvent
// calls: CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal
// callers: CDOTA_BaseNPC::GetHealthRegen, CDOTA_BaseNPC_Hero::GetHealthRegen
float __fastcall CDOTA_BaseNPC::GetHealthRegen(CDOTA_BaseNPC *const this)
{
  float v1; // xmm1_4
  float v2; // xmm2_4
  CDOTA_BaseNPC::NetworkVar_m_ModifierManager *p_m_ModifierManager; // r12
  __int64 v5; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  __int64 v7; // rax
  float v8; // xmm0_4
  float v10; // [rsp+4h] [rbp-ACh]
  float v11; // [rsp+4h] [rbp-ACh]
  CModifierParams params; // [rsp+8h] [rbp-A8h] BYREF

  v1 = 0.0;
  v2 = 0.0;
  p_m_ModifierManager = &this->m_ModifierManager;
  params.fDamage = 0.0;
  v5 = this->m_ModifierManager.m_buffsForModifiers[56];
  params.fOriginalDamage = 0.0;
  params.ability.m_Index = -1;
  params.nActivity = -1;
  params.bTooltip = 0;
  params.bIgnoreInvis = 0;
  params.nTooltipParam = 0;
  params.bNoCooldown = 0;
  params.bReincarnate = 0;
  params.bDoNotConsume = 0;
  params.fDistance = 0.0;
  params.inflictor.m_Index = -1;
  params.nDamageflags = 0;
  params.nDamageCategory = 0;
  memset(&params.pOrb, 0, 24);
  params.bCraniumBasherTested = 0;
  params.bHeartRegenApplied = 0;
  params.bDiffusalApplied = 0;
  params.bChainLightningConsidered = 0;
  params.bSuppressDamage = 0;
  params.bRangedAttack = 0;
  params.nPlayerids_stick = 0;
  params.hattacker.m_Index = -1;
  params.htarget.m_Index = -1;
  params.hunit.m_Index = -1;
  if ( v5 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v5].m_Size > 0 )
  {
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            &this->m_ModifierManager,
                                            modifierfunction::MODIFIER_PROPERTY_HEALTH_REGEN_CONSTANT,
                                            &CModifierParams::s_Default);
    v1 = 0.0;
    v2 = Modifier_Constant_Additive_Internal;
  }
  v7 = this->m_ModifierManager.m_buffsForModifiers[57];
  if ( v7 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v7].m_Size > 0 )
  {
    v10 = v2;
    v8 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
           p_m_ModifierManager,
           modifierfunction::MODIFIER_PROPERTY_HEALTH_REGEN_PERCENTAGE,
           &params);
    v2 = v10;
    v1 = v8 / 100.0;
  }
  v11 = v2 + this->m_flHealthRegen;
  return ((*(this->_vptr_IHandleEntity + 156))(this) * v1) + v11;
}


// CDOTA_BaseNPC::GetHealthRegen  (line 6468, @0x00000000028fb9e0, libserver.so)
// calls: CDOTA_BaseNPC::GetHealthRegen
float __fastcall CDOTA_BaseNPC::GetHealthRegen(CDOTA_BaseNPC *const this)
{
  if ( this->m_bIsIllusion.m_Value )
    return this->m_flHealthRegen;
  else
    return CDOTA_BaseNPC::GetHealthRegen(this);
}


// CDOTA_BaseNPC::GetPercentageBasedManaRegen  (line 6483, @0x00000000028fa4e0, libserver.so)  // inlines: GetModifier_Percentage_Additive, IsListeningToEvent
// calls: CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal
float __fastcall CDOTA_BaseNPC::GetPercentageBasedManaRegen(CDOTA_BaseNPC *const this)
{
  float result; // xmm0_4
  __int64 v2; // rax

  result = 1.0;
  if ( !this->m_bIsIllusion.m_Value )
  {
    v2 = this->m_ModifierManager.m_buffsForModifiers[54];
    if ( v2 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v2].m_Size > 0 )
      return CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal(
               &this->m_ModifierManager,
               modifierfunction::MODIFIER_PROPERTY_MANA_REGEN_PERCENTAGE,
               &CModifierParams::s_Default);
  }
  return result;
}


// CDOTA_BaseNPC::ShouldUseCollisionPaddingWithUnit  (line 6495, @0x00000000029072a0, libserver.so)  // inlines: IsControllableByAnyPlayer, operator><int>
// callers: CGridNavPath::ComputeShortPathGoal
bool __fastcall CDOTA_BaseNPC::ShouldUseCollisionPaddingWithUnit(CDOTA_BaseNPC *const this, CDOTA_BaseNPC *pNPC)
{
  bool result; // al

  result = 1;
  if ( (this->m_iIsControllableByPlayer64.m_Value != 0) != (pNPC->m_iIsControllableByPlayer64.m_Value != 0)
    && (this->m_iUnitType & 0x10) == 0 )
  {
    return (pNPC->m_iUnitType & 0x10) != 0;
  }
  return result;
}


// CDOTA_BaseNPC::GetCollisionDistanceToUnit  (line 6504, @0x00000000029072e0, libserver.so)  // inlines: FastSqrt, GetPaddedCollisionRadius, IsControllableByAnyPlayer, Length2D, ShouldUseCollisionPaddingWithUnit, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator><int>
// calls: CBaseEntity::GetAbsOrigin
float __fastcall CDOTA_BaseNPC::GetCollisionDistanceToUnit(CDOTA_BaseNPC *const this, CDOTA_BaseNPC *pNPC)
{
  const Vector *AbsOrigin; // r13
  const Vector *v5; // rax
  float v6; // xmm0_4

  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v5 = CBaseEntity::GetAbsOrigin(pNPC);
  v6 = fsqrt(((v5->x - AbsOrigin->x) * (v5->x - AbsOrigin->x)) + ((v5->y - AbsOrigin->y) * (v5->y - AbsOrigin->y)));
  if ( (this->m_iIsControllableByPlayer64.m_Value != 0) == (pNPC->m_iIsControllableByPlayer64.m_Value != 0)
    || (this->m_iUnitType & 0x10) != 0
    || (pNPC->m_iUnitType & 0x10) != 0 )
  {
    return (v6 - (this->m_flHullRadius + this->m_flCollisionPadding))
         - (pNPC->m_flHullRadius + pNPC->m_flCollisionPadding);
  }
  else
  {
    return (v6 - this->m_flHullRadius) - pNPC->m_flHullRadius;
  }
}


// CDOTA_BaseNPC::GetEnemyPriority  (line 6520, @0x00000000029073c0, libserver.so)  // inlines: GetUnitRelationshipClass
// globals: CSWTCH.17318, CSWTCH.17317
int __fastcall CDOTA_BaseNPC::GetEnemyPriority(CDOTA_BaseNPC *const this, int nEnemyRelationshipClass)
{
  int result; // eax
  __int64 v3; // rsi

  if ( (this->m_nUnitState64.m_Value & 0x400000) != 0 || this->m_iUnitRelationshipClass != 4 )
  {
    v3 = (nEnemyRelationshipClass - 2);
    result = 10;
    if ( v3 <= 4 )
      return CSWTCH_17318[v3];
  }
  else
  {
    result = 10;
    if ( nEnemyRelationshipClass <= 6 )
      return CSWTCH_17317[nEnemyRelationshipClass];
  }
  return result;
}


// CDOTA_BaseNPC::IsEnemyPriorityEqual  (line 6550, @0x00000000029074f0, libserver.so)  // inlines: GetUnitRelationshipClass
// calls: CDOTA_BaseNPC::IsEnemyPriorityEqual
bool __fastcall CDOTA_BaseNPC::IsEnemyPriorityEqual(
        CDOTA_BaseNPC *const this,
        CDOTA_BaseNPC *pNPC1,
        CDOTA_BaseNPC *pNPC2)
{
  int m_iUnitRelationshipClass; // ecx
  int v4; // eax

  m_iUnitRelationshipClass = 5;
  if ( (pNPC1->m_nUnitState64.m_Value & 0x400000) == 0 )
    m_iUnitRelationshipClass = pNPC1->m_iUnitRelationshipClass;
  v4 = 5;
  if ( (pNPC2->m_nUnitState64.m_Value & 0x400000) == 0 )
    v4 = pNPC2->m_iUnitRelationshipClass;
  return CDOTA_BaseNPC::IsEnemyPriorityEqual(this, m_iUnitRelationshipClass, v4);
}


// CDOTA_BaseNPC::IsEnemyPriorityEqual  (line 6561, @0x0000000002907420, libserver.so)  // inlines: GetEnemyPriority, GetUnitRelationshipClass, InState, IsLowAttackPriority
// callers: CDOTA_BaseNPC::IsEnemyPriorityEqual, CDOTA_BaseNPC::GetBestEnemy, CDOTA_BaseNPC::GetAutoAttackTarget
// globals: CSWTCH.17318, CSWTCH.17317
bool __fastcall CDOTA_BaseNPC::IsEnemyPriorityEqual(
        CDOTA_BaseNPC *const this,
        int nRelationshipClass1,
        int nRelationshipClass2)
{
  int v3; // ecx
  __int64 v5; // rsi
  __int64 v6; // rdx

  if ( (this->m_nUnitState64.m_Value & 0x400000) == 0 && this->m_iUnitRelationshipClass == 4 )
  {
    v3 = 10;
    if ( nRelationshipClass1 <= 6 )
    {
      v3 = CSWTCH_17317[nRelationshipClass1];
      if ( nRelationshipClass2 > 6 )
        return v3 == 10;
      return v3 == CSWTCH_17317[nRelationshipClass2];
    }
LABEL_4:
    if ( nRelationshipClass2 > 6 )
      return v3 == 10;
    return v3 == CSWTCH_17317[nRelationshipClass2];
  }
  v5 = (nRelationshipClass1 - 2);
  v3 = 10;
  if ( v5 <= 4 )
  {
    v3 = CSWTCH_17318[v5];
    if ( (this->m_nUnitState64.m_Value & 0x400000) != 0 )
      goto LABEL_8;
  }
  else if ( (this->m_nUnitState64.m_Value & 0x400000) != 0 )
  {
    goto LABEL_8;
  }
  if ( this->m_iUnitRelationshipClass == 4 )
    goto LABEL_4;
LABEL_8:
  v6 = (nRelationshipClass2 - 2);
  if ( v6 > 4 )
    return v3 == 10;
  return v3 == CSWTCH_17318[v6];
}


// CDOTA_BaseNPC::IsEnemyPriorityGreater  (line 6568, @0x0000000002907600, libserver.so)  // inlines: GetUnitRelationshipClass
// calls: CDOTA_BaseNPC::IsEnemyPriorityGreater
// callers: CDOTA_BaseNPC::GetAutoAttackTarget, CDOTA_BaseNPC::AlertNearbyUnits
bool __fastcall CDOTA_BaseNPC::IsEnemyPriorityGreater(
        CDOTA_BaseNPC *const this,
        CDOTA_BaseNPC *pNPC1,
        CDOTA_BaseNPC *pNPC2)
{
  int m_iUnitRelationshipClass; // ecx
  int v4; // eax

  m_iUnitRelationshipClass = 5;
  if ( (pNPC1->m_nUnitState64.m_Value & 0x400000) == 0 )
    m_iUnitRelationshipClass = pNPC1->m_iUnitRelationshipClass;
  v4 = 5;
  if ( (pNPC2->m_nUnitState64.m_Value & 0x400000) == 0 )
    v4 = pNPC2->m_iUnitRelationshipClass;
  return CDOTA_BaseNPC::IsEnemyPriorityGreater(this, m_iUnitRelationshipClass, v4);
}


// CDOTA_BaseNPC::IsEnemyPriorityGreater  (line 6579, @0x0000000002907530, libserver.so)  // inlines: GetEnemyPriority, GetUnitRelationshipClass, InState, IsLowAttackPriority
// callers: CDOTA_BaseNPC::IsEnemyPriorityGreater, CDOTA_BaseNPC::GetBestEnemy, CDOTA_BaseNPC::GetAutoAttackTarget
// globals: CSWTCH.17318, CSWTCH.17317
bool __fastcall CDOTA_BaseNPC::IsEnemyPriorityGreater(
        CDOTA_BaseNPC *const this,
        int nRelationshipClass1,
        int nRelationshipClass2)
{
  int v3; // ecx
  __int64 v5; // rsi
  __int64 v6; // rdx

  if ( (this->m_nUnitState64.m_Value & 0x400000) == 0 && this->m_iUnitRelationshipClass == 4 )
  {
    v3 = 10;
    if ( nRelationshipClass1 <= 6 )
    {
      v3 = CSWTCH_17317[nRelationshipClass1];
      if ( nRelationshipClass2 > 6 )
        return v3 > 10;
      return v3 > CSWTCH_17317[nRelationshipClass2];
    }
LABEL_4:
    if ( nRelationshipClass2 > 6 )
      return v3 > 10;
    return v3 > CSWTCH_17317[nRelationshipClass2];
  }
  v5 = (nRelationshipClass1 - 2);
  v3 = 10;
  if ( v5 <= 4 )
  {
    v3 = CSWTCH_17318[v5];
    if ( (this->m_nUnitState64.m_Value & 0x400000) != 0 )
      goto LABEL_8;
  }
  else if ( (this->m_nUnitState64.m_Value & 0x400000) != 0 )
  {
    goto LABEL_8;
  }
  if ( this->m_iUnitRelationshipClass == 4 )
    goto LABEL_4;
LABEL_8:
  v6 = (nRelationshipClass2 - 2);
  if ( v6 > 4 )
    return v3 > 10;
  return v3 > CSWTCH_17318[v6];
}


// CDOTA_BaseNPC::IsEnemyTopPriority  (line 6585, @0x0000000002907640, libserver.so)  // inlines: GetEnemyPriority, GetUnitRelationshipClass, IsEnemyTopPriority
// globals: CSWTCH.17318, CSWTCH.17317
bool __fastcall CDOTA_BaseNPC::IsEnemyTopPriority(CDOTA_BaseNPC *const this, CDOTA_BaseNPC *pEnemy)
{
  __int64 m_iUnitRelationshipClass; // rdx
  bool result; // al
  __int64 v4; // rdx

  m_iUnitRelationshipClass = 5;
  if ( (pEnemy->m_nUnitState64.m_Value & 0x400000) == 0 )
    m_iUnitRelationshipClass = pEnemy->m_iUnitRelationshipClass;
  if ( (this->m_nUnitState64.m_Value & 0x400000) != 0 || this->m_iUnitRelationshipClass != 4 )
  {
    v4 = (m_iUnitRelationshipClass - 2);
    result = 1;
    if ( v4 <= 4 )
      return CSWTCH_17318[v4] == 10;
  }
  else
  {
    result = 1;
    if ( m_iUnitRelationshipClass <= 6 )
      return CSWTCH_17317[m_iUnitRelationshipClass] == 10;
  }
  return result;
}


// CDOTA_BaseNPC::IsEnemyTopPriority  (line 6595, @0x00000000029076b0, libserver.so)  // inlines: GetEnemyPriority, GetUnitRelationshipClass
// globals: CSWTCH.17318, CSWTCH.17317
bool __fastcall CDOTA_BaseNPC::IsEnemyTopPriority(CDOTA_BaseNPC *const this, int nRelationshipClass)
{
  bool result; // al
  __int64 v3; // rsi

  if ( (this->m_nUnitState64.m_Value & 0x400000) != 0 || this->m_iUnitRelationshipClass != 4 )
  {
    v3 = (nRelationshipClass - 2);
    result = 1;
    if ( v3 <= 4 )
      return CSWTCH_17318[v3] == 10;
  }
  else
  {
    result = 1;
    if ( nRelationshipClass <= 6 )
      return CSWTCH_17317[nRelationshipClass] == 10;
  }
  return result;
}


// CDOTA_BaseNPC::GetBestEnemy  (line 6642, @0x0000000002925d70, libserver.so)  // inlines: AddToTail, CDOTA_EnemyData, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, CanBeSeenByTeam, CanEntityBeSeenByMyTeam, CopyConstruct<CDOTA_BaseNPC*>, DetermineAttackBonus, Element, FastSqrt, Get, GetInstance, GetNPCAttackTarget, GetTeamNumber, GetUnitRelationshipClass, GrowMemory, Length2D, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_BaseNPC::GetAttackRange, CGridNav::GetNPCsInRange, CDOTA_BaseNPC::CanAutoAttackTarget, CBaseModelEntity::CanBeSeenByTeam, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::IsEnemyPriorityGreater, CDOTA_BaseNPC::IsEnemyPriorityEqual, CUtlVectorBase<CDOTA_BaseNPC*, CUtlMemory<CDOTA_BaseNPC*, int> >::~CUtlVectorBase, CDOTA_BaseNPC::GetRangeToUnit, CUtlMemory<CDOTA_BaseNPC*, int>::Grow, _Unwind_Resume (13 total)
// callers: CDOTA_BaseNPC::GetAutoAttackTarget
CDOTA_BaseNPC *__fastcall CDOTA_BaseNPC::GetBestEnemy(
        CDOTA_BaseNPC *const this,
        __m128i a2,
        float flRange,
        CDOTA_PreviousTargetData *pPreviousTargetData)
{
  float v6; // ebx
  float v7; // xmm0_4
  __int64 m_Size; // rbx
  int v9; // edx
  int v10; // edx
  CDOTA_BaseNPC **v11; // rax
  int v12; // eax
  __int64 v13; // rbx
  int v14; // esi
  CDOTA_BaseNPC *v15; // r12
  CBaseModelEntity *v16; // rax
  CBaseModelEntity *v17; // r14
  int m_Value; // esi
  const Vector *v19; // rax
  float v20; // xmm1_4
  int m_nRelationshipClass; // r15d
  float v22; // xmm0_4
  int v23; // r14d
  float RangeToUnit; // xmm0_4
  CDOTA_BaseNPC *v26; // rax
  const Vector *AbsOrigin; // r15
  const Vector *v28; // rax
  float v29; // xmm0_4
  float v30; // xmm1_4
  float v31; // xmm0_4
  CDOTA_BaseNPC *v32; // [rsp+8h] [rbp-278h]
  float v33; // [rsp+10h] [rbp-270h]
  int v34; // [rsp+14h] [rbp-26Ch]
  float flAttackRange; // [rsp+18h] [rbp-268h]
  int nRelationshipClass1; // [rsp+1Ch] [rbp-264h]
  float v38; // [rsp+28h] [rbp-258h]
  float v39; // [rsp+28h] [rbp-258h]
  float v40; // [rsp+28h] [rbp-258h]
  bool bFoundAny; // [rsp+2Fh] [rbp-251h]
  GridNavBaseNPCStackVec_t npcs; // [rsp+30h] [rbp-250h] BYREF
  unsigned __int64 v43; // [rsp+248h] [rbp-38h]

  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(a2));
  v43 = __readfsqword(0x28u);
  flAttackRange = CDOTA_BaseNPC::GetAttackRange(this);
  v7 = v6 + this->m_flHullRadius;
  npcs.m_Size = 0;
  npcs.m_Memory.m_nAllocationCount = 64;
  npcs.m_Memory.m_nGrowSize = 0x80000000;
  npcs.m_Memory.m_pMemory = &npcs.m_FixedMemory;
  CGridNav::GetNPCsInRange(&g_GridNav, this, v7, &npcs);
  if ( pPreviousTargetData == 0 )
    goto LABEL_6;
  m_Size = npcs.m_Size;
  v9 = npcs.m_Size;
  if ( npcs.m_Size == npcs.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CDOTA_BaseNPC *,int>::Grow(&npcs.m_Memory, 1);
    v9 = npcs.m_Size;
  }
  v10 = v9 + 1;
  npcs.m_Size = v10;
  v11 = &npcs.m_Memory.m_pMemory[m_Size];
  if ( v11 != 0 )
  {
    *v11 = 0;
LABEL_6:
    v12 = npcs.m_Size;
    goto LABEL_7;
  }
  v12 = v10;
LABEL_7:
  if ( v12 > 0 )
  {
    v13 = 0;
    v32 = 0;
    v33 = 0.0;
    nRelationshipClass1 = 0;
    v34 = 0;
    bFoundAny = 0;
    while ( 1 )
    {
      v15 = npcs.m_Memory.m_pMemory[v13];
      if ( v15 != 0 )
        break;
      v16 = CEntityHandle::operator CEntityInstance *(pPreviousTargetData);
      v17 = v16;
      if ( v16 != 0 && v16->m_bIsDOTANPC )
      {
        m_Value = this->m_iTeamNum.m_Value;
        if ( m_Value == 4 || v16->m_pCollision == 0 || CBaseModelEntity::CanBeSeenByTeam(v16, m_Value) )
        {
          AbsOrigin = CBaseEntity::GetAbsOrigin(this);
          v28 = CBaseEntity::GetAbsOrigin(v17);
          v29 = v28->x - AbsOrigin->x;
          v30 = v28->y - AbsOrigin->y;
          m_nRelationshipClass = 5;
          v31 = fsqrt((v29 * v29) + (v30 * v30)) - *(&v17[2]._vptr_IHandleEntity + 1);
          if ( (v17[2].m_vecVelocity.m_vecY.m_bUnflattened & 0x40) == 0 )
            m_nRelationshipClass = *v17[2].m_NetworkTransmitComponent.m_PVSInfo.m_pClustersInline;
          v40 = v31;
          v26 = CEntityHandle::operator CEntityInstance *(&v17[2].m_flElasticity);
          v22 = v40;
          if ( v26 != 0 )
            goto LABEL_34;
LABEL_41:
          v23 = 0;
          goto LABEL_22;
        }
      }
      v19 = CBaseEntity::GetAbsOrigin(this);
      v20 = this->m_vTargetLastKnownPosition.y - v19->y;
      m_nRelationshipClass = pPreviousTargetData->m_nRelationshipClass;
      v22 = fsqrt(
              ((this->m_vTargetLastKnownPosition.x - v19->x) * (this->m_vTargetLastKnownPosition.x - v19->x))
            + (v20 * v20));
      if ( flAttackRange < v22 )
        goto LABEL_41;
      v23 = 0;
      v22 = flAttackRange + 1.0;
LABEL_22:
      if ( bFoundAny )
      {
        v38 = v22;
        if ( CDOTA_BaseNPC::IsEnemyPriorityGreater(this, nRelationshipClass1, m_nRelationshipClass)
          || CDOTA_BaseNPC::IsEnemyPriorityEqual(this, nRelationshipClass1, m_nRelationshipClass)
          && (v23 < v34 || v23 <= v34 && v38 >= v33) )
        {
          goto LABEL_13;
        }
        ++v13;
        v34 = v23;
        nRelationshipClass1 = m_nRelationshipClass;
        v33 = v38;
        v32 = v15;
        if ( npcs.m_Size <= v13 )
          goto LABEL_29;
      }
      else
      {
        v34 = v23;
        nRelationshipClass1 = m_nRelationshipClass;
        v33 = v22;
        v32 = v15;
        bFoundAny = 1;
LABEL_13:
        if ( npcs.m_Size <= ++v13 )
          goto LABEL_29;
      }
    }
    if ( !CDOTA_BaseNPC::CanAutoAttackTarget(this, npcs.m_Memory.m_pMemory[v13], 0) )
      goto LABEL_13;
    v14 = this->m_iTeamNum.m_Value;
    if ( v14 != 4 && v15->m_pCollision != 0 && !CBaseModelEntity::CanBeSeenByTeam(v15, v14) )
      goto LABEL_13;
    RangeToUnit = CDOTA_BaseNPC::GetRangeToUnit(this, v15);
    m_nRelationshipClass = 5;
    if ( (v15->m_nUnitState64.m_Value & 0x400000) == 0 )
      m_nRelationshipClass = v15->m_iUnitRelationshipClass;
    v39 = RangeToUnit;
    v26 = CEntityHandle::operator CEntityInstance *(&v15->m_hAttackTarget);
    v22 = v39;
    if ( v26 != 0 )
    {
LABEL_34:
      v23 = 0;
      if ( v26->m_bIsDOTANPC && v26->m_iTeamNum.m_Value == this->m_iTeamNum.m_Value && v22 <= flAttackRange )
        v23 = (this == v26) + 1;
      goto LABEL_22;
    }
    goto LABEL_41;
  }
  v32 = 0;
LABEL_29:
  CUtlVectorBase<CDOTA_BaseNPC *,CUtlMemory<CDOTA_BaseNPC *,int>>::~CUtlVectorBase(&npcs);
  return v32;
}


// CDOTA_BaseNPC::FindWakingEnemy  (line 6753, @0x00000000029172d0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, CanBeSeenByTeam, CanEntityBeSeenByMyTeam, Get, GetAttackTarget, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GetUnitRelationshipClass, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, operator CEntityInstance*, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CGridNav::GetNPCsInRange, CDOTA_BaseNPC::CanAutoAttackTarget, CBaseModelEntity::CanBeSeenByTeam, CUtlMemory<CDOTA_BaseNPC*, int>::Purge, CUtlVectorBase<CDOTA_BaseNPC*, CUtlMemory<CDOTA_BaseNPC*, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// callers: CDOTABehaviorNeutralHome::Update
// globals: CEntityHandle::gm_pEntityList
CDOTA_BaseNPC *__fastcall CDOTA_BaseNPC::FindWakingEnemy(CDOTA_BaseNPC *const this, float a2, float flRange)
{
  __int64 v4; // r12
  int v5; // r13d
  CDOTA_BaseNPC *v6; // rbx
  int m_Value; // esi
  uint32 m_Index; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  GridNavBaseNPCStackVec_t npcs; // [rsp+0h] [rbp-250h] BYREF
  unsigned __int64 v13; // [rsp+218h] [rbp-38h]

  npcs.m_Size = 0;
  v13 = __readfsqword(0x28u);
  npcs.m_Memory.m_nAllocationCount = 64;
  npcs.m_Memory.m_nGrowSize = 0x80000000;
  npcs.m_Memory.m_pMemory = &npcs.m_FixedMemory;
  CGridNav::GetNPCsInRange(&g_GridNav, this, a2, &npcs);
  v4 = 0;
  v5 = 0;
  if ( npcs.m_Size > 0 )
  {
    while ( 1 )
    {
      v6 = npcs.m_Memory.m_pMemory[v4];
      if ( v6->m_bWakesNeutrals && CDOTA_BaseNPC::CanAutoAttackTarget(this, npcs.m_Memory.m_pMemory[v4], 0) )
      {
        m_Value = this->m_iTeamNum.m_Value;
        if ( m_Value == 4 || v6->m_pCollision == 0 || CBaseModelEntity::CanBeSeenByTeam(v6, m_Value) )
        {
          if ( (v6->m_nUnitState64.m_Value & 0x400000) == 0 && v6->m_iUnitRelationshipClass != 5 )
            break;
          m_Index = v6->m_hAttackTarget.m_Index;
          if ( m_Index + 2 > 1 )
          {
            v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v6->m_hAttackTarget.m_Index) >> 9) & 0x3F];
            if ( v9 != 0 )
            {
              v10 = &v9[v6->m_hAttackTarget.m_Index & 0x1FF];
              if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index && this == v10->m_pInstance )
                break;
            }
          }
        }
      }
      ++v5;
      ++v4;
      if ( npcs.m_Size <= v5 )
        goto LABEL_18;
    }
  }
  else
  {
LABEL_18:
    v6 = 0;
  }
  npcs.m_Size = 0;
  if ( (npcs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&npcs.m_Memory);
    if ( (npcs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&npcs.m_Memory);
  }
  return v6;
}


// CDOTA_BaseNPC::GetAutoAttackTarget  (line 6785, @0x0000000002926240, libserver.so)  // inlines: CanBeSeenByTeam, CanEntityBeSeenByMyTeam, FastSqrt, Get, GetAcquisitionRange, GetAlertTarget, GetAngerTarget, GetElapsedTime, GetEnemyPriority, GetEntityIdentity, GetEntryIndex, GetForceAttackTarget, GetInstance, GetTeamNumber, GetUnitRelationshipClass, HasFlyMovementCapability, HasMovementCapability, InState, IndexToIdentity, IsAttackingEntity, IsElapsed, IsEnemyTopPriority, IsInvisibleTo, IsValid, Length2D, LookupEntity, Max<float>, Set, SetForceAttackTarget, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=
// calls: CDOTA_BaseNPC::GetAutoattackUnitType, CDOTAPlayer::GetUnitsAutoAttackMode, CDOTA_BaseNPC::CanAutoAttack, CDOTA_BaseNPC::GetAttackRange, CDOTA_BaseNPC::GetThreatRange, CountdownTimer::Now, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::CanAutoAttackTarget, CBaseModelEntity::CanBeSeenByTeam, CDOTA_BaseNPC::GetBestEnemy, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::IsEnemyPriorityGreater (17 total)
// callers: CDOTABehaviorCommandMoveToPositionAggressive::Update, CDOTABehaviorMoveToNPCToAttack::OnDeAggro, CDOTABehaviorMoveToNPCToAttack::Update, CDOTABehaviorInvade::Update, CDOTABehaviorNeutralAggroReturn::Update, CDOTABehaviorIdle::Update
// globals: CEntityHandle::gm_pEntityList, CSWTCH.17317, CSWTCH.17318
CDOTA_BaseNPC *__fastcall CDOTA_BaseNPC::GetAutoAttackTarget(
        CDOTA_BaseNPC *const this,
        CDOTA_PreviousTargetData *pPreviousTargetData,
        bool bAttackMove)
{
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  char v9; // r13
  CDOTAPlayer *v10; // r13
  AutoattackUnitType_t AutoattackUnitType; // eax
  CDOTA_BaseNPC *result; // rax
  __m128i v13; // xmm0
  unsigned int v14; // r14d
  float v15; // xmm1_4
  float v16; // xmm0_4
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // r12
  int v19; // esi
  CEntityInstance *v20; // rax
  float v21; // xmm1_4
  CDOTA_BaseNPC *v22; // r12
  CDOTA_BaseNPC *BestEnemy; // rax
  int m_nRelationshipClass; // eax
  char v25; // bl
  const Vector *AbsOrigin; // rax
  float v27; // xmm1_4
  int v28; // esi
  __int64 v29; // rax
  int v30; // eax
  CDOTA_BaseNPC *v31; // rax
  CDOTA_BaseNPC *v32; // rbx
  CDOTA_BaseNPC *v33; // rax
  CDOTA_BaseNPC *v34; // r14
  float v35; // xmm1_4
  int v36; // esi
  __int64 v37; // rax
  bool IsEnemyPriorityGreater; // al
  int v39; // esi
  bool v40; // dl
  unsigned __int8 v41; // al
  int m_iUnitRelationshipClass; // r13d
  bool v43; // dl
  CDOTA_BaseNPC *m_pInstance; // r13
  int m_Value; // esi
  char bTargetAcquired; // [rsp+4h] [rbp-3Ch]
  unsigned int nAcquiredTargetRelationshipClass; // [rsp+8h] [rbp-38h]
  int nAcquiredTargetRelationshipClassa; // [rsp+8h] [rbp-38h]
  float flDefaultAcquisitionRange; // [rsp+Ch] [rbp-34h]

  m_Index = this->m_hForceAttackTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hForceAttackTarget.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[this->m_hForceAttackTarget.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
      {
        m_pInstance = v8->m_pInstance;
        if ( v8->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          m_Value = this->m_iTeamNum.m_Value;
          if ( (this->m_bAllowAllyForceAttack || m_Value != m_pInstance->m_iTeamNum.m_Value)
            && !CDOTA_BaseNPC::IsInvisibleTo(v8->m_pInstance, m_Value) )
          {
            return m_pInstance;
          }
          this->m_bAllowAllyForceAttack = 0;
          this->m_hForceAttackTarget.m_Index = -1;
          CDOTA_BaseNPC::UpdatePseudoQueuedOrder(this, 1);
        }
      }
    }
  }
  v9 = 1;
  if ( (this->m_iMoveCapabilities & 3) == 0 )
    v9 = BYTE3(this->m_nUnitState64.m_Value) & 1 | ((this->m_nUnitState64.m_Value & 0x200000000LL) != 0);
  if ( this->m_bHold )
  {
    v10 = (*(this->_vptr_IHandleEntity + 413))(this);
    if ( v10 == 0 )
      return 0;
    AutoattackUnitType = CDOTA_BaseNPC::GetAutoattackUnitType(this);
    if ( CDOTAPlayer::GetUnitsAutoAttackMode(v10, AutoattackUnitType) != CDOTAClientMsg_UnitsAutoAttackMode_EMode::CDOTAClientMsg_UnitsAutoAttackMode_EMode_ALWAYS )
      return 0;
    v9 = 0;
  }
  if ( !CDOTA_BaseNPC::CanAutoAttack(this, bAttackMove) )
    return 0;
  flDefaultAcquisitionRange = CDOTA_BaseNPC::GetAttackRange(this);
  nAcquiredTargetRelationshipClass = CDOTA_BaseNPC::GetThreatRange(this);
  *v13.m128i_i32 = this->m_iAcquisitionRange;
  if ( this->m_iIsControllableByPlayer64.m_Value != 0 && *v13.m128i_i32 <= flDefaultAcquisitionRange )
  {
    if ( v9 == 0 )
    {
      v14 = _mm_cvtsi128_si32(LODWORD(flDefaultAcquisitionRange));
      goto LABEL_18;
    }
    v13 = LODWORD(flDefaultAcquisitionRange);
  }
  else
  {
    v14 = _mm_cvtsi128_si32(LODWORD(flDefaultAcquisitionRange));
    if ( v9 == 0 || flDefaultAcquisitionRange > *v13.m128i_i32 )
      goto LABEL_18;
  }
  v14 = _mm_cvtsi128_si32(v13);
LABEL_18:
  if ( CountdownTimer::Now(&this->m_AngerTimer) < this->m_AngerTimer.m_timestamp.m_Value )
  {
    v16 = CountdownTimer::Now(&this->m_AngerTimer);
    v15 = 0.18000001;
    if ( ((v16 - this->m_AngerTimer.m_timestamp.m_Value) + this->m_AngerTimer.m_duration.m_Value) >= 0.18000001 )
    {
      v17 = CEntityHandle::operator CEntityInstance *(&this->m_hAngerTarget);
      v18 = v17;
      if ( v17 != 0 && v17->m_bIsDOTANPC && CDOTA_BaseNPC::CanAutoAttackTarget(this, v17, 0) )
      {
        v19 = this->m_iTeamNum.m_Value;
        if ( (v19 == 4 || v18->m_pCollision == 0 || CBaseModelEntity::CanBeSeenByTeam(v18, v19))
          && (v9 != 0 || CDOTA_BaseNPC::IsEntityInRangeForAttack(this, v18, flDefaultAcquisitionRange, v15)) )
        {
          return v18;
        }
      }
    }
  }
  if ( pPreviousTargetData != 0 )
  {
    v20 = CEntityHandle::operator CEntityInstance *(pPreviousTargetData);
    v22 = v20;
    if ( v20 == 0 || BYTE3(v20[7]._vptr_IHandleEntity) == 0 )
    {
      BestEnemy = CDOTA_BaseNPC::GetBestEnemy(this, _mm_cvtsi32_si128(v14), v21, pPreviousTargetData);
      v22 = 0;
      if ( BestEnemy == 0 )
      {
LABEL_30:
        m_nRelationshipClass = pPreviousTargetData->m_nRelationshipClass;
        bTargetAcquired = 1;
        v25 = 1;
        nAcquiredTargetRelationshipClassa = m_nRelationshipClass;
        goto LABEL_50;
      }
LABEL_60:
      v22 = BestEnemy;
      if ( (BestEnemy->m_nUnitState64.m_Value & 0x400000) != 0 )
      {
        nAcquiredTargetRelationshipClassa = 5;
        v25 = 0;
        bTargetAcquired = 1;
      }
      else
      {
        v25 = 0;
        bTargetAcquired = 1;
        nAcquiredTargetRelationshipClassa = BestEnemy->m_iUnitRelationshipClass;
      }
      goto LABEL_50;
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    v27 = (this->m_vTargetLastKnownPosition.y - AbsOrigin->y) * (this->m_vTargetLastKnownPosition.y - AbsOrigin->y);
    if ( flDefaultAcquisitionRange < ((fsqrt(
                                         ((this->m_vTargetLastKnownPosition.x - AbsOrigin->x)
                                        * (this->m_vTargetLastKnownPosition.x - AbsOrigin->x))
                                       + v27)
                                     - v22->m_flHullRadius)
                                    - this->m_flHullRadius)
      || (v28 = this->m_iTeamNum.m_Value) != 4 && v22->m_pCollision != 0 && !CBaseModelEntity::CanBeSeenByTeam(v22, v28) )
    {
      BestEnemy = CDOTA_BaseNPC::GetBestEnemy(this, _mm_cvtsi32_si128(v14), v27, pPreviousTargetData);
      if ( BestEnemy == 0 )
        goto LABEL_30;
      goto LABEL_60;
    }
    v29 = pPreviousTargetData->m_nRelationshipClass;
    if ( (this->m_nUnitState64.m_Value & 0x400000) != 0 || this->m_iUnitRelationshipClass != 4 )
    {
      v37 = (v29 - 2);
      if ( v37 > 4 )
        goto LABEL_65;
      v30 = CSWTCH_17318[v37];
    }
    else
    {
      if ( v29 > 6 )
        goto LABEL_65;
      v30 = CSWTCH_17317[v29];
    }
    if ( v30 != 10 )
    {
      v31 = CDOTA_BaseNPC::GetBestEnemy(this, nAcquiredTargetRelationshipClass, v27, 0);
      v32 = v31;
      if ( v31 != 0 && CDOTA_BaseNPC::IsEnemyPriorityGreater(this, v31, v22) )
      {
        if ( (v32->m_nUnitState64.m_Value & 0x400000) != 0 )
          nAcquiredTargetRelationshipClassa = 5;
        else
          nAcquiredTargetRelationshipClassa = v32->m_iUnitRelationshipClass;
        v22 = v32;
        bTargetAcquired = 1;
        v25 = 0;
        goto LABEL_50;
      }
    }
LABEL_65:
    if ( (v22->m_nUnitState64.m_Value & 0x400000) != 0 )
    {
      nAcquiredTargetRelationshipClassa = 5;
      v25 = 1;
      bTargetAcquired = 1;
    }
    else
    {
      v25 = 1;
      bTargetAcquired = 1;
      nAcquiredTargetRelationshipClassa = v22->m_iUnitRelationshipClass;
    }
    goto LABEL_50;
  }
  BestEnemy = CDOTA_BaseNPC::GetBestEnemy(this, _mm_cvtsi32_si128(v14), v15, 0);
  v22 = BestEnemy;
  if ( BestEnemy != 0 )
    goto LABEL_60;
  nAcquiredTargetRelationshipClassa = 0;
  v25 = 0;
  bTargetAcquired = 0;
LABEL_50:
  if ( CountdownTimer::Now(&this->m_AlertTimer) >= this->m_AlertTimer.m_timestamp.m_Value
    || (v33 = CEntityHandle::operator CEntityInstance *(&this->m_hAlertTarget), v34 = v33, v33 == 0)
    || !v33->m_bIsDOTANPC
    || !CDOTA_BaseNPC::CanAutoAttackTarget(this, v33, 0)
    || (v36 = this->m_iTeamNum.m_Value) != 4 && v34->m_pCollision != 0 && !CBaseModelEntity::CanBeSeenByTeam(v34, v36)
    || v9 == 0 && !CDOTA_BaseNPC::IsEntityInRangeForAttack(this, v34, flDefaultAcquisitionRange, v35) )
  {
LABEL_57:
    if ( v25 == 0 )
      return v22;
    return 0;
  }
  if ( this->m_iIsControllableByPlayer64.m_Value != 0 )
  {
    if ( bTargetAcquired != 0 || this != CEntityHandle::operator CEntityInstance *(&v34->m_hAttackTarget) )
      goto LABEL_57;
    return v34;
  }
  if ( bTargetAcquired == 0 )
    return v34;
  if ( (v34->m_nUnitState64.m_Value & 0x400000) != 0 )
  {
    IsEnemyPriorityGreater = CDOTA_BaseNPC::IsEnemyPriorityGreater(this, 5, nAcquiredTargetRelationshipClassa);
    v39 = 5;
    v40 = IsEnemyPriorityGreater;
    result = v34;
    if ( !v40 )
    {
LABEL_75:
      if ( !CDOTA_BaseNPC::IsEnemyPriorityEqual(this, v39, nAcquiredTargetRelationshipClassa) )
        goto LABEL_57;
      if ( v22 != 0 )
      {
        v41 = this->m_iTeamNum.m_Value;
        if ( (v41 == 4 || v22->m_pCollision == 0 || CBaseModelEntity::CanBeSeenByTeam(v22, v41))
          && CDOTA_BaseNPC::GetRangeToUnit(this, v22) <= flDefaultAcquisitionRange )
        {
          goto LABEL_57;
        }
      }
      return v34;
    }
  }
  else
  {
    m_iUnitRelationshipClass = v34->m_iUnitRelationshipClass;
    v43 = CDOTA_BaseNPC::IsEnemyPriorityGreater(this, m_iUnitRelationshipClass, nAcquiredTargetRelationshipClassa);
    result = v34;
    if ( !v43 )
    {
      v39 = m_iUnitRelationshipClass;
      goto LABEL_75;
    }
  }
  return result;
}


// CDOTA_BaseNPC::IsDebuggingOverride  (line 6915, @0x00000000028f5da0, libserver.so)
// calls: CBaseEntity::HasDebugBitsSet
bool __fastcall CDOTA_BaseNPC::IsDebuggingOverride(const CDOTA_BaseNPC *const this, unsigned int type)
{
  return CBaseEntity::HasDebugBitsSet(this, 0x20000u);
}


// CDOTA_BaseNPC::AddNewModifier  (line 6929, @0x000000000294edc0, libserver.so)  // inlines: ToDOTABaseNPC, ToDOTABaseNPCHero
// calls: CDOTA_ModifierManager::Lock, CDOTA_ModifierManager::AddNewModifier, CDOTA_BaseNPC_Hero::AddRecentModifier, CDOTA_ModifierManager::Unlock
// callers: CDOTABaseAbility::RefreshIntrinsicModifier, CDOTA_Ability_DataDriven::RefreshIntrinsicModifier, CDOTA_ActionRunner::PerformAction_AnimationAttack, CDOTA_Ability_DataDriven::Script_ApplyDataDrivenModifier, CDOTA_ActionRunner::PerformAction_ApplyModifier, CDOTA_ActionRunner::PerformAction_Knockback, CDOTA_ActionRunner::PerformAction_Stun, CDOTA_ActionRunner::PerformAction_ApplyMotionController, CDOTA_ActionRunner::PerformAction_SpawnUnit, CDOTA_Ability_Corspselord_Revive::OnSpellStart, CDOTA_Ability_Lesser_NightCrawler_Pounce::OnSpellStart, CDOTA_Item_UpgradedMortar::OnSpellStart (837 total)
CDOTA_Buff *__fastcall CDOTA_BaseNPC::AddNewModifier(
        CDOTA_BaseNPC *const this,
        CBaseEntity *pCaster,
        CDOTABaseAbility *pAbility,
        const char *pszScriptName,
        KeyValues *pKV,
        const CDOTAModifierBuffTableEntry *pEntry)
{
  CDOTA_BaseNPC::NetworkVar_m_ModifierManager *p_m_ModifierManager; // r12
  CDOTA_Buff *v11; // rax
  CDOTA_Buff *v12; // r13
  char v13; // al
  int m_iAbilityIndex; // r14d
  int v15; // eax
  char pEntryb; // [rsp+18h] [rbp-38h]

  p_m_ModifierManager = &this->m_ModifierManager;
  CDOTA_ModifierManager::Lock(&this->m_ModifierManager);
  v11 = CDOTA_ModifierManager::AddNewModifier(p_m_ModifierManager, pCaster, pAbility, pszScriptName, pKV, -1, pEntry);
  v12 = v11;
  if ( this != 0
    && (this->m_iUnitType & 1) != 0
    && v11 != 0
    && pAbility != 0
    && (((*(pAbility->_vptr_IHandleEntity + 251))(pAbility) & 2) == 0 || (*(v12->_vptr_CDOTA_Buff + 47))(v12) != 0)
    && pCaster != 0
    && pCaster->m_bIsDOTANPC
    && this != pCaster )
  {
    v13 = (*(v12->_vptr_CDOTA_Buff + 12))(v12);
    m_iAbilityIndex = pAbility->m_iAbilityIndex;
    pEntryb = v13;
    v15 = (*(pCaster->_vptr_IHandleEntity + 414))(pCaster);
    CDOTA_BaseNPC_Hero::AddRecentModifier(this, v15, m_iAbilityIndex, pEntryb != 1);
  }
  CDOTA_ModifierManager::Unlock(p_m_ModifierManager);
  return v12;
}


// CDOTA_BaseNPC::Script_AddNewModifier  (line 6960, @0x0000000002919f00, libserver.so)  // inlines: AssignTo, CVariantBase, SetBool, TempString, ToDOTAAbility, ToEnt, ToString, operator const Vector&, operator float, ~CVariantBase
// calls: HScriptToEntity<CBaseEntity>, __dynamic_cast, KeyValues::KeyValues, Warning, CDOTA_ModifierManager::Lock, CDOTA_ModifierManager::AddNewModifier, CDOTA_ModifierManager::Unlock, ToHScript, CVariantBase<CVariantDefaultAllocator>::Free, KeyValues::~KeyValues, KeyValues::SetInt, UTIL_VarArgs (18 total)
// strings: "HSCRIPT argument unsupported in Script_AddNewModifier table\n", "Unsupported KeyValue type for key %s (type %s)\n", "%g %g %g %g", "No conversion from %s to string at the moment!\n", "false", "true" (7 total)
// globals: jpt_291A057, jpt_291A25B, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, jpt_291A4F3
HSCRIPT __fastcall CDOTA_BaseNPC::Script_AddNewModifier(
        CDOTA_BaseNPC *const this,
        HSCRIPT hCaster,
        HSCRIPT hAbility,
        const char *pszScriptName,
        HSCRIPT hModifierTable)
{
  CBaseEntity *v6; // rax
  int v7; // ebx
  unsigned int v8; // r14d
  float v9; // xmm1_4
  const char *m_uint64; // r15
  CDOTA_Buff *v11; // r12
  HSCRIPT v12; // rbx
  const Vector *v14; // rax
  double z; // xmm2_8
  double y; // xmm1_8
  char *v17; // rax
  const char *v18; // r15
  const char *v19; // rsi
  const char *v20; // rax
  const char *v21; // rcx
  double m_float; // xmm0_8
  const char *v23; // rax
  double m_float64; // xmm0_8
  const char *v25; // rcx
  CDOTABaseAbility *pAbility; // [rsp+10h] [rbp-B0h]
  CBaseEntity *pCaster; // [rsp+20h] [rbp-A0h]
  int v30; // [rsp+3Ch] [rbp-84h]
  ScriptVariant_t vKey; // [rsp+50h] [rbp-70h] BYREF
  ScriptVariant_t vValue; // [rsp+60h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v35; // [rsp+88h] [rbp-38h]

  v35 = __readfsqword(0x28u);
  pCaster = HScriptToEntity<CBaseEntity>(hCaster);
  v6 = HScriptToEntity<CBaseEntity>(hAbility);
  if ( v6 != 0 )
    pAbility = __dynamic_cast(v6, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
  else
    pAbility = 0;
  KeyValues::KeyValues(&kv, pszScriptName);
  vValue.m_flags = 0;
  vValue.m_type = 0;
  vKey.m_type = 0;
  vKey.m_flags = 0;
  vKey.m_uint64 = 0;
  vValue.m_uint64 = 0;
  v30 = (*(*g_pScriptVM + 280LL))(g_pScriptVM, hModifierTable);
  if ( v30 > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      v8 = (*(*g_pScriptVM + 296LL))(g_pScriptVM, hModifierTable, v8, &vKey, &vValue);
      if ( vKey.m_type == 30 )
      {
        m_uint64 = vKey.m_uint64;
      }
      else
      {
        switch ( vKey.m_type )
        {
          case 0:
            goto LABEL_26;
          case 1:
            m_float = vKey.m_float;
            goto LABEL_32;
          case 3:
          case 0x27:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g %g",
              *vKey.m_pszString,
              *(vKey.m_uint64 + 4),
              *(vKey.m_uint64 + 8));
            break;
          case 4:
          case 0x1B:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g %g %g",
              *vKey.m_pszString,
              *(vKey.m_uint64 + 4),
              *(vKey.m_uint64 + 8),
              *(vKey.m_uint64 + 12));
            break;
          case 5:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", vKey.m_int);
            break;
          case 6:
            v21 = "true";
            if ( vKey.m_char == 0 )
              v21 = "false";
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v21);
            break;
          case 8:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", vKey.m_char);
            break;
          case 9:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%d %d %d %d",
              vKey.m_char,
              BYTE1(vKey.m_int),
              BYTE2(vKey.m_uint),
              HIBYTE(vKey.m_float));
            break;
          case 0x19:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g",
              *vKey.m_pszString,
              *(vKey.m_uint64 + 4));
            break;
          case 0x1A:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%lld", vKey.m_uint64);
            break;
          case 0x21:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%llu", vKey.m_uint64);
            break;
          case 0x22:
            m_float = vKey.m_float64;
LABEL_32:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
            break;
          case 0x25:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vKey.m_int);
            break;
          default:
            v20 = VariantFieldTypeName(vKey.m_type);
            Warning("No conversion from %s to string at the moment!\n", v20);
LABEL_26:
            CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
            break;
        }
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
      }
      switch ( vValue.m_type )
      {
        case 1:
        case 0x22:
          KeyValues::SetFloat(&kv, m_uint64, v9);
          break;
        case 3:
          v14 = vValue.m_uint64;
          if ( vValue.m_uint64 != 0 )
          {
            z = *(vValue.m_uint64 + 8);
            y = *(vValue.m_uint64 + 4);
          }
          else
          {
            v14 = &vec3_origin;
            z = vec3_origin.z;
            y = vec3_origin.y;
          }
          v17 = UTIL_VarArgs("%f %f %f", v14->x, y, z);
          KeyValues::SetString(&kv, m_uint64, v17);
          break;
        case 5:
          KeyValues::SetInt(&kv, m_uint64, vValue.m_int);
          break;
        case 6:
          KeyValues::SetInt(&kv, m_uint64, vValue.m_char);
          break;
        case 0x1E:
          KeyValues::SetString(&kv, m_uint64, vValue.m_pszString);
          break;
        case 0x1F:
          Warning("HSCRIPT argument unsupported in Script_AddNewModifier table\n");
          break;
        default:
          v18 = VariantFieldTypeName(vValue.m_type);
          if ( vKey.m_type == 30 )
          {
            v19 = vKey.m_uint64;
          }
          else
          {
            switch ( vKey.m_type )
            {
              case 0:
                goto LABEL_46;
              case 1:
                m_float64 = vKey.m_float;
                goto LABEL_48;
              case 3:
              case 0x27:
                V_snprintf(
                  &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                  512,
                  "%g %g %g",
                  *vKey.m_pszString,
                  *(vKey.m_uint64 + 4),
                  *(vKey.m_uint64 + 8));
                break;
              case 4:
              case 0x1B:
                V_snprintf(
                  &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                  512,
                  "%g %g %g %g",
                  *vKey.m_pszString,
                  *(vKey.m_uint64 + 4),
                  *(vKey.m_uint64 + 8),
                  *(vKey.m_uint64 + 12));
                break;
              case 5:
                V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", vKey.m_int);
                break;
              case 6:
                v25 = "true";
                if ( vKey.m_char == 0 )
                  v25 = "false";
                V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v25);
                break;
              case 8:
                V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", vKey.m_char);
                break;
              case 9:
                V_snprintf(
                  &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                  512,
                  "%d %d %d %d",
                  vKey.m_char,
                  BYTE1(vKey.m_int),
                  BYTE2(vKey.m_uint),
                  HIBYTE(vKey.m_float));
                break;
              case 0x19:
                V_snprintf(
                  &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                  512,
                  "%g %g",
                  *vKey.m_pszString,
                  *(vKey.m_uint64 + 4));
                break;
              case 0x1A:
                V_snprintf(
                  &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                  512,
                  "%lld",
                  vKey.m_uint64);
                break;
              case 0x21:
                V_snprintf(
                  &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                  512,
                  "%llu",
                  vKey.m_uint64);
                break;
              case 0x22:
                m_float64 = vKey.m_float64;
LABEL_48:
                V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float64);
                break;
              case 0x25:
                V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", vKey.m_int);
                break;
              default:
                v23 = VariantFieldTypeName(vKey.m_type);
                Warning("No conversion from %s to string at the moment!\n", v23);
LABEL_46:
                CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
                break;
            }
            v19 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          }
          Warning("Unsupported KeyValue type for key %s (type %s)\n", v19, v18);
          break;
      }
      (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vKey);
      (*(*g_pScriptVM + 344LL))(g_pScriptVM, &vValue);
      ++v7;
    }
    while ( v7 != v30 );
  }
  CDOTA_ModifierManager::Lock(&this->m_ModifierManager);
  v11 = CDOTA_ModifierManager::AddNewModifier(&this->m_ModifierManager, pCaster, pAbility, pszScriptName, &kv, -1, 0);
  CDOTA_ModifierManager::Unlock(&this->m_ModifierManager);
  v12 = ToHScript(v11);
  CVariantBase<CVariantDefaultAllocator>::Free(&vValue);
  CVariantBase<CVariantDefaultAllocator>::Free(&vKey);
  KeyValues::~KeyValues(&kv);
  return v12;
}


// CDOTA_BaseNPC::Script_RespawnUnit  (line 7016, @0x0000000002908f10, libserver.so)  // inlines: DirectRespawn
// calls: CBaseEntity::ClearFlags, CBaseEntity::SetLifeState, CDOTA_BaseNPC::ModifyHealth, CDOTA_BaseNPC::GetAbilityByIndex, CDOTA_UnitInventory::GetItemInSlot, CEntityKeyValues::CEntityKeyValues, CBaseEntity::GetAbsOrigin, FindClearSpaceForUnit, CEntityKeyValues::~CEntityKeyValues, _Unwind_Resume, __stack_chk_fail
void __fastcall CDOTA_BaseNPC::Script_RespawnUnit(CDOTA_BaseNPC *const this)
{
  int v2; // ebx
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTA_Item *ItemInSlot; // rax
  CEntityKeyValues emptyKeyValues; // [rsp+10h] [rbp-A0h] BYREF
  unsigned __int64 v6; // [rsp+88h] [rbp-28h]
  Vector v7; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = 0;
  v6 = __readfsqword(0x28u);
  CBaseEntity::ClearFlags(this);
  CBaseEntity::SetLifeState(this, LifeState_t::LIFE_ALIVE);
  CDOTA_BaseNPC::ModifyHealth(this, this->m_flBaseMaxHealth, 0, 0, 0);
  do
  {
    if ( CDOTA_BaseNPC::GetAbilityByIndex(this, v2) != 0 )
    {
      AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(this, v2);
      (*(AbilityByIndex->_vptr_IHandleEntity + 207))(AbilityByIndex);
    }
    ++v2;
  }
  while ( v2 != 24 );
  LOBYTE(v2) = 0;
  do
  {
    if ( CDOTA_UnitInventory::GetItemInSlot(&this->m_Inventory, v2) != 0 )
    {
      ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(&this->m_Inventory, v2);
      (*(ItemInSlot->_vptr_IHandleEntity + 207))(ItemInSlot);
    }
    ++v2;
  }
  while ( v2 != 9 );
  CEntityKeyValues::CEntityKeyValues(&emptyKeyValues);
  g_bReceivedChainedSpawn = 0;
  (*(this->_vptr_IHandleEntity + 8))(this, &emptyKeyValues);
  g_bReceivedChainedSpawn = 0;
  v7 = *CBaseEntity::GetAbsOrigin(this);
  FindClearSpaceForUnit(this, v7, 0);
  CEntityKeyValues::~CEntityKeyValues(&emptyKeyValues);
}


// CDOTA_BaseNPC::DirectRespawn  (line 7047, @0x0000000002907710, libserver.so)
// callers: CDOTA_Modifier_Corpselord_Revive::OnIntervalThink, CDOTA_Unit_Courier::RespawnCourier, CDOTA_Unit_Nian_Attachment::Regrow, CDOTA_Ability_LoneDruid_SpiritBear::OnSpellStart, CDOTA_Modifier_Undying_Tombstone_Zombie_Aura::OnIntervalThink
void __fastcall CDOTA_BaseNPC::DirectRespawn(CDOTA_BaseNPC *const this, const CEntityKeyValues *pKeyValues)
{
  g_bReceivedChainedSpawn = 0;
  (*(this->_vptr_IHandleEntity + 8))(this, pKeyValues);
  g_bReceivedChainedSpawn = 0;
}


// CDOTA_BaseNPC::RemoveModifierByName  (line 7059, @0x00000000028f64c0, libserver.so)
// calls: CDOTA_ModifierManager::RemoveModifierByName
// callers: CDOTA_ActionRunner::PerformAction_RemoveModifier, CDOTA_Ability_Corspselord_Revive::OnChannelFinish, CDOTAGamerules::SetFirstTowerState, CDOTAGamerules::State_Enter_GAME_IN_PROGRESS, CDOTA_Modifier_PersistentInvisibility::OnDestroy, CDOTA_Modifier_Teleporting::OnDestroy, CDOTA_Modifier_BackdoorProtection::OnIntervalThink, CDOTA_Modifier_FillerThinker::OnIntervalThink, CDOTA_Modifier_Greevil_Miniboss_Blue_ColdFeet::OnIntervalThink, CDOTA_Tutorial::SetTowersInLaneVulnerable, CDOTA_Tutorial::SetSpeechBubble, CDOTA_Tutorial::RevealNPC (186 total)
void __fastcall CDOTA_BaseNPC::RemoveModifierByName(CDOTA_BaseNPC *const this, const char *pszScriptName)
{
  CDOTA_ModifierManager::RemoveModifierByName(&this->m_ModifierManager, pszScriptName);
}


// CDOTA_BaseNPC::Script_RemoveModifierByNameAndCaster  (line 7065, @0x00000000028fc6e0, libserver.so)  // inlines: FindModifierByName, HScriptToEntity<CBaseEntity>, ToDOTABaseNPC, ToEnt
// calls: GetScriptDesc<CEntityInstance>, ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, CDOTA_ModifierManager::FindModifierByName, CDOTA_Buff::Destroy
void __fastcall CDOTA_BaseNPC::Script_RemoveModifierByNameAndCaster(
        CDOTA_BaseNPC *const this,
        const char *pszScriptName,
        HSCRIPT hCaster)
{
  __int64 (__fastcall *v6)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *Script; // rax
  __int64 v8; // rax
  CBaseEntity *v9; // r12
  CModifieractoryDictionary *v10; // rax
  IModifierFactory *Factory; // rax
  CDOTA_Buff *ModifierByName; // rax

  if ( hCaster != 0
    && (v6 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        (v8 = v6(g_pScriptVM, hCaster, Script)) != 0)
    && *(v8 + 339) != 0 )
  {
    v9 = v8;
  }
  else
  {
    v9 = 0;
  }
  v10 = ModifierFactoryDictionary();
  Factory = CModifieractoryDictionary::FindFactory(v10, pszScriptName);
  ModifierByName = CDOTA_ModifierManager::FindModifierByName(&this->m_ModifierManager, Factory, pszScriptName, v9);
  if ( ModifierByName != 0 )
    CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
}


// CDOTA_BaseNPC::Script_GetModifierCount  (line 7076, @0x00000000028f5220, libserver.so)
int __fastcall CDOTA_BaseNPC::Script_GetModifierCount(CDOTA_BaseNPC *const this)
{
  return this->m_ModifierManager.m_bufflist.m_Size;
}


// CDOTA_BaseNPC::Script_GetModifierNameByIndex  (line 7083, @0x00000000028f6d10, libserver.so)
// calls: CDOTA_ModifierManager::GetBuffByIndex, CDOTA_Buff::GetName
const char *__fastcall CDOTA_BaseNPC::Script_GetModifierNameByIndex(CDOTA_BaseNPC *const this, int nIndex)
{
  CDOTA_Buff *BuffByIndex; // rax

  if ( nIndex < 0 || nIndex >= this->m_ModifierManager.m_bufflist.m_Size )
    return "";
  BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(&this->m_ModifierManager, nIndex, 0);
  if ( BuffByIndex != 0 )
    return CDOTA_Buff::GetName(BuffByIndex);
  else
    return "";
}


// CDOTA_BaseNPC::FindModifierByName  (line 7096, @0x0000000002907740, libserver.so)  // inlines: FindModifierByName
// calls: ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, CDOTA_ModifierManager::FindModifierByName
// callers: CDOTA_Item_UpgradedMortar::OnSpellStart, CDOTA_BaseNPC::Script_HasModifier, CDOTA_BaseNPC::Script_GetModifierStackCount, CDOTA_Item_UpgradedBarricade::OnSpellStart, CDOTA_BaseNPC::CalculateActivityModifiers, DOTA_ExecuteOrders, CDOTAHLTVDirector::AnalyzePlayers, CDOTAHLTVDirector::StartRandomShot, CDOTA_Modifier_Tutorial_LastHitHelper::OnAttacked, CDOTA_Modifier_PersistentInvisibility::OnIntervalThink, CDOTA_Ability_Greevil_Miniboss_Black_BrainSap::DoDesiredCast, CDOTA_Ability_Greevil_Miniboss_Orange_LightStrikeArray::DoDesiredCast (470 total)
CDOTA_Buff *__fastcall CDOTA_BaseNPC::FindModifierByName(
        CDOTA_BaseNPC *const this,
        const char *pszScriptName,
        CBaseEntity *pCaster)
{
  CModifieractoryDictionary *v6; // rax
  IModifierFactory *Factory; // rax

  v6 = ModifierFactoryDictionary();
  Factory = CModifieractoryDictionary::FindFactory(v6, pszScriptName);
  return CDOTA_ModifierManager::FindModifierByName(&this->m_ModifierManager, Factory, pszScriptName, pCaster);
}


// CDOTA_BaseNPC::FindModifierByName  (line 7101, @0x0000000002907790, libserver.so)
// calls: CDOTA_ModifierManager::FindModifierByName
// callers: CDOTA_Buff::CheckAura, CDOTA_Buff::DoRefresh
CDOTA_Buff *__fastcall CDOTA_BaseNPC::FindModifierByName(
        CDOTA_BaseNPC *const this,
        IModifierFactory *pFactory,
        const char *pszScriptName,
        CBaseEntity *pCaster)
{
  return CDOTA_ModifierManager::FindModifierByName(&this->m_ModifierManager, pFactory, pszScriptName, pCaster);
}


// CDOTA_BaseNPC::Script_FindAllModifiers  (line 7106, @0x000000000291a980, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, Free, Purge, RemoveAll, TakeOwnership, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase
// calls: CDOTA_ModifierManager::FindAllModifiers, ToHScript, CUtlMemory<CDOTA_Buff*, int>::Purge, CVariantBase<CVariantDefaultAllocator>::Free, CUtlVectorBase<CDOTA_Buff*, CUtlMemory<CDOTA_Buff*, int> >::~CUtlVectorBase, _Unwind_Resume
__int64 *__fastcall CDOTA_BaseNPC::Script_FindAllModifiers(__int64 *a1, CDOTA_BaseNPC *const this)
{
  __int64 v3; // r12
  __int64 v4; // rax
  int v5; // ebx
  void (__fastcall *v6)(IScriptVM *, __int64, _QWORD, HSCRIPT *); // r14
  HSCRIPT v7; // rax
  __int64 varTable_8; // [rsp+18h] [rbp-68h]
  HSCRIPT v11; // [rsp+20h] [rbp-60h] BYREF
  __int16 v12; // [rsp+28h] [rbp-58h]
  __int16 v13; // [rsp+2Ah] [rbp-56h]
  CUtlVector<CDOTA_Buff*,CUtlMemory<CDOTA_Buff*,int> > vBuffs; // [rsp+30h] [rbp-50h] BYREF

  vBuffs.m_Size = 0;
  vBuffs.m_Memory.m_pMemory = 0;
  vBuffs.m_Memory.m_nAllocationCount = 0;
  vBuffs.m_Memory.m_nGrowSize = 0;
  CDOTA_ModifierManager::FindAllModifiers(&this->m_ModifierManager, &vBuffs);
  *a1 = 0;
  *(a1 + 5) = 0;
  *(a1 + 4) = 0;
  (*(*g_pScriptVM + 360LL))(g_pScriptVM, a1);
  v3 = 0;
  v4 = *a1;
  v5 = 0;
  for ( varTable_8 = v4; vBuffs.m_Size > v5; ++v3 )
  {
    v6 = *(*g_pScriptVM + 248LL);
    v7 = ToHScript(vBuffs.m_Memory.m_pMemory[v3]);
    v12 = 31;
    v13 = 0;
    v11 = v7;
    v6(g_pScriptVM, varTable_8, v5, &v11);
    if ( (v13 & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v11);
    ++v5;
  }
  if ( *(a1 + 4) == 31 )
    *(a1 + 4) = 36;
  vBuffs.m_Size = 0;
  if ( (vBuffs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_Buff *,int>::Purge(&vBuffs.m_Memory);
    if ( (vBuffs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Buff *,int>::Purge(&vBuffs.m_Memory);
  }
  return a1;
}


// CDOTA_BaseNPC::Script_FindAllModifiersByName  (line 7123, @0x000000000291ab10, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, Free, Purge, RemoveAll, TakeOwnership, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase
// calls: CDOTA_ModifierManager::FindModifiersOfName, ToHScript, CUtlMemory<CDOTA_Buff*, int>::Purge, CVariantBase<CVariantDefaultAllocator>::Free, CUtlVectorBase<CDOTA_Buff*, CUtlMemory<CDOTA_Buff*, int> >::~CUtlVectorBase, _Unwind_Resume
__int64 *__fastcall CDOTA_BaseNPC::Script_FindAllModifiersByName(
        __int64 *a1,
        CDOTA_BaseNPC *const this,
        const char *pszScriptName)
{
  __int64 v4; // r12
  __int64 v5; // rax
  int v6; // ebx
  void (__fastcall *v7)(IScriptVM *, __int64, _QWORD, HSCRIPT *); // r14
  __int64 varTable_8; // [rsp+18h] [rbp-68h]
  HSCRIPT v11; // [rsp+20h] [rbp-60h] BYREF
  __int16 v12; // [rsp+28h] [rbp-58h]
  __int16 v13; // [rsp+2Ah] [rbp-56h]
  CUtlVector<CDOTA_Buff*,CUtlMemory<CDOTA_Buff*,int> > vBuffs; // [rsp+30h] [rbp-50h] BYREF

  vBuffs.m_Size = 0;
  vBuffs.m_Memory.m_pMemory = 0;
  vBuffs.m_Memory.m_nAllocationCount = 0;
  vBuffs.m_Memory.m_nGrowSize = 0;
  CDOTA_ModifierManager::FindModifiersOfName(&this->m_ModifierManager, pszScriptName, &vBuffs);
  *a1 = 0;
  *(a1 + 4) = 0;
  *(a1 + 5) = 0;
  (*(*g_pScriptVM + 360LL))(g_pScriptVM, a1);
  v4 = 0;
  v5 = *a1;
  v6 = 0;
  for ( varTable_8 = v5; vBuffs.m_Size > v6; ++v4 )
  {
    v7 = *(*g_pScriptVM + 248LL);
    v11 = ToHScript(vBuffs.m_Memory.m_pMemory[v4]);
    v12 = 31;
    v13 = 0;
    v7(g_pScriptVM, varTable_8, v6, &v11);
    if ( (v13 & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v11);
    ++v6;
  }
  if ( *(a1 + 4) == 31 )
    *(a1 + 4) = 36;
  vBuffs.m_Size = 0;
  if ( (vBuffs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_Buff *,int>::Purge(&vBuffs.m_Memory);
    if ( (vBuffs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Buff *,int>::Purge(&vBuffs.m_Memory);
  }
  return a1;
}


// CDOTA_BaseNPC::Script_SetModifierStackCount  (line 7140, @0x00000000028fc870, libserver.so)  // inlines: FindModifierByName, HScriptToEntity<CBaseEntity>, ToDOTABaseNPC, ToEnt
// calls: GetScriptDesc<CEntityInstance>, ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, CDOTA_ModifierManager::FindModifierByName
void __fastcall CDOTA_BaseNPC::Script_SetModifierStackCount(
        CDOTA_BaseNPC *const this,
        const char *pszScriptName,
        HSCRIPT hCaster,
        int nStackCount)
{
  __int64 (__fastcall *v7)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax
  __int64 v9; // rax
  CBaseEntity *v10; // r12
  CModifieractoryDictionary *v11; // rax
  IModifierFactory *Factory; // rax
  CDOTA_Buff *ModifierByName; // rax

  if ( hCaster != 0
    && (v7 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        (v9 = v7(g_pScriptVM, hCaster, Script)) != 0)
    && *(v9 + 339) != 0 )
  {
    v10 = v9;
  }
  else
  {
    v10 = 0;
  }
  v11 = ModifierFactoryDictionary();
  Factory = CModifieractoryDictionary::FindFactory(v11, pszScriptName);
  ModifierByName = CDOTA_ModifierManager::FindModifierByName(&this->m_ModifierManager, Factory, pszScriptName, v10);
  if ( ModifierByName != 0 )
    (*(ModifierByName->_vptr_CDOTA_Buff + 28))(ModifierByName, nStackCount);
}


// CDOTA_BaseNPC::CanEntityBeSeenByMyTeam  (line 7148, @0x00000000029077b0, libserver.so)  // inlines: CanBeSeenByTeam, GetTeamNumber
// calls: CBaseModelEntity::CanBeSeenByTeam
// callers: CDOTA_Modifier_Special_Bonus_Lifesteal::OnAttacked, CDOTA_Bot::Think, CDOTA_BotMode_EvasiveManeuvers::Think, CDOTABehaviorCommandMoveToTargetToCast::OnUnitTeleported, CDOTABehaviorCommandMoveToNPC::OnUnitTeleported, CDOTABehaviorCommandMoveToTargetToAttack::OnUnitTeleported, CDOTABehaviorAttack::Update, CDOTABehaviorAbilityPhase::Update, CDOTABehaviorCommandMoveToTargetToCast::Update, CDOTABehaviorCommandMoveToNPC::Update, CDOTABehaviorCommandMoveToTargetToAttack::Update, CDOTABehaviorMoveToNPCToAttack::OnUnitTeleported (32 total)
bool __fastcall CDOTA_BaseNPC::CanEntityBeSeenByMyTeam(CDOTA_BaseNPC *const this, CBaseEntity *pEntity)
{
  unsigned __int8 m_Value; // al

  m_Value = this->m_iTeamNum.m_Value;
  return m_Value == 4 || pEntity->m_pCollision == 0 || CBaseModelEntity::CanBeSeenByTeam(pEntity, m_Value);
}


// CDOTA_BaseNPC::Script_CanEntityBeSeenByMyTeam  (line 7160, @0x00000000028fbe60, libserver.so)  // inlines: CanBeSeenByTeam, CanEntityBeSeenByMyTeam, GetTeamNumber, HScriptToEntity<CBaseEntity>, ToEnt
// calls: GetScriptDesc<CEntityInstance>, CBaseModelEntity::CanBeSeenByTeam
bool __fastcall CDOTA_BaseNPC::Script_CanEntityBeSeenByMyTeam(CDOTA_BaseNPC *const this, HSCRIPT hEntity)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax
  CBaseModelEntity *v6; // rax
  int m_Value; // esi

  if ( hEntity == 0 )
    return 0;
  v4 = *(*g_pScriptVM + 208LL);
  Script = GetScriptDesc<CEntityInstance>(0);
  v6 = v4(g_pScriptVM, hEntity, Script);
  if ( v6 == 0 )
    return 0;
  m_Value = this->m_iTeamNum.m_Value;
  return m_Value == 4 || v6->m_pCollision == 0 || CBaseModelEntity::CanBeSeenByTeam(v6, m_Value);
}


// CDOTA_BaseNPC::IsInvisibleTo  (line 7169, @0x0000000002907860, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTA_BaseNPC::IsInvisibleTo
// callers: DOTA_ExecuteOrders, CDOTA_ProjectileManager::FrameUpdatePostEntityThink, CDOTA_Modifier_Special_Bonus_Lifesteal::OnAttacked, GetBotTargetStatusCore, CDOTABehaviorAbilityPhase::Update, CDOTABehaviorAttackPhase::Update, CDOTABehaviorCommandMoveToTargetToCast::Update, CDOTABehaviorCommandMoveToNPC::Update, CDOTABehaviorCommandMoveToTargetToAttack::Update, CDOTABehaviorMoveToNPCToAttack::Update, CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::OnIntervalThink, CDOTA_Modifier_Bloodseeker_Thirst::OnIntervalThink (31 total)
bool __fastcall CDOTA_BaseNPC::IsInvisibleTo(CDOTA_BaseNPC *const this, CDOTA_BaseNPC *pNPC)
{
  return CDOTA_BaseNPC::IsInvisibleTo(this, pNPC->m_iTeamNum.m_Value);
}


// CDOTA_BaseNPC::IsInvisibleTo  (line 7175, @0x00000000029077f0, libserver.so)  // inlines: GetTeamNumber, InState, IsInvisible
// calls: CDOTA_ModifierManager::HasTruesightForTeam
// callers: UnitFilter, CDOTA_BaseNPC::IsInvisibleTo, CDOTA_BaseNPC::UpdateVisibility, CDOTA_BaseNPC::CanAutoAttackTarget, CDOTA_BaseNPC::GetAutoAttackTarget, CDOTA_Unit_Hero_MonkeyKing::AddCustomVisibility, CDOTA_Modifier_Treant_EyesInTheForest_Thinker::GetModifierProvidesFOWVision
bool __fastcall CDOTA_BaseNPC::IsInvisibleTo(CDOTA_BaseNPC *const this, int nViewerTeamNumber)
{
  unsigned __int64 m_Value; // rax

  if ( nViewerTeamNumber != this->m_iTeamNum.m_Value )
  {
    m_Value = this->m_nUnitState64.m_Value;
    if ( (m_Value & 0x400000000LL) != 0 )
      return (m_Value & 0x80) != 0;
    if ( !CDOTA_ModifierManager::HasTruesightForTeam(&this->m_ModifierManager, nViewerTeamNumber) )
    {
      m_Value = this->m_nUnitState64.m_Value;
      return (m_Value & 0x80) != 0;
    }
  }
  return 0;
}


// CDOTA_BaseNPC::GetDayTimeVisionRange  (line 7192, @0x00000000028faf00, libserver.so)  // inlines: GetModifier_Constant_Additive, GetModifier_Constant_Highest, GetModifier_Percentage_Additive, IsListeningToEvent
// calls: CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal
// callers: CDOTA_BaseNPC::GetCurrentVisionRange, CDOTA_BaseNPC::DrawDebugTextOverlays
int __fastcall CDOTA_BaseNPC::GetDayTimeVisionRange(CDOTA_BaseNPC *const this)
{
  float Modifier_Constant_Additive_Internal; // xmm0_4
  CDOTA_BaseNPC::NetworkVar_m_ModifierManager *p_m_ModifierManager; // r12
  __int64 v4; // rax
  __int64 v5; // rax
  float v6; // xmm1_4
  float Modifier_Percentage_Additive_Internal; // xmm0_4
  __int64 v8; // rax
  float v9; // xmm1_4
  float Modifier_Constant_Highest_Internal; // xmm0_4
  float flDesiredRangea; // [rsp+0h] [rbp-1Ch]
  float flDesiredRange; // [rsp+0h] [rbp-1Ch]

  Modifier_Constant_Additive_Internal = 0.0;
  p_m_ModifierManager = &this->m_ModifierManager;
  v4 = this->m_ModifierManager.m_buffsForModifiers[96];
  if ( v4 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v4].m_Size > 0 )
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            &this->m_ModifierManager,
                                            modifierfunction::MODIFIER_PROPERTY_BONUS_DAY_VISION,
                                            &CModifierParams::s_Default);
  v5 = this->m_ModifierManager.m_buffsForModifiers[99];
  v6 = this->m_iDayTimeVisionRange.m_Value + Modifier_Constant_Additive_Internal;
  Modifier_Percentage_Additive_Internal = 1.0;
  if ( v5 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v5].m_Size > 0 )
  {
    flDesiredRangea = v6;
    Modifier_Percentage_Additive_Internal = CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal(
                                              p_m_ModifierManager,
                                              modifierfunction::MODIFIER_PROPERTY_BONUS_VISION_PERCENTAGE,
                                              &CModifierParams::s_Default);
    v6 = flDesiredRangea;
  }
  v8 = this->m_ModifierManager.m_buffsForModifiers[100];
  v9 = v6 * Modifier_Percentage_Additive_Internal;
  if ( v8 == 0xFF )
    return v9;
  if ( this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v8].m_Size <= 0 )
    return v9;
  flDesiredRange = v9;
  Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                         p_m_ModifierManager,
                                         modifierfunction::MODIFIER_PROPERTY_FIXED_DAY_VISION,
                                         &CModifierParams::s_Default);
  v9 = flDesiredRange;
  if ( Modifier_Constant_Highest_Internal <= 0.0 || flDesiredRange <= Modifier_Constant_Highest_Internal )
    return v9;
  else
    return Modifier_Constant_Highest_Internal;
}


// CDOTA_BaseNPC::GetNightTimeVisionRange  (line 7205, @0x00000000028fb010, libserver.so)  // inlines: GetModifier_Constant_Additive, GetModifier_Constant_Highest, GetModifier_Percentage_Additive, IsListeningToEvent
// calls: CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal
// callers: CDOTA_BaseNPC::GetCurrentVisionRange
int __fastcall CDOTA_BaseNPC::GetNightTimeVisionRange(CDOTA_BaseNPC *const this)
{
  CDOTA_BaseNPC::NetworkVar_m_ModifierManager *p_m_ModifierManager; // r12
  __int64 v3; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  __int64 v5; // rax
  float v6; // xmm2_4
  float Modifier_Percentage_Additive_Internal; // xmm0_4
  __int64 v8; // rax
  float v9; // xmm2_4
  float v10; // xmm3_4
  float Modifier_Constant_Highest_Internal; // xmm0_4
  __int64 v12; // rax
  float v13; // xmm0_4
  float v15; // [rsp+8h] [rbp-18h]
  float flDesiredRange; // [rsp+Ch] [rbp-14h]
  float flDesiredRangea; // [rsp+Ch] [rbp-14h]
  float flDesiredRangeb; // [rsp+Ch] [rbp-14h]

  p_m_ModifierManager = &this->m_ModifierManager;
  v3 = this->m_ModifierManager.m_buffsForModifiers[97];
  if ( v3 == 0xFF || this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v3].m_Size <= 0 )
    Modifier_Constant_Additive_Internal = 0.0;
  else
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            &this->m_ModifierManager,
                                            modifierfunction::MODIFIER_PROPERTY_BONUS_NIGHT_VISION,
                                            &CModifierParams::s_Default);
  v5 = this->m_ModifierManager.m_buffsForModifiers[99];
  v6 = this->m_iNightTimeVisionRange.m_Value + Modifier_Constant_Additive_Internal;
  Modifier_Percentage_Additive_Internal = 1.0;
  if ( v5 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v5].m_Size > 0 )
  {
    flDesiredRange = v6;
    Modifier_Percentage_Additive_Internal = CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal(
                                              p_m_ModifierManager,
                                              modifierfunction::MODIFIER_PROPERTY_BONUS_VISION_PERCENTAGE,
                                              &CModifierParams::s_Default);
    v6 = flDesiredRange;
  }
  v8 = this->m_ModifierManager.m_buffsForModifiers[101];
  v9 = v6 * Modifier_Percentage_Additive_Internal;
  v10 = 0.0;
  if ( v8 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v8].m_Size > 0 )
  {
    flDesiredRangea = v9;
    Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                           p_m_ModifierManager,
                                           modifierfunction::MODIFIER_PROPERTY_FIXED_NIGHT_VISION,
                                           &CModifierParams::s_Default);
    v9 = flDesiredRangea;
    v10 = Modifier_Constant_Highest_Internal;
  }
  v12 = this->m_ModifierManager.m_buffsForModifiers[98];
  v13 = 0.0;
  if ( v12 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v12].m_Size > 0 )
  {
    v15 = v10;
    flDesiredRangeb = v9;
    v13 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
            p_m_ModifierManager,
            modifierfunction::MODIFIER_PROPERTY_BONUS_NIGHT_VISION_UNIQUE,
            &CModifierParams::s_Default);
    v10 = v15;
    v9 = flDesiredRangeb;
  }
  if ( v10 > 0.0 && v9 > v10 )
    return (v10 + v13);
  else
    return (v9 + v13);
}


// CDOTA_BaseNPC::GetUnitRelationshipClass  (line 7218, @0x0000000002907880, libserver.so)
// callers: CDOTABehaviorTutorialRazorMoveToNPCToAttack::OnInjured, CDOTABehaviorMoveToNPCToAttack::Update, CDOTABehaviorMoveToNPCToAttack::OnStartInternal
int __fastcall CDOTA_BaseNPC::GetUnitRelationshipClass(CDOTA_BaseNPC *const this)
{
  int result; // eax

  result = 5;
  if ( (this->m_nUnitState64.m_Value & 0x400000) == 0 )
    return this->m_iUnitRelationshipClass;
  return result;
}


// CDOTA_BaseNPC::LoadUnitsFile  (line 7233, @0x00000000029078a0, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, GetUnitName, GetValue, GetValue<int>, Min<long long unsigned int>, Min<unsigned int>, String, ToCStr, atoi, operator[]
// calls: DevMsg, strtol, VariantFieldTypeName, Warning
// callers: CDOTA_BaseNPC::Precache
// strings: "Loading unit...%s\n", "...done!\n", "No conversion from %s to int now\n"
// globals: jpt_290796D, CEntityKeyValues::sm_EmptyVariant
bool __fastcall CDOTA_BaseNPC::LoadUnitsFile(CDOTA_BaseNPC *const this, const CEntityKeyValues *pKeyValues)
{
  const char *m_pAsString; // rdx
  __int64 v5; // r8
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // dx
  __int64 v8; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v10; // rdx
  unsigned __int64 m_float; // rsi
  CEntityVariant *p_m_value; // rcx
  int16 m_type; // ax
  const char *v15; // rax

  if ( pKeyValues == 0 )
    return 0;
  m_pAsString = "";
  if ( this->m_iszUnitName.m_Value.u.m_Id != 0 )
    m_pAsString = this->m_iszUnitName.m_Value.u.m_pAsString;
  DevMsg(2, "Loading unit...%s\n", m_pAsString);
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount > 0 )
  {
    m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
    v8 = 0;
    v5 = m_nAllocated;
    do
    {
      if ( m_nAllocated != 0 )
      {
        m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( m_nAllocated > 9 )
          m_pElements = pKeyValues->m_keyHashes.m_pElements;
        if ( m_pElements[v8] == -905424683 )
        {
LABEL_12:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v10 = pKeyValues->m_keyValues.m_pElements;
          else
            v10 = 0;
          m_float = 0;
          p_m_value = &v10[v8].m_value;
          m_type = p_m_value->m_type;
          if ( m_type != 0 )
            goto LABEL_15;
          goto LABEL_17;
        }
      }
      else if ( *(4 * v8) == -905424683 )
      {
        goto LABEL_12;
      }
      ++v8;
    }
    while ( m_nCount > v8 );
  }
  p_m_value = &CEntityKeyValues::sm_EmptyVariant;
  m_float = 0;
  m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( m_type != 0 )
  {
LABEL_15:
    switch ( m_type )
    {
      case 1:
        m_float = p_m_value->m_float;
        break;
      case 5:
        m_float = p_m_value->m_uint;
        break;
      case 6:
        m_float = p_m_value->m_char;
        break;
      case 26:
        m_float = 0x7FFFFFFF;
        if ( p_m_value->m_int64 <= 0x7FFFFFFF )
        {
          m_float = 0xFFFFFFFF80000000LL;
          if ( p_m_value->m_uint64 >= 0xFFFFFFFF80000000LL )
            m_float = p_m_value->m_uint64;
        }
        break;
      case 30:
        m_float = strtol(p_m_value->m_pszString, 0, 10);
        break;
      case 33:
        m_float = 0x7FFFFFFF;
        if ( p_m_value->m_uint64 <= 0x7FFFFFFE )
          m_float = p_m_value->m_uint64;
        break;
      case 34:
        m_float = p_m_value->m_float64;
        break;
      case 37:
        m_float = 0x7FFFFFFF;
        if ( p_m_value->m_int <= 0x7FFFFFFEu )
          m_float = p_m_value->m_uint;
        break;
      default:
        v15 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to int now\n", v15);
        m_float = 0;
        break;
    }
  }
LABEL_17:
  (*(this->_vptr_IHandleEntity + 485))(this, m_float, pKeyValues, 0, v5);
  DevMsg(2, "...done!\n");
  return 1;
}


// CDOTA_BaseNPC::LoadNPCData  (line 7259, @0x00000000029228b0, libserver.so)  // inlines: Base, Element, FStrEq, FindKeyHash, GetValue, GetValueString, TempString, V_strlen, _V_strcmp, operator[]
// calls: CDOTA_BaseNPC::SharedLoadNPCData, strlen, ParseDotaTeam, Warning
// callers: CDOTA_BaseNPC_Hero::LoadNPCData
// strings: "DAMAGE_TYPE_ArmorPhysical", "DOTA_NPC_UNIT_RELATIONSHIP_TYPE_DEFAULT", "DOTA_NPC_UNIT_RELATIONSHIP_TYPE_HERO", "DOTA_NPC_UNIT_RELATIONSHIP_TYPE_BUILDING", "DOTA_NPC_UNIT_RELATIONSHIP_TYPE_BARRACKS", "DOTA_NPC_UNIT_RELATIONSHIP_TYPE_SIEGE" (10 total)
// globals: CEntityKeyValues::sm_EmptyVariant
void __fastcall CDOTA_BaseNPC::LoadNPCData(
        CDOTA_BaseNPC *const this,
        int nVersion,
        const CEntityKeyValues *pKV,
        CDotaDict *pDict)
{
  int m_nCount; // r13d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v10; // rdx
  CEntityVariant *p_m_value; // rax
  const char *m_uint64; // r14
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v13; // cx
  __int64 v14; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v15; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v16; // rdx
  const char *v17; // rdi
  CEntityVariant *v18; // rax
  int v19; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v20; // cx
  __int64 j; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v22; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v23; // rdx
  CEntityVariant *v24; // rax
  const char *v25; // rbx
  int iTeamName[9]; // [rsp+Ch] [rbp-24h] BYREF

  CDOTA_BaseNPC::SharedLoadNPCData(this, pKV);
  m_nCount = pKV->m_keyHashes.m_nCount;
  if ( m_nCount > 0 )
  {
    m_nAllocated = pKV->m_keyHashes.m_nAllocated;
    for ( i = 0; m_nCount > i; ++i )
    {
      if ( m_nAllocated != 0 )
      {
        m_pElements = (&pKV->m_keyHashes.m_nAllocAllocated + 1);
        if ( m_nAllocated > 9 )
          m_pElements = pKV->m_keyHashes.m_pElements;
        if ( m_pElements[i] == -1364893600 )
        {
LABEL_9:
          if ( pKV->m_keyValues.m_nAllocated != 0 )
            v10 = pKV->m_keyValues.m_pElements;
          else
            v10 = 0;
          p_m_value = &v10[i].m_value;
          if ( p_m_value->m_type == 30 )
            goto LABEL_12;
          goto LABEL_18;
        }
      }
      else if ( *(4 * i) == -1364893600 )
      {
        goto LABEL_9;
      }
    }
  }
  p_m_value = &CEntityKeyValues::sm_EmptyVariant;
  if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
  {
LABEL_12:
    m_uint64 = p_m_value->m_uint64;
    if ( p_m_value->m_uint64 != 0 && strlen(p_m_value->m_pszString) > 0 )
    {
      if ( m_uint64 == "DAMAGE_TYPE_ArmorPhysical" || strcmp(m_uint64, "DAMAGE_TYPE_ArmorPhysical") == 0 )
      {
        this->m_iAttackDamageType = 1;
        m_nCount = pKV->m_keyHashes.m_nCount;
      }
      else
      {
        Warning("Unknown Damage type during parse! (%s)\n", m_uint64);
        m_nCount = pKV->m_keyHashes.m_nCount;
      }
    }
  }
LABEL_18:
  iTeamName[0] = -1;
  if ( m_nCount <= 0 )
  {
LABEL_30:
    v18 = &CEntityKeyValues::sm_EmptyVariant;
    v17 = 0;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_29;
    goto LABEL_31;
  }
  v13 = pKV->m_keyHashes.m_nAllocated;
  v14 = 0;
  while ( v13 == 0 )
  {
    if ( *(4 * v14) == -1645354918 )
      goto LABEL_26;
LABEL_23:
    if ( m_nCount <= ++v14 )
      goto LABEL_30;
  }
  v15 = (&pKV->m_keyHashes.m_nAllocAllocated + 1);
  if ( v13 > 9 )
    v15 = pKV->m_keyHashes.m_pElements;
  if ( v15[v14] != -1645354918 )
    goto LABEL_23;
LABEL_26:
  if ( pKV->m_keyValues.m_nAllocated != 0 )
    v16 = pKV->m_keyValues.m_pElements;
  else
    v16 = 0;
  v17 = 0;
  v18 = &v16[v14].m_value;
  if ( v18->m_type == 30 )
LABEL_29:
    v17 = v18->m_uint64;
LABEL_31:
  if ( ParseDotaTeam(v17, iTeamName) )
    this->m_iTeamName = iTeamName[0];
  v19 = pKV->m_keyHashes.m_nCount;
  if ( v19 > 0 )
  {
    v20 = pKV->m_keyHashes.m_nAllocated;
    for ( j = 0; v19 > j; ++j )
    {
      if ( v20 != 0 )
      {
        v22 = (&pKV->m_keyHashes.m_nAllocAllocated + 1);
        if ( v20 > 9 )
          v22 = pKV->m_keyHashes.m_pElements;
        if ( v22[j] == -1428895746 )
        {
LABEL_41:
          if ( pKV->m_keyValues.m_nAllocated != 0 )
            v23 = pKV->m_keyValues.m_pElements;
          else
            v23 = 0;
          v24 = &v23[j].m_value;
          if ( v24->m_type == 30 )
            goto LABEL_44;
          goto LABEL_62;
        }
      }
      else if ( *(4 * j) == -1428895746 )
      {
        goto LABEL_41;
      }
    }
  }
  v24 = &CEntityKeyValues::sm_EmptyVariant;
  if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
  {
LABEL_44:
    v25 = v24->m_uint64;
    if ( v24->m_uint64 != 0 && strlen(v24->m_pszString) > 0 )
    {
      if ( v25 == "DOTA_NPC_UNIT_RELATIONSHIP_TYPE_DEFAULT"
        || strcmp(v25, "DOTA_NPC_UNIT_RELATIONSHIP_TYPE_DEFAULT") == 0 )
      {
        this->m_iUnitRelationshipClass = 0;
      }
      else if ( v25 == "DOTA_NPC_UNIT_RELATIONSHIP_TYPE_HERO"
             || strcmp(v25, "DOTA_NPC_UNIT_RELATIONSHIP_TYPE_HERO") == 0 )
      {
        this->m_iUnitRelationshipClass = 1;
      }
      else if ( v25 == "DOTA_NPC_UNIT_RELATIONSHIP_TYPE_BUILDING"
             || strcmp(v25, "DOTA_NPC_UNIT_RELATIONSHIP_TYPE_BUILDING") == 0 )
      {
        this->m_iUnitRelationshipClass = 2;
      }
      else if ( v25 == "DOTA_NPC_UNIT_RELATIONSHIP_TYPE_BARRACKS"
             || strcmp(v25, "DOTA_NPC_UNIT_RELATIONSHIP_TYPE_BARRACKS") == 0 )
      {
        this->m_iUnitRelationshipClass = 3;
      }
      else if ( v25 == "DOTA_NPC_UNIT_RELATIONSHIP_TYPE_SIEGE"
             || strcmp(v25, "DOTA_NPC_UNIT_RELATIONSHIP_TYPE_SIEGE") == 0 )
      {
        this->m_iUnitRelationshipClass = 4;
      }
      else if ( v25 == "DOTA_NPC_UNIT_RELATIONSHIP_TYPE_WARD"
             || strcmp(v25, "DOTA_NPC_UNIT_RELATIONSHIP_TYPE_WARD") == 0 )
      {
        this->m_iUnitRelationshipClass = 5;
      }
      else if ( v25 == "DOTA_NPC_UNIT_RELATIONSHIP_TYPE_COURIER"
             || strcmp(v25, "DOTA_NPC_UNIT_RELATIONSHIP_TYPE_COURIER") == 0 )
      {
        this->m_iUnitRelationshipClass = 6;
      }
      else
      {
        Warning("Unknown Unit Relationship Class during parse! (%s)\n", v25);
      }
    }
  }
LABEL_62:
  (*(this->_vptr_IHandleEntity + 21))(this);
}


// CDOTA_BaseNPC::Script_DropItemAtPositionImmediate  (line 7338, @0x00000000028fcaa0, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTAAbility, ToDOTAItem, ToEnt
// calls: GetScriptDesc<CEntityInstance>, __dynamic_cast, CDOTA_UnitInventory::DropItemOnLocation
void __fastcall CDOTA_BaseNPC::Script_DropItemAtPositionImmediate(
        CDOTA_BaseNPC *const this,
        HSCRIPT hItem,
        double a3,
        vec_t a4)
{
  CDOTA_BaseNPC::NetworkVar_m_Inventory *p_m_Inventory; // r12
  __int64 (__fastcall *v5)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax
  const void *v7; // rax
  CDOTA_Item *v8; // rax
  CDOTA_Item *v9; // rbx

  p_m_Inventory = &this->m_Inventory;
  if ( this != -3672LL && this->m_bHasInventory && hItem != 0 )
  {
    v5 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v7 = v5(g_pScriptVM, hItem, Script);
    if ( v7 != 0 )
    {
      v8 = __dynamic_cast(v7, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
      v9 = v8;
      if ( v8 != 0 && (*(v8->_vptr_IHandleEntity + 223))(v8) != 0 )
        CDOTA_UnitInventory::DropItemOnLocation(p_m_Inventory, v9, a3, a4);
    }
  }
}


// CDOTA_BaseNPC::ClearAbilities  (line 7355, @0x0000000002907a80, libserver.so)  // inlines: operator=
void __fastcall CDOTA_BaseNPC::ClearAbilities(CDOTA_BaseNPC *const this)
{
  __int64 i; // rax

  for ( i = 0; i != 24; ++i )
    this->m_iszAbilityList[i].u.m_Id = 0;
}


// CDOTA_BaseNPC::CanBeSeenByAnyOpposingTeam  (line 7364, @0x0000000002907ab0, libserver.so)
// calls: CDOTA_BaseNPC::IsOpposingTeam, CBaseModelEntity::CanBeSeenByTeam
// callers: CDOTABody::Update, CDOTA_Modifier_Slark_ShadowDance_Passive::OnIntervalThink
bool __fastcall CDOTA_BaseNPC::CanBeSeenByAnyOpposingTeam(CDOTA_BaseNPC *const this)
{
  int v2; // ebx
  bool result; // al

  v2 = 0;
  while ( 1 )
  {
    if ( CDOTA_BaseNPC::IsOpposingTeam(this, v2) )
    {
      result = CBaseModelEntity::CanBeSeenByTeam(this, v2);
      if ( result )
        break;
    }
    if ( ++v2 == 14 )
      return 0;
  }
  return result;
}


// CDOTA_BaseNPC::IsOpposingTeam  (line 7381, @0x00000000028f5230, libserver.so)  // inlines: GetTeamNumber, IsPlayerTeam
// callers: CDOTAGamerules::Think, GetBotTargetStatusCore, IsValidAlliedTarget, CDOTA_Bot::FindNearbyTeammatesInMode, CDOTA_BaseNPC::CanBeSeenByAnyOpposingTeam, CDOTAHeroList::GiveNearbyHeroGoldBonus, CDOTAHeroList::GiveKillerBountyGold
bool __fastcall CDOTA_BaseNPC::IsOpposingTeam(CDOTA_BaseNPC *const this, int nTeam)
{
  int m_Value; // edx
  bool result; // al

  m_Value = this->m_iTeamNum.m_Value;
  if ( (nTeam - 6) <= 7 || (result = 0, (nTeam - 2) <= 1) )
  {
    if ( (m_Value - 6) <= 7 )
      return nTeam != m_Value;
    result = 0;
    if ( (m_Value - 2) <= 1 )
      return nTeam != m_Value;
  }
  return result;
}


// CDOTA_BaseNPC::GetOpposingTeamNumber  (line 7388, @0x00000000028f5270, libserver.so)
// callers: DOTA_ExecuteOrders, CDOTAPlayer::ExecuteOrders, CDOTA_Commander::OnTakeDamage, CDOTA_Commander::OnAbilityExecuted, CDOTA_Bot::IsAboutToDie, CDOTA_Commander::UpdateIllusionStates, CDOTA_Bot::Think, CDOTA_BotMode_DefendTower::Think, CDOTA_BotMode_Farm_Human::GetDesire, CDOTA_BotMode_Roam::CalculateDesiredLocation, CDOTA_BotMode_Farm::CalculateDesiredLocation, CDOTA_BotMode_Farm::GetDesire (66 total)
int __fastcall CDOTA_BaseNPC::GetOpposingTeamNumber(CDOTA_BaseNPC *const this)
{
  return (this->m_iTeamNum.m_Value == 2) + 2;
}


// CDOTA_BaseNPC::MakeVisibleToTeam  (line 7395, @0x00000000028f8b70, libserver.so)
// calls: CDOTA_BaseNPC::GetModelRadius, CDOTAFogOfWarSystem::AddTempViewer
// callers: CDOTA_Ability_Bane_FiendsGrip::OnSpellStart, CDOTA_Ability_ShadowShaman_Shackles::OnSpellStart
void __fastcall CDOTA_BaseNPC::MakeVisibleToTeam(CDOTA_BaseNPC *const this, int iTeam, float a3, float flDuration)
{
  float ModelRadius; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm0_4

  if ( iTeam != 4 )
  {
    ModelRadius = CDOTA_BaseNPC::GetModelRadius(this);
    v7 = a3;
    v8 = ModelRadius;
    v9 = 10.0;
    if ( v8 >= 10.0 )
    {
      v9 = CDOTA_BaseNPC::GetModelRadius(this);
      v7 = a3;
    }
    CDOTAFogOfWarSystem::AddTempViewer(&g_DOTAFogOfWarSystem, this, iTeam, v9, v7, v8);
  }
}


// CDOTA_BaseNPC::MakeVisibleDueToAttack  (line 7404, @0x00000000028f6b10, libserver.so)  // inlines: GetFloat
// calls: CDOTAFogOfWarSystem::AddTempViewer
void __fastcall CDOTA_BaseNPC::MakeVisibleDueToAttack(CDOTA_BaseNPC *const this, int iTeam)
{
  float v2; // xmm2_4

  if ( iTeam != 4 )
    CDOTAFogOfWarSystem::AddTempViewer(
      &g_DOTAFogOfWarSystem,
      this,
      iTeam,
      200.0,
      dota_unit_attack_visibility.m_pParent->m_Value.m_fValue,
      v2);
}


// CDOTA_BaseNPC::UpdateOnModelChange  (line 7413, @0x00000000028fb560, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, GetEHandle, GetEntryIndex, GetSerialNumber, Set, SetAttacker, operator=
// calls: FireModifierEvent
// callers: CDOTA_Unit_Hero_Tiny::UpdateOnModelChange, CDOTA_Unit_Hero_NightStalker::UpdateOnModelChange, CDOTA_Unit_Hero_Wisp::UpdateOnModelChange
void __fastcall CDOTA_BaseNPC::UpdateOnModelChange(CDOTA_BaseNPC *const this, bool bOriginalModel)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v3; // cx
  CModifierParams params; // [rsp+0h] [rbp-90h] BYREF

  params.ability.m_Index = -1;
  params.fDamage = 0.0;
  params.fOriginalDamage = 0.0;
  params.nActivity = -1;
  params.bTooltip = 0;
  params.nTooltipParam = 0;
  params.bIgnoreInvis = 0;
  params.bNoCooldown = 0;
  params.bReincarnate = 0;
  params.bDoNotConsume = 0;
  params.fDistance = 0.0;
  params.inflictor.m_Index = -1;
  params.nDamageflags = 0;
  params.nDamageCategory = 0;
  memset(&params.pOrb, 0, 24);
  params.bCraniumBasherTested = 0;
  params.bHeartRegenApplied = 0;
  params.bDiffusalApplied = 0;
  params.bChainLightningConsidered = 0;
  params.bSuppressDamage = 0;
  params.bRangedAttack = 0;
  params.nPlayerids_stick = 0;
  params.hattacker.m_Index = -1;
  params.htarget.m_Index = -1;
  params.hunit.m_Index = -1;
  if ( this != 0 )
  {
    m_pEntity = this->m_pEntity;
    if ( m_pEntity != 0 )
    {
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v3 = 0x7FFF;
      else
        v3 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      params.hattacker.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v3 & 0x7FFF;
    }
  }
  FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_MODEL_CHANGED, &params);
}


// CDOTA_BaseNPC::CheckIfActivityModifiersDirty  (line 7420, @0x0000000002918270, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Find, MarkActivityModifiersDirty, Purge, RemoveAll, operator==, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::AddVectorToTail<CUtlMemory<CUtlSymbol, int> >, CDOTABody::GetAnimation, CDOTABody::StartAnimation, CUtlMemory<CUtlSymbol, int>::Purge, CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_BaseNPC::UpdateAggressiveStance, CDOTA_BaseNPC::EquipWearable, CDOTA_BaseNPC::GainedModifier, CDOTA_BaseNPC::RefreshedModifier, CDOTA_BaseNPC::LostModifier
void __fastcall CDOTA_BaseNPC::CheckIfActivityModifiersDirty(CDOTA_BaseNPC *const this)
{
  void (__fastcall *v2)(CDOTA_BaseNPC *const, _QWORD); // r13
  const CDOTABody *v3; // rax
  unsigned int Animation; // eax
  int m_Size; // esi
  CUtlSymbol *m_pMemory; // rax
  CUtlSymbol *i; // rdi
  UtlSymId_t m_Id; // cx
  CUtlSymbol *v9; // rdx
  int v10; // eax
  int (**vptr_IHandleEntity)(...); // rax
  const CDOTABody *v12; // rax
  Activity v13; // r13d
  CDOTABody *v14; // rax
  CUtlVector<CUtlSymbol,CUtlMemory<CUtlSymbol,int> > OldModifiers; // [rsp+0h] [rbp-40h] BYREF

  if ( *((*(this->_vptr_IHandleEntity + 377))(this) + 48) == 0 )
    return;
  OldModifiers.m_Size = 0;
  OldModifiers.m_Memory.m_pMemory = 0;
  OldModifiers.m_Memory.m_nAllocationCount = 0;
  OldModifiers.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<CUtlSymbol,CUtlMemory<CUtlSymbol,int>>::AddVectorToTail<CUtlMemory<CUtlSymbol,int>>(
    &OldModifiers,
    &this->m_ActivityModifiers);
  v2 = *(this->_vptr_IHandleEntity + 442);
  v3 = (*(this->_vptr_IHandleEntity + 377))(this);
  Animation = CDOTABody::GetAnimation(v3);
  v2(this, Animation);
  m_Size = this->m_ActivityModifiers.m_Size;
  if ( m_Size == OldModifiers.m_Size )
  {
    if ( m_Size <= 0 )
      goto LABEL_11;
    m_pMemory = OldModifiers.m_Memory.m_pMemory;
    for ( i = OldModifiers.m_Memory.m_pMemory + 1; ; ++i )
    {
      m_Id = m_pMemory->m_Id;
      if ( m_pMemory->m_Id != this->m_ActivityModifiers.m_Memory.m_pMemory->m_Id )
        break;
LABEL_15:
      if ( i == &OldModifiers.m_Memory.m_pMemory[m_Size - 1 + 1] )
        goto LABEL_11;
      m_pMemory = i;
    }
    v9 = this->m_ActivityModifiers.m_Memory.m_pMemory;
    v10 = 0;
    while ( ++v10 != m_Size )
    {
      ++v9;
      if ( m_Id == v9->m_Id )
      {
        if ( v10 == -1 )
          break;
        goto LABEL_15;
      }
    }
  }
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  this->m_bActivityModifiersDirty = 1;
  v12 = (vptr_IHandleEntity[377])(this);
  v13 = CDOTABody::GetAnimation(v12);
  v14 = (*(this->_vptr_IHandleEntity + 377))(this);
  CDOTABody::StartAnimation(v14, v13, 0, 1.0);
LABEL_11:
  OldModifiers.m_Size = 0;
  if ( (OldModifiers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlSymbol,int>::Purge(&OldModifiers.m_Memory);
    if ( (OldModifiers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlSymbol,int>::Purge(&OldModifiers.m_Memory);
  }
}


// CDOTA_BaseNPC::GainedModifier  (line 7451, @0x0000000002949360, libserver.so)  // inlines: AddModifierToList, AddToTail, CopyConstruct<CDOTA_ModifierManager*>, DOTAGameRules, Element, Find, GrowMemory, HasModifierGainedFilter, HasScriptFilter, ManageModelChanges, RunModifierGainedFilter, entindex, operator[]
// calls: CDOTAGamerules::GetGameModeEntity, KeyValues::operator new, KeyValues::KeyValues, CEntityInstance::GetEntityIndex, KeyValues::SetInt, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_Buff::GetName, KeyValues::SetString, KeyValues::SetFloat, VScriptFilter::RunScriptFilter, KeyValues::GetFloat (21 total)
// callers: CDOTA_BaseNPC_Creature::GainedModifier, CDOTA_BaseNPC_Hero::GainedModifier, CDOTA_Unit_SpiritBear::GainedModifier
// strings: "ModifierGainedData", "entindex_parent_const", "entindex_ability_const", "entindex_caster_const"
void __fastcall CDOTA_BaseNPC::GainedModifier(CDOTA_BaseNPC *const this, CDOTA_Buff *pBuff)
{
  CDOTABaseGameMode *GameModeEntity; // rax
  VScriptFilter *v5; // rbx
  KeyValues *v6; // r14
  CEntityIndex v7; // eax
  CDOTABaseAbility *Ability; // rax
  CEntityIndex v9; // eax
  CDOTA_BaseNPC *Caster; // rax
  CEntityIndex v11; // eax
  const char *Name; // rax
  float v13; // xmm1_4
  void (__fastcall *v14)(CDOTA_Buff *, __int64, float); // rbx
  float v15; // xmm1_4
  float Float; // xmm0_4
  KeyValues *v17; // rbx
  CDOTA_BaseNPC::NetworkVar_m_ModifierManager *p_m_ModifierManager; // r14
  CDOTA_ActiveModifiersList *v19; // r15
  __int64 m_Size; // rbx
  CDOTA_ModifierManager **m_pMemory; // rdx
  CDOTA_ModifierManager **v22; // rdx
  int v23; // eax
  int v24; // eax
  CDOTA_BaseNPC::NetworkVar_m_ModifierManager **v25; // rax
  int i; // ebx
  CDOTA_Item *ItemInSlot; // rax
  KeyValues *v28; // rbx
  KeyValues *pFilterKeys; // [rsp+8h] [rbp-38h] BYREF

  if ( g_pGameRules == 0 )
    goto LABEL_14;
  GameModeEntity = CDOTAGamerules::GetGameModeEntity(g_pGameRules);
  v5 = GameModeEntity;
  if ( GameModeEntity == 0
    || GameModeEntity->m_ModifierGainedFilter.m_hFunction == 0
    || GameModeEntity->m_ModifierGainedFilter.m_hContext == 0 )
  {
    goto LABEL_14;
  }
  v6 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v6, "ModifierGainedData");
  pFilterKeys = v6;
  v7.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  KeyValues::SetInt(v6, "entindex_parent_const", v7.m_Data);
  if ( pBuff != 0 )
  {
    if ( CDOTA_Buff::GetAbility(pBuff) != 0 )
    {
      Ability = CDOTA_Buff::GetAbility(pBuff);
      v9.m_Data = CEntityInstance::GetEntityIndex(Ability).m_Data;
      KeyValues::SetInt(pFilterKeys, "entindex_ability_const", v9.m_Data);
    }
    if ( CDOTA_Buff::GetCaster(pBuff) != 0 )
    {
      Caster = CDOTA_Buff::GetCaster(pBuff);
      v11.m_Data = CEntityInstance::GetEntityIndex(Caster).m_Data;
      KeyValues::SetInt(pFilterKeys, "entindex_caster_const", v11.m_Data);
    }
    Name = CDOTA_Buff::GetName(pBuff);
    KeyValues::SetString(pFilterKeys, "name_const", Name);
    (*(pBuff->_vptr_CDOTA_Buff + 31))(pBuff);
    KeyValues::SetFloat(pFilterKeys, "duration", v13);
    if ( VScriptFilter::RunScriptFilter(v5 + 64, &pFilterKeys) )
    {
      v14 = *(pBuff->_vptr_CDOTA_Buff + 63);
      (*(pBuff->_vptr_CDOTA_Buff + 31))(pBuff);
      Float = KeyValues::GetFloat(pFilterKeys, "duration", v15);
      v14(pBuff, 1, Float);
      goto LABEL_12;
    }
  }
  else if ( VScriptFilter::RunScriptFilter(v5 + 64, &pFilterKeys) )
  {
LABEL_12:
    v17 = pFilterKeys;
    if ( pFilterKeys != 0 )
    {
      KeyValues::~KeyValues(pFilterKeys);
      KeyValues::operator delete(v17);
    }
LABEL_14:
    p_m_ModifierManager = &this->m_ModifierManager;
    v19 = g_pDOTAActiveModifiers;
    m_Size = g_pDOTAActiveModifiers->m_modifiers.m_Size;
    if ( m_Size > 0 )
    {
      m_pMemory = g_pDOTAActiveModifiers->m_modifiers.m_Memory.m_pMemory;
      if ( *m_pMemory == p_m_ModifierManager )
      {
LABEL_23:
        for ( i = 0; i != 9; ++i )
        {
          ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(&this->m_Inventory, i);
          if ( ItemInSlot != 0 )
            (*(ItemInSlot->_vptr_IHandleEntity + 340))(ItemInSlot, pBuff);
        }
        if ( (this->m_pEntity->m_flags & 0x10) == 0 )
          CDOTA_BaseNPC::ManageModelChanges(this);
        CDOTA_BaseNPC::GatherStates(this);
        CDOTA_BaseNPC::CheckIfActivityModifiersDirty(this);
        (*(this->_vptr_IHandleEntity + 384))(this);
        return;
      }
      v22 = m_pMemory + 1;
      v23 = 0;
      while ( ++v23 != m_Size )
      {
        if ( *v22++ == p_m_ModifierManager )
        {
          if ( v23 != -1 )
            goto LABEL_23;
          break;
        }
      }
    }
    v24 = g_pDOTAActiveModifiers->m_modifiers.m_Size;
    if ( g_pDOTAActiveModifiers->m_modifiers.m_Memory.m_nAllocationCount == m_Size )
    {
      CUtlMemory<CDOTA_ModifierManager *,int>::Grow(&g_pDOTAActiveModifiers->m_modifiers.m_Memory, 1);
      v24 = v19->m_modifiers.m_Size;
    }
    v19->m_modifiers.m_Size = v24 + 1;
    v25 = &v19->m_modifiers.m_Memory.m_pMemory[m_Size];
    if ( v25 != 0 )
      *v25 = p_m_ModifierManager;
    goto LABEL_23;
  }
  CDOTA_Buff::Destroy(pBuff, 0, 0, 0);
  v28 = pFilterKeys;
  if ( pFilterKeys != 0 )
  {
    KeyValues::~KeyValues(pFilterKeys);
    KeyValues::operator delete(v28);
  }
}


// CDOTA_BaseNPC::RefreshedModifier  (line 7511, @0x0000000002949b80, libserver.so)  // inlines: ManageModelChanges
// calls: CDOTA_BaseNPC::ManageModelChanges, CDOTA_BaseNPC::CheckIfActivityModifiersDirty
// callers: CDOTA_ModifierManager::AddNewModifier
void __fastcall CDOTA_BaseNPC::RefreshedModifier(CDOTA_BaseNPC *const this)
{
  if ( (this->m_pEntity->m_flags & 0x10) == 0 )
    CDOTA_BaseNPC::ManageModelChanges(this);
  CDOTA_BaseNPC::CheckIfActivityModifiersDirty(this);
  (*(this->_vptr_IHandleEntity + 384))(this);
}


// CDOTA_BaseNPC::LostModifier  (line 7520, @0x0000000002949bc0, libserver.so)  // inlines: ManageModelChanges
// calls: CDOTA_BaseNPC::ManageModelChanges, CDOTA_BaseNPC::GatherStates, CDOTA_BaseNPC::CheckIfActivityModifiersDirty
// callers: CDOTA_BaseNPC_Thinker::LostModifier, CDOTA_BaseNPC_Hero::LostModifier, CDOTA_Unit_SpiritBear::LostModifier
bool __fastcall CDOTA_BaseNPC::LostModifier(CDOTA_BaseNPC *const this, CDOTA_Buff *pBuff)
{
  if ( (this->m_pEntity->m_flags & 0x10) == 0 )
    CDOTA_BaseNPC::ManageModelChanges(this);
  CDOTA_BaseNPC::GatherStates(this);
  CDOTA_BaseNPC::CheckIfActivityModifiersDirty(this);
  (*(this->_vptr_IHandleEntity + 384))(this);
  return 0;
}


// CDOTA_BaseNPC::ShouldTransmit  (line 7531, @0x00000000028f64e0, libserver.so)  // inlines: CEntityIndex, GetRaw
// calls: CBaseEntity::ShouldTransmit, CBaseEntity::ShouldBeSentToClient
// callers: CDOTA_BaseNPC_Thinker::ShouldTransmit, CDOTA_BaseNPC_Pet::ShouldTransmit, CDOTA_Wisp_Spirit::ShouldTransmit
int __fastcall CDOTA_BaseNPC::ShouldTransmit(CDOTA_BaseNPC *const this, const CGameCheckTransmitInfo *pInfo)
{
  int ShouldTransmit; // eax

  ShouldTransmit = CBaseEntity::ShouldTransmit(this, pInfo);
  return CBaseEntity::ShouldBeSentToClient(this, pInfo->m_pInfo->m_nClientEntityIndex, ShouldTransmit);
}


// CDOTA_BaseNPC::CalculateGenericBonuses  (line 7540, @0x0000000002909120, libserver.so)  // inlines: GetBaseMaxHealth, GetModifier_Constant_Additive, GetModifier_Constant_Highest, IsListeningToEvent, RoundFloatToInt, _mm_cvt_ss2si, _mm_cvtss_si32, _mm_load_ss, _mm_set_ss
// calls: CBaseEntity::GetHealth, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CBaseEntity::SetMaxHealth, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_BaseNPC::ModifyHealth
void __fastcall CDOTA_BaseNPC::CalculateGenericBonuses(CDOTA_BaseNPC *const this)
{
  int Health; // r13d
  int v3; // eax
  float m_flBaseMaxHealth; // xmm1_4
  float Modifier_Constant_Additive_Internal; // xmm0_4
  int v6; // r14d
  __int64 v7; // rax
  float v8; // xmm1_4
  __int64 v9; // rdx
  float v10; // xmm0_4
  float v11; // xmm0_4
  int v12; // r15d
  float v13; // xmm1_4
  __int64 v14; // rax
  int v15; // r13d
  __int64 v16; // rax
  float v17; // xmm0_4
  float v18; // xmm0_4
  float flCurrentMaxHealth; // [rsp+8h] [rbp-38h]
  float v20; // [rsp+Ch] [rbp-34h]
  float v21; // [rsp+Ch] [rbp-34h]

  if ( (*(this->_vptr_IHandleEntity + 408))(this) != 0 && (this->m_iUnitType & 3) == 0 )
  {
    Health = CBaseEntity::GetHealth(this);
    v3 = (*(this->_vptr_IHandleEntity + 156))(this);
    m_flBaseMaxHealth = this->m_flBaseMaxHealth;
    Modifier_Constant_Additive_Internal = 0.0;
    v6 = v3;
    v7 = this->m_ModifierManager.m_buffsForModifiers[61];
    if ( v7 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v7].m_Size > 0 )
    {
      v20 = this->m_flBaseMaxHealth;
      Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                              &this->m_ModifierManager,
                                              modifierfunction::MODIFIER_PROPERTY_EXTRA_HEALTH_BONUS,
                                              &CModifierParams::s_Default);
      m_flBaseMaxHealth = v20;
    }
    v8 = m_flBaseMaxHealth + Modifier_Constant_Additive_Internal;
    if ( (this->m_iUnitType & 1) != 0 )
    {
      v16 = this->m_ModifierManager.m_buffsForModifiers[60];
      v17 = 0.0;
      if ( v16 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v16].m_Size > 0 )
      {
        v21 = v8;
        v18 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                &this->m_ModifierManager,
                modifierfunction::MODIFIER_PROPERTY_EXTRA_STRENGTH_BONUS,
                &CModifierParams::s_Default);
        v8 = v21;
        v17 = v18 * 20.0;
      }
      v8 = v8 + v17;
    }
    v9 = this->m_ModifierManager.m_buffsForModifiers[63];
    if ( v9 == 0xFF )
    {
      v11 = 1.0;
    }
    else if ( this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v9].m_Size <= 0 )
    {
      v11 = 1.0;
    }
    else
    {
      flCurrentMaxHealth = v8;
      v10 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              &this->m_ModifierManager,
              modifierfunction::MODIFIER_PROPERTY_EXTRA_HEALTH_PERCENTAGE,
              &CModifierParams::s_Default);
      v8 = flCurrentMaxHealth;
      v11 = v10 + 1.0;
    }
    CBaseEntity::SetMaxHealth(this, (v11 * v8));
    if ( !this->m_bMidLoading )
    {
      v12 = CBaseEntity::GetHealth(this);
      v13 = (*(this->_vptr_IHandleEntity + 156))(this);
      v14 = this->m_ModifierManager.m_buffsForModifiers[111];
      v15 = ((Health / v6) * v13);
      if ( v14 == 0xFF
        || this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v14].m_Size <= 0
        || CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
             &this->m_ModifierManager,
             modifierfunction::MODIFIER_PROPERTY_DISABLE_HEALING,
             &CModifierParams::s_Default) != 1.0
        || v12 >= v15 )
      {
        CDOTA_BaseNPC::ModifyHealth(this, v15, 0, 0, 0);
      }
    }
  }
}


// CDOTA_BaseNPC::OnNewModel  (line 7573, @0x00000000028f6510, libserver.so)  // inlines: CWeakHandle, Init
// calls: NextBotCombatCharacter::OnNewModel, CDOTAAnimState::OnNewModel, CBaseAnimating::LookupPoseParameter
void __fastcall CDOTA_BaseNPC::OnNewModel(CDOTA_BaseNPC *const this, HModel hOldModel, HModel hNewModel)
{
  CDOTAAnimState *m_pAnimState; // rdi
  HModel hOldModela; // [rsp+0h] [rbp-50h] BYREF
  HModel hNewModela; // [rsp+10h] [rbp-40h] BYREF

  hNewModela.m_pBinding = hNewModel.m_pBinding->m_pData;
  hOldModela.m_pBinding = hOldModel.m_pBinding->m_pData;
  NextBotCombatCharacter::OnNewModel(this, &hOldModela, &hNewModela);
  m_pAnimState = this->m_pAnimState;
  hNewModela.m_pBinding = hNewModel.m_pBinding->m_pData;
  hOldModela.m_pBinding = hOldModel.m_pBinding->m_pData;
  CDOTAAnimState::OnNewModel(m_pAnimState, &hOldModela, &hNewModela);
  this->m_nPoseParameterTurn = CBaseAnimating::LookupPoseParameter(this, "turn");
}


// CDOTA_BaseNPC::ManageModelChanges  (line 7582, @0x0000000002948d80, libserver.so)  // inlines: FStrEq, GetClassNameAsCStr, GetClassname, GetIntValue, GetModelName, GetModifier, GetUnitName, IsCourier, ModifierVariant_t, SetShouldAnimate, String, ToCStr, _V_strcmp, operator!=
// calls: CBaseEntity::GetModelName, CDOTA_ModifierManager::GetBuffByIndex, CDOTA_Buff::GetFunctionValue, CommandLine, strcmp, CBaseAnimating::GetModelPtr, CBaseModelEntity::SetModel, CBaseAnimating::SetSkin, CDOTA_BaseNPC::CreateCollisionBounds, CDOTA_BaseNPC::UpdateAggressiveStance, GetParticleManager, CDOTA_ParticleManager::ChangeParticleControlPointAttachmentForModelSwap (21 total)
// callers: CDOTA_BaseNPC::ManageModelChanges, CDOTA_BaseNPC::GainedModifier, CDOTA_BaseNPC::RefreshedModifier, CDOTA_BaseNPC::LostModifier, CDOTA_BaseNPC_Pet::Spawn
// strings: "-herorecorder", "npc_dota_hero_tiny", "models/heroes/tiny_04/tiny_04.vmdl", "npc_dota_roshan", "-herorecorder_preview"
void __fastcall CDOTA_BaseNPC::ManageModelChanges(CDOTA_BaseNPC *const this)
{
  const char *m_szVal; // r14
  __int64 v3; // rdi
  int v4; // ebx
  CDOTA_Buff *BuffByIndex; // rax
  CDOTA_Buff *v6; // r15
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdi
  bool v10; // r15
  const char *m_pAsString; // rax
  int Skin; // r13d
  const char *v13; // rdx
  const char *v14; // rbx
  const char *v15; // rsi
  int v16; // eax
  const char *v17; // rdi
  float m_flPreviousModelScale; // ebx
  _BOOL4 v19; // r15d
  const CModel *ModelPtr; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  const CModel *v22; // rax
  bool v23; // bl
  const CDOTABody *v24; // rax
  Activity Animation; // ebx
  CDOTABody *v26; // rax
  const char *v27; // r13
  const char *v28; // rdi
  const char *v29; // rsi
  const CSkinChangeModifier *v30; // rax
  bool v31; // zf
  char v32; // si
  const char *v33; // rsi
  CEconItemView *GeneratingEconItem; // rax
  const CHeroModelChangeModifier *v35; // rax
  const CHeroModelChangeModifier *v36; // rbx
  const char *v37; // rax
  __int64 v38; // rax
  const char *v39; // rsi
  const char *v40; // r15
  const char *v41; // rdi
  CDOTABody *v42; // rax
  float flLatestAppliedTime; // [rsp+4h] [rbp-6Ch]
  bool bPreserveParticles; // [rsp+12h] [rbp-5Eh]
  bool bChanged; // [rsp+13h] [rbp-5Dh]
  int nPriority; // [rsp+14h] [rbp-5Ch]
  const CModel *pOldModela; // [rsp+18h] [rbp-58h]
  const CModel *pOldModel; // [rsp+18h] [rbp-58h]
  ModifierVariant_t modelvalue; // [rsp+20h] [rbp-50h] BYREF
  ModifierVariant_t preserveValue; // [rsp+30h] [rbp-40h] BYREF

  m_szVal = "";
  CBaseEntity::GetModelName(&preserveValue, this);
  if ( *&preserveValue.m_eType != 0 )
    m_szVal = *&preserveValue.m_eType;
  if ( this->m_ModifierManager.m_bufflist.m_Size > 0 )
  {
    bChanged = 0;
    bPreserveParticles = 0;
    v4 = 0;
    flLatestAppliedTime = -1.0;
    nPriority = -999;
    while ( 1 )
    {
      BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(&this->m_ModifierManager, v4, 0);
      v6 = BuffByIndex;
      if ( BuffByIndex == 0 )
        goto LABEL_5;
      modelvalue.m_eType = ModifierVariant_t::VariantType_t::Variant_Null;
      modelvalue.m_flVal = 0.0;
      modelvalue.m_szVal = 0;
      if ( !CDOTA_Buff::GetFunctionValue(BuffByIndex, 152, &modelvalue, &CModifierParams::s_Default) )
        goto LABEL_5;
      v7 = (*(v6->_vptr_CDOTA_Buff + 6))(v6);
      if ( v7 > nPriority )
      {
        nPriority = v7;
        preserveValue.m_eType = ModifierVariant_t::VariantType_t::Variant_Null;
        preserveValue.m_flVal = 0.0;
        preserveValue.m_szVal = 0;
        bPreserveParticles = 0;
        if ( CDOTA_Buff::GetFunctionValue(v6, 167, &preserveValue, &CModifierParams::s_Default) )
          bPreserveParticles = preserveValue.m_flVal != 0;
        m_szVal = modelvalue.m_szVal;
        bChanged = 1;
        flLatestAppliedTime = v6->m_flLastAppliedTime;
        goto LABEL_5;
      }
      if ( v7 == nPriority && v6->m_flLastAppliedTime > flLatestAppliedTime )
      {
        ++v4;
        m_szVal = modelvalue.m_szVal;
        flLatestAppliedTime = v6->m_flLastAppliedTime;
        if ( v4 >= this->m_ModifierManager.m_bufflist.m_Size )
          goto LABEL_12;
      }
      else
      {
LABEL_5:
        if ( ++v4 >= this->m_ModifierManager.m_bufflist.m_Size )
          goto LABEL_12;
      }
    }
  }
  bChanged = 0;
  bPreserveParticles = 0;
LABEL_12:
  v8 = CommandLine(v3);
  if ( (*(*v8 + 64LL))(v8, "-herorecorder") != 0
    || (v38 = CommandLine(v9), (*(*v38 + 64LL))(v38, "-herorecorder_preview") != 0) )
  {
    v10 = 0;
    m_pAsString = this->m_pEntity->m_designerName.u.m_pAsString;
    if ( m_pAsString == 0 )
      goto LABEL_14;
    if ( m_pAsString == "npc_dota_hero_tiny" )
    {
      bChanged = 1;
      m_szVal = "models/heroes/tiny_04/tiny_04.vmdl";
    }
    else
    {
      v31 = strcmp(this->m_pEntity->m_designerName.u.m_pAsString, "npc_dota_hero_tiny") == 0;
      v32 = bChanged;
      if ( v31 )
        v32 = 1;
      bChanged = v32;
      if ( v31 )
        m_szVal = "models/heroes/tiny_04/tiny_04.vmdl";
    }
    v33 = this->m_pEntity->m_designerName.u.m_pAsString;
  }
  else
  {
    v10 = 0;
    v33 = this->m_pEntity->m_designerName.u.m_pAsString;
    if ( v33 == 0 )
      goto LABEL_14;
  }
  v10 = 1;
  if ( v33 != "npc_dota_roshan" )
  {
    v10 = strcmp(v33, "npc_dota_roshan") == 0;
    Skin = 0;
    if ( !bChanged )
      goto LABEL_15;
    goto LABEL_58;
  }
LABEL_14:
  Skin = 0;
  if ( bChanged )
  {
LABEL_58:
    GeneratingEconItem = CDOTA_BaseNPC::GetGeneratingEconItem(this);
    if ( GeneratingEconItem != 0 )
      Skin = CEconItemView::GetSkin(GeneratingEconItem);
    v35 = FindAssetModifier<CDOTA_BaseNPC,CHeroModelChangeModifier>(this, m_szVal);
    v36 = v35;
    if ( v35 != 0 )
    {
      v37 = CUtlString::Get(&v35->m_strModifier);
      Skin = v36->m_nSkin;
      m_szVal = v37;
    }
  }
LABEL_15:
  v13 = this->m_iszOriginalModel.u.m_pAsString;
  v14 = "";
  v15 = "";
  if ( v13 != 0 )
    v15 = this->m_iszOriginalModel.u.m_pAsString;
  if ( m_szVal != v15
    && (pOldModela = this->m_iszOriginalModel.u.m_Id, v16 = strcmp(m_szVal, v15), v13 = pOldModela, v16 != 0)
    && bChanged )
  {
    CBaseEntity::GetModelName(&preserveValue, this);
    v17 = *&preserveValue.m_eType;
    if ( *&preserveValue.m_eType == 0 )
      v17 = "";
    if ( m_szVal != v17 && strcmp(v17, m_szVal) != 0 )
    {
      if ( v10 )
      {
        v39 = this->m_iszOriginalModel.u.m_pAsString;
        if ( v39 == 0 )
          v39 = "";
        v40 = v39;
        CBaseEntity::GetModelName(&preserveValue, this);
        if ( *&preserveValue.m_eType != 0 )
          v14 = *&preserveValue.m_eType;
        v41 = v14;
        if ( v40 == v14 || (m_flPreviousModelScale = 2.0, strcmp(v41, v40) == 0) )
        {
          m_flPreviousModelScale = 2.0;
          this->m_flPreviousModelScale = CBaseAnimating::GetModelScale(this);
        }
      }
      else
      {
        m_flPreviousModelScale = -1.0;
      }
      v19 = (this->m_iUnitType & 0x100) != 0;
      (*(this->_vptr_IHandleEntity + 476))(this, v19 | bPreserveParticles);
LABEL_27:
      pOldModel = CBaseAnimating::GetModelPtr(this);
      CBaseModelEntity::SetModel(this, m_szVal);
      CBaseAnimating::SetSkin(this, Skin);
      CDOTA_BaseNPC::CreateCollisionBounds(this);
      if ( m_flPreviousModelScale > 0.0 )
        (*(this->_vptr_IHandleEntity + 222))(this, *_mm_cvtsi32_si128(LODWORD(m_flPreviousModelScale)).m128i_i64);
      CDOTA_BaseNPC::UpdateAggressiveStance(this);
      (*(this->_vptr_IHandleEntity + 473))(this, v19);
      ModelPtr = CBaseAnimating::GetModelPtr(this);
      ParticleManager = GetParticleManager();
      CDOTA_ParticleManager::ChangeParticleControlPointAttachmentForModelSwap(
        ParticleManager,
        this,
        pOldModel,
        ModelPtr);
      if ( ModelPtr != 0 )
      {
        v22 = CBaseAnimating::GetModelPtr(this);
        v23 = CModel::FirstSequence(v22).m_Data != -1;
        *((*(this->_vptr_IHandleEntity + 377))(this) + 48) = v23;
        v24 = (*(this->_vptr_IHandleEntity + 377))(this);
        Animation = CDOTABody::GetAnimation(v24);
        v26 = (*(this->_vptr_IHandleEntity + 377))(this);
        if ( CDOTABody::StartAnimation(v26, Animation, 1, 1.0).m_Data == -1 )
        {
          v42 = (*(this->_vptr_IHandleEntity + 377))(this);
          CDOTABody::StartAnimation(v42, 0x5DCu, 1, 1.0);
        }
      }
    }
  }
  else
  {
    if ( v13 == 0 )
      v13 = "";
    v27 = v13;
    CBaseEntity::GetModelName(&preserveValue, this);
    v28 = *&preserveValue.m_eType;
    if ( *&preserveValue.m_eType == 0 )
      v28 = "";
    if ( v27 != v28 && strcmp(v28, v27) != 0 )
    {
      m_flPreviousModelScale = -1.0;
      if ( v10 )
        m_flPreviousModelScale = this->m_flPreviousModelScale;
      m_szVal = this->m_iszOriginalModel.u.m_pAsString;
      v29 = this->m_iszUnitName.m_Value.u.m_pAsString;
      if ( m_szVal == 0 )
        m_szVal = "";
      if ( v29 == 0 )
        v29 = "";
      v30 = FindAssetModifier<CDOTA_BaseNPC,CSkinChangeModifier>(this, v29);
      if ( v30 != 0 )
        Skin = v30->m_nSkin;
      else
        Skin = 0;
      v19 = 1;
      (*(this->_vptr_IHandleEntity + 476))(this, 1);
      goto LABEL_27;
    }
  }
}


// CDOTA_BaseNPC::ManageModelChanges  (line 7582, @0x0000000002949340, libserver.so)
// calls: CDOTA_BaseNPC::ManageModelChanges
// callers: CDOTA_BaseNPC::ApplyWearableModifiers, CDOTA_Modifier_Tiny_Grow::OnCreated, CDOTA_Modifier_Tiny_Grow::OnRefresh, CDOTA_Modifier_DragonKnight_DragonForm::OnCreated, CDOTA_Modifier_NightStalker_HunterInTheNight::OnIntervalThink, CDOTA_Modifier_Terrorblade_Metamorphosis::OnCreated
void __fastcall CDOTA_BaseNPC::ManageModelChanges(CDOTA_BaseNPC *const this)
{
  if ( (this->m_pEntity->m_flags & 0x10) == 0 )
    CDOTA_BaseNPC::ManageModelChanges(this);
}


// CDOTA_BaseNPC::NotifyWearablesOfModelChange  (line 7761, @0x00000000028fd6b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetWearable, IndexToIdentity, IsValid, LookupEntity, operator CEconWearable*, operator CEntityInstance*, operator[]
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC::NotifyWearablesOfModelChange(CDOTA_BaseNPC *const this, bool bOriginalModel)
{
  _BOOL4 v3; // r12d
  __int64 i; // rbx
  CHandle<CEconWearable> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx

  v3 = bOriginalModel;
  for ( i = 0; this->m_hMyWearables.m_Vector.m_Size > i; ++i )
  {
    while ( 1 )
    {
      v5 = &this->m_hMyWearables.m_Vector.m_Memory.m_pMemory[i];
      m_Index = v5->m_Index;
      if ( v5->m_Index + 2 > 1 )
      {
        v7 = v5->m_Index;
        v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
        if ( v8 != 0 )
        {
          v9 = &v8[v7 & 0x1FF];
          if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index && v9->m_pInstance != 0 )
            break;
        }
      }
      if ( this->m_hMyWearables.m_Vector.m_Size <= ++i )
        return;
    }
    (*(v9->m_pInstance->_vptr_IHandleEntity + 278))(v9->m_pInstance, v3);
  }
}


// CDOTA_BaseNPC::MarkBlinkDaggerTime  (line 7772, @0x0000000002907b00, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// callers: CDOTA_Ability_LoneDruid_SpiritBear_Return::OnSpellStart, CDOTA_Item_BlinkDagger::OnSpellStart
void __fastcall CDOTA_BaseNPC::MarkBlinkDaggerTime(CDOTA_BaseNPC *const this)
{
  float v1; // xmm0_4

  v1 = 0.0;
  if ( g_pGameRules != 0 )
    v1 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_flBlinkDaggerTime = v1;
}


// CDOTA_BaseNPC::GetRemainingSequenceDuration  (line 7777, @0x0000000002907b30, libserver.so)  // inlines: GetCycle, GetPlaybackRate
// calls: CDOTABody::GetAnimation, CBaseAnimating::SequenceDuration, CBaseAnimating::GetBaseAnimatingController
// callers: CDOTABehaviorAbilityPhase::Update
float __fastcall CDOTA_BaseNPC::GetRemainingSequenceDuration(CDOTA_BaseNPC *const this, HSequence hSequence)
{
  const CDOTABody *v4; // rax
  Activity Animation; // eax
  float result; // xmm0_4
  float v7; // [rsp+8h] [rbp-18h]
  double v8; // [rsp+8h] [rbp-18h]

  v4 = (*(this->_vptr_IHandleEntity + 377))(this);
  Animation = CDOTABody::GetAnimation(v4);
  result = 0.0;
  if ( Animation != -1 )
  {
    v7 = CBaseAnimating::SequenceDuration(this, hSequence);
    v8 = v7 * (1.0 - CBaseAnimating::GetBaseAnimatingController(this)->m_baseLayer.m_flCycle.m_Value);
    return 1.0 / CBaseAnimating::GetBaseAnimatingController(this)->m_flPlaybackRate.m_Value.m_Value * v8;
  }
  return result;
}


// CDOTA_BaseNPC::StartGesture  (line 7785, @0x00000000029567a0, libserver.so)  // inlines: AddToTail, CDOTAUserMsg_UnitEvent_t, CNetMessagePB, CUserMessagePB, CloseEnough, CopyConstruct<int>, Element, FindGameEvent<CDOTAUserMsg_UnitEvent_t>, FindOrCreateGameEvent<CDOTAUserMsg_UnitEvent_t>, GrowMemory, PostEvent<CDOTAUserMsg_UnitEvent_t>, SendUserMessage<CDOTAUserMsg_UnitEvent_t>, entindex, mutable_add_gesture, operator[], set_activity, set_entity_index, set_fade_in, set_fade_out, set_has_activity, set_has_add_gesture, set_has_entity_index, set_has_fade_in, set_has_fade_out, set_has_msg_type, set_has_playback_rate, set_has_slot, set_msg_type, set_playback_rate, set_slot, ~CDOTAUserMsg_UnitEvent_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CBaseAnimating::SelectWeightedSequence, CRecipientFilter::CRecipientFilter, CDOTAUserMsg_UnitEvent::CDOTAUserMsg_UnitEvent, CEntityInstance::GetEntityIndex, CDOTAUserMsg_UnitEvent_AddGesture::default_instance, CUtlVectorBase<int, CUtlMemory<int, int> >::Find, CDOTAUserMsg_UnitEvent::~CDOTAUserMsg_UnitEvent, CRecipientFilter::~CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, operator new, CDOTAUserMsg_UnitEvent_AddGesture::CDOTAUserMsg_UnitEvent_AddGesture (16 total)
// callers: CDOTABaseAbility::OnAbilityPhaseStart, CDOTA_Ability_Throw_Snowball::OnSpellStart, CDOTA_Ability_Throw_Coal::OnSpellStart, CDOTA_Modifier_Lesser_NightCrawler_Pounce::OnCreated, CDOTA_Ability_Greevil_Miniboss_Black_BrainSap::OnSpellStart, CDOTA_Ability_Greevil_Miniboss_Red_Overpower::OnSpellStart, CDOTA_Ability_Greevil_Miniboss_Blue_ColdFeet::OnSpellStart, CDOTA_Modifier_Teleporting::OnIntervalThink, CDOTA_Ability_Greevil_Miniboss_Blue_IceVortex::OnSpellStart, CDOTA_Ability_Greevil_Miniboss_Orange_DragonSlave::OnSpellStart, CDOTA_Ability_ForestTrollHighPriest_Heal::DoDesiredCast, CDOTA_Ability_Greevil_Miniboss_Red_Earthshock::OnSpellStart (215 total)
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_UnitEvent_t>(bool)::s_hEvent
void __fastcall CDOTA_BaseNPC::StartGesture(
        CDOTA_BaseNPC *const this,
        Activity act,
        float fFadeIn,
        float fFadeOut,
        int iSlot,
        CRecipientFilter *pFilter,
        float flPlaybackRate)
{
  CDOTAUserMsg_UnitEvent_AddGesture *v11; // r15
  CDOTAUserMsg_UnitEvent_AddGesture *v12; // r15
  CDOTAUserMsg_UnitEvent_AddGesture *v13; // r14
  CDOTAUserMsg_UnitEvent_AddGesture *v14; // r14
  __int64 v15; // r15
  IGameEventSystem *v16; // r14
  CDOTAUserMsg_UnitEvent_AddGesture *v17; // r14
  __int64 m_Size; // r13
  int v19; // eax
  int *v20; // rax
  void (__fastcall *fFadeInb)(IGameEventSystem *, _QWORD, _QWORD, CRecipientFilter *, __int64, _QWORD *, __int64); // [rsp+20h] [rbp-1E0h]
  Activity acta; // [rsp+2Ch] [rbp-1D4h] BYREF
  _QWORD v26[2]; // [rsp+30h] [rbp-1D0h] BYREF
  int v27; // [rsp+40h] [rbp-1C0h]
  int v28; // [rsp+48h] [rbp-1B8h]
  CEntityIndex v29; // [rsp+4Ch] [rbp-1B4h]
  CDOTAUserMsg_UnitEvent_AddGesture *v30; // [rsp+60h] [rbp-1A0h]
  CRecipientFilter filter; // [rsp+90h] [rbp-170h] BYREF
  unsigned __int64 v32; // [rsp+1C8h] [rbp-38h]

  acta = act;
  v32 = __readfsqword(0x28u);
  if ( CBaseAnimating::SelectWeightedSequence(this, act).m_Data != -1 )
  {
    CRecipientFilter::CRecipientFilter(&filter);
    if ( pFilter == 0 )
    {
      pFilter = &filter;
      CRecipientFilter::AddAllPlayers(&filter);
      CRecipientFilter::MakeReliable(&filter);
    }
    CDOTAUserMsg_UnitEvent::CDOTAUserMsg_UnitEvent(v26);
    v28 = 2;
    v27 |= 1u;
    v26[0] = off_41863D0;
    v29.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    v11 = v30;
    v27 |= 0x12u;
    if ( v30 == 0 )
    {
      v11 = operator new(0x30u);
      CDOTAUserMsg_UnitEvent_AddGesture::CDOTAUserMsg_UnitEvent_AddGesture(v11);
      v30 = v11;
    }
    *(v11 + 4) |= 1u;
    *(v11 + 6) = act;
    v12 = v30;
    v27 |= 0x10u;
    if ( v30 == 0 )
    {
      v12 = operator new(0x30u);
      CDOTAUserMsg_UnitEvent_AddGesture::CDOTAUserMsg_UnitEvent_AddGesture(v12);
      v30 = v12;
    }
    *(v12 + 4) |= 2u;
    *(v12 + 7) = iSlot;
    v13 = v30;
    v27 |= 0x10u;
    if ( v30 == 0 )
    {
      v13 = operator new(0x30u);
      CDOTAUserMsg_UnitEvent_AddGesture::CDOTAUserMsg_UnitEvent_AddGesture(v13);
      v30 = v13;
    }
    *(v13 + 4) |= 0x10u;
    *(v13 + 10) = flPlaybackRate;
    if ( fabs(fFadeIn - *(CDOTAUserMsg_UnitEvent_AddGesture::default_instance() + 8)) > 0.001 )
    {
      v14 = v30;
      v27 |= 0x10u;
      if ( v30 == 0 )
      {
        v14 = operator new(0x30u);
        CDOTAUserMsg_UnitEvent_AddGesture::CDOTAUserMsg_UnitEvent_AddGesture(v14);
        v30 = v14;
      }
      *(v14 + 4) |= 4u;
      *(v14 + 8) = fFadeIn;
    }
    if ( fabs(fFadeOut - *(CDOTAUserMsg_UnitEvent_AddGesture::default_instance() + 9)) > 0.001 )
    {
      v17 = v30;
      v27 |= 0x10u;
      if ( v30 == 0 )
      {
        v17 = operator new(0x30u);
        CDOTAUserMsg_UnitEvent_AddGesture::CDOTAUserMsg_UnitEvent_AddGesture(v17);
        v30 = v17;
      }
      *(v17 + 4) |= 8u;
      *(v17 + 9) = fFadeOut;
    }
    v15 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_UnitEvent_t>(bool)::s_hEvent;
    v16 = g_pGameEventSystem;
    fFadeInb = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_UnitEvent_t>(bool)::s_hEvent);
    fFadeInb(v16, 0, 0, pFilter, v15, v26, 88);
    if ( CUtlVectorBase<int,CUtlMemory<int,int>>::Find(&this->m_ActivitiesStarted, &acta) == -1 )
    {
      m_Size = this->m_ActivitiesStarted.m_Size;
      v19 = this->m_ActivitiesStarted.m_Size;
      if ( m_Size == this->m_ActivitiesStarted.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<int,int>::Grow(&this->m_ActivitiesStarted.m_Memory, 1);
        v19 = this->m_ActivitiesStarted.m_Size;
      }
      this->m_ActivitiesStarted.m_Size = v19 + 1;
      v20 = &this->m_ActivitiesStarted.m_Memory.m_pMemory[m_Size];
      if ( v20 != 0 )
        *v20 = act;
    }
    v26[0] = &off_4186250;
    CDOTAUserMsg_UnitEvent::~CDOTAUserMsg_UnitEvent(v26);
    CRecipientFilter::~CRecipientFilter(&filter);
  }
}


// CDOTA_BaseNPC::RemoveGesture  (line 7823, @0x0000000002954760, libserver.so)  // inlines: CBroadcastRecipientFilter, CDOTAUserMsg_UnitEvent_t, CNetMessagePB, CReliableBroadcastRecipientFilter, CUserMessagePB, FindAndRemove, FindGameEvent<CDOTAUserMsg_UnitEvent_t>, FindOrCreateGameEvent<CDOTAUserMsg_UnitEvent_t>, PostEvent<CDOTAUserMsg_UnitEvent_t>, Remove, SendUserMessage<CDOTAUserMsg_UnitEvent_t>, entindex, mutable_remove_gesture, set_activity, set_entity_index, set_has_activity, set_has_entity_index, set_has_msg_type, set_has_remove_gesture, set_msg_type, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_UnitEvent_t, ~CNetMessagePB, ~CReliableBroadcastRecipientFilter, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTAUserMsg_UnitEvent::CDOTAUserMsg_UnitEvent, CEntityInstance::GetEntityIndex, CUtlVectorBase<int, CUtlMemory<int, int> >::Find, CUtlVectorBase<int, CUtlMemory<int, int> >::ShiftElementsLeft, CDOTAUserMsg_UnitEvent::~CDOTAUserMsg_UnitEvent, CRecipientFilter::~CRecipientFilter, operator new, CDOTAUserMsg_UnitEvent_RemoveGesture::CDOTAUserMsg_UnitEvent_RemoveGesture, __stack_chk_fail (14 total)
// callers: CDOTABaseAbility::OnAbilityPhaseStart, CDOTA_Modifier_Teleporting::OnDestroy, CDOTA_Modifier_Teleporting::OnIntervalThink, CDOTA_Ability_ForestTrollHighPriest_Heal::DoDesiredCast, CDOTABody::StartAnimation, CDOTABody::ManageOverrideAnimations, CDOTA_BaseNPC::Script_RemoveGesture, CDOTA_Modifier_Holdout_BladeFury::OnDestroy, CDOTA_Modifier_Kunkka_Torrent::OnVerticalMotionInterrupted, CDOTA_Modifier_Kunkka_Torrent::OnDestroy, CDOTA_Modifier_Mirana_Leap::OnHorizontalMotionInterrupted, CDOTA_Modifier_Mirana_Leap::OnDestroy (88 total)
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_UnitEvent_t>(bool)::s_hEvent
void __fastcall CDOTA_BaseNPC::RemoveGesture(CDOTA_BaseNPC *const this, Activity act)
{
  CDOTAUserMsg_UnitEvent_RemoveGesture *v3; // rax
  __int64 v4; // r15
  IGameEventSystem *v5; // r14
  int v6; // eax
  CDOTAUserMsg_UnitEvent_RemoveGesture *v7; // r15
  void (__fastcall *v8)(IGameEventSystem *, _QWORD, _QWORD, CReliableBroadcastRecipientFilter *, __int64, _QWORD *, __int64); // [rsp+10h] [rbp-1E0h]
  Activity acta; // [rsp+1Ch] [rbp-1D4h] BYREF
  _QWORD v10[2]; // [rsp+20h] [rbp-1D0h] BYREF
  int v11; // [rsp+30h] [rbp-1C0h]
  int v12; // [rsp+38h] [rbp-1B8h]
  CEntityIndex v13; // [rsp+3Ch] [rbp-1B4h]
  CDOTAUserMsg_UnitEvent_RemoveGesture *v14; // [rsp+58h] [rbp-198h]
  CReliableBroadcastRecipientFilter filter; // [rsp+80h] [rbp-170h] BYREF
  unsigned __int64 v16; // [rsp+1B8h] [rbp-38h]

  acta = act;
  v16 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filter);
  CDOTAUserMsg_UnitEvent::CDOTAUserMsg_UnitEvent(v10);
  v12 = 3;
  v11 |= 1u;
  v10[0] = off_41863D0;
  v13.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  v3 = v14;
  v11 |= 0x22u;
  if ( v14 == 0 )
  {
    v7 = operator new(0x20u);
    CDOTAUserMsg_UnitEvent_RemoveGesture::CDOTAUserMsg_UnitEvent_RemoveGesture(v7);
    v14 = v7;
    v3 = v7;
  }
  *(v3 + 6) = acta;
  v4 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_UnitEvent_t>(bool)::s_hEvent;
  *(v3 + 4) |= 1u;
  v5 = g_pGameEventSystem;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(g_pNetworkMessages, v4);
  v8(v5, 0, 0, &filter, v4, v10, 88);
  v6 = CUtlVectorBase<int,CUtlMemory<int,int>>::Find(&this->m_ActivitiesStarted, &acta);
  if ( v6 != -1 )
  {
    CUtlVectorBase<int,CUtlMemory<int,int>>::ShiftElementsLeft(&this->m_ActivitiesStarted, v6, 1);
    --this->m_ActivitiesStarted.m_Size;
  }
  v10[0] = &off_4186250;
  CDOTAUserMsg_UnitEvent::~CDOTAUserMsg_UnitEvent(v10);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDOTA_BaseNPC::RemoveAllGestures  (line 7836, @0x0000000002954590, libserver.so)  // inlines: CBroadcastRecipientFilter, CDOTAUserMsg_UnitEvent_t, CNetMessagePB, CReliableBroadcastRecipientFilter, CUserMessagePB, FindGameEvent<CDOTAUserMsg_UnitEvent_t>, FindOrCreateGameEvent<CDOTAUserMsg_UnitEvent_t>, PostEvent<CDOTAUserMsg_UnitEvent_t>, Purge, RemoveAll, SendUserMessage<CDOTAUserMsg_UnitEvent_t>, entindex, set_entity_index, set_has_entity_index, set_has_msg_type, set_msg_type, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_UnitEvent_t, ~CNetMessagePB, ~CReliableBroadcastRecipientFilter, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTAUserMsg_UnitEvent::CDOTAUserMsg_UnitEvent, CEntityInstance::GetEntityIndex, CUtlMemory<int, int>::Purge, CDOTAUserMsg_UnitEvent::~CDOTAUserMsg_UnitEvent, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: DOTA_ForceUnitActivity, CDOTA_BaseNPC::Event_Killed, CDOTA_Unit_Hero_EarthSpirit::Event_Killed, CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect::OnDestroy
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_UnitEvent_t>(bool)::s_hEvent
void __fastcall CDOTA_BaseNPC::RemoveAllGestures(CDOTA_BaseNPC *const this)
{
  __int64 v2; // r15
  IGameEventSystem *v3; // r14
  bool v4; // zf
  void (__fastcall *v5)(IGameEventSystem *, _QWORD, _QWORD, CReliableBroadcastRecipientFilter *, __int64, _QWORD *, __int64); // [rsp+8h] [rbp-1D8h]
  _QWORD v6[2]; // [rsp+10h] [rbp-1D0h] BYREF
  int v7; // [rsp+20h] [rbp-1C0h]
  int v8; // [rsp+28h] [rbp-1B8h]
  CEntityIndex v9; // [rsp+2Ch] [rbp-1B4h]
  CReliableBroadcastRecipientFilter filter; // [rsp+70h] [rbp-170h] BYREF
  unsigned __int64 v11; // [rsp+1A8h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filter);
  CDOTAUserMsg_UnitEvent::CDOTAUserMsg_UnitEvent(v6);
  v8 = 4;
  v7 |= 1u;
  v6[0] = off_41863D0;
  v9.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  v7 |= 2u;
  v2 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_UnitEvent_t>(bool)::s_hEvent;
  v3 = g_pGameEventSystem;
  v5 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_UnitEvent_t>(bool)::s_hEvent);
  v5(v3, 0, 0, &filter, v2, v6, 88);
  v4 = (this->m_ActivitiesStarted.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ActivitiesStarted.m_Size = 0;
  if ( v4 )
    CUtlMemory<int,int>::Purge(&this->m_ActivitiesStarted.m_Memory);
  v6[0] = &off_4186250;
  CDOTAUserMsg_UnitEvent::~CDOTAUserMsg_UnitEvent(v6);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDOTA_BaseNPC::HasStartedGesture  (line 7848, @0x0000000002917080, libserver.so)
// calls: CUtlVectorBase<int, CUtlMemory<int, int> >::Find
// callers: CDOTABody::StartAnimation
bool __fastcall CDOTA_BaseNPC::HasStartedGesture(const CDOTA_BaseNPC *const this, Activity act)
{
  Activity acta; // [rsp+Ch] [rbp-4h] BYREF

  acta = act;
  return CUtlVectorBase<int,CUtlMemory<int,int>>::Find(&this->m_ActivitiesStarted, &acta) != -1;
}


// CDOTA_BaseNPC::HasGestures  (line 7858, @0x0000000002907be0, libserver.so)
bool __fastcall CDOTA_BaseNPC::HasGestures(const CDOTA_BaseNPC *const this)
{
  return this->m_ActivitiesStarted.m_Size > 0;
}


// CDOTA_BaseNPC::FadeGesture  (line 7864, @0x00000000029543a0, libserver.so)  // inlines: CBroadcastRecipientFilter, CDOTAUserMsg_UnitEvent_t, CNetMessagePB, CReliableBroadcastRecipientFilter, CUserMessagePB, FindGameEvent<CDOTAUserMsg_UnitEvent_t>, FindOrCreateGameEvent<CDOTAUserMsg_UnitEvent_t>, PostEvent<CDOTAUserMsg_UnitEvent_t>, SendUserMessage<CDOTAUserMsg_UnitEvent_t>, entindex, mutable_fade_gesture, set_activity, set_entity_index, set_has_activity, set_has_entity_index, set_has_fade_gesture, set_has_msg_type, set_msg_type, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_UnitEvent_t, ~CNetMessagePB, ~CReliableBroadcastRecipientFilter, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTAUserMsg_UnitEvent::CDOTAUserMsg_UnitEvent, CEntityInstance::GetEntityIndex, CDOTAUserMsg_UnitEvent::~CDOTAUserMsg_UnitEvent, CRecipientFilter::~CRecipientFilter, operator new, CDOTAUserMsg_UnitEvent_FadeGesture::CDOTAUserMsg_UnitEvent_FadeGesture, __stack_chk_fail, operator delete, _Unwind_Resume
// callers: CDOTABaseAbility::OnAbilityPhaseInterrupted, CDOTA_Modifier_Knockback::OnDestroy, CDOTA_BaseNPC::Script_FadeGesture, CDOTA_Ability_Nian_Apocalypse::OnChannelFinish, CDOTA_Ability_Nian_Whirlpool::OnChannelFinish, CDOTA_Modifier_Move_From_Activity::OnDestroy, CDOTA_Ability_Nian_Hurricane::OnChannelFinish, CDOTA_Modifier_Batrider_FlamingLasso::OnDestroy, CDOTA_Ability_Furion_Teleportation::OnAbilityPhaseInterrupted, CDOTA_Modifier_Medusa_StoneGaze::OnDestroy, CDOTA_Modifier_Phoenix_IcarusDive::OnDestroy, CDOTA_Modifier_Phoenix_SunRay::OnDestroy
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_UnitEvent_t>(bool)::s_hEvent
void __fastcall CDOTA_BaseNPC::FadeGesture(CDOTA_BaseNPC *const this, Activity act)
{
  CEntityIndex v4; // eax
  int v5; // edx
  CDOTAUserMsg_UnitEvent_FadeGesture *v6; // rax
  __int64 v7; // r14
  IGameEventSystem *v8; // r13
  void (__fastcall *v9)(IGameEventSystem *, _QWORD, _QWORD, CReliableBroadcastRecipientFilter *, __int64, _QWORD *, __int64); // r15
  CDOTAUserMsg_UnitEvent_FadeGesture *v10; // r14
  _QWORD v11[2]; // [rsp+10h] [rbp-1D0h] BYREF
  int v12; // [rsp+20h] [rbp-1C0h]
  int v13; // [rsp+28h] [rbp-1B8h]
  int32 m_Data; // [rsp+2Ch] [rbp-1B4h]
  CDOTAUserMsg_UnitEvent_FadeGesture *v15; // [rsp+58h] [rbp-188h]
  CReliableBroadcastRecipientFilter filter; // [rsp+70h] [rbp-170h] BYREF
  unsigned __int64 v17; // [rsp+1A8h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filter);
  CDOTAUserMsg_UnitEvent::CDOTAUserMsg_UnitEvent(v11);
  v13 = 6;
  v12 |= 1u;
  v11[0] = off_41863D0;
  v4.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  v5 = v12;
  m_Data = v4.m_Data;
  v6 = v15;
  LOBYTE(v5) = v12 | 0x82;
  v12 = v5;
  if ( v15 == 0 )
  {
    v10 = operator new(0x20u);
    CDOTAUserMsg_UnitEvent_FadeGesture::CDOTAUserMsg_UnitEvent_FadeGesture(v10);
    v15 = v10;
    v6 = v10;
  }
  *(v6 + 6) = act;
  v7 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_UnitEvent_t>(bool)::s_hEvent;
  *(v6 + 4) |= 1u;
  v8 = g_pGameEventSystem;
  v9 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(g_pNetworkMessages, v7);
  v9(v8, 0, 0, &filter, v7, v11, 88);
  v11[0] = &off_4186250;
  CDOTAUserMsg_UnitEvent::~CDOTAUserMsg_UnitEvent(v11);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDOTA_BaseNPC::StartAbilityAnimation  (line 7875, @0x0000000002907c00, libserver.so)  // inlines: GetModelScaleAnimationRateMultiplier
// calls: CBaseAnimating::GetModelScale, TE_UnitAnimation, sqrt
// callers: CDOTABehaviorAbilityPhase::BeginCast
void __fastcall CDOTA_BaseNPC::StartAbilityAnimation(
        CDOTA_BaseNPC *const this,
        HSequence hSequence,
        float a3,
        float flPlaybackRate)
{
  float v6; // xmm0_4

  v6 = 1.0 / sqrt(CBaseAnimating::GetModelScale(this));
  TE_UnitAnimation(this, hSequence, v6 * a3, 2);
}


// CDOTA_BaseNPC::StartAttackAnimation  (line 7880, @0x0000000002907c70, libserver.so)
// calls: TE_UnitAnimation
// callers: CDOTABehaviorAttackPhase::OnStart
void __fastcall CDOTA_BaseNPC::StartAttackAnimation(
        CDOTA_BaseNPC *const this,
        HSequence hSequence,
        float a3,
        float flPlaybackRate)
{
  TE_UnitAnimation(this, hSequence, a3, 1);
}


// CDOTA_BaseNPC::UpdateAttackAnimSpeed  (line 7885, @0x0000000002907c80, libserver.so)
// calls: TE_UnitAnimation
// callers: CDOTABehaviorAttack::Update, CDOTABehaviorAttackPhase::Update
void __fastcall CDOTA_BaseNPC::UpdateAttackAnimSpeed(CDOTA_BaseNPC *const this, float a2, float flPlaybackRate)
{
  TE_UnitAnimation(this, -1, a2, 1);
}


// CDOTA_BaseNPC::StartTauntAnimation  (line 7890, @0x0000000002907ca0, libserver.so)
// calls: TE_UnitAnimation
void __fastcall CDOTA_BaseNPC::StartTauntAnimation(CDOTA_BaseNPC *const this, HSequence hSequence)
{
  TE_UnitAnimation(this, hSequence, 1.0, 8);
}


// CDOTA_BaseNPC::EndAttackAnimation  (line 7895, @0x0000000002907cc0, libserver.so)
// calls: TE_UnitAnimationEnd
// callers: CDOTABehaviorAttack::OnEnd, CDOTABehaviorAttackPhase::OnEnd
void __fastcall CDOTA_BaseNPC::EndAttackAnimation(CDOTA_BaseNPC *const this, bool bSnap)
{
  TE_UnitAnimationEnd(this, bSnap);
}


// CDOTA_BaseNPC::Teleport  (line 7901, @0x0000000002926970, libserver.so)  // inlines: AddToTail, CDOTABaseNPCCollector, CEntityHandle, CHandle, CModifierParams, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, CopyConstruct<CDOTA_BaseNPC*>, Element, ForEachBot<CDOTABaseNPCCollector>, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GrowMemory, HasFlyMovementCapability, HasMovementCapability, InState, IndexToIdentity, InvalidateLocalNPCObstructionCache, IsEventActiveOnServer, IsValid, Length2DSqr, LookupEntity, Purge, Set, SetFOWDirty, SetUnit, ToDOTABaseNPC, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator(), operator-, operator=, operator[], ~CDOTABaseNPCCollector, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CBaseEntity::GetAbsOrigin, CDOTALocomotor::InterruptMotionControllers, CBaseFlex::Teleport, CDOTALocomotor::WipePositionHistoryToCurrentPosition, FindUnitsInRadius, FireModifierEvent, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseEntity::PhysicsTouchTriggers, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, UnitFilter, C2DGridObstructionManager::UpdateObjectObstruction, CUtlMemory<CDOTA_BaseNPC*, int>::Grow (16 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC::Teleport(
        CDOTA_BaseNPC *const this,
        const Vector *newPosition,
        const QAngle *newAngles,
        const Vector *newVelocity)
{
  const Vector *AbsOrigin; // rax
  CDOTALocomotor *v9; // rax
  int (**vptr_INextBotEventResponder)(...); // rax
  CDOTALocomotor *v11; // rax
  const Vector *v12; // rax
  CHandle<CBaseEntity> *m_pMemory; // rdx
  CConcreteEntityList *v14; // r8
  CHandle<CBaseEntity> *v15; // rax
  CHandle<CBaseEntity> *v16; // rdi
  uint32 m_Index; // ecx
  __int16 v18; // si
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CEntityInstance *m_pInstance; // rdx
  CEntityIdentity *m_pEntity; // rdx
  int v23; // eax
  __int16 v24; // cx
  const Vector *v25; // rax
  float x; // xmm0_4
  float y; // xmm1_4
  __int64 m_Head; // r12
  UtlLinkedListElem_t<INextBot*,short unsigned int> *v29; // rax
  __int64 v30; // r12
  __int64 v31; // rax
  CDOTA_BaseNPC *v32; // r13
  __int64 fOriginalDamage_low; // r14
  float fOriginalDamage; // eax
  CDOTA_BaseNPC **v35; // rax
  __int64 v36; // r12
  float bLongTeleport; // [rsp+24h] [rbp-1ECh]
  bool bLongTeleporta; // [rsp+24h] [rbp-1ECh]
  CModifierParams params; // [rsp+28h] [rbp-1E8h] BYREF
  int v40; // [rsp+B8h] [rbp-158h]
  int v41; // [rsp+BCh] [rbp-154h]
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> cacheClearNPCs; // [rsp+C0h] [rbp-150h] BYREF
  unsigned __int64 v43; // [rsp+1D8h] [rbp-38h]

  v43 = __readfsqword(0x28u);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  bLongTeleport = AbsOrigin->x;
  params.ability.m_Index = LODWORD(AbsOrigin->y);
  v9 = (*(this->_vptr_IHandleEntity + 376))(this);
  CDOTALocomotor::InterruptMotionControllers(v9, 0);
  CBaseFlex::Teleport(this, newPosition, newAngles, newVelocity);
  if ( (*(this->_vptr_IHandleEntity + 457))(this) != 0 )
    C2DGridObstructionManager::UpdateObjectObstruction(&g_GridNav.m_ObstructionManager, &this->CObstructionObject);
  vptr_INextBotEventResponder = this->_vptr_INextBotEventResponder;
  this->m_bVisibilityDirtyFlag = 1;
  vptr_INextBotEventResponder[60](&this->INextBot);
  v11 = (*(this->_vptr_IHandleEntity + 376))(this);
  CDOTALocomotor::WipePositionHistoryToCurrentPosition(v11);
  this->m_LocalNPCObstructionsCache.m_nLastUpdatedTick = 0;
  cacheClearNPCs.m_Size = 0;
  cacheClearNPCs.m_Memory.m_nAllocationCount = 64;
  cacheClearNPCs.m_Memory.m_nGrowSize = 0x80000000;
  cacheClearNPCs.m_Memory.m_pMemory = &cacheClearNPCs.m_FixedMemory;
  v12 = CBaseEntity::GetAbsOrigin(this);
  FindUnitsInRadius(this->m_iTeamNum.m_Value, v12, this, 1000.0, &cacheClearNPCs, 3, 55, 80, 0, 0);
  if ( cacheClearNPCs.m_Size > 0 )
  {
    m_pMemory = cacheClearNPCs.m_Memory.m_pMemory;
    v14 = CEntityHandle::gm_pEntityList;
    v15 = cacheClearNPCs.m_Memory.m_pMemory + 1;
    v16 = &cacheClearNPCs.m_Memory.m_pMemory[cacheClearNPCs.m_Size - 1 + 1];
    while ( 1 )
    {
      m_Index = m_pMemory->m_Index;
      if ( m_pMemory->m_Index + 2 > 1
        && (v18 = m_pMemory->m_Index, (v19 = v14->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F]) != 0)
        && (v20 = &v19[v18 & 0x1FF]) != 0
        && m_Index == v20->m_EHandle.m_Index
        && (m_pInstance = v20->m_pInstance) != 0
        && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
      {
        LODWORD(m_pInstance[83].m_iszPrivateVScripts.u.m_Id) = 0;
        m_pMemory = v15;
        if ( v15 == v16 )
          break;
      }
      else
      {
        m_pMemory = v15;
        if ( v15 == v16 )
          break;
      }
      ++v15;
    }
  }
  if ( !this->m_bIsWaitingToSpawn.m_Value )
  {
    v25 = CBaseEntity::GetAbsOrigin(this);
    x = v25->x;
    y = v25->y;
    params.fOriginalDamage = 0.0;
    *&params.bTooltip = 0;
    *&params.bIgnoreInvis = 0;
    LODWORD(v25) = this->m_iTeamNum.m_Value;
    params.fDistance = 0.0;
    LODWORD(params.fGain) = 3;
    LODWORD(params.fAttackTimeRemaining) = 55;
    params.m_nIssuerPlayerIndex = 80;
    params.inflictor.m_Index = v25;
    m_Head = g_NextBotManager.m_botList.m_Head;
    bLongTeleporta = (((x - bLongTeleport) * (x - bLongTeleport))
                    + ((y - *&params.ability.m_Index) * (y - *&params.ability.m_Index))) > 2560000.0;
    if ( m_Head != 0xFFFF )
    {
      v29 = g_NextBotManager.m_botList.m_Memory.m_pMemory;
      do
      {
        v30 = m_Head;
        v31 = (*(v29[v30].m_Element->_vptr_INextBotEventResponder + 66))(v29[v30].m_Element);
        v32 = v31;
        if ( v31 == 0 || *(v31 + 339) == 0 )
          v32 = 0;
        if ( UnitFilter(
               v32,
               SLODWORD(params.fGain),
               SLODWORD(params.fAttackTimeRemaining),
               params.m_nIssuerPlayerIndex,
               params.inflictor.m_Index) == 0 )
        {
          fOriginalDamage_low = SLODWORD(params.fOriginalDamage);
          fOriginalDamage = params.fOriginalDamage;
          if ( LODWORD(params.fOriginalDamage) == *&params.bIgnoreInvis )
          {
            CUtlMemory<CDOTA_BaseNPC *,int>::Grow(&params.bTooltip, 1);
            fOriginalDamage = params.fOriginalDamage;
          }
          LODWORD(params.fOriginalDamage) = LODWORD(fOriginalDamage) + 1;
          v35 = (*&params.bTooltip + 8 * fOriginalDamage_low);
          if ( v35 != 0 )
            *v35 = v32;
        }
        v29 = g_NextBotManager.m_botList.m_Memory.m_pMemory;
        m_Head = v29[v30].m_Next;
      }
      while ( m_Head != 0xFFFF );
      if ( SLODWORD(params.fOriginalDamage) > 0 )
      {
        v36 = 0;
        do
        {
          (*(*(*(*&params.bTooltip + 8 * v36) + 1888LL) + 488LL))(
            *(*&params.bTooltip + 8 * v36) + 1888LL,
            this,
            bLongTeleporta);
          ++v36;
        }
        while ( SLODWORD(params.fOriginalDamage) > v36 );
      }
    }
    CUtlVectorBase<CDOTA_BaseNPC *,CUtlMemory<CDOTA_BaseNPC *,int>>::~CUtlVectorBase(&params.fOriginalDamage);
  }
  if ( (this->m_iMoveCapabilities & 3) != 0
    || (BYTE3(this->m_nUnitState64.m_Value) & 1 | ((this->m_nUnitState64.m_Value & 0x200000000LL) != 0)) != 0 )
  {
    CBaseEntity::PhysicsTouchTriggers(this, 0);
  }
  if ( g_pDOTAActiveModifiers->m_iActiveEventsHandlers[143] > 0 )
  {
    params.fOriginalDamage = NAN;
    params.nActivity = 0;
    *&params.bTooltip = 0;
    params.nTooltipParam = -1;
    params.bIgnoreInvis = 0;
    params.fDistance = 0.0;
    params.fGain = 0.0;
    params.fAttackTimeRemaining = 0.0;
    params.nDamageflags = -1;
    params.iFailType = 0;
    *&params.iRecord = 0;
    memset(&params.pOrb2, 0, 24);
    params.nPlayerids_stick = 0;
    LOWORD(params.hattacker.m_Index) = 0;
    params.htarget.m_Index = 0;
    params.hunit.m_Index = -1;
    v40 = -1;
    v41 = -1;
    if ( this != 0 )
    {
      m_pEntity = this->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v23 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v24 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v24 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(v41) = v24 | v41 & 0x8000;
        v41 = (v23 << 15) | v41 & 0x7FFF;
      }
    }
    FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_SET_LOCATION, &params.fOriginalDamage);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&cacheClearNPCs);
  if ( (cacheClearNPCs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&cacheClearNPCs.m_Memory);
    if ( (cacheClearNPCs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&cacheClearNPCs.m_Memory);
  }
}


// CDOTA_BaseNPC::GetModelRadius  (line 7978, @0x00000000028f6590, libserver.so)  // inlines: GetHullRadius
// calls: CBaseEntity::GetModel
// callers: CDOTA_BaseNPC::MakeVisibleToTeam, CDOTA_Modifier_EmberSpirit_FlameGuard::OnCreated, CDOTA_Modifier_Item_Crimson_Guard_Extra::OnAttacked, CDOTA_Item_Crimson_Guard::OnSpellStart, CDOTA_Modifier_Item_Hood_Of_Defiance_Barrier::OnCreated, CDOTA_Modifier_Item_Pipe_Barrier::OnCreated, CDOTA_Item_Pipe::OnSpellStart
float __fastcall CDOTA_BaseNPC::GetModelRadius(CDOTA_BaseNPC *const this)
{
  float (__fastcall *v2)(IGameModelInfo *, _QWORD *); // r14
  _QWORD v4[6]; // [rsp+0h] [rbp-30h] BYREF

  CBaseEntity::GetModel(v4, this);
  if ( v4[0] == 0 )
    return this->m_flHullRadius;
  v2 = *(modelinfo->_vptr_IAppSystem + 23);
  CBaseEntity::GetModel(v4, this);
  return v2(modelinfo, v4);
}


// CDOTA_BaseNPC::AdvanceMovementOrderTracking  (line 7986, @0x0000000002907cd0, libserver.so)  // inlines: operator=
// callers: CDOTABehaviorCommandMoveToPositionToDropItem::OnStart, CDOTABehaviorCommandMoveToItemToTake::OnStart, CDOTABehaviorCommandMoveToRuneToTake::OnStart, CDOTABehaviorCommandMoveToNPCToGive::OnStart, CDOTABehaviorCommandMoveToNPC::OnStart, CDOTABehaviorCommandCastHere::OnStart, CDOTABehaviorCommandMoveToPosition::OnStart, CDOTABehaviorCommandMoveToPositionToCast::OnStart, CDOTABehaviorCommandMoveToTargetToAttack::OnStart, CDOTABehaviorCommandMoveToTargetToCast::OnStart, CDOTABehaviorCommandPatrol::OnStart, CDOTABehaviorIdle::OnStartInternal
void __fastcall CDOTA_BaseNPC::AdvanceMovementOrderTracking(
        CDOTA_BaseNPC *const this,
        bool bIsMovementOrder,
        bool bIsPatrol,
        double a4,
        vec_t a5)
{
  vec_t x; // xmm0_4
  bool m_bCurrentOrderIsMovement; // al
  vec_t z; // xmm0_4

  this->m_bResumePreviousMovement = 0;
  this->m_bIsPatrolling = bIsPatrol;
  x = this->m_vCurrentMovementOrderDestination.x;
  m_bCurrentOrderIsMovement = this->m_bCurrentOrderIsMovement;
  this->m_bCurrentOrderIsMovement = bIsMovementOrder;
  this->m_vPreviousMovementOrderDestination.x = x;
  this->m_vPreviousMovementOrderDestination.y = this->m_vCurrentMovementOrderDestination.y;
  z = this->m_vCurrentMovementOrderDestination.z;
  this->m_bPreviousOrderIsMovement = m_bCurrentOrderIsMovement;
  this->m_vPreviousMovementOrderDestination.z = z;
  this->m_vCurrentMovementOrderDestination.z = a5;
  *&this->m_vCurrentMovementOrderDestination.x = a4;
}


// CDOTA_BaseNPC::PrimeResumePreviousMovement  (line 7998, @0x0000000002907d50, libserver.so)  // inlines: operator=
// calls: CBaseEntity::GetAbsOrigin
// callers: CDOTA_ActionRunner::PerformAction_Blink, CDOTA_Ability_Greevil_Miniboss_Yellow_Surge::OnSpellStart, CDOTABehaviorAbilityPhase::OnStart, CDOTA_Ability_Morphling_Waveform::OnSpellStart, CDOTA_Ability_AntiMage_Blink::OnSpellStart, CDOTA_Ability_QueenOfPain_Blink::OnSpellStart, CDOTA_Ability_FacelessVoid_TimeWalk::OnSpellStart, CDOTA_Item_ForceBoots::OnSpellStart, CDOTA_Item_JumpBoots::OnSpellStart, CDOTA_Ability_Huskar_Life_Break::OnSpellStart, CDOTA_Ability_DarkSeer_Surge::OnSpellStart, CDOTA_Ability_Magnataur_Skewer::OnSpellStart (18 total)
void __fastcall CDOTA_BaseNPC::PrimeResumePreviousMovement(CDOTA_BaseNPC *const this)
{
  this->m_bResumePreviousMovement = 1;
  this->m_vResumePreviousMovementRequestLocation = *CBaseEntity::GetAbsOrigin(this);
}


// CDOTA_BaseNPC::UpdateResumePreviousMovementAfterTeleport  (line 8004, @0x0000000002907e90, libserver.so)
// calls: CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::UpdateResumePreviousMovement
// callers: CDOTA_ActionRunner::PerformAction_Blink, CDOTA_Ability_Puck_EtherealJaunt::OnSpellStart, CDOTA_Ability_AntiMage_Blink::OnSpellStart, CDOTA_Ability_QueenOfPain_Blink::OnSpellStart, CDOTA_Item_BlinkDagger::OnSpellStart
void __fastcall CDOTA_BaseNPC::UpdateResumePreviousMovementAfterTeleport(
        CDOTA_BaseNPC *const this,
        double a2,
        vec_t a3)
{
  Vector *AbsOrigin; // rax
  Vector vTeleportStarta; // 0:^0.12

  *&vTeleportStarta.x = a2;
  vTeleportStarta.z = a3;
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  CDOTA_BaseNPC::UpdateResumePreviousMovement(this, vTeleportStarta, *AbsOrigin);
}


// CDOTA_BaseNPC::UpdateResumePreviousMovement  (line 8009, @0x0000000002907da0, libserver.so)  // inlines: Dot, DotProduct, NormalizeInPlace, VectorSubtract, operator-
// calls: VectorNormalize
// callers: CDOTA_BaseNPC::UpdateResumePreviousMovementAfterTeleport, CDOTA_Ability_Morphling_Waveform::OnSpellStart, CDOTA_Ability_FacelessVoid_TimeWalk::OnSpellStart, CDOTA_Ability_Huskar_Life_Break::OnSpellStart, CDOTA_Ability_Magnataur_Skewer::OnSpellStart, CDOTA_Ability_Holdout_FriendlySkewer::OnSpellStart, CDOTA_Ability_Wisp_Tether::OnSpellStart
void __fastcall CDOTA_BaseNPC::UpdateResumePreviousMovement(
        CDOTA_BaseNPC *const this,
        Vector vTeleportStart,
        Vector vTeleportEnd)
{
  float x; // xmm0_4
  float z; // xmm1_4
  vec_t v6; // xmm1_4
  float v7; // xmm3_4
  __int64 vTeleportStarta; // [rsp+10h] [rbp-40h]
  Vector vToTeleportEnd; // [rsp+20h] [rbp-30h] BYREF
  Vector vToDestination; // [rsp+30h] [rbp-20h] BYREF

  vTeleportStarta = *&vTeleportStart.x;
  x = vTeleportEnd.x;
  if ( this->m_bPreviousOrderIsMovement && this->m_bResumePreviousMovement )
  {
    vToTeleportEnd.z = vTeleportEnd.z - vTeleportStart.z;
    vTeleportEnd.x = this->m_vPreviousMovementOrderDestination.y;
    vToTeleportEnd.y = vTeleportEnd.y - *(&vTeleportStarta + 1);
    z = this->m_vPreviousMovementOrderDestination.z;
    vToTeleportEnd.x = x - *&vTeleportStarta;
    v6 = z - vTeleportEnd.z;
    v7 = this->m_vPreviousMovementOrderDestination.x;
    vToDestination.y = vTeleportEnd.x - vTeleportEnd.y;
    vToDestination.z = v6;
    vToDestination.x = v7 - x;
    VectorNormalize(&vToTeleportEnd);
    VectorNormalize(&vToDestination);
    if ( (((vToTeleportEnd.x * vToDestination.x) + (vToTeleportEnd.y * vToDestination.y))
        + (vToTeleportEnd.z * vToDestination.z)) < 0.70710677 )
      this->m_bResumePreviousMovement = 0;
  }
}


// CDOTA_BaseNPC::ExecuteResumePreviousMovement  (line 8032, @0x000000000292b560, libserver.so)  // inlines: AddToTail, CopyConstruct<CEntityIndex>, Element, Get, GetEntityIdentity, GetEntryIndex, GetForceAttackTarget, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, RemoveAll, Reset, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlVector
// calls: CBaseEntity::GetAbsOrigin, DestinationPassed, CUnitOrders::CUnitOrders, CEntityInstance::GetEntityIndex, DOTA_ExecuteOrders, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::~CUtlVectorBase, CUtlMemory<CEntityIndex, int>::Grow, _Unwind_Resume
// callers: CDOTABehaviorIdle::OnStartInternal
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_BaseNPC::ExecuteResumePreviousMovement(CDOTA_BaseNPC *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  Vector *AbsOrigin; // rax
  vec_t y; // xmm0_4
  CEntityIndex v7; // eax
  __int64 m_Size; // r13
  int32 m_Data; // r14d
  int v10; // eax
  CEntityIndex *v11; // rdx
  vec_t x; // xmm0_4
  CUnitOrders movementOrder; // [rsp+10h] [rbp-60h] BYREF

  if ( this->m_bPreviousOrderIsMovement && this->m_bResumePreviousMovement )
  {
    m_Index = this->m_hForceAttackTarget.m_Index;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hForceAttackTarget.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hForceAttackTarget.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || v4->m_pInstance == 0
      || BYTE3(v4->m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      if ( DestinationPassed(
             *AbsOrigin,
             this->m_vResumePreviousMovementRequestLocation,
             this->m_vPreviousMovementOrderDestination) == 0 )
      {
        CUnitOrders::CUnitOrders(&movementOrder);
        movementOrder.m_nUnits.m_Size = 0;
        movementOrder.m_nOrderType = 0;
        movementOrder.m_nTargetIndex.m_Data = 0;
        movementOrder.m_nAbilityIndex.m_Data = 0;
        movementOrder.m_bQueue = 0;
        movementOrder.m_vPosition.x = vec3_origin.x;
        y = vec3_origin.y;
        movementOrder.m_nIssuerPlayerIndex = -1;
        movementOrder.m_vPosition.y = y;
        movementOrder.m_vPosition.z = vec3_origin.z;
        v7.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
        m_Size = movementOrder.m_nUnits.m_Size;
        m_Data = v7.m_Data;
        v10 = movementOrder.m_nUnits.m_Size;
        if ( movementOrder.m_nUnits.m_Size == movementOrder.m_nUnits.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CEntityIndex,int>::Grow(&movementOrder.m_nUnits.m_Memory, 1);
          v10 = movementOrder.m_nUnits.m_Size;
        }
        movementOrder.m_nUnits.m_Size = v10 + 1;
        v11 = &movementOrder.m_nUnits.m_Memory.m_pMemory[m_Size];
        if ( v11 != 0 )
          v11->m_Data = m_Data;
        x = this->m_vPreviousMovementOrderDestination.x;
        movementOrder.m_nOrderType = 1;
        movementOrder.m_vPosition.x = x;
        movementOrder.m_vPosition.y = this->m_vPreviousMovementOrderDestination.y;
        movementOrder.m_vPosition.z = this->m_vPreviousMovementOrderDestination.z;
        DOTA_ExecuteOrders(&movementOrder, 0, 1, 0);
        this->m_bResumePreviousMovement = 0;
        CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::~CUtlVectorBase(&movementOrder.m_nUnits);
      }
    }
  }
}


// CDOTA_BaseNPC::SetUnitName  (line 8059, @0x00000000028f9d30, libserver.so)  // inlines: CUtlSymbolLarge, NetworkStateChanged, Set, operator=, operator=<CUtlSymbolLarge>, operator=<int>
// calls: AllocPooledString, DOTAGameManager, CDOTAGameManager::GetUnitTableIndex
// callers: CDOTA_BaseNPC::UnserializeUnitName, CDOTA_BaseNPC_HallofFame::Spawn
void __fastcall CDOTA_BaseNPC::SetUnitName(CDOTA_BaseNPC *const this, const char *pName)
{
  UtlSymLargeId_t v4; // r13
  CDOTAGameManager *v5; // rax
  int UnitTableIndex; // r12d
  UtlSymLargeId_t v7[6]; // [rsp+0h] [rbp-30h] BYREF

  AllocPooledString(v7, pName);
  v4 = v7[0];
  if ( v7[0] != this->m_iszUnitName.m_Value.u.m_Id )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 3384, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iszUnitName.m_Value.u.m_Id = v4;
  }
  v5 = DOTAGameManager();
  UnitTableIndex = CDOTAGameManager::GetUnitTableIndex(v5, pName);
  if ( UnitTableIndex != this->m_iUnitNameIndex.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 3392, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iUnitNameIndex.m_Value = UnitTableIndex;
  }
}


// CDOTA_BaseNPC::TriggerSpellAbsorb  (line 8066, @0x0000000002908030, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, GetEHandle, GetEntryIndex, GetModifier_First_Valid, GetSerialNumber, IsListeningToEvent, Set, operator=
// calls: CDOTA_BaseNPC::TriggerSpellReflect, CDOTA_ModifierManager::GetModifier_First_Valid_Internal
// callers: CDOTA_Ability_Greevil_Miniboss_Black_BrainSap::OnSpellStart, CDOTA_Ability_Greevil_Miniboss_Blue_ColdFeet::OnSpellStart, CDOTA_Ability_SatyrSoulstealer_ManaBurn::OnSpellStart, CDOTA_Ability_Greevil_Miniboss_White_Purification::OnSpellStart, CDOTA_Ability_DarkTrollWarlord_Ensnare::OnSpellStart, CDOTA_Ability_MudGolem_HurlBoulder::OnProjectileHit, CDOTA_Ability_SatyrTrickster_Purge::OnSpellStart, CDOTA_Ability_Greevil_Miniboss_Black_Nightmare::OnSpellStart, CDOTA_Modifier_HarpyStorm_ChainLightning::OnCreated, CDOTA_Modifier_Greevil_Miniboss_Black_Nightmare::OnAttackStart, CDOTA_BaseNPC::Script_TriggerSpellAbsorb, CDOTA_Ability_Bane_Enfeeble::OnSpellStart (156 total)
bool __fastcall CDOTA_BaseNPC::TriggerSpellAbsorb(
        CDOTA_BaseNPC *const this,
        CDOTABaseAbility *pAbility,
        bool bAlsoTriggerReflect)
{
  CEntityIdentity *m_pEntity; // rcx
  __int16 v5; // r8
  __int64 v6; // rax
  bool v7; // r12
  CModifierParams params; // [rsp+0h] [rbp-A0h] BYREF

  params.bCraniumBasherTested = 0;
  params.ability.m_Index = -1;
  params.fDamage = 0.0;
  params.fOriginalDamage = 0.0;
  params.nActivity = -1;
  params.bTooltip = 0;
  params.nTooltipParam = 0;
  params.bIgnoreInvis = 0;
  params.bNoCooldown = 0;
  params.bReincarnate = 0;
  params.bDoNotConsume = 0;
  params.fDistance = 0.0;
  params.inflictor.m_Index = -1;
  params.nDamageflags = 0;
  params.nDamageCategory = 0;
  memset(&params.pOrb, 0, 24);
  params.bHeartRegenApplied = 0;
  params.bDiffusalApplied = 0;
  params.bChainLightningConsidered = 0;
  params.bSuppressDamage = 0;
  params.bRangedAttack = 0;
  params.nPlayerids_stick = 0;
  params.hattacker.m_Index = -1;
  params.htarget.m_Index = -1;
  params.hunit.m_Index = -1;
  if ( pAbility != 0 )
  {
    m_pEntity = pAbility->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v5 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      params.ability.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v5 & 0x7FFF;
    }
  }
  if ( bAlsoTriggerReflect )
    CDOTA_BaseNPC::TriggerSpellReflect(this, pAbility);
  v6 = this->m_ModifierManager.m_buffsForModifiers[93];
  v7 = 0;
  if ( v6 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v6].m_Size > 0 )
    return CDOTA_ModifierManager::GetModifier_First_Valid_Internal(
             &this->m_ModifierManager,
             modifierfunction::MODIFIER_PROPERTY_ABSORB_SPELL,
             &params) == 1.0;
  return v7;
}


// CDOTA_BaseNPC::Script_TriggerSpellAbsorb  (line 8079, @0x00000000029081e0, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTAAbility, ToEnt
// calls: GetScriptDesc<CEntityInstance>, __dynamic_cast, CDOTA_BaseNPC::TriggerSpellAbsorb
bool __fastcall CDOTA_BaseNPC::Script_TriggerSpellAbsorb(CDOTA_BaseNPC *const this, HSCRIPT hAbility)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  const void *v6; // rax
  CDOTABaseAbility *v7; // rsi

  if ( hAbility != 0
    && (v4 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        (v6 = v4(g_pScriptVM, hAbility, Script)) != 0) )
  {
    v7 = __dynamic_cast(v6, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
  }
  else
  {
    v7 = 0;
  }
  return CDOTA_BaseNPC::TriggerSpellAbsorb(this, v7, 1);
}


// CDOTA_BaseNPC::TriggerModifierDodge  (line 8085, @0x00000000028fb690, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, GetEHandle, GetEntryIndex, GetModifier_First_Valid, GetSerialNumber, IsListeningToEvent, Set, SetTarget, operator=
// calls: CDOTA_ModifierManager::GetModifier_First_Valid_Internal
// callers: CDOTA_ModifierManager::AddNewModifier
bool __fastcall CDOTA_BaseNPC::TriggerModifierDodge(CDOTA_BaseNPC *const this)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v2; // cx
  __int64 v3; // rax
  bool v4; // bl
  CModifierParams params; // [rsp+0h] [rbp-A0h] BYREF

  params.bCraniumBasherTested = 0;
  params.ability.m_Index = -1;
  params.fDamage = 0.0;
  params.fOriginalDamage = 0.0;
  params.nActivity = -1;
  params.bTooltip = 0;
  params.nTooltipParam = 0;
  params.bIgnoreInvis = 0;
  params.bNoCooldown = 0;
  params.bReincarnate = 0;
  params.bDoNotConsume = 0;
  params.fDistance = 0.0;
  params.inflictor.m_Index = -1;
  params.nDamageflags = 0;
  params.nDamageCategory = 0;
  memset(&params.pOrb, 0, 24);
  params.bHeartRegenApplied = 0;
  params.bDiffusalApplied = 0;
  params.bChainLightningConsidered = 0;
  params.bSuppressDamage = 0;
  params.bRangedAttack = 0;
  params.nPlayerids_stick = 0;
  params.hattacker.m_Index = -1;
  params.htarget.m_Index = -1;
  params.hunit.m_Index = -1;
  if ( this != 0 )
  {
    m_pEntity = this->m_pEntity;
    if ( m_pEntity != 0 )
    {
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v2 = 0x7FFF;
      else
        v2 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      params.htarget.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v2 & 0x7FFF;
    }
  }
  v3 = this->m_ModifierManager.m_buffsForModifiers[43];
  v4 = 0;
  if ( v3 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v3].m_Size > 0 )
    return CDOTA_ModifierManager::GetModifier_First_Valid_Internal(
             &this->m_ModifierManager,
             modifierfunction::MODIFIER_PROPERTY_AVOID_SPELL,
             &params) == 1.0;
  return v4;
}


// CDOTA_BaseNPC::TriggerSpellReflect  (line 8093, @0x0000000002907ed0, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, GetEHandle, GetEntryIndex, GetModifier_First_Valid, GetSerialNumber, IsListeningToEvent, Set, operator=
// calls: CDOTA_ModifierManager::GetModifier_First_Valid_Internal
// callers: CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTA_BaseNPC::Script_TriggerSpellReflect, CDOTA_Modifier_Tiny_Toss::UpdateVerticalMotion, CDOTA_Ability_Tusk_Snowball::EndSnowball
void __fastcall CDOTA_BaseNPC::TriggerSpellReflect(CDOTA_BaseNPC *const this, CDOTABaseAbility *pAbility)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v3; // cx
  __int64 v4; // rax
  CModifierParams params; // [rsp+0h] [rbp-90h] BYREF

  params.ability.m_Index = -1;
  params.fDamage = 0.0;
  params.fOriginalDamage = 0.0;
  params.nActivity = -1;
  params.bTooltip = 0;
  params.nTooltipParam = 0;
  params.bIgnoreInvis = 0;
  params.bNoCooldown = 0;
  params.bReincarnate = 0;
  params.bDoNotConsume = 0;
  params.fDistance = 0.0;
  params.inflictor.m_Index = -1;
  params.nDamageflags = 0;
  params.nDamageCategory = 0;
  memset(&params.pOrb, 0, 24);
  params.bCraniumBasherTested = 0;
  params.bHeartRegenApplied = 0;
  params.bDiffusalApplied = 0;
  params.bChainLightningConsidered = 0;
  params.bSuppressDamage = 0;
  params.bRangedAttack = 0;
  params.nPlayerids_stick = 0;
  params.hattacker.m_Index = -1;
  params.htarget.m_Index = -1;
  params.hunit.m_Index = -1;
  if ( pAbility != 0 )
  {
    m_pEntity = pAbility->m_pEntity;
    if ( m_pEntity != 0 )
    {
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v3 = 0x7FFF;
      else
        v3 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      params.ability.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v3 & 0x7FFF;
    }
  }
  v4 = this->m_ModifierManager.m_buffsForModifiers[94];
  if ( v4 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v4].m_Size > 0 )
    CDOTA_ModifierManager::GetModifier_First_Valid_Internal(
      &this->m_ModifierManager,
      modifierfunction::MODIFIER_PROPERTY_REFLECT_SPELL,
      &params);
}


// CDOTA_BaseNPC::Script_TriggerSpellReflect  (line 8101, @0x0000000002908260, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTAAbility, ToEnt
// calls: GetScriptDesc<CEntityInstance>, __dynamic_cast, CDOTA_BaseNPC::TriggerSpellReflect
void __fastcall CDOTA_BaseNPC::Script_TriggerSpellReflect(CDOTA_BaseNPC *const this, HSCRIPT hAbility)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  const void *v6; // rax
  CDOTABaseAbility *v7; // rsi

  if ( hAbility != 0
    && (v4 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        (v6 = v4(g_pScriptVM, hAbility, Script)) != 0) )
  {
    v7 = __dynamic_cast(v6, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
  }
  else
  {
    v7 = 0;
  }
  CDOTA_BaseNPC::TriggerSpellReflect(this, v7);
}


// CDOTA_BaseNPC::UnitEmitSound  (line 8106, @0x0000000002916880, libserver.so)  // inlines: CAbsQueryScopeGuard, CEntityIndex, CUtlMemory, CUtlVector, CUtlVectorBase, EmitSound_t, IsAbsQueriesValid, Purge, SetAbsQueriesValid, SoundEventGuid_t, entindex, ~CAbsQueryScopeGuard, ~CDOTAPASFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CDOTAPASFilter::CDOTAPASFilter, CDOTA_BaseNPC::FindReplacementSound, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll, CRecipientFilter::~CRecipientFilter, CUtlMemory<Vector, int>::Purge, __stack_chk_fail, _Unwind_Resume, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase
// callers: CDOTA_ActionRunner::PerformAction_FireSound, CDOTA_Ability_ShootFirework::OnSpellStart, CDOTA_Ability_Throw_Snowball::OnSpellStart, CDOTA_Ability_Throw_Coal::OnSpellStart, CDOTA_Item_Physical::SetContainedItem, CDOTA_Ability_ControllerTest_MeleeAttack::OnAbilityPhaseStart, CDOTA_Ability_ControllerTest_SvenOverheadAttack::OnAbilityPhaseStart, CDOTA_Ability_ControllerTest_SvenSweepingAttack::OnAbilityPhaseStart, CDOTA_Ability_ControllerTest_SvenThrustingAttack::OnAbilityPhaseStart, CDOTA_Ability_ControllerTest_SlarkSpinAttack::OnAbilityPhaseStart, CDOTA_Ability_Greevil_Miniboss_Black_BrainSap::OnSpellStart, CDOTA_Ability_Greevil_Miniboss_Blue_ColdFeet::OnSpellStart (543 total)
SndOpEventGuid_t __fastcall CDOTA_BaseNPC::UnitEmitSound(
        CDOTA_BaseNPC *const this,
        const char *soundname,
        float soundtime,
        float *duration,
        CDOTAPASFilter *pFilter)
{
  bool v8; // r15
  CEntityIndex v9; // eax
  SndOpEventGuid_t v10; // rbx
  EmitSound_t params; // [rsp+10h] [rbp-1D0h] BYREF
  CDOTAPASFilter filter; // [rsp+70h] [rbp-170h] BYREF
  unsigned __int64 v15; // [rsp+1A8h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  v8 = CBaseEntity::s_bAbsQueriesValid;
  CBaseEntity::s_bAbsQueriesValid = 1;
  CDOTAPASFilter::CDOTAPASFilter(&filter, this);
  if ( pFilter == 0 )
    pFilter = &filter;
  params.m_pflSoundDuration = duration;
  params.m_nChannel = 0;
  params.m_flVolume = 1.0;
  params.m_SoundLevel = soundlevel_t::SNDLVL_NONE;
  params.m_nFlags = 0;
  params.m_nPitch = 100;
  params.m_pOrigin = 0;
  params.m_bEmitCloseCaption = 1;
  params.m_bWarnOnMissingCloseCaption = 0;
  params.m_nSpeakerEntity.m_Data = -1;
  params.m_UtlVecSoundOrigin.m_Size = 0;
  memset(&params.m_UtlVecSoundOrigin.m_Memory, 0, 21);
  params.m_pSoundName = CDOTA_BaseNPC::FindReplacementSound(this, soundname);
  params.m_flSoundTime = soundtime;
  params.m_bWarnOnDirectWaveReference = 1;
  v9.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  v10 = CBaseEntity::EmitSound(pFilter, v9, &params);
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::RemoveAll(&params.m_UtlVecSoundOrigin);
  if ( (params.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&params.m_UtlVecSoundOrigin.m_Memory);
    if ( (params.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&params.m_UtlVecSoundOrigin.m_Memory);
  }
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
  CBaseEntity::s_bAbsQueriesValid = v8;
  return v10;
}


// CDOTA_BaseNPC::ScriptEmitSound  (line 8129, @0x0000000002916a90, libserver.so)
// calls: CDOTA_BaseNPC::UnitEmitSound
void __fastcall CDOTA_BaseNPC::ScriptEmitSound(CDOTA_BaseNPC *const this, const char *soundname)
{
  CDOTA_BaseNPC::UnitEmitSound(this, soundname, 0.0, 0, 0);
}


// CDOTA_BaseNPC::UpdateNetworkedTeamVisibility  (line 8134, @0x00000000029082e0, libserver.so)  // inlines: DOTAGameRules, GetGameTime, NetworkStateChanged, Set, operator=<int>
// calls: CDOTA_ModifierManager::SendBuffsToClients
// callers: CDOTA_BaseNPC::UpdateVisibility
void __fastcall CDOTA_BaseNPC::UpdateNetworkedTeamVisibility(CDOTA_BaseNPC *const this)
{
  int m_Value; // r13d
  int m_iTeamVisibilityBitmask; // r12d
  int v4; // edx
  float *v5; // rdi
  CGameRules *v6; // rcx
  unsigned int i; // eax
  int v8; // xmm0_4

  CDOTA_ModifierManager::SendBuffsToClients(
    &this->m_ModifierManager,
    this->m_iTeamVisibilityBitmask & ~this->m_iTaggedAsVisibleByTeam.m_Value);
  m_Value = this->m_iTaggedAsVisibleByTeam.m_Value;
  m_iTeamVisibilityBitmask = this->m_iTeamVisibilityBitmask;
  if ( m_Value != m_iTeamVisibilityBitmask )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2936, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iTaggedAsVisibleByTeam.m_Value = m_iTeamVisibilityBitmask;
    if ( m_Value != m_iTeamVisibilityBitmask )
    {
      v5 = &this->m_vLastVisibilityChange.m_Memory[2];
      v6 = g_pGameRules;
      for ( i = 2; i != 14; ++i )
      {
        v4 = m_Value ^ m_iTeamVisibilityBitmask;
        if ( _bittest(&v4, i) )
        {
          if ( v6 != 0 )
            v8 = *&v6[18].m_szQuestName[20];
          else
            v8 = 0;
          *v5 = v8;
        }
        ++v5;
      }
    }
  }
}


// CDOTA_BaseNPC::WasSeenRecently  (line 8153, @0x00000000029087a0, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// callers: DOTA_ExecuteOrders
bool __fastcall CDOTA_BaseNPC::WasSeenRecently(CDOTA_BaseNPC *const this, int iTeamNumber)
{
  bool result; // al
  int m_Value; // edx
  float v4; // xmm1_4

  result = 1;
  if ( iTeamNumber <= 0xD )
  {
    m_Value = this->m_iTaggedAsVisibleByTeam.m_Value;
    if ( !_bittest(&m_Value, iTeamNumber) && (this->m_iUnitType & 0x10) == 0 )
    {
      v4 = 0.0;
      if ( g_pGameRules != 0 )
        v4 = *&g_pGameRules[18].m_szQuestName[20];
      return (this->m_vLastVisibilityChange.m_Memory[iTeamNumber] + 1.0) > v4;
    }
  }
  return result;
}


// CDOTA_BaseNPC_Additive::YouForgotToImplementOrDeclareServerClass  (line 8172, @0x00000000028f5290, libserver.so)
int __fastcall CDOTA_BaseNPC_Additive::YouForgotToImplementOrDeclareServerClass(CDOTA_BaseNPC_Additive *const this)
{
  return 0;
}


// CDOTA_BaseNPC_Additive::GetServerClass  (line 8172, @0x0000000002900510, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_BaseNPC_Additive::GetServerClass(CDOTA_BaseNPC_Additive *const this)
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


// CDOTAPASFilter::CDOTAPASFilter  (line 8176, @0x0000000002908800, libserver.so)  // inlines: CPASFilter, GetGlobalDOTATeam, ~CPASFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CBaseModelEntity::CanBeSeenByTeam, GetGlobalTeam, CRecipientFilter::RemoveRecipientsByTeam, CRecipientFilter::~CRecipientFilter, _Unwind_Resume
// callers: CDOTA_Speech::Speak, CDOTA_BaseNPC::UnitEmitSound, CDOTA_Ability_Lich_ChainFrost::OnProjectileThink, CDOTA_Ability_Sniper_Assassinate::OnProjectileThink, CDOTA_Ability_Sniper_Assassinate::OnSpellStart, CDOTA_Ability_Batrider_Flamebreak::OnProjectileThink, CDOTA_Ability_Invoker_ChaosMeteor::OnProjectileThink_ExtraData, CDOTA_Ability_Shredder_Chakram::OnSpellStart, CDOTA_Ability_Shredder_Chakram::OnProjectileThink
void __fastcall CDOTAPASFilter::CDOTAPASFilter(CDOTAPASFilter *const this, CDOTA_BaseNPC *pEnt)
{
  vec_t v4; // xmm1_4
  int v5; // ebx
  CTeam *GlobalTeam; // rax
  Vector origin; // [rsp+0h] [rbp-30h] BYREF

  *&origin.x = (*(pEnt->_vptr_IHandleEntity + 186))(pEnt);
  origin.z = v4;
  CRecipientFilter::CRecipientFilter(this);
  this->_vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(this, &origin);
  v5 = 0;
  this->_vptr_IRecipientFilter = &off_4187010;
  while ( ++v5 != 14 )
  {
    while ( ((v5 - 6) <= 7 || (v5 - 2) <= 1) && !CBaseModelEntity::CanBeSeenByTeam(pEnt, v5) )
    {
      GlobalTeam = GetGlobalTeam(v5);
      CRecipientFilter::RemoveRecipientsByTeam(this, GlobalTeam);
      if ( ++v5 == 14 )
        return;
    }
  }
}


// CDOTAPVSFilter::AddRecipientsByDOTAPVS  (line 8190, @0x00000000029088e0, libserver.so)  // inlines: FastSqrt, Length2D, ToDOTAPlayer, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: UTIL_PlayerByIndex, CBaseEntity::GetAbsOrigin, CRecipientFilter::AddRecipient
// callers: DOTA_EmitSound, DamageImpact, CDOTA_Ability_AbyssalUnderlord_Firestorm::OnAbilityPhaseStart, CDOTA_Ability_AbyssalUnderlord_PitOfMalice::OnAbilityPhaseStart
void __fastcall CDOTAPVSFilter::AddRecipientsByDOTAPVS(CDOTAPVSFilter *const this, const Vector *const origin)
{
  int i; // ebx
  CBasePlayer *v5; // rax
  const CBaseEntity *v6; // r12
  const Vector *AbsOrigin; // rax

  for ( i = 1; gpGlobals->maxClients > i; ++i )
  {
    v5 = UTIL_PlayerByIndex(i);
    v6 = v5;
    if ( v5 != 0 && (*(v5->_vptr_IHandleEntity + 140))(v5) != 0 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
      if ( fsqrt(
             ((origin->x - AbsOrigin->x) * (origin->x - AbsOrigin->x))
           + ((origin->y - AbsOrigin->y) * (origin->y - AbsOrigin->y))) <= 2500.0 )
        CRecipientFilter::AddRecipient(this, v6);
    }
  }
}


// CDOTA_BaseNPC::IsEntityInRangeForAttack  (line 8208, @0x0000000002908b50, libserver.so)  // inlines: ToDOTABaseNPC
// calls: CDOTA_BaseNPC::IsEntityInRange, CDOTA_BaseNPC::GetDistanceToEntityForAttack
// callers: CDOTA_Bot::WantsToAttack, CDOTABehaviorAttackPhase::Update, CDOTABehaviorCommandMoveToTargetToAttack::OnStart, CDOTABehaviorCommandMoveToTargetToAttack::Update, CDOTABehaviorMoveToNPCToAttack::Update, CDOTA_BaseNPC::GetAutoAttackTarget
bool __fastcall CDOTA_BaseNPC::IsEntityInRangeForAttack(
        CDOTA_BaseNPC *const this,
        CDOTA_BaseNPC *pEntity,
        float a3,
        float flRange)
{
  if ( pEntity != 0 && pEntity->m_bIsDOTANPC )
    return a3 >= CDOTA_BaseNPC::GetDistanceToEntityForAttack(this, pEntity);
  else
    return CDOTA_BaseNPC::IsEntityInRange(this, pEntity, a3, a3);
}


// CDOTA_BaseNPC::GetDistanceToEntityForAttack  (line 8217, @0x00000000029089a0, libserver.so)  // inlines: Dot, DotProduct, FastSqrt, GetCurrentVelocityForTargeting, Length2D, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CBaseEntity::GetAbsOrigin, CDOTALocomotor::GetPositionInPastForTargeting
// callers: CDOTA_Bot::DoCreepAttackAndDeny, CDOTA_BaseNPC::IsEntityInRangeForAttack
float __fastcall CDOTA_BaseNPC::GetDistanceToEntityForAttack(CDOTA_BaseNPC *const this, CBaseEntity *pEntity)
{
  float *v4; // rax
  const Vector *AbsOrigin; // r13
  const Vector *v6; // rax
  double v7; // xmm2_8
  double v8; // xmm1_8
  double v9; // xmm3_8
  __m128 v10; // xmm4
  double v11; // xmm5_8
  float v12; // xmm6_4
  double v13; // xmm0_8
  float v14; // xmm1_4
  __m128 v15; // xmm1
  CDOTALocomotor *v16; // rax
  float v17; // xmm1_4
  const Vector *v18; // rax
  float v20; // [rsp+4h] [rbp-3Ch]
  float v21; // [rsp+8h] [rbp-38h]
  float flTimeInPast; // [rsp+Ch] [rbp-34h]
  float flTimeInPasta; // [rsp+Ch] [rbp-34h]
  unsigned __int64 vPositionInPast; // [rsp+10h] [rbp-30h]

  if ( pEntity == 0 || !pEntity->m_bIsDOTANPC )
    return -1.0;
  v4 = (*(pEntity->_vptr_IHandleEntity + 376))(pEntity);
  v21 = v4[62];
  flTimeInPast = v4[63];
  v20 = v4[64];
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v6 = CBaseEntity::GetAbsOrigin(pEntity);
  *&v7 = LODWORD(flTimeInPast);
  *&v8 = LODWORD(v21);
  *&v9 = LODWORD(v6->x);
  v10.m128_u64[0] = LODWORD(v6->y);
  *&v11 = LODWORD(v6->z);
  *&v9 = *&v9 - AbsOrigin->x;
  v10.m128_f32[0] = v10.m128_f32[0] - AbsOrigin->y;
  *&v11 = *&v11 - AbsOrigin->z;
  v12 = fsqrt((*&v8 * *&v8) + (*&v7 * *&v7));
  v13 = 0.0;
  if ( v12 >= 20.0 )
  {
    v14 = v21 * *&v9;
    *&v9 = 1112014848;
    *&v11 = *&v11 * v20;
    v15.m128_f32[0] = (v14 + (flTimeInPast * v10.m128_f32[0])) + *&v11;
    v10 = _mm_cmplt_ss(0LL, v15);
    *&v7 = v10.m128_i32[0] & 0x42A00000;
    *&v8 = _mm_andnot_ps(v10, 0x42480000u).m128_u64[0] | *&v7;
    *&v8 = *&v8 / v12;
    v13 = v8;
  }
  flTimeInPasta = *&v13;
  v16 = (*(pEntity->_vptr_IHandleEntity + 376))(pEntity, v13, v8, v7, v9, *v10.m128_u64, v11);
  vPositionInPast = CDOTALocomotor::GetPositionInPastForTargeting(v16, flTimeInPasta, v17).m128i_u64[0];
  v18 = CBaseEntity::GetAbsOrigin(this);
  return (fsqrt(
            ((*&vPositionInPast - v18->x) * (*&vPositionInPast - v18->x))
          + ((*(&vPositionInPast + 1) - v18->y) * (*(&vPositionInPast + 1) - v18->y)))
        - this->m_flHullRadius)
       - *&pEntity[2].m_bNetworkQuantizeOriginAndAngles;
}


// CDOTA_BaseNPC::IsEntityInRangeForCast  (line 8232, @0x0000000002908b90, libserver.so)  // inlines: FastSqrt, GetCurrentVelocityForTargeting, Length2D, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CDOTA_BaseNPC::IsEntityInRange, CDOTALocomotor::GetPositionInPastForTargeting, CBaseEntity::GetAbsOrigin
// callers: CDOTABehaviorAbilityPhase::Update, CDOTABehaviorAttackPhase::Update, CDOTABehaviorCommandMoveToTargetToCast::OnStart, CDOTABehaviorCommandMoveToTargetToCast::Update, CDOTA_BaseNPC::CastAbilityOnTarget, CDOTA_BaseNPC_Creature::GetDesiredOffensiveAbility, CDOTA_Modifier_Lich_FrostArmor_Autocast::OnAttack, CDOTA_Modifier_Pugna_LifeDrain::OnIntervalThink
bool __fastcall CDOTA_BaseNPC::IsEntityInRangeForCast(
        CDOTA_BaseNPC *const this,
        CDOTA_BaseNPC *pEntity,
        __m128i a3,
        float flRange)
{
  float v4; // r14d
  bool result; // al
  __int64 v8; // rax
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm4_4
  float v12; // xmm0_4
  CDOTALocomotor *v13; // rax
  float v14; // xmm1_4
  const Vector *AbsOrigin; // rax
  const Vector *v16; // rax
  float flSourceHullRadius; // [rsp+8h] [rbp-38h]
  float flTimeInPast; // [rsp+Ch] [rbp-34h]
  unsigned __int64 vPositionInPast; // [rsp+10h] [rbp-30h]

  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(a3));
  result = CDOTA_BaseNPC::IsEntityInRange(this, pEntity, *a3.m128i_i32, flRange);
  if ( result )
    return result;
  if ( pEntity == 0 )
    return result;
  result = pEntity->m_bIsDOTANPC;
  if ( !result )
    return result;
  v8 = (*(pEntity->_vptr_IHandleEntity + 376))(pEntity);
  v9 = fsqrt((*(v8 + 248) * *(v8 + 248)) + (*(v8 + 252) * *(v8 + 252)));
  v10 = (0.75 * v9) - 100.0;
  if ( v10 < 0.0 )
  {
LABEL_10:
    v11 = 0.0;
    goto LABEL_7;
  }
  v11 = 150.0;
  if ( v10 <= 150.0 )
  {
    if ( v10 >= 0.0 )
    {
      v11 = (0.75 * v9) - 100.0;
      goto LABEL_7;
    }
    goto LABEL_10;
  }
LABEL_7:
  v12 = 0.0;
  if ( v9 >= 20.0 )
    v12 = v11 / v9;
  flTimeInPast = v12;
  v13 = (*(pEntity->_vptr_IHandleEntity + 376))(pEntity);
  vPositionInPast = CDOTALocomotor::GetPositionInPastForTargeting(v13, flTimeInPast, v14).m128i_u64[0];
  AbsOrigin = CBaseEntity::GetAbsOrigin(pEntity);
  flSourceHullRadius = fmaxf(
                         this->m_flHullRadius
                       - fsqrt(
                           ((*&vPositionInPast - AbsOrigin->x) * (*&vPositionInPast - AbsOrigin->x))
                         + ((*(&vPositionInPast + 1) - AbsOrigin->y) * (*(&vPositionInPast + 1) - AbsOrigin->y))),
                         0.0);
  v16 = CBaseEntity::GetAbsOrigin(this);
  return v4 >= ((fsqrt(
                   ((*&vPositionInPast - v16->x) * (*&vPositionInPast - v16->x))
                 + ((*(&vPositionInPast + 1) - v16->y) * (*(&vPositionInPast + 1) - v16->y)))
               - pEntity->m_flHullRadius)
              - flSourceHullRadius);
}


// CDOTA_BaseNPC::IsPositionInRange  (line 8250, @0x00000000028f63d0, libserver.so)  // inlines: FastSqrt, Length2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CBaseEntity::GetAbsOrigin
// callers: CDOTABehaviorCommandMoveToPositionToCast::Update, CDOTA_BaseNPC_Creature::GetDesiredOffensiveAbility, CDOTA_Ability_Broodmother_SpinWeb::GetCastRange
bool __fastcall CDOTA_BaseNPC::IsPositionInRange(
        CDOTA_BaseNPC *const this,
        double a2,
        double a3,
        float a4,
        float flRange)
{
  const Vector *AbsOrigin; // rax

  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  return a4 >= fsqrt(
                 ((*&a2 - AbsOrigin->x) * (*&a2 - AbsOrigin->x))
               + ((*(&a2 + 1) - AbsOrigin->y) * (*(&a2 + 1) - AbsOrigin->y)));
}


// CDOTA_BaseNPC::GetSoundSet  (line 8255, @0x00000000028f52a0, libserver.so)  // inlines: String, ToCStr
// callers: CDOTA_Unit_Hero_Tiny::GetSoundSet, CDOTA_Unit_Hero_Sven::GetSoundSet, CDOTA_Unit_Hero_Alchemist::GetSoundSet, CDOTA_Unit_Hero_LoneDruid::GetSoundSet, CDOTA_Unit_Hero_Terrorblade::GetSoundSet, CDOTA_Unit_Hero_Winter_Wyvern::GetSoundSet
const char *__fastcall CDOTA_BaseNPC::GetSoundSet(CDOTA_BaseNPC *const this)
{
  const char *result; // rax

  result = "";
  if ( this->m_iszSoundSet.u.m_Id != 0 )
    return this->m_iszSoundSet.u.m_pAsString;
  return result;
}


// CDOTA_BaseNPC::GetSelectionGroup  (line 8260, @0x00000000028f52c0, libserver.so)  // inlines: String, ToCStr
const char *__fastcall CDOTA_BaseNPC::GetSelectionGroup(CDOTA_BaseNPC *const this)
{
  const char *result; // rax

  result = "";
  if ( this->m_iszSelectionGroup.u.m_Id != 0 )
    return this->m_iszSelectionGroup.u.m_pAsString;
  return result;
}


// CDOTA_BaseNPC::UpdateVisibility  (line 8266, @0x00000000029083a0, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, ClearFOWDirtyFlag, DOTAGameRules, GetBool, GetEHandle, GetEntryIndex, GetGameMode, GetGlobalDOTATeam, GetInt, GetModifier_Constant_Highest, GetSerialNumber, GetTeamMapping, GetTeamNumber, IsAddOnGame, IsListeningToEvent, ProvidesVision, RemoveSeenByTeamTag, Set, SetTarget, State_Get, TagAsSeenByTeam, operator=
// calls: CDOTA_ModifierManager::GetHighestPriority, CDOTA_BaseNPC::IsInvisibleTo, GetGlobalTeam, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_BaseNPC::UpdateNetworkedTeamVisibility, CBaseEntity::GetAbsOrigin, FoW_TeamNumberToFoWIndex, CDOTAFogOfWarSystem::GetFoW, CFoW::GetLocationInfo, _Unwind_Resume
void __fastcall CDOTA_BaseNPC::UpdateVisibility(CDOTA_BaseNPC *const this)
{
  int m_Value; // ecx
  int v3; // edx
  __int64 v4; // rsi
  int v5; // eax
  int v6; // r12d
  int v7; // r13d
  unsigned __int64 v8; // rax
  int v9; // ecx
  __int64 m_pEntity; // rdx
  int i; // r12d
  int v12; // r14d
  CTeam *GlobalTeam; // rax
  int v14; // eax
  __int64 v15; // rax
  CFoW *FoW; // rax
  unsigned int v17; // [rsp+0h] [rbp-D0h]
  const Vector *params; // [rsp+8h] [rbp-C8h]
  CModifierParams prms; // [rsp+10h] [rbp-C0h] BYREF

  m_Value = this->m_iTeamNum.m_Value;
  v3 = *&g_pGameRules[6].m_szQuestName[68];
  v4 = *&g_pGameRules[6].m_szQuestName[28];
  v5 = 16332;
  if ( v3 != 15 && v3 != 19 )
    v5 = 12;
  v6 = (1 << m_Value) & 0x3FCC | 0x12;
  v7 = v5 & ~(1 << m_Value);
  if ( v4 == 8 )
  {
    v6 |= v7;
    v7 = 0;
  }
  if ( m_Value == 5
    || ((v8 = this->m_nUnitState64.m_Value, dota_all_vision.m_pParent->m_Value.m_nValue != 0) || (v8 & 0x400) != 0)
    && ((v8 & 0x80u) == 0LL
     || CDOTA_ModifierManager::GetHighestPriority(&this->m_ModifierManager, modifierstate::MODIFIER_STATE_INVISIBLE, 0) != 3)
    && this->m_iViewerID >= 0 )
  {
    v6 |= v7;
    v7 = 0;
  }
  v9 = 0;
  m_pEntity = 1;
  do
  {
    if ( (v6 & (1 << v9)) != 0 )
      this->m_iTeamVisibilityBitmask |= 1 << v9;
    ++v9;
  }
  while ( v9 != 14 );
  if ( v7 == 0 )
    goto LABEL_35;
  for ( i = 0; i != 14; ++i )
  {
    while ( 1 )
    {
      v12 = 1 << i;
      if ( (v7 & (1 << i)) != 0 )
        break;
LABEL_18:
      if ( ++i == 14 )
        goto LABEL_22;
    }
    if ( !CDOTA_BaseNPC::IsInvisibleTo(this, i) )
    {
      params = CBaseEntity::GetAbsOrigin(this);
      v17 = FoW_TeamNumberToFoWIndex(i);
      FoW = CDOTAFogOfWarSystem::GetFoW(&g_DOTAFogOfWarSystem, 0);
      if ( (CFoW::GetLocationInfo(FoW, v17, params) & 0x4000) != 0 )
      {
        this->m_iTeamVisibilityBitmask |= v12;
        v7 &= ~v12;
        goto LABEL_18;
      }
    }
    this->m_iTeamVisibilityBitmask &= ~v12;
  }
LABEL_22:
  if ( v7 != 0 )
  {
    LOBYTE(i) = 0;
    do
    {
      while ( 1 )
      {
        if ( (v7 & (1 << i)) != 0 )
        {
          prms.bCraniumBasherTested = 0;
          prms.ability.m_Index = -1;
          prms.fDamage = 0.0;
          prms.fOriginalDamage = 0.0;
          prms.nActivity = -1;
          prms.bTooltip = 0;
          prms.nTooltipParam = 0;
          prms.bIgnoreInvis = 0;
          prms.bNoCooldown = 0;
          prms.bReincarnate = 0;
          prms.bDoNotConsume = 0;
          prms.fDistance = 0.0;
          prms.inflictor.m_Index = -1;
          prms.nDamageflags = 0;
          prms.nDamageCategory = 0;
          memset(&prms.pOrb, 0, 24);
          prms.bHeartRegenApplied = 0;
          prms.bDiffusalApplied = 0;
          prms.bChainLightningConsidered = 0;
          prms.bSuppressDamage = 0;
          prms.bRangedAttack = 0;
          prms.nPlayerids_stick = 0;
          prms.hattacker.m_Index = -1;
          prms.htarget.m_Index = -1;
          prms.hunit.m_Index = -1;
          GlobalTeam = GetGlobalTeam(i);
          if ( GlobalTeam == 0 )
            goto LABEL_40;
          m_pEntity = GlobalTeam->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v14 = (*(m_pEntity + 16) >> 15) - (*(m_pEntity + 48) & 1);
            v4 = 0x7FFF;
            if ( *(m_pEntity + 16) != -1 )
            {
              v4 = *(m_pEntity + 16);
              LOWORD(v4) = v4 & 0x7FFF;
            }
            LOWORD(prms.htarget.m_Index) = v4 | prms.htarget.m_Index & 0x8000;
            m_pEntity = (v14 << 15);
            prms.htarget.m_Index = m_pEntity | prms.htarget.m_Index & 0x7FFF;
          }
          else
          {
LABEL_40:
            prms.htarget.m_Index = -1;
          }
          v15 = this->m_ModifierManager.m_buffsForModifiers[158];
          if ( v15 != 0xFF
            && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v15].m_Size > 0
            && CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                 &this->m_ModifierManager,
                 modifierfunction::MODIFIER_PROPERTY_PROVIDES_FOW_POSITION,
                 &prms) == 1.0 )
          {
            break;
          }
        }
        if ( ++i == 14 )
          goto LABEL_35;
      }
      this->m_iTeamVisibilityBitmask |= 1 << i++;
    }
    while ( i != 14 );
  }
LABEL_35:
  (*(this->_vptr_IHandleEntity + 462))(this, v4, m_pEntity);
  CDOTA_BaseNPC::UpdateNetworkedTeamVisibility(this);
  this->m_bVisibilityDirtyFlag = 0;
}


// CDOTA_BaseNPC::ModifyHealth  (line 8368, @0x0000000002908d60, libserver.so)  // inlines: Vector
// calls: CBaseEntity::GetLifeState, CBaseEntity::GetHealth, CDOTABaseAbility::GetCaster, CDOTA_CombatLog::AddHealthEvent, CTakeDamageInfo::CTakeDamageInfo, CTakeDamageInfo::~CTakeDamageInfo, _Unwind_Resume
// callers: PerformDOTALoadGame, CDOTA_Modifier_GraniteGolem_HPAura_Bonus::OnRemoved, CDOTAPlayer::CheatHeroRefresh, CDOTA_Tutorial::ParseLessonKeys, HeroRefresh, OnCreateIllusionsSpawnCompletion, CDOTA_BaseNPC::Script_RespawnUnit, CDOTA_BaseNPC::Script_ModifyHealth, CDOTA_BaseNPC::CalculateGenericBonuses, CDOTA_ScriptedSpawner::InputSetHealth, CDOTA_BaseNPC_Creature::CreatureLevelUp, CDOTA_BaseNPC_Hero::CalculateStatBonus (66 total)
void __fastcall CDOTA_BaseNPC::ModifyHealth(
        CDOTA_BaseNPC *const this,
        int iDesiredHealthValue,
        CDOTABaseAbility *pAbility,
        bool bLethal,
        int iAdditionalFlags)
{
  int v9; // edx
  int v10; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v12; // rdx
  vec_t v13; // xmm1_4
  int pAttacker; // [rsp+20h] [rbp-F0h]
  CDOTA_BaseNPC *pAttackera; // [rsp+20h] [rbp-F0h]
  Vector damageForce; // [rsp+30h] [rbp-E0h] BYREF
  Vector damagePosition; // [rsp+40h] [rbp-D0h] BYREF
  CTakeDamageInfo dmg; // [rsp+50h] [rbp-C0h] BYREF

  if ( CBaseEntity::GetLifeState(this) == LifeState_t::LIFE_ALIVE )
  {
    v9 = 1;
    if ( iDesiredHealthValue > 0 )
      v9 = iDesiredHealthValue;
    pAttacker = v9;
    v10 = CBaseEntity::GetHealth(this) - v9;
    if ( !bLethal )
      iDesiredHealthValue = pAttacker;
    (*(this->_vptr_IHandleEntity + 157))(this, iDesiredHealthValue);
    if ( pAbility != 0 )
    {
      Caster = CDOTABaseAbility::GetCaster(pAbility);
      CDOTA_CombatLog::AddHealthEvent(g_pDOTACombatLog, 0, this, Caster, pAbility, v10, 0, 0, 0);
    }
    if ( CBaseEntity::GetHealth(this) == 0 && bLethal )
    {
      v12 = 0;
      if ( pAbility != 0 )
        v12 = CDOTABaseAbility::GetCaster(pAbility);
      pAttackera = v12;
      *&damagePosition.x = (*(this->_vptr_IHandleEntity + 62))(this);
      damagePosition.z = v13;
      damageForce.x = 0.0;
      damageForce.y = 0.0;
      damageForce.z = 1.0;
      CTakeDamageInfo::CTakeDamageInfo(
        &dmg,
        pAbility,
        pAttackera,
        &damageForce,
        &damagePosition,
        v10,
        iAdditionalFlags,
        0,
        0);
      (*(this->_vptr_IHandleEntity + 92))(this, &dmg);
      CTakeDamageInfo::~CTakeDamageInfo(&dmg);
    }
  }
}


// CDOTA_BaseNPC::Script_ModifyHealth  (line 8404, @0x0000000002909070, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTAAbility, ToEnt
// calls: GetScriptDesc<CEntityInstance>, __dynamic_cast, CDOTA_BaseNPC::ModifyHealth
void __fastcall CDOTA_BaseNPC::Script_ModifyHealth(
        CDOTA_BaseNPC *const this,
        int iDesiredHealthValue,
        HSCRIPT hAbility,
        bool bLethal,
        int iAdditionalFlags)
{
  __int64 (__fastcall *v8)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax
  const void *v10; // rax
  CDOTABaseAbility *v11; // rax
  CDOTABaseAbility *v12; // rdx
  int iAdditionalFlagsa; // [rsp+4h] [rbp-3Ch]

  if ( hAbility != 0
    && (iAdditionalFlagsa = iAdditionalFlags,
        v8 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        v10 = v8(g_pScriptVM, hAbility, Script),
        iAdditionalFlags = iAdditionalFlagsa,
        v10 != 0) )
  {
    v11 = __dynamic_cast(v10, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
    iAdditionalFlags = iAdditionalFlagsa;
    v12 = v11;
  }
  else
  {
    v12 = 0;
  }
  CDOTA_BaseNPC::ModifyHealth(this, iDesiredHealthValue, v12, bLethal, iAdditionalFlags);
}


// CDOTA_BaseNPC::OnSaveState  (line 8412, @0x00000000029152d0, libserver.so)  // inlines: CUtlSymbolLarge, FStrEq, GetClassNameAsCStr, GetClassname, GetEntityName, GetTeamNumber, String, _V_strcmp
// calls: KeyValues::SetName, KeyValues::SetString, CBaseEntity::GetLocalOrigin, CFmtStrN<256, false>::CFmtStrN, CBaseEntity::GetLocalAngles, CBaseEntity::GetHealth, DOTA_SaveEntityDataDesc, KeyValues::CreateNewKey, CDOTA_BaseNPC::GetAbilityByIndex, CDOTA_UnitInventory::GetItemInSlot, KeyValues::SetInt, __stack_chk_fail
// callers: CDOTA_BaseNPC::OnSaveState
// strings: "npc_dota_thinker", "m_iName", "m_vecOrigin", "m_iHealth", "m_iTeamNum", "bkbcharges"
bool __fastcall CDOTA_BaseNPC::OnSaveState(CDOTA_BaseNPC *const this, KeyValues *pKey)
{
  const char *m_pAsString; // rsi
  bool result; // al
  const char *v5; // r8
  const char *v6; // rdx
  const Vector *LocalOrigin; // rax
  const QAngle *LocalAngles; // rax
  int Health; // eax
  char v10; // r13
  KeyValues *NewKey; // rax
  KeyValues *v12; // r14
  int v13; // ebx
  CDOTABaseAbility *AbilityByIndex; // r15
  KeyValues *v15; // rax
  KeyValues *v16; // rax
  int v17; // ebx
  CDOTA_Item *ItemInSlot; // r15
  KeyValues *v19; // rax
  double pInventoryKeya; // [rsp+10h] [rbp-160h]
  double pInventoryKeyb; // [rsp+10h] [rbp-160h]
  KeyValues *pInventoryKey; // [rsp+10h] [rbp-160h]
  double pCurrentItemKey; // [rsp+18h] [rbp-158h]
  double pCurrentItemKeya; // [rsp+18h] [rbp-158h]
  KeyValues *pCurrentItemKeyb; // [rsp+18h] [rbp-158h]
  CFmtStrN<256,false> v27; // [rsp+20h] [rbp-150h] BYREF
  unsigned __int64 v28; // [rsp+138h] [rbp-38h]

  v28 = __readfsqword(0x28u);
  m_pAsString = this->m_pEntity->m_designerName.u.m_pAsString;
  if ( m_pAsString != 0 )
  {
    result = 0;
    v5 = this->m_pEntity->m_designerName.u.m_pAsString;
    if ( m_pAsString == "npc_dota_thinker" || strcmp(m_pAsString, "npc_dota_thinker") == 0 )
      return result;
  }
  else
  {
    v5 = "";
  }
  KeyValues::SetName(pKey, v5);
  v6 = "";
  if ( this->m_pEntity->m_name.u.m_Id != 0 )
    v6 = this->m_pEntity->m_name.u.m_pAsString;
  KeyValues::SetString(pKey, "m_iName", v6);
  pInventoryKeya = CBaseEntity::GetLocalOrigin(this)->z;
  pCurrentItemKey = CBaseEntity::GetLocalOrigin(this)->y;
  LocalOrigin = CBaseEntity::GetLocalOrigin(this);
  CFmtStrN<256,false>::CFmtStrN(&v27, "%f %f %f", LocalOrigin->x, pCurrentItemKey, pInventoryKeya);
  KeyValues::SetString(pKey, "m_vecOrigin", v27.m_szBuf);
  pInventoryKeyb = CBaseEntity::GetLocalAngles(this)->z;
  pCurrentItemKeya = CBaseEntity::GetLocalAngles(this)->y;
  LocalAngles = CBaseEntity::GetLocalAngles(this);
  CFmtStrN<256,false>::CFmtStrN(&v27, "%f %f %f", LocalAngles->x, pCurrentItemKeya, pInventoryKeyb);
  KeyValues::SetString(pKey, "m_angRotation", v27.m_szBuf);
  Health = CBaseEntity::GetHealth(this);
  CFmtStrN<256,false>::CFmtStrN(&v27, "%d", Health);
  KeyValues::SetString(pKey, "m_iHealth", v27.m_szBuf);
  CFmtStrN<256,false>::CFmtStrN(&v27, "%d", this->m_iTeamNum.m_Value);
  v10 = 1;
  KeyValues::SetString(pKey, "m_iTeamNum", v27.m_szBuf);
  DOTA_SaveEntityDataDesc(this, pKey);
  NewKey = KeyValues::CreateNewKey(pKey);
  v12 = NewKey;
  if ( NewKey != 0 )
  {
    v13 = 0;
    KeyValues::SetName(NewKey, "Abilities");
    do
    {
      AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(this, v13);
      if ( AbilityByIndex != 0 )
      {
        v15 = KeyValues::CreateNewKey(v12);
        if ( v15 != 0 )
          v10 = (*(AbilityByIndex->_vptr_IHandleEntity + 248))(AbilityByIndex, v15);
      }
      ++v13;
    }
    while ( v13 != 24 );
  }
  v16 = KeyValues::CreateNewKey(pKey);
  pInventoryKey = v16;
  if ( v16 != 0 )
  {
    v17 = 0;
    KeyValues::SetName(v16, "Inventory");
    do
    {
      ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(&this->m_Inventory, v17);
      if ( ItemInSlot != 0 )
      {
        v19 = KeyValues::CreateNewKey(pInventoryKey);
        if ( v19 != 0 )
        {
          pCurrentItemKeyb = v19;
          KeyValues::SetInt(v19, "slot", v17);
          v10 = (*(ItemInSlot->_vptr_IHandleEntity + 248))(ItemInSlot, pCurrentItemKeyb);
        }
      }
      ++v17;
    }
    while ( v17 != 17 );
  }
  KeyValues::SetInt(pKey, "bkbcharges", this->m_iBKBChargesUsed.m_Value);
  return v10;
}


// CDOTA_BaseNPC::OnSaveState  (line 8412, @0x0000000002915610, libserver.so)  // inlines: GetModifier_Constant_First, IsListeningToEvent
// calls: CDOTA_BaseNPC::OnSaveState, CDOTA_ModifierManager::GetModifier_Constant_First_Internal
// callers: CDOTA_BaseNPC_Creep_Neutral::OnSaveState, CDOTA_BaseNPC_Creep_Lane::OnSaveState, CDOTA_BaseNPC_Hero::OnSaveState, CDOTA_Unit_Courier::OnSaveState, CDOTA_NPC_Observer_Ward::OnSaveState
bool __fastcall CDOTA_BaseNPC::OnSaveState(CDOTA_BaseNPC *const this, KeyValues *pKey)
{
  __int64 v5; // rax

  return ((*(this->_vptr_IHandleEntity + 468))(this) != 0
       || (v5 = this->m_ModifierManager.m_buffsForModifiers[157]) == 0xFF
       || this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v5].m_Size <= 0
       || CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
            &this->m_ModifierManager,
            modifierfunction::MODIFIER_PROPERTY_LIFETIME_FRACTION,
            &CModifierParams::s_Default) == -1.0)
      && CDOTA_BaseNPC::OnSaveState(this, pKey);
}


// CDOTA_BaseNPC::OnLoadState  (line 8487, @0x0000000002917870, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FStrEq, GetAbilityName, NetworkStateChanged, Purge, QAngle, RemoveAll, RemoveModifierByName, Set, SetBKBChargesUsed, SetEntityName, Vector, _V_strcmp, operator=<int>, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: DOTA_LoadEntityDataDesc, KeyValues::GetString, CBaseEntity::GetLocalOrigin, CBaseEntity::SetAbsOrigin, CBaseEntity::GetLocalAngles, CBaseEntity::SetAbsAngles, CDOTABody::StartAnimation, CBaseEntity::GetHealth, KeyValues::FindKey, KeyValues::GetFirstTrueSubKey, CDOTA_BaseNPC::GetAbilityByIndex, KeyValues::GetName (28 total)
// callers: CDOTA_BaseNPC_Creep_Lane::OnLoadState, CDOTA_BaseNPC_Hero::OnLoadState, CDOTA_Unit_Courier::OnLoadState, CDOTA_NPC_Observer_Ward::OnLoadState
// strings: "m_iName", "0 0 0", "m_vecOrigin", "m_iHealth", "m_iTeamNum", "<NoAbilityName>" (8 total)
bool __fastcall CDOTA_BaseNPC::OnLoadState(CDOTA_BaseNPC *const this, KeyValues *pKV)
{
  const char *String; // r14
  const char *v5; // r13
  const char *v6; // rbx
  const char *v7; // r15
  const char *v8; // rax
  const char *v9; // rdx
  const Vector *LocalOrigin; // rax
  const QAngle *LocalAngles; // rax
  CDOTABody *v12; // rax
  KeyValues *Key; // rax
  KeyValues *v14; // r14
  int v15; // r13d
  KeyValues *i; // rbx
  CDOTABaseAbility *AbilityByIndex; // r15
  const char *Name; // rax
  DOTAAbilityData_t *m_pAbilityData; // rdx
  const char *v20; // rdi
  const char *m_pszAbilityName; // rdx
  const char *v22; // rax
  CDOTABaseAbility *Ability; // rax
  KeyValues *v24; // rdi
  int v25; // r14d
  KeyValues *j; // r13
  CDOTABaseAbility *v27; // rax
  CDOTABaseAbility *v28; // rbx
  KeyValues *v29; // rax
  KeyValues *k; // rbx
  int (**vptr_IHandleEntity)(...); // rax
  int v32; // r13d
  const char *v33; // rax
  int Int; // eax
  int v35; // ebx
  void (__fastcall *v37)(CDOTA_BaseNPC *const, _QWORD); // rbx
  unsigned int v38; // eax
  void (__fastcall *v39)(CDOTA_BaseNPC *const, _QWORD); // rbx
  unsigned int v40; // eax
  const char *pTeamNum; // [rsp+0h] [rbp-60h]
  const char *pTeamNuma; // [rsp+0h] [rbp-60h]
  const char *pTeamNumb; // [rsp+0h] [rbp-60h]
  const char *pTeamNumc; // [rsp+0h] [rbp-60h]
  KeyValues *pKVa; // [rsp+8h] [rbp-58h]
  CUtlVector<CDOTA_Item*,CUtlMemory<CDOTA_Item*,int> > resultingItems; // [rsp+10h] [rbp-50h] BYREF

  this->m_bMidLoading = 1;
  DOTA_LoadEntityDataDesc(this, pKV);
  String = KeyValues::GetString(pKV, "m_iName", "", 0, 0);
  v5 = KeyValues::GetString(pKV, "m_vecOrigin", "0 0 0", 0, 0);
  pKVa = pKV;
  v6 = KeyValues::GetString(pKV, "m_angRotation", "0 0 0", 0, 0);
  v7 = KeyValues::GetString(pKV, "m_iHealth", "", 0, 0);
  v8 = KeyValues::GetString(pKVa, "m_iTeamNum", "", 0, 0);
  v9 = v8;
  if ( *String != 0 )
  {
    pTeamNum = v8;
    CEntityIdentity::SetEntityName(this->m_pEntity, String);
    v9 = pTeamNum;
    if ( *v5 == 0 )
    {
LABEL_3:
      if ( *v6 == 0 )
        goto LABEL_4;
      goto LABEL_36;
    }
  }
  else if ( *v5 == 0 )
  {
    goto LABEL_3;
  }
  pTeamNuma = v9;
  resultingItems.m_Size = 0;
  *(&resultingItems.m_Size + 1) = 0;
  LODWORD(resultingItems.m_Memory.m_pMemory) = 0;
  V_StringToVector(&resultingItems, v5);
  CBaseEntity::SetLocalOrigin(this, &resultingItems);
  v9 = pTeamNuma;
  if ( *v6 == 0 )
  {
LABEL_4:
    if ( *v7 == 0 )
      goto LABEL_5;
LABEL_37:
    pTeamNumc = v9;
    v37 = *(this->_vptr_IHandleEntity + 157);
    v38 = V_atoi(v7);
    v37(this, v38);
    v9 = pTeamNumc;
    if ( *pTeamNumc == 0 )
      goto LABEL_6;
    goto LABEL_38;
  }
LABEL_36:
  pTeamNumb = v9;
  resultingItems.m_Size = 0;
  *(&resultingItems.m_Size + 1) = 0;
  LODWORD(resultingItems.m_Memory.m_pMemory) = 0;
  V_StringToVector(&resultingItems, v6);
  CBaseEntity::SetLocalAngles(this, &resultingItems);
  v9 = pTeamNumb;
  if ( *v7 != 0 )
    goto LABEL_37;
LABEL_5:
  if ( *v9 != 0 )
  {
LABEL_38:
    v39 = *(this->_vptr_IHandleEntity + 70);
    v40 = V_atoi(v9);
    v39(this, v40);
  }
LABEL_6:
  LocalOrigin = CBaseEntity::GetLocalOrigin(this);
  CBaseEntity::SetAbsOrigin(this, LocalOrigin);
  LocalAngles = CBaseEntity::GetLocalAngles(this);
  CBaseEntity::SetAbsAngles(this, LocalAngles);
  v12 = (*(this->_vptr_IHandleEntity + 377))(this);
  CDOTABody::StartAnimation(v12, 0x5DCu, 1, 1.0);
  if ( CBaseEntity::GetHealth(this) <= 0 )
    (*(this->_vptr_IHandleEntity + 387))(this);
  Key = KeyValues::FindKey(pKVa, "Abilities", 0);
  v14 = Key;
  if ( Key != 0 )
  {
    v15 = 0;
    for ( i = KeyValues::GetFirstTrueSubKey(Key); i != 0; i = KeyValues::GetNextTrueSubKey(i) )
    {
      AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(this, v15);
      if ( AbilityByIndex == 0 )
        goto LABEL_16;
      Name = KeyValues::GetName(i);
      m_pAbilityData = AbilityByIndex->m_pAbilityData;
      v20 = "<NoAbilityName>";
      if ( m_pAbilityData != 0 )
      {
        m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
        if ( m_pszAbilityName != 0 )
          v20 = m_pszAbilityName;
      }
      if ( Name != v20 && strcmp(v20, Name) != 0 )
      {
LABEL_16:
        v22 = KeyValues::GetName(i);
        Ability = DOTA_CreateAbility(v22, this);
        CDOTA_BaseNPC::SetAbilityByIndex(this, Ability, v15);
      }
      ++v15;
    }
    v24 = v14;
    v25 = 0;
    for ( j = KeyValues::GetFirstTrueSubKey(v24); j != 0; j = KeyValues::GetNextTrueSubKey(j) )
    {
      v27 = CDOTA_BaseNPC::GetAbilityByIndex(this, v25);
      v28 = v27;
      if ( v27 != 0 )
      {
        ++v25;
        (*(v27->_vptr_IHandleEntity + 249))(v27, j);
        (*(v28->_vptr_IHandleEntity + 297))(v28);
      }
    }
  }
  v29 = KeyValues::FindKey(pKVa, "Inventory", 0);
  if ( v29 != 0 )
  {
    for ( k = KeyValues::GetFirstTrueSubKey(v29); k != 0; k = KeyValues::GetNextTrueSubKey(k) )
    {
      while ( 1 )
      {
        vptr_IHandleEntity = this->_vptr_IHandleEntity;
        resultingItems.m_Size = 0;
        resultingItems.m_Memory.m_pMemory = 0;
        resultingItems.m_Memory.m_nAllocationCount = 0;
        resultingItems.m_Memory.m_nGrowSize = 0;
        v32 = vptr_IHandleEntity[414](this);
        v33 = KeyValues::GetName(k);
        CDOTA_BaseNPC::AddItem(this, v33, 3, v32, &resultingItems);
        if ( resultingItems.m_Size > 0 )
        {
          Int = KeyValues::GetInt(k, "slot", 0);
          CDOTA_BaseNPC::MoveItem(this, *resultingItems.m_Memory.m_pMemory, Int);
          (*(**resultingItems.m_Memory.m_pMemory + 1992LL))(*resultingItems.m_Memory.m_pMemory, k);
        }
        resultingItems.m_Size = 0;
        if ( (resultingItems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<CDOTA_Item *,int>::Purge(&resultingItems.m_Memory);
          if ( (resultingItems.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            break;
        }
        k = KeyValues::GetNextTrueSubKey(k);
        if ( k == 0 )
          goto LABEL_31;
      }
      CUtlMemory<CDOTA_Item *,int>::Purge(&resultingItems.m_Memory);
    }
  }
LABEL_31:
  CDOTA_ModifierManager::RemoveModifierByName(&this->m_ModifierManager, "modifier_fountain_aura_buff");
  this->m_bMidLoading = 0;
  v35 = KeyValues::GetInt(pKVa, "bkbcharges", 0);
  if ( v35 != this->m_iBKBChargesUsed.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2176, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iBKBChargesUsed.m_Value = v35;
  }
  return 1;
}


// CDOTA_BaseNPC::OnInventoryContentsChanged  (line 8613, @0x00000000028f5a10, libserver.so)
// calls: CDOTA_BaseNPC::GetAbilityByIndex
void __fastcall CDOTA_BaseNPC::OnInventoryContentsChanged(CDOTA_BaseNPC *const this)
{
  int i; // ebx
  CDOTABaseAbility *AbilityByIndex; // rax

  for ( i = 0; i != 24; ++i )
  {
    AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(this, i);
    if ( AbilityByIndex != 0 )
      (*(AbilityByIndex->_vptr_IHandleEntity + 283))(AbilityByIndex);
  }
}


// CDOTA_BaseNPC::OnItemEquipped  (line 8626, @0x00000000028f5a50, libserver.so)
// calls: CDOTA_BaseNPC::GetAbilityByIndex
// callers: CDOTA_Unit_Hero_Morphling::OnItemEquipped, CDOTA_Unit_Hero_Zuus::OnItemEquipped, CDOTA_Unit_Hero_Alchemist::OnItemEquipped, CDOTA_Unit_Hero_Life_Stealer::OnItemEquipped, CDOTA_Unit_Hero_EarthSpirit::OnItemEquipped, CDOTA_Unit_Hero_Ogre_Magi::OnItemEquipped, CDOTA_Unit_Hero_Nyx_Assassin::OnItemEquipped, CDOTA_Unit_Hero_Tusk::OnItemEquipped, CDOTA_Unit_Hero_Shredder::OnItemEquipped, CDOTA_Unit_Hero_Treant::OnItemEquipped
void __fastcall CDOTA_BaseNPC::OnItemEquipped(CDOTA_BaseNPC *const this, CDOTA_Item *pItem)
{
  int i; // ebx
  CDOTABaseAbility *AbilityByIndex; // rax

  for ( i = 0; i != 24; ++i )
  {
    AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(this, i);
    if ( AbilityByIndex != 0 )
      (*(AbilityByIndex->_vptr_IHandleEntity + 284))(AbilityByIndex, pItem);
  }
}


// CDOTA_BossAttackableTrigger::~CDOTA_BossAttackableTrigger  (line 8639, @0x00000000029784f0, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_BossAttackableTrigger::~CDOTA_BossAttackableTrigger(CDOTA_BossAttackableTrigger *const this)
{
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *p_m_hTouchingEntities; // rdi

  p_m_hTouchingEntities = &this->m_hTouchingEntities;
  *&p_m_hTouchingEntities[-61].m_Memory.m_nAllocationCount = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(p_m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CDOTA_BossAttackableTrigger::~CDOTA_BossAttackableTrigger  (line 8639, @0x00000000029786f0, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CDOTA_BossAttackableTrigger, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_BossAttackableTrigger::~CDOTA_BossAttackableTrigger(CDOTA_BossAttackableTrigger *const this)
{
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *p_m_hTouchingEntities; // rdi

  p_m_hTouchingEntities = &this->m_hTouchingEntities;
  *&p_m_hTouchingEntities[-61].m_Memory.m_nAllocationCount = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(p_m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BossAttackableTrigger::Schema_DynamicBinding  (line 8641, @0x0000000002967550, libserver.so)
// globals: CDOTA_BossAttackableTrigger::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BossAttackableTrigger::Schema_DynamicBinding(
        const CDOTA_BossAttackableTrigger *const this)
{
  return CDOTA_BossAttackableTrigger::s_pSchemaBinding;
}


// CDOTA_BossAttackableTrigger::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 8641, @0x0000000002967560, libserver.so)
// globals: CDOTA_BossAttackableTrigger::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BossAttackableTrigger::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BossAttackableTrigger::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BossAttackableTrigger::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BossAttackableTrigger::CEntityInstanceEntityClass::DestructInstance  (line 8641, @0x0000000002967570, libserver.so)  // inlines: Destruct<CDOTA_BossAttackableTrigger>
void __fastcall CDOTA_BossAttackableTrigger::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BossAttackableTrigger::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BossAttackableTrigger::CEntityInstanceEntityClass::FreeInstance  (line 8641, @0x0000000002967590, libserver.so)
void __fastcall CDOTA_BossAttackableTrigger::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BossAttackableTrigger::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BossAttackableTrigger::CEntityInstanceEntityClass::CanAllocate  (line 8641, @0x00000000029675b0, libserver.so)
bool __fastcall CDOTA_BossAttackableTrigger::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BossAttackableTrigger::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BossAttackableTrigger::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 8641, @0x00000000029675c0, libserver.so)
// globals: CDOTA_BossAttackableTrigger::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_BossAttackableTrigger::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BossAttackableTrigger::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BossAttackableTrigger::s_pSchemaBinding;
}


// CDOTA_BossAttackableTrigger::CEntityInstanceEntityClass::AllocateInstance  (line 8641, @0x000000000296ac90, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BossAttackableTrigger::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BossAttackableTrigger::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1480);
  memset(v1, 0, 0x5C8u);
  return v1;
}


// CDOTA_BossAttackableTrigger::CEntityInstanceEntityClass::ConstructInstance  (line 8641, @0x000000000296b220, libserver.so)  // inlines: CDOTA_BossAttackableTrigger, Construct<CDOTA_BossAttackableTrigger>
// calls: CBaseTrigger::CBaseTrigger
CEntityInstance *__fastcall CDOTA_BossAttackableTrigger::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BossAttackableTrigger::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseTrigger::CBaseTrigger(p);
    *p = &off_42DA670;
  }
  return p;
}


// CDOTA_BossAttackableTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 8641, @0x000000000296f920, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BossAttackableTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BossAttackableTrigger::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BossAttackableTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 8641, @0x000000000296f940, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BossAttackableTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BossAttackableTrigger::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BossAttackableTrigger::GetEntityClassInternal  (line 8641, @0x000000000297fcf0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseTrigger::InitScriptDesc, CBaseTrigger::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "trigger_boss_attackable", "CDOTA_BossAttackableTrigger"
// globals: `guard variable for'CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass, CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_BossAttackableTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BossAttackableTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_BossAttackableTriggerClassInfo, CDOTA_BossAttackableTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_BossAttackableTriggerClassInfo
CEntityClass *__cdecl CDOTA_BossAttackableTrigger::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass) != 0 )
  {
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_designerName.u.m_Id = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass._vptr_CEntityClass = off_3F79390;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_AllHelpers.m_Size = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_classInputs.m_Size = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_classOutputs.m_Size = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_requiredEHandle.m_Index = -1;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_hNetworkSerializer = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_pBaseClassInfo = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_pClassInfo = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_flags = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_nAllHelpersFlags = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_pScriptClassDesc = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_pInputs = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_nInputCount = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_pOutputs = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_nOutputCount = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_pGameClass = 0;
    CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass._vptr_CEntityClass = off_42DA5F0;
    __cxa_guard_release(&`guard variable for'CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass);
    __cxa_atexit(
      CDOTA_BossAttackableTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BossAttackableTriggerClass != 0 )
    return &CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass;
  if ( `guard variable for'CDOTA_BossAttackableTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_BossAttackableTriggerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BossAttackableTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_BossAttackableTriggerClassInfo) != 0 )
  {
    EntityClassInfo = CBaseTrigger::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BossAttackableTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_BossAttackableTriggerClassInfo,
      "CDOTA_BossAttackableTrigger",
      "trigger_boss_attackable",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BossAttackableTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_BossAttackableTriggerClassInfo);
  }
  CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_pClassInfo = &CDOTA_BossAttackableTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_BossAttackableTriggerClassInfo;
  CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_pBaseClassInfo = CDOTA_BossAttackableTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_BossAttackableTriggerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BossAttackableTriggerClass = &CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass;
  CDOTA_BossAttackableTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_BossAttackableTriggerClassInfo.m_pClass = &CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass;
  CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass.m_pScriptClassDesc = CBaseTrigger::InitScriptDesc();
  g_pEntityCDOTA_BossAttackableTriggerClass->m_pComponentOverrides = 0;
  return &CDOTA_BossAttackableTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_BossAttackableTriggerClass;
}


// CDOTA_BossAttackableTrigger::Spawn  (line 8650, @0x00000000028f6610, libserver.so)
// calls: CBaseTrigger::Spawn, CBaseTrigger::InitTrigger
void __fastcall CDOTA_BossAttackableTrigger::Spawn(
        CDOTA_BossAttackableTrigger *const this,
        const CEntityKeyValues *pKeyValues)
{
  CBaseTrigger::Spawn(this, pKeyValues);
  CBaseTrigger::InitTrigger(this, pKeyValues);
}


// CDOTA_BaseNPC::CanAttackBoss  (line 8658, @0x0000000002909f60, libserver.so)
// calls: CBaseTrigger::IsTouching, CGameEntitySystem::FindEntityByClassname
// callers: CDOTA_BotMode_Roshan::Think, CDOTABehaviorCommandMoveToTargetToCast::Update, CDOTABehaviorCommandMoveToTargetToAttack::Update, CDOTA_BaseNPC::CanAutoAttackTarget
// strings: "trigger_boss_attackable"
bool __fastcall CDOTA_BaseNPC::CanAttackBoss(CDOTA_BaseNPC *const this)
{
  CBaseEntity *v2; // rbx
  bool result; // al
  CBaseTrigger *EntityByClassname; // rax

  v2 = 0;
  while ( 1 )
  {
    EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v2, "trigger_boss_attackable");
    v2 = EntityByClassname;
    if ( EntityByClassname == 0 )
      break;
    result = CBaseTrigger::IsTouching(EntityByClassname, this);
    if ( result )
      return result;
  }
  return 0;
}


// CDOTA_BaseNPC::EquipWearable  (line 8674, @0x00000000029185c0, libserver.so)
// calls: CBaseCombatCharacter::EquipWearable, CDOTA_BaseNPC::CheckIfActivityModifiersDirty
void __fastcall CDOTA_BaseNPC::EquipWearable(CDOTA_BaseNPC *const this, CEconWearable *pItem)
{
  CBaseCombatCharacter::EquipWearable(this, pItem);
  CDOTA_BaseNPC::CheckIfActivityModifiersDirty(this);
}


// CDOTA_BaseNPC::SetWaitingToSpawn  (line 8683, @0x00000000028fa670, libserver.so)  // inlines: AddObstructionProperty, MarkPVSInformationDirty, NetworkStateChanged, RemoveEffects, RemoveObstructionProperty, Set, operator=<bool>
// calls: CBaseEntity::AddEffects, CBaseEntity::DispatchUpdateTransmitState
void __fastcall CDOTA_BaseNPC::SetWaitingToSpawn(CDOTA_BaseNPC *const this, bool bWaitingToSpawn)
{
  ObstructionRecord_t *m_pObstructionRecord; // rdx
  int m_nObstructionProperties; // eax
  int v6; // eax
  unsigned int v7; // eax

  if ( this->m_bIsWaitingToSpawn.m_Value != bWaitingToSpawn )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 3408, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bIsWaitingToSpawn.m_Value = bWaitingToSpawn;
  }
  m_pObstructionRecord = this->m_pObstructionRecord;
  m_nObstructionProperties = this->m_nObstructionProperties;
  if ( bWaitingToSpawn )
  {
    v6 = m_nObstructionProperties | 0x40;
    this->m_nObstructionProperties = v6;
    if ( m_pObstructionRecord != 0 )
      m_pObstructionRecord->m_ObjectProperties = v6;
    CBaseEntity::AddEffects(this, 32);
    (*(this->m_Collision._vptr_ICollideable + 16))(&this->m_Collision);
  }
  else
  {
    v7 = m_nObstructionProperties & 0xFFFFFFBF;
    this->m_nObstructionProperties = v7;
    if ( m_pObstructionRecord != 0 )
      m_pObstructionRecord->m_ObjectProperties = v7;
    (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & 0xFFFFFFDF);
    this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
    CBaseEntity::DispatchUpdateTransmitState(this);
    (*(this->m_Collision._vptr_ICollideable + 15))(&this->m_Collision);
  }
}


// CDOTA_BaseNPC::CheckForCollisionsWithNPCs  (line 8703, @0x000000000292cbc0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, CVProfScope, ConvertToExternalMemory, CopyConstruct<CHandle<CDOTA_BaseNPC> >, CopyConstruct<IntersectionRecord_t>, Element, EnsureCapacity, FastSqrt, Get, GetBool, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, GetSerialNumber, GrowMemory, IndexToIdentity, IsEnabled, IsValid, Length2D, LookupEntity, Purge, Purge_FixedGrowable, RemoveAll, Set, Square<float>, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CDOTA_BaseNPC*, operator CEntityInstance*, operator-, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable, ~CVProfScope
// calls: CBaseEntity::GetAbsOrigin, CUtlVectorBase<CHandle<CDOTA_BaseNPC>, CUtlMemory<CHandle<CDOTA_BaseNPC>, int> >::RemoveAll, CGridNav::PrepareObstructionManager, CGridNav::CheckForCollisions, CUtlMemory<CHandle<CDOTA_BaseNPC>, int>::Grow, CVProfile::ExitScope, CVProfile::EnterScope, C2DGridObstructionManager::GetCollisionPadding, CUtlMemory<IntersectionRecord_t, int>::Purge, CUtlMemory<IntersectionRecord_t, int>::EnsureCapacity, CUtlMemory<IntersectionRecord_t, int>::Grow, __stack_chk_fail (14 total)
// callers: CGridNav::GetNPCsInRange, FindUnitsInRadius, CDOTALocomotor::UpdateStandardMovement
// strings: "CDOTA_BaseNPC::CheckForCollisionsWithNPCs"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_BaseNPC::CheckForCollisionsWithNPCs(
        CDOTA_BaseNPC *const this,
        const Vector *const p,
        CollisionResultList_t *resultList,
        bool bCanGrowCache,
        bool bIgnoreSelf)
{
  int m_enabled; // edi
  CEntityIdentity *m_pEntity; // rdx
  __int16 v11; // cx
  int tickcount; // r13d
  ObstructionRelationshipClass_t m_SearcherClass; // r14d
  const Vector *AbsOrigin; // rax
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  float m_flRadius; // xmm1_4
  const Vector *v21; // rax
  __int64 v22; // r14
  int i; // r13d
  EHANDLE *v24; // rax
  CObstructionObject *m_pObstructionObject; // rdi
  __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // eax
  __int16 v29; // cx
  __int64 m_Size; // r12
  int v31; // eax
  uint32 v33; // eax
  int v34; // r12d
  __int64 v35; // r14
  unsigned __int64 j; // r12
  CHandle<CDOTA_BaseNPC> *v37; // rdx
  uint32 m_Index; // eax
  __int16 v39; // cx
  CEntityIdentity *v40; // rdx
  CEntityIdentity *v41; // rdx
  CDOTA_BaseNPC *m_pInstance; // rax
  ObstructionRecord_t *m_pObstructionRecord; // r13
  float CollisionPadding; // xmm0_4
  int v45; // eax
  IntersectionRecord_t *v46; // rax
  int v47; // [rsp+0h] [rbp-230h]
  float flRelaitonshipRadiusAdjustment; // [rsp+14h] [rbp-21Ch]
  ObstructionRelationshipClass_t searcherRelationshipClass; // [rsp+18h] [rbp-218h]
  float flSearcherRadius; // [rsp+1Ch] [rbp-214h]
  bool VProf_8707; // [rsp+23h] [rbp-20Dh]
  int nCurAllMask; // [rsp+24h] [rbp-20Ch]
  char v55; // [rsp+38h] [rbp-1F8h]
  int nCurNoneMask; // [rsp+3Ch] [rbp-1F4h]
  EHANDLE ignoreEntity; // [rsp+40h] [rbp-1F0h]
  EHANDLE ignoreHandle; // [rsp+50h] [rbp-1E0h] BYREF
  CollisionResultList_t cacheNPCs; // [rsp+60h] [rbp-1D0h] BYREF
  unsigned __int64 v60; // [rsp+1F8h] [rbp-38h]

  v60 = __readfsqword(0x28u);
  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_8707 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_BaseNPC::CheckForCollisionsWithNPCs", 0, "NPCs", 0, 4);
  ignoreEntity.m_Index = -1;
  if ( bIgnoreSelf && this != 0 )
  {
    m_pEntity = this->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v11 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      ignoreEntity.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v11 & 0x7FFF;
    }
  }
  if ( dota_unit_cache_npc_searches.m_pParent->m_Value.m_nValue != 0 )
  {
    tickcount = gpGlobals->tickcount;
    flSearcherRadius = g_GridNav.m_ObstructionManager.m_CollisionRadius;
    nCurAllMask = g_GridNav.m_ObstructionManager.m_nObjectPropertiesMaskAll;
    nCurNoneMask = g_GridNav.m_ObstructionManager.m_nObjectPropertiesMaskNone;
    m_SearcherClass = g_GridNav.m_ObstructionManager.m_SearcherClass;
    searcherRelationshipClass = m_SearcherClass;
    flRelaitonshipRadiusAdjustment = g_GridNav.m_ObstructionManager.m_SearcherRadiusAdjustment;
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    v15 = p->y - AbsOrigin->y;
    v16 = ((p->x - AbsOrigin->x) * (p->x - AbsOrigin->x)) + (v15 * v15);
    v17 = 48.0;
    v18 = fsqrt(v16) + flSearcherRadius;
    if ( m_SearcherClass == ObstructionRelationshipClass_t::DOTA_OBSTRUCTION_RELATIONSHIP_NONE )
      v17 = 0.0;
    v19 = v18 + v17;
    m_flRadius = this->m_LocalNPCObstructionsCache.m_flRadius;
    if ( v19 <= 1000.0 )
    {
      v55 = v19 > m_flRadius && !bCanGrowCache;
      if ( v55 == 0 )
      {
        if ( this->m_LocalNPCObstructionsCache.m_nLastUpdatedTick != tickcount || v19 > m_flRadius )
        {
          this->m_LocalNPCObstructionsCache.m_nLastUpdatedTick = tickcount;
          this->m_LocalNPCObstructionsCache.m_flRadius = fmaxf(v19, m_flRadius);
          CUtlVectorBase<CHandle<CDOTA_BaseNPC>,CUtlMemory<CHandle<CDOTA_BaseNPC>,int>>::RemoveAll(&this->m_LocalNPCObstructionsCache.m_hCachedNPCs);
          CGridNav::PrepareObstructionManager(
            &g_GridNav,
            this->m_LocalNPCObstructionsCache.m_flRadius,
            0x10u,
            0x40u,
            ObstructionRelationshipClass_t::DOTA_OBSTRUCTION_RELATIONSHIP_NONE,
            0.0);
          cacheNPCs.m_Size = 0;
          cacheNPCs.m_Memory.m_nAllocationCount = 16;
          cacheNPCs.m_Memory.m_nGrowSize = 0x80000000;
          cacheNPCs.m_Memory.m_pMemory = &cacheNPCs.m_Memory.m_FixedMemory;
          ignoreHandle.m_Index = -2;
          v21 = CBaseEntity::GetAbsOrigin(this);
          CGridNav::CheckForCollisions(&g_GridNav, v21, &cacheNPCs, &ignoreHandle.m_Index, 0);
          v22 = 0;
          for ( i = 0; cacheNPCs.m_Size > i; ++v22 )
          {
            m_pObstructionObject = cacheNPCs.m_Memory.m_pMemory[v22].m_pObsRec->m_pObstructionObject;
            v26 = (*(m_pObstructionObject->_vptr_CObstructionObject + 6))(m_pObstructionObject);
            ignoreHandle.m_Index = -1;
            if ( v26 != 0 )
            {
              v27 = *(v26 + 8);
              if ( v27 != 0 )
              {
                v28 = (*(v27 + 16) >> 15) - (*(v27 + 48) & 1);
                v29 = 0x7FFF;
                if ( *(v27 + 16) != -1 )
                  v29 = *(v27 + 16) & 0x7FFF;
                LOWORD(ignoreHandle.m_Index) = v29 | ignoreHandle.m_Index & 0x8000;
                ignoreHandle.m_Index = (v28 << 15) | ignoreHandle.m_Index & 0x7FFF;
              }
            }
            m_Size = this->m_LocalNPCObstructionsCache.m_hCachedNPCs.m_Size;
            v31 = this->m_LocalNPCObstructionsCache.m_hCachedNPCs.m_Size;
            if ( m_Size == this->m_LocalNPCObstructionsCache.m_hCachedNPCs.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CHandle<CDOTA_BaseNPC>,int>::Grow(&this->m_LocalNPCObstructionsCache.m_hCachedNPCs.m_Memory, 1);
              v31 = this->m_LocalNPCObstructionsCache.m_hCachedNPCs.m_Size;
            }
            this->m_LocalNPCObstructionsCache.m_hCachedNPCs.m_Size = v31 + 1;
            v24 = &this->m_LocalNPCObstructionsCache.m_hCachedNPCs.m_Memory.m_pMemory[m_Size];
            if ( v24 != 0 )
              v24->m_Index = ignoreHandle.m_Index;
            ++i;
          }
          CGridNav::PrepareObstructionManager(
            &g_GridNav,
            flSearcherRadius,
            nCurAllMask,
            nCurNoneMask,
            searcherRelationshipClass,
            flRelaitonshipRadiusAdjustment);
          cacheNPCs.m_Size = 0;
          v33 = cacheNPCs.m_Memory.m_nGrowSize & 0xC0000000;
          if ( cacheNPCs.m_Memory.m_nAllocationCount < 0
            || cacheNPCs.m_Memory.m_pMemory == &cacheNPCs.m_Memory.m_FixedMemory )
          {
            if ( v33 == 0 )
              CUtlMemory<IntersectionRecord_t,int>::Purge(&cacheNPCs.m_Memory);
          }
          else if ( cacheNPCs.m_Memory.m_pMemory != 0 && v33 == 0 )
          {
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
          }
        }
        v34 = this->m_LocalNPCObstructionsCache.m_hCachedNPCs.m_Size;
        if ( resultList != 0 && v34 > resultList->m_Memory.m_nAllocationCount )
          CUtlMemory<IntersectionRecord_t,int>::EnsureCapacity(&resultList->m_Memory, v34);
        if ( v34 > 0 )
        {
          v35 = 4LL * (v34 - 1) + 4;
          for ( j = 0; j != v35; j += 4LL )
          {
            v37 = &this->m_LocalNPCObstructionsCache.m_hCachedNPCs.m_Memory.m_pMemory[j / 4];
            m_Index = v37->m_Index;
            if ( v37->m_Index + 2 > 1 )
            {
              v39 = v37->m_Index;
              v40 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v37->m_Index) >> 9) & 0x3F];
              if ( v40 != 0 )
              {
                v41 = &v40[v39 & 0x1FF];
                if ( v41 != 0 && m_Index == v41->m_EHandle.m_Index )
                {
                  m_pInstance = v41->m_pInstance;
                  if ( v41->m_pInstance != 0 && (this != m_pInstance || !bIgnoreSelf) )
                  {
                    m_pObstructionRecord = m_pInstance->m_pObstructionRecord;
                    if ( m_pObstructionRecord != 0
                      && (m_pObstructionRecord->m_ObjectProperties & nCurNoneMask) == 0
                      && (nCurAllMask & m_pObstructionRecord->m_ObjectProperties) == nCurAllMask )
                    {
                      CollisionPadding = C2DGridObstructionManager::GetCollisionPadding(
                                           &g_GridNav.m_ObstructionManager,
                                           m_pObstructionRecord->m_RadiusAdjustClass,
                                           m_pObstructionRecord->m_fRadiusAdjustFactor,
                                           searcherRelationshipClass,
                                           flRelaitonshipRadiusAdjustment);
                      if ( (((p->x - m_pObstructionRecord->m_fX) * (p->x - m_pObstructionRecord->m_fX))
                          + ((p->y - m_pObstructionRecord->m_fY) * (p->y - m_pObstructionRecord->m_fY))) <= ((CollisionPadding + (flSearcherRadius + m_pObstructionRecord->m_fRadius)) * (CollisionPadding + (flSearcherRadius + m_pObstructionRecord->m_fRadius))) )
                      {
                        if ( resultList == 0 )
                        {
                          v55 = 1;
                          goto LABEL_28;
                        }
                        v45 = resultList->m_Size;
                        v47 = resultList->m_Size;
                        if ( resultList->m_Size == resultList->m_Memory.m_nAllocationCount )
                        {
                          CUtlMemory<IntersectionRecord_t,int>::Grow(&resultList->m_Memory, 1);
                          v45 = resultList->m_Size;
                        }
                        resultList->m_Size = v45 + 1;
                        v46 = &resultList->m_Memory.m_pMemory[v47];
                        if ( v46 != 0 )
                        {
                          v46->m_RecordType = IntersectionType_t::cEndPoint1IsContained;
                          v46->m_pObsRec = m_pObstructionRecord;
                          v46->m_IntersectionPoint.X = 0.0;
                          v46->m_IntersectionPoint.Y = 0.0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if ( resultList != 0 )
          v55 = resultList->m_Size > 0;
LABEL_28:
        if ( VProf_8707 )
          CVProfile::ExitScope(&g_VProfCurrentProfile);
        return v55;
      }
    }
  }
  ignoreHandle.m_Index = ignoreEntity.m_Index;
  v55 = CGridNav::CheckForCollisions(&g_GridNav, p, resultList, &ignoreHandle.m_Index, 0);
  goto LABEL_28;
}


// CDOTA_BaseNPC::AngerNearbyUnits  (line 8834, @0x00000000029174b0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, CanBeSeenByTeam, CanEntityBeSeenByMyTeam, Get, GetAngerTarget, GetElapsedTime, GetFloat, GetInstance, GetTeamNumber, IsBuilding, IsElapsed, Length2DSqr, Purge, RemoveAll, Square<float>, ToDOTABaseNPC, VectorSubtract, operator CBaseEntity*, operator-, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CountdownTimer::Now, CountdownTimer::Start, CGridNav::GetNPCsInRange, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::CanAutoAttackTarget, CBaseModelEntity::CanBeSeenByTeam, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::GetRangeToUnit, CDOTA_BaseNPC::SetAngerTarget, CUtlMemory<CDOTA_BaseNPC*, int>::Purge, CUtlVectorBase<CDOTA_BaseNPC*, CUtlMemory<CDOTA_BaseNPC*, int> >::~CUtlVectorBase, _Unwind_Resume (13 total)
// callers: CDOTABehaviorAttackPhase::OnStart, CDOTABehaviorCommandMoveToTargetToAttack::OnStart
void __fastcall CDOTA_BaseNPC::AngerNearbyUnits(CDOTA_BaseNPC *const this)
{
  CountdownTimer *p_m_AngerCooldownTimer; // rbx
  float v3; // xmm1_4
  __int64 v4; // r12
  int v5; // r13d
  CDOTA_BaseNPC *v6; // rbx
  uint32 m_iUnitType; // eax
  const Vector *AbsOrigin; // r15
  const Vector *v9; // rax
  unsigned __int8 m_Value; // al
  CDOTA_BaseNPC *v11; // rax
  float flRangeToCurrentAngerTarget; // [rsp+8h] [rbp-258h]
  float flAngerRadiusa; // [rsp+Ch] [rbp-254h]
  float flAngerRadius; // [rsp+Ch] [rbp-254h]
  GridNavBaseNPCStackVec_t npcs; // [rsp+10h] [rbp-250h] BYREF
  unsigned __int64 v16; // [rsp+228h] [rbp-38h]

  p_m_AngerCooldownTimer = &this->m_AngerCooldownTimer;
  v16 = __readfsqword(0x28u);
  if ( CountdownTimer::Now(&this->m_AngerCooldownTimer) >= this->m_AngerCooldownTimer.m_timestamp.m_Value )
  {
    CountdownTimer::Start(p_m_AngerCooldownTimer, dota_unit_anger_cooldown.m_pParent->m_Value.m_fValue, v3);
    npcs.m_Memory.m_pMemory = &npcs.m_FixedMemory;
    npcs.m_Size = 0;
    npcs.m_Memory.m_nAllocationCount = 64;
    npcs.m_Memory.m_nGrowSize = 0x80000000;
    flAngerRadiusa = dota_unit_anger_radius.m_pParent->m_Value.m_fValue;
    CGridNav::GetNPCsInRange(&g_GridNav, this, flAngerRadiusa, &npcs);
    flAngerRadius = flAngerRadiusa * flAngerRadiusa;
    if ( npcs.m_Size > 0 )
    {
      v4 = 0;
      v5 = 0;
      do
      {
        v6 = npcs.m_Memory.m_pMemory[v4];
        m_iUnitType = v6->m_iUnitType;
        if ( ((m_iUnitType & 0x10) == 0 || (m_iUnitType & 4) != 0) && v6->m_iIsControllableByPlayer64.m_Value == 0 )
        {
          AbsOrigin = CBaseEntity::GetAbsOrigin(this);
          v9 = CBaseEntity::GetAbsOrigin(v6);
          if ( (((v9->x - AbsOrigin->x) * (v9->x - AbsOrigin->x)) + ((v9->y - AbsOrigin->y) * (v9->y - AbsOrigin->y))) <= flAngerRadius
            && CDOTA_BaseNPC::CanAutoAttackTarget(v6, this, 0) )
          {
            m_Value = v6->m_iTeamNum.m_Value;
            if ( m_Value == 4 || this->m_pCollision == 0 || CBaseModelEntity::CanBeSeenByTeam(this, m_Value) )
            {
              if ( CountdownTimer::Now(&v6->m_AngerTimer) >= v6->m_AngerTimer.m_timestamp.m_Value
                || ((CountdownTimer::Now(&v6->m_AngerTimer) - v6->m_AngerTimer.m_timestamp.m_Value)
                  + v6->m_AngerTimer.m_duration.m_Value) < 0.18000001
                || (v11 = CEntityHandle::operator CEntityInstance *(&v6->m_hAngerTarget)) == 0
                || !v11->m_bIsDOTANPC
                || this == v11
                || (flRangeToCurrentAngerTarget = CDOTA_BaseNPC::GetRangeToUnit(v6, v11),
                    CDOTA_BaseNPC::GetRangeToUnit(v6, this) <= flRangeToCurrentAngerTarget) )
              {
                CDOTA_BaseNPC::SetAngerTarget(v6, this);
              }
            }
          }
        }
        ++v5;
        ++v4;
      }
      while ( npcs.m_Size > v5 );
    }
    npcs.m_Size = 0;
    if ( (npcs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&npcs.m_Memory);
      if ( (npcs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&npcs.m_Memory);
    }
  }
}


// CDOTA_BaseNPC::AddNewPseudoRandomNode  (line 8888, @0x0000000002948a00, libserver.so)  // inlines: CUtlKeyValuePair<int, CDOTAPseudoRandom>, Construct<CUtlKeyValuePair<int, CDOTAPseudoRandom>, int, CDOTAPseudoRandom>, DoInsert<int>, DoLookup<int>, Find, GetPseudoRandomNode, Insert, operator(), operator[]
// calls: CUtlHashtable<int, CDOTAPseudoRandom, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAPseudoRandom>, int> >::DoInsertUnconstructed, CUtlHashtable<int, CDOTAPseudoRandom, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAPseudoRandom>, int> >::DoLookup<int>
// callers: RollPseudoRandomPercentage
CDOTAPseudoRandom *__fastcall CDOTA_BaseNPC::AddNewPseudoRandomNode(
        CDOTA_BaseNPC *const this,
        DotaPseudoRandomType type)
{
  CUtlHashtable<int,CDOTAPseudoRandom,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAPseudoRandom>,int> >::handle_t *v2; // rcx
  CUtlHashtable<int,CDOTAPseudoRandom,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAPseudoRandom>,int> > *p_m_pseudorandom; // r14
  unsigned __int32 v6; // edx
  unsigned int v7; // eax
  unsigned int v8; // r12d
  int inserted; // eax
  CUtlHashtableEntry<int,CDOTAPseudoRandom> *m_pMemory; // rcx
  __int64 v11; // rdx
  CUtlHashtableEntry<int,CDOTAPseudoRandom> *v12; // rax
  CDOTAPseudoRandom *result; // rax
  int v14; // eax

  p_m_pseudorandom = &this->m_pseudorandom;
  v6 = 33 * (((4097 * type + 2127912214) >> 19) ^ (4097 * type + 2127912214) ^ 0xC761C23C);
  v7 = 9 * ((v6 - 369570787) ^ ((v6 + 374761393) << 9)) - 42973499;
  v8 = HIWORD(v7) ^ v7 ^ 0xB55A4F09;
  if ( this->m_pseudorandom.m_nUsed == 0
    || (v14 = CUtlHashtable<int,CDOTAPseudoRandom,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAPseudoRandom>,int>>::DoLookup<int>(
                &this->m_pseudorandom,
                type,
                v8,
                v2)) == -1 )
  {
    inserted = CUtlHashtable<int,CDOTAPseudoRandom,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAPseudoRandom>,int>>::DoInsertUnconstructed(
                 p_m_pseudorandom,
                 v8,
                 1);
    m_pMemory = this->m_pseudorandom.m_table.m_pMemory;
    v11 = inserted;
    v12 = &m_pMemory[inserted];
    if ( v12 != -4LL )
    {
      v12->data[0] = type;
      v12->data[1] = 0;
      m_pMemory = this->m_pseudorandom.m_table.m_pMemory;
    }
    return &m_pMemory[v11].data[1];
  }
  m_pMemory = this->m_pseudorandom.m_table.m_pMemory;
  v11 = v14;
  result = &m_pMemory[v14].data[1];
  if ( result == 0 )
    return &m_pMemory[v11].data[1];
  return result;
}


// CDOTA_BaseNPC::GetPseudoRandomNode  (line 8902, @0x000000000290a060, libserver.so)  // inlines: DoLookup<int>, Find, operator(), operator[]
// calls: CUtlHashtable<int, CDOTAPseudoRandom, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAPseudoRandom>, int> >::DoLookup<int>
// callers: RollPseudoRandomPercentage
CDOTAPseudoRandom *__fastcall CDOTA_BaseNPC::GetPseudoRandomNode(CDOTA_BaseNPC *const this, DotaPseudoRandomType node)
{
  CUtlHashtable<int,CDOTAPseudoRandom,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAPseudoRandom>,int> >::handle_t *v2; // rcx
  unsigned __int32 v5; // edx
  unsigned int v6; // edx
  int v7; // eax

  if ( this->m_pseudorandom.m_nUsed == 0 )
    return 0;
  v5 = 33 * (((4097 * node + 2127912214) >> 19) ^ (4097 * node + 2127912214) ^ 0xC761C23C);
  v6 = 9 * ((v5 - 369570787) ^ ((v5 + 374761393) << 9)) - 42973499;
  v7 = CUtlHashtable<int,CDOTAPseudoRandom,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAPseudoRandom>,int>>::DoLookup<int>(
         &this->m_pseudorandom,
         node,
         HIWORD(v6) ^ v6 ^ 0xB55A4F09,
         v2);
  if ( v7 == -1 )
    return 0;
  else
    return &this->m_pseudorandom.m_table.m_pMemory[v7].data[1];
}


// CDOTA_BaseNPC::PreventCritOrBashAnimations  (line 8912, @0x000000000290a0f0, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// callers: CDOTA_Modifier_SkeletonKing_MortalStrike::GetModifierPreAttack_CriticalStrike, CDOTA_Modifier_FacelessVoid_TimeLock::GetModifierProcAttack_BonusDamage_Magical, CDOTA_Modifier_Slardar_Bash::GetModifierPreAttack, CDOTA_Modifier_Brewmaster_DrunkenBrawler::GetModifierPreAttack_CriticalStrike, CDOTA_Modifier_TrollWarlord_BerserkersRage::GetModifierPreAttack, CDOTA_Modifier_Item_AbyssalBlade::GetModifierPreAttack, CDOTA_Modifier_Item_CraniumBasher::GetModifierPreAttack
bool __fastcall CDOTA_BaseNPC::PreventCritOrBashAnimations(CDOTA_BaseNPC *const this)
{
  float v1; // xmm1_4

  v1 = 0.0;
  if ( g_pGameRules != 0 )
    v1 = *&g_pGameRules[18].m_szQuestName[20];
  return this->m_flCritBashFailUntil > v1;
}


// CDOTA_BaseNPC::TranslateActivity  (line 8917, @0x00000000028f6670, libserver.so)  // inlines: DOTAGameRules, GetTeamNumber, State_IsGameOver
// calls: CDOTA_BaseNPC::SelectWeightedSequenceWithEconomy
Activity __fastcall CDOTA_BaseNPC::TranslateActivity(CDOTA_BaseNPC *const this, Activity act)
{
  Activity result; // eax
  HSequence v3; // edx
  HSequence v4; // edx

  result = act;
  switch ( act )
  {
    case 1500:
      if ( g_pGameRules == 0 || (*&g_pGameRules[6].m_szQuestName[28] - 6) > 1 )
        return result;
      if ( this->m_iTeamNum.m_Value == *&g_pGameRules[16].m_szQuestName[80] )
      {
LABEL_11:
        v4.m_Data = CDOTA_BaseNPC::SelectWeightedSequenceWithEconomy(this, 1710).m_Data;
        result = 1710;
        if ( v4.m_Data == -1 )
          return 1591;
        return result;
      }
      break;
    case 1711:
      break;
    case 1710:
      goto LABEL_11;
    default:
      return result;
  }
  v3.m_Data = CDOTA_BaseNPC::SelectWeightedSequenceWithEconomy(this, 1711).m_Data;
  result = 1711;
  if ( v3.m_Data == -1 )
    return 1592;
  return result;
}


// DOTA_ForceUnitActivity  (line 8952, @0x0000000002956bf0, libserver.so)  // inlines: ActivityList_IndexForName, Arg, FStrEq, ToDOTABaseNPC, _V_strcmp, operator[]
// calls: UTIL_GetCommandClient, strcmp, CDOTA_BaseNPC::StartGesture, CDOTA_BaseNPC::RemoveAllGestures
void __fastcall DOTA_ForceUnitActivity(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  __int64 v4; // rax
  CDOTA_BaseNPC *v5; // r12
  char *v6; // rbx
  Activity v7; // esi

  if ( args->m_nArgc > 1 )
  {
    CommandClient = UTIL_GetCommandClient();
    v4 = (*(CommandClient->_vptr_IHandleEntity + 531))(CommandClient);
    v5 = v4;
    if ( v4 != 0 && *(v4 + 339) != 0 )
    {
      if ( args->m_nArgc <= 1 )
      {
        v6 = "";
      }
      else
      {
        v6 = args->m_ppArgv[1];
        if ( v6 == "stop" || strcmp(v6, "stop") == 0 )
        {
          CDOTA_BaseNPC::RemoveAllGestures(v5);
          return;
        }
      }
      v7 = -1;
      if ( g_pAnimationSystem != 0 )
        v7 = (*(*g_pAnimationSystem + 304LL))(g_pAnimationSystem, v6);
      CDOTA_BaseNPC::StartGesture(v5, v7, 0.1, 0.1, 0, 0, 1.0);
    }
  }
}


// CDOTA_BaseNPC::SetAbilityViaDraft  (line 8974, @0x000000000290a120, libserver.so)  // inlines: operator=
// calls: MakeEntitySystemString
void __fastcall CDOTA_BaseNPC::SetAbilityViaDraft(CDOTA_BaseNPC *const this, int iSlot, const char *pszAbilityName)
{
  __int64 v3; // rbx
  UtlSymLargeId_t v5; // [rsp+0h] [rbp-20h]

  v3 = iSlot;
  if ( iSlot <= 23 )
  {
    MakeEntitySystemString(pszAbilityName);
    this->m_iszAbilityList[v3].u.m_Id = v5;
  }
}


// CDOTA_BaseNPC::SetIsIdle  (line 8982, @0x000000000290a160, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// callers: CDOTABehaviorIdle::OnEnd, CDOTABehaviorIdle::OnStartInternal
void __fastcall CDOTA_BaseNPC::SetIsIdle(CDOTA_BaseNPC *const this, bool bIsIdle)
{
  float v2; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax

  if ( this->m_bIsIdle != bIsIdle )
  {
    this->m_bIsIdle = bIsIdle;
    v2 = 0.0;
    if ( g_pGameRules != 0 )
      v2 = *&g_pGameRules[18].m_szQuestName[20];
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    this->m_flLastIdleChangeTime = v2;
    vptr_IHandleEntity[378]();
  }
}


// CDOTA_BaseNPC::AddSpeechBubble  (line 8996, @0x00000000028f6700, libserver.so)
// calls: MakeEntitySystemString, CSpeechBubbleManager::AddSpeechBubble
void __fastcall CDOTA_BaseNPC::AddSpeechBubble(
        CDOTA_BaseNPC *const this,
        unsigned int iBubble,
        const char *pszSpeech,
        float flDuration,
        unsigned int unOffsetX,
        unsigned int unOffsetY)
{
  string_t pszLocalization; // [rsp+10h] [rbp-40h] BYREF

  MakeEntitySystemString(pszSpeech);
  CSpeechBubbleManager::AddSpeechBubble(
    g_pSpeechBubbleManager,
    iBubble,
    this,
    &pszLocalization,
    flDuration,
    unOffsetX,
    unOffsetY);
}


// CDOTA_BaseNPC::Input_SpeechBubble  (line 9006, @0x00000000028ff810, libserver.so)  // inlines: AssignTo, CUtlSymbolLarge, StringID, TempString, ToString
// calls: MakeEntitySystemString, CSpeechBubbleManager::AddSpeechBubble, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_28FF841, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CDOTA_BaseNPC::Input_SpeechBubble(CDOTA_BaseNPC *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  char *m_pszString; // rsi
  const char *v5; // rax
  const char *v6; // rcx
  double m_float; // xmm0_8
  string_t strSpeech; // [rsp+10h] [rbp-30h]
  string_t pszLocalization; // [rsp+20h] [rbp-20h] BYREF

  m_type = inputdata->value.m_type;
  if ( m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_8;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_19;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_11;
      case 6:
        v6 = "true";
        if ( inputdata->value.m_char == 0 )
          v6 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v6);
        goto LABEL_15;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_11;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_15;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_15:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_19:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_11:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v5 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v5);
LABEL_8:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  MakeEntitySystemString(m_pszString);
  pszLocalization.u.m_Id = strSpeech.u.m_Id;
  CSpeechBubbleManager::AddSpeechBubble(g_pSpeechBubbleManager, 0, this, &pszLocalization, 10.0, 0, 0);
}


// CDOTA_BaseNPC::DestroyAllSpeechBubbles  (line 9015, @0x00000000028f6770, libserver.so)
// calls: CSpeechBubbleManager::DestroyAllSpeechBubbles
void __fastcall CDOTA_BaseNPC::DestroyAllSpeechBubbles(CDOTA_BaseNPC *const this)
{
  CSpeechBubbleManager::DestroyAllSpeechBubbles(g_pSpeechBubbleManager);
}


// CDOTA_BaseNPC::Input_DestroyAllSpeechBubbles  (line 9023, @0x00000000028f6790, libserver.so)
// calls: CSpeechBubbleManager::DestroyAllSpeechBubbles
void __fastcall CDOTA_BaseNPC::Input_DestroyAllSpeechBubbles(CDOTA_BaseNPC *const this, inputdata_t *const inputdata)
{
  CSpeechBubbleManager::DestroyAllSpeechBubbles(g_pSpeechBubbleManager);
}


// CDOTA_BaseNPC::Input_PlayVCD  (line 9028, @0x00000000028fec70, libserver.so)  // inlines: AssignTo, Speak, TempString, ToString
// calls: CDOTA_Speech::Speak, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "true", "false", "%d %d %d %d"
// globals: jpt_28FECA1, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CDOTA_BaseNPC::Input_PlayVCD(CDOTA_BaseNPC *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  char *m_pszString; // rsi
  CDOTA_Speech *m_pSpeech; // rdi
  const char *v6; // rax
  double m_float; // xmm0_8
  const char *v8; // rcx

  m_type = inputdata->value.m_type;
  if ( m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_10;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_12;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_14;
      case 6:
        v8 = "true";
        if ( inputdata->value.m_char == 0 )
          v8 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v8);
        goto LABEL_18;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_14;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_18;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_18:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_12:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_14:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v6 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v6);
LABEL_10:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  m_pSpeech = this->m_Speech.m_pSpeech;
  if ( m_pSpeech != 0 )
    CDOTA_Speech::Speak(m_pSpeech, m_pszString, 0.0, 18, 5, soundlevel_t::SNDLVL_80dB, 0, 0, 0, 0, 0);
}


// CDOTA_BaseNPC::ForcePlayActivityOnce  (line 9033, @0x00000000028f6aa0, libserver.so)
// calls: CDOTABody::StartAnimation, CBaseAnimating::NotifyWhenSequenceFinishes
// callers: CDOTA_BaseNPC::ForcePlayActivityOnce, CDOTA_BaseNPC::Input_ForcePlayActivityOnce
void __fastcall CDOTA_BaseNPC::ForcePlayActivityOnce(CDOTA_BaseNPC *const this, int nActivity)
{
  CDOTABody *v4; // rax

  v4 = (*(this->_vptr_IHandleEntity + 377))(this);
  CDOTABody::StartAnimation(v4, nActivity, 1, 1.0);
  CBaseAnimating::NotifyWhenSequenceFinishes(this, 1);
  this->m_bIsPlayingSingleForcedActivity = 1;
}


// CDOTA_BaseNPC::ForcePlayActivityOnce  (line 9033, @0x00000000028f6af0, libserver.so)
// calls: CDOTA_BaseNPC::ForcePlayActivityOnce
void __fastcall CDOTA_BaseNPC::ForcePlayActivityOnce(CDOTA_BaseNPC *const this, int nActivity)
{
  if ( nActivity != -1 )
    CDOTA_BaseNPC::ForcePlayActivityOnce(this, nActivity);
}


// CDOTA_BaseNPC::Input_ForcePlayActivityOnce  (line 9043, @0x00000000028ff1f0, libserver.so)  // inlines: AssignTo, ForcePlayActivityOnce, TempString, ToString
// calls: CBaseAnimating::LookupActivity, CDOTA_BaseNPC::ForcePlayActivityOnce, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "true", "false", "%d %d %d %d"
// globals: jpt_28FF221, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CDOTA_BaseNPC::Input_ForcePlayActivityOnce(CDOTA_BaseNPC *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  char *m_pszString; // rsi
  Activity v5; // eax
  const char *v6; // rax
  double m_float; // xmm0_8
  const char *v8; // rcx

  m_type = inputdata->value.m_type;
  if ( m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_10;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_12;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_14;
      case 6:
        v8 = "true";
        if ( inputdata->value.m_char == 0 )
          v8 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v8);
        goto LABEL_18;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_14;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_18;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_18:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_12:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_14:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v6 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v6);
LABEL_10:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  v5 = CBaseAnimating::LookupActivity(this, m_pszString);
  if ( v5 != -1 )
    CDOTA_BaseNPC::ForcePlayActivityOnce(this, v5);
}


// CDOTA_BaseNPC::OnSequenceFinished  (line 9049, @0x00000000028f6a60, libserver.so)
// calls: CDOTABody::StartAnimation
void __fastcall CDOTA_BaseNPC::OnSequenceFinished(CDOTA_BaseNPC *const this, bool bLooping)
{
  int (**vptr_IHandleEntity)(...); // rax
  CDOTABody *v3; // rax

  if ( this->m_bIsPlayingSingleForcedActivity )
  {
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    this->m_bIsPlayingSingleForcedActivity = 0;
    v3 = (vptr_IHandleEntity[377])(this, bLooping);
    CDOTABody::StartAnimation(v3, 0x5DCu, 1, 1.0);
  }
}


// CDOTA_BaseNPC::Script_PlayVCD  (line 9058, @0x00000000028f67b0, libserver.so)  // inlines: Speak
// calls: CDOTA_Speech::Speak
void __fastcall CDOTA_BaseNPC::Script_PlayVCD(CDOTA_BaseNPC *const this, const char *pVCD)
{
  CDOTA_Speech *m_pSpeech; // rdi

  m_pSpeech = this->m_Speech.m_pSpeech;
  if ( m_pSpeech != 0 )
    CDOTA_Speech::Speak(m_pSpeech, pVCD, 0.0, 18, 5, soundlevel_t::SNDLVL_80dB, 0, 0, 0, 0, 0);
}


// CDOTA_BaseNPC::Script_Purge  (line 9085, @0x00000000028f6810, libserver.so)
// calls: Purge
void __fastcall CDOTA_BaseNPC::Script_Purge(
        CDOTA_BaseNPC *const this,
        bool bRemovePositiveBuffs,
        bool bRemoveDebuffs,
        bool bFrameOnly,
        bool bRemoveStuns,
        bool bRemoveExceptions)
{
  int v6; // eax

  v6 = bRemovePositiveBuffs ? 2 : 0;
  if ( bRemoveDebuffs )
    v6 |= 4u;
  if ( bFrameOnly )
    v6 |= 0x20u;
  if ( bRemoveStuns )
    v6 |= 8u;
  if ( bRemoveExceptions )
    v6 |= 0x10u;
  Purge(this, 0, v6);
}


// CDOTA_BaseNPC::OnGoalEntityReached  (line 9114, @0x000000000290a1b0, libserver.so)  // inlines: CreateEvent, Get, GetInstance, SetInt, entindex, operator CBaseEntity*
// calls: CEntityHandle::operator CEntityInstance*, CEntityInstance::GetEntityIndex
// callers: CDOTABehaviorInvade::Update
// strings: "dota_npc_goal_reached", "npc_entindex", "next_goal_entindex"
void __fastcall CDOTA_BaseNPC::OnGoalEntityReached(
        CDOTA_BaseNPC *const this,
        const CEntityHandle *hGoalEntity,
        const CEntityHandle *hNextGoalEntity)
{
  CEntityInstance *v5; // r14
  CEntityInstance *v6; // r13
  __int64 v7; // rbx
  CEntityIndex v8; // eax
  CEntityIndex v9; // eax
  CEntityIndex v10; // eax

  v5 = CEntityHandle::operator CEntityInstance *(hGoalEntity);
  v6 = CEntityHandle::operator CEntityInstance *(hNextGoalEntity);
  v7 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "dota_npc_goal_reached", 0, 0);
  if ( v7 != 0 )
  {
    v8.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    (*(*v7 + 112LL))(v7, "npc_entindex", v8.m_Data);
    v9.m_Data = CEntityInstance::GetEntityIndex(v5).m_Data;
    (*(*v7 + 112LL))(v7, "goal_entindex", v9.m_Data);
    if ( v6 != 0 )
    {
      v10.m_Data = CEntityInstance::GetEntityIndex(v6).m_Data;
      (*(*v7 + 112LL))(v7, "next_goal_entindex", v10.m_Data);
    }
    else
    {
      (*(*v7 + 112LL))(v7, "next_goal_entindex", 0xFFFFFFFFLL);
    }
    (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v7, 1);
  }
}


// CDOTA_BaseNPC::UpdateServerSideAnimation  (line 9148, @0x0000000002904c40, libserver.so)  // inlines: IsPlayingCustomKillEffect
// calls: CBaseAnimating::UpdateServerSideAnimation, CDOTA_BaseNPC::PerformMovementLean
void __fastcall CDOTA_BaseNPC::UpdateServerSideAnimation(CDOTA_BaseNPC *const this)
{
  char v2; // r12

  if ( (*(this->_vptr_IHandleEntity + 474))(this) != 0 )
    CDOTA_BaseNPC::PerformMovementLean(this);
  v2 = 0;
  if ( (this->m_iUnitType & 1) != 0 )
    v2 = *(this + 5401);
  if ( (*(this->_vptr_IHandleEntity + 443))(this) == 0 || (*(this->_vptr_IHandleEntity + 408))(this) == 0 && v2 == 0 )
  {
    CBaseAnimating::UpdateServerSideAnimation(this);
    (*(this->m_pAnimState->_vptr_CDOTAAnimState + 1))(this->m_pAnimState);
  }
}


// CDOTA_BaseNPC::HasRefcountedModifiers  (line 9170, @0x00000000028f7150, libserver.so)
// calls: CDOTA_BaseNPC::GetAbilityByIndex, CDOTA_UnitInventory::GetItemInSlot
// callers: CDOTA_BaseNPC_Hero::HasRefcountedModifiers
bool __fastcall CDOTA_BaseNPC::HasRefcountedModifiers(CDOTA_BaseNPC *const this)
{
  int v2; // ebx
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTA_BaseNPC::NetworkVar_m_Inventory *p_m_Inventory; // r12
  CDOTA_Item *ItemInSlot; // rax

  v2 = 0;
  while ( 1 )
  {
    AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(this, v2);
    if ( AbilityByIndex != 0 && AbilityByIndex->m_iModifierRefCount > 0 )
      break;
    if ( ++v2 == 24 )
    {
      LOBYTE(v2) = 0;
      p_m_Inventory = &this->m_Inventory;
      if ( p_m_Inventory == 0 )
        return 0;
      while ( 1 )
      {
        ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(p_m_Inventory, v2);
        if ( ItemInSlot != 0 && ItemInSlot->m_iModifierRefCount > 0 )
          break;
        if ( ++v2 == 9 )
          return 0;
      }
      return 1;
    }
  }
  return 1;
}


