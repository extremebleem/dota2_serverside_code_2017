
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase  (line 182, @0x000000000204e450, libserver.so)
void __fastcall CRefCountServiceBase<true,CRefMT>::~CRefCountServiceBase(CRefCountServiceBase<true,CRefMT> *const this)
{
  this->_vptr_CRefCountServiceBase = off_3FEABF0;
}


// CRefCountServiceBase<true, CRefMT>::~CRefCountServiceBase  (line 182, @0x000000000204e510, libserver.so)  // inlines: ~CRefCountServiceBase
// calls: operator delete
void __fastcall CRefCountServiceBase<true,CRefMT>::~CRefCountServiceBase(CRefCountServiceBase<true,CRefMT> *const this)
{
  this->_vptr_CRefCountServiceBase = off_3FEABF0;
  operator delete(this);
}


// CRefCountServiceBase<true, CRefMT>::OnFinalRelease  (line 186, @0x000000000204e470, libserver.so)
bool __fastcall CRefCountServiceBase<true,CRefMT>::OnFinalRelease(CRefCountServiceBase<true,CRefMT> *const this)
{
  return 1;
}


// CRefCountServiceBase<true, CRefMT>::DoRelease  (line 201, @0x000000000256c940, libserver.so)  // inlines: Decrement, ThreadInterlockedDecrement
// callers: CEmoteMap::ParseAndRunChat, CUtlDict<CSmartPtr<CEmoteMap::IFunction, CRefCountAccessor>, int>::Insert, CEmoteMap::AddFunction, CEmoteMap::RemoveFunction
int __fastcall CRefCountServiceBase<true,CRefMT>::DoRelease(CRefCountServiceBase<true,CRefMT> *const this)
{
  int v2; // r12d

  v2 = _InterlockedDecrement(&this->m_iRefs);
  if ( v2 != 0 || (*(this->_vptr_CRefCountServiceBase + 2))(this) == 0 )
    return v2;
  (*(this->_vptr_CRefCountServiceBase + 1))(this);
  return 0;
}


// CRefCounted<CRefCountServiceBase<true, CRefMT> >::~CRefCounted  (line 327, @0x000000000204e460, libserver.so)  // inlines: ~CRefCountServiceBase
void __fastcall CRefCounted<CRefCountServiceBase<true,CRefMT>>::~CRefCounted(
        CRefCounted<CRefCountServiceBase<true,CRefMT> > *const this)
{
  this->_vptr_CRefCountServiceBase = off_3FEABF0;
}


// CRefCounted<CRefCountServiceBase<true, CRefMT> >::~CRefCounted  (line 327, @0x000000000204e530, libserver.so)  // inlines: ~CRefCountServiceBase, ~CRefCounted
// calls: operator delete
void __fastcall CRefCounted<CRefCountServiceBase<true,CRefMT>>::~CRefCounted(
        CRefCounted<CRefCountServiceBase<true,CRefMT> > *const this)
{
  this->_vptr_CRefCountServiceBase = off_3FEABF0;
  operator delete(this);
}


// CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >::~CRefCounted1  (line 354, @0x000000000208f100, libserver.so)  // inlines: ~CRefCountServiceBase
void __fastcall CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>::~CRefCounted1(
        CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT> > *const this)
{
  this->_vptr_IRefCounted = off_3FF1FD0;
  this->_vptr_CRefCountServiceBase = off_3FEABF0;
}


// CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >::~CRefCounted1  (line 354, @0x000000000208f560, libserver.so)  // inlines: ~CRefCountServiceBase, ~CRefCounted1
// calls: operator delete
void __fastcall CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>::~CRefCounted1(
        CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT> > *const this)
{
  this->_vptr_IRefCounted = off_3FF1FD0;
  this->_vptr_CRefCountServiceBase = off_3FEABF0;
  operator delete(this);
}


// CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >::AddRef  (line 355, @0x000000000208fb30, libserver.so)  // inlines: DoAddRef, Increment, ThreadInterlockedIncrement
int __fastcall CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>::AddRef(
        CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT> > *const this)
{
  return _InterlockedIncrement(&this->m_iRefs);
}


// CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >::Release  (line 356, @0x0000000002092cd0, libserver.so)  // inlines: Decrement, DoRelease, ThreadInterlockedDecrement
int __fastcall CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>::Release(
        CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT> > *const this)
{
  int v2; // r12d
  CRefCountServiceBase<true,CRefMT> *v4; // r13

  v2 = _InterlockedDecrement(&this->m_iRefs);
  if ( v2 != 0 )
    return v2;
  v4 = &this->CRefCountServiceBase<true,CRefMT>;
  if ( (*(this->_vptr_CRefCountServiceBase + 2))(&this->CRefCountServiceBase<true,CRefMT>) == 0 || v4 == 0 )
    return v2;
  (*(this->_vptr_CRefCountServiceBase + 1))(v4);
  return 0;
}


