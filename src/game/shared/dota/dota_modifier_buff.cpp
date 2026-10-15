// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_modifier_buff.cpp:64
struct DOTABuffStringIndexCache_t {
	EHANDLE m_hEntity;  // +0x0
	int m_serialNum;  // +0x4
	int m_index;  // +0x8
	int m_teamSendMask;  // +0xc
	DOTABuffStringIndexCache_t();

	// sizeof = 16
};

// src/game/shared/dota/dota_modifier_buff.cpp:421
class CDOTATeamRecipientFilter : public CRecipientFilter {
public:

	CDOTATeamRecipientFilter(CDOTATeamRecipientFilter &);
	CDOTATeamRecipientFilter(const CDOTATeamRecipientFilter &);
	CDOTATeamRecipientFilter(int);
	virtual ~CDOTATeamRecipientFilter();

	// sizeof = 312
};

// src/game/shared/dota/dota_modifier_buff.cpp:459
class CBuffCountTracker {
	int iCount;  // +0x0
	int iCountFoW;  // +0x4
	CBuffCountTracker();

	// sizeof = 8
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// ToHScript  (line 50, @0x00000000025ea850, libserver.so)
// callers: CDOTA_Ability_DataDriven::Script_ApplyDataDrivenModifier, CDOTA_BaseNPC::Script_FindModifierByName, CDOTA_BaseNPC::Script_FindModifierByNameAndCaster, CDOTA_BaseNPC::Script_AddNewModifier, CDOTA_BaseNPC::Script_FindAllModifiers, CDOTA_BaseNPC::Script_FindAllModifiersByName
HSCRIPT __fastcall ToHScript(CDOTA_Buff *pBuff)
{
  if ( pBuff != 0 )
    return (*(pBuff->_vptr_CDOTA_Buff + 87))(pBuff);
  else
    return 0;
}


// ToBuff  (line 55, @0x00000000025ea880, libserver.so)
// calls: CDOTA_Buff::GetClassScriptDesc
// callers: CDOTA_BaseNPC::Script_RemoveHorizontalMotionController, CDOTA_BaseNPC::Script_RemoveVerticalMotionController
CDOTA_Buff *__fastcall ToBuff(HSCRIPT hBuff)
{
  CDOTA_Buff *(__fastcall *v2)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *ClassScriptDesc; // rax

  if ( hBuff == 0 )
    return 0;
  v2 = *(*g_pScriptVM + 208LL);
  ClassScriptDesc = CDOTA_Buff::GetClassScriptDesc();
  return v2(g_pScriptVM, hBuff, ClassScriptDesc);
}


// OnStringTableActiveModifiersChanged  (line 103, @0x00000000025ea8e0, libserver.so)
void __fastcall OnStringTableActiveModifiersChanged(
        void *object,
        INetworkStringTable *stringTable,
        int stringNumber,
        const char *newString,
        const void *newData)
{
  ;
}


// CModifierParams::FillOutScriptTableFromModifierParams  (line 108, @0x0000000002601360, libserver.so)  // inlines: CVariantBase, EntityToHScript, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPublicScriptScope, IndexToIdentity, IsValid, LookupEntity, ToHScript, operator CBaseEntity*, ~CVariantBase
// calls: CEntityHandle::operator CEntityInstance*, CVariantBase<CVariantDefaultAllocator>::Free, CEntityInstance::CreatePublicScriptScope, _Unwind_Resume
// callers: CDOTA_Modifier_Lua::ExecuteLuaModifierPropertyFunction
// strings: "original_damage", "ignore_invis", "no_attack_cooldown", "reincarnate", "do_not_consume", "issuer_player_index" (15 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CModifierParams::FillOutScriptTableFromModifierParams(const CModifierParams *const this, HSCRIPT table)
{
  __int64 v4; // rbx
  CEntityInstance *m_pInstance; // r12
  CEntityInstance *v6; // r15
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  uint64 m_hScope; // rax
  uint64 v10; // rax
  uint64 v11; // rax
  uint64 v12; // rax
  int fDamage_low; // xmm0_4
  void (__fastcall *v14)(__int64, HSCRIPT, char *, CVariantBase<CVariantDefaultAllocator> *); // rax
  int fOriginalDamage_low; // xmm0_4
  void (__fastcall *v16)(__int64, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // rax
  char bIgnoreInvis; // dl
  void (__fastcall *v18)(__int64, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // rax
  char bNoCooldown; // dl
  void (__fastcall *v20)(__int64, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // rax
  char bReincarnate; // dl
  void (__fastcall *v22)(__int64, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // rax
  char bDoNotConsume; // dl
  void (__fastcall *v24)(__int64, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // rax
  int fDistance_low; // xmm0_4
  void (__fastcall *v26)(__int64, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // rax
  int fGain_low; // xmm0_4
  void (__fastcall *v28)(__int64, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // rax
  int m_nIssuerPlayerIndex; // edx
  void (__fastcall *v30)(__int64, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // rax
  CEntityInstance *v31; // rax
  uint64 v32; // rax
  int nDamageType; // edx
  void (__fastcall *v34)(__int64, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // rax
  int nDamageflags; // edx
  void (__fastcall *v36)(__int64, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // rax
  int nDamageCategory; // edx
  void (__fastcall *v38)(__int64, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // rax
  int iFailType; // edx
  void (__fastcall *v40)(__int64, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // rax
  int iRecord; // edx
  void (__fastcall *v42)(__int64, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // rax
  int nCost; // edx
  void (__fastcall *v44)(__int64, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // rax
  int nOrdertype; // edx
  void (__fastcall *v46)(__int64, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // rax
  char bCraniumBasherTested; // dl
  void (__fastcall *v48)(__int64, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // rax
  char bDiffusalApplied; // dl
  void (__fastcall *v50)(__int64, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // rax
  char bHeartRegenApplied; // dl
  void (__fastcall *v52)(__int64, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // rax
  char bRangedAttack; // dl
  void (__fastcall *v54)(__int64, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // rax
  char bProcessProcs; // dl
  void (__fastcall *v56)(__int64, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // rax
  Activity nActivity; // edx
  void (__fastcall *v58)(__int64, HSCRIPT, const char *, CVariantBase<CVariantDefaultAllocator> *); // rax
  CEntityInstance *v59; // [rsp+8h] [rbp-A8h]
  void (__fastcall *v60)(__int64, HSCRIPT, char *, CVariantBase<CVariantDefaultAllocator> *); // [rsp+10h] [rbp-A0h]
  CBaseEntity *pAttacker; // [rsp+20h] [rbp-90h]
  CBaseEntity *pUnit; // [rsp+28h] [rbp-88h]
  ScriptVariant_t attacker; // [rsp+30h] [rbp-80h] BYREF
  ScriptVariant_t target; // [rsp+40h] [rbp-70h] BYREF
  ScriptVariant_t unit; // [rsp+50h] [rbp-60h] BYREF
  ScriptVariant_t abilityVariant; // [rsp+60h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v67; // [rsp+70h] [rbp-40h] BYREF

  if ( g_pVScriptGameSystem != 0 )
  {
    v4 = (*(g_pVScriptGameSystem->_vptr_IVScriptGameSystem + 4))(g_pVScriptGameSystem);
    if ( v4 != 0 )
    {
      m_pInstance = 0;
      v6 = CEntityHandle::operator CEntityInstance *(&this->htarget);
      pAttacker = CEntityHandle::operator CEntityInstance *(&this->hattacker);
      pUnit = CEntityHandle::operator CEntityInstance *(&this->hunit);
      if ( this->ability.m_Index + 2 > 1 )
      {
        v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->ability.m_Index) >> 9) & 0x3F];
        if ( v7 != 0 )
        {
          v8 = &v7[this->ability.m_Index & 0x1FF];
          if ( v8 != 0 && this->ability.m_Index == v8->m_EHandle.m_Index )
            m_pInstance = v8->m_pInstance;
        }
      }
      m_hScope = 0;
      if ( pAttacker != 0 )
      {
        m_hScope = pAttacker->m_pEntity->m_hPublicScope.m_hScope;
        if ( m_hScope == 0 )
        {
          CEntityInstance::CreatePublicScriptScope(pAttacker, 0);
          m_hScope = pAttacker->m_pEntity->m_hPublicScope.m_hScope;
        }
      }
      attacker.m_type = 31;
      attacker.m_flags = 0;
      attacker.m_uint64 = m_hScope;
      if ( v6 != 0 )
      {
        v10 = v6->m_pEntity->m_hPublicScope.m_hScope;
        if ( v10 == 0 )
        {
          CEntityInstance::CreatePublicScriptScope(v6, 0);
          v10 = v6->m_pEntity->m_hPublicScope.m_hScope;
        }
      }
      else
      {
        v10 = 0;
      }
      target.m_uint64 = v10;
      target.m_flags = 0;
      target.m_type = 31;
      if ( pUnit != 0 )
      {
        v11 = pUnit->m_pEntity->m_hPublicScope.m_hScope;
        if ( v11 == 0 )
        {
          CEntityInstance::CreatePublicScriptScope(pUnit, 0);
          v11 = pUnit->m_pEntity->m_hPublicScope.m_hScope;
        }
      }
      else
      {
        v11 = 0;
      }
      unit.m_type = 31;
      unit.m_flags = 0;
      unit.m_uint64 = v11;
      if ( m_pInstance != 0 )
      {
        v12 = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
        if ( v12 == 0 )
        {
          CEntityInstance::CreatePublicScriptScope(m_pInstance, 0);
          v12 = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
        }
      }
      else
      {
        v12 = 0;
      }
      abilityVariant.m_uint64 = v12;
      abilityVariant.m_flags = 0;
      abilityVariant.m_type = 31;
      (*(*v4 + 240LL))(v4, table, "attacker", &attacker);
      (*(*v4 + 240LL))(v4, table, "target", &target);
      (*(*v4 + 240LL))(v4, table, "unit");
      (*(*v4 + 240LL))(v4, table, "ability", &abilityVariant);
      fDamage_low = LODWORD(this->fDamage);
      v14 = *(*v4 + 240LL);
      v67.m_type = 1;
      v67.m_flags = 0;
      v67.m_int = fDamage_low;
      v14(v4, table, "damage", &v67);
      CVariantBase<CVariantDefaultAllocator>::Free(&v67);
      fOriginalDamage_low = LODWORD(this->fOriginalDamage);
      v16 = *(*v4 + 240LL);
      v67.m_type = 1;
      v67.m_flags = 0;
      v67.m_int = fOriginalDamage_low;
      v16(v4, table, "original_damage", &v67);
      CVariantBase<CVariantDefaultAllocator>::Free(&v67);
      bIgnoreInvis = this->bIgnoreInvis;
      v18 = *(*v4 + 240LL);
      v67.m_type = 6;
      v67.m_flags = 0;
      v67.m_char = bIgnoreInvis;
      v18(v4, table, "ignore_invis", &v67);
      CVariantBase<CVariantDefaultAllocator>::Free(&v67);
      bNoCooldown = this->bNoCooldown;
      v20 = *(*v4 + 240LL);
      v67.m_flags = 0;
      v67.m_char = bNoCooldown;
      v67.m_type = 6;
      v20(v4, table, "no_attack_cooldown", &v67);
      CVariantBase<CVariantDefaultAllocator>::Free(&v67);
      bReincarnate = this->bReincarnate;
      v22 = *(*v4 + 240LL);
      v67.m_type = 6;
      v67.m_char = bReincarnate;
      v67.m_flags = 0;
      v22(v4, table, "reincarnate", &v67);
      CVariantBase<CVariantDefaultAllocator>::Free(&v67);
      bDoNotConsume = this->bDoNotConsume;
      v24 = *(*v4 + 240LL);
      v67.m_type = 6;
      v67.m_char = bDoNotConsume;
      v67.m_flags = 0;
      v24(v4, table, "do_not_consume", &v67);
      CVariantBase<CVariantDefaultAllocator>::Free(&v67);
      fDistance_low = LODWORD(this->fDistance);
      v26 = *(*v4 + 240LL);
      v67.m_type = 1;
      v67.m_flags = 0;
      v67.m_int = fDistance_low;
      v26(v4, table, "distance", &v67);
      CVariantBase<CVariantDefaultAllocator>::Free(&v67);
      fGain_low = LODWORD(this->fGain);
      v28 = *(*v4 + 240LL);
      v67.m_flags = 0;
      v67.m_type = 1;
      v67.m_int = fGain_low;
      v28(v4, table, "gain", &v67);
      CVariantBase<CVariantDefaultAllocator>::Free(&v67);
      m_nIssuerPlayerIndex = this->m_nIssuerPlayerIndex;
      v30 = *(*v4 + 240LL);
      v67.m_type = 5;
      v67.m_int = m_nIssuerPlayerIndex;
      v67.m_flags = 0;
      v30(v4, table, "issuer_player_index", &v67);
      CVariantBase<CVariantDefaultAllocator>::Free(&v67);
      v60 = *(*v4 + 240LL);
      v31 = CEntityHandle::operator CEntityInstance *(&this->inflictor);
      v59 = v31;
      if ( v31 != 0 )
      {
        v32 = v31->m_pEntity->m_hPublicScope.m_hScope;
        if ( v32 == 0 )
        {
          CEntityInstance::CreatePublicScriptScope(v59, 0);
          v32 = v59->m_pEntity->m_hPublicScope.m_hScope;
        }
      }
      else
      {
        v32 = 0;
      }
      v67.m_uint64 = v32;
      v67.m_type = 31;
      v67.m_flags = 0;
      v60(v4, table, "inflictor", &v67);
      CVariantBase<CVariantDefaultAllocator>::Free(&v67);
      nDamageType = this->nDamageType;
      v34 = *(*v4 + 240LL);
      v67.m_type = 5;
      v67.m_flags = 0;
      v67.m_int = nDamageType;
      v34(v4, table, "damage_type", &v67);
      CVariantBase<CVariantDefaultAllocator>::Free(&v67);
      nDamageflags = this->nDamageflags;
      v36 = *(*v4 + 240LL);
      v67.m_type = 5;
      v67.m_int = nDamageflags;
      v67.m_flags = 0;
      v36(v4, table, "damage_flags", &v67);
      CVariantBase<CVariantDefaultAllocator>::Free(&v67);
      nDamageCategory = this->nDamageCategory;
      v38 = *(*v4 + 240LL);
      v67.m_type = 5;
      v67.m_int = nDamageCategory;
      v67.m_flags = 0;
      v38(v4, table, "damage_category", &v67);
      CVariantBase<CVariantDefaultAllocator>::Free(&v67);
      iFailType = this->iFailType;
      v40 = *(*v4 + 240LL);
      v67.m_type = 5;
      v67.m_flags = 0;
      v67.m_int = iFailType;
      v40(v4, table, "fail_type", &v67);
      CVariantBase<CVariantDefaultAllocator>::Free(&v67);
      iRecord = this->iRecord;
      v42 = *(*v4 + 240LL);
      v67.m_flags = 0;
      v67.m_int = iRecord;
      v67.m_type = 5;
      v42(v4, table, "record", &v67);
      CVariantBase<CVariantDefaultAllocator>::Free(&v67);
      nCost = this->nCost;
      v44 = *(*v4 + 240LL);
      v67.m_type = 5;
      v67.m_int = nCost;
      v67.m_flags = 0;
      v44(v4, table, "cost", &v67);
      CVariantBase<CVariantDefaultAllocator>::Free(&v67);
      nOrdertype = this->nOrdertype;
      v46 = *(*v4 + 240LL);
      v67.m_type = 5;
      v67.m_int = nOrdertype;
      v67.m_flags = 0;
      v46(v4, table, "order_type", &v67);
      CVariantBase<CVariantDefaultAllocator>::Free(&v67);
      bCraniumBasherTested = this->bCraniumBasherTested;
      v48 = *(*v4 + 240LL);
      v67.m_type = 6;
      v67.m_flags = 0;
      v67.m_char = bCraniumBasherTested;
      v48(v4, table, "basher_tested", &v67);
      CVariantBase<CVariantDefaultAllocator>::Free(&v67);
      bDiffusalApplied = this->bDiffusalApplied;
      v50 = *(*v4 + 240LL);
      v67.m_type = 6;
      v67.m_char = bDiffusalApplied;
      v67.m_flags = 0;
      v50(v4, table, "diffusal_applied", &v67);
      CVariantBase<CVariantDefaultAllocator>::Free(&v67);
      bHeartRegenApplied = this->bHeartRegenApplied;
      v52 = *(*v4 + 240LL);
      v67.m_type = 6;
      v67.m_char = bHeartRegenApplied;
      v67.m_flags = 0;
      v52(v4, table, "heart_regen_applied", &v67);
      CVariantBase<CVariantDefaultAllocator>::Free(&v67);
      bRangedAttack = this->bRangedAttack;
      v54 = *(*v4 + 240LL);
      v67.m_type = 6;
      v67.m_flags = 0;
      v67.m_char = bRangedAttack;
      v54(v4, table, "ranged_attack", &v67);
      CVariantBase<CVariantDefaultAllocator>::Free(&v67);
      bProcessProcs = this->bProcessProcs;
      v56 = *(*v4 + 240LL);
      v67.m_flags = 0;
      v67.m_char = bProcessProcs;
      v67.m_type = 6;
      v56(v4, table, "process_procs", &v67);
      CVariantBase<CVariantDefaultAllocator>::Free(&v67);
      nActivity = this->nActivity;
      v58 = *(*v4 + 240LL);
      v67.m_type = 5;
      v67.m_int = nActivity;
      v67.m_flags = 0;
      v58(v4, table, "activity", &v67);
      CVariantBase<CVariantDefaultAllocator>::Free(&v67);
      CVariantBase<CVariantDefaultAllocator>::Free(&abilityVariant);
      CVariantBase<CVariantDefaultAllocator>::Free(&unit);
      CVariantBase<CVariantDefaultAllocator>::Free(&target);
      CVariantBase<CVariantDefaultAllocator>::Free(&attacker);
    }
  }
}


// CDOTA_Buff::ModifierEvent  (line 160, @0x00000000025ea8f0, libserver.so)
// callers: FireSingleModifierEvent, FireModifierEvent
bool __fastcall CDOTA_Buff::ModifierEvent(
        CDOTA_Buff *const this,
        modifierfunction Event,
        const CModifierParams *const params)
{
  char *v3; // rax
  char *v4; // rcx
  _QWORD *v5; // rdi

  v3 = this + 16 * Event;
  v4 = *(v3 + 26);
  if ( v4 == 0 )
    return 0;
  v5 = (&this->_vptr_CDOTA_Buff + *(v3 + 27));
  if ( (v4 & 1) != 0 )
    (*&v4[*v5 - 1])(v5, params);
  else
    (v4)(v5, params);
  return 1;
}


// CDOTA_Buff::Prepare  (line 174, @0x00000000025ea950, libserver.so)  // inlines: DOTAGameRules, GetBool, GetClassNameAsCStr, GetClassname, GetEHandle, GetEntryIndex, GetGameTime, GetInt, GetSerialNumber, Set, String, ToDOTABaseNPC, operator=
// calls: AllocPooledString, KeyValues::GetInt, KeyValues::GetString, Msg
// callers: CDOTA_ModifierManager::AddNewModifier
// strings: "aura_apply_modifier", "aura_search_team", "aura_search_type", "aura_search_flags", "aura_is_heal", "%c [%2.2f] Adding buff '%s' index: %d to '%s'.\n"
void __fastcall CDOTA_Buff::Prepare(
        CDOTA_Buff *const this,
        const char *pScriptName,
        CBaseEntity *pParent,
        KeyValues *pKV)
{
  CEntityIdentity *m_pEntity; // rcx
  int v9; // eax
  __int16 v10; // dx
  UtlSymLargeId_t v11; // rax
  CGameRules *v12; // rax
  float v13; // xmm0_4
  const char *String; // rax
  CEntityIdentity *v15; // rax
  const char *m_pAsString; // r8
  double v17; // xmm0_8
  UtlSymLargeId_t v18; // rax
  _QWORD v19[8]; // [rsp+0h] [rbp-40h] BYREF

  if ( pParent != 0 )
  {
    m_pEntity = pParent->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v10 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hParent.m_Index) = v10 | this->m_hParent.m_Index & 0x8000;
      this->m_hParent.m_Index = (v9 << 15) | this->m_hParent.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hParent.m_Index = -1;
    }
    AllocPooledString(v19, pScriptName);
    v11 = v19[0];
    this->m_class.u.m_Id = v19[0];
    this->m_name.u.m_Id = v11;
    if ( pParent->m_bIsDOTANPC )
      this->m_pManager = &pParent[4];
  }
  else
  {
    this->m_hParent.m_Index = -1;
    AllocPooledString(v19, pScriptName);
    v18 = v19[0];
    this->m_class.u.m_Id = v19[0];
    this->m_name.u.m_Id = v18;
  }
  if ( dota_modifier_debug.m_pParent->m_Value.m_nValue != 0 )
  {
    v15 = pParent->m_pEntity;
    m_pAsString = "";
    if ( v15->m_designerName.u.m_Id != 0 )
      m_pAsString = v15->m_designerName.u.m_pAsString;
    v17 = 0.0;
    if ( g_pGameRules != 0 )
      v17 = *&g_pGameRules[18].m_szQuestName[20];
    Msg(
      "%c [%2.2f] Adding buff '%s' index: %d to '%s'.\n",
      &stru_10.m_pIdentityChunks[7] + 3,
      v17,
      pScriptName,
      this->m_iIndex,
      m_pAsString);
  }
  v12 = g_pGameRules;
  v13 = 0.0;
  *(this + 138) &= ~4u;
  if ( v12 != 0 )
    v13 = *&v12[18].m_szQuestName[20];
  this->m_flCreationTime = v13;
  this->m_flLastAppliedTime = v13;
  *(this + 138) = (KeyValues::GetInt(pKV, "aura", 0) != 0) | *(this + 138) & 0xFE;
  String = KeyValues::GetString(pKV, "aura_apply_modifier", "", 0, 0);
  AllocPooledString(v19, String);
  this->m_szModifierAura.u.m_Id = v19[0];
  this->m_iAuraSearchTeam = KeyValues::GetInt(pKV, "aura_search_team", 0);
  this->m_iAuraSearchType = KeyValues::GetInt(pKV, "aura_search_type", 0);
  this->m_iAuraSearchFlags = KeyValues::GetInt(pKV, "aura_search_flags", 0);
  this->m_iAuraRadius = KeyValues::GetInt(pKV, "aura_radius", 0);
  *(this + 138) = (8 * (KeyValues::GetInt(pKV, "aura_is_heal", 0) != 0)) | *(this + 138) & 0xF7;
}


// CDOTA_Buff::GetName  (line 211, @0x00000000025eabc0, libserver.so)  // inlines: String, ToCStr
// callers: CDOTA_CombatLog::AddModifierEvent, dota_modifier_dump, CDOTAPlayer::ClientCommand, CDOTA_Bot_Script::HasModifier, CDOTA_Bot_Script::GetModifierName, CDOTA_BaseNPC::Script_GetModifierNameByIndex, CDOTA_BaseNPC::DrawDebugTextOverlays, CDOTA_BaseNPC::GainedModifier, CDOTA_BaseNPC_Creature::GainedModifier, CDOTA_Ability_Pudge_Rot::OnToggle, CDOTA_Unit_Nian::GainedModifier, CDOTA_Modifier_Meepo_Self_Geostrike::OnAttackLanded (13 total)
const char *__fastcall CDOTA_Buff::GetName(CDOTA_Buff *const this)
{
  const char *result; // rax

  result = "";
  if ( this->m_name.u.m_Id != 0 )
    return this->m_name.u.m_pAsString;
  return result;
}


// CDOTA_Buff::GetClass  (line 216, @0x00000000025eabe0, libserver.so)  // inlines: String, ToCStr
// callers: CDOTAGamerules::ClientMsg_ModifierAlert, CDOTA_Modifier_Item_Moonshard_Consumed::DuplicateForIllusion
const char *__fastcall CDOTA_Buff::GetClass(CDOTA_Buff *const this)
{
  const char *result; // rax

  result = "";
  if ( this->m_class.u.m_Id != 0 )
    return this->m_class.u.m_pAsString;
  return result;
}


// CDOTA_Buff::~CDOTA_Buff  (line 224, @0x0000000002621930, libserver.so)  // inlines: DecrementModifierRefCount, Get, GetInstance, Purge, ToDOTAAbility, operator CBaseEntity*, ~CUtlMemory, ~CUtlReferenceList, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::DestroyParticles, CEntityHandle::operator CEntityInstance*, __dynamic_cast, CDOTABaseAbility::RefCountsModifiers, CDOTA_Buff::SendBuffRemovalToClients, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlVectorBase<CDOTA_BuffParticle, CUtlMemory<CDOTA_BuffParticle, int> >::RemoveAll, CUtlMemory<CDOTA_BuffParticle, int>::Purge, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
// callers: CDOTA_Modifier_AttributeBonus::~CDOTA_Modifier_AttributeBonus, CDOTA_Modifier_LootDrop_Thinker::~CDOTA_Modifier_LootDrop_Thinker, CDOTA_Modifier_Creature_Full_Avoidance::~CDOTA_Modifier_Creature_Full_Avoidance, CDOTA_Modifier_Creature_HybridFlyer::~CDOTA_Modifier_Creature_HybridFlyer, CDOTA_Modifier_UpgradedBarricade::~CDOTA_Modifier_UpgradedBarricade, CDOTA_Modifier_UpgradedMortar::~CDOTA_Modifier_UpgradedMortar, CDOTA_Modifier_GreaterClarity::~CDOTA_Modifier_GreaterClarity, CDOTA_Modifier_Corpselord_Revive::~CDOTA_Modifier_Corpselord_Revive, CDOTA_Modifier_Zombie_Berserk::~CDOTA_Modifier_Zombie_Berserk, CDOTA_Modifier_Lesser_NightCrawler_Pounce::~CDOTA_Modifier_Lesser_NightCrawler_Pounce, CDOTA_Modifier_Healing_Campfire_Heal::~CDOTA_Modifier_Healing_Campfire_Heal, CDOTA_Modifier_Healing_Campfire_Aura::~CDOTA_Modifier_Healing_Campfire_Aura (1339 total)
void __fastcall CDOTA_Buff::~CDOTA_Buff(CDOTA_Buff *const this)
{
  CEntityInstance *v2; // rax
  CDOTABaseAbility *v3; // rax
  CDOTABaseAbility *v4; // r12
  __int64 v5; // rax
  CUtlReference<CDOTA_Buff> *m_pHead; // rax
  CUtlReference<CDOTA_Buff> *m_pNext; // rdx

  this->_vptr_CDOTA_Buff = &off_412B830;
  CDOTA_Buff::DestroyParticles(this, 0);
  v2 = CEntityHandle::operator CEntityInstance *(&this->m_hAbility);
  if ( v2 != 0 )
  {
    v3 = __dynamic_cast(v2, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
    v4 = v3;
    if ( v3 != 0 && CDOTABaseAbility::RefCountsModifiers(v3) )
      --v4->m_iModifierRefCount;
  }
  CDOTA_Buff::SendBuffRemovalToClients(this);
  if ( this->m_hScriptScope != 0 )
  {
    v5 = (*(g_pVScriptGameSystem->_vptr_IVScriptGameSystem + 4))(g_pVScriptGameSystem);
    (*(*v5 + 200LL))(v5, this->m_hScriptScope);
    this->m_hScriptScope = 0;
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hAuraUnits);
  if ( (this->m_hAuraUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hAuraUnits.m_Memory);
    if ( (this->m_hAuraUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hAuraUnits.m_Memory);
  }
  CUtlVectorBase<CDOTA_BuffParticle,CUtlMemory<CDOTA_BuffParticle,int>>::RemoveAll(&this->m_iParticles);
  if ( (this->m_iParticles.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_BuffParticle,int>::Purge(&this->m_iParticles.m_Memory);
    if ( (this->m_iParticles.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_BuffParticle,int>::Purge(&this->m_iParticles.m_Memory);
  }
  m_pHead = this->m_References.m_pHead;
  if ( m_pHead != 0 )
  {
    while ( 1 )
    {
      m_pNext = m_pHead->m_pNext;
      m_pHead->m_pPrev = 0;
      m_pHead->m_pNext = 0;
      m_pHead->m_pObject = 0;
      if ( m_pNext == 0 )
        break;
      m_pHead = m_pNext;
    }
  }
  this->m_References.m_pHead = 0;
}


// CDOTA_Buff::~CDOTA_Buff  (line 224, @0x0000000002621ab0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Buff::~CDOTA_Buff(CDOTA_Buff *const this)
{
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Buff::Destroy  (line 267, @0x0000000002613c00, libserver.so)  // inlines: Get, GetInstance, GetManager, GetParent, RemoveEvents
// calls: CDOTA_ModifierManager::RemoveEventFromBuff, CDOTA_Buff::GetCaster, CEntityHandle::operator CEntityInstance*, CDOTA_CombatLog::AddModifierEvent, UTIL_Remove
// callers: CDOTA_Buff::Destroy, CDOTA_Modifier_CameraFollow::OnIntervalThink, CDOTA_Modifier_Invisible::OnAbilityExecuted, CDOTA_Modifier_Invisible::OnAttack, CDOTA_Modifier_Invisible::OnBreakInvisibility, CDOTA_Modifier_FountainInvulnerabilityBuff::OnOrder, CDOTA_Modifier_FountainInvulnerabilityBuff::OnAbilityExecuted, CDOTA_Modifier_FountainInvulnerabilityBuff::OnUnitMoved, CDOTA_Modifier_FountainInvulnerabilityBuff::OnAttack, CDOTA_Modifier_FountainInvulnerabilityBuff::OnAttackFail, CDOTA_Modifier_FountainInvulnerabilityBuff::OnIntervalThink, CDOTA_Modifier_Rune_Regen::GetModifierConstantHealthRegen (194 total)
void __fastcall CDOTA_Buff::Destroy(
        CDOTA_Buff *const this,
        bool bPurged,
        CDOTA_BaseNPC *pPurgeNPC,
        CDOTABaseAbility *pPurgeAbility)
{
  modifierfunction v5; // r14d
  CDOTA_ModifierManager *m_pManager; // r12
  CDOTA_BaseNPC *v9; // rax
  CEntityInstance *v10; // rax
  char v11; // al
  char v12; // r14
  CEntityInstance *v13; // rax
  int (**vptr_CDOTA_Buff)(...); // rax
  CDOTA_BaseNPC *pAttacker; // [rsp+10h] [rbp-40h]

  v5 = modifierfunction::MODIFIER_PROPERTY_PREATTACK_BONUS_DAMAGE;
  m_pManager = this->m_pManager;
  *(this + 138) |= 4u;
  if ( m_pManager != 0 )
  {
    do
      CDOTA_ModifierManager::RemoveEventFromBuff(m_pManager, v5++, this);
    while ( v5 != modifierfunction::MODIFIER_FUNCTION_LAST );
  }
  (*(this->_vptr_CDOTA_Buff + 59))(this);
  pAttacker = CDOTA_Buff::GetCaster(this);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
  CDOTA_CombatLog::AddModifierEvent(g_pDOTACombatLog, 3, v9, pAttacker, this, bPurged, pPurgeNPC, pPurgeAbility);
  v10 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
  if ( v10 != 0 )
  {
    v11 = (*(v10->_vptr_IHandleEntity + 450))(v10, this);
    this->m_bPurgedDestroy = bPurged;
    v12 = v11;
    (*(this->_vptr_CDOTA_Buff + 60))(this);
    if ( v12 != 0 )
    {
      v13 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
      UTIL_Remove(v13);
    }
  }
  else
  {
    vptr_CDOTA_Buff = this->_vptr_CDOTA_Buff;
    this->m_bPurgedDestroy = bPurged;
    vptr_CDOTA_Buff[60](this);
  }
}


// CDOTA_Buff::Destroy  (line 267, @0x0000000002613d30, libserver.so)
// calls: CDOTA_Buff::Destroy
// callers: CModifierFactory<CDOTA_Modifier_AttributeBonus>::Destroy, CDOTABaseAbility::UpdateOnRemove, CDOTA_Modifier_Lesser_NightCrawler_Pounce::OnVerticalMotionInterrupted, CModifierFactory<CDOTA_Modifier_LootDrop_Thinker>::Destroy, CModifierFactory<CDOTA_Modifier_Creature_Full_Avoidance>::Destroy, CModifierFactory<CDOTA_Modifier_Creature_HybridFlyer>::Destroy, CModifierFactory<CDOTA_Modifier_UpgradedBarricade>::Destroy, CModifierFactory<CDOTA_Modifier_UpgradedMortar>::Destroy, CModifierFactory<CDOTA_Modifier_GreaterClarity>::Destroy, CModifierFactory<CDOTA_Modifier_Corpselord_Revive>::Destroy, CModifierFactory<CDOTA_Modifier_Zombie_Berserk>::Destroy, CModifierFactory<CDOTA_Modifier_Lesser_NightCrawler_Pounce>::Destroy (1484 total)
void __fastcall CDOTA_Buff::Destroy(
        CDOTA_Buff *const this,
        bool bPurged,
        CDOTA_BaseNPC *pPurgeNPC,
        CDOTABaseAbility *pPurgeAbility)
{
  if ( (*(this + 138) & 4) == 0 )
    CDOTA_Buff::Destroy(this, bPurged, pPurgeNPC, pPurgeAbility);
}


// CDOTA_Buff::Script_Destroy  (line 308, @0x00000000026158d0, libserver.so)  // inlines: Destroy
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Buff::Script_Destroy(CDOTA_Buff *const this)
{
  if ( (*(this + 138) & 4) == 0 )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Buff::FinalDestroy  (line 313, @0x00000000026012b0, libserver.so)  // inlines: DOTAGameRules, Get, GetBool, GetClassNameAsCStr, GetClassname, GetGameTime, GetInstance, GetInt, GetName, GetParent, String, ToCStr
// calls: CEntityHandle::operator CEntityInstance*, Msg, CDOTA_ModifierManager::RemoveModifier
// callers: CDOTA_Buff::FinalDestroy, CDOTA_ModifierManager::Think, CDOTA_ModifierManager::RemoveAllModifiers
// strings: "%c [%2.2f] Removing buff '%s' index: %d to '%s'.\n"
void __fastcall CDOTA_Buff::FinalDestroy(CDOTA_Buff *const this)
{
  CEntityInstance *v2; // rax
  const char *m_pAsString; // rdx
  double v4; // xmm0_8
  const char *v5; // r8

  if ( dota_modifier_debug.m_pParent->m_Value.m_nValue != 0 )
  {
    v2 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
    m_pAsString = this->m_name.u.m_pAsString;
    v4 = 0.0;
    v5 = v2->m_pEntity->m_designerName.u.m_pAsString;
    if ( v5 == 0 )
      v5 = "";
    if ( m_pAsString == 0 )
      m_pAsString = "";
    if ( g_pGameRules != 0 )
      v4 = *&g_pGameRules[18].m_szQuestName[20];
    Msg("%c [%2.2f] Removing buff '%s' index: %d to '%s'.\n", 83, v4, m_pAsString, this->m_iIndex, v5);
  }
  CDOTA_ModifierManager::RemoveModifier(this->m_pManager, this);
}


// CDOTA_Buff::FinalDestroy  (line 313, @0x0000000002601340, libserver.so)
// calls: CDOTA_Buff::FinalDestroy
void __fastcall CDOTA_Buff::FinalDestroy(CDOTA_Buff *const this)
{
  if ( (*(this + 138) & 4) != 0 )
    CDOTA_Buff::FinalDestroy(this);
}


// CDOTA_Buff::GetManager  (line 333, @0x00000000025eac00, libserver.so)
// callers: CDOTA_Modifier_Item_PowerTreads::SwitchStat
CDOTA_ModifierManager *__fastcall CDOTA_Buff::GetManager(CDOTA_Buff *const this)
{
  return this->m_pManager;
}


// CDOTA_Buff::GetPriority  (line 341, @0x00000000025dee70, libserver.so)
int __fastcall CDOTA_Buff::GetPriority(CDOTA_Buff *const this)
{
  return 1;
}


// CDOTA_Buff::GetAttributes  (line 349, @0x00000000025dee80, libserver.so)
// callers: CDOTA_Modifier_Nevermore_Necromastery::GetAttributes, CDOTA_Modifier_Pudge_Rot::GetAttributes, CDOTA_Modifier_Razor_EyeOfTheStorm::GetAttributes, CDOTA_Modifier_SandKing_Impale::GetAttributes, CDOTA_Modifier_SkeletonKing_VampiricAura_Buff::GetAttributes, CDOTA_Modifier_SkeletonKing_Reincarnation::GetAttributes, CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter::GetAttributes, CDOTA_Modifier_Tidehunter_Ravage::GetAttributes, CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect::GetAttributes, CDOTA_Modifier_VengefulSpirit_Command_Negative_Aura::GetAttributes, CDOTA_Modifier_Beastmaster_InnerBeast::GetAttributes, CDOTA_Modifier_DeathProphet_SpiritSiphon::GetAttributes (43 total)
int __fastcall CDOTA_Buff::GetAttributes(CDOTA_Buff *const this)
{
  return this->m_iAttributes;
}


// CDOTA_Buff::GetFunctionValue  (line 357, @0x00000000025eac10, libserver.so)  // inlines: HasFunction
// callers: CDOTA_BaseNPC::GetAbilityModifierValues, CDOTA_BaseNPC::CalculateActivityModifiers, CDOTA_CombatLog::AddModifierEvent, CDOTA_BaseNPC::GetBonusPhysicalArmorFromHero, CDOTA_BaseNPC::GetPhysicalBlockFromHero, CDOTA_BaseNPC::ManageModelChanges
bool __fastcall CDOTA_Buff::GetFunctionValue(
        CDOTA_Buff *const this,
        int iFunction,
        ModifierVariant_t *const returnvalue,
        const CModifierParams *const params)
{
  char *v4; // r8
  char *v6; // rax
  _QWORD *v7; // rdi
  const char *v9; // rdx

  if ( this->m_Functions[iFunction].__pfn == 0 )
    return 0;
  v4 = this + 16 * iFunction;
  v6 = *(v4 + 26);
  v7 = (&this->_vptr_CDOTA_Buff + *(v4 + 27));
  if ( (v6 & 1) != 0 )
    v6 = *&v6[*v7 - 1];
  *&returnvalue->m_eType = (v6)(v7, params);
  returnvalue->m_szVal = v9;
  return 1;
}


// CDOTA_Buff::GetDieTime  (line 372, @0x00000000025dee90, libserver.so)
float __fastcall CDOTA_Buff::GetDieTime(CDOTA_Buff *const this)
{
  return this->m_flDieTime;
}


// CDOTA_Buff::GetDuration  (line 380, @0x00000000025deea0, libserver.so)
float __fastcall CDOTA_Buff::GetDuration(CDOTA_Buff *const this)
{
  return this->m_flDuration;
}


// CDOTA_Buff::GetRemainingTime  (line 388, @0x00000000025deeb0, libserver.so)  // inlines: DOTAGameRules, GetGameTime
float __fastcall CDOTA_Buff::GetRemainingTime(CDOTA_Buff *const this)
{
  float v1; // xmm1_4

  v1 = 0.0;
  if ( g_pGameRules != 0 )
    v1 = *&g_pGameRules[18].m_szQuestName[20];
  return this->m_flDieTime - v1;
}


// CDOTA_Buff::GetElapsedTime  (line 396, @0x00000000025deee0, libserver.so)
float __fastcall CDOTA_Buff::GetElapsedTime(CDOTA_Buff *const this)
{
  float v3; // [rsp+Ch] [rbp-14h]

  v3 = (*(this->_vptr_CDOTA_Buff + 31))(this);
  return v3 - (*(this->_vptr_CDOTA_Buff + 33))(this);
}


// CDOTA_Buff::GetTexture  (line 404, @0x00000000025def20, libserver.so)
// callers: CDOTA_Modifier_Black_King_Bar_Immune::GetTexture
const char *__fastcall CDOTA_Buff::GetTexture(CDOTA_Buff *const this)
{
  return "";
}


// CDOTATeamRecipientFilter::~CDOTATeamRecipientFilter  (line 421, @0x000000000262edd0, libserver.so)
// calls: CRecipientFilter::~CRecipientFilter
void __fastcall CDOTATeamRecipientFilter::~CDOTATeamRecipientFilter(CDOTATeamRecipientFilter *const this)
{
  this->_vptr_IRecipientFilter = &off_412BB10;
  CRecipientFilter::~CRecipientFilter(this);
}


// CDOTATeamRecipientFilter::~CDOTATeamRecipientFilter  (line 421, @0x000000000262edf0, libserver.so)  // inlines: ~CDOTATeamRecipientFilter
// calls: CRecipientFilter::~CRecipientFilter, operator delete
void __fastcall CDOTATeamRecipientFilter::~CDOTATeamRecipientFilter(CDOTATeamRecipientFilter *const this)
{
  this->_vptr_IRecipientFilter = &off_412BB10;
  CRecipientFilter::~CRecipientFilter(this);
  operator delete(this);
}


// CDOTATeamRecipientFilter::CDOTATeamRecipientFilter  (line 431, @0x00000000025eac80, libserver.so)  // inlines: GetTeamNumber, ToDOTAPlayer
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::MakeReliable, CRecipientFilter::RemoveAllRecipients, UTIL_PlayerByIndex, CDOTAPlayer::IsACoach, CRecipientFilter::AddRecipient, CDOTAPlayer::GetCoachedTeamNum, CRecipientFilter::~CRecipientFilter, _Unwind_Resume
void __fastcall CDOTATeamRecipientFilter::CDOTATeamRecipientFilter(
        CDOTATeamRecipientFilter *const this,
        int iVisibilityTag)
{
  int v4; // r12d
  CBasePlayer *v5; // rax
  CDOTAPlayer *v6; // rbx
  unsigned int v7; // eax

  CRecipientFilter::CRecipientFilter(this);
  this->_vptr_IRecipientFilter = &off_412BB10;
  CRecipientFilter::MakeReliable(this);
  CRecipientFilter::RemoveAllRecipients(this);
  if ( gpGlobals->maxClients > 0 )
  {
    v4 = 1;
    do
    {
      while ( 1 )
      {
        v5 = UTIL_PlayerByIndex(v4);
        v6 = v5;
        if ( v5 != 0 && (*(v5->_vptr_IHandleEntity + 140))(v5) != 0 )
        {
          v7 = CDOTAPlayer::IsACoach(v6) ? CDOTAPlayer::GetCoachedTeamNum(v6) : v6->m_iTeamNum.m_Value;
          if ( _bittest(&iVisibilityTag, v7) )
            break;
        }
        if ( gpGlobals->maxClients < ++v4 )
          return;
      }
      CRecipientFilter::AddRecipient(this, v6);
      ++v4;
    }
    while ( gpGlobals->maxClients >= v4 );
  }
}


// IncrementBuffTracker  (line 484, @0x0000000002621170, libserver.so)  // inlines: CBuffCountTracker, Element, Find, LeftChild, Node_t, RightChild, operator(), operator[]
// calls: CUtlDict<CBuffCountTracker, int>::Insert
// callers: IncrementBuffMessageTracking
void __fastcall IncrementBuffTracker(CUtlDict<CBuffCountTracker,int> *pTrackerDict, const char *pName, bool bFromFoW)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,CBuffCountTracker,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  __int64 v7; // r15
  UtlRBTreeNode_t<CUtlMap<char const*,CBuffCountTracker,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v8; // rdx
  const char *v10; // [rsp+10h] [rbp-40h] BYREF
  int v11; // [rsp+18h] [rbp-38h]
  int v12; // [rsp+1Ch] [rbp-34h]

  if ( pName != 0 )
  {
    m_Root = pTrackerDict->m_Elements.m_Tree.m_Root;
    v11 = 0;
    v12 = 0;
    v10 = pName;
    if ( m_Root != -1 )
    {
      m_pMemory = pTrackerDict->m_Elements.m_Tree.m_Elements.m_pMemory;
      while ( 1 )
      {
        while ( 1 )
        {
          v7 = m_Root;
          if ( pTrackerDict->m_Elements.m_Tree.m_LessFunc.m_LessFunc(&v10, &m_pMemory[v7].m_Data) == 0 )
            break;
          m_pMemory = pTrackerDict->m_Elements.m_Tree.m_Elements.m_pMemory;
          m_Root = m_pMemory[m_Root].m_Left;
          if ( m_Root == -1 )
            goto LABEL_8;
        }
        if ( pTrackerDict->m_Elements.m_Tree.m_LessFunc.m_LessFunc(
               &pTrackerDict->m_Elements.m_Tree.m_Elements.m_pMemory[v7].m_Data,
               &v10) == 0 )
          break;
        m_pMemory = pTrackerDict->m_Elements.m_Tree.m_Elements.m_pMemory;
        m_Root = m_pMemory[v7].m_Right;
        if ( m_Root == -1 )
          goto LABEL_8;
      }
      v8 = &pTrackerDict->m_Elements.m_Tree.m_Elements.m_pMemory[v7];
      if ( !bFromFoW )
        goto LABEL_11;
LABEL_9:
      ++v8->m_Data.elem.iCountFoW;
      return;
    }
  }
LABEL_8:
  v8 = &pTrackerDict->m_Elements.m_Tree.m_Elements.m_pMemory[CUtlDict<CBuffCountTracker,int>::Insert(
                                                               pTrackerDict,
                                                               pName)];
  if ( bFromFoW )
    goto LABEL_9;
LABEL_11:
  ++v8->m_Data.elem.iCount;
}


// IncrementBuffMessageTracking  (line 505, @0x0000000002621270, libserver.so)  // inlines: GetBool, GetInt
// calls: IncrementBuffTracker
// callers: CDOTA_Buff::SendBuffCreationToClients, CDOTA_Buff::SendBuffRemovalToClients, CDOTA_Buff::SendBuffRefreshToClients
// globals: m_BuffTrackingRemove, m_BuffTrackingTotal, m_BuffTrackingCreate, m_BuffTrackingRefresh
void __fastcall IncrementBuffMessageTracking(const char *pName, int iType, bool bFromFoW)
{
  bool v4; // r12
  const char *v5; // rsi
  CUtlDict<CBuffCountTracker,int> *v6; // rdi

  if ( net_debug_to_file.m_pParent->m_Value.m_nValue != 0 )
  {
    switch ( iType )
    {
      case 1:
        v4 = bFromFoW;
        v5 = pName;
        v6 = &m_BuffTrackingRemove;
        break;
      case 2:
        v4 = bFromFoW;
        v5 = pName;
        v6 = &m_BuffTrackingRefresh;
        break;
      case 0:
        v4 = bFromFoW;
        v5 = pName;
        v6 = &m_BuffTrackingCreate;
        break;
      default:
        return;
    }
    IncrementBuffTracker(v6, v5, bFromFoW);
    IncrementBuffTracker(&m_BuffTrackingTotal, pName, v4);
  }
}


// dota_dump_buff_message_count  (line 533, @0x00000000025e03b0, libserver.so)  // inlines: Element, operator[]
// calls: Msg
// strings: "\n---------- CREATE ----------\n", "%d, %d, %d, %s\n", "\n---------- REMOVE ----------\n", "\n---------- REFRESH ----------\n", "\n---------- TOTAL ----------\n"
void __fastcall dota_dump_buff_message_count(const CCommandContext *const ctx, const CCommand *const args)
{
  int v2; // ebx
  unsigned __int64 i; // xmm0_8
  __int64 v4; // rax
  int v5; // ebx
  unsigned __int64 j; // xmm0_8
  __int64 v7; // rax
  int v8; // ebx
  unsigned __int64 k; // xmm0_8
  __int64 v10; // rax
  int v11; // ebx
  __int64 v12; // rax

  v2 = 0;
  for ( i = Msg("\n---------- CREATE ----------\n", args).m128_u64[0];
        v2 < m_BuffTrackingCreate.m_Elements.m_Tree.m_NumElements;
        i = Msg(
              "%d, %d, %d, %s\n",
              m_BuffTrackingCreate.m_Elements.m_Tree.m_Elements.m_pMemory[v4].m_Data.elem.iCount,
              m_BuffTrackingCreate.m_Elements.m_Tree.m_Elements.m_pMemory[v4].m_Data.elem.iCountFoW,
              m_BuffTrackingCreate.m_Elements.m_Tree.m_Elements.m_pMemory[v4].m_Data.elem.iCount
            + m_BuffTrackingCreate.m_Elements.m_Tree.m_Elements.m_pMemory[v4].m_Data.elem.iCountFoW,
              m_BuffTrackingCreate.m_Elements.m_Tree.m_Elements.m_pMemory[v4].m_Data.key).m128_u64[0] )
  {
    v4 = v2++;
  }
  v5 = 0;
  for ( j = Msg("\n---------- REMOVE ----------\n", *&i).m128_u64[0];
        v5 < m_BuffTrackingRemove.m_Elements.m_Tree.m_NumElements;
        j = Msg(
              "%d, %d, %d, %s\n",
              m_BuffTrackingRemove.m_Elements.m_Tree.m_Elements.m_pMemory[v7].m_Data.elem.iCount,
              m_BuffTrackingRemove.m_Elements.m_Tree.m_Elements.m_pMemory[v7].m_Data.elem.iCountFoW,
              m_BuffTrackingRemove.m_Elements.m_Tree.m_Elements.m_pMemory[v7].m_Data.elem.iCount
            + m_BuffTrackingRemove.m_Elements.m_Tree.m_Elements.m_pMemory[v7].m_Data.elem.iCountFoW,
              m_BuffTrackingRemove.m_Elements.m_Tree.m_Elements.m_pMemory[v7].m_Data.key).m128_u64[0] )
  {
    v7 = v5++;
  }
  v8 = 0;
  for ( k = Msg("\n---------- REFRESH ----------\n", *&j).m128_u64[0];
        v8 < m_BuffTrackingRefresh.m_Elements.m_Tree.m_NumElements;
        k = Msg(
              "%d, %d, %d, %s\n",
              m_BuffTrackingRefresh.m_Elements.m_Tree.m_Elements.m_pMemory[v10].m_Data.elem.iCount,
              m_BuffTrackingRefresh.m_Elements.m_Tree.m_Elements.m_pMemory[v10].m_Data.elem.iCountFoW,
              m_BuffTrackingRefresh.m_Elements.m_Tree.m_Elements.m_pMemory[v10].m_Data.elem.iCount
            + m_BuffTrackingRefresh.m_Elements.m_Tree.m_Elements.m_pMemory[v10].m_Data.elem.iCountFoW,
              m_BuffTrackingRefresh.m_Elements.m_Tree.m_Elements.m_pMemory[v10].m_Data.key).m128_u64[0] )
  {
    v10 = v8++;
  }
  v11 = 0;
  Msg("\n---------- TOTAL ----------\n", *&k);
  if ( m_BuffTrackingTotal.m_Elements.m_Tree.m_NumElements != 0 )
  {
    do
    {
      v12 = v11++;
      Msg(
        "%d, %d, %d, %s\n",
        m_BuffTrackingTotal.m_Elements.m_Tree.m_Elements.m_pMemory[v12].m_Data.elem.iCount,
        m_BuffTrackingTotal.m_Elements.m_Tree.m_Elements.m_pMemory[v12].m_Data.elem.iCountFoW,
        m_BuffTrackingTotal.m_Elements.m_Tree.m_Elements.m_pMemory[v12].m_Data.elem.iCount
      + m_BuffTrackingTotal.m_Elements.m_Tree.m_Elements.m_pMemory[v12].m_Data.elem.iCountFoW,
        m_BuffTrackingTotal.m_Elements.m_Tree.m_Elements.m_pMemory[v12].m_Data.key);
    }
    while ( v11 < m_BuffTrackingTotal.m_Elements.m_Tree.m_NumElements );
  }
}


// sv_dota_dump_modifier_stringtable  (line 565, @0x0000000002623290, libserver.so)
// calls: Msg, CDOTAModifierBuffTableEntry::~CDOTAModifierBuffTableEntry, CDOTAModifierBuffTableEntry::CDOTAModifierBuffTableEntry, google::protobuf::MessageLite::ParseFromArray(void const*,int), ModifierFactoryDictionary, CModifieractoryDictionary::GetNameByIndex, _Unwind_Resume
// strings: "index,length,type,name,parent,index,creation,duration\n", "%d,Error parsing modifier!\n", " active", "%d,%d,%s,%s,%d,%d,%4.2f,%4.2f\n"
// globals: g_pStringTableActiveModifiers
void __fastcall sv_dota_dump_modifier_stringtable(const CCommandContext *const ctx, const CCommand *const args)
{
  int v2; // ebx
  double v3; // xmm0_8
  const void *v4; // r13
  int v5; // r15d
  int v6; // r13d
  CModifieractoryDictionary *v7; // rax
  const char *NameByIndex; // r8
  const char *v9; // rcx
  int v10; // [rsp+Ch] [rbp-11Ch]
  double v11; // [rsp+10h] [rbp-118h]
  double v12; // [rsp+18h] [rbp-110h]
  int v13; // [rsp+2Ch] [rbp-FCh] BYREF
  _BYTE v14[4]; // [rsp+30h] [rbp-F8h] BYREF
  int v15; // [rsp+48h] [rbp-E0h]
  int v16; // [rsp+4Ch] [rbp-DCh]
  int v17; // [rsp+50h] [rbp-D8h]
  int v18; // [rsp+58h] [rbp-D0h]
  float v19; // [rsp+64h] [rbp-C4h]
  float v20; // [rsp+68h] [rbp-C0h]

  if ( g_pStringTableActiveModifiers != 0 )
  {
    v2 = 0;
    *&v3 = Msg("index,length,type,name,parent,index,creation,duration\n", args).m128_u64[0];
    while ( v2 < (*(g_pStringTableActiveModifiers->_vptr_INetworkStringTable + 4))(g_pStringTableActiveModifiers, v3) )
    {
      v13 = 0;
      v4 = (*(g_pStringTableActiveModifiers->_vptr_INetworkStringTable + 11))(g_pStringTableActiveModifiers, v2, &v13);
      if ( v4 != 0 )
      {
        CDOTAModifierBuffTableEntry::CDOTAModifierBuffTableEntry(v14);
        if ( google::protobuf::MessageLite::ParseFromArray(v14, v4, v13) != 0 )
        {
          v12 = v20;
          v11 = v19;
          v5 = v17;
          v6 = v16;
          v10 = v18;
          v7 = ModifierFactoryDictionary();
          NameByIndex = CModifieractoryDictionary::GetNameByIndex(v7, v10);
          v9 = " active";
          if ( v15 != 1 )
            v9 = "removed";
          Msg("%d,%d,%s,%s,%d,%d,%4.2f,%4.2f\n", v2, v13, v9, NameByIndex, v6, v5, v11, v12);
        }
        else
        {
          Msg("%d,Error parsing modifier!\n", v2);
        }
        CDOTAModifierBuffTableEntry::~CDOTAModifierBuffTableEntry(v14);
      }
      ++v2;
    }
  }
}


// CDOTA_Buff::AddCustomTransmiterData  (line 606, @0x00000000025def30, libserver.so)
// callers: CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion::AddCustomTransmiterData, CDOTA_Modifier_DeathProphet_Exorcism::AddCustomTransmiterData, CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::AddCustomTransmiterData, CDOTA_Modifier_Venomancer_PoisonStingBase::AddCustomTransmiterData, CDOTA_Modifier_Venomancer_PoisonStingWard::AddCustomTransmiterData, CDOTA_Modifier_Warlock_Upheaval::AddCustomTransmiterData, CDOTA_Modifier_BountyHunter_Track::AddCustomTransmiterData, CDOTA_Modifier_Gyrocopter_Call_Down_Slow::AddCustomTransmiterData, CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor::AddCustomTransmiterData, CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance::AddCustomTransmiterData, CDOTA_Modifier_MonkeyKing_BounceLeap::AddCustomTransmiterData, CDOTA_Modifier_MonkeyKing_ArcToGround::AddCustomTransmiterData (23 total)
void __fastcall CDOTA_Buff::AddCustomTransmiterData(CDOTA_Buff *const this, CDOTAModifierBuffTableEntry *const entry)
{
  ;
}


// CDOTA_Buff::MakeEntry  (line 619, @0x0000000002600e20, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetAbility, GetEHandle, GetEntryIndex, GetInstance, GetLevel, GetParent, GetSerialNumber, IsProvidedByAura, Set, String, ToCStr, operator==<CBaseEntity>, set_ability, set_ability_level, set_aura, set_caster, set_creation_time, set_duration, set_entry_type, set_has_ability, set_has_ability_level, set_has_aura, set_has_caster, set_has_creation_time, set_has_duration, set_has_entry_type, set_has_index, set_has_modifier_class, set_has_parent, set_has_serial_num, set_has_stack_count, set_index, set_modifier_class, set_parent, set_serial_num, set_stack_count
// calls: CEntityHandle::operator CEntityInstance*, Server_EHandleToInt, ModifierFactoryDictionary, CModifieractoryDictionary::GetIndexByName, CDOTAModifierBuffTableEntry::default_instance, CDOTA_Buff::GetCaster
// callers: CDOTA_Buff::SendBuffCreationToClients, CDOTA_Buff::SendBuffRefreshToClients
void __fastcall CDOTA_Buff::MakeEntry(CDOTA_Buff *const this, CDOTAModifierBuffTableEntry *const entry)
{
  int v4; // r13d
  CEntityInstance *v5; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v7; // cx
  int m_iIndex; // eax
  int m_iSerialNumber; // eax
  CModifieractoryDictionary *v10; // rax
  const char *v11; // rsi
  UtlSymLargeId_t m_Id; // r13
  int IndexByName; // eax
  int v14; // r13d
  CEntityInstance *v15; // rax
  CEntityIdentity *v16; // rdx
  int v17; // eax
  __int16 v18; // cx
  int m_CScriptComponent_high; // eax
  int v20; // r13d
  int v21; // eax
  int v22; // edx
  int v23; // edx
  float v24; // xmm0_4
  int v25; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *v27; // rax
  int v28; // edx
  __int16 v29; // cx
  uint32 v30; // eax
  char v31; // al
  float v32; // xmm0_4
  int v33; // r13d
  float v34; // [rsp+Ch] [rbp-44h]
  EHANDLE hIn; // [rsp+10h] [rbp-40h] BYREF

  *(entry + 6) = 1;
  v4 = *(entry + 4);
  *(entry + 4) = v4 | 1;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
  hIn.m_Index = -1;
  if ( v5 != 0 )
  {
    m_pEntity = v5->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v7 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      hIn.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v7 & 0x7FFF;
    }
  }
  *(entry + 7) = Server_EHandleToInt(&hIn);
  *(entry + 4) = v4 | 3;
  m_iIndex = this->m_iIndex;
  *(entry + 4) = v4 | 7;
  *(entry + 8) = m_iIndex;
  m_iSerialNumber = this->m_iSerialNumber;
  *(entry + 4) = v4 | 0xF;
  *(entry + 9) = m_iSerialNumber;
  if ( this->m_class.u.m_Id != 0 )
  {
    m_Id = this->m_class.u.m_Id;
    v10 = ModifierFactoryDictionary();
    v11 = m_Id;
  }
  else
  {
    v10 = ModifierFactoryDictionary();
    v11 = "";
  }
  IndexByName = CModifieractoryDictionary::GetIndexByName(v10, v11);
  v14 = *(entry + 4);
  *(entry + 10) = IndexByName;
  *(entry + 4) = v14 | 0x10;
  v15 = CEntityHandle::operator CEntityInstance *(&this->m_hAbility);
  if ( v15 != 0 )
  {
    hIn.m_Index = -1;
    v16 = v15->m_pEntity;
    if ( v16 != 0 )
    {
      v17 = (v16->m_EHandle.m_Index >> 15) - (v16->m_flags & 1);
      v18 = 0x7FFF;
      if ( v16->m_EHandle.m_Index != -1 )
        v18 = v16->m_EHandle.m_Index & 0x7FFF;
      LOWORD(hIn.m_Index) = v18 | hIn.m_Index & 0x8000;
      hIn.m_Index = (v17 << 15) | hIn.m_Index & 0x7FFF;
    }
    *(entry + 16) = Server_EHandleToInt(&hIn);
    *(entry + 4) = v14 | 0x410;
    m_CScriptComponent_high = HIDWORD(CEntityHandle::operator CEntityInstance *(&this->m_hAbility)[16].m_CScriptComponent);
    *(entry + 4) = v14 | 0x430;
    *(entry + 11) = m_CScriptComponent_high;
  }
  v20 = (*(this->_vptr_CDOTA_Buff + 27))(this);
  if ( v20 == *(CDOTAModifierBuffTableEntry::default_instance() + 12) )
  {
    v23 = *(entry + 4);
  }
  else
  {
    v21 = (*(this->_vptr_CDOTA_Buff + 27))(this);
    v22 = *(entry + 4);
    *(entry + 12) = v21;
    v23 = v22 | 0x40;
    *(entry + 4) = v23;
  }
  LOBYTE(v23) = v23 | 0x80;
  v24 = this->m_flDieTime - this->m_flDuration;
  *(entry + 4) = v23;
  *(entry + 13) = v24;
  v34 = (*(this->_vptr_CDOTA_Buff + 31))(this);
  if ( v34 == *(CDOTAModifierBuffTableEntry::default_instance() + 14) )
  {
    v25 = *(entry + 4);
  }
  else
  {
    v32 = (*(this->_vptr_CDOTA_Buff + 31))(this, v34);
    v33 = *(entry + 4);
    *(entry + 14) = v32;
    v25 = v33 | 0x100;
    *(entry + 4) = v25;
  }
  Caster = CDOTA_Buff::GetCaster(this);
  if ( Caster != 0 )
  {
    hIn.m_Index = -1;
    v27 = Caster->m_pEntity;
    if ( v27 != 0 )
    {
      v28 = (v27->m_EHandle.m_Index >> 15) - (v27->m_flags & 1);
      v29 = 0x7FFF;
      if ( v27->m_EHandle.m_Index != -1 )
        v29 = v27->m_EHandle.m_Index & 0x7FFF;
      LOWORD(hIn.m_Index) = v29 | hIn.m_Index & 0x8000;
      hIn.m_Index = (v28 << 15) | hIn.m_Index & 0x7FFF;
    }
    v25 |= 0x200u;
    v30 = Server_EHandleToInt(&hIn);
    *(entry + 4) = v25;
    *(entry + 15) = v30;
  }
  v31 = *(this + 138);
  *(entry + 4) = v25 | 0x400000;
  *(entry + 133) = (v31 & 0x10) != 0;
  (*(this->_vptr_CDOTA_Buff + 10))(this, entry);
}


// CDOTA_Buff::SendBuffCreationToClients  (line 663, @0x0000000002621310, libserver.so)  // inlines: AddMultipleToTail, EnsureCount, Get, GetEHandle, GetEntryIndex, GetInstance, GetName, GetParent, GetSerialNumber, RemoveMultipleFromTail, Set, SetStringIndex, String, Tail, ToCStr, operator=, operator[]
// calls: CDOTAModifierBuffTableEntry::CDOTAModifierBuffTableEntry, CDOTA_Buff::MakeEntry, CDOTAModifierBuffTableEntry::ByteSize, CDOTAModifierBuffTableEntry::SerializeWithCachedSizesToArray, CUtlVectorBase<DOTABuffStringIndexCache_t, CUtlMemory<DOTABuffStringIndexCache_t, int> >::InsertMultipleBefore, CEntityHandle::operator CEntityInstance*, IncrementBuffMessageTracking, CDOTAModifierBuffTableEntry::~CDOTAModifierBuffTableEntry, Warning, V_snprintf, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_ModifierManager::SendBuffsToClients, CDOTA_Buff::DoRefresh, CDOTA_ModifierManager::AddNewModifier
// strings: "Unexpected issue serializing buff!\n", "Unable to add modifer to ActiveModifier table its probably full!"
// globals: g_pStringTableActiveModifiers, g_DOTABuffStringIndexCache, g_DOTABuffStringIndexFreeList
void __fastcall CDOTA_Buff::SendBuffCreationToClients(CDOTA_Buff *const this, int iTeamBits, bool bFromFoW)
{
  void *v6; // rsp
  __int64 m_iStringIndex; // r15
  __int64 v8; // r15
  CEntityInstance *v9; // rax
  DOTABuffStringIndexCache_t *v10; // rcx
  CEntityIdentity *m_pEntity; // rdx
  int v12; // eax
  __int16 v13; // si
  DOTABuffStringIndexCache_t *v14; // r15
  const char *m_pAsString; // rdi
  int v16; // eax
  int v17; // eax
  unsigned int entrySize; // [rsp+Ch] [rbp-124h]
  _BYTE v19[192]; // [rsp+10h] [rbp-120h] BYREF
  char idString[40]; // [rsp+D0h] [rbp-60h] BYREF
  unsigned __int64 v21; // [rsp+F8h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  if ( (*(this->_vptr_CDOTA_Buff + 8))(this) == 0
    || iTeamBits == 0
    || (*(this->_vptr_CDOTA_Buff + 31))(this) > 0.0 && (*(this->_vptr_CDOTA_Buff + 31))(this) < 0.1 )
  {
    return;
  }
  CDOTAModifierBuffTableEntry::CDOTAModifierBuffTableEntry(v19);
  CDOTA_Buff::MakeEntry(this, v19);
  entrySize = CDOTAModifierBuffTableEntry::ByteSize(v19);
  v6 = alloca(((entrySize + 31) & 0xFFFFFFF0) + 16LL);
  if ( CDOTAModifierBuffTableEntry::SerializeWithCachedSizesToArray(v19, (v19 & 0xFFFFFFFFFFFFFFEFLL)) == 0 )
    Warning("Unexpected issue serializing buff!\n");
  m_iStringIndex = this->m_iStringIndex;
  if ( m_iStringIndex >= 0 )
  {
    (*(g_pStringTableActiveModifiers->_vptr_INetworkStringTable + 10))(
      g_pStringTableActiveModifiers,
      m_iStringIndex,
      entrySize,
      v19 & 0xFFFFFFFFFFFFFFEFLL,
      bFromFoW);
LABEL_10:
    if ( m_iStringIndex + 1 > g_DOTABuffStringIndexCache.m_Size )
      CUtlVectorBase<DOTABuffStringIndexCache_t,CUtlMemory<DOTABuffStringIndexCache_t,int>>::InsertMultipleBefore(
        &g_DOTABuffStringIndexCache,
        g_DOTABuffStringIndexCache.m_Size,
        m_iStringIndex + 1 - g_DOTABuffStringIndexCache.m_Size);
    v8 = m_iStringIndex;
    v9 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
    v10 = &g_DOTABuffStringIndexCache.m_Memory.m_pMemory[v8];
    if ( v9 != 0 && (m_pEntity = v9->m_pEntity) != 0 )
    {
      v12 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v13 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v10->m_hEntity.m_Index) = v13 | v10->m_hEntity.m_Index & 0x8000;
      v10->m_hEntity.m_Index = (v12 << 15) | v10->m_hEntity.m_Index & 0x7FFF;
    }
    else
    {
      v10->m_hEntity.m_Index = -1;
    }
    g_DOTABuffStringIndexCache.m_Memory.m_pMemory[v8].m_serialNum = this->m_iSerialNumber;
    g_DOTABuffStringIndexCache.m_Memory.m_pMemory[v8].m_index = this->m_iIndex;
    v14 = &g_DOTABuffStringIndexCache.m_Memory.m_pMemory[v8];
    v14->m_teamSendMask = (*(this->_vptr_CDOTA_Buff + 86))(this);
    goto LABEL_18;
  }
  if ( g_DOTABuffStringIndexFreeList.m_Size != 0 )
  {
    m_iStringIndex = g_DOTABuffStringIndexFreeList.m_Memory.m_pMemory[--g_DOTABuffStringIndexFreeList.m_Size];
    (*(g_pStringTableActiveModifiers->_vptr_INetworkStringTable + 10))(
      g_pStringTableActiveModifiers,
      m_iStringIndex,
      entrySize,
      v19 & 0xFFFFFFFFFFFFFFEFLL,
      bFromFoW);
    this->m_iStringIndex = m_iStringIndex;
    if ( m_iStringIndex >= 0 )
      goto LABEL_10;
  }
  v16 = (*(g_pStringTableActiveModifiers->_vptr_INetworkStringTable + 4))(g_pStringTableActiveModifiers);
  V_snprintf(idString, 32, "%d", v16);
  v17 = (*(g_pStringTableActiveModifiers->_vptr_INetworkStringTable + 8))(
          g_pStringTableActiveModifiers,
          1,
          idString,
          entrySize,
          v19 & 0xFFFFFFFFFFFFFFEFLL);
  m_iStringIndex = v17;
  if ( v17 == 0xFFFF )
  {
    Warning("Unable to add modifer to ActiveModifier table its probably full!");
    this->m_iStringIndex = -1;
  }
  else
  {
    this->m_iStringIndex = v17;
    if ( v17 >= 0 )
      goto LABEL_10;
  }
LABEL_18:
  m_pAsString = "";
  if ( this->m_name.u.m_Id != 0 )
    m_pAsString = this->m_name.u.m_pAsString;
  IncrementBuffMessageTracking(m_pAsString, 0, bFromFoW);
  CDOTAModifierBuffTableEntry::~CDOTAModifierBuffTableEntry(v19);
}


// CDOTA_Buff::SendBuffRemovalToClients  (line 746, @0x00000000026216d0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<int>, Element, Get, GetEHandle, GetEntryIndex, GetInstance, GetName, GetParent, GetSerialNumber, GrowMemory, Set, String, Term, ToCStr, operator[], set_entry_type, set_has_entry_type, set_has_serial_num, set_index, set_parent, set_serial_num
// calls: IncrementBuffMessageTracking, CDOTAModifierBuffTableEntry::CDOTAModifierBuffTableEntry, CEntityHandle::operator CEntityInstance*, Server_EHandleToInt, CDOTAModifierBuffTableEntry::ByteSize, CDOTAModifierBuffTableEntry::SerializeWithCachedSizesToArray, CDOTAModifierBuffTableEntry::~CDOTAModifierBuffTableEntry, CUtlMemory<int, int>::Grow, Warning, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_Buff::~CDOTA_Buff
// strings: "Unexpected issue serializing buff!\n"
// globals: g_DOTABuffStringIndexCache, g_pStringTableActiveModifiers, g_DOTABuffStringIndexFreeList
void __fastcall CDOTA_Buff::SendBuffRemovalToClients(CDOTA_Buff *const this)
{
  const char *m_pAsString; // rdi
  int m_iStringIndex; // r12d
  int v4; // r14d
  CEntityInstance *v5; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v7; // cx
  uint32 v8; // eax
  unsigned int v9; // r14d
  void *v10; // rsp
  __int64 m_Size; // rbx
  int v12; // eax
  int *v13; // rax
  EHANDLE hIn; // [rsp+0h] [rbp-F0h] BYREF
  _BYTE v15[16]; // [rsp+10h] [rbp-E0h] BYREF
  int v16; // [rsp+20h] [rbp-D0h]
  int v17; // [rsp+28h] [rbp-C8h]
  uint32 v18; // [rsp+2Ch] [rbp-C4h]
  int m_iIndex; // [rsp+30h] [rbp-C0h]
  int m_iSerialNumber; // [rsp+34h] [rbp-BCh]
  unsigned __int64 v21; // [rsp+C8h] [rbp-28h]

  v21 = __readfsqword(0x28u);
  if ( (*(this->_vptr_CDOTA_Buff + 8))(this) != 0 )
  {
    m_pAsString = "";
    if ( this->m_name.u.m_Id != 0 )
      m_pAsString = this->m_name.u.m_pAsString;
    IncrementBuffMessageTracking(m_pAsString, 1, 0);
    m_iStringIndex = this->m_iStringIndex;
    if ( m_iStringIndex >= 0 )
    {
      CDOTAModifierBuffTableEntry::CDOTAModifierBuffTableEntry(v15);
      v4 = v16;
      v17 = 2;
      v16 |= 1u;
      v5 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
      hIn.m_Index = -1;
      if ( v5 != 0 )
      {
        m_pEntity = v5->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v7 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          hIn.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v7 & 0x7FFF;
        }
      }
      v8 = Server_EHandleToInt(&hIn);
      v16 = v4 | 0xF;
      v18 = v8;
      m_iIndex = this->m_iIndex;
      m_iSerialNumber = this->m_iSerialNumber;
      v9 = CDOTAModifierBuffTableEntry::ByteSize(v15);
      v10 = alloca(((v9 + 31) & 0xFFFFFFF0) + 16LL);
      if ( CDOTAModifierBuffTableEntry::SerializeWithCachedSizesToArray(v15, (v15 & 0xFFFFFFFFFFFFFFEFLL)) == 0 )
        Warning("Unexpected issue serializing buff!\n");
      if ( m_iStringIndex < g_DOTABuffStringIndexCache.m_Size )
        g_DOTABuffStringIndexCache.m_Memory.m_pMemory[m_iStringIndex].m_hEntity.m_Index = -1;
      (*(g_pStringTableActiveModifiers->_vptr_INetworkStringTable + 10))(
        g_pStringTableActiveModifiers,
        m_iStringIndex,
        v9,
        v15 & 0xFFFFFFFFFFFFFFEFLL,
        0);
      m_Size = g_DOTABuffStringIndexFreeList.m_Size;
      v12 = g_DOTABuffStringIndexFreeList.m_Size;
      if ( g_DOTABuffStringIndexFreeList.m_Size == g_DOTABuffStringIndexFreeList.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<int,int>::Grow(&g_DOTABuffStringIndexFreeList.m_Memory, 1);
        v12 = g_DOTABuffStringIndexFreeList.m_Size;
      }
      g_DOTABuffStringIndexFreeList.m_Size = v12 + 1;
      v13 = &g_DOTABuffStringIndexFreeList.m_Memory.m_pMemory[m_Size];
      if ( v13 != 0 )
        *v13 = m_iStringIndex;
      CDOTAModifierBuffTableEntry::~CDOTAModifierBuffTableEntry(v15);
    }
  }
}


// CDOTA_Buff::SendBuffRefreshToClients  (line 786, @0x0000000002621f00, libserver.so)  // inlines: GetName, String, ToCStr
// calls: CDOTAModifierBuffTableEntry::CDOTAModifierBuffTableEntry, CDOTA_Buff::MakeEntry, CDOTAModifierBuffTableEntry::ByteSize, CDOTAModifierBuffTableEntry::SerializeWithCachedSizesToArray, IncrementBuffMessageTracking, CDOTAModifierBuffTableEntry::~CDOTAModifierBuffTableEntry, Warning, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_Modifier_Tower_Aura_Bonus::OnIntervalThink, CDOTA_Modifier_HallOfFame_Glow::SetGlowingPlayerIDs, CDOTA_Buff::SetDuration, CDOTA_Buff::IncrementStackCount, CDOTA_Buff::DecrementStackCount, CDOTA_Buff::SetStackCount, CDOTA_Buff::DoRefresh, CDOTA_Modifier_Spawnlord_Master_Stomp::CalculateArmorReduction, CDOTA_Modifier_BountyHunter_Track::OnThinkInternal, CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor::CalculateArmorReduction, CDOTA_Modifier_MonkeyKing_BounceLeap::OnIntervalThink, CDOTA_Modifier_MonkeyKing_ArcToGround::OnIntervalThink (13 total)
// strings: "Unexpected issue serializing buff!\n"
// globals: g_pStringTableActiveModifiers
void __fastcall CDOTA_Buff::SendBuffRefreshToClients(CDOTA_Buff *const this)
{
  unsigned int v2; // r14d
  void *v3; // rsp
  const char *m_pAsString; // rdi
  _BYTE v5[15]; // [rsp+0h] [rbp-E0h] BYREF
  _QWORD v6[26]; // [rsp+10h] [rbp-D0h] BYREF

  v6[21] = __readfsqword(0x28u);
  if ( (*(this->_vptr_CDOTA_Buff + 8))(this) != 0 && this->m_iStringIndex >= 0 )
  {
    CDOTAModifierBuffTableEntry::CDOTAModifierBuffTableEntry(v5);
    CDOTA_Buff::MakeEntry(this, v5);
    v2 = CDOTAModifierBuffTableEntry::ByteSize(v5);
    v3 = alloca(((v2 + 31) & 0xFFFFFFF0) + 16LL);
    if ( CDOTAModifierBuffTableEntry::SerializeWithCachedSizesToArray(v5, (v6 & 0xFFFFFFFFFFFFFFEFLL)) == 0 )
      Warning("Unexpected issue serializing buff!\n");
    (*(g_pStringTableActiveModifiers->_vptr_INetworkStringTable + 10))(
      g_pStringTableActiveModifiers,
      this->m_iStringIndex,
      v2,
      v6 & 0xFFFFFFFFFFFFFFEFLL,
      0);
    m_pAsString = "";
    if ( this->m_name.u.m_Id != 0 )
      m_pAsString = this->m_name.u.m_pAsString;
    IncrementBuffMessageTracking(m_pAsString, 2, 0);
    CDOTAModifierBuffTableEntry::~CDOTAModifierBuffTableEntry(v5);
  }
}


// IsBuffVisibleToPlayer  (line 815, @0x00000000025f24a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_ModifierManager::FindBuffByInternalIndex, CDOTAPlayer::IsACoach, CDOTAPlayer::GetCoachedTeamNum
// callers: CDOTAGamerules::ShouldPlayerReceiveStringTableUserData
// globals: g_DOTABuffStringIndexCache, CEntityHandle::gm_pEntityList
bool __fastcall IsBuffVisibleToPlayer(CDOTAPlayer *pPlayer, int stringNumber)
{
  char v2; // bl
  DOTABuffStringIndexCache_t *v5; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *m_pInstance; // rdi
  CDOTA_Buff *BuffByInternalIndex; // r13
  char CoachedTeamNum; // bl

  v2 = 1;
  if ( g_DOTABuffStringIndexCache.m_Size > stringNumber )
  {
    v5 = &g_DOTABuffStringIndexCache.m_Memory.m_pMemory[stringNumber];
    if ( v5->m_hEntity.m_Index + 2 > 1 )
    {
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_hEntity.m_Index) >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[v5->m_hEntity.m_Index & 0x1FF];
        if ( v7 != 0 && v5->m_hEntity.m_Index == v7->m_EHandle.m_Index )
        {
          m_pInstance = v7->m_pInstance;
          if ( v7->m_pInstance != 0 )
          {
            v2 = BYTE3(m_pInstance[7]._vptr_IHandleEntity);
            if ( v2 == 0 )
              return 1;
            BuffByInternalIndex = CDOTA_ModifierManager::FindBuffByInternalIndex(
                                    &m_pInstance[64].m_worldGroupId,
                                    v5->m_index);
            if ( BuffByInternalIndex != 0 )
            {
              if ( CDOTAPlayer::IsACoach(pPlayer) )
                CoachedTeamNum = CDOTAPlayer::GetCoachedTeamNum(pPlayer);
              else
                CoachedTeamNum = pPlayer->m_iTeamNum.m_Value;
              return ((*(BuffByInternalIndex->_vptr_CDOTA_Buff + 86))(BuffByInternalIndex) >> CoachedTeamNum) & 1;
            }
          }
        }
      }
    }
  }
  return v2;
}


// CDOTA_Buff::DoCreate  (line 848, @0x00000000025e8df0, libserver.so)  // inlines: DOTAGameRules, Get, GetGameTime, GetInstance, GetTeamNumber
// calls: KeyValues::GetFloat, CEntityHandle::operator CEntityInstance*, KeyValues::GetInt
// callers: CDOTA_Modifier_DataDriven::DoCreate, CDOTA_Modifier_Lua::DoCreate
// strings: "creationtime"
void __fastcall CDOTA_Buff::DoCreate(CDOTA_Buff *const this, KeyValues *pKV)
{
  float v2; // xmm1_4
  float v5; // xmm1_4
  float v6; // xmm0_4
  int (**vptr_CDOTA_Buff)(...); // rax
  int (*v8)(...); // r13
  float Float; // xmm0_4
  CEntityInstance *v10; // rax
  float v11; // xmm1_4
  float v12; // xmm0_4
  int (**v13)(...); // rax

  this->m_flCreationTime = KeyValues::GetFloat(pKV, "creationtime", v2);
  v6 = 0.0;
  this->m_iCreationFrame = gpGlobals->framecount;
  if ( g_pGameRules != 0 )
    v6 = *&g_pGameRules[18].m_szQuestName[20];
  vptr_CDOTA_Buff = this->_vptr_CDOTA_Buff;
  this->m_flPreviousTick = v6;
  *&this->m_flThinkInterval = 3212836864LL;
  v8 = vptr_CDOTA_Buff[63];
  Float = KeyValues::GetFloat(pKV, "duration", v5);
  v8(this, 0, Float);
  v10 = CEntityHandle::operator CEntityInstance *(&this->m_hCaster);
  if ( v10 != 0 )
    this->m_iTeam = HIBYTE(v10[7].m_CScriptComponent);
  else
    this->m_iTeam = 2;
  this->m_iDOTDamageValue = KeyValues::GetInt(pKV, "dot_damage", 1);
  v12 = KeyValues::GetFloat(pKV, "dot_interval", v11);
  v13 = this->_vptr_CDOTA_Buff;
  this->m_flDOTInterval = v12;
  this->m_flDOTTimeAccumulator = 0.0;
  v13[65](this);
}


// CDOTA_Buff::PostCreate  (line 877, @0x00000000025ead60, libserver.so)
void __fastcall CDOTA_Buff::PostCreate(CDOTA_Buff *const this, KeyValues *pKV)
{
  ;
}


// CDOTA_Buff::SetDuration  (line 926, @0x0000000002622220, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// calls: CDOTA_Buff::SendBuffRefreshToClients
void __fastcall CDOTA_Buff::SetDuration(CDOTA_Buff *const this, float a2, float flDuration, bool bInformClient)
{
  float v4; // xmm1_4

  v4 = 0.0;
  this->m_flDuration = a2;
  if ( g_pGameRules != 0 )
    v4 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_flDieTime = a2 + v4;
  if ( bInformClient )
    CDOTA_Buff::SendBuffRefreshToClients(this);
}


// CDOTA_Buff::IncrementStackCount  (line 945, @0x0000000002622260, libserver.so)
// calls: CDOTA_Buff::SendBuffRefreshToClients
void __fastcall CDOTA_Buff::IncrementStackCount(CDOTA_Buff *const this)
{
  ++this->m_iStackCount;
  (*(this->_vptr_CDOTA_Buff + 29))(this);
  CDOTA_Buff::SendBuffRefreshToClients(this);
}


// CDOTA_Buff::DecrementStackCount  (line 957, @0x0000000002622290, libserver.so)
// calls: CDOTA_Buff::SendBuffRefreshToClients
void __fastcall CDOTA_Buff::DecrementStackCount(CDOTA_Buff *const this)
{
  int m_iStackCount; // esi

  m_iStackCount = this->m_iStackCount;
  if ( m_iStackCount != 0 )
  {
    this->m_iStackCount = m_iStackCount - 1;
    (*(this->_vptr_CDOTA_Buff + 29))(this);
    CDOTA_Buff::SendBuffRefreshToClients(this);
  }
}


// CDOTA_Buff::SetStackCount  (line 973, @0x00000000026222d0, libserver.so)
// calls: CDOTA_Buff::SendBuffRefreshToClients
void __fastcall CDOTA_Buff::SetStackCount(CDOTA_Buff *const this, int iCount)
{
  unsigned int m_iStackCount; // edx

  m_iStackCount = this->m_iStackCount;
  this->m_iStackCount = iCount;
  (*(this->_vptr_CDOTA_Buff + 29))(this, m_iStackCount);
  CDOTA_Buff::SendBuffRefreshToClients(this);
}


// CDOTA_Buff::OnStackCountChanged  (line 988, @0x00000000025def40, libserver.so)
// callers: CDOTA_Modifier_Phoenix_FireSpiritCount::OnStackCountChanged
void __fastcall CDOTA_Buff::OnStackCountChanged(CDOTA_Buff *const this, int iOldCount)
{
  ;
}


// CDOTA_Buff::OnThink  (line 1004, @0x0000000002615e20, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// calls: CDOTA_Buff::CheckAura
// callers: CDOTA_ModifierManager::Think
void __fastcall CDOTA_Buff::OnThink(CDOTA_Buff *const this)
{
  float v2; // xmm1_4
  float v3; // xmm2_4
  float m_flThinkInterval; // xmm1_4
  float m_flThinkTimeAccumulator; // xmm0_4
  int (**vptr_CDOTA_Buff)(...); // rax
  float dt; // [rsp+8h] [rbp-18h]

  (*(this->_vptr_CDOTA_Buff + 62))(this);
  if ( g_pGameRules != 0 )
    v2 = *&g_pGameRules[18].m_szQuestName[20];
  else
    v2 = 0.0;
  v3 = v2 - this->m_flPreviousTick;
  this->m_flPreviousTick = v2;
  dt = v3;
  CDOTA_Buff::CheckAura(this);
  (*(this->_vptr_CDOTA_Buff + 64))(this, dt);
  m_flThinkInterval = this->m_flThinkInterval;
  if ( m_flThinkInterval == 0.0 )
  {
    (*(this->_vptr_CDOTA_Buff + 56))(this);
  }
  else if ( m_flThinkInterval > 0.0 )
  {
    m_flThinkTimeAccumulator = dt + this->m_flThinkTimeAccumulator;
    this->m_flThinkTimeAccumulator = m_flThinkTimeAccumulator;
    if ( m_flThinkTimeAccumulator >= m_flThinkInterval )
    {
      do
      {
        vptr_CDOTA_Buff = this->_vptr_CDOTA_Buff;
        this->m_flThinkTimeAccumulator = m_flThinkTimeAccumulator - m_flThinkInterval;
        vptr_CDOTA_Buff[56](this);
        m_flThinkTimeAccumulator = this->m_flThinkTimeAccumulator;
        m_flThinkInterval = this->m_flThinkInterval;
      }
      while ( m_flThinkTimeAccumulator >= m_flThinkInterval && m_flThinkInterval > 0.0 );
    }
  }
}


// CDOTA_Buff::PerformDOT  (line 1037, @0x00000000025eb2d0, libserver.so)  // inlines: Get, GetAbility, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator==<CBaseEntity>
// calls: CDOTA_Buff::GetCaster, ApplyDamage
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Buff::PerformDOT(CDOTA_Buff *const this, float a2, float dt)
{
  float m_flDOTInterval; // xmm1_4
  float v5; // xmm0_4
  uint32 v6; // eax
  CDOTA_BaseNPC *v7; // r13
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_BaseNPC *Caster; // rax
  float v11; // xmm1_4
  float v12; // xmm0_4
  uint32 m_Index; // eax
  CDOTABaseAbility *m_pInstance; // r12
  CEntityIdentity *v15; // rcx
  CEntityIdentity *v16; // rcx
  float m_iDOTDamageValue; // [rsp-24h] [rbp-2Ch]

  m_flDOTInterval = this->m_flDOTInterval;
  if ( m_flDOTInterval > 0.0 )
  {
    v5 = a2 + this->m_flDOTTimeAccumulator;
    this->m_flDOTTimeAccumulator = v5;
    if ( v5 >= m_flDOTInterval )
    {
      do
      {
        m_Index = this->m_hAbility.m_Index;
        m_pInstance = 0;
        if ( m_Index + 2 > 1 )
        {
          v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAbility.m_Index) >> 9) & 0x3F];
          if ( v15 != 0 )
          {
            v16 = &v15[this->m_hAbility.m_Index & 0x1FF];
            if ( v16 != 0 && m_Index == v16->m_EHandle.m_Index )
              m_pInstance = v16->m_pInstance;
          }
        }
        v6 = this->m_hParent.m_Index;
        v7 = 0;
        if ( v6 + 2 > 1 )
        {
          v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
          if ( v8 != 0 )
          {
            v9 = &v8[this->m_hParent.m_Index & 0x1FF];
            if ( v9 != 0 && v6 == v9->m_EHandle.m_Index )
              v7 = v9->m_pInstance;
          }
        }
        m_iDOTDamageValue = this->m_iDOTDamageValue;
        Caster = CDOTA_Buff::GetCaster(this);
        ApplyDamage(Caster, v7, m_pInstance, m_iDOTDamageValue, 2, 0);
        v11 = this->m_flDOTInterval;
        v12 = this->m_flDOTTimeAccumulator - v11;
        this->m_flDOTTimeAccumulator = v12;
      }
      while ( v12 >= v11 );
    }
  }
}


// CDOTA_Buff::CheckAura  (line 1055, @0x00000000026158f0, libserver.so)  // inlines: Destroy, Get, GetAbility, GetCachedModifierAuraFactory, GetEHandle, GetEntryIndex, GetInstance, GetParent, GetSerialNumber, GetTeamNumber, Set, SetAttributes, SetBool, ToDOTABaseNPC, operator CBaseEntity*, operator=, operator==<CBaseEntity>, operator[]
// calls: CEntityHandle::operator CEntityInstance*, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::deleteThis, CDOTA_Buff::Destroy, ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, KeyValues::operator new (17 total)
// callers: CDOTA_Buff::OnThink, CDOTA_ModifierManager::AddNewModifier, CDOTA_Modifier_Pudge_Rot::OnCreated
// strings: "isProvidedByAura", "aura_origin_x", "aura_origin_y"
void __fastcall CDOTA_Buff::CheckAura(CDOTA_Buff *const this)
{
  CEntityInstance *v2; // rax
  const CBaseEntity *v3; // rax
  int v4; // r14d
  int v5; // r15d
  CDOTA_BaseNPC *v6; // rax
  __int64 v7; // r14
  int v8; // r13d
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // r12
  __int64 v11; // rax
  IModifierFactory *m_pCachedModifierAuraFactory; // rsi
  const char *v13; // rdx
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v15; // r15
  CBaseEntity *v16; // r15
  __int64 v17; // rax
  IModifierFactory *v18; // rsi
  const char *v19; // rdx
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *v21; // r15
  CBaseEntity *v22; // rax
  CDOTA_Buff *v23; // r15
  int m_iTeam; // r12d
  void (__fastcall *v25)(CDOTA_Buff *, _QWORD); // r12
  CDOTA_BaseNPC *v26; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v28; // eax
  __int16 v29; // cx
  const char *v30; // r15
  CModifieractoryDictionary *v31; // rax
  IModifierFactory *Factory; // rax
  int v33; // r12d
  CModifieractoryDictionary *v34; // rax
  IModifierFactory *v35; // rax
  float v36; // xmm1_4
  float v37; // xmm1_4
  float v38; // xmm1_4
  int iFlagFilter; // [rsp+0h] [rbp-80h]
  const char *v40; // [rsp+18h] [rbp-68h]
  char *pszScriptNameb; // [rsp+20h] [rbp-60h]
  char *pszScriptName; // [rsp+20h] [rbp-60h]
  char *pszScriptNamea; // [rsp+20h] [rbp-60h]
  int iTypeFilter; // [rsp+28h] [rbp-58h]
  EHANDLE *p_m_hCaster; // [rsp+30h] [rbp-50h]
  int pKVa; // [rsp+38h] [rbp-48h]
  KeyValues *pKV; // [rsp+38h] [rbp-48h]
  Vector vOrigin; // [rsp+40h] [rbp-40h] BYREF

  if ( (*(this->_vptr_CDOTA_Buff + 35))(this) != 0 )
  {
    v2 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
    if ( ((*(v2->_vptr_IHandleEntity + 408))(v2) != 0 || (*(this->_vptr_CDOTA_Buff + 36))(this) != 0)
      && LOBYTE(CEntityHandle::operator CEntityInstance *(&this->m_hParent)[71]._vptr_IHandleEntity) == 0 )
    {
      p_m_hCaster = &this->m_hCaster;
      if ( CEntityHandle::operator CEntityInstance *(&this->m_hCaster) != 0 )
      {
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hAuraUnits);
        v3 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
        vOrigin = *CBaseEntity::GetAbsOrigin(v3);
        v4 = (*(this->_vptr_CDOTA_Buff + 40))(this);
        iTypeFilter = (*(this->_vptr_CDOTA_Buff + 39))(this);
        pKVa = (*(this->_vptr_CDOTA_Buff + 38))(this);
        v5 = (*(this->_vptr_CDOTA_Buff + 41))(this);
        v6 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
        iFlagFilter = v4;
        v7 = 0;
        v8 = 0;
        FindUnitsInRadius(
          v6->m_iTeamNum.m_Value,
          &vOrigin,
          v6,
          v5,
          &this->m_hAuraUnits,
          pKVa,
          iTypeFilter,
          iFlagFilter,
          0,
          1);
        pKV = 0;
        if ( this->m_hAuraUnits.m_Size > 0 )
        {
          while ( 1 )
          {
            v9 = CEntityHandle::operator CEntityInstance *(&this->m_hAuraUnits.m_Memory.m_pMemory[v7]);
            v10 = v9;
            if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 && (*(this->_vptr_CDOTA_Buff + 42))(this, v9) == 0 )
            {
              v11 = (*(this->_vptr_CDOTA_Buff + 37))(this);
              m_pCachedModifierAuraFactory = this->m_pCachedModifierAuraFactory;
              v13 = v11;
              if ( m_pCachedModifierAuraFactory == (&stru_33330.r_offset + 3) )
              {
                pszScriptName = v11;
                v30 = (*(this->_vptr_CDOTA_Buff + 37))(this);
                v31 = ModifierFactoryDictionary();
                Factory = CModifieractoryDictionary::FindFactory(v31, v30);
                v13 = pszScriptName;
                m_pCachedModifierAuraFactory = Factory;
                this->m_pCachedModifierAuraFactory = Factory;
              }
              ModifierByName = CDOTA_BaseNPC::FindModifierByName(v10, m_pCachedModifierAuraFactory, v13, 0);
              v15 = ModifierByName;
              if ( ModifierByName != 0 )
              {
                if ( ((*(ModifierByName->_vptr_CDOTA_Buff + 7))(ModifierByName) & 2) != 0 )
                {
                  v16 = CEntityHandle::operator CEntityInstance *(p_m_hCaster);
                  v17 = (*(this->_vptr_CDOTA_Buff + 37))(this);
                  v18 = this->m_pCachedModifierAuraFactory;
                  v19 = v17;
                  if ( v18 == (&stru_33330.r_offset + 3) )
                  {
                    v40 = v17;
                    pszScriptNamea = (*(this->_vptr_CDOTA_Buff + 37))(this);
                    v34 = ModifierFactoryDictionary();
                    v35 = CModifieractoryDictionary::FindFactory(v34, pszScriptNamea);
                    v19 = v40;
                    v18 = v35;
                    this->m_pCachedModifierAuraFactory = v35;
                  }
                  v15 = CDOTA_BaseNPC::FindModifierByName(v10, v18, v19, v16);
                }
                if ( v15 != 0 )
                {
                  Caster = CDOTA_Buff::GetCaster(v15);
                  if ( Caster == 0 )
                  {
                    m_iTeam = v15->m_iTeam;
                    goto LABEL_32;
                  }
                  if ( v15->m_iTeam == Caster->m_iTeamNum.m_Value )
                  {
                    m_iTeam = v15->m_iTeam;
LABEL_32:
                    if ( CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value == m_iTeam
                      && (((*(v15->_vptr_CDOTA_Buff + 7))(v15) & 8) == 0
                       || (v33 = (*(v15->_vptr_CDOTA_Buff + 6))(v15)) <= (*(this->_vptr_CDOTA_Buff + 48))(this)) )
                    {
                      v25 = *(v15->_vptr_CDOTA_Buff + 63);
                      (*(this->_vptr_CDOTA_Buff + 83))(this);
                      v25(v15, 0);
                      v26 = CDOTA_Buff::GetCaster(this);
                      if ( v26 != 0 && (m_pEntity = v26->m_pEntity) != 0 )
                      {
                        v28 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                        v29 = 0x7FFF;
                        if ( m_pEntity->m_EHandle.m_Index != -1 )
                          v29 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                        LOWORD(v15->m_hCaster.m_Index) = v29 | v15->m_hCaster.m_Index & 0x8000;
                        v15->m_hCaster.m_Index = (v28 << 15) | v15->m_hCaster.m_Index & 0x7FFF;
                      }
                      else
                      {
                        v15->m_hCaster.m_Index = -1;
                      }
                    }
                    goto LABEL_26;
                  }
                  if ( (*(v15 + 138) & 4) == 0 )
                    CDOTA_Buff::Destroy(v15, 0, 0, 0);
                }
              }
              if ( pKV == 0 )
              {
                pKV = KeyValues::operator new(0x14u);
                KeyValues::KeyValues(pKV, "aura");
                (*(this->_vptr_CDOTA_Buff + 83))(this);
                KeyValues::SetFloat(pKV, "duration", v36);
                KeyValues::SetInt(pKV, "isProvidedByAura", 1);
                KeyValues::SetFloat(pKV, "aura_origin_x", v37);
                KeyValues::SetFloat(pKV, "aura_origin_y", v38);
                (*(this->_vptr_CDOTA_Buff + 43))(this, pKV);
              }
              pszScriptNameb = (*(this->_vptr_CDOTA_Buff + 37))(this);
              v21 = CEntityHandle::operator CEntityInstance *(&this->m_hAbility);
              v22 = CEntityHandle::operator CEntityInstance *(p_m_hCaster);
              v23 = CDOTA_BaseNPC::AddNewModifier(v10, v22, v21, pszScriptNameb, pKV, 0);
              if ( v23 != 0 )
              {
                (*(this->_vptr_CDOTA_Buff + 45))(this, v10);
                v23->m_iAttributes |= 1u;
              }
            }
LABEL_26:
            ++v8;
            ++v7;
            if ( this->m_hAuraUnits.m_Size <= v8 )
            {
              if ( pKV != 0 )
                KeyValues::deleteThis(pKV);
              return;
            }
          }
        }
      }
    }
  }
}


// CDOTA_Buff::GetAbility  (line 1164, @0x00000000025ead70, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator==<CBaseEntity>
// callers: CDOTA_Modifier_AttributeBonus::GetModifierBonusStats_Intellect, CDOTA_Modifier_AttributeBonus::GetModifierBonusStats_Agility, CDOTA_Modifier_AttributeBonus::GetModifierBonusStats_Strength, CDOTABaseAbility::RefreshIntrinsicModifier, CDOTA_Modifier_LootDrop_Thinker::OnIntervalThink, CDOTA_BaseNPC::GetAbilityModifierValues, CDOTA_Modifier_Zombie_Berserk::OnCreated, CDOTA_Modifier_UpgradedBarricade::OnCreated, CDOTA_Modifier_Corpselord_Revive::OnCreated, CDOTA_Modifier_Lesser_NightCrawler_Pounce::OnCreated, CDOTA_Modifier_GreaterClarity::OnCreated, CDOTA_Modifier_Healing_Campfire_Heal::OnCreated (1673 total)
// globals: CEntityHandle::gm_pEntityList
CDOTABaseAbility *__fastcall CDOTA_Buff::GetAbility(CDOTA_Buff *const this)
{
  CDOTABaseAbility *result; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx

  result = 0;
  m_Index = this->m_hAbility.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAbility.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hAbility.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
        return v4->m_pInstance;
    }
  }
  return result;
}


// CDOTA_Buff::GetCaster  (line 1175, @0x00000000025eadd0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CEntityInstance*, operator==<CBaseEntity>
// callers: CDOTA_Modifier_AttributeBonus::GetModifierBonusStats_Intellect, CDOTA_Modifier_AttributeBonus::GetModifierBonusStats_Agility, CDOTA_Modifier_AttributeBonus::GetModifierBonusStats_Strength, CDOTA_Modifier_Lesser_NightCrawler_Pounce::UpdateVerticalMotion, CDOTA_Modifier_Corpselord_Revive::OnIntervalThink, CDOTA_Modifier_Creature_HybridFlyer::OnUnitMoved, CDOTA_Modifier_Lesser_NightCrawler_Pounce::UpdateHorizontalMotion, CDOTA_Modifier_Radar_Thinker::OnCreated, CDOTA_Modifier_Radar_Thinker::OnIntervalThink, CDOTA_Modifier_TrueSight::OnCreated, CDOTA_Modifier_Tower_Aura_Bonus::OnCreated, CDOTA_Modifier_Hexed::GetHexModel (1112 total)
// globals: CEntityHandle::gm_pEntityList
CDOTA_BaseNPC *__fastcall CDOTA_Buff::GetCaster(CDOTA_Buff *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CDOTA_BaseNPC *result; // rax

  m_Index = this->m_hCaster.m_Index;
  if ( m_Index + 2 <= 1 )
    return 0;
  v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hCaster.m_Index) >> 9) & 0x3F];
  if ( v2 == 0 )
    return 0;
  v3 = &v2[this->m_hCaster.m_Index & 0x1FF];
  if ( v3 == 0 )
    return 0;
  if ( m_Index != v3->m_EHandle.m_Index )
    return 0;
  result = v3->m_pInstance;
  if ( v3->m_pInstance == 0 )
    return 0;
  if ( !result->m_bIsDOTANPC )
    return 0;
  return result;
}


// CDOTA_Buff::OnCheckLifetime  (line 1186, @0x0000000002615f30, libserver.so)  // inlines: DOTAGameRules, Destroy, GetGameTime
// calls: CDOTA_Buff::Destroy
// callers: CDOTA_ModifierManager::Think
void __fastcall CDOTA_Buff::OnCheckLifetime(CDOTA_Buff *const this)
{
  float v2; // xmm0_4
  float v3; // xmm1_4

  if ( (*(this->_vptr_CDOTA_Buff + 31))(this) != -1.0
    && (*(this->_vptr_CDOTA_Buff + 61))(this) != 0
    && (*(this->_vptr_CDOTA_Buff + 30))(this) > 0.0 )
  {
    (*(this->_vptr_CDOTA_Buff + 30))(this);
    v3 = 0.0;
    if ( g_pGameRules != 0 )
      v3 = *&g_pGameRules[18].m_szQuestName[20];
    if ( v3 >= v2 )
    {
      (*(this->_vptr_CDOTA_Buff + 55))(this);
      if ( (*(this + 138) & 4) == 0 )
        CDOTA_Buff::Destroy(this, 0, 0, 0);
    }
  }
}


// CDOTA_Buff::StartIntervalThink  (line 1209, @0x00000000025ee4f0, libserver.so)
// callers: CDOTA_Modifier_LootDrop_Thinker::OnCreated, CDOTA_Modifier_LootDrop_Thinker::OnIntervalThink, CDOTA_Modifier_Corpselord_Revive::OnCreated, CDOTA_Modifier_Radar_Thinker::OnCreated, CDOTA_Modifier_Special_Bonus_Gold_Income::OnCreated, CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter::OnIntervalThink, CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter::OnIntervalThink, CDOTA_Modifier_Kunkka_GhostShip_DamageDelay::OnCreated, CDOTA_Modifier_Lina_FierySoul::OnIntervalThink, CDOTA_Modifier_Nevermore_Requiem_InvisBreak::OnCreated, CDOTA_Modifier_Pudge_Meat_Hook_PathingFix::OnCreated, CDOTA_Modifier_Sand_King_BurrowStrike::OnCreated (361 total)
void __fastcall CDOTA_Buff::StartIntervalThink(CDOTA_Buff *const this, float a2, float flInterval)
{
  this->m_flThinkInterval = a2;
  this->m_flThinkTimeAccumulator = 0.0;
}


// CDOTA_Buff::CDOTA_Buff  (line 1218, @0x0000000002600b80, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlIntrusiveDList, CUtlIntrusiveList, CUtlMemory, CUtlReferenceList, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, Set, V_memset, memset, operator=
// calls: memset
// callers: CModifierFactory<CDOTA_Modifier_AttributeBonus>::Create, CModifierFactory<CDOTA_Modifier_LootDrop_Thinker>::Create, CModifierFactory<CDOTA_Modifier_Creature_Full_Avoidance>::Create, CModifierFactory<CDOTA_Modifier_UpgradedBarricade>::Create, CModifierFactory<CDOTA_Modifier_UpgradedMortar>::Create, CModifierFactory<CDOTA_Modifier_GreaterClarity>::Create, CModifierFactory<CDOTA_Modifier_Corpselord_Revive>::Create, CModifierFactory<CDOTA_Modifier_Zombie_Berserk>::Create, CModifierFactory<CDOTA_Modifier_Lesser_NightCrawler_Pounce>::Create, CModifierFactory<CDOTA_Modifier_Healing_Campfire_Heal>::Create, CModifierFactory<CDOTA_Modifier_Healing_Campfire_Aura>::Create, CModifierFactory<CDOTA_Modifier_Creature_HybridFlyer>::Create (1308 total)
// globals: g_iBuffSerialNumber
void __fastcall CDOTA_Buff::CDOTA_Buff(CDOTA_Buff *const this)
{
  CDOTA_Buff::lambda *m_Functions; // rdi
  int v3; // eax

  this->_vptr_CDOTA_Buff = &off_412B830;
  *(this + 138) &= ~4u;
  this->m_References.m_pHead = 0;
  m_Functions = this->m_Functions;
  m_Functions[-12].__pfn = 0;
  m_Functions[-11].__delta = 0;
  m_Functions[-10].__pfn = 0;
  LODWORD(m_Functions[-7].__pfn) = -1;
  HIDWORD(m_Functions[-7].__pfn) = -1;
  LODWORD(m_Functions[-7].__delta) = -1;
  LODWORD(m_Functions[-3].__pfn) = 0;
  m_Functions[-3].__delta = 0;
  LODWORD(m_Functions[-2].__pfn) = 0;
  HIDWORD(m_Functions[-2].__pfn) = 0;
  LODWORD(m_Functions[-2].__delta) = 0;
  m_Functions[-1].__pfn = 0;
  LODWORD(m_Functions[-1].__delta) = 0;
  HIDWORD(m_Functions[-1].__delta) = 0;
  m_Functions[-12].__delta = 0;
  m_Functions[-10].__delta = 209715;
  HIDWORD(m_Functions[-7].__delta) = 0;
  memset(m_Functions, 0, 0xAD0u);
  v3 = g_iBuffSerialNumber;
  this->m_iAttributes = 0;
  this->m_hAbility.m_Index = -1;
  this->m_hScriptScope = 0;
  this->m_bPurgedDestroy = 0;
  ++v3;
  this->m_iStringIndex = -1;
  this->m_iSerialNumber = v3;
  g_iBuffSerialNumber = v3;
}


// CDOTA_Buff::DoRefresh  (line 1249, @0x0000000002622300, libserver.so)  // inlines: DOTAGameRules, Destroy, Get, GetBool, GetCachedModifierAuraFactory, GetClassNameAsCStr, GetClassname, GetEHandle, GetEntryIndex, GetGameTime, GetInstance, GetInt, GetName, GetParent, GetSerialNumber, Set, String, ToCStr, ToDOTABaseNPC, operator=, operator[]
// calls: CDOTA_Buff::SetAbility, KeyValues::GetFloat, KeyValues::GetInt, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::ForceRefresh, CDOTA_Buff::SendBuffCreationToClients, CDOTA_Buff::SendBuffRefreshToClients, Msg, CDOTA_Buff::Destroy, ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory
// callers: CDOTA_Buff::ForceRefresh, CDOTA_ModifierManager::AddNewModifier, CDOTA_Modifier_PhantomAssassin_Blur::OnRefresh, CDOTA_Ability_Invoker_GhostWalk::RefreshModifier, CDOTA_Ability_Invoker_Invoke::OnUpgradeElement
// strings: "stack_count", "existing_duration", "%c [%2.2f] Refreshing buff '%s' to '%s'. - Stack Count: %d\n", "force_duration"
void __fastcall CDOTA_Buff::DoRefresh(
        CDOTA_Buff *const this,
        KeyValues *pKV,
        CDOTA_BaseNPC *pCaster,
        CDOTABaseAbility *pAbility)
{
  float v4; // xmm1_4
  CEntityIdentity *m_pEntity; // rdx
  int v8; // eax
  __int16 v9; // di
  float Float; // xmm0_4
  unsigned int m_iStackCount; // r13d
  int Int; // r12d
  float v13; // xmm0_4
  int (**vptr_CDOTA_Buff)(...); // rax
  int (*v15)(...); // r12
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  int (**v19)(...); // rax
  float v20; // xmm1_4
  __int64 v21; // r13
  int v22; // r12d
  CEntityInstance *v23; // rax
  CDOTA_BaseNPC *v24; // r15
  __int64 v25; // rax
  IModifierFactory *m_pCachedModifierAuraFactory; // rsi
  const char *v27; // rdx
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v29; // r15
  int v30; // eax
  int v31; // r12d
  CEntityInstance *v32; // rax
  const char *m_pAsString; // rcx
  CEntityIdentity *v34; // rax
  const char *v35; // rdx
  double v36; // xmm0_8
  CGameRules *v37; // rsi
  CModifieractoryDictionary *v38; // rax
  IModifierFactory *Factory; // rax
  float v40; // xmm0_4
  const char *v41; // [rsp+8h] [rbp-48h]
  float flDuration; // [rsp+10h] [rbp-40h]
  const char *flDurationa; // [rsp+10h] [rbp-40h]

  if ( pCaster != 0 )
  {
    m_pEntity = pCaster->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v8 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v9 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hCaster.m_Index) = v9 | this->m_hCaster.m_Index & 0x8000;
      this->m_hCaster.m_Index = (v8 << 15) | this->m_hCaster.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hCaster.m_Index = -1;
    }
    CDOTA_Buff::SetAbility(this, pAbility);
  }
  Float = KeyValues::GetFloat(pKV, "duration", v4);
  m_iStackCount = this->m_iStackCount;
  flDuration = Float;
  Int = KeyValues::GetInt(pKV, "stack_count", 0);
  this->m_iStackCount = Int;
  if ( m_iStackCount != Int )
  {
    (*(this->_vptr_CDOTA_Buff + 29))(this, m_iStackCount);
    Int = this->m_iStackCount;
  }
  if ( (*(this->_vptr_CDOTA_Buff + 27))(this) != Int || flDuration == -1.0 )
    goto LABEL_10;
  v40 = 0.0;
  if ( g_pGameRules != 0 )
    v40 = *&g_pGameRules[18].m_szQuestName[20];
  if ( (*(this->_vptr_CDOTA_Buff + 30))(this) <= (v40 + flDuration) || KeyValues::GetInt(pKV, "force_duration", 0) != 0 )
  {
LABEL_10:
    v13 = 0.0;
    if ( g_pGameRules != 0 )
      v13 = *&g_pGameRules[18].m_szQuestName[20];
    vptr_CDOTA_Buff = this->_vptr_CDOTA_Buff;
    this->m_flCreationTime = v13;
    v15 = vptr_CDOTA_Buff[63];
    vptr_CDOTA_Buff[31](this);
    v17 = KeyValues::GetFloat(pKV, "duration", v16);
    v15(this, 0, v17);
    v18 = 0.0;
    if ( g_pGameRules != 0 )
      v18 = *&g_pGameRules[18].m_szQuestName[20];
    v19 = this->_vptr_CDOTA_Buff;
    this->m_flLastAppliedTime = v18;
    if ( v19[35](this) != 0 && this->m_hAuraUnits.m_Size > 0 )
    {
      v21 = 0;
      v22 = 0;
      do
      {
        v23 = CEntityHandle::operator CEntityInstance *(&this->m_hAuraUnits.m_Memory.m_pMemory[v21]);
        v24 = v23;
        if ( v23 != 0 && BYTE3(v23[7]._vptr_IHandleEntity) != 0 )
        {
          v25 = (*(this->_vptr_CDOTA_Buff + 37))(this);
          m_pCachedModifierAuraFactory = this->m_pCachedModifierAuraFactory;
          v27 = v25;
          if ( m_pCachedModifierAuraFactory == (&stru_33330.r_offset + 3) )
          {
            v41 = v25;
            flDurationa = (*(this->_vptr_CDOTA_Buff + 37))(this);
            v38 = ModifierFactoryDictionary();
            Factory = CModifieractoryDictionary::FindFactory(v38, flDurationa);
            v27 = v41;
            m_pCachedModifierAuraFactory = Factory;
            this->m_pCachedModifierAuraFactory = Factory;
          }
          ModifierByName = CDOTA_BaseNPC::FindModifierByName(v24, m_pCachedModifierAuraFactory, v27, 0);
          v29 = ModifierByName;
          if ( ModifierByName != 0 )
          {
            if ( (*(ModifierByName->_vptr_CDOTA_Buff + 46))(ModifierByName) != 0 )
            {
              if ( (*(v29 + 138) & 4) == 0 )
                CDOTA_Buff::Destroy(v29, 0, 0, 0);
            }
            else
            {
              CDOTA_Buff::ForceRefresh(v29);
            }
          }
        }
        ++v22;
        ++v21;
      }
      while ( this->m_hAuraUnits.m_Size > v22 );
    }
    if ( KeyValues::GetFloat(pKV, "existing_duration", v20) >= 0.1 )
    {
      CDOTA_Buff::SendBuffRefreshToClients(this);
      if ( dota_modifier_debug.m_pParent->m_Value.m_nValue == 0 )
        goto LABEL_29;
    }
    else
    {
      v30 = (*(this->_vptr_CDOTA_Buff + 86))(this);
      CDOTA_Buff::SendBuffCreationToClients(this, v30, 0);
      if ( dota_modifier_debug.m_pParent->m_Value.m_nValue == 0 )
        goto LABEL_29;
    }
    v31 = (*(this->_vptr_CDOTA_Buff + 27))(this);
    v32 = CEntityHandle::operator CEntityInstance *(&this->m_hParent);
    m_pAsString = "";
    v34 = v32->m_pEntity;
    if ( v34->m_designerName.u.m_Id != 0 )
    {
      v35 = "";
      m_pAsString = v34->m_designerName.u.m_pAsString;
      if ( this->m_name.u.m_Id == 0 )
      {
LABEL_33:
        v36 = 0.0;
        v37 = g_pGameRules;
        if ( g_pGameRules == 0 )
        {
LABEL_35:
          Msg("%c [%2.2f] Refreshing buff '%s' to '%s'. - Stack Count: %d\n", 83, v36, v35, m_pAsString, v31);
          goto LABEL_29;
        }
LABEL_34:
        v36 = *&v37[18].m_szQuestName[20];
        goto LABEL_35;
      }
    }
    else
    {
      v35 = "";
      if ( this->m_name.u.m_Id == 0 )
        goto LABEL_33;
    }
    v36 = 0.0;
    v35 = this->m_name.u.m_pAsString;
    v37 = g_pGameRules;
    if ( g_pGameRules == 0 )
      goto LABEL_35;
    goto LABEL_34;
  }
LABEL_29:
  (*(this->_vptr_CDOTA_Buff + 58))(this, pKV);
}


// CDOTA_Buff::GetTeamSendMask  (line 1351, @0x00000000025e8720, libserver.so)  // inlines: Get, GetInstance, GetParent
// calls: CEntityHandle::operator CEntityInstance*
int __fastcall CDOTA_Buff::GetTeamSendMask(CDOTA_Buff *const this)
{
  unsigned int v2; // ebx
  int m_hScope_high; // r13d

  v2 = 2;
  m_hScope_high = HIDWORD(CEntityHandle::operator CEntityInstance *(&this->m_hParent)[16].m_hPrivateScope.m_hScope);
  do
  {
    if ( (*(this->_vptr_CDOTA_Buff + 9))(this, v2) == 0 )
      m_hScope_high &= ~(1 << v2);
    ++v2;
  }
  while ( v2 != 14 );
  return m_hScope_high & 0x3FCE;
}


// CDOTA_Buff::DotaRetrieveValue  (line 1371, @0x0000000002608d30, libserver.so)  // inlines: Get, GetAbility, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator==<CBaseEntity>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Buff::DotaRetrieveValue(CDOTA_Buff *const this, int *const nValue, const char *pValueName)
{
  uint32 m_Index; // ecx
  unsigned __int16 v4; // r8
  CEntityIdentity *v5; // rdi
  CEntityIdentity *v6; // rdi
  CDOTABaseAbility *m_pInstance; // rdi

  m_Index = this->m_hAbility.m_Index;
  if ( m_Index + 2 > 1
    && (v4 = this->m_hAbility.m_Index, (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v4 >> 9) & 0x3F]) != 0)
    && (v6 = &v5[v4 & 0x1FF]) != 0
    && m_Index == v6->m_EHandle.m_Index
    && (m_pInstance = v6->m_pInstance) != 0 )
  {
    *nValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(m_pInstance, pValueName, -1, 0);
  }
  else
  {
    *nValue = 0;
  }
}


// CDOTA_Buff::DotaRetrieveValue  (line 1377, @0x000000000260f360, libserver.so)  // inlines: Get, GetAbility, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator==<CBaseEntity>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Buff::DotaRetrieveValue(CDOTA_Buff *const this, float *const flValue, const char *pValueName)
{
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rdi
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx

  m_Index = this->m_hAbility.m_Index;
  if ( m_Index + 2 > 1
    && (m_Index_low = LOWORD(this->m_hAbility.m_Index),
        (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) != 0) )
  {
    v6 = &v5[m_Index_low & 0x1FF];
    if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index && v6->m_pInstance != 0 )
      *flValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6->m_pInstance, pValueName, -1, 0);
    else
      *flValue = 0.0;
  }
  else
  {
    *flValue = 0.0;
  }
}


