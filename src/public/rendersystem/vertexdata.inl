
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CVertexData<VertexColorPos_t>::Release  (line 540, @0x00000000031a8f90, libserver.so)
// callers: CreatePhysicsBodySceneObject
void __fastcall CVertexData<VertexColorPos_t>::Release(CVertexData<VertexColorPos_t> *const this)
{
  __int64 v2; // rax

  if ( (*(&this->CVertexDataBase<VertexColorPos_t> + 47) & 0x40) != 0 && this->m_hVertexBuffer != 0 )
  {
    v2 = (*(this->m_pRenderContext->_vptr_IRenderContext + 78))(this->m_pRenderContext);
    (*(*v2 + 272LL))(v2, this->m_hVertexBuffer);
    this->m_hVertexBuffer = 0;
    *(&this->CVertexDataBase<VertexColorPos_t> + 47) &= ~0x40u;
  }
}


// CVertexData<VertexWireFrame_t>::Release  (line 540, @0x00000000031a9030, libserver.so)
// callers: CreatePhysicsEdgeSceneObject
void __fastcall CVertexData<VertexWireFrame_t>::Release(CVertexData<VertexWireFrame_t> *const this)
{
  __int64 v2; // rax

  if ( (*(&this->CVertexDataBase<VertexWireFrame_t> + 71) & 0x40) != 0 && this->m_hVertexBuffer != 0 )
  {
    v2 = (*(this->m_pRenderContext->_vptr_IRenderContext + 78))(this->m_pRenderContext);
    (*(*v2 + 272LL))(v2, this->m_hVertexBuffer);
    this->m_hVertexBuffer = 0;
    *(&this->CVertexDataBase<VertexWireFrame_t> + 71) &= ~0x40u;
  }
}


