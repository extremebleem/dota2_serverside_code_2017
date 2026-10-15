
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CActivityModifier::StaticTypeName  (line 27, @0x0000000002e3adf0, libserver.so)
// globals: CActivityModifier::sm_pModifierName
const char *__cdecl CActivityModifier::StaticTypeName()
{
  return CActivityModifier::sm_pModifierName;
}


// CActivityModifier::StaticType  (line 27, @0x0000000002e3f260, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CActivityModifier>
// callers: CDOTA_BaseNPC::CalculateActivityModifiers, GetAssetModifiers<CEconItemView, CActivityModifier>
// globals: CActivityModifier::_type
unsigned int __cdecl CActivityModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CActivityModifier>();
  CActivityModifier::_type = result;
  return result;
}


// CAnnouncerModifier::StaticTypeName  (line 28, @0x0000000002e3ae00, libserver.so)
// globals: CAnnouncerModifier::sm_pModifierName
const char *__cdecl CAnnouncerModifier::StaticTypeName()
{
  return CAnnouncerModifier::sm_pModifierName;
}


// CAnnouncerModifier::StaticType  (line 28, @0x0000000002e3f280, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CAnnouncerModifier>
// globals: CAnnouncerModifier::_type
unsigned int __cdecl CAnnouncerModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CAnnouncerModifier>();
  CAnnouncerModifier::_type = result;
  return result;
}


// CAnnouncerPreviewModifier::StaticTypeName  (line 29, @0x0000000002e3ae10, libserver.so)
// globals: CAnnouncerPreviewModifier::sm_pModifierName
const char *__cdecl CAnnouncerPreviewModifier::StaticTypeName()
{
  return CAnnouncerPreviewModifier::sm_pModifierName;
}


// CAnnouncerPreviewModifier::StaticType  (line 29, @0x0000000002e3f2a0, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CAnnouncerPreviewModifier>
// globals: CAnnouncerPreviewModifier::_type
unsigned int __cdecl CAnnouncerPreviewModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CAnnouncerPreviewModifier>();
  CAnnouncerPreviewModifier::_type = result;
  return result;
}


// CHudSkinModifier::StaticTypeName  (line 30, @0x0000000002e3ae20, libserver.so)
// globals: CHudSkinModifier::sm_pModifierName
const char *__cdecl CHudSkinModifier::StaticTypeName()
{
  return CHudSkinModifier::sm_pModifierName;
}


// CHudSkinModifier::StaticType  (line 30, @0x0000000002e3f2c0, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CHudSkinModifier>
// globals: CHudSkinModifier::_type
unsigned int __cdecl CHudSkinModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CHudSkinModifier>();
  CHudSkinModifier::_type = result;
  return result;
}


// CAbilityNameModifier::StaticTypeName  (line 31, @0x0000000002e3ae30, libserver.so)
// globals: CAbilityNameModifier::sm_pModifierName
const char *__cdecl CAbilityNameModifier::StaticTypeName()
{
  return CAbilityNameModifier::sm_pModifierName;
}


// CAbilityNameModifier::StaticType  (line 31, @0x0000000002e3f2e0, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CAbilityNameModifier>
// callers: GetAssetModifier<CEconItemView, CAbilityNameModifier>
// globals: CAbilityNameModifier::_type
unsigned int __cdecl CAbilityNameModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CAbilityNameModifier>();
  CAbilityNameModifier::_type = result;
  return result;
}


// CSoundModifier::StaticTypeName  (line 32, @0x0000000002e3ae40, libserver.so)
// globals: CSoundModifier::sm_pModifierName
const char *__cdecl CSoundModifier::StaticTypeName()
{
  return CSoundModifier::sm_pModifierName;
}


// CSoundModifier::StaticType  (line 32, @0x0000000002e3f300, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CSoundModifier>
// callers: CDOTA_BaseNPC::FindReplacementSound, FindAssetModifier<CEconItemView, CSoundModifier>, FindAssetModifier<CDOTA_BaseNPC, CSoundModifier>
// globals: CSoundModifier::_type
unsigned int __cdecl CSoundModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CSoundModifier>();
  CSoundModifier::_type = result;
  return result;
}


// CSpeechModifier::StaticTypeName  (line 33, @0x0000000002e3ae50, libserver.so)
// globals: CSpeechModifier::sm_pModifierName
const char *__cdecl CSpeechModifier::StaticTypeName()
{
  return CSpeechModifier::sm_pModifierName;
}


// CSpeechModifier::StaticType  (line 33, @0x0000000002e3f320, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CSpeechModifier>
// globals: CSpeechModifier::_type
unsigned int __cdecl CSpeechModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CSpeechModifier>();
  CSpeechModifier::_type = result;
  return result;
}


// CParticleModifier::StaticTypeName  (line 34, @0x0000000002e3ae60, libserver.so)
// globals: CParticleModifier::sm_pModifierName
const char *__cdecl CParticleModifier::StaticTypeName()
{
  return CParticleModifier::sm_pModifierName;
}


// CParticleModifier::StaticType  (line 34, @0x0000000002e3f340, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CParticleModifier>
// callers: GetAssetModifiers<CDOTAItemDefinition, CParticleModifier>, FindAssetModifier<CDOTA_BaseNPC, CParticleModifier>
// globals: CParticleModifier::_type
unsigned int __cdecl CParticleModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CParticleModifier>();
  CParticleModifier::_type = result;
  return result;
}


// CParticleCreateModifier::StaticTypeName  (line 35, @0x0000000002e3ae70, libserver.so)
// globals: CParticleCreateModifier::sm_pModifierName
const char *__cdecl CParticleCreateModifier::StaticTypeName()
{
  return CParticleCreateModifier::sm_pModifierName;
}


// CParticleCreateModifier::StaticType  (line 35, @0x0000000002e3f360, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CParticleCreateModifier>
// callers: GetAssetModifiers<CDOTAItemDefinition, CParticleCreateModifier>, GetAssetModifiers<CEconItemView, CParticleCreateModifier>
// globals: CParticleCreateModifier::_type
unsigned int __cdecl CParticleCreateModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CParticleCreateModifier>();
  CParticleCreateModifier::_type = result;
  return result;
}


// CParticleSnapshotModifier::StaticTypeName  (line 36, @0x0000000002e3ae80, libserver.so)
// globals: CParticleSnapshotModifier::sm_pModifierName
const char *__cdecl CParticleSnapshotModifier::StaticTypeName()
{
  return CParticleSnapshotModifier::sm_pModifierName;
}


// CParticleSnapshotModifier::StaticType  (line 36, @0x0000000002e3f380, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CParticleSnapshotModifier>
// callers: GetAssetModifier<CDOTAItemDefinition, CParticleSnapshotModifier>, CDOTA_ParticleManager::GetParticleSnapshotReplacement
// globals: CParticleSnapshotModifier::_type
unsigned int __cdecl CParticleSnapshotModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CParticleSnapshotModifier>();
  CParticleSnapshotModifier::_type = result;
  return result;
}


// CParticleControlPointModifier::StaticTypeName  (line 37, @0x0000000002e3ae90, libserver.so)
// globals: CParticleControlPointModifier::sm_pModifierName
const char *__cdecl CParticleControlPointModifier::StaticTypeName()
{
  return CParticleControlPointModifier::sm_pModifierName;
}


// CParticleControlPointModifier::StaticType  (line 37, @0x0000000002e3f3a0, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CParticleControlPointModifier>
// callers: GetAssetModifiers<CEconItemView, CParticleControlPointModifier>
// globals: CParticleControlPointModifier::_type
unsigned int __cdecl CParticleControlPointModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CParticleControlPointModifier>();
  CParticleControlPointModifier::_type = result;
  return result;
}


// CParticleCombined::StaticTypeName  (line 38, @0x0000000002e3aea0, libserver.so)
// globals: CParticleCombined::sm_pModifierName
const char *__cdecl CParticleCombined::StaticTypeName()
{
  return CParticleCombined::sm_pModifierName;
}


// CParticleCombined::StaticType  (line 38, @0x0000000002e3f3c0, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CParticleCombined>
// callers: CDOTA_BaseNPC::GetModifiedAbilityParticleName
// globals: CParticleCombined::_type
unsigned int __cdecl CParticleCombined::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CParticleCombined>();
  CParticleCombined::_type = result;
  return result;
}


// CEntityModelModifier::StaticTypeName  (line 39, @0x0000000002e3aeb0, libserver.so)
// globals: CEntityModelModifier::sm_pModifierName
const char *__cdecl CEntityModelModifier::StaticTypeName()
{
  return CEntityModelModifier::sm_pModifierName;
}


// CEntityModelModifier::StaticType  (line 39, @0x0000000002e3f3e0, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CEntityModelModifier>
// callers: GetAssetModifiers<CEconItemDefinition, CEntityModelModifier>, FindAssetModifier<CDOTA_BaseNPC, CEntityModelModifier>, CDOTA_BaseNPC_Effigy_Statue::GetBaseModelName, CEconItemDefinition::FindEntityModelModifier
// globals: CEntityModelModifier::_type
unsigned int __cdecl CEntityModelModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CEntityModelModifier>();
  CEntityModelModifier::_type = result;
  return result;
}


// CEntityScaleModifier::StaticTypeName  (line 40, @0x0000000002e3aec0, libserver.so)
// globals: CEntityScaleModifier::sm_pModifierName
const char *__cdecl CEntityScaleModifier::StaticTypeName()
{
  return CEntityScaleModifier::sm_pModifierName;
}


// CEntityScaleModifier::StaticType  (line 40, @0x0000000002e3f400, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CEntityScaleModifier>
// callers: FindAssetModifier<CDOTA_BaseNPC, CEntityScaleModifier>, GetAssetModifier<CDOTA_Unit_Courier, CEntityScaleModifier>
// globals: CEntityScaleModifier::_type
unsigned int __cdecl CEntityScaleModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CEntityScaleModifier>();
  CEntityScaleModifier::_type = result;
  return result;
}


// CIconModifier::StaticTypeName  (line 41, @0x0000000002e3aed0, libserver.so)
// globals: CIconModifier::sm_pModifierName
const char *__cdecl CIconModifier::StaticTypeName()
{
  return CIconModifier::sm_pModifierName;
}


// CIconModifier::StaticType  (line 41, @0x0000000002e3f420, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CIconModifier>
// globals: CIconModifier::_type
unsigned int __cdecl CIconModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CIconModifier>();
  CIconModifier::_type = result;
  return result;
}


// CIconModifier_Hero::StaticTypeName  (line 42, @0x0000000002e3aee0, libserver.so)
// globals: CIconModifier_Hero::sm_pModifierName
const char *__cdecl CIconModifier_Hero::StaticTypeName()
{
  return CIconModifier_Hero::sm_pModifierName;
}


// CIconModifier_Hero::StaticType  (line 42, @0x0000000002e3f440, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CIconModifier_Hero>
// globals: CIconModifier_Hero::_type
unsigned int __cdecl CIconModifier_Hero::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CIconModifier_Hero>();
  CIconModifier_Hero::_type = result;
  return result;
}


// CIconModifier_HeroMinimap::StaticTypeName  (line 43, @0x0000000002e3aef0, libserver.so)
// globals: CIconModifier_HeroMinimap::sm_pModifierName
const char *__cdecl CIconModifier_HeroMinimap::StaticTypeName()
{
  return CIconModifier_HeroMinimap::sm_pModifierName;
}


// CIconModifier_HeroMinimap::StaticType  (line 43, @0x0000000002e3f460, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CIconModifier_HeroMinimap>
// globals: CIconModifier_HeroMinimap::_type
unsigned int __cdecl CIconModifier_HeroMinimap::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CIconModifier_HeroMinimap>();
  CIconModifier_HeroMinimap::_type = result;
  return result;
}


// CInventoryIconModifier::StaticTypeName  (line 44, @0x0000000002e3af00, libserver.so)
// globals: CInventoryIconModifier::sm_pModifierName
const char *__cdecl CInventoryIconModifier::StaticTypeName()
{
  return CInventoryIconModifier::sm_pModifierName;
}


// CInventoryIconModifier::StaticType  (line 44, @0x0000000002e3f480, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CInventoryIconModifier>
// globals: CInventoryIconModifier::_type
unsigned int __cdecl CInventoryIconModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CInventoryIconModifier>();
  CInventoryIconModifier::_type = result;
  return result;
}


// CAbilityIconModifier::StaticTypeName  (line 45, @0x0000000002e3af10, libserver.so)
// globals: CAbilityIconModifier::sm_pModifierName
const char *__cdecl CAbilityIconModifier::StaticTypeName()
{
  return CAbilityIconModifier::sm_pModifierName;
}


// CAbilityIconModifier::StaticType  (line 45, @0x0000000002e3f4a0, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CAbilityIconModifier>
// globals: CAbilityIconModifier::_type
unsigned int __cdecl CAbilityIconModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CAbilityIconModifier>();
  CAbilityIconModifier::_type = result;
  return result;
}


// CCourierModifier::StaticTypeName  (line 46, @0x0000000002e3af20, libserver.so)
// globals: CCourierModifier::sm_pModifierName
const char *__cdecl CCourierModifier::StaticTypeName()
{
  return CCourierModifier::sm_pModifierName;
}


