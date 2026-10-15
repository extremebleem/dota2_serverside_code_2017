
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CVariantBase<CEntityVariantAllocator>::~CVariantBase  (line 143, @0x0000000001b2c5e0, libserver.so)  // inlines: Free
void __fastcall CVariantBase<CEntityVariantAllocator>::~CVariantBase(CVariantBase<CEntityVariantAllocator> *const this)
{
  uint16 m_flags; // ax

  m_flags = this->m_flags;
  if ( (m_flags & 1) != 0 )
    this->m_flags = m_flags & 0xFFFE;
  this->m_uint64 = 0;
  this->m_type = 0;
}


// CVariantBase<CVariantDefaultAllocator>::TempString  (line 286, @0x0000000001f316e0, libserver.so)  // inlines: AssignTo, ToString, V_strncpy<unsigned int>
// calls: V_snprintf, VariantFieldTypeName, Warning, _V_strncpy
// callers: ScriptHelper_CreateEvent, Script_CreateEffect
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "false", "true", "%d %d %d %d", "(null)"
// globals: jpt_1F31707, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
const char *__fastcall CVariantBase<CVariantDefaultAllocator>::TempString(
        const CVariantBase<CVariantDefaultAllocator> *const this)
{
  int16 m_type; // ax
  const char *result; // rax
  const char *v3; // rax
  const char *v4; // rcx
  double m_float; // xmm0_8
  const char *m_uint64; // rsi

  m_type = this->m_type;
  switch ( m_type )
  {
    case 0:
      goto LABEL_6;
    case 1:
      m_float = this->m_float;
      goto LABEL_15;
    case 3:
    case 39:
      V_snprintf(
        &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
        512,
        "%g %g %g",
        *this->m_pszString,
        *(this->m_uint64 + 4),
        *(this->m_uint64 + 8));
      return &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
    case 4:
    case 27:
      V_snprintf(
        &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
        512,
        "%g %g %g %g",
        *this->m_pszString,
        *(this->m_uint64 + 4),
        *(this->m_uint64 + 8),
        *(this->m_uint64 + 12));
      goto LABEL_3;
    case 5:
      V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", this->m_int);
      goto LABEL_3;
    case 6:
      v4 = "true";
      if ( this->m_char == 0 )
        v4 = "false";
      V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v4);
      goto LABEL_3;
    case 8:
      V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", this->m_char);
      goto LABEL_3;
    case 9:
      V_snprintf(
        &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
        512,
        "%d %d %d %d",
        this->m_int,
        BYTE1(this->m_int),
        BYTE2(this->m_int),
        HIBYTE(this->m_int));
      goto LABEL_3;
    case 25:
      V_snprintf(
        &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
        512,
        "%g %g",
        *this->m_pszString,
        *(this->m_uint64 + 4));
      goto LABEL_3;
    case 26:
      V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%lld", this->m_uint64);
      goto LABEL_3;
    case 30:
      m_uint64 = "(null)";
      if ( this->m_uint64 != 0 )
        m_uint64 = this->m_uint64;
      _V_strncpy(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, m_uint64, 512);
      goto LABEL_3;
    case 33:
      V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%llu", this->m_uint64);
      goto LABEL_3;
    case 34:
      m_float = this->m_float64;
LABEL_15:
      V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
      result = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
      break;
    case 37:
      V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", this->m_int);
LABEL_3:
      result = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
      break;
    default:
      v3 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to string at the moment!\n", v3);
LABEL_6:
      CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
      result = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
      break;
  }
  return result;
}


// CVariantBase<CVariantDefaultAllocator>::TempString  (line 286, @0x00000000027a9bd0, libserver.so)  // inlines: AssignTo, ToString, V_strncpy<unsigned int>, VariantFieldTypeName
// calls: V_snprintf, Warning, _V_strncpy
// strings: "%g %g %g %g", "js_raw_args", "No conversion from %s to string at the moment!\n", "false", "true", "%d %d %d %d" (25 total)
// globals: jpt_27A9BF7, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, jpt_27A9EC0
const char *__fastcall CVariantBase<CVariantDefaultAllocator>::TempString(
        const CVariantBase<CVariantDefaultAllocator> *const this)
{
  int16 m_type; // ax
  const char *result; // rax
  const char *v3; // rsi
  const char *v4; // rcx
  double m_float; // xmm0_8
  const char *m_uint64; // rsi

  m_type = this->m_type;
  switch ( m_type )
  {
    case 0:
      goto LABEL_7;
    case 1:
      m_float = this->m_float;
      goto LABEL_16;
    case 3:
    case 39:
      V_snprintf(
        &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
        512,
        "%g %g %g",
        *this->m_pszString,
        *(this->m_uint64 + 4),
        *(this->m_uint64 + 8));
      return &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
    case 4:
    case 27:
      V_snprintf(
        &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
        512,
        "%g %g %g %g",
        *this->m_pszString,
        *(this->m_uint64 + 4),
        *(this->m_uint64 + 8),
        *(this->m_uint64 + 12));
      goto LABEL_3;
    case 5:
      V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", this->m_int);
      goto LABEL_3;
    case 6:
      v4 = "true";
      if ( this->m_char == 0 )
        v4 = "false";
      V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v4);
      goto LABEL_3;
    case 8:
      V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", this->m_char);
      goto LABEL_3;
    case 9:
      V_snprintf(
        &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
        512,
        "%d %d %d %d",
        this->m_int,
        BYTE1(this->m_int),
        BYTE2(this->m_int),
        HIBYTE(this->m_int));
      goto LABEL_3;
    case 25:
      V_snprintf(
        &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
        512,
        "%g %g",
        *this->m_pszString,
        *(this->m_uint64 + 4));
      goto LABEL_3;
    case 26:
      V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%lld", this->m_uint64);
      goto LABEL_3;
    case 30:
      m_uint64 = "(null)";
      if ( this->m_uint64 != 0 )
        m_uint64 = this->m_uint64;
      _V_strncpy(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, m_uint64, 512);
      goto LABEL_3;
    case 33:
      V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%llu", this->m_uint64);
      goto LABEL_3;
    case 34:
      m_float = this->m_float64;
LABEL_16:
      V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
      result = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
      break;
    case 37:
      V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", this->m_int);
LABEL_3:
      result = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
      break;
    default:
      switch ( m_type )
      {
        case 0:
          v3 = "void";
          break;
        case 1:
          v3 = "float";
          break;
        case 3:
          v3 = "vector";
          break;
        case 4:
          v3 = "quaternion";
          break;
        case 5:
          v3 = "integer";
          break;
        case 6:
          v3 = "boolean";
          break;
        case 8:
          v3 = "character";
          break;
        case 9:
          v3 = "color";
          break;
        case 13:
          v3 = "ehandle";
          break;
        case 25:
          v3 = "vector2d";
          break;
        case 26:
          v3 = "int64";
          break;
        case 27:
          v3 = "vector4d";
          break;
        case 28:
          v3 = "resourcehandle";
          break;
        case 30:
          v3 = "cstring";
          break;
        case 31:
          v3 = "hscript";
          break;
        case 32:
          v3 = "variant";
          break;
        case 33:
          v3 = "uint64";
          break;
        case 34:
          v3 = "float64";
          break;
        case 37:
          v3 = "unsigned";
          break;
        case 38:
          v3 = "utlstringtoken";
          break;
        case 39:
          v3 = "qangle";
          break;
        case 48:
          v3 = "hscript_lightbinding";
          break;
        case 49:
          v3 = "js_value";
          break;
        case 50:
          v3 = "js_object";
          break;
        case 51:
          v3 = "js_array";
          break;
        case 52:
          v3 = "js_raw_args";
          break;
        default:
          v3 = "unknown_variant_type";
          break;
      }
      Warning("No conversion from %s to string at the moment!\n", v3);
LABEL_7:
      CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
      result = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
      break;
  }
  return result;
}


// VariantFieldTypeName  (line 470, @0x0000000001eefcb0, libserver.so)
// callers: CLightEntity::Input_SetLightColor, CLightEntity::Input_SetLightBrightness, CEnvCombinedLightProbeVolume::Input_SetLightGroups, CEnvCubemap::Input_SetLightGroups, CEnvLightProbeVolume::Input_SetLightGroups, CBaseEntity::InputSetKinematic, CTonemapController2::InputSetMinExposure, CTonemapController2::InputSetMaxExposure, CTonemapController2::InputSetPercentTarget, CTonemapController2::InputSetPercentBrightPixels, CTonemapController2::InputSetMinAverageLuminosity, CTonemapController2::InputSetRate (380 total)
// strings: "js_raw_args", "js_array", "js_object", "js_value", "hscript_lightbinding", "qangle" (19 total)
// globals: jpt_1EEFCCF
const char *__fastcall VariantFieldTypeName(int16 eType)
{
  const char *result; // rax

  switch ( eType )
  {
    case 0:
      result = "void";
      break;
    case 1:
      result = "float";
      break;
    case 3:
      result = "vector";
      break;
    case 4:
      result = "quaternion";
      break;
    case 5:
      result = "integer";
      break;
    case 6:
      result = "boolean";
      break;
    case 8:
      result = "character";
      break;
    case 9:
      result = "color";
      break;
    case 13:
      result = "ehandle";
      break;
    case 25:
      result = "vector2d";
      break;
    case 26:
      result = "int64";
      break;
    case 27:
      result = "vector4d";
      break;
    case 28:
      result = "resourcehandle";
      break;
    case 30:
      result = "cstring";
      break;
    case 31:
      result = "hscript";
      break;
    case 32:
      result = "variant";
      break;
    case 33:
      result = "uint64";
      break;
    case 34:
      result = "float64";
      break;
    case 37:
      result = "unsigned";
      break;
    case 38:
      result = "utlstringtoken";
      break;
    case 39:
      result = "qangle";
      break;
    case 48:
      result = "hscript_lightbinding";
      break;
    case 49:
      result = "js_value";
      break;
    case 50:
      result = "js_object";
      break;
    case 51:
      result = "js_array";
      break;
    case 52:
      result = "js_raw_args";
      break;
    default:
      result = "unknown_variant_type";
      break;
  }
  return result;
}


// CVariantBase<CVariantDefaultAllocator>::Free  (line 584, @0x0000000001b51fb0, libserver.so)  // inlines: Free
// callers: CEntityIOOutput::FireOutput<char const*>, CBaseClientUIEntity::OnClientFireOutput, CMemberScriptBinding0<CBodyComponent*, bool (CBodyComponent::*)(), bool>::Call, CMemberScriptBinding0<CBodyComponent*, HSequence (CBodyComponent::*)(), HSequence>::Call, CMemberScriptBinding1<CBodyComponent*, float (CBodyComponent::*)(char const*), float, char const*>::Call, CMemberScriptBinding1<CBodyComponent*, HSequence (CBodyComponent::*)(char const*), HSequence, char const*>::Call, CInfoWorldLayer::SpawnGroupCreationComplete, ent_call, CVariantBase<CVariantDefaultAllocator>::Convert, InputFunctionAdapterS1Var, InputFunctionAdapterS1Func, CBaseEntity::DrawDebugTextOverlays (964 total)
void __fastcall CVariantBase<CVariantDefaultAllocator>::Free(CVariantBase<CVariantDefaultAllocator> *const this)
{
  if ( (this->m_flags & 1) != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_uint64);
    this->m_flags &= ~1u;
  }
  this->m_uint64 = 0;
  this->m_type = 0;
}


// CVariantBase<CVariantDefaultAllocator>::CopyData<Vector>  (line 611, @0x0000000001999910 libserver.so, @0x00000000019999b0 libserver.so, @0x000000000199a122 libserver.so, @0x000000000199a306 libserver.so, @0x000000000199a49c libserver.so, @0x000000000199a4ec libserver.so (+1 more))  // inlines: Allocate, Allocate<Vector>, operator=
void __fastcall CVariantBase<CVariantDefaultAllocator>::CopyData<Vector>(
        CVariantBase<CVariantDefaultAllocator> *const this,
        const Vector *const src,
        __int64 bForceCopy)
{
  Vector *v5; // rax

  v5 = (**g_pMemAlloc)(g_pMemAlloc, 12, bForceCopy);
  this->m_uint64 = v5;
  *v5 = *src;
  this->m_flags |= 1u;
}


// CVariantBase<CVariantDefaultAllocator>::CopyData<QAngle>  (line 611, @0x0000000001999960, libserver.so)  // inlines: Allocate, Allocate<QAngle>, operator=
void __fastcall CVariantBase<CVariantDefaultAllocator>::CopyData<QAngle>(
        CVariantBase<CVariantDefaultAllocator> *const this,
        const QAngle *const src,
        __int64 bForceCopy)
{
  QAngle *v5; // rax

  v5 = (**g_pMemAlloc)(g_pMemAlloc, 12, bForceCopy);
  this->m_uint64 = v5;
  *v5 = *src;
  this->m_flags |= 1u;
}


// CVariantBase<CEntityVariantAllocator>::CopyData<QAngle>  (line 611, @0x0000000001999d08, libserver.so)  // inlines: Allocate<QAngle>, Free, operator=
// calls: CEntityVariantAllocator::Allocate
// callers: GetDebugHistory
void __fastcall CVariantBase<CEntityVariantAllocator>::CopyData<QAngle>(
        CVariantBase<CEntityVariantAllocator> *const this,
        const QAngle *const src,
        bool bForceCopy)
{
  uint16 m_flags; // ax
  vec_t *v6; // rax

  m_flags = this->m_flags;
  if ( (m_flags & 1) != 0 )
    this->m_flags = m_flags & 0xFFFE;
  this->m_uint64 = 0;
  this->m_type = 39;
  v6 = CEntityVariantAllocator::Allocate(0xCu);
  this->m_uint64 = v6;
  *v6 = src->x;
  v6[1] = src->y;
  v6[2] = src->z;
  this->m_flags |= 1u;
}


