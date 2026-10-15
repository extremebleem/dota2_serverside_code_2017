
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CNetworkOriginCellCoordQuantizedVector::LatchComponent  (line 131, @0x0000000002030590, libserver.so)  // inlines: CellFromCoord, CellInCoord, CoordFromCell, Float2Int, GetElement, GetEncoder, GetQuantizedFloatEncoderByIndex, NetworkStateChanged, Set, operator[]
// calls: CFmtStrN<256, false>::CFmtStrN, Warning, __stack_chk_fail
// callers: CSchemaClassBinding<CNetworkOriginCellCoordQuantizedVector>::Copy, CSchemaClassBinding<CNetworkOriginCellCoordQuantizedVector>::Allocate, CSchemaClassBinding<CNetworkOriginCellCoordQuantizedVector>::ConstructInPlace, CSchemaClassBinding<CNetworkOriginCellCoordQuantizedVector>::AllocateAndCopyConstruct, CGameSceneNodeCellSerializer<1>::Unserialize, CGameSceneNodeCellSerializer<0>::Unserialize, CGameSceneNodeCellSerializer<2>::Unserialize, CValidatingNetworkFieldSerializer<CGameSceneNodeCellSerializer<2> >::ValidatingUnserialize, CValidatingNetworkFieldSerializer<CGameSceneNodeCellSerializer<1> >::ValidatingUnserialize, CValidatingNetworkFieldSerializer<CGameSceneNodeCellSerializer<0> >::ValidatingUnserialize, CGameSceneNodeStepSimulationOriginSerializer::Unserialize, CValidatingNetworkFieldSerializer<CGameSceneNodeStepSimulationOriginSerializer>::ValidatingUnserialize (17 total)
// strings: "CNetworkOriginCellCoordQuantizedVector m_cell%c cell %d is outside of cell bounds (0->%d)
void __fastcall CNetworkOriginCellCoordQuantizedVector::LatchComponent(
        CNetworkOriginCellCoordQuantizedVector *const this,
        int nComponent)
{
  CNetworkedQuantizedFloat *p_m_vecX; // r13
  __int64 v4; // r15
  float v5; // xmm4_4
  float *v6; // r14
  float v7; // xmm3_4
  int v8; // r12d
  int v9; // r12d
  int v10; // eax
  uint16 v11; // dx
  INetworkStateChangedRouter *v12; // rdi
  INetworkStateChangedRouter *v13; // rdi
  int v14; // eax
  int v15; // r12d
  int v16; // eax
  float v17; // xmm0_4
  float v18; // xmm1_4
  __int64 v19; // rax
  float v20; // xmm0_4
  uint16 m_nOutsideWorld; // dx
  INetworkStateChangedRouter *m_pStateChanged; // rdi
  unsigned __int64 v23; // [rsp+0h] [rbp-180h]
  unsigned __int64 v24; // [rsp+4h] [rbp-17Ch]
  float val; // [rsp+8h] [rbp-178h]
  float vala; // [rsp+8h] [rbp-178h]
  uint16 *cLetter; // [rsp+10h] [rbp-170h] BYREF
  uint16 *p_m_cellY; // [rsp+18h] [rbp-168h]
  uint16 *p_m_cellZ; // [rsp+20h] [rbp-160h]
  CFmtStr spew; // [rsp+30h] [rbp-150h] BYREF
  unsigned __int64 v31; // [rsp+148h] [rbp-38h]

  p_m_vecX = &this->m_vecX;
  v31 = __readfsqword(0x28u);
  if ( nComponent != 0 )
  {
    p_m_vecX = &this->m_vecY;
    if ( nComponent != 1 )
      p_m_vecX = &this->m_vecZ;
  }
  v4 = nComponent;
  v5 = 0.0;
  v6 = &this->m_Value.x + nComponent;
  v7 = *v6;
  if ( *v6 < 0.0 )
  {
    v9 = (v7 + 16384.0) / 256;
  }
  else
  {
    v8 = v7 + 255;
    if ( v7 >= 0 )
      v8 = v7;
    v9 = (v8 >> 8) + 64;
  }
  v10 = 1 << nComponent;
  if ( v7 >= -16384.0 && v7 <= 16384.0 )
  {
    m_nOutsideWorld = this->m_nOutsideWorld;
    if ( (m_nOutsideWorld & v10) != 0 && 16384.0 - fabs(v7) > 1.0 )
    {
      m_pStateChanged = this->m_pStateChanged;
      this->m_nOutsideWorld = m_nOutsideWorld & ~v10;
      if ( m_pStateChanged != 0 )
      {
        vala = v7;
        (*m_pStateChanged->_vptr_INetworkStateChangedRouter)(m_pStateChanged, this, 18, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v5 = 0.0;
        v7 = vala;
      }
    }
  }
  else
  {
    v11 = this->m_nOutsideWorld;
    if ( (v11 & v10) == 0 )
    {
      v12 = this->m_pStateChanged;
      this->m_nOutsideWorld = v11 | v10;
      if ( v12 != 0 )
      {
        val = v7;
        (*v12->_vptr_INetworkStateChangedRouter)(v12, this, 18, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v7 = val;
      }
      qmemcpy(&cLetter, "XYZ", 3);
      v23 = __PAIR64__(LODWORD(v7), 0);
      CFmtStrN<256,false>::CFmtStrN(
        &spew,
        "CNetworkOriginCellCoordQuantizedVector m_cell%c cell %d is outside of cell bounds (0->%d) @(%f %f %f)\n",
        *(&cLetter + v4),
        v9,
        128,
        this->m_Value.x,
        this->m_Value.y,
        this->m_Value.z);
      v13 = this->m_pStateChanged;
      v24 = v23;
      if ( v13 != 0 )
      {
        (*(v13->_vptr_INetworkStateChangedRouter + 1))(v13, spew.m_szBuf);
        v7 = *(&v24 + 1);
        v5 = *&v24;
      }
      else
      {
        Warning("%s", spew.m_szBuf);
        v5 = *&v24;
        v7 = *(&v24 + 1);
      }
    }
    v14 = 0;
    if ( v9 >= 0 )
      v14 = v9;
    v9 = 127;
    if ( v14 <= 127 )
      v9 = v14;
    if ( v7 > 16384.0 )
    {
      v7 = 16384.0;
      cLetter = &this->m_cellX;
      p_m_cellY = &this->m_cellY;
      p_m_cellZ = &this->m_cellZ;
      *(&cLetter)[v4] = v9;
      v15 = (v9 << 8) - 0x4000;
      v16 = abs32(v15);
LABEL_21:
      v17 = v7 - v16;
      goto LABEL_22;
    }
    if ( v7 < -16384.0 )
    {
      cLetter = &this->m_cellX;
      p_m_cellY = &this->m_cellY;
      p_m_cellZ = &this->m_cellZ;
      *(&cLetter)[v4] = v9;
      v15 = (v9 << 8) - 0x4000;
      v17 = abs32(v15) + -16384.0;
      goto LABEL_22;
    }
  }
  cLetter = &this->m_cellX;
  p_m_cellY = &this->m_cellY;
  p_m_cellZ = &this->m_cellZ;
  *(&cLetter)[v4] = v9;
  v15 = (v9 << 8) - 0x4000;
  v16 = abs32(v15);
  if ( v5 <= v7 )
    goto LABEL_21;
  v17 = v16 + v7;
LABEL_22:
  v18 = 256.0;
  if ( v17 <= 256.0 )
    v18 = fmaxf(v5, v17);
  v19 = g_pQuantizedFloatEncoders + 32LL * p_m_vecX->m_nEncoder;
  v20 = *(v19 + 12);
  if ( v18 <= v20 )
    v20 = fmaxf(*(v19 + 8), v18);
  p_m_vecX->m_Value = v20;
  *v6 = v15 + v20;
}


// CNetworkOriginCellCoordQuantizedVector::NetworkComponentChanged  (line 200, @0x000000000210be00, libserver.so)  // inlines: GetElement, NetworkStateChanged
// callers: CValidatingNetworkFieldSerializer<CGameSceneNodeCellSerializer<2> >::ValidatingUnserialize, CValidatingNetworkFieldSerializer<CGameSceneNodeCellSerializer<1> >::ValidatingUnserialize, CValidatingNetworkFieldSerializer<CGameSceneNodeCellSerializer<0> >::ValidatingUnserialize
void __fastcall CNetworkOriginCellCoordQuantizedVector::NetworkComponentChanged(
        CNetworkOriginCellCoordQuantizedVector *const this,
        int nComponent)
{
  CNetworkedQuantizedFloat *p_m_vecX; // rdx
  INetworkStateChangedRouter *m_pStateChanged; // rdi
  uint16 *p_m_cellX; // rdx
  signed __int64 v7; // rdx

  p_m_vecX = &this->m_vecX;
  if ( nComponent != 0 )
  {
    p_m_vecX = &this->m_vecY;
    if ( nComponent != 1 )
      p_m_vecX = &this->m_vecZ;
  }
  m_pStateChanged = this->m_pStateChanged;
  if ( m_pStateChanged != 0 )
  {
    (*m_pStateChanged->_vptr_INetworkStateChangedRouter)(
      m_pStateChanged,
      this,
      p_m_vecX - this,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    m_pStateChanged = this->m_pStateChanged;
  }
  p_m_cellX = &this->m_cellX;
  if ( nComponent != 0 )
  {
    p_m_cellX = &this->m_cellY;
    if ( nComponent != 1 )
      p_m_cellX = &this->m_cellZ;
  }
  v7 = p_m_cellX - this;
  if ( m_pStateChanged != 0 )
    (*m_pStateChanged->_vptr_INetworkStateChangedRouter)(m_pStateChanged, this, v7, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
}


// CNetworkOriginQuantizedVector::OnVectorComponentChanged  (line 222, @0x0000000001b2c390, libserver.so)
void __fastcall CNetworkOriginQuantizedVector::OnVectorComponentChanged(CNetworkOriginQuantizedVector *const this)
{
  this->m_Value.x = this->m_vecX.m_Value;
  this->m_Value.y = this->m_vecY.m_Value;
  this->m_Value.z = this->m_vecZ.m_Value;
}


// CNetworkVelocityVector::OnVectorComponentChanged  (line 231, @0x0000000001b2c3c0, libserver.so)
void __fastcall CNetworkVelocityVector::OnVectorComponentChanged(CNetworkVelocityVector *const this)
{
  this->m_Value.x = this->m_vecX.m_Value;
  this->m_Value.y = this->m_vecY.m_Value;
  this->m_Value.z = this->m_vecZ.m_Value;
}


// CNetworkVelocityVector::Set  (line 231, @0x0000000001eefe90, libserver.so)  // inlines: GetElement, GetEncoder, GetQuantizedFloatEncoderByIndex, LatchComponent, NetworkComponentChanged, NetworkStateChanged, Set, operator[]
// callers: CBaseEntity::SetAbsVelocity
const Vector *__fastcall CNetworkVelocityVector::Set(CNetworkVelocityVector *const this, const Vector *const val)
{
  CNetworkedQuantizedFloat *p_m_vecY; // r15
  CNetworkedQuantizedFloat *p_m_vecZ; // r14
  __int64 i; // rbx
  float v7; // xmm0_4
  CNetworkedQuantizedFloat *p_m_vecX; // rdx
  __int64 v10; // rax
  float v11; // xmm1_4
  CNetworkedQuantizedFloat *v12; // rdx
  INetworkStateChangedRouter *m_pStateChanged; // rdi
  signed __int64 v14; // rdx

  p_m_vecY = &this->m_vecY;
  p_m_vecZ = &this->m_vecZ;
  for ( i = 0; i != 3; ++i )
  {
    v7 = *(&val->x + i);
    if ( v7 != *(&this->m_Value.x + i) )
    {
      *(&this->m_Value.x + i) = v7;
      p_m_vecX = &this->m_vecX;
      if ( i != 0 )
      {
        p_m_vecX = p_m_vecY;
        if ( i != 1 )
          p_m_vecX = p_m_vecZ;
      }
      v10 = g_pQuantizedFloatEncoders + 32LL * p_m_vecX->m_nEncoder;
      v11 = *(v10 + 12);
      if ( v7 <= v11 )
        v11 = fmaxf(*(v10 + 8), v7);
      p_m_vecX->m_Value = v11;
      *(&this->m_Value.x + i) = v11;
      v12 = &this->m_vecX;
      if ( i != 0 )
      {
        v12 = p_m_vecY;
        if ( i != 1 )
          v12 = p_m_vecZ;
      }
      m_pStateChanged = this->m_pStateChanged;
      v14 = v12 - this;
      if ( m_pStateChanged != 0 )
        (*m_pStateChanged->_vptr_INetworkStateChangedRouter)(m_pStateChanged, this, v14, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    }
  }
  return &this->m_Value;
}


// CNetworkViewOffsetVector::OnVectorComponentChanged  (line 237, @0x0000000001b2c3f0, libserver.so)
void __fastcall CNetworkViewOffsetVector::OnVectorComponentChanged(CNetworkViewOffsetVector *const this)
{
  this->m_Value.x = this->m_vecX.m_Value;
  this->m_Value.y = this->m_vecY.m_Value;
  this->m_Value.z = this->m_vecZ.m_Value;
}


