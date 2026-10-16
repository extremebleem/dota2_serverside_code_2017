
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CMemberFunctor0<IFileSystem*, void (IFileSystem::*)(), CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone>::~CMemberFunctor0  (line 570, @0x000000000208f130, libserver.so)  // inlines: ~CRefCountServiceBase, ~CRefCounted1
void __fastcall CMemberFunctor0<IFileSystem *,void (IFileSystem::*)(void),CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>,CFuncMemPolicyNone>::~CMemberFunctor0(
        CMemberFunctor0<IFileSystem*,void (IFileSystem::*)(),CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT> >,CFuncMemPolicyNone> *const this)
{
  this->_vptr_IRefCounted = off_3FF1FD0;  // vptr: CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>
  this->_vptr_CRefCountServiceBase = off_3FEABF0;  // vptr: CRefCountServiceBase<true,CRefMT>
}


// CMemberFunctor0<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(), CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone>::~CMemberFunctor0  (line 570, @0x000000000208f160, libserver.so)  // inlines: ~CRefCountServiceBase, ~CRefCounted1
void __fastcall CMemberFunctor0<CEntity2SaveRestore *,void (CEntity2SaveRestore::*)(void),CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>,CFuncMemPolicyNone>::~CMemberFunctor0(
        CMemberFunctor0<CEntity2SaveRestore*,void (CEntity2SaveRestore::*)(),CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT> >,CFuncMemPolicyNone> *const this)
{
  this->_vptr_IRefCounted = off_3FF1FD0;  // vptr: CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>
  this->_vptr_CRefCountServiceBase = off_3FEABF0;  // vptr: CRefCountServiceBase<true,CRefMT>
}


// CMemberFunctor0<IFileSystem*, void (IFileSystem::*)(), CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone>::operator()  (line 570, @0x000000000208f4c0, libserver.so)  // inlines: operator()
// callers: CEntity2SaveRestore::SaveGame_Finalize
void __fastcall CMemberFunctor0<IFileSystem *,void (IFileSystem::*)(void),CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>,CFuncMemPolicyNone>::operator()(
        CMemberFunctor0<IFileSystem*,void (IFileSystem::*)(),CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT> >,CFuncMemPolicyNone> *const this)
{
  void (*pfn)(IFileSystem *); // rdx

  pfn = this->m_Proxy.m_pfnProxied.__pfn;
  if ( (pfn & 1) != 0 )
    pfn = *(*(&this->m_Proxy.m_pObject->_vptr_IAppSystem + this->m_Proxy.m_pfnProxied.__delta) + pfn - 1);
  pfn((this->m_Proxy.m_pObject + this->m_Proxy.m_pfnProxied.__delta));
}


// CMemberFunctor0<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(), CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone>::operator()  (line 570, @0x000000000208f4f0, libserver.so)  // inlines: operator()
void __fastcall CMemberFunctor0<CEntity2SaveRestore *,void (CEntity2SaveRestore::*)(void),CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>,CFuncMemPolicyNone>::operator()(
        CMemberFunctor0<CEntity2SaveRestore*,void (CEntity2SaveRestore::*)(),CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT> >,CFuncMemPolicyNone> *const this)
{
  void (*pfn)(CEntity2SaveRestore *); // rdx

  pfn = this->m_Proxy.m_pfnProxied.__pfn;
  if ( (pfn & 1) != 0 )
    pfn = *(*(&this->m_Proxy.m_pObject->_vptr_IEntity2SaveRestore + this->m_Proxy.m_pfnProxied.__delta) + pfn - 1);
  pfn((this->m_Proxy.m_pObject + this->m_Proxy.m_pfnProxied.__delta));
}