// CVariantBase<CVariantDefaultAllocator>::CopyData<Vector4D>  (line 611, @0x0000000001eb5bb0 libserver.so, @0x0000000001f1c7c0 libserver.so, @0x0000000001fe2c10 libserver.so, @0x0000000001ff7270 libserver.so, @0x0000000002047a50 libserver.so, @0x000000000234db30 libserver.so (+10 more))  // inlines: Allocate, Allocate<Vector4D>, operator=
// callers: CMemberScriptBinding0<CBodyComponent*, bool (CBodyComponent::*)(), bool>::Call, CMemberScriptBinding0<CBodyComponent*, HSequence (CBodyComponent::*)(), HSequence>::Call, CMemberScriptBinding1<CBodyComponent*, float (CBodyComponent::*)(char const*), float, char const*>::Call
void __fastcall CVariantBase<CVariantDefaultAllocator>::CopyData<Vector4D>(
        CVariantBase<CVariantDefaultAllocator> *const this,
        const Vector4D *const src,
        __int64 bForceCopy)
{
  Vector4D *v5; // rax

  v5 = (**g_pMemAlloc)(g_pMemAlloc, 16, bForceCopy);
  this->m_uint64 = v5;
  *v5 = *src;
  this->m_flags |= 1u;
}


// CVariantBase<CVariantDefaultAllocator>::CopyData<Quaternion>  (line 611, @0x0000000001eb5c10 libserver.so, @0x0000000001f1c820 libserver.so, @0x0000000001f2d020 libserver.so, @0x0000000001fe2c70 libserver.so, @0x0000000001ff72d0 libserver.so, @0x0000000002047ab0 libserver.so (+11 more))  // inlines: Allocate, Allocate<Quaternion>, operator=
// callers: CMemberScriptBinding0<CBodyComponent*, bool (CBodyComponent::*)(), bool>::Call, CMemberScriptBinding0<CBodyComponent*, HSequence (CBodyComponent::*)(), HSequence>::Call, CMemberScriptBinding1<CBodyComponent*, float (CBodyComponent::*)(char const*), float, char const*>::Call
void __fastcall CVariantBase<CVariantDefaultAllocator>::CopyData<Quaternion>(
        CVariantBase<CVariantDefaultAllocator> *const this,
        const Quaternion *const src,
        __int64 bForceCopy)
{
  Quaternion *v5; // rax

  v5 = (**g_pMemAlloc)(g_pMemAlloc, 16, bForceCopy);
  this->m_uint64 = v5;
  *v5 = *src;
  this->m_flags |= 1u;
}


// CVariantBase<CEntityVariantAllocator>::CopyData<Vector>  (line 611, @0x00000000030a2480, libserver.so)  // inlines: Alloc, Allocate, Allocate<Vector>, Free, operator=
// calls: CUtlScratchMemoryPool::AllocAligned
// globals: CEntityVariantAllocator::sm_pMemoryPool
void __fastcall CVariantBase<CEntityVariantAllocator>::CopyData<Vector>(
        CVariantBase<CEntityVariantAllocator> *const this,
        const Vector *const src,
        bool bForceCopy)
{
  uint16 m_flags; // ax
  CUtlScratchMemoryPool *v6; // rdi
  vec_t *v7; // rax

  m_flags = this->m_flags;
  if ( (m_flags & 1) != 0 )
    this->m_flags = m_flags & 0xFFFE;
  this->m_uint64 = 0;
  v6 = CEntityVariantAllocator::sm_pMemoryPool;
  this->m_type = 3;
  v7 = CUtlScratchMemoryPool::AllocAligned(v6, 12, 8);
  this->m_uint64 = v7;
  *v7 = src->x;
  v7[1] = src->y;
  v7[2] = src->z;
  this->m_flags |= 1u;
}


// CVariantBase<CEntityVariantAllocator>::CopyData<Vector4D>  (line 611, @0x00000000030a2500, libserver.so)  // inlines: Alloc, Allocate, Allocate<Vector4D>, Free, operator=
// calls: CUtlScratchMemoryPool::AllocAligned
// callers: CEntityKeyValues::SetValue<Vector4D>
// globals: CEntityVariantAllocator::sm_pMemoryPool
void __fastcall CVariantBase<CEntityVariantAllocator>::CopyData<Vector4D>(
        CVariantBase<CEntityVariantAllocator> *const this,
        const Vector4D *const src,
        bool bForceCopy)
{
  uint16 m_flags; // ax
  CUtlScratchMemoryPool *v6; // rdi
  vec_t *v7; // rax

  m_flags = this->m_flags;
  if ( (m_flags & 1) != 0 )
    this->m_flags = m_flags & 0xFFFE;
  this->m_uint64 = 0;
  v6 = CEntityVariantAllocator::sm_pMemoryPool;
  this->m_type = 27;
  v7 = CUtlScratchMemoryPool::AllocAligned(v6, 16, 16);
  this->m_uint64 = v7;
  *v7 = src->x;
  v7[1] = src->y;
  v7[2] = src->z;
  v7[3] = src->w;
  this->m_flags |= 1u;
}


// CVariantBase<CEntityVariantAllocator>::CopyData<QAngle>  (line 611, @0x00000000030a2580, libserver.so)  // inlines: Alloc, Allocate, Allocate<QAngle>, Free, operator=
// calls: CUtlScratchMemoryPool::AllocAligned
// globals: CEntityVariantAllocator::sm_pMemoryPool
void __fastcall CVariantBase<CEntityVariantAllocator>::CopyData<QAngle>(
        CVariantBase<CEntityVariantAllocator> *const this,
        const QAngle *const src,
        bool bForceCopy)
{
  uint16 m_flags; // ax
  CUtlScratchMemoryPool *v6; // rdi
  vec_t *v7; // rax

  m_flags = this->m_flags;
  if ( (m_flags & 1) != 0 )
    this->m_flags = m_flags & 0xFFFE;
  this->m_uint64 = 0;
  v6 = CEntityVariantAllocator::sm_pMemoryPool;
  this->m_type = 39;
  v7 = CUtlScratchMemoryPool::AllocAligned(v6, 12, 8);
  this->m_uint64 = v7;
  *v7 = src->x;
  v7[1] = src->y;
  v7[2] = src->z;
  this->m_flags |= 1u;
}


// CVariantBase<CEntityVariantAllocator>::CopyData<Quaternion>  (line 611, @0x00000000030a2600, libserver.so)  // inlines: Alloc, Allocate, Allocate<Quaternion>, Free, operator=
// calls: CUtlScratchMemoryPool::AllocAligned
// callers: CEntityKeyValues::SetValue<Quaternion>
// globals: CEntityVariantAllocator::sm_pMemoryPool
void __fastcall CVariantBase<CEntityVariantAllocator>::CopyData<Quaternion>(
        CVariantBase<CEntityVariantAllocator> *const this,
        const Quaternion *const src,
        bool bForceCopy)
{
  uint16 m_flags; // ax
  CUtlScratchMemoryPool *v6; // rdi
  vec_t *v7; // rax

  m_flags = this->m_flags;
  if ( (m_flags & 1) != 0 )
    this->m_flags = m_flags & 0xFFFE;
  this->m_uint64 = 0;
  v6 = CEntityVariantAllocator::sm_pMemoryPool;
  this->m_type = 4;
  v7 = CUtlScratchMemoryPool::AllocAligned(v6, 16, 16);
  this->m_uint64 = v7;
  *v7 = src->x;
  v7[1] = src->y;
  v7[2] = src->z;
  v7[3] = src->w;
  this->m_flags |= 1u;
}


// CVariantBase<CVariantDefaultAllocator>::CopyData  (line 698, @0x0000000001ef2e20, libserver.so)  // inlines: Allocate, Free, V_strlen, memcpy
// calls: strlen, memcpy
// callers: CVariantBase<CVariantDefaultAllocator>::Convert, CAI_ExpresserWithFollowup::SpeakDispatchFollowup
void __fastcall CVariantBase<CVariantDefaultAllocator>::CopyData(
        CVariantBase<CVariantDefaultAllocator> *const this,
        const char *pString,
        bool bForceCopy)
{
  unsigned int v6; // r13d
  void *v7; // rax

  if ( (this->m_flags & 1) != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_uint64);
    this->m_flags &= ~1u;
  }
  this->m_uint64 = 0;
  this->m_type = 30;
  if ( pString != 0 && bForceCopy )
  {
    v6 = strlen(pString) + 1;
    v7 = (**g_pMemAlloc)(g_pMemAlloc, v6);
    this->m_uint64 = v7;
    memcpy(v7, pString, v6);
    this->m_flags |= 1u;
  }
  else
  {
    this->m_uint64 = pString;
  }
}


// CVariantBase<CEntityVariantAllocator>::CopyData  (line 698, @0x0000000002189d40 libserver.so, @0x000000000234dbf0 libserver.so, @0x00000000027a7e30 libserver.so)  // inlines: Allocate, Free, V_strlen, memcpy
// calls: strlen, CEntityVariantAllocator::Allocate, memcpy
// callers: CCommentarySystem::ReplaceQuotesInEntityKeyValues
void __fastcall CVariantBase<CEntityVariantAllocator>::CopyData(
        CVariantBase<CEntityVariantAllocator> *const this,
        const char *pString,
        bool bForceCopy)
{
  uint16 m_flags; // ax
  signed int v6; // r13d
  void *v7; // rax

  m_flags = this->m_flags;
  if ( (m_flags & 1) != 0 )
    this->m_flags = m_flags & 0xFFFE;
  this->m_uint64 = 0;
  this->m_type = 30;
  if ( pString != 0 )
  {
    v6 = strlen(pString) + 1;
    v7 = CEntityVariantAllocator::Allocate(v6);
    this->m_uint64 = v7;
    memcpy(v7, pString, v6);
    this->m_flags |= 1u;
  }
}


// CVariantBase<CEntityVariantAllocator>::CopyData  (line 698, @0x00000000030a23f0, libserver.so)  // inlines: Alloc, Allocate, Free, V_strlen, memcpy
// calls: strlen, CUtlScratchMemoryPool::AllocAligned, memcpy
// callers: CEntityKeyValues::UnserializeKeys, ConvertTextDataToNewKeyValues
// globals: CEntityVariantAllocator::sm_pMemoryPool
void __fastcall CVariantBase<CEntityVariantAllocator>::CopyData(
        CVariantBase<CEntityVariantAllocator> *const this,
        const char *pString,
        bool bForceCopy)
{
  uint16 m_flags; // ax
  int v6; // r13d
  void *v7; // rax

  m_flags = this->m_flags;
  if ( (m_flags & 1) != 0 )
    this->m_flags = m_flags & 0xFFFE;
  this->m_uint64 = 0;
  this->m_type = 30;
  if ( pString != 0 )
  {
    v6 = strlen(pString) + 1;
    v7 = CUtlScratchMemoryPool::AllocAligned(CEntityVariantAllocator::sm_pMemoryPool, v6, 8 * (v6 >= 16) + 8);
    this->m_uint64 = v7;
    memcpy(v7, pString, v6);
    this->m_flags |= 1u;
  }
}


// CVariantBase<CVariantDefaultAllocator>::ConvertToCopiedData  (line 716, @0x0000000001eb6250 libserver.so, @0x0000000001f1cbc0 libserver.so, @0x0000000001fa90d0 libserver.so, @0x0000000001fe2f50 libserver.so, @0x0000000001ff76f0 libserver.so, @0x0000000002048050 libserver.so (+12 more))  // inlines: Allocate, Allocate<QAngle>, Allocate<Quaternion>, Allocate<Vector2D>, CopyData, CopyData<QAngle>, CopyData<Quaternion>, CopyData<Vector2D>, CopyData<Vector4D>, CopyData<Vector>, Free, V_strlen, memcpy, operator=
// calls: strlen, memcpy, Warning
// callers: CMemberScriptBinding0<CBodyComponent*, bool (CBodyComponent::*)(), bool>::Call, CMemberScriptBinding0<CBodyComponent*, HSequence (CBodyComponent::*)(), HSequence>::Call, CMemberScriptBinding1<CBodyComponent*, float (CBodyComponent::*)(char const*), float, char const*>::Call, CMemberScriptBinding1<CBodyComponent*, HSequence (CBodyComponent::*)(char const*), HSequence, char const*>::Call
// strings: "Attempted to ConvertToCopiedData for unsupported type (%d)\n"
// globals: jpt_1EB6282
void __fastcall CVariantBase<CVariantDefaultAllocator>::ConvertToCopiedData(
        CVariantBase<CVariantDefaultAllocator> *const this,
        bool silent)
{
  _DWORD *m_uint64; // r13
  _DWORD *v4; // rax
  _DWORD *v5; // r13
  _DWORD *v6; // rax
  _DWORD *v7; // r13
  _QWORD *v8; // rdi
  _DWORD *v9; // rax
  const char *v10; // r12
  unsigned int v11; // r13d
  void *v12; // rax

  switch ( this->m_type )
  {
    case 3:
      m_uint64 = this->m_uint64;
      if ( (this->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_uint64);
        this->m_flags &= ~1u;
      }
      this->m_uint64 = 0;
      this->m_type = 3;
      goto LABEL_5;
    case 4:
      v5 = this->m_uint64;
      if ( (this->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v5);
        this->m_flags &= ~1u;
      }
      this->m_uint64 = 0;
      this->m_type = 4;
      goto LABEL_13;
    case 0x19:
      v7 = this->m_uint64;
      if ( (this->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v7);
        this->m_flags &= ~1u;
      }
      this->m_uint64 = 0;
      v8 = g_pMemAlloc;
      this->m_type = 25;
      v9 = (**v8)(v8, 8);
      this->m_uint64 = v9;
      *v9 = *v7;
      v9[1] = v7[1];
      this->m_flags |= 1u;
      return;
    case 0x1B:
      v5 = this->m_uint64;
      if ( (this->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v5);
        this->m_flags &= ~1u;
      }
      this->m_uint64 = 0;
      this->m_type = 27;
LABEL_13:
      v6 = (**g_pMemAlloc)(g_pMemAlloc, 16);
      this->m_uint64 = v6;
      *v6 = *v5;
      v6[1] = v5[1];
      v6[2] = v5[2];
      v6[3] = v5[3];
      this->m_flags |= 1u;
      break;
    case 0x1E:
      v10 = this->m_uint64;
      if ( (this->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_uint64);
        this->m_flags &= ~1u;
      }
      this->m_uint64 = 0;
      this->m_type = 30;
      if ( v10 != 0 )
      {
        v11 = strlen(v10) + 1;
        v12 = (**g_pMemAlloc)(g_pMemAlloc, v11);
        this->m_uint64 = v12;
        memcpy(v12, v10, v11);
        this->m_flags |= 1u;
      }
      break;
    case 0x27:
      m_uint64 = this->m_uint64;
      if ( (this->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_uint64);
        this->m_flags &= ~1u;
      }
      this->m_uint64 = 0;
      this->m_type = 39;
LABEL_5:
      v4 = (**g_pMemAlloc)(g_pMemAlloc, 12);
      this->m_uint64 = v4;
      *v4 = *m_uint64;
      v4[1] = m_uint64[1];
      v4[2] = m_uint64[2];
      this->m_flags |= 1u;
      break;
    default:
      Warning("Attempted to ConvertToCopiedData for unsupported type (%d)\n", this->m_type);
      break;
  }
}


