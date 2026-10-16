
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_utlstring.cpp  (line 0, @0x0000000001a673c0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_utlstring_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// UtlStringFastCompareLess  (line 59, @0x0000000002f863a0, libserver.so)  // inlines: Get, String
// calls: V_stricmp_fast
int __fastcall UtlStringFastCompareLess(const CUtlString *const lhs, const CUtlString *const rhs)
{
  char *m_pString; // rsi
  char *v3; // rdi

  m_pString = rhs->m_pString;
  v3 = lhs->m_pString;
  if ( m_pString == 0 )
    m_pString = "";
  if ( v3 == 0 )
    v3 = "";
  return V_stricmp_fast(v3, m_pString);
}


// CUtlString::AllocMemoryBlock  (line 76, @0x0000000002f863d0, libserver.so)
// calls: CMemAllocSystemInitialize
// callers: CUtlString::SetDirect, CUtlString::SetLength, CUtlString::operator+=, CUtlString::Append
void *__fastcall CUtlString::AllocMemoryBlock(CUtlString *const this, uint32 length)
{
  __int64 v2; // r12
  __int64 v4; // rax
  void *result; // rax

  v2 = length;
  CMemAllocSystemInitialize(this, length);
  v4 = *g_pMemAlloc;
  if ( this->m_pString != 0 )
    result = (*(v4 + 8))(g_pMemAlloc, this->m_pString, (v2 + 1));
  else
    result = (*v4)(g_pMemAlloc, (v2 + 1));
  this->m_pString = result;
  *(result + v2) = 0;
  return result;
}


// CUtlString::FreeMemoryBlock  (line 97, @0x0000000002f86430, libserver.so)
// callers: CPointClientUIWorldTextPanel::InputSetIntMessage, CEntitySpawnerBase<CDevtestHierarchyChild>::~CEntitySpawnerBase, CDevtestHierarchy2::Spawn, CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::SetInterpolationTimeType, CUtlString::~CUtlString, EnableRenderingInfo_t::GetDebugString, CLightComponent::CLightComponent, CLightComponent::~CLightComponent, CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::SetInterpolatedVarContains, CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::Reset, CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::RestoreLastSimulationValue, CNetworkTransmitComponent::ValidateChangeOffset (777 total)
void __fastcall CUtlString::FreeMemoryBlock(CUtlString *const this)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_pString);
}


// CUtlString::SetDirect  (line 104, @0x0000000002f86450, libserver.so)  // inlines: Purge, V_memcpy, memcpy
// calls: CUtlString::AllocMemoryBlock, memcpy
// callers: CUtlString::Set, CUtlString::operator=, CUtlString::Slice, CUtlString::StripFilename, CUtlTokenReference::AsString, UtlTokenizer_UnescapeString
void __fastcall CUtlString::SetDirect(CUtlString *const this, const char *pValue, int nChars)
{
  if ( pValue != 0 && nChars > 0 )
  {
    if ( this->m_pString != pValue )
    {
      CUtlString::AllocMemoryBlock(this, nChars);
      memcpy(this->m_pString, pValue, nChars);
    }
  }
  else if ( this->m_pString != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_pString, nChars);
    this->m_pString = 0;
  }
}


// CUtlString::Set  (line 125, @0x0000000002f864d0, libserver.so)  // inlines: V_strlen
// calls: strlen, CUtlString::SetDirect
// callers: CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::GetDebugName, CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::GetDebugBaseName, CLightComponent::CLightComponent, CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::SpewInterpolatedVarToString, CBaseFlex::FindSceneFile, CSpawnGroupMgrGameSystem::SaveGame_Start, CSpawnGroupMgrGameSystem::SpawnGroupActivate_CompletionFunc, CSpawnGroupMgrGameSystem::SpawnGroupLoad_CompletionFunc, CSpawnGroupMgrGameSystem::SpawnGroupUnload_CompletionFunc, CVScriptGameSystem::InstallScriptBindings, CMapSpawnGroup::OnSpawnGroupLoad, CUtlVectorBase<CEntityDebugGameSystem::DebugScrollingMessage_t, CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t, int> >::InsertBefore (274 total)
void __fastcall CUtlString::Set(CUtlString *const this, const char *pValue)
{
  int v4; // eax

  if ( pValue != 0 )
  {
    v4 = strlen(pValue);
    CUtlString::SetDirect(this, pValue, v4);
  }
  else
  {
    CUtlString::SetDirect(this, 0, 0);
  }
}


// CUtlString::Convert  (line 132, @0x0000000002f865d0, libserver.so)  // inlines: Purge
// calls: V_UTF32ToUTF8, CUtlString::SetLength
void __fastcall CUtlString::Convert(CUtlString *const this, const wchar_t *pValue)
{
  unsigned int v4; // r13d

  if ( pValue != 0 && *pValue != 0 )
  {
    v4 = V_UTF32ToUTF8(pValue, 0, 0, 4);
    CUtlString::SetLength(this, v4);
    V_UTF32ToUTF8(pValue, this->m_pString, v4, 4);
  }
  else if ( this->m_pString != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    this->m_pString = 0;
  }
}


// CUtlString::SetLength  (line 146, @0x0000000002f86520, libserver.so)  // inlines: Length, Purge, V_memset, V_strlen, memset
// calls: strlen, CUtlString::AllocMemoryBlock, memset
// callers: CScriptHTTPRequest::OnHTTPRequestCompleted, CUtlString::Convert, CUtlString::UnicodeCaseConvert, CUtlString::FormatV, CUtlString::StripTrailingSlash, CUtlString::TrimLeft, CUtlString::TrimRight, CUtlString::Ellipsify, GetDefaultColorFormatForAttribute, Unserialize
void __fastcall CUtlString::SetLength(CUtlString *const this, int nLen)
{
  signed int v3; // ebx
  char *m_pString; // rdi
  signed int v5; // r13d
  __int64 v6; // rdi
  char *v7; // rax

  v3 = nLen;
  if ( nLen > 0 )
  {
    m_pString = this->m_pString;
    if ( m_pString != 0 )
    {
      v5 = strlen(m_pString) + 1;
      CUtlString::AllocMemoryBlock(this, v3);
      if ( v3 <= v5 )
        return;
      v3 -= v5;
      v6 = v5;
      v7 = this->m_pString;
      if ( v3 < 0 )
        __debugbreak();
    }
    else
    {
      CUtlString::AllocMemoryBlock(this, nLen);
      v7 = this->m_pString;
      v6 = 0;
    }
    memset(&v7[v6], 255, v3);
    return;
  }
  if ( this->m_pString != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    this->m_pString = 0;
  }
}


// CUtlString::Get  (line 163, @0x0000000002f86660, libserver.so)
// callers: CNetMessagePB<283, CClientMsg_DevPaletteVisibilityChangedEvent, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString, CNetMessagePB<282, CClientMsg_ClientUIEvent, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString, CPointClientUIWorldTextPanel::InputSetIntMessage, CNetMessagePB<363, CDOTAClientMsg_FlipCoin, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString, CNetMessagePB<362, CDOTAClientMsg_RollDice, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString, CNetMessagePB<361, CDOTAClientMsg_SetDesiredWardPlacement, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString, CNetMessagePB<360, CDOTAClientMsg_SetEnemyStartingPosition, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString, CNetMessagePB<359, CDOTAClientMsg_KillcamDamageTaken, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString, CNetMessagePB<358, CDOTAClientMsg_SpecialAbility, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString, CNetMessagePB<357, CDOTAClientMsg_ToggleAutoattack, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString, CNetMessagePB<356, CDOTAClientMsg_QuestStatus, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString, CNetMessagePB<354, CDOTAClientMsg_MatchMetadata, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString (939 total)
const char *__fastcall CUtlString::Get(const CUtlString *const this)
{
  const char *result; // rax

  result = "";
  if ( this->m_pString != 0 )
    return this->m_pString;
  return result;
}


// CUtlString::GetForModify  (line 172, @0x0000000002f86680, libserver.so)
// callers: StripInstanceNumberFromChatChannelName, CInfoSpawnGroupLoadUnload::Spawn, CFieldPath::FromString, Unserialize, CUtlTokenReference::MakeSafeIdentifier
char *__fastcall CUtlString::GetForModify(CUtlString *const this)
{
  char *result; // rax
  char *v3; // rax

  result = this->m_pString;
  if ( this->m_pString == 0 )
  {
    v3 = (**g_pMemAlloc)(g_pMemAlloc, 1);
    this->m_pString = v3;
    *v3 = 0;
    return this->m_pString;
  }
  return result;
}


// CUtlString::operator[]  (line 187, @0x0000000002f866d0, libserver.so)  // inlines: Length, V_strlen
// calls: strlen
// callers: CPhysicsGameSystem::PhysBreakSound, CRuleScriptBridge::AddCriterionFromScript, ParseContextArray, CBaseCombatWeapon::Spawn, CDOTA_BaseNPC_Pet::PickupItem
char __fastcall CUtlString::operator[](const CUtlString *const this, int i)
{
  __int64 v2; // r12
  char *m_pString; // rbx
  int v4; // eax
  char v5; // dl

  v2 = i;
  m_pString = this->m_pString;
  if ( this->m_pString == 0 )
    return 0;
  v4 = strlen(this->m_pString);
  v5 = 0;
  if ( v2 < v4 )
    return m_pString[v2];
  return v5;
}


// CUtlString::Clear  (line 200, @0x0000000002f86710, libserver.so)  // inlines: Purge
// callers: CNetworkTransmitComponent::ValidateChangeOffset, CEntity2SaveRestore::SaveGame_Start, CEntity2SaveRestore::SaveGame_Finalize, CLoopModeGame::~CLoopModeGame, CRenderAttributes::~CRenderAttributes, CLoopModeGame::CLoopModeGame, FileWeaponInfo_t::Parse, CChangeLevel::ChangeLevelNow, CDOTAGamerules::GameInit, CDOTA_Modifier_Lua::CDOTA_Modifier_Lua, CDOTA_ProjectileManager::Script_CreateLinearProjectile, CDOTA_ProjectileManager::Script_CreateTrackingProjectile (26 total)
void __fastcall CUtlString::Clear(CUtlString *const this)
{
  if ( this->m_pString != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    this->m_pString = 0;
  }
}


// CUtlString::Purge  (line 205, @0x0000000002f86750, libserver.so)
void __fastcall CUtlString::Purge(CUtlString *const this)
{
  if ( this->m_pString != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    this->m_pString = 0;
  }
}


