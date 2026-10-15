
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFlexExpresser::CFlexExpresser  (line 19, @0x0000000002ec3360, libserver.so)  // inlines: CAI_ExpresserHost, CFlexCycler, CFlexExpresserShim, CUtlSymbolLarge
// calls: CBaseFlex::CBaseFlex
// callers: CFlexExpresser::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CFlexExpresser::CFlexExpresser(CFlexExpresser *const this)
{
  CBaseFlex::CBaseFlex(this);
  this->m_iszSentence.u.m_Id = 0;
  this->_vptr_IHandleEntity = &off_47AC3B0;
  this->m_sentence = 0;
  this->m_hCurrLayerSequence.m_Data = 0;
  this->_vptr_CAI_ExpresserSink = &off_47ACC30;
  this->m_pExpresser = 0;
  this->m_flThenAnyMaxDist = 0.0;
}


// CFlexExpresser::~CFlexExpresser  (line 26, @0x0000000002ec2100, libserver.so)  // inlines: ~CAI_ExpresserHost, ~CFlexCycler, ~CFlexExpresserShim
// calls: CAI_Expresser::~CAI_Expresser, operator delete, CBaseFlex::~CBaseFlex
// callers: CFlexExpresser::~CFlexExpresser
void __fastcall CFlexExpresser::~CFlexExpresser(CFlexExpresser *const this)
{
  CAI_Expresser *m_pExpresser; // r12

  m_pExpresser = this->m_pExpresser;
  this->_vptr_IHandleEntity = &off_47AC3B0;
  this->_vptr_CAI_ExpresserSink = &off_47ACC30;
  if ( m_pExpresser != 0 )
  {
    CAI_Expresser::~CAI_Expresser(m_pExpresser);
    operator delete(m_pExpresser);
  }
  this->m_pExpresser = 0;
  this->_vptr_CAI_ExpresserSink = &off_47AC2F0;
  this->_vptr_IHandleEntity = &off_403CAF0;
  CBaseFlex::~CBaseFlex(this);
}


// CFlexExpresser::~CFlexExpresser  (line 26, @0x0000000002ec2180, libserver.so)
// calls: CFlexExpresser::~CFlexExpresser, CBaseEntity::operator delete
void __fastcall CFlexExpresser::~CFlexExpresser(CFlexExpresser *const this)
{
  CFlexExpresser::~CFlexExpresser(this);
  CBaseEntity::operator delete(this);
}


// CFlexExpresser::CreateExpresser  (line 36, @0x0000000002ec33d0, libserver.so)  // inlines: CAI_ExpresserWithFollowup, CEntityHandle, CFollowupTargetSpec_t, CHandle
// calls: operator new, CAI_Expresser::CAI_Expresser, operator delete, _Unwind_Resume
// callers: CFlexExpresser::Spawn
CAI_Expresser *__fastcall CFlexExpresser::CreateExpresser(CFlexExpresser *const this)
{
  CAI_Expresser *v2; // rbx

  v2 = operator new(0x70u);
  CAI_Expresser::CAI_Expresser(v2, this);
  v2[1]._vptr_IResponseFilter = 0;
  LODWORD(v2[1].m_pSink) = 3;
  HIDWORD(v2[1].m_pSink) = -1;
  v2->_vptr_IResponseFilter = &off_40013F0;
  this->m_pExpresser = v2;
  v2->m_pSink = &this->CAI_ExpresserSink;
  return this->m_pExpresser;
}


// CFlexExpresser::Precache  (line 48, @0x0000000002ec4690, libserver.so)  // inlines: GetDebugName, GetModelNameFromKeyValues, Precache
// calls: CEntityInstance::Precache, GetModelNameFromKeyValues, CBaseEntity::GetAbsOrigin, CEntityIdentity::GetDebugName, Warning, CBaseEntity::PrecacheModel
// strings: "Precache Warning: %s at %.0f %.0f %0.f missing modelname\n"
void __fastcall CFlexExpresser::Precache(CFlexExpresser *const this, const CEntityPrecacheContext *pContext)
{
  const char *ModelNameFromKeyValues; // rax
  const char *DebugName; // rax
  double z; // [rsp+8h] [rbp-28h]
  double y; // [rsp+10h] [rbp-20h]
  double x; // [rsp+18h] [rbp-18h]

  CEntityInstance::Precache(this, pContext);
  ModelNameFromKeyValues = GetModelNameFromKeyValues(pContext->m_pKeyValues, "");
  if ( ModelNameFromKeyValues != 0 && *ModelNameFromKeyValues != 0 )
  {
    CBaseEntity::PrecacheModel(ModelNameFromKeyValues, pContext);
  }
  else
  {
    z = CBaseEntity::GetAbsOrigin(this)->z;
    y = CBaseEntity::GetAbsOrigin(this)->y;
    x = CBaseEntity::GetAbsOrigin(this)->x;
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    Warning("Precache Warning: %s at %.0f %.0f %0.f missing modelname\n", DebugName, x, y, z);
  }
}