// CVariantBase<CVariantDefaultAllocator>::ConvertToCopiedData  (line 716, @0x0000000001f3e780, libserver.so)  // inlines: Allocate, Allocate<QAngle>, Allocate<Quaternion>, Allocate<Vector2D>, CopyData, CopyData<QAngle>, CopyData<Quaternion>, CopyData<Vector2D>, CopyData<Vector4D>, CopyData<Vector>, V_strlen, memcpy, operator=
// calls: CVariantBase<CVariantDefaultAllocator>::Free, strlen, memcpy, Warning
// callers: CMemberScriptBinding0<CScriptConvarAccessor*, HSCRIPT__* (CScriptConvarAccessor::*)(), HSCRIPT__*>::Call, CMemberScriptBinding0<CScriptEntityIterator*, HSCRIPT__* (CScriptEntityIterator::*)(), HSCRIPT__*>::Call, CMemberScriptBinding1<CScriptEntityIterator*, HSCRIPT__* (CScriptEntityIterator::*)(HSCRIPT__*), HSCRIPT__*, HSCRIPT__*>::Call, CMemberScriptBinding3<CScriptEntityIterator*, HSCRIPT__* (CScriptEntityIterator::*)(HSCRIPT__*, const Vector&, float), HSCRIPT__*, HSCRIPT__*, const Vector&, float>::Call, CMemberScriptBinding2<CScriptEntityIterator*, CVariantBase<CVariantDefaultAllocator> (CScriptEntityIterator::*)(const Vector&, float), CVariantBase<CVariantDefaultAllocator>, const Vector&, float>::Call, CNonMemberScriptBinding2<int (*)(int, int), int, int, int>::Call, CNonMemberScriptBinding3<float (*)(float, float, float), float, float, float, float>::Call, CNonMemberScriptBinding3<Vector (*)(const Vector&, const Vector&, float), Vector, const Vector&, const Vector&, float>::Call, CNonMemberScriptBinding2<Vector (*)(const QAngle&, const QAngle&), Vector, const QAngle&, const QAngle&>::Call, CNonMemberScriptBinding0<char const* (*)(), char const*>::Call, CNonMemberScriptBinding0<float (*)(), float>::Call, CNonMemberScriptBinding1<bool (*)(int), bool, int>::Call (55 total)
// strings: "Attempted to ConvertToCopiedData for unsupported type (%d)\n"
// globals: jpt_1F3E7B2
void __fastcall CVariantBase<CVariantDefaultAllocator>::ConvertToCopiedData(
        CVariantBase<CVariantDefaultAllocator> *const this,
        bool silent)
{
  _DWORD *m_uint64; // r12
  _DWORD *v4; // rax
  _DWORD *v5; // r12
  _DWORD *v6; // rax
  _DWORD *v7; // r12
  _DWORD *v8; // rax
  const char *v9; // r12
  unsigned int v10; // r13d
  void *v11; // rax

  switch ( this->m_type )
  {
    case 3:
      m_uint64 = this->m_uint64;
      CVariantBase<CVariantDefaultAllocator>::Free(this);
      this->m_type = &loc_2 + 1;
      goto LABEL_3;
    case 4:
      v5 = this->m_uint64;
      CVariantBase<CVariantDefaultAllocator>::Free(this);
      this->m_type = 4;
      goto LABEL_6;
    case 0x19:
      v7 = this->m_uint64;
      CVariantBase<CVariantDefaultAllocator>::Free(this);
      this->m_type = 25;
      v8 = (**g_pMemAlloc)(g_pMemAlloc, 8);
      this->m_uint64 = v8;
      *v8 = *v7;
      v8[1] = v7[1];
      this->m_flags |= 1u;
      return;
    case 0x1B:
      v5 = this->m_uint64;
      CVariantBase<CVariantDefaultAllocator>::Free(this);
      this->m_type = 27;
LABEL_6:
      v6 = (**g_pMemAlloc)(g_pMemAlloc, 16);
      this->m_uint64 = v6;
      *v6 = *v5;
      v6[1] = v5[1];
      v6[2] = v5[2];
      v6[3] = v5[3];
      this->m_flags |= 1u;
      break;
    case 0x1E:
      v9 = this->m_uint64;
      CVariantBase<CVariantDefaultAllocator>::Free(this);
      this->m_type = 30;
      if ( v9 != 0 )
      {
        v10 = strlen(v9) + 1;
        v11 = (**g_pMemAlloc)(g_pMemAlloc, v10);
        this->m_uint64 = v11;
        memcpy(v11, v9, v10);
        this->m_flags |= 1u;
      }
      else
      {
        this->m_uint64 = 0;
      }
      break;
    case 0x27:
      m_uint64 = this->m_uint64;
      CVariantBase<CVariantDefaultAllocator>::Free(this);
      this->m_type = 39;
LABEL_3:
      v4 = (**g_pMemAlloc)(g_pMemAlloc, 12);
      this->m_uint64 = v4;
      *v4 = *m_uint64;
      v4[1] = m_uint64[1];
      v4[2] = m_uint64[2];
      this->m_flags |= 1u;
      break;
    default:
      Warning("Attempted to ConvertToCopiedData for unsupported type (%d)\n", this->m_type);
      break;
  }
}


// CVariantBase<CVariantDefaultAllocator>::ConvertToCopiedData  (line 716, @0x0000000002024e50, libserver.so)  // inlines: Allocate, Allocate<QAngle>, Allocate<Quaternion>, Allocate<Vector2D>, CopyData, CopyData<QAngle>, CopyData<Quaternion>, CopyData<Vector2D>, CopyData<Vector4D>, CopyData<Vector>, Free, V_strlen, memcpy, operator=
// calls: strlen, memcpy, Warning
// callers: CMemberScriptBinding1<CBaseTrigger*, bool (CBaseTrigger::*)(HSCRIPT__*), bool, HSCRIPT__*>::Call, CMemberScriptBinding0<CDOTA_Unit_Courier*, bool (CDOTA_Unit_Courier::*)(), bool>::Call, CEntitySystem::AddEntityIOEvent, CMemberScriptBinding2<CNavScript*, CVariantBase<CVariantDefaultAllocator> (CNavScript::*)(const Vector&, const Vector&), CVariantBase<CVariantDefaultAllocator>, const Vector&, const Vector&>::Call
// strings: "Attempted to ConvertToCopiedData for unsupported type (%d)\n"
// globals: jpt_2024E88
void __fastcall CVariantBase<CVariantDefaultAllocator>::ConvertToCopiedData(
        CVariantBase<CVariantDefaultAllocator> *const this,
        bool silent)
{
  int16 m_type; // cx
  _DWORD *m_uint64; // r12
  _DWORD *v5; // rax
  _DWORD *v6; // r12
  _DWORD *v7; // rax
  _DWORD *v8; // r12
  _DWORD *v9; // rax
  const char *v10; // r12
  unsigned int v11; // r13d
  void *v12; // rax

  if ( (this->m_flags & 1) == 0 )
  {
    m_type = this->m_type;
    switch ( m_type )
    {
      case 3:
        m_uint64 = this->m_uint64;
        this->m_uint64 = 0;
        this->m_type = 3;
        goto LABEL_4;
      case 4:
        v6 = this->m_uint64;
        this->m_uint64 = 0;
        this->m_type = 4;
        goto LABEL_8;
      case 25:
        v8 = this->m_uint64;
        this->m_uint64 = 0;
        this->m_type = 25;
        v9 = (**g_pMemAlloc)(g_pMemAlloc, 8);
        this->m_uint64 = v9;
        *v9 = *v8;
        v9[1] = v8[1];
        this->m_flags |= 1u;
        return;
      case 27:
        v6 = this->m_uint64;
        this->m_uint64 = 0;
        this->m_type = 27;
LABEL_8:
        v7 = (**g_pMemAlloc)(g_pMemAlloc, 16);
        this->m_uint64 = v7;
        *v7 = *v6;
        v7[1] = v6[1];
        v7[2] = v6[2];
        v7[3] = v6[3];
        this->m_flags |= 1u;
        break;
      case 30:
        v10 = this->m_uint64;
        this->m_uint64 = 0;
        this->m_type = 30;
        if ( v10 != 0 )
        {
          v11 = strlen(v10) + 1;
          v12 = (**g_pMemAlloc)(g_pMemAlloc, v11);
          this->m_uint64 = v12;
          memcpy(v12, v10, v11);
          this->m_flags |= 1u;
        }
        break;
      case 39:
        m_uint64 = this->m_uint64;
        this->m_uint64 = 0;
        this->m_type = 39;
LABEL_4:
        v5 = (**g_pMemAlloc)(g_pMemAlloc, 12);
        this->m_uint64 = v5;
        *v5 = *m_uint64;
        v5[1] = m_uint64[1];
        v5[2] = m_uint64[2];
        this->m_flags |= 1u;
        break;
      default:
        if ( !silent )
          Warning("Attempted to ConvertToCopiedData for unsupported type (%d)\n", m_type);
        break;
    }
  }
}


// CVariantBase<CVariantDefaultAllocator>::ConvertToCopiedData  (line 716, @0x0000000002437c80 libserver.so, @0x00000000025adf40 libserver.so, @0x0000000002842e40 libserver.so)  // inlines: Allocate, Allocate<QAngle>, Allocate<Quaternion>, Allocate<Vector2D>, CopyData, CopyData<QAngle>, CopyData<Quaternion>, CopyData<Vector2D>, CopyData<Vector4D>, CopyData<Vector>, V_strlen, memcpy, operator=
// calls: CVariantBase<CVariantDefaultAllocator>::Free, strlen, memcpy, Warning
// callers: CMemberScriptBinding2<CDOTA_Ability_Lua*, int (CDOTA_Ability_Lua::*)(const Vector&, HSCRIPT__*), int, const Vector&, HSCRIPT__*>::Call, CMemberScriptBinding1<CDOTA_Ability_Lua*, int (CDOTA_Ability_Lua::*)(int), int, int>::Call, CMemberScriptBinding1<CDOTA_Ability_Lua*, float (CDOTA_Ability_Lua::*)(int), float, int>::Call, CMemberScriptBinding1<CDOTA_Ability_Lua*, int (CDOTA_Ability_Lua::*)(HSCRIPT__*), int, HSCRIPT__*>::Call, CMemberScriptBinding1<CDOTA_Ability_Lua*, int (CDOTA_Ability_Lua::*)(const Vector&), int, const Vector&>::Call, CMemberScriptBinding1<CDOTA_Ability_Lua*, char const* (CDOTA_Ability_Lua::*)(HSCRIPT__*), char const*, HSCRIPT__*>::Call, CMemberScriptBinding1<CDOTA_Ability_Lua*, char const* (CDOTA_Ability_Lua::*)(const Vector&), char const*, const Vector&>::Call, CMemberScriptBinding2<CDOTA_Ability_Lua*, bool (CDOTA_Ability_Lua::*)(HSCRIPT__*, const Vector&), bool, HSCRIPT__*, const Vector&>::Call, CMemberScriptBinding3<CDOTA_Ability_Lua*, bool (CDOTA_Ability_Lua::*)(HSCRIPT__*, const Vector&, HSCRIPT__*), bool, HSCRIPT__*, const Vector&, HSCRIPT__*>::Call, CMemberScriptBinding0<CDOTA_Ability_Lua*, char const* (CDOTA_Ability_Lua::*)(), char const*>::Call, CMemberScriptBinding0<CDOTA_Ability_Lua*, bool (CDOTA_Ability_Lua::*)(), bool>::Call, CMemberScriptBinding0<CDOTA_Ability_Lua*, int (CDOTA_Ability_Lua::*)(), int>::Call (41 total)
// strings: "Attempted to ConvertToCopiedData for unsupported type (%d)\n"
// globals: jpt_2437CB2
void __fastcall CVariantBase<CVariantDefaultAllocator>::ConvertToCopiedData(
        CVariantBase<CVariantDefaultAllocator> *const this,
        bool silent)
{
  _DWORD *m_uint64; // r12
  _DWORD *v4; // rax
  _DWORD *v5; // r12
  _DWORD *v6; // rax
  _DWORD *v7; // r12
  _DWORD *v8; // rax
  const char *v9; // r12
  unsigned int v10; // r13d
  void *v11; // rax

  switch ( this->m_type )
  {
    case 3:
      m_uint64 = this->m_uint64;
      CVariantBase<CVariantDefaultAllocator>::Free(this);
      this->m_type = 3;
      goto LABEL_3;
    case 4:
      v5 = this->m_uint64;
      CVariantBase<CVariantDefaultAllocator>::Free(this);
      this->m_type = 4;
      goto LABEL_6;
    case 0x19:
      v7 = this->m_uint64;
      CVariantBase<CVariantDefaultAllocator>::Free(this);
      this->m_type = 25;
      v8 = (**g_pMemAlloc)(g_pMemAlloc, 8);
      this->m_uint64 = v8;
      *v8 = *v7;
      v8[1] = v7[1];
      this->m_flags |= 1u;
      return;
    case 0x1B:
      v5 = this->m_uint64;
      CVariantBase<CVariantDefaultAllocator>::Free(this);
      this->m_type = 27;
LABEL_6:
      v6 = (**g_pMemAlloc)(g_pMemAlloc, 16);
      this->m_uint64 = v6;
      *v6 = *v5;
      v6[1] = v5[1];
      v6[2] = v5[2];
      v6[3] = v5[3];
      this->m_flags |= 1u;
      break;
    case 0x1E:
      v9 = this->m_uint64;
      CVariantBase<CVariantDefaultAllocator>::Free(this);
      this->m_type = 30;
      if ( v9 != 0 )
      {
        v10 = strlen(v9) + 1;
        v11 = (**g_pMemAlloc)(g_pMemAlloc, v10);
        this->m_uint64 = v11;
        memcpy(v11, v9, v10);
        this->m_flags |= 1u;
      }
      else
      {
        this->m_uint64 = 0;
      }
      break;
    case 0x27:
      m_uint64 = this->m_uint64;
      CVariantBase<CVariantDefaultAllocator>::Free(this);
      this->m_type = 39;
LABEL_3:
      v4 = (**g_pMemAlloc)(g_pMemAlloc, 12);
      this->m_uint64 = v4;
      *v4 = *m_uint64;
      v4[1] = m_uint64[1];
      v4[2] = m_uint64[2];
      this->m_flags |= 1u;
      break;
    default:
      Warning("Attempted to ConvertToCopiedData for unsupported type (%d)\n", this->m_type);
      break;
  }
}


