
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_vertexops.cpp  (line 0, @0x0000000001a6d4a0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_vertexops_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CopyVertex  (line 8, @0x00000000031daf00, libserver.so)  // inlines: V_memcpy, memcpy
// calls: memcpy
// callers: CConvexHullBuilder::GenerateOutputMesh, DeIndexMesh, DuplicateMeshFaces, WeldVertices, CleanMesh, CreatePositionOnlyMeshFromMesh, SplitMesh
void __fastcall CopyVertex(float *pOut, const float *pIn, int nFloats)
{
  memcpy(pOut, pIn, 4LL * nFloats);
}


// SubtractVertex  (line 13, @0x00000000031daf20, libserver.so)
void __fastcall SubtractVertex(float *pOutput, const float *pLeft, const float *pRight, int nFloats)
{
  __int64 i; // rax

  for ( i = 0; nFloats > i; ++i )
    pOutput[i] = pLeft[i] - pRight[i];
}


// AddVertex  (line 21, @0x00000000031daf50, libserver.so)
void __fastcall AddVertex(float *pOutput, const float *pLeft, const float *pRight, int nFloats)
{
  __int64 i; // rax

  for ( i = 0; nFloats > i; ++i )
    pOutput[i] = pLeft[i] + pRight[i];
}


// MultiplyVertex  (line 29, @0x00000000031daf80, libserver.so)
void __fastcall MultiplyVertex(float *pOutput, const float *pLeft, const float *pRight, float nFloats)
{
  __int64 v4; // rax
  float v5; // xmm1_4

  v4 = 0;
  if ( nFloats > 0.0 )
  {
    do
    {
      pOutput[v4] = pLeft[v4] * pRight[v4];
      v5 = ++v4;
    }
    while ( nFloats > v5 );
  }
}


// AddVertexInPlace  (line 37, @0x00000000031dafc0, libserver.so)
void __fastcall AddVertexInPlace(float *pLeft, const float *pRight, int nFloats)
{
  __int64 i; // rax

  for ( i = 0; nFloats > i; ++i )
    pLeft[i] = pLeft[i] + pRight[i];
}


// MultiplyVertexInPlace  (line 45, @0x00000000031daff0, libserver.so)
void __fastcall MultiplyVertexInPlace(float *pLeft, float a2, const float flRight, int nFloats)
{
  float *v4; // rax
  float v5; // xmm1_4

  if ( nFloats > 0 )
  {
    v4 = &pLeft[nFloats - 1 + 1];
    do
    {
      v5 = *pLeft++;
      *(pLeft - 1) = v5 * a2;
    }
    while ( pLeft != v4 );
  }
}


// LerpVertex  (line 53, @0x00000000031db020, libserver.so)
// callers: TessellateTriangle
void __fastcall LerpVertex(float *pOutput, const float *pLeft, const float *pRight, float flLerp, int nFloats)
{
  __int64 i; // rax

  for ( i = 0; nFloats > i; ++i )
    pOutput[i] = ((pRight[i] - pLeft[i]) * flLerp) + pLeft[i];
}


// BaryCentricVertices  (line 61, @0x00000000031db060, libserver.so)
void __fastcall BaryCentricVertices(
        float *pOutput,
        float *p0,
        float *p1,
        float *p2,
        float flU,
        float flV,
        float flW,
        int nFloats)
{
  __int64 i; // rax

  for ( i = 0; nFloats > i; ++i )
    pOutput[i] = ((p0[i] * flU) + (p1[i] * flV)) + (p2[i] * flW);
}


