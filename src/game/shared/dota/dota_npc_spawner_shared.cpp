// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_npc_spawner_shared.cpp:248
class CDotaMapLoadEntityFilter : public ISpawnGroupEntityFilter {
public:

	CDotaMapLoadEntityFilter(CDotaMapLoadEntityFilter &);
	CDotaMapLoadEntityFilter(const CDotaMapLoadEntityFilter &);
	CDotaMapLoadEntityFilter();
	virtual void FilterSpawnGroupEntities(SpawnGroupHandle_t, bool, const CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> > *, CUtlVector<const CEntityKeyValues*, CUtlMemory<const CEntityKeyValues*, int> > &);
	virtual ~CDotaMapLoadEntityFilter();

	// vtable[2] FilterSpawnGroupEntities
	// sizeof = 8
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// UnitClassnameIsMoreDerivedThanMapClassname  (line 18, @0x00000000025f8ec0, libserver.so)  // inlines: GetBaseClass
// calls: CEntitySystem::FindClassByDesignName
// callers: AppendNPCKeyValues
bool __fastcall UnitClassnameIsMoreDerivedThanMapClassname(const char *pUnitClassname, const char *pMapClassname)
{
  CEntityClass *ClassByDesignName; // r12
  CEntityClass *v5; // rax
  CEntityClass *v6; // rcx
  CEntityClassInfo *m_pBaseClassInfo; // rax
  CEntityClass *m_pClass; // rdx
  CEntityClassInfo *v9; // rdx

  if ( pUnitClassname == 0 )
    return 0;
  if ( pMapClassname != 0 )
  {
    ClassByDesignName = CEntitySystem::FindClassByDesignName(g_pEntitySystem, pUnitClassname, 0);
    v5 = CEntitySystem::FindClassByDesignName(g_pEntitySystem, pMapClassname, 0);
    v6 = v5;
    if ( ClassByDesignName != 0 && v5 != 0 && ClassByDesignName != v5 )
    {
      m_pBaseClassInfo = ClassByDesignName->m_pBaseClassInfo;
      if ( m_pBaseClassInfo != 0 )
        m_pClass = m_pBaseClassInfo->m_pClass;
      else
        m_pClass = 0;
      while ( m_pClass != 0 )
      {
        if ( v6 == m_pClass )
          return 1;
        v9 = m_pClass->m_pBaseClassInfo;
        if ( v9 == 0 )
          return 0;
        m_pClass = v9->m_pClass;
      }
    }
  }
  return 0;
}


// AppendNPCKeyValues  (line 61, @0x0000000002612440, libserver.so)  // inlines: AddKeyValue<float>, AddToTail, Base, Element, FindKeyHash, Free, GetBaseClass, GetEntityKeyForIndex, GetHashForIndex, GetHeroesKeyValues, GetUnitsKeyValues, GetValue, GetValueString, IsAddOnGame, SetValue<float>, TempString, operator=, operator[]
// calls: DOTAGameManager, CEntityKeyValues::SetValue, __cxa_guard_acquire, KeyValues::FindKey, ConvertMapDataKV, CEntitySystem::FindClassByDesignName, V_stricmp_fast, KeyValues::GetFirstSubKey, CEntityKeyIdIndexList::GenerateStringCode, KeyValues::GetString, KeyValues::GetNextKey, KeyValues::GetName (24 total)
// callers: CDOTAGamerules::PrecacheResources, CreateAnnouncerForTeam, CDOTAGamerules::PrecacheNextARDMHeroForPlayer, CDOTAGamerules::HeroPickState_Enter_Ability_Draft_SELECT, CDOTAGamerules::State_Enter_PRE_GAME, CDOTAGamerules::StartCreateHeroStatues, CDotaMapLoadEntityFilter::FilterSpawnGroupEntities, CDotaNPCSpawner<CDOTA_BaseNPC>::CDotaNPCSpawner, CDOTA_ProjectileManager::CreateLinearProjectile, CDOTA_ProjectileManager::CreateTrackingProjectileFiltered, DOTA_CreateUnitByName, DOTA_PrecacheUnitByNameSync (28 total)
// strings: "somevalue", "CDOTA_BaseNPC_Hero", "npc_dota_units_base", "npc_dota_hero_base", "LoadoutItemName", "LoadoutItemFlags" (12 total)
// globals: `guard variable for'AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::hNpcDotaUnitsBase, AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::hNpcDotaUnitsBase, `guard variable for'AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::hNpcDotaHeroBase, AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::hNpcDotaHeroBase, AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strItemName, AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strItemFlags, `guard variable for'AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strItemName, `guard variable for'AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strItemFlags (17 total)
bool __fastcall AppendNPCKeyValues(const char *pUnitName, CEntityKeyValues *pOutKV, bool bSkipClassNameSet)
{
  CDOTAGameManager *v5; // rax
  CDOTAGameManager *v6; // rax
  KeyValues *m_pkvHeroes; // r13
  KeyValues *pOldKeyValues; // rax
  CEntityClass *ClassByDesignName; // r14
  CEntityClassInfo *m_pBaseClassInfo; // rax
  KeyValues *v12; // rax
  KeyValues *v13; // rax
  KeyValues *v14; // rax
  KeyValues *FirstSubKey; // r13
  __int64 v16; // r14
  int v17; // r12d
  uint32 StringCode; // eax
  const char *v19; // rdx
  EntityKeyId_t v20; // esi
  const char *String; // rax
  const char *v22; // rdx
  uint32 v23; // eax
  EntityKeyId_t v24; // esi
  const char *Name; // rax
  KeyValues *m_pkvAddOnUnits; // r12
  __int64 v27; // rax
  __int64 v28; // rax
  KeyValues *v29; // rax
  KeyValues *NextKey; // r13
  __int64 v31; // r14
  int v32; // r12d
  uint32 v33; // eax
  const char *v34; // rdx
  EntityKeyId_t v35; // esi
  float v36; // xmm1_4
  float Float; // xmm0_4
  float v38; // xmm1_4
  uint32 v39; // esi
  float v40; // xmm0_4
  uint32 v41; // esi
  const char *v42; // rax
  int v43; // edi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v44; // ax
  __int64 v45; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v46; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  int v50; // edi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v51; // ax
  __int64 v52; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v53; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  unsigned __int64 v57; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t v58; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v59; // rax
  __int16 v60; // dx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v61; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v62; // rax
  uint16 m_flags; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v64; // rax
  unsigned __int64 v65; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t v66; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v67; // rax
  __int16 v68; // dx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v69; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v70; // rax
  uint16 v71; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v72; // rax
  KeyValues *Key; // rax
  const char *ClassNameForUnitName; // rax
  int m_nCount; // r9d
  const char *v76; // r12
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // r8
  __int64 v78; // rcx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  __int16 v80; // ax
  __int16 v81; // ax
  CEntityVariant *p_m_value; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v83; // rax
  CUtlLeanVector<CEntityKeyValues::KeyValueInfo_t,short int> *p_m_keyValues; // [rsp+10h] [rbp-50h]
  KeyValues *pUnitKv; // [rsp+18h] [rbp-48h]
  uint32 pUnitKvc; // [rsp+18h] [rbp-48h]
  int pUnitKva; // [rsp+18h] [rbp-48h]
  uint32 pUnitKvd; // [rsp+18h] [rbp-48h]
  int pUnitKvb; // [rsp+18h] [rbp-48h]
  char *pStringd; // [rsp+28h] [rbp-38h]
  char *pStringe; // [rsp+28h] [rbp-38h]
  char *pStringf; // [rsp+28h] [rbp-38h]
  float pStringg; // [rsp+28h] [rbp-38h]
  float pStringh; // [rsp+28h] [rbp-38h]
  float pString; // [rsp+28h] [rbp-38h]
  char *pStringa; // [rsp+28h] [rbp-38h]
  float pStringb; // [rsp+28h] [rbp-38h]
  char *pStringc; // [rsp+28h] [rbp-38h]

  v5 = DOTAGameManager();
  if ( *&v5->m_bCustomGame != 0 )
    m_pkvAddOnUnits = v5->m_pkvAddOnUnits;
  else
    m_pkvAddOnUnits = v5->m_pkvUnits;
  if ( m_pkvAddOnUnits == 0 )
    return 0;
  v6 = DOTAGameManager();
  if ( !v6->m_bCustomGame && !v6->m_bEventGame )
  {
    m_pkvHeroes = v6->m_pkvHeroes;
    if ( m_pkvHeroes == 0 )
      return 0;
LABEL_7:
    CEntityKeyValues::SetValue(pOutKV, 864820976, "somevalue");
    if ( `guard variable for'AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::hNpcDotaUnitsBase == 0
      && __cxa_guard_acquire(&`guard variable for'AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::hNpcDotaUnitsBase) != 0 )
    {
      v27 = KeyValuesSystem();
      AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::hNpcDotaUnitsBase.nIndex = (*(*v27 + 16LL))(
                                                                                            v27,
                                                                                            "npc_dota_units_base",
                                                                                            1);
      __cxa_guard_release(&`guard variable for'AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::hNpcDotaUnitsBase);
    }
    pOldKeyValues = KeyValues::FindKey(
                      m_pkvAddOnUnits,
                      AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::hNpcDotaUnitsBase);
    ConvertMapDataKV(0, pOutKV, 0, 0, 0, 0, pOldKeyValues, 0);
    ClassByDesignName = CEntitySystem::FindClassByDesignName(g_pEntitySystem, pUnitName, 0);
    if ( ClassByDesignName == 0 )
    {
LABEL_11:
      if ( pUnitName == 0 || *pUnitName == 0 )
        return 1;
      Key = KeyValues::FindKey(m_pkvAddOnUnits, pUnitName, 0);
      ConvertMapDataKV(0, pOutKV, 0, 0, 0, 0, Key, 0);
LABEL_107:
      if ( *pUnitName != 0 && !bSkipClassNameSet )
      {
        ClassNameForUnitName = GetClassNameForUnitName(pUnitName);
        m_nCount = pOutKV->m_keyHashes.m_nCount;
        v76 = ClassNameForUnitName;
        if ( m_nCount <= 0 )
        {
LABEL_125:
          p_m_value = &CEntityKeyValues::sm_EmptyVariant;
        }
        else
        {
          m_nAllocated = pOutKV->m_keyHashes.m_nAllocated;
          v78 = 0;
          while ( 1 )
          {
            if ( m_nAllocated != 0 )
            {
              m_pElements = (&pOutKV->m_keyHashes.m_nAllocAllocated + 1);
              if ( m_nAllocated > 9 )
                m_pElements = pOutKV->m_keyHashes.m_pElements;
            }
            else
            {
              m_pElements = 0;
            }
            if ( m_pElements[v78] == -971301790 )
              break;
            if ( m_nCount <= ++v78 )
              goto LABEL_125;
          }
          if ( pOutKV->m_keyValues.m_nAllocated != 0 )
            v83 = pOutKV->m_keyValues.m_pElements;
          else
            v83 = 0;
          p_m_value = &v83[v78].m_value;
        }
        if ( p_m_value->m_type != 30
          || p_m_value->m_uint64 == 0
          || UnitClassnameIsMoreDerivedThanMapClassname(v76, p_m_value->m_pszString) )
        {
          CEntityKeyValues::SetValue(pOutKV, -971301790, v76);
        }
      }
      return 1;
    }
    while ( V_stricmp_fast(ClassByDesignName->m_pClassInfo->m_pszCPPClassname, "CDOTA_BaseNPC_Hero") != 0 )
    {
      m_pBaseClassInfo = ClassByDesignName->m_pBaseClassInfo;
      if ( m_pBaseClassInfo != 0 )
      {
        ClassByDesignName = m_pBaseClassInfo->m_pClass;
        if ( ClassByDesignName != 0 )
          continue;
      }
      goto LABEL_11;
    }
    if ( `guard variable for'AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::hNpcDotaHeroBase == 0
      && __cxa_guard_acquire(&`guard variable for'AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::hNpcDotaHeroBase) != 0 )
    {
      v28 = KeyValuesSystem();
      AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::hNpcDotaHeroBase.nIndex = (*(*v28 + 16LL))(
                                                                                           v28,
                                                                                           "npc_dota_hero_base",
                                                                                           1);
      __cxa_guard_release(&`guard variable for'AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::hNpcDotaHeroBase);
    }
    v12 = KeyValues::FindKey(m_pkvHeroes, AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::hNpcDotaHeroBase);
    ConvertMapDataKV(0, pOutKV, 0, 0, 0, 0, v12, 0);
    if ( pUnitName == 0 || *pUnitName == 0 )
      return 1;
    pUnitKv = KeyValues::FindKey(m_pkvHeroes, pUnitName, 0);
    ConvertMapDataKV(0, pOutKV, 0, 0, 0, 0, pUnitKv, 0);
    v13 = KeyValues::FindKey(pUnitKv, "Bot", 0);
    if ( v13 != 0 )
    {
      v14 = KeyValues::FindKey(v13, "Loadout", 0);
      if ( v14 != 0 )
      {
        FirstSubKey = KeyValues::GetFirstSubKey(v14);
        if ( FirstSubKey != 0 )
        {
          v16 = 0;
          v17 = 0;
          do
          {
            if ( `guard variable for'AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strItemName == 0
              && __cxa_guard_acquire(&`guard variable for'AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strItemName) != 0 )
            {
              CEntityKeyIdIndexList::CEntityKeyIdIndexList(
                &AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strItemName,
                "LoadoutItemName",
                50);
              __cxa_guard_release(&`guard variable for'AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strItemName);
              __cxa_atexit(
                CEntityKeyIdIndexList::~CEntityKeyIdIndexList,
                &AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strItemName,
                &_dso_handle);
            }
            if ( `guard variable for'AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strItemFlags == 0
              && __cxa_guard_acquire(&`guard variable for'AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strItemFlags) != 0 )
            {
              CEntityKeyIdIndexList::CEntityKeyIdIndexList(
                &AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strItemFlags,
                "LoadoutItemFlags",
                50);
              __cxa_guard_release(&`guard variable for'AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strItemFlags);
              __cxa_atexit(
                CEntityKeyIdIndexList::~CEntityKeyIdIndexList,
                &AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strItemFlags,
                &_dso_handle);
            }
            Name = KeyValues::GetName(FirstSubKey);
            v19 = Name;
            if ( AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strItemName.m_hashList.m_Size <= v17 )
            {
              pStringd = Name;
              StringCode = CEntityKeyIdIndexList::GenerateStringCode(
                             &AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strItemName,
                             v17);
              v19 = pStringd;
              v20.m_nHashCode = StringCode;
            }
            else
            {
              v20.m_nHashCode = AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strItemName.m_hashList.m_Memory.m_pMemory[v16];
            }
            CEntityKeyValues::SetValue(pOutKV, v20, v19);
            String = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
            v22 = String;
            if ( AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strItemFlags.m_hashList.m_Size > v17 )
            {
              v24.m_nHashCode = AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strItemFlags.m_hashList.m_Memory.m_pMemory[v16];
            }
            else
            {
              pStringe = String;
              v23 = CEntityKeyIdIndexList::GenerateStringCode(
                      &AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strItemFlags,
                      v17);
              v22 = pStringe;
              v24.m_nHashCode = v23;
            }
            ++v17;
            ++v16;
            CEntityKeyValues::SetValue(pOutKV, v24, v22);
            FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
          }
          while ( FirstSubKey != 0 );
        }
      }
    }
    v29 = KeyValues::FindKey(pUnitKv, "animation_transitions", 0);
    if ( v29 == 0 )
      goto LABEL_107;
    NextKey = KeyValues::GetFirstSubKey(v29);
    if ( NextKey == 0 )
      goto LABEL_107;
    v31 = 0;
    v32 = 0;
    p_m_keyValues = &pOutKV->m_keyValues;
LABEL_51:
    if ( `guard variable for'AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strName == 0
      && __cxa_guard_acquire(&`guard variable for'AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strName) != 0 )
    {
      CEntityKeyIdIndexList::CEntityKeyIdIndexList(
        &AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strName,
        "AnimationTransitionName",
        32);
      __cxa_guard_release(&`guard variable for'AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strName);
      __cxa_atexit(
        CEntityKeyIdIndexList::~CEntityKeyIdIndexList,
        &AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strName,
        &_dso_handle);
    }
    if ( `guard variable for'AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strRegular == 0
      && __cxa_guard_acquire(&`guard variable for'AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strRegular) != 0 )
    {
      CEntityKeyIdIndexList::CEntityKeyIdIndexList(
        &AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strRegular,
        "AnimationTransitionRegular",
        32);
      __cxa_guard_release(&`guard variable for'AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strRegular);
      __cxa_atexit(
        CEntityKeyIdIndexList::~CEntityKeyIdIndexList,
        &AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strRegular,
        &_dso_handle);
    }
    if ( `guard variable for'AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strAggressive == 0
      && __cxa_guard_acquire(&`guard variable for'AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strAggressive) != 0 )
    {
      CEntityKeyIdIndexList::CEntityKeyIdIndexList(
        &AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strAggressive,
        "AnimationTransitionAggressive",
        32);
      __cxa_guard_release(&`guard variable for'AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strAggressive);
      __cxa_atexit(
        CEntityKeyIdIndexList::~CEntityKeyIdIndexList,
        &AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strAggressive,
        &_dso_handle);
    }
    v42 = KeyValues::GetName(NextKey);
    v34 = v42;
    if ( AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strName.m_hashList.m_Size <= v32 )
    {
      pStringf = v42;
      v33 = CEntityKeyIdIndexList::GenerateStringCode(
              &AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strName,
              v32);
      v34 = pStringf;
      v35.m_nHashCode = v33;
    }
    else
    {
      v35.m_nHashCode = AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strName.m_hashList.m_Memory.m_pMemory[v31];
    }
    CEntityKeyValues::SetValue(pOutKV, v35, v34);
    Float = KeyValues::GetFloat(NextKey, "regular", v36);
    if ( AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strRegular.m_hashList.m_Size > v32 )
    {
      v39 = AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strRegular.m_hashList.m_Memory.m_pMemory[v31];
      if ( pOutKV->m_nQueuedForSpawnCount > 0 )
        goto LABEL_48;
    }
    else
    {
      pStringg = Float;
      v39 = CEntityKeyIdIndexList::GenerateStringCode(
              &AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strRegular,
              v32);
      Float = pStringg;
      if ( pOutKV->m_nQueuedForSpawnCount > 0 )
        goto LABEL_48;
    }
    v50 = pOutKV->m_keyHashes.m_nCount;
    if ( v50 <= 0 )
    {
LABEL_86:
      pUnitKvc = v39;
      pString = Float;
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&pOutKV->m_keyHashes);
      v57 = pOutKV->m_keyHashes.m_nAllocated;
      v58 = pUnitKvc;
      if ( v57 != 0 )
      {
        if ( v57 <= 9 )
          v59 = (&pOutKV->m_keyHashes.m_nAllocAllocated + 1);
        else
          v59 = pOutKV->m_keyHashes.m_pElements;
      }
      else
      {
        v59 = 0;
      }
      v60 = pOutKV->m_keyHashes.m_nCount - 1;
      pUnitKva = LODWORD(pString);
      v59[v60] = v58;
      pStringa = v60;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(p_m_keyValues);
      if ( pOutKV->m_keyValues.m_nAllocated != 0 )
        v61 = pOutKV->m_keyValues.m_pElements;
      else
        v61 = 0;
      v62 = &v61[pStringa];
      m_flags = v62->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v62->m_value.m_flags = m_flags & 0xFFFE;
      v62->m_value.m_uint64 = 0;
      v62->m_value.m_type = 1;
      v62->m_value.m_int = pUnitKva;
      if ( pOutKV->m_keyValues.m_nAllocated != 0 )
        v64 = pOutKV->m_keyValues.m_pElements;
      else
        v64 = 0;
      v64[pStringa].m_pAttributeName = 0;
      goto LABEL_48;
    }
    v51 = pOutKV->m_keyHashes.m_nAllocated;
    v52 = 0;
    while ( 1 )
    {
      if ( v51 != 0 )
      {
        v53 = (&pOutKV->m_keyHashes.m_nAllocAllocated + 1);
        if ( v51 > 9 )
          v53 = pOutKV->m_keyHashes.m_pElements;
        if ( v39 == v53[v52] )
        {
LABEL_79:
          if ( pOutKV->m_keyValues.m_nAllocated != 0 )
          {
            v54 = pOutKV->m_keyValues.m_pElements;
            v55 = v52;
            v56 = &v54[v55];
            if ( v54[v55].m_pAttributeName != 0 )
              goto LABEL_81;
LABEL_122:
            v81 = *(v56 + 10);
            if ( (v81 & 1) != 0 )
              *(v56 + 10) = v81 & 0xFFFE;
            *v56 = 0;
            *(v56 + 8) = 1;
            *v56 = Float;
          }
          else
          {
            v55 = v52;
            v54 = 0;
            v56 = v55 * 24;
            if ( *(v55 * 24 + 16) == 0 )
              goto LABEL_122;
LABEL_81:
            Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v54[v55].m_pAttributeName);
          }
LABEL_48:
          v40 = KeyValues::GetFloat(NextKey, "aggressive", v38);
          if ( AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strAggressive.m_hashList.m_Size > v32 )
          {
            v41 = AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strAggressive.m_hashList.m_Memory.m_pMemory[v31];
            if ( pOutKV->m_nQueuedForSpawnCount > 0 )
              goto LABEL_50;
          }
          else
          {
            pStringh = v40;
            v41 = CEntityKeyIdIndexList::GenerateStringCode(
                    &AppendNPCKeyValues(char const*,CEntityKeyValues *,bool)::strAggressive,
                    v32);
            v40 = pStringh;
            if ( pOutKV->m_nQueuedForSpawnCount > 0 )
              goto LABEL_50;
          }
          v43 = pOutKV->m_keyHashes.m_nCount;
          if ( v43 <= 0 )
          {
LABEL_96:
            pUnitKvd = v41;
            pStringb = v40;
            CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&pOutKV->m_keyHashes);
            v65 = pOutKV->m_keyHashes.m_nAllocated;
            v66 = pUnitKvd;
            if ( v65 != 0 )
            {
              if ( v65 <= 9 )
                v67 = (&pOutKV->m_keyHashes.m_nAllocAllocated + 1);
              else
                v67 = pOutKV->m_keyHashes.m_pElements;
            }
            else
            {
              v67 = 0;
            }
            v68 = pOutKV->m_keyHashes.m_nCount - 1;
            pUnitKvb = LODWORD(pStringb);
            v67[v68] = v66;
            pStringc = v68;
            CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(p_m_keyValues);
            if ( pOutKV->m_keyValues.m_nAllocated != 0 )
              v69 = pOutKV->m_keyValues.m_pElements;
            else
              v69 = 0;
            v70 = &v69[pStringc];
            v71 = v70->m_value.m_flags;
            if ( (v71 & 1) != 0 )
              v70->m_value.m_flags = v71 & 0xFFFE;
            v70->m_value.m_uint64 = 0;
            v70->m_value.m_type = 1;
            v70->m_value.m_int = pUnitKvb;
            if ( pOutKV->m_keyValues.m_nAllocated != 0 )
              v72 = pOutKV->m_keyValues.m_pElements;
            else
              v72 = 0;
            v72[pStringc].m_pAttributeName = 0;
            goto LABEL_50;
          }
          v44 = pOutKV->m_keyHashes.m_nAllocated;
          v45 = 0;
          while ( 2 )
          {
            if ( v44 == 0 )
            {
              if ( v41 == *(4 * v45) )
                break;
              goto LABEL_64;
            }
            v46 = (&pOutKV->m_keyHashes.m_nAllocAllocated + 1);
            if ( v44 > 9 )
              v46 = pOutKV->m_keyHashes.m_pElements;
            if ( v41 != v46[v45] )
            {
LABEL_64:
              if ( v43 <= ++v45 )
                goto LABEL_96;
              continue;
            }
            break;
          }
          if ( pOutKV->m_keyValues.m_nAllocated != 0 )
          {
            v47 = pOutKV->m_keyValues.m_pElements;
            v48 = v45;
            v49 = &v47[v48];
            if ( v47[v48].m_pAttributeName != 0 )
              goto LABEL_69;
LABEL_118:
            v80 = *(v49 + 10);
            if ( (v80 & 1) != 0 )
              *(v49 + 10) = v80 & 0xFFFE;
            *v49 = 0;
            *(v49 + 8) = 1;
            *v49 = v40;
          }
          else
          {
            v48 = v45;
            v47 = 0;
            v49 = v48 * 24;
            if ( *(v48 * 24 + 16) == 0 )
              goto LABEL_118;
LABEL_69:
            Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v47[v48].m_pAttributeName);
          }
LABEL_50:
          ++v32;
          ++v31;
          NextKey = KeyValues::GetNextKey(NextKey);
          if ( NextKey == 0 )
            goto LABEL_107;
          goto LABEL_51;
        }
      }
      else if ( v39 == *(4 * v52) )
      {
        goto LABEL_79;
      }
      if ( v50 <= ++v52 )
        goto LABEL_86;
    }
  }
  m_pkvHeroes = v6->m_pkvAddOnHeroes;
  if ( m_pkvHeroes != 0 )
    goto LABEL_7;
  return 0;
}


// DerivesFromBaseNPCDesigner  (line 234, @0x00000000025f8f80, libserver.so)  // inlines: GetBaseClass, GetNameAsCStr, String
// calls: CEntitySystem::FindClassByDesignName, V_stricmp_fast
// callers: CDotaMapLoadEntityFilter::FilterSpawnGroupEntities
// strings: "npc_dota_base"
bool __fastcall DerivesFromBaseNPCDesigner(const char *pDesignerClassName)
{
  CEntityClass *ClassByDesignName; // rbx
  CEntityClassInfo *m_pBaseClassInfo; // rax
  const char *m_pAsString; // rdi

  ClassByDesignName = CEntitySystem::FindClassByDesignName(g_pEntitySystem, pDesignerClassName, 0);
  if ( ClassByDesignName != 0 )
  {
    while ( 1 )
    {
      m_pAsString = "";
      if ( ClassByDesignName->m_designerName.u.m_Id != 0 )
        m_pAsString = ClassByDesignName->m_designerName.u.m_pAsString;
      if ( V_stricmp_fast(m_pAsString, "npc_dota_base") == 0 )
        break;
      m_pBaseClassInfo = ClassByDesignName->m_pBaseClassInfo;
      if ( m_pBaseClassInfo == 0 )
        return m_pBaseClassInfo;
      ClassByDesignName = m_pBaseClassInfo->m_pClass;
      if ( ClassByDesignName == 0 )
        goto LABEL_10;
    }
    LOBYTE(m_pBaseClassInfo) = 1;
  }
  else
  {
LABEL_10:
    LOBYTE(m_pBaseClassInfo) = 0;
  }
  return m_pBaseClassInfo;
}


// CDotaMapLoadEntityFilter::~CDotaMapLoadEntityFilter  (line 248, @0x000000000262bf10, libserver.so)  // inlines: ~ISpawnGroupEntityFilter
void __fastcall CDotaMapLoadEntityFilter::~CDotaMapLoadEntityFilter(CDotaMapLoadEntityFilter *const this)
{
  this->_vptr_ISpawnGroupEntityFilter = off_3FCAF10;
}


// CDotaMapLoadEntityFilter::~CDotaMapLoadEntityFilter  (line 248, @0x000000000262da20, libserver.so)  // inlines: ~CDotaMapLoadEntityFilter, ~ISpawnGroupEntityFilter
// calls: operator delete
void __fastcall CDotaMapLoadEntityFilter::~CDotaMapLoadEntityFilter(CDotaMapLoadEntityFilter *const this)
{
  this->_vptr_ISpawnGroupEntityFilter = off_3FCAF10;
  operator delete(this);
}


// CDotaMapLoadEntityFilter::FilterSpawnGroupEntities  (line 251, @0x000000000264dda0, libserver.so)  // inlines: AddToTail, Base, CEntityKeyValuesModifyScope, CUtlString, CopyConstruct<const CEntityKeyValues*>, DOTAGameRules, Element, FindKeyHash, GetGameMode, GetValue, GetValueString, GrowMemory, IsAddOnGame, TempString, operator[], ~CEntityKeyValuesModifyScope, ~CUtlString
// calls: DerivesFromBaseNPCDesigner, operator new, CEntityKeyValues::CEntityKeyValues, CEntityKeyValuesModifyScope::BeginModify, CEntityKeyValues::CopyFrom, CDOTA_BaseNPC::GetUnitNameFromKeyValues, CUtlString::Get, AppendNPCKeyValues, CEntityKeyValues::SetValue, CUtlString::FreeMemoryBlock, CEntityKeyValuesModifyScope::Release, CUtlMemory<const CEntityKeyValues*, int>::Grow (15 total)
// strings: "dota_base_game_mode", "addon_game_mode"
// globals: CEntityKeyValues::sm_EmptyVariant
void __fastcall CDotaMapLoadEntityFilter::FilterSpawnGroupEntities(
        CDotaMapLoadEntityFilter *const this,
        SpawnGroupHandle_t h,
        bool bIsPrecaching,
        const CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > *pInKeyValues,
        CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > *const outKeyValues)
{
  unsigned __int64 v7; // r12
  const CEntityKeyValues *v8; // rbx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v13; // rdx
  CEntityVariant *p_m_value; // rax
  const char *m_uint64; // rdi
  CEntityKeyValues *v16; // r14
  int v17; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v18; // cx
  __int64 v19; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v20; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v21; // rdx
  CEntityVariant *v22; // rax
  int v23; // eax
  const char *v24; // rax
  __int64 m_Size; // r14
  int v26; // eax
  const CEntityKeyValues **v27; // rax
  CEntityKeyValues *v28; // rbx
  __int64 v29; // r14
  int v30; // eax
  const CEntityKeyValues **v31; // rax
  CUtlVectorBase<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-78h]
  char *pString; // [rsp+20h] [rbp-60h]
  __int64 v34; // [rsp+28h] [rbp-58h]
  CUtlString strUnitName; // [rsp+30h] [rbp-50h] BYREF
  CEntityKeyValuesModifyScope sg; // [rsp+40h] [rbp-40h] BYREF

  if ( pInKeyValues == 0 )
    return;
  if ( pInKeyValues->m_Size <= 0 )
    goto LABEL_32;
  v7 = 0;
  v34 = 8LL * (pInKeyValues->m_Size - 1) + 8;
  p_m_Memory = &outKeyValues->m_Memory;
  do
  {
    v8 = pInKeyValues->m_Memory.m_pMemory[v7 / 8];
    m_nCount = v8->m_keyHashes.m_nCount;
    if ( m_nCount > 0 )
    {
      m_nAllocated = v8->m_keyHashes.m_nAllocated;
      for ( i = 0; m_nCount > i; ++i )
      {
        if ( m_nAllocated != 0 )
        {
          m_pElements = (&v8->m_keyHashes.m_nAllocAllocated + 1);
          if ( m_nAllocated > 9 )
            m_pElements = v8->m_keyHashes.m_pElements;
          if ( m_pElements[i] == -971301790 )
          {
LABEL_12:
            if ( v8->m_keyValues.m_nAllocated != 0 )
              v13 = v8->m_keyValues.m_pElements;
            else
              v13 = 0;
            p_m_value = &v13[i].m_value;
            m_uint64 = "";
            if ( p_m_value->m_type == 30 )
              goto LABEL_15;
LABEL_30:
            if ( asc_32DB004[2] == 0 )
              goto LABEL_31;
            goto LABEL_16;
          }
        }
        else if ( *(4 * i) == -971301790 )
        {
          goto LABEL_12;
        }
      }
    }
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_uint64 = "";
    if ( CEntityKeyValues::sm_EmptyVariant.m_type != 30 )
      goto LABEL_30;
LABEL_15:
    m_uint64 = p_m_value->m_uint64;
    if ( *p_m_value->m_pszString == 0 )
      goto LABEL_31;
LABEL_16:
    if ( !DerivesFromBaseNPCDesigner(m_uint64) )
      goto LABEL_42;
    v16 = operator new(0x70u);
    CEntityKeyValues::CEntityKeyValues(v16);
    v17 = v8->m_keyHashes.m_nCount;
    if ( v17 <= 0 )
    {
LABEL_36:
      v22 = &CEntityKeyValues::sm_EmptyVariant;
      pString = 0;
      if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
        goto LABEL_28;
      goto LABEL_37;
    }
    v18 = v8->m_keyHashes.m_nAllocated;
    v19 = 0;
    while ( v18 == 0 )
    {
      if ( *(4 * v19) == -926958586 )
        goto LABEL_25;
LABEL_22:
      if ( v17 <= ++v19 )
        goto LABEL_36;
    }
    v20 = (&v8->m_keyHashes.m_nAllocAllocated + 1);
    if ( v18 > 9 )
      v20 = v8->m_keyHashes.m_pElements;
    if ( v20[v19] != -926958586 )
      goto LABEL_22;
LABEL_25:
    if ( v8->m_keyValues.m_nAllocated != 0 )
      v21 = v8->m_keyValues.m_pElements;
    else
      v21 = 0;
    pString = 0;
    v22 = &v21[v19].m_value;
    if ( v22->m_type == 30 )
LABEL_28:
      pString = v22->m_uint64;
LABEL_37:
    sg.m_pKeyValues = 0;
    sg.m_pPrevAllocator = 0;
    CEntityKeyValuesModifyScope::BeginModify(&sg, v16);
    CEntityKeyValues::CopyFrom(v16, v8, 1);
    strUnitName.m_pString = 0;
    CDOTA_BaseNPC::GetUnitNameFromKeyValues(v16, &strUnitName);
    v24 = CUtlString::Get(&strUnitName);
    AppendNPCKeyValues(v24, v16, 0);
    if ( pString != 0 )
      CEntityKeyValues::SetValue(v16, -926958586, pString);
    if ( strUnitName.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&strUnitName);
    v8 = v16;
    CEntityKeyValuesModifyScope::Release(&sg);
LABEL_42:
    m_Size = outKeyValues->m_Size;
    v26 = outKeyValues->m_Size;
    if ( m_Size == outKeyValues->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CEntityKeyValues const*,int>::Grow(p_m_Memory, 1);
      v26 = outKeyValues->m_Size;
    }
    outKeyValues->m_Size = v26 + 1;
    v27 = &outKeyValues->m_Memory.m_pMemory[m_Size];
    if ( v27 != 0 )
      *v27 = v8;
LABEL_31:
    v7 += 8LL;
  }
  while ( v7 != v34 );
LABEL_32:
  if ( g_pGameRules != 0 )
  {
    v23 = *&g_pGameRules[6].m_szQuestName[68];
    if ( (v23 == 15 || v23 == 19) && CDOTAGamerules::GetGameModeEntity(g_pGameRules) == 0 )
    {
      v28 = operator new(0x70u);
      CEntityKeyValues::CEntityKeyValues(v28);
      sg.m_pKeyValues = 0;
      sg.m_pPrevAllocator = 0;
      CEntityKeyValuesModifyScope::BeginModify(&sg, v28);
      CEntityKeyValues::SetValue(v28, -971301790, "dota_base_game_mode");
      CEntityKeyValues::SetValue(v28, 2135665646, "addon_game_mode");
      v29 = outKeyValues->m_Size;
      v30 = outKeyValues->m_Size;
      if ( v29 == outKeyValues->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CEntityKeyValues const*,int>::Grow(&outKeyValues->m_Memory, 1);
        v30 = outKeyValues->m_Size;
      }
      outKeyValues->m_Size = v30 + 1;
      v31 = &outKeyValues->m_Memory.m_pMemory[v29];
      if ( v31 != 0 )
        *v31 = v28;
      CEntityKeyValuesModifyScope::Release(&sg);
    }
  }
}