// CVariantBase<CVariantDefaultAllocator>::ConvertToCopiedData  (line 716, @0x0000000002466270, libserver.so)  // inlines: Allocate, Allocate<QAngle>, Allocate<Quaternion>, Allocate<Vector2D>, CopyData, CopyData<QAngle>, CopyData<Quaternion>, CopyData<Vector2D>, CopyData<Vector4D>, CopyData<Vector>, Free, V_strlen, memcpy, operator=
// calls: strlen, memcpy, Warning
// callers: CMemberScriptBinding0<CDOTABaseGameMode*, float (CDOTABaseGameMode::*)(), float>::Call, CMemberScriptBinding0<CDOTABaseGameMode*, int (CDOTABaseGameMode::*)(), int>::Call, CMemberScriptBinding0<CDOTABaseGameMode*, bool (CDOTABaseGameMode::*)(), bool>::Call, CMemberScriptBinding1<CDOTABaseGameMode*, bool (CDOTABaseGameMode::*)(int), bool, int>::Call
// strings: "Attempted to ConvertToCopiedData for unsupported type (%d)\n"
// globals: jpt_24662A2
void __fastcall CVariantBase<CVariantDefaultAllocator>::ConvertToCopiedData(
        CVariantBase<CVariantDefaultAllocator> *const this,
        bool silent)
{
  _DWORD *m_uint64; // r13
  _DWORD *v4; // rax
  _DWORD *v5; // r13
  _DWORD *v6; // rax
  _DWORD *v7; // r13
  _DWORD *v8; // rax
  const char *v9; // r12
  unsigned int v10; // r13d
  void *v11; // rax

  switch ( this->m_type )
  {
    case 3:
      m_uint64 = this->m_uint64;
      if ( (this->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_uint64);
        this->m_flags &= ~1u;
      }
      this->m_uint64 = 0;
      this->m_type = 3;
      goto LABEL_5;
    case 4:
      v5 = this->m_uint64;
      if ( (this->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v5);
        this->m_flags &= ~1u;
      }
      this->m_uint64 = 0;
      this->m_type = 4;
      goto LABEL_13;
    case 0x19:
      v7 = this->m_uint64;
      if ( (this->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v7);
        this->m_flags &= ~1u;
      }
      this->m_uint64 = 0;
      this->m_type = 25;
      v8 = (**g_pMemAlloc)(g_pMemAlloc, 8);
      this->m_uint64 = v8;
      *v8 = *v7;
      v8[1] = v7[1];
      this->m_flags |= 1u;
      return;
    case 0x1B:
      v5 = this->m_uint64;
      if ( (this->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v5);
        this->m_flags &= ~1u;
      }
      this->m_uint64 = 0;
      this->m_type = 27;
LABEL_13:
      v6 = (**g_pMemAlloc)(g_pMemAlloc, 16);
      this->m_uint64 = v6;
      *v6 = *v5;
      v6[1] = v5[1];
      v6[2] = v5[2];
      v6[3] = v5[3];
      this->m_flags |= 1u;
      break;
    case 0x1E:
      v9 = this->m_uint64;
      if ( (this->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_uint64);
        this->m_flags &= ~1u;
      }
      this->m_uint64 = 0;
      this->m_type = 30;
      if ( v9 != 0 )
      {
        v10 = strlen(v9) + 1;
        v11 = (**g_pMemAlloc)(g_pMemAlloc, v10);
        this->m_uint64 = v11;
        memcpy(v11, v9, v10);
        this->m_flags |= 1u;
      }
      break;
    case 0x27:
      m_uint64 = this->m_uint64;
      if ( (this->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_uint64);
        this->m_flags &= ~1u;
      }
      this->m_uint64 = 0;
      this->m_type = 39;
LABEL_5:
      v4 = (**g_pMemAlloc)(g_pMemAlloc, 12);
      this->m_uint64 = v4;
      *v4 = *m_uint64;
      v4[1] = m_uint64[1];
      v4[2] = m_uint64[2];
      this->m_flags |= 1u;
      break;
    default:
      Warning("Attempted to ConvertToCopiedData for unsupported type (%d)\n", this->m_type);
      break;
  }
}


// CVariantBase<CVariantDefaultAllocator>::ConvertToCopiedData  (line 716, @0x00000000027b5e20, libserver.so)  // inlines: Allocate, Allocate<QAngle>, Allocate<Quaternion>, Allocate<Vector2D>, Allocate<Vector4D>, Allocate<Vector>, CopyData, CopyData<QAngle>, CopyData<Quaternion>, CopyData<Vector2D>, CopyData<Vector4D>, CopyData<Vector>, Free, V_strlen, memcpy, operator=
// calls: CVariantBase<CVariantDefaultAllocator>::Free, strlen, memcpy, Warning
// callers: CMemberScriptBinding1<CScriptHeroList*, HSCRIPT__* (CScriptHeroList::*)(int), HSCRIPT__*, int>::Call, CMemberScriptBinding0<CScriptHeroList*, int (CScriptHeroList::*)(), int>::Call, CMemberScriptBinding0<CScriptHeroList*, CVariantBase<CVariantDefaultAllocator> (CScriptHeroList::*)(), CVariantBase<CVariantDefaultAllocator> >::Call, CMemberScriptBinding1<CScriptHTTPRequest*, bool (CScriptHTTPRequest::*)(HSCRIPT__*), bool, HSCRIPT__*>::Call, CMemberScriptBinding1<CScriptHTTPRequest*, bool (CScriptHTTPRequest::*)(unsigned int), bool, unsigned int>::Call, CNonMemberScriptBinding1<Vector (*)(float), Vector, float>::Call, CNonMemberScriptBinding2<HSCRIPT__* (*)(HSCRIPT__*, Vector), HSCRIPT__*, HSCRIPT__*, Vector>::Call, CNonMemberScriptBinding2<HSCRIPT__* (*)(Vector, HSCRIPT__*), HSCRIPT__*, Vector, HSCRIPT__*>::Call, CNonMemberScriptBinding3<bool (*)(HSCRIPT__*, Vector, bool), bool, HSCRIPT__*, Vector, bool>::Call, CNonMemberScriptBinding9<CVariantBase<CVariantDefaultAllocator> (*)(int, const Vector&, HSCRIPT__*, float, int, int, int, int, bool), CVariantBase<CVariantDefaultAllocator>, int, const Vector&, HSCRIPT__*, float, int, int, int, int, bool>::Call, CNonMemberScriptBinding8<CVariantBase<CVariantDefaultAllocator> (*)(int, const Vector&, const Vector&, HSCRIPT__*, float, int, int, int), CVariantBase<CVariantDefaultAllocator>, int, const Vector&, const Vector&, HSCRIPT__*, float, int, int, int>::Call, CNonMemberScriptBinding2<Vector (*)(Vector, HSCRIPT__*), Vector, Vector, HSCRIPT__*>::Call (32 total)
// strings: "Attempted to ConvertToCopiedData for unsupported type (%d)\n"
// globals: jpt_27B5E52
void __fastcall CVariantBase<CVariantDefaultAllocator>::ConvertToCopiedData(
        CVariantBase<CVariantDefaultAllocator> *const this,
        bool silent)
{
  _DWORD *m_uint64; // r12
  _QWORD *v4; // rdi
  _DWORD *v5; // rax
  _DWORD *v6; // r12
  _QWORD *v7; // rdi
  _DWORD *v8; // rax
  _DWORD *v9; // r12
  _DWORD *v10; // rax
  const char *v11; // r12
  unsigned int v12; // r13d
  void *v13; // rax

  switch ( this->m_type )
  {
    case 3:
      m_uint64 = this->m_uint64;
      if ( (this->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_uint64);
        this->m_flags &= ~1u;
      }
      this->m_uint64 = 0;
      this->m_type = 3;
      v4 = g_pMemAlloc;
      goto LABEL_3;
    case 4:
      v6 = this->m_uint64;
      if ( (this->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v6);
        this->m_flags &= ~1u;
      }
      this->m_uint64 = 0;
      this->m_type = 4;
      v7 = g_pMemAlloc;
      goto LABEL_11;
    case 0x19:
      v9 = this->m_uint64;
      CVariantBase<CVariantDefaultAllocator>::Free(this);
      this->m_type = 25;
      v10 = (**g_pMemAlloc)(g_pMemAlloc, 8);
      this->m_uint64 = v10;
      *v10 = *v9;
      v10[1] = v9[1];
      this->m_flags |= 1u;
      return;
    case 0x1B:
      v6 = this->m_uint64;
      CVariantBase<CVariantDefaultAllocator>::Free(this);
      this->m_type = 27;
      v7 = g_pMemAlloc;
LABEL_11:
      v8 = (**v7)(v7, 16);
      this->m_uint64 = v8;
      *v8 = *v6;
      v8[1] = v6[1];
      v8[2] = v6[2];
      v8[3] = v6[3];
      this->m_flags |= 1u;
      break;
    case 0x1E:
      v11 = this->m_uint64;
      if ( (this->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_uint64);
        this->m_flags &= ~1u;
      }
      this->m_uint64 = 0;
      this->m_type = 30;
      if ( v11 != 0 )
      {
        v12 = strlen(v11) + 1;
        v13 = (**g_pMemAlloc)(g_pMemAlloc, v12);
        this->m_uint64 = v13;
        memcpy(v13, v11, v12);
        this->m_flags |= 1u;
      }
      break;
    case 0x27:
      m_uint64 = this->m_uint64;
      CVariantBase<CVariantDefaultAllocator>::Free(this);
      this->m_type = 39;
      v4 = g_pMemAlloc;
LABEL_3:
      v5 = (**v4)(v4, 12);
      this->m_uint64 = v5;
      *v5 = *m_uint64;
      v5[1] = m_uint64[1];
      v5[2] = m_uint64[2];
      this->m_flags |= 1u;
      break;
    default:
      Warning("Attempted to ConvertToCopiedData for unsupported type (%d)\n", this->m_type);
      break;
  }
}