// CMemberFunctor0<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(), CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone>::~CMemberFunctor0  (line 570, @0x000000000208f5b0, libserver.so)  // inlines: ~CMemberFunctor0, ~CRefCountServiceBase, ~CRefCounted1
// calls: operator delete
void __fastcall CMemberFunctor0<CEntity2SaveRestore *,void (CEntity2SaveRestore::*)(void),CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>,CFuncMemPolicyNone>::~CMemberFunctor0(
        CMemberFunctor0<CEntity2SaveRestore*,void (CEntity2SaveRestore::*)(),CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT> >,CFuncMemPolicyNone> *const this)
{
  this->_vptr_IRefCounted = off_3FF1FD0;  // vptr: CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>
  this->_vptr_CRefCountServiceBase = off_3FEABF0;  // vptr: CRefCountServiceBase<true,CRefMT>
  operator delete(this);
}


// CMemberFunctor0<IFileSystem*, void (IFileSystem::*)(), CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone>::~CMemberFunctor0  (line 570, @0x000000000208f5e0, libserver.so)  // inlines: ~CMemberFunctor0, ~CRefCountServiceBase, ~CRefCounted1
// calls: operator delete
void __fastcall CMemberFunctor0<IFileSystem *,void (IFileSystem::*)(void),CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>,CFuncMemPolicyNone>::~CMemberFunctor0(
        CMemberFunctor0<IFileSystem*,void (IFileSystem::*)(),CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT> >,CFuncMemPolicyNone> *const this)
{
  this->_vptr_IRefCounted = off_3FF1FD0;  // vptr: CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>
  this->_vptr_CRefCountServiceBase = off_3FEABF0;  // vptr: CRefCountServiceBase<true,CRefMT>
  operator delete(this);
}


// CMemberFunctor6<ISaveRestoreFileSystem*, FSAsyncStatus_t (ISaveRestoreFileSystem::*)(char const*, void const*, int, bool, bool, FSAsyncControl_t__**), CUtlEnvelope<char const*>, void*, int, bool, bool, FSAsyncControl_t__**, CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone>::~CMemberFunctor6  (line 570, @0x000000000208f610, libserver.so)  // inlines: ~CRefCountServiceBase, ~CRefCounted1, ~CUtlEnvelope, ~CUtlString
// calls: CUtlString::FreeMemoryBlock
void __fastcall CMemberFunctor6<ISaveRestoreFileSystem *,FSAsyncStatus_t (ISaveRestoreFileSystem::*)(char const*,void const*,int,bool,bool,FSAsyncControl_t__ **),CUtlEnvelope<char const*>,void *,int,bool,bool,FSAsyncControl_t__ **,CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>,CFuncMemPolicyNone>::~CMemberFunctor6(
        CMemberFunctor6<ISaveRestoreFileSystem*,FSAsyncStatus_t (ISaveRestoreFileSystem::*)(char const*,void const*,int,bool,bool,FSAsyncControl_t__**),CUtlEnvelope<char const*>,void*,int,bool,bool,FSAsyncControl_t__**,CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT> >,CFuncMemPolicyNone> *const this)
{
  CUtlEnvelope<char const*> *p_m_arg1; // rdi

  p_m_arg1 = &this->m_arg1;
  p_m_arg1[-7].m_string.m_pString = off_3FF2090;
  p_m_arg1[-5].m_string.m_pString = off_3FF20C8;
  if ( this->m_arg1.m_string.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&p_m_arg1->m_string);
  this->_vptr_IRefCounted = off_3FF1FD0;  // vptr: CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>
  this->_vptr_CRefCountServiceBase = off_3FEABF0;  // vptr: CRefCountServiceBase<true,CRefMT>
}


