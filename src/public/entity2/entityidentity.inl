
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEntityIdentity::NetworkVar_m_nameStringableIndex::NetworkStateChanged  (line 230, @0x0000000003098e60, libserver.so)  // inlines: GetInstance, NetworkStateChanged
// callers: CEntityIdentity::Restore
void __fastcall CEntityIdentity::NetworkVar_m_nameStringableIndex::NetworkStateChanged(
        CThreadLockableObject<CThreadNullMutex> *ptr,
        int32 nArrayIndex)
{
  CThreadLockableObject<CThreadNullMutex> *v2; // rax
  __int64 v3; // rdi

  v2 = ptr - 20;
  if ( ptr != &stru_10.CThreadLockableObject<CThreadNullMutex> + 4 )
  {
    v3 = *&ptr[-20].m_Lock.gap0;
    if ( v3 != 0 )
      (*(*v3 + 176LL))(v3, 20, 0xFFFFFFFFLL, *&v2[60].m_Lock.gap0);
  }
}