// CDOTA_Buff::GetParent  (line 1397, @0x00000000025ee510, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// callers: CDOTA_Modifier_Healing_Campfire_Aura::OnDestroy, CDOTA_Modifier_Lesser_NightCrawler_Pounce::UpdateVerticalMotion, CDOTA_Modifier_Lesser_NightCrawler_Pounce::OnDestroy, CDOTA_Modifier_Creature_Full_Avoidance::OnDestroy, CDOTA_Modifier_Creature_Full_Avoidance::OnCreated, CDOTA_Modifier_GreaterClarity::OnTakeDamage, CDOTA_Modifier_Creature_HybridFlyer::OnUnitMoved, CDOTA_Modifier_LootDrop_Thinker::OnIntervalThink, CDOTA_Modifier_Lesser_NightCrawler_Pounce::OnCreated, CDOTA_Modifier_Lesser_NightCrawler_Pounce::UpdateHorizontalMotion, CDOTA_Modifier_Radar_Thinker::OnIntervalThink, CDOTA_Modifier_Special_Bonus_Attack_Range::GetModifierAttackRangeBonus (1438 total)
// globals: CEntityHandle::gm_pEntityList
CDOTA_BaseNPC *__fastcall CDOTA_Buff::GetParent(CDOTA_Buff *const this)
{
  CDOTA_BaseNPC *result; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx

  result = 0;
  m_Index = this->m_hParent.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hParent.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
        return v4->m_pInstance;
    }
  }
  return result;
}