// CUtlString::IsEqual_CaseSensitive  (line 215, @0x0000000002f86790, libserver.so)  // inlines: Get, Length, V_strlen, _V_strcmp
// calls: strcmp, strlen
// callers: CMapSpawnGroup::FindConnectionByLandmarkName, CRuleScriptBridge::AddCriterionFromScript, ParseContextArray, CChangeLevel::AddTransitionToList, CDOTA_CombatLog::SendKillCamInformation, CDOTA_Modifier_Illusion::OnDestroy, CDOTA_Modifier_MonkeyKing_Transform::OnCreated, CGameSaveRestoreInfo::EntryInTableBitMask, CGameSaveRestoreInfo::LandmarkOrigin, CLoadKV3FromDynData::ResolveUnresolvedReferences, CModelBuilder::FindExtPartByName
bool __fastcall CUtlString::IsEqual_CaseSensitive(const CUtlString *const this, const char *src)
{
  char *m_pString; // rax
  const char *v3; // rdi
  char *v5; // rdi

  if ( src != 0 )
  {
    m_pString = this->m_pString;
    v3 = "";
    if ( m_pString != 0 )
      v3 = m_pString;
    return strcmp(v3, src) == 0;
  }
  else
  {
    v5 = this->m_pString;
    return v5 == 0 || strlen(v5) == 0;
  }
}


// CUtlString::IsEqual_FastCaseInsensitive  (line 224, @0x0000000002f867e0, libserver.so)  // inlines: Get, Length, V_strlen
// calls: V_stricmp_fast, strlen
bool __fastcall CUtlString::IsEqual_FastCaseInsensitive(const CUtlString *const this, const char *src)
{
  char *m_pString; // rax
  const char *v3; // rdi
  char *v5; // rdi

  if ( src != 0 )
  {
    m_pString = this->m_pString;
    v3 = "";
    if ( m_pString != 0 )
      v3 = m_pString;
    return V_stricmp_fast(v3, src) == 0;
  }
  else
  {
    v5 = this->m_pString;
    return v5 == 0 || strlen(v5) == 0;
  }
}


// CUtlString::ToLowerFast  (line 234, @0x0000000002f86830, libserver.so)
// calls: V_strlower_fast
// callers: CEntity2SaveRestore::LoadSaveData, CEntity2SaveRestore::LoadAdjacentEnts, CChangeLevel::AddTransitionToList
void __fastcall CUtlString::ToLowerFast(CUtlString *const this)
{
  char *m_pString; // rdi

  m_pString = this->m_pString;
  if ( m_pString != 0 )
    V_strlower_fast(m_pString);
}


// CUtlString::ToUpperFast  (line 244, @0x0000000002f86850, libserver.so)
// calls: V_strupper_fast
// callers: CVScriptGameSystem::InstallScriptBindings, CEntFireAutoCompletionFunctor::CommandCompletionCallback
void __fastcall CUtlString::ToUpperFast(CUtlString *const this)
{
  char *m_pString; // rdi

  m_pString = this->m_pString;
  if ( m_pString != 0 )
    V_strupper_fast(m_pString);
}


// CUtlString::UnicodeCaseConvert  (line 254, @0x0000000002f86870, libserver.so)  // inlines: CUtlString, FreeMemoryBlock, Swap, ~CUtlString
// calls: V_UnicodeCaseConvert(char const*,char *,int,int,EStringConvertErrorPolicy), CUtlString::SetLength, CUtlString::Set, __stack_chk_fail, _Unwind_Resume
int __fastcall CUtlString::UnicodeCaseConvert(
        CUtlString *const this,
        int nStringCaseFlags,
        EStringConvertErrorPolicy ePolicy)
{
  char *m_pString; // rdi
  int v7; // eax
  int v8; // r12d
  int v9; // r12d
  char *v10; // rax
  bool v11; // zf
  CUtlString replacement; // [rsp+0h] [rbp-820h] BYREF
  char stackbuf[2008]; // [rsp+10h] [rbp-810h] BYREF
  unsigned __int64 v15; // [rsp+7E8h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  m_pString = this->m_pString;
  if ( m_pString == 0 )
    return 0;
  v7 = V_UnicodeCaseConvert(m_pString, stackbuf, 2000, nStringCaseFlags, (ePolicy | 8));
  v8 = v7;
  if ( v7 <= 0x7D0 )
  {
    CUtlString::Set(this, stackbuf);
    return v8;
  }
  else
  {
    replacement.m_pString = 0;
    CUtlString::SetLength(&replacement, v7);
    v9 = V_UnicodeCaseConvert(this->m_pString, replacement.m_pString, v8, nStringCaseFlags, (ePolicy & 0xFFFFFFFB));
    v10 = replacement.m_pString;
    v11 = this->m_pString == 0;
    replacement.m_pString = this->m_pString;
    this->m_pString = v10;
    if ( !v11 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    return v9;
  }
}


// CUtlString::operator=  (line 278, @0x0000000002f869a0, libserver.so)  // inlines: Get, Length, V_strlen
// calls: strlen, CUtlString::SetDirect
// callers: CAtomicManipulator<CUtlString>::Copy, CAtomicManipulator<CUtlString>::AllocateAndCopy, CSchemaClassBinding<CBasePlayer::StepSoundCache_t>::AllocateAndCopyConstruct, CSchemaClassBinding<CBasePlayer::StepSoundCache_t>::Copy, CSchemaClassBinding<WeaponSoundData_t>::AllocateAndCopyConstruct, CSchemaClassBinding<WeaponSoundData_t>::Copy, CSchemaUtlVectorManipulator<CUtlVector<WeaponSoundData_t, CUtlMemory<WeaponSoundData_t, int> >, WeaponSoundData_t>::SwapItems, CSchemaClassBinding<WeaponTextureData_t>::Copy, CSchemaClassBinding<WeaponTextureData_t>::AllocateAndCopyConstruct, CSchemaUtlVectorManipulator<CUtlVector<WeaponTextureData_t, CUtlMemory<WeaponTextureData_t, int> >, WeaponTextureData_t>::SwapItems, CAtomicManipulator<CUtlVector<WeaponSoundData_t, CUtlMemory<WeaponSoundData_t, int> > >::Copy, CAtomicManipulator<CUtlVector<WeaponSoundData_t, CUtlMemory<WeaponSoundData_t, int> > >::AllocateAndCopy (123 total)
CUtlString *__fastcall CUtlString::operator=(CUtlString *const this, const CUtlString *const src)
{
  char *m_pString; // rbx
  int v4; // eax

  m_pString = src->m_pString;
  if ( src->m_pString != 0 )
  {
    v4 = strlen(src->m_pString);
    CUtlString::SetDirect(this, m_pString, v4);
  }
  else
  {
    CUtlString::SetDirect(this, "", 0);
  }
  return this;
}


// CUtlString::operator=  (line 284, @0x0000000002f869f0, libserver.so)
// calls: CUtlString::Set
// callers: CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::SpewInterpolatedVarToString, CGameConfiguration::GetHostStateLoopModeInfo, CGameConfiguration::ExecuteURL, CSpawnGroupMgrGameSystem::SaveGame_Start, CSpawnGroupMgrGameSystem::SpawnGroupInit, CSpawnGroupMgrGameSystem::SetActiveSpawnGroup, IterateActivePhysicsEntities, CSpawnGroupMgrGameSystem::SpawnGroupActuallyShutdown, CSpawnGroupMgrGameSystem::SpawnGroupShutdown, CSpawnGroupMgrGameSystem::SpawnGroupBuildStreamInfo, CSpawnGroupMgrGameSystem::StreamEntitiesToFile, CEntityDebugGameSystem::AddStickyEntTextName (194 total)
CUtlString *__fastcall CUtlString::operator=(CUtlString *const this, const char *src)
{
  CUtlString::Set(this, src);
  return this;
}


// CUtlString::operator==  (line 290, @0x0000000002f86a10, libserver.so)  // inlines: IsEmpty, _V_strcmp
// calls: strcmp
// callers: CEntity2SaveRestore::LoadAdjacentEnts, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Find, CRenderSkeleton::FillInPermData, CMesh::GetDeltaNames
bool __fastcall CUtlString::operator==(const CUtlString *const this, const CUtlString *const src)
{
  char *m_pString; // rdi
  char *v3; // rsi

  m_pString = this->m_pString;
  if ( m_pString == 0 || *m_pString == 0 )
    return src->m_pString == 0 || *src->m_pString == 0;
  v3 = src->m_pString;
  return v3 != 0 && *v3 != 0 && strcmp(m_pString, v3) == 0;
}


// CUtlString::operator+=  (line 312, @0x0000000002f86a60, libserver.so)  // inlines: Length, V_memcpy, V_strlen, memcpy
// calls: strlen, CUtlString::AllocMemoryBlock, memcpy
// callers: CNetworkTransmitComponent::StateChanged, CSaveRestoreFileSystem::ChangeSaveInMemory, CSave::Log, CUtlString::operator+, CMorphSet::ConvertMorphRuleToExpressionString
CUtlString *__fastcall CUtlString::operator+=(CUtlString *const this, const CUtlString *const rhs)
{
  char *m_pString; // rdi
  int v5; // r14d
  int v6; // eax
  int v7; // r12d

  m_pString = this->m_pString;
  if ( m_pString != 0 )
    v5 = strlen(m_pString);
  else
    v5 = 0;
  if ( rhs->m_pString != 0 )
  {
    v6 = strlen(rhs->m_pString);
    v7 = v6;
    if ( v6 != 0 )
    {
      CUtlString::AllocMemoryBlock(this, v5 + v6);
      if ( v7 < 0 )
        __debugbreak();
      memcpy(&this->m_pString[v5], rhs->m_pString, v7);
    }
  }
  return this;
}


// CUtlString::operator+=  (line 330, @0x0000000002f86ae0, libserver.so)  // inlines: Length, V_memcpy, V_strlen, memcpy
// calls: strlen, CUtlString::AllocMemoryBlock, memcpy
// callers: CNetMessagePB<283, CClientMsg_DevPaletteVisibilityChangedEvent, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString, CNetMessagePB<282, CClientMsg_ClientUIEvent, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString, CNetMessagePB<363, CDOTAClientMsg_FlipCoin, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString, CNetMessagePB<362, CDOTAClientMsg_RollDice, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString, CNetMessagePB<361, CDOTAClientMsg_SetDesiredWardPlacement, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString, CNetMessagePB<360, CDOTAClientMsg_SetEnemyStartingPosition, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString, CNetMessagePB<359, CDOTAClientMsg_KillcamDamageTaken, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString, CNetMessagePB<358, CDOTAClientMsg_SpecialAbility, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString, CNetMessagePB<357, CDOTAClientMsg_ToggleAutoattack, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString, CNetMessagePB<356, CDOTAClientMsg_QuestStatus, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString, CNetMessagePB<354, CDOTAClientMsg_MatchMetadata, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString, CNetMessagePB<351, CDOTAClientMsg_XPAlert, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::ToString (287 total)
CUtlString *__fastcall CUtlString::operator+=(CUtlString *const this, const char *rhs)
{
  char *m_pString; // rdi
  int v5; // r13d
  int v6; // r12d

  m_pString = this->m_pString;
  if ( m_pString != 0 )
    v5 = strlen(m_pString);
  else
    v5 = 0;
  if ( rhs != 0 )
    v6 = strlen(rhs);
  else
    v6 = 0;
  if ( v6 + v5 == 0 )
    return this;
  CUtlString::AllocMemoryBlock(this, v6 + v5);
  if ( v6 < 0 )
    __debugbreak();
  memcpy(&this->m_pString[v5], rhs, v6);
  return this;
}


// CUtlString::operator+=  (line 347, @0x0000000002f86b70, libserver.so)  // inlines: Length, V_strlen
// calls: strlen, CUtlString::AllocMemoryBlock
// callers: UtlTokenizer_QuoteAndEscapeString, UtlTokenizer_UnescapeString
CUtlString *__fastcall CUtlString::operator+=(CUtlString *const this, char c)
{
  char *m_pString; // rdi
  int v5; // eax
  uint32 v6; // esi
  __int64 v7; // r13

  m_pString = this->m_pString;
  if ( m_pString != 0 )
  {
    v5 = strlen(m_pString);
    v6 = v5 + 1;
    v7 = v5;
  }
  else
  {
    v7 = 0;
    v6 = 1;
  }
  CUtlString::AllocMemoryBlock(this, v6);
  this->m_pString[v7] = c;
  return this;
}


// CUtlString::operator+=  (line 357, @0x0000000002f86bd0, libserver.so)
// calls: V_snprintf, CUtlString::operator+=, __stack_chk_fail
// callers: CUtlString::operator+
CUtlString *__fastcall CUtlString::operator+=(CUtlString *const this, int rhs)
{
  char tmpBuf[24]; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  V_snprintf(tmpBuf, 12, "%d", rhs);
  return CUtlString::operator+=(this, tmpBuf);
}


// CUtlString::operator+=  (line 367, @0x0000000002f86c30, libserver.so)
// calls: V_snprintf, CUtlString::operator+=, __stack_chk_fail
// callers: CMorphSet::ConvertMorphRuleToExpressionString
// strings: "%lg"
CUtlString *__fastcall CUtlString::operator+=(CUtlString *const this, double a2, double rhs)
{
  char tmpBuf[264]; // [rsp+0h] [rbp-120h] BYREF
  unsigned __int64 v6; // [rsp+108h] [rbp-18h]

  v6 = __readfsqword(0x28u);
  V_snprintf(tmpBuf, 256, "%lg", a2);
  return CUtlString::operator+=(this, tmpBuf);
}


// CUtlString::MatchesPattern  (line 375, @0x0000000002f86ca0, libserver.so)  // inlines: Get, String
bool __fastcall CUtlString::MatchesPattern(const CUtlString *const this, const CUtlString *const Pattern, int nFlags)
{
  char v3; // r12
  char *m_pString; // r11
  char *v5; // r8
  int v6; // edx
  char v7; // r9
  int v8; // esi
  bool result; // al
  __int64 v10; // r14
  __int64 v11; // r15
  char *v12; // r13
  char v13; // bl
  char *v14; // rcx
  char *v15; // rsi
  char *v16; // rax

  v3 = 1;
  m_pString = this->m_pString;
  v5 = Pattern->m_pString;
  if ( this->m_pString == 0 )
    m_pString = "";
  if ( v5 == 0 )
    v5 = "";
  v6 = nFlags & 1;
  v7 = *v5;
  while ( 1 )
  {
    if ( v7 == 0 )
      return *m_pString == 0;
    v8 = 0;
    if ( v7 != 42 )
      break;
    v7 = v5[1];
    v16 = v5 + 1;
    if ( v7 == 0 )
      return 1;
    v3 = 0;
LABEL_26:
    v5 = v16;
  }
  do
  {
    v7 = *++v5;
    ++v8;
    result = v7 != 0 && v7 != 42;
  }
  while ( result );
  v10 = v8;
  v11 = (v8 - 1) + 1LL;
  v12 = &v5[-v8];
  while ( 1 )
  {
    v13 = *m_pString;
    if ( *m_pString == 0 )
      return result;
    if ( v13 == *v12 )
    {
      v14 = m_pString;
      v15 = &v5[-v10];
      do
      {
        ++v14;
        ++v15;
        if ( v14 == &m_pString[v11] )
          break;
        if ( *v14 == 0 )
          return result;
      }
      while ( *v14 == *v15 );
      if ( v10 == v14 - m_pString )
      {
        m_pString += v10;
        v16 = v5;
        goto LABEL_26;
      }
    }
    if ( v3 != 0 || v6 != 0 && v7 != 47 && v13 == 47 )
      return result;
    ++m_pString;
  }
}


// CUtlString::Format  (line 453, @0x0000000002f86f90, libserver.so)
// calls: CUtlString::FormatV
// callers: CPointClientUIWorldTextPanel::InputSetIntMessage, EnableRenderingInfo_t::GetDebugString, CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::RestoreLastSimulationValue, CNetworkTransmitComponent::StateChanged, CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::Interpolate, CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::SpewInterpolatedVarToString, CInterpolatedVarArrayBase<EnableRenderingInfo_t, false, true, CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> >::LatchChangedTick, CSpawnGroupMgrGameSystem::FrameBoundary, CSpawnGroupMgrGameSystem::SetActiveSpawnGroup, CEntityDebugGameSystem::OnEntityReport, CSpawnGroupMgrGameSystem::UnloadSpawnGroup, CMapSpawnGroup::OnSpawnGroupLoad (125 total)
int CUtlString::Format(CUtlString *const this, const char *pFormat, ...)
{
  va_list marker; // [rsp+8h] [rbp-C8h] BYREF

  va_start(marker, pFormat);
  return CUtlString::FormatV(this, pFormat, marker);
}


// CUtlString::FormatV  (line 468, @0x0000000002f86dd0, libserver.so)  // inlines: CReuseVaList, Clear, LeafCodeInfo_t, Purge
// calls: CUtlString::SetLength, V_vsnprintfSize, CUtlString::Set, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), __stack_chk_fail
// callers: CUtlString::Format, CKV3TransferContextBase::NoteFailure
// strings: "utlstring.cpp", "FormatV", "%s: string format requested %d chars\n"
int __fastcall CUtlString::FormatV(CUtlString *const this, const char *pFormat, ___va_list_tag *marker)
{
  int v5; // r12d
  char *i; // r13
  int result; // eax
  char IsChannelEnabled; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  int v13; // r9d
  int nFullLena; // [rsp+8h] [rbp-1068h]
  int nFullLenb; // [rsp+8h] [rbp-1068h]
  CReuseVaList ReuseArgs; // [rsp+10h] [rbp-1060h] BYREF
  char tmpBuf[4104]; // [rsp+30h] [rbp-1040h] BYREF
  unsigned __int64 v19; // [rsp+1038h] [rbp-38h]

  v5 = 4096;
  v19 = __readfsqword(0x28u);
  tmpBuf[0] = 0;
  for ( i = tmpBuf; ; i = this->m_pString )
  {
    ReuseArgs.m_ReuseList[0] = *marker;
    result = V_vsnprintfSize(i, v5, pFormat, &ReuseArgs);
    if ( result <= 0 )
    {
      result = 0;
      if ( this->m_pString != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        result = 0;
        this->m_pString = 0;
      }
      return result;
    }
    if ( v5 > result )
      break;
    if ( result > 100000000 )
    {
      nFullLenb = result;
      IsChannelEnabled = LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4);
      v13 = nFullLenb;
      if ( IsChannelEnabled != 0 )
        goto LABEL_15;
      while ( 1 )
      {
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v11, v12, v9, v10) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
LABEL_15:
        *&ReuseArgs.m_ReuseList[0].gp_offset = "utlstring.cpp";
        ReuseArgs.m_ReuseList[0].reg_save_area = "FormatV";
        LODWORD(ReuseArgs.m_ReuseList[0].overflow_arg_area) = 503;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &ReuseArgs,
          "%s: string format requested %d chars\n",
          "FormatV",
          v13);
      }
    }
    v5 = result + 1;
    CUtlString::SetLength(this, result);
  }
  if ( i == tmpBuf )
  {
    nFullLena = result;
    CUtlString::Set(this, i);
    return nFullLena;
  }
  return result;
}


