
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GCSDK::CWorkItem::~CWorkItem  (line 117, @0x0000000003241cf0, libserver.so)  // inlines: ~CRefCount
void __fastcall GCSDK::CWorkItem::~CWorkItem(GCSDK::CWorkItem *const this)
{
  this->_vptr_CRefCount = off_47D0430;  // vptr: GCSDK::CRefCount
}


// GCSDK::CWorkItem::~CWorkItem  (line 117, @0x0000000003241d30, libserver.so)  // inlines: ~CRefCount, ~CWorkItem
// calls: operator delete
void __fastcall GCSDK::CWorkItem::~CWorkItem(GCSDK::CWorkItem *const this)
{
  this->_vptr_CRefCount = off_47D0430;  // vptr: GCSDK::CRefCount
  operator delete(this);
}


// GCSDK::CWorkThread::~CWorkThread  (line 145, @0x0000000003241d50, libserver.so)
// calls: CThread::~CThread()
void __fastcall GCSDK::CWorkThread::~CWorkThread(GCSDK::CWorkThread *const this)
{
  *this = off_47D0C70;
  CThread::~CThread(this);
}


// GCSDK::CWorkThread::~CWorkThread  (line 145, @0x0000000003241d70, libserver.so)  // inlines: ~CWorkThread
// calls: CThread::~CThread(), operator delete
void __fastcall GCSDK::CWorkThread::~CWorkThread(GCSDK::CWorkThread *const this)
{
  *this = off_47D0C70;
  CThread::~CThread(this);
  operator delete(this);
}


// GCSDK::CWorkThread::Cancel  (line 151, @0x0000000003241d00, libserver.so)
void __fastcall GCSDK::CWorkThread::Cancel(GCSDK::CWorkThread *const this)
{
  ;
}


// GCSDK::CWorkThread::OnStart  (line 159, @0x0000000003241d10, libserver.so)
void __fastcall GCSDK::CWorkThread::OnStart(GCSDK::CWorkThread *const this)
{
  ;
}


// GCSDK::CWorkThread::OnExit  (line 160, @0x0000000003241d20, libserver.so)
void __fastcall GCSDK::CWorkThread::OnExit(GCSDK::CWorkThread *const this)
{
  ;
}


