// Reconstructed from DWARF by pahole; not original source.

// src/game/server/ai_hull.cpp:11
struct ai_hull_t {
	int hullBit;  // +0x0

	const char * name;  // +0x8
	uint64 nAITraceMask;  // +0x40
	ai_hull_t(int, const char *, const Vector &, const Vector &, const Vector &, const Vector &, uint64);

	// sizeof = 72
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// NAI_Hull::Mins  (line 93, @0x000000000214aba0, libserver.so)
// callers: CGamePlayerZone::InputCountPlayersInZone
// globals: s_AI_Hulls
const Vector *__fastcall NAI_Hull::Mins(int id)
{
  return &s_AI_Hulls[id]->mins;
}


// NAI_Hull::Maxs  (line 100, @0x000000000214abc0, libserver.so)
// callers: CGamePlayerZone::InputCountPlayersInZone
// globals: s_AI_Hulls
const Vector *__fastcall NAI_Hull::Maxs(int id)
{
  return &s_AI_Hulls[id]->maxs;
}


// NAI_Hull::SmallMins  (line 107, @0x000000000214abe0, libserver.so)
// globals: s_AI_Hulls
const Vector *__fastcall NAI_Hull::SmallMins(int id)
{
  return &s_AI_Hulls[id]->smallMins;
}


// NAI_Hull::SmallMaxs  (line 114, @0x000000000214ac00, libserver.so)
// globals: s_AI_Hulls
const Vector *__fastcall NAI_Hull::SmallMaxs(int id)
{
  return &s_AI_Hulls[id]->smallMaxs;
}


// NAI_Hull::Length  (line 121, @0x000000000214ac20, libserver.so)
// globals: s_AI_Hulls
float __fastcall NAI_Hull::Length(int id)
{
  return s_AI_Hulls[id]->maxs.x - s_AI_Hulls[id]->mins.x;
}


// NAI_Hull::Width  (line 128, @0x000000000214ac40, libserver.so)
// globals: s_AI_Hulls
float __fastcall NAI_Hull::Width(int id)
{
  return s_AI_Hulls[id]->maxs.y - s_AI_Hulls[id]->mins.y;
}


// NAI_Hull::Height  (line 135, @0x000000000214ac60, libserver.so)
// globals: s_AI_Hulls
float __fastcall NAI_Hull::Height(int id)
{
  return s_AI_Hulls[id]->maxs.z - s_AI_Hulls[id]->mins.z;
}


// NAI_Hull::Bits  (line 142, @0x000000000214ac80, libserver.so)
// globals: s_AI_Hulls
int __fastcall NAI_Hull::Bits(int id)
{
  return s_AI_Hulls[id]->hullBit;
}


// NAI_Hull::Name  (line 149, @0x000000000214aca0, libserver.so)
// globals: s_AI_Hulls
const char *__fastcall NAI_Hull::Name(int id)
{
  return s_AI_Hulls[id]->name;
}


// NAI_Hull::TraceMask  (line 156, @0x000000000214acc0, libserver.so)
// globals: s_AI_Hulls
uint64 __fastcall NAI_Hull::TraceMask(int id)
{
  return s_AI_Hulls[id]->nAITraceMask;
}


// NAI_Hull::LookupId  (line 164, @0x000000000214ace0, libserver.so)  // inlines: Name
// calls: V_stricmp_fast
// globals: s_AI_Hulls
Hull_t __fastcall NAI_Hull::LookupId(const char *szName)
{
  Hull_t v1; // r13d
  __int64 v3; // rbx

  v1 = Hull_t::HULL_HUMAN;
  v3 = 0;
  if ( szName == 0 )
    return Hull_t::HULL_HUMAN;
  while ( V_stricmp_fast(szName, s_AI_Hulls[v3]->name) != 0 )
  {
    v1 = ++v3;
    if ( v3 == 9 )
      return Hull_t::HULL_HUMAN;
  }
  return v1;
}