// CUtlString::StripTrailingSlash  (line 524, @0x0000000002f87020, libserver.so)  // inlines: IsEmpty, Length, V_strlen
// calls: strlen, CUtlString::SetLength
// callers: CUtlString::StripFilename
void __fastcall CUtlString::StripTrailingSlash(CUtlString *const this)
{
  char *m_pString; // rbx
  int v3; // esi
  char v4; // dl

  m_pString = this->m_pString;
  if ( this->m_pString != 0 && *m_pString != 0 )
  {
    v3 = strlen(this->m_pString) - 1;
    v4 = m_pString[v3];
    if ( v4 == 47 || v4 == 92 )
      CUtlString::SetLength(this, v3);
  }
}


// CUtlString::FixSlashes  (line 537, @0x0000000002f87070, libserver.so)
// calls: V_FixSlashes
// callers: CEntity2SaveRestore::CalcSaveGameName, CEntity2SaveRestore::LoadSaveData, CEntity2SaveRestore::LoadAdjacentEnts, CEntity2SaveRestore::SaveGame_Finalize, CPrecacheGameSystem::GenerateFolderContentsList, CChangeLevel::AddTransitionToList
void __fastcall CUtlString::FixSlashes(CUtlString *const this, char cSeparator)
{
  char *m_pString; // rdi

  m_pString = this->m_pString;
  if ( m_pString != 0 )
    V_FixSlashes(m_pString, cSeparator);
}


// CUtlString::RemoveDotSlashes  (line 545, @0x0000000002f870a0, libserver.so)
// calls: V_RemoveDotSlashes
void __fastcall CUtlString::RemoveDotSlashes(CUtlString *const this, char cSeparator)
{
  char *m_pString; // rdi

  m_pString = this->m_pString;
  if ( m_pString != 0 )
    V_RemoveDotSlashes(m_pString, cSeparator);
}


// CUtlString::TrimLeft  (line 556, @0x0000000002f870d0, libserver.so)  // inlines: IsEmpty, Length, V_strlen, memcpy
// calls: memcpy, strlen, CUtlString::SetLength
// callers: CUtlString::Trim
void __fastcall CUtlString::TrimLeft(CUtlString *const this, char cTarget)
{
  char *m_pString; // r8
  char *v4; // rax
  int v6; // ebx
  char *v7; // rsi
  int v8; // esi

  m_pString = this->m_pString;
  if ( this->m_pString != 0 && *m_pString != 0 && cTarget == *m_pString )
  {
    v4 = m_pString + 1;
    v6 = 0;
    do
    {
      v7 = v4++;
      ++v6;
    }
    while ( *(v4 - 1) == cTarget );
    memcpy(m_pString, v7, (strlen(this->m_pString) - v6));
    v8 = 0;
    if ( this->m_pString != 0 )
      v8 = strlen(this->m_pString);
    CUtlString::SetLength(this, v8 - v6);
  }
}