// CVariantBase<CVariantDefaultAllocator>::AssignTo  (line 1057, @0x0000000001ef29b0, libserver.so)  // inlines: atof
// calls: strtod, VariantFieldTypeName, Warning
// callers: InputFunctionAdapterS1Var, CBaseEntity::DispatchScriptThink, CDOTA_ActionRunner::DecodeIntValue, CDOTA_ActionRunner::DecodeFloatValue
// strings: "No conversion from %s to float now\n"
// globals: jpt_1EF29DB
bool __fastcall CVariantBase<CVariantDefaultAllocator>::AssignTo(
        const CVariantBase<CVariantDefaultAllocator> *const this,
        float *pDest)
{
  int16 m_type; // ax
  bool result; // al
  float m_int; // xmm0_4
  __m128d v6; // xmm0
  const char *v7; // rax
  uint64 v8; // rdx

  m_type = this->m_type;
  switch ( m_type )
  {
    case 0:
      *pDest = 0.0;
      result = 0;
      break;
    case 1:
      *pDest = this->m_float;
      result = 1;
      break;
    case 5:
      m_int = this->m_int;
      goto LABEL_6;
    case 6:
      *pDest = this->m_char;
      result = 1;
      break;
    case 26:
      *pDest = this->m_uint64;
      result = 1;
      break;
    case 30:
      v6.m128d_f64[0] = strtod(this->m_pszString, 0);
      *pDest = _mm_movedup_pd(v6).m128d_f64[0];
      result = 1;
      break;
    case 33:
      if ( this->m_int64 < 0 )
      {
        v8 = this->m_uint64 & 1 | (this->m_uint64 >> 1);
        m_int = v8 + v8;
      }
      else
      {
        m_int = this->m_uint64;
      }
LABEL_6:
      *pDest = m_int;
      result = 1;
      break;
    case 34:
      *pDest = this->m_float64;
      result = 1;
      break;
    case 37:
      *pDest = this->m_int;
      result = 1;
      break;
    default:
      v7 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to float now\n", v7);
      result = 0;
      break;
  }
  return result;
}


// CVariantBase<CEntityVariantAllocator>::AssignTo  (line 1057, @0x000000000297c700, libserver.so)  // inlines: VariantFieldTypeName, atof
// calls: strtod, Warning
// callers: CDOTA_BaseNPC::Spawn
// strings: "No conversion from %s to float now\n", "js_raw_args", "js_array", "js_object", "js_value", "hscript_lightbinding" (20 total)
// globals: jpt_297C72B, jpt_297C848
bool __fastcall CVariantBase<CEntityVariantAllocator>::AssignTo(
        const CVariantBase<CEntityVariantAllocator> *const this,
        float *pDest)
{
  int16 m_type; // ax
  bool result; // al
  float m_int; // xmm0_4
  __m128d v6; // xmm0
  const char *v7; // rsi
  uint64 v8; // rdx

  m_type = this->m_type;
  switch ( m_type )
  {
    case 0:
      *pDest = 0.0;
      result = 0;
      break;
    case 1:
      *pDest = this->m_float;
      result = 1;
      break;
    case 5:
      m_int = this->m_int;
      goto LABEL_6;
    case 6:
      *pDest = this->m_char;
      result = 1;
      break;
    case 26:
      *pDest = this->m_uint64;
      result = 1;
      break;
    case 30:
      v6.m128d_f64[0] = strtod(this->m_pszString, 0);
      *pDest = _mm_movedup_pd(v6).m128d_f64[0];
      result = 1;
      break;
    case 33:
      if ( this->m_int64 < 0 )
      {
        v8 = this->m_uint64 & 1 | (this->m_uint64 >> 1);
        m_int = v8 + v8;
      }
      else
      {
        m_int = this->m_uint64;
      }
LABEL_6:
      *pDest = m_int;
      result = 1;
      break;
    case 34:
      *pDest = this->m_float64;
      result = 1;
      break;
    case 37:
      *pDest = this->m_int;
      result = 1;
      break;
    default:
      switch ( m_type )
      {
        case 0:
          v7 = "void";
          break;
        case 1:
          v7 = "float";
          break;
        case 3:
          v7 = "vector";
          break;
        case 4:
          v7 = "quaternion";
          break;
        case 5:
          v7 = "integer";
          break;
        case 6:
          v7 = "boolean";
          break;
        case 8:
          v7 = "character";
          break;
        case 9:
          v7 = "color";
          break;
        case 13:
          v7 = "ehandle";
          break;
        case 25:
          v7 = "vector2d";
          break;
        case 26:
          v7 = "int64";
          break;
        case 27:
          v7 = "vector4d";
          break;
        case 28:
          v7 = "resourcehandle";
          break;
        case 30:
          v7 = "cstring";
          break;
        case 31:
          v7 = "hscript";
          break;
        case 32:
          v7 = "variant";
          break;
        case 33:
          v7 = "uint64";
          break;
        case 34:
          v7 = "float64";
          break;
        case 37:
          v7 = "unsigned";
          break;
        case 38:
          v7 = "utlstringtoken";
          break;
        case 39:
          v7 = "qangle";
          break;
        case 48:
          v7 = "hscript_lightbinding";
          break;
        case 49:
          v7 = "js_value";
          break;
        case 50:
          v7 = "js_object";
          break;
        case 51:
          v7 = "js_array";
          break;
        case 52:
          v7 = "js_raw_args";
          break;
        default:
          v7 = "unknown_variant_type";
          break;
      }
      Warning("No conversion from %s to float now\n", v7);
      result = 0;
      break;
  }
  return result;
}


// CVariantBase<CEntityVariantAllocator>::AssignTo  (line 1077, @0x000000000237a420, libserver.so)  // inlines: VariantFieldTypeName, atoi
// calls: strtol, Warning
// callers: CPhysicsProp::Spawn, CDotaQuest::Spawn, CDOTA_BaseNPC_Building::Spawn, CEntityClass::UnserializeKey, CEntityClass::Unserialize
// strings: "No conversion from %s to int now\n", "js_raw_args", "js_array", "js_object", "js_value", "hscript_lightbinding" (20 total)
// globals: jpt_237A44B, jpt_237A578
bool __fastcall CVariantBase<CEntityVariantAllocator>::AssignTo(
        const CVariantBase<CEntityVariantAllocator> *const this,
        int *pDest)
{
  int16 m_type; // ax
  int m_int; // eax
  bool result; // al
  uint64 m_uint64; // rdx
  int v6; // eax
  const char *v7; // rsi

  m_type = this->m_type;
  switch ( m_type )
  {
    case 0:
      *pDest = 0;
      result = 0;
      break;
    case 1:
      *pDest = this->m_float;
      result = 1;
      break;
    case 5:
      *pDest = this->m_int;
      result = 1;
      break;
    case 6:
      *pDest = this->m_char;
      result = 1;
      break;
    case 26:
      LODWORD(m_uint64) = 0x7FFFFFFF;
      if ( this->m_int64 <= 0x7FFFFFFF )
      {
        LODWORD(m_uint64) = 0x80000000;
        if ( this->m_uint64 >= 0xFFFFFFFF80000000LL )
          m_uint64 = this->m_uint64;
      }
      *pDest = m_uint64;
      result = 1;
      break;
    case 30:
      *pDest = strtol(this->m_pszString, 0, 10);
      result = 1;
      break;
    case 33:
      v6 = 0x7FFFFFFF;
      if ( this->m_uint64 <= 0x7FFFFFFE )
        v6 = this->m_uint64;
      *pDest = v6;
      result = 1;
      break;
    case 34:
      *pDest = this->m_float64;
      result = 1;
      break;
    case 37:
      m_int = 0x7FFFFFFF;
      if ( this->m_int <= 0x7FFFFFFEu )
        m_int = this->m_int;
      *pDest = m_int;
      result = 1;
      break;
    default:
      switch ( m_type )
      {
        case 0:
          v7 = "void";
          break;
        case 1:
          v7 = "float";
          break;
        case 3:
          v7 = "vector";
          break;
        case 4:
          v7 = "quaternion";
          break;
        case 5:
          v7 = "integer";
          break;
        case 6:
          v7 = "boolean";
          break;
        case 8:
          v7 = "character";
          break;
        case 9:
          v7 = "color";
          break;
        case 13:
          v7 = "ehandle";
          break;
        case 25:
          v7 = "vector2d";
          break;
        case 26:
          v7 = "int64";
          break;
        case 27:
          v7 = "vector4d";
          break;
        case 28:
          v7 = "resourcehandle";
          break;
        case 30:
          v7 = "cstring";
          break;
        case 31:
          v7 = "hscript";
          break;
        case 32:
          v7 = "variant";
          break;
        case 33:
          v7 = "uint64";
          break;
        case 34:
          v7 = "float64";
          break;
        case 37:
          v7 = "unsigned";
          break;
        case 38:
          v7 = "utlstringtoken";
          break;
        case 39:
          v7 = "qangle";
          break;
        case 48:
          v7 = "hscript_lightbinding";
          break;
        case 49:
          v7 = "js_value";
          break;
        case 50:
          v7 = "js_object";
          break;
        case 51:
          v7 = "js_array";
          break;
        case 52:
          v7 = "js_raw_args";
          break;
        default:
          v7 = "unknown_variant_type";
          break;
      }
      Warning("No conversion from %s to int now\n", v7);
      result = 0;
      break;
  }
  return result;
}


// CVariantBase<CEntityVariantAllocator>::AssignTo  (line 1115, @0x00000000026af990, libserver.so)  // inlines: VariantFieldTypeName, _V_strcmp
// calls: Warning
// callers: CDotaQuest::Spawn, CDotaSubquestBase::Spawn
// strings: "false", "true", "Invalid conversion : CString '%s' to bool\n", "No conversion from %s to bool now\n", "js_raw_args", "js_array" (23 total)
// globals: jpt_26AF9B6, jpt_26AFAF0
bool __fastcall CVariantBase<CEntityVariantAllocator>::AssignTo(
        const CVariantBase<CEntityVariantAllocator> *const this,
        bool *pDest)
{
  int16 m_type; // ax
  bool result; // al
  bool v4; // zf
  const char *m_uint64; // rax
  const char *v6; // rsi

  m_type = this->m_type;
  switch ( m_type )
  {
    case 0:
      *pDest = 0;
      result = 0;
      break;
    case 1:
      v4 = this->m_float == 0.0;
      goto LABEL_5;
    case 5:
    case 37:
      *pDest = this->m_int != 0;
      result = 1;
      break;
    case 6:
      *pDest = this->m_char;
      result = 1;
      break;
    case 26:
    case 33:
      *pDest = this->m_uint64 != 0;
      result = 1;
      break;
    case 30:
      m_uint64 = this->m_uint64;
      if ( strcmp(this->m_pszString, "0") == 0 || strcmp(m_uint64, "false") == 0 || strcmp(m_uint64, "no") == 0 )
      {
        *pDest = 0;
        result = 1;
      }
      else if ( strcmp(m_uint64, "1") == 0 || strcmp(m_uint64, "true") == 0 || strcmp(m_uint64, "yes") == 0 )
      {
        *pDest = 1;
        result = 1;
      }
      else
      {
        Warning("Invalid conversion : CString '%s' to bool\n", m_uint64);
        result = 0;
      }
      break;
    case 34:
      v4 = this->m_float64 == 0.0;
LABEL_5:
      *pDest = !v4;
      result = 1;
      break;
    default:
      switch ( m_type )
      {
        case 0:
          v6 = "void";
          break;
        case 1:
          v6 = "float";
          break;
        case 3:
          v6 = "vector";
          break;
        case 4:
          v6 = "quaternion";
          break;
        case 5:
          v6 = "integer";
          break;
        case 6:
          v6 = "boolean";
          break;
        case 8:
          v6 = "character";
          break;
        case 9:
          v6 = "color";
          break;
        case 13:
          v6 = "ehandle";
          break;
        case 25:
          v6 = "vector2d";
          break;
        case 26:
          v6 = "int64";
          break;
        case 27:
          v6 = "vector4d";
          break;
        case 28:
          v6 = "resourcehandle";
          break;
        case 30:
          v6 = "cstring";
          break;
        case 31:
          v6 = "hscript";
          break;
        case 32:
          v6 = "variant";
          break;
        case 33:
          v6 = "uint64";
          break;
        case 34:
          v6 = "float64";
          break;
        case 37:
          v6 = "unsigned";
          break;
        case 38:
          v6 = "utlstringtoken";
          break;
        case 39:
          v6 = "qangle";
          break;
        case 48:
          v6 = "hscript_lightbinding";
          break;
        case 49:
          v6 = "js_value";
          break;
        case 50:
          v6 = "js_object";
          break;
        case 51:
          v6 = "js_array";
          break;
        case 52:
          v6 = "js_raw_args";
          break;
        default:
          v6 = "unknown_variant_type";
          break;
      }
      Warning("No conversion from %s to bool now\n", v6);
      result = 0;
      break;
  }
  return result;
}