// CDOTA_Buff::SetHideParticles  (line 1403, @0x00000000025ee570, libserver.so)  // inlines: end
// calls: GetParticleManager, CDOTA_ParticleManager::SetShouldDraw
// callers: CDOTA_Modifier_Morphling_Hybrid_Hide::OnCreated, CDOTA_Modifier_Morphling_Hybrid_Hide::OnDestroy, CDOTA_Modifier_MonkeyKing_Transform::OnDestroy, CDOTA_Modifier_MonkeyKing_Transform::OnCreated
void __fastcall CDOTA_Buff::SetHideParticles(CDOTA_Buff *const this, bool bHideParticles)
{
  bool v2; // r14
  CDOTA_BuffParticle *m_pMemory; // rbx
  CDOTA_BuffParticle *v4; // r13
  int m_iIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax

  v2 = !bHideParticles;
  m_pMemory = this->m_iParticles.m_Memory.m_pMemory;
  v4 = &m_pMemory[this->m_iParticles.m_Size];
  while ( v4 != m_pMemory )
  {
    m_iIndex = m_pMemory->m_iIndex;
    ++m_pMemory;
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetShouldDraw(ParticleManager, m_iIndex, v2);
  }
}


// CDOTA_Buff::DestroyParticles  (line 1414, @0x0000000002600af0, libserver.so)  // inlines: operator[]
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CUtlVectorBase<CDOTA_BuffParticle, CUtlMemory<CDOTA_BuffParticle, int> >::RemoveAll
// callers: CDOTA_Buff::~CDOTA_Buff, CDOTA_Modifier_Nian_Tail_Swipe_Wall::OnDestroy, CDOTA_Modifier_Invoker_QuasInstance::OnDeath, CDOTA_Modifier_Invoker_WexInstance::OnDeath, CDOTA_Modifier_Invoker_ExortInstance::OnDeath, CDOTA_Modifier_Item_Radiance::OnIntervalThink
void __fastcall CDOTA_Buff::DestroyParticles(CDOTA_Buff *const this, bool bImmediate)
{
  __int64 v3; // r13
  int v4; // r12d
  char v5; // bl
  CDOTA_BuffParticle *v6; // rax
  int m_iIndex; // r14d
  CDOTA_ParticleManager *ParticleManager; // rax

  v3 = 0;
  v4 = 0;
  while ( this->m_iParticles.m_Size > v4 )
  {
    v5 = 1;
    v6 = &this->m_iParticles.m_Memory.m_pMemory[v3];
    m_iIndex = v6->m_iIndex;
    if ( !v6->m_bDestroyImmediatly )
      v5 = bImmediate;
    ++v4;
    ++v3;
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_iIndex, v5);
  }
  CUtlVectorBase<CDOTA_BuffParticle,CUtlMemory<CDOTA_BuffParticle,int>>::RemoveAll(&this->m_iParticles);
}