// CCourierModifier::StaticType  (line 46, @0x0000000002e3f4c0, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CCourierModifier>
// callers: CDOTA_Unit_Courier::GetCourierModelNames
// globals: CCourierModifier::_type
unsigned int __cdecl CCourierModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CCourierModifier>();
  CCourierModifier::_type = result;
  return result;
}


// CCourierFlyingModifier::StaticTypeName  (line 47, @0x0000000002e3af30, libserver.so)
// globals: CCourierFlyingModifier::sm_pModifierName
const char *__cdecl CCourierFlyingModifier::StaticTypeName()
{
  return CCourierFlyingModifier::sm_pModifierName;
}


// CCourierFlyingModifier::StaticType  (line 47, @0x0000000002e3f4e0, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CCourierFlyingModifier>
// callers: FindAssetModifier<CDOTA_Unit_Courier, CCourierFlyingModifier>
// globals: CCourierFlyingModifier::_type
unsigned int __cdecl CCourierFlyingModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CCourierFlyingModifier>();
  CCourierFlyingModifier::_type = result;
  return result;
}


// CHeroModelChangeModifier::StaticTypeName  (line 48, @0x0000000002e3af40, libserver.so)
// globals: CHeroModelChangeModifier::sm_pModifierName
const char *__cdecl CHeroModelChangeModifier::StaticTypeName()
{
  return CHeroModelChangeModifier::sm_pModifierName;
}


// CHeroModelChangeModifier::StaticType  (line 48, @0x0000000002e3f500, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CHeroModelChangeModifier>
// callers: GetAssetModifier<CDOTAItemDefinition, CHeroModelChangeModifier>, FindAssetModifier<CDOTA_BaseNPC, CHeroModelChangeModifier>
// globals: CHeroModelChangeModifier::_type
unsigned int __cdecl CHeroModelChangeModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CHeroModelChangeModifier>();
  CHeroModelChangeModifier::_type = result;
  return result;
}


// CLoadingScreenModifier::StaticTypeName  (line 49, @0x0000000002e3af50, libserver.so)
// globals: CLoadingScreenModifier::sm_pModifierName
const char *__cdecl CLoadingScreenModifier::StaticTypeName()
{
  return CLoadingScreenModifier::sm_pModifierName;
}


// CLoadingScreenModifier::StaticType  (line 49, @0x0000000002e3f520, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CLoadingScreenModifier>
// globals: CLoadingScreenModifier::_type
unsigned int __cdecl CLoadingScreenModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CLoadingScreenModifier>();
  CLoadingScreenModifier::_type = result;
  return result;
}


// CResponseCriteriaModifier::StaticTypeName  (line 50, @0x0000000002e3af60, libserver.so)
// globals: CResponseCriteriaModifier::sm_pModifierName
const char *__cdecl CResponseCriteriaModifier::StaticTypeName()
{
  return CResponseCriteriaModifier::sm_pModifierName;
}


// CResponseCriteriaModifier::StaticType  (line 50, @0x0000000002e3f540, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CResponseCriteriaModifier>
// callers: CDOTA_BaseNPC::ModifyOrAppendCriteria
// globals: CResponseCriteriaModifier::_type
unsigned int __cdecl CResponseCriteriaModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CResponseCriteriaModifier>();
  CResponseCriteriaModifier::_type = result;
  return result;
}


// CCustomKillEffectModifier::StaticTypeName  (line 51, @0x0000000002e3af70, libserver.so)
// globals: CCustomKillEffectModifier::sm_pModifierName
const char *__cdecl CCustomKillEffectModifier::StaticTypeName()
{
  return CCustomKillEffectModifier::sm_pModifierName;
}


// CCustomKillEffectModifier::StaticType  (line 51, @0x0000000002e3f560, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CCustomKillEffectModifier>
// callers: GetAssetModifier<CDOTA_BaseNPC, CCustomKillEffectModifier>
// globals: CCustomKillEffectModifier::_type
unsigned int __cdecl CCustomKillEffectModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CCustomKillEffectModifier>();
  CCustomKillEffectModifier::_type = result;
  return result;
}


// CHexModelModifier::StaticTypeName  (line 52, @0x0000000002e3af80, libserver.so)
// globals: CHexModelModifier::sm_pModifierName
const char *__cdecl CHexModelModifier::StaticTypeName()
{
  return CHexModelModifier::sm_pModifierName;
}


// CHexModelModifier::StaticType  (line 52, @0x0000000002e3f580, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CHexModelModifier>
// callers: GetAssetModifier<CDOTA_BaseNPC, CHexModelModifier>
// globals: CHexModelModifier::_type
unsigned int __cdecl CHexModelModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CHexModelModifier>();
  CHexModelModifier::_type = result;
  return result;
}


// CSoundscapeModifier::StaticTypeName  (line 53, @0x0000000002e3af90, libserver.so)
// globals: CSoundscapeModifier::sm_pModifierName
const char *__cdecl CSoundscapeModifier::StaticTypeName()
{
  return CSoundscapeModifier::sm_pModifierName;
}


// CSoundscapeModifier::StaticType  (line 53, @0x0000000002e3f5a0, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CSoundscapeModifier>
// globals: CSoundscapeModifier::_type
unsigned int __cdecl CSoundscapeModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CSoundscapeModifier>();
  CSoundscapeModifier::_type = result;
  return result;
}


// CWeatherModifier::StaticTypeName  (line 54, @0x0000000002e3afa0, libserver.so)
// globals: CWeatherModifier::sm_pModifierName
const char *__cdecl CWeatherModifier::StaticTypeName()
{
  return CWeatherModifier::sm_pModifierName;
}


// CWeatherModifier::StaticType  (line 54, @0x0000000002e3f5c0, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CWeatherModifier>
// globals: CWeatherModifier::_type
unsigned int __cdecl CWeatherModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CWeatherModifier>();
  CWeatherModifier::_type = result;
  return result;
}


// CModelModifier::StaticTypeName  (line 55, @0x0000000002e3afb0, libserver.so)
// globals: CModelModifier::sm_pModifierName
const char *__cdecl CModelModifier::StaticTypeName()
{
  return CModelModifier::sm_pModifierName;
}


// CModelModifier::StaticType  (line 55, @0x0000000002e3f5e0, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CModelModifier>
// globals: CModelModifier::_type
unsigned int __cdecl CModelModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CModelModifier>();
  CModelModifier::_type = result;
  return result;
}


// CPortraitBackgroundModelModifier::StaticTypeName  (line 56, @0x0000000002e3afc0, libserver.so)
// globals: CPortraitBackgroundModelModifier::sm_pModifierName
const char *__cdecl CPortraitBackgroundModelModifier::StaticTypeName()
{
  return CPortraitBackgroundModelModifier::sm_pModifierName;
}


// CPortraitBackgroundModelModifier::StaticType  (line 56, @0x0000000002e3f600, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundModelModifier>
// globals: CPortraitBackgroundModelModifier::_type
unsigned int __cdecl CPortraitBackgroundModelModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundModelModifier>();
  CPortraitBackgroundModelModifier::_type = result;
  return result;
}


// CPortraitBackgroundLightModifier::StaticTypeName  (line 57, @0x0000000002e3afd0, libserver.so)
// globals: CPortraitBackgroundLightModifier::sm_pModifierName
const char *__cdecl CPortraitBackgroundLightModifier::StaticTypeName()
{
  return CPortraitBackgroundLightModifier::sm_pModifierName;
}


// CPortraitBackgroundLightModifier::StaticType  (line 57, @0x0000000002e3f620, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundLightModifier>
// globals: CPortraitBackgroundLightModifier::_type
unsigned int __cdecl CPortraitBackgroundLightModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundLightModifier>();
  CPortraitBackgroundLightModifier::_type = result;
  return result;
}


// CPortraitBackgroundCameraModifier::StaticTypeName  (line 58, @0x0000000002e3afe0, libserver.so)
// globals: CPortraitBackgroundCameraModifier::sm_pModifierName
const char *__cdecl CPortraitBackgroundCameraModifier::StaticTypeName()
{
  return CPortraitBackgroundCameraModifier::sm_pModifierName;
}


// CPortraitBackgroundCameraModifier::StaticType  (line 58, @0x0000000002e3f640, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundCameraModifier>
// globals: CPortraitBackgroundCameraModifier::_type
unsigned int __cdecl CPortraitBackgroundCameraModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundCameraModifier>();
  CPortraitBackgroundCameraModifier::_type = result;
  return result;
}


// CPortraitBackgroundParticleModifier::StaticTypeName  (line 59, @0x0000000002e3aff0, libserver.so)
// globals: CPortraitBackgroundParticleModifier::sm_pModifierName
const char *__cdecl CPortraitBackgroundParticleModifier::StaticTypeName()
{
  return CPortraitBackgroundParticleModifier::sm_pModifierName;
}


// CPortraitBackgroundParticleModifier::StaticType  (line 59, @0x0000000002e3f660, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundParticleModifier>
// globals: CPortraitBackgroundParticleModifier::_type
unsigned int __cdecl CPortraitBackgroundParticleModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundParticleModifier>();
  CPortraitBackgroundParticleModifier::_type = result;
  return result;
}


// CPortraitBackgroundMapModifier::StaticTypeName  (line 60, @0x0000000002e3b000, libserver.so)
// globals: CPortraitBackgroundMapModifier::sm_pModifierName
const char *__cdecl CPortraitBackgroundMapModifier::StaticTypeName()
{
  return CPortraitBackgroundMapModifier::sm_pModifierName;
}


// CPortraitBackgroundMapModifier::StaticType  (line 60, @0x0000000002e3f680, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundMapModifier>
// globals: CPortraitBackgroundMapModifier::_type
unsigned int __cdecl CPortraitBackgroundMapModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundMapModifier>();
  CPortraitBackgroundMapModifier::_type = result;
  return result;
}


// CBuffModifier::StaticTypeName  (line 61, @0x0000000002e3b010, libserver.so)
// globals: CBuffModifier::sm_pModifierName
const char *__cdecl CBuffModifier::StaticTypeName()
{
  return CBuffModifier::sm_pModifierName;
}


// CBuffModifier::StaticType  (line 61, @0x0000000002e3f6a0, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CBuffModifier>
// callers: GetAssetModifiers<CDOTA_BaseNPC, CBuffModifier>
// globals: CBuffModifier::_type
unsigned int __cdecl CBuffModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CBuffModifier>();
  CBuffModifier::_type = result;
  return result;
}


// CCursorPackModifier::StaticTypeName  (line 62, @0x0000000002e3b020, libserver.so)
// globals: CCursorPackModifier::sm_pModifierName
const char *__cdecl CCursorPackModifier::StaticTypeName()
{
  return CCursorPackModifier::sm_pModifierName;
}


// CCursorPackModifier::StaticType  (line 62, @0x0000000002e3f6c0, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CCursorPackModifier>
// globals: CCursorPackModifier::_type
unsigned int __cdecl CCursorPackModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CCursorPackModifier>();
  CCursorPackModifier::_type = result;
  return result;
}


// CStrangeControlPointModifier::StaticTypeName  (line 63, @0x0000000002e3b030, libserver.so)
// globals: CStrangeControlPointModifier::sm_pModifierName
const char *__cdecl CStrangeControlPointModifier::StaticTypeName()
{
  return CStrangeControlPointModifier::sm_pModifierName;
}


// CStrangeControlPointModifier::StaticType  (line 63, @0x0000000002e3f6e0, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CStrangeControlPointModifier>
// callers: GetAssetModifier<CEconItemView, CStrangeControlPointModifier>
// globals: CStrangeControlPointModifier::_type
unsigned int __cdecl CStrangeControlPointModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CStrangeControlPointModifier>();
  CStrangeControlPointModifier::_type = result;
  return result;
}


// CPetModifier::StaticTypeName  (line 64, @0x0000000002e3b040, libserver.so)
// globals: CPetModifier::sm_pModifierName
const char *__cdecl CPetModifier::StaticTypeName()
{
  return CPetModifier::sm_pModifierName;
}


// CPetModifier::StaticType  (line 64, @0x0000000002e3f700, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CPetModifier>
// callers: CDOTA_BaseNPC_Hero::AddPetsFromWearables, GetAssetModifier<CDOTA_BaseNPC, CPetModifier>
// globals: CPetModifier::_type
unsigned int __cdecl CPetModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CPetModifier>();
  CPetModifier::_type = result;
  return result;
}


// CHealthBarModifier::StaticTypeName  (line 65, @0x0000000002e3b050, libserver.so)
// globals: CHealthBarModifier::sm_pModifierName
const char *__cdecl CHealthBarModifier::StaticTypeName()
{
  return CHealthBarModifier::sm_pModifierName;
}


// CHealthBarModifier::StaticType  (line 65, @0x0000000002e3f720, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CHealthBarModifier>
// globals: CHealthBarModifier::_type
unsigned int __cdecl CHealthBarModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CHealthBarModifier>();
  CHealthBarModifier::_type = result;
  return result;
}