// CVariantBase<CEntityVariantAllocator>::AssignTo  (line 1167, @0x0000000001ea4670, libserver.so)  // inlines: V_strncpy<unsigned int>, VariantFieldTypeName
// calls: V_snprintf, Warning, _V_strncpy
// callers: CInfoData::Spawn, AssignKeyValue<Vector>, AssignKeyValue<Quaternion>, AssignKeyValue<Color>, CEntityClass::UnserializeKey
// strings: "%g %g %g %g", "js_raw_args", "No conversion from %s to string at the moment!\n", "false", "true", "%d %d %d %d" (25 total)
// globals: jpt_1EA469E, jpt_1EA4928
bool __fastcall CVariantBase<CEntityVariantAllocator>::AssignTo(
        const CVariantBase<CEntityVariantAllocator> *const this,
        char *pDest,
        uint nBufLen)
{
  __int64 v3; // rcx
  unsigned __int16 m_type; // ax
  __int64 v6; // r8
  bool result; // al
  const char *v8; // rsi
  const char *v9; // rcx
  double m_float; // xmm0_8
  const char *m_uint64; // rax

  m_type = this->m_type;
  v6 = m_type;
  switch ( m_type )
  {
    case 0u:
      goto LABEL_6;
    case 1u:
      m_float = this->m_float;
      goto LABEL_15;
    case 3u:
    case 0x27u:
      V_snprintf(pDest, nBufLen, "%g %g %g", *this->m_pszString, *(this->m_uint64 + 4), *(this->m_uint64 + 8));
      return 1;
    case 4u:
    case 0x1Bu:
      V_snprintf(
        pDest,
        nBufLen,
        "%g %g %g %g",
        *this->m_pszString,
        *(this->m_uint64 + 4),
        *(this->m_uint64 + 8),
        *(this->m_uint64 + 12));
      return 1;
    case 5u:
      V_snprintf(pDest, nBufLen, "%d", this->m_int);
      return 1;
    case 6u:
      v9 = "true";
      if ( this->m_char == 0 )
        v9 = "false";
      V_snprintf(pDest, nBufLen, "%s", v9);
      return 1;
    case 8u:
      V_snprintf(pDest, nBufLen, "%c", this->m_char);
      return 1;
    case 9u:
      V_snprintf(
        pDest,
        nBufLen,
        "%d %d %d %d",
        this->m_int,
        BYTE1(this->m_int),
        BYTE2(this->m_int),
        HIBYTE(this->m_int));
      return 1;
    case 0x19u:
      V_snprintf(pDest, nBufLen, "%g %g", *this->m_pszString, *(this->m_uint64 + 4));
      return 1;
    case 0x1Au:
      V_snprintf(pDest, nBufLen, "%lld", this->m_uint64);
      return 1;
    case 0x1Eu:
      m_uint64 = "(null)";
      if ( this->m_uint64 != 0 )
        m_uint64 = this->m_uint64;
      _V_strncpy(pDest, m_uint64, nBufLen, v3, v6);
      return 1;
    case 0x21u:
      V_snprintf(pDest, nBufLen, "%llu", this->m_uint64);
      return 1;
    case 0x22u:
      m_float = this->m_float64;
LABEL_15:
      V_snprintf(pDest, nBufLen, "%g", m_float);
      result = 1;
      break;
    case 0x25u:
      V_snprintf(pDest, nBufLen, "%u", this->m_int);
      result = 1;
      break;
    default:
      switch ( m_type )
      {
        case 0u:
          v8 = "void";
          break;
        case 1u:
          v8 = "float";
          break;
        case 3u:
          v8 = "vector";
          break;
        case 4u:
          v8 = "quaternion";
          break;
        case 5u:
          v8 = "integer";
          break;
        case 6u:
          v8 = "boolean";
          break;
        case 8u:
          v8 = "character";
          break;
        case 9u:
          v8 = "color";
          break;
        case 0xDu:
          v8 = "ehandle";
          break;
        case 0x19u:
          v8 = "vector2d";
          break;
        case 0x1Au:
          v8 = "int64";
          break;
        case 0x1Bu:
          v8 = "vector4d";
          break;
        case 0x1Cu:
          v8 = "resourcehandle";
          break;
        case 0x1Eu:
          v8 = "cstring";
          break;
        case 0x1Fu:
          v8 = "hscript";
          break;
        case 0x20u:
          v8 = "variant";
          break;
        case 0x21u:
          v8 = "uint64";
          break;
        case 0x22u:
          v8 = "float64";
          break;
        case 0x25u:
          v8 = "unsigned";
          break;
        case 0x26u:
          v8 = "utlstringtoken";
          break;
        case 0x27u:
          v8 = "qangle";
          break;
        case 0x30u:
          v8 = "hscript_lightbinding";
          break;
        case 0x31u:
          v8 = "js_value";
          break;
        case 0x32u:
          v8 = "js_object";
          break;
        case 0x33u:
          v8 = "js_array";
          break;
        case 0x34u:
          v8 = "js_raw_args";
          break;
        default:
          v8 = "unknown_variant_type";
          break;
      }
      Warning("No conversion from %s to string at the moment!\n", v8);
LABEL_6:
      *pDest = 0;
      result = 0;
      break;
  }
  return result;
}


// CVariantBase<CVariantDefaultAllocator>::AssignTo  (line 1167, @0x0000000001ecdd90 libserver.so, @0x0000000002654fd0 libserver.so, @0x00000000030ab290 libserver.so)
// calls: V_snprintf
// callers: CVariantBase<CVariantDefaultAllocator>::AssignTo, CBaseEntity::DrawDebugTextOverlays
// strings: "%d %d %d %d"
bool __fastcall CVariantBase<CVariantDefaultAllocator>::AssignTo(
        const CVariantBase<CVariantDefaultAllocator> *const this,
        char *pDest,
        uint nBufLen)
{
  V_snprintf(pDest, nBufLen, "%d %d %d %d", this->m_int, BYTE1(this->m_int), BYTE2(this->m_int), HIBYTE(this->m_int));
  return 1;
}


// CVariantBase<CVariantDefaultAllocator>::AssignTo  (line 1167, @0x0000000001ef2ec0, libserver.so)  // inlines: V_strncpy<unsigned int>
// calls: V_snprintf, VariantFieldTypeName, Warning, CVariantBase<CVariantDefaultAllocator>::AssignTo, _V_strncpy
// callers: CVariantBase<CVariantDefaultAllocator>::Convert, CFogController::InputSetAngles, CBaseEntity::DrawInputOverlay, CPointCamera::InputChangeFOV, CDOTA_ProjectileManager::Script_CreateLinearProjectile, CDOTA_ProjectileManager::Script_CreateTrackingProjectile, CEntityInstance::PutInputDataInScriptTable, ConvertMapDataKV, CVariantSaveDataOps::Save, CEntitySystem::FindClassByDesignName
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "false", "true", "(null)"
// globals: jpt_1EF2EEE
bool __fastcall CVariantBase<CVariantDefaultAllocator>::AssignTo(
        const CVariantBase<CVariantDefaultAllocator> *const this,
        char *pDest,
        uint nBufLen)
{
  __int64 v3; // rcx
  unsigned __int16 m_type; // ax
  __int64 v6; // r8
  bool result; // al
  const char *v8; // rax
  const char *v9; // rcx
  double m_float; // xmm0_8
  const char *m_uint64; // rax

  m_type = this->m_type;
  v6 = m_type;
  switch ( m_type )
  {
    case 0u:
      goto LABEL_5;
    case 1u:
      m_float = this->m_float;
      goto LABEL_14;
    case 3u:
    case 0x27u:
      V_snprintf(pDest, nBufLen, "%g %g %g", *this->m_pszString, *(this->m_uint64 + 4), *(this->m_uint64 + 8));
      return 1;
    case 4u:
    case 0x1Bu:
      V_snprintf(
        pDest,
        nBufLen,
        "%g %g %g %g",
        *this->m_pszString,
        *(this->m_uint64 + 4),
        *(this->m_uint64 + 8),
        *(this->m_uint64 + 12));
      return 1;
    case 5u:
      V_snprintf(pDest, nBufLen, "%d", this->m_int);
      return 1;
    case 6u:
      v9 = "true";
      if ( this->m_char == 0 )
        v9 = "false";
      V_snprintf(pDest, nBufLen, "%s", v9);
      return 1;
    case 8u:
      V_snprintf(pDest, nBufLen, "%c", this->m_char);
      return 1;
    case 9u:
      return CVariantBase<CVariantDefaultAllocator>::AssignTo(this, pDest, nBufLen);
    case 0x19u:
      V_snprintf(pDest, nBufLen, "%g %g", *this->m_pszString, *(this->m_uint64 + 4));
      return 1;
    case 0x1Au:
      V_snprintf(pDest, nBufLen, "%lld", this->m_uint64);
      return 1;
    case 0x1Eu:
      m_uint64 = "(null)";
      if ( this->m_uint64 != 0 )
        m_uint64 = this->m_uint64;
      _V_strncpy(pDest, m_uint64, nBufLen, v3, v6);
      return 1;
    case 0x21u:
      V_snprintf(pDest, nBufLen, "%llu", this->m_uint64);
      return 1;
    case 0x22u:
      m_float = this->m_float64;
LABEL_14:
      V_snprintf(pDest, nBufLen, "%g", m_float);
      result = 1;
      break;
    case 0x25u:
      V_snprintf(pDest, nBufLen, "%u", this->m_int);
      result = 1;
      break;
    default:
      v8 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to string at the moment!\n", v8);
LABEL_5:
      *pDest = 0;
      result = 0;
      break;
  }
  return result;
}