// CFlexExpresser::Spawn  (line 64, @0x0000000002ec3450, libserver.so)  // inlines: AddSolidFlags, SetPlaybackRate, SetSolid, curtime
// calls: CFlexCycler::Spawn, CBaseEntity::GetModel, CCollisionProperty::SetSolidFlags, CBaseEntity::SetMoveType, CBaseEntity::SetDamageOptions, CBaseAnimating::GetBaseAnimatingController, CBaseEntity::SetNextThink, CBaseAnimating::ResetSequenceInfo, CFlexExpresser::CreateExpresser, CBaseModelEntity::SetModelFromKeyValues
void __fastcall CFlexExpresser::Spawn(CFlexExpresser *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseAnimatingController *BaseAnimatingController; // rax
  float v5; // xmm1_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  __int64 v7; // [rsp+0h] [rbp-20h]

  CFlexCycler::Spawn(this, pKeyValues);
  CBaseEntity::GetModel(this);
  if ( v7 == 0 )
    CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  if ( (this->m_spawnflags.m_Value & 1) != 0 )
  {
    (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 0);
  }
  else
  {
    (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 2);
    CCollisionProperty::SetSolidFlags(&this->m_Collision, this->m_Collision.m_usSolidFlags.m_Value | 1);
  }
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_NO);
  (*(this->_vptr_IHandleEntity + 157))(this, 80000);
  BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
  (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 22))(BaseAnimatingController, 1.0);
  if ( gpGlobals != 0 && !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
  {
    m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
    if ( m_pfnWarningFunc != 0 )
      m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
  }
  CBaseEntity::SetNextThink(this, v5, 0);
  CBaseAnimating::ResetSequenceInfo(this);
  (*(this->_vptr_IHandleEntity + 219))(this);
  CFlexExpresser::CreateExpresser(this);
}


// CFlexExpresser::Think  (line 104, @0x0000000002ec2fc0, libserver.so)  // inlines: curtime
// calls: CBaseEntity::SetNextThink, CBaseAnimating::StudioFrameAdvance
void __fastcall CFlexExpresser::Think(CFlexExpresser *const this)
{
  float v1; // xmm1_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  if ( gpGlobals != 0 && !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
  {
    m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
    if ( m_pfnWarningFunc != 0 )
      m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
  }
  CBaseEntity::SetNextThink(this, v1, 0);
  CBaseAnimating::StudioFrameAdvance(this, AnimationAdvanceType_t::ANIM_ADVANCE_NORMAL);
}


