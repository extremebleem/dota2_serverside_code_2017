
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// FileWeaponInfo_t::Precache  (line 18, @0x0000000002134ef0, libserver.so)  // inlines: Length, V_strlen, operator char const*, operator[]
// calls: strlen, CUtlString::Get, CBaseEntity::PrecacheModel, CBaseEntity::PrecacheScriptSound
void __fastcall FileWeaponInfo_t::Precache(FileWeaponInfo_t *const this, const CEntityPrecacheContext *pContext)
{
  char *m_pString; // rdi
  IEntityResourceManifest *m_pManifest; // rbx
  const char *v6; // rax
  char *v7; // rdi
  IEntityResourceManifest *v8; // rbx
  const char *v9; // rax
  __int64 i; // r12
  WeaponSoundData_t *v11; // rbx
  const char *v12; // rdi
  IEntityResourceManifest *v13; // r15
  const char *v14; // rax

  m_pString = this->m_szViewModel.m_pString;
  if ( m_pString != 0 && strlen(m_pString) > 0 )
  {
    m_pManifest = pContext->m_pManifest;
    v6 = CUtlString::Get(&this->m_szViewModel);
    CBaseEntity::PrecacheModel(v6, m_pManifest);
  }
  v7 = this->m_szWorldModel.m_pString;
  if ( v7 != 0 && strlen(v7) > 0 )
  {
    v8 = pContext->m_pManifest;
    v9 = CUtlString::Get(&this->m_szWorldModel);
    CBaseEntity::PrecacheModel(v9, v8);
  }
  for ( i = 0; i < this->m_aShootSounds.m_Size; ++i )
  {
    v11 = &this->m_aShootSounds.m_Memory.m_pMemory[i];
    v12 = v11->m_Sound.m_pString;
    if ( v12 != 0 && strlen(v12) > 0 )
    {
      v13 = pContext->m_pManifest;
      v14 = CUtlString::Get(&v11->m_Sound);
      CBaseEntity::PrecacheScriptSound(v14, v13);
    }
  }
}