// CDOTA_Buff::AddParticle  (line 1427, @0x000000000261a630, libserver.so)  // inlines: AddToTail, CopyConstruct<CDOTA_BuffParticle>, Element, GrowMemory, operator[]
// calls: CUtlMemory<CDOTA_BuffParticle, int>::Grow
// callers: CDOTA_Modifier_Filler_Heal::OnCreated, CDOTA_Modifier_Spawnlord_Master_Freeze_Root::OnCreated, CDOTA_Modifier_Greevil_Miniboss_Blue_ColdFeet::OnCreated, CDOTA_Modifier_Greevil_Miniboss_Red_Overpower::OnCreated, CDOTA_Modifier_Greevil_Miniboss_Green_LivingArmor::OnCreated, CDOTA_Modifier_Greevil_Miniboss_Green_Overgrowth::OnCreated, CDOTA_Modifier_Spawnlord_Master_Stomp::OnCreated, CDOTA_Modifier_DataDriven::CreateParticle, CDOTA_Modifier_Razor_StaticLink_Buff::OnCreated, CDOTA_Modifier_Razor_StaticLink_Debuff::OnCreated, CDOTA_Modifier_Puck_PhaseShift::OnCreated, CDOTA_Modifier_CrystalMaiden_Frostbite::OnCreated (161 total)
void __fastcall CDOTA_Buff::AddParticle(
        CDOTA_Buff *const this,
        int iIndex,
        bool bDestroyImmediatly,
        bool bStatusEffect,
        int iPriority,
        bool bHeroEffect,
        bool bOverheadEffect)
{
  __int64 m_Size; // r13
  CDOTA_BuffParticle *m_pMemory; // rax
  CDOTA_BuffParticle *v11; // rsi
  int v12; // eax
  CDOTA_BuffParticle *v13; // rax
  bool v14; // [rsp+0h] [rbp-30h]
  int iPrioritya; // [rsp+4h] [rbp-2Ch]
  bool v16; // [rsp+8h] [rbp-28h]
  bool v17; // [rsp+Ch] [rbp-24h]

  m_Size = this->m_iParticles.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_iParticles.m_Memory.m_pMemory;
    if ( m_pMemory->m_iIndex == iIndex )
      return;
    v11 = &m_pMemory[(m_Size - 1)];
    while ( m_pMemory != v11 )
    {
      ++m_pMemory;
      if ( m_pMemory->m_iIndex == iIndex )
        return;
    }
  }
  v12 = this->m_iParticles.m_Size;
  if ( this->m_iParticles.m_Memory.m_nAllocationCount == m_Size )
  {
    v16 = bStatusEffect;
    v14 = bHeroEffect;
    iPrioritya = iPriority;
    v17 = bDestroyImmediatly;
    CUtlMemory<CDOTA_BuffParticle,int>::Grow(&this->m_iParticles.m_Memory, 1);
    v12 = this->m_iParticles.m_Size;
    bHeroEffect = v14;
    iPriority = iPrioritya;
    bStatusEffect = v16;
    bDestroyImmediatly = v17;
  }
  this->m_iParticles.m_Size = v12 + 1;
  v13 = &this->m_iParticles.m_Memory.m_pMemory[m_Size];
  if ( v13 != 0 )
  {
    v13->m_iIndex = iIndex;
    v13->m_iPriority = iPriority;
    v13->m_bDestroyImmediatly = bDestroyImmediatly;
    v13->m_bStatusEffect = bStatusEffect;
    v13->m_bHeroEffect = bHeroEffect;
    v13->m_bOverheadEffectOffset = bOverheadEffect;
  }
}


