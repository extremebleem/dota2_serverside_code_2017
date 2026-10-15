// Reconstructed from DWARF by pahole; not original source.

// src/mathlib/gjk.cpp:105
struct GJKSimplexVertex_t {
	int mIndex1;  // +0x0
	int mIndex2;  // +0x4
	GJKSimplexVertex_t();
	GJKSimplexVertex_t & operator=(const GJKSimplexVertex_t &);

	// sizeof = 44
};

// src/mathlib/gjk.cpp:119
class CGJKSimplex {
private:

	int m_nVertexCount;  // +0x0
	float m_flLambdas[4];  // +0xb4
	CGJKSimplex();
	void Init(const Vector &, const Vector &);
	void ReadCache(const matrix3x4_t &, const CGJKShapeProxy &, const matrix3x4_t &, const CGJKShapeProxy &, const GJKSimplexCache_t &);
	void WriteCache(GJKSimplexCache_t &);
	void SaveCache();
	bool CheckCache(int, int);
	float Metric();
	bool IsEmpty();
	int VertexCount();
	GJKSimplexVertex_t & GetVertex(int);
	const GJKSimplexVertex_t & GetVertex(int);
	void Solve();
	Vector GetClosestPoint();
	Vector GetSearchDirection();
	bool AddVertex(int, const Vector &, int, const Vector &);
	void BuildWitnessPoints(Vector &, Vector &);
	void Solve1();
	void Solve2();
	void Solve3();
	void Solve4();
	CGJKSimplex & operator=(const CGJKSimplex &);