// CUtlString::TrimLeft  (line 579, @0x0000000002f87160, libserver.so)  // inlines: IsEmpty, Length, V_strlen, memmove
// calls: strlen, memmove, CUtlString::SetLength
// callers: CUtlString::Trim
void __fastcall CUtlString::TrimLeft(CUtlString *const this, const char *szTargets)
{
  char *m_pString; // r12
  char v4; // cl
  char *v5; // r8
  char *v6; // r13
  int v7; // ebx
  const char *v8; // rax
  char v9; // dl
  int v10; // eax
  int v11; // esi

  m_pString = this->m_pString;
  if ( this->m_pString != 0 )
  {
    v4 = *m_pString;
    if ( *m_pString != 0 )
    {
      v5 = m_pString + 1;
      if ( *szTargets != 0 )
      {
        v6 = this->m_pString;
        v7 = 0;
        while ( *szTargets == v4 )
        {
LABEL_14:
          v6 = v5++;
          ++v7;
          v4 = *(v5 - 1);
          if ( v4 == 0 )
            goto LABEL_10;
        }
        v8 = szTargets + 1;
        while ( 1 )
        {
          v9 = *v8;
          if ( *v8 == 0 )
            break;
          ++v8;
          if ( v4 == v9 )
            goto LABEL_14;
        }
        if ( v7 != 0 )
        {
LABEL_10:
          v10 = strlen(this->m_pString);
          memmove(m_pString, v6, v10 - v7);
          if ( this->m_pString != 0 )
            v11 = strlen(this->m_pString);
          else
            v11 = 0;
          CUtlString::SetLength(this, v11 - v7);
        }
      }
    }
  }
}


// CUtlString::TrimRight  (line 618, @0x0000000002f87220, libserver.so)  // inlines: Length, V_strlen
// calls: strlen, CUtlString::SetLength
// callers: CUtlString::Trim
void __fastcall CUtlString::TrimRight(CUtlString *const this, char cTarget)
{
  char *m_pString; // rbx
  int v5; // eax
  char v6; // r8
  char *v7; // rcx
  int i; // esi
  int v9; // edx

  m_pString = this->m_pString;
  if ( this->m_pString != 0 )
  {
    v5 = strlen(this->m_pString) - 1;
    if ( v5 >= 0 )
    {
      v6 = m_pString[v5];
      if ( v6 == cTarget )
      {
        v7 = &m_pString[v5 - 1];
        for ( i = v5; ; --i )
        {
          v9 = i - 1;
          if ( i == 0 )
            goto LABEL_8;
          if ( *v7-- != v6 )
            break;
        }
        if ( v5 > v9 )
        {
LABEL_8:
          m_pString[v9 + 1] = 0;
          CUtlString::SetLength(this, i + 1);
        }
      }
    }
  }
}


// CUtlString::TrimRight  (line 639, @0x0000000002f872b0, libserver.so)  // inlines: Length, V_strlen
// calls: strlen, CUtlString::SetLength
// callers: CSave::Log, CEntFireAutoCompletionFunctor::CommandCompletionCallback, DescribeAxisFlags, CChangeLevel::ComputeEntitySaveFlags, CUtlString::Trim, CChoreoEvent::SetParameters2, CChoreoEvent::SetParameters3, CChoreoEvent::RestoreFromBuffer, CBezierHandlesForSample::ToString, CCurveData::SaveSamples, CCurveData::ParseSample
void __fastcall CUtlString::TrimRight(CUtlString *const this, const char *szTargets)
{
  char *m_pString; // r12
  int v5; // esi
  char *v6; // r9
  int v7; // r8d
  const char *v8; // rax
  char v9; // dl
  int v10; // eax

  m_pString = this->m_pString;
  if ( this->m_pString != 0 )
  {
    v5 = strlen(this->m_pString) - 1;
    if ( v5 >= 0 )
    {
      v6 = &m_pString[v5];
      if ( *szTargets != 0 )
      {
        v7 = v5;
        while ( *szTargets == *v6 )
        {
LABEL_12:
          --v6;
          if ( --v7 < 0 )
            goto LABEL_13;
        }
        v8 = szTargets + 1;
        while ( 1 )
        {
          v9 = *v8;
          if ( *v8 == 0 )
            break;
          ++v8;
          if ( v9 == *v6 )
            goto LABEL_12;
        }
        v10 = v7;
      }
      else
      {
        v10 = v5;
        v7 = v5;
      }
      if ( v5 > v7 )
      {
        v7 = v10;
LABEL_13:
        m_pString[v7 + 1] = 0;
        CUtlString::SetLength(this, v7 + 2);
      }
    }
  }
}


// CUtlString::Trim  (line 672, @0x0000000002f87360, libserver.so)
// calls: CUtlString::TrimLeft, CUtlString::TrimRight
void __fastcall CUtlString::Trim(CUtlString *const this, char cTarget)
{
  CUtlString::TrimLeft(this, cTarget);
  CUtlString::TrimRight(this, cTarget);
}


// CUtlString::Trim  (line 679, @0x0000000002f87390, libserver.so)
// calls: CUtlString::TrimLeft, CUtlString::TrimRight
void __fastcall CUtlString::Trim(CUtlString *const this, const char *szTargets)
{
  CUtlString::TrimLeft(this, szTargets);
  CUtlString::TrimRight(this, szTargets);
}


// CUtlString::Slice  (line 686, @0x0000000002f873c0, libserver.so)  // inlines: CUtlString, FreeMemoryBlock, Length, V_strlen, ~CUtlString
// calls: strlen, CUtlString::SetDirect, _Unwind_Resume
// callers: CDOTA_UnitInventory::DisassembleItem, CUtlString::Left, CUtlString::Right, UtlTokenizer_UnescapeString
CUtlString __fastcall CUtlString::Slice(CUtlString *a1, const CUtlString *const this, int32 nStart, int32 nEnd)
{
  char *m_pString; // r12
  int32 v8; // eax
  int32 v9; // ecx
  CUtlString ret; // [rsp+0h] [rbp-30h] BYREF

  m_pString = this->m_pString;
  if ( this->m_pString == 0 )
    goto LABEL_12;
  v8 = strlen(this->m_pString);
  v9 = v8;
  if ( v8 == 0 )
    goto LABEL_12;
  if ( nStart < 0 )
  {
    nStart = v8 - -nStart % v8;
  }
  else if ( v8 <= nStart )
  {
    nStart = v8;
  }
  if ( nEnd != 0x7FFFFFFF )
  {
    if ( nEnd < 0 )
    {
      v9 = v8 - -nEnd % v8;
    }
    else
    {
      v9 = nEnd;
      if ( v8 <= nEnd )
        v9 = v8;
    }
  }
  if ( nStart < v9 )
  {
    ret.m_pString = 0;
    CUtlString::SetDirect(&ret, &m_pString[nStart], v9 - nStart);
    a1->m_pString = ret.m_pString;
    return a1;
  }
  else
  {
LABEL_12:
    a1->m_pString = 0;
    return a1;
  }
}


// CUtlString::Left  (line 717, @0x0000000002f874c0, libserver.so)
// calls: CUtlString::Slice
CUtlString __fastcall CUtlString::Left(CUtlString *a1, const CUtlString *const this, int32 nChars)
{
  CUtlString::Slice(a1, this, 0, nChars);
  return a1;
}


// CUtlString::Right  (line 722, @0x0000000002f874e0, libserver.so)
// calls: CUtlString::Slice
CUtlString __fastcall CUtlString::Right(CUtlString *a1, const CUtlString *const this, int32 nChars)
{
  CUtlString::Slice(a1, this, -nChars, 0x7FFFFFFF);
  return a1;
}


// CUtlString::Replace  (line 727, @0x0000000002f87510, libserver.so)  // inlines: CUtlString, Length, V_strlen
// calls: CUtlString::Set, strlen
CUtlString __fastcall CUtlString::Replace(char **a1, const CUtlString *const this, char cFrom, char cTo)
{
  char *m_pString; // rsi
  char *v8; // rbx
  int v9; // edx
  __int64 v10; // rsi
  char *v11; // r8
  CUtlString ret; // [rsp+0h] [rbp-30h] BYREF

  m_pString = this->m_pString;
  if ( m_pString != 0 )
  {
    ret.m_pString = 0;
    CUtlString::Set(&ret, m_pString);
    v8 = ret.m_pString;
    if ( ret.m_pString != 0 )
    {
      v9 = strlen(ret.m_pString);
      if ( v9 > 0 )
      {
        v10 = 0;
        do
        {
          while ( 1 )
          {
            v11 = &v8[v10];
            if ( v8[v10] == cFrom )
              break;
            if ( v9 <= ++v10 )
              goto LABEL_8;
          }
          ++v10;
          *v11 = cTo;
          v8 = ret.m_pString;
        }
        while ( v9 > v10 );
      }
    }
LABEL_8:
    *a1 = v8;
    return a1;
  }
  else
  {
    *a1 = 0;
    return a1;
  }
}


// CUtlString::Replace  (line 745, @0x0000000002f87c50, libserver.so)  // inlines: Append, CUtlString, FreeMemoryBlock, strchr
// calls: CUtlString::Append, CUtlString::operator+=, strchr, _Unwind_Resume
CUtlString __fastcall CUtlString::Replace(
        CUtlString *a1,
        const CUtlString *const this,
        char cFrom,
        const char *pReplacement)
{
  char *m_pString; // r12
  int v7; // r14d
  char *v8; // rax
  char *v9; // rbx

  a1->m_pString = 0;
  m_pString = this->m_pString;
  if ( this->m_pString != 0 && *m_pString != 0 )
  {
    v7 = cFrom;
    while ( 1 )
    {
      v8 = strchr(m_pString, v7);
      v9 = v8;
      if ( v8 == 0 )
        break;
      if ( v8 != m_pString )
        CUtlString::Append(a1, m_pString, v8 - m_pString);
      CUtlString::operator+=(a1, pReplacement);
      m_pString = v9 + 1;
      if ( v9[1] == 0 )
        return a1;
    }
    CUtlString::operator+=(a1, m_pString);
  }
  return a1;
}


// CUtlString::Remove  (line 773, @0x0000000002f87d10, libserver.so)  // inlines: CUtlString, FreeMemoryBlock, V_strlen, _V_strstr, strstr
// calls: strlen, strstr, V_stristr_fast(char const*,char const*), CUtlString::operator+=, CUtlString::Append, _Unwind_Resume
// callers: CUtlString::Replace
CUtlString __fastcall CUtlString::Remove(
        CUtlString *a1,
        const CUtlString *const this,
        const char *pTextToRemove,
        bool bCaseSensitive)
{
  int v7; // eax
  char *m_pString; // rbx
  __int64 v9; // r15
  char *v10; // r12

  if ( pTextToRemove != 0 )
    v7 = strlen(pTextToRemove);
  else
    v7 = 0;
  a1->m_pString = 0;
  m_pString = this->m_pString;
  if ( m_pString != 0 && *m_pString != 0 )
  {
    v9 = v7;
    do
    {
      if ( bCaseSensitive )
      {
        v10 = strstr(m_pString, pTextToRemove);
        if ( v10 == 0 )
          goto LABEL_12;
      }
      else
      {
        v10 = V_stristr_fast(m_pString, pTextToRemove);
        if ( v10 == 0 )
        {
LABEL_12:
          CUtlString::operator+=(a1, m_pString);
          return a1;
        }
      }
      if ( v10 != m_pString )
        CUtlString::Append(a1, m_pString, v10 - m_pString);
      m_pString = &v10[v9];
    }
    while ( v10[v9] != 0 );
  }
  return a1;
}