// CDOTA_Buff::GetHighestPriorityParticle  (line 1441, @0x00000000025ee5d0, libserver.so)  // inlines: operator[]
CDOTA_BuffParticle *__fastcall CDOTA_Buff::GetHighestPriorityParticle(CDOTA_Buff *const this, bool bHeroEffect)
{
  int m_Size; // eax
  CDOTA_BuffParticle *m_pMemory; // rdi
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  CDOTA_BuffParticle *result; // rax
  __int64 v7; // r8
  CDOTA_BuffParticle *v8; // rcx

  m_Size = this->m_iParticles.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_iParticles.m_Memory.m_pMemory;
    v4 = 0;
    v5 = 3LL * (m_Size - 1) + 3;
    result = 0;
    v7 = 4 * v5;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( result == 0 )
        {
          result = &m_pMemory[v4 / 0xC];
          v4 += 12LL;
          if ( v4 == v7 )
            return result;
        }
        v8 = &m_pMemory[v4 / 0xC];
        if ( m_pMemory[v4 / 0xC].m_bStatusEffect )
          break;
        if ( !v8->m_bHeroEffect || !bHeroEffect )
          goto LABEL_7;
LABEL_11:
        if ( v8->m_iPriority > result->m_iPriority )
          result = &m_pMemory[v4 / 0xC];
        v4 += 12LL;
        if ( v4 == v7 )
          return result;
      }
      if ( !bHeroEffect || v8->m_bHeroEffect )
        goto LABEL_11;
