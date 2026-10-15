
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CMeshVertexAttribute::~CMeshVertexAttribute  (line 89, @0x000000000224bf70, libserver.so)  // inlines: ~CUtlString
// calls: CUtlString::FreeMemoryBlock
// callers: CShatterGlassShard::GenerateProceduralShatterGlassShardModel, CMesh::AddAttribute, CMesh::SkinToBoneIfNotSkinned, CMesh::CalculateCurvature, CMesh::CalculateTangents, CMesh::CalculateSmoothNormals
void __fastcall CMeshVertexAttribute::~CMeshVertexAttribute(CMeshVertexAttribute *const this)
{
  if ( this->m_nameDelta.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_nameDelta);
  if ( this->m_name.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_name);
}


// CMesh::FindAttrArray<Vector>  (line 361, @0x000000000224c770, libserver.so)  // inlines: CAttrArray, GetAttrArray<Vector>
// calls: CMesh::FindFirstAttribute
// callers: CShatterGlassShard::GenerateProceduralShatterGlassShardModel
CMesh::CAttrArray<Vector> *__fastcall CMesh::FindAttrArray<Vector>(
        CMesh::CAttrArray<Vector> *__return_ptr retstr,
        CMesh *const this,
        const char *pFieldName)
{
  CMeshVertexAttribute *FirstAttribute; // rax
  __int64 m_nOffsetFloats; // rcx
  int m_nVertexStrideFloats; // edi
  unsigned __int64 v8; // kr00_8
  float *m_pVerts; // rax

  FirstAttribute = CMesh::FindFirstAttribute(this, pFieldName, 0);
  if ( FirstAttribute != 0 )
  {
    m_nOffsetFloats = FirstAttribute->m_nOffsetFloats;
    m_nVertexStrideFloats = this->m_nVertexStrideFloats;
    v8 = 4LL * FirstAttribute->m_nSizeFloats;
    m_pVerts = this->m_pVerts;
    retstr->m_nElementCount = this->m_nVertexCount;
    retstr->m_nStride = m_nVertexStrideFloats;
    retstr->m_pBase = &m_pVerts[m_nOffsetFloats];
    retstr->m_nAttrCount = v8 / 0xC;
  }
  else
  {
    retstr->m_pBase = 0;
    retstr->m_nStride = 0;
    retstr->m_nElementCount = 0;
    retstr->m_nAttrCount = 0;
  }
  return retstr;
}


