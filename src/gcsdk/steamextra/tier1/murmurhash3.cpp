
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_murmurhash3.cpp  (line 0, @0x0000000001a6e780, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_murmurhash3_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// MurmurHash3_32  (line 16, @0x000000000323d710, libserver.so)
// callers: CDOTAItemSchema::GetCustomGameTicketList, CDOTAItemSchema::GetAssociatedLeagueForItemDef, CDOTAItemSchema::BInitCustomGameTickets, CDOTAItemSchema::BuildAssociatedLeagueInfo, CEconItemSchema::GetItemDefinitionMutable, CEconItemSchema::GetItemDefinitionBySymbol, CEconItemSchema::ItemTesting_DiscardTestItemDefinition, CUtlHashMapLarge<item_definition_index_t, CEconItemDefinition*, CUtlHashMapLargeDefEquals<item_definition_index_t>, MurmurHash3Functor<item_definition_index_t> >::InsertInternal, CUtlHashMapLarge<CEconSchemaSymbol, CEconItemDefinition*, CUtlHashMapLargeDefEquals<CEconSchemaSymbol>, MurmurHash3Functor<CEconSchemaSymbol> >::InsertInternal, CEconItemSchema::BInitItems, CEconItemSchema::ItemTesting_CreateTestItemDefinitionNoClone, CUtlHashMapLarge<long long unsigned int, GCSDK::CJob*, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::Find (28 total)
uint32 __fastcall MurmurHash3_32(const void *key, size_t len, uint32 seed, bool bCaselessStringVariant)
{
  unsigned __int8 *v4; // r8
  unsigned int v5; // ecx
  __int64 v6; // rdi
  int v7; // eax
  bool v8; // zf
  size_t v9; // rax
  unsigned int v10; // edx
  int v12; // edi
  int v13; // eax

  v4 = key + 4 * (len >> 2);
  v5 = bCaselessStringVariant ? 0xDFDFDFDF : -1;
  v6 = -(len >> 2);
  if ( len >> 2 != 0 )
  {
    do
    {
      v7 = __ROR4__(seed ^ (461845907 * __ROR4__(-862048943 * (v5 & *&v4[4 * v6]), 17)), 19);
      v8 = v6++ == -1;
      seed = 5 * v7 - 430675100;
    }
    while ( !v8 );
  }
  v9 = len & 3;
  switch ( v9 )
  {
    case 2uLL:
      v13 = 0;
      goto LABEL_10;
    case 3uLL:
      v13 = v4[2] << 16;
LABEL_10:
      v12 = v13 ^ (v4[1] << 8);
      goto LABEL_8;
    case 1uLL:
      v12 = 0;
LABEL_8:
      seed ^= 461845907 * __ROR4__(-862048943 * (v5 & (v12 ^ *v4)), 17);
      break;
    default:
      break;
  }
  v10 = -2048144789 * (len ^ seed ^ ((len ^ seed) >> 16));
  return (-1028477387 * (v10 ^ (v10 >> 13))) ^ ((-1028477387 * (v10 ^ (v10 >> 13))) >> 16);
}