// CEntityHealthBarModifier::StaticTypeName  (line 66, @0x0000000002e3b060, libserver.so)
// globals: CEntityHealthBarModifier::sm_pModifierName
const char *__cdecl CEntityHealthBarModifier::StaticTypeName()
{
  return CEntityHealthBarModifier::sm_pModifierName;
}


// CEntityHealthBarModifier::StaticType  (line 66, @0x0000000002e3f740, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CEntityHealthBarModifier>
// callers: FindAssetModifier<CDOTA_BaseNPC, CEntityHealthBarModifier>
// globals: CEntityHealthBarModifier::_type
unsigned int __cdecl CEntityHealthBarModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CEntityHealthBarModifier>();
  CEntityHealthBarModifier::_type = result;
  return result;
}


// CPortraitModifier_Game::StaticTypeName  (line 67, @0x0000000002e3b070, libserver.so)
// globals: CPortraitModifier_Game::sm_pModifierName
const char *__cdecl CPortraitModifier_Game::StaticTypeName()
{
  return CPortraitModifier_Game::sm_pModifierName;
}


// CPortraitModifier_Game::StaticType  (line 67, @0x0000000002e3f760, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CPortraitModifier_Game>
// globals: CPortraitModifier_Game::_type
unsigned int __cdecl CPortraitModifier_Game::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CPortraitModifier_Game>();
  CPortraitModifier_Game::_type = result;
  return result;
}


// CAdditionalWearableModifier::StaticTypeName  (line 68, @0x0000000002e3b080, libserver.so)
// globals: CAdditionalWearableModifier::sm_pModifierName
const char *__cdecl CAdditionalWearableModifier::StaticTypeName()
{
  return CAdditionalWearableModifier::sm_pModifierName;
}


// CAdditionalWearableModifier::StaticType  (line 68, @0x0000000002e3f780, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CAdditionalWearableModifier>
// callers: GetAssetModifier<CDOTAItemDefinition, CAdditionalWearableModifier>
// globals: CAdditionalWearableModifier::_type
unsigned int __cdecl CAdditionalWearableModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CAdditionalWearableModifier>();
  CAdditionalWearableModifier::_type = result;
  return result;
}


// CMapModifier::StaticTypeName  (line 69, @0x0000000002e3b090, libserver.so)
// globals: CMapModifier::sm_pModifierName
const char *__cdecl CMapModifier::StaticTypeName()
{
  return CMapModifier::sm_pModifierName;
}


// CMapModifier::StaticType  (line 69, @0x0000000002e3f7a0, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CMapModifier>
// globals: CMapModifier::_type
unsigned int __cdecl CMapModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CMapModifier>();
  CMapModifier::_type = result;
  return result;
}


// CWeatherEffectModifier::StaticTypeName  (line 70, @0x0000000002e3b0a0, libserver.so)
// globals: CWeatherEffectModifier::sm_pModifierName
const char *__cdecl CWeatherEffectModifier::StaticTypeName()
{
  return CWeatherEffectModifier::sm_pModifierName;
}


// CWeatherEffectModifier::StaticType  (line 70, @0x0000000002e3f7c0, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CWeatherEffectModifier>
// globals: CWeatherEffectModifier::_type
unsigned int __cdecl CWeatherEffectModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CWeatherEffectModifier>();
  CWeatherEffectModifier::_type = result;
  return result;
}


// CTerrainParticleEffectModifier::StaticTypeName  (line 71, @0x0000000002e3b0b0, libserver.so)
// globals: CTerrainParticleEffectModifier::sm_pModifierName
const char *__cdecl CTerrainParticleEffectModifier::StaticTypeName()
{
  return CTerrainParticleEffectModifier::sm_pModifierName;
}


// CTerrainParticleEffectModifier::StaticType  (line 71, @0x0000000002e3f7e0, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CTerrainParticleEffectModifier>
// globals: CTerrainParticleEffectModifier::_type
unsigned int __cdecl CTerrainParticleEffectModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CTerrainParticleEffectModifier>();
  CTerrainParticleEffectModifier::_type = result;
  return result;
}


// CArcanaLevelModifier::StaticTypeName  (line 72, @0x0000000002e3b0c0, libserver.so)
// globals: CArcanaLevelModifier::sm_pModifierName
const char *__cdecl CArcanaLevelModifier::StaticTypeName()
{
  return CArcanaLevelModifier::sm_pModifierName;
}


// CArcanaLevelModifier::StaticType  (line 72, @0x0000000002e3f800, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CArcanaLevelModifier>
// callers: CDOTA_BaseNPC::OnAssetModifiersUpdated
// globals: CArcanaLevelModifier::_type
unsigned int __cdecl CArcanaLevelModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CArcanaLevelModifier>();
  CArcanaLevelModifier::_type = result;
  return result;
}


// CNPCMaterialOverrideModifier::StaticTypeName  (line 73, @0x0000000002e3b0d0, libserver.so)
// globals: CNPCMaterialOverrideModifier::sm_pModifierName
const char *__cdecl CNPCMaterialOverrideModifier::StaticTypeName()
{
  return CNPCMaterialOverrideModifier::sm_pModifierName;
}


// CNPCMaterialOverrideModifier::StaticType  (line 73, @0x0000000002e3f820, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CNPCMaterialOverrideModifier>
// globals: CNPCMaterialOverrideModifier::_type
unsigned int __cdecl CNPCMaterialOverrideModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CNPCMaterialOverrideModifier>();
  CNPCMaterialOverrideModifier::_type = result;
  return result;
}


// CSkinChangeModifier::StaticTypeName  (line 74, @0x0000000002e3b0e0, libserver.so)
// globals: CSkinChangeModifier::sm_pModifierName
const char *__cdecl CSkinChangeModifier::StaticTypeName()
{
  return CSkinChangeModifier::sm_pModifierName;
}


// CSkinChangeModifier::StaticType  (line 74, @0x0000000002e3f840, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CSkinChangeModifier>
// callers: FindAssetModifier<CDOTA_BaseNPC, CSkinChangeModifier>
// globals: CSkinChangeModifier::_type
unsigned int __cdecl CSkinChangeModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CSkinChangeModifier>();
  CSkinChangeModifier::_type = result;
  return result;
}


// CWaterMaterialOverrideModifier::StaticTypeName  (line 75, @0x0000000002e3b0f0, libserver.so)
// globals: CWaterMaterialOverrideModifier::sm_pModifierName
const char *__cdecl CWaterMaterialOverrideModifier::StaticTypeName()
{
  return CWaterMaterialOverrideModifier::sm_pModifierName;
}


// CWaterMaterialOverrideModifier::StaticType  (line 75, @0x0000000002e3f860, libserver.so)
// calls: GetAssetModifierTypeUniqueIdentifier<CWaterMaterialOverrideModifier>
// globals: CWaterMaterialOverrideModifier::_type
unsigned int __cdecl CWaterMaterialOverrideModifier::StaticType()
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CWaterMaterialOverrideModifier>();
  CWaterMaterialOverrideModifier::_type = result;
  return result;
}


// AssetModifiers_GetUIInfo  (line 122, @0x0000000002e46e80, libserver.so)  // inlines: AddToTail, CopyConstruct<AssetModifierUIInfo_t>, Element, GrowMemory, operator[]
// calls: V_stricmp_fast, CUtlMemory<AssetModifierUIInfo_t, int>::Grow
// callers: CEconItemSchema::GetAssetModifiersUIInfo
// globals: CWaterMaterialOverrideModifier::sm_pModifierName, g_AssetModifierAdditionalFields
void __fastcall AssetModifiers_GetUIInfo(
        const char *pModifierType,
        CUtlVector<AssetModifierUIInfo_t,CUtlMemory<AssetModifierUIInfo_t,int> > *const info)
{
  AssetModifierUIInfo_t *v4; // rbx
  int m_Size; // r15d
  int v6; // edx
  AssetModifierUIInfo_t *v7; // rax
  const char *m_pModifierType; // rdx
  CUtlVectorBase<AssetModifierUIInfo_t,CUtlMemory<AssetModifierUIInfo_t,int> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-38h]

  v4 = g_AssetModifierAdditionalFields;
  p_m_Memory = &info->m_Memory;
  do
  {
    while ( 1 )
    {
      if ( V_stricmp_fast(pModifierType, v4->m_pModifierType) == 0 )
      {
        m_Size = info->m_Size;
        v6 = info->m_Size;
        if ( info->m_Size == info->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<AssetModifierUIInfo_t,int>::Grow(p_m_Memory, 1);
          v6 = info->m_Size;
        }
        info->m_Size = v6 + 1;
        v7 = &info->m_Memory.m_pMemory[m_Size];
        if ( v7 != 0 )
          break;
      }
      if ( ++v4 == &CWaterMaterialOverrideModifier::sm_pModifierName )
        return;
    }
    m_pModifierType = v4->m_pModifierType;
    ++v4;
    v7->m_pModifierType = m_pModifierType;
    v7->m_pKeyName = v4[-1].m_pKeyName;
    v7->m_pUILabel = v4[-1].m_pUILabel;
    *&v7->m_KeyType = *&v4[-1].m_KeyType;
    v7->m_pDefaultValue = v4[-1].m_pDefaultValue;
    *&v7->m_bSetValueOnlyIfNotEqualToDefault = *&v4[-1].m_bSetValueOnlyIfNotEqualToDefault;
  }
  while ( v4 != &CWaterMaterialOverrideModifier::sm_pModifierName );
}


// GetAssetModifierTypeUniqueIdentifierNextValue  (line 135, @0x0000000002e3b100, libserver.so)
// globals: GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifierNextValue()
{
  return GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
}


