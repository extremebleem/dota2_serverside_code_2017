
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CTEBaseBeam::~CTEBaseBeam  (line 13, @0x0000000002f55660, libserver.so)  // inlines: ~CBaseTempEntity
// calls: CUtlSlot::~CUtlSlot
void __fastcall CTEBaseBeam::~CTEBaseBeam(CTEBaseBeam *const this)
{
  CUtlSlot *v1; // rdi

  v1 = &this->CUtlSlot;
  *&v1[-1].m_ConnectedSignallers.Mutex_t.m_depth = off_47B7A30;
  CUtlSlot::~CUtlSlot(v1);
}


// CTEBaseBeam::~CTEBaseBeam  (line 13, @0x0000000002f55680, libserver.so)  // inlines: ~CBaseTempEntity, ~CTEBaseBeam
// calls: CUtlSlot::~CUtlSlot, operator delete
void __fastcall CTEBaseBeam::~CTEBaseBeam(CTEBaseBeam *const this)
{
  CUtlSlot *v2; // rdi

  v2 = &this->CUtlSlot;
  *&v2[-1].m_ConnectedSignallers.Mutex_t.m_depth = off_47B7A30;
  CUtlSlot::~CUtlSlot(v2);
  operator delete(this);
}


