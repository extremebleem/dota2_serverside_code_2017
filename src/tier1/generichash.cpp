
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_generichash.cpp  (line 0, @0x0000000001a67090, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_generichash_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// HashString  (line 313, @0x0000000002f71dd0, libserver.so)
// calls: MurmurHash2
// callers: CBodyComponent::GetEntComponentInfo, CBodyComponentSkeletonInstance::GetEntComponentInfo, CBodyComponentPoint::GetEntComponentInfo, CHitboxComponent::GetEntComponentInfo, CLightComponent::GetEntComponentInfo, CRenderComponent::GetEntComponentInfo, CBodyComponentBaseAnimating::GetEntComponentInfo, CBodyComponentBaseAnimatingOverlay::GetEntComponentInfo, CBodyComponentBaseModelEntity::GetEntComponentInfo, CDamageComponent::GetEntComponentInfo, CHealthComponent::GetEntComponentInfo, CUtlSymbolTableLargeBase<CNonThreadsafeTree<false>, false, 2048ul>::Find (26 total)
unsigned int __fastcall HashString(const char *pszKey)
{
  const char *v1; // rsi
  int v2; // esi

  if ( *pszKey != 0 )
  {
    v1 = pszKey;
    do
      ++v1;
    while ( *v1 != 0 );
    v2 = v1 - pszKey;
  }
  else
  {
    v2 = 0;
  }
  return MurmurHash2(pszKey, v2, 0x3501A674u);
}


// HashStringFastCaselessConventional  (line 328, @0x0000000002f71cb0, libserver.so)  // inlines: FastASCIIToLower<char>
// callers: PrecacheInstancedScene
unsigned int __fastcall HashStringFastCaselessConventional(const char *pszKey)
{
  unsigned __int8 v1; // dl
  unsigned int result; // eax

  v1 = *pszKey;
  for ( result = -1431655766; *pszKey != 0; v1 = *pszKey )
  {
    if ( (v1 - 65) <= 0x19u )
      v1 += 32;
    ++pszKey;
    result += 32 * result + v1;
  }
  return result;
}


// HashStringConventional  (line 339, @0x0000000002f71cf0, libserver.so)
// callers: ResponseCopyString, CResponseSystem::CopyRuleFrom, CResponseFileParser::ParseOneResponse, CResponseFileParser::LoadFromBuffer, CResponseFileParser::BuildDispatchTables, CResponseFileParser::ParseResponse, CResponseFileParser::ParseOneCriterion, CResponseFileParser::ParseRule
unsigned int __fastcall HashStringConventional(const char *pszKey)
{
  int v1; // edx
  unsigned int result; // eax

  v1 = *pszKey;
  for ( result = -1431655766; v1 != 0; v1 = *pszKey )
  {
    ++pszKey;
    result += 32 * result + v1;
  }
  return result;
}


// MurmurHash2  (line 356, @0x0000000002f71d20, libserver.so)
// callers: ParticleSystemQuery_GetQueryForWorld, CParticleSystemQueryGameSystem::PostSpawnGroupUnload, CParticleSystemQueryGameSystem::PreSpawnGroupLoad, CDOTA_BaseNPC::SetAutoStyleCriteria, CDOTAFogOfWarSystem::HasFoW, CDOTAFogOfWarSystem::ActiveSpawnGroupChanged, CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId, CDOTAFogOfWarSystem::PostSpawnGroupUnload, CDOTAFogOfWarSystem::PreSpawnGroupLoad, CDOTA_OGS_VPROF::OnGameStart, CEconItemView::ComputeAutoStyle, CGameSaveRestoreInfo::GetEntityIndex (29 total)
uint32 __fastcall MurmurHash2(const void *key, int len, uint32 seed)
{
  uint32 v3; // edx
  unsigned int v4; // esi
  unsigned __int8 *v5; // r8
  int v6; // eax

  v3 = len ^ seed;
  if ( len <= 3 )
  {
    v5 = key;
  }
  else
  {
    v4 = len - 4;
    v5 = key + 4 * (v4 >> 2) + 4;
    do
    {
      v6 = *key;
      key = key + 4;
      v3 = (1540483477 * v3) ^ (1540483477 * ((1540483477 * v6) ^ ((1540483477 * v6) >> 24)));
    }
    while ( key != v5 );
    len = v4 - 4 * (v4 >> 2);
  }
  switch ( len )
  {
    case 2:
      goto LABEL_10;
    case 3:
      v3 ^= v5[2] << 16;
LABEL_10:
      v3 ^= v5[1] << 8;
      break;
    case 1:
      break;
    default:
      return (1540483477 * (v3 ^ (v3 >> 13))) ^ ((1540483477 * (v3 ^ (v3 >> 13))) >> 15);
  }
  v3 = 1540483477 * (v3 ^ *v5);
  return (1540483477 * (v3 ^ (v3 >> 13))) ^ ((1540483477 * (v3 ^ (v3 >> 13))) >> 15);
}


// MurmurHash2LowerCase  (line 407, @0x0000000002f71e00, libserver.so)  // inlines: FastASCIIToLower<char>
// calls: strlen, MurmurHash2, __stack_chk_fail
// callers: CBodyComponent::SetBodyGroup, CBodyComponent::GetEntComponentInfo, CBodyComponentSkeletonInstance::GetEntComponentInfo, CBodyComponentPoint::GetEntComponentInfo, CHitboxSystem::TestHitboxes, CHitboxComponent::GetEntComponentInfo, CLightComponent::GetEntComponentInfo, CRenderComponent::GetEntComponentInfo, CBaseEntity::Script_SetContextThink, CDecalGameSystem::OnToggleVisualizer, CLightQueryGameSystem::OnPostSimulate, CEntityDebugGameSystem::PreRender (160 total)
uint32 __fastcall MurmurHash2LowerCase(const char *pString, uint32 nSeed)
{
  int v4; // eax
  __int64 v5; // r8
  void *v6; // rsp
  char *i; // rdi
  char v8; // cl
  __int64 v10; // [rsp+10h] [rbp-10h] BYREF

  v4 = strlen(pString);
  v5 = 0;
  v6 = alloca(((v4 + 32) & 0xFFFFFFF0) + 16LL);
  for ( i = (&v10 & 0xFFFFFFFFFFFFFFEFLL); v4 > v5; i[v5 - 1] = v8 )
  {
    v8 = pString[v5];
    if ( (v8 - 65) <= 0x19u )
      v8 += 32;
    ++v5;
  }
  return MurmurHash2(i, v4, nSeed);
}


// MurmurHash2LowerCase  (line 418, @0x0000000002f71ea0, libserver.so)  // inlines: FastASCIIToLower<char>
// calls: MurmurHash2, __stack_chk_fail
// callers: CUtlTokenReference::MakeStringToken
uint32 __fastcall MurmurHash2LowerCase(const char *pString, int nLength, uint32 nSeed)
{
  __int64 v3; // rcx
  void *i; // rsp
  char v5; // al
  __int64 savedregs; // [rsp+10h] [rbp+0h] BYREF

  v3 = 0;
  for ( i = alloca(((nLength + 32) & 0xFFFFFFF0) + 16LL); nLength > v3; *(v3 + (&savedregs & 0xFFFFFFFFFFFFFFEFLL) - 1) = v5 )
  {
    v5 = pString[v3];
    if ( (v5 - 65) <= 0x19u )
      v5 += 32;
    ++v3;
  }
  return MurmurHash2((&savedregs & 0xFFFFFFFFFFFFFFEFLL), nLength, nSeed);
}


// MurmurHash64  (line 433, @0x0000000002f71f30, libserver.so)
// callers: ComputeResourceIdFromResourceName
uint64 __fastcall MurmurHash64(const void *key, int len, uint32 seed)
{
  uint32 v3; // edx
  unsigned int v4; // esi
  int *v5; // rax
  unsigned int v6; // ecx
  __int64 v7; // rbx
  int v8; // r9d
  int v9; // r8d
  unsigned int v10; // edx

  v3 = len ^ seed;
  if ( len <= 7 )
  {
    v6 = 0;
  }
  else
  {
    v4 = len - 8;
    v5 = key;
    v6 = 0;
    v7 = v4 >> 3;
    do
    {
      v8 = *v5;
      v5 += 2;
      v3 = (1540483477 * v3) ^ (1540483477 * ((1540483477 * v8) ^ ((1540483477 * v8) >> 24)));
      v6 = (1540483477 * v6) ^ (1540483477 * ((1540483477 * *(v5 - 1)) ^ ((1540483477 * *(v5 - 1)) >> 24)));
    }
    while ( v5 != (key + 8 * v7 + 8) );
    key = key + 8 * v7 + 8;
    len = v4 - 8 * (v4 >> 3);
  }
  if ( len > 3 )
  {
    v9 = *key;
    len -= 4;
    key = key + 4;
    v3 = (1540483477 * v3) ^ (1540483477 * ((1540483477 * v9) ^ ((1540483477 * v9) >> 24)));
  }
  switch ( len )
  {
    case 2:
      goto LABEL_12;
    case 3:
      v6 ^= *(key + 2) << 16;
LABEL_12:
      v6 ^= *(key + 1) << 8;
      break;
    case 1:
      break;
    default:
LABEL_10:
      v10 = 1540483477 * (v3 ^ (v6 >> 18));
      return ((1540483477 * (v10 ^ ((1540483477 * (v6 ^ (v10 >> 22))) >> 17))) << 32)
           | (1540483477
            * ((1540483477 * (v6 ^ (v10 >> 22)))
             ^ ((1540483477 * (v10 ^ ((1540483477 * (v6 ^ (v10 >> 22))) >> 17))) >> 19)));
  }
  v6 = 1540483477 * (v6 ^ *key);
  goto LABEL_10;
}


