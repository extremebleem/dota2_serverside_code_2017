// Reconstructed from DWARF by pahole; not original source.

// src/meshutils/glview_buffer.cpp:514
class IVertColorBase {
	int ()() * * _vptr.IVertColorBase;  // +0x0
	IVertColorBase(IVertColorBase &);
	IVertColorBase(const IVertColorBase &);
	IVertColorBase();
	virtual Vector GetColor(RayTracingEnvironment *, int, const Vector &, const Vector &, const Vector &);

	// vtable[0] GetColor
	// sizeof = 8
};

// src/meshutils/glview_buffer.cpp:520
class CVertColorConstant : public IVertColorBase {
public:

	CVertColorConstant(CVertColorConstant &);
	CVertColorConstant(const CVertColorConstant &);
	CVertColorConstant(float, float, float);
	virtual Vector GetColor(RayTracingEnvironment *, int, const Vector &, const Vector &, const Vector &);

	// vtable[0] GetColor
	// sizeof = 24
};

// src/meshutils/glview_buffer.cpp:529
class CVertColorHalfLambert : public IVertColorBase {
public:

	float m_flRed;  // +0x14
	float m_flGreen;  // +0x18
	float m_flBlue;  // +0x1c
	CVertColorHalfLambert(CVertColorHalfLambert &);
	CVertColorHalfLambert(const CVertColorHalfLambert &);
	CVertColorHalfLambert(const Vector &, float, float, float);
	virtual Vector GetColor(RayTracingEnvironment *, int, const Vector &, const Vector &, const Vector &);

	// vtable[0] GetColor
	// sizeof = 32
};

// src/meshutils/glview_buffer.cpp:556
class CVertColorMaterial : public IVertColorBase {
public:

	const Vector * m_pMaterialColors;  // +0x8
	uint m_nMaterialCount;  // +0x10
	CVertColorMaterial(CVertColorMaterial &);
	CVertColorMaterial(const CVertColorMaterial &);
	CVertColorMaterial(const Vector *, int);
	virtual Vector GetColor(RayTracingEnvironment *, int, const Vector &, const Vector &, const Vector &);

