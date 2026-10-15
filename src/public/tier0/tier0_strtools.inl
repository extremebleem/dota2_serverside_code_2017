
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// V_strcpy_safe<260ul>  (line 117, @0x00000000030c2160, libserver.so)
// calls: _V_strncpy
// callers: CEntitySystem::AddComponentProceduralKeys, CEntitySystem::AddComponentFieldUnserializer
void __fastcall V_strcpy_safe<260ul>(char (*const pDest)[260], const char *pSrc)
{
  _V_strncpy(pDest, pSrc, 260);
}


// V_sprintf_safe<256ul>  (line 200, @0x0000000001ea4200, libserver.so)
// calls: V_vsnprintf
// callers: CDevtestHierarchy::SwitchChildModelThink, MaterialFootstepSound, CLogicScript::Spawn, CDOTAChallengeSystem::GenerateMultiQuery, CDOTAChallengeSystem::GenerateRankedQuery, dota_preview_hero, CDOTASpecGraphPlayerData::UpdateGoldPerMinStats, CDOTASpecGraphPlayerData::UpdateXPPerMinStats, CDOTA_BaseNPC_Hero::GetPortraitMaterial, CInstallUGCJob::BYieldingRunGCJob, CDOTAItemSchema::GetCourierWearableItemDef, CDOTAInventoryManager::InitPlayerLoadoutSlots (18 total)
int V_sprintf_safe<256ul>(char (*const pDest)[256], const char *pFormat, ...)
{
  va_list params; // [rsp+8h] [rbp-C8h] BYREF

  va_start(params, pFormat);
  return V_vsnprintf(pDest, 256, pFormat, params);
}


// V_sprintf_safe<128ul>  (line 200, @0x0000000001f866f0, libserver.so)
// calls: V_vsnprintf
// callers: CVScriptGameSystem::InstallScriptBindings, CDOTA_BaseNPC::BuildWearableSpawnList, CDOTA_Modifier_MudGolem_RockDestroy::OnDeath, CDOTA_BotMode_AssembleWithHumans::GetDebugString, CDOTA_BotMode_Attack::GetDebugString, CDOTA_BotMode_Attack_Human::GetDebugString, CDOTA_BotMode_DefendAlly::GetDebugString, CDOTA_BotMode_DefendAlly_Human::GetDebugString, CDOTA_BotMode_EvasiveManeuvers::GetDebugString, CDOTA_BotMode_Farm::GetDebugString, CDOTA_BotMode_Roam::GetDebugString, CDOTA_BotMode_Roam_Human::GetDebugString (17 total)
int V_sprintf_safe<128ul>(char (*const pDest)[128], const char *pFormat, ...)
{
  va_list params; // [rsp+8h] [rbp-C8h] BYREF

  va_start(params, pFormat);
  return V_vsnprintf(pDest, 128, pFormat, params);
}


// V_sprintf_safe<512ul>  (line 200, @0x0000000001f89150, libserver.so)
// calls: V_vsnprintf
// callers: CPhysicsGameSystem::FinishSimulateFrame, CEntityIONotify::OnEntityIOOutput, CGameSceneNode::Spawn, CEntityIONotify::OnEntityIOInput, CTier2AppSystemDict::RemoveAddonSearchPaths, CRopeKeyframe::Precache, CNextbotLodManager::DebugDisplay, CEntitySystem::FindEntityProcedural, CCompressedResourceManifest::Unserialize, SaveKV3Text_R
int V_sprintf_safe<512ul>(char (*const pDest)[512], const char *pFormat, ...)
{
  va_list params; // [rsp+8h] [rbp-C8h] BYREF

  va_start(params, pFormat);
  return V_vsnprintf(pDest, 512, pFormat, params);
}


// V_sprintf_safe<260ul>  (line 200, @0x0000000002113100, libserver.so)
// calls: V_vsnprintf
// callers: CCompositeParentSpaceState::GetDebugString, CSource2Server::OnSaveSessionPersisters, CSource2Server::OnLoadSessionPersisters, CBasePlayer::ScriptQuit, CTier2AppSystemDict::IsFileInAddon, CTier2AppSystemDict::MountAddon, CDOTAHLTVDirector::UploadReplay, CEntitySystem::AddComponentProceduralKeys, CEntitySystem::AddComponentFieldUnserializer, CResourceAllocatorUtils::AssumeControl
int V_sprintf_safe<260ul>(char (*const pDest)[260], const char *pFormat, ...)
{
  va_list params; // [rsp+8h] [rbp-C8h] BYREF

  va_start(params, pFormat);
  return V_vsnprintf(pDest, 260, pFormat, params);
}


