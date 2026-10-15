
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CreateBotForUnit  (line 120, @0x00000000027fb0f0, libserver.so)  // inlines: CDOTA_Bot_Hero_Unknown, FStrEq, GetTeamCommander, GetUnitName, String, ToCStr, _V_strcmp
// calls: strcmp, operator new, CDOTA_Bot_Hero_Keeper_Of_The_Light::CDOTA_Bot_Hero_Keeper_Of_The_Light, CDOTA_Bot_Unit_GenericMinion::CDOTA_Bot_Unit_GenericMinion, CDOTA_Bot::CDOTA_Bot, CDOTA_TutorialBot_Hero_DragonKnight::CDOTA_TutorialBot_Hero_DragonKnight, CDOTA_Bot_Hero_Alchemist::CDOTA_Bot_Hero_Alchemist, CDOTA_TutorialBot_Hero_Axe::CDOTA_TutorialBot_Hero_Axe, CDOTA_Bot_Hero_AncientApparition::CDOTA_Bot_Hero_AncientApparition, CDOTA_TutorialBot_Hero_Keeper_Of_The_Light::CDOTA_TutorialBot_Hero_Keeper_Of_The_Light, CDOTA_Bot_Hero_Axe::CDOTA_Bot_Hero_Axe, CDOTA_TutorialBot_Hero_Tidehunter::CDOTA_TutorialBot_Hero_Tidehunter (67 total)
// callers: CDOTA_TeamCommander::RegisterUnit
// strings: "npc_dota_hero_alchemist", "npc_dota_hero_ancient_apparition", "npc_dota_hero_antimage", "npc_dota_hero_axe", "npc_dota_hero_bane", "npc_dota_hero_batrider" (40 total)
CDOTA_Bot *__fastcall CreateBotForUnit(CDOTA_BaseNPC *pUnit, bool bTutorialBot)
{
  CDOTA_TeamCommander *p_m_GoodGuys; // r12
  CDOTAPlayer *v5; // r13
  uint32 m_iUnitType; // edx
  const char *m_pAsString; // r14
  CDOTA_Bot_Unit_GenericMinion *v9; // r14
  CDOTA_Bot *v10; // r14
  int v11; // eax
  int v12; // eax
  char v13; // [rsp+Ch] [rbp-34h]
  uint32 v14; // [rsp+Ch] [rbp-34h]

  p_m_GoodGuys = &g_DOTACommander.m_GoodGuys;
  v5 = (*(pUnit->_vptr_IHandleEntity + 413))(pUnit);
  if ( pUnit->m_iTeamNum.m_Value != 2 )
    p_m_GoodGuys = &g_DOTACommander.m_BadGuys;
  if ( v5 == 0 )
    return 0;
  m_iUnitType = pUnit->m_iUnitType;
  if ( (m_iUnitType & 0x20100) != 0 )
    return 0;
  m_pAsString = pUnit->m_iszUnitName.m_Value.u.m_pAsString;
  if ( m_pAsString != 0 )
  {
    if ( m_pAsString == "npc_dota_thinker"
      || strcmp(pUnit->m_iszUnitName.m_Value.u.m_pAsString, "npc_dota_thinker") == 0 )
    {
      return 0;
    }
    if ( pUnit->m_bIsIllusion.m_Value )
      goto LABEL_61;
  }
  else if ( pUnit->m_bIsIllusion.m_Value )
  {
LABEL_61:
    v9 = operator new(0x86B0u);
    CDOTA_Bot_Unit_GenericMinion::CDOTA_Bot_Unit_GenericMinion(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( bTutorialBot )
  {
    if ( m_pAsString == 0 )
      goto LABEL_64;
    if ( m_pAsString == "npc_dota_hero_axe"
      || (v14 = pUnit->m_iUnitType, strcmp(pUnit->m_iszUnitName.m_Value.u.m_pAsString, "npc_dota_hero_axe") == 0) )
    {
      v9 = operator new(0x86D0u);
      CDOTA_TutorialBot_Hero_Axe::CDOTA_TutorialBot_Hero_Axe(v9, v5, pUnit, p_m_GoodGuys);
      return v9;
    }
    if ( m_pAsString == "npc_dota_hero_keeper_of_the_light"
      || strcmp(m_pAsString, "npc_dota_hero_keeper_of_the_light") == 0 )
    {
      v9 = operator new(0x86B8u);
      CDOTA_TutorialBot_Hero_Keeper_Of_The_Light::CDOTA_TutorialBot_Hero_Keeper_Of_The_Light(
        v9,
        v5,
        pUnit,
        p_m_GoodGuys);
      return v9;
    }
    if ( m_pAsString == "npc_dota_hero_razor" || strcmp(m_pAsString, "npc_dota_hero_razor") == 0 )
    {
      v9 = operator new(0x86D8u);
      CDOTA_TutorialBot_Hero_Razor::CDOTA_TutorialBot_Hero_Razor(v9, v5, pUnit, p_m_GoodGuys);
      return v9;
    }
    if ( m_pAsString == "npc_dota_hero_tidehunter" || strcmp(m_pAsString, "npc_dota_hero_tidehunter") == 0 )
    {
      v9 = operator new(0x86D8u);
      CDOTA_TutorialBot_Hero_Tidehunter::CDOTA_TutorialBot_Hero_Tidehunter(v9, v5, pUnit, p_m_GoodGuys);
      return v9;
    }
    if ( m_pAsString == "npc_dota_hero_vengefulspirit" || strcmp(m_pAsString, "npc_dota_hero_vengefulspirit") == 0 )
    {
      v9 = operator new(0x86D8u);
      CDOTA_TutorialBot_Hero_VengefulSpirit::CDOTA_TutorialBot_Hero_VengefulSpirit(v9, v5, pUnit, p_m_GoodGuys);
      return v9;
    }
    if ( m_pAsString == "npc_dota_hero_juggernaut" || strcmp(m_pAsString, "npc_dota_hero_juggernaut") == 0 )
    {
      v9 = operator new(0x86D8u);
      CDOTA_TutorialBot_Hero_Juggernaut::CDOTA_TutorialBot_Hero_Juggernaut(v9, v5, pUnit, p_m_GoodGuys);
      return v9;
    }
    if ( m_pAsString == "npc_dota_hero_skeleton_king" || strcmp(m_pAsString, "npc_dota_hero_skeleton_king") == 0 )
    {
      v9 = operator new(0x86D0u);
      CDOTA_TutorialBot_Hero_SkeletonKing::CDOTA_TutorialBot_Hero_SkeletonKing(v9, v5, pUnit, p_m_GoodGuys);
      return v9;
    }
    if ( m_pAsString == "npc_dota_hero_witch_doctor"
      || (v11 = strcmp(m_pAsString, "npc_dota_hero_witch_doctor"), LOBYTE(m_iUnitType) = v14, v11 == 0) )
    {
      v9 = operator new(0x86D8u);
      CDOTA_TutorialBot_Hero_WitchDoctor::CDOTA_TutorialBot_Hero_WitchDoctor(v9, v5, pUnit, p_m_GoodGuys);
      return v9;
    }
    if ( m_pAsString == "npc_dota_hero_dragon_knight" || strcmp(m_pAsString, "npc_dota_hero_dragon_knight") == 0 )
    {
      v9 = operator new(0x86D0u);
      CDOTA_TutorialBot_Hero_DragonKnight::CDOTA_TutorialBot_Hero_DragonKnight(v9, v5, pUnit, p_m_GoodGuys);
      return v9;
    }
  }
  else if ( m_pAsString == 0 )
  {
    goto LABEL_64;
  }
  if ( m_pAsString == "npc_dota_hero_alchemist"
    || (v13 = m_iUnitType, strcmp(m_pAsString, "npc_dota_hero_alchemist") == 0) )
  {
    v9 = operator new(0x86D0u);
    CDOTA_Bot_Hero_Alchemist::CDOTA_Bot_Hero_Alchemist(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_ancient_apparition" || strcmp(m_pAsString, "npc_dota_hero_ancient_apparition") == 0 )
  {
    v9 = operator new(0x86D8u);
    CDOTA_Bot_Hero_AncientApparition::CDOTA_Bot_Hero_AncientApparition(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_antimage" || strcmp(m_pAsString, "npc_dota_hero_antimage") == 0 )
  {
    v9 = operator new(0x86C0u);
    CDOTA_Bot_Hero_Antimage::CDOTA_Bot_Hero_Antimage(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_axe" || strcmp(m_pAsString, "npc_dota_hero_axe") == 0 )
  {
    v9 = operator new(0x86C8u);
    CDOTA_Bot_Hero_Axe::CDOTA_Bot_Hero_Axe(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_bane" || strcmp(m_pAsString, "npc_dota_hero_bane") == 0 )
  {
    v9 = operator new(0x86D0u);
    CDOTA_Bot_Hero_Bane::CDOTA_Bot_Hero_Bane(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_batrider" || strcmp(m_pAsString, "npc_dota_hero_batrider") == 0 )
  {
    v9 = operator new(0x86D0u);
    CDOTA_Bot_Hero_Batrider::CDOTA_Bot_Hero_Batrider(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_beastmaster" || strcmp(m_pAsString, "npc_dota_hero_beastmaster") == 0 )
  {
    v9 = operator new(0x86C8u);
    CDOTA_Bot_Hero_Beastmaster::CDOTA_Bot_Hero_Beastmaster(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_bloodseeker" || strcmp(m_pAsString, "npc_dota_hero_bloodseeker") == 0 )
  {
    v9 = operator new(0x86C8u);
    CDOTA_Bot_Hero_Bloodseeker::CDOTA_Bot_Hero_Bloodseeker(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_bounty_hunter" || strcmp(m_pAsString, "npc_dota_hero_bounty_hunter") == 0 )
  {
    v9 = operator new(0x86C8u);
    CDOTA_Bot_Hero_BountyHunter::CDOTA_Bot_Hero_BountyHunter(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_brewmaster" || strcmp(m_pAsString, "npc_dota_hero_brewmaster") == 0 )
  {
    v9 = operator new(0x86C8u);
    CDOTA_Bot_Hero_Brewmaster::CDOTA_Bot_Hero_Brewmaster(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_bristleback" || strcmp(m_pAsString, "npc_dota_hero_bristleback") == 0 )
  {
    v9 = operator new(0x86C8u);
    CDOTA_Bot_Hero_Bristleback::CDOTA_Bot_Hero_Bristleback(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_broodmother" || strcmp(m_pAsString, "npc_dota_hero_broodmother") == 0 )
  {
    v9 = operator new(0x86D0u);
    CDOTA_Bot_Hero_Broodmother::CDOTA_Bot_Hero_Broodmother(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_chaos_knight" || strcmp(m_pAsString, "npc_dota_hero_chaos_knight") == 0 )
  {
    v9 = operator new(0x86C8u);
    CDOTA_Bot_Hero_ChaosKnight::CDOTA_Bot_Hero_ChaosKnight(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_chen" || strcmp(m_pAsString, "npc_dota_hero_chen") == 0 )
  {
    v9 = operator new(0x86D0u);
    CDOTA_Bot_Hero_Chen::CDOTA_Bot_Hero_Chen(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_clinkz" || strcmp(m_pAsString, "npc_dota_hero_clinkz") == 0 )
  {
    v9 = operator new(0x86D0u);
    CDOTA_Bot_Hero_Clinkz::CDOTA_Bot_Hero_Clinkz(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_crystal_maiden" || strcmp(m_pAsString, "npc_dota_hero_crystal_maiden") == 0 )
  {
    v9 = operator new(0x86D0u);
    CDOTA_Bot_Hero_CrystalMaiden::CDOTA_Bot_Hero_CrystalMaiden(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_dazzle" || strcmp(m_pAsString, "npc_dota_hero_dazzle") == 0 )
  {
    v9 = operator new(0x86D0u);
    CDOTA_Bot_Hero_Dazzle::CDOTA_Bot_Hero_Dazzle(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_death_prophet" || strcmp(m_pAsString, "npc_dota_hero_death_prophet") == 0 )
  {
    v9 = operator new(0x86D0u);
    CDOTA_Bot_Hero_DeathProphet::CDOTA_Bot_Hero_DeathProphet(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_dragon_knight" || strcmp(m_pAsString, "npc_dota_hero_dragon_knight") == 0 )
  {
    v9 = operator new(0x86C8u);
    CDOTA_Bot_Hero_DragonKnight::CDOTA_Bot_Hero_DragonKnight(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_drow_ranger" || strcmp(m_pAsString, "npc_dota_hero_drow_ranger") == 0 )
  {
    v9 = operator new(0x86C0u);
    CDOTA_Bot_Hero_Drow::CDOTA_Bot_Hero_Drow(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_earthshaker" || strcmp(m_pAsString, "npc_dota_hero_earthshaker") == 0 )
  {
    v9 = operator new(0x86D0u);
    CDOTA_Bot_Hero_Earthshaker::CDOTA_Bot_Hero_Earthshaker(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_jakiro" || strcmp(m_pAsString, "npc_dota_hero_jakiro") == 0 )
  {
    v9 = operator new(0x86D0u);
    CDOTA_Bot_Hero_Jakiro::CDOTA_Bot_Hero_Jakiro(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_juggernaut" || strcmp(m_pAsString, "npc_dota_hero_juggernaut") == 0 )
  {
    v9 = operator new(0x86D0u);
    CDOTA_Bot_Hero_Juggernaut::CDOTA_Bot_Hero_Juggernaut(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_keeper_of_the_light"
    || strcmp(m_pAsString, "npc_dota_hero_keeper_of_the_light") == 0 )
  {
    v9 = operator new(0x86B8u);
    CDOTA_Bot_Hero_Keeper_Of_The_Light::CDOTA_Bot_Hero_Keeper_Of_The_Light(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_kunkka" || strcmp(m_pAsString, "npc_dota_hero_kunkka") == 0 )
  {
    v9 = operator new(0x86D8u);
    CDOTA_Bot_Hero_Kunkka::CDOTA_Bot_Hero_Kunkka(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_lich" || strcmp(m_pAsString, "npc_dota_hero_lich") == 0 )
  {
    v9 = operator new(0x86D0u);
    CDOTA_Bot_Hero_Lich::CDOTA_Bot_Hero_Lich(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_lina" || strcmp(m_pAsString, "npc_dota_hero_lina") == 0 )
  {
    v9 = operator new(0x86D0u);
    CDOTA_Bot_Hero_Lina::CDOTA_Bot_Hero_Lina(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_lion" || strcmp(m_pAsString, "npc_dota_hero_lion") == 0 )
  {
    v9 = operator new(0x86D0u);
    CDOTA_Bot_Hero_Lion::CDOTA_Bot_Hero_Lion(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_luna" || strcmp(m_pAsString, "npc_dota_hero_luna") == 0 )
  {
    v9 = operator new(0x86D0u);
    CDOTA_Bot_Hero_Luna::CDOTA_Bot_Hero_Luna(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_omniknight" || strcmp(m_pAsString, "npc_dota_hero_omniknight") == 0 )
  {
    v9 = operator new(0x86C8u);
    CDOTA_Bot_Hero_Omniknight::CDOTA_Bot_Hero_Omniknight(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_oracle" || strcmp(m_pAsString, "npc_dota_hero_oracle") == 0 )
  {
    v9 = operator new(0x86D0u);
    CDOTA_Bot_Hero_Oracle::CDOTA_Bot_Hero_Oracle(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_necrolyte" || strcmp(m_pAsString, "npc_dota_hero_necrolyte") == 0 )
  {
    v9 = operator new(0x86C8u);
    CDOTA_Bot_Hero_Necrolyte::CDOTA_Bot_Hero_Necrolyte(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_nevermore" || strcmp(m_pAsString, "npc_dota_hero_nevermore") == 0 )
  {
    v9 = operator new(0x86D0u);
    CDOTA_Bot_Hero_Nevermore::CDOTA_Bot_Hero_Nevermore(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_phantom_assassin" || strcmp(m_pAsString, "npc_dota_hero_phantom_assassin") == 0 )
  {
    v9 = operator new(0x86C8u);
    CDOTA_Bot_Hero_PhantomAssassin::CDOTA_Bot_Hero_PhantomAssassin(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_pudge" || strcmp(m_pAsString, "npc_dota_hero_pudge") == 0 )
  {
    v9 = operator new(0x86C8u);
    CDOTA_Bot_Hero_Pudge::CDOTA_Bot_Hero_Pudge(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_razor" || strcmp(m_pAsString, "npc_dota_hero_razor") == 0 )
  {
    v9 = operator new(0x86D0u);
    CDOTA_Bot_Hero_Razor::CDOTA_Bot_Hero_Razor(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_riki" || strcmp(m_pAsString, "npc_dota_hero_riki") == 0 )
  {
    v9 = operator new(0x86D0u);
    CDOTA_Bot_Hero_Riki::CDOTA_Bot_Hero_Riki(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_sand_king" || strcmp(m_pAsString, "npc_dota_hero_sand_king") == 0 )
  {
    v9 = operator new(0x86C8u);
    CDOTA_Bot_Hero_SandKing::CDOTA_Bot_Hero_SandKing(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_skeleton_king" || strcmp(m_pAsString, "npc_dota_hero_skeleton_king") == 0 )
  {
    v9 = operator new(0x86C8u);
    CDOTA_Bot_Hero_SkeletonKing::CDOTA_Bot_Hero_SkeletonKing(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_skywrath_mage" || strcmp(m_pAsString, "npc_dota_hero_skywrath_mage") == 0 )
  {
    v9 = operator new(0x86D0u);
    CDOTA_Bot_Hero_SkywrathMage::CDOTA_Bot_Hero_SkywrathMage(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_sniper" || strcmp(m_pAsString, "npc_dota_hero_sniper") == 0 )
  {
    v9 = operator new(0x86D0u);
    CDOTA_Bot_Hero_Sniper::CDOTA_Bot_Hero_Sniper(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_sven" || strcmp(m_pAsString, "npc_dota_hero_sven") == 0 )
  {
    v9 = operator new(0x86D0u);
    CDOTA_Bot_Hero_Sven::CDOTA_Bot_Hero_Sven(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_tidehunter" || strcmp(m_pAsString, "npc_dota_hero_tidehunter") == 0 )
  {
    v9 = operator new(0x86D0u);
    CDOTA_Bot_Hero_Tidehunter::CDOTA_Bot_Hero_Tidehunter(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_tiny" || strcmp(m_pAsString, "npc_dota_hero_tiny") == 0 )
  {
    v9 = operator new(0x86E0u);
    CDOTA_Bot_Hero_Tiny::CDOTA_Bot_Hero_Tiny(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_vengefulspirit" || strcmp(m_pAsString, "npc_dota_hero_vengefulspirit") == 0 )
  {
    v9 = operator new(0x86D0u);
    CDOTA_Bot_Hero_VengefulSpirit::CDOTA_Bot_Hero_VengefulSpirit(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_viper" || strcmp(m_pAsString, "npc_dota_hero_viper") == 0 )
  {
    v9 = operator new(0x86C8u);
    CDOTA_Bot_Hero_Viper::CDOTA_Bot_Hero_Viper(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_warlock" || strcmp(m_pAsString, "npc_dota_hero_warlock") == 0 )
  {
    v9 = operator new(0x86D0u);
    CDOTA_Bot_Hero_Warlock::CDOTA_Bot_Hero_Warlock(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_windrunner" || strcmp(m_pAsString, "npc_dota_hero_windrunner") == 0 )
  {
    v9 = operator new(0x86D0u);
    CDOTA_Bot_Hero_Windrunner::CDOTA_Bot_Hero_Windrunner(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_witch_doctor" || strcmp(m_pAsString, "npc_dota_hero_witch_doctor") == 0 )
  {
    v9 = operator new(0x86D0u);
    CDOTA_Bot_Hero_WitchDoctor::CDOTA_Bot_Hero_WitchDoctor(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_hero_zuus" || strcmp(m_pAsString, "npc_dota_hero_zuus") == 0 )
  {
    v9 = operator new(0x86D0u);
    CDOTA_Bot_Hero_Zuus::CDOTA_Bot_Hero_Zuus(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_warlock_golem_1"
    || strcmp(m_pAsString, "npc_dota_warlock_golem_1") == 0
    || m_pAsString == "npc_dota_warlock_golem_2"
    || strcmp(m_pAsString, "npc_dota_warlock_golem_2") == 0
    || m_pAsString == "npc_dota_warlock_golem_3"
    || strcmp(m_pAsString, "npc_dota_warlock_golem_3") == 0
    || m_pAsString == "npc_dota_warlock_golem_scepter_1"
    || strcmp(m_pAsString, "npc_dota_warlock_golem_scepter_1") == 0
    || m_pAsString == "npc_dota_warlock_golem_scepter_2"
    || strcmp(m_pAsString, "npc_dota_warlock_golem_scepter_2") == 0
    || m_pAsString == "npc_dota_warlock_golem_scepter_3"
    || strcmp(m_pAsString, "npc_dota_warlock_golem_scepter_3") == 0 )
  {
    v9 = operator new(0x86B0u);
    CDOTA_Bot_Unit_WarlockGolem::CDOTA_Bot_Unit_WarlockGolem(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
  if ( m_pAsString == "npc_dota_witch_doctor_death_ward"
    || (v12 = strcmp(m_pAsString, "npc_dota_witch_doctor_death_ward"), LOBYTE(m_iUnitType) = v13, v12 == 0) )
  {
    v9 = operator new(0x86B0u);
    CDOTA_Bot_Unit_WitchDoctor_DeathWard::CDOTA_Bot_Unit_WitchDoctor_DeathWard(v9, v5, pUnit, p_m_GoodGuys);
    return v9;
  }
LABEL_64:
  if ( (m_iUnitType & 1) == 0 )
    goto LABEL_61;
  v10 = operator new(0x86B0u);
  CDOTA_Bot::CDOTA_Bot(v10, v5, pUnit, p_m_GoodGuys);
  v10->_vptr_CDOTA_Bot = &off_42B74F0;
  return v10;
}


// CreateAbilityUsage  (line 218, @0x00000000027ef460, libserver.so)  // inlines: FStrEq, Get, GetAbilityName, GetInstance, GetUnit, GetUnitName, String, ToCStr, ToDOTABaseNPC, _V_strcmp, operator CBaseEntity*
// calls: CEntityHandle::operator CEntityInstance*, strcmp, operator new, CDOTA_Bot_AbilityUsage_Alchemist_ChemicalRage::CDOTA_Bot_AbilityUsage_Alchemist_ChemicalRage, CDOTA_Bot_AbilityUsage_AncientApparition_IceBlastRelease::CDOTA_Bot_AbilityUsage_AncientApparition_IceBlastRelease, CDOTA_Bot_AbilityUsage_Antimage_ManaVoid::CDOTA_Bot_AbilityUsage_Antimage_ManaVoid, CDOTA_Bot_AbilityUsage_Axe_CullingBlade::CDOTA_Bot_AbilityUsage_Axe_CullingBlade, CDOTA_Bot_AbilityUsage_Bane_FiendsGrip::CDOTA_Bot_AbilityUsage_Bane_FiendsGrip, CDOTA_Bot_AbilityUsage_Alchemist_AcidSpray::CDOTA_Bot_AbilityUsage_Alchemist_AcidSpray, CDOTA_Bot_AbilityUsage_Batrider_FlamingLasso::CDOTA_Bot_AbilityUsage_Batrider_FlamingLasso, CDOTA_Bot_AbilityUsage_AncientApparition_ColdFeet::CDOTA_Bot_AbilityUsage_AncientApparition_ColdFeet, CDOTA_Bot_AbilityUsage_ObserverWard::CDOTA_Bot_AbilityUsage_ObserverWard (206 total)
// callers: CDOTA_Bot::OnItemEquip, CDOTA_Bot::OnAbilityCreated
// strings: "npc_dota_hero_alchemist", "alchemist_unstable_concoction", "alchemist_unstable_concoction_throw", "alchemist_chemical_rage", "npc_dota_hero_ancient_apparition", "ancient_apparition_cold_feet" (40 total)
CDOTA_Bot_AbilityUsage *__fastcall CreateAbilityUsage(CDOTABaseAbility *pAbility, CDOTA_Bot *pBot)
{
  CEntityInstance *v4; // rax
  CEntityInstance *v5; // rbx
  const char *m_pAsString; // rsi
  DOTAAbilityData_t *m_pAbilityData; // r14
  char *m_pszAbilityName; // r15
  CDOTA_Bot_AbilityUsage_Alchemist_ChemicalRage *v9; // rbx
  const char *v11; // r15
  CDOTA_Bot_AbilityUsage_AncientApparition_IceBlastRelease *v12; // rbx
  const char *v13; // rsi
  CEntityInstance *v14; // rax
  const char *v15; // rsi
  const char *v16; // r15
  CDOTA_Bot_AbilityUsage_Antimage_ManaVoid *v17; // rbx
  const char *v18; // r15
  CDOTA_Bot_AbilityUsage_Axe_CullingBlade *v19; // rbx
  const char *v20; // rsi
  CEntityInstance *v21; // rax
  const char *v22; // rsi
  const char *v23; // r15
  CDOTA_Bot_AbilityUsage_Bane_FiendsGrip *v24; // rbx
  CDOTA_Bot_AbilityUsage_Alchemist_AcidSpray *v25; // rbx
  CEntityInstance *v26; // rax
  const char *v27; // rsi
  const char *v28; // r15
  CDOTA_Bot_AbilityUsage_Batrider_FlamingLasso *v29; // rbx
  CDOTA_Bot_AbilityUsage_AncientApparition_ColdFeet *v30; // rbx
  CEntityInstance *v31; // rax
  const char *v32; // rsi
  const char *v33; // r15
  CEntityInstance *v34; // rax
  const char *v35; // rsi
  const char *v36; // r15
  CEntityInstance *v37; // rax
  const char *v38; // rsi
  const char *v39; // r15
  CEntityInstance *v40; // rax
  const char *v41; // rsi
  const char *v42; // r15
  CEntityInstance *v43; // rax
  const char *v44; // rsi
  const char *v45; // r15
  CEntityInstance *v46; // rax
  const char *v47; // rsi
  const char *v48; // r15
  CEntityInstance *v49; // rax
  const char *v50; // rsi
  const char *v51; // r15
  CEntityInstance *v52; // rax
  const char *v53; // rsi
  const char *v54; // r15
  CEntityInstance *v55; // rax
  const char *v56; // rsi
  const char *v57; // r15
  CEntityInstance *v58; // rax
  const char *v59; // rdi
  const char *v60; // r15
  CEntityInstance *v61; // rax
  const char *v62; // rdi
  const char *v63; // r15
  CEntityInstance *v64; // rax
  const char *v65; // rdi
  const char *v66; // r15
  CEntityInstance *v67; // rax
  const char *v68; // rdi
  const char *v69; // r15
  CEntityInstance *v70; // rax
  const char *v71; // rdi
  const char *v72; // r15
  CEntityInstance *v73; // rax
  const char *v74; // rdi
  const char *v75; // r15
  CEntityInstance *v76; // rax
  const char *v77; // rdi
  const char *v78; // r15
  CEntityInstance *v79; // rax
  const char *v80; // rdi
  const char *v81; // r15
  CEntityInstance *v82; // rax
  const char *v83; // rdi
  const char *v84; // rdi
  CEntityInstance *v85; // rax
  const char *v86; // rdi
  const char *v87; // r15
  CEntityInstance *v88; // rax
  const char *v89; // rdi
  const char *v90; // r15
  CEntityInstance *v91; // rax
  const char *v92; // rdi
  const char *v93; // r15
  CEntityInstance *v94; // rax
  const char *v95; // rdi
  const char *v96; // r15
  CEntityInstance *v97; // rax
  const char *v98; // rdi
  const char *v99; // r15
  CEntityInstance *v100; // rax
  const char *v101; // rdi
  const char *v102; // r15
  CEntityInstance *v103; // rax
  const char *v104; // rdi
  const char *v105; // r15
  CEntityInstance *v106; // rax
  const char *v107; // rdi
  const char *v108; // r15
  CEntityInstance *v109; // rax
  const char *v110; // rdi
  const char *v111; // r15
  CEntityInstance *v112; // rax
  const char *v113; // rdi
  const char *v114; // r15
  CEntityInstance *v115; // rax
  const char *v116; // rdi
  const char *v117; // r15
  CEntityInstance *v118; // rax
  const char *v119; // rdi
  const char *v120; // r15
  CEntityInstance *v121; // rax
  const char *v122; // rdi
  char *v123; // r15
  CEntityInstance *v124; // rax
  const char *v125; // rdi
  const char *v126; // r15
  CEntityInstance *v127; // rax
  const char *v128; // rdi
  const char *v129; // rdi
  CEntityInstance *v130; // rax
  const char *v131; // rdi
  const char *v132; // r15
  CEntityInstance *v133; // rax
  const char *v134; // rdi
  const char *v135; // r15
  CEntityInstance *v136; // rax
  const char *v137; // rdi
  const char *v138; // r15
  CEntityInstance *v139; // rax
  const char *v140; // rdi
  const char *v141; // r15
  CEntityInstance *v142; // rax
  const char *v143; // rdi
  const char *v144; // r15
  CEntityInstance *v145; // rax
  const char *v146; // rdi
  const char *v147; // r15
  CEntityInstance *v148; // rax
  const char *v149; // rdi
  char *v150; // r15
  CEntityInstance *v151; // rax
  const char *v152; // rdi
  const char *v153; // r15
  CEntityInstance *v154; // rax
  const char *v155; // rdi
  const char *v156; // r15
  CEntityInstance *v157; // rax
  const char *v158; // rdi
  const char *v159; // r15
  const char *v160; // rdi
  const char *v161; // rbx
  CDOTA_Bot_AbilityUsage_ObserverWard *v162; // rbx
  CDOTA_Bot_AbilityUsage_Antimage_Blink *v163; // rbx
  CDOTA_Bot_AbilityUsage_Batrider_StickyNapalm *v164; // rbx
  CDOTA_Bot_AbilityUsage_Axe_BerserkersCall *v165; // rbx
  CDOTA_Bot_AbilityUsage_Bane_Enfeeble *v166; // rbx
  CDOTA_Bot_AbilityUsage_Batrider_Flamebreak *v167; // rbx
  CDOTA_Bot_AbilityUsage_Beastmaster_WildAxes *v168; // rbx
  CDOTA_Bot_AbilityUsage_Batrider_Firefly *v169; // rbx
  CDOTA_Bot_AbilityUsage_Beastmaster_CallOfTheWild *v170; // rbx
  CDOTA_Bot_AbilityUsage_Bloodseeker_Bloodrage *v171; // rbx
  CDOTA_Bot_AbilityUsage_Beastmaster_PrimalRoar *v172; // rbx
  CDOTA_Bot_AbilityUsage_Bloodseeker_BloodRite *v173; // rbx
  CDOTA_Bot_AbilityUsage_BountyHunter_ShurikenToss *v174; // rbx
  CDOTA_Bot_AbilityUsage_Bloodseeker_Rupture *v175; // rbx
  CDOTA_Bot_AbilityUsage_BountyHunter_WindWalk *v176; // rbx
  CDOTA_Bot_AbilityUsage_Brewmaster_ThunderClap *v177; // rbx
  CDOTA_Bot_AbilityUsage_BountyHunter_Track *v178; // rbx
  CDOTA_Bot_AbilityUsage_Brewmaster_DrunkenHaze *v179; // rbx
  CDOTA_Bot_AbilityUsage_Bristleback_ViscousNasalGoo *v180; // rbx
  CDOTA_Bot_AbilityUsage_Brewmaster_PrimalSplit *v181; // rbx
  CDOTA_Bot_AbilityUsage_Broodmother_SpawnSpiderlings *v182; // rbx
  CDOTA_Bot_AbilityUsage_Bristleback_QuillSpray *v183; // rbx
  CDOTA_Bot_AbilityUsage_ChaosKnight_ChaosBolt *v184; // rbx
  CDOTA_Bot_AbilityUsage_Broodmother_SpinWeb *v185; // rbx
  CDOTA_Bot_AbilityUsage_Broodmother_InsatiableHunger *v186; // rbx
  CDOTA_Bot_AbilityUsage_ChaosKnight_RealityRift *v187; // rbx
  CDOTA_Bot_AbilityUsage_Chen_Penitence *v188; // rbx
  CDOTA_Bot_AbilityUsage_Chen_TestOfFaith *v189; // rbx
  CDOTA_Bot_AbilityUsage_ChaosKnight_Phantasm *v190; // rbx
  CDOTA_Bot_AbilityUsage_Clinkz_Strafe *v191; // rbx
  CDOTA_Bot_AbilityUsage_Chen_HolyPersuasion *v192; // rbx
  CDOTA_Bot_AbilityUsage_Clinkz_SearingArrows *v193; // rbx
  CDOTA_Bot_AbilityUsage_Chen_HandOfGod *v194; // rbx
  CDOTA_Bot_AbilityUsage_CrystalMaiden_CrystalNova *v195; // rbx
  CDOTA_Bot_AbilityUsage_Clinkz_Windwalk *v196; // rbx
  CDOTA_Bot_AbilityUsage_CrystalMaiden_Frostbite *v197; // rbx
  CDOTA_Bot_AbilityUsage_DeathProphet_Silence *v198; // rbx
  CDOTA_Bot_AbilityUsage_Clinkz_DeathPact *v199; // rbx
  CDOTA_Bot_AbilityUsage_CrystalMaiden_FreezingField *v200; // rbx
  CDOTA_Bot_AbilityUsage_DeathProphet_CarrionSwarm *v201; // rbx
  CDOTA_Bot_AbilityUsage_DragonKnight_DragonTail *v202; // rbx
  CDOTA_Bot_AbilityUsage_DragonKnight_BreatheFire *v203; // rbx
  CDOTA_Bot_AbilityUsage_Drow_FrostArrows *v204; // rbx
  CDOTA_Bot_AbilityUsage_DeathProphet_Exorcism *v205; // rbx
  CDOTA_Bot_AbilityUsage_Dazzle_ShadowWave *v206; // rbx
  CDOTA_Bot_AbilityUsage_Dazzle_ShallowGrave *v207; // rbx
  CDOTA_Bot_AbilityUsage_Dazzle_PoisonTouch *v208; // rbx
  CDOTA_Bot_AbilityUsage_DeathProphet_SpiritSiphon *v209; // rbx
  CDOTA_Bot_AbilityUsage_Juggernaut_Omnislash *v210; // rbx
  CDOTA_Bot_AbilityUsage_Juggernaut_BladeFury *v211; // rbx
  CDOTA_Bot_AbilityUsage_Juggernaut_HealingWard *v212; // rbx
  CDOTA_Bot_AbilityUsage_Earthshaker_EchoSlam *v213; // rbx
  CDOTA_Bot_AbilityUsage_Earthshaker_EnchantTotem *v214; // rbx
  CDOTA_Bot_AbilityUsage_Earthshaker_Fissure *v215; // rbx
  CDOTA_Bot_AbilityUsage_Jakiro_LiquidFire *v216; // rbx
  CDOTA_Bot_AbilityUsage_Jakiro_IcePath *v217; // rbx
  CDOTA_Bot_AbilityUsage_Jakiro_Macropyre *v218; // rbx
  CDOTA_Bot_AbilityUsage_Jakiro_DualBreath *v219; // rbx
  CDOTA_Bot_AbilityUsage_Axe_BattleHunger *v220; // rbx
  CDOTA_Bot_AbilityUsage_DragonKnight_ElderDragonForm *v221; // rbx
  CDOTA_Bot_AbilityUsage_Oracle_FatesEdict *v222; // rbx
  CDOTA_Bot_AbilityUsage_Oracle_FortunesEnd *v223; // rbx
  CDOTA_Bot_AbilityUsage_Omniknight_GuardianAngel *v224; // rbx
  CDOTA_Bot_AbilityUsage_Omniknight_Repel *v225; // rbx
  CDOTA_Bot_AbilityUsage_Omniknight_Purification *v226; // rbx
  CDOTA_Bot_AbilityUsage_Lion_Voodoo *v227; // rbx
  CDOTA_Bot_AbilityUsage_Lion_Impale *v228; // rbx
  CDOTA_Bot_AbilityUsage_Lina_LagunaBlade *v229; // rbx
  CDOTA_Bot_AbilityUsage_Lion_FingerOfDeath *v230; // rbx
  CDOTA_Bot_AbilityUsage_Luna_Eclipse *v231; // rbx
  CDOTA_Bot_AbilityUsage_Lion_ManaDrain *v232; // rbx
  CDOTA_Bot_AbilityUsage_Luna_LucentBeam *v233; // rbx
  CDOTA_Bot_AbilityUsage_Lina_DragonSlave *v234; // rbx
  CDOTA_Bot_AbilityUsage_Lina_LightStrikearray *v235; // rbx
  CDOTA_Bot_AbilityUsage_Lich_ChainFrost *v236; // rbx
  CDOTA_Bot_AbilityUsage_Lich_DarkRitual *v237; // rbx
  CDOTA_Bot_AbilityUsage_Lich_FrostArmor *v238; // rbx
  CDOTA_Bot_AbilityUsage_Lich_FrostNova *v239; // rbx
  CDOTA_Bot_AbilityUsage_Kunkka_GhostShip *v240; // rbx
  CDOTA_Bot_AbilityUsage_Kunkka_XMarksTheSpot *v241; // rbx
  CDOTA_Bot_AbilityUsage_Kunkka_Torrent *v242; // rbx
  CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic *v243; // rbx
  CDOTA_Bot_AbilityUsage_Urn *v244; // rbx
  CDOTA_Bot_AbilityUsage_VeilOfDischord *v245; // rbx
  CDOTA_Bot_AbilityUsage_TravelBoots *v246; // rbx
  CDOTA_Bot_AbilityUsage_TeleportScroll *v247; // rbx
  CDOTA_Bot_AbilityUsage_Tango *v248; // rbx
  CDOTA_Bot_AbilityUsage_SoulRing *v249; // rbx
  CDOTA_Bot_AbilityUsage_Bane_BrainSap *v250; // rbx
  CDOTA_Bot_AbilityUsage_Bane_Nightmare *v251; // rbx
  CDOTA_Bot_AbilityUsage_AncientApparition_IceVortex *v252; // rbx
  CDOTA_Bot_AbilityUsage_AncientApparition_ChillingTouch *v253; // rbx
  CDOTA_Bot_AbilityUsage_AncientApparition_IceBlast *v254; // rbx
  CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoction *v255; // rbx
  CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoctionThrow *v256; // rbx
  CDOTA_Bot_AbilityUsage_WardDispenser *v257; // rbx
  CDOTA_Bot_AbilityUsage_Dazzle_Weave *v258; // rbx
  CDOTA_Bot_AbilityUsage_Drow_WaveOfSilence *v259; // rbx
  CDOTA_Bot_AbilityUsage_SmokeOfDeceit *v260; // rbx
  CDOTA_Bot_AbilityUsage_ShivasGuard *v261; // rbx
  CDOTA_Bot_AbilityUsage_Sheepstick *v262; // rbx
  CDOTA_Bot_AbilityUsage_RodOfAtos *v263; // rbx
  CDOTA_Bot_AbilityUsage_Refresher *v264; // rbx
  CDOTA_Bot_AbilityUsage_Pipe *v265; // rbx
  CDOTA_Bot_AbilityUsage_PhaseBoots *v266; // rbx
  CDOTA_Bot_AbilityUsage_Orchid *v267; // rbx
  CDOTA_Bot_AbilityUsage_Necronomicon *v268; // rbx
  CDOTA_Bot_AbilityUsage_Mjollnir *v269; // rbx
  CDOTA_Bot_AbilityUsage_Mekansm *v270; // rbx
  CDOTA_Bot_AbilityUsage_MedallionOfCourage *v271; // rbx
  CDOTA_Bot_AbilityUsage_MaskOfMadness *v272; // rbx
  CDOTA_Bot_AbilityUsage_Manta *v273; // rbx
  CDOTA_Bot_AbilityUsage_MagicStick *v274; // rbx
  CDOTA_Bot_AbilityUsage_InvisibilityEdge *v275; // rbx
  CDOTA_Bot_AbilityUsage_HeavensHalberd *v276; // rbx
  CDOTA_Bot_AbilityUsage_HandOfMidas *v277; // rbx
  CDOTA_Bot_AbilityUsage_GhostScepter *v278; // rbx
  CDOTA_Bot_AbilityUsage_ForceStaff *v279; // rbx
  CDOTA_Bot_AbilityUsage_Flask *v280; // rbx
  CDOTA_Bot_AbilityUsage_EtherealBlade *v281; // rbx
  CDOTA_Bot_AbilityUsage_Dust *v282; // rbx
  CDOTA_Bot_AbilityUsage_DiffusalBlade *v283; // rbx
  CDOTA_Bot_AbilityUsage_Dagon *v284; // rbx
  CDOTA_Bot_AbilityUsage_Cyclone *v285; // rbx
  CDOTA_Bot_AbilityUsage_CrimsonGuard *v286; // rbx
  CDOTA_Bot_AbilityUsage_Clarity *v287; // rbx
  CDOTA_Bot_AbilityUsage_Courier *v288; // rbx
  CDOTA_Bot_AbilityUsage_Cheese *v289; // rbx
  CDOTA_Bot_AbilityUsage_Butterfly *v290; // rbx
  CDOTA_Bot_AbilityUsage_Buckler *v291; // rbx
  CDOTA_Bot_AbilityUsage_Bottle *v292; // rbx
  CDOTA_Bot_AbilityUsage_BlinkDagger *v293; // rbx
  CDOTA_Bot_AbilityUsage_BladeMail *v294; // rbx
  CDOTA_Bot_AbilityUsage_BlackKingBar *v295; // rbx
  CDOTA_Bot_AbilityUsage_Armlet *v296; // rbx
  CDOTA_Bot_AbilityUsage_ArcaneBoots *v297; // rbx
  CDOTA_Bot_AbilityUsage_AncientJanggo *v298; // rbx
  CDOTA_Bot_AbilityUsage_AbyssalBlade *v299; // rbx
  CDOTA_Bot_AbilityUsage_Zuus_ThundergodsWrath *v300; // rbx
  CDOTA_Bot_AbilityUsage_Zuus_LightningBolt *v301; // rbx
  CDOTA_Bot_AbilityUsage_Zuus_ArcLightning *v302; // rbx
  CDOTA_Bot_AbilityUsage_WitchDoctor_DeathWard *v303; // rbx
  CDOTA_Bot_AbilityUsage_WitchDoctor_Maledict *v304; // rbx
  CDOTA_Bot_AbilityUsage_WitchDoctor_VoodooRestoration *v305; // rbx
  CDOTA_Bot_AbilityUsage_WitchDoctor_ParalyzingCask *v306; // rbx
  CDOTA_Bot_AbilityUsage_Warlock_RainOfChaos *v307; // rbx
  CDOTA_Bot_AbilityUsage_Warlock_Upheaval *v308; // rbx
  CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast *v309; // rbx
  CDOTA_Bot_AbilityUsage_SandKing_Epicenter *v310; // rbx
  CDOTA_Bot_AbilityUsage_SandKing_SandStorm *v311; // rbx
  CDOTA_Bot_AbilityUsage_SandKing_BurrowStrike *v312; // rbx
  CDOTA_Bot_AbilityUsage_Riki_TricksOfTheTrade *v313; // rbx
  CDOTA_Bot_AbilityUsage_Riki_BlinkStrike *v314; // rbx
  CDOTA_Bot_AbilityUsage_Razor_StaticLink *v315; // rbx
  CDOTA_Bot_AbilityUsage_Pudge_Dismember *v316; // rbx
  CDOTA_Bot_AbilityUsage_Razor_PlasmaField *v317; // rbx
  CDOTA_Bot_AbilityUsage_Riki_SmokeScreen *v318; // rbx
  CDOTA_Bot_AbilityUsage_Razor_EyeOfTheStorm *v319; // rbx
  CDOTA_Bot_AbilityUsage_Pudge_Rot *v320; // rbx
  CDOTA_Bot_AbilityUsage_Pudge_MeatHook *v321; // rbx
  CDOTA_Bot_AbilityUsage_Nevermore_Requiem *v322; // rbx
  CDOTA_Bot_AbilityUsage_Nevermore_Shadowraze *v323; // rbx
  CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike *v324; // rbx
  CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger *v325; // rbx
  CDOTA_Bot_AbilityUsage_Nevermore_Shadowraze *v326; // rbx
  CDOTA_Bot_AbilityUsage_Nevermore_Shadowraze *v327; // rbx
  CDOTA_Bot_AbilityUsage_Oracle_FalsePromise *v328; // rbx
  CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames *v329; // rbx
  CDOTA_Bot_AbilityUsage_Necrolyte_Scythe *v330; // rbx
  CDOTA_Bot_AbilityUsage_Necrolyte_DeathPulse *v331; // rbx
  CDOTA_Bot_AbilityUsage_Tidehunter_Ravage *v332; // rbx
  CDOTA_Bot_AbilityUsage_Tidehunter_AnchorSmash *v333; // rbx
  CDOTA_Bot_AbilityUsage_Tidehunter_Gush *v334; // rbx
  CDOTA_Bot_AbilityUsage_Sven_GodsStrength *v335; // rbx
  CDOTA_Bot_AbilityUsage_Sven_Warcry *v336; // rbx
  CDOTA_Bot_AbilityUsage_Sven_StormBolt *v337; // rbx
  CDOTA_Bot_AbilityUsage_Sniper_Assassinate *v338; // rbx
  CDOTA_Bot_AbilityUsage_Sniper_Shrapnel *v339; // rbx
  CDOTA_Bot_AbilityUsage_SkywrathMage_MysticFlare *v340; // rbx
  CDOTA_Bot_AbilityUsage_SkywrathMage_AncientSeal *v341; // rbx
  CDOTA_Bot_AbilityUsage_SkywrathMage_ConcussiveShot *v342; // rbx
  CDOTA_Bot_AbilityUsage_SkywrathMage_ArcaneBolt *v343; // rbx
  CDOTA_Bot_AbilityUsage_VengefulSpirit_NetherSwap *v344; // rbx
  CDOTA_Bot_AbilityUsage_VengefulSpirit_WaveOfTerror *v345; // rbx
  CDOTA_Bot_AbilityUsage_VengefulSpirit_MagicMissile *v346; // rbx
  CDOTA_Bot_AbilityUsage_Tiny_Toss *v347; // rbx
  CDOTA_Bot_AbilityUsage_Tiny_Avalanche *v348; // rbx
  CDOTA_Bot_AbilityUsage_Viper_ViperStrike *v349; // rbx
  CDOTA_Bot_AbilityUsage_Viper_PoisonAttack *v350; // rbx
  CDOTA_Bot_AbilityUsage_Warlock_ShadowWord *v351; // rbx
  CDOTA_Bot_AbilityUsage_Warlock_FatalBonds *v352; // rbx
  CDOTA_Bot_AbilityUsage_Windrunner_FocusFire *v353; // rbx
  CDOTA_Bot_AbilityUsage_Windrunner_Windrun *v354; // rbx
  CDOTA_Bot_AbilityUsage_Windrunner_Powershot *v355; // rbx
  CDOTA_Bot_AbilityUsage_Windrunner_Shackleshot *v356; // rbx

  v4 = CEntityHandle::operator CEntityInstance *(&pBot->m_hUnit);
  v5 = v4;
  if ( v4 != 0
    && BYTE3(v4[7]._vptr_IHandleEntity) != 0
    && (m_pAsString = v4[70].m_iszPrivateVScripts.u.m_pAsString) != 0
    && (m_pAsString == "npc_dota_hero_alchemist" || strcmp(m_pAsString, "npc_dota_hero_alchemist") == 0) )
  {
    m_pAbilityData = pAbility->m_pAbilityData;
    if ( m_pAbilityData != 0 )
    {
      m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
      if ( m_pAbilityData->m_pszAbilityName != 0 )
      {
        if ( m_pszAbilityName == "alchemist_acid_spray"
          || strcmp(m_pAbilityData->m_pszAbilityName, "alchemist_acid_spray") == 0 )
        {
          v25 = operator new(0x20u);
          CDOTA_Bot_AbilityUsage_Alchemist_AcidSpray::CDOTA_Bot_AbilityUsage_Alchemist_AcidSpray(v25, pBot, pAbility);
          return v25;
        }
        if ( m_pszAbilityName == "alchemist_unstable_concoction"
          || strcmp(m_pszAbilityName, "alchemist_unstable_concoction") == 0 )
        {
          v255 = operator new(0x20u);
          CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoction::CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoction(
            v255,
            pBot,
            pAbility);
          return v255;
        }
        if ( m_pszAbilityName == "alchemist_unstable_concoction_throw"
          || strcmp(m_pszAbilityName, "alchemist_unstable_concoction_throw") == 0 )
        {
          v256 = operator new(0x20u);
          CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoctionThrow::CDOTA_Bot_AbilityUsage_Alchemist_UnstableConcoctionThrow(
            v256,
            pBot,
            pAbility);
          return v256;
        }
        if ( m_pszAbilityName == "alchemist_chemical_rage" || strcmp(m_pszAbilityName, "alchemist_chemical_rage") == 0 )
        {
          v9 = operator new(0x20u);
          CDOTA_Bot_AbilityUsage_Alchemist_ChemicalRage::CDOTA_Bot_AbilityUsage_Alchemist_ChemicalRage(
            v9,
            pBot,
            pAbility);
          return v9;
        }
      }
    }
    else
    {
      m_pAbilityData = 0;
    }
  }
  else
  {
    m_pAbilityData = pAbility->m_pAbilityData;
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
  {
    v13 = v5[70].m_iszPrivateVScripts.u.m_pAsString;
    if ( v13 != 0
      && (v13 == "npc_dota_hero_ancient_apparition" || strcmp(v13, "npc_dota_hero_ancient_apparition") == 0)
      && m_pAbilityData != 0 )
    {
      v11 = m_pAbilityData->m_pszAbilityName;
      if ( m_pAbilityData->m_pszAbilityName != 0 )
      {
        if ( v11 == "ancient_apparition_cold_feet"
          || strcmp(m_pAbilityData->m_pszAbilityName, "ancient_apparition_cold_feet") == 0 )
        {
          v30 = operator new(0x20u);
          CDOTA_Bot_AbilityUsage_AncientApparition_ColdFeet::CDOTA_Bot_AbilityUsage_AncientApparition_ColdFeet(
            v30,
            pBot,
            pAbility);
          return v30;
        }
        if ( v11 == "ancient_apparition_ice_vortex" || strcmp(v11, "ancient_apparition_ice_vortex") == 0 )
        {
          v252 = operator new(0x20u);
          CDOTA_Bot_AbilityUsage_AncientApparition_IceVortex::CDOTA_Bot_AbilityUsage_AncientApparition_IceVortex(
            v252,
            pBot,
            pAbility);
          return v252;
        }
        if ( v11 == "ancient_apparition_chilling_touch" || strcmp(v11, "ancient_apparition_chilling_touch") == 0 )
        {
          v253 = operator new(0x20u);
          CDOTA_Bot_AbilityUsage_AncientApparition_ChillingTouch::CDOTA_Bot_AbilityUsage_AncientApparition_ChillingTouch(
            v253,
            pBot,
            pAbility);
          return v253;
        }
        if ( v11 == "ancient_apparition_ice_blast" || strcmp(v11, "ancient_apparition_ice_blast") == 0 )
        {
          v254 = operator new(0x20u);
          CDOTA_Bot_AbilityUsage_AncientApparition_IceBlast::CDOTA_Bot_AbilityUsage_AncientApparition_IceBlast(
            v254,
            pBot,
            pAbility);
          return v254;
        }
        if ( v11 == "ancient_apparition_ice_blast_release" || strcmp(v11, "ancient_apparition_ice_blast_release") == 0 )
        {
          v12 = operator new(0x20u);
          CDOTA_Bot_AbilityUsage_AncientApparition_IceBlastRelease::CDOTA_Bot_AbilityUsage_AncientApparition_IceBlastRelease(
            v12,
            pBot,
            pAbility);
          return v12;
        }
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v14 = v5;
  else
    v14 = 0;
  v15 = v14[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v15 != 0
    && (v15 == "npc_dota_hero_antimage" || strcmp(v15, "npc_dota_hero_antimage") == 0)
    && m_pAbilityData != 0 )
  {
    v16 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v16 == "antimage_blink" || strcmp(m_pAbilityData->m_pszAbilityName, "antimage_blink") == 0 )
      {
        v163 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Antimage_Blink::CDOTA_Bot_AbilityUsage_Antimage_Blink(v163, pBot, pAbility);
        return v163;
      }
      if ( v16 == "antimage_mana_void" || strcmp(v16, "antimage_mana_void") == 0 )
      {
        v17 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Antimage_ManaVoid::CDOTA_Bot_AbilityUsage_Antimage_ManaVoid(v17, pBot, pAbility);
        return v17;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
  {
    v20 = v5[70].m_iszPrivateVScripts.u.m_pAsString;
    if ( v20 != 0 && (v20 == "npc_dota_hero_axe" || strcmp(v20, "npc_dota_hero_axe") == 0) && m_pAbilityData != 0 )
    {
      v18 = m_pAbilityData->m_pszAbilityName;
      if ( m_pAbilityData->m_pszAbilityName != 0 )
      {
        if ( v18 == "axe_berserkers_call" || strcmp(m_pAbilityData->m_pszAbilityName, "axe_berserkers_call") == 0 )
        {
          v165 = operator new(0x20u);
          CDOTA_Bot_AbilityUsage_Axe_BerserkersCall::CDOTA_Bot_AbilityUsage_Axe_BerserkersCall(v165, pBot, pAbility);
          return v165;
        }
        if ( v18 == "axe_battle_hunger" || strcmp(v18, "axe_battle_hunger") == 0 )
        {
          v220 = operator new(0x28u);
          CDOTA_Bot_AbilityUsage_Axe_BattleHunger::CDOTA_Bot_AbilityUsage_Axe_BattleHunger(v220, pBot, pAbility);
          return v220;
        }
        if ( v18 == "axe_culling_blade" || strcmp(v18, "axe_culling_blade") == 0 )
        {
          v19 = operator new(0x28u);
          CDOTA_Bot_AbilityUsage_Axe_CullingBlade::CDOTA_Bot_AbilityUsage_Axe_CullingBlade(v19, pBot, pAbility);
          return v19;
        }
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v21 = v5;
  else
    v21 = 0;
  v22 = v21[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v22 != 0 && (v22 == "npc_dota_hero_bane" || strcmp(v22, "npc_dota_hero_bane") == 0) && m_pAbilityData != 0 )
  {
    v23 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v23 == "bane_enfeeble" || strcmp(m_pAbilityData->m_pszAbilityName, "bane_enfeeble") == 0 )
      {
        v166 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Bane_Enfeeble::CDOTA_Bot_AbilityUsage_Bane_Enfeeble(v166, pBot, pAbility);
        return v166;
      }
      if ( v23 == "bane_brain_sap" || strcmp(v23, "bane_brain_sap") == 0 )
      {
        v250 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Bane_BrainSap::CDOTA_Bot_AbilityUsage_Bane_BrainSap(v250, pBot, pAbility);
        return v250;
      }
      if ( v23 == "bane_nightmare" || strcmp(v23, "bane_nightmare") == 0 )
      {
        v251 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Bane_Nightmare::CDOTA_Bot_AbilityUsage_Bane_Nightmare(v251, pBot, pAbility);
        return v251;
      }
      if ( v23 == "bane_fiends_grip" || strcmp(v23, "bane_fiends_grip") == 0 )
      {
        v24 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Bane_FiendsGrip::CDOTA_Bot_AbilityUsage_Bane_FiendsGrip(v24, pBot, pAbility);
        return v24;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v26 = v5;
  else
    v26 = 0;
  v27 = v26[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v27 != 0
    && (v27 == "npc_dota_hero_batrider" || strcmp(v27, "npc_dota_hero_batrider") == 0)
    && m_pAbilityData != 0 )
  {
    v28 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v28 == "batrider_sticky_napalm" || strcmp(m_pAbilityData->m_pszAbilityName, "batrider_sticky_napalm") == 0 )
      {
        v164 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Batrider_StickyNapalm::CDOTA_Bot_AbilityUsage_Batrider_StickyNapalm(v164, pBot, pAbility);
        return v164;
      }
      if ( v28 == "batrider_flamebreak" || strcmp(v28, "batrider_flamebreak") == 0 )
      {
        v167 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Batrider_Flamebreak::CDOTA_Bot_AbilityUsage_Batrider_Flamebreak(v167, pBot, pAbility);
        return v167;
      }
      if ( v28 == "batrider_firefly" || strcmp(v28, "batrider_firefly") == 0 )
      {
        v169 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Batrider_Firefly::CDOTA_Bot_AbilityUsage_Batrider_Firefly(v169, pBot, pAbility);
        return v169;
      }
      if ( v28 == "batrider_flaming_lasso" || strcmp(v28, "batrider_flaming_lasso") == 0 )
      {
        v29 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Batrider_FlamingLasso::CDOTA_Bot_AbilityUsage_Batrider_FlamingLasso(v29, pBot, pAbility);
        return v29;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v31 = v5;
  else
    v31 = 0;
  v32 = v31[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v32 != 0
    && (v32 == "npc_dota_hero_beastmaster" || strcmp(v32, "npc_dota_hero_beastmaster") == 0)
    && m_pAbilityData != 0 )
  {
    v33 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v33 == "beastmaster_wild_axes" || strcmp(m_pAbilityData->m_pszAbilityName, "beastmaster_wild_axes") == 0 )
      {
        v168 = operator new(0x30u);
        CDOTA_Bot_AbilityUsage_Beastmaster_WildAxes::CDOTA_Bot_AbilityUsage_Beastmaster_WildAxes(v168, pBot, pAbility);
        return v168;
      }
      if ( v33 == "beastmaster_call_of_the_wild" || strcmp(v33, "beastmaster_call_of_the_wild") == 0 )
      {
        v170 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Beastmaster_CallOfTheWild::CDOTA_Bot_AbilityUsage_Beastmaster_CallOfTheWild(
          v170,
          pBot,
          pAbility);
        return v170;
      }
      if ( v33 == "beastmaster_primal_roar" || strcmp(v33, "beastmaster_primal_roar") == 0 )
      {
        v172 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Beastmaster_PrimalRoar::CDOTA_Bot_AbilityUsage_Beastmaster_PrimalRoar(
          v172,
          pBot,
          pAbility);
        return v172;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v34 = v5;
  else
    v34 = 0;
  v35 = v34[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v35 != 0
    && (v35 == "npc_dota_hero_bloodseeker" || strcmp(v35, "npc_dota_hero_bloodseeker") == 0)
    && m_pAbilityData != 0 )
  {
    v36 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v36 == "bloodseeker_bloodrage" || strcmp(m_pAbilityData->m_pszAbilityName, "bloodseeker_bloodrage") == 0 )
      {
        v171 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Bloodseeker_Bloodrage::CDOTA_Bot_AbilityUsage_Bloodseeker_Bloodrage(v171, pBot, pAbility);
        return v171;
      }
      if ( v36 == "bloodseeker_blood_bath" || strcmp(v36, "bloodseeker_blood_bath") == 0 )
      {
        v173 = operator new(0x30u);
        CDOTA_Bot_AbilityUsage_Bloodseeker_BloodRite::CDOTA_Bot_AbilityUsage_Bloodseeker_BloodRite(v173, pBot, pAbility);
        return v173;
      }
      if ( v36 == "bloodseeker_rupture" || strcmp(v36, "bloodseeker_rupture") == 0 )
      {
        v175 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Bloodseeker_Rupture::CDOTA_Bot_AbilityUsage_Bloodseeker_Rupture(v175, pBot, pAbility);
        return v175;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v37 = v5;
  else
    v37 = 0;
  v38 = v37[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v38 != 0
    && (v38 == "npc_dota_hero_bounty_hunter" || strcmp(v38, "npc_dota_hero_bounty_hunter") == 0)
    && m_pAbilityData != 0 )
  {
    v39 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v39 == "bounty_hunter_shuriken_toss"
        || strcmp(m_pAbilityData->m_pszAbilityName, "bounty_hunter_shuriken_toss") == 0 )
      {
        v174 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_BountyHunter_ShurikenToss::CDOTA_Bot_AbilityUsage_BountyHunter_ShurikenToss(
          v174,
          pBot,
          pAbility);
        return v174;
      }
      if ( v39 == "bounty_hunter_wind_walk" || strcmp(v39, "bounty_hunter_wind_walk") == 0 )
      {
        v176 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_BountyHunter_WindWalk::CDOTA_Bot_AbilityUsage_BountyHunter_WindWalk(v176, pBot, pAbility);
        return v176;
      }
      if ( v39 == "bounty_hunter_track" || strcmp(v39, "bounty_hunter_track") == 0 )
      {
        v178 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_BountyHunter_Track::CDOTA_Bot_AbilityUsage_BountyHunter_Track(v178, pBot, pAbility);
        return v178;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v40 = v5;
  else
    v40 = 0;
  v41 = v40[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v41 != 0
    && (v41 == "npc_dota_hero_brewmaster" || strcmp(v41, "npc_dota_hero_brewmaster") == 0)
    && m_pAbilityData != 0 )
  {
    v42 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v42 == "brewmaster_thunder_clap" || strcmp(m_pAbilityData->m_pszAbilityName, "brewmaster_thunder_clap") == 0 )
      {
        v177 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Brewmaster_ThunderClap::CDOTA_Bot_AbilityUsage_Brewmaster_ThunderClap(
          v177,
          pBot,
          pAbility);
        return v177;
      }
      if ( v42 == "brewmaster_drunken_haze" || strcmp(v42, "brewmaster_drunken_haze") == 0 )
      {
        v179 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Brewmaster_DrunkenHaze::CDOTA_Bot_AbilityUsage_Brewmaster_DrunkenHaze(
          v179,
          pBot,
          pAbility);
        return v179;
      }
      if ( v42 == "brewmaster_primal_split" || strcmp(v42, "brewmaster_primal_split") == 0 )
      {
        v181 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Brewmaster_PrimalSplit::CDOTA_Bot_AbilityUsage_Brewmaster_PrimalSplit(
          v181,
          pBot,
          pAbility);
        return v181;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v43 = v5;
  else
    v43 = 0;
  v44 = v43[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v44 != 0
    && (v44 == "npc_dota_hero_bristleback" || strcmp(v44, "npc_dota_hero_bristleback") == 0)
    && m_pAbilityData != 0 )
  {
    v45 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v45 == "bristleback_viscous_nasal_goo"
        || strcmp(m_pAbilityData->m_pszAbilityName, "bristleback_viscous_nasal_goo") == 0 )
      {
        v180 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Bristleback_ViscousNasalGoo::CDOTA_Bot_AbilityUsage_Bristleback_ViscousNasalGoo(
          v180,
          pBot,
          pAbility);
        return v180;
      }
      if ( v45 == "bristleback_quill_spray" || strcmp(v45, "bristleback_quill_spray") == 0 )
      {
        v183 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Bristleback_QuillSpray::CDOTA_Bot_AbilityUsage_Bristleback_QuillSpray(
          v183,
          pBot,
          pAbility);
        return v183;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v46 = v5;
  else
    v46 = 0;
  v47 = v46[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v47 != 0
    && (v47 == "npc_dota_hero_broodmother" || strcmp(v47, "npc_dota_hero_broodmother") == 0)
    && m_pAbilityData != 0 )
  {
    v48 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v48 == "broodmother_spawn_spiderlings"
        || strcmp(m_pAbilityData->m_pszAbilityName, "broodmother_spawn_spiderlings") == 0 )
      {
        v182 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Broodmother_SpawnSpiderlings::CDOTA_Bot_AbilityUsage_Broodmother_SpawnSpiderlings(
          v182,
          pBot,
          pAbility);
        return v182;
      }
      if ( v48 == "broodmother_spin_web" || strcmp(v48, "broodmother_spin_web") == 0 )
      {
        v185 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Broodmother_SpinWeb::CDOTA_Bot_AbilityUsage_Broodmother_SpinWeb(v185, pBot, pAbility);
        return v185;
      }
      if ( v48 == "broodmother_insatiable_hunger" || strcmp(v48, "broodmother_insatiable_hunger") == 0 )
      {
        v186 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Broodmother_InsatiableHunger::CDOTA_Bot_AbilityUsage_Broodmother_InsatiableHunger(
          v186,
          pBot,
          pAbility);
        return v186;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v49 = v5;
  else
    v49 = 0;
  v50 = v49[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v50 != 0
    && (v50 == "npc_dota_hero_chaos_knight" || strcmp(v50, "npc_dota_hero_chaos_knight") == 0)
    && m_pAbilityData != 0 )
  {
    v51 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v51 == "chaos_knight_chaos_bolt" || strcmp(m_pAbilityData->m_pszAbilityName, "chaos_knight_chaos_bolt") == 0 )
      {
        v184 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_ChaosKnight_ChaosBolt::CDOTA_Bot_AbilityUsage_ChaosKnight_ChaosBolt(v184, pBot, pAbility);
        return v184;
      }
      if ( v51 == "chaos_knight_reality_rift" || strcmp(v51, "chaos_knight_reality_rift") == 0 )
      {
        v187 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_ChaosKnight_RealityRift::CDOTA_Bot_AbilityUsage_ChaosKnight_RealityRift(
          v187,
          pBot,
          pAbility);
        return v187;
      }
      if ( v51 == "chaos_knight_phantasm" || strcmp(v51, "chaos_knight_phantasm") == 0 )
      {
        v190 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_ChaosKnight_Phantasm::CDOTA_Bot_AbilityUsage_ChaosKnight_Phantasm(v190, pBot, pAbility);
        return v190;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v52 = v5;
  else
    v52 = 0;
  v53 = v52[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v53 != 0 && (v53 == "npc_dota_hero_chen" || strcmp(v53, "npc_dota_hero_chen") == 0) && m_pAbilityData != 0 )
  {
    v54 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v54 == "chen_penitence" || strcmp(m_pAbilityData->m_pszAbilityName, "chen_penitence") == 0 )
      {
        v188 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Chen_Penitence::CDOTA_Bot_AbilityUsage_Chen_Penitence(v188, pBot, pAbility);
        return v188;
      }
      if ( v54 == "chen_test_of_faith" || strcmp(v54, "chen_test_of_faith") == 0 )
      {
        v189 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Chen_TestOfFaith::CDOTA_Bot_AbilityUsage_Chen_TestOfFaith(v189, pBot, pAbility);
        return v189;
      }
      if ( v54 == "chen_holy_persuasion" || strcmp(v54, "chen_holy_persuasion") == 0 )
      {
        v192 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Chen_HolyPersuasion::CDOTA_Bot_AbilityUsage_Chen_HolyPersuasion(v192, pBot, pAbility);
        return v192;
      }
      if ( v54 == "chen_hand_of_god" || strcmp(v54, "chen_hand_of_god") == 0 )
      {
        v194 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Chen_HandOfGod::CDOTA_Bot_AbilityUsage_Chen_HandOfGod(v194, pBot, pAbility);
        return v194;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v55 = v5;
  else
    v55 = 0;
  v56 = v55[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v56 != 0 && (v56 == "npc_dota_hero_clinkz" || strcmp(v56, "npc_dota_hero_clinkz") == 0) && m_pAbilityData != 0 )
  {
    v57 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v57 == "clinkz_strafe" || strcmp(m_pAbilityData->m_pszAbilityName, "clinkz_strafe") == 0 )
      {
        v191 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Clinkz_Strafe::CDOTA_Bot_AbilityUsage_Clinkz_Strafe(v191, pBot, pAbility);
        return v191;
      }
      if ( v57 == "clinkz_searing_arrows" || strcmp(v57, "clinkz_searing_arrows") == 0 )
      {
        v193 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Clinkz_SearingArrows::CDOTA_Bot_AbilityUsage_Clinkz_SearingArrows(v193, pBot, pAbility);
        return v193;
      }
      if ( v57 == "clinkz_wind_walk" || strcmp(v57, "clinkz_wind_walk") == 0 )
      {
        v196 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Clinkz_Windwalk::CDOTA_Bot_AbilityUsage_Clinkz_Windwalk(v196, pBot, pAbility);
        return v196;
      }
      if ( v57 == "clinkz_death_pact" || strcmp(v57, "clinkz_death_pact") == 0 )
      {
        v199 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Clinkz_DeathPact::CDOTA_Bot_AbilityUsage_Clinkz_DeathPact(v199, pBot, pAbility);
        return v199;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v58 = v5;
  else
    v58 = 0;
  v59 = v58[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v59 != 0
    && (v59 == "npc_dota_hero_crystal_maiden" || strcmp(v59, "npc_dota_hero_crystal_maiden") == 0)
    && m_pAbilityData != 0 )
  {
    v60 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v60 == "crystal_maiden_crystal_nova"
        || strcmp(m_pAbilityData->m_pszAbilityName, "crystal_maiden_crystal_nova") == 0 )
      {
        v195 = operator new(0x30u);
        CDOTA_Bot_AbilityUsage_CrystalMaiden_CrystalNova::CDOTA_Bot_AbilityUsage_CrystalMaiden_CrystalNova(
          v195,
          pBot,
          pAbility);
        return v195;
      }
      if ( v60 == "crystal_maiden_frostbite" || strcmp(v60, "crystal_maiden_frostbite") == 0 )
      {
        v197 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_CrystalMaiden_Frostbite::CDOTA_Bot_AbilityUsage_CrystalMaiden_Frostbite(
          v197,
          pBot,
          pAbility);
        return v197;
      }
      if ( v60 == "crystal_maiden_freezing_field" || strcmp(v60, "crystal_maiden_freezing_field") == 0 )
      {
        v200 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_CrystalMaiden_FreezingField::CDOTA_Bot_AbilityUsage_CrystalMaiden_FreezingField(
          v200,
          pBot,
          pAbility);
        return v200;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v61 = v5;
  else
    v61 = 0;
  v62 = v61[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v62 != 0
    && (v62 == "npc_dota_hero_death_prophet" || strcmp(v62, "npc_dota_hero_death_prophet") == 0)
    && m_pAbilityData != 0 )
  {
    v63 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v63 == "death_prophet_carrion_swarm"
        || strcmp(m_pAbilityData->m_pszAbilityName, "death_prophet_carrion_swarm") == 0 )
      {
        v201 = operator new(0x30u);
        CDOTA_Bot_AbilityUsage_DeathProphet_CarrionSwarm::CDOTA_Bot_AbilityUsage_DeathProphet_CarrionSwarm(
          v201,
          pBot,
          pAbility);
        return v201;
      }
      if ( v63 == "death_prophet_silence" || strcmp(v63, "death_prophet_silence") == 0 )
      {
        v198 = operator new(0x30u);
        CDOTA_Bot_AbilityUsage_DeathProphet_Silence::CDOTA_Bot_AbilityUsage_DeathProphet_Silence(v198, pBot, pAbility);
        return v198;
      }
      if ( v63 == "death_prophet_spirit_siphon" || strcmp(v63, "death_prophet_spirit_siphon") == 0 )
      {
        v209 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_DeathProphet_SpiritSiphon::CDOTA_Bot_AbilityUsage_DeathProphet_SpiritSiphon(
          v209,
          pBot,
          pAbility);
        return v209;
      }
      if ( v63 == "death_prophet_exorcism" || strcmp(v63, "death_prophet_exorcism") == 0 )
      {
        v205 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_DeathProphet_Exorcism::CDOTA_Bot_AbilityUsage_DeathProphet_Exorcism(v205, pBot, pAbility);
        return v205;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v64 = v5;
  else
    v64 = 0;
  v65 = v64[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v65 != 0 && (v65 == "npc_dota_hero_dazzle" || strcmp(v65, "npc_dota_hero_dazzle") == 0) && m_pAbilityData != 0 )
  {
    v66 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v66 == "dazzle_poison_touch" || strcmp(m_pAbilityData->m_pszAbilityName, "dazzle_poison_touch") == 0 )
      {
        v208 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Dazzle_PoisonTouch::CDOTA_Bot_AbilityUsage_Dazzle_PoisonTouch(v208, pBot, pAbility);
        return v208;
      }
      if ( v66 == "dazzle_shallow_grave" || strcmp(v66, "dazzle_shallow_grave") == 0 )
      {
        v207 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Dazzle_ShallowGrave::CDOTA_Bot_AbilityUsage_Dazzle_ShallowGrave(v207, pBot, pAbility);
        return v207;
      }
      if ( v66 == "dazzle_shadow_wave" || strcmp(v66, "dazzle_shadow_wave") == 0 )
      {
        v206 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Dazzle_ShadowWave::CDOTA_Bot_AbilityUsage_Dazzle_ShadowWave(v206, pBot, pAbility);
        return v206;
      }
      if ( v66 == "dazzle_weave" || strcmp(v66, "dazzle_weave") == 0 )
      {
        v258 = operator new(0x30u);
        CDOTA_Bot_AbilityUsage_Dazzle_Weave::CDOTA_Bot_AbilityUsage_Dazzle_Weave(v258, pBot, pAbility);
        return v258;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v67 = v5;
  else
    v67 = 0;
  v68 = v67[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v68 != 0
    && (v68 == "npc_dota_hero_dragon_knight" || strcmp(v68, "npc_dota_hero_dragon_knight") == 0)
    && m_pAbilityData != 0 )
  {
    v69 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v69 == "dragon_knight_breathe_fire"
        || strcmp(m_pAbilityData->m_pszAbilityName, "dragon_knight_breathe_fire") == 0 )
      {
        v203 = operator new(0x30u);
        CDOTA_Bot_AbilityUsage_DragonKnight_BreatheFire::CDOTA_Bot_AbilityUsage_DragonKnight_BreatheFire(
          v203,
          pBot,
          pAbility);
        return v203;
      }
      if ( v69 == "dragon_knight_dragon_tail" || strcmp(v69, "dragon_knight_dragon_tail") == 0 )
      {
        v202 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_DragonKnight_DragonTail::CDOTA_Bot_AbilityUsage_DragonKnight_DragonTail(
          v202,
          pBot,
          pAbility);
        return v202;
      }
      if ( v69 == "dragon_knight_elder_dragon_form" || strcmp(v69, "dragon_knight_elder_dragon_form") == 0 )
      {
        v221 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_DragonKnight_ElderDragonForm::CDOTA_Bot_AbilityUsage_DragonKnight_ElderDragonForm(
          v221,
          pBot,
          pAbility);
        return v221;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v70 = v5;
  else
    v70 = 0;
  v71 = v70[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v71 != 0
    && (v71 == "npc_dota_hero_drow_ranger" || strcmp(v71, "npc_dota_hero_drow_ranger") == 0)
    && m_pAbilityData != 0 )
  {
    v72 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v72 == "drow_ranger_frost_arrows"
        || strcmp(m_pAbilityData->m_pszAbilityName, "drow_ranger_frost_arrows") == 0 )
      {
        v204 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Drow_FrostArrows::CDOTA_Bot_AbilityUsage_Drow_FrostArrows(v204, pBot, pAbility);
        return v204;
      }
      if ( v72 == "drow_ranger_wave_of_silence" || strcmp(v72, "drow_ranger_wave_of_silence") == 0 )
      {
        v259 = operator new(0x30u);
        CDOTA_Bot_AbilityUsage_Drow_WaveOfSilence::CDOTA_Bot_AbilityUsage_Drow_WaveOfSilence(v259, pBot, pAbility);
        return v259;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v73 = v5;
  else
    v73 = 0;
  v74 = v73[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v74 != 0
    && (v74 == "npc_dota_hero_earthshaker" || strcmp(v74, "npc_dota_hero_earthshaker") == 0)
    && m_pAbilityData != 0 )
  {
    v75 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v75 == "earthshaker_fissure" || strcmp(m_pAbilityData->m_pszAbilityName, "earthshaker_fissure") == 0 )
      {
        v215 = operator new(0x30u);
        CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::CDOTA_Bot_AbilityUsage_Earthshaker_Fissure(v215, pBot, pAbility);
        return v215;
      }
      if ( v75 == "earthshaker_enchant_totem" || strcmp(v75, "earthshaker_enchant_totem") == 0 )
      {
        v214 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Earthshaker_EnchantTotem::CDOTA_Bot_AbilityUsage_Earthshaker_EnchantTotem(
          v214,
          pBot,
          pAbility);
        return v214;
      }
      if ( v75 == "earthshaker_echo_slam" || strcmp(v75, "earthshaker_echo_slam") == 0 )
      {
        v213 = operator new(0x30u);
        CDOTA_Bot_AbilityUsage_Earthshaker_EchoSlam::CDOTA_Bot_AbilityUsage_Earthshaker_EchoSlam(v213, pBot, pAbility);
        return v213;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v76 = v5;
  else
    v76 = 0;
  v77 = v76[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v77 != 0 && (v77 == "npc_dota_hero_jakiro" || strcmp(v77, "npc_dota_hero_jakiro") == 0) && m_pAbilityData != 0 )
  {
    v78 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v78 == "jakiro_dual_breath" || strcmp(m_pAbilityData->m_pszAbilityName, "jakiro_dual_breath") == 0 )
      {
        v219 = operator new(0x30u);
        CDOTA_Bot_AbilityUsage_Jakiro_DualBreath::CDOTA_Bot_AbilityUsage_Jakiro_DualBreath(v219, pBot, pAbility);
        return v219;
      }
      if ( v78 == "jakiro_ice_path" || strcmp(v78, "jakiro_ice_path") == 0 )
      {
        v217 = operator new(0x30u);
        CDOTA_Bot_AbilityUsage_Jakiro_IcePath::CDOTA_Bot_AbilityUsage_Jakiro_IcePath(v217, pBot, pAbility);
        return v217;
      }
      if ( v78 == "jakiro_macropyre" || strcmp(v78, "jakiro_macropyre") == 0 )
      {
        v218 = operator new(0x30u);
        CDOTA_Bot_AbilityUsage_Jakiro_Macropyre::CDOTA_Bot_AbilityUsage_Jakiro_Macropyre(v218, pBot, pAbility);
        return v218;
      }
      if ( v78 == "jakiro_liquid_fire" || strcmp(v78, "jakiro_liquid_fire") == 0 )
      {
        v216 = operator new(0x30u);
        CDOTA_Bot_AbilityUsage_Jakiro_LiquidFire::CDOTA_Bot_AbilityUsage_Jakiro_LiquidFire(v216, pBot, pAbility);
        return v216;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v79 = v5;
  else
    v79 = 0;
  v80 = v79[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v80 != 0
    && (v80 == "npc_dota_hero_juggernaut" || strcmp(v80, "npc_dota_hero_juggernaut") == 0)
    && m_pAbilityData != 0 )
  {
    v81 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v81 == "juggernaut_blade_fury" || strcmp(m_pAbilityData->m_pszAbilityName, "juggernaut_blade_fury") == 0 )
      {
        v211 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Juggernaut_BladeFury::CDOTA_Bot_AbilityUsage_Juggernaut_BladeFury(v211, pBot, pAbility);
        return v211;
      }
      if ( v81 == "juggernaut_healing_ward" || strcmp(v81, "juggernaut_healing_ward") == 0 )
      {
        v212 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Juggernaut_HealingWard::CDOTA_Bot_AbilityUsage_Juggernaut_HealingWard(
          v212,
          pBot,
          pAbility);
        return v212;
      }
      if ( v81 == "juggernaut_omni_slash" || strcmp(v81, "juggernaut_omni_slash") == 0 )
      {
        v210 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Juggernaut_Omnislash::CDOTA_Bot_AbilityUsage_Juggernaut_Omnislash(v210, pBot, pAbility);
        return v210;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v82 = v5;
  else
    v82 = 0;
  v83 = v82[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v83 != 0
    && (v83 == "npc_dota_hero_keeper_of_the_light" || strcmp(v83, "npc_dota_hero_keeper_of_the_light") == 0)
    && m_pAbilityData != 0 )
  {
    v84 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0
      && (v84 == "keeper_of_the_light_chakra_magic" || strcmp(v84, "keeper_of_the_light_chakra_magic") == 0) )
    {
      v243 = operator new(0x28u);
      CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic::CDOTA_Bot_AbilityUsage_Keeper_ChakraMagic(v243, pBot, pAbility);
      return v243;
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v85 = v5;
  else
    v85 = 0;
  v86 = v85[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v86 != 0 && (v86 == "npc_dota_hero_kunkka" || strcmp(v86, "npc_dota_hero_kunkka") == 0) && m_pAbilityData != 0 )
  {
    v87 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v87 == "kunkka_torrent" || strcmp(m_pAbilityData->m_pszAbilityName, "kunkka_torrent") == 0 )
      {
        v242 = operator new(0x30u);
        CDOTA_Bot_AbilityUsage_Kunkka_Torrent::CDOTA_Bot_AbilityUsage_Kunkka_Torrent(v242, pBot, pAbility);
        return v242;
      }
      if ( v87 == "kunkka_x_marks_the_spot" || strcmp(v87, "kunkka_x_marks_the_spot") == 0 )
      {
        v241 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Kunkka_XMarksTheSpot::CDOTA_Bot_AbilityUsage_Kunkka_XMarksTheSpot(v241, pBot, pAbility);
        return v241;
      }
      if ( v87 == "kunkka_ghostship" || strcmp(v87, "kunkka_ghostship") == 0 )
      {
        v240 = operator new(0x30u);
        CDOTA_Bot_AbilityUsage_Kunkka_GhostShip::CDOTA_Bot_AbilityUsage_Kunkka_GhostShip(v240, pBot, pAbility);
        return v240;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v88 = v5;
  else
    v88 = 0;
  v89 = v88[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v89 != 0 && (v89 == "npc_dota_hero_lich" || strcmp(v89, "npc_dota_hero_lich") == 0) && m_pAbilityData != 0 )
  {
    v90 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v90 == "lich_frost_nova" || strcmp(m_pAbilityData->m_pszAbilityName, "lich_frost_nova") == 0 )
      {
        v239 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Lich_FrostNova::CDOTA_Bot_AbilityUsage_Lich_FrostNova(v239, pBot, pAbility);
        return v239;
      }
      if ( v90 == "lich_frost_armor" || strcmp(v90, "lich_frost_armor") == 0 )
      {
        v238 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Lich_FrostArmor::CDOTA_Bot_AbilityUsage_Lich_FrostArmor(v238, pBot, pAbility);
        return v238;
      }
      if ( v90 == "lich_dark_ritual" || strcmp(v90, "lich_dark_ritual") == 0 )
      {
        v237 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Lich_DarkRitual::CDOTA_Bot_AbilityUsage_Lich_DarkRitual(v237, pBot, pAbility);
        return v237;
      }
      if ( v90 == "lich_chain_frost" || strcmp(v90, "lich_chain_frost") == 0 )
      {
        v236 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Lich_ChainFrost::CDOTA_Bot_AbilityUsage_Lich_ChainFrost(v236, pBot, pAbility);
        return v236;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v91 = v5;
  else
    v91 = 0;
  v92 = v91[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v92 != 0 && (v92 == "npc_dota_hero_lina" || strcmp(v92, "npc_dota_hero_lina") == 0) && m_pAbilityData != 0 )
  {
    v93 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v93 == "lina_light_strike_array" || strcmp(m_pAbilityData->m_pszAbilityName, "lina_light_strike_array") == 0 )
      {
        v235 = operator new(0x30u);
        CDOTA_Bot_AbilityUsage_Lina_LightStrikearray::CDOTA_Bot_AbilityUsage_Lina_LightStrikearray(v235, pBot, pAbility);
        return v235;
      }
      if ( v93 == "lina_dragon_slave" || strcmp(v93, "lina_dragon_slave") == 0 )
      {
        v234 = operator new(0x30u);
        CDOTA_Bot_AbilityUsage_Lina_DragonSlave::CDOTA_Bot_AbilityUsage_Lina_DragonSlave(v234, pBot, pAbility);
        return v234;
      }
      if ( v93 == "lina_laguna_blade" || strcmp(v93, "lina_laguna_blade") == 0 )
      {
        v229 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Lina_LagunaBlade::CDOTA_Bot_AbilityUsage_Lina_LagunaBlade(v229, pBot, pAbility);
        return v229;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v94 = v5;
  else
    v94 = 0;
  v95 = v94[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v95 != 0 && (v95 == "npc_dota_hero_lion" || strcmp(v95, "npc_dota_hero_lion") == 0) && m_pAbilityData != 0 )
  {
    v96 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v96 == "lion_impale" || strcmp(m_pAbilityData->m_pszAbilityName, "lion_impale") == 0 )
      {
        v228 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Lion_Impale::CDOTA_Bot_AbilityUsage_Lion_Impale(v228, pBot, pAbility);
        return v228;
      }
      if ( v96 == "lion_voodoo" || strcmp(v96, "lion_voodoo") == 0 )
      {
        v227 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Lion_Voodoo::CDOTA_Bot_AbilityUsage_Lion_Voodoo(v227, pBot, pAbility);
        return v227;
      }
      if ( v96 == "lion_mana_drain" || strcmp(v96, "lion_mana_drain") == 0 )
      {
        v232 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Lion_ManaDrain::CDOTA_Bot_AbilityUsage_Lion_ManaDrain(v232, pBot, pAbility);
        return v232;
      }
      if ( v96 == "lion_finger_of_death" || strcmp(v96, "lion_finger_of_death") == 0 )
      {
        v230 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Lion_FingerOfDeath::CDOTA_Bot_AbilityUsage_Lion_FingerOfDeath(v230, pBot, pAbility);
        return v230;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v97 = v5;
  else
    v97 = 0;
  v98 = v97[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v98 != 0 && (v98 == "npc_dota_hero_luna" || strcmp(v98, "npc_dota_hero_luna") == 0) && m_pAbilityData != 0 )
  {
    v99 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v99 == "luna_lucent_beam" || strcmp(m_pAbilityData->m_pszAbilityName, "luna_lucent_beam") == 0 )
      {
        v233 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Luna_LucentBeam::CDOTA_Bot_AbilityUsage_Luna_LucentBeam(v233, pBot, pAbility);
        return v233;
      }
      if ( v99 == "luna_eclipse" || strcmp(v99, "luna_eclipse") == 0 )
      {
        v231 = operator new(0x30u);
        CDOTA_Bot_AbilityUsage_Luna_Eclipse::CDOTA_Bot_AbilityUsage_Luna_Eclipse(v231, pBot, pAbility);
        return v231;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v100 = v5;
  else
    v100 = 0;
  v101 = v100[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v101 != 0
    && (v101 == "npc_dota_hero_omniknight" || strcmp(v101, "npc_dota_hero_omniknight") == 0)
    && m_pAbilityData != 0 )
  {
    v102 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v102 == "omniknight_purification" || strcmp(m_pAbilityData->m_pszAbilityName, "omniknight_purification") == 0 )
      {
        v226 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Omniknight_Purification::CDOTA_Bot_AbilityUsage_Omniknight_Purification(
          v226,
          pBot,
          pAbility);
        return v226;
      }
      if ( v102 == "omniknight_repel" || strcmp(v102, "omniknight_repel") == 0 )
      {
        v225 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Omniknight_Repel::CDOTA_Bot_AbilityUsage_Omniknight_Repel(v225, pBot, pAbility);
        return v225;
      }
      if ( v102 == "omniknight_guardian_angel" || strcmp(v102, "omniknight_guardian_angel") == 0 )
      {
        v224 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Omniknight_GuardianAngel::CDOTA_Bot_AbilityUsage_Omniknight_GuardianAngel(
          v224,
          pBot,
          pAbility);
        return v224;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v103 = v5;
  else
    v103 = 0;
  v104 = v103[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v104 != 0 && (v104 == "npc_dota_hero_oracle" || strcmp(v104, "npc_dota_hero_oracle") == 0) && m_pAbilityData != 0 )
  {
    v105 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v105 == "oracle_fortunes_end" || strcmp(m_pAbilityData->m_pszAbilityName, "oracle_fortunes_end") == 0 )
      {
        v223 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Oracle_FortunesEnd::CDOTA_Bot_AbilityUsage_Oracle_FortunesEnd(v223, pBot, pAbility);
        return v223;
      }
      if ( v105 == "oracle_fates_edict" || strcmp(v105, "oracle_fates_edict") == 0 )
      {
        v222 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Oracle_FatesEdict::CDOTA_Bot_AbilityUsage_Oracle_FatesEdict(v222, pBot, pAbility);
        return v222;
      }
      if ( v105 == "oracle_purifying_flames" || strcmp(v105, "oracle_purifying_flames") == 0 )
      {
        v329 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames::CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames(
          v329,
          pBot,
          pAbility);
        return v329;
      }
      if ( v105 == "oracle_false_promise" || strcmp(v105, "oracle_false_promise") == 0 )
      {
        v328 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Oracle_FalsePromise::CDOTA_Bot_AbilityUsage_Oracle_FalsePromise(v328, pBot, pAbility);
        return v328;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v106 = v5;
  else
    v106 = 0;
  v107 = v106[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v107 != 0
    && (v107 == "npc_dota_hero_necrolyte" || strcmp(v107, "npc_dota_hero_necrolyte") == 0)
    && m_pAbilityData != 0 )
  {
    v108 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v108 == "necrolyte_death_pulse" || strcmp(m_pAbilityData->m_pszAbilityName, "necrolyte_death_pulse") == 0 )
      {
        v331 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Necrolyte_DeathPulse::CDOTA_Bot_AbilityUsage_Necrolyte_DeathPulse(v331, pBot, pAbility);
        return v331;
      }
      if ( v108 == "necrolyte_reapers_scythe" || strcmp(v108, "necrolyte_reapers_scythe") == 0 )
      {
        v330 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Necrolyte_Scythe::CDOTA_Bot_AbilityUsage_Necrolyte_Scythe(v330, pBot, pAbility);
        return v330;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v109 = v5;
  else
    v109 = 0;
  v110 = v109[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v110 != 0
    && (v110 == "npc_dota_hero_nevermore" || strcmp(v110, "npc_dota_hero_nevermore") == 0)
    && m_pAbilityData != 0 )
  {
    v111 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v111 == "nevermore_shadowraze1" || strcmp(m_pAbilityData->m_pszAbilityName, "nevermore_shadowraze1") == 0 )
      {
        v327 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Nevermore_Shadowraze::CDOTA_Bot_AbilityUsage_Nevermore_Shadowraze(
          v327,
          pBot,
          pAbility,
          1);
        return v327;
      }
      if ( v111 == "nevermore_shadowraze2" || strcmp(v111, "nevermore_shadowraze2") == 0 )
      {
        v326 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Nevermore_Shadowraze::CDOTA_Bot_AbilityUsage_Nevermore_Shadowraze(
          v326,
          pBot,
          pAbility,
          2);
        return v326;
      }
      if ( v111 == "nevermore_shadowraze3" || strcmp(v111, "nevermore_shadowraze3") == 0 )
      {
        v323 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Nevermore_Shadowraze::CDOTA_Bot_AbilityUsage_Nevermore_Shadowraze(
          v323,
          pBot,
          pAbility,
          3);
        return v323;
      }
      if ( v111 == "nevermore_requiem" || strcmp(v111, "nevermore_requiem") == 0 )
      {
        v322 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Nevermore_Requiem::CDOTA_Bot_AbilityUsage_Nevermore_Requiem(v322, pBot, pAbility);
        return v322;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v112 = v5;
  else
    v112 = 0;
  v113 = v112[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v113 != 0
    && (v113 == "npc_dota_hero_phantom_assassin" || strcmp(v113, "npc_dota_hero_phantom_assassin") == 0)
    && m_pAbilityData != 0 )
  {
    v114 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v114 == "phantom_assassin_stifling_dagger"
        || strcmp(m_pAbilityData->m_pszAbilityName, "phantom_assassin_stifling_dagger") == 0 )
      {
        v325 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger::CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger(
          v325,
          pBot,
          pAbility);
        return v325;
      }
      if ( v114 == "phantom_assassin_phantom_strike" || strcmp(v114, "phantom_assassin_phantom_strike") == 0 )
      {
        v324 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike::CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike(
          v324,
          pBot,
          pAbility);
        return v324;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v115 = v5;
  else
    v115 = 0;
  v116 = v115[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v116 != 0 && (v116 == "npc_dota_hero_pudge" || strcmp(v116, "npc_dota_hero_pudge") == 0) && m_pAbilityData != 0 )
  {
    v117 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v117 == "pudge_meat_hook" || strcmp(m_pAbilityData->m_pszAbilityName, "pudge_meat_hook") == 0 )
      {
        v321 = operator new(0x30u);
        CDOTA_Bot_AbilityUsage_Pudge_MeatHook::CDOTA_Bot_AbilityUsage_Pudge_MeatHook(v321, pBot, pAbility);
        return v321;
      }
      if ( v117 == "pudge_rot" || strcmp(v117, "pudge_rot") == 0 )
      {
        v320 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Pudge_Rot::CDOTA_Bot_AbilityUsage_Pudge_Rot(v320, pBot, pAbility);
        return v320;
      }
      if ( v117 == "pudge_dismember" || strcmp(v117, "pudge_dismember") == 0 )
      {
        v316 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Pudge_Dismember::CDOTA_Bot_AbilityUsage_Pudge_Dismember(v316, pBot, pAbility);
        return v316;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v118 = v5;
  else
    v118 = 0;
  v119 = v118[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v119 != 0 && (v119 == "npc_dota_hero_razor" || strcmp(v119, "npc_dota_hero_razor") == 0) && m_pAbilityData != 0 )
  {
    v120 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v120 == "razor_plasma_field" || strcmp(m_pAbilityData->m_pszAbilityName, "razor_plasma_field") == 0 )
      {
        v317 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Razor_PlasmaField::CDOTA_Bot_AbilityUsage_Razor_PlasmaField(v317, pBot, pAbility);
        return v317;
      }
      if ( v120 == "razor_static_link" || strcmp(v120, "razor_static_link") == 0 )
      {
        v315 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Razor_StaticLink::CDOTA_Bot_AbilityUsage_Razor_StaticLink(v315, pBot, pAbility);
        return v315;
      }
      if ( v120 == "razor_eye_of_the_storm" || strcmp(v120, "razor_eye_of_the_storm") == 0 )
      {
        v319 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Razor_EyeOfTheStorm::CDOTA_Bot_AbilityUsage_Razor_EyeOfTheStorm(v319, pBot, pAbility);
        return v319;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v121 = v5;
  else
    v121 = 0;
  v122 = v121[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v122 != 0 && (v122 == "npc_dota_hero_riki" || strcmp(v122, "npc_dota_hero_riki") == 0) && m_pAbilityData != 0 )
  {
    v123 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v123 == "riki_smoke_screen" || strcmp(m_pAbilityData->m_pszAbilityName, "riki_smoke_screen") == 0 )
      {
        v318 = operator new(0x30u);
        CDOTA_Bot_AbilityUsage_Riki_SmokeScreen::CDOTA_Bot_AbilityUsage_Riki_SmokeScreen(v318, pBot, pAbility);
        return v318;
      }
      if ( v123 == "riki_blink_strike" || strcmp(v123, "riki_blink_strike") == 0 )
      {
        v314 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Riki_BlinkStrike::CDOTA_Bot_AbilityUsage_Riki_BlinkStrike(v314, pBot, pAbility);
        return v314;
      }
      if ( v123 == "riki_tricks_of_the_trade" || strcmp(v123, "riki_tricks_of_the_trade") == 0 )
      {
        v313 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Riki_TricksOfTheTrade::CDOTA_Bot_AbilityUsage_Riki_TricksOfTheTrade(v313, pBot, pAbility);
        return v313;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v124 = v5;
  else
    v124 = 0;
  v125 = v124[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v125 != 0
    && (v125 == "npc_dota_hero_sand_king" || strcmp(v125, "npc_dota_hero_sand_king") == 0)
    && m_pAbilityData != 0 )
  {
    v126 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v126 == "sandking_burrowstrike" || strcmp(m_pAbilityData->m_pszAbilityName, "sandking_burrowstrike") == 0 )
      {
        v312 = operator new(0x30u);
        CDOTA_Bot_AbilityUsage_SandKing_BurrowStrike::CDOTA_Bot_AbilityUsage_SandKing_BurrowStrike(v312, pBot, pAbility);
        return v312;
      }
      if ( v126 == "sandking_sand_storm" || strcmp(v126, "sandking_sand_storm") == 0 )
      {
        v311 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_SandKing_SandStorm::CDOTA_Bot_AbilityUsage_SandKing_SandStorm(v311, pBot, pAbility);
        return v311;
      }
      if ( v126 == "sandking_epicenter" || strcmp(v126, "sandking_epicenter") == 0 )
      {
        v310 = operator new(0x30u);
        CDOTA_Bot_AbilityUsage_SandKing_Epicenter::CDOTA_Bot_AbilityUsage_SandKing_Epicenter(v310, pBot, pAbility);
        return v310;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v127 = v5;
  else
    v127 = 0;
  v128 = v127[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v128 != 0
    && (v128 == "npc_dota_hero_skeleton_king" || strcmp(v128, "npc_dota_hero_skeleton_king") == 0)
    && m_pAbilityData != 0 )
  {
    v129 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0
      && (v129 == "skeleton_king_hellfire_blast" || strcmp(v129, "skeleton_king_hellfire_blast") == 0) )
    {
      v309 = operator new(0x28u);
      CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast::CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast(
        v309,
        pBot,
        pAbility);
      return v309;
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v130 = v5;
  else
    v130 = 0;
  v131 = v130[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v131 != 0
    && (v131 == "npc_dota_hero_skywrath_mage" || strcmp(v131, "npc_dota_hero_skywrath_mage") == 0)
    && m_pAbilityData != 0 )
  {
    v132 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v132 == "skywrath_mage_arcane_bolt"
        || strcmp(m_pAbilityData->m_pszAbilityName, "skywrath_mage_arcane_bolt") == 0 )
      {
        v343 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_SkywrathMage_ArcaneBolt::CDOTA_Bot_AbilityUsage_SkywrathMage_ArcaneBolt(
          v343,
          pBot,
          pAbility);
        return v343;
      }
      if ( v132 == "skywrath_mage_concussive_shot" || strcmp(v132, "skywrath_mage_concussive_shot") == 0 )
      {
        v342 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_SkywrathMage_ConcussiveShot::CDOTA_Bot_AbilityUsage_SkywrathMage_ConcussiveShot(
          v342,
          pBot,
          pAbility);
        return v342;
      }
      if ( v132 == "skywrath_mage_ancient_seal" || strcmp(v132, "skywrath_mage_ancient_seal") == 0 )
      {
        v341 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_SkywrathMage_AncientSeal::CDOTA_Bot_AbilityUsage_SkywrathMage_AncientSeal(
          v341,
          pBot,
          pAbility);
        return v341;
      }
      if ( v132 == "skywrath_mage_mystic_flare" || strcmp(v132, "skywrath_mage_mystic_flare") == 0 )
      {
        v340 = operator new(0x30u);
        CDOTA_Bot_AbilityUsage_SkywrathMage_MysticFlare::CDOTA_Bot_AbilityUsage_SkywrathMage_MysticFlare(
          v340,
          pBot,
          pAbility);
        return v340;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v133 = v5;
  else
    v133 = 0;
  v134 = v133[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v134 != 0 && (v134 == "npc_dota_hero_sniper" || strcmp(v134, "npc_dota_hero_sniper") == 0) && m_pAbilityData != 0 )
  {
    v135 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v135 == "sniper_shrapnel" || strcmp(m_pAbilityData->m_pszAbilityName, "sniper_shrapnel") == 0 )
      {
        v339 = operator new(0x30u);
        CDOTA_Bot_AbilityUsage_Sniper_Shrapnel::CDOTA_Bot_AbilityUsage_Sniper_Shrapnel(v339, pBot, pAbility);
        return v339;
      }
      if ( v135 == "sniper_assassinate" || strcmp(v135, "sniper_assassinate") == 0 )
      {
        v338 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Sniper_Assassinate::CDOTA_Bot_AbilityUsage_Sniper_Assassinate(v338, pBot, pAbility);
        return v338;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v136 = v5;
  else
    v136 = 0;
  v137 = v136[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v137 != 0 && (v137 == "npc_dota_hero_sven" || strcmp(v137, "npc_dota_hero_sven") == 0) && m_pAbilityData != 0 )
  {
    v138 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v138 == "sven_storm_bolt" || strcmp(m_pAbilityData->m_pszAbilityName, "sven_storm_bolt") == 0 )
      {
        v337 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Sven_StormBolt::CDOTA_Bot_AbilityUsage_Sven_StormBolt(v337, pBot, pAbility);
        return v337;
      }
      if ( v138 == "sven_warcry" || strcmp(v138, "sven_warcry") == 0 )
      {
        v336 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Sven_Warcry::CDOTA_Bot_AbilityUsage_Sven_Warcry(v336, pBot, pAbility);
        return v336;
      }
      if ( v138 == "sven_gods_strength" || strcmp(v138, "sven_gods_strength") == 0 )
      {
        v335 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Sven_GodsStrength::CDOTA_Bot_AbilityUsage_Sven_GodsStrength(v335, pBot, pAbility);
        return v335;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v139 = v5;
  else
    v139 = 0;
  v140 = v139[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v140 != 0
    && (v140 == "npc_dota_hero_tidehunter" || strcmp(v140, "npc_dota_hero_tidehunter") == 0)
    && m_pAbilityData != 0 )
  {
    v141 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v141 == "tidehunter_gush" || strcmp(m_pAbilityData->m_pszAbilityName, "tidehunter_gush") == 0 )
      {
        v334 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Tidehunter_Gush::CDOTA_Bot_AbilityUsage_Tidehunter_Gush(v334, pBot, pAbility);
        return v334;
      }
      if ( v141 == "tidehunter_anchor_smash" || strcmp(v141, "tidehunter_anchor_smash") == 0 )
      {
        v333 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Tidehunter_AnchorSmash::CDOTA_Bot_AbilityUsage_Tidehunter_AnchorSmash(
          v333,
          pBot,
          pAbility);
        return v333;
      }
      if ( v141 == "tidehunter_ravage" || strcmp(v141, "tidehunter_ravage") == 0 )
      {
        v332 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Tidehunter_Ravage::CDOTA_Bot_AbilityUsage_Tidehunter_Ravage(v332, pBot, pAbility);
        return v332;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v142 = v5;
  else
    v142 = 0;
  v143 = v142[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v143 != 0 && (v143 == "npc_dota_hero_tiny" || strcmp(v143, "npc_dota_hero_tiny") == 0) && m_pAbilityData != 0 )
  {
    v144 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v144 == "tiny_avalanche" || strcmp(m_pAbilityData->m_pszAbilityName, "tiny_avalanche") == 0 )
      {
        v348 = operator new(0x30u);
        CDOTA_Bot_AbilityUsage_Tiny_Avalanche::CDOTA_Bot_AbilityUsage_Tiny_Avalanche(v348, pBot, pAbility);
        return v348;
      }
      if ( v144 == "tiny_toss" || strcmp(v144, "tiny_toss") == 0 )
      {
        v347 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Tiny_Toss::CDOTA_Bot_AbilityUsage_Tiny_Toss(v347, pBot, pAbility);
        return v347;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v145 = v5;
  else
    v145 = 0;
  v146 = v145[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v146 != 0
    && (v146 == "npc_dota_hero_vengefulspirit" || strcmp(v146, "npc_dota_hero_vengefulspirit") == 0)
    && m_pAbilityData != 0 )
  {
    v147 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v147 == "vengefulspirit_magic_missile"
        || strcmp(m_pAbilityData->m_pszAbilityName, "vengefulspirit_magic_missile") == 0 )
      {
        v346 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_VengefulSpirit_MagicMissile::CDOTA_Bot_AbilityUsage_VengefulSpirit_MagicMissile(
          v346,
          pBot,
          pAbility);
        return v346;
      }
      if ( v147 == "vengefulspirit_wave_of_terror" || strcmp(v147, "vengefulspirit_wave_of_terror") == 0 )
      {
        v345 = operator new(0x30u);
        CDOTA_Bot_AbilityUsage_VengefulSpirit_WaveOfTerror::CDOTA_Bot_AbilityUsage_VengefulSpirit_WaveOfTerror(
          v345,
          pBot,
          pAbility);
        return v345;
      }
      if ( v147 == "vengefulspirit_nether_swap" || strcmp(v147, "vengefulspirit_nether_swap") == 0 )
      {
        v344 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_VengefulSpirit_NetherSwap::CDOTA_Bot_AbilityUsage_VengefulSpirit_NetherSwap(
          v344,
          pBot,
          pAbility);
        return v344;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v148 = v5;
  else
    v148 = 0;
  v149 = v148[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v149 != 0 && (v149 == "npc_dota_hero_viper" || strcmp(v149, "npc_dota_hero_viper") == 0) && m_pAbilityData != 0 )
  {
    v150 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v150 == "viper_poison_attack" || strcmp(m_pAbilityData->m_pszAbilityName, "viper_poison_attack") == 0 )
      {
        v350 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Viper_PoisonAttack::CDOTA_Bot_AbilityUsage_Viper_PoisonAttack(v350, pBot, pAbility);
        return v350;
      }
      if ( v150 == "viper_viper_strike" || strcmp(v150, "viper_viper_strike") == 0 )
      {
        v349 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Viper_ViperStrike::CDOTA_Bot_AbilityUsage_Viper_ViperStrike(v349, pBot, pAbility);
        return v349;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v151 = v5;
  else
    v151 = 0;
  v152 = v151[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v152 != 0
    && (v152 == "npc_dota_hero_warlock" || strcmp(v152, "npc_dota_hero_warlock") == 0)
    && m_pAbilityData != 0 )
  {
    v153 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v153 == "warlock_fatal_bonds" || strcmp(m_pAbilityData->m_pszAbilityName, "warlock_fatal_bonds") == 0 )
      {
        v352 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Warlock_FatalBonds::CDOTA_Bot_AbilityUsage_Warlock_FatalBonds(v352, pBot, pAbility);
        return v352;
      }
      if ( v153 == "warlock_shadow_word" || strcmp(v153, "warlock_shadow_word") == 0 )
      {
        v351 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Warlock_ShadowWord::CDOTA_Bot_AbilityUsage_Warlock_ShadowWord(v351, pBot, pAbility);
        return v351;
      }
      if ( v153 == "warlock_upheaval" || strcmp(v153, "warlock_upheaval") == 0 )
      {
        v308 = operator new(0x30u);
        CDOTA_Bot_AbilityUsage_Warlock_Upheaval::CDOTA_Bot_AbilityUsage_Warlock_Upheaval(v308, pBot, pAbility);
        return v308;
      }
      if ( v153 == "warlock_rain_of_chaos" || strcmp(v153, "warlock_rain_of_chaos") == 0 )
      {
        v307 = operator new(0x30u);
        CDOTA_Bot_AbilityUsage_Warlock_RainOfChaos::CDOTA_Bot_AbilityUsage_Warlock_RainOfChaos(v307, pBot, pAbility);
        return v307;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v154 = v5;
  else
    v154 = 0;
  v155 = v154[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v155 != 0
    && (v155 == "npc_dota_hero_windrunner" || strcmp(v155, "npc_dota_hero_windrunner") == 0)
    && m_pAbilityData != 0 )
  {
    v156 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v156 == "windrunner_shackleshot" || strcmp(m_pAbilityData->m_pszAbilityName, "windrunner_shackleshot") == 0 )
      {
        v356 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Windrunner_Shackleshot::CDOTA_Bot_AbilityUsage_Windrunner_Shackleshot(
          v356,
          pBot,
          pAbility);
        return v356;
      }
      if ( v156 == "windrunner_powershot" || strcmp(v156, "windrunner_powershot") == 0 )
      {
        v355 = operator new(0x30u);
        CDOTA_Bot_AbilityUsage_Windrunner_Powershot::CDOTA_Bot_AbilityUsage_Windrunner_Powershot(v355, pBot, pAbility);
        return v355;
      }
      if ( v156 == "windrunner_windrun" || strcmp(v156, "windrunner_windrun") == 0 )
      {
        v354 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_Windrunner_Windrun::CDOTA_Bot_AbilityUsage_Windrunner_Windrun(v354, pBot, pAbility);
        return v354;
      }
      if ( v156 == "windrunner_focusfire" || strcmp(v156, "windrunner_focusfire") == 0 )
      {
        v353 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_Windrunner_FocusFire::CDOTA_Bot_AbilityUsage_Windrunner_FocusFire(v353, pBot, pAbility);
        return v353;
      }
    }
  }
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v157 = v5;
  else
    v157 = 0;
  v158 = v157[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v158 != 0
    && (v158 == "npc_dota_hero_witch_doctor" || strcmp(v158, "npc_dota_hero_witch_doctor") == 0)
    && m_pAbilityData != 0 )
  {
    v159 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0 )
    {
      if ( v159 == "witch_doctor_paralyzing_cask"
        || strcmp(m_pAbilityData->m_pszAbilityName, "witch_doctor_paralyzing_cask") == 0 )
      {
        v306 = operator new(0x28u);
        CDOTA_Bot_AbilityUsage_WitchDoctor_ParalyzingCask::CDOTA_Bot_AbilityUsage_WitchDoctor_ParalyzingCask(
          v306,
          pBot,
          pAbility);
        return v306;
      }
      if ( v159 == "witch_doctor_voodoo_restoration" || strcmp(v159, "witch_doctor_voodoo_restoration") == 0 )
      {
        v305 = operator new(0x20u);
        CDOTA_Bot_AbilityUsage_WitchDoctor_VoodooRestoration::CDOTA_Bot_AbilityUsage_WitchDoctor_VoodooRestoration(
          v305,
          pBot,
          pAbility);
        return v305;
      }
      if ( v159 == "witch_doctor_maledict" || strcmp(v159, "witch_doctor_maledict") == 0 )
      {
        v304 = operator new(0x30u);
        CDOTA_Bot_AbilityUsage_WitchDoctor_Maledict::CDOTA_Bot_AbilityUsage_WitchDoctor_Maledict(v304, pBot, pAbility);
        return v304;
      }
      if ( v159 == "witch_doctor_death_ward" || strcmp(v159, "witch_doctor_death_ward") == 0 )
      {
        v303 = operator new(0x30u);
        CDOTA_Bot_AbilityUsage_WitchDoctor_DeathWard::CDOTA_Bot_AbilityUsage_WitchDoctor_DeathWard(v303, pBot, pAbility);
        return v303;
      }
    }
  }
  if ( v5 == 0 || BYTE3(v5[7]._vptr_IHandleEntity) == 0 )
    v5 = 0;
  v160 = v5[70].m_iszPrivateVScripts.u.m_pAsString;
  if ( v160 != 0 && (v160 == "npc_dota_hero_zuus" || strcmp(v160, "npc_dota_hero_zuus") == 0) )
  {
    if ( m_pAbilityData == 0 )
      return 0;
    v161 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName == 0 )
      return 0;
    if ( v161 == "zuus_arc_lightning" || strcmp(m_pAbilityData->m_pszAbilityName, "zuus_arc_lightning") == 0 )
    {
      v302 = operator new(0x28u);
      CDOTA_Bot_AbilityUsage_Zuus_ArcLightning::CDOTA_Bot_AbilityUsage_Zuus_ArcLightning(v302, pBot, pAbility);
      return v302;
    }
    if ( v161 == "zuus_lightning_bolt" || strcmp(v161, "zuus_lightning_bolt") == 0 )
    {
      v301 = operator new(0x28u);
      CDOTA_Bot_AbilityUsage_Zuus_LightningBolt::CDOTA_Bot_AbilityUsage_Zuus_LightningBolt(v301, pBot, pAbility);
      return v301;
    }
    if ( v161 == "zuus_thundergods_wrath" || strcmp(v161, "zuus_thundergods_wrath") == 0 )
    {
      v300 = operator new(0x20u);
      CDOTA_Bot_AbilityUsage_Zuus_ThundergodsWrath::CDOTA_Bot_AbilityUsage_Zuus_ThundergodsWrath(v300, pBot, pAbility);
      return v300;
    }
  }
  else
  {
    if ( m_pAbilityData == 0 )
      return 0;
    v161 = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName == 0 )
      return 0;
  }
  if ( v161 == "item_abyssal_blade" || strcmp(v161, "item_abyssal_blade") == 0 )
  {
    v299 = operator new(0x28u);
    CDOTA_Bot_AbilityUsage_AbyssalBlade::CDOTA_Bot_AbilityUsage_AbyssalBlade(v299, pBot, pAbility);
    return v299;
  }
  else if ( v161 == "item_ancient_janggo" || strcmp(v161, "item_ancient_janggo") == 0 )
  {
    v298 = operator new(0x28u);
    CDOTA_Bot_AbilityUsage_AncientJanggo::CDOTA_Bot_AbilityUsage_AncientJanggo(v298, pBot, pAbility);
    return v298;
  }
  else if ( v161 == "item_arcane_boots" || strcmp(v161, "item_arcane_boots") == 0 )
  {
    v297 = operator new(0x28u);
    CDOTA_Bot_AbilityUsage_ArcaneBoots::CDOTA_Bot_AbilityUsage_ArcaneBoots(v297, pBot, pAbility);
    return v297;
  }
  else if ( v161 == "item_armlet" || strcmp(v161, "item_armlet") == 0 )
  {
    v296 = operator new(0x20u);
    CDOTA_Bot_AbilityUsage_Armlet::CDOTA_Bot_AbilityUsage_Armlet(v296, pBot, pAbility);
    return v296;
  }
  else if ( v161 == "item_black_king_bar" || strcmp(v161, "item_black_king_bar") == 0 )
  {
    v295 = operator new(0x20u);
    CDOTA_Bot_AbilityUsage_BlackKingBar::CDOTA_Bot_AbilityUsage_BlackKingBar(v295, pBot, pAbility);
    return v295;
  }
  else if ( v161 == "item_blade_mail" || strcmp(v161, "item_blade_mail") == 0 )
  {
    v294 = operator new(0x20u);
    CDOTA_Bot_AbilityUsage_BladeMail::CDOTA_Bot_AbilityUsage_BladeMail(v294, pBot, pAbility);
    return v294;
  }
  else if ( v161 == "item_blink" || strcmp(v161, "item_blink") == 0 )
  {
    v293 = operator new(0x38u);
    CDOTA_Bot_AbilityUsage_BlinkDagger::CDOTA_Bot_AbilityUsage_BlinkDagger(v293, pBot, pAbility);
    return v293;
  }
  else if ( v161 == "item_bottle" || strcmp(v161, "item_bottle") == 0 )
  {
    v292 = operator new(0x20u);
    CDOTA_Bot_AbilityUsage_Bottle::CDOTA_Bot_AbilityUsage_Bottle(v292, pBot, pAbility);
    return v292;
  }
  else if ( v161 == "item_buckler" || strcmp(v161, "item_buckler") == 0 )
  {
    v291 = operator new(0x20u);
    CDOTA_Bot_AbilityUsage_Buckler::CDOTA_Bot_AbilityUsage_Buckler(v291, pBot, pAbility);
    return v291;
  }
  else if ( v161 == "item_butterfly" || strcmp(v161, "item_butterfly") == 0 )
  {
    v290 = operator new(0x20u);
    CDOTA_Bot_AbilityUsage_Butterfly::CDOTA_Bot_AbilityUsage_Butterfly(v290, pBot, pAbility);
    return v290;
  }
  else if ( v161 == "item_cheese" || strcmp(v161, "item_cheese") == 0 )
  {
    v289 = operator new(0x20u);
    CDOTA_Bot_AbilityUsage_Cheese::CDOTA_Bot_AbilityUsage_Cheese(v289, pBot, pAbility);
    return v289;
  }
  else if ( v161 == "item_courier" || strcmp(v161, "item_courier") == 0 )
  {
    v288 = operator new(0x20u);
    CDOTA_Bot_AbilityUsage_Courier::CDOTA_Bot_AbilityUsage_Courier(v288, pBot, pAbility);
    return v288;
  }
  else if ( v161 == "item_clarity" || strcmp(v161, "item_clarity") == 0 )
  {
    v287 = operator new(0x20u);
    CDOTA_Bot_AbilityUsage_Clarity::CDOTA_Bot_AbilityUsage_Clarity(v287, pBot, pAbility);
    return v287;
  }
  else if ( v161 == "item_crimson_guard" || strcmp(v161, "item_crimson_guard") == 0 )
  {
    v286 = operator new(0x28u);
    CDOTA_Bot_AbilityUsage_CrimsonGuard::CDOTA_Bot_AbilityUsage_CrimsonGuard(v286, pBot, pAbility);
    return v286;
  }
  else if ( v161 == "item_cyclone" || strcmp(v161, "item_cyclone") == 0 )
  {
    v285 = operator new(0x28u);
    CDOTA_Bot_AbilityUsage_Cyclone::CDOTA_Bot_AbilityUsage_Cyclone(v285, pBot, pAbility);
    return v285;
  }
  else if ( v161 == "item_dagon"
         || strcmp(v161, "item_dagon") == 0
         || v161 == "item_dagon_2"
         || strcmp(v161, "item_dagon_2") == 0
         || v161 == "item_dagon_3"
         || strcmp(v161, "item_dagon_3") == 0
         || v161 == "item_dagon_4"
         || strcmp(v161, "item_dagon_4") == 0
         || v161 == "item_dagon_5"
         || strcmp(v161, "item_dagon_5") == 0 )
  {
    v284 = operator new(0x28u);
    CDOTA_Bot_AbilityUsage_Dagon::CDOTA_Bot_AbilityUsage_Dagon(v284, pBot, pAbility);
    return v284;
  }
  else if ( v161 == "item_diffusal_blade"
         || strcmp(v161, "item_diffusal_blade") == 0
         || v161 == "item_diffusal_blade_2"
         || strcmp(v161, "item_diffusal_blade_2") == 0 )
  {
    v283 = operator new(0x28u);
    CDOTA_Bot_AbilityUsage_DiffusalBlade::CDOTA_Bot_AbilityUsage_DiffusalBlade(v283, pBot, pAbility);
    return v283;
  }
  else if ( v161 == "item_dust" || strcmp(v161, "item_dust") == 0 )
  {
    v282 = operator new(0x28u);
    CDOTA_Bot_AbilityUsage_Dust::CDOTA_Bot_AbilityUsage_Dust(v282, pBot, pAbility);
    return v282;
  }
  else if ( v161 == "item_ethereal_blade" || strcmp(v161, "item_ethereal_blade") == 0 )
  {
    v281 = operator new(0x30u);
    CDOTA_Bot_AbilityUsage_EtherealBlade::CDOTA_Bot_AbilityUsage_EtherealBlade(v281, pBot, pAbility);
    return v281;
  }
  else if ( v161 == "item_flask" || strcmp(v161, "item_flask") == 0 )
  {
    v280 = operator new(0x20u);
    CDOTA_Bot_AbilityUsage_Flask::CDOTA_Bot_AbilityUsage_Flask(v280, pBot, pAbility);
    return v280;
  }
  else if ( v161 == "item_force_staff" || strcmp(v161, "item_force_staff") == 0 )
  {
    v279 = operator new(0x28u);
    CDOTA_Bot_AbilityUsage_ForceStaff::CDOTA_Bot_AbilityUsage_ForceStaff(v279, pBot, pAbility);
    return v279;
  }
  else if ( v161 == "item_ghost_scepter" || strcmp(v161, "item_ghost_scepter") == 0 )
  {
    v278 = operator new(0x28u);
    CDOTA_Bot_AbilityUsage_GhostScepter::CDOTA_Bot_AbilityUsage_GhostScepter(v278, pBot, pAbility);
    return v278;
  }
  else if ( v161 == "item_hand_of_midas" || strcmp(v161, "item_hand_of_midas") == 0 )
  {
    v277 = operator new(0x28u);
    CDOTA_Bot_AbilityUsage_HandOfMidas::CDOTA_Bot_AbilityUsage_HandOfMidas(v277, pBot, pAbility);
    return v277;
  }
  else if ( v161 == "item_heavens_halberd" || strcmp(v161, "item_heavens_halberd") == 0 )
  {
    v276 = operator new(0x28u);
    CDOTA_Bot_AbilityUsage_HeavensHalberd::CDOTA_Bot_AbilityUsage_HeavensHalberd(v276, pBot, pAbility);
    return v276;
  }
  else if ( v161 == "item_invis_sword" || strcmp(v161, "item_invis_sword") == 0 )
  {
    v275 = operator new(0x20u);
    CDOTA_Bot_AbilityUsage_InvisibilityEdge::CDOTA_Bot_AbilityUsage_InvisibilityEdge(v275, pBot, pAbility);
    return v275;
  }
  else if ( v161 == "item_magic_stick"
         || strcmp(v161, "item_magic_stick") == 0
         || v161 == "item_magic_wand"
         || strcmp(v161, "item_magic_wand") == 0 )
  {
    v274 = operator new(0x20u);
    CDOTA_Bot_AbilityUsage_MagicStick::CDOTA_Bot_AbilityUsage_MagicStick(v274, pBot, pAbility);
    return v274;
  }
  else if ( v161 == "item_manta" || strcmp(v161, "item_manta") == 0 )
  {
    v273 = operator new(0x20u);
    CDOTA_Bot_AbilityUsage_Manta::CDOTA_Bot_AbilityUsage_Manta(v273, pBot, pAbility);
    return v273;
  }
  else if ( v161 == "item_mask_of_madness" || strcmp(v161, "item_mask_of_madness") == 0 )
  {
    v272 = operator new(0x20u);
    CDOTA_Bot_AbilityUsage_MaskOfMadness::CDOTA_Bot_AbilityUsage_MaskOfMadness(v272, pBot, pAbility);
    return v272;
  }
  else if ( v161 == "item_medallion_of_courage" || strcmp(v161, "item_medallion_of_courage") == 0 )
  {
    v271 = operator new(0x28u);
    CDOTA_Bot_AbilityUsage_MedallionOfCourage::CDOTA_Bot_AbilityUsage_MedallionOfCourage(v271, pBot, pAbility);
    return v271;
  }
  else if ( v161 == "item_mekansm" || strcmp(v161, "item_mekansm") == 0 )
  {
    v270 = operator new(0x28u);
    CDOTA_Bot_AbilityUsage_Mekansm::CDOTA_Bot_AbilityUsage_Mekansm(v270, pBot, pAbility);
    return v270;
  }
  else if ( v161 == "item_mjollnir" || strcmp(v161, "item_mjollnir") == 0 )
  {
    v269 = operator new(0x28u);
    CDOTA_Bot_AbilityUsage_Mjollnir::CDOTA_Bot_AbilityUsage_Mjollnir(v269, pBot, pAbility);
    return v269;
  }
  else if ( v161 == "item_necronomicon"
         || strcmp(v161, "item_necronomicon") == 0
         || v161 == "item_necronomicon_2"
         || strcmp(v161, "item_necronomicon_2") == 0
         || v161 == "item_necronomicon_3"
         || strcmp(v161, "item_necronomicon_3") == 0 )
  {
    v268 = operator new(0x20u);
    CDOTA_Bot_AbilityUsage_Necronomicon::CDOTA_Bot_AbilityUsage_Necronomicon(v268, pBot, pAbility);
    return v268;
  }
  else if ( v161 == "item_orchid" || strcmp(v161, "item_orchid") == 0 )
  {
    v267 = operator new(0x28u);
    CDOTA_Bot_AbilityUsage_Orchid::CDOTA_Bot_AbilityUsage_Orchid(v267, pBot, pAbility);
    return v267;
  }
  else if ( v161 == "item_phase_boots" || strcmp(v161, "item_phase_boots") == 0 )
  {
    v266 = operator new(0x20u);
    CDOTA_Bot_AbilityUsage_PhaseBoots::CDOTA_Bot_AbilityUsage_PhaseBoots(v266, pBot, pAbility);
    return v266;
  }
  else if ( v161 == "item_pipe" || strcmp(v161, "item_pipe") == 0 )
  {
    v265 = operator new(0x28u);
    CDOTA_Bot_AbilityUsage_Pipe::CDOTA_Bot_AbilityUsage_Pipe(v265, pBot, pAbility);
    return v265;
  }
  else if ( v161 == "item_refresher" || strcmp(v161, "item_refresher") == 0 )
  {
    v264 = operator new(0x20u);
    CDOTA_Bot_AbilityUsage_Refresher::CDOTA_Bot_AbilityUsage_Refresher(v264, pBot, pAbility);
    return v264;
  }
  else if ( v161 == "item_rod_of_atos" || strcmp(v161, "item_rod_of_atos") == 0 )
  {
    v263 = operator new(0x28u);
    CDOTA_Bot_AbilityUsage_RodOfAtos::CDOTA_Bot_AbilityUsage_RodOfAtos(v263, pBot, pAbility);
    return v263;
  }
  else if ( v161 == "item_sheepstick" || strcmp(v161, "item_sheepstick") == 0 )
  {
    v262 = operator new(0x28u);
    CDOTA_Bot_AbilityUsage_Sheepstick::CDOTA_Bot_AbilityUsage_Sheepstick(v262, pBot, pAbility);
    return v262;
  }
  else if ( v161 == "item_shivas_guard" || strcmp(v161, "item_shivas_guard") == 0 )
  {
    v261 = operator new(0x28u);
    CDOTA_Bot_AbilityUsage_ShivasGuard::CDOTA_Bot_AbilityUsage_ShivasGuard(v261, pBot, pAbility);
    return v261;
  }
  else if ( v161 == "item_smoke_of_deceit" || strcmp(v161, "item_smoke_of_deceit") == 0 )
  {
    v260 = operator new(0x28u);
    CDOTA_Bot_AbilityUsage_SmokeOfDeceit::CDOTA_Bot_AbilityUsage_SmokeOfDeceit(v260, pBot, pAbility);
    return v260;
  }
  else if ( v161 == "item_soul_ring" || strcmp(v161, "item_soul_ring") == 0 )
  {
    v249 = operator new(0x28u);
    CDOTA_Bot_AbilityUsage_SoulRing::CDOTA_Bot_AbilityUsage_SoulRing(v249, pBot, pAbility);
    return v249;
  }
  else if ( v161 == "item_tango"
         || strcmp(v161, "item_tango") == 0
         || v161 == "item_tango_single"
         || strcmp(v161, "item_tango_single") == 0 )
  {
    v248 = operator new(0x28u);
    CDOTA_Bot_AbilityUsage_Tango::CDOTA_Bot_AbilityUsage_Tango(v248, pBot, pAbility);
    return v248;
  }
  else if ( v161 == "item_tpscroll" || strcmp(v161, "item_tpscroll") == 0 )
  {
    v247 = operator new(0x30u);
    CDOTA_Bot_AbilityUsage_TeleportScroll::CDOTA_Bot_AbilityUsage_TeleportScroll(v247, pBot, pAbility);
    return v247;
  }
  else if ( v161 == "item_travel_boots"
         || strcmp(v161, "item_travel_boots") == 0
         || v161 == "item_travel_boots_2"
         || strcmp(v161, "item_travel_boots_2") == 0 )
  {
    v246 = operator new(0x30u);
    CDOTA_Bot_AbilityUsage_TravelBoots::CDOTA_Bot_AbilityUsage_TravelBoots(v246, pBot, pAbility);
    return v246;
  }
  else if ( v161 == "item_veil_of_discord" || strcmp(v161, "item_veil_of_discord") == 0 )
  {
    v245 = operator new(0x30u);
    CDOTA_Bot_AbilityUsage_VeilOfDischord::CDOTA_Bot_AbilityUsage_VeilOfDischord(v245, pBot, pAbility);
    return v245;
  }
  else if ( v161 == "item_urn_of_shadows" || strcmp(v161, "item_urn_of_shadows") == 0 )
  {
    v244 = operator new(0x30u);
    CDOTA_Bot_AbilityUsage_Urn::CDOTA_Bot_AbilityUsage_Urn(v244, pBot, pAbility);
    return v244;
  }
  else if ( v161 == "item_ward_dispenser" || strcmp(v161, "item_ward_dispenser") == 0 )
  {
    v257 = operator new(0x38u);
    CDOTA_Bot_AbilityUsage_WardDispenser::CDOTA_Bot_AbilityUsage_WardDispenser(v257, pBot, pAbility);
    return v257;
  }
  else if ( v161 == "item_ward_observer" || strcmp(v161, "item_ward_observer") == 0 )
  {
    v162 = operator new(0x30u);
    CDOTA_Bot_AbilityUsage_ObserverWard::CDOTA_Bot_AbilityUsage_ObserverWard(v162, pBot, pAbility);
    return v162;
  }
  else
  {
    return 0;
  }
}