// GetAssetModifierTypeUniqueIdentifier<CActivityModifier>  (line 146, @0x0000000002e59df0, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CActivityModifier::StaticType, CActivityModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CActivityModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CActivityModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CActivityModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CActivityModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CActivityModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CActivityModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CActivityModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CActivityModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CActivityModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CAnnouncerModifier>  (line 146, @0x0000000002e59e60, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CAnnouncerModifier::StaticType, CAnnouncerModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CAnnouncerModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CAnnouncerModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CAnnouncerModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CAnnouncerModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CAnnouncerModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CAnnouncerModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CAnnouncerModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CAnnouncerModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CAnnouncerModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CAnnouncerPreviewModifier>  (line 146, @0x0000000002e59ed0, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CAnnouncerPreviewModifier::StaticType, CAnnouncerPreviewModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CAnnouncerPreviewModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CAnnouncerPreviewModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CAnnouncerPreviewModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CAnnouncerPreviewModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CAnnouncerPreviewModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CAnnouncerPreviewModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CAnnouncerPreviewModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CAnnouncerPreviewModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CAnnouncerPreviewModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CHudSkinModifier>  (line 146, @0x0000000002e59f40, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CHudSkinModifier::StaticType, CHudSkinModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CHudSkinModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CHudSkinModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CHudSkinModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CHudSkinModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CHudSkinModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CHudSkinModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CHudSkinModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CHudSkinModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CHudSkinModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CAbilityNameModifier>  (line 146, @0x0000000002e59fb0, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CAbilityNameModifier::StaticType, CAbilityNameModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CAbilityNameModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CAbilityNameModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CAbilityNameModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CAbilityNameModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CAbilityNameModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CAbilityNameModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CAbilityNameModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CAbilityNameModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CAbilityNameModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CSoundModifier>  (line 146, @0x0000000002e5a020, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CSoundModifier::StaticType, CSoundModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CSoundModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CSoundModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CSoundModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CSoundModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CSoundModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CSoundModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CSoundModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CSoundModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CSoundModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CSpeechModifier>  (line 146, @0x0000000002e5a090, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CSpeechModifier::StaticType, CSpeechModifier::GetType, GetAssetModifier<CEconItemView, CSpeechModifier>
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CSpeechModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CSpeechModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CSpeechModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CSpeechModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CSpeechModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CSpeechModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CSpeechModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CSpeechModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CSpeechModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CParticleModifier>  (line 146, @0x0000000002e5a100, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CParticleModifier::StaticType, CParticleModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CParticleModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CParticleModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CParticleModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CParticleModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CParticleModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CParticleModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CParticleModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CParticleModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CParticleModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CParticleCreateModifier>  (line 146, @0x0000000002e5a170, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CParticleCreateModifier::StaticType, CParticleCreateModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CParticleCreateModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CParticleCreateModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CParticleCreateModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CParticleCreateModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CParticleCreateModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CParticleCreateModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CParticleCreateModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CParticleCreateModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CParticleCreateModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CParticleSnapshotModifier>  (line 146, @0x0000000002e5a1e0, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CParticleSnapshotModifier::StaticType, CParticleSnapshotModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CParticleSnapshotModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CParticleSnapshotModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CParticleSnapshotModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CParticleSnapshotModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CParticleSnapshotModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CParticleSnapshotModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CParticleSnapshotModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CParticleSnapshotModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CParticleSnapshotModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CParticleControlPointModifier>  (line 146, @0x0000000002e5a250, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CParticleControlPointModifier::StaticType, CParticleControlPointModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CParticleControlPointModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CParticleControlPointModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CParticleControlPointModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CParticleControlPointModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CParticleControlPointModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CParticleControlPointModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CParticleControlPointModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CParticleControlPointModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CParticleControlPointModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CParticleCombined>  (line 146, @0x0000000002e5a2c0, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CParticleCombined::StaticType, CParticleCombined::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CParticleCombined>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CParticleCombined>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CParticleCombined>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CParticleCombined>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CParticleCombined>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CParticleCombined>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CParticleCombined>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CParticleCombined>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CParticleCombined>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CEntityModelModifier>  (line 146, @0x0000000002e5a330, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CEntityModelModifier::StaticType, CEntityModelModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CEntityModelModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CEntityModelModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CEntityModelModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CEntityModelModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CEntityModelModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CEntityModelModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CEntityModelModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CEntityModelModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CEntityModelModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CEntityScaleModifier>  (line 146, @0x0000000002e5a3a0, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CEntityScaleModifier::StaticType, CEntityScaleModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CEntityScaleModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CEntityScaleModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CEntityScaleModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CEntityScaleModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CEntityScaleModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CEntityScaleModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CEntityScaleModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CEntityScaleModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CEntityScaleModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CIconModifier>  (line 146, @0x0000000002e5a410, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CIconModifier::StaticType, CIconModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CIconModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CIconModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CIconModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CIconModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CIconModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CIconModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CIconModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CIconModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CIconModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CIconModifier_Hero>  (line 146, @0x0000000002e5a480, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CIconModifier_Hero::StaticType, CIconModifier_Hero::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CIconModifier_Hero>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CIconModifier_Hero>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CIconModifier_Hero>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CIconModifier_Hero>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CIconModifier_Hero>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CIconModifier_Hero>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CIconModifier_Hero>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CIconModifier_Hero>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CIconModifier_Hero>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CIconModifier_HeroMinimap>  (line 146, @0x0000000002e5a4f0, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CIconModifier_HeroMinimap::StaticType, CIconModifier_HeroMinimap::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CIconModifier_HeroMinimap>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CIconModifier_HeroMinimap>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CIconModifier_HeroMinimap>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CIconModifier_HeroMinimap>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CIconModifier_HeroMinimap>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CIconModifier_HeroMinimap>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CIconModifier_HeroMinimap>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CIconModifier_HeroMinimap>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CIconModifier_HeroMinimap>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CInventoryIconModifier>  (line 146, @0x0000000002e5a560, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CInventoryIconModifier::StaticType, CInventoryIconModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CInventoryIconModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CInventoryIconModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CInventoryIconModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CInventoryIconModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CInventoryIconModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CInventoryIconModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CInventoryIconModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CInventoryIconModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CInventoryIconModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CAbilityIconModifier>  (line 146, @0x0000000002e5a5d0, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CAbilityIconModifier::StaticType, CAbilityIconModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CAbilityIconModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CAbilityIconModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CAbilityIconModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CAbilityIconModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CAbilityIconModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CAbilityIconModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CAbilityIconModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CAbilityIconModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CAbilityIconModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CCourierModifier>  (line 146, @0x0000000002e5a640, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CCourierModifier::StaticType, CCourierModifier::GetType, FindAssetModifier<CEconItemDefinition, CCourierModifier>
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CCourierModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CCourierModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CCourierModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CCourierModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CCourierModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CCourierModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CCourierModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CCourierModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CCourierModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CCourierFlyingModifier>  (line 146, @0x0000000002e5a6b0, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CCourierFlyingModifier::StaticType, CCourierFlyingModifier::GetType, FindAssetModifier<CEconItemDefinition, CCourierFlyingModifier>
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CCourierFlyingModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CCourierFlyingModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CCourierFlyingModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CCourierFlyingModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CCourierFlyingModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CCourierFlyingModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CCourierFlyingModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CCourierFlyingModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CCourierFlyingModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CHeroModelChangeModifier>  (line 146, @0x0000000002e5a720, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CHeroModelChangeModifier::StaticType, CHeroModelChangeModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CHeroModelChangeModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CHeroModelChangeModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CHeroModelChangeModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CHeroModelChangeModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CHeroModelChangeModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CHeroModelChangeModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CHeroModelChangeModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CHeroModelChangeModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CHeroModelChangeModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CLoadingScreenModifier>  (line 146, @0x0000000002e5a790, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CLoadingScreenModifier::StaticType, CLoadingScreenModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CLoadingScreenModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CLoadingScreenModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CLoadingScreenModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CLoadingScreenModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CLoadingScreenModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CLoadingScreenModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CLoadingScreenModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CLoadingScreenModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CLoadingScreenModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CResponseCriteriaModifier>  (line 146, @0x0000000002e5a800, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CResponseCriteriaModifier::StaticType, CResponseCriteriaModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CResponseCriteriaModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CResponseCriteriaModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CResponseCriteriaModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CResponseCriteriaModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CResponseCriteriaModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CResponseCriteriaModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CResponseCriteriaModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CResponseCriteriaModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CResponseCriteriaModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CCustomKillEffectModifier>  (line 146, @0x0000000002e5a870, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CCustomKillEffectModifier::StaticType, CCustomKillEffectModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CCustomKillEffectModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CCustomKillEffectModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CCustomKillEffectModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CCustomKillEffectModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CCustomKillEffectModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CCustomKillEffectModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CCustomKillEffectModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CCustomKillEffectModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CCustomKillEffectModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CHexModelModifier>  (line 146, @0x0000000002e5a8e0, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CHexModelModifier::StaticType, CHexModelModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CHexModelModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CHexModelModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CHexModelModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CHexModelModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CHexModelModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CHexModelModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CHexModelModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CHexModelModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CHexModelModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CSoundscapeModifier>  (line 146, @0x0000000002e5a950, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CSoundscapeModifier::StaticType, CSoundscapeModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CSoundscapeModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CSoundscapeModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CSoundscapeModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CSoundscapeModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CSoundscapeModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CSoundscapeModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CSoundscapeModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CSoundscapeModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CSoundscapeModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CWeatherModifier>  (line 146, @0x0000000002e5a9c0, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CWeatherModifier::StaticType, CWeatherModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CWeatherModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CWeatherModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CWeatherModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CWeatherModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CWeatherModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CWeatherModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CWeatherModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CWeatherModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CWeatherModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CModelModifier>  (line 146, @0x0000000002e5aa30, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CModelModifier::StaticType, CModelModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CModelModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CModelModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CModelModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CModelModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CModelModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CModelModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CModelModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CModelModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CModelModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundModelModifier>  (line 146, @0x0000000002e5aaa0, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CPortraitBackgroundModelModifier::StaticType, CPortraitBackgroundModelModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundModelModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundModelModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundModelModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundModelModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundModelModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundModelModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundModelModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundModelModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundModelModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundLightModifier>  (line 146, @0x0000000002e5ab10, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CPortraitBackgroundLightModifier::StaticType, CPortraitBackgroundLightModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundLightModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundLightModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundLightModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundLightModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundLightModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundLightModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundLightModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundLightModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundLightModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundCameraModifier>  (line 146, @0x0000000002e5ab80, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CPortraitBackgroundCameraModifier::StaticType, CPortraitBackgroundCameraModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundCameraModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundCameraModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundCameraModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundCameraModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundCameraModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundCameraModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundCameraModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundCameraModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundCameraModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundParticleModifier>  (line 146, @0x0000000002e5abf0, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CPortraitBackgroundParticleModifier::StaticType, CPortraitBackgroundParticleModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundParticleModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundParticleModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundParticleModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundParticleModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundParticleModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundParticleModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundParticleModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundParticleModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundParticleModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundMapModifier>  (line 146, @0x0000000002e5ac60, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CPortraitBackgroundMapModifier::StaticType, CPortraitBackgroundMapModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundMapModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundMapModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundMapModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundMapModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundMapModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundMapModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundMapModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundMapModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundMapModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CBuffModifier>  (line 146, @0x0000000002e5acd0, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CBuffModifier::StaticType, CBuffModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CBuffModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CBuffModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CBuffModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CBuffModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CBuffModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CBuffModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CBuffModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CBuffModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CBuffModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CCursorPackModifier>  (line 146, @0x0000000002e5ad40, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CCursorPackModifier::StaticType, CCursorPackModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CCursorPackModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CCursorPackModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CCursorPackModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CCursorPackModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CCursorPackModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CCursorPackModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CCursorPackModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CCursorPackModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CCursorPackModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CStrangeControlPointModifier>  (line 146, @0x0000000002e5adb0, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CStrangeControlPointModifier::StaticType, CStrangeControlPointModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CStrangeControlPointModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CStrangeControlPointModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CStrangeControlPointModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CStrangeControlPointModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CStrangeControlPointModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CStrangeControlPointModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CStrangeControlPointModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CStrangeControlPointModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CStrangeControlPointModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CPetModifier>  (line 146, @0x0000000002e5ae20, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CPetModifier::StaticType, CPetModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CPetModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CPetModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CPetModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CPetModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CPetModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CPetModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CPetModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CPetModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CPetModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CHealthBarModifier>  (line 146, @0x0000000002e5ae90, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CHealthBarModifier::StaticType, CHealthBarModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CHealthBarModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CHealthBarModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CHealthBarModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CHealthBarModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CHealthBarModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CHealthBarModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CHealthBarModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CHealthBarModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CHealthBarModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CEntityHealthBarModifier>  (line 146, @0x0000000002e5af00, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CEntityHealthBarModifier::StaticType, CEntityHealthBarModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CEntityHealthBarModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CEntityHealthBarModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CEntityHealthBarModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CEntityHealthBarModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CEntityHealthBarModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CEntityHealthBarModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CEntityHealthBarModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CEntityHealthBarModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CEntityHealthBarModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CPortraitModifier_Game>  (line 146, @0x0000000002e5af70, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CPortraitModifier_Game::StaticType, CPortraitModifier_Game::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CPortraitModifier_Game>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CPortraitModifier_Game>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CPortraitModifier_Game>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CPortraitModifier_Game>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CPortraitModifier_Game>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CPortraitModifier_Game>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CPortraitModifier_Game>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CPortraitModifier_Game>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CPortraitModifier_Game>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CAdditionalWearableModifier>  (line 146, @0x0000000002e5afe0, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CAdditionalWearableModifier::StaticType, CAdditionalWearableModifier::GetType, GetAssetModifier<CEconItemView, CAdditionalWearableModifier>
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CAdditionalWearableModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CAdditionalWearableModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CAdditionalWearableModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CAdditionalWearableModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CAdditionalWearableModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CAdditionalWearableModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CAdditionalWearableModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CAdditionalWearableModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CAdditionalWearableModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CMapModifier>  (line 146, @0x0000000002e5b050, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CMapModifier::StaticType, CMapModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CMapModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CMapModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CMapModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CMapModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CMapModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CMapModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CMapModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CMapModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CMapModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CWeatherEffectModifier>  (line 146, @0x0000000002e5b0c0, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CWeatherEffectModifier::StaticType, CWeatherEffectModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CWeatherEffectModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CWeatherEffectModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CWeatherEffectModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CWeatherEffectModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CWeatherEffectModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CWeatherEffectModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CWeatherEffectModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CWeatherEffectModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CWeatherEffectModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CTerrainParticleEffectModifier>  (line 146, @0x0000000002e5b130, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CTerrainParticleEffectModifier::StaticType, CTerrainParticleEffectModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CTerrainParticleEffectModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CTerrainParticleEffectModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CTerrainParticleEffectModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CTerrainParticleEffectModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CTerrainParticleEffectModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CTerrainParticleEffectModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CTerrainParticleEffectModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CTerrainParticleEffectModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CTerrainParticleEffectModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CArcanaLevelModifier>  (line 146, @0x0000000002e5b1a0, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CArcanaLevelModifier::StaticType, CArcanaLevelModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CArcanaLevelModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CArcanaLevelModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CArcanaLevelModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CArcanaLevelModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CArcanaLevelModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CArcanaLevelModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CArcanaLevelModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CArcanaLevelModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CArcanaLevelModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CNPCMaterialOverrideModifier>  (line 146, @0x0000000002e5b210, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CNPCMaterialOverrideModifier::StaticType, CNPCMaterialOverrideModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CNPCMaterialOverrideModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CNPCMaterialOverrideModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CNPCMaterialOverrideModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CNPCMaterialOverrideModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CNPCMaterialOverrideModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CNPCMaterialOverrideModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CNPCMaterialOverrideModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CNPCMaterialOverrideModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CNPCMaterialOverrideModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CSkinChangeModifier>  (line 146, @0x0000000002e5b280, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CSkinChangeModifier::StaticType, CSkinChangeModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CSkinChangeModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CSkinChangeModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CSkinChangeModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CSkinChangeModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CSkinChangeModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CSkinChangeModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CSkinChangeModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CSkinChangeModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CSkinChangeModifier>(void)::s_unUniqueCounter;
}


// GetAssetModifierTypeUniqueIdentifier<CWaterMaterialOverrideModifier>  (line 146, @0x0000000002e5b2f0, libserver.so)  // inlines: GetAssetModifierTypeUniqueIdentifierNextValue
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: CWaterMaterialOverrideModifier::StaticType, CWaterMaterialOverrideModifier::GetType
// globals: `guard variable for'GetAssetModifierTypeUniqueIdentifier<CWaterMaterialOverrideModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifier<CWaterMaterialOverrideModifier>(void)::s_unUniqueCounter, GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter
unsigned int __cdecl GetAssetModifierTypeUniqueIdentifier<CWaterMaterialOverrideModifier>()
{
  if ( `guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CWaterMaterialOverrideModifier>(void)::s_unUniqueCounter != 0 )
    return GetAssetModifierTypeUniqueIdentifier<CWaterMaterialOverrideModifier>(void)::s_unUniqueCounter;
  if ( __cxa_guard_acquire(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CWaterMaterialOverrideModifier>(void)::s_unUniqueCounter) != 0 )
  {
    GetAssetModifierTypeUniqueIdentifier<CWaterMaterialOverrideModifier>(void)::s_unUniqueCounter = GetAssetModifierTypeUniqueIdentifierNextValue(void)::s_unUniqueCounter++;
    __cxa_guard_release(&`guard variable for'unsigned int GetAssetModifierTypeUniqueIdentifier<CWaterMaterialOverrideModifier>(void)::s_unUniqueCounter);
  }
  return GetAssetModifierTypeUniqueIdentifier<CWaterMaterialOverrideModifier>(void)::s_unUniqueCounter;
}


// CAssetModifier::CreateInstance  (line 153, @0x0000000002e3b120, libserver.so)  // inlines: CreateInstance, Find, operator const UtlSymId_t
// calls: KeyValues::GetString, CUtlSymbolTable::Find
// callers: CAssetModifierContainer::CopyAssetModifier, CEconItemSchema::BInitAssetModifiers, CEconItemAssetInfo::InitFromVisualsKV
CAssetModifier *__fastcall CAssetModifier::CreateInstance(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  const char *String; // rax
  unsigned __int16 v10; // [rsp+0h] [rbp-30h]

  if ( pKV == 0 )
    return 0;
  String = KeyValues::GetString(pKV, "type", 0, 0, 0);
  CUtlSymbolTable::Find(&CAssetModifierFactory::m_sDictAssetModifierFactories.m_SymbolTable, String);
  if ( v10 == 0xFFFF )
    return 0;
  else
    return CAssetModifierFactory::m_sDictAssetModifierFactories.m_Vector.m_Memory.m_pMemory[v10](
             pKV,
             pSchema,
             bParseCriteria,
             nPriority);
}


// CAssetModifier::CAssetModifier  (line 161, @0x0000000002e3b670, libserver.so)  // inlines: CUtlString, CUtlStringToken, CriteriaBetween_t, V_memcpy, memcpy, ~CUtlString
// calls: KeyValues::MakeCopy, KeyValues::GetInt, KeyValues::GetString, CAssetModifier::ParseExpression, memcpy, CUtlString::operator=, CUtlString::FreeMemoryBlock, _Unwind_Resume
// callers: createAssetModifierType<CActivityModifier>, createAssetModifierType<CAnnouncerModifier>, createAssetModifierType<CAnnouncerPreviewModifier>, createAssetModifierType<CHudSkinModifier>, createAssetModifierType<CAbilityNameModifier>, createAssetModifierType<CSoundModifier>, createAssetModifierType<CSpeechModifier>, createAssetModifierType<CParticleModifier>, createAssetModifierType<CParticleCombined>, createAssetModifierType<CParticleCreateModifier>, createAssetModifierType<CParticleSnapshotModifier>, createAssetModifierType<CParticleControlPointModifier> (49 total)
// strings: "asset"
// globals: INVALID_STYLE_INDEX
void __fastcall CAssetModifier::CAssetModifier(
        CAssetModifier *const this,
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  int8 v6; // r12
  KeyValues *Copy; // rdi
  CAssetModifier::CriteriaBetween_t *v9; // rdx
  unsigned __int8 Int; // al
  int v11; // r13d
  const char *String; // rax
  CAssetModifier::CriteriaExpression_t *v13; // rax
  const char *v14; // rax
  const char *v15; // rax
  CAssetModifier::CriteriaBetween_t pBetween[128]; // [rsp+10h] [rbp-A20h] BYREF
  char v17; // [rsp+A10h] [rbp-20h] BYREF

  v6 = nPriority;
  this->_vptr_CAssetModifier = off_47A3F30;
  this->m_strAsset.m_pString = 0;
  this->m_strModifier.m_pString = 0;
  this->m_pCriteriaExpression = 0;
  Copy = KeyValues::MakeCopy(pKV);
  this->m_pKV = Copy;
  this->m_nPriority = v6;
  if ( Copy != 0 )
  {
    if ( bParseCriteria )
    {
      v9 = pBetween;
      do
      {
        v9->m_criteriaId.m_nHashCode = 0;
        ++v9;
      }
      while ( v9 != &v17 );
      Int = KeyValues::GetInt(Copy, "style", INVALID_STYLE_INDEX.m_Data);
      v11 = 0;
      if ( INVALID_STYLE_INDEX.m_Data != Int )
      {
        pBetween[0].m_criteriaId.m_nHashCode = -1690322209;
        v11 = 1;
        pBetween[0].m_nMinValue = Int;
        pBetween[0].m_nMaxValue = Int;
        pBetween[0].m_nMask = -1;
        pBetween[0].m_nShift = 0;
      }
      String = KeyValues::GetString(this->m_pKV, "criteria", 0, 0, 0);
      if ( String != 0 )
        v11 += CAssetModifier::ParseExpression(this, String, &pBetween[v11], 128 - v11);
      if ( v11 > 0 )
      {
        v13 = (**g_pMemAlloc)(g_pMemAlloc, 20LL * v11 + 4);
        this->m_pCriteriaExpression = v13;
        v13->m_nOpCount = v11;
        memcpy(&this->m_pCriteriaExpression[1], pBetween, 20LL * v11);
      }
      Copy = this->m_pKV;
    }
    v14 = KeyValues::GetString(Copy, "modifier", 0, 0, 0);
    CUtlString::operator=(&this->m_strModifier, v14);
    v15 = KeyValues::GetString(this->m_pKV, "asset", 0, 0, 0);
    CUtlString::operator=(&this->m_strAsset, v15);
  }
}


// CAssetModifier::~CAssetModifier  (line 203, @0x0000000002e31070, libserver.so)  // inlines: ~CUtlString
// calls: KeyValues::~KeyValues, KeyValues::operator delete, CUtlString::FreeMemoryBlock
// callers: CAssetModifier::~CAssetModifier, CModelModifier::~CModelModifier, CEntityModelModifier::~CEntityModelModifier, CHexModelModifier::~CHexModelModifier, CHeroModelChangeModifier::~CHeroModelChangeModifier, CCourierFlyingModifier::~CCourierFlyingModifier, CCourierModifier::~CCourierModifier, CIconModifier::~CIconModifier, CIconModifier_HeroMinimap::~CIconModifier_HeroMinimap, CIconModifier_Hero::~CIconModifier_Hero, CParticleModifier::~CParticleModifier, CParticleCombined::~CParticleCombined (50 total)
void __fastcall CAssetModifier::~CAssetModifier(CAssetModifier *const this)
{
  KeyValues *m_pKV; // r12

  m_pKV = this->m_pKV;
  this->_vptr_CAssetModifier = off_47A3F30;
  if ( m_pKV != 0 )
  {
    KeyValues::~KeyValues(m_pKV);
    KeyValues::operator delete(m_pKV);
  }
  if ( this->m_pCriteriaExpression != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  if ( this->m_strModifier.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_strModifier);
  if ( this->m_strAsset.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_strAsset);
}


// CAssetModifier::~CAssetModifier  (line 203, @0x0000000002e310f0, libserver.so)
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CAssetModifier::~CAssetModifier(CAssetModifier *const this)
{
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CAssetModifier::ParseLiteral  (line 216, @0x0000000002e3b1b0, libserver.so)
// calls: strtol
bool __fastcall CAssetModifier::ParseLiteral(CAssetModifier *const this, const char **const expr, int *const value)
{
  const char *v4; // r12

  v4 = *expr;
  *value = strtol(*expr, expr, 10);
  return *expr != v4;
}


// CAssetModifier::ParseStringLiteral  (line 223, @0x0000000002e3b1f0, libserver.so)  // inlines: V_isalnum
// callers: CAssetModifier::ParseExpression
bool __fastcall CAssetModifier::ParseStringLiteral(
        CAssetModifier *const this,
        const char **const expr,
        char *pBuf,
        int nMaxLen)
{
  const char *v4; // rax
  char v6; // r9
  unsigned int v7; // ecx
  int v8; // ecx
  int v9; // edi
  char *v10; // r8
  const char *v12; // r10
  unsigned int v13; // ecx

  v4 = *expr;
  v6 = **expr;
  v7 = v6 - 9;
  if ( v7 <= 0x17 && ((1LL << v7) & 0x80001F) != 0 )
  {
    v12 = v4 + 1;
    do
    {
      *expr = v12;
      v4 = v12;
      v6 = *v12;
      v13 = *v12 - 9;
      if ( v13 > 0x17 )
        break;
      ++v12;
    }
    while ( ((1LL << v13) & 0x80001F) != 0 );
  }
  v8 = nMaxLen - 1;
  v9 = 0;
  v10 = pBuf;
  while ( ((v6 & 0xDF) - 65) <= 0x19u || (v6 - 48) <= 9u || v6 == 95 )
  {
    ++v9;
    ++v10;
    *expr = v4 + 1;
    *(v10 - 1) = *v4;
    if ( v9 == v8 )
      break;
    v4 = *expr;
    v6 = **expr;
  }
  pBuf[v9] = 0;
  return v9 > 0;
}


// CAssetModifier::ParseString  (line 244, @0x0000000002e3b2d0, libserver.so)  // inlines: StringAfterPrefix<char const>
// calls: _V_StringAfterPrefix
// callers: CAssetModifier::ParseExpression
bool __fastcall CAssetModifier::ParseString(CAssetModifier *const this, const char **const expr, const char *str)
{
  const char *v4; // r12
  const char *v5; // rdi
  unsigned int v6; // ecx
  const char *v7; // rax
  unsigned int v8; // ecx
  const char *v9; // rax

  v4 = *expr;
  v5 = *expr;
  v6 = **expr - 9;
  if ( v6 <= 0x17 && ((1LL << v6) & 0x80001F) != 0 )
  {
    v7 = v4 + 1;
    do
    {
      *expr = v7;
      v5 = v7;
      v8 = *v7 - 9;
      if ( v8 > 0x17 )
        break;
      ++v7;
    }
    while ( ((1LL << v8) & 0x80001F) != 0 );
  }
  v9 = _V_StringAfterPrefix(v5, str);
  if ( v9 != 0 )
  {
    *expr = v9;
    return 1;
  }
  else
  {
    *expr = v4;
    return 0;
  }
}


// CAssetModifier::ParseExpression  (line 258, @0x0000000002e3b360, libserver.so)  // inlines: MakeStringToken, ParseLiteral
// calls: CAssetModifier::ParseString, CAssetModifier::ParseStringLiteral, strtol, MurmurHash2LowerCase, RegisterStringToken, __stack_chk_fail
// callers: CAssetModifier::CAssetModifier
// strings: "isbetween", "(", "&&"
int __fastcall CAssetModifier::ParseExpression(
        CAssetModifier *const this,
        const char *pCriteria,
        CAssetModifier::CriteriaBetween_t *pBetween,
        int nMaxOps)
{
  int result; // eax
  int v7; // r14d
  const char *v8; // r15
  const char *v9; // r15
  uint32 v10; // r15d
  char v11; // al
  uint32 v12; // r15d
  uint32 v13; // eax
  uint32 v14; // [rsp+8h] [rbp-178h]
  const char *nMinBita; // [rsp+18h] [rbp-168h]
  const char *nMinBitb; // [rsp+18h] [rbp-168h]
  uint32 nMinBit; // [rsp+18h] [rbp-168h]
  int nMaxVal; // [rsp+20h] [rbp-160h]
  int nMinVal; // [rsp+28h] [rbp-158h]
  const char *pTemp; // [rsp+38h] [rbp-148h] BYREF
  char pVal[264]; // [rsp+40h] [rbp-140h] BYREF
  unsigned __int64 v23; // [rsp+148h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  result = 0;
  if ( pCriteria == 0 )
    return 0;
  if ( *pCriteria != 0 )
  {
    pTemp = pCriteria;
    v7 = 0;
    do
    {
      if ( !CAssetModifier::ParseString(this, &pTemp, "isbetween") )
        break;
      if ( !CAssetModifier::ParseString(this, &pTemp, "(") )
        return 0;
      if ( !CAssetModifier::ParseStringLiteral(this, &pTemp, pVal, 256) )
        return 0;
      if ( !CAssetModifier::ParseString(this, &pTemp, ",") )
        return 0;
      v8 = pTemp;
      nMinVal = strtol(pTemp, &pTemp, 10);
      if ( v8 == pTemp )
        return 0;
      if ( !CAssetModifier::ParseString(this, &pTemp, ",") )
        return 0;
      v9 = pTemp;
      nMaxVal = strtol(pTemp, &pTemp, 10);
      if ( v9 == pTemp )
        return 0;
      if ( CAssetModifier::ParseString(this, &pTemp, ",") )
      {
        nMinBita = pTemp;
        v10 = strtol(pTemp, &pTemp, 10);
        if ( nMinBita == pTemp )
          return 0;
        if ( !CAssetModifier::ParseString(this, &pTemp, ",") )
          return 0;
        nMinBitb = pTemp;
        v11 = strtol(pTemp, &pTemp, 10);
        if ( nMinBitb == pTemp )
          return 0;
        nMinBit = v10;
        v12 = (1 << (v11 - v10 + 1)) - 1;
      }
      else
      {
        nMinBit = 0;
        v12 = -1;
      }
      if ( !CAssetModifier::ParseString(this, &pTemp, ")") )
        return 0;
      ++v7;
      v13 = 0;
      if ( pVal[0] != 0 )
      {
        v13 = MurmurHash2LowerCase(pVal, 0x31415926u);
        if ( g_bUpdateStringTokenDatabase )
        {
          v14 = v13;
          RegisterStringToken(v13, pVal, 0, 1);
          v13 = v14;
        }
      }
      pBetween->m_criteriaId.m_nHashCode = v13;
      pBetween->m_nMask = v12;
      pBetween->m_nMinValue = nMinVal;
      pBetween->m_nMaxValue = nMaxVal;
      pBetween->m_nShift = nMinBit;
      if ( v7 >= nMaxOps )
        break;
      ++pBetween;
    }
    while ( CAssetModifier::ParseString(this, &pTemp, "&&") );
    return v7;
  }
  return result;
}


// CAssetModifier::IsActiveForCriteria  (line 324, @0x0000000002e3b890, libserver.so)  // inlines: Base, Element, GetCriteriaValue, operator[]
// callers: CAssetModifierContainer::ForEachModifier, CAssetModifierContainer::CopyAssetModifier
bool __fastcall CAssetModifier::IsActiveForCriteria(
        const CAssetModifier *const this,
        const CAssetModifierCriteria *pCriteria)
{
  CAssetModifier::CriteriaExpression_t *m_pCriteriaExpression; // rax
  CAssetModifier::CriteriaExpression_t *v3; // r10
  CAssetModifier::CriteriaExpression_t *v4; // r11
  int m_nOpCount; // ecx
  bool result; // al
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::IndexType_t m_nAllocated; // di
  _DWORD *v8; // rax
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t *v10; // rdx
  int v11; // eax

  m_pCriteriaExpression = this->m_pCriteriaExpression;
  if ( m_pCriteriaExpression == 0 )
    return 1;
  if ( pCriteria == 0 )
    return 1;
  v3 = m_pCriteriaExpression + 1;
  if ( m_pCriteriaExpression->m_nOpCount <= 0 )
    return 1;
  v4 = &v3[5 * (m_pCriteriaExpression->m_nOpCount - 1) + 5];
  m_nOpCount = m_pCriteriaExpression[1].m_nOpCount;
  result = 0;
  if ( pCriteria->m_values.m_nCount <= 0 )
    return result;
  m_nAllocated = pCriteria->m_values.m_nAllocated;
  while ( 2 )
  {
    v8 = 0;
    while ( m_nAllocated == 0 )
    {
      if ( *v8 == m_nOpCount )
        goto LABEL_13;
LABEL_10:
      v8 += 2;
      if ( v8 == (8LL * (pCriteria->m_values.m_nCount - 1) + 8) )
        return 0;
    }
    m_pElements = (&pCriteria->m_values.m_nAllocAllocated + 1);
    if ( m_nAllocated > 8 )
      m_pElements = pCriteria->m_values.m_pElements;
    if ( *(v8 + m_pElements) != m_nOpCount )
      goto LABEL_10;
LABEL_13:
    if ( m_nAllocated != 0 )
    {
      v10 = (&pCriteria->m_values.m_nAllocAllocated + 1);
      if ( m_nAllocated > 8 )
        v10 = pCriteria->m_values.m_pElements;
    }
    else
    {
      v10 = 0;
    }
    v11 = v3[3].m_nOpCount & (*(v8 + v10 + 4) >> v3[4].m_nOpCount);
    if ( v11 >= v3[1].m_nOpCount && v11 <= v3[2].m_nOpCount )
    {
      v3 += 5;
      if ( v3 == v4 )
        return 1;
      m_nOpCount = v3->m_nOpCount;
      continue;
    }
    return 0;
  }
}


// CAssetModifierContainer::CAssetModifierContainer  (line 350, @0x0000000002e3b980, libserver.so)  // inlines: CUtlMap, CUtlMemory, CUtlRBTree, ResetDbgInfo
// callers: CDOTA_BaseNPC::CDOTA_BaseNPC, CEconItemAssetInfo::CEconItemAssetInfo, CEconItemView::CEconItemView, CEconItemDefinition::BInitVisualBlockFromKV
void __fastcall CAssetModifierContainer::CAssetModifierContainer(CAssetModifierContainer *const this)
{
  this->m_mapAssetModifiers.m_Tree.m_Root = -1;
  this->m_mapAssetModifiers.m_Tree.m_NumElements = 0;
  this->m_mapAssetModifiers.m_Tree.m_FirstFree = -1;
  this->m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory = 0;
  this->m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_mapAssetModifiers.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_mapAssetModifiers.m_Tree.m_LastAlloc.index = -1;
  this->m_mapAssetModifiers.m_Tree.m_pElements = 0;
}


// CAssetModifierContainer::~CAssetModifierContainer  (line 354, @0x0000000002e40840, libserver.so)  // inlines: Purge, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: CAssetModifierContainer::PurgeAndDeleteElements, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int>::Purge
// callers: CDOTA_BaseNPC::CDOTA_BaseNPC, CDOTA_BaseNPC::~CDOTA_BaseNPC, CEconItemView::~CEconItemView, CEconItemView::CEconItemView, CEconItemAssetInfo::~CEconItemAssetInfo, CEconItemDefinition::BInitVisualBlockFromKV, CEconItemDefinition::~CEconItemDefinition
void __fastcall CAssetModifierContainer::~CAssetModifierContainer(CAssetModifierContainer *const this)
{
  CAssetModifierContainer::PurgeAndDeleteElements(this);
  CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_mapAssetModifiers.m_Tree);
  if ( (this->m_mapAssetModifiers.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapAssetModifiers.m_Tree.m_Elements);
}


// CAssetModifierContainer::Precache  (line 360, @0x0000000002e40410, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, operator[]
// calls: CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::NextInorder
// callers: CEconItemAssetInfo::Precache
void __fastcall CAssetModifierContainer::Precache(
        const CAssetModifierContainer *const this,
        const CEntityPrecacheContext *pContext)
{
  unsigned __int16 m_Root; // r13
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *m_pMemory; // rdi
  __int64 v5; // rax
  unsigned __int16 m_Left; // cx
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v8; // rdx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::ElemType_t elem; // r15
  __int64 v10; // rbx
  const CAssetModifier *v11; // rdi

  m_Root = this->m_mapAssetModifiers.m_Tree.m_Root;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = this->m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory;
    v5 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( 1 )
      {
        v5 = m_Left;
        if ( m_pMemory[m_Left].m_Left == 0xFFFF )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    v8 = m_pMemory;
    while ( 1 )
    {
      elem = v8[v5].m_Data.elem;
      if ( elem != 0 && elem->m_Size > 0 )
      {
        v10 = 0;
        do
        {
          v11 = elem->m_Memory.m_pMemory[v10];
          if ( v11 != 0 )
            (*(v11->_vptr_CAssetModifier + 5))(v11, pContext);
          ++v10;
        }
        while ( elem->m_Size > v10 );
      }
      m_Root = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                 &this->m_mapAssetModifiers.m_Tree,
                 m_Root);
      if ( m_Root == 0xFFFF )
        break;
      v8 = this->m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory;
      v5 = m_Root;
    }
  }
}


// CAssetModifierContainer::DumpContents  (line 380, @0x0000000002e404f0, libserver.so)  // inlines: Element, FirstInorder, GetAsset, GetModifier, LeftChild, NextInorder, operator[]
// calls: Msg, CUtlString::Get, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::NextInorder
// callers: CC_dota_dump_asset_modifiers
// strings: "Asset Modifiers\n", "  Vec Type: %i\n", "    Mod: %i (%s, %s)\n"
void __fastcall CAssetModifierContainer::DumpContents(CAssetModifierContainer *const this)
{
  unsigned __int16 m_Root; // cx
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *m_pMemory; // rdx
  __int64 v4; // rax
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v5; // rax
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::ElemType_t elem; // r14
  __int64 v7; // r15
  int v8; // r12d
  const CUtlString *v9; // rbx
  const char *v10; // r13
  int v11; // eax
  unsigned __int16 index; // [rsp+16h] [rbp-3Ah]
  const char *v14; // [rsp+18h] [rbp-38h]

  Msg("Asset Modifiers\n");
  m_Root = this->m_mapAssetModifiers.m_Tree.m_Root;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = this->m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    index = m_pMemory[m_Root].m_Left;
    if ( index == 0xFFFF )
    {
      index = this->m_mapAssetModifiers.m_Tree.m_Root;
    }
    else
    {
      while ( 1 )
      {
        v4 = index;
        if ( m_pMemory[index].m_Left == 0xFFFF )
          break;
        index = m_pMemory[index].m_Left;
      }
    }
    while ( 1 )
    {
      v5 = &m_pMemory[v4];
      elem = v5->m_Data.elem;
      if ( elem != 0 )
      {
        Msg("  Vec Type: %i\n", v5->m_Data.key.m_nType);
        if ( elem->m_Size > 0 )
        {
          v7 = 0;
          v8 = 0;
          do
          {
            v9 = elem->m_Memory.m_pMemory[v7];
            if ( v9 != 0 )
            {
              v14 = CUtlString::Get(v9 + 2);
              v10 = CUtlString::Get(v9 + 1);
              v11 = (*(v9->m_pString + 3))(v9);
              Msg("    Mod: %i (%s, %s)\n", v11, v10, v14);
            }
            ++v8;
            ++v7;
          }
          while ( elem->m_Size > v8 );
        }
      }
      index = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                &this->m_mapAssetModifiers.m_Tree,
                index);
      if ( index == 0xFFFF )
        break;
      m_pMemory = this->m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory;
      v4 = index;
    }
  }
}


// CAssetModifierContainer::ForEachModifier  (line 402, @0x0000000002e40630, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, operator(), operator[]
// calls: CAssetModifier::IsActiveForCriteria, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::NextInorder, std::__throw_bad_function_call(void)
// callers: CEconItemDefinition::GetAssetModifiersActiveForStyle
void __fastcall CAssetModifierContainer::ForEachModifier(
        const CAssetModifierContainer *const this,
        const CAssetModifierCriteria *pCriteria,
        const CAssetModifierCriteria *a3)
{
  unsigned __int16 m_Root; // cx
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *m_pMemory; // rdi
  __int64 v5; // rax
  unsigned __int16 m_Left; // cx
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v8; // rdx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::ElemType_t elem; // r14
  __int64 v10; // rbx
  int v11; // r15d
  const CAssetModifier **v12; // rax
  const CAssetModifier *v13; // r13
  unsigned __int16 index; // [rsp+16h] [rbp-3Ah]

  m_Root = this->m_mapAssetModifiers.m_Tree.m_Root;
  index = m_Root;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = this->m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory;
    v5 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( 1 )
      {
        v5 = m_Left;
        if ( m_pMemory[m_Left].m_Left == 0xFFFF )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      index = m_Left;
    }
    v8 = m_pMemory;
    while ( 1 )
    {
      elem = v8[v5].m_Data.elem;
      if ( elem != 0 && elem->m_Size > 0 )
      {
        v10 = 0;
        v11 = 0;
        do
        {
          v12 = elem->m_Memory.m_pMemory;
          v13 = v12[v10];
          if ( v13 != 0 && (a3 == 0 || CAssetModifier::IsActiveForCriteria(v12[v10], a3)) )
          {
            if ( *(&pCriteria->m_values.2 + 2) == 0 )
              std::__throw_bad_function_call();
            (*(&pCriteria->m_values.2 + 3))(pCriteria, v13);
          }
          ++v11;
          ++v10;
        }
        while ( elem->m_Size > v11 );
      }
      index = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                &this->m_mapAssetModifiers.m_Tree,
                index);
      if ( index == 0xFFFF )
        break;
      v8 = this->m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory;
      v5 = index;
    }
  }
}


// CAssetModifierContainer::PurgeAndDeleteElements  (line 426, @0x0000000002e40750, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, Purge, PurgeAndDeleteElements, RemoveAll, operator[]
// calls: CUtlMemory<const CAssetModifier*, int>::Purge, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::PurgeAndDeleteElements
// callers: CDOTA_BaseNPC::UpdateAssetModifiers, CDOTA_BaseNPC::DuplicateAssetModifiers, CAssetModifierContainer::~CAssetModifierContainer, CItemGeneration::BuildAssetModifierContainer, CEconItemView::operator=, CEconItemAssetInfo::CleanUp, CEconItemView::CacheAssetModifiers
void __fastcall CAssetModifierContainer::PurgeAndDeleteElements(CAssetModifierContainer *const this)
{
  unsigned __int16 m_Root; // r13
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *m_pMemory; // rdx
  __int64 v4; // rax
  unsigned __int16 m_Left; // si
  __int64 v6; // r12
  int v7; // ebx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::ElemType_t elem; // r15
  const CAssetModifier *v9; // rdi
  bool v10; // zf

  m_Root = this->m_mapAssetModifiers.m_Tree.m_Root;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = this->m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory;
    v4 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( 1 )
      {
        v4 = m_Left;
        if ( m_pMemory[m_Left].m_Left == 0xFFFF )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      v6 = 0;
      v7 = 0;
      elem = m_pMemory[v4].m_Data.elem;
      if ( elem->m_Size > 0 )
      {
        do
        {
          v9 = elem->m_Memory.m_pMemory[v6];
          if ( v9 != 0 )
            (*(v9->_vptr_CAssetModifier + 1))(v9);
          ++v7;
          ++v6;
        }
        while ( v7 < elem->m_Size );
      }
      v10 = (elem->m_Memory.m_nGrowSize & 0xC0000000) == 0;
      elem->m_Size = 0;
      if ( v10 )
        CUtlMemory<CAssetModifier const*,int>::Purge(&elem->m_Memory);
      m_Root = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                 &this->m_mapAssetModifiers.m_Tree,
                 m_Root);
      if ( m_Root == 0xFFFF )
        break;
      m_pMemory = this->m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory;
      v4 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::PurgeAndDeleteElements(&this->m_mapAssetModifiers.m_Tree);
}


// CAssetModifierContainer::AddAssetModifier  (line 436, @0x0000000002e4a9f0, libserver.so)  // inlines: CAssetModifierIndex, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<const CAssetModifier*>, Element, Find, FindInsertionPosition, GrowMemory, GrowVector, Insert, InsertAt, InsertBefore, IsIdxValid, IsValidIndex, LeftChild, RightChild, ShiftElementsRight, V_memmove, memmove, operator=, operator[]
// calls: CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find, operator new, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::LinkToParent, CUtlMemory<const CAssetModifier*, int>::Grow, memmove
// callers: CAssetModifierContainer::CopyAssetModifier, CEconItemAssetInfo::InitFromVisualsKV
void __fastcall CAssetModifierContainer::AddAssetModifier(
        CAssetModifierContainer *const this,
        const CAssetModifier *pNewMod)
{
  __int16 v4; // ax
  unsigned int v5; // r14d
  unsigned __int16 v6; // ax
  CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> > *v7; // rax
  unsigned __int16 m_Root; // ax
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v9; // rdx
  unsigned __int16 m_Right; // cx
  _BOOL4 v11; // edx
  bool v12; // r15
  unsigned __int16 v13; // r14
  unsigned __int16 v14; // ax
  int v15; // r13d
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *m_pMemory; // rcx
  int8 m_nPriority; // r9
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::ElemType_t elem; // r13
  int m_Size; // r8d
  const CAssetModifier **v20; // rsi
  __int64 v21; // rax
  int v22; // ebx
  __int64 v23; // r15
  int m_nAllocationCount; // eax
  int v25; // r14d
  int v26; // r14d
  const CAssetModifier **v27; // r15
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t search; // [rsp+0h] [rbp-40h] BYREF

  v4 = (*(pNewMod->_vptr_CAssetModifier + 3))(pNewMod);
  v5 = v4;
  search.key.m_nType = v4;
  v6 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_mapAssetModifiers.m_Tree,
         &search);
  if ( v6 >= this->m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount
    || v6 > this->m_mapAssetModifiers.m_Tree.m_LastAlloc.index
    || v6 == 0xFFFF
    || (m_pMemory = this->m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory, v6 == m_pMemory[v6].m_Left) )
  {
    v7 = operator new(0x18u);
    v7->m_Size = 0;
    v7->m_Memory.m_pMemory = 0;
    v7->m_Memory.m_nAllocationCount = 0;
    v7->m_Memory.m_nGrowSize = 0;
    search.elem = v7;
    m_Root = this->m_mapAssetModifiers.m_Tree.m_Root;
    search.key.m_nType = v5;
    if ( m_Root == 0xFFFF )
    {
      v13 = -1;
      v12 = 0;
    }
    else
    {
      while ( 1 )
      {
        v9 = &this->m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[m_Root];
        m_Right = v9->m_Right;
        if ( v9->m_Data.key.m_nType > v5 )
          m_Right = v9->m_Left;
        v11 = v5 < v9->m_Data.key.m_nType;
        if ( m_Right == 0xFFFF )
          break;
        m_Root = m_Right;
      }
      v12 = v11;
      v13 = m_Root;
    }
    v14 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::NewNode(
            &this->m_mapAssetModifiers.m_Tree,
            &search);
    v15 = v14;
    CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
      &this->m_mapAssetModifiers.m_Tree,
      v14,
      v13,
      v12);
    m_pMemory = this->m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory;
    ++this->m_mapAssetModifiers.m_Tree.m_NumElements;
  }
  else
  {
    v15 = v6;
  }
  m_nPriority = pNewMod->m_nPriority;
  elem = m_pMemory[v15].m_Data.elem;
  m_Size = elem->m_Size;
  if ( elem->m_Size <= 0 || (v20 = elem->m_Memory.m_pMemory, m_nPriority > (*v20)->m_nPriority) )
  {
    v23 = 0;
    v22 = 0;
  }
  else
  {
    v21 = 1;
    v22 = 0;
    while ( 1 )
    {
      if ( ++v22 == m_Size )
      {
        v23 = 8LL * v22;
        goto LABEL_21;
      }
      if ( m_nPriority > v20[v21]->m_nPriority )
        break;
      ++v21;
    }
    v23 = v21 * 8;
  }
LABEL_21:
  m_nAllocationCount = elem->m_Memory.m_nAllocationCount;
  v25 = m_Size + 1;
  if ( m_Size + 1 > m_nAllocationCount )
    CUtlMemory<CAssetModifier const*,int>::Grow(&elem->m_Memory, v25 - m_nAllocationCount);
  elem->m_Size = v25;
  v26 = v25 - v22 - 1;
  if ( v26 > 0 )
    memmove(&elem->m_Memory.m_pMemory[v22 + 1], elem->m_Memory.m_pMemory + v23, 8LL * v26);
  v27 = (elem->m_Memory.m_pMemory + v23);
  if ( v27 != 0 )
    *v27 = pNewMod;
}


// CAssetModifierContainer::CopyAssetModifier  (line 463, @0x0000000002e4abf0, libserver.so)  // inlines: GetPriority
// calls: CAssetModifier::IsActiveForCriteria, GetItemSchema, CAssetModifier::CreateInstance, CAssetModifierContainer::AddAssetModifier
// callers: CAssetModifierContainer::CopyAssetModifiers, CEconItemView::CacheAssetModifiers
void __fastcall CAssetModifierContainer::CopyAssetModifier(
        CAssetModifierContainer *const this,
        const CAssetModifier *pMod,
        const CAssetModifierCriteria *pCriteria,
        int nPriorityOverride)
{
  GameItemSchema_t *ItemSchema; // rax
  CAssetModifier *Instance; // rax

  if ( pMod != 0 && CAssetModifier::IsActiveForCriteria(pMod, pCriteria) )
  {
    if ( nPriorityOverride == -1 )
      nPriorityOverride = pMod->m_nPriority;
    ItemSchema = GetItemSchema();
    Instance = CAssetModifier::CreateInstance(pMod->m_pKV, ItemSchema, pCriteria == 0, nPriorityOverride);
    CAssetModifierContainer::AddAssetModifier(this, Instance);
  }
}


// CAssetModifierContainer::CopyAssetModifiers  (line 482, @0x0000000002e4ac70, libserver.so)  // inlines: FirstInorder, LeftChild, NextInorder, operator[]
// calls: CAssetModifierContainer::CopyAssetModifier, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::NextInorder
// callers: CDOTA_BaseNPC::UpdateAssetModifiers, CDOTA_BaseNPC::DuplicateAssetModifiers, CItemGeneration::BuildAssetModifierContainer, CEconItemView::operator=, CEconItemView::CacheAssetModifiers
void __fastcall CAssetModifierContainer::CopyAssetModifiers(
        CAssetModifierContainer *const this,
        const CAssetModifierContainer *const assetMods,
        const CAssetModifierCriteria *pCriteria,
        int nPriorityOverride)
{
  unsigned __int16 m_Root; // cx
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *m_pMemory; // rdi
  __int64 v7; // rax
  unsigned __int16 m_Left; // cx
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v10; // rdx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::ElemType_t elem; // rbx
  __int64 v12; // r14
  int v13; // r15d
  const CAssetModifier *v14; // rsi
  unsigned __int16 index; // [rsp+16h] [rbp-3Ah]

  m_Root = assetMods->m_mapAssetModifiers.m_Tree.m_Root;
  index = m_Root;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = assetMods->m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory;
    v7 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( 1 )
      {
        v7 = m_Left;
        if ( m_pMemory[m_Left].m_Left == 0xFFFF )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      index = m_Left;
    }
    v10 = assetMods->m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory;
    while ( 1 )
    {
      elem = v10[v7].m_Data.elem;
      if ( elem != 0 && elem->m_Size > 0 )
      {
        v12 = 0;
        v13 = 0;
        do
        {
          ++v13;
          v14 = elem->m_Memory.m_pMemory[v12++];
          CAssetModifierContainer::CopyAssetModifier(this, v14, pCriteria, nPriorityOverride);
        }
        while ( elem->m_Size > v13 );
      }
      index = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                &assetMods->m_mapAssetModifiers.m_Tree,
                index);
      if ( index == 0xFFFF )
        break;
      v10 = assetMods->m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory;
      v7 = index;
    }
  }
}


// CModelModifier::Precache  (line 500, @0x0000000002e31230, libserver.so)  // inlines: GetModelName, GetModifier
// calls: CUtlString::Get, CBaseEntity::PrecacheModel
void __fastcall CModelModifier::Precache(const CModelModifier *const this, const CEntityPrecacheContext *pContext)
{
  const char *v3; // rax

  v3 = CUtlString::Get(&this->m_strModifier);
  CBaseEntity::PrecacheModel(v3, pContext);
}


// CPortraitBackgroundModelModifier::Precache  (line 507, @0x0000000002e31260, libserver.so)  // inlines: GetAsset, GetPortraitBackgroundModel
// calls: CUtlString::Get, CBaseEntity::PrecacheModel
void __fastcall CPortraitBackgroundModelModifier::Precache(
        const CPortraitBackgroundModelModifier *const this,
        const CEntityPrecacheContext *pContext)
{
  const char *v3; // rax

  v3 = CUtlString::Get(&this->m_strAsset);
  CBaseEntity::PrecacheModel(v3, pContext);
}


// CAdditionalWearableModifier::Precache  (line 514, @0x0000000002e31200, libserver.so)  // inlines: GetAsset
// calls: CUtlString::Get, CBaseEntity::PrecacheModel
void __fastcall CAdditionalWearableModifier::Precache(
        const CAdditionalWearableModifier *const this,
        const CEntityPrecacheContext *pContext)
{
  const char *v3; // rax

  v3 = CUtlString::Get(&this->m_strAsset);
  CBaseEntity::PrecacheModel(v3, pContext);
}


// CSoundModifier::Precache  (line 521, @0x0000000002e312e0, libserver.so)  // inlines: GetModifier, GetSoundOverride
// calls: CUtlString::Get, CBaseEntity::PrecacheScriptSound
void __fastcall CSoundModifier::Precache(const CSoundModifier *const this, const CEntityPrecacheContext *pContext)
{
  const char *v3; // rax

  v3 = CUtlString::Get(&this->m_strModifier);
  CBaseEntity::PrecacheScriptSound(v3, pContext);
}


// CPortraitModifier_Game::~CPortraitModifier_Game  (line 528, @0x0000000002e31110, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CPortraitModifier_Game::~CPortraitModifier_Game(CPortraitModifier_Game *const this)
{
  this->_vptr_CAssetModifier = off_47A4110;
  CAssetModifier::~CAssetModifier(this);
}


// CPortraitModifier_Game::~CPortraitModifier_Game  (line 528, @0x0000000002e31130, libserver.so)  // inlines: ~CPortraitModifier_Game
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CPortraitModifier_Game::~CPortraitModifier_Game(CPortraitModifier_Game *const this)
{
  this->_vptr_CAssetModifier = off_47A4110;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CPortraitModifier_Game::Init  (line 535, @0x0000000002e309a0, libserver.so)
void __fastcall CPortraitModifier_Game::Init(CPortraitModifier_Game *const this, IEconItemSchema *pSchema)
{
  this->m_pPortraitData = 0;
}


// CPortraitModifier_Game::Precache  (line 550, @0x0000000002e31370, libserver.so)  // inlines: V_isempty
// calls: KeyValues::FindKey, KeyValues::GetString, PrecacheMaterial
// strings: "PortraitBackgroundTexture"
void __fastcall CPortraitModifier_Game::Precache(
        const CPortraitModifier_Game *const this,
        const CEntityPrecacheContext *pContext)
{
  KeyValues *Key; // rax
  const char *String; // rax

  Key = KeyValues::FindKey(this->m_pKV, "modifier", 0);
  if ( Key != 0 )
  {
    String = KeyValues::GetString(Key, "PortraitBackgroundTexture", 0, 0, 0);
    if ( String != 0 && *String != 0 )
      PrecacheMaterial(String, pContext);
  }
}


// CParticleModifier::Init  (line 582, @0x0000000002e30c50, libserver.so)  // inlines: GetModifier, GetReplacementName
// calls: CUtlString::Get, KeyValues::GetString, V_stricmp_fast
// callers: createAssetModifierType<CParticleModifier>
// strings: "replacement_type"
// globals: s_pParticleReplacementNames
void __fastcall CParticleModifier::Init(CParticleModifier *const this, IEconItemSchema *pSchema)
{
  void (__fastcall *v4)(IEconItemSchema *, const char *, AttachedParticleSystemIndex_t *); // r13
  const char *v5; // rax
  KeyValues *m_pKV; // rdi
  const char *String; // rax
  const char *v8; // r13
  __int64 v9; // rbx

  v4 = *(pSchema->_vptr_IEconItemSchema + 16);
  v5 = CUtlString::Get(&this->m_strModifier);
  v4(pSchema, v5, &this->m_nIndex);
  m_pKV = this->m_pKV;
  this->m_replacementType = ParticleReplacementType_t::PARTICLE_REPLACE_AUTODETECT;
  String = KeyValues::GetString(m_pKV, "replacement_type", "", 0, 0);
  v8 = String;
  if ( String != 0 && *String != 0 )
  {
    v9 = 0;
    while ( V_stricmp_fast(s_pParticleReplacementNames[v9], v8) != 0 )
    {
      if ( ++v9 == 4 )
        return;
    }
    this->m_replacementType = v9;
  }
}


// CParticleModifier::Precache  (line 610, @0x0000000002e31440, libserver.so)  // inlines: GetModifier, GetReplacementName
// calls: CUtlString::Get, PrecacheParticleSystem
void __fastcall CParticleModifier::Precache(
        const CParticleModifier *const this,
        const CEntityPrecacheContext *pContext)
{
  const char *v3; // rax

  v3 = CUtlString::Get(&this->m_strModifier);
  PrecacheParticleSystem(v3, pContext);
}


// CParticleCreateModifier::Precache  (line 617, @0x0000000002e31650, libserver.so)  // inlines: GetModifier, GetParticleSystemName
// calls: CUtlString::Get, PrecacheParticleSystem
void __fastcall CParticleCreateModifier::Precache(
        const CParticleCreateModifier *const this,
        const CEntityPrecacheContext *pContext)
{
  const char *v2; // rax

  if ( (*(this + 48) & 8) == 0 )
  {
    v2 = CUtlString::Get(&this->m_strModifier);
    PrecacheParticleSystem(v2, pContext);
  }
}


// CParticleCreateModifier::Init  (line 627, @0x0000000002e30b50, libserver.so)  // inlines: GetBool, GetModifier, GetParticleSystemName
// calls: KeyValues::GetInt, CUtlString::Get
// callers: createAssetModifierType<CParticleCreateModifier>
// strings: "spawn_in_loadout_only", "spawn_in_alternate_loadout_only", "is_loadout_intro_effect", "fake_particle_system", "destroy_immediately"
void __fastcall CParticleCreateModifier::Init(CParticleCreateModifier *const this, IEconItemSchema *pSchema)
{
  int Int; // eax
  KeyValues *m_pKV; // rdi
  int v6; // eax
  KeyValues *v7; // rdi
  int v8; // eax
  KeyValues *v9; // rdi
  int v10; // eax
  KeyValues *v11; // rdi
  void (__fastcall *v12)(IEconItemSchema *, const char *, AttachedParticleSystemIndex_t *); // r13
  const char *v13; // rax

  Int = KeyValues::GetInt(this->m_pKV, "spawn_in_loadout_only", 0);
  m_pKV = this->m_pKV;
  *(this + 48) = (Int != 0) | *(this + 48) & 0xFE;
  v6 = KeyValues::GetInt(m_pKV, "spawn_in_alternate_loadout_only", 0);
  v7 = this->m_pKV;
  *(this + 48) = (2 * (v6 != 0)) | *(this + 48) & 0xFD;
  v8 = KeyValues::GetInt(v7, "is_loadout_intro_effect", 0);
  v9 = this->m_pKV;
  *(this + 48) = (4 * (v8 != 0)) | *(this + 48) & 0xFB;
  v10 = KeyValues::GetInt(v9, "fake_particle_system", 0);
  v11 = this->m_pKV;
  *(this + 48) = (8 * (v10 != 0)) | *(this + 48) & 0xF7;
  *(this + 48) = (16 * (KeyValues::GetInt(v11, "destroy_immediately", 0) != 0)) | *(this + 48) & 0xEF;
  v12 = *(pSchema->_vptr_IEconItemSchema + 16);
  v13 = CUtlString::Get(&this->m_strModifier);
  v12(pSchema, v13, &this->m_nIndex);
}


// CPortraitBackgroundParticleModifier::Precache  (line 643, @0x0000000002e31470, libserver.so)  // inlines: GetAsset, GetPortraitBackgroundParticle
// calls: CUtlString::Get, PrecacheParticleSystem
void __fastcall CPortraitBackgroundParticleModifier::Precache(
        const CPortraitBackgroundParticleModifier *const this,
        const CEntityPrecacheContext *pContext)
{
  const char *v3; // rax

  v3 = CUtlString::Get(&this->m_strAsset);
  PrecacheParticleSystem(v3, pContext);
}


// CPetModifier::Precache  (line 650, @0x0000000002e31290, libserver.so)  // inlines: GetAsset, GetPetModel, GetPickupItemModel
// calls: CUtlString::Get, CBaseEntity::PrecacheModel
void __fastcall CPetModifier::Precache(const CPetModifier *const this, const CEntityPrecacheContext *pContext)
{
  const char *v4; // rax
  const char *v5; // rax

  v4 = CUtlString::Get(&this->m_strAsset);
  CBaseEntity::PrecacheModel(v4, pContext);
  v5 = CUtlString::Get(&this->m_strPickupItemModel);
  if ( v5 != 0 && *v5 != 0 )
    CBaseEntity::PrecacheModel(v5, pContext);
}


// CPortraitBackgroundCameraModifier::~CPortraitBackgroundCameraModifier  (line 663, @0x0000000002e31160, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CPortraitBackgroundCameraModifier::~CPortraitBackgroundCameraModifier(
        CPortraitBackgroundCameraModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A42F0;
  CAssetModifier::~CAssetModifier(this);
}


// CPortraitBackgroundCameraModifier::~CPortraitBackgroundCameraModifier  (line 663, @0x0000000002e31180, libserver.so)  // inlines: ~CPortraitBackgroundCameraModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CPortraitBackgroundCameraModifier::~CPortraitBackgroundCameraModifier(
        CPortraitBackgroundCameraModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A42F0;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CPortraitBackgroundCameraModifier::Init  (line 674, @0x0000000002e309b0, libserver.so)
void __fastcall CPortraitBackgroundCameraModifier::Init(
        CPortraitBackgroundCameraModifier *const this,
        IEconItemSchema *pSchema)
{
  this->m_pCameraOverride = 0;
}


// CPortraitBackgroundLightModifier::~CPortraitBackgroundLightModifier  (line 685, @0x0000000002e311b0, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CPortraitBackgroundLightModifier::~CPortraitBackgroundLightModifier(
        CPortraitBackgroundLightModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A4350;
  CAssetModifier::~CAssetModifier(this);
}


// CPortraitBackgroundLightModifier::~CPortraitBackgroundLightModifier  (line 685, @0x0000000002e311d0, libserver.so)  // inlines: ~CPortraitBackgroundLightModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CPortraitBackgroundLightModifier::~CPortraitBackgroundLightModifier(
        CPortraitBackgroundLightModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A4350;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CPortraitBackgroundLightModifier::Init  (line 696, @0x0000000002e309c0, libserver.so)
void __fastcall CPortraitBackgroundLightModifier::Init(
        CPortraitBackgroundLightModifier *const this,
        IEconItemSchema *pSchema)
{
  this->m_pLightOverride = 0;
}


// CWeatherEffectModifier::Precache  (line 717, @0x0000000002e313e0, libserver.so)  // inlines: GetAsset
// calls: CUtlString::Get, PrecacheParticleSystem
void __fastcall CWeatherEffectModifier::Precache(
        const CWeatherEffectModifier *const this,
        const CEntityPrecacheContext *pContext)
{
  const char *v3; // rax

  v3 = CUtlString::Get(&this->m_strAsset);
  PrecacheParticleSystem(v3, pContext);
}


// CTerrainParticleEffectModifier::Precache  (line 727, @0x0000000002e31410, libserver.so)  // inlines: GetModifier
// calls: CUtlString::Get, PrecacheParticleSystem
void __fastcall CTerrainParticleEffectModifier::Precache(
        const CTerrainParticleEffectModifier *const this,
        const CEntityPrecacheContext *pContext)
{
  const char *v3; // rax

  v3 = CUtlString::Get(&this->m_strModifier);
  PrecacheParticleSystem(v3, pContext);
}


// CNPCMaterialOverrideModifier::Precache  (line 736, @0x0000000002e31310, libserver.so)  // inlines: GetModifier
// calls: CUtlString::Get, PrecacheMaterial
void __fastcall CNPCMaterialOverrideModifier::Precache(
        const CNPCMaterialOverrideModifier *const this,
        const CEntityPrecacheContext *pContext)
{
  const char *v3; // rax

  v3 = CUtlString::Get(&this->m_strModifier);
  PrecacheMaterial(v3, pContext);
}


// CWaterMaterialOverrideModifier::Precache  (line 745, @0x0000000002e31340, libserver.so)  // inlines: GetModifier
// calls: CUtlString::Get, PrecacheMaterial
void __fastcall CWaterMaterialOverrideModifier::Precache(
        const CWaterMaterialOverrideModifier *const this,
        const CEntityPrecacheContext *pContext)
{
  const char *v3; // rax

  v3 = CUtlString::Get(&this->m_strModifier);
  PrecacheMaterial(v3, pContext);
}


// GetMapNameFromMapAsset  (line 754, @0x0000000002e3b9d0, libserver.so)  // inlines: V_StripExtension<long unsigned int>, _V_strstr, strstr
// calls: CUtlString::Clear, strstr, _V_StripExtension, CUtlString::Set, __stack_chk_fail
// callers: CMapModifier::GetBaseMap, CMapModifier::GetOverrideMap
// strings: "/maps/"
void __fastcall GetMapNameFromMapAsset(const char *pMapAssetName, CUtlString *pOutMapName)
{
  char mapName[264]; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v5; // [rsp+108h] [rbp-28h]

  v5 = __readfsqword(0x28u);
  CUtlString::Clear(pOutMapName);
  if ( pMapAssetName != 0 )
  {
    if ( pMapAssetName == strstr(pMapAssetName, "maps/") )
    {
      pMapAssetName += 5;
    }
    else if ( pMapAssetName == strstr(pMapAssetName, "/maps/") )
    {
      pMapAssetName += 6;
    }
    _V_StripExtension(pMapAssetName, mapName, 260);
    CUtlString::Set(pOutMapName, mapName);
  }
}


// CMapModifier::GetBaseMap  (line 781, @0x0000000002e3ba80, libserver.so)  // inlines: GetAsset
// calls: CUtlString::Get, GetMapNameFromMapAsset
void __fastcall CMapModifier::GetBaseMap(const CMapModifier *const this, CUtlString *pOutMapName)
{
  const char *v3; // rax

  v3 = CUtlString::Get(&this->m_strAsset);
  GetMapNameFromMapAsset(v3, pOutMapName);
}


// CMapModifier::GetOverrideMap  (line 789, @0x0000000002e3bab0, libserver.so)  // inlines: GetModifier
// calls: CUtlString::Get, GetMapNameFromMapAsset
void __fastcall CMapModifier::GetOverrideMap(const CMapModifier *const this, CUtlString *pOutMapName)
{
  const char *v3; // rax

  v3 = CUtlString::Get(&this->m_strModifier);
  GetMapNameFromMapAsset(v3, pOutMapName);
}


