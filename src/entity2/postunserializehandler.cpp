
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_postunserializehandler.cpp  (line 0, @0x0000000001a68ed0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_postunserializehandler_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CEntity2PostUnserializeHandlerRegistry::CEntity2PostUnserializeHandlerRegistry  (line 13, @0x00000000030d3e40, libserver.so)  // inlines: CUtlAbstractDelegate, CUtlDelegate, ClosurePtr, CopyFrom<FastDelegate0<void> >, FastDelegate0, SetMementoFrom
// globals: CEntity2PostUnserializeHandlerRegistry::sm_pHead
void __fastcall CEntity2PostUnserializeHandlerRegistry::CEntity2PostUnserializeHandlerRegistry(
        CEntity2PostUnserializeHandlerRegistry *const this,
        CUtlDelegate<void()> delegate)
{
  __int64 v2; // rsi
  __int64 v3; // rdx

  this->m_delegate.m_Closure.m_pthis = 0;
  this->m_delegate.m_Closure.m_pFunction.__pfn = 0;
  this->m_delegate.m_Closure.m_pFunction.__delta = 0;
  v3 = *(v2 + 16);
  this->m_delegate.m_Closure.m_pFunction.__pfn = *(v2 + 8);
  this->m_delegate.m_Closure.m_pFunction.__delta = v3;
  this->m_delegate.m_Closure.m_pthis = *v2;
  this->m_pNext = CEntity2PostUnserializeHandlerRegistry::sm_pHead;
  CEntity2PostUnserializeHandlerRegistry::sm_pHead = this;
}


// CEntity2PostUnserializeHandlerRegistry::ExecuteHandlerInitFuncs  (line 19, @0x00000000030d3e90, libserver.so)  // inlines: operator()
// callers: CSource2ServerSerializers::Connect, CSource2Server::Connect
// globals: CEntity2PostUnserializeHandlerRegistry::sm_pHead
void __cdecl CEntity2PostUnserializeHandlerRegistry::ExecuteHandlerInitFuncs()
{
  CEntity2PostUnserializeHandlerRegistry *i; // rbx
  void (*pfn)(detail::GenericClass *); // rax
  detail::GenericClass *v2; // rdi

  for ( i = CEntity2PostUnserializeHandlerRegistry::sm_pHead; i != 0; i = i->m_pNext )
  {
    pfn = i->m_delegate.m_Closure.m_pFunction.__pfn;
    v2 = (i->m_delegate.m_Closure.m_pthis + i->m_delegate.m_Closure.m_pFunction.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(pfn + *v2 - 1);
    pfn(v2);
  }
}


