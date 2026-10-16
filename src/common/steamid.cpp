
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_steamid.cpp  (line 0, @0x0000000001a6e750, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_steamid_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CSteamID::CSteamID  (line 21, @0x000000000323d330, libserver.so)
// calls: CSteamID::SetFromString
// callers: CDOTAGCServerSystem::SendConnectionStats, CDOTAGCServerSystem::FireGameEvent
void __fastcall CSteamID::CSteamID(CSteamID *const this, const char *pchSteamID, EUniverse eDefaultUniverse)
{
  CSteamID::SetFromString(this, pchSteamID, eDefaultUniverse);
}


// CSteamID::SetFromString  (line 31, @0x000000000323cf00, libserver.so)  // inlines: CreateBlankAnonLogon, InstancedSet, SetFromUint64, strchr
// calls: V_atoui64, strchr, V_sscanf
// callers: CSteamID::CSteamID
// strings: "%u:%u:%u"
void __fastcall CSteamID::SetFromString(CSteamID *const this, const char *pchSteamID, EUniverse eDefaultUniverse)
{
  char v3; // r13
  const char *v5; // rbx
  char v6; // al
  unsigned __int64 v7; // rax
  char v8; // al
  const char *v9; // rbx
  char *v10; // rax
  char *v11; // rax
  uint v12; // eax
  char v13; // al
  char v14; // al
  char v15; // r14
  uint v16; // ecx
  uint v17; // eax
  char v18; // al
  char v19; // al
  uint v20; // edx
  char v21; // al
  char v22; // al
  char v23; // al
  char v24; // al
  uint nAccountID; // [rsp+4h] [rbp-2Ch] BYREF
  uint nInstance; // [rsp+8h] [rbp-28h] BYREF
  EUniverse eUniverse; // [rsp+Ch] [rbp-24h] BYREF

  v3 = eDefaultUniverse;
  v5 = pchSteamID;
  nAccountID = 0;
  v6 = *pchSteamID;
  nInstance = 1;
  eUniverse = eDefaultUniverse;
  if ( v6 == 91 )
  {
    v6 = pchSteamID[1];
    v5 = pchSteamID + 1;
  }
  if ( v6 == 65 )
  {
    v8 = v5[1];
    if ( v8 == 58 || v8 == 45 )
      v9 = v5 + 2;
    else
      v9 = v5 + 1;
    v10 = strchr(v9, 40);
    if ( v10 != 0 )
      V_sscanf(v10, "(%u)", &nInstance);
    v11 = strchr(v9, 58);
    if ( v11 != 0 )
    {
      if ( *v11 == 0 || strchr(v11 + 1, 58) == 0 )
      {
        V_sscanf(v9, "%u:%u", &eUniverse, &nAccountID);
        v12 = nAccountID;
        if ( nAccountID == 0 )
          goto LABEL_24;
        goto LABEL_43;
      }
      V_sscanf(v9, "%u:%u:%u", &eUniverse, &nAccountID, &nInstance);
    }
    else
    {
      V_sscanf(v9, "%u", &nAccountID);
    }
    v12 = nAccountID;
    if ( nAccountID == 0 )
    {
LABEL_24:
      v13 = eUniverse;
      *&this->m_steamid.m_comp = 0;
      BYTE4(this->m_steamid.m_unAll64Bits) = 0;
      BYTE5(this->m_steamid.m_unAll64Bits) = 0;
      BYTE6(this->m_steamid.m_unAll64Bits) = 64;
      HIBYTE(this->m_steamid.m_unAll64Bits) = v13;
      return;
    }
LABEL_43:
    v20 = nInstance;
    *&this->m_steamid.m_comp = v12;
    v21 = eUniverse;
    BYTE4(this->m_steamid.m_unAll64Bits) = v20;
    HIBYTE(this->m_steamid.m_unAll64Bits) = v21;
    BYTE5(this->m_steamid.m_unAll64Bits) = BYTE1(v20);
    BYTE6(this->m_steamid.m_unAll64Bits) = BYTE2(v20) & 0xF | 0x40;
    return;
  }
  if ( v6 == 71 )
  {
    v14 = v5[1];
    if ( v14 == 58 || v14 == 45 )
    {
      v5 += 2;
      v15 = 3;
    }
    else
    {
      ++v5;
      v15 = 3;
    }
    goto LABEL_28;
  }
  if ( v6 == 67 )
  {
    v18 = v5[1];
    if ( v18 == 58 || v18 == 45 )
    {
      v5 += 2;
      v15 = 6;
    }
    else
    {
      ++v5;
      v15 = 6;
    }
    goto LABEL_28;
  }
  if ( v6 == 103 )
  {
    v22 = v5[1];
    nInstance = 0;
    if ( v22 == 58 || v22 == 45 )
    {
      v5 += 2;
      v15 = 7;
    }
    else
    {
      ++v5;
      v15 = 7;
    }
    goto LABEL_28;
  }
  if ( v6 == 99 )
  {
    v19 = v5[1];
    nInstance = 0x80000;
    if ( v19 == 58 )
      goto LABEL_37;
  }
  else if ( v6 == 76 )
  {
    v19 = v5[1];
    nInstance = 0x40000;
    if ( v19 == 58 )
      goto LABEL_37;
  }
  else
  {
    if ( v6 != 84 )
    {
      if ( v6 == 85 )
      {
        v24 = v5[1];
        if ( v24 == 58 || v24 == 45 )
        {
          v5 += 2;
          v15 = 1;
        }
        else
        {
          ++v5;
          v15 = 1;
        }
      }
      else if ( v6 == 105 )
      {
        v23 = v5[1];
        if ( v23 == 58 || v23 == 45 )
        {
          v5 += 2;
          v15 = 0;
        }
        else
        {
          ++v5;
          v15 = 0;
        }
      }
      else
      {
        v7 = V_atoui64(v5, pchSteamID);
        if ( v7 > 0xFFFFFFFF )
        {
          this->m_steamid.m_unAll64Bits = v7;
          return;
        }
        v15 = 1;
      }
      goto LABEL_28;
    }
    v19 = v5[1];
    nInstance = 0;
    if ( v19 == 58 )
      goto LABEL_37;
  }
  if ( v19 != 45 )
  {
    ++v5;
    v15 = 8;
    goto LABEL_28;
  }
LABEL_37:
  v5 += 2;
  v15 = 8;
LABEL_28:
  if ( strchr(v5, 58) != 0 )
  {
    V_sscanf(&v5[*v5 == 91], "%u:%u", &eUniverse, &nAccountID);
    if ( eUniverse != EUniverse::k_EUniverseInvalid )
      v3 = eUniverse;
  }
  else
  {
    V_sscanf(v5, "%u", &nAccountID);
    v3 = eUniverse;
  }
  v16 = nInstance;
  HIBYTE(this->m_steamid.m_unAll64Bits) = v3;
  v17 = nAccountID;
  BYTE4(this->m_steamid.m_unAll64Bits) = v16;
  *&this->m_steamid.m_comp = v17;
  BYTE5(this->m_steamid.m_unAll64Bits) = BYTE1(v16);
  BYTE6(this->m_steamid.m_unAll64Bits) = BYTE2(v16) & 0xF | (16 * v15);
}


// CSteamID::Render  (line 215, @0x000000000323d340, libserver.so)
// calls: V_snprintf
// callers: CGCClientJobGetHLTVChatBanStatus::BYieldingRunJob, CDOTAGamerules::NotifyLeaverStatus, CDOTAGamerules::OnLobbyUpdated, CGCClientJobSetLeaverDetected::BYieldingRunJob, CDOTA_PlayerResource::SetPlayerName, CDOTA_PlayerResource::SetSelectedHeroID, CDOTA_PlayerResource::SetSuggestedHeroSelection, CDOTA_PlayerResource::SetLeaverStatus, CDOTA_PlayerResource::SetConnectionState, CDOTA_PlayerResource::OnFullyJoinedServer, CDOTA_PlayerResource::SetRank, CDOTA_PlayerResource::PrintRanks (33 total)
// strings: "[i:%u:%u]", "[L:%u:%u]", "[A:%u:%u:%u]", "[U:%u:%u:%u]", "[G:%u:%u]", "[I:%u:%u]" (14 total)
// globals: CSteamID::Render(void)::nBuf, CSteamID::Render(void)::rgchBuf
const char *__fastcall CSteamID::Render(const CSteamID *const this)
{
  const char *v1; // rbx
  char v2; // dl
  int v3; // ecx
  int v4; // r8d
  int m_unAll64Bits_high; // ecx
  int m_comp; // r8d
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d

  v1 = &CSteamID::Render(void)const::rgchBuf[37 * CSteamID::Render(void)const::nBuf];
  CSteamID::Render(void)const::nBuf = (CSteamID::Render(void)const::nBuf + 1) % 4;
  v2 = BYTE6(this->m_steamid.m_unAll64Bits) & 0xF0;
  switch ( v2 )
  {
    case 0x40:
      V_snprintf(
        v1,
        37,
        "[A:%u:%u:%u]",
        HIBYTE(this->m_steamid.m_unAll64Bits),
        *&this->m_steamid.m_comp,
        BYTE4(this->m_steamid.m_unAll64Bits)
      | (BYTE5(this->m_steamid.m_unAll64Bits) << 8)
      | ((BYTE6(this->m_steamid.m_unAll64Bits) & 0xF) << 16));
      break;
    case 0x30:
      V_snprintf(v1, 37, "[G:%u:%u]", HIBYTE(this->m_steamid.m_unAll64Bits), *&this->m_steamid.m_comp);
      break;
    case 0x20:
      V_snprintf(
        v1,
        37,
        "[M:%u:%u:%u]",
        HIBYTE(this->m_steamid.m_unAll64Bits),
        *&this->m_steamid.m_comp,
        BYTE4(this->m_steamid.m_unAll64Bits)
      | (BYTE5(this->m_steamid.m_unAll64Bits) << 8)
      | ((BYTE6(this->m_steamid.m_unAll64Bits) & 0xF) << 16));
      break;
    case 0x50:
      V_snprintf(v1, 37, "[P:%u:%u]", HIBYTE(this->m_steamid.m_unAll64Bits), *&this->m_steamid.m_comp);
      break;
    case 0x60:
      V_snprintf(v1, 37, "[C:%u:%u]", HIBYTE(this->m_steamid.m_unAll64Bits), *&this->m_steamid.m_comp);
      break;
    case 0x70:
      V_snprintf(v1, 37, "[g:%u:%u]", HIBYTE(this->m_steamid.m_unAll64Bits), *&this->m_steamid.m_comp);
      break;
    case 0x80:
      m_unAll64Bits_high = HIBYTE(this->m_steamid.m_unAll64Bits);
      m_comp = this->m_steamid.m_comp;
      if ( (((BYTE6(this->m_steamid.m_unAll64Bits) & 0xF) << 16) & 0x80000) != 0 )
      {
        V_snprintf(v1, 37, "[c:%u:%u]", m_unAll64Bits_high, m_comp);
      }
      else if ( (((BYTE6(this->m_steamid.m_unAll64Bits) & 0xF) << 16) & 0x40000) != 0 )
      {
        V_snprintf(v1, 37, "[L:%u:%u]", m_unAll64Bits_high, m_comp);
      }
      else
      {
        V_snprintf(v1, 37, "[T:%u:%u]", m_unAll64Bits_high, m_comp);
      }
      break;
    default:
      if ( v2 != 0 )
      {
        if ( v2 == 16 )
        {
          v8 = HIBYTE(this->m_steamid.m_unAll64Bits);
          v9 = this->m_steamid.m_comp;
          v10 = WORD2(this->m_steamid.m_unAll64Bits) | ((BYTE6(this->m_steamid.m_unAll64Bits) & 0xF) << 16);
          if ( v10 == 1 )
            V_snprintf(v1, 37, "[U:%u:%u]", v8, v9);
          else
            V_snprintf(v1, 37, "[U:%u:%u:%u]", v8, v9, v10);
        }
        else
        {
          v3 = HIBYTE(this->m_steamid.m_unAll64Bits);
          v4 = this->m_steamid.m_comp;
          if ( v2 == -96 )
            V_snprintf(v1, 37, "[a:%u:%u]", v3, v4);
          else
            V_snprintf(v1, 37, "[i:%u:%u]", v3, v4);
        }
      }
      else
      {
        V_snprintf(v1, 37, "[I:%u:%u]", HIBYTE(this->m_steamid.m_unAll64Bits), *&this->m_steamid.m_comp);
      }
      break;
  }
  return v1;
}


// CSteamID::Render  (line 298, @0x000000000323d690, libserver.so)  // inlines: CSteamID, SetFromUint64
// calls: CSteamID::Render
const char *__fastcall CSteamID::Render(uint64 ulSteamID)
{
  CSteamID steamID; // [rsp+0h] [rbp-10h] BYREF

  steamID.m_steamid.m_comp = ulSteamID;
  return CSteamID::Render(&steamID);
}


// CSteamID::BValidExternalSteamID  (line 309, @0x000000000323d6b0, libserver.so)
bool __fastcall CSteamID::BValidExternalSteamID(const CSteamID *const this)
{
  return (BYTE6(this->m_steamid.m_unAll64Bits) & 0xF0) != 0x50
      && ((BYTE6(this->m_steamid.m_unAll64Bits) & 0xD0) == 0x40
       || (BYTE6(this->m_steamid.m_unAll64Bits) & 0xF0) == 0xA0
       || this->m_steamid.m_comp != 0
       || (WORD2(this->m_steamid.m_unAll64Bits) | ((BYTE6(this->m_steamid.m_unAll64Bits) & 0xF) << 16)) != 0);
}