// CUtlString::Replace  (line 805, @0x0000000002f87e00, libserver.so)  // inlines: CUtlString, FreeMemoryBlock, V_strlen, _V_strstr, strstr, ~CUtlString
// calls: strlen, strstr, CUtlString::Append, CUtlString::operator+=, V_stristr_fast(char const*,char const*), CUtlString::Remove, _Unwind_Resume
// callers: CBaseFlex::FindSceneFile, SaveKV3Text_R, UtlTokenizer_UnescapeString
CUtlString __fastcall CUtlString::Replace(
        CUtlString *a1,
        const CUtlString *const this,
        const char *pchFrom,
        const char *pchTo,
        bool bCaseSensitive)
{
  int v8; // eax
  char *m_pString; // rbx
  char *v10; // r12
  char *v11; // rax
  __int64 nTextToReplaceLength; // [rsp+10h] [rbp-50h]
  CUtlString outputString; // [rsp+20h] [rbp-40h] BYREF

  if ( pchTo == 0 )
  {
    CUtlString::Remove(a1, this, pchFrom, bCaseSensitive);
    return a1;
  }
  if ( pchFrom != 0 )
    v8 = strlen(pchFrom);
  else
    v8 = 0;
  m_pString = this->m_pString;
  outputString.m_pString = 0;
  if ( m_pString == 0 || *m_pString == 0 )
  {
    v11 = 0;
    goto LABEL_15;
  }
  nTextToReplaceLength = v8;
  while ( bCaseSensitive )
  {
    v10 = strstr(m_pString, pchFrom);
    if ( v10 == 0 )
      goto LABEL_13;
LABEL_8:
    if ( v10 != m_pString )
      CUtlString::Append(&outputString, m_pString, v10 - m_pString);
    CUtlString::operator+=(&outputString, pchTo);
    m_pString = &v10[nTextToReplaceLength];
    if ( v10[nTextToReplaceLength] == 0 )
      goto LABEL_14;
  }
  v10 = V_stristr_fast(m_pString, pchFrom);
  if ( v10 != 0 )
    goto LABEL_8;
LABEL_13:
  CUtlString::operator+=(&outputString, m_pString);
LABEL_14:
  v11 = outputString.m_pString;
LABEL_15:
  a1->m_pString = v11;
  return a1;
}


// CUtlString::Swap  (line 846, @0x0000000002f875b0, libserver.so)
void __fastcall CUtlString::Swap(CUtlString *const this, CUtlString *const src)
{
  char *m_pString; // rax

  m_pString = src->m_pString;
  src->m_pString = this->m_pString;
  this->m_pString = m_pString;
}


// CUtlString::Ellipsify  (line 853, @0x0000000002f875d0, libserver.so)  // inlines: CUtlString, FreeMemoryBlock, Get, Length, String, V_strlen
// calls: CUtlString::Set, strlen, CUtlString::SetLength, CUtlString::operator+=, _Unwind_Resume
CUtlString __fastcall CUtlString::Ellipsify(CUtlString *a1, CUtlString *const this, int nMaxLengthIncludingEllipses)
{
  char *m_pString; // rax
  const char *v6; // rsi

  m_pString = this->m_pString;
  v6 = "";
  a1->m_pString = 0;
  if ( m_pString != 0 )
    v6 = m_pString;
  CUtlString::Set(a1, v6);
  if ( nMaxLengthIncludingEllipses > 2 && a1->m_pString != 0 && nMaxLengthIncludingEllipses < strlen(a1->m_pString) )
  {
    CUtlString::SetLength(a1, nMaxLengthIncludingEllipses - 3);
    CUtlString::operator+=(a1, "...");
  }
  return a1;
}


// CUtlString::AbsPath  (line 868, @0x0000000002f87660, libserver.so)  // inlines: CUtlString, Get, String, V_MakeAbsolutePath<long unsigned int>
// calls: _V_MakeAbsolutePath, CUtlString::Set, __stack_chk_fail
CUtlString __fastcall CUtlString::AbsPath(
        CUtlString *a1,
        const CUtlString *const this,
        const char *pStartingDir,
        bool bLowercaseName)
{
  char *m_pString; // rsi
  const char *v6; // rax
  char szNew[520]; // [rsp+0h] [rbp-220h] BYREF
  unsigned __int64 v9; // [rsp+208h] [rbp-18h]

  v9 = __readfsqword(0x28u);
  m_pString = this->m_pString;
  v6 = "";
  if ( m_pString != 0 )
    v6 = m_pString;
  _V_MakeAbsolutePath(szNew, 512, v6, pStartingDir, bLowercaseName);
  a1->m_pString = 0;
  CUtlString::Set(a1, szNew);
  return a1;
}


// CUtlString::UnqualifiedFilename  (line 875, @0x0000000002f876f0, libserver.so)  // inlines: CUtlString, Get, String
// calls: V_UnqualifiedFileName, CUtlString::Set
CUtlString __fastcall CUtlString::UnqualifiedFilename(CUtlString *a1, const CUtlString *const this)
{
  char *m_pString; // rdi
  const char *v4; // rax

  m_pString = "";
  if ( this->m_pString != 0 )
    m_pString = this->m_pString;
  v4 = V_UnqualifiedFileName(m_pString);
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  return a1;
}


// CUtlString::DirName  (line 881, @0x0000000002f87730, libserver.so)  // inlines: CUtlString, FreeMemoryBlock, Get, Length, String, V_StripLastDir<int>, V_strlen
// calls: CUtlString::Set, strlen, _V_StripLastDir, V_StripTrailingSlash, _Unwind_Resume
CUtlString __fastcall CUtlString::DirName(CUtlString *a1, const CUtlString *const this)
{
  char *m_pString; // rsi
  CUtlString v4; // r12
  int v5; // eax
  const char *v6; // rdi
  __int64 v7; // rsi
  const char *v8; // rdi

  m_pString = this->m_pString;
  a1->m_pString = 0;
  if ( m_pString == 0 )
    m_pString = "";
  CUtlString::Set(a1, m_pString);
  v4.m_pString = a1->m_pString;
  if ( a1->m_pString != 0 )
  {
    v5 = strlen(a1->m_pString);
    v6 = v4.m_pString;
    v7 = (v5 + 1);
  }
  else
  {
    v7 = 1;
    v6 = "";
  }
  _V_StripLastDir(v6, v7);
  v8 = "";
  if ( a1->m_pString != 0 )
    v8 = a1->m_pString;
  V_StripTrailingSlash(v8);
  return a1;
}


// CUtlString::StripExtension  (line 889, @0x0000000002f877d0, libserver.so)  // inlines: CUtlString, Get, String, V_StripExtension<long unsigned int>
// calls: _V_StripExtension, CUtlString::Set, __stack_chk_fail
// callers: CTier2AppSystemDict::GetConsoleLogFilename
CUtlString __fastcall CUtlString::StripExtension(CUtlString *a1, const CUtlString *const this)
{
  char *m_pString; // rdi
  char szTemp[520]; // [rsp+0h] [rbp-220h] BYREF
  unsigned __int64 v6; // [rsp+208h] [rbp-18h]

  m_pString = "";
  v6 = __readfsqword(0x28u);
  if ( this->m_pString != 0 )
    m_pString = this->m_pString;
  _V_StripExtension(m_pString, szTemp, 512);
  a1->m_pString = 0;
  CUtlString::Set(a1, szTemp);
  return a1;
}


// CUtlString::StripFilename  (line 896, @0x0000000002f87850, libserver.so)  // inlines: CUtlString, FreeMemoryBlock, Get
// calls: V_UnqualifiedFileName, CUtlString::SetDirect, CUtlString::StripTrailingSlash, _Unwind_Resume
CUtlString __fastcall CUtlString::StripFilename(CUtlString *a1, const CUtlString *const this)
{
  char *m_pString; // rdi
  int v5; // eax
  char *v6; // rdx
  char *v7; // rsi
  int v8; // eax

  m_pString = this->m_pString;
  if ( this->m_pString == 0 )
    m_pString = "";
  v5 = V_UnqualifiedFileName(m_pString);
  v6 = this->m_pString;
  a1->m_pString = 0;
  v7 = this->m_pString;
  if ( v6 == 0 )
    v6 = "";
  v8 = v5 - v6;
  if ( v7 == 0 )
    v7 = "";
  CUtlString::SetDirect(a1, v7, v8);
  CUtlString::StripTrailingSlash(a1);
  return a1;
}


// CUtlString::GetBaseFilename  (line 906, @0x0000000002f878e0, libserver.so)  // inlines: CUtlString, Get, String, V_FileBase<long unsigned int>
// calls: _V_FileBase, CUtlString::Set, __stack_chk_fail
// callers: CEntity2SaveRestore::GetSaveGameSpawnGroupName
CUtlString __fastcall CUtlString::GetBaseFilename(CUtlString *a1, const CUtlString *const this)
{
  char *m_pString; // rdi
  char szTemp[520]; // [rsp+0h] [rbp-220h] BYREF
  unsigned __int64 v6; // [rsp+208h] [rbp-18h]

  m_pString = "";
  v6 = __readfsqword(0x28u);
  if ( this->m_pString != 0 )
    m_pString = this->m_pString;
  _V_FileBase(m_pString, szTemp, 512);
  a1->m_pString = 0;
  CUtlString::Set(a1, szTemp);
  return a1;
}


// CUtlString::GetExtension  (line 913, @0x0000000002f87960, libserver.so)  // inlines: CUtlString, Get, String, V_ExtractFileExtension<long unsigned int>
// calls: _V_ExtractFileExtension, CUtlString::Set, __stack_chk_fail
// callers: CTier2AppSystemDict::GetConsoleLogFilename
CUtlString __fastcall CUtlString::GetExtension(CUtlString *a1, const CUtlString *const this)
{
  char *m_pString; // rdi
  char szTemp[520]; // [rsp+0h] [rbp-220h] BYREF
  unsigned __int64 v6; // [rsp+208h] [rbp-18h]

  m_pString = "";
  v6 = __readfsqword(0x28u);
  if ( this->m_pString != 0 )
    m_pString = this->m_pString;
  _V_ExtractFileExtension(m_pString, szTemp, 512);
  a1->m_pString = 0;
  CUtlString::Set(a1, szTemp);
  return a1;
}


// CUtlString::PathJoin  (line 921, @0x0000000002f879e0, libserver.so)  // inlines: CUtlString, V_ComposeFileName<long unsigned int>
// calls: _V_ComposeFileName, CUtlString::Set, __stack_chk_fail
CUtlString __fastcall CUtlString::PathJoin(CUtlString *a1, const char *pStr1, const char *pStr2)
{
  char szPath[520]; // [rsp+0h] [rbp-220h] BYREF
  unsigned __int64 v6; // [rsp+208h] [rbp-18h]

  v6 = __readfsqword(0x28u);
  _V_ComposeFileName(pStr1, pStr2, szPath, 512);
  a1->m_pString = 0;
  CUtlString::Set(a1, szPath);
  return a1;
}