// CMemberFunctor6<ISaveRestoreFileSystem*, FSAsyncStatus_t (ISaveRestoreFileSystem::*)(char const*, void const*, int, bool, bool, FSAsyncControl_t__**), CUtlEnvelope<char const*>, void*, int, bool, bool, FSAsyncControl_t__**, CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone>::~CMemberFunctor6  (line 570, @0x000000000208f670, libserver.so)  // inlines: ~CMemberFunctor6, ~CRefCountServiceBase, ~CRefCounted1, ~CUtlEnvelope, ~CUtlString
// calls: CUtlString::FreeMemoryBlock, operator delete
void __fastcall CMemberFunctor6<ISaveRestoreFileSystem *,FSAsyncStatus_t (ISaveRestoreFileSystem::*)(char const*,void const*,int,bool,bool,FSAsyncControl_t__ **),CUtlEnvelope<char const*>,void *,int,bool,bool,FSAsyncControl_t__ **,CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>,CFuncMemPolicyNone>::~CMemberFunctor6(
        CMemberFunctor6<ISaveRestoreFileSystem*,FSAsyncStatus_t (ISaveRestoreFileSystem::*)(char const*,void const*,int,bool,bool,FSAsyncControl_t__**),CUtlEnvelope<char const*>,void*,int,bool,bool,FSAsyncControl_t__**,CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT> >,CFuncMemPolicyNone> *const this)
{
  CUtlEnvelope<char const*> *p_m_arg1; // rdi

  p_m_arg1 = &this->m_arg1;
  p_m_arg1[-7].m_string.m_pString = off_3FF2090;
  p_m_arg1[-5].m_string.m_pString = off_3FF20C8;
  if ( this->m_arg1.m_string.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&p_m_arg1->m_string);
  this->_vptr_IRefCounted = off_3FF1FD0;  // vptr: CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>
  this->_vptr_CRefCountServiceBase = off_3FEABF0;  // vptr: CRefCountServiceBase<true,CRefMT>
  operator delete(this);
}


// CMemberFunctor2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, int)const, CUtlEnvelope<char const*>, int, CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone>::~CMemberFunctor2  (line 570, @0x000000000208f6e0, libserver.so)  // inlines: ~CRefCountServiceBase, ~CRefCounted1, ~CUtlEnvelope, ~CUtlString
// calls: CUtlString::FreeMemoryBlock
void __fastcall CMemberFunctor2<CEntity2SaveRestore *,void (CEntity2SaveRestore::*)(char const*,int)const,CUtlEnvelope<char const*>,int,CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>,CFuncMemPolicyNone>::~CMemberFunctor2(
        CMemberFunctor2<CEntity2SaveRestore*,void (CEntity2SaveRestore::*)(char const*,int)const,CUtlEnvelope<char const*>,int,CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT> >,CFuncMemPolicyNone> *const this)
{
  CUtlEnvelope<char const*> *p_m_arg1; // rdi

  p_m_arg1 = &this->m_arg1;
  p_m_arg1[-7].m_string.m_pString = off_3FF20F0;
  p_m_arg1[-5].m_string.m_pString = off_3FF2128;
  if ( this->m_arg1.m_string.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&p_m_arg1->m_string);
  this->_vptr_IRefCounted = off_3FF1FD0;  // vptr: CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>
  this->_vptr_CRefCountServiceBase = off_3FEABF0;  // vptr: CRefCountServiceBase<true,CRefMT>
}


// CMemberFunctor2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, int)const, CUtlEnvelope<char const*>, int, CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone>::~CMemberFunctor2  (line 570, @0x000000000208f740, libserver.so)  // inlines: ~CMemberFunctor2, ~CRefCountServiceBase, ~CRefCounted1, ~CUtlEnvelope, ~CUtlString
// calls: CUtlString::FreeMemoryBlock, operator delete
void __fastcall CMemberFunctor2<CEntity2SaveRestore *,void (CEntity2SaveRestore::*)(char const*,int)const,CUtlEnvelope<char const*>,int,CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>,CFuncMemPolicyNone>::~CMemberFunctor2(
        CMemberFunctor2<CEntity2SaveRestore*,void (CEntity2SaveRestore::*)(char const*,int)const,CUtlEnvelope<char const*>,int,CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT> >,CFuncMemPolicyNone> *const this)
{
  CUtlEnvelope<char const*> *p_m_arg1; // rdi

  p_m_arg1 = &this->m_arg1;
  p_m_arg1[-7].m_string.m_pString = off_3FF20F0;
  p_m_arg1[-5].m_string.m_pString = off_3FF2128;
  if ( this->m_arg1.m_string.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&p_m_arg1->m_string);
  this->_vptr_IRefCounted = off_3FF1FD0;  // vptr: CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>
  this->_vptr_CRefCountServiceBase = off_3FEABF0;  // vptr: CRefCountServiceBase<true,CRefMT>
  operator delete(this);
}