	// vtable[0] GetColor
	// sizeof = 24
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_glview_buffer.cpp  (line 0, @0x0000000001a6d4d0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_glview_buffer_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CGlViewBuffer::ConvertToPrimitiveList  (line 17, @0x00000000031dea90, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<GLViewPoly_t>, CopyConstruct<Vector>, Element, GLViewPoly_t, GetFloat, GetType<float>, GetTypeBin<float>, GetTypeText<float>, GrowMemory, LowLevelByteSwap<float>, PeekGet, Purge, RemoveAll, StringToNumber<float>, SwapBufferToTargetEndian<float>, V_memcpy, memcpy, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlString::Clear, CUtlBuffer::SeekGet, CUtlBuffer::GetType<float>, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, CUtlString::Format, CUtlBuffer::CheckArbitraryPeekGet, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::SetCount, CUtlBuffer::CheckGet, CUtlMemory<Vector, int>::Grow, V_strtod, CUtlMemory<Vector, int>::Purge, CUtlMemory<GLViewPoly_t, int>::Grow (14 total)
// strings: "Syntax Error at offset: %d\n"
bool __fastcall CGlViewBuffer::ConvertToPrimitiveList(
        CGlViewBuffer *const this,
        GLViewPrimitiveList_t *const primitiveList,
        CUtlString *const errorString)
{
  bool v5; // zf
  int m_Size; // xmm0_4
  int v7; // r14d
  int v8; // r13d
  __int64 v10; // r12
  int v11; // eax
  Vector *v12; // rax
  __int64 v13; // r12
  int v14; // eax
  Vector *v15; // rax
  __int64 v16; // r12
  int v17; // eax
  __int64 v18; // r13
  GLViewPoly_t *v19; // r12
  GLViewPoly_t *v20; // rax
  int v21; // r14d
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  _DWORD *v25; // rcx
  _DWORD *v26; // rdx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int m_Get; // eax
  int v32; // eax
  int v33; // r12d
  __m128d v34; // xmm0
  int v35; // r12d
  __m128d v36; // xmm0
  int v37; // r12d
  __m128d v38; // xmm0
  int v39; // r12d
  __m128d v40; // xmm0
  int v41; // r12d
  __m128d v42; // xmm0
  int v43; // r12d
  __m128d v44; // xmm0
  __int64 v45; // r12
  int v46; // eax
  Vector *m_pMemory; // rcx
  bool v48; // al
  float v51; // [rsp+34h] [rbp-CCh]
  float v52; // [rsp+34h] [rbp-CCh]
  float v53; // [rsp+38h] [rbp-C8h]
  float v54; // [rsp+38h] [rbp-C8h]
  float vecPoint; // [rsp+3Ch] [rbp-C4h]
  float vecPointa; // [rsp+3Ch] [rbp-C4h]
  int vecPointb; // [rsp+3Ch] [rbp-C4h]
  int nIncrement; // [rsp+48h] [rbp-B8h] BYREF
  int v59; // [rsp+4Ch] [rbp-B4h] BYREF
  int v60; // [rsp+50h] [rbp-B0h] BYREF
  int v61; // [rsp+54h] [rbp-ACh] BYREF
  int v62; // [rsp+58h] [rbp-A8h] BYREF
  int v63; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned __int8 *v64; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int8 *v65; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int8 *v66; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int8 *v67; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int8 *v68; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int8 *v69; // [rsp+88h] [rbp-78h] BYREF
  CUtlVector<Vector,CUtlMemory<Vector,int> > points; // [rsp+90h] [rbp-70h] BYREF
  CUtlVector<Vector,CUtlMemory<Vector,int> > colors; // [rsp+B0h] [rbp-50h] BYREF

  CUtlString::Clear(errorString);
  v5 = (primitiveList->m_Lines.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  primitiveList->m_Lines.m_Size = 0;
  if ( v5 )
  {
    if ( primitiveList->m_Lines.m_Memory.m_pMemory != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      primitiveList->m_Lines.m_Memory.m_pMemory = 0;
    }
    primitiveList->m_Lines.m_Memory.m_nAllocationCount = 0;
  }
  CUtlBuffer::SeekGet(this, CUtlBuffer::SeekType_t::SEEK_HEAD, 0);
  if ( this->m_Error != 0 )
    return 1;
  do
  {
    CUtlBuffer::GetType<float>(this, &colors.m_Size);
    m_Size = colors.m_Size;
    if ( *&colors.m_Size == 0.0 )
    {
      vecPointb = colors.m_Size;
      v48 = CUtlBuffer::CheckGet(this, 4);
      m_Size = vecPointb;
      if ( !v48 )
        return 1;
    }
    v7 = *&m_Size;
    if ( *&m_Size <= 1 || v7 != *&m_Size )
    {
LABEL_12:
      CUtlString::Format(errorString, "Syntax Error at offset: %d\n", this->m_Get);
      return 0;
    }
    points.m_Size = 0;
    v8 = 0;
    points.m_Memory.m_pMemory = 0;
    points.m_Memory.m_nAllocationCount = 0;
    points.m_Memory.m_nGrowSize = 0;
    colors.m_Size = 0;
    colors.m_Memory.m_pMemory = 0;
    colors.m_Memory.m_nAllocationCount = 0;
    colors.m_Memory.m_nGrowSize = 0;
    do
    {
      if ( this->m_Error != 0 )
        goto LABEL_11;
      if ( (this->m_Flags & 1) != 0 )
      {
        nIncrement = 128;
        vecPoint = 0.0;
        if ( CUtlBuffer::CheckArbitraryPeekGet(this, 0, &nIncrement) )
        {
          v64 = &this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
          v39 = v64;
          v40.m128d_f64[0] = V_strtod(v64, &v64);
          vecPoint = _mm_movedup_pd(v40).m128d_f64[0];
          *&v68 = vecPoint;
          if ( v64 != v39 )
            this->m_Get += v64 - v39;
        }
LABEL_15:
        if ( (this->m_Flags & 1) != 0 )
          goto LABEL_16;
        goto LABEL_70;
      }
      vecPoint = 0.0;
      if ( !CUtlBuffer::CheckGet(this, 4) )
        goto LABEL_15;
      m_Get = this->m_Get;
      v5 = (*&this->m_Byteswap & 1) == 0;
      vecPoint = *&this->m_Memory.m_pMemory[m_Get - this->m_nOffset];
      *&v68 = vecPoint;
      if ( !v5 )
      {
        LOBYTE(v69) = BYTE3(v68);
        BYTE1(v69) = BYTE2(v68);
        BYTE2(v69) = BYTE1(v68);
        BYTE3(v69) = v68;
        vecPoint = *&v69;
      }
      v5 = (this->m_Flags & 1) == 0;
      this->m_Get = m_Get + 4;
      if ( !v5 )
      {
LABEL_16:
        v59 = 128;
        v53 = 0.0;
        if ( CUtlBuffer::CheckArbitraryPeekGet(this, 0, &v59) )
        {
          v65 = &this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
          v33 = v65;
          v34.m128d_f64[0] = V_strtod(v65, &v65);
          v53 = _mm_movedup_pd(v34).m128d_f64[0];
          *&v68 = v53;
          if ( v65 != v33 )
            this->m_Get += v65 - v33;
        }
        goto LABEL_17;
      }
LABEL_70:
      v53 = 0.0;
      if ( CUtlBuffer::CheckGet(this, 4) )
      {
        v32 = this->m_Get;
        v5 = (*&this->m_Byteswap & 1) == 0;
        v53 = *&this->m_Memory.m_pMemory[v32 - this->m_nOffset];
        *&v68 = v53;
        if ( !v5 )
        {
          LOBYTE(v69) = BYTE3(v68);
          BYTE1(v69) = BYTE2(v68);
          BYTE2(v69) = BYTE1(v68);
          BYTE3(v69) = v68;
          v53 = *&v69;
        }
        this->m_Get = v32 + 4;
      }
LABEL_17:
      if ( (this->m_Flags & 1) != 0 )
      {
        v60 = 128;
        v51 = 0.0;
        if ( CUtlBuffer::CheckArbitraryPeekGet(this, 0, &v60) )
        {
          v66 = &this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
          v37 = v66;
          v38.m128d_f64[0] = V_strtod(v66, &v66);
          v51 = _mm_movedup_pd(v38).m128d_f64[0];
          *&v68 = v51;
          if ( v66 != v37 )
            this->m_Get += v66 - v37;
        }
LABEL_19:
        v10 = points.m_Size;
        v11 = points.m_Size;
        if ( points.m_Size != points.m_Memory.m_nAllocationCount )
          goto LABEL_20;
LABEL_65:
        CUtlMemory<Vector,int>::Grow(&points.m_Memory, 1);
        v11 = points.m_Size;
        goto LABEL_20;
      }
      v51 = 0.0;
      if ( !CUtlBuffer::CheckGet(this, 4) )
        goto LABEL_19;
      v30 = this->m_Get;
      v5 = (*&this->m_Byteswap & 1) == 0;
      v51 = *&this->m_Memory.m_pMemory[v30 - this->m_nOffset];
      *&v68 = v51;
      if ( !v5 )
      {
        LOBYTE(v69) = BYTE3(v68);
        BYTE1(v69) = BYTE2(v68);
        BYTE2(v69) = BYTE1(v68);
        BYTE3(v69) = v68;
        v51 = *&v69;
      }
      v10 = points.m_Size;
      this->m_Get = v30 + 4;
      v11 = v10;
      if ( v10 == points.m_Memory.m_nAllocationCount )
        goto LABEL_65;
LABEL_20:
      points.m_Size = v11 + 1;
      v12 = &points.m_Memory.m_pMemory[v10];
      if ( v12 != 0 )
      {
        v12->x = vecPoint;
        v12->y = v53;
        v12->z = v51;
      }
      if ( (this->m_Flags & 1) != 0 )
      {
        v61 = 128;
        v54 = 0.0;
        if ( CUtlBuffer::CheckArbitraryPeekGet(this, 0, &v61) )
        {
          v67 = &this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
          v35 = v67;
          v36.m128d_f64[0] = V_strtod(v67, &v67);
          v54 = _mm_movedup_pd(v36).m128d_f64[0];
          *&v68 = v54;
          if ( v67 != v35 )
            this->m_Get += v67 - v35;
        }
      }
      else
      {
        v54 = 0.0;
        if ( CUtlBuffer::CheckGet(this, 4) )
        {
          v29 = this->m_Get;
          v5 = (*&this->m_Byteswap & 1) == 0;
          v54 = *&this->m_Memory.m_pMemory[v29 - this->m_nOffset];
          *&v68 = v54;
          if ( !v5 )
          {
            LOBYTE(v69) = BYTE3(v68);
            BYTE1(v69) = BYTE2(v68);
            BYTE2(v69) = BYTE1(v68);
            BYTE3(v69) = v68;
            v54 = *&v69;
          }
          this->m_Get = v29 + 4;
        }
      }
      if ( (this->m_Flags & 1) != 0 )
      {
        v62 = 128;
        vecPointa = 0.0;
        if ( CUtlBuffer::CheckArbitraryPeekGet(this, 0, &v62) )
        {
          v68 = &this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
          v41 = v68;
          v42.m128d_f64[0] = V_strtod(v68, &v68);
          vecPointa = _mm_movedup_pd(v42).m128d_f64[0];
          *&v67 = vecPointa;
          if ( v68 != v41 )
            this->m_Get += v68 - v41;
        }
      }
      else
      {
        vecPointa = 0.0;
        if ( CUtlBuffer::CheckGet(this, 4) )
        {
          v28 = this->m_Get;
          v5 = (*&this->m_Byteswap & 1) == 0;
          vecPointa = *&this->m_Memory.m_pMemory[v28 - this->m_nOffset];
          *&v67 = vecPointa;
          if ( !v5 )
          {
            LOBYTE(v69) = BYTE3(v67);
            BYTE1(v69) = BYTE2(v67);
            BYTE2(v69) = BYTE1(v67);
            BYTE3(v69) = v67;
            vecPointa = *&v69;
          }
          this->m_Get = v28 + 4;
        }
      }
      if ( (this->m_Flags & 1) != 0 )
      {
        v63 = 128;
        v52 = 0.0;
        if ( CUtlBuffer::CheckArbitraryPeekGet(this, 0, &v63) )
        {
          v69 = &this->m_Memory.m_pMemory[this->m_Get - this->m_nOffset];
          v43 = v69;
          v44.m128d_f64[0] = V_strtod(v69, &v69);
          v52 = _mm_movedup_pd(v44).m128d_f64[0];
          *&v68 = v52;
          if ( v69 != v43 )
            this->m_Get += v69 - v43;
        }
LABEL_28:
        v13 = colors.m_Size;
        v14 = colors.m_Size;
        if ( colors.m_Size != colors.m_Memory.m_nAllocationCount )
          goto LABEL_29;
LABEL_52:
        CUtlMemory<Vector,int>::Grow(&colors.m_Memory, 1);
        v14 = colors.m_Size;
        goto LABEL_29;
      }
      v52 = 0.0;
      if ( !CUtlBuffer::CheckGet(this, 4) )
        goto LABEL_28;
      v27 = this->m_Get;
      v5 = (*&this->m_Byteswap & 1) == 0;
      v52 = *&this->m_Memory.m_pMemory[v27 - this->m_nOffset];
      *&v68 = v52;
      if ( !v5 )
      {
        LOBYTE(v69) = BYTE3(v68);
        BYTE1(v69) = BYTE2(v68);
        BYTE2(v69) = BYTE1(v68);
        BYTE3(v69) = v68;
        v52 = *&v69;
      }
      v13 = colors.m_Size;
      this->m_Get = v27 + 4;
      v14 = v13;
      if ( v13 == colors.m_Memory.m_nAllocationCount )
        goto LABEL_52;
LABEL_29:
      colors.m_Size = v14 + 1;
      v15 = &colors.m_Memory.m_pMemory[v13];
      if ( v15 != 0 )
      {
        v15->x = v54;
        v15->y = vecPointa;
        v15->z = v52;
      }
      ++v8;
    }
    while ( v8 != v7 );
    if ( this->m_Error != 0 )
    {
LABEL_11:
      CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::~CUtlVectorBase(&colors);
      CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::~CUtlVectorBase(&points);
      goto LABEL_12;
    }
    if ( v8 == 2 )
    {
      v45 = primitiveList->m_Lines.m_Size;
      v46 = primitiveList->m_Lines.m_Size;
      if ( v45 == primitiveList->m_Lines.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<GLViewLine_t,int>::Grow(&primitiveList->m_Lines.m_Memory, 1);
        v46 = primitiveList->m_Lines.m_Size;
      }
      m_pMemory = points.m_Memory.m_pMemory;
      primitiveList->m_Lines.m_Size = v46 + 1;
      primitiveList->m_Lines.m_Memory.m_pMemory[v45].m_vecP0 = *m_pMemory;
      primitiveList->m_Lines.m_Memory.m_pMemory[v45].m_vecP1 = points.m_Memory.m_pMemory[1];
      primitiveList->m_Lines.m_Memory.m_pMemory[v45].m_vecColor = *colors.m_Memory.m_pMemory;
    }
    else
    {
      v16 = primitiveList->m_Polys.m_Size;
      v17 = primitiveList->m_Polys.m_Size;
      if ( v16 == primitiveList->m_Polys.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<GLViewPoly_t,int>::Grow(&primitiveList->m_Polys.m_Memory, 1);
        v17 = primitiveList->m_Polys.m_Size;
      }
      v18 = v16;
      v19 = 0;
      primitiveList->m_Polys.m_Size = v17 + 1;
      v20 = &primitiveList->m_Polys.m_Memory.m_pMemory[v18];
      if ( v20 != 0 )
      {
        v20->m_Points.m_Size = 0;
        v20->m_Points.m_Memory.m_pMemory = 0;
        v20->m_Points.m_Memory.m_nAllocationCount = 0;
        v20->m_Points.m_Memory.m_nGrowSize = 0;
        v19 = &primitiveList->m_Polys.m_Memory.m_pMemory[v18];
      }
      if ( v19 != &points )
      {
        v21 = points.m_Size;
        CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::SetCount(&v19->m_Points, points.m_Size);
        if ( v21 > 0 )
        {
          v22 = 0;
          do
          {
            v23 = v22;
            v24 = v22;
            v22 += 12;
            v25 = (&points.m_Memory.m_pMemory->x + v23);
            v26 = (&v19->m_Points.m_Memory.m_pMemory->x + v24);
            *v26 = *v25;
            v26[1] = v25[1];
            v26[2] = v25[2];
          }
          while ( v22 != 4 * (3LL * (v21 - 1) + 3) );
        }
        v19 = &primitiveList->m_Polys.m_Memory.m_pMemory[v18];
      }
      v19->m_vecColor = *colors.m_Memory.m_pMemory;
    }
    colors.m_Size = 0;
    if ( (colors.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<Vector,int>::Purge(&colors.m_Memory);
      if ( (colors.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<Vector,int>::Purge(&colors.m_Memory);
    }
    points.m_Size = 0;
    if ( (points.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<Vector,int>::Purge(&points.m_Memory);
      if ( (points.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<Vector,int>::Purge(&points.m_Memory);
    }
  }
  while ( this->m_Error == 0 );
  return 1;
}


// CGlViewBuffer::WriteVertex  (line 94, @0x00000000031db290, libserver.so)
// calls: CUtlBuffer::Printf
// callers: CMesh::WriteMeshWireframeToGlViewBuffer
// strings: "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n"
void __fastcall CGlViewBuffer::WriteVertex(
        CGlViewBuffer *const this,
        const Vector *const v,
        float a3,
        float r,
        float g,
        float b)
{
  CUtlBuffer::Printf(this, "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n", v->x, v->y, v->z, a3, r, g);
}


// CGlViewBuffer::WriteBox  (line 99, @0x00000000031db2e0, libserver.so)  // inlines: WriteVertex
// calls: CUtlBuffer::Printf
// callers: CGlViewBuffer::WriteBBox, CGlViewBuffer::WriteOrientedBox, CGlViewBuffer::WriteSweptBox
// strings: "2\n", "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n"
void __fastcall CGlViewBuffer::WriteBox(
        CGlViewBuffer *const this,
        Vector *vCorners,
        float a3,
        float r,
        float g,
        float b)
{
  CUtlBuffer::Printf(this, "2\n");
  CUtlBuffer::Printf(this, "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n", vCorners->x, vCorners->y, vCorners->z, a3, r, g);
  CUtlBuffer::Printf(this, "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n", vCorners[1].x, vCorners[1].y, vCorners[1].z, a3, r, g);
  CUtlBuffer::Printf(this, "2\n");
  CUtlBuffer::Printf(this, "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n", vCorners[2].x, vCorners[2].y, vCorners[2].z, a3, r, g);
  CUtlBuffer::Printf(this, "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n", vCorners[3].x, vCorners[3].y, vCorners[3].z, a3, r, g);
  CUtlBuffer::Printf(this, "2\n");
  CUtlBuffer::Printf(this, "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n", vCorners[4].x, vCorners[4].y, vCorners[4].z, a3, r, g);
  CUtlBuffer::Printf(this, "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n", vCorners[5].x, vCorners[5].y, vCorners[5].z, a3, r, g);
  CUtlBuffer::Printf(this, "2\n");
  CUtlBuffer::Printf(this, "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n", vCorners[6].x, vCorners[6].y, vCorners[6].z, a3, r, g);
  CUtlBuffer::Printf(this, "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n", vCorners[7].x, vCorners[7].y, vCorners[7].z, a3, r, g);
  CUtlBuffer::Printf(this, "2\n");
  CUtlBuffer::Printf(this, "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n", vCorners->x, vCorners->y, vCorners->z, a3, r, g);
  CUtlBuffer::Printf(this, "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n", vCorners[2].x, vCorners[2].y, vCorners[2].z, a3, r, g);
  CUtlBuffer::Printf(this, "2\n");
  CUtlBuffer::Printf(this, "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n", vCorners[1].x, vCorners[1].y, vCorners[1].z, a3, r, g);
  CUtlBuffer::Printf(this, "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n", vCorners[3].x, vCorners[3].y, vCorners[3].z, a3, r, g);
  CUtlBuffer::Printf(this, "2\n");
  CUtlBuffer::Printf(this, "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n", vCorners[4].x, vCorners[4].y, vCorners[4].z, a3, r, g);
  CUtlBuffer::Printf(this, "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n", vCorners[6].x, vCorners[6].y, vCorners[6].z, a3, r, g);
  CUtlBuffer::Printf(this, "2\n");
  CUtlBuffer::Printf(this, "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n", vCorners[5].x, vCorners[5].y, vCorners[5].z, a3, r, g);
  CUtlBuffer::Printf(this, "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n", vCorners[7].x, vCorners[7].y, vCorners[7].z, a3, r, g);
  CUtlBuffer::Printf(this, "2\n");
  CUtlBuffer::Printf(this, "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n", vCorners->x, vCorners->y, vCorners->z, a3, r, g);
  CUtlBuffer::Printf(this, "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n", vCorners[4].x, vCorners[4].y, vCorners[4].z, a3, r, g);
  CUtlBuffer::Printf(this, "2\n");
  CUtlBuffer::Printf(this, "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n", vCorners[1].x, vCorners[1].y, vCorners[1].z, a3, r, g);
  CUtlBuffer::Printf(this, "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n", vCorners[5].x, vCorners[5].y, vCorners[5].z, a3, r, g);
  CUtlBuffer::Printf(this, "2\n");
  CUtlBuffer::Printf(this, "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n", vCorners[2].x, vCorners[2].y, vCorners[2].z, a3, r, g);
  CUtlBuffer::Printf(this, "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n", vCorners[6].x, vCorners[6].y, vCorners[6].z, a3, r, g);
  CUtlBuffer::Printf(this, "2\n");
  CUtlBuffer::Printf(this, "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n", vCorners[3].x, vCorners[3].y, vCorners[3].z, a3, r, g);
  CUtlBuffer::Printf(this, "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n", vCorners[7].x, vCorners[7].y, vCorners[7].z, a3, r, g);
}


// CGlViewBuffer::WriteBBox  (line 144, @0x00000000031db990, libserver.so)
// calls: CGlViewBuffer::WriteBox
void __fastcall CGlViewBuffer::WriteBBox(
        CGlViewBuffer *const this,
        const Vector *const vMins,
        const Vector *const vMaxs,
        float r,
        float g,
        float b)
{
  int v6; // eax
  vec_t *p_z; // rcx
  float z; // xmm3_4
  Vector vCorners[8]; // [rsp+0h] [rbp-60h] BYREF

  v6 = 0;
  p_z = &vCorners[0].z;
  do
  {
    while ( (v6 & 1) != 0 )
    {
      *(p_z - 2) = vMaxs->x;
      if ( (v6 & 2) == 0 )
        goto LABEL_7;
LABEL_3:
      *(p_z - 1) = vMaxs->y;
      if ( (v6 & 4) == 0 )
        goto LABEL_8;
LABEL_4:
      z = vMaxs->z;
      ++v6;
      p_z += 3;
      *(p_z - 3) = z;
      if ( v6 == 8 )
        goto LABEL_9;
    }
    *(p_z - 2) = vMins->x;
    if ( (v6 & 2) != 0 )
      goto LABEL_3;
LABEL_7:
    *(p_z - 1) = vMins->y;
    if ( (v6 & 4) != 0 )
      goto LABEL_4;
LABEL_8:
    z = vMins->z;
    ++v6;
    p_z += 3;
    *(p_z - 3) = z;
  }
  while ( v6 != 8 );
LABEL_9:
  CGlViewBuffer::WriteBox(this, vCorners, r, g, b, z);
}


// CGlViewBuffer::WriteOrientedBox  (line 157, @0x00000000031dba20, libserver.so)  // inlines: TransformPoint, TransformVector, operator=
// calls: CGlViewBuffer::WriteBox
void __fastcall CGlViewBuffer::WriteOrientedBox(
        CGlViewBuffer *const this,
        const Vector *const vMins,
        const Vector *const vMaxs,
        const CTransform *const boxRoot,
        __m128i r,
        float g,
        float b)
{
  float v7; // r9d
  float x; // xmm12_4
  vec_t *p_z; // rax
  float z; // xmm11_4
  float y; // xmm3_4
  float v12; // xmm6_4
  float v13; // xmm4_4
  float v14; // xmm13_4
  float v15; // xmm5_4
  float v16; // xmm8_4
  float v17; // xmm9_4
  float v18; // xmm6_4
  float v19; // xmm0_4
  float v20; // xmm12_4
  float v21; // xmm8_4
  float v22; // xmm7_4
  float v23; // xmm15_4
  float v24; // xmm10_4
  float v25; // xmm3_4
  float v26; // xmm14_4
  float v27; // xmm15_4
  float v28; // xmm9_4
  int v29; // ecx
  float v30; // xmm11_4
  float v31; // xmm7_4
  float v32; // xmm3_4
  float v33; // xmm5_4
  float v34; // xmm6_4
  float v35; // xmm4_4
  float v36; // xmm0_4
  float v37; // xmm6_4
  float v38; // xmm3_4
  float v39; // [rsp-Ch] [rbp-74h]
  float v40; // [rsp-8h] [rbp-70h]
  float v41; // [rsp-4h] [rbp-6Ch]
  Vector vCorners[8]; // [rsp+0h] [rbp-68h] BYREF

  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(r));
  x = boxRoot->m_orientation.x;
  p_z = &vCorners[0].z;
  z = boxRoot->m_orientation.z;
  y = boxRoot->m_orientation.y;
  v12 = boxRoot->m_orientation.w + boxRoot->m_orientation.w;
  v13 = z * (x + x);
  v41 = boxRoot->m_vPosition.z;
  v14 = boxRoot->m_vPosition.y;
  v15 = y * v12;
  v16 = (x + x) * y;
  v17 = x * v12;
  v18 = v12 * z;
  v19 = 1.0 - (x * (x + x));
  v40 = v13 - v15;
  v20 = v16 + v18;
  v39 = v15 + v13;
  v21 = v16 - v18;
  v22 = (y + y) * y;
  v23 = z * (y + y);
  v24 = v23 - v17;
  v25 = (z + z) * z;
  v26 = v19 - v22;
  v27 = v23 + v17;
  v28 = boxRoot->m_vPosition.x;
  v29 = 0;
  v30 = v19 - v25;
  v31 = (1.0 - v22) - v25;
  do
  {
    if ( (v29 & 1) != 0 )
    {
      *(p_z - 2) = vMaxs->x;
      if ( (v29 & 2) != 0 )
        goto LABEL_3;
    }
    else
    {
      *(p_z - 2) = vMins->x;
      if ( (v29 & 2) != 0 )
      {
LABEL_3:
        *(p_z - 1) = vMaxs->y;
        if ( (v29 & 4) != 0 )
          goto LABEL_4;
        goto LABEL_9;
      }
    }
    *(p_z - 1) = vMins->y;
    if ( (v29 & 4) != 0 )
    {
LABEL_4:
      v32 = vMaxs->z;
      goto LABEL_5;
    }
LABEL_9:
    v32 = vMins->z;
LABEL_5:
    v33 = *(p_z - 2);
    ++v29;
    p_z += 3;
    v34 = *(p_z - 4) * v30;
    v35 = *(p_z - 4) * v27;
    *(p_z - 5) = (((v33 * v31) + v28) + (*(p_z - 4) * v21)) + (v39 * v32);
    v36 = ((v33 * v20) + v14) + v34;
    v37 = v32 * v24;
    v38 = v32 * v26;
    *(p_z - 4) = v36 + v37;
    *(p_z - 3) = (((v33 * v40) + v41) + v35) + v38;
  }
  while ( v29 != 8 );
  CGlViewBuffer::WriteBox(this, vCorners, v7, g, b, v38);
}


// CGlViewBuffer::WriteOrientedBox  (line 172, @0x00000000031dbc30, libserver.so)  // inlines: V3Mul
// calls: CGlViewBuffer::WriteBox
void __fastcall CGlViewBuffer::WriteOrientedBox(
        CGlViewBuffer *const this,
        const Vector *const vMins,
        const Vector *const vMaxs,
        const VMatrix *const xform,
        __m128i r,
        float g,
        float b)
{
  float v7; // r9d
  int v8; // eax
  float v9; // xmm15_4
  float v10; // xmm14_4
  float v11; // xmm13_4
  float v12; // xmm12_4
  float v13; // xmm11_4
  float v14; // xmm10_4
  float v15; // xmm9_4
  float v16; // xmm8_4
  Vector *v17; // rcx
  float x; // xmm5_4
  float y; // xmm4_4
  float z; // xmm3_4
  float v21; // xmm6_4
  float v22; // xmm7_4
  float v23; // xmm3_4
  float v24; // [rsp-20h] [rbp-88h]
  float v25; // [rsp-1Ch] [rbp-84h]
  float v26; // [rsp-18h] [rbp-80h]
  float v27; // [rsp-14h] [rbp-7Ch]
  float v28; // [rsp-10h] [rbp-78h]
  float v29; // [rsp-Ch] [rbp-74h]
  float v30; // [rsp-8h] [rbp-70h]
  float v31; // [rsp-4h] [rbp-6Ch]
  Vector vCorners[8]; // [rsp+0h] [rbp-68h] BYREF

  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(r));
  v8 = 0;
  v31 = xform->m[3][0];
  v30 = xform->m[3][1];
  v29 = xform->m[1][2];
  v28 = xform->m[1][3];
  v27 = xform->m[2][0];
  v26 = xform->m[2][1];
  v9 = xform->m[3][2];
  v25 = xform->m[2][2];
  v10 = xform->m[3][3];
  v24 = xform->m[2][3];
  v11 = xform->m[0][0];
  v12 = xform->m[0][1];
  v13 = xform->m[0][2];
  v14 = xform->m[0][3];
  v15 = xform->m[1][0];
  v16 = xform->m[1][1];
  v17 = vCorners;
  do
  {
    if ( (v8 & 1) != 0 )
    {
      x = vMaxs->x;
      if ( (v8 & 2) != 0 )
        goto LABEL_3;
    }
    else
    {
      x = vMins->x;
      if ( (v8 & 2) != 0 )
      {
LABEL_3:
        y = vMaxs->y;
        if ( (v8 & 4) != 0 )
          goto LABEL_4;
        goto LABEL_9;
      }
    }
    y = vMins->y;
    if ( (v8 & 4) != 0 )
    {
LABEL_4:
      z = vMaxs->z;
      goto LABEL_5;
    }
LABEL_9:
    z = vMins->z;
LABEL_5:
    ++v8;
    ++v17;
    v21 = 1.0 / ((((v31 * x) + (v30 * y)) + (z * v9)) + v10);
    v17[-1].x = ((((x * v11) + (y * v12)) + (z * v13)) + v14) * v21;
    v22 = v29 * z;
    v23 = z * v25;
    v17[-1].y = ((((x * v15) + (y * v16)) + v22) + v28) * v21;
    v17[-1].z = ((((x * v27) + (y * v26)) + v23) + v24) * v21;
  }
  while ( v8 != 8 );
  CGlViewBuffer::WriteBox(this, vCorners, v7, g, b, v23);
}


// CGlViewBuffer::WriteLine  (line 188, @0x00000000031dbdf0, libserver.so)  // inlines: WriteVertex
// calls: CUtlBuffer::Printf
// callers: CGlViewBuffer::WriteDiscWireframe, CGlViewBuffer::WriteCMeshWireframe, CGlViewBuffer::WriteSweptBox, CGlViewBuffer::WriteWireframePolyhedron
// strings: "2\n", "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n"
void __fastcall CGlViewBuffer::WriteLine(
        CGlViewBuffer *const this,
        const Vector *const p0,
        const Vector *const p1,
        float r,
        float g,
        float b)
{
  double v9; // xmm3_8
  double rb; // [rsp+8h] [rbp-38h]
  double gb; // [rsp+10h] [rbp-30h]
  double bb; // [rsp+18h] [rbp-28h]

  CUtlBuffer::Printf(this, "2\n");
  v9 = r;
  gb = g;
  rb = b;
  bb = v9;
  CUtlBuffer::Printf(this, "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n", p0->x, p0->y, p0->z, v9, gb, rb);
  CUtlBuffer::Printf(this, "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n", p1->x, p1->y, p1->z, bb, gb, rb);
}


// CGlViewBuffer::WriteDisc  (line 195, @0x00000000031dbef0, libserver.so)  // inlines: SinCos, VectorAdd, VectorMultiply, WritePolygon, operator*, operator+, operator=
// calls: sincosf, CGlViewBuffer::WritePolygon, __stack_chk_fail
void __fastcall CGlViewBuffer::WriteDisc(
        CGlViewBuffer *const this,
        const Vector *const vCenter,
        const Vector *const vAxis0,
        const Vector *const vAxis1,
        float flRadius,
        float r,
        float g,
        float b,
        int nSegs)
{
  void *v11; // rsp
  float v14; // xmm7_4
  Vector *v15; // r15
  Vector *v16; // r13
  float v17; // xmm1_4
  float v18; // xmm6_4
  float v19; // xmm3_4
  float v20; // xmm5_4
  float v22; // [rsp+10h] [rbp-80h] BYREF
  float ra; // [rsp+14h] [rbp-7Ch]
  CGlViewBuffer *v24; // [rsp+18h] [rbp-78h]
  Vector *pVerts; // [rsp+20h] [rbp-70h]
  float *sinx; // [rsp+28h] [rbp-68h]
  float *cosx; // [rsp+30h] [rbp-60h]
  int nVertCount; // [rsp+38h] [rbp-58h]
  float x; // [rsp+3Ch] [rbp-54h]
  float v30; // [rsp+40h] [rbp-50h]
  float flAngle; // [rsp+44h] [rbp-4Ch]
  float flCos; // [rsp+48h] [rbp-48h] BYREF
  float flSin; // [rsp+4Ch] [rbp-44h] BYREF
  unsigned __int64 v34; // [rsp+58h] [rbp-38h]

  ra = r;
  v34 = __readfsqword(0x28u);
  v24 = this;
  v22 = g;
  nVertCount = nSegs;
  v11 = alloca(((12LL * nSegs + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
  pVerts = (&v22 & 0xFFFFFFFFFFFFFFEFLL);
  x = 6.283185307179586 / nSegs;
  if ( nSegs > 0 )
  {
    v14 = x;
    v15 = pVerts;
    v16 = &pVerts[(nVertCount - 1) + 1];
    sinx = &flSin;
    cosx = &flCos;
    do
    {
      v30 = flRadius;
      flAngle = v14;
      ++v15;
      sincosf(v14, sinx, cosx);
      flRadius = v30;
      v17 = vAxis1->z * flSin;
      v18 = ((vAxis0->z * flCos) * v30) + vCenter->z;
      v19 = flSin * vAxis1->x;
      v20 = ((flCos * vAxis0->x) * v30) + vCenter->x;
      v15[-1].y = ((vAxis1->y * flSin) * v30) + (((vAxis0->y * flCos) * v30) + vCenter->y);
      v15[-1].z = (v17 * flRadius) + v18;
      v15[-1].x = (v19 * flRadius) + v20;
      v14 = flAngle + x;
    }
    while ( v15 != v16 );
    goto LABEL_4;
  }
  if ( nSegs != 0 )
LABEL_4:
    CGlViewBuffer::WritePolygon(v24, pVerts, nVertCount, ra, v22, b);
}


// CGlViewBuffer::WriteDiscWireframe  (line 211, @0x00000000031dc0d0, libserver.so)  // inlines: SinCos, VectorAdd, VectorMultiply, operator*, operator+, operator=
// calls: sincosf, CGlViewBuffer::WriteLine
// callers: CGlViewBuffer::WriteSphere
void __fastcall CGlViewBuffer::WriteDiscWireframe(
        CGlViewBuffer *const this,
        const Vector *const vCenter,
        const Vector *const vAxis0,
        const Vector *const vAxis1,
        float flRadius,
        float r,
        float g,
        float b,
        int nSegs)
{
  vec_t x; // xmm5_4
  __m128d v12; // xmm0
  float y; // xmm2_4
  float v14; // xmm6_4
  vec_t v15; // xmm1_4
  float z; // xmm3_4
  float v17; // xmm8_4
  float v18; // xmm7_4
  int v19; // r13d
  float v21; // xmm7_4
  float v24; // xmm1_4
  float v25; // xmm3_4
  float v30; // [rsp+38h] [rbp-78h]
  float v31; // [rsp+3Ch] [rbp-74h]
  float v32; // [rsp+40h] [rbp-70h]
  float v33; // [rsp+44h] [rbp-6Ch]
  float v34; // [rsp+48h] [rbp-68h]
  float v35; // [rsp+4Ch] [rbp-64h]
  float v36; // [rsp+50h] [rbp-60h]
  float flAngle; // [rsp+54h] [rbp-5Ch]
  float v38; // [rsp+58h] [rbp-58h] BYREF
  float v39; // [rsp+5Ch] [rbp-54h] BYREF
  Vector vLast; // [rsp+60h] [rbp-50h] BYREF
  Vector vPos; // [rsp+70h] [rbp-40h] BYREF

  x = vCenter->x;
  v12 = 0x401921FB54442D18uLL;
  y = vAxis0->y;
  v14 = vCenter->y;
  v12.m128d_f64[0] = 6.283185307179586 / nSegs;
  v15 = vAxis0->x;
  z = vAxis0->z;
  v17 = _mm_movedup_pd(v12).m128d_f64[0];
  v18 = vCenter->z;
  vLast.x = (flRadius * vAxis0->x) + vCenter->x;
  vLast.y = (flRadius * y) + v14;
  vLast.z = (flRadius * z) + v18;
  if ( nSegs > 0 )
  {
    v30 = v18;
    v19 = 0;
    v21 = v17;
    v31 = v14;
    v32 = x;
    v33 = z;
    v34 = y;
    v35 = v15;
    while ( 1 )
    {
      flAngle = v21;
      v36 = flRadius;
      ++v19;
      sincosf(v21, &v39, &v38);
      v24 = vAxis1->z * v39;
      v25 = v39 * vAxis1->x;
      vPos.y = ((vAxis1->y * v39) * v36) + (((v34 * v38) * v36) + v31);
      vPos.z = (v24 * v36) + (((v33 * v38) * v36) + v30);
      vPos.x = (v25 * v36) + (((v38 * v35) * v36) + v32);
      CGlViewBuffer::WriteLine(this, &vLast, &vPos, r, g, b);
      vLast = vPos;
      v21 = flAngle + v17;
      if ( v19 == nSegs )
        break;
      v35 = vAxis0->x;
      v34 = vAxis0->y;
      v33 = vAxis0->z;
      v32 = vCenter->x;
      flRadius = v36;
      v31 = vCenter->y;
      v30 = vCenter->z;
    }
  }
}


// GenerateRotatedAxis  (line 227, @0x00000000031db210, libserver.so)  // inlines: SinCos, VectorAdd, VectorMultiply, operator*, operator+
// calls: sincosf
// callers: CGlViewBuffer::WriteSphere, CGeoViewBuffer::WriteSphere
__m128i __fastcall GenerateRotatedAxis(
        const Vector *const vAxis0,
        const Vector *const vAxis1,
        float a3,
        float flRotation)
{
  float v6; // xmm3_4
  float flCos; // [rsp+18h] [rbp-28h] BYREF
  float flSin; // [rsp+1Ch] [rbp-24h] BYREF
  __m128i v10; // [rsp+20h] [rbp-20h] BYREF

  sincosf(a3, &flSin, &flCos);
  v6 = flCos * vAxis0->x;
  *&v10.m128i_i32[1] = (vAxis1->y * flSin) + (vAxis0->y * flCos);
  *v10.m128i_i32 = (flSin * 0.0) + v6;
  return _mm_loadl_epi64(&v10);
}


// CGlViewBuffer::WriteSphere  (line 234, @0x00000000031dc350, libserver.so)  // inlines: DEG2RAD, Vector
// calls: GenerateRotatedAxis, CGlViewBuffer::WriteDiscWireframe
void __fastcall CGlViewBuffer::WriteSphere(
        CGlViewBuffer *const this,
        const Vector *const vCenter,
        float a3,
        float flRadius,
        float r,
        float g,
        float b)
{
  int v7; // r15d
  float v10; // xmm4_4
  vec_t v11; // xmm1_4
  float v12; // xmm1_4
  vec_t v13; // xmm1_4
  float v14; // [rsp+1Ch] [rbp-84h]
  Vector vAxis0; // [rsp+30h] [rbp-70h] BYREF
  Vector vAxis1; // [rsp+40h] [rbp-60h] BYREF
  Vector v21; // [rsp+50h] [rbp-50h] BYREF
  Vector v22; // [rsp+60h] [rbp-40h] BYREF

  v7 = 0;
  do
  {
    v10 = v7;
    v22.x = 0.0;
    ++v7;
    v22.y = 1.0;
    v22.z = 0.0;
    v21.x = 1.0;
    v21.y = 0.0;
    v21.z = 0.0;
    v14 = ((v10 * 180.0) * 0.125) * 0.017453292;
    *&vAxis0.x = GenerateRotatedAxis(&v21, &v22, v14, flRadius).m128i_u64[0];
    vAxis0.z = v11;
    v22.x = 0.0;
    v22.y = 0.0;
    v22.z = 1.0;
    CGlViewBuffer::WriteDiscWireframe(this, vCenter, &vAxis0, &v22, a3, flRadius, r, g, 32);
    v22.x = 0.0;
    v22.y = 0.0;
    v22.z = 1.0;
    v21.x = 0.0;
    v21.y = 1.0;
    v21.z = 0.0;
    *&vAxis1.x = GenerateRotatedAxis(&v21, &v22, v14, v12).m128i_u64[0];
    vAxis1.z = v13;
    v22.x = 1.0;
    v22.y = 0.0;
    v22.z = 0.0;
    CGlViewBuffer::WriteDiscWireframe(this, vCenter, &v22, &vAxis1, a3, flRadius, r, g, 32);
  }
  while ( v7 != 8 );
}


// CGlViewBuffer::WritePolygon  (line 246, @0x00000000031db0b0, libserver.so)  // inlines: WriteVertex
// calls: CUtlBuffer::Printf
// callers: CGlViewBuffer::WriteDisc, CGlViewBuffer::WritePolygon, CGlViewBuffer::WriteSolidPolyhedron
// strings: "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n"
void __fastcall CGlViewBuffer::WritePolygon(
        CGlViewBuffer *const this,
        const Vector *pVerts,
        int nVertCount,
        float r,
        float g,
        float b)
{
  const Vector *v9; // r12
  float x; // xmm0_4
  float z; // xmm2_4
  float y; // xmm1_4

  CUtlBuffer::Printf(this, "%d\n", nVertCount);
  if ( nVertCount > 0 )
  {
    v9 = &pVerts[(nVertCount - 1) + 1];
    do
    {
      x = pVerts->x;
      z = pVerts->z;
      y = pVerts->y;
      ++pVerts;
      CUtlBuffer::Printf(this, "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n", x, y, z, r, g, b);
    }
    while ( pVerts != v9 );
  }
}


// CGlViewBuffer::WritePolygon  (line 246, @0x00000000031dc500, libserver.so)
// calls: CGlViewBuffer::WritePolygon
void __fastcall CGlViewBuffer::WritePolygon(
        CGlViewBuffer *const this,
        const Vector *pVerts,
        int nVertCount,
        float r,
        float g,
        float b)
{
  if ( nVertCount != 0 )
    CGlViewBuffer::WritePolygon(this, pVerts, nVertCount, r, g, b);
}


// CGlViewBuffer::WritePolygonIndexed  (line 258, @0x00000000031dc520, libserver.so)  // inlines: WriteVertex
// calls: CUtlBuffer::Printf
// callers: CGlViewBuffer::WriteAmbientCube
// strings: "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n"
void __fastcall CGlViewBuffer::WritePolygonIndexed(
        CGlViewBuffer *const this,
        const Vector *pVerts,
        const Vector *pColors,
        const int *pIndices,
        int nIndexCount)
{
  const int *v9; // r15
  __int64 v10; // rax

  if ( nIndexCount != 0 )
  {
    CUtlBuffer::Printf(this, "%d\n", nIndexCount);
    if ( nIndexCount > 0 )
    {
      v9 = &pIndices[nIndexCount - 1 + 1];
      do
      {
        v10 = *pIndices++;
        v10 *= 12;
        CUtlBuffer::Printf(
          this,
          "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n",
          *(&pVerts->x + v10),
          *(&pVerts->y + v10),
          *(&pVerts->z + v10),
          *(&pColors->x + v10),
          *(&pColors->y + v10),
          *(&pColors->z + v10));
      }
      while ( pIndices != v9 );
    }
  }
}


// CGlViewBuffer::WritePolygon  (line 271, @0x00000000031dc5f0, libserver.so)  // inlines: WriteVertex
// calls: CUtlBuffer::Printf
// strings: "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n"
void __fastcall CGlViewBuffer::WritePolygon(
        CGlViewBuffer *const this,
        const Vector *pVerts,
        const Vector *pColors,
        int nVertCount)
{
  const Vector *v8; // r14
  float z; // xmm5_4
  float y; // xmm4_4
  float x; // xmm3_4

  if ( nVertCount != 0 )
  {
    CUtlBuffer::Printf(this, "%d\n", nVertCount);
    if ( nVertCount > 0 )
    {
      v8 = &pColors[(nVertCount - 1) + 1];
      do
      {
        z = pColors->z;
        y = pColors->y;
        x = pColors->x;
        ++pColors;
        CUtlBuffer::Printf(this, "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n", pVerts->x, pVerts->y, pVerts->z, x, y, z);
        ++pVerts;
      }
      while ( pColors != v8 );
    }
  }
}


// CGlViewBuffer::WritePolygonWireframe  (line 284, @0x00000000031dc6a0, libserver.so)  // inlines: WriteVertex
// calls: CUtlBuffer::Printf
// strings: "2\n", "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n"
void __fastcall CGlViewBuffer::WritePolygonWireframe(
        CGlViewBuffer *const this,
        const Vector *pVerts,
        int nVertCount,
        float r,
        float g,
        float b)
{
  int v7; // r12d
  const Vector *v9; // r15
  int v10; // r14d
  double v12; // [rsp+8h] [rbp-48h]
  double v13; // [rsp+10h] [rbp-40h]
  double v14; // [rsp+18h] [rbp-38h]

  if ( nVertCount != 0 )
  {
    v7 = nVertCount - 1;
    if ( nVertCount > 0 )
    {
      v12 = b;
      v9 = pVerts;
      v10 = 0;
      v13 = g;
      v14 = r;
      while ( 1 )
      {
        ++v9;
        CUtlBuffer::Printf(this, "2\n");
        CUtlBuffer::Printf(
          this,
          "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n",
          pVerts[v7].x,
          pVerts[v7].y,
          pVerts[v7].z,
          v14,
          v13,
          v12);
        CUtlBuffer::Printf(this, "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n", v9[-1].x, v9[-1].y, v9[-1].z, v14, v13, v12);
        if ( v10 + 1 == nVertCount )
          break;
        v7 = v10++;
      }
    }
  }
}


// CGlViewBuffer::WriteKDTree  (line 299, @0x00000000031dc7c0, libserver.so)  // inlines: GetTriangle, MajorIndex, MinorIndex, WriteVertex, operator[]
// calls: Msg, CacheOptimizedTriangle_t::ExtractVerticesFromIntersectionFormat, CUtlBuffer::Printf
// strings: "Writing kdTree with %d triangles\n", "3\n", "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n"
void __fastcall CGlViewBuffer::WriteKDTree(
        CGlViewBuffer *const this,
        RayTracingEnvironment *pTree,
        uint16 nSkipFlagsMask,
        float r,
        float g,
        float b)
{
  int m_Size; // ebx
  int v9; // r13d
  RayTracingEnvironment *v10; // r15
  const CacheOptimizedTriangle_t *v11; // rdi
  Vector *v12; // r14
  float z; // xmm2_4
  double x; // xmm0_8
  float y; // xmm1_4
  Vector *v19; // [rsp+28h] [rbp-88h] BYREF
  Vector *v1; // [rsp+30h] [rbp-80h]
  Vector *v2; // [rsp+38h] [rbp-78h]
  CGlViewBuffer *thisa; // [rsp+40h] [rbp-70h]
  Vector *v0; // [rsp+48h] [rbp-68h]
  Vector v[3]; // [rsp+50h] [rbp-60h] BYREF

  thisa = this;
  m_Size = pTree->m_optimizedTriangleList.m_Size;
  Msg("Writing kdTree with %d triangles\n", m_Size);
  if ( m_Size > 0 )
  {
    v0 = v;
    v2 = &v[2];
    v9 = 0;
    v1 = &v[1];
    v10 = pTree;
    v19 = (&v19 + 4);
    do
    {
      while ( 1 )
      {
        v11 = &v10->m_optimizedTriangleList.m_Memory.m_pMemory[v9 >> (*(&v10->m_optimizedTriangleList.m_Memory + 15) >> 3)][v9 & *(&v10->m_optimizedTriangleList.m_Memory + 3) & 0x7FFFFFF];
        if ( (nSkipFlagsMask & v11->m_Data.m_IntersectData.m_nFlags) == 0
          && CacheOptimizedTriangle_t::ExtractVerticesFromIntersectionFormat(v11, v0, v1, v2) )
        {
          break;
        }
        if ( ++v9 == m_Size )
          return;
      }
      CUtlBuffer::Printf(thisa, "3\n");
      v12 = v0;
      do
      {
        z = v12[2].z;
        x = v12[2].x;
        y = v12[2].y;
        --v12;
        CUtlBuffer::Printf(thisa, "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n", x, y, z, r, g, b);
      }
      while ( v12 != v19 );
      ++v9;
    }
    while ( v9 != m_Size );
  }
}


// CGlViewBuffer::WriteKDTree_HalfLambert  (line 323, @0x00000000031dc980, libserver.so)  // inlines: CrossProduct, DotProduct, GetTriangle, MajorIndex, MinorIndex, Normalized, VectorSubtract, WriteVertex, operator-, operator[]
// calls: Msg, VectorNormalize, CacheOptimizedTriangle_t::ExtractVerticesFromIntersectionFormat, CUtlBuffer::Printf
// strings: "Writing kdTree with %d triangles\n", "3\n", "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n"
void __fastcall CGlViewBuffer::WriteKDTree_HalfLambert(
        CGlViewBuffer *const this,
        RayTracingEnvironment *pTree,
        uint16 nSkipFlagsMask,
        const Vector *const vLightDirection,
        float r,
        float g,
        float b)
{
  int m_Size; // r14d
  __int64 v11; // kr00_8
  RayTracingEnvironment *v12; // rax
  int v13; // r15d
  RayTracingEnvironment *v14; // r12
  const CacheOptimizedTriangle_t *v15; // rdi
  float v16; // xmm0_4
  Vector *v17; // rbx
  float v18; // xmm2_4
  float y; // xmm1_4
  double x; // xmm0_8
  uint16 v21; // [rsp+6h] [rbp-BAh]
  float z; // [rsp+24h] [rbp-9Ch]
  double v26; // [rsp+28h] [rbp-98h]
  double v27; // [rsp+30h] [rbp-90h]
  double v28; // [rsp+38h] [rbp-88h] BYREF
  Vector *flLight; // [rsp+40h] [rbp-80h]
  CGlViewBuffer *thisa; // [rsp+48h] [rbp-78h]
  Vector vNormal; // [rsp+50h] [rbp-70h] BYREF
  Vector v[3]; // [rsp+60h] [rbp-60h] BYREF

  thisa = this;
  m_Size = pTree->m_optimizedTriangleList.m_Size;
  Msg("Writing kdTree with %d triangles\n", m_Size);
  v[0] = *vLightDirection;
  VectorNormalize(v);
  v11 = *&v[0].x;
  z = v[0].z;
  if ( m_Size > 0 )
  {
    v12 = pTree;
    v13 = 0;
    v14 = v12;
    do
    {
      while ( 1 )
      {
        v15 = &v14->m_optimizedTriangleList.m_Memory.m_pMemory[v13 >> (*(&v14->m_optimizedTriangleList.m_Memory + 15) >> 3)][v13 & *(&v14->m_optimizedTriangleList.m_Memory + 3) & 0x7FFFFFF];
        if ( (nSkipFlagsMask & v15->m_Data.m_IntersectData.m_nFlags) == 0
          && CacheOptimizedTriangle_t::ExtractVerticesFromIntersectionFormat(v15, v, &v[1], &v[2]) )
        {
          break;
        }
        if ( ++v13 == m_Size )
          return;
      }
      vNormal.y = ((v[1].z - v[0].z) * (v[2].x - v[0].x)) - ((v[2].z - v[0].z) * (v[1].x - v[0].x));
      vNormal.x = ((v[2].z - v[0].z) * (v[1].y - v[0].y)) - ((v[2].y - v[0].y) * (v[1].z - v[0].z));
      vNormal.z = ((v[1].x - v[0].x) * (v[2].y - v[0].y)) - ((v[1].y - v[0].y) * (v[2].x - v[0].x));
      VectorNormalize(&vNormal);
      *&flLight = ((((((*&v11 * vNormal.x) + (*(&v11 + 1) * vNormal.y)) + (z * vNormal.z)) * 0.5) + 0.5) * 0.89999998)
                + 0.10000002;
      CUtlBuffer::Printf(thisa, "3\n");
      v16 = *&flLight;
      v21 = nSkipFlagsMask;
      v17 = v;
      flLight = (&v28 + 4);
      v28 = (b * v16);
      v27 = (g * v16);
      v26 = (v16 * r);
      do
      {
        v18 = v17[2].z;
        y = v17[2].y;
        x = v17[2].x;
        --v17;
        CUtlBuffer::Printf(thisa, "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n", x, y, v18, v26, v27, v28);
      }
      while ( v17 != flLight );
      ++v13;
      nSkipFlagsMask = v21;
    }
    while ( v13 != m_Size );
  }
}


// CGlViewBuffer::WriteKDTreeMaterialColors  (line 355, @0x00000000031dcc70, libserver.so)  // inlines: GetTriangle, MajorIndex, MinorIndex, Vector, WriteVertex, operator=, operator[]
// calls: Msg, CacheOptimizedTriangle_t::ExtractVerticesFromIntersectionFormat, CUtlBuffer::Printf
// strings: "Writing kdTree with %d triangles\n", "3\n", "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n"
void __fastcall CGlViewBuffer::WriteKDTreeMaterialColors(
        CGlViewBuffer *const this,
        RayTracingEnvironment *pTree,
        uint16 nSkipFlagsMask,
        const Vector *pMaterialColors,
        uint nMaterialCount)
{
  int m_Size; // r13d
  RayTracingEnvironment *v8; // rax
  __int64 v9; // r15
  RayTracingEnvironment *v10; // r12
  const CacheOptimizedTriangle_t *v11; // rdi
  __int64 v12; // rax
  Vector *v13; // rbx
  float v14; // xmm1_4
  double x; // xmm0_8
  double v16; // xmm2_8
  const Vector *v17; // rax
  vec_t z; // xmm1_4
  vec_t y; // xmm7_4
  uint16 v21; // [rsp+Ah] [rbp-96h]
  double v23; // [rsp+10h] [rbp-90h]
  double v24; // [rsp+18h] [rbp-88h] BYREF
  double v25; // [rsp+20h] [rbp-80h]
  Vector *v26; // [rsp+28h] [rbp-78h]
  Vector *v2; // [rsp+30h] [rbp-70h]
  CGlViewBuffer *thisa; // [rsp+38h] [rbp-68h]
  Vector v[3]; // [rsp+40h] [rbp-60h] BYREF

  thisa = this;
  m_Size = pTree->m_optimizedTriangleList.m_Size;
  Msg("Writing kdTree with %d triangles\n", m_Size);
  if ( m_Size > 0 )
  {
    v2 = &v[2];
    v8 = pTree;
    v9 = 0;
    v10 = v8;
    do
    {
      while ( 1 )
      {
        v11 = &v10->m_optimizedTriangleList.m_Memory.m_pMemory[v9 >> (*(&v10->m_optimizedTriangleList.m_Memory + 15) >> 3)][v9 & *(&v10->m_optimizedTriangleList.m_Memory + 3) & 0x7FFFFFF];
        if ( (nSkipFlagsMask & v11->m_Data.m_IntersectData.m_nFlags) == 0
          && CacheOptimizedTriangle_t::ExtractVerticesFromIntersectionFormat(v11, v, &v[1], v2) )
        {
          break;
        }
        if ( m_Size <= ++v9 )
          return;
      }
      v12 = v10->m_triangleMaterials.m_Memory.m_pMemory[v9];
      if ( v12 < nMaterialCount )
      {
        v17 = &pMaterialColors[v12];
        z = v17->z;
        *&v26 = v17->x;
        y = v17->y;
        *&v25 = z;
        *&v24 = y;
      }
      else
      {
        LODWORD(v25) = 0;
        LODWORD(v26) = 0;
        LODWORD(v24) = 1065353216;
      }
      CUtlBuffer::Printf(thisa, "3\n");
      v25 = *&v25;
      v21 = nSkipFlagsMask;
      v24 = *&v24;
      v13 = v;
      v23 = *&v26;
      v26 = (&v24 + 4);
      do
      {
        v14 = v13[2].y;
        x = v13[2].x;
        v16 = v13[2].z;
        --v13;
        CUtlBuffer::Printf(thisa, "%6.2f %6.2f %6.2f %.3f %.3f %.3f\n", x, v14, v16, v23, v24, v25);
      }
      while ( v13 != v26 );
      ++v9;
      nSkipFlagsMask = v21;
    }
    while ( m_Size > v9 );
  }
}


// CGlViewBuffer::WriteCMeshWireframe  (line 387, @0x00000000031dce70, libserver.so)  // inlines: GetVertex, GetVertexPosition, ToMatrix, TransformMatrix, TransformVector, VectorTransform
// calls: TransformMatrix, VectorTransform, CGlViewBuffer::WriteLine
void __fastcall CGlViewBuffer::WriteCMeshWireframe(
        CGlViewBuffer *const this,
        const CMesh *const mesh,
        const CTransform *const transform,
        float r,
        float g,
        float b)
{
  __int64 v7; // r12
  int v8; // r15d
  uint32 *m_pIndices; // rdx
  float *m_pVerts; // rsi
  uint32 *v11; // rdx
  float *v12; // rsi
  Vector v0; // [rsp+30h] [rbp-90h] BYREF
  Vector v1; // [rsp+40h] [rbp-80h] BYREF
  Vector v2; // [rsp+50h] [rbp-70h] BYREF
  matrix3x4_t xform; // [rsp+60h] [rbp-60h] BYREF

  TransformMatrix(transform, &xform);
  if ( mesh->m_nIndexCount > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      v8 += 3;
      VectorTransform(&mesh->m_pVerts[mesh->m_nVertexStrideFloats * mesh->m_pIndices[v7]], &xform, &v2.x);
      m_pIndices = mesh->m_pIndices;
      v0.x = v2.x;
      m_pVerts = mesh->m_pVerts;
      v0.y = v2.y;
      v0.z = v2.z;
      VectorTransform(&m_pVerts[mesh->m_nVertexStrideFloats * m_pIndices[v7 + 1]], &xform, &v2.x);
      v11 = mesh->m_pIndices;
      v1.x = v2.x;
      v12 = mesh->m_pVerts;
      v1.y = v2.y;
      v1.z = v2.z;
      LODWORD(v11) = v11[v7 + 2];
      v7 += 3;
      VectorTransform(&v12[mesh->m_nVertexStrideFloats * v11], &xform, &v2.x);
      CGlViewBuffer::WriteLine(this, &v0, &v1, r, g, b);
      CGlViewBuffer::WriteLine(this, &v1, &v2, r, g, b);
      CGlViewBuffer::WriteLine(this, &v2, &v0, r, g, b);
    }
    while ( mesh->m_nIndexCount > v8 );
  }
}


// CGlViewBuffer::WriteSweptBox  (line 401, @0x00000000031dd050, libserver.so)  // inlines: TransformPoint, TransformVector, operator+=, operator=
// calls: CGlViewBuffer::WriteBox, CGlViewBuffer::WriteLine
void __fastcall CGlViewBuffer::WriteSweptBox(
        CGlViewBuffer *const this,
        const CTransform *const boxRoot,
        const Vector *const vMins,
        const Vector *const vMaxs,
        const Vector *const vSweep,
        __m128i r,
        float g,
        float b)
{
  float v8; // r15d
  vec_t *p_z; // rax
  float x; // xmm6_4
  float z; // xmm5_4
  float y; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm15_4
  float v16; // xmm14_4
  float v17; // xmm3_4
  float v18; // xmm7_4
  float v19; // xmm4_4
  int v20; // esi
  Vector *v21; // r8
  float v22; // xmm4_4
  float v23; // xmm10_4
  float v24; // xmm11_4
  float v25; // xmm2_4
  float v26; // xmm13_4
  float v27; // xmm3_4
  float v28; // xmm6_4
  float v29; // xmm11_4
  float v30; // xmm7_4
  float v31; // xmm12_4
  float v32; // xmm0_4
  float v33; // xmm7_4
  float v34; // xmm13_4
  float v35; // xmm9_4
  float v36; // xmm6_4
  float v37; // xmm8_4
  float v38; // xmm3_4
  float v39; // xmm2_4
  float v40; // xmm7_4
  float v41; // xmm5_4
  float v42; // xmm8_4
  float v43; // xmm1_4
  float v44; // xmm4_4
  float v45; // xmm7_4
  float v46; // xmm0_4
  float v47; // xmm6_4
  __int64 v48; // r14
  float v49; // xmm3_4
  const Vector *v50; // rdx
  const Vector *v51; // rsi
  float end; // [rsp+4h] [rbp-118h]
  float end_4; // [rsp+8h] [rbp-114h]
  float end_8; // [rsp+Ch] [rbp-110h]
  float end_12; // [rsp+10h] [rbp-10Ch]
  float end_16; // [rsp+14h] [rbp-108h]
  float end_20; // [rsp+18h] [rbp-104h]
  float end_24; // [rsp+1Ch] [rbp-100h]
  float end_28; // [rsp+20h] [rbp-FCh]
  Vector vCorners[8]; // [rsp+2Ch] [rbp-F0h] BYREF
  Vector vCornersEnd[8]; // [rsp+8Ch] [rbp-90h] BYREF

  v8 = COERCE_FLOAT(_mm_cvtsi128_si32(r));
  p_z = &vCorners[0].z;
  x = boxRoot->m_orientation.x;
  z = boxRoot->m_orientation.z;
  y = boxRoot->m_orientation.y;
  v14 = boxRoot->m_orientation.w + boxRoot->m_orientation.w;
  v15 = boxRoot->m_vPosition.y;
  v16 = boxRoot->m_vPosition.z;
  v17 = vSweep->y + v15;
  v18 = vSweep->z;
  end = boxRoot->m_vPosition.x;
  v19 = boxRoot->m_vPosition.x + vSweep->x;
  v20 = 0;
  v21 = vCornersEnd;
  end_16 = v17;
  end_20 = v19;
  v22 = v14 * x;
  end_12 = v18 + v16;
  v23 = ((x + x) * z) + (v14 * y);
  end_28 = ((x + x) * z) - (v14 * y);
  v24 = (x + x) * y;
  v25 = v14 * z;
  v26 = 1.0 - (x * (x + x));
  v27 = (y + y) * y;
  v28 = v24 + v25;
  v29 = v24 - v25;
  v30 = z * (y + y);
  end_8 = v28;
  v31 = v30 - v22;
  v32 = (z + z) * z;
  end_4 = v30 + v22;
  v33 = v26 - v27;
  v34 = v26 - v32;
  v35 = (1.0 - v27) - v32;
  end_24 = v33;
  do
  {
    if ( (v20 & 1) != 0 )
    {
      *(p_z - 2) = vMaxs->x;
      if ( (v20 & 2) != 0 )
        goto LABEL_3;
    }
    else
    {
      *(p_z - 2) = vMins->x;
      if ( (v20 & 2) != 0 )
      {
LABEL_3:
        *(p_z - 1) = vMaxs->y;
        if ( (v20 & 4) != 0 )
          goto LABEL_4;
        goto LABEL_9;
      }
    }
    *(p_z - 1) = vMins->y;
    if ( (v20 & 4) != 0 )
    {
LABEL_4:
      v36 = vMaxs->z;
      goto LABEL_5;
    }
LABEL_9:
    v36 = vMins->z;
LABEL_5:
    v37 = *(p_z - 2);
    v38 = v31 * v36;
    ++v20;
    p_z += 3;
    ++v21;
    v39 = end_28 * v37;
    v40 = *(p_z - 4);
    v41 = end_8 * v37;
    v42 = v37 * v35;
    v43 = end_4 * v40;
    v44 = v34 * v40;
    v45 = v40 * v29;
    v46 = end_24 * v36;
    v47 = v36 * v23;
    v21[-1].x = ((end_20 + v42) + v45) + v47;
    *(p_z - 5) = ((v42 + end) + v45) + v47;
    v21[-1].y = ((end_16 + v41) + v44) + v38;
    *(p_z - 4) = ((v41 + v15) + v44) + v38;
    v21[-1].z = ((end_12 + v39) + v43) + v46;
    *(p_z - 3) = ((v39 + v16) + v43) + v46;
  }
  while ( v20 != 8 );
  v48 = 0;
  CGlViewBuffer::WriteBox(this, vCorners, v8, g, b, v38);
  CGlViewBuffer::WriteBox(this, vCornersEnd, v8, g, b, v49);
  do
  {
    v50 = &vCornersEnd[v48];
    v51 = &vCorners[v48++];
    CGlViewBuffer::WriteLine(this, v51, v50, v8, g, b);
  }
  while ( v48 != 8 );
}


// CGlViewBuffer::WriteAmbientCube  (line 424, @0x00000000031dd3d0, libserver.so)  // inlines: Dot, DotProduct, EvaluateAmbientCube, GetAmbientCubeWeights, VectorAdd, VectorMA, VectorMultiply, operator*, operator+, operator=
// calls: sincosf, CGlViewBuffer::WritePolygonIndexed, __stack_chk_fail
void __fastcall CGlViewBuffer::WriteAmbientCube(
        CGlViewBuffer *const this,
        const Vector *const vCenter,
        float flRadialDistancePerLuminanceUnit,
        Vector (*const pAmbientCube)[6],
        int nTheta,
        int nPhi)
{
  signed __int64 v6; // rdx
  void *v7; // rsp
  void *v8; // rsp
  unsigned __int64 *v10; // r12
  int v11; // ebx
  float v12; // xmm0_4
  unsigned __int64 *v13; // rdx
  int v14; // xmm5_4
  float v15; // xmm8_4
  int v16; // xmm9_4
  __int64 v17; // rcx
  Vector *v18; // r12
  Vector *v19; // r15
  float v20; // xmm0_4
  float v21; // xmm6_4
  float v22; // xmm0_4
  float v23; // xmm7_4
  float v24; // xmm1_4
  float v25; // xmm1_4
  float v26; // xmm1_4
  float v27; // xmm1_4
  float x; // xmm3_4
  float y; // xmm2_4
  float z; // xmm1_4
  Vector *v31; // rax
  float *j; // rsi
  float v33; // xmm4_4
  float v34; // xmm0_4
  vec_t v35; // xmm7_4
  vec_t v36; // xmm4_4
  vec_t v37; // xmm0_4
  int v38; // ebx
  int v39; // r12d
  int v40; // r13d
  int v41; // edx
  int nVert; // [rsp+4h] [rbp-C4h]
  int v44; // [rsp+8h] [rbp-C0h] BYREF
  int i; // [rsp+Ch] [rbp-BCh]
  int *v46; // [rsp+10h] [rbp-B8h]
  Vector (*pAmbientCubea)[6]; // [rsp+18h] [rbp-B0h]
  float v48; // [rsp+20h] [rbp-A8h]
  float v49; // [rsp+24h] [rbp-A4h]
  CGlViewBuffer *thisa; // [rsp+28h] [rbp-A0h]
  float *p_sinx; // [rsp+30h] [rbp-98h]
  float *p_cosx; // [rsp+38h] [rbp-90h]
  Vector *pColors; // [rsp+40h] [rbp-88h]
  Vector *pVerts; // [rsp+48h] [rbp-80h]
  float v55; // [rsp+50h] [rbp-78h]
  int v56; // [rsp+54h] [rbp-74h]
  float *v57; // [rsp+58h] [rbp-70h]
  int *idx; // [rsp+60h] [rbp-68h]
  int i_0; // [rsp+68h] [rbp-60h]
  float v60; // [rsp+6Ch] [rbp-5Ch]
  float cosx; // [rsp+70h] [rbp-58h] BYREF
  int sinx; // [rsp+74h] [rbp-54h] BYREF
  int pIndices[4]; // [rsp+78h] [rbp-50h] BYREF
  float v64; // [rsp+88h] [rbp-40h]
  float v65; // [rsp+8Ch] [rbp-3Ch]
  unsigned __int64 v66; // [rsp+90h] [rbp-38h] BYREF

  pAmbientCubea = pAmbientCube;
  thisa = this;
  v66 = __readfsqword(0x28u);
  v6 = ((12LL * nTheta * nPhi + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16;
  v49 = flRadialDistancePerLuminanceUnit;
  v7 = alloca(v6);
  v56 = nTheta;
  v8 = alloca(v6);
  pVerts = (&v44 & 0xFFFFFFFFFFFFFFEFLL);
  pColors = (&v44 & 0xFFFFFFFFFFFFFFEFLL);
  if ( nPhi <= 0 )
  {
    v44 = nPhi - 1;
    goto LABEL_21;
  }
  i = 0;
  nVert = 0;
  v44 = nPhi - 1;
  v46 = pIndices;
  v10 = &v66;
  do
  {
    if ( v56 <= 0 )
      goto LABEL_20;
    v11 = 0;
    p_cosx = &cosx;
    p_sinx = &sinx;
    v55 = (v56 - 1);
    v12 = (i / v44) * 3.141592653589793;
    sincosf(v12, &sinx, &cosx);
    v13 = v10;
    v14 = 0;
    v15 = cosx;
    v16 = sinx;
    v17 = nVert;
    v48 = -cosx;
    v18 = &pVerts[v17];
    v19 = &pColors[v17];
    do
    {
      v57 = v13;
      i_0 = v16;
      LODWORD(idx) = v14;
      v60 = v15;
      v20 = (v11 / v55) * 6.283185307179586;
      sincosf(v20, p_sinx, p_cosx);
      v16 = i_0;
      v14 = idx;
      v21 = cosx * *&i_0;
      v22 = *&idx;
      v15 = v60;
      v23 = *&sinx * *&i_0;
      v13 = v57;
      if ( (cosx * *&i_0) > *&idx )
        v22 = v21 * v21;
      *pIndices = v22;
      v24 = *&idx;
      if ( v23 > *&idx )
        v24 = v23 * v23;
      *&pIndices[1] = v24;
      v25 = *&idx;
      if ( v60 > *&idx )
        v25 = v60 * v60;
      *&pIndices[2] = v25;
      if ( *&idx > v21 )
      {
        *&pIndices[3] = v21 * v21;
        v26 = *&idx;
        if ( *&idx <= v23 )
          goto LABEL_13;
      }
      else
      {
        pIndices[3] = idx;
        v26 = *&idx;
        if ( *&idx <= v23 )
          goto LABEL_13;
      }
      v26 = v23 * v23;
LABEL_13:
      v64 = v26;
      v27 = *&idx;
      if ( *&idx > v60 )
        v27 = v48 * v48;
      v65 = v27;
      x = vec3_origin.x;
      y = vec3_origin.y;
      z = vec3_origin.z;
      v31 = pAmbientCubea;
      for ( j = (v46 + 1); ; ++j )
      {
        v33 = v31->x;
        ++v31;
        x = x + (v33 * v22);
        y = y + (v31[-1].y * v22);
        z = z + (v22 * v31[-1].z);
        if ( j == v57 )
          break;
        v22 = *j;
      }
      ++v11;
      ++v18;
      ++v19;
      v34 = ((x + y) + z) * v49;
      v35 = (v23 * v34) + vCenter->y;
      v36 = (v34 * v60) + vCenter->z;
      v37 = (v34 * v21) + vCenter->x;
      v18[-1].y = v35;
      v18[-1].z = v36;
      v18[-1].x = v37;
      v19[-1].x = x;
      v19[-1].y = y;
      v19[-1].z = z;
    }
    while ( v11 != v56 );
    v10 = v13;
    nVert += v56;
LABEL_20:
    ++i;
  }
  while ( i != nPhi );
LABEL_21:
  if ( v44 > 0 )
  {
    v38 = 0;
    *&i_0 = 0.0;
    v39 = v56;
    LODWORD(v60) = v56 - 1;
    idx = pIndices;
    do
    {
      if ( SLODWORD(v60) > 0 )
      {
        v40 = 0;
        do
        {
          pIndices[0] = v38 + v40;
          pIndices[1] = v38 + 1 + v40;
          pIndices[2] = v39 + 1 + v40;
          v41 = v39 + v40++;
          pIndices[3] = v41;
          CGlViewBuffer::WritePolygonIndexed(thisa, pVerts, pColors, idx, 4);
        }
        while ( SLODWORD(v60) > v40 );
      }
      ++i_0;
      v38 += v56;
      v39 += v56;
    }
    while ( i_0 != v44 );
  }
}


// CGlViewBuffer::WriteWireframePolyhedron  (line 468, @0x00000000031dd850, libserver.so)
// calls: CGlViewBuffer::WriteLine
void __fastcall CGlViewBuffer::WriteWireframePolyhedron(
        CGlViewBuffer *const this,
        const CPolyhedron *const polyhedron,
        float a3,
        float r,
        float g,
        float b)
{
  __int64 v8; // rbx

  v8 = 0;
  if ( polyhedron->iLineCount != 0 )
  {
    do
    {
      CGlViewBuffer::WriteLine(
        this,
        &polyhedron->pVertices[polyhedron->pLines[v8].iPointIndices[0]],
        &polyhedron->pVertices[polyhedron->pLines[v8].iPointIndices[1]],
        a3,
        r,
        g);
      ++v8;
    }
    while ( polyhedron->iLineCount > v8 );
  }
}


// CGlViewBuffer::WriteSolidPolyhedron  (line 480, @0x00000000031dd8e0, libserver.so)  // inlines: WritePolygon, operator=
// calls: CGlViewBuffer::WritePolygon
void __fastcall CGlViewBuffer::WriteSolidPolyhedron(
        CGlViewBuffer *const this,
        const CPolyhedron *const polyhedron,
        float a3,
        float r,
        float g,
        float b)
{
  int v8; // r13d
  Polyhedron_IndexedPolygon_t *v9; // r14
  int iFirstIndex; // esi
  Polyhedron_IndexedLineReference_t *pIndices; // rax
  __int64 v12; // rdx
  int v13; // esi
  Polyhedron_IndexedLineReference_t *v14; // rcx
  Polyhedron_IndexedLine_t *pLines; // rdx
  __int64 v16; // rsi
  Polyhedron_IndexedLineReference_t *v17; // rdi
  Polyhedron_IndexedLineReference_t *v18; // rsi
  Vector *pVertices; // rax
  int v20; // eax
  __int64 iPoly; // [rsp+8h] [rbp-78h]
  Vector triangle[3]; // [rsp+20h] [rbp-60h] BYREF

  iPoly = 0;
  if ( polyhedron->iPolygonCount != 0 )
  {
    do
    {
      v8 = 2;
      v9 = &polyhedron->pPolygons[iPoly];
      if ( v9->iIndexCount > 2u )
      {
        do
        {
          iFirstIndex = v9->iFirstIndex;
          pIndices = polyhedron->pIndices;
          v12 = iFirstIndex;
          v13 = v8 + iFirstIndex;
          ++v8;
          v14 = &pIndices[v12];
          pLines = polyhedron->pLines;
          v16 = v13;
          v17 = &pIndices[v16 - 1];
          v18 = &pIndices[v16];
          pVertices = polyhedron->pVertices;
          triangle[0] = pVertices[pLines[v14->iLineIndex].iPointIndices[v14->iEndPointIndex]];
          triangle[1] = pVertices[pLines[v17->iLineIndex].iPointIndices[v17->iEndPointIndex]];
          triangle[2] = pVertices[pLines[v18->iLineIndex].iPointIndices[v18->iEndPointIndex]];
          CGlViewBuffer::WritePolygon(this, triangle, 3, a3, r, g);
        }
        while ( v9->iIndexCount > v8 );
      }
      v20 = iPoly++;
    }
    while ( polyhedron->iPolygonCount > v20 + 1 );
  }
}


// CVertColorConstant::GetColor  (line 524, @0x00000000031e1d60, libserver.so)
Vector __fastcall CVertColorConstant::GetColor(
        CVertColorConstant *const this,
        RayTracingEnvironment *pEnv,
        int nTriIndex,
        const Vector *const v0,
        const Vector *const v1,
        const Vector *const v2)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&this->m_vColor.x;
  result.z = this->m_vColor.z;
  return result;
}


// CVertColorHalfLambert::GetColor  (line 538, @0x00000000031e1df0, libserver.so)  // inlines: CrossProduct, DotProduct, VectorSubtract, operator-
// calls: VectorNormalize
Vector __fastcall CVertColorHalfLambert::GetColor(
        CVertColorHalfLambert *const this,
        RayTracingEnvironment *pEnv,
        int nTriIndex,
        const Vector *const v0,
        const Vector *const v1,
        const Vector *const v2)
{
  float v7; // xmm1_4
  float y; // xmm5_4
  float v9; // xmm2_4
  float z; // xmm6_4
  float v11; // xmm3_4
  float v12; // xmm0_4
  float v13; // xmm5_4
  float v14; // xmm6_4
  float v15; // xmm0_4
  Vector vNormal; // [rsp+10h] [rbp-30h] BYREF
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v7 = v2->x - v0->x;
  y = v0->y;
  v9 = v1->x - v0->x;
  z = v0->z;
  v11 = v2->y - y;
  v12 = v1->y - y;
  v13 = v1->z - z;
  v14 = v2->z - z;
  vNormal.y = (v13 * v7) - (v14 * v9);
  vNormal.x = (v14 * v12) - (v11 * v13);
  vNormal.z = (v9 * v11) - (v12 * v7);
  VectorNormalize(&vNormal);
  v15 = ((((((vNormal.x * this->m_vLightDir.x) + (vNormal.y * this->m_vLightDir.y)) + (vNormal.z * this->m_vLightDir.z))
         * 0.5)
        + 0.5)
       * 0.89999998)
      + 0.10000002;
  result.z = this->m_flBlue * v15;
  *&result.x = __PAIR64__(this->m_flGreen * v15, v15 * this->m_flRed);
  return result;
}


// CVertColorMaterial::GetColor  (line 561, @0x00000000031e1d80, libserver.so)  // inlines: operator[]
Vector __fastcall CVertColorMaterial::GetColor(
        CVertColorMaterial *const this,
        RayTracingEnvironment *pEnv,
        int nTriIndex,
        const Vector *const v0,
        const Vector *const v1,
        const Vector *const v2)
{
  __int64 v6; // rax
  const Vector *v9; // rax
  int v10; // [rsp+8h] [rbp-8h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v6 = pEnv->m_triangleMaterials.m_Memory.m_pMemory[nTriIndex];
  if ( v6 < this->m_nMaterialCount )
  {
    v9 = &this->m_pMaterialColors[v6];
    *&result.x = *&v9->x;
    result.z = v9->z;
  }
  else
  {
    v10 = 0;
    *&result.x = 0x3F80000000000000LL;
    result.z = 0.0;
  }
  return result;
}


// CGeoViewVertex::Serialize  (line 577, @0x00000000031dda70, libserver.so)
// calls: CUtlBuffer::Put
// callers: CGeoViewLines::Serialize, CGeoViewPolygon::Serialize
void __fastcall CGeoViewVertex::Serialize(CGeoViewVertex *const this, CUtlBuffer *const bufOut)
{
  CUtlBuffer::Put(bufOut, this, 12);
  CUtlBuffer::Put(bufOut, &this->m_color, 4);
}


// CGeoViewVertex::Unserialize  (line 583, @0x00000000031ddab0, libserver.so)
// calls: CUtlBuffer::Get
// callers: CGeoViewPolygon::Unserialize, CGeoViewLines::Unserialize
void __fastcall CGeoViewVertex::Unserialize(CGeoViewVertex *const this, CUtlBuffer *const bufIn)
{
  CUtlBuffer::Get(bufIn, this, 12);
  CUtlBuffer::Get(bufIn, &this->m_color, 4);
}


// CGeoViewLines::AddVert  (line 590, @0x00000000031e0760, libserver.so)  // inlines: AddToTail, CGeoViewVertex, Color, Construct<CGeoViewVertex>, Element, GrowMemory, MakeColor32FromFloatColor, SetRawColor, operator=, operator[]
// calls: CUtlMemory<CGeoViewVertex, int>::Grow
// callers: CGeoViewBuffer::WriteLine, CGeoViewBuffer::WritePolygonWireframe, CGeoViewBuffer::WriteCMeshWireframe
void __fastcall CGeoViewLines::AddVert(
        CGeoViewLines *const this,
        const Vector *const vPos,
        float a3,
        float r,
        float g,
        float b)
{
  int m_Size; // r13d
  int v9; // eax
  int v10; // ecx
  __int64 v11; // rax
  CGeoViewVertex *v12; // rdx
  CGeoViewVertex *v13; // rdx
  unsigned __int16 v14; // dx
  float ba; // [rsp+4h] [rbp-2Ch]
  float ga; // [rsp+8h] [rbp-28h]
  float ra; // [rsp+Ch] [rbp-24h]

  m_Size = this->m_verts.m_Size;
  v9 = this->m_verts.m_Size;
  if ( this->m_verts.m_Size == this->m_verts.m_Memory.m_nAllocationCount )
  {
    ba = g;
    ga = r;
    ra = a3;
    CUtlMemory<CGeoViewVertex,int>::Grow(&this->m_verts.m_Memory, 1);
    v9 = this->m_verts.m_Size;
    g = ba;
    r = ga;
    a3 = ra;
  }
  v10 = v9 + 1;
  v11 = m_Size;
  this->m_verts.m_Size = v10;
  v12 = &this->m_verts.m_Memory.m_pMemory[v11];
  if ( v12 != 0 )
  {
    v12->m_color = 0;
    v13 = &this->m_verts.m_Memory.m_pMemory[v11];
  }
  else
  {
    v13 = 0;
  }
  v13->m_vPos.x = vPos->x;
  v13->m_vPos.y = vPos->y;
  v13->m_vPos.z = vPos->z;
  LOBYTE(v14) = (a3 * 255.0);
  HIBYTE(v14) = (r * 255.0);
  this->m_verts.m_Memory.m_pMemory[v11].m_color = (((255.0 * g) << 16) | v14 | 0xFF000000);
}


// CGeoViewLines::ByteCount  (line 597, @0x00000000031ddaf0, libserver.so)
size_t __fastcall CGeoViewLines::ByteCount(CGeoViewLines *const this)
{
  return 16LL * this->m_verts.m_Size;
}


// CGeoViewLines::Serialize  (line 602, @0x00000000031ddb00, libserver.so)  // inlines: ByteCount, LowLevelByteSwap<unsigned int>, PeekPut, PutType<unsigned int>, PutTypeBin<unsigned int>, PutUnsignedInt, SwapBufferToTargetEndian<unsigned int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::Printf, CGeoViewVertex::Serialize, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination
// callers: CGeoViewBuffer::WriteLine, CGeoViewBuffer::WritePolygonWireframe, CGeoViewBuffer::WriteCMeshWireframe
void __fastcall CGeoViewLines::Serialize(CGeoViewLines *const this, CUtlBuffer *const bufOut)
{
  int v4; // ebx
  __int64 i; // rbx
  int m_Put; // eax
  int v7; // eax
  unsigned __int8 *v8; // rdx
  unsigned __int8 *v9; // rdx
  int v10; // [rsp+Ch] [rbp-24h]

  if ( (bufOut->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(bufOut, "%u", 0);
  }
  else if ( CUtlBuffer::CheckPut(bufOut, 4) )
  {
    if ( (*&bufOut->m_Byteswap & 1) != 0 )
    {
      m_Put = bufOut->m_Put;
      v9 = &bufOut->m_Memory.m_pMemory[m_Put - bufOut->m_nOffset];
      if ( v9 != 0 )
      {
        *v9 = 0;
        m_Put = bufOut->m_Put;
      }
    }
    else
    {
      *&bufOut->m_Memory.m_pMemory[bufOut->m_Put - bufOut->m_nOffset] = 0;
      m_Put = bufOut->m_Put;
    }
    bufOut->m_Put = m_Put + 4;
    CUtlBuffer::AddNullTermination(bufOut);
    v4 = 16 * this->m_verts.m_Size;
    if ( (bufOut->m_Flags & 1) != 0 )
      goto LABEL_4;
    goto LABEL_12;
  }
  v4 = 16 * this->m_verts.m_Size;
  if ( (bufOut->m_Flags & 1) != 0 )
  {
LABEL_4:
    CUtlBuffer::Printf(bufOut, "%u", v4);
    goto LABEL_5;
  }
LABEL_12:
  if ( CUtlBuffer::CheckPut(bufOut, 4) )
  {
    if ( (*&bufOut->m_Byteswap & 1) != 0 )
    {
      v7 = bufOut->m_Put;
      v8 = &bufOut->m_Memory.m_pMemory[v7 - bufOut->m_nOffset];
      if ( v8 != 0 )
      {
        LOBYTE(v10) = HIBYTE(v4);
        BYTE1(v10) = BYTE2(v4);
        BYTE2(v10) = BYTE1(v4);
        HIBYTE(v10) = v4;
        *v8 = v10;
        v7 = bufOut->m_Put;
      }
    }
    else
    {
      *&bufOut->m_Memory.m_pMemory[bufOut->m_Put - bufOut->m_nOffset] = v4;
      v7 = bufOut->m_Put;
    }
    bufOut->m_Put = v7 + 4;
    CUtlBuffer::AddNullTermination(bufOut);
  }
LABEL_5:
  for ( i = 0; this->m_verts.m_Size > i; ++i )
    CGeoViewVertex::Serialize(&this->m_verts.m_Memory.m_pMemory[i], bufOut);
}


// CGeoViewLines::Unserialize  (line 612, @0x00000000031e1ae0, libserver.so)  // inlines: AddMultipleToTail, CGeoViewVertex, Color, Construct<CGeoViewVertex>, EnsureCount, GetType<unsigned int>, GetTypeBin<unsigned int>, GetTypeText<unsigned int>, GetUnsignedInt, GrowMemory, GrowVector, InsertMultipleBefore, LowLevelByteSwap<unsigned int>, PeekGet, StringToNumber<unsigned int>, SwapBufferToTargetEndian<unsigned int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckArbitraryPeekGet, CGeoViewVertex::Unserialize, V_strtoui64, CUtlMemory<CGeoViewVertex, int>::Grow, CUtlBuffer::CheckGet
void __fastcall CGeoViewLines::Unserialize(CGeoViewLines *const this, CUtlBuffer *const bufIn)
{
  unsigned __int64 v4; // rbx
  int v5; // r14d
  int m_Size; // r15d
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rdi
  int v10; // ebx
  uint v11; // eax
  int v12; // r8d
  int m_nAllocationCount; // eax
  int v14; // edx
  __int64 v15; // rax
  CGeoViewVertex *v16; // rcx
  int v17; // ebx
  int m_Get; // edx
  unsigned __int64 v19; // rbx
  uint *p_nTag; // rax
  uint nTag; // [rsp+10h] [rbp-40h] BYREF
  int nIncrement; // [rsp+14h] [rbp-3Ch] BYREF
  _QWORD v23[7]; // [rsp+18h] [rbp-38h] BYREF

  if ( (bufIn->m_Flags & 1) == 0 )
  {
    if ( CUtlBuffer::CheckGet(bufIn, 4) )
      bufIn->m_Get += 4;
LABEL_3:
    if ( (bufIn->m_Flags & 1) == 0 )
      goto LABEL_24;
    goto LABEL_4;
  }
  nIncrement = 128;
  if ( !CUtlBuffer::CheckArbitraryPeekGet(bufIn, 0, &nIncrement) )
    goto LABEL_3;
  v23[0] = &bufIn->m_Memory.m_pMemory[bufIn->m_Get - bufIn->m_nOffset];
  v17 = v23[0];
  nTag = V_strtoui64(v23[0], v23, 10);
  if ( LODWORD(v23[0]) == v17 )
    goto LABEL_3;
  bufIn->m_Get += LODWORD(v23[0]) - v17;
  if ( (bufIn->m_Flags & 1) == 0 )
  {
LABEL_24:
    if ( CUtlBuffer::CheckGet(bufIn, 4) )
    {
      if ( (*&bufIn->m_Byteswap & 1) != 0 )
      {
        m_Get = bufIn->m_Get;
        p_nTag = &bufIn->m_Memory.m_pMemory[m_Get - bufIn->m_nOffset];
        if ( p_nTag == 0 )
          p_nTag = &nTag;
        LODWORD(v23[0]) = nTag;
        LOBYTE(v23[0]) = *(p_nTag + 3);
        BYTE1(v23[0]) = *(p_nTag + 2);
        BYTE2(v23[0]) = *(p_nTag + 1);
        BYTE3(v23[0]) = *p_nTag;
        v19 = LODWORD(v23[0]);
      }
      else
      {
        m_Get = bufIn->m_Get;
        v19 = *&bufIn->m_Memory.m_pMemory[m_Get - bufIn->m_nOffset];
      }
      v4 = v19 >> 4;
      bufIn->m_Get = m_Get + 4;
      v5 = v4;
    }
    else
    {
      LODWORD(v4) = 0;
      v5 = 0;
    }
LABEL_5:
    m_Size = this->m_verts.m_Size;
    if ( this->m_verts.m_Size >= v4 )
      goto LABEL_6;
    goto LABEL_13;
  }
LABEL_4:
  nIncrement = 128;
  LODWORD(v4) = 0;
  v5 = 0;
  if ( !CUtlBuffer::CheckArbitraryPeekGet(bufIn, 0, &nIncrement) )
    goto LABEL_5;
  v23[0] = &bufIn->m_Memory.m_pMemory[bufIn->m_Get - bufIn->m_nOffset];
  v10 = v23[0];
  v11 = V_strtoui64(v23[0], v23, 10);
  nTag = v11;
  if ( LODWORD(v23[0]) != v10 )
    bufIn->m_Get += LODWORD(v23[0]) - v10;
  m_Size = this->m_verts.m_Size;
  v4 = v11 >> 4;
  v5 = v4;
  if ( this->m_verts.m_Size < v4 )
  {
LABEL_13:
    v12 = v4 - m_Size;
    if ( v4 != m_Size )
    {
      m_nAllocationCount = this->m_verts.m_Memory.m_nAllocationCount;
      if ( m_nAllocationCount < v4 )
      {
        CUtlMemory<CGeoViewVertex,int>::Grow(&this->m_verts.m_Memory, v4 - m_nAllocationCount);
        v12 = v4 - m_Size;
      }
      this->m_verts.m_Size = v4;
      if ( v12 > 0 )
      {
        v14 = 0;
        v15 = m_Size;
        do
        {
          v16 = &this->m_verts.m_Memory.m_pMemory[v15];
          if ( v16 != 0 )
            v16->m_color = 0;
          ++v14;
          ++v15;
        }
        while ( v12 > v14 );
      }
    }
  }
LABEL_6:
  if ( v5 != 0 )
  {
    v7 = 0;
    v8 = 16 * ((v5 - 1) + 1LL);
    do
    {
      v9 = v7;
      v7 += 16;
      CGeoViewVertex::Unserialize((this->m_verts.m_Memory.m_pMemory + v9), bufIn);
    }
    while ( v7 != v8 );
  }
}


// CGeoViewCamera::ByteCount  (line 627, @0x00000000031ddcb0, libserver.so)
size_t __fastcall CGeoViewCamera::ByteCount(CGeoViewCamera *const this)
{
  return 36;
}


// CGeoViewCamera::Serialize  (line 632, @0x00000000031ddcc0, libserver.so)  // inlines: LowLevelByteSwap<float>, LowLevelByteSwap<int>, LowLevelByteSwap<unsigned int>, PeekPut, PutFloat, PutInt, PutType<float>, PutType<int>, PutType<unsigned int>, PutTypeBin<float>, PutTypeBin<int>, PutTypeBin<unsigned int>, PutUnsignedInt, SwapBufferToTargetEndian<float>, SwapBufferToTargetEndian<int>, SwapBufferToTargetEndian<unsigned int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::Printf, CUtlBuffer::Put, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination
// callers: CGeoViewBuffer::WriteCamera
void __fastcall CGeoViewCamera::Serialize(CGeoViewCamera *const this, CUtlBuffer *const bufOut)
{
  int m_nCameraId; // r12d
  int m_Put; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned __int8 *v9; // rdx
  unsigned __int8 *v10; // rdx
  unsigned __int8 *v11; // rdx
  unsigned __int8 *v12; // rdx
  float m_flHorizontalFOV; // [rsp+14h] [rbp-1Ch]
  int v14; // [rsp+1Ch] [rbp-14h]
  int v15; // [rsp+1Ch] [rbp-14h]

  if ( (bufOut->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(bufOut, "%u", 1);
  }
  else if ( CUtlBuffer::CheckPut(bufOut, 4) )
  {
    if ( (*&bufOut->m_Byteswap & 1) != 0 )
    {
      m_Put = bufOut->m_Put;
      v10 = &bufOut->m_Memory.m_pMemory[m_Put - bufOut->m_nOffset];
      if ( v10 != 0 )
      {
        *v10 = 0x1000000;
        m_Put = bufOut->m_Put;
      }
    }
    else
    {
      *&bufOut->m_Memory.m_pMemory[bufOut->m_Put - bufOut->m_nOffset] = 1;
      m_Put = bufOut->m_Put;
    }
    bufOut->m_Put = m_Put + 4;
    CUtlBuffer::AddNullTermination(bufOut);
    if ( (bufOut->m_Flags & 1) != 0 )
      goto LABEL_4;
    goto LABEL_13;
  }
  if ( (bufOut->m_Flags & 1) != 0 )
  {
LABEL_4:
    CUtlBuffer::Printf(bufOut, "%u", 36);
    goto LABEL_5;
  }
LABEL_13:
  if ( CUtlBuffer::CheckPut(bufOut, 4) )
  {
    if ( (*&bufOut->m_Byteswap & 1) != 0 )
    {
      v6 = bufOut->m_Put;
      v9 = &bufOut->m_Memory.m_pMemory[v6 - bufOut->m_nOffset];
      if ( v9 != 0 )
      {
        *v9 = 603979776;
        v6 = bufOut->m_Put;
      }
    }
    else
    {
      *&bufOut->m_Memory.m_pMemory[bufOut->m_Put - bufOut->m_nOffset] = 36;
      v6 = bufOut->m_Put;
    }
    bufOut->m_Put = v6 + 4;
    CUtlBuffer::AddNullTermination(bufOut);
  }
LABEL_5:
  CUtlBuffer::Put(bufOut, this, 28);
  if ( (bufOut->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(bufOut, "%f", this->m_flHorizontalFOV);
  }
  else
  {
    m_flHorizontalFOV = this->m_flHorizontalFOV;
    if ( CUtlBuffer::CheckPut(bufOut, 4) )
    {
      if ( (*&bufOut->m_Byteswap & 1) != 0 )
      {
        v8 = bufOut->m_Put;
        v11 = &bufOut->m_Memory.m_pMemory[v8 - bufOut->m_nOffset];
        if ( v11 != 0 )
        {
          LOBYTE(v14) = HIBYTE(m_flHorizontalFOV);
          BYTE1(v14) = BYTE2(m_flHorizontalFOV);
          BYTE2(v14) = BYTE1(m_flHorizontalFOV);
          HIBYTE(v14) = LOBYTE(m_flHorizontalFOV);
          *v11 = v14;
          v8 = bufOut->m_Put;
        }
      }
      else
      {
        *&bufOut->m_Memory.m_pMemory[bufOut->m_Put - bufOut->m_nOffset] = m_flHorizontalFOV;
        v8 = bufOut->m_Put;
      }
      bufOut->m_Put = v8 + 4;
      CUtlBuffer::AddNullTermination(bufOut);
    }
  }
  m_nCameraId = this->m_nCameraId;
  if ( (bufOut->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(bufOut, "%d", m_nCameraId);
  }
  else if ( CUtlBuffer::CheckPut(bufOut, 4) )
  {
    if ( (*&bufOut->m_Byteswap & 1) != 0 )
    {
      v7 = bufOut->m_Put;
      v12 = &bufOut->m_Memory.m_pMemory[v7 - bufOut->m_nOffset];
      if ( v12 != 0 )
      {
        LOBYTE(v15) = HIBYTE(m_nCameraId);
        BYTE1(v15) = BYTE2(m_nCameraId);
        BYTE2(v15) = BYTE1(m_nCameraId);
        HIBYTE(v15) = m_nCameraId;
        *v12 = v15;
        v7 = bufOut->m_Put;
      }
    }
    else
    {
      *&bufOut->m_Memory.m_pMemory[bufOut->m_Put - bufOut->m_nOffset] = m_nCameraId;
      v7 = bufOut->m_Put;
    }
    bufOut->m_Put = v7 + 4;
    CUtlBuffer::AddNullTermination(bufOut);
  }
}


// CGeoViewCamera::Unserialize  (line 641, @0x00000000031ddfd0, libserver.so)  // inlines: GetFloat, GetInt, GetType<float>, GetType<int>, GetType<unsigned int>, GetTypeBin<float>, GetTypeBin<int>, GetTypeBin<unsigned int>, GetTypeText<float>, GetTypeText<int>, GetTypeText<unsigned int>, GetUnsignedInt, LowLevelByteSwap<float>, LowLevelByteSwap<int>, PeekGet, StringToNumber<float>, StringToNumber<int>, StringToNumber<unsigned int>, SwapBufferToTargetEndian<float>, SwapBufferToTargetEndian<int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckArbitraryPeekGet, CUtlBuffer::Get, V_strtoi64, V_strtod, CUtlBuffer::CheckGet, V_strtoui64
void __fastcall CGeoViewCamera::Unserialize(CGeoViewCamera *const this, CUtlBuffer *const bufIn)
{
  bool v4; // al
  float v5; // xmm0_4
  bool v6; // al
  __int64 v7; // rdx
  int v8; // r13d
  int v9; // r13d
  bool v10; // al
  int v11; // ecx
  int v12; // edx
  int v13; // r13d
  int v14; // r13d
  bool v15; // al
  int m_Get; // eax
  bool v17; // zf
  uint *p_nSize; // rax
  uint nSize; // [rsp+0h] [rbp-30h] BYREF
  int nIncrement; // [rsp+4h] [rbp-2Ch] BYREF
  _QWORD v21[5]; // [rsp+8h] [rbp-28h] BYREF

  if ( (bufIn->m_Flags & 1) == 0 )
  {
    if ( CUtlBuffer::CheckGet(bufIn, 4) )
      bufIn->m_Get += 4;
LABEL_3:
    if ( (bufIn->m_Flags & 1) == 0 )
      goto LABEL_22;
    goto LABEL_4;
  }
  nIncrement = 128;
  if ( !CUtlBuffer::CheckArbitraryPeekGet(bufIn, 0, &nIncrement) )
    goto LABEL_3;
  v21[0] = &bufIn->m_Memory.m_pMemory[bufIn->m_Get - bufIn->m_nOffset];
  v14 = v21[0];
  nSize = V_strtoui64(v21[0], v21, 10);
  if ( LODWORD(v21[0]) == v14 )
    goto LABEL_3;
  bufIn->m_Get += LODWORD(v21[0]) - v14;
  if ( (bufIn->m_Flags & 1) == 0 )
  {
LABEL_22:
    if ( CUtlBuffer::CheckGet(bufIn, 4) )
      bufIn->m_Get += 4;
    goto LABEL_5;
  }
LABEL_4:
  nIncrement = 128;
  if ( CUtlBuffer::CheckArbitraryPeekGet(bufIn, 0, &nIncrement) )
  {
    v21[0] = &bufIn->m_Memory.m_pMemory[bufIn->m_Get - bufIn->m_nOffset];
    v13 = v21[0];
    nSize = V_strtoui64(v21[0], v21, 10);
    if ( LODWORD(v21[0]) != v13 )
      bufIn->m_Get += LODWORD(v21[0]) - v13;
  }
LABEL_5:
  CUtlBuffer::Get(bufIn, this, 28);
  if ( (bufIn->m_Flags & 1) == 0 )
  {
    v15 = CUtlBuffer::CheckGet(bufIn, 4);
    v5 = 0.0;
    if ( v15 )
    {
      m_Get = bufIn->m_Get;
      v17 = (*&bufIn->m_Byteswap & 1) == 0;
      v5 = *&bufIn->m_Memory.m_pMemory[m_Get - bufIn->m_nOffset];
      nSize = LODWORD(v5);
      if ( !v17 )
      {
        LOBYTE(v21[0]) = HIBYTE(nSize);
        BYTE1(v21[0]) = BYTE2(nSize);
        BYTE2(v21[0]) = BYTE1(nSize);
        BYTE3(v21[0]) = nSize;
        v5 = *v21;
      }
      bufIn->m_Get = m_Get + 4;
    }
LABEL_7:
    this->m_flHorizontalFOV = v5;
    if ( (bufIn->m_Flags & 1) == 0 )
      goto LABEL_14;
LABEL_8:
    nIncrement = 128;
    v6 = CUtlBuffer::CheckArbitraryPeekGet(bufIn, 0, &nIncrement);
    v7 = 0;
    if ( v6 )
    {
      LOBYTE(v7) = 10;
      v21[0] = &bufIn->m_Memory.m_pMemory[bufIn->m_Get - bufIn->m_nOffset];
      v8 = v21[0];
      LODWORD(v7) = V_strtoi64(v21[0], v21, v7);
      if ( LODWORD(v21[0]) != v8 )
      {
        bufIn->m_Get += LODWORD(v21[0]) - v8;
        this->m_nCameraId = v7;
        return;
      }
    }
LABEL_9:
    this->m_nCameraId = v7;
    return;
  }
  nIncrement = 128;
  v4 = CUtlBuffer::CheckArbitraryPeekGet(bufIn, 0, &nIncrement);
  v5 = 0.0;
  if ( !v4 )
    goto LABEL_7;
  v21[0] = &bufIn->m_Memory.m_pMemory[bufIn->m_Get - bufIn->m_nOffset];
  v9 = v21[0];
  v5 = V_strtod(v21[0], v21);
  nSize = LODWORD(v5);
  if ( LODWORD(v21[0]) == v9 )
    goto LABEL_7;
  bufIn->m_Get += LODWORD(v21[0]) - v9;
  this->m_flHorizontalFOV = v5;
  if ( (bufIn->m_Flags & 1) != 0 )
    goto LABEL_8;
LABEL_14:
  v10 = CUtlBuffer::CheckGet(bufIn, 4);
  LODWORD(v7) = 0;
  if ( !v10 )
    goto LABEL_9;
  if ( (*&bufIn->m_Byteswap & 1) != 0 )
  {
    v11 = bufIn->m_Get;
    p_nSize = &bufIn->m_Memory.m_pMemory[v11 - bufIn->m_nOffset];
    if ( p_nSize == 0 )
      p_nSize = &nSize;
    LODWORD(v21[0]) = nSize;
    LOBYTE(v21[0]) = *(p_nSize + 3);
    BYTE1(v21[0]) = *(p_nSize + 2);
    BYTE2(v21[0]) = *(p_nSize + 1);
    BYTE3(v21[0]) = *p_nSize;
    v12 = v21[0];
  }
  else
  {
    v11 = bufIn->m_Get;
    v12 = *&bufIn->m_Memory.m_pMemory[v11 - bufIn->m_nOffset];
  }
  bufIn->m_Get = v11 + 4;
  this->m_nCameraId = v12;
}


// CGeoViewPolygon::AddVert  (line 656, @0x00000000031df630, libserver.so)  // inlines: AddToTail, CGeoViewVertex, Color, Construct<CGeoViewVertex>, Element, GrowMemory, MakeColor32FromFloatColor, SetRawColor, operator=, operator[]
// calls: CUtlMemory<CGeoViewVertex, int>::Grow
// callers: CGeoViewBuffer::WritePolygon, CGeoViewBuffer::WritePolygonIndexed, CGeoViewBuffer::WriteKDTree
void __fastcall CGeoViewPolygon::AddVert(
        CGeoViewPolygon *const this,
        const Vector *const vPos,
        float a3,
        float r,
        float g,
        float b)
{
  int m_Size; // r13d
  int v9; // eax
  int v10; // ecx
  __int64 v11; // rax
  CGeoViewVertex *v12; // rdx
  CGeoViewVertex *v13; // rdx
  unsigned __int16 v14; // dx
  float ba; // [rsp+4h] [rbp-2Ch]
  float ga; // [rsp+8h] [rbp-28h]
  float ra; // [rsp+Ch] [rbp-24h]

  m_Size = this->m_verts.m_Size;
  v9 = this->m_verts.m_Size;
  if ( this->m_verts.m_Size == this->m_verts.m_Memory.m_nAllocationCount )
  {
    ba = g;
    ga = r;
    ra = a3;
    CUtlMemory<CGeoViewVertex,int>::Grow(&this->m_verts.m_Memory, 1);
    v9 = this->m_verts.m_Size;
    g = ba;
    r = ga;
    a3 = ra;
  }
  v10 = v9 + 1;
  v11 = m_Size;
  this->m_verts.m_Size = v10;
  v12 = &this->m_verts.m_Memory.m_pMemory[v11];
  if ( v12 != 0 )
  {
    v12->m_color = 0;
    v13 = &this->m_verts.m_Memory.m_pMemory[v11];
  }
  else
  {
    v13 = 0;
  }
  v13->m_vPos.x = vPos->x;
  v13->m_vPos.y = vPos->y;
  v13->m_vPos.z = vPos->z;
  LOBYTE(v14) = (a3 * 255.0);
  HIBYTE(v14) = (r * 255.0);
  this->m_verts.m_Memory.m_pMemory[v11].m_color = (((255.0 * g) << 16) | v14 | 0xFF000000);
}


// CGeoViewPolygon::ByteCount  (line 663, @0x00000000031de310, libserver.so)
size_t __fastcall CGeoViewPolygon::ByteCount(CGeoViewPolygon *const this)
{
  return 16LL * this->m_verts.m_Size;
}


// CGeoViewPolygon::Serialize  (line 668, @0x00000000031de320, libserver.so)  // inlines: ByteCount, LowLevelByteSwap<unsigned int>, PeekPut, PutType<unsigned int>, PutTypeBin<unsigned int>, PutUnsignedInt, SwapBufferToTargetEndian<unsigned int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::Printf, CGeoViewVertex::Serialize, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination
// callers: CGeoViewBuffer::WritePolygon, CGeoViewBuffer::WritePolygonIndexed, CGeoViewBuffer::WriteKDTree
void __fastcall CGeoViewPolygon::Serialize(CGeoViewPolygon *const this, CUtlBuffer *const bufOut)
{
  int v4; // ebx
  __int64 i; // rbx
  int m_Put; // eax
  int v7; // eax
  unsigned __int8 *v8; // rdx
  unsigned __int8 *v9; // rdx
  int v10; // [rsp+Ch] [rbp-24h]

  if ( (bufOut->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(bufOut, "%u", 2);
  }
  else if ( CUtlBuffer::CheckPut(bufOut, 4) )
  {
    if ( (*&bufOut->m_Byteswap & 1) != 0 )
    {
      m_Put = bufOut->m_Put;
      v9 = &bufOut->m_Memory.m_pMemory[m_Put - bufOut->m_nOffset];
      if ( v9 != 0 )
      {
        *v9 = 0x2000000;
        m_Put = bufOut->m_Put;
      }
    }
    else
    {
      *&bufOut->m_Memory.m_pMemory[bufOut->m_Put - bufOut->m_nOffset] = 2;
      m_Put = bufOut->m_Put;
    }
    bufOut->m_Put = m_Put + 4;
    CUtlBuffer::AddNullTermination(bufOut);
    v4 = 16 * this->m_verts.m_Size;
    if ( (bufOut->m_Flags & 1) != 0 )
      goto LABEL_4;
    goto LABEL_12;
  }
  v4 = 16 * this->m_verts.m_Size;
  if ( (bufOut->m_Flags & 1) != 0 )
  {
LABEL_4:
    CUtlBuffer::Printf(bufOut, "%u", v4);
    goto LABEL_5;
  }
LABEL_12:
  if ( CUtlBuffer::CheckPut(bufOut, 4) )
  {
    if ( (*&bufOut->m_Byteswap & 1) != 0 )
    {
      v7 = bufOut->m_Put;
      v8 = &bufOut->m_Memory.m_pMemory[v7 - bufOut->m_nOffset];
      if ( v8 != 0 )
      {
        LOBYTE(v10) = HIBYTE(v4);
        BYTE1(v10) = BYTE2(v4);
        BYTE2(v10) = BYTE1(v4);
        HIBYTE(v10) = v4;
        *v8 = v10;
        v7 = bufOut->m_Put;
      }
    }
    else
    {
      *&bufOut->m_Memory.m_pMemory[bufOut->m_Put - bufOut->m_nOffset] = v4;
      v7 = bufOut->m_Put;
    }
    bufOut->m_Put = v7 + 4;
    CUtlBuffer::AddNullTermination(bufOut);
  }
LABEL_5:
  for ( i = 0; this->m_verts.m_Size > i; ++i )
    CGeoViewVertex::Serialize(&this->m_verts.m_Memory.m_pMemory[i], bufOut);
}


// CGeoViewPolygon::Unserialize  (line 678, @0x00000000031e04e0, libserver.so)  // inlines: AddMultipleToTail, CGeoViewVertex, Color, Construct<CGeoViewVertex>, EnsureCount, GetType<unsigned int>, GetTypeBin<unsigned int>, GetTypeText<unsigned int>, GetUnsignedInt, GrowMemory, GrowVector, InsertMultipleBefore, LowLevelByteSwap<unsigned int>, PeekGet, StringToNumber<unsigned int>, SwapBufferToTargetEndian<unsigned int>, V_memcpy, memcpy, operator[]
// calls: CUtlBuffer::CheckArbitraryPeekGet, CGeoViewVertex::Unserialize, V_strtoui64, CUtlMemory<CGeoViewVertex, int>::Grow, CUtlBuffer::CheckGet
void __fastcall CGeoViewPolygon::Unserialize(CGeoViewPolygon *const this, CUtlBuffer *const bufIn)
{
  unsigned __int64 v4; // rbx
  int v5; // r14d
  int m_Size; // r15d
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rdi
  int v10; // ebx
  uint v11; // eax
  int v12; // r8d
  int m_nAllocationCount; // eax
  int v14; // edx
  __int64 v15; // rax
  CGeoViewVertex *v16; // rcx
  int v17; // ebx
  int m_Get; // edx
  unsigned __int64 v19; // rbx
  uint *p_nTag; // rax
  uint nTag; // [rsp+10h] [rbp-40h] BYREF
  int nIncrement; // [rsp+14h] [rbp-3Ch] BYREF
  _QWORD v23[7]; // [rsp+18h] [rbp-38h] BYREF

  if ( (bufIn->m_Flags & 1) == 0 )
  {
    if ( CUtlBuffer::CheckGet(bufIn, 4) )
      bufIn->m_Get += 4;
LABEL_3:
    if ( (bufIn->m_Flags & 1) == 0 )
      goto LABEL_24;
    goto LABEL_4;
  }
  nIncrement = 128;
  if ( !CUtlBuffer::CheckArbitraryPeekGet(bufIn, 0, &nIncrement) )
    goto LABEL_3;
  v23[0] = &bufIn->m_Memory.m_pMemory[bufIn->m_Get - bufIn->m_nOffset];
  v17 = v23[0];
  nTag = V_strtoui64(v23[0], v23, 10);
  if ( LODWORD(v23[0]) == v17 )
    goto LABEL_3;
  bufIn->m_Get += LODWORD(v23[0]) - v17;
  if ( (bufIn->m_Flags & 1) == 0 )
  {
LABEL_24:
    if ( CUtlBuffer::CheckGet(bufIn, 4) )
    {
      if ( (*&bufIn->m_Byteswap & 1) != 0 )
      {
        m_Get = bufIn->m_Get;
        p_nTag = &bufIn->m_Memory.m_pMemory[m_Get - bufIn->m_nOffset];
        if ( p_nTag == 0 )
          p_nTag = &nTag;
        LODWORD(v23[0]) = nTag;
        LOBYTE(v23[0]) = *(p_nTag + 3);
        BYTE1(v23[0]) = *(p_nTag + 2);
        BYTE2(v23[0]) = *(p_nTag + 1);
        BYTE3(v23[0]) = *p_nTag;
        v19 = LODWORD(v23[0]);
      }
      else
      {
        m_Get = bufIn->m_Get;
        v19 = *&bufIn->m_Memory.m_pMemory[m_Get - bufIn->m_nOffset];
      }
      v4 = v19 >> 4;
      bufIn->m_Get = m_Get + 4;
      v5 = v4;
    }
    else
    {
      LODWORD(v4) = 0;
      v5 = 0;
    }
LABEL_5:
    m_Size = this->m_verts.m_Size;
    if ( this->m_verts.m_Size >= v4 )
      goto LABEL_6;
    goto LABEL_13;
  }
LABEL_4:
  nIncrement = 128;
  LODWORD(v4) = 0;
  v5 = 0;
  if ( !CUtlBuffer::CheckArbitraryPeekGet(bufIn, 0, &nIncrement) )
    goto LABEL_5;
  v23[0] = &bufIn->m_Memory.m_pMemory[bufIn->m_Get - bufIn->m_nOffset];
  v10 = v23[0];
  v11 = V_strtoui64(v23[0], v23, 10);
  nTag = v11;
  if ( LODWORD(v23[0]) != v10 )
    bufIn->m_Get += LODWORD(v23[0]) - v10;
  m_Size = this->m_verts.m_Size;
  v4 = v11 >> 4;
  v5 = v4;
  if ( this->m_verts.m_Size < v4 )
  {
LABEL_13:
    v12 = v4 - m_Size;
    if ( v4 != m_Size )
    {
      m_nAllocationCount = this->m_verts.m_Memory.m_nAllocationCount;
      if ( m_nAllocationCount < v4 )
      {
        CUtlMemory<CGeoViewVertex,int>::Grow(&this->m_verts.m_Memory, v4 - m_nAllocationCount);
        v12 = v4 - m_Size;
      }
      this->m_verts.m_Size = v4;
      if ( v12 > 0 )
      {
        v14 = 0;
        v15 = m_Size;
        do
        {
          v16 = &this->m_verts.m_Memory.m_pMemory[v15];
          if ( v16 != 0 )
            v16->m_color = 0;
          ++v14;
          ++v15;
        }
        while ( v12 > v14 );
      }
    }
  }
LABEL_6:
  if ( v5 != 0 )
  {
    v7 = 0;
    v8 = 16 * ((v5 - 1) + 1LL);
    do
    {
      v9 = v7;
      v7 += 16;
      CGeoViewVertex::Unserialize((this->m_verts.m_Memory.m_pMemory + v9), bufIn);
    }
    while ( v7 != v8 );
  }
}


// CGeoViewText3D::CGeoViewText3D  (line 692, @0x00000000031de4d0, libserver.so)
void __fastcall CGeoViewText3D::CGeoViewText3D(CGeoViewText3D *const this, const Vector *const vPos, const char *pText)
{
  vec_t z; // eax

  *&this->m_vPos.x = *&vPos->x;
  z = vPos->z;
  this->m_pText = pText;
  this->m_vPos.z = z;
}


// CGeoViewText3D::ByteCount  (line 698, @0x00000000031de4f0, libserver.so)  // inlines: V_strlen
// calls: strlen
size_t __fastcall CGeoViewText3D::ByteCount(CGeoViewText3D *const this)
{
  const char *m_pText; // rdi

  m_pText = this->m_pText;
  if ( m_pText != 0 )
    return strlen(m_pText) + 13LL;
  else
    return 13;
}


// CGeoViewText3D::Serialize  (line 704, @0x00000000031de520, libserver.so)  // inlines: ByteCount, LowLevelByteSwap<unsigned int>, PeekPut, PutType<unsigned int>, PutTypeBin<unsigned int>, PutUnsignedInt, SwapBufferToTargetEndian<unsigned int>, V_memcpy, V_strlen, memcpy, operator[]
// calls: CUtlBuffer::Printf, strlen, CUtlBuffer::Put, CUtlBuffer::PutString, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination
// callers: CGeoViewBuffer::WriteText3D
void __fastcall CGeoViewText3D::Serialize(CGeoViewText3D *const this, CUtlBuffer *const bufOut)
{
  const char *m_pText; // rdi
  int v5; // r13d
  int m_Put; // eax
  int v7; // eax
  unsigned __int8 *v8; // rdx
  unsigned __int8 *v9; // rdx
  int v10; // [rsp+Ch] [rbp-24h]

  if ( (bufOut->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(bufOut, "%u", 3);
    goto LABEL_3;
  }
  if ( !CUtlBuffer::CheckPut(bufOut, 4) )
  {
LABEL_3:
    m_pText = this->m_pText;
    if ( m_pText != 0 )
      goto LABEL_4;
LABEL_11:
    v5 = 13;
    if ( (bufOut->m_Flags & 1) != 0 )
      goto LABEL_5;
    goto LABEL_12;
  }
  if ( (*&bufOut->m_Byteswap & 1) != 0 )
  {
    m_Put = bufOut->m_Put;
    v9 = &bufOut->m_Memory.m_pMemory[m_Put - bufOut->m_nOffset];
    if ( v9 != 0 )
    {
      *v9 = 50331648;
      m_Put = bufOut->m_Put;
    }
  }
  else
  {
    *&bufOut->m_Memory.m_pMemory[bufOut->m_Put - bufOut->m_nOffset] = 3;
    m_Put = bufOut->m_Put;
  }
  bufOut->m_Put = m_Put + 4;
  CUtlBuffer::AddNullTermination(bufOut);
  m_pText = this->m_pText;
  if ( m_pText == 0 )
    goto LABEL_11;
LABEL_4:
  v5 = strlen(m_pText) + 13;
  if ( (bufOut->m_Flags & 1) != 0 )
  {
LABEL_5:
    CUtlBuffer::Printf(bufOut, "%u", v5);
    goto LABEL_6;
  }
LABEL_12:
  if ( CUtlBuffer::CheckPut(bufOut, 4) )
  {
    if ( (*&bufOut->m_Byteswap & 1) != 0 )
    {
      v7 = bufOut->m_Put;
      v8 = &bufOut->m_Memory.m_pMemory[v7 - bufOut->m_nOffset];
      if ( v8 != 0 )
      {
        LOBYTE(v10) = HIBYTE(v5);
        BYTE1(v10) = BYTE2(v5);
        BYTE2(v10) = BYTE1(v5);
        HIBYTE(v10) = v5;
        *v8 = v10;
        v7 = bufOut->m_Put;
      }
    }
    else
    {
      *&bufOut->m_Memory.m_pMemory[bufOut->m_Put - bufOut->m_nOffset] = v5;
      v7 = bufOut->m_Put;
    }
    bufOut->m_Put = v7 + 4;
    CUtlBuffer::AddNullTermination(bufOut);
  }
LABEL_6:
  CUtlBuffer::Put(bufOut, this, 12);
  CUtlBuffer::PutString(bufOut, this->m_pText);
}


// CGeoViewText3D::Unserialize  (line 712, @0x00000000031de6d0, libserver.so)  // inlines: GetType<unsigned int>, GetTypeBin<unsigned int>, GetTypeText<unsigned int>, GetUnsignedInt, PeekGet, StringToNumber<unsigned int>, V_strlen, operator[]
// calls: CUtlBuffer::CheckArbitraryPeekGet, CUtlBuffer::Get, strlen, CUtlBuffer::SeekGet, V_strtoui64, CUtlBuffer::CheckGet
void __fastcall CGeoViewText3D::Unserialize(CGeoViewText3D *const this, CUtlBuffer *const bufIn)
{
  const char *v4; // rdi
  int v5; // edx
  int v6; // r13d
  int v7; // r13d
  int nIncrement; // [rsp+4h] [rbp-2Ch] BYREF
  _QWORD v9[5]; // [rsp+8h] [rbp-28h] BYREF

  if ( (bufIn->m_Flags & 1) == 0 )
  {
    if ( CUtlBuffer::CheckGet(bufIn, 4) )
      bufIn->m_Get += 4;
LABEL_3:
    if ( (bufIn->m_Flags & 1) == 0 )
      goto LABEL_12;
    goto LABEL_4;
  }
  nIncrement = 128;
  if ( !CUtlBuffer::CheckArbitraryPeekGet(bufIn, 0, &nIncrement) )
    goto LABEL_3;
  v9[0] = &bufIn->m_Memory.m_pMemory[bufIn->m_Get - bufIn->m_nOffset];
  v7 = v9[0];
  V_strtoui64(v9[0], v9, 10);
  if ( LODWORD(v9[0]) == v7 )
    goto LABEL_3;
  bufIn->m_Get += LODWORD(v9[0]) - v7;
  if ( (bufIn->m_Flags & 1) == 0 )
  {
LABEL_12:
    if ( CUtlBuffer::CheckGet(bufIn, 4) )
      bufIn->m_Get += 4;
    goto LABEL_5;
  }
LABEL_4:
  nIncrement = 128;
  if ( CUtlBuffer::CheckArbitraryPeekGet(bufIn, 0, &nIncrement) )
  {
    v9[0] = &bufIn->m_Memory.m_pMemory[bufIn->m_Get - bufIn->m_nOffset];
    v6 = v9[0];
    V_strtoui64(v9[0], v9, 10);
    if ( LODWORD(v9[0]) != v6 )
      bufIn->m_Get += LODWORD(v9[0]) - v6;
  }
LABEL_5:
  CUtlBuffer::Get(bufIn, this, 12);
  v4 = &bufIn->m_Memory.m_pMemory[bufIn->m_Get - bufIn->m_nOffset];
  this->m_pText = v4;
  if ( v4 != 0 )
    v5 = strlen(v4) + 1;
  else
    v5 = 1;
  CUtlBuffer::SeekGet(bufIn, CUtlBuffer::SeekType_t::SEEK_CURRENT, v5);
}


// CGeoViewBuffer::CGeoViewBuffer  (line 724, @0x00000000031de860, libserver.so)  // inlines: LowLevelByteSwap<unsigned int>, PeekPut, Purge, PutType<unsigned int>, PutTypeBin<unsigned int>, PutUnsignedInt, SwapBufferToTargetEndian<unsigned int>, V_memcpy, memcpy, operator[], ~CUtlBuffer, ~CUtlMemory
// calls: CUtlBuffer::CUtlBuffer, CUtlBuffer::Printf, CUtlBuffer::CheckPut, CUtlBuffer::AddNullTermination, _Unwind_Resume
void __fastcall CGeoViewBuffer::CGeoViewBuffer(CGeoViewBuffer *const this)
{
  int m_Put; // eax
  int v3; // eax
  unsigned __int8 *v4; // rdx
  unsigned __int8 *v5; // rdx

  CUtlBuffer::CUtlBuffer(this, 0, 0, 0);
  if ( (this->m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(this, "%u", 1448035655);
  }
  else if ( CUtlBuffer::CheckPut(this, 4) )
  {
    if ( (*&this->m_Byteswap & 1) != 0 )
    {
      m_Put = this->m_Put;
      v5 = &this->m_Memory.m_pMemory[m_Put - this->m_nOffset];
      if ( v5 != 0 )
      {
        *v5 = 1195724630;
        m_Put = this->m_Put;
      }
    }
    else
    {
      *&this->m_Memory.m_pMemory[this->m_Put - this->m_nOffset] = 1448035655;
      m_Put = this->m_Put;
    }
    this->m_Put = m_Put + 4;
    CUtlBuffer::AddNullTermination(this);
    if ( (this->m_Flags & 1) != 0 )
      goto LABEL_4;
    goto LABEL_10;
  }
  if ( (this->m_Flags & 1) != 0 )
  {
LABEL_4:
    CUtlBuffer::Printf(this, "%u", 4096);
    return;
  }
LABEL_10:
  if ( CUtlBuffer::CheckPut(this, 4) )
  {
    if ( (*&this->m_Byteswap & 1) != 0 )
    {
      v3 = this->m_Put;
      v4 = &this->m_Memory.m_pMemory[v3 - this->m_nOffset];
      if ( v4 != 0 )
      {
        *v4 = 0x100000;
        v3 = this->m_Put;
      }
    }
    else
    {
      *&this->m_Memory.m_pMemory[this->m_Put - this->m_nOffset] = 4096;
      v3 = this->m_Put;
    }
    this->m_Put = v3 + 4;
    CUtlBuffer::AddNullTermination(this);
  }
}


// CGeoViewBuffer::WriteBox  (line 730, @0x00000000031e0930, libserver.so)
// calls: CGeoViewBuffer::WriteLine
// callers: CGeoViewBuffer::WriteBBox, CGeoViewBuffer::WriteOrientedBox, CGeoViewBuffer::WriteSweptBox
void __fastcall CGeoViewBuffer::WriteBox(
        CGeoViewBuffer *const this,
        Vector *vCorners,
        float a3,
        float r,
        float g,
        float b)
{
  const Vector *v6; // r14
  const Vector *v8; // r13
  const Vector *v10; // r15
  float v11; // xmm3_4
  float v12; // xmm3_4
  float v13; // xmm3_4
  float v14; // xmm3_4
  float v15; // xmm3_4
  float v16; // xmm3_4
  float v17; // xmm3_4
  float v18; // xmm3_4
  float v19; // xmm3_4
  float v20; // xmm3_4
  float v21; // xmm3_4

  v6 = vCorners + 1;
  v8 = vCorners + 4;
  v10 = vCorners + 6;
  CGeoViewBuffer::WriteLine(this, vCorners, vCorners + 1, a3, r, g, b);
  CGeoViewBuffer::WriteLine(this, vCorners + 2, vCorners + 3, a3, r, g, v11);
  CGeoViewBuffer::WriteLine(this, v8, vCorners + 5, a3, r, g, v12);
  CGeoViewBuffer::WriteLine(this, v10, vCorners + 7, a3, r, g, v13);
  CGeoViewBuffer::WriteLine(this, vCorners, vCorners + 2, a3, r, g, v14);
  CGeoViewBuffer::WriteLine(this, v6, vCorners + 3, a3, r, g, v15);
  CGeoViewBuffer::WriteLine(this, v8, v10, a3, r, g, v16);
  CGeoViewBuffer::WriteLine(this, vCorners + 5, vCorners + 7, a3, r, g, v17);
  CGeoViewBuffer::WriteLine(this, vCorners, v8, a3, r, g, v18);
  CGeoViewBuffer::WriteLine(this, v6, vCorners + 5, a3, r, g, v19);
  CGeoViewBuffer::WriteLine(this, vCorners + 2, v10, a3, r, g, v20);
  CGeoViewBuffer::WriteLine(this, vCorners + 3, vCorners + 7, a3, r, g, v21);
}


// CGeoViewBuffer::WriteBBox  (line 751, @0x00000000031e0af0, libserver.so)
// calls: CGeoViewBuffer::WriteBox
void __fastcall CGeoViewBuffer::WriteBBox(
        CGeoViewBuffer *const this,
        const Vector *const vMins,
        const Vector *const vMaxs,
        float r,
        float g,
        float b)
{
  int v6; // eax
  vec_t *p_z; // rcx
  float z; // xmm3_4
  Vector vCorners[8]; // [rsp+0h] [rbp-60h] BYREF

  v6 = 0;
  p_z = &vCorners[0].z;
  do
  {
    while ( (v6 & 1) != 0 )
    {
      *(p_z - 2) = vMaxs->x;
      if ( (v6 & 2) == 0 )
        goto LABEL_7;
LABEL_3:
      *(p_z - 1) = vMaxs->y;
      if ( (v6 & 4) == 0 )
        goto LABEL_8;
LABEL_4:
      z = vMaxs->z;
      ++v6;
      p_z += 3;
      *(p_z - 3) = z;
      if ( v6 == 8 )
        goto LABEL_9;
    }
    *(p_z - 2) = vMins->x;
    if ( (v6 & 2) != 0 )
      goto LABEL_3;
LABEL_7:
    *(p_z - 1) = vMins->y;
    if ( (v6 & 4) != 0 )
      goto LABEL_4;
LABEL_8:
    z = vMins->z;
    ++v6;
    p_z += 3;
    *(p_z - 3) = z;
  }
  while ( v6 != 8 );
LABEL_9:
  CGeoViewBuffer::WriteBox(this, vCorners, r, g, b, z);
}


// CGeoViewBuffer::WriteOrientedBox  (line 764, @0x00000000031e0b80, libserver.so)  // inlines: TransformPoint, TransformVector, operator=
// calls: CGeoViewBuffer::WriteBox
void __fastcall CGeoViewBuffer::WriteOrientedBox(
        CGeoViewBuffer *const this,
        const Vector *const vMins,
        const Vector *const vMaxs,
        const CTransform *const boxRoot,
        __m128i r,
        float g,
        float b)
{
  float v7; // r9d
  float x; // xmm12_4
  vec_t *p_z; // rax
  float z; // xmm11_4
  float y; // xmm3_4
  float v12; // xmm6_4
  float v13; // xmm4_4
  float v14; // xmm13_4
  float v15; // xmm5_4
  float v16; // xmm8_4
  float v17; // xmm9_4
  float v18; // xmm6_4
  float v19; // xmm0_4
  float v20; // xmm12_4
  float v21; // xmm8_4
  float v22; // xmm7_4
  float v23; // xmm15_4
  float v24; // xmm10_4
  float v25; // xmm3_4
  float v26; // xmm14_4
  float v27; // xmm15_4
  float v28; // xmm9_4
  int v29; // ecx
  float v30; // xmm11_4
  float v31; // xmm7_4
  float v32; // xmm3_4
  float v33; // xmm5_4
  float v34; // xmm6_4
  float v35; // xmm4_4
  float v36; // xmm0_4
  float v37; // xmm6_4
  float v38; // xmm3_4
  float v39; // [rsp-Ch] [rbp-74h]
  float v40; // [rsp-8h] [rbp-70h]
  float v41; // [rsp-4h] [rbp-6Ch]
  Vector vCorners[8]; // [rsp+0h] [rbp-68h] BYREF

  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(r));
  x = boxRoot->m_orientation.x;
  p_z = &vCorners[0].z;
  z = boxRoot->m_orientation.z;
  y = boxRoot->m_orientation.y;
  v12 = boxRoot->m_orientation.w + boxRoot->m_orientation.w;
  v13 = z * (x + x);
  v41 = boxRoot->m_vPosition.z;
  v14 = boxRoot->m_vPosition.y;
  v15 = y * v12;
  v16 = (x + x) * y;
  v17 = x * v12;
  v18 = v12 * z;
  v19 = 1.0 - (x * (x + x));
  v40 = v13 - v15;
  v20 = v16 + v18;
  v39 = v15 + v13;
  v21 = v16 - v18;
  v22 = (y + y) * y;
  v23 = z * (y + y);
  v24 = v23 - v17;
  v25 = (z + z) * z;
  v26 = v19 - v22;
  v27 = v23 + v17;
  v28 = boxRoot->m_vPosition.x;
  v29 = 0;
  v30 = v19 - v25;
  v31 = (1.0 - v22) - v25;
  do
  {
    if ( (v29 & 1) != 0 )
    {
      *(p_z - 2) = vMaxs->x;
      if ( (v29 & 2) != 0 )
        goto LABEL_3;
    }
    else
    {
      *(p_z - 2) = vMins->x;
      if ( (v29 & 2) != 0 )
      {
LABEL_3:
        *(p_z - 1) = vMaxs->y;
        if ( (v29 & 4) != 0 )
          goto LABEL_4;
        goto LABEL_9;
      }
    }
    *(p_z - 1) = vMins->y;
    if ( (v29 & 4) != 0 )
    {
LABEL_4:
      v32 = vMaxs->z;
      goto LABEL_5;
    }
LABEL_9:
    v32 = vMins->z;
LABEL_5:
    v33 = *(p_z - 2);
    ++v29;
    p_z += 3;
    v34 = *(p_z - 4) * v30;
    v35 = *(p_z - 4) * v27;
    *(p_z - 5) = (((v33 * v31) + v28) + (*(p_z - 4) * v21)) + (v39 * v32);
    v36 = ((v33 * v20) + v14) + v34;
    v37 = v32 * v24;
    v38 = v32 * v26;
    *(p_z - 4) = v36 + v37;
    *(p_z - 3) = (((v33 * v40) + v41) + v35) + v38;
  }
  while ( v29 != 8 );
  CGeoViewBuffer::WriteBox(this, vCorners, v7, g, b, v38);
}


// CGeoViewBuffer::WriteOrientedBox  (line 779, @0x00000000031e0d90, libserver.so)  // inlines: V3Mul
// calls: CGeoViewBuffer::WriteBox
void __fastcall CGeoViewBuffer::WriteOrientedBox(
        CGeoViewBuffer *const this,
        const Vector *const vMins,
        const Vector *const vMaxs,
        const VMatrix *const xform,
        __m128i r,
        float g,
        float b)
{
  float v7; // r9d
  int v8; // eax
  float v9; // xmm15_4
  float v10; // xmm14_4
  float v11; // xmm13_4
  float v12; // xmm12_4
  float v13; // xmm11_4
  float v14; // xmm10_4
  float v15; // xmm9_4
  float v16; // xmm8_4
  Vector *v17; // rcx
  float x; // xmm5_4
  float y; // xmm4_4
  float z; // xmm3_4
  float v21; // xmm6_4
  float v22; // xmm7_4
  float v23; // xmm3_4
  float v24; // [rsp-20h] [rbp-88h]
  float v25; // [rsp-1Ch] [rbp-84h]
  float v26; // [rsp-18h] [rbp-80h]
  float v27; // [rsp-14h] [rbp-7Ch]
  float v28; // [rsp-10h] [rbp-78h]
  float v29; // [rsp-Ch] [rbp-74h]
  float v30; // [rsp-8h] [rbp-70h]
  float v31; // [rsp-4h] [rbp-6Ch]
  Vector vCorners[8]; // [rsp+0h] [rbp-68h] BYREF

  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(r));
  v8 = 0;
  v31 = xform->m[3][0];
  v30 = xform->m[3][1];
  v29 = xform->m[1][2];
  v28 = xform->m[1][3];
  v27 = xform->m[2][0];
  v26 = xform->m[2][1];
  v9 = xform->m[3][2];
  v25 = xform->m[2][2];
  v10 = xform->m[3][3];
  v24 = xform->m[2][3];
  v11 = xform->m[0][0];
  v12 = xform->m[0][1];
  v13 = xform->m[0][2];
  v14 = xform->m[0][3];
  v15 = xform->m[1][0];
  v16 = xform->m[1][1];
  v17 = vCorners;
  do
  {
    if ( (v8 & 1) != 0 )
    {
      x = vMaxs->x;
      if ( (v8 & 2) != 0 )
        goto LABEL_3;
    }
    else
    {
      x = vMins->x;
      if ( (v8 & 2) != 0 )
      {
LABEL_3:
        y = vMaxs->y;
        if ( (v8 & 4) != 0 )
          goto LABEL_4;
        goto LABEL_9;
      }
    }
    y = vMins->y;
    if ( (v8 & 4) != 0 )
    {
LABEL_4:
      z = vMaxs->z;
      goto LABEL_5;
    }
LABEL_9:
    z = vMins->z;
LABEL_5:
    ++v8;
    ++v17;
    v21 = 1.0 / ((((v31 * x) + (v30 * y)) + (z * v9)) + v10);
    v17[-1].x = ((((x * v11) + (y * v12)) + (z * v13)) + v14) * v21;
    v22 = v29 * z;
    v23 = z * v25;
    v17[-1].y = ((((x * v15) + (y * v16)) + v22) + v28) * v21;
    v17[-1].z = ((((x * v27) + (y * v26)) + v23) + v24) * v21;
  }
  while ( v8 != 8 );
  CGeoViewBuffer::WriteBox(this, vCorners, v7, g, b, v23);
}


// CGeoViewBuffer::WriteLine  (line 795, @0x00000000031e0860, libserver.so)  // inlines: CGeoViewLines, CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, ~CGeoViewLines, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CGeoViewLines::AddVert, CGeoViewLines::Serialize, CUtlMemory<CGeoViewVertex, int>::Purge, CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CGeoViewBuffer::WriteBox, CGeoViewBuffer::WriteDiscWireframe, CGeoViewBuffer::WriteSweptBox
void __fastcall CGeoViewBuffer::WriteLine(
        CGeoViewBuffer *const this,
        const Vector *const p0,
        const Vector *const p1,
        float r,
        float g,
        float b,
        float a7)
{
  float v9; // xmm3_4
  CGeoViewLines lines; // [rsp+10h] [rbp-40h] BYREF

  lines.m_verts.m_Size = 0;
  lines.m_verts.m_Memory.m_pMemory = 0;
  lines.m_verts.m_Memory.m_nAllocationCount = 0;
  lines.m_verts.m_Memory.m_nGrowSize = 0;
  CGeoViewLines::AddVert(&lines, p0, r, g, b, a7);
  CGeoViewLines::AddVert(&lines, p1, r, g, b, v9);
  CGeoViewLines::Serialize(&lines, this);
  lines.m_verts.m_Size = 0;
  if ( (lines.m_verts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CGeoViewVertex,int>::Purge(&lines.m_verts.m_Memory);
    if ( (lines.m_verts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CGeoViewVertex,int>::Purge(&lines.m_verts.m_Memory);
  }
}


// CGeoViewBuffer::WriteDisc  (line 803, @0x00000000031df830, libserver.so)  // inlines: SinCos, VectorAdd, VectorMultiply, operator*, operator+, operator=
// calls: sincosf, CGeoViewBuffer::WritePolygon, __stack_chk_fail
void __fastcall CGeoViewBuffer::WriteDisc(
        CGeoViewBuffer *const this,
        const Vector *const vCenter,
        const Vector *const vAxis0,
        const Vector *const vAxis1,
        float flRadius,
        float r,
        float g,
        float b,
        int nSegs)
{
  void *v11; // rsp
  float v14; // xmm7_4
  Vector *v15; // r15
  Vector *v16; // r13
  float v17; // xmm1_4
  float v18; // xmm6_4
  float v19; // xmm3_4
  float v20; // xmm5_4
  float v21; // [rsp+Ch] [rbp-84h]
  float v22; // [rsp+10h] [rbp-80h] BYREF
  float ra; // [rsp+14h] [rbp-7Ch]
  CGeoViewBuffer *v24; // [rsp+18h] [rbp-78h]
  Vector *pVerts; // [rsp+20h] [rbp-70h]
  float *cosx; // [rsp+28h] [rbp-68h]
  float *sinx; // [rsp+30h] [rbp-60h]
  int nVertCount; // [rsp+38h] [rbp-58h]
  float x; // [rsp+3Ch] [rbp-54h]
  float v30; // [rsp+40h] [rbp-50h]
  float flAngle; // [rsp+44h] [rbp-4Ch]
  float flCos; // [rsp+48h] [rbp-48h] BYREF
  float flSin; // [rsp+4Ch] [rbp-44h] BYREF
  unsigned __int64 v34; // [rsp+58h] [rbp-38h]

  ra = r;
  v34 = __readfsqword(0x28u);
  v24 = this;
  v22 = g;
  v21 = b;
  nVertCount = nSegs;
  v11 = alloca(((12LL * nSegs + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
  pVerts = (&v22 & 0xFFFFFFFFFFFFFFEFLL);
  x = 6.283185307179586 / nSegs;
  if ( nSegs > 0 )
  {
    v14 = x;
    v15 = pVerts;
    v16 = &pVerts[(nVertCount - 1) + 1];
    sinx = &flSin;
    cosx = &flCos;
    do
    {
      v30 = flRadius;
      flAngle = v14;
      ++v15;
      sincosf(v14, sinx, cosx);
      flRadius = v30;
      v17 = vAxis1->z * flSin;
      v18 = ((vAxis0->z * flCos) * v30) + vCenter->z;
      v19 = flSin * vAxis1->x;
      v20 = ((flCos * vAxis0->x) * v30) + vCenter->x;
      v15[-1].y = ((vAxis1->y * flSin) * v30) + (((vAxis0->y * flCos) * v30) + vCenter->y);
      b = (v19 * flRadius) + v20;
      v15[-1].z = (v17 * flRadius) + v18;
      v15[-1].x = b;
      v14 = flAngle + x;
    }
    while ( v15 != v16 );
  }
  CGeoViewBuffer::WritePolygon(v24, pVerts, nVertCount, ra, v22, v21, b);
}


// CGeoViewBuffer::WriteDiscWireframe  (line 819, @0x00000000031e0f50, libserver.so)  // inlines: SinCos, VectorAdd, VectorMultiply, operator*, operator+, operator=
// calls: sincosf, CGeoViewBuffer::WriteLine
// callers: CGeoViewBuffer::WriteSphere
void __fastcall CGeoViewBuffer::WriteDiscWireframe(
        CGeoViewBuffer *const this,
        const Vector *const vCenter,
        const Vector *const vAxis0,
        const Vector *const vAxis1,
        float flRadius,
        float r,
        float g,
        float b,
        int nSegs)
{
  vec_t x; // xmm5_4
  __m128d v12; // xmm0
  float y; // xmm2_4
  float v14; // xmm6_4
  vec_t v15; // xmm1_4
  float z; // xmm3_4
  float v17; // xmm8_4
  float v18; // xmm7_4
  int v19; // r13d
  float v21; // xmm7_4
  float v24; // xmm1_4
  float v25; // xmm3_4
  float v30; // [rsp+38h] [rbp-78h]
  float v31; // [rsp+3Ch] [rbp-74h]
  float v32; // [rsp+40h] [rbp-70h]
  float v33; // [rsp+44h] [rbp-6Ch]
  float v34; // [rsp+48h] [rbp-68h]
  float v35; // [rsp+4Ch] [rbp-64h]
  float v36; // [rsp+50h] [rbp-60h]
  float flAngle; // [rsp+54h] [rbp-5Ch]
  float v38; // [rsp+58h] [rbp-58h] BYREF
  float v39; // [rsp+5Ch] [rbp-54h] BYREF
  Vector vLast; // [rsp+60h] [rbp-50h] BYREF
  Vector vPos; // [rsp+70h] [rbp-40h] BYREF

  x = vCenter->x;
  v12 = 0x401921FB54442D18uLL;
  y = vAxis0->y;
  v14 = vCenter->y;
  v12.m128d_f64[0] = 6.283185307179586 / nSegs;
  v15 = vAxis0->x;
  z = vAxis0->z;
  v17 = _mm_movedup_pd(v12).m128d_f64[0];
  v18 = vCenter->z;
  vLast.x = (flRadius * vAxis0->x) + vCenter->x;
  vLast.y = (flRadius * y) + v14;
  vLast.z = (flRadius * z) + v18;
  if ( nSegs > 0 )
  {
    v30 = v18;
    v19 = 0;
    v21 = v17;
    v31 = v14;
    v32 = x;
    v33 = z;
    v34 = y;
    v35 = v15;
    while ( 1 )
    {
      flAngle = v21;
      v36 = flRadius;
      ++v19;
      sincosf(v21, &v39, &v38);
      v24 = vAxis1->z * v39;
      v25 = v39 * vAxis1->x;
      vPos.y = ((vAxis1->y * v39) * v36) + (((v34 * v38) * v36) + v31);
      vPos.z = (v24 * v36) + (((v33 * v38) * v36) + v30);
      vPos.x = (v25 * v36) + (((v38 * v35) * v36) + v32);
      CGeoViewBuffer::WriteLine(this, &vLast, &vPos, r, g, b, vPos.x);
      vLast = vPos;
      v21 = flAngle + v17;
      if ( v19 == nSegs )
        break;
      v35 = vAxis0->x;
      v34 = vAxis0->y;
      v33 = vAxis0->z;
      v32 = vCenter->x;
      flRadius = v36;
      v31 = vCenter->y;
      v30 = vCenter->z;
    }
  }
}


// CGeoViewBuffer::WriteSphere  (line 835, @0x00000000031e11d0, libserver.so)  // inlines: DEG2RAD, Vector
// calls: GenerateRotatedAxis, CGeoViewBuffer::WriteDiscWireframe
void __fastcall CGeoViewBuffer::WriteSphere(
        CGeoViewBuffer *const this,
        const Vector *const vCenter,
        float a3,
        float flRadius,
        float r,
        float g,
        float b)
{
  int v7; // r15d
  float v10; // xmm4_4
  vec_t v11; // xmm1_4
  float v12; // xmm1_4
  vec_t v13; // xmm1_4
  float v14; // [rsp+1Ch] [rbp-84h]
  Vector vAxis0; // [rsp+30h] [rbp-70h] BYREF
  Vector vAxis1; // [rsp+40h] [rbp-60h] BYREF
  Vector v21; // [rsp+50h] [rbp-50h] BYREF
  Vector v22; // [rsp+60h] [rbp-40h] BYREF

  v7 = 0;
  do
  {
    v10 = v7;
    v22.x = 0.0;
    ++v7;
    v22.y = 1.0;
    v22.z = 0.0;
    v21.x = 1.0;
    v21.y = 0.0;
    v21.z = 0.0;
    v14 = ((v10 * 180.0) * 0.125) * 0.017453292;
    *&vAxis0.x = GenerateRotatedAxis(&v21, &v22, v14, flRadius).m128i_u64[0];
    vAxis0.z = v11;
    v22.x = 0.0;
    v22.y = 0.0;
    v22.z = 1.0;
    CGeoViewBuffer::WriteDiscWireframe(this, vCenter, &vAxis0, &v22, a3, flRadius, r, g, 32);
    v22.x = 0.0;
    v22.y = 0.0;
    v22.z = 1.0;
    v21.x = 0.0;
    v21.y = 1.0;
    v21.z = 0.0;
    *&vAxis1.x = GenerateRotatedAxis(&v21, &v22, v14, v12).m128i_u64[0];
    vAxis1.z = v13;
    v22.x = 1.0;
    v22.y = 0.0;
    v22.z = 0.0;
    CGeoViewBuffer::WriteDiscWireframe(this, vCenter, &v22, &vAxis1, a3, flRadius, r, g, 32);
  }
  while ( v7 != 8 );
}


// CGeoViewBuffer::WritePolygon  (line 847, @0x00000000031df730, libserver.so)  // inlines: CGeoViewPolygon, CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, ~CGeoViewPolygon, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CGeoViewPolygon::AddVert, CGeoViewPolygon::Serialize, CUtlMemory<CGeoViewVertex, int>::Purge, CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CGeoViewBuffer::WriteDisc
void __fastcall CGeoViewBuffer::WritePolygon(
        CGeoViewBuffer *const this,
        const Vector *pVerts,
        int nVertCount,
        float r,
        float g,
        float b,
        float a7)
{
  const Vector *v8; // rbx
  const Vector *v9; // r13
  CGeoViewPolygon poly; // [rsp+10h] [rbp-40h] BYREF

  if ( nVertCount != 0 )
  {
    poly.m_verts.m_Size = 0;
    poly.m_verts.m_Memory.m_pMemory = 0;
    poly.m_verts.m_Memory.m_nAllocationCount = 0;
    poly.m_verts.m_Memory.m_nGrowSize = 0;
    if ( nVertCount > 0 )
    {
      v8 = pVerts;
      v9 = &pVerts[(nVertCount - 1) + 1];
      do
        CGeoViewPolygon::AddVert(&poly, v8++, r, g, b, a7);
      while ( v8 != v9 );
    }
    CGeoViewPolygon::Serialize(&poly, this);
    poly.m_verts.m_Size = 0;
    if ( (poly.m_verts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CGeoViewVertex,int>::Purge(&poly.m_verts.m_Memory);
      if ( (poly.m_verts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CGeoViewVertex,int>::Purge(&poly.m_verts.m_Memory);
    }
  }
}


// CGeoViewBuffer::WritePolygonIndexed  (line 859, @0x00000000031dfa00, libserver.so)  // inlines: CGeoViewPolygon, CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, ~CGeoViewPolygon, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CGeoViewPolygon::AddVert, CGeoViewPolygon::Serialize, CUtlMemory<CGeoViewVertex, int>::Purge, CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CGeoViewBuffer::WriteAmbientCube
void __fastcall CGeoViewBuffer::WritePolygonIndexed(
        CGeoViewBuffer *const this,
        const Vector *pVerts,
        const Vector *pColors,
        const int *pIndices,
        int nIndexCount)
{
  float v5; // xmm3_4
  const int *v8; // r15
  const int *v9; // rbx
  CGeoViewPolygon poly; // [rsp+10h] [rbp-50h] BYREF

  if ( nIndexCount != 0 )
  {
    poly.m_verts.m_Size = 0;
    poly.m_verts.m_Memory.m_pMemory = 0;
    poly.m_verts.m_Memory.m_nAllocationCount = 0;
    poly.m_verts.m_Memory.m_nGrowSize = 0;
    if ( nIndexCount > 0 )
    {
      v8 = &pIndices[nIndexCount - 1 + 1];
      v9 = pIndices;
      do
      {
        CGeoViewPolygon::AddVert(&poly, &pVerts[*v9], pColors[*v9].x, pColors[*v9].y, pColors[*v9].z, v5);
        ++v9;
      }
      while ( v9 != v8 );
    }
    CGeoViewPolygon::Serialize(&poly, this);
    poly.m_verts.m_Size = 0;
    if ( (poly.m_verts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CGeoViewVertex,int>::Purge(&poly.m_verts.m_Memory);
      if ( (poly.m_verts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CGeoViewVertex,int>::Purge(&poly.m_verts.m_Memory);
    }
  }
}


// CGeoViewBuffer::WritePolygon  (line 873, @0x00000000031dff90, libserver.so)  // inlines: CGeoViewPolygon, CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, ~CGeoViewPolygon, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CGeoViewPolygon::AddVert, CGeoViewPolygon::Serialize, CUtlMemory<CGeoViewVertex, int>::Purge, CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CGeoViewBuffer::WritePolygon(
        CGeoViewBuffer *const this,
        const Vector *pVerts,
        const Vector *pColors,
        int nVertCount)
{
  float v4; // xmm3_4
  const Vector *v6; // rbx
  const Vector *v8; // r14
  CGeoViewPolygon poly; // [rsp+0h] [rbp-50h] BYREF

  if ( nVertCount != 0 )
  {
    poly.m_verts.m_Size = 0;
    poly.m_verts.m_Memory.m_pMemory = 0;
    poly.m_verts.m_Memory.m_nAllocationCount = 0;
    poly.m_verts.m_Memory.m_nGrowSize = 0;
    if ( nVertCount > 0 )
    {
      v6 = pColors;
      v8 = &pColors[(nVertCount - 1) + 1];
      do
      {
        CGeoViewPolygon::AddVert(&poly, pVerts, v6->x, v6->y, v6->z, v4);
        ++v6;
        ++pVerts;
      }
      while ( v6 != v8 );
    }
    CGeoViewPolygon::Serialize(&poly, this);
    poly.m_verts.m_Size = 0;
    if ( (poly.m_verts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CGeoViewVertex,int>::Purge(&poly.m_verts.m_Memory);
      if ( (poly.m_verts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CGeoViewVertex,int>::Purge(&poly.m_verts.m_Memory);
    }
  }
}


// CGeoViewBuffer::WritePolygonWireframe  (line 887, @0x00000000031e1700, libserver.so)  // inlines: CGeoViewLines, CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, ~CGeoViewLines, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CGeoViewLines::AddVert, CGeoViewLines::Serialize, CUtlMemory<CGeoViewVertex, int>::Purge, CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CGeoViewBuffer::WritePolygonWireframe(
        CGeoViewBuffer *const this,
        const Vector *pVerts,
        int nVertCount,
        float r,
        float g,
        float b,
        float a7)
{
  const Vector *v9; // rbx
  const Vector *v10; // r13
  CGeoViewLines lines; // [rsp+10h] [rbp-50h] BYREF

  if ( nVertCount != 0 )
  {
    lines.m_verts.m_Size = 0;
    lines.m_verts.m_Memory.m_pMemory = 0;
    lines.m_verts.m_Memory.m_nAllocationCount = 0;
    lines.m_verts.m_Memory.m_nGrowSize = 0;
    if ( nVertCount > 0 )
    {
      v9 = pVerts;
      v10 = &pVerts[(nVertCount - 1) + 1];
      do
        CGeoViewLines::AddVert(&lines, v9++, r, g, b, a7);
      while ( v9 != v10 );
    }
    CGeoViewLines::AddVert(&lines, pVerts, r, g, b, a7);
    CGeoViewLines::Serialize(&lines, this);
    lines.m_verts.m_Size = 0;
    if ( (lines.m_verts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CGeoViewVertex,int>::Purge(&lines.m_verts.m_Memory);
      if ( (lines.m_verts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CGeoViewVertex,int>::Purge(&lines.m_verts.m_Memory);
    }
  }
}


// CGeoViewBuffer::WriteKDTreeAndChildren  (line 903, @0x00000000031e0360, libserver.so)
// calls: CGeoViewBuffer::WriteKDTree
// callers: CGeoViewBuffer::WriteKDTree, CGeoViewBuffer::WriteKDTree_HalfLambert, CGeoViewBuffer::WriteKDTreeMaterialColors
void __fastcall CGeoViewBuffer::WriteKDTreeAndChildren(
        CGeoViewBuffer *const this,
        RayTracingEnvironment *pTree,
        uint16 nSkipFlagsMask,
        IVertColorBase *pVertFunc)
{
  __int64 v7; // r12
  int v8; // ebx
  InstancedRayTracingEnvironmentReference_t *v9; // rax

  v7 = 0;
  v8 = 0;
  CGeoViewBuffer::WriteKDTree(this, pTree, &g_MatrixIdentity, nSkipFlagsMask, pVertFunc);
  if ( pTree->m_childInstances.m_Size > 0 )
  {
    do
    {
      ++v8;
      v9 = pTree->m_childInstances.m_Memory.m_pMemory[v7++];
      CGeoViewBuffer::WriteKDTree(this, v9->m_pEnvironment, &v9->m_matTransform, nSkipFlagsMask, pVertFunc);
    }
    while ( pTree->m_childInstances.m_Size > v8 );
  }
}


// CGeoViewBuffer::WriteKDTree  (line 913, @0x00000000031e0090, libserver.so)  // inlines: CGeoViewPolygon, CUtlMemory, CUtlVector, CUtlVectorBase, GetTriangle, MajorIndex, MinorIndex, Purge, RemoveAll, TransformVector, VectorTransform, operator=, operator[], ~CGeoViewPolygon, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CacheOptimizedTriangle_t::ExtractVerticesFromIntersectionFormat, VectorTransform, CGeoViewPolygon::AddVert, CGeoViewPolygon::Serialize, CUtlMemory<CGeoViewVertex, int>::Purge, CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CGeoViewBuffer::WriteKDTreeAndChildren
void __fastcall CGeoViewBuffer::WriteKDTree(
        CGeoViewBuffer *const this,
        RayTracingEnvironment *pTree,
        const matrix3x4a_t *const xform,
        uint16 nSkipFlagsMask,
        IVertColorBase *pVertFunc)
{
  int v6; // ebx
  int m_Size; // r15d
  CacheOptimizedTriangle_t *v9; // rdi
  int (**vptr_IVertColorBase)(...); // rax
  double v11; // xmm0_8
  float v12; // xmm3_4
  const Vector *v13; // r13
  float v14; // xmm1_4
  float v18; // [rsp+24h] [rbp-BCh]
  float r; // [rsp+30h] [rbp-B0h]
  float g; // [rsp+34h] [rbp-ACh]
  CGeoViewPolygon poly; // [rsp+60h] [rbp-80h] BYREF
  Vector v[3]; // [rsp+80h] [rbp-60h] BYREF

  v6 = 0;
  m_Size = pTree->m_optimizedTriangleList.m_Size;
  if ( m_Size > 0 )
  {
    do
    {
      while ( 1 )
      {
        v9 = &pTree->m_optimizedTriangleList.m_Memory.m_pMemory[v6 >> (*(&pTree->m_optimizedTriangleList.m_Memory + 15) >> 3)][v6 & *(&pTree->m_optimizedTriangleList.m_Memory + 3) & 0x7FFFFFF];
        if ( (nSkipFlagsMask & v9->m_Data.m_IntersectData.m_nFlags) == 0
          && CacheOptimizedTriangle_t::ExtractVerticesFromIntersectionFormat(v9, v, &v[1], &v[2]) )
        {
          VectorTransform(&v[0].x, xform, &poly.m_verts.m_Size);
          LODWORD(v[0].x) = poly.m_verts.m_Size;
          v[0].y = *(&poly.m_verts.m_Size + 1);
          v[0].z = *&poly.m_verts.m_Memory.m_pMemory;
          VectorTransform(&v[1].x, xform, &poly.m_verts.m_Size);
          LODWORD(v[1].x) = poly.m_verts.m_Size;
          v[1].y = *(&poly.m_verts.m_Size + 1);
          v[1].z = *&poly.m_verts.m_Memory.m_pMemory;
          VectorTransform(&v[2].x, xform, &poly.m_verts.m_Size);
          LODWORD(v[2].x) = poly.m_verts.m_Size;
          vptr_IVertColorBase = pVertFunc->_vptr_IVertColorBase;
          v[2].y = *(&poly.m_verts.m_Size + 1);
          v[2].z = *&poly.m_verts.m_Memory.m_pMemory;
          v11 = (*vptr_IVertColorBase)(pVertFunc, pTree, v6, v, &v[1], &v[2]);
          v13 = &v[2];
          g = v14;
          poly.m_verts.m_Size = 0;
          poly.m_verts.m_Memory.m_pMemory = 0;
          poly.m_verts.m_Memory.m_nAllocationCount = 0;
          poly.m_verts.m_Memory.m_nGrowSize = 0;
          r = *(&v11 + 1);
          v18 = *&v11;
          do
            CGeoViewPolygon::AddVert(&poly, v13--, v18, r, g, v12);
          while ( v13 != &poly.m_verts.m_Memory.m_nGrowSize );
          CGeoViewPolygon::Serialize(&poly, this);
          poly.m_verts.m_Size = 0;
          if ( (poly.m_verts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          {
            CUtlMemory<CGeoViewVertex,int>::Purge(&poly.m_verts.m_Memory);
            if ( (poly.m_verts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              break;
          }
        }
        if ( ++v6 == m_Size )
          return;
      }
      ++v6;
      CUtlMemory<CGeoViewVertex,int>::Purge(&poly.m_verts.m_Memory);
    }
    while ( v6 != m_Size );
  }
}


// CGeoViewBuffer::WriteKDTree  (line 942, @0x00000000031e03f0, libserver.so)  // inlines: CVertColorConstant, Vector
// calls: CGeoViewBuffer::WriteKDTreeAndChildren
void __fastcall CGeoViewBuffer::WriteKDTree(
        CGeoViewBuffer *const this,
        RayTracingEnvironment *pTree,
        uint16 nSkipFlagsMask,
        vec_t r,
        vec_t g,
        vec_t b)
{
  CVertColorConstant vertColor; // [rsp+0h] [rbp-20h] BYREF

  vertColor._vptr_IVertColorBase = &off_47CE090;
  vertColor.m_vColor.x = r;
  vertColor.m_vColor.y = g;
  vertColor.m_vColor.z = b;
  CGeoViewBuffer::WriteKDTreeAndChildren(this, pTree, nSkipFlagsMask, &vertColor);
}


// CGeoViewBuffer::WriteKDTree_HalfLambert  (line 948, @0x00000000031e0420, libserver.so)  // inlines: CVertColorHalfLambert, Normalized, operator=
// calls: VectorNormalize, CGeoViewBuffer::WriteKDTreeAndChildren
void __fastcall CGeoViewBuffer::WriteKDTree_HalfLambert(
        CGeoViewBuffer *const this,
        RayTracingEnvironment *pTree,
        uint16 nSkipFlagsMask,
        const Vector *const vLightDirection,
        float r,
        float g,
        float b)
{
  __int64 v10; // rax
  Vector vec; // [rsp+0h] [rbp-50h] BYREF
  CVertColorHalfLambert vertColor; // [rsp+10h] [rbp-40h] BYREF

  vertColor._vptr_IVertColorBase = &off_47CE0B0;
  v10 = *&vLightDirection->x;
  vertColor.m_flGreen = g;
  vertColor.m_flBlue = b;
  vertColor.m_flRed = r;
  *&vec.x = v10;
  vec.z = vLightDirection->z;
  VectorNormalize(&vec);
  vertColor.m_vLightDir = vec;
  CGeoViewBuffer::WriteKDTreeAndChildren(this, pTree, nSkipFlagsMask, &vertColor);
}


// CGeoViewBuffer::WriteKDTreeMaterialColors  (line 954, @0x00000000031e04b0, libserver.so)  // inlines: CVertColorMaterial
// calls: CGeoViewBuffer::WriteKDTreeAndChildren
void __fastcall CGeoViewBuffer::WriteKDTreeMaterialColors(
        CGeoViewBuffer *const this,
        RayTracingEnvironment *pTree,
        uint16 nSkipFlagsMask,
        const Vector *pMaterialColors,
        uint nMaterialCount)
{
  IVertColorBase pVertFunc; // [rsp+0h] [rbp-20h] BYREF
  const Vector *pMaterialColorsa; // [rsp+8h] [rbp-18h]
  uint v7; // [rsp+10h] [rbp-10h]

  pMaterialColorsa = pMaterialColors;
  pVertFunc._vptr_IVertColorBase = &off_47CE0D0;
  v7 = nMaterialCount;
  CGeoViewBuffer::WriteKDTreeAndChildren(this, pTree, nSkipFlagsMask, &pVertFunc);
}


// CGeoViewBuffer::WriteCMeshWireframe  (line 961, @0x00000000031e1820, libserver.so)  // inlines: CGeoViewLines, CUtlMemory, CUtlVector, CUtlVectorBase, GetVertex, GetVertexPosition, Purge, RemoveAll, ToMatrix, TransformMatrix, TransformVector, VectorTransform, ~CGeoViewLines, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: TransformMatrix, VectorTransform, CGeoViewLines::AddVert, CGeoViewLines::Serialize, CUtlMemory<CGeoViewVertex, int>::Purge, CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CGeoViewBuffer::WriteCMeshWireframe(
        CGeoViewBuffer *const this,
        const CMesh *const mesh,
        const CTransform *const transform,
        float r,
        float g,
        float b)
{
  __int64 v7; // r13
  int v8; // r14d
  uint32 *m_pIndices; // rax
  float *m_pVerts; // rdx
  uint32 *v11; // rax
  float *v12; // rdx
  int m_Size; // xmm0_4
  vec_t v14; // xmm0_4
  float v15; // xmm3_4
  float v16; // xmm3_4
  float v17; // xmm3_4
  float v18; // xmm3_4
  Vector v0; // [rsp+40h] [rbp-B0h] BYREF
  Vector v1; // [rsp+50h] [rbp-A0h] BYREF
  Vector v2; // [rsp+60h] [rbp-90h] BYREF
  CGeoViewLines lines; // [rsp+70h] [rbp-80h] BYREF
  matrix3x4_t xform; // [rsp+90h] [rbp-60h] BYREF

  TransformMatrix(transform, &xform);
  if ( mesh->m_nIndexCount > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      while ( 1 )
      {
        VectorTransform(
          &mesh->m_pVerts[mesh->m_nVertexStrideFloats * mesh->m_pIndices[v7]],
          &xform,
          &lines.m_verts.m_Size);
        m_pIndices = mesh->m_pIndices;
        LODWORD(v0.x) = lines.m_verts.m_Size;
        m_pVerts = mesh->m_pVerts;
        v0.y = *(&lines.m_verts.m_Size + 1);
        v0.z = *&lines.m_verts.m_Memory.m_pMemory;
        VectorTransform(&m_pVerts[mesh->m_nVertexStrideFloats * m_pIndices[v7 + 1]], &xform, &lines.m_verts.m_Size);
        v11 = mesh->m_pIndices;
        LODWORD(v1.x) = lines.m_verts.m_Size;
        v12 = mesh->m_pVerts;
        v1.y = *(&lines.m_verts.m_Size + 1);
        v1.z = *&lines.m_verts.m_Memory.m_pMemory;
        VectorTransform(&v12[mesh->m_nVertexStrideFloats * v11[v7 + 2]], &xform, &lines.m_verts.m_Size);
        m_Size = lines.m_verts.m_Size;
        lines.m_verts.m_Size = 0;
        LODWORD(v2.x) = m_Size;
        lines.m_verts.m_Memory.m_nAllocationCount = 0;
        v2.y = *(&lines.m_verts.m_Size + 1);
        v14 = *&lines.m_verts.m_Memory.m_pMemory;
        lines.m_verts.m_Memory.m_pMemory = 0;
        v2.z = v14;
        lines.m_verts.m_Memory.m_nGrowSize = 0;
        CGeoViewLines::AddVert(&lines, &v0, r, g, b, v15);
        CGeoViewLines::AddVert(&lines, &v1, r, g, b, v16);
        CGeoViewLines::AddVert(&lines, &v2, r, g, b, v17);
        CGeoViewLines::AddVert(&lines, &v0, r, g, b, v18);
        CGeoViewLines::Serialize(&lines, this);
        lines.m_verts.m_Size = 0;
        if ( (lines.m_verts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<CGeoViewVertex,int>::Purge(&lines.m_verts.m_Memory);
          if ( (lines.m_verts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            break;
        }
        v8 += 3;
        v7 += 3;
        if ( mesh->m_nIndexCount <= v8 )
          return;
      }
      v8 += 3;
      v7 += 3;
      CUtlMemory<CGeoViewVertex,int>::Purge(&lines.m_verts.m_Memory);
    }
    while ( mesh->m_nIndexCount > v8 );
  }
}


// CGeoViewBuffer::WriteSweptBox  (line 978, @0x00000000031e1380, libserver.so)  // inlines: TransformPoint, TransformVector, operator+=, operator=
// calls: CGeoViewBuffer::WriteBox, CGeoViewBuffer::WriteLine
void __fastcall CGeoViewBuffer::WriteSweptBox(
        CGeoViewBuffer *const this,
        const CTransform *const boxRoot,
        const Vector *const vMins,
        const Vector *const vMaxs,
        const Vector *const vSweep,
        __m128i r,
        float g,
        float b)
{
  float v8; // r15d
  vec_t *p_z; // rax
  float x; // xmm6_4
  float z; // xmm5_4
  float y; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm15_4
  float v16; // xmm14_4
  float v17; // xmm3_4
  float v18; // xmm7_4
  float v19; // xmm4_4
  int v20; // esi
  Vector *v21; // r8
  float v22; // xmm4_4
  float v23; // xmm10_4
  float v24; // xmm11_4
  float v25; // xmm2_4
  float v26; // xmm13_4
  float v27; // xmm3_4
  float v28; // xmm6_4
  float v29; // xmm11_4
  float v30; // xmm7_4
  float v31; // xmm12_4
  float v32; // xmm0_4
  float v33; // xmm7_4
  float v34; // xmm13_4
  float v35; // xmm9_4
  float v36; // xmm6_4
  float v37; // xmm8_4
  float v38; // xmm3_4
  float v39; // xmm2_4
  float v40; // xmm7_4
  float v41; // xmm5_4
  float v42; // xmm8_4
  float v43; // xmm1_4
  float v44; // xmm4_4
  float v45; // xmm7_4
  float v46; // xmm0_4
  float v47; // xmm6_4
  __int64 v48; // r14
  float v49; // xmm3_4
  float v50; // xmm3_4
  const Vector *v51; // rdx
  const Vector *v52; // rsi
  float end; // [rsp+4h] [rbp-118h]
  float end_4; // [rsp+8h] [rbp-114h]
  float end_8; // [rsp+Ch] [rbp-110h]
  float end_12; // [rsp+10h] [rbp-10Ch]
  float end_16; // [rsp+14h] [rbp-108h]
  float end_20; // [rsp+18h] [rbp-104h]
  float end_24; // [rsp+1Ch] [rbp-100h]
  float end_28; // [rsp+20h] [rbp-FCh]
  Vector vCorners[8]; // [rsp+2Ch] [rbp-F0h] BYREF
  Vector vCornersEnd[8]; // [rsp+8Ch] [rbp-90h] BYREF

  v8 = COERCE_FLOAT(_mm_cvtsi128_si32(r));
  p_z = &vCorners[0].z;
  x = boxRoot->m_orientation.x;
  z = boxRoot->m_orientation.z;
  y = boxRoot->m_orientation.y;
  v14 = boxRoot->m_orientation.w + boxRoot->m_orientation.w;
  v15 = boxRoot->m_vPosition.y;
  v16 = boxRoot->m_vPosition.z;
  v17 = vSweep->y + v15;
  v18 = vSweep->z;
  end = boxRoot->m_vPosition.x;
  v19 = boxRoot->m_vPosition.x + vSweep->x;
  v20 = 0;
  v21 = vCornersEnd;
  end_16 = v17;
  end_20 = v19;
  v22 = v14 * x;
  end_12 = v18 + v16;
  v23 = ((x + x) * z) + (v14 * y);
  end_28 = ((x + x) * z) - (v14 * y);
  v24 = (x + x) * y;
  v25 = v14 * z;
  v26 = 1.0 - (x * (x + x));
  v27 = (y + y) * y;
  v28 = v24 + v25;
  v29 = v24 - v25;
  v30 = z * (y + y);
  end_8 = v28;
  v31 = v30 - v22;
  v32 = (z + z) * z;
  end_4 = v30 + v22;
  v33 = v26 - v27;
  v34 = v26 - v32;
  v35 = (1.0 - v27) - v32;
  end_24 = v33;
  do
  {
    if ( (v20 & 1) != 0 )
    {
      *(p_z - 2) = vMaxs->x;
      if ( (v20 & 2) != 0 )
        goto LABEL_3;
    }
    else
    {
      *(p_z - 2) = vMins->x;
      if ( (v20 & 2) != 0 )
      {
LABEL_3:
        *(p_z - 1) = vMaxs->y;
        if ( (v20 & 4) != 0 )
          goto LABEL_4;
        goto LABEL_9;
      }
    }
    *(p_z - 1) = vMins->y;
    if ( (v20 & 4) != 0 )
    {
LABEL_4:
      v36 = vMaxs->z;
      goto LABEL_5;
    }
LABEL_9:
    v36 = vMins->z;
LABEL_5:
    v37 = *(p_z - 2);
    v38 = v31 * v36;
    ++v20;
    p_z += 3;
    ++v21;
    v39 = end_28 * v37;
    v40 = *(p_z - 4);
    v41 = end_8 * v37;
    v42 = v37 * v35;
    v43 = end_4 * v40;
    v44 = v34 * v40;
    v45 = v40 * v29;
    v46 = end_24 * v36;
    v47 = v36 * v23;
    v21[-1].x = ((end_20 + v42) + v45) + v47;
    *(p_z - 5) = ((v42 + end) + v45) + v47;
    v21[-1].y = ((end_16 + v41) + v44) + v38;
    *(p_z - 4) = ((v41 + v15) + v44) + v38;
    v21[-1].z = ((end_12 + v39) + v43) + v46;
    *(p_z - 3) = ((v39 + v16) + v43) + v46;
  }
  while ( v20 != 8 );
  v48 = 0;
  CGeoViewBuffer::WriteBox(this, vCorners, v8, g, b, v38);
  CGeoViewBuffer::WriteBox(this, vCornersEnd, v8, g, b, v49);
  do
  {
    v51 = &vCornersEnd[v48];
    v52 = &vCorners[v48++];
    CGeoViewBuffer::WriteLine(this, v52, v51, v8, g, b, v50);
  }
  while ( v48 != 8 );
}


// CGeoViewBuffer::WriteAmbientCube  (line 1001, @0x00000000031dfb10, libserver.so)  // inlines: Dot, DotProduct, EvaluateAmbientCube, GetAmbientCubeWeights, VectorAdd, VectorMA, VectorMultiply, operator*, operator+, operator=
// calls: sincosf, CGeoViewBuffer::WritePolygonIndexed, __stack_chk_fail
void __fastcall CGeoViewBuffer::WriteAmbientCube(
        CGeoViewBuffer *const this,
        const Vector *const vCenter,
        float flRadialDistancePerLuminanceUnit,
        Vector (*const pAmbientCube)[6],
        int nTheta,
        int nPhi)
{
  signed __int64 v6; // rdx
  void *v7; // rsp
  void *v8; // rsp
  unsigned __int64 *v10; // r12
  int v11; // ebx
  float v12; // xmm0_4
  unsigned __int64 *v13; // rdx
  int v14; // xmm5_4
  float v15; // xmm8_4
  int v16; // xmm9_4
  __int64 v17; // rcx
  Vector *v18; // r12
  Vector *v19; // r15
  float v20; // xmm0_4
  float v21; // xmm6_4
  float v22; // xmm0_4
  float v23; // xmm7_4
  float v24; // xmm1_4
  float v25; // xmm1_4
  float v26; // xmm1_4
  float v27; // xmm1_4
  float x; // xmm3_4
  float y; // xmm2_4
  float z; // xmm1_4
  Vector *v31; // rax
  float *j; // rsi
  float v33; // xmm4_4
  float v34; // xmm0_4
  vec_t v35; // xmm7_4
  vec_t v36; // xmm4_4
  vec_t v37; // xmm0_4
  int v38; // ebx
  int v39; // r12d
  int v40; // r13d
  int v41; // edx
  int nVert; // [rsp+4h] [rbp-C4h]
  int v44; // [rsp+8h] [rbp-C0h] BYREF
  int i; // [rsp+Ch] [rbp-BCh]
  int *v46; // [rsp+10h] [rbp-B8h]
  Vector (*pAmbientCubea)[6]; // [rsp+18h] [rbp-B0h]
  float v48; // [rsp+20h] [rbp-A8h]
  float v49; // [rsp+24h] [rbp-A4h]
  CGeoViewBuffer *thisa; // [rsp+28h] [rbp-A0h]
  float *p_sinx; // [rsp+30h] [rbp-98h]
  float *p_cosx; // [rsp+38h] [rbp-90h]
  Vector *pColors; // [rsp+40h] [rbp-88h]
  Vector *pVerts; // [rsp+48h] [rbp-80h]
  float v55; // [rsp+50h] [rbp-78h]
  int v56; // [rsp+54h] [rbp-74h]
  float *v57; // [rsp+58h] [rbp-70h]
  int *idx; // [rsp+60h] [rbp-68h]
  int i_0; // [rsp+68h] [rbp-60h]
  float v60; // [rsp+6Ch] [rbp-5Ch]
  float cosx; // [rsp+70h] [rbp-58h] BYREF
  int sinx; // [rsp+74h] [rbp-54h] BYREF
  int pIndices[4]; // [rsp+78h] [rbp-50h] BYREF
  float v64; // [rsp+88h] [rbp-40h]
  float v65; // [rsp+8Ch] [rbp-3Ch]
  unsigned __int64 v66; // [rsp+90h] [rbp-38h] BYREF

  pAmbientCubea = pAmbientCube;
  thisa = this;
  v66 = __readfsqword(0x28u);
  v6 = ((12LL * nTheta * nPhi + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16;
  v49 = flRadialDistancePerLuminanceUnit;
  v7 = alloca(v6);
  v56 = nTheta;
  v8 = alloca(v6);
  pVerts = (&v44 & 0xFFFFFFFFFFFFFFEFLL);
  pColors = (&v44 & 0xFFFFFFFFFFFFFFEFLL);
  if ( nPhi <= 0 )
  {
    v44 = nPhi - 1;
    goto LABEL_21;
  }
  i = 0;
  nVert = 0;
  v44 = nPhi - 1;
  v46 = pIndices;
  v10 = &v66;
  do
  {
    if ( v56 <= 0 )
      goto LABEL_20;
    v11 = 0;
    p_cosx = &cosx;
    p_sinx = &sinx;
    v55 = (v56 - 1);
    v12 = (i / v44) * 3.141592653589793;
    sincosf(v12, &sinx, &cosx);
    v13 = v10;
    v14 = 0;
    v15 = cosx;
    v16 = sinx;
    v17 = nVert;
    v48 = -cosx;
    v18 = &pVerts[v17];
    v19 = &pColors[v17];
    do
    {
      v57 = v13;
      i_0 = v16;
      LODWORD(idx) = v14;
      v60 = v15;
      v20 = (v11 / v55) * 6.283185307179586;
      sincosf(v20, p_sinx, p_cosx);
      v16 = i_0;
      v14 = idx;
      v21 = cosx * *&i_0;
      v22 = *&idx;
      v15 = v60;
      v23 = *&sinx * *&i_0;
      v13 = v57;
      if ( (cosx * *&i_0) > *&idx )
        v22 = v21 * v21;
      *pIndices = v22;
      v24 = *&idx;
      if ( v23 > *&idx )
        v24 = v23 * v23;
      *&pIndices[1] = v24;
      v25 = *&idx;
      if ( v60 > *&idx )
        v25 = v60 * v60;
      *&pIndices[2] = v25;
      if ( *&idx > v21 )
      {
        *&pIndices[3] = v21 * v21;
        v26 = *&idx;
        if ( *&idx <= v23 )
          goto LABEL_13;
      }
      else
      {
        pIndices[3] = idx;
        v26 = *&idx;
        if ( *&idx <= v23 )
          goto LABEL_13;
      }
      v26 = v23 * v23;
LABEL_13:
      v64 = v26;
      v27 = *&idx;
      if ( *&idx > v60 )
        v27 = v48 * v48;
      v65 = v27;
      x = vec3_origin.x;
      y = vec3_origin.y;
      z = vec3_origin.z;
      v31 = pAmbientCubea;
      for ( j = (v46 + 1); ; ++j )
      {
        v33 = v31->x;
        ++v31;
        x = x + (v33 * v22);
        y = y + (v31[-1].y * v22);
        z = z + (v22 * v31[-1].z);
        if ( j == v57 )
          break;
        v22 = *j;
      }
      ++v11;
      ++v18;
      ++v19;
      v34 = ((x + y) + z) * v49;
      v35 = (v23 * v34) + vCenter->y;
      v36 = (v34 * v60) + vCenter->z;
      v37 = (v34 * v21) + vCenter->x;
      v18[-1].y = v35;
      v18[-1].z = v36;
      v18[-1].x = v37;
      v19[-1].x = x;
      v19[-1].y = y;
      v19[-1].z = z;
    }
    while ( v11 != v56 );
    v10 = v13;
    nVert += v56;
LABEL_20:
    ++i;
  }
  while ( i != nPhi );
LABEL_21:
  if ( v44 > 0 )
  {
    v38 = 0;
    *&i_0 = 0.0;
    v39 = v56;
    LODWORD(v60) = v56 - 1;
    idx = pIndices;
    do
    {
      if ( SLODWORD(v60) > 0 )
      {
        v40 = 0;
        do
        {
          pIndices[0] = v38 + v40;
          pIndices[1] = v38 + 1 + v40;
          pIndices[2] = v39 + 1 + v40;
          v41 = v39 + v40++;
          pIndices[3] = v41;
          CGeoViewBuffer::WritePolygonIndexed(thisa, pVerts, pColors, idx, 4);
        }
        while ( SLODWORD(v60) > v40 );
      }
      ++i_0;
      v38 += v56;
      v39 += v56;
    }
    while ( i_0 != v44 );
  }
}


// CGeoViewBuffer::WriteCamera  (line 1045, @0x00000000031de9f0, libserver.so)  // inlines: operator=
// calls: CGeoViewCamera::Serialize
void __fastcall CGeoViewBuffer::WriteCamera(CGeoViewBuffer *const this, const CTransform *const transform)
{
  vec_t x; // xmm0_4
  CGeoViewCamera camera; // [rsp+0h] [rbp-30h] BYREF

  x = transform->m_vPosition.x;
  camera.m_flHorizontalFOV = 90.0;
  camera.m_nCameraId = 0;
  camera.m_transform.m_vPosition.x = x;
  camera.m_transform.m_vPosition.y = transform->m_vPosition.y;
  camera.m_transform.m_vPosition.z = transform->m_vPosition.z;
  camera.m_transform.m_orientation = transform->m_orientation;
  CGeoViewCamera::Serialize(&camera, this);
}


// CGeoViewBuffer::WriteText3D  (line 1054, @0x00000000031dea60, libserver.so)  // inlines: CGeoViewText3D
// calls: CGeoViewText3D::Serialize
void __fastcall CGeoViewBuffer::WriteText3D(CGeoViewBuffer *const this, const Vector *const vPos, const char *pText)
{
  __int64 v3; // rax
  CGeoViewText3D text; // [rsp+0h] [rbp-20h] BYREF

  v3 = *&vPos->x;
  text.m_pText = pText;
  *&text.m_vPos.x = v3;
  text.m_vPos.z = vPos->z;
  CGeoViewText3D::Serialize(&text, this);
}