// CUtlString::operator+  (line 928, @0x0000000002f87a50, libserver.so)  // inlines: CUtlString, FreeMemoryBlock, Get
// calls: CUtlString::Set, CUtlString::operator+=, _Unwind_Resume
// callers: CEntity2SaveRestore::DoClearSaveDir, CInstallUGCJob::SetPathnames, CInstallUGCJob::BYieldingRunGCJob, CSchemaFieldIterator::GetFullyQualifiedFieldName
CUtlString __fastcall CUtlString::operator+(CUtlString *a1, const CUtlString *const this, const char *pOther)
{
  char *m_pString; // rax
  const char *v6; // rsi

  a1->m_pString = 0;
  m_pString = this->m_pString;
  v6 = "";
  if ( m_pString != 0 )
    v6 = m_pString;
  CUtlString::Set(a1, v6);
  CUtlString::operator+=(a1, pOther);
  return a1;
}


// CUtlString::operator+  (line 935, @0x0000000002f87ab0, libserver.so)  // inlines: CUtlString, FreeMemoryBlock, Get
// calls: CUtlString::Set, CUtlString::operator+=, _Unwind_Resume
// callers: CRuleScriptBridge::AddCriterionFromScript, CInstallUGCJob::SetPathnames
CUtlString __fastcall CUtlString::operator+(
        CUtlString *a1,
        const CUtlString *const this,
        const CUtlString *const other)
{
  char *m_pString; // rax
  const char *v6; // rsi

  a1->m_pString = 0;
  m_pString = this->m_pString;
  v6 = "";
  if ( m_pString != 0 )
    v6 = m_pString;
  CUtlString::Set(a1, v6);
  CUtlString::operator+=(a1, other);
  return a1;
}


// CUtlString::operator+  (line 942, @0x0000000002f87b10, libserver.so)  // inlines: CUtlString, FreeMemoryBlock, Get
// calls: CUtlString::Set, CUtlString::operator+=, _Unwind_Resume
CUtlString __fastcall CUtlString::operator+(CUtlString *a1, const CUtlString *const this, int rhs)
{
  char *m_pString; // rax
  const char *v6; // rsi

  a1->m_pString = 0;
  m_pString = this->m_pString;
  v6 = "";
  if ( m_pString != 0 )
    v6 = m_pString;
  CUtlString::Set(a1, v6);
  CUtlString::operator+=(a1, rhs);
  return a1;
}


// CUtlString::Append  (line 949, @0x0000000002f87b70, libserver.so)
// calls: CUtlString::operator+=
// callers: CSpeechScriptBridge::AddFollowupFromScript, CMarkupVolumeTagged::Spawn, CTier2AppSystemDict::GetConsoleLogFilename, CPrecacheGameSystem::GenerateFolderContentsList, CPrecacheGameSystem::PrecacheResourceFolder, dota_pick_hero, DOTAPrintPlayerStatus, DOTAPrintGameState, CDOTAGamerules::PrintStatus, CDOTA_Modifier_HallOfFame_Glow::AddCustomTransmiterData, CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::BuildFullAttribute, AppendContext (13 total)
void __fastcall CUtlString::Append(CUtlString *const this, const char *pchAddition)
{
  CUtlString::operator+=(this, pchAddition);
}


// CUtlString::Append  (line 954, @0x0000000002f87b80, libserver.so)  // inlines: GetForModify, Length, V_memcpy, V_strlen, memcpy
// calls: _V_strnlen, strlen, CUtlString::AllocMemoryBlock, memcpy
// callers: CUtlString::Replace, CUtlString::Remove, JsonEscape, GCSDK::CGCReportPrinter::Column_t::Init
void __fastcall CUtlString::Append(CUtlString *const this, const char *pchAddition, int nChars)
{
  int v5; // ebx
  int v6; // eax
  int v7; // r14d
  __int64 v8; // r15
  uint32 v9; // r14d
  char *m_pString; // rdi
  char *v11; // rdi
  char *v12; // rax

  v5 = nChars;
  v6 = _V_strnlen(pchAddition, nChars);
  if ( v6 <= v5 )
    v5 = v6;
  if ( v5 != 0 )
  {
    if ( this->m_pString != 0 )
    {
      v7 = strlen(this->m_pString);
      v8 = v7;
    }
    else
    {
      v8 = 0;
      v7 = 0;
    }
    v9 = v5 + v7;
    CUtlString::AllocMemoryBlock(this, v9);
    m_pString = this->m_pString;
    if ( this->m_pString == 0 )
    {
      v12 = (**g_pMemAlloc)(g_pMemAlloc, 1);
      this->m_pString = v12;
      *v12 = 0;
      m_pString = this->m_pString;
    }
    v11 = &m_pString[v8];
    if ( v5 < 0 )
      __debugbreak();
    memcpy(v11, pchAddition, v5);
    this->m_pString[v9] = 0;
  }
}


