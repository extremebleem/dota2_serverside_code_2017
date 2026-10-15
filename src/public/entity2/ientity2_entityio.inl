
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEntityIOOutput::Schema_DynamicBinding  (line 99, @0x0000000001b50aa0, libserver.so)
// calls: CEntityIOOutput::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEntityIOOutput::Schema_DynamicBinding(const CEntityIOOutput *const this)
{
  CEntityIOOutput::Schema_VerifyBindingIsRegistered();
  return CEntityIOOutput::s_pSchemaBinding;
}


// CEntityIOOutput::ValueFieldType  (line 136, @0x0000000001b4fda0, libserver.so)
fieldtype_t __fastcall CEntityIOOutput::ValueFieldType(CEntityIOOutput *const this)
{
  return fieldtype_t::FIELD_VOID;
}


// CEntityIOOutput::FireOutput<char const*>  (line 229, @0x0000000001b4f6c0, libserver.so)  // inlines: CVariantBase, CopyData, Free, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CBaseClientUIEntity::OnClientFireOutput
void __fastcall CEntityIOOutput::FireOutput<char const*>(
        CEntityIOOutput *const this,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        const char *const *const value,
        float flDelay)
{
  CVariant v; // [rsp+0h] [rbp-20h] BYREF

  v.m_uint64 = value;
  v.m_flags = 0;
  v.m_type = 30;
  CEntityIOOutput::FireOutputInternal(this, pActivator, pCaller, &v, 0.0);
  if ( (v.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v.m_uint64);
}


// CEntityIOOutput::FireOutput  (line 241, @0x00000000023b0940, libserver.so)  // inlines: CVariantBase, Free, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CSceneEntity::OnSceneFinished, CSceneEntity::StartEvent, CSceneEntity::StartPlayback
void __fastcall CEntityIOOutput::FireOutput(
        CEntityIOOutput *const this,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        float flDelay)
{
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(this, pActivator, pCaller, &value, flDelay);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


// CEntityIOOutput::FireOutput  (line 247, @0x00000000021b6460, libserver.so)  // inlines: CVariantBase, Free, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CMomentaryRotButton::UpdateSelf, CBaseButton::OnTakeDamage, CEnvFireSensor::Think, CMultiSource::Use, CLogicBranch::UpdateValue, CLogicBranchList::DoTest, CLogicAuto::Think, CPhysExplosion::Explode, CPhysConvert::InputConvertTarget, CPropDoorRotatingBreakable::Event_Killed, CPropDoorRotatingBreakable::OnTakeDamage, CBasePropDoor::EndBlocked (15 total)
void __fastcall CEntityIOOutput::FireOutput(
        CEntityIOOutput *const this,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller)
{
  __int64 v3; // [rsp-8h] [rbp-28h] BYREF
  CVariant value; // [rsp+0h] [rbp-20h]

  value.m_int = 0;
  v3 = 0;
  CEntityIOOutput::FireOutputInternal(this, pActivator, pCaller, &v3, 0.0);
  if ( (value.m_uint & 0x10000) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v3);
}


// InputFunctionAdapterVariant  (line 296, @0x0000000001eeafd0, libserver.so)  // inlines: CopyFrom<FastDelegate4<CEntityInstance*, CEntityInstance*, CEntityInstance*, const CVariantBase<CVariantDefaultAllocator>&, void> >, SetAbstractDelegate, SetMementoFrom, operator()
void __fastcall InputFunctionAdapterVariant(
        const CUtlAbstractDelegate *const memberFunc,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        CEntityInstance *pComponentOwner,
        int nOutputID,
        void *pContext,
        const CVariant *const value)
{
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v8; // rdi

  pfn = memberFunc->m_pFunction.__pfn;
  v8 = (memberFunc->m_pthis + memberFunc->m_pFunction.__delta);
  if ( (pfn & 1) != 0 )
    pfn = *(pfn + *v8 - 1);
  (pfn)(v8, pActivator, pCaller, pComponentOwner, value);
}


// InputFunctionAdapter<float>  (line 304, @0x0000000001fbdbf0, libserver.so)  // inlines: AssignTo, CopyFrom<FastDelegate4<CEntityInstance*, CEntityInstance*, CEntityInstance*, float const&, void> >, SetAbstractDelegate, SetMementoFrom, VariantFieldTypeName, atof, operator()
// calls: strtod, Warning
// strings: "No conversion from %s to float now\n", "js_raw_args", "js_array", "js_object", "js_value", "hscript_lightbinding" (20 total)
// globals: jpt_1FBDC32, jpt_1FBDD28
void __fastcall InputFunctionAdapter<float>(
        const CUtlAbstractDelegate *const memberFunc,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        CEntityInstance *pComponentOwner,
        int nOutputID,
        void *pContext,
        const CVariant *const value)
{
  void (*pfn)(detail::GenericClass *); // rbx
  __int64 delta; // r13
  detail::GenericClass *m_pthis; // r14
  int16 m_type; // ax
  _QWORD *v12; // rdi
  float m_char; // xmm0_4
  __m128d v14; // xmm0
  const char *v15; // rsi
  CEntityInstance *pComponentOwnera; // [rsp+0h] [rbp-40h]
  CEntityInstance *pCallera; // [rsp+8h] [rbp-38h]
  float adapterValue[9]; // [rsp+1Ch] [rbp-24h] BYREF

  pfn = memberFunc->m_pFunction.__pfn;
  delta = memberFunc->m_pFunction.__delta;
  m_pthis = memberFunc->m_pthis;
  m_type = value->m_type;
  switch ( m_type )
  {
    case 0:
      return;
    case 1:
      adapterValue[0] = value->m_float;
      goto LABEL_3;
    case 5:
      adapterValue[0] = value->m_int;
      goto LABEL_3;
    case 6:
      m_char = value->m_char;
      goto LABEL_9;
    case 26:
      adapterValue[0] = value->m_uint64;
      goto LABEL_3;
    case 30:
      pComponentOwnera = pComponentOwner;
      pCallera = pCaller;
      v14.m128d_f64[0] = strtod(value->m_pszString, 0);
      pCaller = pCallera;
      pComponentOwner = pComponentOwnera;
      adapterValue[0] = _mm_movedup_pd(v14).m128d_f64[0];
      goto LABEL_3;
    case 33:
      if ( value->m_int64 < 0 )
        m_char = (value->m_int & 1 | (value->m_uint64 >> 1)) + (value->m_int & 1 | (value->m_uint64 >> 1));
      else
        m_char = value->m_uint64;
LABEL_9:
      adapterValue[0] = m_char;
      goto LABEL_3;
    case 34:
      adapterValue[0] = value->m_float64;
      goto LABEL_3;
    case 37:
      adapterValue[0] = value->m_int;
LABEL_3:
      v12 = (m_pthis + delta);
      if ( (pfn & 1) != 0 )
        pfn = *(pfn + *v12 - 1);
      (pfn)(v12, pActivator, pCaller, pComponentOwner, adapterValue);
      break;
    default:
      switch ( m_type )
      {
        case 0:
          v15 = "void";
          break;
        case 1:
          v15 = "float";
          break;
        case 3:
          v15 = "vector";
          break;
        case 4:
          v15 = "quaternion";
          break;
        case 5:
          v15 = "integer";
          break;
        case 6:
          v15 = "boolean";
          break;
        case 8:
          v15 = "character";
          break;
        case 9:
          v15 = "color";
          break;
        case 13:
          v15 = "ehandle";
          break;
        case 25:
          v15 = "vector2d";
          break;
        case 26:
          v15 = "int64";
          break;
        case 27:
          v15 = "vector4d";
          break;
        case 28:
          v15 = "resourcehandle";
          break;
        case 30:
          v15 = "cstring";
          break;
        case 31:
          v15 = "hscript";
          break;
        case 32:
          v15 = "variant";
          break;
        case 33:
          v15 = "uint64";
          break;
        case 34:
          v15 = "float64";
          break;
        case 37:
          v15 = "unsigned";
          break;
        case 38:
          v15 = "utlstringtoken";
          break;
        case 39:
          v15 = "qangle";
          break;
        case 48:
          v15 = "hscript_lightbinding";
          break;
        case 49:
          v15 = "js_value";
          break;
        case 50:
          v15 = "js_object";
          break;
        case 51:
          v15 = "js_array";
          break;
        case 52:
          v15 = "js_raw_args";
          break;
        default:
          v15 = "unknown_variant_type";
          break;
      }
      Warning("No conversion from %s to float now\n", v15);
      break;
  }
}


// InputFunctionAdapterInputData  (line 319, @0x0000000001eeb000, libserver.so)  // inlines: CopyFrom<FastDelegate1<inputdata2_t&, void> >, SetAbstractDelegate, SetMementoFrom, inputdata2_t, operator()
void __fastcall InputFunctionAdapterInputData(
        const CUtlAbstractDelegate *const memberFunc,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        CEntityInstance *pComponentOwner,
        int nOutputID,
        void *pContext,
        const CVariant *const value)
{
  __int64 delta; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  __int64 *v9; // rdi
  CEntityInstance *v10; // [rsp+0h] [rbp-30h] BYREF
  CEntityInstance *pActivatora; // [rsp+8h] [rbp-28h]
  CEntityInstance *pCallera; // [rsp+10h] [rbp-20h]
  const CVariant *v13; // [rsp+18h] [rbp-18h]
  int v14; // [rsp+20h] [rbp-10h]

  pCallera = pCaller;
  delta = memberFunc->m_pFunction.__delta;
  pActivatora = pActivator;
  v10 = pComponentOwner;
  v14 = nOutputID;
  v13 = value;
  pfn = memberFunc->m_pFunction.__pfn;
  v9 = (memberFunc->m_pthis + delta);
  if ( (pfn & 1) != 0 )
  {
    delta = *v9;
    pfn = *(pfn + *v9 - 1);
  }
  (pfn)(v9, &v10, delta, pComponentOwner, nOutputID, pContext);
}


// CEntityOutputTemplate<CVariantBase<CVariantDefaultAllocator> >::ValueFieldType  (line 461, @0x00000000022a5320, libserver.so)  // inlines: FieldType
fieldtype_t __fastcall CEntityOutputTemplate<CVariantBase<CVariantDefaultAllocator>>::ValueFieldType(
        CEntityOutputTemplate<CVariantBase<CVariantDefaultAllocator> > *const this)
{
  return this->m_Value.m_type;
}