LABEL_7:
      v4 += 12LL;
      if ( v4 == v7 )
        return result;
    }
  }
  return 0;
}


// CDOTA_Buff::IsDebuff  (line 1456, @0x00000000025e5be0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Buff::IsDebuff(CDOTA_Buff *const this)
{
  uint32 m_Index; // edx
  bool result; // al
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx

  m_Index = this->m_hParent.m_Index;
  result = 0;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hParent.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index && v4->m_pInstance != 0 )
        return this->m_iTeam != HIBYTE(v4->m_pInstance[7].m_CScriptComponent);
    }
  }
  return result;
}


// CDOTA_Buff::HasOverheadEffectOffset  (line 1467, @0x00000000025ee670, libserver.so)
bool __fastcall CDOTA_Buff::HasOverheadEffectOffset(CDOTA_Buff *const this)
{
  int m_Size; // edx
  CDOTA_BuffParticle *m_pMemory; // rax
  CDOTA_BuffParticle *v3; // rdx

  m_Size = this->m_iParticles.m_Size;
  if ( m_Size <= 0 )
    return 0;
  m_pMemory = this->m_iParticles.m_Memory.m_pMemory;
  if ( !m_pMemory->m_bOverheadEffectOffset )
  {
    v3 = &m_pMemory[m_Size - 1];
    while ( m_pMemory != v3 )
    {
      ++m_pMemory;
      if ( m_pMemory->m_bOverheadEffectOffset )
        return 1;
    }
    return 0;
  }
  return 1;
}


