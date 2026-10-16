
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_PhantomAssassin::~CDOTA_Bot_Hero_PhantomAssassin  (line 16, @0x00000000028e1ce0, libserver.so)
// calls: CDOTA_Bot::~CDOTA_Bot
void __fastcall CDOTA_Bot_Hero_PhantomAssassin::~CDOTA_Bot_Hero_PhantomAssassin(
        CDOTA_Bot_Hero_PhantomAssassin *const this)
{
  this->_vptr_CDOTA_Bot = &off_42CEFB0;
  CDOTA_Bot::~CDOTA_Bot(this);
}


// CDOTA_Bot_Hero_PhantomAssassin::~CDOTA_Bot_Hero_PhantomAssassin  (line 16, @0x00000000028e1d00, libserver.so)  // inlines: ~CDOTA_Bot_Hero_PhantomAssassin
// calls: CDOTA_Bot::~CDOTA_Bot, operator delete
void __fastcall CDOTA_Bot_Hero_PhantomAssassin::~CDOTA_Bot_Hero_PhantomAssassin(
        CDOTA_Bot_Hero_PhantomAssassin *const this)
{
  this->_vptr_CDOTA_Bot = &off_42CEFB0;
  CDOTA_Bot::~CDOTA_Bot(this);
  operator delete(this);
}


// CDOTA_BotMode_Farm_PhantomAssassin::~CDOTA_BotMode_Farm_PhantomAssassin  (line 35, @0x00000000028e1970, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_BotMode, ~CDOTA_BotMode_Farm, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_BotMode_Farm_PhantomAssassin::~CDOTA_BotMode_Farm_PhantomAssassin(
        CDOTA_BotMode_Farm_PhantomAssassin *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *p_m_Memory; // r12

  this->m_pSpawners.m_Size = 0;
  v2 = (this->m_pSpawners.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_BotMode = off_42B8070;  // vptr: CDOTA_BotMode_Farm
  if ( v2 )
  {
    p_m_Memory = &this->m_pSpawners.m_Memory;
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_pSpawners.m_Memory);
    if ( (this->m_pSpawners.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(p_m_Memory);
  }
  this->_vptr_CDOTA_BotMode = off_42B75F0;  // vptr: CDOTA_BotMode
}


// CDOTA_BotMode_Farm_PhantomAssassin::~CDOTA_BotMode_Farm_PhantomAssassin  (line 35, @0x00000000028e19e0, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_BotMode, ~CDOTA_BotMode_Farm, ~CDOTA_BotMode_Farm_PhantomAssassin, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_BotMode_Farm_PhantomAssassin::~CDOTA_BotMode_Farm_PhantomAssassin(
        CDOTA_BotMode_Farm_PhantomAssassin *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *p_m_Memory; // r12

  this->m_pSpawners.m_Size = 0;
  v2 = (this->m_pSpawners.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_BotMode = off_42B8070;  // vptr: CDOTA_BotMode_Farm
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


// CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger::~CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger  (line 46, @0x00000000028e11f0, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger::~CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger(
        CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CEF50;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger::~CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger  (line 46, @0x00000000028e1210, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific, ~CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger::~CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger(
        CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CEF50;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


// CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike::~CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike  (line 61, @0x00000000028e11a0, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike::~CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike(
        CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CEF50;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
}


// CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike::~CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike  (line 61, @0x00000000028e11c0, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsageSpecific, ~CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike
// calls: CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, operator delete
void __fastcall CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike::~CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike(
        CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = &off_42CEF50;
  CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(this);
  operator delete(this);
}