// CMemberFunctor2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, char const*), CUtlEnvelope<char const*>, CUtlEnvelope<char const*>, CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone>::~CMemberFunctor2  (line 570, @0x000000000208f7b0, libserver.so)  // inlines: ~CRefCountServiceBase, ~CRefCounted1, ~CUtlEnvelope, ~CUtlString
// calls: CUtlString::FreeMemoryBlock
void __fastcall CMemberFunctor2<CEntity2SaveRestore *,void (CEntity2SaveRestore::*)(char const*,char const*),CUtlEnvelope<char const*>,CUtlEnvelope<char const*>,CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>,CFuncMemPolicyNone>::~CMemberFunctor2(
        CMemberFunctor2<CEntity2SaveRestore*,void (CEntity2SaveRestore::*)(char const*,char const*),CUtlEnvelope<char const*>,CUtlEnvelope<char const*>,CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT> >,CFuncMemPolicyNone> *const this)
{
  bool v2; // zf

  this->_vptr_IRefCounted = off_3FF2150;  // vptr: CMemberFunctor2<CEntity2SaveRestore *,void (CEntity2SaveRestore::*)(char const*,char const*),CUtlEnvelope<char const*>,CUtlEnvelope<char const*>,CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>,CFuncMemPolicyNone>
  v2 = this->m_arg2.m_string.m_pString == 0;
  this->_vptr_CRefCountServiceBase = off_3FF2188;
  if ( !v2 )
    CUtlString::FreeMemoryBlock(&this->m_arg2.m_string);
  if ( this->m_arg1.m_string.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_arg1.m_string);
  this->_vptr_IRefCounted = off_3FF1FD0;  // vptr: CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>
  this->_vptr_CRefCountServiceBase = off_3FEABF0;  // vptr: CRefCountServiceBase<true,CRefMT>
}


// CMemberFunctor2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, char const*), CUtlEnvelope<char const*>, CUtlEnvelope<char const*>, CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone>::operator()  (line 570, @0x000000000208f850, libserver.so)  // inlines: operator char*, operator()
// calls: CUtlString::Get
void __fastcall CMemberFunctor2<CEntity2SaveRestore *,void (CEntity2SaveRestore::*)(char const*,char const*),CUtlEnvelope<char const*>,CUtlEnvelope<char const*>,CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>,CFuncMemPolicyNone>::operator()(
        CMemberFunctor2<CEntity2SaveRestore*,void (CEntity2SaveRestore::*)(char const*,char const*),CUtlEnvelope<char const*>,CUtlEnvelope<char const*>,CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT> >,CFuncMemPolicyNone> *const this)
{
  void (*pfn)(CEntity2SaveRestore *, const char *, const char *); // r12
  const char *v3; // r13
  const char *v4; // rax

  pfn = this->m_Proxy.m_pfnProxied.__pfn;
  if ( (pfn & 1) != 0 )
    pfn = *(*(&this->m_Proxy.m_pObject->_vptr_IEntity2SaveRestore + this->m_Proxy.m_pfnProxied.__delta) + pfn - 1);
  v3 = CUtlString::Get(&this->m_arg2.m_string);
  v4 = CUtlString::Get(&this->m_arg1.m_string);
  pfn((this->m_Proxy.m_pObject + this->m_Proxy.m_pfnProxied.__delta), v4, v3);
}


// CMemberFunctor2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, int)const, CUtlEnvelope<char const*>, int, CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone>::operator()  (line 570, @0x00000000020922a0, libserver.so)  // inlines: operator char*, operator()
// calls: CUtlString::Get
void __fastcall CMemberFunctor2<CEntity2SaveRestore *,void (CEntity2SaveRestore::*)(char const*,int)const,CUtlEnvelope<char const*>,int,CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>,CFuncMemPolicyNone>::operator()(
        CMemberFunctor2<CEntity2SaveRestore*,void (CEntity2SaveRestore::*)(char const*,int)const,CUtlEnvelope<char const*>,int,CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT> >,CFuncMemPolicyNone> *const this)
{
  void (*pfn)(const CEntity2SaveRestore *, const char *, int); // r12
  unsigned int m_arg2; // r13d
  const char *v4; // rax

  pfn = this->m_Proxy.m_pfnProxied.__pfn;
  m_arg2 = this->m_arg2;
  if ( (pfn & 1) != 0 )
    pfn = *(*(&this->m_Proxy.m_pObject->_vptr_IEntity2SaveRestore + this->m_Proxy.m_pfnProxied.__delta) + pfn - 1);
  v4 = CUtlString::Get(&this->m_arg1.m_string);
  pfn((this->m_Proxy.m_pObject + this->m_Proxy.m_pfnProxied.__delta), v4, m_arg2);
}