// CFlexExpresser::InputSpeakResponseConcept  (line 111, @0x0000000002ec21a0, libserver.so)  // inlines: AssignTo, CAI_Concept, CEntityHandle, CHandle, CUtlSymbolLarge, GetDebugName, GetEntityName, String, StringID, TempString, ToCStr, ToString, V_strlen, V_strncpy<int>, VariantFieldTypeName, memcpy
// calls: MakeEntitySystemString, CEntityIdentity::GetDebugName, Warning, _V_strncpy, V_strnchr, strtok, memcpy, CGameEntitySystem::FindEntityProcedural, strlen, CRR_Concept::CRR_Concept, V_snprintf, __stack_chk_fail
// strings: "empty SpeakResponse input from %s to %s\n", "%g %g %g %g", "No conversion from %s to string at the moment!\n", "faulty context k:v pair in entity io %s\n", "Speak input to %s had overlong parameter %s", "true" (26 total)
// globals: jpt_2EC21F2, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, jpt_2EC2788
void __fastcall CFlexExpresser::InputSpeakResponseConcept(CFlexExpresser *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  char *m_pszString; // rsi
  const char *DebugName; // rbx
  const char *v6; // rax
  const char *v7; // rax
  char *v8; // r14
  int v9; // r15d
  const char *v10; // rax
  const char *v11; // r13
  int v12; // edx
  int v13; // ebx
  __int64 v14; // rcx
  const char *v15; // r15
  CBaseEntity *EntityProcedural; // rax
  const char *m_pAsString; // rdx
  int v18; // eax
  int v19; // edx
  int v20; // r14d
  __int64 v21; // rax
  void (__fastcall *v22)(CFlexExpresser *const, _QWORD *, char *, _QWORD, _QWORD, _QWORD); // rbx
  char *v23; // r12
  const char *v24; // rsi
  const char *v25; // rax
  const char *v26; // rcx
  double m_float; // xmm0_8
  const char *v28; // [rsp+18h] [rbp-468h]
  _QWORD v30[2]; // [rsp+30h] [rbp-450h] BYREF
  char buf[512]; // [rsp+40h] [rbp-440h] BYREF
  char outputmodifiers[520]; // [rsp+240h] [rbp-240h] BYREF
  unsigned __int64 v33; // [rsp+448h] [rbp-38h]

  v33 = __readfsqword(0x28u);
  m_type = inputdata->value.m_type;
  if ( m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_30;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_43;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_40;
      case 6:
        v26 = "true";
        if ( inputdata->value.m_char == 0 )
          v26 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v26);
        goto LABEL_38;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_40;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_38;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_38:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_43:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_40:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        switch ( m_type )
        {
          case 0:
            v24 = "void";
            break;
          case 1:
            v24 = "float";
            break;
          case 3:
            v24 = "vector";
            break;
          case 4:
            v24 = "quaternion";
            break;
          case 5:
            v24 = "integer";
            break;
          case 6:
            v24 = "boolean";
            break;
          case 8:
            v24 = "character";
            break;
          case 9:
            v24 = "color";
            break;
          case 13:
            v24 = "ehandle";
            break;
          case 25:
            v24 = "vector2d";
            break;
          case 26:
            v24 = "int64";
            break;
          case 27:
            v24 = "vector4d";
            break;
          case 28:
            v24 = "resourcehandle";
            break;
          case 31:
            v24 = "hscript";
            break;
          case 32:
            v24 = "variant";
            break;
          case 33:
            v24 = "uint64";
            break;
          case 34:
            v24 = "float64";
            break;
          case 37:
            v24 = "unsigned";
            break;
          case 38:
            v24 = "utlstringtoken";
            break;
          case 39:
            v24 = "qangle";
            break;
          case 48:
            v24 = "hscript_lightbinding";
            break;
          case 49:
            v24 = "js_value";
            break;
          case 50:
            v24 = "js_object";
            break;
          case 51:
            v24 = "js_array";
            break;
          case 52:
            v24 = "js_raw_args";
            break;
          default:
            v24 = "unknown_variant_type";
            break;
        }
        Warning("No conversion from %s to string at the moment!\n", v24);
LABEL_30:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  MakeEntitySystemString(m_pszString);
  if ( v30[0] != 0 )
  {
    v28 = v30[0];
    if ( *v30[0] == 0 )
    {
LABEL_6:
      DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
      v6 = CEntityIdentity::GetDebugName(inputdata->pCaller->m_pEntity);
      Warning("empty SpeakResponse input from %s to %s\n", v6, DebugName);
      return;
    }
  }
  else
  {
    v28 = "";
    if ( asc_32DB004[2] == 0 )
      goto LABEL_6;
  }
  _V_strncpy(buf, v28, 510);
  buf[511] = 0;
  v7 = V_strnchr(buf, 32, 510);
  if ( v7 == 0 || (*v7 = 0, (v8 = strtok(v7 + 1, " ")) == 0) )
  {
    outputmodifiers[0] = 0;
    v22 = *(this->_vptr_IHandleEntity + 264);
LABEL_24:
    v23 = 0;
    goto LABEL_25;
  }
  v9 = 0;
  while ( 1 )
  {
    v10 = V_strnchr(v8, 58, 510);
    v11 = v10;
    if ( v10 == 0 )
      break;
    v12 = v10 - v8 + 1;
    v13 = v9 + v12;
    if ( v9 + v12 > 511 )
    {
      v25 = CEntityIdentity::GetDebugName(this->m_pEntity);
      Warning("Speak input to %s had overlong parameter %s", v25, v28);
      return;
    }
    v14 = v9;
    v15 = v10 + 1;
    memcpy(&outputmodifiers[v14], v8, v12);
    *v11 = 0;
    EntityProcedural = CGameEntitySystem::FindEntityProcedural(
                         g_pGameEntitySystem,
                         v11 + 1,
                         this,
                         inputdata->pActivator,
                         inputdata->pCaller);
    if ( EntityProcedural != 0 )
    {
      v15 = "";
      m_pAsString = EntityProcedural->m_pEntity->m_name.u.m_pAsString;
      v18 = 0;
      if ( m_pAsString == 0 )
        goto LABEL_18;
      v15 = m_pAsString;
    }
    v18 = 0;
    if ( v15 != 0 )
      v18 = strlen(v15);
LABEL_18:
    v19 = 511 - v13;
    if ( v18 <= 511 - v13 )
      v19 = v18;
    v20 = v19;
    _V_strncpy(&outputmodifiers[v13], v15, (v19 + 1));
    v9 = v13 + v20;
    v8 = strtok(0, " ");
    if ( v8 == 0 )
      goto LABEL_32;
    if ( v9 <= 510 )
    {
      v21 = v9++;
      outputmodifiers[v21] = 44;
    }
  }
  Warning("faulty context k:v pair in entity io %s\n", v28);
LABEL_32:
  outputmodifiers[v9] = 0;
  v22 = *(this->_vptr_IHandleEntity + 264);
  if ( v9 <= 0 )
    goto LABEL_24;
  v23 = outputmodifiers;
LABEL_25:
  CRR_Concept::CRR_Concept(v30, buf);
  HIDWORD(v30[0]) = -1;
  v22(this, v30, v23, 0, 0, 0);
}


