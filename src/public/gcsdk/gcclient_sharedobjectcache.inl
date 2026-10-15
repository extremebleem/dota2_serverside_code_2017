
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GCSDK::CGCClientSharedObjectCache::GetOwner  (line 158, @0x000000000323ba00, libserver.so)
GCSDK::SOID_t __fastcall GCSDK::CGCClientSharedObjectCache::GetOwner(
        const GCSDK::CGCClientSharedObjectCache *const this)
{
  return this->m_IDOwner;
}


// GCSDK::CGCClientSharedObjectCache::AllocateTypeCache  (line 180, @0x000000000323ba10, libserver.so)  // inlines: CGCClientSharedObjectTypeCache
// calls: operator new, GCSDK::CSharedObjectTypeCache::CSharedObjectTypeCache, operator delete, _Unwind_Resume
GCSDK::CSharedObjectTypeCache *__fastcall GCSDK::CGCClientSharedObjectCache::AllocateTypeCache(
        const GCSDK::CGCClientSharedObjectCache *const this,
        int nClassID)
{
  GCSDK::CSharedObjectTypeCache *v3; // rbx

  v3 = operator new(0x30u);
  GCSDK::CSharedObjectTypeCache::CSharedObjectTypeCache(v3, nClassID);
  *(&v3->m_nTypeID + 1) = 0;
  v3->_vptr_CSharedObjectTypeCache = off_47D0B10;
  return v3;
}