// CDOTA_Buff::SetOverheadEffectOffset  (line 1480, @0x00000000025ee6c0, libserver.so)  // inlines: Vector, operator[]
// calls: GetParticleManager, CDOTA_ParticleManager::SetParticleControlOffset
__int64 __fastcall CDOTA_Buff::SetOverheadEffectOffset(CDOTA_Buff *const this, float a2, float flOffset)
{
  int m_Size; // edx
  CDOTA_BuffParticle *m_pMemory; // rax
  CDOTA_BuffParticle *v5; // rax
  CDOTA_BuffParticle *v6; // rdx
  CDOTA_BuffParticle *v7; // rcx
  int m_iIndex; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  Vector flOffseta; // [rsp+0h] [rbp-20h]

  m_Size = this->m_iParticles.m_Size;
  if ( m_Size <= 0 )
    return 0;
  m_pMemory = this->m_iParticles.m_Memory.m_pMemory;
  if ( !m_pMemory->m_bOverheadEffectOffset )
  {
    v5 = m_pMemory + 1;
    v6 = &v5[m_Size - 1];
    while ( v5 != v6 )
    {
      v7 = v5++;
      if ( v5[-1].m_bOverheadEffectOffset )
        goto LABEL_8;
    }
    return 0;
  }
  v7 = this->m_iParticles.m_Memory.m_pMemory;
LABEL_8:
  m_iIndex = v7->m_iIndex;
  *&flOffseta.x = LODWORD(a2);
  flOffseta.z = 0.0;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlOffset(ParticleManager, m_iIndex, 0, flOffseta);
  return 1;
}


// CDOTA_Buff::ForceRefresh  (line 1495, @0x0000000002622710, libserver.so)
// calls: KeyValues::KeyValues, KeyValues::SetInt, CDOTA_Buff::DoRefresh, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_Buff::DoRefresh, CDOTA_Modifier_TutorialNPCBlocker_Thinker::GetAuraEntityReject, CDOTA_Modifier_Pudge_FleshHeap::OnIntervalThink, CDOTA_Modifier_Lina_FierySoul::OnAbilityExecuted, CDOTA_Modifier_Holdout_FierySoul::OnAbilityExecuted, CDOTA_Unit_Hero_Riki::OnAlive, CDOTA_Modifier_Legion_Commander_Duel_DamageBoost::OnStackCountChanged, CDOTA_Modifier_Meepo_Self_Geostrike::OnAttackLanded, CDOTA_Ability_TrollWarlord_BerserkersRage::OnUpgrade
// strings: "modifier_refresh", "stack_count"
void __fastcall CDOTA_Buff::ForceRefresh(CDOTA_Buff *const this)
{
  float v2; // xmm0_4
  KeyValues KV; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-18h]

  v4 = __readfsqword(0x28u);
  KeyValues::KeyValues(&KV, "modifier_refresh");
  KeyValues::SetInt(&KV, "stack_count", this->m_iStackCount);
  v2 = (*(this->_vptr_CDOTA_Buff + 31))(this);
  KeyValues::SetInt(&KV, "duration", v2);
  CDOTA_Buff::DoRefresh(this, &KV, 0, 0);
  KeyValues::~KeyValues(&KV);
}


// CDOTA_Buff::SetAbility  (line 1506, @0x00000000025ee760, libserver.so)  // inlines: DecrementModifierRefCount, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IncrementModifierRefCount, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTAAbility, operator CBaseEntity*, operator bool, operator=
// calls: CDOTABaseAbility::RefCountsModifiers, CEntityHandle::operator CEntityInstance*, __dynamic_cast
// callers: CDOTA_Buff::DoRefresh, CDOTA_ModifierManager::AddNewModifier
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Buff::SetAbility(CDOTA_Buff *const this, CDOTABaseAbility *pAbilityNew)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *m_pEntity; // rdx
  int v8; // eax
  __int16 v9; // cx
  CEntityInstance *v10; // rdi
  CDOTABaseAbility *v11; // rax
  CDOTABaseAbility *v12; // r13

  m_Index = this->m_hAbility.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAbility.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[this->m_hAbility.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
      {
        v10 = CEntityHandle::operator CEntityInstance *(&this->m_hAbility);
        if ( v10 != 0 )
        {
          v11 = __dynamic_cast(v10, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
          v12 = v11;
          if ( v11 != 0 && CDOTABaseAbility::RefCountsModifiers(v11) )
            --v12->m_iModifierRefCount;
        }
      }
    }
  }
  if ( pAbilityNew != 0 )
  {
    m_pEntity = pAbilityNew->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v8 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v9 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hAbility.m_Index) = v9 | this->m_hAbility.m_Index & 0x8000;
      this->m_hAbility.m_Index = (v8 << 15) | this->m_hAbility.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hAbility.m_Index = -1;
    }
    if ( CDOTABaseAbility::RefCountsModifiers(pAbilityNew) )
      ++pAbilityNew->m_iModifierRefCount;
  }
  else
  {
    this->m_hAbility.m_Index = -1;
  }
}


// CDOTA_Buff::DuplicateForIllusion  (line 1530, @0x00000000025e90e0, libserver.so)  // inlines: Get, GetAbility, GetClass, GetInstance, GetName, String, ToCStr, operator==<CBaseEntity>
// calls: KeyValues::KeyValues, KeyValues::SetFloat, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
CDOTA_Buff *__fastcall CDOTA_Buff::DuplicateForIllusion(CDOTA_Buff *const this, CDOTA_BaseNPC *pIllusion)
{
  const char *m_pAsString; // rsi
  float v5; // xmm1_4
  const char *v6; // r14
  CDOTABaseAbility *v7; // rax
  CDOTA_Buff *v8; // rbx
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-28h]

  m_pAsString = "";
  v11 = __readfsqword(0x28u);
  if ( this->m_name.u.m_Id != 0 )
    m_pAsString = this->m_name.u.m_pAsString;
  KeyValues::KeyValues(&kv, m_pAsString);
  (*(this->_vptr_CDOTA_Buff + 31))(this);
  KeyValues::SetFloat(&kv, "duration", v5);
  v6 = "";
  if ( this->m_class.u.m_Id != 0 )
    v6 = this->m_class.u.m_pAsString;
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hAbility);
  v8 = CDOTA_BaseNPC::AddNewModifier(pIllusion, pIllusion, v7, v6, &kv, 0);
  KeyValues::~KeyValues(&kv);
  return v8;
}


