
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CNavAreaExtended::~CNavAreaExtended  (line 15, @0x0000000002211620, libserver.so)
// calls: CNavArea::~CNavArea
void __fastcall CNavAreaExtended::~CNavAreaExtended(CNavAreaExtended *const this)
{
  this->_vptr_CNavPoly = &off_40393F0;
  CNavArea::~CNavArea(this);
}


// CNavAreaExtended::~CNavAreaExtended  (line 15, @0x0000000002211640, libserver.so)  // inlines: ~CNavAreaExtended
// calls: CNavArea::~CNavArea, operator delete
void __fastcall CNavAreaExtended::~CNavAreaExtended(CNavAreaExtended *const this)
{
  this->_vptr_CNavPoly = &off_40393F0;
  CNavArea::~CNavArea(this);
  operator delete(this);
}


// CNavAreaExtended::SetPlace  (line 66, @0x000000000220ea60, libserver.so)
void __fastcall CNavAreaExtended::SetPlace(CNavAreaExtended *const this, Place place)
{
  this->m_place = place;
}


// CNavAreaExtended::GetPlace  (line 67, @0x000000000220ea70, libserver.so)
Place __fastcall CNavAreaExtended::GetPlace(const CNavAreaExtended *const this)
{
  return this->m_place;
}


// CNavAreaExtended::OnServerActivate  (line 162, @0x000000000220ea80, libserver.so)
void __fastcall CNavAreaExtended::OnServerActivate(CNavAreaExtended *const this)
{
  this->m_nDamagingTickCount = 0;
}


// CNavAreaExtended::OnRoundRestart  (line 170, @0x000000000220ea90, libserver.so)
void __fastcall CNavAreaExtended::OnRoundRestart(CNavAreaExtended *const this)
{
  this->m_nDamagingTickCount = 0;
}