// CVariantBase<CVariantDefaultAllocator>::AssignTo  (line 1221, @0x00000000030cb810, libserver.so)  // inlines: AssignTo, CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, V_strlen, V_strncpy<unsigned int>, VariantFieldTypeName, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<char, CUtlMemory<char, int> >::SetCount, strlen, V_snprintf, CUtlString::Set, Warning, CUtlString::Clear, CUtlMemory<char, int>::Purge, _V_strncpy, CVariantBase<CVariantDefaultAllocator>::AssignTo, CUtlVectorBase<char, CUtlMemory<char, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CEntitySystem::FindClassByName, CEntitySystem::DoConstructEntity
// strings: "%g %g %g %g", "js_raw_args", "No conversion from %s to string at the moment!\n", "(null)", "false", "true" (24 total)
// globals: jpt_30CB880, jpt_30CBB58
bool __fastcall CVariantBase<CVariantDefaultAllocator>::AssignTo(
        const CVariantBase<CVariantDefaultAllocator> *const this,
        CUtlString *pString)
{
  int v3; // esi
  int16 m_type; // ax
  char *m_pMemory; // r14
  const char *m_uint64; // rdi
  bool result; // al
  const char *v9; // rsi
  const char *v10; // rax
  const char *v11; // rcx
  bool v12; // [rsp+Ch] [rbp-44h]
  CUtlVector<char,CUtlMemory<char,int> > buf; // [rsp+10h] [rbp-40h] BYREF

  v3 = 256;
  if ( this->m_type == 30 )
  {
    m_uint64 = this->m_uint64;
    if ( m_uint64 != 0 )
      v3 = strlen(m_uint64) + 1;
    else
      v3 = 1;
  }
  buf.m_Size = 0;
  buf.m_Memory.m_pMemory = 0;
  buf.m_Memory.m_nAllocationCount = 0;
  buf.m_Memory.m_nGrowSize = 0;
  CUtlVectorBase<char,CUtlMemory<char,int>>::SetCount(&buf, v3);
  m_type = this->m_type;
  m_pMemory = buf.m_Memory.m_pMemory;
  switch ( m_type )
  {
    case 0:
      goto LABEL_11;
    case 1:
      V_snprintf(buf.m_Memory.m_pMemory, buf.m_Size, "%g", this->m_float);
      goto LABEL_6;
    case 3:
    case 39:
      V_snprintf(
        buf.m_Memory.m_pMemory,
        buf.m_Size,
        "%g %g %g",
        *this->m_pszString,
        *(this->m_uint64 + 4),
        *(this->m_uint64 + 8));
      goto LABEL_6;
    case 4:
    case 27:
      V_snprintf(
        buf.m_Memory.m_pMemory,
        buf.m_Size,
        "%g %g %g %g",
        *this->m_pszString,
        *(this->m_uint64 + 4),
        *(this->m_uint64 + 8),
        *(this->m_uint64 + 12));
      goto LABEL_6;
    case 5:
      V_snprintf(buf.m_Memory.m_pMemory, buf.m_Size, "%d", this->m_int);
      goto LABEL_6;
    case 6:
      v11 = "true";
      if ( this->m_char == 0 )
        v11 = "false";
      V_snprintf(buf.m_Memory.m_pMemory, buf.m_Size, "%s", v11);
      goto LABEL_6;
    case 8:
      V_snprintf(buf.m_Memory.m_pMemory, buf.m_Size, "%c", this->m_char);
      goto LABEL_6;
    case 9:
      if ( CVariantBase<CVariantDefaultAllocator>::AssignTo(this, buf.m_Memory.m_pMemory, buf.m_Size) )
        goto LABEL_6;
      goto LABEL_12;
    case 25:
      V_snprintf(buf.m_Memory.m_pMemory, buf.m_Size, "%g %g", *this->m_pszString, *(this->m_uint64 + 4));
      goto LABEL_6;
    case 26:
      V_snprintf(buf.m_Memory.m_pMemory, buf.m_Size, "%lld", this->m_uint64);
      goto LABEL_6;
    case 30:
      v10 = "(null)";
      if ( this->m_uint64 != 0 )
        v10 = this->m_uint64;
      _V_strncpy(buf.m_Memory.m_pMemory, v10, buf.m_Size);
      goto LABEL_6;
    case 33:
      V_snprintf(buf.m_Memory.m_pMemory, buf.m_Size, "%llu", this->m_uint64);
      goto LABEL_6;
    case 34:
      V_snprintf(buf.m_Memory.m_pMemory, buf.m_Size, "%g", this->m_float64);
      goto LABEL_6;
    case 37:
      V_snprintf(buf.m_Memory.m_pMemory, buf.m_Size, "%u", this->m_int);
LABEL_6:
      CUtlString::Set(pString, buf.m_Memory.m_pMemory);
      result = 1;
      buf.m_Size = 0;
      if ( (buf.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
        return result;
      goto LABEL_13;
    default:
      switch ( m_type )
      {
        case 0:
          v9 = "void";
          break;
        case 1:
          v9 = "float";
          break;
        case 3:
          v9 = "vector";
          break;
        case 4:
          v9 = "quaternion";
          break;
        case 5:
          v9 = "integer";
          break;
        case 6:
          v9 = "boolean";
          break;
        case 8:
          v9 = "character";
          break;
        case 9:
          v9 = "color";
          break;
        case 13:
          v9 = "ehandle";
          break;
        case 25:
          v9 = "vector2d";
          break;
        case 26:
          v9 = "int64";
          break;
        case 27:
          v9 = "vector4d";
          break;
        case 28:
          v9 = "resourcehandle";
          break;
        case 30:
          v9 = "cstring";
          break;
        case 31:
          v9 = "hscript";
          break;
        case 32:
          v9 = "variant";
          break;
        case 33:
          v9 = "uint64";
          break;
        case 34:
          v9 = "float64";
          break;
        case 37:
          v9 = "unsigned";
          break;
        case 38:
          v9 = "utlstringtoken";
          break;
        case 39:
          v9 = "qangle";
          break;
        case 48:
          v9 = "hscript_lightbinding";
          break;
        case 49:
          v9 = "js_value";
          break;
        case 50:
          v9 = "js_object";
          break;
        case 51:
          v9 = "js_array";
          break;
        case 52:
          v9 = "js_raw_args";
          break;
        default:
          v9 = "unknown_variant_type";
          break;
      }
      Warning("No conversion from %s to string at the moment!\n", v9);
LABEL_11:
      *m_pMemory = 0;
LABEL_12:
      CUtlString::Clear(pString);
      result = 0;
      buf.m_Size = 0;
      if ( (buf.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
LABEL_13:
        v12 = result;
        CUtlMemory<char,int>::Purge(&buf.m_Memory);
        result = v12;
        if ( (buf.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<char,int>::Purge(&buf.m_Memory);
          return v12;
        }
      }
      return result;
  }
}


// CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>  (line 1241, @0x0000000001f8a570, libserver.so)  // inlines: Allocate, Allocate<QAngle>, Allocate<Vector2D>, Allocate<Vector4D>, CopyData, CopyData<QAngle>, CopyData<Quaternion>, CopyData<Vector2D>, CopyData<Vector4D>, Free, V_strlen, memcpy, operator=
// calls: CVariantBase<CVariantDefaultAllocator>::Free, CVariantBase<CVariantDefaultAllocator>::CopyData<Quaternion>, strlen, memcpy
// callers: Recursive_ConvertKeyValuesToTable, Script_LoadKeyValuesFromString, Script_LoadKeyValues, CEntityListSpawnCallback::CallBackAndDeleteMe, DoEntFireByInstanceHandle, DoEntFire, CMemberScriptBinding0<CScriptConvarAccessor*, HSCRIPT__* (CScriptConvarAccessor::*)(), HSCRIPT__*>::Call, CMemberScriptBinding0<CScriptEntityIterator*, HSCRIPT__* (CScriptEntityIterator::*)(), HSCRIPT__*>::Call, CMemberScriptBinding1<CScriptEntityIterator*, HSCRIPT__* (CScriptEntityIterator::*)(HSCRIPT__*), HSCRIPT__*, HSCRIPT__*>::Call, CMemberScriptBinding3<CScriptEntityIterator*, HSCRIPT__* (CScriptEntityIterator::*)(HSCRIPT__*, const Vector&, float), HSCRIPT__*, HSCRIPT__*, const Vector&, float>::Call, CMemberScriptBinding2<CScriptEntityIterator*, CVariantBase<CVariantDefaultAllocator> (CScriptEntityIterator::*)(const Vector&, float), CVariantBase<CVariantDefaultAllocator>, const Vector&, float>::Call, CNonMemberScriptBinding2<int (*)(int, int), int, int, int>::Call (340 total)
// globals: jpt_1F8A5D2
bool __fastcall CVariantBase<CVariantDefaultAllocator>::AssignTo<CVariantDefaultAllocator>(
        const CVariantBase<CVariantDefaultAllocator> *const this,
        CVariantBase<CVariantDefaultAllocator> *pDest)
{
  int16 m_type; // cx
  _DWORD *m_uint64; // r12
  _DWORD *v6; // rax
  bool result; // al
  const Quaternion *v8; // r12
  __int64 v9; // rdx
  _DWORD *v10; // r12
  _DWORD *v11; // rax
  _DWORD *v12; // r12
  _DWORD *v13; // rax
  const char *v14; // r12
  unsigned int v15; // r13d
  void *v16; // rax

  if ( (pDest->m_flags & 1) != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pDest->m_uint64);
    pDest->m_flags &= ~1u;
  }
  pDest->m_uint64 = 0;
  pDest->m_type = 0;
  m_type = this->m_type;
  switch ( m_type )
  {
    case 3:
      m_uint64 = this->m_uint64;
      CVariantBase<CVariantDefaultAllocator>::Free(pDest);
      pDest->m_type = 3;
      goto LABEL_5;
    case 4:
      v8 = this->m_uint64;
      CVariantBase<CVariantDefaultAllocator>::Free(pDest);
      pDest->m_type = 4;
      CVariantBase<CVariantDefaultAllocator>::CopyData<Quaternion>(pDest, v8, v9);
      return 1;
    case 25:
      v10 = this->m_uint64;
      CVariantBase<CVariantDefaultAllocator>::Free(pDest);
      pDest->m_type = 25;
      v11 = (**g_pMemAlloc)(g_pMemAlloc, 8);
      pDest->m_uint64 = v11;
      *v11 = *v10;
      v11[1] = v10[1];
      pDest->m_flags |= 1u;
      return 1;
    case 27:
      v12 = this->m_uint64;
      CVariantBase<CVariantDefaultAllocator>::Free(pDest);
      pDest->m_type = 27;
      v13 = (**g_pMemAlloc)(g_pMemAlloc, 16);
      pDest->m_uint64 = v13;
      *v13 = *v12;
      v13[1] = v12[1];
      v13[2] = v12[2];
      v13[3] = v12[3];
      pDest->m_flags |= 1u;
      return 1;
    case 30:
      v14 = this->m_uint64;
      CVariantBase<CVariantDefaultAllocator>::Free(pDest);
      pDest->m_type = 30;
      if ( v14 != 0 )
      {
        v15 = strlen(v14) + 1;
        v16 = (**g_pMemAlloc)(g_pMemAlloc, v15);
        pDest->m_uint64 = v16;
        memcpy(v16, v14, v15);
        pDest->m_flags |= 1u;
      }
      else
      {
        pDest->m_uint64 = 0;
      }
      goto LABEL_6;
    case 39:
      m_uint64 = this->m_uint64;
      CVariantBase<CVariantDefaultAllocator>::Free(pDest);
      pDest->m_type = 39;
LABEL_5:
      v6 = (**g_pMemAlloc)(g_pMemAlloc, 12);
      pDest->m_uint64 = v6;
      *v6 = *m_uint64;
      v6[1] = m_uint64[1];
      v6[2] = m_uint64[2];
      pDest->m_flags |= 1u;
LABEL_6:
      result = 1;
      break;
    default:
      pDest->m_type = m_type;
      pDest->m_uint64 = this->m_uint64;
      result = 1;
      break;
  }
  return result;
}


// CVariantBase<CEntityVariantAllocator>::AssignTo<CEntityVariantAllocator>  (line 1241, @0x0000000001f916a0, libserver.so)  // inlines: Allocate, Allocate<QAngle>, Allocate<Quaternion>, Allocate<Vector2D>, CopyData, CopyData<QAngle>, CopyData<Quaternion>, CopyData<Vector2D>, CopyData<Vector4D>, Free, V_strlen, memcpy, operator=
// calls: CEntityVariantAllocator::Allocate, strlen, memcpy
// callers: SetupEntityKeyValuesFromTable, PopulateNPCSpawner<CDotaNPCSpawner<CDOTA_BaseNPC> >, DOTA_VScript_PrecacheUnitFromTableAsync, CEntityKeyValues::RemoveKey, CEntityKeyValues::RemoveKeyForSpawn, CEntityKeyValues::CopyFrom
// globals: jpt_1F916EE
bool __fastcall CVariantBase<CEntityVariantAllocator>::AssignTo<CEntityVariantAllocator>(
        const CVariantBase<CEntityVariantAllocator> *const this,
        CVariantBase<CEntityVariantAllocator> *pDest)
{
  uint16 m_flags; // ax
  int16 m_type; // cx
  uint16 v5; // ax
  _DWORD *m_uint64; // r12
  _DWORD *v7; // rax
  bool result; // al
  uint16 v9; // ax
  uint16 v10; // ax
  _DWORD *v11; // r12
  _DWORD *v12; // rax
  uint16 v13; // ax
  _DWORD *v14; // r12
  _DWORD *v15; // rax
  uint16 v16; // ax
  uint16 v17; // ax
  const char *v18; // r12
  signed int v19; // r13d
  void *v20; // rax

  m_flags = pDest->m_flags;
  if ( (m_flags & 1) != 0 )
    pDest->m_flags = m_flags & 0xFFFE;
  pDest->m_uint64 = 0;
  pDest->m_type = 0;
  m_type = this->m_type;
  switch ( m_type )
  {
    case 3:
      v9 = pDest->m_flags;
      m_uint64 = this->m_uint64;
      if ( (v9 & 1) != 0 )
        pDest->m_flags = v9 & 0xFFFE;
      pDest->m_type = 3;
      goto LABEL_7;
    case 4:
      v10 = pDest->m_flags;
      v11 = this->m_uint64;
      if ( (v10 & 1) != 0 )
        pDest->m_flags = v10 & 0xFFFE;
      pDest->m_type = 4;
      goto LABEL_15;
    case 25:
      v13 = pDest->m_flags;
      v14 = this->m_uint64;
      if ( (v13 & 1) != 0 )
        pDest->m_flags = v13 & 0xFFFE;
      pDest->m_type = 25;
      v15 = CEntityVariantAllocator::Allocate(8u);
      pDest->m_uint64 = v15;
      *v15 = *v14;
      v15[1] = v14[1];
      pDest->m_flags |= 1u;
      return 1;
    case 27:
      v16 = pDest->m_flags;
      v11 = this->m_uint64;
      if ( (v16 & 1) != 0 )
        pDest->m_flags = v16 & 0xFFFE;
      pDest->m_type = 27;
LABEL_15:
      v12 = CEntityVariantAllocator::Allocate(0x10u);
      pDest->m_uint64 = v12;
      *v12 = *v11;
      v12[1] = v11[1];
      v12[2] = v11[2];
      v12[3] = v11[3];
      pDest->m_flags |= 1u;
      return 1;
    case 30:
      v17 = pDest->m_flags;
      v18 = this->m_uint64;
      if ( (v17 & 1) != 0 )
        pDest->m_flags = v17 & 0xFFFE;
      pDest->m_type = 30;
      if ( v18 == 0 )
        goto LABEL_8;
      v19 = strlen(v18) + 1;
      v20 = CEntityVariantAllocator::Allocate(v19);
      pDest->m_uint64 = v20;
      memcpy(v20, v18, v19);
      pDest->m_flags |= 1u;
      result = 1;
      break;
    case 39:
      v5 = pDest->m_flags;
      m_uint64 = this->m_uint64;
      if ( (v5 & 1) != 0 )
        pDest->m_flags = v5 & 0xFFFE;
      pDest->m_type = 39;
LABEL_7:
      v7 = CEntityVariantAllocator::Allocate(0xCu);
      pDest->m_uint64 = v7;
      *v7 = *m_uint64;
      v7[1] = m_uint64[1];
      v7[2] = m_uint64[2];
      pDest->m_flags |= 1u;
LABEL_8:
      result = 1;
      break;
    default:
      pDest->m_type = m_type;
      pDest->m_uint64 = this->m_uint64;
      result = 1;
      break;
  }
  return result;
}


// CVariantBase<CEntityVariantAllocator>::AssignTo<CVariantDefaultAllocator>  (line 1241, @0x0000000003098020, libserver.so)  // inlines: Allocate, Allocate<QAngle>, Allocate<Vector2D>, CopyData, CopyData<QAngle>, CopyData<Quaternion>, CopyData<Vector2D>, CopyData<Vector4D>, Free, V_strlen, memcpy, operator=
// calls: CVariantBase<CVariantDefaultAllocator>::CopyData<Quaternion>, CVariantBase<CVariantDefaultAllocator>::CopyData<Vector4D>, strlen, memcpy
// callers: CEntityClass::UnserializeKey
// globals: jpt_3098085
bool __fastcall CVariantBase<CEntityVariantAllocator>::AssignTo<CVariantDefaultAllocator>(
        const CVariantBase<CEntityVariantAllocator> *const this,
        CVariantBase<CVariantDefaultAllocator> *pDest)
{
  __int64 v2; // rdx
  int16 m_type; // cx
  _DWORD *m_uint64; // r12
  _DWORD *v7; // rax
  bool result; // al
  const Quaternion *v9; // r12
  _DWORD *v10; // r12
  _QWORD *v11; // rdi
  _DWORD *v12; // rax
  const Vector4D *v13; // r12
  const char *v14; // r12
  unsigned int v15; // r13d
  void *v16; // rax

  if ( (pDest->m_flags & 1) != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pDest->m_uint64);
    pDest->m_flags &= ~1u;
  }
  pDest->m_uint64 = 0;
  pDest->m_type = 0;
  m_type = this->m_type;
  switch ( m_type )
  {
    case 3:
      m_uint64 = this->m_uint64;
      if ( (pDest->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, 0);
        pDest->m_flags &= ~1u;
      }
      pDest->m_uint64 = 0;
      pDest->m_type = 3;
      goto LABEL_7;
    case 4:
      v9 = this->m_uint64;
      if ( (pDest->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, 0);
        pDest->m_flags &= ~1u;
      }
      pDest->m_type = 4;
      pDest->m_uint64 = 0;
      CVariantBase<CVariantDefaultAllocator>::CopyData<Quaternion>(pDest, v9, v2);
      return 1;
    case 25:
      v10 = this->m_uint64;
      if ( (pDest->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, 0);
        pDest->m_flags &= ~1u;
      }
      pDest->m_uint64 = 0;
      v11 = g_pMemAlloc;
      pDest->m_type = 25;
      v12 = (**v11)(v11, 8);
      pDest->m_uint64 = v12;
      *v12 = *v10;
      v12[1] = v10[1];
      pDest->m_flags |= 1u;
      return 1;
    case 27:
      v13 = this->m_uint64;
      if ( (pDest->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, 0);
        pDest->m_flags &= ~1u;
      }
      pDest->m_uint64 = 0;
      pDest->m_type = 27;
      CVariantBase<CVariantDefaultAllocator>::CopyData<Vector4D>(pDest, v13, 27);
      return 1;
    case 30:
      v14 = this->m_uint64;
      if ( (pDest->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, 0);
        pDest->m_flags &= ~1u;
      }
      pDest->m_uint64 = 0;
      pDest->m_type = 30;
      if ( v14 != 0 )
      {
        v15 = strlen(v14) + 1;
        v16 = (**g_pMemAlloc)(g_pMemAlloc, v15);
        pDest->m_uint64 = v16;
        memcpy(v16, v14, v15);
        pDest->m_flags |= 1u;
      }
      goto LABEL_8;
    case 39:
      m_uint64 = this->m_uint64;
      if ( (pDest->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, 0);
        pDest->m_flags &= ~1u;
      }
      pDest->m_uint64 = 0;
      pDest->m_type = 39;
LABEL_7:
      v7 = (**g_pMemAlloc)(g_pMemAlloc, 12);
      pDest->m_uint64 = v7;
      *v7 = *m_uint64;
      v7[1] = m_uint64[1];
      v7[2] = m_uint64[2];
      pDest->m_flags |= 1u;
LABEL_8:
      result = 1;
      break;
    default:
      pDest->m_type = m_type;
      pDest->m_uint64 = this->m_uint64;
      result = 1;
      break;
  }
  return result;
}


// CVariantBase<CVariantDefaultAllocator>::Set  (line 1312, @0x0000000001ef2510, libserver.so)  // inlines: CUtlSymbolLarge, CopyData, CopyData<Vector>, Free, SetBool, SetCString, SetColor, SetFloat, SetInt, SetString, SetVector3D, operator=
// callers: InputFunctionAdapterS1Var, InputFunctionAdapterS1Func
// globals: jpt_1EF2537
void __fastcall CVariantBase<CVariantDefaultAllocator>::Set(
        CVariantBase<CVariantDefaultAllocator> *const this,
        fieldtype_t ftype,
        void *data)
{
  int v4; // xmm0_4
  const char *v5; // r12
  int v6; // r12d
  int v7; // r12d
  char v8; // r12
  void *datab; // [rsp+8h] [rbp-18h]
  int dataa; // [rsp+8h] [rbp-18h]

  this->m_type = ftype;
  switch ( ftype )
  {
    case fieldtype_t::FIELD_VOID:
      this->m_uint64 = 0;
      return;
    case fieldtype_t::FIELD_FLOAT:
      v4 = *data;
      if ( (this->m_flags & 1) != 0 )
      {
        dataa = *data;
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_uint64);
        v4 = dataa;
        this->m_flags &= ~1u;
      }
      this->m_uint64 = 0;
      this->m_type = 1;
      this->m_int = v4;
      return;
    case fieldtype_t::FIELD_STRING:
      v5 = "";
      if ( *data != 0 )
        v5 = *data;
      if ( (this->m_flags & 1) != 0 )
        goto LABEL_29;
      goto LABEL_12;
    case fieldtype_t::FIELD_VECTOR:
      if ( (this->m_flags & 1) != 0 )
      {
        datab = data;
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_uint64);
        data = datab;
        this->m_flags &= ~1u;
      }
      this->m_uint64 = data;
      this->m_type = 3;
      return;
    case fieldtype_t::FIELD_INTEGER:
      v6 = *data;
      if ( (this->m_flags & 1) == 0 )
        goto LABEL_17;
      goto LABEL_19;
    case fieldtype_t::FIELD_BOOLEAN:
      v8 = *data;
      if ( (this->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_uint64);
        this->m_flags &= ~1u;
      }
      this->m_uint64 = 0;
      this->m_type = 6;
      this->m_char = v8;
      return;
    case fieldtype_t::FIELD_SHORT:
      v6 = *data;
      if ( (this->m_flags & 1) != 0 )
        goto LABEL_19;
      goto LABEL_17;
    case fieldtype_t::FIELD_CHARACTER:
      v6 = *data;
      if ( (this->m_flags & 1) != 0 )
      {
LABEL_19:
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_uint64);
        this->m_flags &= ~1u;
      }
LABEL_17:
      this->m_uint64 = 0;
      this->m_type = 5;
      this->m_int = v6;
      break;
    case fieldtype_t::FIELD_COLOR32:
      v7 = *data;
      if ( (this->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_uint64);
        this->m_flags &= ~1u;
      }
      this->m_uint64 = 0;
      this->m_type = 9;
      this->m_int = v7;
      break;
    case fieldtype_t::FIELD_RESOURCE:
      this->m_uint64 = *data;
      break;
    case fieldtype_t::FIELD_CSTRING:
      v5 = *data;
      if ( (this->m_flags & 1) != 0 )
      {
LABEL_29:
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_uint64);
        this->m_flags &= ~1u;
      }