// CMemberFunctor6<ISaveRestoreFileSystem*, FSAsyncStatus_t (ISaveRestoreFileSystem::*)(char const*, void const*, int, bool, bool, FSAsyncControl_t__**), CUtlEnvelope<char const*>, void*, int, bool, bool, FSAsyncControl_t__**, CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone>::operator()  (line 570, @0x0000000002092300, libserver.so)  // inlines: operator char*, operator()
// calls: CUtlString::Get
void __fastcall CMemberFunctor6<ISaveRestoreFileSystem *,FSAsyncStatus_t (ISaveRestoreFileSystem::*)(char const*,void const*,int,bool,bool,FSAsyncControl_t__ **),CUtlEnvelope<char const*>,void *,int,bool,bool,FSAsyncControl_t__ **,CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>,CFuncMemPolicyNone>::operator()(
        CMemberFunctor6<ISaveRestoreFileSystem*,FSAsyncStatus_t (ISaveRestoreFileSystem::*)(char const*,void const*,int,bool,bool,FSAsyncControl_t__**),CUtlEnvelope<char const*>,void*,int,bool,bool,FSAsyncControl_t__**,CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT> >,CFuncMemPolicyNone> *const this)
{
  FSAsyncStatus_t (*pfn)(ISaveRestoreFileSystem *, const char *, const void *, int, bool, bool, FSAsyncControl_t__ **); // r12
  void *m_arg2; // r15
  bool m_arg5; // r14
  FSAsyncControl_t__ **m_arg6; // r13
  const char *v6; // rax
  unsigned int m_arg3; // [rsp+8h] [rbp-38h]
  bool m_arg4; // [rsp+Fh] [rbp-31h]

  pfn = this->m_Proxy.m_pfnProxied.__pfn;
  m_arg2 = this->m_arg2;
  m_arg5 = this->m_arg5;
  m_arg4 = this->m_arg4;
  m_arg6 = this->m_arg6;
  if ( (pfn & 1) != 0 )
    pfn = *(*(&this->m_Proxy.m_pObject->_vptr_ISaveRestoreFileSystem + this->m_Proxy.m_pfnProxied.__delta) + pfn - 1);
  m_arg3 = this->m_arg3;
  v6 = CUtlString::Get(&this->m_arg1.m_string);
  pfn((this->m_Proxy.m_pObject + this->m_Proxy.m_pfnProxied.__delta), v6, m_arg2, m_arg3, m_arg4, m_arg5, m_arg6);
}