// V_sprintf_safe<1024ul>  (line 200, @0x0000000002340f10, libserver.so)
// calls: V_vsnprintf
// callers: CTier1AppSystemDict::Init, AddChatEventMessageToChatLog, CEntityInstance::PutInputDataInScriptTable
int V_sprintf_safe<1024ul>(char (*const pDest)[1024], const char *pFormat, ...)
{
  va_list params; // [rsp+8h] [rbp-C8h] BYREF

  va_start(params, pFormat);
  return V_vsnprintf(pDest, 1024, pFormat, params);
}


// V_sprintf_safe<64ul>  (line 200, @0x00000000024a42a0, libserver.so)
// calls: V_vsnprintf
// callers: CDOTA_BaseNPC::GetAbilityModifierValues, CGCClientJobDOTAGCToRelayConnect::BYieldingRunJobFromMsg
int V_sprintf_safe<64ul>(char (*const pDest)[64], const char *pFormat, ...)
{
  va_list params; // [rsp+8h] [rbp-C8h] BYREF

  va_start(params, pFormat);
  return V_vsnprintf(pDest, 64, pFormat, params);
}


// V_sprintf_safe<32ul>  (line 200, @0x00000000024a4330, libserver.so)
// calls: V_vsnprintf
// callers: CDOTA_BaseNPC::BuildWearableSpawnList, CDOTA_Modifier_HallOfFame_Glow::AddCustomTransmiterData
int V_sprintf_safe<32ul>(char (*const pDest)[32], const char *pFormat, ...)
{
  va_list params; // [rsp+8h] [rbp-C8h] BYREF

  va_start(params, pFormat);
  return V_vsnprintf(pDest, 32, pFormat, params);
}


// V_sprintf_safe<80ul>  (line 200, @0x0000000002f08810, libserver.so)
// calls: V_vsnprintf
// callers: CNavEditor::DrawEditMode
int V_sprintf_safe<80ul>(char (*const pDest)[80], const char *pFormat, ...)
{
  va_list params; // [rsp+8h] [rbp-C8h] BYREF

  va_start(params, pFormat);
  return V_vsnprintf(pDest, 80, pFormat, params);
}


// V_sprintf_safe<255ul>  (line 200, @0x00000000032240e0, libserver.so)
// calls: V_vsnprintf
// callers: GCSDK::CJob::GetPauseReasonDescription
int V_sprintf_safe<255ul>(char (*const pDest)[255], const char *pFormat, ...)
{
  va_list params; // [rsp+8h] [rbp-C8h] BYREF

  va_start(params, pFormat);
  return V_vsnprintf(pDest, 255, pFormat, params);
}


// V_sprintf_safe<100ul>  (line 200, @0x000000000322c250, libserver.so)
// calls: V_vsnprintf
// callers: GCSDK::CJobMgr::FindOrAddWaitAnalysisNodeForJob
int V_sprintf_safe<100ul>(char (*const pDest)[100], const char *pFormat, ...)
{
  va_list params; // [rsp+8h] [rbp-C8h] BYREF

  va_start(params, pFormat);
  return V_vsnprintf(pDest, 100, pFormat, params);
}


// V_swprintf_safe<12ul>  (line 232, @0x0000000002ea9710, libserver.so)
// calls: V_vsnwprintf
// callers: CItemSocket_Spectator::GetItemType, CItemSocket_Color::GetString, CItemSocket_Strange::GetString
int V_swprintf_safe<12ul>(wchar_t (*const pDest)[12], const wchar_t *pFormat, ...)
{
  va_list params; // [rsp+8h] [rbp-C8h] BYREF

  va_start(params, pFormat);
  return V_vsnwprintf(pDest, 12, pFormat, params);
}


// V_swprintf_safe<16ul>  (line 232, @0x0000000002ea97a0, libserver.so)
// calls: V_vsnwprintf
// callers: CItemSocket_Autograph::GetString
int V_swprintf_safe<16ul>(wchar_t (*const pDest)[16], const wchar_t *pFormat, ...)
{
  va_list params; // [rsp+8h] [rbp-C8h] BYREF

  va_start(params, pFormat);
  return V_vsnwprintf(pDest, 16, pFormat, params);
}


