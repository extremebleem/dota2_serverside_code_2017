
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_Farm::~CDOTA_BotMode_Farm  (line 16, @0x0000000002827420, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_BotMode, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_BotMode_Farm::~CDOTA_BotMode_Farm(CDOTA_BotMode_Farm *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_pSpawners.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_BotMode = off_42B8070;  // vptr: CDOTA_BotMode_Farm
  this->m_pSpawners.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_pSpawners.m_Memory;
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_pSpawners.m_Memory);
    if ( (this->m_pSpawners.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(p_m_Memory);
  }
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
}


// CDOTA_BotMode_Farm::~CDOTA_BotMode_Farm  (line 16, @0x0000000002827500, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_BotMode, ~CDOTA_BotMode_Farm, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_BotMode_Farm::~CDOTA_BotMode_Farm(CDOTA_BotMode_Farm *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_pSpawners.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_BotMode = off_42B8070;  // vptr: CDOTA_BotMode_Farm
  this->m_pSpawners.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_pSpawners.m_Memory;
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_pSpawners.m_Memory);
    if ( (this->m_pSpawners.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(p_m_Memory);
  }
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
  operator delete(this);
}


// CDOTA_BotMode_Farm::GetModeType  (line 23, @0x0000000002826c70, libserver.so)
DOTA_BOT_MODE __fastcall CDOTA_BotMode_Farm::GetModeType(CDOTA_BotMode_Farm *const this)
{
  return DOTA_BOT_MODE::DOTA_BOT_MODE_FARM;
}


// CDOTA_BotMode_Farm::GetDebugValue  (line 37, @0x0000000002827290, libserver.so)
// calls: CDOTA_BotMode::FormatDebugValue
// strings: "(%2.2f - %2.2f - %2.2f)"
const char *__fastcall CDOTA_BotMode_Farm::GetDebugValue(CDOTA_BotMode_Farm *const this)
{
  return CDOTA_BotMode::FormatDebugValue(
           this,
           "(%2.2f - %2.2f - %2.2f)",
           this->m_fLaneScores[1],
           this->m_fLaneScores[2],
           this->m_fLaneScores[3]);
}


// CDOTA_BotMode_Farm_Human::~CDOTA_BotMode_Farm_Human  (line 56, @0x0000000002827490, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_BotMode, ~CDOTA_BotMode_Farm, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_BotMode_Farm_Human::~CDOTA_BotMode_Farm_Human(CDOTA_BotMode_Farm_Human *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_pSpawners.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_BotMode = off_42B8070;  // vptr: CDOTA_BotMode_Farm
  this->m_pSpawners.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_pSpawners.m_Memory;
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_pSpawners.m_Memory);
    if ( (this->m_pSpawners.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(p_m_Memory);
  }
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
}


// CDOTA_BotMode_Farm_Human::~CDOTA_BotMode_Farm_Human  (line 56, @0x0000000002827570, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_BotMode, ~CDOTA_BotMode_Farm, ~CDOTA_BotMode_Farm_Human, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_BotMode_Farm_Human::~CDOTA_BotMode_Farm_Human(CDOTA_BotMode_Farm_Human *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_pSpawners.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_BotMode = off_42B8070;  // vptr: CDOTA_BotMode_Farm
  this->m_pSpawners.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_pSpawners.m_Memory;
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_pSpawners.m_Memory);
    if ( (this->m_pSpawners.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(p_m_Memory);
  }
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
  operator delete(this);
}


// CDOTA_BotMode_Farm_Human::OnStart  (line 64, @0x0000000002826c80, libserver.so)
void __fastcall CDOTA_BotMode_Farm_Human::OnStart(CDOTA_BotMode_Farm_Human *const this)
{
  ;
}


// CDOTA_BotMode_Farm_Human::OnEnd  (line 65, @0x0000000002826c90, libserver.so)
void __fastcall CDOTA_BotMode_Farm_Human::OnEnd(CDOTA_BotMode_Farm_Human *const this)
{
  ;
}


// CDOTA_BotMode_Farm_Human::Think  (line 66, @0x0000000002826ca0, libserver.so)
void __fastcall CDOTA_BotMode_Farm_Human::Think(CDOTA_BotMode_Farm_Human *const this)
{
  ;
}


// CDOTA_BotMode_Farm_Human::CalculateDesiredLocation  (line 70, @0x0000000002826cb0, libserver.so)
Vector __fastcall CDOTA_BotMode_Farm_Human::CalculateDesiredLocation(CDOTA_BotMode_Farm_Human *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&vec3_origin.x;
  result.z = vec3_origin.z;
  return result;
}


// CDOTA_BotMode_Farm_Human::GetDebugString  (line 73, @0x0000000002826cd0, libserver.so)
// strings: "Inferred Farming"
const char *__fastcall CDOTA_BotMode_Farm_Human::GetDebugString(CDOTA_BotMode_Farm_Human *const this)
{
  return "Inferred Farming";
}


