
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CRC32_Init  (line 18, @0x0000000002f6d4c0, libserver.so)
// callers: SeedFileLineHash, UTIL_GetAchievementEventMask, CBaseGameStats_Driver::GameInit, ParticleAttachementMissingWarnOnce, ParticleSytemMissingWarnOnce, CaptionLookup_t::SetHash, CDOTAItemDefinition::GetStoreItemTypeNameID, CEconItemSchema::CalculateKeyValuesVersion, KeyValues::WriteAsBinary, KeyValues::IsValidBinaryKVBuffer, KeyValues::WriteAsBinaryFiltered, VPhysXAggregateData_t::GetChecksum (13 total)
void __fastcall CRC32_Init(CRC32_t *pulCRC)
{
  *pulCRC = -1;
}


// CRC32_Final  (line 23, @0x0000000002f6d4d0, libserver.so)
// callers: SeedFileLineHash, UTIL_GetAchievementEventMask, CBaseGameStats_Driver::GameInit, ParticleAttachementMissingWarnOnce, ParticleSytemMissingWarnOnce, CaptionLookup_t::SetHash, CDOTAItemDefinition::GetStoreItemTypeNameID, CEconItemSchema::CalculateKeyValuesVersion, KeyValues::WriteAsBinary, KeyValues::IsValidBinaryKVBuffer, KeyValues::WriteAsBinaryFiltered, VPhysXAggregateData_t::GetChecksum (13 total)
void __fastcall CRC32_Final(CRC32_t *pulCRC)
{
  *pulCRC = ~*pulCRC;
}


// CRC32_GetTableEntry  (line 28, @0x0000000002f6d4e0, libserver.so)
CRC32_t __fastcall CRC32_GetTableEntry(unsigned int slot)
{
  return g_Tier1_CRC32Table[slot];
}