// GetFileWeaponInfoFromHandle  (line 48, @0x0000000002138380, libserver.so)  // inlines: CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, FileWeaponInfo_t, GameFileWeaponInfo_t
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: CBaseCombatWeapon::GetViewModel, CBaseCombatWeapon::GetWorldModel, CBaseCombatWeapon::GetAnimPrefix, CBaseCombatWeapon::GetPrintName, CBaseCombatWeapon::GetMaxClip1, CBaseCombatWeapon::GetMaxClip2, CBaseCombatWeapon::GetDefaultClip1, CBaseCombatWeapon::GetDefaultClip2, CBaseCombatWeapon::IsMeleeWeapon, CBaseCombatWeapon::GetWeight, CBaseCombatWeapon::AllowsAutoSwitchTo, CBaseCombatWeapon::AllowsAutoSwitchFrom (33 total)
// globals: `guard variable for'GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo, GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo, __dso_handle, GameFileWeaponInfo_t::~GameFileWeaponInfo_t()
FileWeaponInfo_t *__fastcall GetFileWeaponInfoFromHandle(HWeaponInfo handle)
{
  FileWeaponInfo_t *result; // rax

  result = handle;
  if ( handle == 0 )
  {
    if ( `guard variable for'GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo != 0 )
    {
      return &GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo;
    }
    else
    {
      if ( __cxa_guard_acquire(&`guard variable for'GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo) != 0 )
      {
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_bParsedScript = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_bLoadedHudElements = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_szClassName.m_pString = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_szPrintName.m_pString = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_szViewModel.m_pString = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_szWorldModel.m_pString = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_szAnimationPrefix.m_pString = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_iSlot = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_iPosition = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_iMaxClip1 = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_iMaxClip2 = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_iDefaultClip1 = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_iDefaultClip2 = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_iWeight = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_iRumbleEffect = -1;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_bAutoSwitchTo = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_bAutoSwitchFrom = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_iFlags = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_szAmmo1.m_pString = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_szAmmo2.m_pString = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_szAIAddOn.m_pString = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_bMeleeWeapon = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_bBuiltRightHanded = 1;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_bAllowFlipping = 1;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_iAmmoType = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_iAmmo2Type = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_aTextureData.m_Size = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_aTextureData.m_Memory.m_pMemory = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_aTextureData.m_Memory.m_nAllocationCount = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_aTextureData.m_Memory.m_nGrowSize = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_iconActive = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_iconInactive = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_iconAmmo = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_iconAmmo2 = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_iconCrosshair = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_iconAutoaim = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_iconZoomedCrosshair = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_iconZoomedAutoaim = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_iconSmall = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_aShootSounds.m_Size = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_aShootSounds.m_Memory.m_pMemory = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_aShootSounds.m_Memory.m_nAllocationCount = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo.m_aShootSounds.m_Memory.m_nGrowSize = 0;
        GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo._vptr_FileWeaponInfo_t = &off_3FE29B0;
        __cxa_guard_release(&`guard variable for'GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo);
        __cxa_atexit(
          GameFileWeaponInfo_t::~GameFileWeaponInfo_t,
          &GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo,
          &_dso_handle);
      }
      return &GetFileWeaponInfoFromHandle(long long)::gNullWeaponInfo;
    }
  }
  return result;
}


// ReadEncryptedKVFile  (line 59, @0x0000000002135550, libserver.so)
// calls: KeyValues::operator new, KeyValues::KeyValues, KeyValues::UsesEscapeSequences, V_snprintf, COM_TimestampedLog, KeyValues::LoadFromFile, UTIL_DecodeICE, KeyValues::LoadFromBuffer, DevMsg, KeyValues::deleteThis, __stack_chk_fail, KeyValues::operator delete (13 total)
// strings: "WeaponDatafile", "ReadEncryptedKVFile(%s)", "%s.ctx", "SERVER: Weapon Script \"%s\" loaded.\n"
KeyValues *__fastcall ReadEncryptedKVFile(
        IFileSystem *pFileSystem,
        const char *szFilenameWithoutExtension,
        const unsigned __int8 *pICEKey)
{
  KeyValues *v5; // r13
  IBaseFileSystem *v6; // rsi
  __int64 v7; // r8
  unsigned int v8; // eax
  __int64 v9; // r8
  void *v10; // rsp
  __int64 v12; // [rsp+10h] [rbp-260h]
  __int64 fileSize; // [rsp+18h] [rbp-258h]
  const char *szFilenameWithoutExtensiona; // [rsp+20h] [rbp-250h] BYREF
  const unsigned __int8 *pICEKeya; // [rsp+28h] [rbp-248h]
  char szFullName[520]; // [rsp+30h] [rbp-240h] BYREF
  unsigned __int64 v17; // [rsp+238h] [rbp-38h]

  szFilenameWithoutExtensiona = szFilenameWithoutExtension;
  v17 = __readfsqword(0x28u);
  pICEKeya = pICEKey;
  v5 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v5, "WeaponDatafile");
  KeyValues::UsesEscapeSequences(v5, 1);
  V_snprintf(szFullName, 512, "%s.txt", szFilenameWithoutExtension);
  COM_TimestampedLog("ReadEncryptedKVFile(%s)", szFullName);
  v6 = 0;
  if ( pFileSystem != 0 )
    v6 = &pFileSystem->IBaseFileSystem;
  if ( KeyValues::LoadFromFile(v5, v6, szFullName, "GAME", 0) )
    goto LABEL_7;
  if ( pICEKeya == 0 )
    goto LABEL_8;
  V_snprintf(szFullName, 512, "%s.ctx", szFilenameWithoutExtension);
  v7 = (*(pFileSystem->_vptr_IBaseFileSystem + 2))(&pFileSystem->IBaseFileSystem, szFullName, "rb", "GAME");
  if ( v7 == 0 )
    goto LABEL_8;
  fileSize = v7;
  v8 = (*(pFileSystem->_vptr_IBaseFileSystem + 6))(&pFileSystem->IBaseFileSystem, v7);
  v9 = fileSize;
  LODWORD(fileSize) = v8;
  v12 = v9;
  v10 = alloca(((v8 + 32) & 0xFFFFFFF0) + 16LL);
  (*pFileSystem->_vptr_IBaseFileSystem)(
    &pFileSystem->IBaseFileSystem,
    &szFilenameWithoutExtensiona & 0xFFFFFFFFFFFFFFEFLL,
    v8,
    v9);
  *((&szFilenameWithoutExtensiona & 0xFFFFFFFFFFFFFFEFLL) + fileSize) = 0;
  (*(pFileSystem->_vptr_IBaseFileSystem + 3))(&pFileSystem->IBaseFileSystem, v12);
  UTIL_DecodeICE((&szFilenameWithoutExtensiona & 0xFFFFFFFFFFFFFFEFLL), fileSize, pICEKeya);
  if ( KeyValues::LoadFromBuffer(
         v5,
         szFullName,
         (&szFilenameWithoutExtensiona & 0xFFFFFFFFFFFFFFEFLL),
         &pFileSystem->IBaseFileSystem,
         0,
         0,
         0) )
  {
LABEL_7:
    DevMsg(2, "SERVER: Weapon Script \"%s\" loaded.\n", szFilenameWithoutExtensiona);
    return v5;
  }
  else
  {
LABEL_8:
    KeyValues::deleteThis(v5);
    return 0;
  }
}