// CreateModifierStringTable  (line 1739, @0x0000000002601130, libserver.so)  // inlines: CUtlSymbol, GetElementName, IsValidIndex, Next, Purge, RemoveAll, String
// calls: CUtlMemory<DOTABuffStringIndexCache_t, int>::Purge, ModifierFactoryDictionary, CUtlSymbolTable::String, CUtlMemory<int, int>::Purge
// globals: g_DOTABuffStringIndexCache, g_DOTABuffStringIndexFreeList, g_pStringTableModifierNames, g_iBuffSerialNumber
void __fastcall CreateModifierStringTable(const char *pTableName, INetworkStringTable *pTable)
{
  CModifieractoryDictionary *v2; // r12
  UtlSymId_t v3; // bx
  void (__fastcall *v4)(INetworkStringTable *, __int64, const char *, __int64, _QWORD); // r14
  CModifieractoryDictionary *v5; // rax
  const char *v6; // rax
  int m_Size; // edx
  CUtlSymbol id; // [rsp+0h] [rbp-30h] BYREF

  g_DOTABuffStringIndexCache.m_Size = 0;
  if ( (g_DOTABuffStringIndexCache.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<DOTABuffStringIndexCache_t,int>::Purge(&g_DOTABuffStringIndexCache.m_Memory);
  g_DOTABuffStringIndexFreeList.m_Size = 0;
  if ( (g_DOTABuffStringIndexFreeList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<int,int>::Purge(&g_DOTABuffStringIndexFreeList.m_Memory);
  v2 = ModifierFactoryDictionary();
  if ( v2->m_Factories.m_Vector.m_Size > 0 )
  {
    v3 = 0;
    do
    {
      v4 = *(g_pStringTableModifierNames->_vptr_INetworkStringTable + 8);
      v5 = ModifierFactoryDictionary();
      id.m_Id = v3++;
      v6 = CUtlSymbolTable::String(&v5->m_Factories.m_SymbolTable, &id);
      v4(g_pStringTableModifierNames, 1, v6, 0xFFFFFFFFLL, 0);
      m_Size = v2->m_Factories.m_Vector.m_Size;
    }
    while ( v3 < m_Size && v3 != 0xFFFF && m_Size > v3 );
  }
  g_iBuffSerialNumber = 0;
}


// CDOTA_Buff::CreateBuffParticleEffect  (line 1940, @0x00000000025ee8c0, libserver.so)
// calls: CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle
// callers: CDOTA_Modifier_Spawnlord_Master_Freeze_Root::OnCreated, CDOTA_Modifier_AntiMage_ManaBreak::GetModifierProcAttack_Feedback, CDOTA_Modifier_AncientApparition_IceBlast::OnIntervalThink, CDOTA_Modifier_Axe_CounterHelix::OnAttackLanded, CDOTA_Modifier_CrystalMaiden_Frostbite::OnCreated, CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::OnCreated, CDOTA_Modifier_CrystalMaiden_FreezingField::OnCreated, CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker::OnDestroy, CDOTA_Modifier_Nevermore_Necromastery::OnDeath, CDOTA_Modifier_AncientApparition_IceVortexThinker::OnCreated, CDOTA_Modifier_AncientApparition_ColdFeet::OnCreated, CDOTA_Modifier_Nevermore_Necromastery::OnCreated (98 total)
int __fastcall CDOTA_Buff::CreateBuffParticleEffect(
        CDOTA_Buff *const this,
        const char *pParticleName,
        int iAttachType,
        CBaseEntity *pEntityAttach,
        CRecipientFilter *pFilter)
{
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_ParticleManager *ParticleManager; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  return CDOTA_ParticleManager::CreateParticle(
           ParticleManager,
           pParticleName,
           iAttachType,
           pEntityAttach,
           pFilter,
           Caster);
}


// CDOTA_Buff::GetScriptScope  (line 1953, @0x00000000025def50, libserver.so)
HSCRIPT __fastcall CDOTA_Buff::GetScriptScope(CDOTA_Buff *const this)
{
  HSCRIPT result; // rax
  __int64 v3; // r12
  __int64 (__fastcall *v4)(__int64, __int64, CDOTA_Buff *const); // r13
  __int64 v5; // rax

  result = this->m_hScriptScope;
  if ( result == 0 )
  {
    v3 = (*(g_pVScriptGameSystem->_vptr_IVScriptGameSystem + 4))(g_pVScriptGameSystem);
    v4 = *(*v3 + 184LL);
    v5 = (*(this->_vptr_CDOTA_Buff + 88))(this);
    result = v4(v3, v5, this);
    this->m_hScriptScope = result;
  }
  return result;
}


// ModifierFactoryDictionary  (line 1967, @0x0000000002600d10, libserver.so)  // inlines: CModifieractoryDictionary, CUtlMemory, CUtlStringMap, CUtlVector, CUtlVectorBase, ~CUtlVector
// calls: __cxa_guard_acquire, CMemAllocSystemInitialize, CUtlSymbolTable::CUtlSymbolTable, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume, CUtlVectorBase<IModifierFactory*, CUtlMemory<IModifierFactory*, int> >::~CUtlVectorBase
// callers: CDOTA_ActionRunner::LookupModifierCreateParameters, _GLOBAL__sub_I__unity_dota_01.cpp, _GLOBAL__sub_I__unity_dota_02.cpp, _GLOBAL__sub_I__unity_dota_03.cpp, CDOTA_Buff::MakeEntry, CreateModifierStringTable, DumpVisibleBuffs, CDOTA_Buff::CheckAura, _GLOBAL__sub_I__unity_dota_05.cpp, CDOTA_Buff::DoRefresh, CDOTA_ModifierManager::AddNewModifier, sv_dota_dump_modifier_stringtable (70 total)
// globals: `guard variable for'ModifierFactoryDictionary(void)::s_ModifierFactory, ModifierFactoryDictionary(void)::s_ModifierFactory, __dso_handle, CModifieractoryDictionary::~CModifieractoryDictionary()
CModifieractoryDictionary *__cdecl ModifierFactoryDictionary()
{
  if ( `guard variable for'ModifierFactoryDictionary(void)::s_ModifierFactory != 0 )
    return &ModifierFactoryDictionary(void)::s_ModifierFactory;
  if ( __cxa_guard_acquire(&`guard variable for'ModifierFactoryDictionary(void)::s_ModifierFactory) != 0 )
  {
    ModifierFactoryDictionary(void)::s_ModifierFactory.m_Factories.m_Vector.m_Size = 0;
    ModifierFactoryDictionary(void)::s_ModifierFactory._vptr_CModifieractoryDictionary = &off_412BB70;
    ModifierFactoryDictionary(void)::s_ModifierFactory.m_Factories.m_Vector.m_Memory.m_pMemory = 0;
    ModifierFactoryDictionary(void)::s_ModifierFactory.m_Factories.m_Vector.m_Memory.m_nAllocationCount = 128;
    ModifierFactoryDictionary(void)::s_ModifierFactory.m_Factories.m_Vector.m_Memory.m_nGrowSize = 0;
    CMemAllocSystemInitialize();
    ModifierFactoryDictionary(void)::s_ModifierFactory.m_Factories.m_Vector.m_Memory.m_pMemory = (**g_pMemAlloc)(
                                                                                                   g_pMemAlloc,
                                                                                                   8LL
                                                                                                 * ModifierFactoryDictionary(void)::s_ModifierFactory.m_Factories.m_Vector.m_Memory.m_nAllocationCount);
    CUtlSymbolTable::CUtlSymbolTable(
      &ModifierFactoryDictionary(void)::s_ModifierFactory.m_Factories.m_SymbolTable,
      0,
      128,
      0);
    __cxa_guard_release(&`guard variable for'ModifierFactoryDictionary(void)::s_ModifierFactory);
    __cxa_atexit(
      CModifieractoryDictionary::~CModifieractoryDictionary,
      &ModifierFactoryDictionary(void)::s_ModifierFactory,
      &_dso_handle);
  }
  return &ModifierFactoryDictionary(void)::s_ModifierFactory;
}


// CModifieractoryDictionary::CModifieractoryDictionary  (line 1973, @0x0000000002600c90, libserver.so)  // inlines: CUtlMemory, CUtlStringMap, CUtlVector, CUtlVectorBase, ~CUtlVector
// calls: CMemAllocSystemInitialize, CUtlSymbolTable::CUtlSymbolTable, CUtlVectorBase<IModifierFactory*, CUtlMemory<IModifierFactory*, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CModifieractoryDictionary::CModifieractoryDictionary(CModifieractoryDictionary *const this)
{
  this->_vptr_CModifieractoryDictionary = &off_412BB70;
  this->m_Factories.m_Vector.m_Size = 0;
  this->m_Factories.m_Vector.m_Memory.m_pMemory = 0;
  this->m_Factories.m_Vector.m_Memory.m_nAllocationCount = 128;
  this->m_Factories.m_Vector.m_Memory.m_nGrowSize = 0;
  CMemAllocSystemInitialize();
  this->m_Factories.m_Vector.m_Memory.m_pMemory = (**g_pMemAlloc)(
                                                    g_pMemAlloc,
                                                    8LL * this->m_Factories.m_Vector.m_Memory.m_nAllocationCount);
  CUtlSymbolTable::CUtlSymbolTable(&this->m_Factories.m_SymbolTable, 0, 128, 0);
}


// CModifieractoryDictionary::InstallFactory  (line 1992, @0x00000000026202f0, libserver.so)  // inlines: AddMultipleToTail, AddToTail, CopyConstruct<IModifierFactory*>, Element, EnsureCount, GrowMemory, GrowVector, Insert, InsertMultipleBefore, IsStringLowerCase, V_strncpy<long unsigned int>, operator const UtlSymId_t, operator[]
// calls: CUtlSymbolTable::AddString, _V_strncpy, V_strlower_fast, strcmp, Warning, Plat_IsInDebugSessionRaw, CUtlMemory<IModifierFactory*, int>::Grow, __stack_chk_fail
// strings: "Modifier name %s is not lowercase.\n\tBecause CModifieractoryDictionary is case sensitive
void __fastcall CModifieractoryDictionary::InstallFactory(
        CModifieractoryDictionary *const this,
        IModifierFactory *pFactory,
        const char *pClassName)
{
  __int64 m_Size; // r13
  int v7; // eax
  __int64 v8; // rdi
  int m_nAllocationCount; // edx
  int v10; // eax
  IModifierFactory **v11; // rax
  unsigned __int16 v12; // [rsp+10h] [rbp-150h]
  char s1[264]; // [rsp+20h] [rbp-140h] BYREF
  unsigned __int64 v14; // [rsp+128h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  CUtlSymbolTable::AddString(&this->m_Factories.m_SymbolTable, pClassName);
  m_Size = this->m_Factories.m_Vector.m_Size;
  if ( m_Size <= v12 )
  {
    if ( m_Size == v12 )
    {
      v10 = this->m_Factories.m_Vector.m_Size;
      if ( m_Size == this->m_Factories.m_Vector.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<IModifierFactory *,int>::Grow(&this->m_Factories.m_Vector.m_Memory, 1);
        v10 = this->m_Factories.m_Vector.m_Size;
      }
      this->m_Factories.m_Vector.m_Size = v10 + 1;
      v11 = &this->m_Factories.m_Vector.m_Memory.m_pMemory[m_Size];
      if ( v11 != 0 )
        *v11 = pFactory;
    }
    else
    {
      v7 = v12 + 1;
      if ( m_Size < v7 )
      {
        m_nAllocationCount = this->m_Factories.m_Vector.m_Memory.m_nAllocationCount;
        if ( v7 > m_nAllocationCount )
        {
          CUtlMemory<IModifierFactory *,int>::Grow(&this->m_Factories.m_Vector.m_Memory, v7 - m_nAllocationCount);
          v7 = v12 + 1;
        }
        this->m_Factories.m_Vector.m_Size = v7;
      }
      this->m_Factories.m_Vector.m_Memory.m_pMemory[v12] = pFactory;
    }
  }
  _V_strncpy(s1, pClassName, 256);
  V_strlower_fast(s1);
  if ( strcmp(s1, pClassName) != 0 )
  {
    Warning(
      "Modifier name %s is not lowercase.\n"
      "\tBecause CModifieractoryDictionary is case sensitive, you have probably introduced a bug.\n",
      pClassName);
    if ( Plat_IsInDebugSessionRaw(v8) != 0 )
      __debugbreak();
  }
}


// CModifieractoryDictionary::Create  (line 2012, @0x00000000025ee950, libserver.so)
// calls: CModifieractoryDictionary::FindFactory, Warning
// strings: "Attempted to create unknown modifier type %s!\n"
CDOTA_Buff *__fastcall CModifieractoryDictionary::Create(CModifieractoryDictionary *const this, const char *pClassName)
{
  IModifierFactory *Factory; // rax

  Factory = CModifieractoryDictionary::FindFactory(this, pClassName);
  if ( Factory != 0 )
    return (*Factory->_vptr_IModifierFactory)(Factory);
  Warning("Attempted to create unknown modifier type %s!\n", pClassName);
  return 0;
}


// CModifieractoryDictionary::GetCannonicalName  (line 2028, @0x00000000025e51a0, libserver.so)  // inlines: Find, GetElementName, String
// calls: CUtlSymbolTable::Find, CUtlSymbolTable::String
const char *__fastcall CModifieractoryDictionary::GetCannonicalName(
        CModifieractoryDictionary *const this,
        const char *pClassName)
{
  CUtlSymbolTable *p_m_SymbolTable; // rbx
  CUtlSymbol id; // [rsp+0h] [rbp-20h] BYREF

  p_m_SymbolTable = &this->m_Factories.m_SymbolTable;
  CUtlSymbolTable::Find(&this->m_Factories.m_SymbolTable, pClassName);
  return CUtlSymbolTable::String(p_m_SymbolTable, &id);
}


// CModifieractoryDictionary::Destroy  (line 2036, @0x00000000025ee9a0, libserver.so)
// calls: CModifieractoryDictionary::FindFactory, Warning
// strings: "Attempted to destroy unknown modifier type %s!\n"
void __fastcall CModifieractoryDictionary::Destroy(
        CModifieractoryDictionary *const this,
        const char *pClassName,
        CDOTA_Buff *pBuff)
{
  IModifierFactory *Factory; // rax

  Factory = CModifieractoryDictionary::FindFactory(this, pClassName);
  if ( Factory != 0 )
    (*(Factory->_vptr_IModifierFactory + 1))(Factory, pBuff);
  else
    Warning("Attempted to destroy unknown modifier type %s!\n", pClassName);
}


// CModifieractoryDictionary::FindFactory  (line 2051, @0x00000000025ee910, libserver.so)  // inlines: Find, operator const UtlSymId_t
// calls: CUtlSymbolTable::Find
// callers: CDOTA_ActionRunner::LookupModifierCreateParameters, CModifieractoryDictionary::Create, CModifieractoryDictionary::Destroy, CDOTA_Buff::CheckAura, CDOTA_Buff::DoRefresh, CDOTA_ModifierManager::AddNewModifier, LinkLuaModifier, CDOTA_Bot_AbilityUsage_Mekansm::GetCurrentUsageDesire, CDOTA_BaseNPC_Creep_Neutral::CanAcceptTargetToAttack, CDOTA_BaseNPC::Script_FindModifierByName, CDOTA_BaseNPC::Script_FindModifierByNameAndCaster, CDOTA_BaseNPC::Script_RemoveModifierByNameAndCaster (45 total)
IModifierFactory *__fastcall CModifieractoryDictionary::FindFactory(
        CModifieractoryDictionary *const this,
        const char *pClassName)
{
  unsigned __int16 nIndex; // [rsp+0h] [rbp-20h]

  CUtlSymbolTable::Find(&this->m_Factories.m_SymbolTable, pClassName);
  if ( nIndex == 0xFFFF )
    return 0;
  else
    return this->m_Factories.m_Vector.m_Memory.m_pMemory[nIndex];
}


// CModifieractoryDictionary::GetNameByIndex  (line 2060, @0x00000000025ee9f0, libserver.so)  // inlines: GetElementName, String
// calls: CUtlSymbolTable::String
// callers: sv_dota_dump_modifier_stringtable
// globals: g_pStringTableModifierNames
const char *__fastcall CModifieractoryDictionary::GetNameByIndex(CModifieractoryDictionary *const this, int iIndex)
{
  CUtlSymbol id; // [rsp+0h] [rbp-10h] BYREF

  if ( g_pStringTableModifierNames != 0 )
    return (*(g_pStringTableModifierNames->_vptr_INetworkStringTable + 9))(g_pStringTableModifierNames, iIndex, 0);
  id.m_Id = iIndex;
  return CUtlSymbolTable::String(&this->m_Factories.m_SymbolTable, &id);
}


// CModifieractoryDictionary::GetIndexByName  (line 2070, @0x00000000025eea30, libserver.so)  // inlines: Find
// calls: CUtlSymbolTable::Find
// callers: CDOTA_Buff::MakeEntry
// globals: g_pStringTableModifierNames
int __fastcall CModifieractoryDictionary::GetIndexByName(CModifieractoryDictionary *const this, const char *pszName)
{
  unsigned __int16 v3; // [rsp+0h] [rbp-10h]

  if ( g_pStringTableModifierNames != 0 )
    return (*(g_pStringTableModifierNames->_vptr_INetworkStringTable + 12))(g_pStringTableModifierNames, pszName);
  CUtlSymbolTable::Find(&this->m_Factories.m_SymbolTable, pszName);
  return v3;
}


// VerifyModifierArray  (line 2273, @0x00000000025eea70, libserver.so)
void __cdecl VerifyModifierArray()
{
  ;
}


// CDOTA_Buff_Item::GetItem  (line 2279, @0x00000000025eea80, libserver.so)  // inlines: Get, GetAbility, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator==<CBaseEntity>
// calls: __dynamic_cast
// callers: CDOTA_Modifier_Item_Bloodstone::GetModifierConstantManaRegen, CDOTA_Modifier_Item_Bloodstone::GetModifierConstantRespawnTime, CDOTA_Modifier_Item_Bloodstone::GetModifierConstantDeathGoldCost, CDOTA_Modifier_Item_Aegis::ReincarnateTime, CDOTA_Modifier_Item_Bloodstone::OnDeath, CDOTA_Modifier_Item_Black_King_Bar::OnCreated, CDOTA_Modifier_Item_TranquilBoots::GetModifierPhysicalArmorBonus, CDOTA_Modifier_Item_TranquilBoots2::GetModifierPhysicalArmorBonus, CDOTA_Modifier_Item_DivineRapier::GetModifierPreAttack_BonusDamage, CDOTA_Modifier_Item_TranquilBoots::GetModifierMoveSpeedBonus_Special_Boots, CDOTA_Modifier_Item_TranquilBoots::GetModifierConstantHealthRegen, CDOTA_Modifier_Item_TranquilBoots2::GetModifierMoveSpeedBonus_Special_Boots (30 total)
// globals: CEntityHandle::gm_pEntityList
CDOTA_Item *__fastcall CDOTA_Buff_Item::GetItem(CDOTA_Buff_Item *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx

  m_Index = this->m_hAbility.m_Index;
  if ( m_Index + 2 > 1
    && (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAbility.m_Index) >> 9) & 0x3F]) != 0
    && (v3 = &v2[this->m_hAbility.m_Index & 0x1FF]) != 0
    && m_Index == v3->m_EHandle.m_Index
    && v3->m_pInstance != 0 )
  {
    return __dynamic_cast(v3->m_pInstance, &`typeinfo for'CDOTABaseAbility, &`typeinfo for'CDOTA_Item, 0);
  }
  else
  {
    return 0;
  }
}


// CModifieractoryDictionary::DumpVisibleBuffs  (line 2284, @0x00000000025eeaf0, libserver.so)  // inlines: GetElementName, String
// calls: CUtlSymbolTable::String, Msg
// callers: DumpVisibleBuffs
// strings: "Visible: %s\n", "Hidden: %s\n"
void __fastcall CModifieractoryDictionary::DumpVisibleBuffs(CModifieractoryDictionary *const this)
{
  unsigned int v2; // r12d
  unsigned int m_Size; // eax
  const char *v4; // r13
  __int64 v5; // rax
  __int64 v6; // r14
  unsigned int v7; // r12d
  const char *v8; // r13
  __int64 v9; // rax
  __int64 v10; // r14
  const CUtlSymbolTable *p_m_SymbolTable; // [rsp+8h] [rbp-48h]
  CUtlSymbol id; // [rsp+10h] [rbp-40h] BYREF

  if ( this->m_Factories.m_Vector.m_Size != 0 )
  {
    v2 = 0;
    p_m_SymbolTable = &this->m_Factories.m_SymbolTable;
    do
    {
      id.m_Id = v2;
      v4 = CUtlSymbolTable::String(p_m_SymbolTable, &id);
      v5 = (*(this->_vptr_CModifieractoryDictionary + 1))(this, v4);
      v6 = v5;
      if ( v5 != 0 )
      {
        if ( (*(*v5 + 88LL))(v5) == 0 )
          Msg("Visible: %s\n", v4);
        (*(*v6 + 16LL))(v6);
      }
      m_Size = this->m_Factories.m_Vector.m_Size;
      ++v2;
    }
    while ( v2 < m_Size );
    if ( m_Size != 0 )
    {
      v7 = 0;
      do
      {
        id.m_Id = v7;
        v8 = CUtlSymbolTable::String(p_m_SymbolTable, &id);
        v9 = (*(this->_vptr_CModifieractoryDictionary + 1))(this, v8);
        v10 = v9;
        if ( v9 != 0 )
        {
          if ( (*(*v9 + 88LL))(v9) != 0 )
            Msg("Hidden: %s\n", v8);
          (*(*v10 + 16LL))(v10);
        }
        ++v7;
      }
      while ( v7 < this->m_Factories.m_Vector.m_Size );
    }
  }
}


// DumpVisibleBuffs  (line 2316, @0x0000000002601220, libserver.so)
// calls: ModifierFactoryDictionary, CModifieractoryDictionary::DumpVisibleBuffs
void __cdecl DumpVisibleBuffs()
{
  CModifieractoryDictionary *v0; // rax

  v0 = ModifierFactoryDictionary();
  CModifieractoryDictionary::DumpVisibleBuffs(v0);
}