// CRC32_ProcessBuffer  (line 33, @0x0000000002f6d500, libserver.so)
// callers: SeedFileLineHash, UTIL_GetAchievementEventMask, CBaseGameStats_Driver::GameInit, ParticleAttachementMissingWarnOnce, ParticleSytemMissingWarnOnce, CaptionLookup_t::SetHash, CDOTAItemDefinition::GetStoreItemTypeNameID, CalculateKeyValuesCRCRecursive, KeyValues::WriteAsBinary, KeyValues::IsValidBinaryKVBuffer, KeyValues::WriteAsBinaryFiltered, CRC32_Process<VPhysics2ShapeDef_t> (19 total)
// globals: jpt_2F6D51F
void __fastcall CRC32_ProcessBuffer(CRC32_t *pulCRC, const void *pBuffer, int nBuffer)
{
  CRC32_t v3; // eax
  _BYTE *v4; // rdx
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned __int8 v8; // dl
  unsigned __int8 v9; // dl
  int v10; // ecx
  int v11; // edx
  char *v12; // r9
  int v13; // r8d
  _DWORD *v14; // rsi
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned __int8 v23; // r8

  v3 = *pulCRC;
  while ( 1 )
  {
    switch ( nBuffer )
    {
      case 0:
        goto LABEL_4;
      case 1:
        goto LABEL_3;
      case 2:
        goto LABEL_10;
      case 3:
        v9 = *pBuffer ^ v3;
        pBuffer = pBuffer + 1;
        v3 = g_Tier1_CRC32Table[v9] ^ (v3 >> 8);
LABEL_10:
        pBuffer = pBuffer + 1;
        v3 = g_Tier1_CRC32Table[(*(pBuffer - 1) ^ v3)] ^ (v3 >> 8);
LABEL_3:
        v3 = g_Tier1_CRC32Table[(*pBuffer ^ v3)] ^ (v3 >> 8);
LABEL_4:
        *pulCRC = v3;
        return;
      case 4:
        v4 = pBuffer;
        goto LABEL_6;
      case 5:
        goto LABEL_7;
      case 6:
        goto LABEL_8;
      case 7:
        v8 = *pBuffer ^ v3;
        pBuffer = pBuffer + 1;
        v3 = g_Tier1_CRC32Table[v8] ^ (v3 >> 8);
LABEL_8:
        pBuffer = pBuffer + 1;
        v3 = g_Tier1_CRC32Table[(*(pBuffer - 1) ^ v3)] ^ (v3 >> 8);
LABEL_7:
        v4 = pBuffer + 1;
        v3 = g_Tier1_CRC32Table[(*pBuffer ^ v3)] ^ (v3 >> 8);
LABEL_6:
        v5 = g_Tier1_CRC32Table[(*v4 ^ v3)] ^ ((*v4 ^ v3) >> 8);
        v6 = g_Tier1_CRC32Table[v5] ^ (v5 >> 8);
        v7 = g_Tier1_CRC32Table[v6] ^ (v6 >> 8);
        *pulCRC = g_Tier1_CRC32Table[v7] ^ (v7 >> 8);
        return;
      default:
        v10 = pBuffer & 3;
        v11 = nBuffer - v10;
        if ( v10 == 2 )
          goto LABEL_22;
        if ( v10 == 3 )
        {
          v23 = *pBuffer ^ v3;
          pBuffer = pBuffer + 1;
          v3 = g_Tier1_CRC32Table[v23] ^ (v3 >> 8);
LABEL_22:
          pBuffer = pBuffer + 1;
          v3 = g_Tier1_CRC32Table[(*(pBuffer - 1) ^ v3)] ^ (v3 >> 8);
        }
        else
        {
          v12 = pBuffer;
          if ( v10 != 1 )
            goto LABEL_15;
        }
        v12 = pBuffer + 1;
        v3 = g_Tier1_CRC32Table[(*pBuffer ^ v3)] ^ (v3 >> 8);
LABEL_15:
        if ( v11 >> 3 != 0 )
        {
          v13 = (v11 >> 3) - 1;
          v14 = v12;
          do
          {
            v15 = *v14 ^ v3;
            --v13;
            v14 += 2;
            v16 = g_Tier1_CRC32Table[v15] ^ (v15 >> 8);
            v17 = g_Tier1_CRC32Table[v16] ^ (v16 >> 8);
            v18 = g_Tier1_CRC32Table[v17] ^ (v17 >> 8);
            v19 = g_Tier1_CRC32Table[v18] ^ *(v14 - 1) ^ (v18 >> 8);
            v20 = g_Tier1_CRC32Table[v19] ^ (v19 >> 8);
            v21 = g_Tier1_CRC32Table[v20] ^ (v20 >> 8);
            v22 = g_Tier1_CRC32Table[v21] ^ (v21 >> 8);
            v3 = g_Tier1_CRC32Table[v22] ^ (v22 >> 8);
          }
          while ( v13 != -1 );
          pBuffer = &v12[8 * ((v11 >> 3) - 1) + 8];
        }
        else
        {
          pBuffer = v12;
        }
        nBuffer = v11 & 7;
        break;
    }
  }
}


// CRC64_Init  (line 121, @0x0000000002f6d750, libserver.so)
// callers: GetAddonCRC, CInstallUGCJob::BYieldingRunGCJob
void __fastcall CRC64_Init(CRC64_t *pCRC)
{
  *pCRC = -1;
}


// CRC64_ProcessBuffer  (line 126, @0x0000000002f6d760, libserver.so)
// callers: GetAddonCRC, CInstallUGCJob::BYieldingRunGCJob
void __fastcall CRC64_ProcessBuffer(CRC64_t *pCRC, const void *p, int len)
{
  CRC64_t v3; // rax
  char *v4; // r8

  v3 = *pCRC;
  if ( len > 0 )
  {
    v4 = p + (len - 1) + 1;
    do
    {
      p = p + 1;
      v3 = g_Tier1_CRC64Table[(*(p - 1) ^ v3)] ^ (v3 >> 8);
    }
    while ( p != v4 );
  }
  *pCRC = v3;
}


// CRC64_Final  (line 142, @0x0000000002f6d7a0, libserver.so)
// callers: GetAddonCRC, CInstallUGCJob::BYieldingRunGCJob
void __fastcall CRC64_Final(CRC64_t *pCRC)
{
  *pCRC = ~*pCRC;
}