// CMemberFunctor2<CEntity2SaveRestore*, void (CEntity2SaveRestore::*)(char const*, char const*), CUtlEnvelope<char const*>, CUtlEnvelope<char const*>, CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone>::~CMemberFunctor2  (line 570, @0x00000000020929a0, libserver.so)  // inlines: ~CMemberFunctor2, ~CRefCountServiceBase, ~CRefCounted1, ~CUtlEnvelope, ~CUtlString
// calls: CUtlString::FreeMemoryBlock, operator delete
void __fastcall CMemberFunctor2<CEntity2SaveRestore *,void (CEntity2SaveRestore::*)(char const*,char const*),CUtlEnvelope<char const*>,CUtlEnvelope<char const*>,CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>,CFuncMemPolicyNone>::~CMemberFunctor2(
        CMemberFunctor2<CEntity2SaveRestore*,void (CEntity2SaveRestore::*)(char const*,char const*),CUtlEnvelope<char const*>,CUtlEnvelope<char const*>,CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT> >,CFuncMemPolicyNone> *const this)
{
  bool v2; // zf

  this->_vptr_IRefCounted = off_3FF2150;  // vptr: CMemberFunctor2<CEntity2SaveRestore *,void (CEntity2SaveRestore::*)(char const*,char const*),CUtlEnvelope<char const*>,CUtlEnvelope<char const*>,CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>,CFuncMemPolicyNone>
  v2 = this->m_arg2.m_string.m_pString == 0;
  this->_vptr_CRefCountServiceBase = off_3FF2188;
  if ( !v2 )
    CUtlString::FreeMemoryBlock(&this->m_arg2.m_string);
  if ( this->m_arg1.m_string.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_arg1.m_string);
  this->_vptr_IRefCounted = off_3FF1FD0;  // vptr: CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>
  this->_vptr_CRefCountServiceBase = off_3FEABF0;  // vptr: CRefCountServiceBase<true,CRefMT>
  operator delete(this);
}


// CMemberFunctor1<CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, 1> >*, void (CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, 1> >::*)(int), int, CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone>::~CMemberFunctor1  (line 570, @0x00000000023713a0, libserver.so)  // inlines: ~CRefCountServiceBase, ~CRefCounted1
void __fastcall CMemberFunctor1<CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t,CFuncJobItemProcessor<QueryCacheUpdateRecord_t>,1>> *,void (CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t,CFuncJobItemProcessor<QueryCacheUpdateRecord_t>,1>>::*)(int),int,CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>,CFuncMemPolicyNone>::~CMemberFunctor1(
        CMemberFunctor1<CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t,CFuncJobItemProcessor<QueryCacheUpdateRecord_t>,1> >*,void (CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t,CFuncJobItemProcessor<QueryCacheUpdateRecord_t>,1> >::*)(int),int,CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT> >,CFuncMemPolicyNone> *const this)
{
  this->_vptr_IRefCounted = off_3FF1FD0;  // vptr: CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>
  this->_vptr_CRefCountServiceBase = off_3FEABF0;  // vptr: CRefCountServiceBase<true,CRefMT>
}


// CMemberFunctor1<CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, 1> >*, void (CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, 1> >::*)(int), int, CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone>::~CMemberFunctor1  (line 570, @0x0000000002372300, libserver.so)  // inlines: ~CMemberFunctor1, ~CRefCountServiceBase, ~CRefCounted1
// calls: operator delete
void __fastcall CMemberFunctor1<CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t,CFuncJobItemProcessor<QueryCacheUpdateRecord_t>,1>> *,void (CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t,CFuncJobItemProcessor<QueryCacheUpdateRecord_t>,1>>::*)(int),int,CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>,CFuncMemPolicyNone>::~CMemberFunctor1(
        CMemberFunctor1<CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t,CFuncJobItemProcessor<QueryCacheUpdateRecord_t>,1> >*,void (CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t,CFuncJobItemProcessor<QueryCacheUpdateRecord_t>,1> >::*)(int),int,CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT> >,CFuncMemPolicyNone> *const this)
{
  this->_vptr_IRefCounted = off_3FF1FD0;  // vptr: CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>
  this->_vptr_CRefCountServiceBase = off_3FEABF0;  // vptr: CRefCountServiceBase<true,CRefMT>
  operator delete(this);
}