	// sizeof = 228
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_gjk.cpp  (line 0, @0x0000000001a6a530, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_gjk_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CGJKSimplex::Solve3  (line 495, @0x00000000030f4160, libserver.so)  // inlines: BarycentricCoordinates, CrossProduct, DotProduct, VectorSubtract, operator-, operator=
// callers: Distance
void __fastcall CGJKSimplex::Solve3(CGJKSimplex *const this)
{
  float v1; // xmm2_4
  int mIndex1; // r15d
  int mIndex2; // edx
  int v4; // r13d
  int v5; // r14d
  float v6; // xmm14_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  vec_t v9; // r11d
  int v10; // ebx
  int v11; // r12d
  vec_t v12; // r10d
  vec_t v13; // r9d
  vec_t v14; // r8d
  vec_t v15; // esi
  vec_t v16; // ecx
  float v17; // xmm5_4
  float v18; // xmm6_4
  float v19; // xmm7_4
  float v20; // xmm9_4
  float v21; // xmm11_4
  float v22; // xmm15_4
  float v23; // xmm12_4
  float v24; // xmm10_4
  float v25; // xmm14_4
  float v26; // xmm1_4
  float v27; // xmm8_4
  float v28; // xmm0_4
  float v29; // xmm14_4
  float v30; // xmm13_4
  float v31; // xmm3_4
  float v32; // xmm2_4
  float v33; // xmm1_4
  float v34; // xmm14_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm0_4
  float v38; // [rsp+4h] [rbp-B4h]
  vec_t z; // [rsp+8h] [rbp-B0h]
  vec_t y; // [rsp+Ch] [rbp-ACh]
  float v41; // [rsp+14h] [rbp-A4h]
  vec_t x; // [rsp+24h] [rbp-94h]
  vec_t v45; // [rsp+28h] [rbp-90h]
  vec_t v46; // [rsp+2Ch] [rbp-8Ch]
  vec_t v47; // [rsp+30h] [rbp-88h]
  vec_t v48; // [rsp+34h] [rbp-84h]
  vec_t v49; // [rsp+38h] [rbp-80h]
  vec_t v50; // [rsp+3Ch] [rbp-7Ch]
  float v51; // [rsp+40h] [rbp-78h]
  float v52; // [rsp+44h] [rbp-74h]
  float v53; // [rsp+4Ch] [rbp-6Ch]
  float v54; // [rsp+50h] [rbp-68h]
  float v55; // [rsp+54h] [rbp-64h]
  float v56; // [rsp+58h] [rbp-60h]
  float v57; // [rsp+5Ch] [rbp-5Ch]
  float v58; // [rsp+60h] [rbp-58h]
  float v59; // [rsp+64h] [rbp-54h]
  float v60; // [rsp+68h] [rbp-50h]
  float v61; // [rsp+70h] [rbp-48h]
  float v62; // [rsp+74h] [rbp-44h]
  float v63; // [rsp+78h] [rbp-40h]
  vec_t v64; // [rsp+7Ch] [rbp-3Ch]
  float v65; // [rsp+80h] [rbp-38h]
  float v66; // [rsp+84h] [rbp-34h]
  float v67; // [rsp+88h] [rbp-30h]
  float v68; // [rsp+8Ch] [rbp-2Ch]
  Vector mPosition1; // 0:^18.12

  mPosition1 = this->m_Vertices[0].mPosition1;
  x = this->m_Vertices[0].mPosition2.x;
  z = this->m_Vertices[0].mPosition2.z;
  y = this->m_Vertices[0].mPosition2.y;
  v1 = this->m_Vertices[0].mPosition.x;
  v64 = v1;
  v63 = this->m_Vertices[0].mPosition.y;
  v49 = this->m_Vertices[1].mPosition1.x;
  mIndex1 = this->m_Vertices[0].mIndex1;
  v51 = this->m_Vertices[0].mPosition.z;
  mIndex2 = this->m_Vertices[0].mIndex2;
  v4 = this->m_Vertices[1].mIndex1;
  v5 = this->m_Vertices[1].mIndex2;
  v48 = this->m_Vertices[1].mPosition1.y;
  v47 = this->m_Vertices[1].mPosition1.z;
  v46 = this->m_Vertices[1].mPosition2.x;
  v45 = this->m_Vertices[1].mPosition2.y;
  v61 = this->m_Vertices[1].mPosition.y;
  v57 = this->m_Vertices[1].mPosition.x;
  v60 = this->m_Vertices[2].mPosition.y;
  v62 = this->m_Vertices[1].mPosition.z;
  v6 = this->m_Vertices[2].mPosition.x;
  v52 = v6;
  v7 = vec3_origin.y;
  v50 = this->m_Vertices[2].mPosition2.z;
  v8 = vec3_origin.z;
  v68 = this->m_Vertices[2].mPosition.z;
  v9 = this->m_Vertices[1].mPosition2.z;
  v10 = this->m_Vertices[2].mIndex1;
  v66 = v63 - v7;
  v11 = this->m_Vertices[2].mIndex2;
  v12 = this->m_Vertices[2].mPosition1.x;
  v67 = v1 - vec3_origin.x;
  v13 = this->m_Vertices[2].mPosition1.y;
  v14 = this->m_Vertices[2].mPosition1.z;
  v15 = this->m_Vertices[2].mPosition2.x;
  v16 = this->m_Vertices[2].mPosition2.y;
  v56 = v51 - v8;
  v17 = v57 - vec3_origin.x;
  v54 = v57 - v1;
  v18 = v61 - v7;
  v53 = v61 - v63;
  v19 = v62 - v8;
  v59 = v62 - v51;
  v20 = (((v57 - v1) * (v57 - vec3_origin.x)) + ((v61 - v63) * (v61 - v7))) + ((v62 - v51) * (v62 - v8));
  v21 = v68 - v8;
  v22 = v6 - vec3_origin.x;
  v55 = v6 - vec3_origin.x;
  v65 = v60 - v7;
  v38 = v6 - v57;
  v23 = -((((v1 - vec3_origin.x) * (v57 - v1)) + ((v63 - v7) * (v61 - v63))) + ((v62 - v51) * (v51 - v8)));
  v24 = (((v6 - vec3_origin.x) * (v6 - v57)) + ((v60 - v7) * (v60 - v61))) + ((v68 - v62) * (v68 - v8));
  v41 = v1 - v6;
  v25 = v1 - v6;
  v26 = -(((v38 * (v57 - vec3_origin.x)) + ((v60 - v61) * (v61 - v7))) + ((v68 - v62) * (v62 - v8)));
  v27 = (((v1 - vec3_origin.x) * v25) + (v66 * (v63 - v60))) + ((v51 - v8) * (v51 - v68));
  v28 = -(((v22 * v25) + (v65 * (v63 - v60))) + ((v51 - v68) * (v68 - v8)));
  if ( v23 > 0.0 || v27 > 0.0 )
  {
    if ( v26 > 0.0 || v20 > 0.0 )
    {
      if ( v28 > 0.0 || v24 > 0.0 )
      {
        v58 = (v54 * (v60 - v63)) - (v53 * (v52 - v1));
        v29 = ((v68 - v51) * v53) - ((v60 - v63) * v59);
        v30 = ((v52 - v1) * v59) - (v54 * (v68 - v51));
        v31 = ((((v18 * v21) - (v65 * v19)) * v29) + (((v55 * v19) - (v17 * v21)) * v30))
            + (((v65 * v17) - (v55 * v18)) * v58);
        v32 = ((((v66 * v19) - (v56 * v18)) * v29) + (((v56 * v17) - (v19 * v67)) * v30))
            + (((v18 * v67) - (v17 * v66)) * v58);
        if ( v32 > 0.0 || v20 <= 0.0 || v23 <= 0.0 )
        {
          if ( v31 > 0.0 || v24 <= 0.0 || v26 <= 0.0 )
          {
            v33 = ((((v56 * v65) - (v66 * v21)) * v29) + (((v21 * v67) - (v56 * v55)) * v30))
                + (((v66 * v55) - (v67 * v65)) * v58);
            if ( v33 > 0.0 || v27 <= 0.0 || v28 <= 0.0 )
            {
              v34 = ((v29 * v29) + (v30 * v30)) + (v58 * v58);
              this->m_flLambdas[0] = v31 / v34;
              this->m_flLambdas[1] = v33 / v34;
              this->m_flLambdas[2] = v32 / v34;
            }
            else
            {
              this->m_Vertices[0].mIndex1 = v10;
              this->m_Vertices[0].mIndex2 = v11;
              this->m_Vertices[1].mIndex1 = mIndex1;
              this->m_Vertices[0].mPosition2.z = v50;
              this->m_nVertexCount = 2;
              this->m_Vertices[0].mPosition1.x = v12;
              this->m_Vertices[0].mPosition1.y = v13;
              this->m_Vertices[0].mPosition.y = v60;
              this->m_Vertices[0].mPosition1.z = v14;
              this->m_Vertices[1].mPosition1.x = mPosition1.x;
              this->m_Vertices[0].mPosition2.x = v15;
              this->m_Vertices[1].mPosition1.z = mPosition1.z;
              this->m_Vertices[0].mPosition2.y = v16;
              this->m_Vertices[0].mPosition.x = v52;
              this->m_Vertices[1].mPosition2.y = y;
              v35 = ((v41 * v41) + ((v63 - v60) * (v63 - v60))) + ((v51 - v68) * (v51 - v68));
              this->m_Vertices[0].mPosition.z = v68;
              this->m_Vertices[1].mIndex2 = mIndex2;
              this->m_Vertices[1].mPosition1.y = mPosition1.y;
              this->m_Vertices[1].mPosition2.x = x;
              this->m_Vertices[1].mPosition2.z = z;
              this->m_Vertices[1].mPosition.x = v64;
              this->m_Vertices[1].mPosition.y = v63;
              this->m_Vertices[1].mPosition.z = v51;
              this->m_flLambdas[0] = v27 / v35;
              this->m_flLambdas[1] = v28 / v35;
            }
          }
          else
          {
            this->m_nVertexCount = 2;
            this->m_Vertices[0].mIndex1 = v4;
            this->m_Vertices[0].mIndex2 = v5;
            this->m_Vertices[0].mPosition2.z = v9;
            this->m_Vertices[0].mPosition2.x = v46;
            this->m_Vertices[0].mPosition1.y = v48;
            this->m_Vertices[0].mPosition.y = v61;
            this->m_Vertices[0].mPosition2.y = v45;
            this->m_Vertices[1].mIndex1 = v10;
            this->m_Vertices[1].mIndex2 = v11;
            this->m_Vertices[0].mPosition1.x = v49;
            this->m_Vertices[0].mPosition.z = v62;
            v37 = ((v38 * v38) + ((v60 - v61) * (v60 - v61))) + ((v68 - v62) * (v68 - v62));
            this->m_Vertices[0].mPosition1.z = v47;
            this->m_Vertices[1].mPosition1.x = v12;
            this->m_Vertices[1].mPosition1.y = v13;
            this->m_Vertices[0].mPosition.x = v57;
            this->m_Vertices[1].mPosition1.z = v14;
            this->m_Vertices[1].mPosition2.z = v50;
            this->m_Vertices[1].mPosition2.x = v15;
            this->m_Vertices[1].mPosition2.y = v16;
            this->m_Vertices[1].mPosition.x = v52;
            this->m_Vertices[1].mPosition.y = v60;
            this->m_Vertices[1].mPosition.z = v68;
            this->m_flLambdas[0] = v24 / v37;
            this->m_flLambdas[1] = v26 / v37;
          }
        }
        else
        {
          this->m_nVertexCount = 2;
          v36 = ((v54 * v54) + (v53 * v53)) + (v59 * v59);
          this->m_flLambdas[0] = v20 / v36;
          this->m_flLambdas[1] = v23 / v36;
        }
      }
      else
      {
        this->m_Vertices[0].mIndex1 = v10;
        this->m_Vertices[0].mIndex2 = v11;
        this->m_Vertices[0].mPosition2.z = v50;
        this->m_nVertexCount = 1;
        this->m_Vertices[0].mPosition.x = v52;
        this->m_Vertices[0].mPosition1.x = v12;
        this->m_Vertices[0].mPosition1.y = v13;
        this->m_Vertices[0].mPosition1.z = v14;
        this->m_Vertices[0].mPosition2.x = v15;
        this->m_Vertices[0].mPosition2.y = v16;
        this->m_Vertices[0].mPosition.y = v60;
        this->m_Vertices[0].mPosition.z = v68;
        this->m_flLambdas[0] = 1.0;
      }
    }
    else
    {
      this->m_nVertexCount = 1;
      this->m_Vertices[0].mIndex1 = v4;
      this->m_Vertices[0].mPosition1.x = v49;
      this->m_Vertices[0].mIndex2 = v5;
      this->m_Vertices[0].mPosition1.y = v48;
      this->m_Vertices[0].mPosition2.z = v9;
      this->m_Vertices[0].mPosition1.z = v47;
      this->m_Vertices[0].mPosition.x = v57;
      this->m_Vertices[0].mPosition2.x = v46;
      this->m_Vertices[0].mPosition.y = v61;
      this->m_Vertices[0].mPosition2.y = v45;
      this->m_flLambdas[0] = 1.0;
      this->m_Vertices[0].mPosition.z = v62;
    }
  }
  else
  {
    this->m_nVertexCount = 1;
    this->m_flLambdas[0] = 1.0;
  }
}


// CGJKSimplex::Solve4  (line 612, @0x00000000030f4ac0, libserver.so)  // inlines: BarycentricCoordinates, CrossProduct, Det, DotProduct, Sign, VectorSubtract, operator-, operator=
// callers: Distance
void __fastcall CGJKSimplex::Solve4(CGJKSimplex *const this)
{
  float v1; // xmm11_4
  int mIndex1; // edx
  int mIndex2; // eax
  int v4; // r14d
  int v5; // r15d
  float v6; // xmm10_4
  vec_t v7; // r11d
  float v8; // xmm9_4
  float v9; // xmm3_4
  float v10; // xmm8_4
  float v11; // xmm1_4
  float v12; // xmm5_4
  vec_t v13; // r10d
  vec_t v14; // esi
  int v15; // r12d
  float v16; // xmm15_4
  int v17; // r13d
  float v18; // xmm6_4
  vec_t v19; // r9d
  vec_t v20; // r8d
  float v21; // xmm7_4
  vec_t v22; // ecx
  float v23; // xmm4_4
  float v24; // xmm2_4
  float v25; // xmm3_4
  float v26; // xmm1_4
  float v27; // xmm9_4
  float v28; // xmm10_4
  float v29; // xmm14_4
  float v30; // xmm13_4
  float v31; // xmm11_4
  float v32; // xmm11_4
  float v33; // xmm6_4
  float v34; // xmm8_4
  float v35; // xmm9_4
  float v36; // xmm7_4
  float v37; // xmm5_4
  float v38; // xmm12_4
  float v39; // xmm14_4
  float v40; // xmm5_4
  float v41; // xmm11_4
  float v42; // xmm12_4
  float v43; // xmm3_4
  float v44; // xmm13_4
  float v45; // xmm1_4
  float v46; // xmm7_4
  float v47; // xmm5_4
  float v48; // xmm11_4
  float v49; // xmm14_4
  float v50; // xmm13_4
  float v51; // xmm6_4
  float v52; // xmm3_4
  float v53; // xmm4_4
  float v54; // xmm2_4
  float v55; // xmm7_4
  float v56; // xmm8_4
  __m128 v57; // xmm9
  __m128 v58; // xmm12
  float v59; // xmm12_4
  float v60; // xmm11_4
  float v61; // xmm10_4
  float v62; // xmm5_4
  float v63; // xmm1_4
  float v64; // xmm9_4
  float v65; // xmm0_4
  float v66; // xmm11_4
  float v67; // xmm14_4
  float v68; // xmm0_4
  float v69; // xmm1_4
  float v70; // xmm0_4
  float v71; // xmm0_4
  float v72; // xmm0_4
  float v73; // xmm2_4
  float v74; // [rsp+0h] [rbp-1B4h]
  float v75; // [rsp+4h] [rbp-1B0h]
  float v76; // [rsp+18h] [rbp-19Ch]
  float v77; // [rsp+1Ch] [rbp-198h]
  float v78; // [rsp+20h] [rbp-194h]
  vec_t v79; // [rsp+24h] [rbp-190h]
  vec_t v80; // [rsp+28h] [rbp-18Ch]
  vec_t v81; // [rsp+2Ch] [rbp-188h]
  vec_t z; // [rsp+30h] [rbp-184h]
  vec_t y; // [rsp+34h] [rbp-180h]
  vec_t x; // [rsp+38h] [rbp-17Ch]
  vec_t v85; // [rsp+3Ch] [rbp-178h]
  vec_t v86; // [rsp+40h] [rbp-174h]
  vec_t v87; // [rsp+44h] [rbp-170h]
  vec_t v88; // [rsp+48h] [rbp-16Ch]
  float v89; // [rsp+4Ch] [rbp-168h]
  float v90; // [rsp+50h] [rbp-164h]
  float v91; // [rsp+54h] [rbp-160h]
  vec_t v92; // [rsp+58h] [rbp-15Ch]
  vec_t v93; // [rsp+5Ch] [rbp-158h]
  float v94; // [rsp+60h] [rbp-154h]
  float v95; // [rsp+70h] [rbp-144h]
  float v96; // [rsp+74h] [rbp-140h]
  float v97; // [rsp+78h] [rbp-13Ch]
  float v98; // [rsp+7Ch] [rbp-138h]
  float v99; // [rsp+80h] [rbp-134h]
  float v100; // [rsp+90h] [rbp-124h]
  float v101; // [rsp+94h] [rbp-120h]
  float v102; // [rsp+98h] [rbp-11Ch]
  float v103; // [rsp+9Ch] [rbp-118h]
  float v104; // [rsp+A4h] [rbp-110h]
  float v105; // [rsp+A8h] [rbp-10Ch]
  float v106; // [rsp+ACh] [rbp-108h]
  float v107; // [rsp+B0h] [rbp-104h]
  float v108; // [rsp+B4h] [rbp-100h]
  float v109; // [rsp+B4h] [rbp-100h]
  float v110; // [rsp+B8h] [rbp-FCh]
  float v111; // [rsp+BCh] [rbp-F8h]
  float v112; // [rsp+C0h] [rbp-F4h]
  float v113; // [rsp+C4h] [rbp-F0h]
  float v114; // [rsp+C8h] [rbp-ECh]
  float v115; // [rsp+CCh] [rbp-E8h]
  float v116; // [rsp+D0h] [rbp-E4h]
  float v117; // [rsp+D4h] [rbp-E0h]
  float v118; // [rsp+DCh] [rbp-D8h]
  float v119; // [rsp+E0h] [rbp-D4h]
  float v120; // [rsp+E4h] [rbp-D0h]
  float v121; // [rsp+E8h] [rbp-CCh]
  float v122; // [rsp+E8h] [rbp-CCh]
  float v123; // [rsp+E8h] [rbp-CCh]
  float v124; // [rsp+ECh] [rbp-C8h]
  float v125; // [rsp+ECh] [rbp-C8h]
  float v126; // [rsp+F0h] [rbp-C4h]
  float v127; // [rsp+F4h] [rbp-C0h]
  float v128; // [rsp+F8h] [rbp-BCh]
  float v129; // [rsp+FCh] [rbp-B8h]
  float v130; // [rsp+100h] [rbp-B4h]
  float v131; // [rsp+104h] [rbp-B0h]
  float v132; // [rsp+108h] [rbp-ACh]
  float v133; // [rsp+10Ch] [rbp-A8h]
  float v134; // [rsp+110h] [rbp-A4h]
  vec_t v135; // [rsp+114h] [rbp-A0h]
  float v136; // [rsp+118h] [rbp-9Ch]
  float v137; // [rsp+11Ch] [rbp-98h]
  float v138; // [rsp+120h] [rbp-94h]
  float v139; // [rsp+124h] [rbp-90h]
  float v140; // [rsp+124h] [rbp-90h]
  float v141; // [rsp+128h] [rbp-8Ch]
  float v142; // [rsp+128h] [rbp-8Ch]
  float v143; // [rsp+12Ch] [rbp-88h]
  float v144; // [rsp+130h] [rbp-84h]
  float v145; // [rsp+134h] [rbp-80h]
  float v146; // [rsp+138h] [rbp-7Ch]
  float v147; // [rsp+13Ch] [rbp-78h]
  float v148; // [rsp+140h] [rbp-74h]
  float v149; // [rsp+144h] [rbp-70h]
  float v150; // [rsp+148h] [rbp-6Ch]
  float v151; // [rsp+14Ch] [rbp-68h]
  float v152; // [rsp+150h] [rbp-64h]
  float v153; // [rsp+154h] [rbp-60h]
  float v154; // [rsp+158h] [rbp-5Ch]
  float v155; // [rsp+15Ch] [rbp-58h]
  float v156; // [rsp+160h] [rbp-54h]
  float v157; // [rsp+164h] [rbp-50h]
  float v158; // [rsp+168h] [rbp-4Ch]
  float v159; // [rsp+168h] [rbp-4Ch]
  float v160; // [rsp+16Ch] [rbp-48h]
  float v161; // [rsp+170h] [rbp-44h]
  float v162; // [rsp+174h] [rbp-40h]
  float v163; // [rsp+178h] [rbp-3Ch]
  float v164; // [rsp+17Ch] [rbp-38h]
  float v165; // [rsp+180h] [rbp-34h]
  float v166; // [rsp+180h] [rbp-34h]
  float v167; // [rsp+184h] [rbp-30h]
  float v168; // [rsp+188h] [rbp-2Ch]

  x = this->m_Vertices[1].mPosition1.x;
  y = this->m_Vertices[1].mPosition1.y;
  z = this->m_Vertices[1].mPosition1.z;
  v1 = this->m_Vertices[0].mPosition.x;
  v81 = this->m_Vertices[1].mPosition2.x;
  mIndex1 = this->m_Vertices[1].mIndex1;
  v80 = this->m_Vertices[1].mPosition2.y;
  mIndex2 = this->m_Vertices[1].mIndex2;
  v79 = this->m_Vertices[1].mPosition2.z;
  v4 = this->m_Vertices[2].mIndex1;
  v5 = this->m_Vertices[2].mIndex2;
  v88 = this->m_Vertices[2].mPosition1.x;
  v87 = this->m_Vertices[2].mPosition1.y;
  v165 = this->m_Vertices[0].mPosition.y;
  v86 = this->m_Vertices[2].mPosition1.z;
  v158 = this->m_Vertices[0].mPosition.z;
  v6 = this->m_Vertices[2].mPosition.z;
  v133 = this->m_Vertices[1].mPosition.x;
  v7 = this->m_Vertices[2].mPosition2.x;
  v85 = this->m_Vertices[2].mPosition2.z;
  v157 = this->m_Vertices[1].mPosition.z;
  v93 = this->m_Vertices[3].mPosition2.y;
  v8 = this->m_Vertices[2].mPosition.y;
  v162 = this->m_Vertices[3].mPosition.z;
  v9 = vec3_origin.y;
  v163 = this->m_Vertices[3].mPosition.y;
  v10 = this->m_Vertices[1].mPosition.y - v9;
  v11 = vec3_origin.z;
  v92 = this->m_Vertices[3].mPosition2.z;
  v12 = v165 - v9;
  v13 = this->m_Vertices[2].mPosition2.y;
  v161 = this->m_Vertices[3].mPosition.x;
  v14 = this->m_Vertices[3].mPosition1.z;
  v15 = this->m_Vertices[3].mIndex1;
  v16 = v1 - vec3_origin.x;
  v17 = this->m_Vertices[3].mIndex2;
  v18 = v158 - v11;
  v19 = this->m_Vertices[3].mPosition1.x;
  v20 = this->m_Vertices[3].mPosition1.y;
  v21 = v157 - v11;
  v22 = this->m_Vertices[3].mPosition2.x;
  v149 = v133 - v1;
  v147 = this->m_Vertices[1].mPosition.y;
  v164 = v133 - vec3_origin.x;
  v136 = v8;
  v144 = v147 - v165;
  v135 = v6;
  v160 = v157 - v158;
  v146 = ((v157 - v158) * (v157 - v11)) + (((v147 - v165) * v10) + ((v133 - vec3_origin.x) * (v133 - v1)));
  v23 = v6 - v11;
  v153 = v6 - v158;
  v137 = this->m_Vertices[2].mPosition.x;
  v167 = v137 - v1;
  v104 = -(((v157 - v158) * (v158 - v11)) + (((v147 - v165) * (v165 - v9)) + ((v133 - v1) * (v1 - vec3_origin.x))));
  v24 = v8 - v9;
  v168 = v137 - vec3_origin.x;
  v154 = v8 - v165;
  v102 = ((v6 - v158) * (v6 - v11)) + (((v8 - v165) * (v8 - v9)) + ((v137 - vec3_origin.x) * (v137 - v1)));
  v89 = -(((v6 - v158) * (v158 - v11)) + (((v8 - v165) * (v165 - v9)) + ((v137 - v1) * (v1 - vec3_origin.x))));
  v25 = v163 - v9;
  v26 = v162 - v11;
  v148 = v161 - v1;
  v152 = v163 - v165;
  v151 = v162 - v158;
  v27 = (v163 - v165) * v25;
  v166 = v161 - vec3_origin.x;
  v101 = ((v162 - v158) * v26) + (v27 + ((v161 - vec3_origin.x) * (v161 - v1)));
  v145 = v136 - v147;
  v78 = -(((v162 - v158) * v18) + ((v152 * v12) + ((v161 - v1) * (v1 - vec3_origin.x))));
  v156 = v137 - v133;
  v130 = v6 - v157;
  v90 = ((v6 - v157) * v23) + (((v136 - v147) * v24) + ((v137 - vec3_origin.x) * (v137 - v133)));
  v103 = v162 - v6;
  v77 = -(((v6 - v157) * v21) + (((v136 - v147) * v10) + ((v137 - v133) * (v133 - vec3_origin.x))));
  v94 = ((v162 - v6) * v26) + (((v163 - v136) * v25) + ((v161 - vec3_origin.x) * (v161 - v137)));
  v76 = -(((v162 - v6) * v23) + (((v163 - v136) * v24) + ((v137 - vec3_origin.x) * (v161 - v137))));
  v91 = ((v157 - v162) * v21) + (((v147 - v163) * v10) + ((v133 - vec3_origin.x) * (v133 - v161)));
  v28 = -((((v161 - vec3_origin.x) * (v133 - v161)) + ((v147 - v163) * v25)) + ((v157 - v162) * v26));
  if ( v104 <= 0.0 && v89 <= 0.0 && v78 <= 0.0 )
  {
    this->m_nVertexCount = 1;
    this->m_flLambdas[0] = 1.0;
    return;
  }
  if ( v146 <= 0.0 && v91 <= 0.0 && v77 <= 0.0 )
  {
    this->m_nVertexCount = 1;
    this->m_Vertices[0].mIndex1 = mIndex1;
    this->m_Vertices[0].mPosition1.x = x;
    this->m_Vertices[0].mIndex2 = mIndex2;
    this->m_Vertices[0].mPosition1.y = y;
    this->m_flLambdas[0] = 1.0;
    this->m_Vertices[0].mPosition1.z = z;
    this->m_Vertices[0].mPosition2.x = v81;
    this->m_Vertices[0].mPosition2.y = v80;
    this->m_Vertices[0].mPosition2.z = v79;
    this->m_Vertices[0].mPosition.x = v133;
    this->m_Vertices[0].mPosition.y = v147;
    this->m_Vertices[0].mPosition.z = v157;
    return;
  }
  if ( v102 <= 0.0 && v90 <= 0.0 && v76 <= 0.0 )
  {
    this->m_nVertexCount = 1;
    this->m_Vertices[0].mIndex1 = v4;
    this->m_Vertices[0].mPosition1.x = v88;
    this->m_Vertices[0].mIndex2 = v5;
    this->m_Vertices[0].mPosition1.y = v87;
    this->m_Vertices[0].mPosition2.x = v7;
    this->m_Vertices[0].mPosition1.z = v86;
    this->m_Vertices[0].mPosition2.y = v13;
    this->m_Vertices[0].mPosition2.z = v85;
    this->m_flLambdas[0] = 1.0;
    this->m_Vertices[0].mPosition.x = v137;
    this->m_Vertices[0].mPosition.y = v136;
    this->m_Vertices[0].mPosition.z = v135;
    return;
  }
  if ( v101 <= 0.0 && v94 <= 0.0 && v28 <= 0.0 )
  {
    this->m_nVertexCount = 1;
    this->m_Vertices[0].mIndex1 = v15;
    this->m_Vertices[0].mPosition2.y = v93;
    this->m_Vertices[0].mIndex2 = v17;
    this->m_Vertices[0].mPosition2.z = v92;
    this->m_Vertices[0].mPosition1.x = v19;
    this->m_Vertices[0].mPosition1.y = v20;
    this->m_Vertices[0].mPosition1.z = v14;
    this->m_Vertices[0].mPosition2.x = v22;
    this->m_Vertices[0].mPosition.x = v161;
    this->m_Vertices[0].mPosition.y = v163;
    this->m_Vertices[0].mPosition.z = v162;
    this->m_flLambdas[0] = 1.0;
    return;
  }
  v98 = v21 * v24;
  v128 = v164 * v24;
  v129 = v168 * v10;
  v127 = v164 * v23;
  v124 = v10 * v23;
  v107 = (v21 * v24) - (v10 * v23);
  v126 = v168 * v21;
  v119 = v168 * v12;
  v139 = v16 * v10;
  v118 = v168 * v18;
  v121 = v16 * v21;
  v117 = v18 * v24;
  v141 = v164 * v12;
  v29 = v18 * v10;
  v30 = v164 * v18;
  v97 = v12 * v23;
  v134 = (v12 * v23) - (v18 * v24);
  v75 = (v153 * v149) - (v167 * v160);
  v150 = (v160 * v154) - (v144 * v153);
  v31 = (v144 * v167) - (v154 * v149);
  v143 = (((v168 * v10) - (v164 * v24)) * v31) + ((((v164 * v23) - (v168 * v21)) * v75) + (v107 * v150));
  v155 = (((v164 * v12) - (v16 * v10)) * v31)
       + ((((v16 * v21) - (v164 * v18)) * v75) + (((v18 * v10) - (v12 * v21)) * v150));
  v159 = (((v16 * v24) - (v168 * v12)) * v31) + ((v134 * v150) + (((v168 * v18) - (v16 * v23)) * v75));
  v116 = v164 * v25;
  v115 = v166 * v10;
  v96 = v10 * v26;
  v114 = v166 * v21;
  v112 = v21 * v25;
  v131 = (v10 * v26) - (v21 * v25);
  v32 = v166 * v18;
  v111 = v166 * v12;
  v33 = v18 * v25;
  v108 = v12 * v26;
  v113 = v164 * v26;
  v34 = v16 * v25;
  v35 = v16 * v26;
  v106 = (v12 * v21) - v29;
  v36 = (v151 * v144) - (v160 * v152);
  v37 = (v160 * v148) - (v149 * v151);
  v95 = v36;
  v38 = (v152 * v149) - (v148 * v144);
  v138 = (((v164 * v25) - v115) * v38) + (((v114 - (v164 * v26)) * v37) + (v131 * v36));
  v110 = v32;
  v39 = ((v16 * v26) - v32) * v37;
  v40 = (v30 - v121) * v37;
  v132 = ((v111 - (v16 * v25)) * v38) + (v39 + ((v33 - v108) * v36));
  v41 = (v139 - v141) * v38;
  v42 = v168 * v25;
  v43 = v25 * v23;
  v44 = v168 * v26;
  v45 = v26 * v24;
  v46 = v40 + (v106 * v36);
  v47 = v41;
  v48 = v166 * v24;
  v122 = v44;
  v100 = v47 + v46;
  v49 = v166 * v23;
  v105 = v43 - v45;
  v109 = v108 - v33;
  v50 = (v154 * v148) - (v152 * v167);
  v74 = (v167 * v151) - (v153 * v148);
  v142 = (v153 * v152) - (v151 * v154);
  v99 = (((v166 * v24) - v42) * v50) + (((v122 - (v166 * v23)) * v74) + ((v43 - v45) * v142));
  v51 = (((v117 - v97) * v142) + (((v16 * v23) - v118) * v74)) + ((v119 - (v16 * v24)) * v50);
  v140 = ((v34 - v111) * v50) + ((v109 * v142) + ((v110 - v35) * v74));
  v120 = v45 - v43;
  v125 = v124 - v98;
  v52 = (v156 * (v163 - v147)) - (v145 * (v161 - v133));
  v53 = ((v161 - v133) * v130) - (v156 * (v162 - v157));
  v54 = ((v162 - v157) * v145) - ((v163 - v147) * v130);
  v123 = ((v42 - v48) * v52) + (((v49 - v122) * v53) + (v120 * v54));
  v55 = (((v112 - v96) * v54) + ((v113 - v114) * v53)) + ((v115 - v116) * v52);
  v56 = ((v125 * v54) + ((v126 - v127) * v53)) + ((v128 - v129) * v52);
  if ( v100 <= 0.0 && v155 <= 0.0 )
  {
    v66 = v146;
    if ( v146 > 0.0 )
    {
      v67 = v104;
      if ( v104 > 0.0 )
      {
        this->m_nVertexCount = 2;
        v68 = ((v149 * v149) + (v144 * v144)) + (v160 * v160);
LABEL_36:
        this->m_flLambdas[0] = v66 / v68;
        this->m_flLambdas[1] = v67 / v68;
        return;
      }
    }
  }
  if ( v159 > 0.0 || v51 > 0.0 || v102 <= 0.0 || v89 <= 0.0 )
  {
    if ( v140 <= 0.0 && v132 <= 0.0 )
    {
      v66 = v101;
      if ( v101 > 0.0 )
      {
        v67 = v78;
        if ( v78 > 0.0 )
        {
          this->m_nVertexCount = 2;
          this->m_Vertices[1].mIndex1 = v15;
          this->m_Vertices[1].mIndex2 = v17;
          this->m_Vertices[1].mPosition2.z = v92;
          this->m_Vertices[1].mPosition1.x = v19;
          this->m_Vertices[1].mPosition1.y = v20;
          this->m_Vertices[1].mPosition1.z = v14;
          this->m_Vertices[1].mPosition2.x = v22;
          this->m_Vertices[1].mPosition.x = v161;
          this->m_Vertices[1].mPosition.z = v162;
          this->m_Vertices[1].mPosition2.y = v93;
          v68 = ((v148 * v148) + (v152 * v152)) + (v151 * v151);
          this->m_Vertices[1].mPosition.y = v163;
          goto LABEL_36;
        }
      }
    }
    if ( v143 <= 0.0 && v56 <= 0.0 )
    {
      v66 = v90;
      if ( v90 > 0.0 )
      {
        v67 = v77;
        if ( v77 > 0.0 )
        {
          this->m_nVertexCount = 2;
          this->m_Vertices[0].mIndex1 = mIndex1;
          this->m_Vertices[0].mIndex2 = mIndex2;
          this->m_Vertices[1].mIndex1 = v4;
          this->m_Vertices[0].mPosition1.z = z;
          this->m_Vertices[0].mPosition1.x = x;
          this->m_Vertices[0].mPosition2.z = v79;
          this->m_Vertices[0].mPosition2.x = v81;
          this->m_Vertices[1].mIndex2 = v5;
          this->m_Vertices[0].mPosition.z = v157;
          this->m_Vertices[0].mPosition1.y = y;
          this->m_Vertices[0].mPosition.x = v133;
          this->m_Vertices[1].mPosition2.x = v7;
          v68 = ((v156 * v156) + (v145 * v145)) + (v130 * v130);
          this->m_Vertices[0].mPosition2.y = v80;
          this->m_Vertices[1].mPosition1.x = v88;
          this->m_Vertices[0].mPosition.y = v147;
          this->m_Vertices[1].mPosition1.z = v86;
          this->m_Vertices[1].mPosition1.y = v87;
          this->m_Vertices[1].mPosition2.y = v13;
          this->m_Vertices[1].mPosition2.z = v85;
          this->m_Vertices[1].mPosition.x = v137;
          this->m_Vertices[1].mPosition.y = v136;
          this->m_Vertices[1].mPosition.z = v135;
          goto LABEL_36;
        }
      }
    }
    if ( v99 <= 0.0 && v123 <= 0.0 )
    {
      v66 = v94;
      if ( v94 > 0.0 )
      {
        v67 = v76;
        if ( v76 > 0.0 )
        {
          this->m_nVertexCount = 2;
          this->m_Vertices[0].mIndex1 = v4;
          this->m_Vertices[0].mIndex2 = v5;
          this->m_Vertices[0].mPosition2.x = v7;
          this->m_Vertices[0].mPosition1.y = v87;
          this->m_Vertices[0].mPosition1.z = v86;
          this->m_Vertices[0].mPosition.x = v137;
          this->m_Vertices[0].mPosition.y = v136;
          this->m_Vertices[0].mPosition2.y = v13;
          this->m_Vertices[1].mPosition2.y = v93;
          this->m_Vertices[0].mPosition1.x = v88;
          this->m_Vertices[1].mPosition2.z = v92;
          this->m_Vertices[0].mPosition2.z = v85;
          v68 = (((v161 - v137) * (v161 - v137)) + ((v163 - v136) * (v163 - v136))) + (v103 * v103);
          this->m_Vertices[1].mIndex1 = v15;
          this->m_Vertices[0].mPosition.z = v135;
          this->m_Vertices[1].mIndex2 = v17;
          this->m_Vertices[1].mPosition1.x = v19;
          this->m_Vertices[1].mPosition1.y = v20;
          this->m_Vertices[1].mPosition1.z = v14;
          this->m_Vertices[1].mPosition2.x = v22;
          this->m_Vertices[1].mPosition.x = v161;
          this->m_Vertices[1].mPosition.y = v163;
          this->m_Vertices[1].mPosition.z = v162;
          goto LABEL_36;
        }
      }
    }
    if ( v138 > 0.0 || v55 > 0.0 || v91 <= 0.0 || v28 <= 0.0 )
    {
      v57.m128_f32[0] = ((((v151 * v154) - (v153 * v152)) * v149) - (v167 * v95))
                      + (((v144 * v153) - (v160 * v154)) * v148);
      v58 = _mm_cmple_ss(0LL, v57);
      LODWORD(v59) = _mm_andnot_ps(v58, 0xBF800000).m128_u32[0] | v58.m128_i32[0] & 0x3F800000;
      v60 = (((v105 * v16) - (v134 * v166)) + (v168 * v109)) * v59;
      v61 = (((v131 * v16) - (v109 * v164)) + (v166 * v106)) * v59;
      v62 = (((v107 * v16) - (v168 * v106)) + (v134 * v164)) * v59;
      if ( v62 >= 0.0 || v143 <= 0.0 || v155 <= 0.0 || v159 <= 0.0 )
      {
        if ( v61 >= 0.0 || v138 <= 0.0 || v132 <= 0.0 || v100 <= 0.0 )
        {
          if ( v60 >= 0.0 || v99 <= 0.0 || v51 <= 0.0 || v140 <= 0.0 )
          {
            v63 = (((v164 * v120) - (v168 * v131)) + (v166 * v125)) * v59;
            if ( v63 >= 0.0 || v123 <= 0.0 || v55 <= 0.0 || v56 <= 0.0 )
            {
              v64 = v57.m128_f32[0] * v59;
              this->m_flLambdas[0] = v63 / v64;
              this->m_flLambdas[1] = v60 / v64;
              this->m_flLambdas[2] = v61 / v64;
              this->m_flLambdas[3] = v62 / v64;
            }
            else
            {
              this->m_Vertices[0].mIndex1 = mIndex1;
              this->m_nVertexCount = 3;
              this->m_Vertices[0].mPosition1.y = y;
              this->m_Vertices[0].mIndex2 = mIndex2;
              this->m_Vertices[0].mPosition2.x = v81;
              this->m_Vertices[1].mIndex1 = v4;
              this->m_Vertices[0].mPosition2.z = v79;
              this->m_Vertices[1].mIndex2 = v5;
              v73 = ((v54 * v54) + (v53 * v53)) + (v52 * v52);
              this->m_Vertices[1].mPosition2.x = v7;
              this->m_Vertices[0].mPosition.y = v147;
              this->m_Vertices[0].mPosition1.x = x;
              this->m_Vertices[1].mPosition1.x = v88;
              this->m_Vertices[0].mPosition1.z = z;
              this->m_Vertices[1].mPosition1.z = v86;
              this->m_Vertices[0].mPosition2.y = v80;
              this->m_Vertices[1].mPosition2.y = v13;
              this->m_Vertices[0].mPosition.x = v133;
              this->m_Vertices[0].mPosition.z = v157;
              this->m_Vertices[1].mPosition1.y = v87;
              this->m_Vertices[1].mPosition2.z = v85;
              this->m_Vertices[1].mPosition.x = v137;
              this->m_Vertices[2].mIndex1 = v15;
              this->m_Vertices[1].mPosition.y = v136;
              this->m_Vertices[1].mPosition.z = v135;
              this->m_Vertices[2].mPosition2.y = v93;
              this->m_Vertices[2].mPosition2.z = v92;
              this->m_Vertices[2].mIndex2 = v17;
              this->m_Vertices[2].mPosition1.x = v19;
              this->m_Vertices[2].mPosition1.y = v20;
              this->m_Vertices[2].mPosition1.z = v14;
              this->m_Vertices[2].mPosition2.x = v22;
              this->m_Vertices[2].mPosition.x = v161;
              this->m_Vertices[2].mPosition.y = v163;
              this->m_Vertices[2].mPosition.z = v162;
              this->m_flLambdas[0] = v123 / v73;
              this->m_flLambdas[1] = v55 / v73;
              this->m_flLambdas[2] = v56 / v73;
            }
          }
          else
          {
            this->m_nVertexCount = 3;
            this->m_Vertices[1].mIndex1 = v15;
            this->m_Vertices[1].mIndex2 = v17;
            this->m_Vertices[1].mPosition1.x = v19;
            this->m_Vertices[1].mPosition2.z = v92;
            this->m_Vertices[1].mPosition1.y = v20;
            this->m_Vertices[1].mPosition1.z = v14;
            this->m_Vertices[1].mPosition2.x = v22;
            this->m_Vertices[1].mPosition2.y = v93;
            this->m_Vertices[1].mPosition.y = v163;
            this->m_Vertices[1].mPosition.x = v161;
            this->m_Vertices[1].mPosition.z = v162;
            v71 = ((v142 * v142) + (v74 * v74)) + (v50 * v50);
            this->m_flLambdas[0] = v99 / v71;
            this->m_flLambdas[1] = v51 / v71;
            this->m_flLambdas[2] = v140 / v71;
          }
        }
        else
        {
          this->m_Vertices[2].mIndex1 = v15;
          this->m_nVertexCount = 3;
          this->m_Vertices[2].mIndex2 = v17;
          this->m_Vertices[2].mPosition1.x = v19;
          this->m_Vertices[2].mPosition1.y = v20;
          this->m_Vertices[2].mPosition1.z = v14;
          this->m_Vertices[2].mPosition2.x = v22;
          this->m_Vertices[2].mPosition.x = v161;
          this->m_Vertices[2].mPosition2.z = v92;
          v70 = ((v95 * v95) + (((v160 * v148) - (v149 * v151)) * ((v160 * v148) - (v149 * v151))))
              + (((v152 * v149) - (v148 * v144)) * ((v152 * v149) - (v148 * v144)));
          this->m_Vertices[2].mPosition.z = v162;
          this->m_Vertices[2].mPosition2.y = v93;
          this->m_Vertices[2].mPosition.y = v163;
          this->m_flLambdas[0] = v138 / v70;
          this->m_flLambdas[1] = v132 / v70;
          this->m_flLambdas[2] = v100 / v70;
        }
      }
      else
      {
        this->m_nVertexCount = 3;
        this->m_Vertices[1].mIndex1 = v4;
        this->m_Vertices[1].mIndex2 = v5;
        this->m_Vertices[1].mPosition2.x = v7;
        this->m_Vertices[1].mPosition2.y = v13;
        this->m_Vertices[2].mPosition1.y = y;
        this->m_Vertices[2].mIndex1 = mIndex1;
        this->m_Vertices[2].mIndex2 = mIndex2;
        this->m_Vertices[1].mPosition1.x = v88;
        v72 = ((v150 * v150) + (v75 * v75)) + (((v144 * v167) - (v154 * v149)) * ((v144 * v167) - (v154 * v149)));
        this->m_Vertices[1].mPosition1.y = v87;
        this->m_Vertices[1].mPosition1.z = v86;
        this->m_Vertices[2].mPosition1.z = z;
        this->m_Vertices[1].mPosition2.z = v85;
        this->m_Vertices[1].mPosition.x = v137;
        this->m_Vertices[1].mPosition.y = v136;
        this->m_Vertices[1].mPosition.z = v135;
        this->m_Vertices[2].mPosition1.x = x;
        this->m_Vertices[2].mPosition2.x = v81;
        this->m_Vertices[2].mPosition2.y = v80;
        this->m_Vertices[2].mPosition2.z = v79;
        this->m_Vertices[2].mPosition.x = v133;
        this->m_Vertices[2].mPosition.y = v147;
        this->m_Vertices[2].mPosition.z = v157;
        this->m_flLambdas[0] = v143 / v72;
        this->m_flLambdas[1] = v155 / v72;
        this->m_flLambdas[2] = v159 / v72;
      }
    }
    else
    {
      this->m_nVertexCount = 2;
      this->m_Vertices[0].mIndex1 = v15;
      this->m_Vertices[0].mIndex2 = v17;
      this->m_Vertices[0].mPosition1.x = v19;
      this->m_Vertices[0].mPosition2.y = v93;
      this->m_Vertices[0].mPosition1.y = v20;
      this->m_Vertices[0].mPosition2.z = v92;
      this->m_Vertices[0].mPosition1.z = v14;
      this->m_Vertices[0].mPosition2.x = v22;
      this->m_Vertices[0].mPosition.x = v161;
      this->m_Vertices[0].mPosition.z = v162;
      this->m_Vertices[0].mPosition.y = v163;
      v65 = (((v133 - v161) * (v133 - v161)) + ((v147 - v163) * (v147 - v163))) + ((v157 - v162) * (v157 - v162));
      this->m_flLambdas[0] = v91 / v65;
      this->m_flLambdas[1] = v28 / v65;
    }
  }
  else
  {
    this->m_nVertexCount = 2;
    this->m_Vertices[1].mIndex1 = v4;
    this->m_Vertices[1].mIndex2 = v5;
    this->m_Vertices[1].mPosition2.x = v7;
    this->m_Vertices[1].mPosition2.y = v13;
    v69 = ((v167 * v167) + (v154 * v154)) + (v153 * v153);
    this->m_Vertices[1].mPosition1.x = v88;
    this->m_Vertices[1].mPosition1.y = v87;
    this->m_Vertices[1].mPosition1.z = v86;
    this->m_Vertices[1].mPosition2.z = v85;
    this->m_Vertices[1].mPosition.x = v137;
    this->m_Vertices[1].mPosition.y = v136;
    this->m_Vertices[1].mPosition.z = v135;
    this->m_flLambdas[0] = v102 / v69;
    this->m_flLambdas[1] = v89 / v69;
  }
}


// Distance  (line 898, @0x00000000030f4100, libserver.so)  // inlines: GJKSimplexCache_t
// calls: Distance, __stack_chk_fail
// callers: Script_CalcDistanceBetweenEntityOBB, CGamePhysicsQueryInterface::LinearCast, IsOBBIntersectingCapsule
DistanceQueryResult_t *__fastcall Distance(
        DistanceQueryResult_t *__return_ptr retstr,
        const matrix3x4_t *const xform1,
        const CGJKShapeProxy *const proxy1,
        const matrix3x4_t *const xform2,
        const CGJKShapeProxy *const proxy2,
        int nIterationCount)
{
  GJKSimplexCache_t cache; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-18h]

  cache.m_flMetric = 0.0;
  v9 = __readfsqword(0x28u);
  cache.m_nVertexCount = 0;
  Distance(retstr, xform1, proxy1, xform2, proxy2, &cache, nIterationCount);
  return retstr;
}


// Distance  (line 906, @0x00000000030f26c0, libserver.so)  // inlines: AddVertex, BarycentricCoordinates, BuildWitnessPoints, CGJKSimplex, CheckCache, CrossProduct, Det, DistTo, DistanceQueryResult_t, DotProduct, FastSqrt, GJKSimplexCache_t, GetClosestPoint, GetSearchDirection, GetSupport, GetVertex, Init, Length, Metric, ReadCache, RotateVectorByInverse, SaveCache, Solve, Solve1, Solve2, TransformVector, Vector, VectorAdd, VectorDistance, VectorIRotate, VectorLength, VectorMultiply, VectorSubtract, VectorTransform, WriteCache, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-, operator=
// calls: VectorTransform, CGJKSimplex::Solve4, VectorIRotate, CGJKSimplex::Solve3, __stack_chk_fail
// callers: Distance
DistanceQueryResult_t *__fastcall Distance(
        DistanceQueryResult_t *__return_ptr retstr,
        const matrix3x4_t *const xform1,
        const CGJKShapeProxy *const proxy1,
        const matrix3x4_t *const xform2,
        const CGJKShapeProxy *const proxy2,
        GJKSimplexCache_t *const cache,
        int nIterationCount)
{
  const CGJKShapeProxy *v7; // r12
  const CGJKShapeProxy *v8; // rbx
  int m_nVertexCount; // ecx
  GJKSimplexVertex_t *m_Vertices; // r14
  __int64 v13; // rax
  GJKSimplexCache_t *v14; // r15
  int v15; // ecx
  float m_flScale; // xmm0_4
  int v17; // r13d
  const Vector *v18; // rdx
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  const Vector *v23; // rdx
  float v24; // xmm5_4
  float v25; // xmm3_4
  float v26; // xmm0_4
  float x; // xmm5_4
  float y; // xmm3_4
  float z; // xmm0_4
  const CGJKShapeProxy *v30; // rax
  float m_flMetric; // xmm1_4
  float v32; // xmm0_4
  float *p_x; // rax
  float v34; // xmm0_4
  float v35; // xmm2_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  float *v38; // rax
  float v39; // xmm0_4
  float v40; // xmm5_4
  float v41; // xmm3_4
  float v42; // xmm0_4
  __int64 v43; // rax
  GJKSimplexVertex_t *v44; // rdx
  int mIndex1; // edi
  float v46; // xmm0_4
  float v47; // xmm1_4
  float v48; // xmm4_4
  float v49; // xmm3_4
  float v50; // xmm2_4
  float *v51; // rdi
  float v52; // xmm2_4
  float *v53; // rax
  int v54; // r14d
  int v55; // edx
  __int64 v56; // rax
  float *v57; // rdi
  float v58; // xmm0_4
  vec_t v59; // xmm2_4
  vec_t v60; // xmm1_4
  vec_t v61; // xmm0_4
  float *v62; // rdi
  float v63; // xmm2_4
  float *v64; // rax
  int v65; // r15d
  int v66; // edx
  __int64 v67; // rax
  float *v68; // rdi
  float v69; // xmm0_4
  vec_t v70; // xmm2_4
  vec_t v71; // xmm1_4
  vec_t v72; // xmm0_4
  float v73; // xmm3_4
  GJKSimplexVertex_t *v74; // rdx
  float v75; // xmm2_4
  float v76; // xmm1_4
  CGJKSimplex *v77; // rax
  int v78; // ecx
  __int64 v79; // rax
  bool v80; // cc
  float v81; // xmm0_4
  float v82; // xmm1_4
  __int64 v83; // rax
  CGJKSimplex *p_simplex; // rdx
  int v85; // edi
  __int64 v86; // rax
  float *v87; // rax
  vec_t *p_y; // rdx
  __int64 v89; // rax
  vec_t *p_z; // rdx
  int v91; // eax
  float v92; // xmm5_4
  float v93; // xmm10_4
  float v94; // xmm4_4
  float v95; // xmm9_4
  float v96; // xmm3_4
  float v97; // xmm0_4
  float v98; // xmm1_4
  float v99; // xmm5_4
  float v100; // xmm6_4
  float v101; // xmm2_4
  float v102; // xmm7_4
  float v103; // xmm5_4
  float v104; // xmm5_4
  GJKSimplexVertex_t *v105; // rdx
  CGJKSimplex *v106; // rax
  int v107; // ecx
  float v109; // xmm7_4
  float v110; // xmm7_4
  float v111; // [rsp+8h] [rbp-2A8h]
  float v112; // [rsp+Ch] [rbp-2A4h]
  float v113; // [rsp+10h] [rbp-2A0h]
  float v114; // [rsp+14h] [rbp-29Ch]
  float v115; // [rsp+18h] [rbp-298h]
  float v116; // [rsp+1Ch] [rbp-294h]
  __int64 v119; // [rsp+38h] [rbp-278h]
  int nIterationa; // [rsp+40h] [rbp-270h]
  int nIteration; // [rsp+40h] [rbp-270h]
  float v122; // [rsp+44h] [rbp-26Ch]
  float v123; // [rsp+48h] [rbp-268h]
  float v124; // [rsp+4Ch] [rbp-264h]
  float v125; // [rsp+4Ch] [rbp-264h]
  float d2_olda; // [rsp+60h] [rbp-250h]
  float d2_old; // [rsp+60h] [rbp-250h]
  float out; // [rsp+68h] [rbp-248h]
  Vector v; // [rsp+70h] [rbp-240h] BYREF
  Vector in1; // [rsp+80h] [rbp-230h] BYREF
  float v133; // [rsp+90h] [rbp-220h] BYREF
  float v134; // [rsp+94h] [rbp-21Ch]
  float v135; // [rsp+98h] [rbp-218h]
  CGJKSimplex simplex; // [rsp+A0h] [rbp-210h] BYREF
  CGJKSimplex last_simplex; // [rsp+190h] [rbp-120h] BYREF
  unsigned __int64 v138; // [rsp+278h] [rbp-38h]
  Vector v139; // 0:^44.12

  v7 = proxy2;
  v8 = proxy1;
  v138 = __readfsqword(0x28u);
  m_nVertexCount = cache->m_nVertexCount;
  retstr->m_flDistance = 0.0;
  simplex.m_nVertexCount = m_nVertexCount;
  simplex.m_Cache.m_flMetric = 0.0;
  simplex.m_Cache.m_nVertexCount = 0;
  last_simplex.m_nVertexCount = 0;
  last_simplex.m_Cache.m_flMetric = 0.0;
  last_simplex.m_Cache.m_nVertexCount = 0;
  if ( m_nVertexCount > 0 )
  {
    m_Vertices = simplex.m_Vertices;
    v13 = 0;
    v14 = cache;
    do
    {
      v15 = v14->m_Vertices1[0];
      v119 = v13;
      v14 = (v14 + 1);
      m_flScale = proxy1->m_flScale;
      ++m_Vertices;
      v17 = v14->m_Vertices1[3];
      nIterationa = v15;
      v18 = &proxy1->m_pVertexBuffer[v15];
      v19 = v18->y * m_flScale;
      v20 = v18->z * m_flScale;
      v21 = m_flScale * v18->x;
      v134 = v19;
      v135 = v20;
      v133 = v21;
      VectorTransform(&v133, xform1, &in1.x);
      v22 = proxy2->m_flScale;
      v23 = &proxy2->m_pVertexBuffer[v17];
      v139 = in1;
      v24 = v23->y * v22;
      v25 = v23->z * v22;
      v26 = v22 * v23->x;
      v134 = v24;
      v135 = v25;
      v133 = v26;
      VectorTransform(&v133, xform2, &in1.x);
      m_Vertices[-1].mIndex2 = v17;
      x = in1.x;
      y = in1.y;
      z = in1.z;
      m_Vertices[-1].mPosition2.x = in1.x;
      m_Vertices[-1].mIndex1 = nIterationa;
      m_Vertices[-1].mPosition2.y = y;
      m_Vertices[-1].mPosition2.z = z;
      m_Vertices[-1].mPosition1 = v139;
      m_Vertices[-1].mPosition.x = x - v139.x;
      m_Vertices[-1].mPosition.y = y - v139.y;
      m_Vertices[-1].mPosition.z = z - v139.z;
      simplex.m_flLambdas[v119] = 0.0;
      v13 = v119 + 1;
      m_nVertexCount = simplex.m_nVertexCount;
    }
    while ( simplex.m_nVertexCount > v119 + 1 );
    v30 = proxy2;
    v8 = proxy1;
    v7 = v30;
    if ( simplex.m_nVertexCount > 1 )
    {
      m_flMetric = cache->m_flMetric;
      if ( simplex.m_nVertexCount == 3 )
        v32 = fsqrt(
                (((((simplex.m_Vertices[1].mPosition.y - simplex.m_Vertices[0].mPosition.y)
                  * (simplex.m_Vertices[2].mPosition.z - simplex.m_Vertices[0].mPosition.z))
                 - ((simplex.m_Vertices[1].mPosition.z - simplex.m_Vertices[0].mPosition.z)
                  * (simplex.m_Vertices[2].mPosition.y - simplex.m_Vertices[0].mPosition.y)))
                * (((simplex.m_Vertices[1].mPosition.y - simplex.m_Vertices[0].mPosition.y)
                  * (simplex.m_Vertices[2].mPosition.z - simplex.m_Vertices[0].mPosition.z))
                 - ((simplex.m_Vertices[1].mPosition.z - simplex.m_Vertices[0].mPosition.z)
                  * (simplex.m_Vertices[2].mPosition.y - simplex.m_Vertices[0].mPosition.y))))
               + ((((simplex.m_Vertices[2].mPosition.x - simplex.m_Vertices[0].mPosition.x)
                  * (simplex.m_Vertices[1].mPosition.z - simplex.m_Vertices[0].mPosition.z))
                 - ((simplex.m_Vertices[1].mPosition.x - simplex.m_Vertices[0].mPosition.x)
                  * (simplex.m_Vertices[2].mPosition.z - simplex.m_Vertices[0].mPosition.z)))
                * (((simplex.m_Vertices[2].mPosition.x - simplex.m_Vertices[0].mPosition.x)
                  * (simplex.m_Vertices[1].mPosition.z - simplex.m_Vertices[0].mPosition.z))
                 - ((simplex.m_Vertices[1].mPosition.x - simplex.m_Vertices[0].mPosition.x)
                  * (simplex.m_Vertices[2].mPosition.z - simplex.m_Vertices[0].mPosition.z)))))
              + ((((simplex.m_Vertices[2].mPosition.y - simplex.m_Vertices[0].mPosition.y)
                 * (simplex.m_Vertices[1].mPosition.x - simplex.m_Vertices[0].mPosition.x))
                - ((simplex.m_Vertices[2].mPosition.x - simplex.m_Vertices[0].mPosition.x)
                 * (simplex.m_Vertices[1].mPosition.y - simplex.m_Vertices[0].mPosition.y)))
               * (((simplex.m_Vertices[2].mPosition.y - simplex.m_Vertices[0].mPosition.y)
                 * (simplex.m_Vertices[1].mPosition.x - simplex.m_Vertices[0].mPosition.x))
                - ((simplex.m_Vertices[2].mPosition.x - simplex.m_Vertices[0].mPosition.x)
                 * (simplex.m_Vertices[1].mPosition.y - simplex.m_Vertices[0].mPosition.y)))))
            * 0.5;
      else
        v32 = simplex.m_nVertexCount == 4
            ? (((simplex.m_Vertices[1].mPosition.x - simplex.m_Vertices[0].mPosition.x)
              * (((simplex.m_Vertices[3].mPosition.z - simplex.m_Vertices[0].mPosition.z)
                * (simplex.m_Vertices[2].mPosition.y - simplex.m_Vertices[0].mPosition.y))
               - ((simplex.m_Vertices[3].mPosition.y - simplex.m_Vertices[0].mPosition.y)
                * (simplex.m_Vertices[2].mPosition.z - simplex.m_Vertices[0].mPosition.z))))
             - ((simplex.m_Vertices[2].mPosition.x - simplex.m_Vertices[0].mPosition.x)
              * (((simplex.m_Vertices[3].mPosition.z - simplex.m_Vertices[0].mPosition.z)
                * (simplex.m_Vertices[1].mPosition.y - simplex.m_Vertices[0].mPosition.y))
               - ((simplex.m_Vertices[3].mPosition.y - simplex.m_Vertices[0].mPosition.y)
                * (simplex.m_Vertices[1].mPosition.z - simplex.m_Vertices[0].mPosition.z)))))
            + ((simplex.m_Vertices[3].mPosition.x - simplex.m_Vertices[0].mPosition.x)
             * (((simplex.m_Vertices[1].mPosition.y - simplex.m_Vertices[0].mPosition.y)
               * (simplex.m_Vertices[2].mPosition.z - simplex.m_Vertices[0].mPosition.z))
              - ((simplex.m_Vertices[1].mPosition.z - simplex.m_Vertices[0].mPosition.z)
               * (simplex.m_Vertices[2].mPosition.y - simplex.m_Vertices[0].mPosition.y))))
            : fsqrt(
                (((simplex.m_Vertices[0].mPosition.x - simplex.m_Vertices[1].mPosition.x)
                * (simplex.m_Vertices[0].mPosition.x - simplex.m_Vertices[1].mPosition.x))
               + ((simplex.m_Vertices[0].mPosition.y - simplex.m_Vertices[1].mPosition.y)
                * (simplex.m_Vertices[0].mPosition.y - simplex.m_Vertices[1].mPosition.y)))
              + ((simplex.m_Vertices[0].mPosition.z - simplex.m_Vertices[1].mPosition.z)
               * (simplex.m_Vertices[0].mPosition.z - simplex.m_Vertices[1].mPosition.z)));
      if ( v32 > (m_flMetric + m_flMetric) || (m_flMetric * 0.5) > v32 || v32 < 0.00000011920929 )
      {
        simplex.m_nVertexCount = 0;
LABEL_11:
        p_x = &v8->m_pVertexBuffer->x;
        v34 = v8->m_flScale;
        v35 = p_x[1] * v34;
        v36 = p_x[2] * v34;
        v37 = v34 * *p_x;
        v134 = v35;
        v135 = v36;
        v133 = v37;
        VectorTransform(&v133, xform1, &in1.x);
        v38 = &v7->m_pVertexBuffer->x;
        v39 = v7->m_flScale;
        v124 = in1.x;
        v40 = v38[1] * v39;
        v41 = v38[2] * v39;
        v42 = v39 * *v38;
        d2_olda = in1.y;
        out = in1.z;
        v134 = v40;
        v135 = v41;
        v133 = v42;
        VectorTransform(&v133, xform2, &in1.x);
        simplex.m_nVertexCount = 1;
        m_nVertexCount = 1;
        simplex.m_Vertices[0].mIndex1 = 0;
        simplex.m_Vertices[0].mPosition2 = in1;
        simplex.m_Vertices[0].mIndex2 = 0;
        simplex.m_Vertices[0].mPosition1.x = v124;
        simplex.m_Vertices[0].mPosition1.y = d2_olda;
        simplex.m_Vertices[0].mPosition1.z = out;
        simplex.m_Vertices[0].mPosition.x = in1.x - v124;
        simplex.m_Vertices[0].mPosition.y = in1.y - d2_olda;
        simplex.m_Vertices[0].mPosition.z = in1.z - out;
        simplex.m_flLambdas[0] = 0.0;
        goto LABEL_14;
      }
    }
  }
  if ( m_nVertexCount == 0 )
    goto LABEL_11;
LABEL_14:
  if ( nIterationCount <= 0 )
  {
LABEL_52:
    v80 = m_nVertexCount <= 2;
    if ( m_nVertexCount == 2 )
      goto LABEL_64;
LABEL_53:
    if ( v80 )
    {
      if ( m_nVertexCount == 1 )
      {
        v81 = simplex.m_flLambdas[0];
        v109 = simplex.m_Vertices[0].mPosition1.x * simplex.m_flLambdas[0];
        cache->m_flMetric = 0.0;
        v111 = v109;
        v110 = simplex.m_Vertices[0].mPosition1.y;
        cache->m_nVertexCount = 1;
        v112 = v110 * v81;
        v113 = simplex.m_Vertices[0].mPosition1.z * v81;
        v114 = simplex.m_Vertices[0].mPosition2.x * v81;
        v115 = simplex.m_Vertices[0].mPosition2.y * v81;
        v116 = simplex.m_Vertices[0].mPosition2.z * v81;
        goto LABEL_59;
      }
    }
    else
    {
      if ( m_nVertexCount == 3 )
      {
        v81 = simplex.m_flLambdas[0];
        v111 = ((simplex.m_Vertices[1].mPosition1.x * simplex.m_flLambdas[1])
              + (simplex.m_Vertices[0].mPosition1.x * simplex.m_flLambdas[0]))
             + (simplex.m_Vertices[2].mPosition1.x * simplex.m_flLambdas[2]);
        v112 = ((simplex.m_Vertices[1].mPosition1.y * simplex.m_flLambdas[1])
              + (simplex.m_Vertices[0].mPosition1.y * simplex.m_flLambdas[0]))
             + (simplex.m_Vertices[2].mPosition1.y * simplex.m_flLambdas[2]);
        v113 = ((simplex.m_Vertices[1].mPosition1.z * simplex.m_flLambdas[1])
              + (simplex.m_Vertices[0].mPosition1.z * simplex.m_flLambdas[0]))
             + (simplex.m_Vertices[2].mPosition1.z * simplex.m_flLambdas[2]);
        v114 = ((simplex.m_Vertices[1].mPosition2.x * simplex.m_flLambdas[1])
              + (simplex.m_Vertices[0].mPosition2.x * simplex.m_flLambdas[0]))
             + (simplex.m_Vertices[2].mPosition2.x * simplex.m_flLambdas[2]);
        v115 = ((simplex.m_Vertices[1].mPosition2.y * simplex.m_flLambdas[1])
              + (simplex.m_Vertices[0].mPosition2.y * simplex.m_flLambdas[0]))
             + (simplex.m_Vertices[2].mPosition2.y * simplex.m_flLambdas[2]);
        v116 = ((simplex.m_flLambdas[1] * simplex.m_Vertices[1].mPosition2.z)
              + (simplex.m_Vertices[0].mPosition2.z * simplex.m_flLambdas[0]))
             + (simplex.m_flLambdas[2] * simplex.m_Vertices[2].mPosition2.z);
        goto LABEL_87;
      }
      if ( m_nVertexCount == 4 )
      {
LABEL_56:
        v81 = simplex.m_flLambdas[0];
        v114 = ((simplex.m_Vertices[2].mPosition1.x * simplex.m_flLambdas[2])
              + ((simplex.m_Vertices[1].mPosition1.x * simplex.m_flLambdas[1])
               + (simplex.m_Vertices[0].mPosition1.x * simplex.m_flLambdas[0])))
             + (simplex.m_Vertices[3].mPosition1.x * simplex.m_flLambdas[3]);
        v111 = v114;
        v115 = ((simplex.m_Vertices[2].mPosition1.y * simplex.m_flLambdas[2])
              + ((simplex.m_Vertices[1].mPosition1.y * simplex.m_flLambdas[1])
               + (simplex.m_Vertices[0].mPosition1.y * simplex.m_flLambdas[0])))
             + (simplex.m_Vertices[3].mPosition1.y * simplex.m_flLambdas[3]);
        v112 = v115;
        v116 = ((simplex.m_flLambdas[2] * simplex.m_Vertices[2].mPosition1.z)
              + ((simplex.m_flLambdas[1] * simplex.m_Vertices[1].mPosition1.z)
               + (simplex.m_Vertices[0].mPosition1.z * simplex.m_flLambdas[0])))
             + (simplex.m_flLambdas[3] * simplex.m_Vertices[3].mPosition1.z);
        v113 = v116;
        goto LABEL_57;
      }
    }
    if ( m_nVertexCount != 3 )
    {
      if ( m_nVertexCount != 4 )
      {
        cache->m_flMetric = 0.0;
        cache->m_nVertexCount = m_nVertexCount;
        if ( m_nVertexCount > 0 )
        {
          v81 = simplex.m_flLambdas[0];
          goto LABEL_59;
        }
        goto LABEL_94;
      }
      v81 = simplex.m_flLambdas[0];
LABEL_57:
      v82 = (((simplex.m_Vertices[1].mPosition.x - simplex.m_Vertices[0].mPosition.x)
            * (((simplex.m_Vertices[3].mPosition.z - simplex.m_Vertices[0].mPosition.z)
              * (simplex.m_Vertices[2].mPosition.y - simplex.m_Vertices[0].mPosition.y))
             - ((simplex.m_Vertices[3].mPosition.y - simplex.m_Vertices[0].mPosition.y)
              * (simplex.m_Vertices[2].mPosition.z - simplex.m_Vertices[0].mPosition.z))))
           - ((simplex.m_Vertices[2].mPosition.x - simplex.m_Vertices[0].mPosition.x)
            * (((simplex.m_Vertices[3].mPosition.z - simplex.m_Vertices[0].mPosition.z)
              * (simplex.m_Vertices[1].mPosition.y - simplex.m_Vertices[0].mPosition.y))
             - ((simplex.m_Vertices[3].mPosition.y - simplex.m_Vertices[0].mPosition.y)
              * (simplex.m_Vertices[1].mPosition.z - simplex.m_Vertices[0].mPosition.z)))))
          + ((simplex.m_Vertices[3].mPosition.x - simplex.m_Vertices[0].mPosition.x)
           * (((simplex.m_Vertices[1].mPosition.y - simplex.m_Vertices[0].mPosition.y)
             * (simplex.m_Vertices[2].mPosition.z - simplex.m_Vertices[0].mPosition.z))
            - ((simplex.m_Vertices[1].mPosition.z - simplex.m_Vertices[0].mPosition.z)
             * (simplex.m_Vertices[2].mPosition.y - simplex.m_Vertices[0].mPosition.y))));
      goto LABEL_58;
    }
    v81 = simplex.m_flLambdas[0];
LABEL_87:
    v82 = fsqrt(
            (((((simplex.m_Vertices[1].mPosition.y - simplex.m_Vertices[0].mPosition.y)
              * (simplex.m_Vertices[2].mPosition.z - simplex.m_Vertices[0].mPosition.z))
             - ((simplex.m_Vertices[1].mPosition.z - simplex.m_Vertices[0].mPosition.z)
              * (simplex.m_Vertices[2].mPosition.y - simplex.m_Vertices[0].mPosition.y)))
            * (((simplex.m_Vertices[1].mPosition.y - simplex.m_Vertices[0].mPosition.y)
              * (simplex.m_Vertices[2].mPosition.z - simplex.m_Vertices[0].mPosition.z))
             - ((simplex.m_Vertices[1].mPosition.z - simplex.m_Vertices[0].mPosition.z)
              * (simplex.m_Vertices[2].mPosition.y - simplex.m_Vertices[0].mPosition.y))))
           + ((((simplex.m_Vertices[2].mPosition.x - simplex.m_Vertices[0].mPosition.x)
              * (simplex.m_Vertices[1].mPosition.z - simplex.m_Vertices[0].mPosition.z))
             - ((simplex.m_Vertices[1].mPosition.x - simplex.m_Vertices[0].mPosition.x)
              * (simplex.m_Vertices[2].mPosition.z - simplex.m_Vertices[0].mPosition.z)))
            * (((simplex.m_Vertices[2].mPosition.x - simplex.m_Vertices[0].mPosition.x)
              * (simplex.m_Vertices[1].mPosition.z - simplex.m_Vertices[0].mPosition.z))
             - ((simplex.m_Vertices[1].mPosition.x - simplex.m_Vertices[0].mPosition.x)
              * (simplex.m_Vertices[2].mPosition.z - simplex.m_Vertices[0].mPosition.z)))))
          + ((((simplex.m_Vertices[2].mPosition.y - simplex.m_Vertices[0].mPosition.y)
             * (simplex.m_Vertices[1].mPosition.x - simplex.m_Vertices[0].mPosition.x))
            - ((simplex.m_Vertices[2].mPosition.x - simplex.m_Vertices[0].mPosition.x)
             * (simplex.m_Vertices[1].mPosition.y - simplex.m_Vertices[0].mPosition.y)))
           * (((simplex.m_Vertices[2].mPosition.y - simplex.m_Vertices[0].mPosition.y)
             * (simplex.m_Vertices[1].mPosition.x - simplex.m_Vertices[0].mPosition.x))
            - ((simplex.m_Vertices[2].mPosition.x - simplex.m_Vertices[0].mPosition.x)
             * (simplex.m_Vertices[1].mPosition.y - simplex.m_Vertices[0].mPosition.y)))))
        * 0.5;
    goto LABEL_58;
  }
  nIteration = 0;
  d2_old = 3.4028235e38;
  do
  {
    simplex.m_Cache.m_nVertexCount = m_nVertexCount;
    if ( m_nVertexCount > 0 )
    {
      v43 = 0;
      v44 = simplex.m_Vertices;
      do
      {
        mIndex1 = v44->mIndex1;
        ++v44;
        simplex.m_Cache.m_Vertices1[v43] = mIndex1;
        simplex.m_Cache.m_Vertices2[v43++] = v44[-1].mIndex2;
      }
      while ( m_nVertexCount > v43 );
    }
    if ( m_nVertexCount == 2 )
    {
      v92 = simplex.m_Vertices[1].mPosition.x - simplex.m_Vertices[0].mPosition.x;
      v93 = vec3_origin.y;
      v94 = simplex.m_Vertices[1].mPosition.y - simplex.m_Vertices[0].mPosition.y;
      v95 = vec3_origin.z;
      v96 = simplex.m_Vertices[1].mPosition.z - simplex.m_Vertices[0].mPosition.z;
      v97 = -((((simplex.m_Vertices[0].mPosition.x - vec3_origin.x)
              * (simplex.m_Vertices[1].mPosition.x - simplex.m_Vertices[0].mPosition.x))
             + ((simplex.m_Vertices[0].mPosition.y - v93)
              * (simplex.m_Vertices[1].mPosition.y - simplex.m_Vertices[0].mPosition.y)))
            + ((simplex.m_Vertices[0].mPosition.z - v95)
             * (simplex.m_Vertices[1].mPosition.z - simplex.m_Vertices[0].mPosition.z)));
      if ( v97 <= 0.0 )
      {
        simplex.m_nVertexCount = 1;
        simplex.m_flLambdas[0] = 1.0;
      }
      else
      {
        v98 = (((simplex.m_Vertices[1].mPosition.x - vec3_origin.x) * v92)
             + ((simplex.m_Vertices[1].mPosition.y - v93) * v94))
            + ((simplex.m_Vertices[1].mPosition.z - v95) * v96);
        if ( v98 > 0.0 )
        {
          m_nVertexCount = 2;
          v99 = ((v92 * v92) + (v94 * v94)) + (v96 * v96);
          simplex.m_flLambdas[0] = v98 / v99;
          simplex.m_flLambdas[1] = v97 / v99;
LABEL_76:
          v46 = ((((simplex.m_Vertices[1].mPosition.x * simplex.m_flLambdas[1])
                 + (simplex.m_Vertices[0].mPosition.x * simplex.m_flLambdas[0]))
                * ((simplex.m_Vertices[1].mPosition.x * simplex.m_flLambdas[1])
                 + (simplex.m_Vertices[0].mPosition.x * simplex.m_flLambdas[0])))
               + (((simplex.m_Vertices[1].mPosition.y * simplex.m_flLambdas[1])
                 + (simplex.m_Vertices[0].mPosition.y * simplex.m_flLambdas[0]))
                * ((simplex.m_Vertices[1].mPosition.y * simplex.m_flLambdas[1])
                 + (simplex.m_Vertices[0].mPosition.y * simplex.m_flLambdas[0]))))
              + (((simplex.m_flLambdas[1] * simplex.m_Vertices[1].mPosition.z)
                + (simplex.m_flLambdas[0] * simplex.m_Vertices[0].mPosition.z))
               * ((simplex.m_flLambdas[1] * simplex.m_Vertices[1].mPosition.z)
                + (simplex.m_flLambdas[0] * simplex.m_Vertices[0].mPosition.z)));
          if ( v46 >= d2_old )
            goto LABEL_88;
          v100 = ((simplex.m_Vertices[1].mPosition.x - simplex.m_Vertices[0].mPosition.x)
                * -simplex.m_Vertices[0].mPosition.y)
               - ((simplex.m_Vertices[1].mPosition.y - simplex.m_Vertices[0].mPosition.y)
                * -simplex.m_Vertices[0].mPosition.x);
          v101 = (-simplex.m_Vertices[0].mPosition.x
                * (simplex.m_Vertices[1].mPosition.z - simplex.m_Vertices[0].mPosition.z))
               - ((simplex.m_Vertices[1].mPosition.x - simplex.m_Vertices[0].mPosition.x)
                * -simplex.m_Vertices[0].mPosition.z);
          v102 = (-simplex.m_Vertices[0].mPosition.z
                * (simplex.m_Vertices[1].mPosition.y - simplex.m_Vertices[0].mPosition.y))
               - (-simplex.m_Vertices[0].mPosition.y
                * (simplex.m_Vertices[1].mPosition.z - simplex.m_Vertices[0].mPosition.z));
          v48 = ((simplex.m_Vertices[1].mPosition.y - simplex.m_Vertices[0].mPosition.y) * v102)
              - ((simplex.m_Vertices[1].mPosition.x - simplex.m_Vertices[0].mPosition.x) * v101);
          v50 = (v101 * (simplex.m_Vertices[1].mPosition.z - simplex.m_Vertices[0].mPosition.z))
              - ((simplex.m_Vertices[1].mPosition.y - simplex.m_Vertices[0].mPosition.y) * v100);
          v49 = ((simplex.m_Vertices[1].mPosition.x - simplex.m_Vertices[0].mPosition.x) * v100)
              - (v102 * (simplex.m_Vertices[1].mPosition.z - simplex.m_Vertices[0].mPosition.z));
          goto LABEL_69;
        }
        simplex.m_nVertexCount = 1;
        simplex.m_Vertices[0] = simplex.m_Vertices[1];
        simplex.m_flLambdas[0] = 1.0;
      }
      m_nVertexCount = 1;
      goto LABEL_67;
    }
    if ( m_nVertexCount <= 2 )
    {
      if ( m_nVertexCount == 1 )
      {
        simplex.m_flLambdas[0] = 1.0;
        m_nVertexCount = 1;
        goto LABEL_67;
      }
    }
    else if ( m_nVertexCount == 3 )
    {
      CGJKSimplex::Solve3(&simplex);
      m_nVertexCount = simplex.m_nVertexCount;
    }
    else if ( m_nVertexCount == 4 )
    {
      CGJKSimplex::Solve4(&simplex);
      m_nVertexCount = simplex.m_nVertexCount;
    }
    if ( m_nVertexCount == 4 )
      goto LABEL_56;
    if ( m_nVertexCount == 2 )
      goto LABEL_76;
    if ( m_nVertexCount != 3 )
    {
      if ( m_nVertexCount != 1 )
      {
        v46 = 0.0;
        if ( d2_old <= 0.0 )
          goto LABEL_88;
        v47 = 0.0;
        v48 = 0.0;
        v49 = 0.0;
        v50 = 0.0;
        goto LABEL_30;
      }
LABEL_67:
      v46 = (((simplex.m_Vertices[0].mPosition.x * simplex.m_flLambdas[0])
            * (simplex.m_Vertices[0].mPosition.x * simplex.m_flLambdas[0]))
           + ((simplex.m_Vertices[0].mPosition.y * simplex.m_flLambdas[0])
            * (simplex.m_Vertices[0].mPosition.y * simplex.m_flLambdas[0])))
          + ((simplex.m_flLambdas[0] * simplex.m_Vertices[0].mPosition.z)
           * (simplex.m_flLambdas[0] * simplex.m_Vertices[0].mPosition.z));
      if ( v46 >= d2_old )
        goto LABEL_88;
      v48 = -simplex.m_Vertices[0].mPosition.z;
      v49 = -simplex.m_Vertices[0].mPosition.y;
      v50 = -simplex.m_Vertices[0].mPosition.x;
LABEL_69:
      v47 = ((v50 * v50) + (v49 * v49)) + (v48 * v48);
LABEL_30:
      d2_old = v46;
      goto LABEL_31;
    }
    v103 = (simplex.m_Vertices[2].mPosition.x * simplex.m_flLambdas[2])
         + ((simplex.m_Vertices[1].mPosition.x * simplex.m_flLambdas[1])
          + (simplex.m_Vertices[0].mPosition.x * simplex.m_flLambdas[0]));
    v104 = ((v103 * v103)
          + (((simplex.m_Vertices[2].mPosition.y * simplex.m_flLambdas[2])
            + ((simplex.m_Vertices[1].mPosition.y * simplex.m_flLambdas[1])
             + (simplex.m_Vertices[0].mPosition.y * simplex.m_flLambdas[0])))
           * ((simplex.m_Vertices[2].mPosition.y * simplex.m_flLambdas[2])
            + ((simplex.m_Vertices[1].mPosition.y * simplex.m_flLambdas[1])
             + (simplex.m_Vertices[0].mPosition.y * simplex.m_flLambdas[0])))))
         + (((simplex.m_flLambdas[2] * simplex.m_Vertices[2].mPosition.z)
           + ((simplex.m_flLambdas[1] * simplex.m_Vertices[1].mPosition.z)
            + (simplex.m_flLambdas[0] * simplex.m_Vertices[0].mPosition.z)))
          * ((simplex.m_flLambdas[2] * simplex.m_Vertices[2].mPosition.z)
           + ((simplex.m_flLambdas[1] * simplex.m_Vertices[1].mPosition.z)
            + (simplex.m_flLambdas[0] * simplex.m_Vertices[0].mPosition.z))));
    if ( v104 >= d2_old )
    {
LABEL_88:
      v105 = simplex.m_Vertices;
      simplex.m_nVertexCount = last_simplex.m_nVertexCount;
      v106 = last_simplex.m_Vertices;
      do
      {
        v107 = v106->m_nVertexCount;
        v106 = (v106 + 44);
        ++v105;
        v105[-1].mIndex1 = v107;
        v105[-1].mIndex2 = LODWORD(v106[-1].m_flLambdas[2]);
        v105[-1].mPosition1.x = v106[-1].m_flLambdas[3];
        v105[-1].mPosition1.y = v106[-1].m_Cache.m_flMetric;
        LODWORD(v105[-1].mPosition1.z) = v106[-1].m_Cache.m_nVertexCount;
        v105[-1].mPosition2.x = *v106[-1].m_Cache.m_Vertices1;
        v105[-1].mPosition2.y = *v106[-1].m_Cache.m_Vertices2;
        v105[-1].mPosition2.z = v106[-1].m_Cache.m_Lambdas[0];
        v105[-1].mPosition.x = v106[-1].m_Cache.m_Lambdas[1];
        v105[-1].mPosition.y = v106[-1].m_Cache.m_Lambdas[2];
        v105[-1].mPosition.z = v106[-1].m_Cache.m_Lambdas[3];
      }
      while ( v106 != last_simplex.m_flLambdas );
      m_nVertexCount = simplex.m_nVertexCount;
      *simplex.m_flLambdas = *last_simplex.m_flLambdas;
      simplex.m_Cache = last_simplex.m_Cache;
      goto LABEL_52;
    }
    v48 = ((simplex.m_Vertices[1].mPosition.x - simplex.m_Vertices[0].mPosition.x)
         * (simplex.m_Vertices[2].mPosition.y - simplex.m_Vertices[0].mPosition.y))
        - ((simplex.m_Vertices[1].mPosition.y - simplex.m_Vertices[0].mPosition.y)
         * (simplex.m_Vertices[2].mPosition.x - simplex.m_Vertices[0].mPosition.x));
    v49 = ((simplex.m_Vertices[2].mPosition.x - simplex.m_Vertices[0].mPosition.x)
         * (simplex.m_Vertices[1].mPosition.z - simplex.m_Vertices[0].mPosition.z))
        - ((simplex.m_Vertices[1].mPosition.x - simplex.m_Vertices[0].mPosition.x)
         * (simplex.m_Vertices[2].mPosition.z - simplex.m_Vertices[0].mPosition.z));
    v50 = ((simplex.m_Vertices[2].mPosition.z - simplex.m_Vertices[0].mPosition.z)
         * (simplex.m_Vertices[1].mPosition.y - simplex.m_Vertices[0].mPosition.y))
        - ((simplex.m_Vertices[2].mPosition.y - simplex.m_Vertices[0].mPosition.y)
         * (simplex.m_Vertices[1].mPosition.z - simplex.m_Vertices[0].mPosition.z));
    if ( (((simplex.m_Vertices[0].mPosition.x * v50) + (simplex.m_Vertices[0].mPosition.y * v49))
        + (simplex.m_Vertices[0].mPosition.z * v48)) >= 0.0 )
    {
      v48 = -v48;
      v49 = -v49;
      v50 = -v50;
    }
    d2_old = v104;
    v47 = ((v50 * v50) + (v49 * v49)) + (v48 * v48);
LABEL_31:
    v.x = v50;
    v.y = v49;
    v.z = v48;
    if ( v47 < 1.1754944e-35 )
      goto LABEL_52;
    in1.x = -v50;
    in1.y = -v49;
    in1.z = -v48;
    VectorIRotate(&in1.x, xform1, &v133);
    v51 = &v8->m_pVertexBuffer->x;
    v52 = ((*v51 * v133) + (v51[1] * v134)) + (v51[2] * v135);
    if ( v8->m_nVertexCount <= 1 )
    {
      v56 = 0;
      v54 = 0;
    }
    else
    {
      v53 = &v8->m_pVertexBuffer->x;
      v54 = 0;
      v55 = 1;
      do
      {
        if ( (((v53[3] * v133) + (v53[4] * v134)) + (v53[5] * v135)) > v52 )
        {
          v52 = ((v53[3] * v133) + (v53[4] * v134)) + (v53[5] * v135);
          v54 = v55;
        }
        ++v55;
        v53 += 3;
      }
      while ( v55 != v8->m_nVertexCount );
      v56 = 3LL * v54;
    }
    v57 = &v51[v56];
    v58 = v8->m_flScale;
    v59 = v57[1] * v58;
    v60 = v57[2] * v58;
    v61 = v58 * *v57;
    in1.y = v59;
    in1.z = v60;
    in1.x = v61;
    VectorTransform(&in1.x, xform1, &v133);
    v125 = v133;
    v123 = v134;
    v122 = v135;
    VectorIRotate(&v.x, xform2, &v133);
    v62 = &v7->m_pVertexBuffer->x;
    v63 = ((*v62 * v133) + (v62[1] * v134)) + (v62[2] * v135);
    if ( v7->m_nVertexCount <= 1 )
    {
      v67 = 0;
      v65 = 0;
    }
    else
    {
      v64 = &v7->m_pVertexBuffer->x;
      v65 = 0;
      v66 = 1;
      do
      {
        if ( (((v64[3] * v133) + (v64[4] * v134)) + (v64[5] * v135)) > v63 )
        {
          v63 = ((v64[3] * v133) + (v64[4] * v134)) + (v64[5] * v135);
          v65 = v66;
        }
        ++v66;
        v64 += 3;
      }
      while ( v66 != v7->m_nVertexCount );
      v67 = 3LL * v65;
    }
    v68 = &v62[v67];
    v69 = v7->m_flScale;
    v70 = v68[1] * v69;
    v71 = v68[2] * v69;
    v72 = v69 * *v68;
    in1.y = v70;
    in1.z = v71;
    in1.x = v72;
    VectorTransform(&in1.x, xform2, &v133);
    v73 = v133;
    v74 = last_simplex.m_Vertices;
    v75 = v134;
    v76 = v135;
    last_simplex.m_nVertexCount = simplex.m_nVertexCount;
    v77 = simplex.m_Vertices;
    do
    {
      v78 = v77->m_nVertexCount;
      v77 = (v77 + 44);
      ++v74;
      v74[-1].mIndex1 = v78;
      v74[-1].mIndex2 = LODWORD(v77[-1].m_flLambdas[2]);
      v74[-1].mPosition1.x = v77[-1].m_flLambdas[3];
      v74[-1].mPosition1.y = v77[-1].m_Cache.m_flMetric;
      LODWORD(v74[-1].mPosition1.z) = v77[-1].m_Cache.m_nVertexCount;
      v74[-1].mPosition2.x = *v77[-1].m_Cache.m_Vertices1;
      v74[-1].mPosition2.y = *v77[-1].m_Cache.m_Vertices2;
      v74[-1].mPosition2.z = v77[-1].m_Cache.m_Lambdas[0];
      v74[-1].mPosition.x = v77[-1].m_Cache.m_Lambdas[1];
      v74[-1].mPosition.y = v77[-1].m_Cache.m_Lambdas[2];
      v74[-1].mPosition.z = v77[-1].m_Cache.m_Lambdas[3];
    }
    while ( v77 != simplex.m_flLambdas );
    *last_simplex.m_flLambdas = *simplex.m_flLambdas;
    last_simplex.m_Cache = simplex.m_Cache;
    if ( simplex.m_Cache.m_nVertexCount > 0 )
    {
      v79 = 0;
      while ( v54 != simplex.m_Cache.m_Vertices1[v79] || v65 != simplex.m_Cache.m_Vertices2[v79] )
      {
        if ( simplex.m_Cache.m_nVertexCount <= ++v79 )
          goto LABEL_62;
      }
      m_nVertexCount = simplex.m_nVertexCount;
      goto LABEL_52;
    }
LABEL_62:
    ++nIteration;
    v86 = simplex.m_nVertexCount;
    simplex.m_Vertices[v86].mIndex1 = v54;
    simplex.m_Vertices[v86].mIndex2 = v65;
    v87 = (&simplex.m_nVertexCount + v86 * 44);
    v87[3] = v125;
    v87[4] = v123;
    v87[5] = v122;
    p_y = &simplex.m_Vertices[simplex.m_nVertexCount].mPosition1.y;
    p_y[2] = v73;
    v89 = simplex.m_nVertexCount;
    p_y[3] = v75;
    p_y[4] = v76;
    p_z = &simplex.m_Vertices[v89].mPosition2.z;
    p_z[1] = v73 - v125;
    v91 = simplex.m_nVertexCount;
    p_z[2] = v75 - v123;
    p_z[3] = v76 - v122;
    m_nVertexCount = v91 + 1;
    simplex.m_nVertexCount = v91 + 1;
  }
  while ( nIteration != nIterationCount );
  v80 = m_nVertexCount <= 2;
  if ( v91 != 1 )
    goto LABEL_53;
LABEL_64:
  v81 = simplex.m_flLambdas[0];
  v111 = (simplex.m_Vertices[0].mPosition1.x * simplex.m_flLambdas[0])
       + (simplex.m_Vertices[1].mPosition1.x * simplex.m_flLambdas[1]);
  v112 = (simplex.m_Vertices[0].mPosition1.y * simplex.m_flLambdas[0])
       + (simplex.m_Vertices[1].mPosition1.y * simplex.m_flLambdas[1]);
  v113 = (simplex.m_Vertices[0].mPosition1.z * simplex.m_flLambdas[0])
       + (simplex.m_Vertices[1].mPosition1.z * simplex.m_flLambdas[1]);
  v114 = (simplex.m_Vertices[0].mPosition2.x * simplex.m_flLambdas[0])
       + (simplex.m_Vertices[1].mPosition2.x * simplex.m_flLambdas[1]);
  v115 = (simplex.m_Vertices[0].mPosition2.y * simplex.m_flLambdas[0])
       + (simplex.m_Vertices[1].mPosition2.y * simplex.m_flLambdas[1]);
  v116 = (simplex.m_Vertices[0].mPosition2.z * simplex.m_flLambdas[0])
       + (simplex.m_flLambdas[1] * simplex.m_Vertices[1].mPosition2.z);
  v82 = fsqrt(
          (((simplex.m_Vertices[0].mPosition.x - simplex.m_Vertices[1].mPosition.x)
          * (simplex.m_Vertices[0].mPosition.x - simplex.m_Vertices[1].mPosition.x))
         + ((simplex.m_Vertices[0].mPosition.y - simplex.m_Vertices[1].mPosition.y)
          * (simplex.m_Vertices[0].mPosition.y - simplex.m_Vertices[1].mPosition.y)))
        + ((simplex.m_Vertices[0].mPosition.z - simplex.m_Vertices[1].mPosition.z)
         * (simplex.m_Vertices[0].mPosition.z - simplex.m_Vertices[1].mPosition.z)));
LABEL_58:
  cache->m_flMetric = v82;
  cache->m_nVertexCount = m_nVertexCount;
LABEL_59:
  v83 = 0;
  p_simplex = &simplex;
  while ( 1 )
  {
    v85 = p_simplex->m_Vertices[0].mIndex1;
    p_simplex = (p_simplex + 44);
    cache->m_Vertices1[v83] = v85;
    cache->m_Vertices2[v83] = LODWORD(p_simplex[-1].m_flLambdas[3]);
    cache->m_Lambdas[v83++] = v81;
    if ( m_nVertexCount <= v83 )
      break;
    v81 = simplex.m_flLambdas[v83];
  }
LABEL_94:
  retstr->m_vPoint1.x = v111;
  retstr->m_vPoint1.y = v112;
  retstr->m_vPoint1.z = v113;
  retstr->m_vPoint2.x = v114;
  retstr->m_vPoint2.y = v115;
  retstr->m_vPoint2.z = v116;
  retstr->m_flDistance = fsqrt(
                           (((v111 - v114) * (v111 - v114)) + ((v112 - v115) * (v112 - v115)))
                         + ((v113 - v116) * (v113 - v116)));
  return retstr;
}


