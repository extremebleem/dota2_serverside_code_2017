
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GCSDK::CRefCount::Release  (line 84, @0x000000000321ab90, libserver.so)  // inlines: ThreadInterlockedDecrement
// callers: GCSDK::CGCClient::OnGCMessageAvailable
int __fastcall GCSDK::CRefCount::Release(GCSDK::CRefCount *const this)
{
  int v1; // ebx

  v1 = _InterlockedDecrement(&this->m_cRef);
  if ( v1 == 0 )
    (*(this->_vptr_CRefCount + 2))(this);
  return v1;
}


// GCSDK::CRefCount::~CRefCount  (line 94, @0x0000000003221540, libserver.so)
void __fastcall GCSDK::CRefCount::~CRefCount(GCSDK::CRefCount *const this)
{
  this->_vptr_CRefCount = off_47D0430;  // vptr: GCSDK::CRefCount
}


// GCSDK::CRefCount::~CRefCount  (line 94, @0x0000000003221660, libserver.so)  // inlines: ~CRefCount
// calls: operator delete
void __fastcall GCSDK::CRefCount::~CRefCount(GCSDK::CRefCount *const this)
{
  this->_vptr_CRefCount = off_47D0430;  // vptr: GCSDK::CRefCount
  operator delete(this);
}


// GCSDK::CRefCount::DestroyThis  (line 96, @0x0000000003221550, libserver.so)
void __fastcall GCSDK::CRefCount::DestroyThis(GCSDK::CRefCount *const this)
{
  if ( this != 0 )
    (*(this->_vptr_CRefCount + 1))(this);
}