LABEL_12:
      this->m_uint64 = v5;
      this->m_type = 30;
      break;
    case fieldtype_t::FIELD_FLOAT64:
      this->m_uint64 = *data;
      break;
    default:
      return;
  }
}


// CVariantBase<CVariantDefaultAllocator>::Convert  (line 1388, @0x0000000001ef3120, libserver.so)  // inlines: CEntityHandle, CUtlSymbolLarge, CopyData, CopyData<Vector>, Free, Get, GetEntityIdentity, GetEntityName, GetEntryIndex, GetInstance, IndexToIdentity, LookupEntity, Set, SetBool, SetColor, SetFloat, SetInt, SetString, SetVector3D, VariantSetStringFromEHandle<CVariantDefaultAllocator>, atof, atoi, operator CEntityInstance*, operator=
// calls: strtol, CVariantBase<CVariantDefaultAllocator>::Free, CVariantBase<CVariantDefaultAllocator>::AssignTo, CVariantBase<CVariantDefaultAllocator>::CopyData, strtod, V_sscanf, __stack_chk_fail
// callers: InputFunctionAdapterS1Var, InputFunctionAdapterS1Func
// strings: "%d %d %d %d", "[%g %g %g]"
// globals: jpt_1EF3170, jpt_1EF322D, CEntityHandle::gm_pEntityList
bool __fastcall CVariantBase<CVariantDefaultAllocator>::Convert(
        CVariantBase<CVariantDefaultAllocator> *const this,
        fieldtype_t newType)
{
  __m128i v2; // xmm1
  int16 m_type; // ax
  const char *v5; // rdi
  int m_float; // r12d
  bool result; // al
  int v8; // r12d
  unsigned int m_int; // eax
  unsigned int v10; // edx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  __int64 v14; // rcx
  bool v15; // zf
  CEntityInstance *m_pInstance; // rcx
  const char *m_pAsString; // r12
  const char *m_uint64; // rdi
  uint64 v19; // rdi
  unsigned __int16 v20; // ax
  int v21; // r12d
  uint64 v22; // rdi
  vec_t z; // eax
  const char *v24; // rdi
  int v25; // r12d
  char v26; // r12
  double v27; // [rsp+8h] [rbp-258h]
  int nRed; // [rsp+14h] [rbp-24Ch] BYREF
  int nGreen; // [rsp+18h] [rbp-248h] BYREF
  int nBlue; // [rsp+1Ch] [rbp-244h] BYREF
  Vector tmpVec; // [rsp+20h] [rbp-240h] BYREF
  char szBuf[520]; // [rsp+30h] [rbp-230h] BYREF
  unsigned __int64 v33; // [rsp+238h] [rbp-28h]

  v33 = __readfsqword(0x28u);
  m_type = this->m_type;
  if ( newType == m_type )
    return 1;
  if ( newType == fieldtype_t::FIELD_VOID )
  {
    this->m_uint64 = 0;
    this->m_type = 0;
    return 1;
  }
  if ( newType == fieldtype_t::FIELD_INPUT )
    return 1;
  switch ( m_type )
  {
    case 1:
      if ( newType == fieldtype_t::FIELD_INTEGER )
      {
        m_float = this->m_float;
LABEL_7:
        CVariantBase<CVariantDefaultAllocator>::Free(this);
        this->m_int = m_float;
        this->m_type = 5;
        return 1;
      }
      if ( newType == fieldtype_t::FIELD_BOOLEAN )
      {
        v26 = this->m_float != 0.0;
        goto LABEL_48;
      }
      if ( newType != fieldtype_t::FIELD_STRING )
        goto LABEL_11;
      goto LABEL_20;
    case 2:
    case 30:
      switch ( newType )
      {
        case fieldtype_t::FIELD_FLOAT:
          m_uint64 = this->m_uint64;
          if ( m_uint64 != 0 )
          {
            v27 = strtod(m_uint64, 0);
            CVariantBase<CVariantDefaultAllocator>::Free(this);
            this->m_type = 1;
            this->m_float = _mm_movedup_pd(*&v27).m128d_f64[0];
          }
          else
          {
            CVariantBase<CVariantDefaultAllocator>::Free(this);
            this->m_type = 1;
            this->m_int = 0;
          }
          return 1;
        case fieldtype_t::FIELD_STRING:
          this->m_type = 30;
          return 1;
        case fieldtype_t::FIELD_VECTOR:
          v22 = this->m_uint64;
          z = vec3_origin.z;
          *&tmpVec.x = *&vec3_origin.x;
          tmpVec.z = z;
          if ( V_sscanf(v22, "[%g %g %g]", &tmpVec, &tmpVec.y, &tmpVec.z) == 0 )
            V_sscanf(this->m_uint64, "%g %g %g", &tmpVec, &tmpVec.y, &tmpVec.z);
          CVariantBase<CVariantDefaultAllocator>::Free(this);
          this->m_uint64 = &tmpVec;
          this->m_type = 3;
          return 1;
        case fieldtype_t::FIELD_INTEGER:
          v5 = this->m_uint64;
          if ( v5 != 0 )
          {
            m_float = strtol(v5, 0, 10);
            goto LABEL_7;
          }
          CVariantBase<CVariantDefaultAllocator>::Free(this);
          this->m_int = 0;
          this->m_type = 5;
          result = 1;
          break;
        case fieldtype_t::FIELD_BOOLEAN:
          v24 = this->m_uint64;
          if ( v24 != 0 )
          {
            v25 = strtol(v24, 0, 10);
            CVariantBase<CVariantDefaultAllocator>::Free(this);
            this->m_type = 6;
            this->m_char = v25 != 0;
          }
          else
          {
            CVariantBase<CVariantDefaultAllocator>::Free(this);
            this->m_type = 6;
            this->m_char = 0;
          }
          return 1;
        case fieldtype_t::FIELD_COLOR32:
          v19 = this->m_uint64;
          nRed = 0;
          nGreen = 0;
          nBlue = 0;
          LODWORD(tmpVec.x) = 255;
          V_sscanf(v19, "%d %d %d %d", &nRed, &nGreen, &nBlue, &tmpVec);
          LOBYTE(v20) = nRed;
          HIBYTE(v20) = nGreen;
          v21 = (LOBYTE(tmpVec.x) << 24) | (nBlue << 16) | v20;
          CVariantBase<CVariantDefaultAllocator>::Free(this);
          this->m_int = v21;
          this->m_type = 9;
          return 1;
        default:
          goto LABEL_11;
      }
      return result;
    case 5:
      switch ( newType )
      {
        case fieldtype_t::FIELD_STRING:
LABEL_20:
          CVariantBase<CVariantDefaultAllocator>::AssignTo(this, szBuf, 0x200u);
          CVariantBase<CVariantDefaultAllocator>::CopyData(this, szBuf, 1);
          return 1;
        case fieldtype_t::FIELD_BOOLEAN:
          v26 = this->m_int != 0;
LABEL_48:
          CVariantBase<CVariantDefaultAllocator>::Free(this);
          this->m_char = v26;
          this->m_type = 6;
          return 1;
        case fieldtype_t::FIELD_FLOAT:
          *v2.m128i_i32 = this->m_int;
          v8 = _mm_cvtsi128_si32(v2);
          CVariantBase<CVariantDefaultAllocator>::Free(this);
          this->m_int = v8;
          this->m_type = 1;
          result = 1;
          break;
        default:
LABEL_11:
          result = 0;
          break;
      }
      break;
    case 13:
      if ( newType != fieldtype_t::FIELD_STRING )
        goto LABEL_11;
      m_int = this->m_int;
      v10 = this->m_int + 2;
      LODWORD(tmpVec.x) = this->m_int;
      if ( v10 <= 1 )
        return 1;
      v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(tmpVec.x) >> 9) & 0x3F];
      if ( v11 == 0 )
        return 1;
      v12 = &v11[LOWORD(tmpVec.x) & 0x1FF];
      if ( v12 == 0 || m_int != v12->m_EHandle.m_Index || v12->m_pInstance == 0 )
        return 1;
      v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_int >> 9) & 0x3F];
      if ( v13 != 0 )
      {
        v14 = m_int & 0x1FF;
        v15 = &v13[v14] == 0;
        v13 = (v13 + v14 * 120);
        m_pInstance = 0;
        if ( !v15 && m_int == v13->m_EHandle.m_Index )
          m_pInstance = v13->m_pInstance;
      }
      else
      {
        m_pInstance = 0;
      }
      m_pAsString = "";
      if ( m_pInstance->m_pEntity->m_name.u.m_Id != 0 )
        m_pAsString = m_pInstance->m_pEntity->m_name.u.m_pAsString;
      if ( (this->m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_uint64, v13);
        this->m_flags &= ~1u;
      }
      this->m_type = 30;
      this->m_uint64 = m_pAsString;
      return 1;
    default:
      goto LABEL_11;
  }
  return result;
}


