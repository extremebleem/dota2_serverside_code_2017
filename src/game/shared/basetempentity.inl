
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseTempEntity::~CBaseTempEntity  (line 32, @0x0000000002f55610, libserver.so)
// calls: CUtlSlot::~CUtlSlot
void __fastcall CBaseTempEntity::~CBaseTempEntity(CBaseTempEntity *const this)
{
  CUtlSlot *v1; // rdi

  v1 = &this->CUtlSlot;
  *&v1[-1].m_ConnectedSignallers.Mutex_t.m_depth = off_47B7A30;
  CUtlSlot::~CUtlSlot(v1);
}


// CBaseTempEntity::~CBaseTempEntity  (line 32, @0x0000000002f55630, libserver.so)  // inlines: ~CBaseTempEntity
// calls: CUtlSlot::~CUtlSlot, operator delete
void __fastcall CBaseTempEntity::~CBaseTempEntity(CBaseTempEntity *const this)
{
  CUtlSlot *v2; // rdi

  v2 = &this->CUtlSlot;
  *&v2[-1].m_ConnectedSignallers.Mutex_t.m_depth = off_47B7A30;
  CUtlSlot::~CUtlSlot(v2);
  operator delete(this);
}


// CBaseTempEntity::StaticInit  (line 36, @0x0000000002f4f7b0, libserver.so)
void __fastcall CBaseTempEntity::StaticInit(CBaseTempEntity *const this)
{
  ;
}


// CBaseTempEntity::StaticShutdown  (line 37, @0x0000000002f4f7c0, libserver.so)
void __fastcall CBaseTempEntity::StaticShutdown(CBaseTempEntity *const this)
{
  ;
}


