
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// RnCapsule_t::GetTriangulation  (line 1115, @0x00000000031a8760, libserver.so)  // inlines: CrossProduct, FastSqrt, Length, VectorAdd, VectorDivide, VectorLength, VectorMultiply, VectorPerpendicularToVector, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-, operator/, operator=
// calls: VectorPerpendicularToVector, sincosf
// callers: VPhysics2ShapeDef_t::GetTriangulation
int __fastcall RnCapsule_t::GetTriangulation(const RnCapsule_t *const this, Vector *pVerts)
{
  float v4; // xmm3_4
  float v5; // xmm2_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  Vector *v8; // r13
  float32 m_flRadius; // xmm8_4
  float v10; // xmm14_4
  float v11; // xmm1_4
  float v12; // xmm3_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  float v16; // xmm3_4
  float v17; // xmm7_4
  int v18; // xmm2_4
  float *p_x; // rcx
  float v20; // xmm5_4
  float v21; // xmm10_4
  Vector *v22; // r15
  float v23; // xmm9_4
  Vector *v24; // r14
  Vector *v25; // rbx
  Vector *v26; // r11
  Vector *v27; // r10
  Vector *v28; // r9
  Vector *v29; // r8
  Vector *v30; // rdi
  Vector *v31; // rsi
  float v32; // xmm0_4
  Vector *v33; // rdx
  Vector *v34; // r13
  float v35; // xmm4_4
  float v36; // xmm2_4
  float v37; // xmm13_4
  float v38; // xmm15_4
  float v39; // xmm6_4
  float v40; // xmm7_4
  char *v41; // rax
  float v42; // xmm3_4
  float v43; // xmm12_4
  float v44; // xmm2_4
  float v45; // xmm11_4
  float v46; // xmm2_4
  float v47; // xmm11_4
  float v48; // xmm11_4
  float v49; // xmm11_4
  float v50; // xmm5_4
  float v51; // xmm8_4
  float v52; // xmm11_4
  float v53; // xmm8_4
  float v54; // xmm13_4
  float v55; // xmm15_4
  float v56; // xmm15_4
  float v57; // xmm15_4
  float v58; // xmm5_4
  float *v59; // rbx
  Vector *i; // rdx
  float v61; // xmm2_4
  float v62; // xmm5_4
  float v63; // xmm3_4
  float v65; // xmm4_4
  float v66; // xmm13_4
  float v67; // xmm4_4
  float v68; // xmm4_4
  __int64 v69; // rax
  float v70; // xmm0_4
  Vector *pVertsa; // [rsp+8h] [rbp-108h]
  float v72; // [rsp+1Ch] [rbp-F4h]
  float v73; // [rsp+20h] [rbp-F0h]
  float v74; // [rsp+24h] [rbp-ECh]
  Vector *v75; // [rsp+28h] [rbp-E8h]
  Vector *v76; // [rsp+30h] [rbp-E0h]
  Vector *v77; // [rsp+38h] [rbp-D8h]
  Vector *v78; // [rsp+40h] [rbp-D0h]
  Vector *v79; // [rsp+48h] [rbp-C8h]
  Vector *v80; // [rsp+50h] [rbp-C0h]
  Vector *v81; // [rsp+58h] [rbp-B8h]
  Vector *v82; // [rsp+60h] [rbp-B0h]
  Vector *v83; // [rsp+68h] [rbp-A8h]
  Vector *v84; // [rsp+70h] [rbp-A0h]
  Vector *v85; // [rsp+78h] [rbp-98h]
  char *v86; // [rsp+80h] [rbp-90h]
  Vector *v87; // [rsp+88h] [rbp-88h]
  float32 v88; // [rsp+88h] [rbp-88h]
  int v89; // [rsp+94h] [rbp-7Ch]
  __int64 v90; // [rsp+98h] [rbp-78h]
  float x1; // [rsp+A0h] [rbp-70h]
  __int64 v92; // [rsp+A8h] [rbp-68h]
  float c1; // [rsp+B0h] [rbp-60h]
  int jb; // [rsp+B4h] [rbp-5Ch]
  int j; // [rsp+B4h] [rbp-5Ch]
  int ja; // [rsp+B4h] [rbp-5Ch]
  float cosx; // [rsp+B8h] [rbp-58h] BYREF
  float sinx; // [rsp+BCh] [rbp-54h] BYREF
  Vector vAxisX; // [rsp+C0h] [rbp-50h] BYREF
  Vector pvecOut; // [rsp+D0h] [rbp-40h] BYREF
  Vector v101; // 0:^10.12

  if ( pVerts != 0 )
  {
    v4 = this->m_vCenter[1].x - this->m_vCenter[0].x;
    v5 = this->m_vCenter[1].y - this->m_vCenter[0].y;
    v6 = this->m_vCenter[1].z - this->m_vCenter[0].z;
    v7 = fsqrt(((v4 * v4) + (v5 * v5)) + (v6 * v6));
    if ( v7 > 0.0000099999997 )
    {
      vAxisX.x = v4 * (1.0 / v7);
      vAxisX.y = v5 * (1.0 / v7);
      vAxisX.z = v6 * (1.0 / v7);
    }
    else
    {
      vAxisX.x = 1.0;
      v7 = 1.0;
      vAxisX.y = 0.0;
      vAxisX.z = 0.0;
    }
    *&jb = v7;
    v8 = pVerts;
    VectorPerpendicularToVector(&vAxisX, &pvecOut);
    v101 = pvecOut;
    v92 = -&pVerts[6];
    m_flRadius = this->m_flRadius;
    v10 = 0.0;
    v89 = 1;
    v85 = pVerts + 1;
    v76 = pVerts + 2;
    v84 = pVerts + 3;
    v11 = *&jb;
    pVertsa = pVerts;
    v82 = pVerts + 4;
    v74 = (pvecOut.y * vAxisX.x) - (pvecOut.x * vAxisX.y);
    v90 = -pVerts;
    v80 = pVerts + 5;
    v12 = 0.5;
    v79 = pVerts + 30;
    v78 = pVerts + 31;
    v77 = pVerts + 32;
    v75 = pVerts + 33;
    v13 = 0.86602539;
    v83 = pVerts + 34;
    v72 = (vAxisX.y * pvecOut.z) - (vAxisX.z * pvecOut.y);
    v14 = m_flRadius;
    v73 = (pvecOut.x * vAxisX.z) - (vAxisX.x * pvecOut.z);
    v81 = pVerts + 35;
    while ( 1 )
    {
      v15 = v13 * v14;
      v8->x = 0.0;
      v16 = v12 * v14;
      v17 = 1.0;
      v87 = v8;
      *&v18 = 0.86602539;
      c1 = m_flRadius;
      p_x = &v8[6].x;
      v20 = 0.0;
      v21 = v15;
      v8->y = v15;
      v22 = v8 + 9;
      v23 = v16;
      v8->z = v16;
      v24 = v8 + 10;
      v86 = v8 + v90;
      v25 = v8 + 11;
      *(&v85->x + v86) = 0.0;
      v26 = v8 + 12;
      *(&v85->y + v86) = m_flRadius;
      v27 = v8 + 13;
      *(&v85->z + v86) = v10;
      v28 = v8 + 14;
      v29 = v8 + 15;
      j = 1;
      v30 = v8 + 16;
      v31 = v8 + 17;
      *(&v76->y + v86) = v15;
      *(&v76->x + v86) = v11;
      *(&v76->z + v86) = v16;
      *(&v84->y + v86) = v15;
      v32 = 0.5;
      *(&v84->x + v86) = v11;
      *(&v84->z + v86) = v16;
      *(&v82->x + v86) = 0.0;
      *(&v82->y + v86) = m_flRadius;
      *(&v82->z + v86) = v10;
      *(&v80->x + v86) = v11;
      *(&v80->y + v86) = m_flRadius;
      *(&v80->z + v86) = v10;
      v33 = v8 + 8;
      v34 = v8 + 7;
      while ( 1 )
      {
        v35 = *&v18;
        v36 = this->m_flRadius * v20;
        v37 = v23 * v17;
        x1 = v32;
        v38 = v21 * v17;
        v39 = v10 * v17;
        v40 = v17 * c1;
        v41 = p_x + v92;
        p_x[2] = v37;
        v42 = v21 * v35;
        p_x[1] = v38;
        v43 = c1 * v35;
        *p_x = v36 + v11;
        v44 = this->m_flRadius;
        *(&v34->y + v41) = v40;
        *(&v34->z + v41) = v39;
        *(&v34->x + v41) = (v44 * v20) + v11;
        v45 = this->m_flRadius;
        v46 = v23 * v35;
        *(&v33->y + v41) = v21 * v35;
        *(&v33->z + v41) = v23 * v35;
        *(&v33->x + v41) = (v45 * v32) + v11;
        v47 = this->m_flRadius;
        *(&v22->y + v41) = v21 * v35;
        *(&v22->z + v41) = v23 * v35;
        *(&v22->x + v41) = (v47 * v32) + v11;
        v48 = this->m_flRadius;
        *(&v24->y + v41) = v40;
        *(&v24->z + v41) = v39;
        v49 = v48 * v20;
        v50 = -v20;
        *(&v24->x + v41) = v49 + v11;
        v51 = this->m_flRadius;
        v52 = v10 * v35;
        *(&v25->y + v41) = c1 * v35;
        *(&v25->z + v41) = v10 * v35;
        *(&v25->x + v41) = (v51 * v32) + v11;
        v53 = this->m_flRadius;
        *(&v26->z + v41) = v37;
        *(&v26->y + v41) = v38;
        v54 = -v32;
        *(&v26->x + v41) = v53 * v50;
        *(&v27->x + v41) = this->m_flRadius * -v32;
        *(&v27->y + v41) = v21 * v35;
        *(&v27->z + v41) = v23 * v35;
        v55 = this->m_flRadius;
        *(&v28->y + v41) = v40;
        *(&v28->z + v41) = v39;
        *(&v28->x + v41) = v55 * v50;
        v56 = this->m_flRadius;
        *(&v29->y + v41) = v21 * v35;
        *(&v29->z + v41) = v23 * v35;
        *(&v29->x + v41) = v56 * -v32;
        v57 = this->m_flRadius;
        *(&v30->y + v41) = c1 * v35;
        *(&v30->z + v41) = v10 * v35;
        *(&v30->x + v41) = v57 * -v32;
        v58 = v50 * this->m_flRadius;
        *(&v31->y + v41) = v40;
        *(&v31->z + v41) = v39;
        *(&v31->x + v41) = v58;
        if ( j == 2 )
          break;
        p_x += 36;
        *&v18 = 0.49999997;
        j = 2;
        v32 = 0.86602545;
        v17 = v35;
        v20 = x1;
      }
      *&ja = v11;
      *(&v79->x + v86) = -this->m_flRadius;
      *(&v79->y + v86) = 0.0;
      *(&v79->z + v86) = 0.0;
      v8 = v87 + 36;
      v65 = this->m_flRadius * v54;
      *(&v78->y + v86) = v43;
      *(&v78->z + v86) = v52;
      *(&v78->x + v86) = v65;
      v66 = v54 * this->m_flRadius;
      *(&v77->y + v86) = v42;
      *(&v77->x + v86) = v66;
      *(&v77->z + v86) = v46;
      v67 = this->m_flRadius + v11;
      *(&v75->y + v86) = 0.0;
      *(&v75->z + v86) = 0.0;
      *(&v75->x + v86) = v67;
      v68 = this->m_flRadius;
      *(&v83->y + v86) = v42;
      *(&v83->z + v86) = v46;
      *(&v83->x + v86) = (v68 * v32) + v11;
      v69 = &v87[36] + v90;
      *(&v81[-36].x + v69) = (v32 * this->m_flRadius) + v11;
      ++v89;
      *(&v81[-35] + v69 - 8) = v43;
      *(&v81[-35] + v69 - 4) = v52;
      v92 -= 432;
      if ( v89 == 13 )
        break;
      v88 = this->m_flRadius;
      v70 = v89 * 6.283185307179586 / 12.0;
      sincosf(v70, &sinx, &cosx);
      v13 = cosx;
      m_flRadius = v21;
      v12 = sinx;
      v10 = v23;
      v14 = v88;
      v11 = *&ja;
    }
    v59 = &pVertsa->x;
    for ( i = v85; ; ++i )
    {
      v61 = v59[2];
      v62 = (v59[1] * v101.z) + ((vAxisX.z * *v59) + this->m_vCenter[0].z);
      v63 = (v59[1] * v101.x) + ((*v59 * vAxisX.x) + this->m_vCenter[0].x);
      v59[1] = (v61 * v73) + ((v59[1] * v101.y) + ((vAxisX.y * *v59) + this->m_vCenter[0].y));
      v59[2] = (v61 * v74) + v62;
      *v59 = (v61 * v72) + v63;
      v59 = &i->x;
      if ( i == &pVertsa[432] )
        break;
    }
  }
  return 432;
}


