
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CIndexData<unsigned int>::Release  (line 412, @0x00000000031a8fe0, libserver.so)
// callers: CreatePhysicsBodySceneObject, CreatePhysicsEdgeSceneObject
void __fastcall CIndexData<unsigned int>::Release(CIndexData<unsigned int> *const this)
{
  __int64 v2; // rax

  if ( (*(&this->CIndexDataBase<unsigned int> + 31) & 0x40) != 0 && this->m_hIndexBuffer != 0 )
  {
    v2 = (*(this->m_pRenderContext->_vptr_IRenderContext + 78))(this->m_pRenderContext);
    (*(*v2 + 288LL))(v2, this->m_hIndexBuffer);
    this->m_hIndexBuffer = 0;
    *(&this->CIndexDataBase<unsigned int> + 31) &= ~0x40u;
  }
}


