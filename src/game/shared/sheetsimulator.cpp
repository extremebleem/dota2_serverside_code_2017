
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSheetSimulator::CSheetSimulator  (line 29, @0x000000000238f7c0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// callers: CIterativeSheetSimulator::CIterativeSheetSimulator
void __fastcall CSheetSimulator::CSheetSimulator(
        CSheetSimulator *const this,
        TraceLineFunc_t traceline,
        TraceHullFunc_t traceHull)
{
  this->m_Springs.m_Size = 0;
  this->m_pFixedPoint = 0;
  this->m_ControlPoints = 0;
  this->m_Springs.m_Memory.m_pMemory = 0;
  this->m_Springs.m_Memory.m_nAllocationCount = 0;
  this->m_Springs.m_Memory.m_nGrowSize = 0;
  this->m_Gravity.m_Size = 0;
  this->m_Gravity.m_Memory.m_pMemory = 0;
  this->m_Gravity.m_Memory.m_nAllocationCount = 0;
  this->m_Gravity.m_Memory.m_nGrowSize = 0;
  this->m_TraceLine = traceline;
  this->m_TraceHull = traceHull;
}


// CSheetSimulator::~CSheetSimulator  (line 36, @0x000000000238f820, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: operator delete [], CUtlMemory<int, int>::Purge, CUtlMemory<CSheetSimulator::Spring_t, int>::Purge
void __fastcall CSheetSimulator::~CSheetSimulator(CSheetSimulator *const this)
{
  Vector *m_pFixedPoint; // rdi
  Vector *m_ControlPoints; // rdi
  cplane_t *m_pCollisionPlanes; // rdi
  bool *m_pValidCollisionPlane; // rdi
  CSheetSimulator::Particle_t *m_Particle; // rdi
  bool v7; // zf

  m_pFixedPoint = this->m_pFixedPoint;
  if ( m_pFixedPoint != 0 )
  {
    operator delete[](m_pFixedPoint);
    m_ControlPoints = this->m_ControlPoints;
    if ( m_ControlPoints != 0 )
      operator delete[](m_ControlPoints);
    m_pCollisionPlanes = this->m_pCollisionPlanes;
    if ( m_pCollisionPlanes != 0 )
      operator delete[](m_pCollisionPlanes);
    m_pValidCollisionPlane = this->m_pValidCollisionPlane;
    if ( m_pValidCollisionPlane != 0 )
      operator delete[](m_pValidCollisionPlane);
  }
  m_Particle = this->m_Particle;
  if ( m_Particle != 0 )
    operator delete[](m_Particle);
  v7 = (this->m_Gravity.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Gravity.m_Size = 0;
  if ( !v7
    || (CUtlMemory<int,int>::Purge(&this->m_Gravity.m_Memory), (this->m_Gravity.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v7 = (this->m_Springs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_Springs.m_Size = 0;
    if ( !v7 )
      return;
  }
  else
  {
    CUtlMemory<int,int>::Purge(&this->m_Gravity.m_Memory);
    v7 = (this->m_Springs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_Springs.m_Size = 0;
    if ( !v7 )
      return;
  }
  CUtlMemory<CSheetSimulator::Spring_t,int>::Purge(&this->m_Springs.m_Memory);
  if ( (this->m_Springs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CSheetSimulator::Spring_t,int>::Purge(&this->m_Springs.m_Memory);
}


// CSheetSimulator::Init  (line 52, @0x000000000238f8f0, libserver.so)  // inlines: Init, NumParticles, operator=
// calls: operator new []
void __fastcall CSheetSimulator::Init(CSheetSimulator *const this, int w, int h, int fixedPointCount)
{
  size_t v4; // r12
  unsigned __int64 v6; // rdx
  size_t v7; // rdi
  CSheetSimulator::Particle_t *v8; // rax
  size_t v9; // rdi
  Vector *v10; // rax
  int v11; // ecx
  int v12; // edx
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  __int64 v16; // rax
  CSheetSimulator::Particle_t *v17; // rdx
  __int64 v18; // rdx
  vec_t *v19; // rdx

  v4 = fixedPointCount;
  this->m_VerticalCount = h;
  this->m_ControlPointOffset.x = 0.0;
  this->m_ControlPointOffset.y = 0.0;
  v6 = w * h;
  this->m_HorizontalCount = w;
  this->m_ControlPointOffset.z = 0.0;
  v7 = -1;
  if ( v6 <= 0x270000000000000LL )
    v7 = 52 * v6;
  v8 = operator new[](v7);
  this->m_FixedPointCount = v4;
  this->m_Particle = v8;
  if ( v4 != 0 )
  {
    if ( v4 > 0xAA0000000000000LL )
    {
      this->m_pFixedPoint = operator new[](0xFFFFFFFFFFFFFFFFLL);
      v10 = operator new[](0xFFFFFFFFFFFFFFFFLL);
      v9 = -1;
      this->m_ControlPoints = v10;
    }
    else
    {
      this->m_pFixedPoint = operator new[](12 * v4);
      this->m_ControlPoints = operator new[](12 * v4);
      v9 = 20 * v4;
    }
    this->m_pCollisionPlanes = operator new[](v9);
    this->m_pValidCollisionPlane = operator new[](v4);
  }
  v11 = 0;
  v12 = this->m_VerticalCount * this->m_HorizontalCount;
  x = vec3_origin.x;
  y = vec3_origin.y;
  z = vec3_origin.z;
  v16 = 0;
  this->m_Origin.x = vec3_origin.x;
  this->m_Origin.y = y;
  this->m_Origin.z = z;
  if ( v12 > 0 )
  {
    do
    {
      ++v11;
      this->m_Particle[v16].m_Mass = 1.0;
      this->m_Particle[v16].m_Collided = 0;
      v17 = &this->m_Particle[v16];
      v17->m_Position.x = x;
      v17->m_Position.y = y;
      v17->m_Position.z = z;
      v18 = v16 * 52;
      ++v16;
      v19 = (&this->m_Particle->m_Mass + v18);
      v19[4] = x;
      v19[5] = y;
      v19[6] = z;
    }
    while ( v11 < this->m_VerticalCount * this->m_HorizontalCount );
  }
}


// CSheetSimulator::AddSpring  (line 83, @0x00000000023a40e0, libserver.so)  // inlines: AddToTail, GrowMemory, operator[]
// calls: CUtlMemory<CSheetSimulator::Spring_t, int>::Grow
void __fastcall CSheetSimulator::AddSpring(CSheetSimulator *const this, int p1, int p2, float restLength)
{
  __int64 m_Size; // r12
  int v7; // eax
  CSheetSimulator::Spring_t *m_pMemory; // rcx
  __int64 v9; // rax
  float restLengtha; // [rsp+8h] [rbp-28h]
  int p2a; // [rsp+Ch] [rbp-24h]

  m_Size = this->m_Springs.m_Size;
  v7 = this->m_Springs.m_Size;
  if ( m_Size == this->m_Springs.m_Memory.m_nAllocationCount )
  {
    restLengtha = restLength;
    p2a = p2;
    CUtlMemory<CSheetSimulator::Spring_t,int>::Grow(&this->m_Springs.m_Memory, 1);
    v7 = this->m_Springs.m_Size;
    restLength = restLengtha;
    p2 = p2a;
  }
  m_pMemory = this->m_Springs.m_Memory.m_pMemory;
  this->m_Springs.m_Size = v7 + 1;
  v9 = m_Size;
  m_pMemory[v9].m_Particle1 = p1;
  this->m_Springs.m_Memory.m_pMemory[v9].m_Particle2 = p2;
  this->m_Springs.m_Memory.m_pMemory[v9].m_RestLength = restLength;
}


// CSheetSimulator::AddFixedPointSpring  (line 91, @0x00000000023a4050, libserver.so)  // inlines: AddToTail, GrowMemory, operator[]
// calls: CUtlMemory<CSheetSimulator::Spring_t, int>::Grow
void __fastcall CSheetSimulator::AddFixedPointSpring(
        CSheetSimulator *const this,
        int fixedPoint,
        int p,
        float restLength)
{
  __int64 m_Size; // r12
  int v7; // eax
  CSheetSimulator::Spring_t *m_pMemory; // rcx
  __int64 v9; // rax
  float restLengtha; // [rsp+8h] [rbp-28h]
  int pa; // [rsp+Ch] [rbp-24h]

  m_Size = this->m_Springs.m_Size;
  v7 = this->m_Springs.m_Size;
  if ( m_Size == this->m_Springs.m_Memory.m_nAllocationCount )
  {
    restLengtha = restLength;
    pa = p;
    CUtlMemory<CSheetSimulator::Spring_t,int>::Grow(&this->m_Springs.m_Memory, 1);
    v7 = this->m_Springs.m_Size;
    restLength = restLengtha;
    p = pa;
  }
  m_pMemory = this->m_Springs.m_Memory.m_pMemory;
  this->m_Springs.m_Size = v7 + 1;
  v9 = m_Size;
  m_pMemory[v9].m_Particle1 = p;
  this->m_Springs.m_Memory.m_pMemory[v9].m_Particle2 = ~fixedPoint;
  this->m_Springs.m_Memory.m_pMemory[v9].m_RestLength = restLength;
}


// CSheetSimulator::SetGravityConstant  (line 104, @0x000000000238faa0, libserver.so)
void __fastcall CSheetSimulator::SetGravityConstant(CSheetSimulator *const this, float a2, float g)
{
  this->m_GravityConstant = a2;
}


// CSheetSimulator::AddGravityForce  (line 109, @0x00000000023a4160, libserver.so)  // inlines: AddToTail, CopyConstruct<int>, Element, GrowMemory, operator[]
// calls: CUtlMemory<int, int>::Grow
void __fastcall CSheetSimulator::AddGravityForce(CSheetSimulator *const this, int particle)
{
  __int64 m_Size; // r12
  int v5; // eax
  int *v6; // rax

  m_Size = this->m_Gravity.m_Size;
  v5 = this->m_Gravity.m_Size;
  if ( m_Size == this->m_Gravity.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<int,int>::Grow(&this->m_Gravity.m_Memory, 1);
    v5 = this->m_Gravity.m_Size;
  }
  this->m_Gravity.m_Size = v5 + 1;
  v6 = &this->m_Gravity.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
    *v6 = particle;
}


// CSheetSimulator::SetPointSpringConstant  (line 118, @0x000000000238fab0, libserver.so)
void __fastcall CSheetSimulator::SetPointSpringConstant(CSheetSimulator *const this, float a2, float constant)
{
  this->m_PointSpringConstant = a2;
}


// CSheetSimulator::SetFixedSpringConstant  (line 123, @0x000000000238fac0, libserver.so)
void __fastcall CSheetSimulator::SetFixedSpringConstant(CSheetSimulator *const this, float a2, float constant)
{
  this->m_FixedSpringConstant = a2;
}


// CSheetSimulator::SetViscousDrag  (line 128, @0x000000000238fad0, libserver.so)
void __fastcall CSheetSimulator::SetViscousDrag(CSheetSimulator *const this, float a2, float drag)
{
  this->m_ViscousDrag = a2;
}


// CSheetSimulator::SetSpringDampConstant  (line 133, @0x000000000238fae0, libserver.so)
void __fastcall CSheetSimulator::SetSpringDampConstant(CSheetSimulator *const this, float a2, float damp)
{
  this->m_DampConstant = a2;
}


// CSheetSimulator::SetCollisionGroup  (line 143, @0x000000000238faf0, libserver.so)
void __fastcall CSheetSimulator::SetCollisionGroup(CSheetSimulator *const this, int group)
{
  this->m_CollisionGroup = group;
}


// CSheetSimulator::SetBoundingBox  (line 153, @0x000000000238fb00, libserver.so)  // inlines: operator=
void __fastcall CSheetSimulator::SetBoundingBox(CSheetSimulator *const this, Vector *const mins, Vector *const maxs)
{
  this->m_FrustumBoxMin = *mins;
  this->m_FrustumBoxMax = *maxs;
}


// CSheetSimulator::ComputeBounds  (line 163, @0x000000000238fb60, libserver.so)  // inlines: NumParticles, VectorCopy, VectorMax, VectorMin, fpmax, fpmin, operator-=
void __fastcall CSheetSimulator::ComputeBounds(CSheetSimulator *const this, Vector *const mins, Vector *const maxs)
{
  int v3; // r8d
  CSheetSimulator::Particle_t *m_Particle; // rax
  vec_t z; // xmm0_4
  __int64 v6; // rax
  CSheetSimulator::Particle_t *v7; // rcx
  vec_t v8; // xmm0_4
  __int64 v9; // rcx
  float *v10; // rcx

  v3 = 1;
  *mins = this->m_Particle->m_Position;
  m_Particle = this->m_Particle;
  maxs->x = m_Particle->m_Position.x;
  maxs->y = m_Particle->m_Position.y;
  z = m_Particle->m_Position.z;
  v6 = 1;
  for ( maxs->z = z; v3 < this->m_VerticalCount * this->m_HorizontalCount; maxs->z = fmaxf(maxs->z, v10[3]) )
  {
    ++v3;
    v7 = &this->m_Particle[v6];
    mins->x = fminf(mins->x, v7->m_Position.x);
    mins->y = fminf(mins->y, v7->m_Position.y);
    v8 = fminf(mins->z, v7->m_Position.z);
    v9 = v6 * 52;
    ++v6;
    mins->z = v8;
    v10 = (&this->m_Particle->m_Mass + v9);
    maxs->x = fmaxf(maxs->x, v10[1]);
    maxs->y = fmaxf(maxs->y, v10[2]);
  }
  mins->x = mins->x - this->m_Origin.x;
  mins->y = mins->y - this->m_Origin.y;
  mins->z = mins->z - this->m_Origin.z;
  maxs->x = maxs->x - this->m_Origin.x;
  maxs->y = maxs->y - this->m_Origin.y;
  maxs->z = maxs->z - this->m_Origin.z;
}


// CSheetSimulator::SetPosition  (line 181, @0x000000000238fed0, libserver.so)  // inlines: DistToSqr, LengthSqr, NumParticles, operator=
// calls: CSheetSimulator::ComputeControlPoints
void __fastcall CSheetSimulator::SetPosition(
        CSheetSimulator *const this,
        const Vector *const origin,
        const QAngle *const angles)
{
  float x; // xmm0_4
  __int64 v4; // rax
  int v5; // r8d
  vec_t v6; // xmm3_4
  vec_t y; // xmm2_4
  vec_t z; // xmm1_4
  CSheetSimulator::Particle_t *v9; // rcx
  __int64 v10; // rcx
  vec_t *v11; // rcx

  x = origin->x;
  if ( ((((this->m_Origin.x - x) * (this->m_Origin.x - x))
       + ((this->m_Origin.y - origin->y) * (this->m_Origin.y - origin->y)))
      + ((this->m_Origin.z - origin->z) * (this->m_Origin.z - origin->z))) > 1000.0
    && this->m_VerticalCount * this->m_HorizontalCount > 0 )
  {
    v4 = 0;
    v5 = 0;
    v6 = vec3_origin.x;
    y = vec3_origin.y;
    z = vec3_origin.z;
    do
    {
      ++v5;
      v9 = &this->m_Particle[v4];
      v9->m_Position.x = x;
      v9->m_Position.y = origin->y;
      v9->m_Position.z = origin->z;
      v10 = v4 * 52;
      ++v4;
      v11 = (&this->m_Particle->m_Mass + v10);
      v11[4] = v6;
      v11[5] = y;
      v11[6] = z;
      x = origin->x;
    }
    while ( v5 < this->m_VerticalCount * this->m_HorizontalCount );
  }
  this->m_Origin.x = x;
  this->m_Origin.y = origin->y;
  this->m_Origin.z = origin->z;
  this->m_Angles = *angles;
  CSheetSimulator::ComputeControlPoints(this);
}


// CSheetSimulator::NumHorizontal  (line 202, @0x000000000238fcb0, libserver.so)
int __fastcall CSheetSimulator::NumHorizontal(const CSheetSimulator *const this)
{
  return this->m_HorizontalCount;
}


// CSheetSimulator::NumVertical  (line 207, @0x000000000238fcc0, libserver.so)
int __fastcall CSheetSimulator::NumVertical(const CSheetSimulator *const this)
{
  return this->m_VerticalCount;
}


// CSheetSimulator::PointCount  (line 212, @0x000000000238fcd0, libserver.so)
int __fastcall CSheetSimulator::PointCount(const CSheetSimulator *const this)
{
  return this->m_VerticalCount * this->m_HorizontalCount;
}


// CSheetSimulator::GetPoint  (line 217, @0x000000000238fce0, libserver.so)
const Vector *__fastcall CSheetSimulator::GetPoint(const CSheetSimulator *const this, int x, int y)
{
  return &this->m_Particle[this->m_HorizontalCount * y + x].m_Position;
}


// CSheetSimulator::GetPoint  (line 222, @0x000000000238fd00, libserver.so)
const Vector *__fastcall CSheetSimulator::GetPoint(const CSheetSimulator *const this, int i)
{
  return &this->m_Particle[i].m_Position;
}


// CSheetSimulator::GetFixedPoint  (line 228, @0x000000000238fd20, libserver.so)
Vector *__fastcall CSheetSimulator::GetFixedPoint(CSheetSimulator *const this, int i)
{
  return &this->m_pFixedPoint[i];
}


// CSheetSimulator::SetControlPointOffset  (line 238, @0x000000000238fd40, libserver.so)  // inlines: VectorCopy
void __fastcall CSheetSimulator::SetControlPointOffset(CSheetSimulator *const this, const Vector *const offset)
{
  this->m_ControlPointOffset = *offset;
}


// CSheetSimulator::ComputeControlPoints  (line 247, @0x000000000238fd70, libserver.so)  // inlines: VectorAdd, VectorMultiply, operator*, operator+=
// calls: AngleVectors
// callers: CSheetSimulator::SetPosition, CSheetSimulator::Simulate
void __fastcall CSheetSimulator::ComputeControlPoints(CSheetSimulator *const this)
{
  __int64 v2; // rax
  int i; // ecx
  Vector *v4; // rdx
  float y; // xmm1_4
  float x; // xmm2_4
  Vector *v7; // rdx
  float v8; // xmm1_4
  vec_t v9; // xmm0_4
  vec_t v10; // xmm2_4
  float z; // xmm2_4
  Vector *v12; // rdx
  float v13; // xmm1_4
  vec_t v14; // xmm0_4
  vec_t v15; // xmm2_4
  float v16; // xmm2_4
  __int64 v17; // rdx
  float *v18; // rdx
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm2_4
  Vector forward; // [rsp+0h] [rbp-40h] BYREF
  Vector right; // [rsp+10h] [rbp-30h] BYREF
  Vector up; // [rsp+20h] [rbp-20h] BYREF

  AngleVectors(&this->m_Angles, &forward, &right, &up);
  v2 = 0;
  for ( i = 0; this->m_FixedPointCount > i; *v18 = v21 )
  {
    ++i;
    v4 = &this->m_ControlPoints[v2];
    v4->x = this->m_Origin.x + this->m_ControlPointOffset.x;
    v4->y = this->m_Origin.y + this->m_ControlPointOffset.y;
    y = right.y;
    v4->z = this->m_Origin.z + this->m_ControlPointOffset.z;
    x = this->m_pFixedPoint[v2].x;
    v7 = &this->m_ControlPoints[v2];
    v8 = y * x;
    v9 = (right.z * x) + v7->z;
    v10 = (x * right.x) + v7->x;
    v7->y = v8 + v7->y;
    v7->z = v9;
    v7->x = v10;
    z = this->m_pFixedPoint[v2].z;
    v12 = &this->m_ControlPoints[v2];
    v13 = up.y * z;
    v14 = (up.z * z) + v12->z;
    v15 = (z * up.x) + v12->x;
    v12->y = v13 + v12->y;
    v12->x = v15;
    v12->z = v14;
    v16 = this->m_pFixedPoint[v2].y;
    v17 = v2 * 12;
    ++v2;
    v18 = (&this->m_ControlPoints->x + v17);
    v19 = (forward.y * v16) + v18[1];
    v20 = (forward.z * v16) + v18[2];
    v21 = (v16 * forward.x) + *v18;
    v18[1] = v19;
    v18[2] = v20;
  }
}


// CSheetSimulator::ClearForces  (line 266, @0x000000000238ffe0, libserver.so)  // inlines: NumParticles, operator=
// callers: CSheetSimulator::EulerStep
void __fastcall CSheetSimulator::ClearForces(CSheetSimulator *const this)
{
  __int64 v1; // rcx
  int v2; // edx
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  __int64 v6; // rax
  vec_t *v7; // rax

  if ( this->m_VerticalCount * this->m_HorizontalCount > 0 )
  {
    v1 = 0;
    v2 = 0;
    x = vec3_origin.x;
    y = vec3_origin.y;
    z = vec3_origin.z;
    do
    {
      v6 = v1;
      ++v2;
      v1 += 52;
      v7 = (&this->m_Particle->m_Mass + v6);
      v7[7] = x;
      v7[8] = y;
      v7[9] = z;
    }
    while ( v2 < this->m_VerticalCount * this->m_HorizontalCount );
  }
}


// CSheetSimulator::ComputeForces  (line 279, @0x0000000002390040, libserver.so)  // inlines: DotProduct, FastSqrt, Length, NumParticles, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+=, operator-, operator-=, operator/=, operator=, operator[]
// callers: CSheetSimulator::EulerStep
void __fastcall CSheetSimulator::ComputeForces(CSheetSimulator *const this)
{
  __int64 v1; // rcx
  int v2; // r8d
  CSheetSimulator::Spring_t *v3; // rsi
  float m_PointSpringConstant; // xmm11_4
  __int64 m_Particle2; // rax
  __int64 m_Particle1; // r10
  CSheetSimulator::Particle_t *m_Particle; // r9
  float *v8; // rdx
  float *v9; // rax
  float v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm6_4
  float v14; // xmm5_4
  float v15; // xmm4_4
  float v16; // xmm0_4
  float *v17; // rax
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm3_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  __int64 v25; // rax
  CSheetSimulator::Particle_t *v26; // rax
  __int64 v27; // rcx
  int i; // edx
  __int64 v29; // rax
  __int64 v30; // rdx
  int j; // ecx
  float x; // xmm1_4
  float y; // xmm2_4
  float z; // xmm3_4
  cplane_t *v35; // rsi
  float v36; // xmm5_4
  float v37; // xmm4_4
  float v38; // xmm0_4
  float m_ViscousDrag; // xmm0_4
  float v40; // xmm4_4
  vec_t v41; // xmm1_4
  __int64 m_CollisionPlane; // rsi
  Vector *v43; // rdx
  float *p_m_Mass; // rax
  CSheetSimulator::Particle_t *v45; // rax

  if ( this->m_Springs.m_Size > 0 )
  {
    v1 = 0;
    v2 = 0;
    do
    {
      while ( 1 )
      {
        v3 = &this->m_Springs.m_Memory.m_pMemory[v1];
        m_PointSpringConstant = this->m_PointSpringConstant;
        m_Particle2 = v3->m_Particle2;
        m_Particle1 = v3->m_Particle1;
        if ( m_Particle2 < 0 )
        {
          m_PointSpringConstant = this->m_FixedSpringConstant;
          v43 = &this->m_ControlPoints[~m_Particle2];
          m_Particle = this->m_Particle;
          p_m_Mass = &m_Particle[m_Particle1].m_Mass;
          v10 = p_m_Mass[1] - v43->x;
          v11 = p_m_Mass[2] - v43->y;
          v12 = p_m_Mass[3] - v43->z;
          v13 = p_m_Mass[4];
          v14 = p_m_Mass[5];
          v15 = p_m_Mass[6];
        }
        else
        {
          m_Particle = this->m_Particle;
          v8 = &m_Particle[m_Particle1].m_Mass;
          v9 = &m_Particle[m_Particle2].m_Mass;
          v10 = v8[1] - v9[1];
          v11 = v8[2] - v9[2];
          v12 = v8[3] - v9[3];
          v13 = v8[4] - v9[4];
          v14 = v8[5] - v9[5];
          v15 = v8[6] - v9[6];
        }
        v16 = fsqrt(((v10 * v10) + (v11 * v11)) + (v12 * v12));
        if ( v16 >= 0.000001 )
        {
          v17 = &m_Particle[m_Particle1].m_Mass;
          v18 = v10 * (1.0 / v16);
          v19 = v11 * (1.0 / v16);
          v20 = v12 * (1.0 / v16);
          v21 = -(((v16 - v3->m_RestLength) * m_PointSpringConstant)
                + ((((v13 * v18) + (v14 * v19)) + (v15 * v20)) * this->m_DampConstant));
          v22 = v18 * v21;
          v23 = v19 * v21;
          v24 = v20 * v21;
          v17[7] = v17[7] + v22;
          v17[8] = v17[8] + v23;
          v17[9] = v17[9] + v24;
          v25 = this->m_Springs.m_Memory.m_pMemory[v1].m_Particle2;
          if ( v25 >= 0 )
            break;
        }
        ++v2;
        ++v1;
        if ( this->m_Springs.m_Size <= v2 )
          goto LABEL_9;
      }
      ++v2;
      ++v1;
      v26 = &this->m_Particle[v25];
      v26->m_Force.x = v26->m_Force.x - v22;
      v26->m_Force.y = v26->m_Force.y - v23;
      v26->m_Force.z = v26->m_Force.z - v24;
    }
    while ( this->m_Springs.m_Size > v2 );
  }
LABEL_9:
  v27 = 0;
  for ( i = 0;
        this->m_Gravity.m_Size > i;
        this->m_Particle[v29].m_Force.z = this->m_Particle[v29].m_Force.z
                                        - (this->m_Particle[v29].m_Mass * this->m_GravityConstant) )
  {
    ++i;
    v29 = this->m_Gravity.m_Memory.m_pMemory[v27++];
  }
  v30 = 0;
  for ( j = 0; j < this->m_VerticalCount * this->m_HorizontalCount; v45->m_Force.x = v41 )
  {
    v45 = &this->m_Particle[v30];
    m_CollisionPlane = v45->m_CollisionPlane;
    if ( m_CollisionPlane >= 0 )
    {
      x = v45->m_Force.x;
      y = v45->m_Force.y;
      z = v45->m_Force.z;
      v35 = &this->m_pCollisionPlanes[m_CollisionPlane];
      v36 = v35->normal.y;
      v37 = v35->normal.z;
      v38 = ((x * v35->normal.x) + (y * v36)) + (z * v37);
      if ( v38 < 0.0 )
      {
        v45->m_Force.x = x - (v35->normal.x * v38);
        v45->m_Force.y = y - (v36 * v38);
        v45->m_Force.z = z - (v38 * v37);
        v45 = &this->m_Particle[v30];
        x = v45->m_Force.x;
        y = v45->m_Force.y;
        z = v45->m_Force.z;
      }
    }
    else
    {
      x = v45->m_Force.x;
      y = v45->m_Force.y;
      z = v45->m_Force.z;
    }
    m_ViscousDrag = this->m_ViscousDrag;
    ++j;
    ++v30;
    v40 = v45->m_Velocity.z * m_ViscousDrag;
    v41 = x - (m_ViscousDrag * v45->m_Velocity.x);
    v45->m_Force.y = y - (v45->m_Velocity.y * m_ViscousDrag);
    v45->m_Force.z = z - v40;
  }
}


// CSheetSimulator::TestVertAgainstPlane  (line 359, @0x0000000002390410, libserver.so)  // inlines: Init, LengthSqr, Ray_t, VectorAligned, VectorClear, VectorCopy, VectorSubtract
// calls: IntersectRayWithPlane
// callers: CSheetSimulator::DetermineBestCollisionPlane
void __fastcall CSheetSimulator::TestVertAgainstPlane(CSheetSimulator *const this, int vert, int plane, bool bFarTest)
{
  cplane_t *m_pCollisionPlanes; // rax
  float x; // xmm6_4
  float y; // xmm5_4
  float z; // xmm4_4
  const cplane_t *v9; // r8
  __int64 v10; // r12
  CSheetSimulator::Particle_t *v11; // rax
  float v12; // xmm0_4
  float v13; // xmm3_4
  float v14; // xmm0_4
  CSheetSimulator::Particle_t *v15; // rax
  Ray_t ray; // [rsp+10h] [rbp-60h] BYREF

  if ( this->m_pValidCollisionPlane[plane] )
  {
    m_pCollisionPlanes = this->m_pCollisionPlanes;
    ray.m_Start.w = 0.0;
    x = this->m_Origin.x;
    memset(&ray.m_Delta.w, 0, 40);
    y = this->m_Origin.y;
    z = this->m_Origin.z;
    v9 = &m_pCollisionPlanes[plane];
    v10 = vert;
    v11 = &this->m_Particle[v10];
    ray.m_Start.x = x;
    v12 = v11->m_Position.x;
    ray.m_Start.y = y;
    ray.m_Delta.x = v12 - x;
    v13 = v11->m_Position.y;
    ray.m_Start.z = z;
    ray.m_Delta.y = v13 - y;
    ray.m_Delta.z = v11->m_Position.z - z;
    ray.m_IsRay = 1;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                   + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
    v14 = IntersectRayWithPlane(&ray, v9);
    if ( !bFarTest || v14 <= 1.0 )
    {
      v15 = &this->m_Particle[v10];
      if ( v15->m_CollisionDist > v14 && v14 >= 0.0 )
      {
        v15->m_CollisionDist = v14;
        this->m_Particle[v10].m_CollisionPlane = plane;
      }
    }
  }
}


// CSheetSimulator::InitPosition  (line 386, @0x0000000002390590, libserver.so)  // inlines: CGameTrace, DotProduct, RnCollisionAttr_t, VectorCopy, VectorMA, VectorSubtract, memcpy
// calls: CGameTrace::Init, VectorNormalize
// callers: CIterativeSheetSimulator::DetectCollisions
void __fastcall CSheetSimulator::InitPosition(CSheetSimulator *const this, int i)
{
  __int64 v2; // r12
  unsigned __int64 v4; // r13
  __int64 v5; // rdx
  Vector *v6; // r13
  _DWORD *v7; // rax
  Vector *v8; // r13
  __int64 v9; // r12
  cplane_t *v10; // rax
  Vector *v11; // rax
  float v12; // xmm0_4
  cplane_t *v13; // rax
  float y; // xmm7_4
  float x; // xmm2_4
  float z; // xmm6_4
  float dist; // xmm1_4
  float *v18; // rax
  float v19; // xmm0_4
  Vector delta; // [rsp+10h] [rbp-F0h] BYREF
  trace_t tr; // [rsp+20h] [rbp-E0h] BYREF

  v2 = i;
  v4 = i;
  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  this->m_TraceHull(
    &this->m_Origin,
    &this->m_ControlPoints[v4],
    &this->m_FrustumBoxMin,
    &this->m_FrustumBoxMax,
    28673,
    this->m_CollisionGroup,
    &tr);
  if ( tr.fraction - 1.0 < 0.0 )
  {
    this->m_pCollisionPlanes[v2] = tr.plane;
    this->m_pCollisionPlanes[v2].dist = this->m_pCollisionPlanes[v2].dist + 6.0;
    v11 = &this->m_ControlPoints[v4];
    delta.x = v11->x - this->m_Origin.x;
    delta.y = v11->y - this->m_Origin.y;
    delta.z = v11->z - this->m_Origin.z;
    v12 = VectorNormalize(&delta);
    v13 = &this->m_pCollisionPlanes[v2];
    y = v13->normal.y;
    x = v13->normal.x;
    z = v13->normal.z;
    dist = v13->dist;
    v18 = &this->m_Particle->m_Mass + v2 + v4 * 12;
    v19 = fminf(
            v12,
            (dist - (((this->m_Origin.x * x) + (this->m_Origin.y * y)) + (this->m_Origin.z * z)))
          / (((x * delta.x) + (y * delta.y)) + (z * delta.z)));
    v18[1] = (delta.x * v19) + this->m_Origin.x;
    v18[2] = (delta.y * v19) + this->m_Origin.y;
    v18[3] = (v19 * delta.z) + this->m_Origin.z;
    this->m_pValidCollisionPlane[v2] = 1;
  }
  else if ( tr.startsolid )
  {
    this->m_pValidCollisionPlane[v2] = 1;
    v8 = &this->m_ControlPoints[v4];
    v9 = v2;
    v10 = &this->m_pCollisionPlanes[v9];
    v10->normal.x = this->m_Origin.x - v8->x;
    v10->normal.y = this->m_Origin.y - v8->y;
    v10->normal.z = this->m_Origin.z - v8->z;
    VectorNormalize(&this->m_pCollisionPlanes[v9].normal);
    this->m_pCollisionPlanes[v9].dist = (((this->m_Origin.x * this->m_pCollisionPlanes[v9].normal.x)
                                        + (this->m_Origin.y * this->m_pCollisionPlanes[v9].normal.y))
                                       + (this->m_Origin.z * this->m_pCollisionPlanes[v9].normal.z))
                                      - 6.0;
    this->m_pCollisionPlanes[v9].type = 3;
  }
  else
  {
    v5 = v4 * 12 + v2;
    v6 = &this->m_ControlPoints[v4];
    v7 = (&this->m_Particle->m_Mass + v5);
    v7[1] = LODWORD(v6->x);
    v7[2] = LODWORD(v6->y);
    v7[3] = LODWORD(v6->z);
    this->m_pValidCollisionPlane[v2] = 0;
  }
}


// CSheetSimulator::DetectCollision  (line 433, @0x00000000023908e0, libserver.so)  // inlines: CGameTrace, DotProduct, RnCollisionAttr_t, VectorSubtract, memcpy
// calls: CGameTrace::Init, VectorNormalize
// callers: CIterativeSheetSimulator::DetectCollisions
void __fastcall CSheetSimulator::DetectCollision(CSheetSimulator *const this, int i, float a3, float flPlaneOffset)
{
  __int64 v4; // r12
  __int64 v6; // r14
  bool *m_pValidCollisionPlane; // rax
  Vector *v8; // r14
  __int64 v9; // r12
  cplane_t *v10; // rax
  trace_t tr; // [rsp+10h] [rbp-D0h] BYREF

  v4 = i;
  v6 = i;
  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  this->m_TraceHull(
    &this->m_Origin,
    &this->m_ControlPoints[v6],
    &this->m_FrustumBoxMin,
    &this->m_FrustumBoxMax,
    28673,
    this->m_CollisionGroup,
    &tr);
  m_pValidCollisionPlane = this->m_pValidCollisionPlane;
  if ( tr.fraction - 1.0 < 0.0 )
  {
    m_pValidCollisionPlane[v4] = 1;
    this->m_pCollisionPlanes[v4] = tr.plane;
    this->m_pCollisionPlanes[v4].dist = a3 + this->m_pCollisionPlanes[v4].dist;
  }
  else if ( tr.startsolid )
  {
    m_pValidCollisionPlane[v4] = 1;
    v8 = &this->m_ControlPoints[v6];
    v9 = v4;
    v10 = &this->m_pCollisionPlanes[v9];
    v10->normal.x = this->m_Origin.x - v8->x;
    v10->normal.y = this->m_Origin.y - v8->y;
    v10->normal.z = this->m_Origin.z - v8->z;
    VectorNormalize(&this->m_pCollisionPlanes[v9].normal);
    this->m_pCollisionPlanes[v9].dist = (((this->m_Origin.x * this->m_pCollisionPlanes[v9].normal.x)
                                        + (this->m_Origin.y * this->m_pCollisionPlanes[v9].normal.y))
                                       + (this->m_Origin.z * this->m_pCollisionPlanes[v9].normal.z))
                                      - a3;
    this->m_pCollisionPlanes[v9].type = 3;
  }
  else
  {
    m_pValidCollisionPlane[v4] = 0;
  }
}


// CSheetSimulator::DetermineBestCollisionPlane  (line 467, @0x0000000002390ae0, libserver.so)  // inlines: NumHorizontal
// calls: CSheetSimulator::TestVertAgainstPlane
// callers: CSheetSimulator::Simulate, CSheetSimulator::ClampPointsToCollisionPlanes
void __fastcall CSheetSimulator::DetermineBestCollisionPlane(CSheetSimulator *const this, bool bFarTest)
{
  int m_HorizontalCount; // eax
  int v4; // r14d
  int v6; // r13d
  int v7; // r12d
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rax

  if ( this->m_VerticalCount > 0 )
  {
    m_HorizontalCount = this->m_HorizontalCount;
    v4 = 0;
    while ( m_HorizontalCount <= 0 )
    {
LABEL_14:
      if ( ++v4 >= this->m_VerticalCount )
        return;
    }
    v6 = 0;
    v7 = v4 * m_HorizontalCount;
    v8 = v4 * m_HorizontalCount;
    this->m_Particle[v8].m_CollisionDist = 3.4028235e38;
    this->m_Particle[v8].m_CollisionPlane = -1;
    CSheetSimulator::TestVertAgainstPlane(this, v7, v7, bFarTest);
    while ( 1 )
    {
      m_HorizontalCount = this->m_HorizontalCount;
      v9 = this->m_HorizontalCount;
      if ( this->m_HorizontalCount - 1 > v6 )
        goto LABEL_12;
      while ( 1 )
      {
        if ( v4 != 0 )
        {
          CSheetSimulator::TestVertAgainstPlane(this, v7, v7 - m_HorizontalCount, bFarTest);
          v9 = this->m_HorizontalCount;
          m_HorizontalCount = this->m_HorizontalCount;
        }
        if ( this->m_VerticalCount - 1 > v4 )
        {
          ++v6;
          CSheetSimulator::TestVertAgainstPlane(this, v7, v7 + v9, bFarTest);
          v9 = this->m_HorizontalCount;
          m_HorizontalCount = this->m_HorizontalCount;
          if ( v6 >= this->m_HorizontalCount )
            goto LABEL_14;
        }
        else if ( ++v6 >= v9 )
        {
          goto LABEL_14;
        }
        v7 = v6 + v4 * v9;
        v10 = v7;
        this->m_Particle[v10].m_CollisionDist = 3.4028235e38;
        this->m_Particle[v10].m_CollisionPlane = -1;
        CSheetSimulator::TestVertAgainstPlane(this, v7, v7, bFarTest);
        if ( v6 <= 0 )
          break;
        CSheetSimulator::TestVertAgainstPlane(this, v7, v7 - 1, bFarTest);
        m_HorizontalCount = this->m_HorizontalCount;
        v9 = this->m_HorizontalCount;
        if ( this->m_HorizontalCount - 1 > v6 )
        {
LABEL_12:
          CSheetSimulator::TestVertAgainstPlane(this, v7, v7 + 1, bFarTest);
          m_HorizontalCount = this->m_HorizontalCount;
          v9 = this->m_HorizontalCount;
        }
      }
    }
  }
}


// CSheetSimulator::SatisfyCollisionConstraints  (line 503, @0x0000000002390c80, libserver.so)  // inlines: DotProduct, NumParticles, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator-=, operator=
// callers: CSheetSimulator::EulerStep
void __fastcall CSheetSimulator::SatisfyCollisionConstraints(CSheetSimulator *const this)
{
  int m_HorizontalCount; // r8d
  __int64 v2; // rdx
  int i; // ecx
  CSheetSimulator::Particle_t *v4; // rax
  __int64 m_CollisionPlane; // rsi
  float m_CollisionDist; // xmm3_4
  float z; // xmm2_4
  float x; // xmm4_4
  cplane_t *v9; // rsi
  float v10; // xmm0_4
  vec_t v11; // xmm0_4
  float v12; // xmm2_4
  CSheetSimulator::Particle_t *v13; // rax
  float y; // xmm4_4
  float v15; // xmm2_4
  float v16; // xmm3_4
  float v17; // xmm1_4
  float v18; // xmm0_4

  m_HorizontalCount = this->m_HorizontalCount;
  v2 = 0;
  for ( i = 0; i < m_HorizontalCount * this->m_VerticalCount; ++v2 )
  {
    v4 = &this->m_Particle[v2];
    m_CollisionPlane = v4->m_CollisionPlane;
    if ( m_CollisionPlane >= 0 )
    {
      m_CollisionDist = v4->m_CollisionDist;
      z = this->m_Origin.z;
      x = this->m_Origin.x;
      v9 = &this->m_pCollisionPlanes[m_CollisionPlane];
      v10 = v4->m_Position.z - z;
      v4->m_Position.y = ((v4->m_Position.y - this->m_Origin.y) * m_CollisionDist) + this->m_Origin.y;
      v11 = (v10 * m_CollisionDist) + z;
      v12 = v4->m_Position.x - x;
      v4->m_Position.z = v11;
      v4->m_Position.x = (v12 * m_CollisionDist) + x;
      v13 = &this->m_Particle[v2];
      y = v9->normal.y;
      v15 = v9->normal.z;
      v16 = v13->m_Velocity.y;
      v17 = v13->m_Velocity.z;
      v18 = ((v13->m_Velocity.x * v9->normal.x) + (v16 * y)) + (v17 * v15);
      if ( v18 < 0.0 )
      {
        v13->m_Velocity.x = v13->m_Velocity.x - (v9->normal.x * v18);
        v13->m_Velocity.y = v16 - (y * v18);
        v13->m_Velocity.z = v17 - (v18 * v15);
      }
      m_HorizontalCount = this->m_HorizontalCount;
    }
    ++i;
  }
}


// CSheetSimulator::EulerStep  (line 528, @0x0000000002390dc0, libserver.so)  // inlines: LengthSqr, NumParticles, VectorDivide, VectorMultiply, operator*, operator*=, operator+=, operator/
// calls: CSheetSimulator::ClearForces, CSheetSimulator::ComputeForces, CSheetSimulator::SatisfyCollisionConstraints, sqrt
// callers: CSheetSimulator::Simulate
void __fastcall CSheetSimulator::EulerStep(CSheetSimulator *const this, float a2, float dt)
{
  __int64 v4; // r12
  int v5; // r13d
  CSheetSimulator::Particle_t *v6; // rax
  vec_t v7; // xmm0_4
  vec_t v8; // xmm3_4
  CSheetSimulator::Particle_t *v9; // rax
  float v10; // xmm4_4
  vec_t v11; // xmm1_4
  vec_t v12; // xmm0_4
  CSheetSimulator::Particle_t *m_Particle; // rdx
  float v14; // xmm1_4
  float *p_m_Mass; // rdx
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm0_4

  CSheetSimulator::ClearForces(this);
  CSheetSimulator::ComputeForces(this);
  if ( this->m_VerticalCount * this->m_HorizontalCount > 0 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v6 = &this->m_Particle[v4];
      v7 = (v6->m_Velocity.z * a2) + v6->m_Position.z;
      v8 = (v6->m_Velocity.x * a2) + v6->m_Position.x;
      v6->m_Position.y = (v6->m_Velocity.y * a2) + v6->m_Position.y;
      v6->m_Position.z = v7;
      v6->m_Position.x = v8;
      v9 = &this->m_Particle[v4];
      v10 = 1.0 / v9->m_Mass;
      v11 = ((v9->m_Force.z * a2) * v10) + v9->m_Velocity.z;
      v12 = ((v9->m_Force.x * a2) * v10) + v9->m_Velocity.x;
      v9->m_Velocity.y = ((v9->m_Force.y * a2) * v10) + v9->m_Velocity.y;
      v9->m_Velocity.z = v11;
      v9->m_Velocity.x = v12;
      m_Particle = this->m_Particle;
      v14 = ((m_Particle[v4].m_Velocity.x * m_Particle[v4].m_Velocity.x)
           + (m_Particle[v4].m_Velocity.y * m_Particle[v4].m_Velocity.y))
          + (m_Particle[v4].m_Velocity.z * m_Particle[v4].m_Velocity.z);
      if ( v14 > 1000000.0 )
      {
        p_m_Mass = &m_Particle[v4].m_Mass;
        v16 = 1000.0 / sqrt(v14);
        p_m_Mass[4] = p_m_Mass[4] * v16;
        v17 = p_m_Mass[5] * v16;
        v18 = v16 * p_m_Mass[6];
        p_m_Mass[5] = v17;
        p_m_Mass[6] = v18;
      }
      ++v5;
      ++v4;
    }
    while ( v5 < this->m_VerticalCount * this->m_HorizontalCount );
  }
  CSheetSimulator::SatisfyCollisionConstraints(this);
}


// CSheetSimulator::Simulate  (line 557, @0x0000000002390f90, libserver.so)
// calls: CSheetSimulator::EulerStep
void __fastcall CSheetSimulator::Simulate(CSheetSimulator *const this, float a2, float dt)
{
  CSheetSimulator::EulerStep(this, a2, dt);
}


// CSheetSimulator::Simulate  (line 564, @0x0000000002390fa0, libserver.so)
// calls: CSheetSimulator::ComputeControlPoints, CSheetSimulator::DetermineBestCollisionPlane, CSheetSimulator::EulerStep
// callers: CIterativeSheetSimulator::Think
void __fastcall CSheetSimulator::Simulate(CSheetSimulator *const this, __m128i a2, float dt, int steps)
{
  unsigned int v4; // r14d
  int v7; // ebx
  __m128i v8; // xmm1
  float v9; // r14d
  float v10; // xmm1_4

  v4 = _mm_cvtsi128_si32(a2);
  v7 = 0;
  CSheetSimulator::ComputeControlPoints(this);
  v8 = _mm_cvtsi32_si128(v4);
  *v8.m128i_i32 = *v8.m128i_i32 / steps;
  v9 = COERCE_FLOAT(_mm_cvtsi128_si32(v8));
  if ( steps > 0 )
  {
    do
    {
      ++v7;
      CSheetSimulator::DetermineBestCollisionPlane(this, 1);
      CSheetSimulator::EulerStep(this, v9, v10);
    }
    while ( v7 != steps );
  }
}


// CSheetSimulator::ClampPointsToCollisionPlanes  (line 583, @0x0000000002391010, libserver.so)  // inlines: DotProduct, NumParticles, VectorMA
// calls: CSheetSimulator::DetermineBestCollisionPlane
// callers: CIterativeSheetSimulator::Think
void __fastcall CSheetSimulator::ClampPointsToCollisionPlanes(CSheetSimulator *const this)
{
  int m_HorizontalCount; // edi
  __int64 v3; // rsi
  int i; // ecx
  CSheetSimulator::Particle_t *v5; // rax
  __int64 m_CollisionPlane; // rdx
  float y; // xmm2_4
  float z; // xmm1_4
  cplane_t *v9; // rdx
  float v10; // xmm0_4
  float v11; // xmm0_4

  CSheetSimulator::DetermineBestCollisionPlane(this, 0);
  m_HorizontalCount = this->m_HorizontalCount;
  v3 = 0;
  for ( i = 0; i < m_HorizontalCount * this->m_VerticalCount; ++v3 )
  {
    v5 = &this->m_Particle[v3];
    m_CollisionPlane = v5->m_CollisionPlane;
    if ( m_CollisionPlane >= 0 )
    {
      y = v5->m_Position.y;
      z = v5->m_Position.z;
      v9 = &this->m_pCollisionPlanes[m_CollisionPlane];
      v10 = fabs((((v5->m_Position.x * v9->normal.x) + (v9->normal.y * y)) + (v9->normal.z * z)) - v9->dist);
      if ( v10 < 6.0 )
      {
        v11 = -v10;
        v5->m_Position.x = (v9->normal.x * v11) + v5->m_Position.x;
        v5->m_Position.y = (v9->normal.y * v11) + y;
        v5->m_Position.z = (v11 * v9->normal.z) + z;
        m_HorizontalCount = this->m_HorizontalCount;
      }
    }
    ++i;
  }
}


// CIterativeSheetSimulator::CIterativeSheetSimulator  (line 611, @0x0000000002391110, libserver.so)
// calls: CSheetSimulator::CSheetSimulator
void __fastcall CIterativeSheetSimulator::CIterativeSheetSimulator(
        CIterativeSheetSimulator *const this,
        TraceLineFunc_t traceline,
        TraceHullFunc_t traceHull)
{
  CSheetSimulator::CSheetSimulator(this, traceline, traceHull);
  this->m_SimulationSteps = 0;
}


// CIterativeSheetSimulator::BeginSimulation  (line 617, @0x0000000002391130, libserver.so)
void __fastcall CIterativeSheetSimulator::BeginSimulation(
        CIterativeSheetSimulator *const this,
        float dt,
        char steps,
        int substeps,
        char collisionCount)
{
  this->m_TimeStep = dt;
  this->m_CurrentCollisionPt = 0;
  this->m_SimulationSteps = steps;
  this->m_TotalSteps = steps;
  this->m_SubSteps = substeps;
  this->m_InitialPass = 1;
  this->m_CollisionCount = collisionCount;
}


// CIterativeSheetSimulator::Think  (line 628, @0x0000000002391230, libserver.so)
// calls: CIterativeSheetSimulator::DetectCollisions, CSheetSimulator::Simulate, CSheetSimulator::ClampPointsToCollisionPlanes
bool __fastcall CIterativeSheetSimulator::Think(CIterativeSheetSimulator *const this)
{
  float v1; // xmm1_4
  bool result; // al
  char m_SimulationSteps; // al
  char v5; // dl

  if ( this->m_CurrentCollisionPt < 0 )
  {
    CSheetSimulator::Simulate(this, LODWORD(this->m_TimeStep), v1, this->m_SubSteps);
    m_SimulationSteps = this->m_SimulationSteps;
    this->m_CurrentCollisionPt = 0;
    v5 = m_SimulationSteps - 1;
    result = 1;
    this->m_SimulationSteps = v5;
    if ( v5 == 0 )
    {
      CSheetSimulator::ClampPointsToCollisionPlanes(this);
      return 1;
    }
  }
  else
  {
    CIterativeSheetSimulator::DetectCollisions(this);
    return 0;
  }
  return result;
}


// CIterativeSheetSimulator::DetectCollisions  (line 657, @0x0000000002391170, libserver.so)  // inlines: NumParticles
// calls: CSheetSimulator::InitPosition, CSheetSimulator::DetectCollision
// callers: CIterativeSheetSimulator::Think
void __fastcall CIterativeSheetSimulator::DetectCollisions(CIterativeSheetSimulator *const this)
{
  int v2; // r12d
  int m_CurrentCollisionPt; // esi
  int m_HorizontalCount; // eax
  float v5; // xmm1_4

  if ( this->m_CollisionCount > 0 )
  {
    v2 = 0;
    m_CurrentCollisionPt = this->m_CurrentCollisionPt;
    while ( 1 )
    {
      if ( this->m_InitialPass )
      {
        CSheetSimulator::InitPosition(this, m_CurrentCollisionPt);
      }
      else
      {
        v5 = (this->m_TotalSteps - 1);
        CSheetSimulator::DetectCollision(this, m_CurrentCollisionPt, ((this->m_SimulationSteps - 1) / v5) * 6.0, v5);
      }
      LOBYTE(m_CurrentCollisionPt) = this->m_CurrentCollisionPt + 1;
      m_HorizontalCount = this->m_HorizontalCount;
      this->m_CurrentCollisionPt = m_CurrentCollisionPt;
      m_CurrentCollisionPt = m_CurrentCollisionPt;
      if ( m_CurrentCollisionPt >= this->m_VerticalCount * m_HorizontalCount )
        break;
      if ( this->m_CollisionCount <= ++v2 )
        return;
    }
    this->m_CurrentCollisionPt = -1;
    this->m_InitialPass = 0;
  }
}