// CUtlString::GetEmptyString  (line 975, @0x0000000002f87f20, libserver.so)  // inlines: CUtlString
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// globals: `guard variable for'CUtlString::GetEmptyString(void)::s_emptyString, CUtlString::GetEmptyString(void)::s_emptyString, __dso_handle, CUtlString::~CUtlString()
const CUtlString *__cdecl CUtlString::GetEmptyString()
{
  if ( `guard variable for'CUtlString::GetEmptyString(void)::s_emptyString != 0 )
    return &CUtlString::GetEmptyString(void)::s_emptyString;
  if ( __cxa_guard_acquire(&`guard variable for'CUtlString::GetEmptyString(void)::s_emptyString) != 0 )
  {
    CUtlString::GetEmptyString(void)::s_emptyString.m_pString = 0;
    __cxa_guard_release(&`guard variable for'CUtlString::GetEmptyString(void)::s_emptyString);
    __cxa_atexit(CUtlString::~CUtlString, &CUtlString::GetEmptyString(void)::s_emptyString, &_dso_handle);
  }
  return &CUtlString::GetEmptyString(void)::s_emptyString;
}


// JsonEscape  (line 983, @0x0000000002f87f90, libserver.so)  // inlines: Append, CUtlString, FreeMemoryBlock
// calls: CUtlString::Append, CUtlString::operator+=, _Unwind_Resume, __stack_chk_fail
CUtlString __fastcall JsonEscape(CUtlString *a1, const char *pString)
{
  const char *v3; // rbx
  unsigned __int8 v4; // al
  unsigned __int8 v5; // al
  char v6; // al
  char rhs[16]; // [rsp+0h] [rbp-60h] BYREF
  char v9[16]; // [rsp+10h] [rbp-50h] BYREF
  char utf16[8]; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-38h]

  v3 = pString + 1;
  a1->m_pString = 0;
  v11 = __readfsqword(0x28u);
  while ( 1 )
  {
    v4 = *(v3 - 1);
    if ( v4 > 0x1Fu && v4 != 92 && v4 != 34 )
      goto LABEL_4;
    CUtlString::Append(a1, pString, v3 - 1 - pString);
    v5 = *(v3 - 1);
    if ( v5 == 0 )
      return a1;
    if ( v5 > 0x1Fu )
    {
      strcpy(rhs, "\\");
      CUtlString::operator+=(a1, rhs);
      v6 = *(v3 - 1);
      v9[1] = 0;
      v9[0] = v6;
      CUtlString::operator+=(a1, v9);
    }
    else
    {
      *utf16 = 0x30303030755CLL;
      utf16[4] = (v5 >> 4) + 48;
      *&utf16[5] = ((v5 & 0xF) + 48);
      CUtlString::operator+=(a1, utf16);
    }
    pString = v3;
LABEL_4:
    ++v3;
  }
}


// CUtlStringBuilder::InternalPrepareBuffer  (line 1024, @0x0000000002f88480, libserver.so)  // inlines: Access, IsHeap, Length, Min<long unsigned int>, SetError, memcpy
// calls: memcpy, CUtlStringBuilder::Data::SetError
// callers: CUtlStringBuilder::PrepareBuffer, CUtlStringBuilder::Format, CUtlStringBuilder::AppendFormat, CUtlStringBuilder::SetDirect, CDOTAHLTVDirector::UploadReplayFiles, BRecursiveCheckBundles, CUtlStringBuilder::ReplaceInternal
char *__fastcall CUtlStringBuilder::InternalPrepareBuffer(
        CUtlStringBuilder *const this,
        size_t nChars,
        bool bCopyOld,
        size_t nMinCapacity)
{
  size_t v5; // r12
  char v7; // cl
  __int64 v8; // r12
  size_t v9; // rsi
  size_t v10; // r15
  CUtlStringBuilder *v11; // rax
  CUtlStringBuilder *v12; // rbx
  char *m_pchString; // r12
  char *v15; // rsi

  v5 = nMinCapacity;
  if ( nMinCapacity > 0x7FFFFFFF )
    goto LABEL_19;
  v7 = this->m_data.Heap.sentinel >> 7;
  if ( v5 <= 0x13 )
  {
    v12 = this;
    this->m_data.Heap.sentinel = 19 - nChars;
    if ( v7 != 0 )
    {
      m_pchString = this->m_data.Heap.m_pchString;
      if ( bCopyOld )
        memcpy(this, this->m_data.Heap.m_pchString, nChars);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pchString);
    }
    goto LABEL_12;
  }
  if ( v5 <= nChars )
  {
    v8 = 1000000;
    v9 = (nChars >> 1) + 32;
    if ( v9 <= 0xF423F )
      v8 = v9;
    v5 = nChars + v8;
  }
  if ( this->m_data.Stack.m_szString[19] < 0 )
  {
    v15 = this->m_data.Heap.m_pchString;
    if ( bCopyOld )
    {
      v12 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v15, v5 + 1);
      if ( v12 == 0 )
        goto LABEL_19;
    }
    else
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v15);
      v12 = (**g_pMemAlloc)(g_pMemAlloc, v5 + 1);
      if ( v12 == 0 )
        goto LABEL_19;
    }
LABEL_11:
    v12->m_data.Stack.m_szString[v5] = 0;
    this->m_data.Heap.m_pchString = v12;
    this->m_data.Heap.m_nCapacity = v5;
    this->m_data.Heap.m_nLength = nChars;
    this->m_data.Heap.sentinel = 0x80;
LABEL_12:
    v12->m_data.Stack.m_szString[nChars] = 0;
    return v12;
  }
  v10 = 19 - this->m_data.Heap.sentinel;
  v11 = (**g_pMemAlloc)(g_pMemAlloc, v5 + 1);
  v12 = v11;
  if ( v11 != 0 )
  {
    if ( bCopyOld )
      memcpy(v11, this, v10);
    goto LABEL_11;
  }
LABEL_19:
  CUtlStringBuilder::Data::SetError(&this->m_data, 1);
  return 0;
}


// CUtlStringBuilder::Replace  (line 1131, @0x0000000002f88c90, libserver.so)
// calls: CUtlStringBuilder::ReplaceInternal
// globals: _V_strstr(char const*,char const*)
size_t __fastcall CUtlStringBuilder::Replace(
        CUtlStringBuilder *const this,
        const char *pstrTarget,
        const char *pstrReplacement)
{
  return CUtlStringBuilder::ReplaceInternal(this, pstrTarget, pstrReplacement, _V_strstr);
}


// CUtlStringBuilder::ReplaceFastCaseless  (line 1141, @0x0000000002f88cb0, libserver.so)
// calls: CUtlStringBuilder::ReplaceInternal
size_t __fastcall CUtlStringBuilder::ReplaceFastCaseless(
        CUtlStringBuilder *const this,
        const char *pstrTarget,
        const char *pstrReplacement)
{
  return CUtlStringBuilder::ReplaceInternal(this, pstrTarget, pstrReplacement, &V_stristr_fast);
}


// CUtlStringBuilder::ReplaceInternal  (line 1151, @0x0000000002f88620, libserver.so)  // inlines: Access, AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, Capacity, Clear, Construct, CopyConstruct<char const*>, Element, EnsureCapacity, FreeHeap, GrowMemory, HasError, IsEmpty, IsValid, Length, PrepareBuffer, Purge, RemoveAll, SetBytesLeft, SetError, SetPtr, V_strlen, memcpy, memmove, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: strlen, CUtlMemory<char const*, int>::Grow, memmove, CUtlStringBuilder::InternalPrepareBuffer, CUtlMemory<char const*, int>::Purge, CUtlStringBuilder::Data::SetLength, memcpy, CUtlStringBuilder::Data::SetError, _Unwind_Resume
// callers: CUtlStringBuilder::Replace, CUtlStringBuilder::ReplaceFastCaseless
size_t __fastcall CUtlStringBuilder::ReplaceInternal(
        CUtlStringBuilder *const this,
        const char *pstrTarget,
        const char *pstrReplacement,
        const char *(*pfnCompare)(const char *, const char *))
{
  signed __int8 v6; // al
  size_t v7; // r15
  signed __int8 v8; // al
  __int64 v9; // rdx
  const char *v10; // rax
  const char *v11; // rbx
  const char **v12; // rax
  const char *v13; // rax
  __int64 m_Size; // r12
  int v15; // eax
  signed __int8 v16; // al
  size_t result; // rax
  uint32 m_nLength; // r8d
  signed __int8 v19; // dl
  unsigned __int64 v20; // r12
  const char *v21; // rsi
  char *v22; // rbx
  unsigned __int64 v23; // r12
  const char *v24; // r14
  size_t v25; // r15
  CUtlStringBuilder *v26; // rdi
  signed __int8 v27; // al
  CUtlStringBuilder *v28; // r14
  __int64 v29; // r12
  const char *v30; // rbx
  CUtlStringBuilder *v31; // rcx
  signed __int64 v32; // rax
  char *pstrNew; // [rsp+10h] [rbp-90h]
  unsigned __int64 nNewLength; // [rsp+18h] [rbp-88h]
  size_t nTargetLength; // [rsp+20h] [rbp-80h]
  CUtlStringBuilder *pstrHit; // [rsp+28h] [rbp-78h]
  const char *pstrHita; // [rsp+28h] [rbp-78h]
  CUtlStringBuilder *pstrDestination; // [rsp+30h] [rbp-70h]
  size_t nReplacementLength; // [rsp+38h] [rbp-68h]
  const char *pstrReplacementa; // [rsp+48h] [rbp-58h]
  const char *pstrReplacementb; // [rsp+48h] [rbp-58h]
  CUtlVector<char const*,CUtlMemory<char const*,int> > vecMatches; // [rsp+50h] [rbp-50h] BYREF

  v6 = this->m_data.Stack.m_szString[19];
  pstrReplacementa = pstrReplacement;
  if ( v6 < 0 && (v6 & 0x40) != 0 )
    return 0;
  if ( pstrReplacement != 0 )
  {
    nReplacementLength = strlen(pstrReplacement);
  }
  else
  {
    nReplacementLength = 0;
    pstrReplacementa = "";
  }
  if ( pstrTarget != 0 )
    v7 = strlen(pstrTarget);
  else
    v7 = 0;
  vecMatches.m_Size = 0;
  vecMatches.m_Memory.m_pMemory = 0;
  vecMatches.m_Memory.m_nAllocationCount = 0;
  vecMatches.m_Memory.m_nGrowSize = 0;
  vecMatches.m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 64);
  vecMatches.m_Memory.m_nAllocationCount = 8;
  v8 = this->m_data.Stack.m_szString[19];
  LOBYTE(v9) = v8 == 19;
  if ( v8 < 0 )
  {
    m_nLength = this->m_data.Heap.m_nLength;
    LOBYTE(v9) = m_nLength == 0;
    if ( m_nLength == 0 )
      goto LABEL_27;
  }
  else if ( v8 == 19 )
  {
    goto LABEL_27;
  }
  if ( pstrTarget == 0 || *pstrTarget == 0 )
    goto LABEL_27;
  if ( v8 < 0 )
  {
    pstrHit = 0;
    if ( (v8 & 0x40) == 0 && this->m_data.Heap.m_nCapacity != 0 )
    {
      pstrHit = this->m_data.Heap.m_pchString;
      v10 = (pfnCompare)(this->m_data.Heap.m_pchString, pstrTarget, v9);
      goto LABEL_13;
    }
  }
  else
  {
    pstrHit = this;
  }
  v10 = (pfnCompare)(pstrHit, pstrTarget, v9);
LABEL_13:
  v11 = v10;
  if ( v10 != 0 && *v10 != 0 )
  {
    do
    {
      m_Size = vecMatches.m_Size;
      v15 = vecMatches.m_Size;
      if ( vecMatches.m_Size == vecMatches.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<char const*,int>::Grow(&vecMatches.m_Memory, 1);
        v15 = vecMatches.m_Size;
      }
      vecMatches.m_Size = v15 + 1;
      v12 = &vecMatches.m_Memory.m_pMemory[m_Size];
      if ( v12 != 0 )
        *v12 = v11;
      v13 = pfnCompare(&v11[v7], pstrTarget);
      v11 = v13;
    }
    while ( v13 != 0 && *v13 != 0 );
  }
  result = vecMatches.m_Size;
  if ( vecMatches.m_Size <= 0 )
    goto LABEL_28;
  v19 = this->m_data.Stack.m_szString[19];
  if ( v19 < 0 )
  {
    v20 = this->m_data.Heap.m_nLength;
    nNewLength = v20 + vecMatches.m_Size * (nReplacementLength - v7);
    if ( nNewLength != 0 )
    {
      if ( v20 < nNewLength )
        goto LABEL_40;
      pstrDestination = 0;
      if ( (this->m_data.Heap.sentinel & 0x40) == 0 && this->m_data.Heap.m_nCapacity != 0 )
        pstrDestination = this->m_data.Heap.m_pchString;
LABEL_63:
      pstrHita = v20;
      v28 = pstrDestination;
      v29 = 0;
      v30 = *vecMatches.m_Memory.m_pMemory;
      v31 = pstrDestination;
      while ( 1 )
      {
        v32 = v30 - v28;
        v28 = &v30[v7];
        v31 = (memcpy(v31 + v32, pstrReplacementa, nReplacementLength) + nReplacementLength);
        if ( vecMatches.m_Size <= v29 + 1 )
          break;
        v30 = vecMatches.m_Memory.m_pMemory[++v29];
        if ( v31 != v28 )
          v31 = memmove(v31, v28, v30 - v28);
      }
      if ( v31 != v28 )
        memmove(v31, &v30[v7], pstrDestination + pstrHita - v28);
      v16 = this->m_data.Stack.m_szString[19];
      if ( v16 < 0 )
      {
        if ( nNewLength > this->m_data.Heap.m_nCapacity )
        {
          if ( (v16 & 0x40) != 0 )
            goto LABEL_27;
          goto LABEL_26;
        }
      }
      else if ( nNewLength > 0x13 )
      {
LABEL_26:
        CUtlStringBuilder::InternalPrepareBuffer(this, nNewLength, 0, nNewLength);
        goto LABEL_27;
      }
      CUtlStringBuilder::Data::SetLength(&this->m_data, nNewLength);
      result = vecMatches.m_Size;
      goto LABEL_28;
    }
    if ( (this->m_data.Heap.sentinel & 0x40) != 0 )
      goto LABEL_28;
    if ( this->m_data.Heap.m_pchString != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      result = vecMatches.m_Size;
    }
LABEL_74:
    this->m_data.Heap.m_pchString = 0;
    this->m_data.Heap.sentinel = 19;
    goto LABEL_28;
  }
  v20 = 19 - v19;
  nNewLength = v20 + vecMatches.m_Size * (nReplacementLength - v7);
  if ( nNewLength == 0 )
    goto LABEL_74;
  if ( v20 >= nNewLength )
  {
    pstrDestination = this;
    goto LABEL_63;
  }
LABEL_40:
  if ( v19 < 0 )
  {
    if ( this->m_data.Heap.m_nCapacity >= nNewLength )
      goto LABEL_42;
  }
  else if ( nNewLength <= 0x13 )
  {
LABEL_42:
    pstrNew = CUtlStringBuilder::Data::SetLength(&this->m_data, nNewLength);
LABEL_43:
    v21 = pstrHit + v20;
    pstrNew[nNewLength] = 0;
    v22 = &pstrNew[nNewLength];
    nTargetLength = v7;
    v23 = 8LL * (vecMatches.m_Size - 1);
    while ( 1 )
    {
      v24 = vecMatches.m_Memory.m_pMemory[v23 / 8];
      v23 -= 8LL;
      v25 = v21 - &v24[nTargetLength];
      memmove(&v22[&v24[nTargetLength] - v21], &v24[nTargetLength], v25);
      v22 += -v25 - nReplacementLength;
      memcpy(v22, pstrReplacementa, nReplacementLength);
      if ( v23 == 8 * (vecMatches.m_Size - 1 - (vecMatches.m_Size - 1)) - 8 )
        break;
      v21 = v24;
    }
    v26 = &v22[-(v24 - pstrHit)];
    if ( v26 != pstrHit )
      memmove(v26, pstrHit, v24 - pstrHit);
    if ( pstrNew == pstrHit )
      goto LABEL_27;
    v27 = this->m_data.Stack.m_szString[19];
    if ( v27 < 0 )
    {
      if ( (v27 & 0x40) != 0 )
      {
LABEL_51:
        if ( pstrNew != 0 )
        {
          this->m_data.Heap.sentinel = 0x80;
          this->m_data.Heap.m_pchString = pstrNew;
          this->m_data.Heap.m_nCapacity = nNewLength;
          this->m_data.Heap.m_nLength = nNewLength;
          pstrNew[nNewLength] = 0;
          result = vecMatches.m_Size;
          goto LABEL_28;
        }
LABEL_27:
        result = vecMatches.m_Size;
        goto LABEL_28;
      }
      if ( this->m_data.Heap.m_pchString != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    }
    this->m_data.Heap.m_pchString = 0;
    this->m_data.Heap.sentinel = 19;
    goto LABEL_51;
  }
  pstrNew = (**g_pMemAlloc)(g_pMemAlloc, nNewLength + 1);
  if ( pstrNew != 0 )
    goto LABEL_43;
  CUtlStringBuilder::Data::SetError(&this->m_data, 1);
  result = 0;
LABEL_28:
  if ( (vecMatches.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    pstrReplacementb = result;
    CUtlMemory<char const*,int>::Purge(&vecMatches.m_Memory);
    result = pstrReplacementb;
    if ( (vecMatches.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<char const*,int>::Purge(&vecMatches.m_Memory);
      return pstrReplacementb;
    }
  }
  return result;
}


// CUtlStringBuilder::IndexOf  (line 1284, @0x0000000002f880c0, libserver.so)  // inlines: IndexOf, String, _V_strstr, strstr
// calls: strstr
ptrdiff_t __fastcall CUtlStringBuilder::IndexOf(const CUtlStringBuilder *const this, const char *pstrTarget)
{
  const CUtlStringBuilder *m_pchString; // rbx
  char *v3; // rax

  m_pchString = this;
  if ( this->m_data.Stack.m_szString[19] < 0 )
  {
    m_pchString = "";
    if ( this->m_data.Heap.m_pchString != 0 )
      m_pchString = this->m_data.Heap.m_pchString;
  }
  v3 = strstr(m_pchString, pstrTarget);
  if ( v3 != 0 )
    return v3 - m_pchString;
  else
    return -1;
}


// CUtlStringBuilder::RemoveWhitespace  (line 1294, @0x0000000002f88160, libserver.so)  // inlines: Access, HasError, Length, RemoveWhitespace
// calls: CUtlStringBuilder::Data::SetLength
size_t __fastcall CUtlStringBuilder::RemoveWhitespace(CUtlStringBuilder *const this)
{
  signed __int8 v1; // al
  CUtlStringBuilder *m_pchString; // rsi
  unsigned __int8 v3; // dl
  size_t v4; // rax
  CUtlStringBuilder *i; // r8
  unsigned int v6; // ecx
  int sentinel; // edx
  size_t v8; // rbx
  __int64 m_nLength; // rsi

  v1 = this->m_data.Stack.m_szString[19];
  m_pchString = this;
  if ( v1 < 0 )
  {
    v8 = 0;
    if ( (v1 & 0x40) != 0 )
      return v8;
    m_pchString = this->m_data.Heap.m_pchString;
    if ( this->m_data.Heap.m_pchString == 0 )
      goto LABEL_13;
  }
  v3 = m_pchString->m_data.Stack.m_szString[0];
  v4 = 0;
  for ( i = m_pchString; m_pchString->m_data.Stack.m_szString[0] != 0; v3 = m_pchString->m_data.Stack.m_szString[0] )
  {
    while ( 1 )
    {
      v6 = v3 - 9;
      if ( v6 > 0x17 || ((1LL << v6) & 0x80001F) == 0 )
        break;
      m_pchString = (m_pchString + 1);
      v3 = m_pchString->m_data.Stack.m_szString[0];
      ++v4;
      if ( m_pchString->m_data.Stack.m_szString[0] == 0 )
        goto LABEL_8;
    }
    i->m_data.Stack.m_szString[0] = v3;
    m_pchString = (m_pchString + 1);
    i = (i + 1);
  }
LABEL_8:
  i->m_data.Stack.m_szString[0] = 0;
  sentinel = this->m_data.Heap.sentinel;
  if ( (sentinel & 0x80u) != 0 )
  {
    v8 = v4;
LABEL_13:
    m_nLength = this->m_data.Heap.m_nLength;
    if ( v8 == 0 )
      return v8;
    goto LABEL_14;
  }
  v8 = v4;
  m_nLength = (19 - sentinel);
  if ( v4 == 0 )
    return v8;
LABEL_14:
  CUtlStringBuilder::Data::SetLength(&this->m_data, m_nLength - v8);
  return v8;
}


// CUtlStringBuilder::SetLength  (line 1319, @0x0000000002f88220, libserver.so)
// calls: CUtlStringBuilder::Data::SetLength
bool __fastcall CUtlStringBuilder::SetLength(CUtlStringBuilder *const this, size_t nLen)
{
  return CUtlStringBuilder::Data::SetLength(&this->m_data, nLen) != 0;
}


// CUtlStringBuilder::TakeOwnership  (line 1328, @0x0000000002f883e0, libserver.so)  // inlines: Construct, HasError, SetBytesLeft, TakeOwnership
// calls: CUtlStringBuilder::Data::MoveToHeap
char *__fastcall CUtlStringBuilder::TakeOwnership(CUtlStringBuilder *const this, size_t *pnLen, size_t *pnCapacity)
{
  signed __int8 v6; // al
  size_t m_nLength; // rcx
  size_t m_nCapacity; // rdx
  char *result; // rax

  CUtlStringBuilder::Data::MoveToHeap(&this->m_data);
  v6 = this->m_data.Stack.m_szString[19];
  if ( v6 < 0 && (v6 & 0x40) != 0 )
  {
    m_nCapacity = 0;
    m_nLength = 0;
    result = 0;
  }
  else
  {
    m_nLength = this->m_data.Heap.m_nLength;
    this->m_data.Heap.sentinel = 19;
    m_nCapacity = this->m_data.Heap.m_nCapacity;
    result = this->m_data.Heap.m_pchString;
    this->m_data.Stack.m_szString[0] = 0;
  }
  if ( pnLen != 0 )
    *pnLen = m_nLength;
  if ( pnCapacity != 0 )
    *pnCapacity = m_nCapacity;
  return result;
}


// CUtlStringBuilder::TrimWhitespace  (line 1348, @0x0000000002f88240, libserver.so)  // inlines: Access, HasError
// calls: V_StrTrim, CUtlStringBuilder::Data::SetLength
size_t __fastcall CUtlStringBuilder::TrimWhitespace(CUtlStringBuilder *const this)
{
  int v2; // eax
  size_t v4; // r12

  if ( this->m_data.Stack.m_szString[19] < 0 )
  {
    if ( (this->m_data.Heap.sentinel & 0x40) != 0 )
      return 0;
    v2 = V_StrTrim(this->m_data.Heap.m_pchString);
    if ( v2 == 0 )
      return 0;
  }
  else
  {
    v2 = V_StrTrim(this);
    if ( v2 == 0 )
      return 0;
  }
  v4 = v2;
  CUtlStringBuilder::Data::SetLength(&this->m_data, v2);
  return v4;
}


// CUtlStringBuilder::Data::SetLength  (line 1365, @0x0000000002f88110, libserver.so)
// callers: CUtlStringBuilder::PrepareBuffer, CUtlStringBuilder::Format, CUtlStringBuilder::AppendFormat, CUtlStringBuilder::SetDirect, CDOTAHLTVDirector::UploadReplayFiles, BRecursiveCheckBundles, CUtlStringBuilder::RemoveWhitespace, CUtlStringBuilder::SetLength, CUtlStringBuilder::TrimWhitespace, CUtlStringBuilder::ReplaceInternal
char *__fastcall CUtlStringBuilder::Data::SetLength(CUtlStringBuilder::Data *const this, size_t nChars)
{
  char *result; // rax

  if ( this->Stack.m_szString[19] >= 0 )
  {
    if ( nChars <= 0x13 )
    {
      this->Stack.m_szString[nChars] = 0;
      this->Heap.sentinel = 19 - nChars;
      return this;
    }
    return 0;
  }
  result = this->Heap.m_pchString;
  if ( this->Heap.m_pchString != 0 )
  {
    if ( nChars <= this->Heap.m_nCapacity )
    {
      this->Heap.m_nLength = nChars;
      result[nChars] = 0;
      return this->Heap.m_pchString;
    }
    return 0;
  }
  return result;
}


// CUtlStringBuilder::Data::SetPtr  (line 1387, @0x0000000002f882a0, libserver.so)
void __fastcall CUtlStringBuilder::Data::SetPtr(CUtlStringBuilder::Data *const this, char *pchString, size_t nLength)
{
  this->Heap.m_pchString = pchString;
  this->Heap.m_nCapacity = nLength;
  this->Heap.m_nLength = nLength;
  this->Heap.sentinel = 0x80;
  pchString[nLength] = 0;
}


// CUtlStringBuilder::Data::SetError  (line 1409, @0x0000000002f88440, libserver.so)  // inlines: HasError
// calls: CUtlStringBuilder::Data::MoveToHeap
// callers: CUtlStringBuilder::Format, CUtlStringBuilder::AppendFormat, CUtlStringBuilder::InternalPrepareBuffer, CUtlStringBuilder::ReplaceInternal
void __fastcall CUtlStringBuilder::Data::SetError(CUtlStringBuilder::Data *const this, bool bEnableAssert)
{
  signed __int8 v3; // al

  v3 = this->Stack.m_szString[19];
  if ( v3 >= 0 || (v3 & 0x40) == 0 )
  {
    CUtlStringBuilder::Data::MoveToHeap(this);
    this->Heap.sentinel = -64;
  }
}


// CUtlStringBuilder::Data::ClearError  (line 1429, @0x0000000002f882c0, libserver.so)  // inlines: Clear, Construct, FreeHeap, HasError, SetBytesLeft
void __fastcall CUtlStringBuilder::Data::ClearError(CUtlStringBuilder::Data *const this)
{
  signed __int8 v2; // al
  char *m_pchString; // rsi

  v2 = this->Stack.m_szString[19];
  if ( v2 < 0 && (v2 & 0x40) != 0 )
  {
    m_pchString = this->Heap.m_pchString;
    this->Heap.sentinel = 0x80;
    if ( m_pchString != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    this->Heap.m_pchString = 0;
    this->Heap.sentinel = 19;
  }
}


// CUtlStringBuilder::Data::MoveToHeap  (line 1445, @0x0000000002f88320, libserver.so)  // inlines: Access, Length, memcpy
// calls: memcpy
// callers: CUtlStringBuilder::TakeOwnership, CUtlStringBuilder::Data::SetError
bool __fastcall CUtlStringBuilder::Data::MoveToHeap(CUtlStringBuilder::Data *const this)
{
  int sentinel; // eax
  uint32 v3; // r12d
  void *v4; // rax
  CUtlStringBuilder::Data *m_pchString; // rsi
  char *v6; // rax

  sentinel = this->Heap.sentinel;
  if ( (sentinel & 0x80u) != 0 )
    return 1;
  v3 = 19 - sentinel;
  v4 = (**g_pMemAlloc)(g_pMemAlloc, (19 - sentinel) + 1LL);
  if ( v4 != 0 )
  {
    m_pchString = this;
    if ( this->Stack.m_szString[19] < 0 )
      m_pchString = this->Heap.m_pchString;
    v6 = memcpy(v4, m_pchString, v3);
    v6[v3] = 0;
    this->Heap.m_pchString = v6;
    this->Heap.m_nLength = v3;
    this->Heap.m_nCapacity = v3;
    this->Heap.sentinel = 0x80;
    return 1;
  }
  else
  {
    this->Heap.m_pchString = 0;
    this->Heap.m_nLength = 0;
    this->Heap.m_nCapacity = 0;
    this->Heap.sentinel = -64;
    return 0;
  }
}


