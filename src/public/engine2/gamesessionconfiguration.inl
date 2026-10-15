
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GameSessionConfiguration_t::~GameSessionConfiguration_t  (line 15, @0x00000000020fbda0, libserver.so)  // inlines: ~CBaseCmdKeyValues
// calls: KeyValues::deleteThis, CSVCMsg_GameSessionConfiguration::~CSVCMsg_GameSessionConfiguration
void __fastcall GameSessionConfiguration_t::~GameSessionConfiguration_t(GameSessionConfiguration_t *const this)
{
  KeyValues *v2; // rdi

  *this = &off_3FF8270;
  v2 = *(this + 14);
  if ( v2 != 0 )
  {
    KeyValues::deleteThis(v2);
    *(this + 14) = 0;
  }
  CSVCMsg_GameSessionConfiguration::~CSVCMsg_GameSessionConfiguration(this);
}


// GameSessionConfiguration_t::~GameSessionConfiguration_t  (line 15, @0x00000000020fbf50, libserver.so)  // inlines: ~CBaseCmdKeyValues, ~GameSessionConfiguration_t
// calls: KeyValues::deleteThis, CSVCMsg_GameSessionConfiguration::~CSVCMsg_GameSessionConfiguration, operator delete
void __fastcall GameSessionConfiguration_t::~GameSessionConfiguration_t(GameSessionConfiguration_t *const this)
{
  KeyValues *v2; // rdi

  *this = &off_3FF8270;
  v2 = *(this + 14);
  if ( v2 != 0 )
  {
    KeyValues::deleteThis(v2);
    *(this + 14) = 0;
  }
  CSVCMsg_GameSessionConfiguration::~CSVCMsg_GameSessionConfiguration(this);
  operator delete(this);
}