// CFlexExpresser::OnTakeDamage  (line 206, @0x0000000002ec20d0, libserver.so)
int __fastcall CFlexExpresser::OnTakeDamage(CFlexExpresser *const this, const CTakeDamageInfo *const info)
{
  return 0;
}


// CFlexExpresser::AsFlexExpresser  (line 213, @0x0000000002ec35d0, libserver.so)  // inlines: CUtlSymbolLarge, ClassMatches
// calls: MakeEntitySystemString, CEntityIdentity::ClassMatches
// callers: CResponseQueue::DispatchOneResponse
// strings: "prop_talker"
CFlexExpresser *__fastcall CFlexExpresser::AsFlexExpresser(CBaseEntity *pEntity)
{
  CEntityIdentity *m_pEntity; // rdi
  const char *v3; // rsi
  char *pszClassNameOrWildcard; // [rsp+0h] [rbp-20h]

  if ( pEntity == 0 )
    return 0;
  MakeEntitySystemString("prop_talker");
  m_pEntity = pEntity->m_pEntity;
  if ( pszClassNameOrWildcard == m_pEntity->m_designerName.u.m_Id )
    return pEntity;
  v3 = "";
  if ( pszClassNameOrWildcard != 0 )
    v3 = pszClassNameOrWildcard;
  if ( CEntityIdentity::ClassMatches(m_pEntity, v3) )
    return pEntity;
  else
    return 0;
}


// CFlexExpresser::GetDataDescMap  (line 230, @0x0000000002ec20e0, libserver.so)
// globals: CFlexExpresser::m_DataMap
datamap_t *__fastcall CFlexExpresser::GetDataDescMap(CFlexExpresser *const this)
{
  return &CFlexExpresser::m_DataMap;
}


// CFlexExpresser::AddDatadescMetadataKeys  (line 230, @0x0000000002ec3630, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFlexExpresser::GetEntityClass(void)
void __fastcall CFlexExpresser::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFlexExpresser::GetEntityClass);
}


// CFlexExpresser::GetBaseMap  (line 230, @0x0000000002ec3650, libserver.so)
datamap_t *__cdecl CFlexExpresser::GetBaseMap()
{
  return &CFlexCycler::m_DataMap;
}


// DataMapInit<CFlexExpresser>  (line 230, @0x0000000002ec3660, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_misc_required_files_01.cpp
// strings: "CFlexExpresser"
// globals: `guard variable for'DataMapInit<CFlexExpresser>(CFlexExpresser *)::nameHolder, CFlexExpresser::GetEntityClass(void), CFlexExpresser::m_DataMap, DataMapInit<CFlexExpresser>(CFlexExpresser *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFlexExpresser>(CFlexExpresser *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFlexExpresser>(CFlexExpresser *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFlexExpresser>(CFlexExpresser *)::nameHolder) != 0 )
  {
    DataMapInit<CFlexExpresser>(CFlexExpresser *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFlexExpresser>(CFlexExpresser *)::nameHolder.m_pszBase = "CFlexExpresser";
    DataMapInit<CFlexExpresser>(CFlexExpresser *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFlexExpresser>(CFlexExpresser *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFlexExpresser>(CFlexExpresser *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFlexExpresser>(CFlexExpresser *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFlexExpresser>(CFlexExpresser *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFlexExpresser>(CFlexExpresser *)::nameHolder,
      &_dso_handle);
  }
  CFlexExpresser::m_DataMap.dataNumFields = 2;
  CFlexExpresser::m_DataMap.baseMap = &CFlexCycler::m_DataMap;
  CFlexExpresser::m_DataMap.dataDesc = &DataMapInit<CFlexExpresser>(CFlexExpresser *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFlexExpresser::m_DataMap, CFlexExpresser::GetEntityClass);
  return &CFlexExpresser::m_DataMap;
}