// CMemberFunctor1<CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, 1> >*, void (CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t, CFuncJobItemProcessor<QueryCacheUpdateRecord_t>, 1> >::*)(int), int, CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone>::operator()  (line 570, @0x00000000023736c0, libserver.so)  // inlines: operator()
void __fastcall CMemberFunctor1<CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t,CFuncJobItemProcessor<QueryCacheUpdateRecord_t>,1>> *,void (CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t,CFuncJobItemProcessor<QueryCacheUpdateRecord_t>,1>>::*)(int),int,CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>,CFuncMemPolicyNone>::operator()(
        CMemberFunctor1<CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t,CFuncJobItemProcessor<QueryCacheUpdateRecord_t>,1> >*,void (CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t,CFuncJobItemProcessor<QueryCacheUpdateRecord_t>,1> >::*)(int),int,CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT> >,CFuncMemPolicyNone> *const this)
{
  void (*pfn)(CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t,CFuncJobItemProcessor<QueryCacheUpdateRecord_t>,1> > *, int); // rdx
  __int64 m_arg1; // rsi
  CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t,CFuncJobItemProcessor<QueryCacheUpdateRecord_t>,1> > *v3; // rdi

  pfn = this->m_Proxy.m_pfnProxied.__pfn;
  m_arg1 = this->m_arg1;
  v3 = (this->m_Proxy.m_pObject + this->m_Proxy.m_pfnProxied.__delta);
  if ( (pfn & 1) != 0 )
    pfn = *(v3->m_pThreadPool + pfn - 1);
  pfn(v3, m_arg1);
}


// CMemberFunctor0<CAsyncFileLoadPrerequisite*, void (CAsyncFileLoadPrerequisite::*)(), CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone>::~CMemberFunctor0  (line 570, @0x0000000002552a40, libserver.so)  // inlines: ~CRefCountServiceBase, ~CRefCounted1
void __fastcall CMemberFunctor0<CAsyncFileLoadPrerequisite *,void (CAsyncFileLoadPrerequisite::*)(void),CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>,CFuncMemPolicyNone>::~CMemberFunctor0(
        CMemberFunctor0<CAsyncFileLoadPrerequisite*,void (CAsyncFileLoadPrerequisite::*)(),CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT> >,CFuncMemPolicyNone> *const this)
{
  this->_vptr_IRefCounted = off_3FF1FD0;  // vptr: CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>
  this->_vptr_CRefCountServiceBase = off_3FEABF0;  // vptr: CRefCountServiceBase<true,CRefMT>
}


// CMemberFunctor0<CAsyncFileLoadPrerequisite*, void (CAsyncFileLoadPrerequisite::*)(), CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone>::operator()  (line 570, @0x0000000002554a50, libserver.so)  // inlines: operator()
void __fastcall CMemberFunctor0<CAsyncFileLoadPrerequisite *,void (CAsyncFileLoadPrerequisite::*)(void),CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>,CFuncMemPolicyNone>::operator()(
        CMemberFunctor0<CAsyncFileLoadPrerequisite*,void (CAsyncFileLoadPrerequisite::*)(),CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT> >,CFuncMemPolicyNone> *const this)
{
  void (*pfn)(CAsyncFileLoadPrerequisite *); // rdx

  pfn = this->m_Proxy.m_pfnProxied.__pfn;
  if ( (pfn & 1) != 0 )
    pfn = *(*(&this->m_Proxy.m_pObject->_vptr_IPrerequisite + this->m_Proxy.m_pfnProxied.__delta) + pfn - 1);
  pfn((this->m_Proxy.m_pObject + this->m_Proxy.m_pfnProxied.__delta));
}


// CMemberFunctor0<CAsyncFileLoadPrerequisite*, void (CAsyncFileLoadPrerequisite::*)(), CRefCounted1<CFunctor, CRefCountServiceBase<true, CRefMT> >, CFuncMemPolicyNone>::~CMemberFunctor0  (line 570, @0x0000000002554c80, libserver.so)  // inlines: ~CMemberFunctor0, ~CRefCountServiceBase, ~CRefCounted1
// calls: operator delete
void __fastcall CMemberFunctor0<CAsyncFileLoadPrerequisite *,void (CAsyncFileLoadPrerequisite::*)(void),CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>,CFuncMemPolicyNone>::~CMemberFunctor0(
        CMemberFunctor0<CAsyncFileLoadPrerequisite*,void (CAsyncFileLoadPrerequisite::*)(),CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT> >,CFuncMemPolicyNone> *const this)
{
  this->_vptr_IRefCounted = off_3FF1FD0;  // vptr: CRefCounted1<CFunctor,CRefCountServiceBase<true,CRefMT>>
  this->_vptr_CRefCountServiceBase = off_3FEABF0;  // vptr: CRefCountServiceBase<true,CRefMT>
  operator delete(this);
}


