// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/flexcycler.cpp:522
class CGenericFlexCyclerAlias_cycler : public CGenericFlexCycler {
public:

private:

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CGenericFlexCyclerAlias_cycler(CGenericFlexCyclerAlias_cycler &);
	CGenericFlexCyclerAlias_cycler(CGenericFlexCyclerAlias_cycler &);
	CGenericFlexCyclerAlias_cycler();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CGenericFlexCyclerAlias_cycler();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 9680
};

// src/game/shared/flexcycler.cpp:523
class C_CGenericFlexCycler_MapInstall {
	C_CGenericFlexCycler_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFlexCycler::GetDataDescMap  (line 30, @0x00000000021eeb20, libserver.so)
// globals: CFlexCycler::m_DataMap
datamap_t *__fastcall CFlexCycler::GetDataDescMap(CFlexCycler *const this)
{
  return &CFlexCycler::m_DataMap;
}


// CFlexCycler::AddDatadescMetadataKeys  (line 30, @0x0000000002200ac0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFlexCycler::GetEntityClass(void)
void __fastcall CFlexCycler::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFlexCycler::GetEntityClass);
}


// CFlexCycler::GetBaseMap  (line 30, @0x0000000002200ae0, libserver.so)
datamap_t *__cdecl CFlexCycler::GetBaseMap()
{
  return &CBaseFlex::m_DataMap;
}


// DataMapInit<CFlexCycler>  (line 30, @0x0000000002200af0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CFlexCycler"
// globals: `guard variable for'DataMapInit<CFlexCycler>(CFlexCycler *)::nameHolder, CFlexCycler::GetEntityClass(void), CFlexCycler::m_DataMap, DataMapInit<CFlexCycler>(CFlexCycler *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFlexCycler>(CFlexCycler *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFlexCycler>(CFlexCycler *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFlexCycler>(CFlexCycler *)::nameHolder) != 0 )
  {
    DataMapInit<CFlexCycler>(CFlexCycler *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFlexCycler>(CFlexCycler *)::nameHolder.m_pszBase = "CFlexCycler";
    DataMapInit<CFlexCycler>(CFlexCycler *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFlexCycler>(CFlexCycler *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFlexCycler>(CFlexCycler *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFlexCycler>(CFlexCycler *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFlexCycler>(CFlexCycler *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFlexCycler>(CFlexCycler *)::nameHolder,
      &_dso_handle);
  }
  CFlexCycler::m_DataMap.dataNumFields = 14;
  CFlexCycler::m_DataMap.baseMap = &CBaseFlex::m_DataMap;
  CFlexCycler::m_DataMap.dataDesc = &DataMapInit<CFlexCycler>(CFlexCycler *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFlexCycler::m_DataMap, CFlexCycler::GetEntityClass);
  return &CFlexCycler::m_DataMap;
}


// CFlexCycler::Spawn  (line 53, @0x00000000021f3c00, libserver.so)  // inlines: AddSolidFlags, GetFloat, SetCollisionBounds, SetPlaybackRate, SetSolid, Vector, curtime
// calls: CBaseAnimating::Spawn, CCollisionProperty::SetSolidFlags, CCollisionProperty::SetCollisionBounds, CBaseEntity::SetMoveType, CBaseEntity::SetDamageOptions, CBaseAnimating::GetBaseAnimatingController, CBaseEntity::ThinkSet, CBaseAnimating::ResetSequenceInfo, CBaseAnimating::SetCycle
// callers: CGenericFlexCycler::Spawn, CFlexExpresser::Spawn
// globals: CFlexCycler::FlexThink(void)
void __fastcall CFlexCycler::Spawn(CFlexCycler *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r12
  CBaseAnimatingController *BaseAnimatingController; // rax
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v6; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v8; // xmm0_8
  float v9; // xmm1_4
  Vector mins; // [rsp+0h] [rbp-30h] BYREF
  Vector maxs; // [rsp+10h] [rbp-20h] BYREF

  p_m_Collision = &this->m_Collision;
  CBaseAnimating::Spawn(this, pKeyValues);
  (*(this->m_Collision._vptr_ICollideable + 26))(p_m_Collision, 0);
  CCollisionProperty::SetSolidFlags(p_m_Collision, this->m_Collision.m_usSolidFlags.m_Value | 1);
  maxs.x = 16.0;
  maxs.y = 16.0;
  maxs.z = 72.0;
  mins.x = -16.0;
  mins.y = -16.0;
  mins.z = -0.0;
  CCollisionProperty::SetCollisionBounds(p_m_Collision, &mins, &maxs);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_YES);
  (*(this->_vptr_IHandleEntity + 157))(this, 80000);
  BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
  (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 22))(BaseAnimatingController, 1.0);
  m_flCurrentTime = 0.0;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v6->m_flCurrentTime;
  }
  CBaseEntity::ThinkSet(
    this,
    CFlexCycler::FlexThink,
    m_flCurrentTime + flex_cycler_think_interval.m_pParent->m_Value.m_fValue,
    -158275742,
    0);
  CBaseAnimating::ResetSequenceInfo(this);
  v8 = (*(*random_valve + 8LL))(random_valve, 0.0, 1.0);
  CBaseAnimating::SetCycle(this, v8, v9);
}


// CFlexCycler::InputAddSequenceLayer  (line 131, @0x00000000021ef980, libserver.so)
// calls: CBaseAnimating::GetModelPtr, CModel::NextSequence, CBaseAnimatingOverlay::AddGestureSequence, CBaseAnimatingOverlay::SetLayerWeight, CBaseAnimatingOverlay::SetLayerLooping
void __fastcall CFlexCycler::InputAddSequenceLayer(CFlexCycler *const this, inputdata_t *const inputdata)
{
  const CModel *ModelPtr; // rax
  HSequence v4; // eax
  HSequence v5; // edx
  int v6; // r12d
  float v7; // xmm1_4

  if ( CBaseAnimating::GetModelPtr(this) != 0 )
  {
    ModelPtr = CBaseAnimating::GetModelPtr(this);
    v4.m_Data = CModel::NextSequence(ModelPtr, this->m_hCurrLayerSequence).m_Data;
    v5.m_Data = 0;
    if ( v4.m_Data != -1 )
      v5.m_Data = v4.m_Data;
    this->m_hCurrLayerSequence = v5;
    v6 = CBaseAnimatingOverlay::AddGestureSequence(this, v5, 0);
    CBaseAnimatingOverlay::SetLayerWeight(this, v6, 0.5, v7);
    CBaseAnimatingOverlay::SetLayerLooping(this, v6, 1);
  }
}


// CFlexCycler::InputClearAllSequenceLayers  (line 147, @0x00000000021efa00, libserver.so)
// calls: CBaseAnimatingOverlay::RemoveAllGestures
void __fastcall CFlexCycler::InputClearAllSequenceLayers(CFlexCycler *const this, inputdata_t *const inputdata)
{
  CBaseAnimatingOverlay::RemoveAllGestures(this);
}


// CFlexCycler::OnTakeDamage  (line 156, @0x00000000021f18e0, libserver.so)  // inlines: GetSequence, ResetSequence
// calls: CBaseAnimating::GetModelPtr, CBaseAnimating::GetBaseAnimatingController, CModel::NextSequence, CBaseAnimating::IsValidSequence, CBaseAnimating::SetCycle
// callers: CGenericFlexCycler::OnTakeDamage
int __fastcall CFlexCycler::OnTakeDamage(CFlexCycler *const this, const CTakeDamageInfo *const info)
{
  const CBaseAnimatingController *BaseAnimatingController; // rax
  HSequence v4; // r12d
  const CModel *ModelPtr; // rax
  HSequence v6; // r12d
  CBaseAnimatingController *v7; // rax
  float v8; // xmm1_4

  if ( CBaseAnimating::GetModelPtr(this) != 0 )
  {
    BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
    v4.m_Data = (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 24))(BaseAnimatingController);
    ModelPtr = CBaseAnimating::GetModelPtr(this);
    v6.m_Data = CModel::NextSequence(ModelPtr, v4).m_Data;
    if ( !CBaseAnimating::IsValidSequence(this, v6) )
      v6.m_Data = 0;
    v7 = CBaseAnimating::GetBaseAnimatingController(this);
    (*(v7->_vptr_CSkeletonAnimationController + 23))(v7, v6.m_Data, 1);
    CBaseAnimating::SetCycle(this, 0.0, v8);
  }
  return 0;
}


// CFlexCycler::SetFlexTarget  (line 174, @0x0000000002200bc0, libserver.so)
// calls: CBaseAnimating::GetFlexControllerType, V_stricmp_fast, CBaseAnimating::GetNumFlexControllers, CBaseAnimating::GetFlexControllerName
// callers: CFlexCycler::FlexThink
// strings: "right_", "left_"
void __fastcall CFlexCycler::SetFlexTarget(CFlexCycler *const this, LocalFlexController_t flexnum)
{
  LocalFlexController_t v4; // ebx
  float *v5; // r15
  const char *FlexControllerType; // r14
  const char *v7; // rax

  v4 = 0;
  v5 = (this + 4 * flexnum);
  v5[341] = (*(*random_valve + 8LL))(random_valve, 0.5, 1.0);
  FlexControllerType = CBaseAnimating::GetFlexControllerType(this, flexnum);
  while ( v4 < CBaseAnimating::GetNumFlexControllers(this) )
  {
    if ( flexnum != v4 )
    {
      v7 = CBaseAnimating::GetFlexControllerType(this, v4);
      if ( V_stricmp_fast(FlexControllerType, v7) == 0 )
        this->m_flextarget[v4] = 0.0;
    }
    ++v4;
  }
  if ( memcmp("right_", CBaseAnimating::GetFlexControllerName(this, flexnum), 6u) == 0 )
  {
    *(&this->_vptr_IHandleEntity + flexnum + 342) = v5[341];
  }
  else if ( memcmp("left_", CBaseAnimating::GetFlexControllerName(this, flexnum), 5u) == 0 && flexnum > 0 )
  {
    this->m_flextarget[flexnum - 1] = v5[341];
  }
}


// CFlexCycler::LookupFlex  (line 210, @0x0000000002200d00, libserver.so)
// calls: CBaseAnimating::GetFlexControllerName, V_stricmp_fast, CBaseAnimating::GetNumFlexControllers
// callers: CFlexCycler::FlexThink
LocalFlexController_t __fastcall CFlexCycler::LookupFlex(CFlexCycler *const this, const char *szTarget)
{
  LocalFlexController_t v4; // ebx
  LocalFlexController_t v5; // esi
  const char *FlexControllerName; // rax
  LocalFlexController_t v7; // r13d

  v4 = 0;
  do
  {
    v7 = v4;
    if ( v4 >= CBaseAnimating::GetNumFlexControllers(this) )
      return LocalFlexController_t::DUMMY_FLEX_CONTROLLER|0x80000000;
    v5 = v4++;
    FlexControllerName = CBaseAnimating::GetFlexControllerName(this, v5);
  }
  while ( V_stricmp_fast(szTarget, FlexControllerName) != 0 );
  return v7;
}


// CFlexCycler::FlexThink  (line 224, @0x0000000002200d70, libserver.so)  // inlines: Blink, DotProduct, FStrEq, FastSqrt, GetFloat, GetSequence, GetString, IsInVRMode, IsSequenceFinished, Length, NetworkStateChanged, ResetSequence, Set, V_strlen, V_strncpy<long unsigned int>, VectorAdd, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, atoi, operator*, operator+, operator-, operator=, operator=<bool>, strstr
// calls: CBaseAnimating::StudioFrameAdvance, CBaseAnimating::DispatchAnimEvents, CBaseAnimating::GetBaseAnimatingController, CBaseAnimating::GetNumFlexControllers, ConVar::SetValue, CGlobalVarsBase::curtime, UTIL_PlayerByIndex, CBaseEntity::SetNextThink, CBaseAnimating::SequenceLoops, CBaseEntity::SetAnimTime, CBaseFlex::SetFlexWeight, CBaseFlex::GetFlexWeight (25 total)
// strings: "FCVAR_NEVER_AS_STRING", "%s:%s\n", "%31s", "\"%s\" "
// globals: flex_talk, flex_expression, predef_flexcontroller_names, predef_flexcontroller_values
void __fastcall CFlexCycler::FlexThink(CFlexCycler *const this)
{
  const CBaseAnimatingController *BaseAnimatingController; // rax
  char *m_pszString; // rax
  char v4; // dl
  bool v5; // r12
  CBasePlayer *v6; // r12
  float v7; // xmm1_4
  double v8; // xmm0_8
  double v9; // xmm1_8
  double v10; // xmm0_8
  vec_t v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  const CBaseAnimatingController *v14; // rax
  unsigned int v15; // r12d
  CBaseAnimatingController *v16; // rax
  LocalFlexController_t i; // r12d
  float v18; // xmm2_4
  float v19; // xmm1_4
  float FlexWeight; // xmm2_4
  __m128i v21; // xmm0
  double v22; // xmm0_8
  CGlobalVars *v23; // rdi
  vec_t v24; // xmm1_4
  LocalFlexController_t v25; // r14d
  float v26; // xmm0_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  LocalFlexController_t v29; // r12d
  double v30; // xmm0_8
  int (**vptr_IHandleEntity)(...); // rax
  float v32; // xmm1_4
  float v33; // xmm1_4
  double v34; // xmm0_8
  vec_t v35; // xmm1_4
  CGlobalVars *v36; // rdi
  char *v37; // rsi
  LocalFlexController_t v38; // r13d
  LocalFlexController_t v39; // r12d
  float v40; // xmm1_4
  double NumFlexControllers; // xmm3_8
  IUniformRandomStream *v42; // rax
  __m128d v43; // xmm1
  float v44; // xmm7_4
  __int64 (__fastcall *v45)(IUniformRandomStream *, _QWORD, _QWORD); // r12
  LocalFlexController_t v46; // eax
  LocalFlexController_t v47; // eax
  char *v48; // rdx
  const char *FlexControllerType; // rax
  const char *FlexControllerName; // rax
  const char *v51; // r12
  const char *v52; // rax
  char *v53; // r14
  char v54; // dl
  char *v55; // rax
  char v56; // al
  int v57; // r12d
  LocalFlexController_t v58; // r12d
  const char *v59; // rax
  LocalFlexController_t v60; // r13d
  __int64 v61; // r13
  LocalFlexController_t v62; // r12d
  int v63; // r13d
  const char *v64; // rsi
  __int64 v65; // r12
  LocalFlexController_t v66; // eax
  float v67; // xmm0_4
  float v68; // xmm0_4
  float v69; // xmm0_4
  __m128i y_low; // xmm2
  float v71; // r12d
  double v72; // xmm0_8
  CGlobalVars *v73; // rdi
  float v74; // xmm1_4
  float v75; // xmm0_4
  CGlobalVars *v76; // rdi
  double v77; // xmm1_8
  bool v78; // r12
  LocalFlexController_t v79; // eax
  char *v80; // rax
  float v81; // [rsp+Ch] [rbp-164h]
  float v82; // [rsp+10h] [rbp-160h]
  float v83; // [rsp+14h] [rbp-15Ch]
  float v84; // [rsp+18h] [rbp-158h]
  float v85; // [rsp+1Ch] [rbp-154h]
  float v86; // [rsp+20h] [rbp-150h]
  float v87; // [rsp+24h] [rbp-14Ch]
  float v88; // [rsp+24h] [rbp-14Ch]
  float weight; // [rsp+28h] [rbp-148h]
  float weighta; // [rsp+28h] [rbp-148h]
  float weightb; // [rsp+28h] [rbp-148h]
  float weightc; // [rsp+28h] [rbp-148h]
  float weightd; // [rsp+28h] [rbp-148h]
  float weighte; // [rsp+28h] [rbp-148h]
  float weightf; // [rsp+28h] [rbp-148h]
  float weightg; // [rsp+28h] [rbp-148h]
  float weighth; // [rsp+28h] [rbp-148h]
  float weighti; // [rsp+28h] [rbp-148h]
  Vector forward; // [rsp+30h] [rbp-140h] BYREF
  Vector right; // [rsp+40h] [rbp-130h] BYREF
  Vector up; // [rsp+50h] [rbp-120h] BYREF
  double v102; // [rsp+60h] [rbp-110h]
  float v103; // [rsp+68h] [rbp-108h]
  double v104; // [rsp+70h] [rbp-100h]
  float v105; // [rsp+78h] [rbp-F8h]
  double v106; // [rsp+80h] [rbp-F0h]
  float v107; // [rsp+88h] [rbp-E8h]
  char szTemp[32]; // [rsp+90h] [rbp-E0h] BYREF
  char szExpression[136]; // [rsp+B0h] [rbp-C0h] BYREF
  unsigned __int64 v110; // [rsp+138h] [rbp-38h]

  v110 = __readfsqword(0x28u);
  CBaseAnimating::StudioFrameAdvance(this, AnimationAdvanceType_t::ANIM_ADVANCE_NORMAL);
  CBaseAnimating::DispatchAnimEvents(this, 0);
  BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
  if ( (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 19))(BaseAnimatingController) != 0
    && !CBaseAnimating::SequenceLoops(this) )
  {
    v12 = CGlobalVarsBase::curtime(gpGlobals, 0);
    CBaseEntity::SetAnimTime(this, v12, v13, 0);
    v14 = CBaseAnimating::GetBaseAnimatingController(this);
    v15 = (*(v14->_vptr_CSkeletonAnimationController + 24))(v14);
    v16 = CBaseAnimating::GetBaseAnimatingController(this);
    (*(v16->_vptr_CSkeletonAnimationController + 23))(v16, v15, 1);
  }
  if ( CBaseAnimating::GetNumFlexControllers(this) > 2 )
  {
    m_pszString = "FCVAR_NEVER_AS_STRING";
    if ( (flex_expression.m_nFlags & 0x1000) != 0 )
    {
      v4 = pszParticleName[0];
      if ( pszParticleName[0] != 43 )
        goto LABEL_5;
    }
    else
    {
      m_pszString = "";
      if ( flex_expression.m_pParent->m_Value.m_pszString != 0 )
        m_pszString = flex_expression.m_pParent->m_Value.m_pszString;
      v4 = *m_pszString;
      if ( *m_pszString != 43 )
      {
LABEL_5:
        switch ( v4 )
        {
          case 49:
            v38 = 0;
            if ( m_pszString[1] != 0 )
              goto LABEL_32;
            while ( 1 )
            {
              v39 = v38++;
              if ( v39 >= CBaseAnimating::GetNumFlexControllers(this) )
                break;
              this->m_flextarget[v39] = 1.0;
              CBaseFlex::SetFlexWeight(this, v39, 1.0, v40);
            }
            break;
          case 94:
            if ( m_pszString[1] != 0 )
              goto LABEL_32;
            v25 = 0;
            while ( 1 )
            {
              v29 = v25++;
              if ( v29 >= CBaseAnimating::GetNumFlexControllers(this) )
                break;
              weighte = v29 * (1.0 / CBaseAnimating::GetNumFlexControllers(this));
              v26 = CGlobalVarsBase::curtime(gpGlobals, 0);
              v27 = (sinf(v26 + weighte) * 0.5) + 0.5;
              this->m_flextarget[v29] = v27;
              CBaseFlex::SetFlexWeight(this, v29, v27, v28);
            }
            break;
          case 0:
LABEL_33:
            weightc = this->m_flextime;
            if ( CGlobalVarsBase::curtime(gpGlobals, 0) > weightc )
            {
              weightg = CGlobalVarsBase::curtime(gpGlobals, 0);
              v87 = (*(*random_valve + 8LL))(random_valve, 0.30000001, 0.5);
              NumFlexControllers = CBaseAnimating::GetNumFlexControllers(this);
              v42 = random_valve;
              v43 = _mm_cvtps_pd(LODWORD(weightg));
              v43.m128d_f64[0] = v43.m128d_f64[0] + v87 * (30.0 / NumFlexControllers);
              v44 = _mm_movedup_pd(v43).m128d_f64[0];
              this->m_flextime = v44;
              v45 = *(*v42 + 16LL);
              v46 = CBaseAnimating::GetNumFlexControllers(this);
              v47 = v45(random_valve, 0, (v46 - 1));
              this->m_flexnum = v47;
              v48 = this + 4 * v47;
              if ( *(v48 + 341) == 1.0 )
              {
                *(v48 + 341) = 0;
              }
              else
              {
                FlexControllerType = CBaseAnimating::GetFlexControllerType(this, v47);
                if ( V_stricmp_fast(FlexControllerType, "phoneme") != 0 )
                {
                  FlexControllerName = CBaseAnimating::GetFlexControllerName(this, this->m_flexnum);
                  if ( strstr(FlexControllerName, "upper_raiser") == 0 )
                  {
                    v51 = CBaseAnimating::GetFlexControllerName(this, this->m_flexnum);
                    v52 = CBaseAnimating::GetFlexControllerType(this, this->m_flexnum);
                    Msg("%s:%s\n", v52, v51);
                    CFlexCycler::SetFlexTarget(this, this->m_flexnum);
                  }
                }
              }
            }
            break;
          default:
LABEL_32:
            if ( strcmp(m_pszString, "+") != 0 )
            {
              v53 = szExpression;
              _V_strncpy(szExpression, m_pszString, 128);
              v54 = szExpression[0];
              v55 = szExpression;
              if ( szExpression[0] != 0 )
              {
                do
                {
                  if ( v54 == 43 )
                    *v55 = 32;
                  v54 = *++v55;
                }
                while ( *v55 != 0 );
                v56 = szExpression[0];
                if ( szExpression[0] != 0 )
                {
                  while ( 1 )
                  {
                    if ( v56 != 32 )
                    {
                      v57 = 0;
                      if ( v56 == 45 )
                      {
                        while ( 1 )
                        {
                          v61 = v57++;
                          if ( v61 >= CBaseAnimating::GetNumFlexControllers(this) )
                            break;
                          this->m_flextarget[v61] = 0.0;
                        }
                      }
                      else
                      {
                        v58 = 0;
                        if ( v56 == 63 )
                        {
                          while ( 1 )
                          {
                            v60 = v58++;
                            if ( v60 >= CBaseAnimating::GetNumFlexControllers(this) )
                              break;
                            v59 = CBaseAnimating::GetFlexControllerName(this, v60);
                            Msg("\"%s\" ", v59);
                          }
                          Msg("\n");
                          ConVar::SetValue(&flex_expression, "");
                        }
                        else if ( sscanf(v53, "%31s", szTemp) == 1 )
                        {
                          v79 = CFlexCycler::LookupFlex(this, szTemp);
                          this->m_flexnum = v79;
                          if ( v79 != (LocalFlexController_t::DUMMY_FLEX_CONTROLLER|0x80000000) )
                          {
                            v80 = this + 4 * v79;
                            if ( *(v80 + 341) != 1.0 )
                              *(v80 + 341) = 1065353216;
                          }
                          v53 += (strlen(szTemp) - 1);
                        }
                      }
                    }
                    v56 = v53[1];
                    if ( v56 == 0 )
                      break;
                    ++v53;
                  }
                }
              }
              break;
            }
            goto LABEL_33;
        }
LABEL_34:
        for ( i = 0; ; ++i )
        {
          if ( i >= CBaseAnimating::GetNumFlexControllers(this) )
          {
            if ( flex_talk.m_pParent->m_Value.m_nValue == -1
              || (flex_talk.m_nFlags & 0x1000) != 0
              || (v37 = flex_talk.m_pParent->m_Value.m_pszString) == 0
              || v37 != "0" && strcmp(v37, "0") != 0 )
            {
              ConVar::SetValue(&flex_talk, "0");
            }
            weight = this->m_blinktime;
            if ( CGlobalVarsBase::curtime(gpGlobals, 0) > weight )
            {
              v5 = !this->m_blinktoggle.m_Value;
              if ( this->m_blinktoggle.m_Value != v5 )
              {
                (*(this->_vptr_IHandleEntity + 22))(this, 1252, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                this->m_blinktoggle.m_Value = v5;
              }
              weighta = CGlobalVarsBase::curtime(gpGlobals, 0);
              this->m_blinktime = (*(*random_valve + 8LL))(random_valve, 1.5, 4.5) + weighta;
            }
            goto LABEL_16;
          }
          FlexWeight = CBaseFlex::GetFlexWeight(this, i);
          v21 = LODWORD(this->m_flextarget[i]);
          if ( FlexWeight == *v21.m128i_i32 )
          {
            if ( FlexWeight > 1.0 )
              goto LABEL_37;
          }
          else
          {
            *v21.m128i_i32 = *v21.m128i_i32 - FlexWeight;
            FlexWeight = FlexWeight
                       + (COERCE_FLOAT(_mm_cvtsi128_si32(v21)) / (*(*random_valve + 8LL))(random_valve, 2.0, 4.0));
            if ( FlexWeight > 1.0 )
            {
LABEL_37:
              v18 = 1.0;
              goto LABEL_38;
            }
          }
          v18 = fmaxf(0.0, FlexWeight);
LABEL_38:
          CBaseFlex::SetFlexWeight(this, i, v18, v19);
        }
      }
    }
    if ( m_pszString[1] != 0 )
    {
      v62 = 0;
      v63 = strtol(m_pszString + 1, 0, 10);
      while ( v62 < CBaseAnimating::GetNumFlexControllers(this) )
      {
        ++v62;
        this->m_flextarget[this->m_flexnum] = 0.0;
      }
      v64 = predef_flexcontroller_names[0];
      if ( predef_flexcontroller_names[0] != 0 )
      {
        v65 = 0;
        do
        {
          v66 = CFlexCycler::LookupFlex(this, v64);
          this->m_flexnum = v66;
          v67 = predef_flexcontroller_values[v63][v65++];
          v64 = predef_flexcontroller_names[v65];
          this->m_flextarget[v66] = v67;
        }
        while ( v64 != 0 );
      }
      goto LABEL_34;
    }
    goto LABEL_32;
  }
LABEL_16:
  (*(this->_vptr_IHandleEntity + 61))(this, &forward, &right, &up);
  v6 = UTIL_PlayerByIndex(1);
  if ( v6 != 0 )
  {
    if ( g_pVr != 0 && (*(*g_pVr + 104LL))(g_pVr) != 0 && (*(*g_pVr + 112LL))(g_pVr) != 0 )
    {
      v10 = (*(v6->_vptr_IHandleEntity + 164))(v6);
      v106 = v10;
      v107 = v11;
      this->m_lookTarget.z = v11;
      this->m_lookTarget.x = *&v10;
      this->m_lookTarget.y = *(&v106 + 1);
    }
    else
    {
      v102 = (*(v6->_vptr_IHandleEntity + 172))(v6);
      v103 = v7;
      if ( fsqrt(((*&v102 * *&v102) + (*(&v102 + 1) * *(&v102 + 1))) + (v7 * v7)) == 0.0
        || (v30 = (*(this->_vptr_IHandleEntity + 164))(this),
            vptr_IHandleEntity = v6->_vptr_IHandleEntity,
            v107 = v32,
            v106 = v30,
            v104 = (vptr_IHandleEntity[164])(v6),
            v105 = v33,
            ((((*&v104 - *&v106) * forward.x) + ((*(&v104 + 1) - *(&v106 + 1)) * forward.y)) + ((v33 - v107) * forward.z)) <= 0.5) )
      {
        weightb = this->m_looktime;
        if ( CGlobalVarsBase::curtime(gpGlobals, 0) > weightb )
        {
          if ( this->m_istalking != 0 || (*(*random_valve + 16LL))(random_valve, 0, 1) != 0 )
          {
            v22 = (*(v6->_vptr_IHandleEntity + 164))(v6);
            v23 = gpGlobals;
            v106 = v22;
            this->m_lookTarget.z = v24;
            v107 = v24;
            this->m_lookTarget.x = *&v22;
            this->m_lookTarget.y = *(&v106 + 1);
            weightd = CGlobalVarsBase::curtime(v23, 0);
            this->m_looktime = (*(*random_valve + 8LL))(random_valve, 1.0, 4.0) + weightd;
          }
          else
          {
            v68 = (*(*random_valve + 8LL))(random_valve, -32.0, 32.0);
            weighth = up.x * v68;
            v88 = up.y * v68;
            v86 = v68 * up.z;
            v69 = (*(*random_valve + 8LL))(random_valve, -64.0, 64.0);
            v81 = forward.x * 128.0;
            y_low = LODWORD(forward.y);
            v85 = right.x * v69;
            *y_low.m128i_i32 = forward.y * 128.0;
            v84 = right.y * v69;
            v83 = right.z * v69;
            v71 = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
            v82 = 128.0 * forward.z;
            v72 = (*(this->_vptr_IHandleEntity + 164))(this);
            v73 = gpGlobals;
            v106 = v72;
            v107 = v74;
            this->m_lookTarget.y = (v84 + (v71 + *(&v72 + 1))) + v88;
            this->m_lookTarget.z = ((v74 + v82) + v83) + v86;
            this->m_lookTarget.x = ((v81 + *&v72) + v85) + weighth;
            weighti = CGlobalVarsBase::curtime(v73, 0);
            v75 = (*(*random_valve + 8LL))(random_valve, 0.30000001, 1.0);
            v76 = gpGlobals;
            v77 = this->m_blinktime - 0.5;
            this->m_looktime = v75 + weighti;
            if ( CGlobalVarsBase::curtime(v76, 0) > v77 )
            {
              v78 = !this->m_blinktoggle.m_Value;
              if ( this->m_blinktoggle.m_Value != v78 )
              {
                (*(this->_vptr_IHandleEntity + 22))(this, 1252, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                this->m_blinktoggle.m_Value = v78;
              }
            }
          }
        }
      }
      else
      {
        v34 = (*(v6->_vptr_IHandleEntity + 164))(v6);
        v106 = v34;
        this->m_lookTarget.z = v35;
        v107 = v35;
        v36 = gpGlobals;
        this->m_lookTarget.x = *&v34;
        this->m_lookTarget.y = *(&v106 + 1);
        weightf = CGlobalVarsBase::curtime(v36, 0);
        this->m_looktime = (*(*random_valve + 8LL))(random_valve, 2.0, 4.0) + weightf;
      }
    }
    (*(this->_vptr_IHandleEntity + 251))(this, &this->m_lookTarget);
  }
  *&v8 = CGlobalVarsBase::curtime(gpGlobals, 0) + flex_cycler_think_interval.m_pParent->m_Value.m_fValue;
  CBaseEntity::SetNextThink(this, v8, v9, -158275742);
}


// CFlexCycler::ProcessSceneEvents  (line 510, @0x00000000021eeb30, libserver.so)
void __fastcall CFlexCycler::ProcessSceneEvents(CFlexCycler *const this)
{
  ;
}


// CGenericFlexCyclerAlias_cycler::Schema_DynamicBinding  (line 522, @0x000000000220ec90, libserver.so)
// globals: CGenericFlexCyclerAlias_cycler::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CGenericFlexCyclerAlias_cycler::Schema_DynamicBinding(
        const CGenericFlexCyclerAlias_cycler *const this)
{
  return CGenericFlexCyclerAlias_cycler::s_pSchemaBinding;
}


// CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 522, @0x000000000220eca0, libserver.so)
// globals: CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass *const this)
{
  return CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass::DestructInstance  (line 522, @0x000000000220ecb0, libserver.so)  // inlines: Destruct<CGenericFlexCyclerAlias_cycler>
void __fastcall CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass::DestructInstance(
        CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass::FreeInstance  (line 522, @0x000000000220ecd0, libserver.so)
void __fastcall CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass::FreeInstance(
        CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass::CanAllocate  (line 522, @0x000000000220ecf0, libserver.so)
bool __fastcall CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass::CanAllocate(
        const CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 522, @0x000000000220ed00, libserver.so)
// globals: CGenericFlexCyclerAlias_cycler::s_pSchemaBinding
const ISchemaBinding *__fastcall CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass *const this)
{
  return CGenericFlexCyclerAlias_cycler::s_pSchemaBinding;
}


// CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass::AllocateInstance  (line 522, @0x000000000220ff20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass::AllocateInstance(
        CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 9680);
  memset(v1, 0, 0x25D0u);
  return v1;
}


// CGenericFlexCyclerAlias_cycler::~CGenericFlexCyclerAlias_cycler  (line 522, @0x0000000002211250, libserver.so)  // inlines: ~CFlexCycler, ~CGenericFlexCycler
// calls: CBaseFlex::~CBaseFlex
void __fastcall CGenericFlexCyclerAlias_cycler::~CGenericFlexCyclerAlias_cycler(
        CGenericFlexCyclerAlias_cycler *const this)
{
  this->_vptr_IBoneTransformOverride = &off_403E4A0;
  this->_vptr_IHandleEntity = &off_403CAF0;
  CBaseFlex::~CBaseFlex(this);
}


// CGenericFlexCyclerAlias_cycler::~CGenericFlexCyclerAlias_cycler  (line 522, @0x0000000002211280, libserver.so)  // inlines: ~CFlexCycler, ~CGenericFlexCycler, ~CGenericFlexCyclerAlias_cycler
// calls: CBaseFlex::~CBaseFlex, CBaseEntity::operator delete
void __fastcall CGenericFlexCyclerAlias_cycler::~CGenericFlexCyclerAlias_cycler(
        CGenericFlexCyclerAlias_cycler *const this)
{
  this->_vptr_IBoneTransformOverride = &off_403E4A0;
  this->_vptr_IHandleEntity = &off_403CAF0;
  CBaseFlex::~CBaseFlex(this);
  CBaseEntity::operator delete(this);
}


// CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 522, @0x0000000002212530, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 522, @0x0000000002212550, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CGenericFlexCyclerAlias_cycler::GetEntityClassInternal  (line 522, @0x0000000002218a90, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseFlex::InitScriptDesc, CGenericFlexCycler::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "cycler", "CGenericFlexCyclerAlias_cycler"
// globals: `guard variable for'CGenericFlexCyclerAlias_cycler::GetEntityClassInternal(void)::g_EntityCGenericFlexCyclerAlias_cyclerClass, CGenericFlexCyclerAlias_cycler::GetEntityClassInternal(void)::g_EntityCGenericFlexCyclerAlias_cyclerClass, __dso_handle, CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CGenericFlexCyclerAlias_cycler::GetEntityClassInfo(void)::g_EntityCGenericFlexCyclerAlias_cyclerClassInfo, CGenericFlexCyclerAlias_cycler::GetEntityClassInfo(void)::g_EntityCGenericFlexCyclerAlias_cyclerClassInfo
CEntityClass *__cdecl CGenericFlexCyclerAlias_cycler::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CGenericFlexCyclerAlias_cycler::GetEntityClassInternal(void)::g_EntityCGenericFlexCyclerAlias_cyclerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CGenericFlexCyclerAlias_cycler::GetEntityClassInternal(void)::g_EntityCGenericFlexCyclerAlias_cyclerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CGenericFlexCyclerAlias_cycler::GetEntityClassInternal(void)::g_EntityCGenericFlexCyclerAlias_cyclerClass);
    CGenericFlexCyclerAlias_cycler::GetEntityClassInternal(void)::g_EntityCGenericFlexCyclerAlias_cyclerClass._vptr_CEntityClass = off_403D350;
    __cxa_guard_release(&`guard variable for'CGenericFlexCyclerAlias_cycler::GetEntityClassInternal(void)::g_EntityCGenericFlexCyclerAlias_cyclerClass);
    __cxa_atexit(
      CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CGenericFlexCyclerAlias_cycler::GetEntityClassInternal(void)::g_EntityCGenericFlexCyclerAlias_cyclerClass,
      &_dso_handle);
  }
  if ( g_pEntityCGenericFlexCyclerAlias_cyclerClass != 0 )
    return &CGenericFlexCyclerAlias_cycler::GetEntityClassInternal(void)::g_EntityCGenericFlexCyclerAlias_cyclerClass;
  if ( `guard variable for'CGenericFlexCyclerAlias_cycler::GetEntityClassInfo(void)::g_EntityCGenericFlexCyclerAlias_cyclerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CGenericFlexCyclerAlias_cycler::GetEntityClassInfo(void)::g_EntityCGenericFlexCyclerAlias_cyclerClassInfo) != 0 )
  {
    EntityClassInfo = CGenericFlexCycler::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CGenericFlexCyclerAlias_cycler::GetEntityClassInfo(void)::g_EntityCGenericFlexCyclerAlias_cyclerClassInfo,
      "CGenericFlexCyclerAlias_cycler",
      "cycler",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CGenericFlexCyclerAlias_cycler::GetEntityClassInfo(void)::g_EntityCGenericFlexCyclerAlias_cyclerClassInfo);
  }
  CGenericFlexCyclerAlias_cycler::GetEntityClassInternal(void)::g_EntityCGenericFlexCyclerAlias_cyclerClass.m_pClassInfo = &CGenericFlexCyclerAlias_cycler::GetEntityClassInfo(void)::g_EntityCGenericFlexCyclerAlias_cyclerClassInfo;
  CGenericFlexCyclerAlias_cycler::GetEntityClassInternal(void)::g_EntityCGenericFlexCyclerAlias_cyclerClass.m_pBaseClassInfo = CGenericFlexCyclerAlias_cycler::GetEntityClassInfo(void)::g_EntityCGenericFlexCyclerAlias_cyclerClassInfo.m_pBaseClassInfo;
  g_pEntityCGenericFlexCyclerAlias_cyclerClass = &CGenericFlexCyclerAlias_cycler::GetEntityClassInternal(void)::g_EntityCGenericFlexCyclerAlias_cyclerClass;
  CGenericFlexCyclerAlias_cycler::GetEntityClassInfo(void)::g_EntityCGenericFlexCyclerAlias_cyclerClassInfo.m_pClass = &CGenericFlexCyclerAlias_cycler::GetEntityClassInternal(void)::g_EntityCGenericFlexCyclerAlias_cyclerClass;
  CGenericFlexCyclerAlias_cycler::GetEntityClassInternal(void)::g_EntityCGenericFlexCyclerAlias_cyclerClass.m_pScriptClassDesc = CBaseFlex::InitScriptDesc();
  g_pEntityCGenericFlexCyclerAlias_cyclerClass->m_pComponentOverrides = 0;
  return &CGenericFlexCyclerAlias_cycler::GetEntityClassInternal(void)::g_EntityCGenericFlexCyclerAlias_cyclerClass;
}


// CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass::ConstructInstance  (line 522, @0x0000000002218be0, libserver.so)  // inlines: CGenericFlexCyclerAlias_cycler, Construct<CGenericFlexCyclerAlias_cycler>
// calls: CGenericFlexCycler::CGenericFlexCycler
CEntityInstance *__fastcall CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass::ConstructInstance(
        CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CGenericFlexCycler::CGenericFlexCycler(p);
    *p = &off_403D3D0;
    *(p + 1201) = &off_403DC20;
  }
  return p;
}


// CGenericFlexCycler::YouForgotToImplementOrDeclareServerClass  (line 523, @0x00000000021eeb40, libserver.so)
int __fastcall CGenericFlexCycler::YouForgotToImplementOrDeclareServerClass(CGenericFlexCycler *const this)
{
  return 0;
}


// CGenericFlexCycler::GetServerClass  (line 523, @0x00000000021f4630, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CGenericFlexCycler::GetServerClass(CGenericFlexCycler *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CGenericFlexCycler::CGenericFlexCycler  (line 525, @0x0000000002201b80, libserver.so)  // inlines: CFlexCycler, CNetworkVarBase, CUtlSymbolLarge, EnsureValidValue<int>, HSequence
// calls: CBaseFlex::CBaseFlex
// callers: CGenericFlexCycler::CEntityInstanceEntityClass::ConstructInstance, CGenericFlexCyclerAlias_cycler::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CGenericFlexCycler::CGenericFlexCycler(CGenericFlexCycler *const this)
{
  CBaseFlex::CBaseFlex(this);
  this->m_iszSentence.u.m_Id = 0;
  this->_vptr_IHandleEntity = &off_403DC50;
  this->m_sentence = 0;
  this->m_hCurrLayerSequence.m_Data = 0;
  this->_vptr_IBoneTransformOverride = &off_403E4A0;
  this->m_nTestMode.m_Value = 0;
  this->m_poseParameterName.u.m_Id = 0;
  this->m_layerSequence[0].u.m_Id = 0;
  this->m_layerSequence[1].u.m_Id = 0;
  this->m_hBaseSequence[0].m_Data = -1;
  this->m_hBaseSequence[1].m_Data = -1;
  this->m_bDoClientSideAnimation = 0;
  this->m_nBoneOverrideIndex = -1;
}


// CGenericFlexCycler::Precache  (line 532, @0x000000000220d5b0, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheModelFromKeyValues
void __fastcall CGenericFlexCycler::Precache(CGenericFlexCycler *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  CBaseEntity::PrecacheModelFromKeyValues(this, pContext, 0, 1);
}


// CGenericFlexCycler::Spawn  (line 539, @0x0000000002205b10, libserver.so)  // inlines: Base, Element, FindKeyHash, GetModelNameFromKeyValues, GetSequence, GetValue, GetValueString, SetCollisionBounds, String, TempString, ToCStr, Vector, operator[]
// calls: CFlexCycler::Spawn, GetModelNameFromKeyValues, CBaseEntity::GetAbsOrigin, Warning, UTIL_Remove, CBaseModelEntity::SetModel, CBaseAnimating::LookupSequence, CBaseAnimating::IsValidSequence, CBaseAnimating::SetSequence, CCollisionProperty::SetCollisionBounds, CBaseAnimating::GetModelPtr, GetEyePosition (22 total)
// strings: "cycler at %.0f %.0f %0.f missing modelname\n", "cycler_flex used on model %s without enough flexes.\n", "cycler_flex used on model \"%s\" specified unknown sequence \"%s\"\n"
// globals: CEntityKeyValues::sm_EmptyVariant, CGenericFlexCycler::DisplayTestModeNameThink(void), jpt_2205D72, CGenericFlexCycler::ResetSequencesThink(void), CGenericFlexCycler::UseProceduralBonesThink(void), CGenericFlexCycler::ClientSideRagdollThink(void), CGenericFlexCycler::ModelScaleThink(void), CGenericFlexCycler::ToggleSequencesThink(void) (11 total)
void __fastcall CGenericFlexCycler::Spawn(CGenericFlexCycler *const this, const CEntityKeyValues *pKeyValues)
{
  const char *ModelNameFromKeyValues; // rax
  const char *v5; // r13
  const Vector *AbsOrigin; // rax
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // ax
  __int64 i; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v11; // rcx
  CEntityVariant *p_m_value; // rax
  const char *m_uint64; // r15
  HSequence v14; // r14d
  const CModel *ModelPtr; // rax
  bool v16; // zf
  float v17; // xmm0_4
  const CModel *ModelData; // rax
  const CModel *v19; // r14
  const char *m_pAsString; // rsi
  int v21; // eax
  int v22; // r15d
  const PoseParamDesc_t *v23; // rax
  float v24; // xmm1_4
  float v25; // xmm0_4
  float v26; // xmm0_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  const CBaseAnimatingController *BaseAnimatingController; // rax
  const char *ValueString; // rax
  const char *v31; // r12
  HSequence v32; // eax
  float v33; // xmm0_4
  float v34; // xmm0_4
  float v35; // xmm0_4
  float v36; // xmm0_4
  double z; // [rsp+0h] [rbp-60h]
  double y; // [rsp+8h] [rbp-58h]
  Vector mins; // [rsp+10h] [rbp-50h] BYREF
  Vector vecEyeOffset; // [rsp+20h] [rbp-40h] BYREF

  CFlexCycler::Spawn(this, pKeyValues);
  ModelNameFromKeyValues = GetModelNameFromKeyValues(pKeyValues, "");
  v5 = ModelNameFromKeyValues;
  if ( ModelNameFromKeyValues != 0 && *ModelNameFromKeyValues != 0 )
  {
    CBaseModelEntity::SetModel(this, ModelNameFromKeyValues);
    m_nCount = pKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount > 0 )
    {
      m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
      for ( i = 0; m_nCount > i; ++i )
      {
        if ( m_nAllocated != 0 )
        {
          m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( m_nAllocated > 9 )
            m_pElements = pKeyValues->m_keyHashes.m_pElements;
          if ( m_pElements[i] == -1618663357 )
          {
LABEL_12:
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v11 = pKeyValues->m_keyValues.m_pElements;
            else
              v11 = 0;
            p_m_value = &v11[i].m_value;
            if ( p_m_value->m_type == 30 )
              goto LABEL_15;
            goto LABEL_19;
          }
        }
        else if ( *(4 * i) == -1618663357 )
        {
          goto LABEL_12;
        }
      }
    }
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
    {
LABEL_15:
      m_uint64 = p_m_value->m_uint64;
      if ( p_m_value->m_uint64 != 0 )
      {
        v14.m_Data = CBaseAnimating::LookupSequence(this, p_m_value->m_pszString).m_Data;
        if ( CBaseAnimating::IsValidSequence(this, v14) )
          CBaseAnimating::SetSequence(this, v14, SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE);
        else
          Warning("cycler_flex used on model \"%s\" specified unknown sequence \"%s\"\n", v5, m_uint64);
      }
    }
LABEL_19:
    vecEyeOffset.x = 16.0;
    vecEyeOffset.y = 16.0;
    vecEyeOffset.z = 72.0;
    mins.x = -16.0;
    mins.y = -16.0;
    mins.z = 0.0;
    CCollisionProperty::SetCollisionBounds(&this->m_Collision, &mins, &vecEyeOffset);
    ModelPtr = CBaseAnimating::GetModelPtr(this);
    GetEyePosition(ModelPtr, &vecEyeOffset);
    (*(this->_vptr_IHandleEntity + 211))(this, &vecEyeOffset);
    (*(this->_vptr_IHandleEntity + 219))(this);
    if ( CBaseAnimating::GetNumFlexControllers(this) <= 4 )
      Warning("cycler_flex used on model %s without enough flexes.\n", v5);
    if ( this->m_bDoClientSideAnimation )
      CBaseAnimating::UseClientSideAnimation(this, 1);
    v16 = this->m_poseParameterName.u.m_Id == 0;
    this->m_nTestIndex = 0;
    if ( !v16 )
    {
      ModelData = CBaseEntity::GetModelData(this);
      v19 = ModelData;
      if ( ModelData != 0 )
      {
        m_pAsString = "";
        if ( this->m_poseParameterName.u.m_Id != 0 )
          m_pAsString = this->m_poseParameterName.u.m_pAsString;
        v21 = CModel::LookupPoseParameter(ModelData, m_pAsString);
        v22 = v21;
        if ( v21 >= 0 )
        {
          v23 = CModel::pPoseParameter(v19, v21);
          CBaseAnimating::SetPoseParameter(this, v22, COERCE_DOUBLE(LODWORD(v23->m_end)), v24);
        }
      }
    }
    v17 = CGlobalVarsBase::curtime(gpGlobals, 0);
    CBaseEntity::ThinkSet(
      this,
      CGenericFlexCycler::DisplayTestModeNameThink,
      v17 + gpGlobals->interval_per_tick,
      -594216902,
      0);
    switch ( this->m_nTestMode.m_Value )
    {
      case 1:
        v36 = CGlobalVarsBase::curtime(gpGlobals, 0);
        CBaseEntity::ThinkSet(
          this,
          CGenericFlexCycler::OscillatePoseParametersThink,
          v36 + gpGlobals->interval_per_tick,
          643978158,
          0);
        break;
      case 2:
        v35 = CGlobalVarsBase::curtime(gpGlobals, 0);
        CBaseEntity::ThinkSet(this, CGenericFlexCycler::AddRemoveAnimationLayersThink, v35 + 0.5, 643978158, 0);
        break;
      case 3:
        v34 = CGlobalVarsBase::curtime(gpGlobals, 0);
        CBaseEntity::ThinkSet(this, CGenericFlexCycler::TriggerAnimEventsThink, v34 + 1.5, 643978158, 0);
        break;
      case 4:
        BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
        this->m_hBaseSequence[0].m_Data = (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 24))(BaseAnimatingController);
        this->m_hBaseSequence[1].m_Data = -1;
        ValueString = CEntityKeyValues::GetValueString(pKeyValues, 1574982413, 0);
        v31 = ValueString;
        if ( ValueString != 0 )
        {
          v32.m_Data = CBaseAnimating::LookupSequence(this, ValueString).m_Data;
          this->m_hBaseSequence[1] = v32;
          if ( v32.m_Data == -1 )
            Warning("cycler_flex used on model \"%s\" specified unknown sequence \"%s\"\n", v5, v31);
        }
        v33 = CGlobalVarsBase::curtime(gpGlobals, 0);
        CBaseEntity::ThinkSet(this, CGenericFlexCycler::ToggleSequencesThink, v33 + 1.0, 643978158, 0);
        break;
      case 5:
        v28 = CGlobalVarsBase::curtime(gpGlobals, 0);
        CBaseEntity::ThinkSet(
          this,
          CGenericFlexCycler::ModelScaleThink,
          v28 + gpGlobals->interval_per_tick,
          643978158,
          0);
        break;
      case 6:
        v27 = CGlobalVarsBase::curtime(gpGlobals, 0);
        CBaseEntity::ThinkSet(this, CGenericFlexCycler::ClientSideRagdollThink, v27 + 1.5, 643978158, 0);
        break;
      case 7:
        v26 = CGlobalVarsBase::curtime(gpGlobals, 0);
        CBaseEntity::ThinkSet(this, CGenericFlexCycler::UseProceduralBonesThink, v26 + 0.5, 643978158, 0);
        break;
      case 8:
        v25 = CGlobalVarsBase::curtime(gpGlobals, 0);
        CBaseEntity::ThinkSet(this, CGenericFlexCycler::ResetSequencesThink, v25 + 0.5, 643978158, 0);
        break;
      default:
        return;
    }
  }
  else
  {
    z = CBaseEntity::GetAbsOrigin(this)->z;
    y = CBaseEntity::GetAbsOrigin(this)->y;
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    Warning("cycler at %.0f %.0f %0.f missing modelname\n", AbsOrigin->x, y, z);
    UTIL_Remove(this);
  }
}


// CGenericFlexCycler::Activate  (line 654, @0x00000000021efa10, libserver.so)
// calls: CBaseAnimating::Activate, CBaseEntity::GetModelData, CModel::FindBoneIndex
// strings: "ValveBiped.Bip01_Head1"
void __fastcall CGenericFlexCycler::Activate(CGenericFlexCycler *const this, ActivateType_t activateType)
{
  const CModel *ModelData; // rax

  CBaseAnimating::Activate(this, activateType);
  ModelData = CBaseEntity::GetModelData(this);
  if ( ModelData != 0 )
    this->m_nBoneOverrideIndex = CModel::FindBoneIndex(ModelData, "ValveBiped.Bip01_Head1");
}


// CGenericFlexCycler::OnTakeDamage  (line 666, @0x00000000021f1970, libserver.so)
// calls: CFlexCycler::OnTakeDamage
int __fastcall CGenericFlexCycler::OnTakeDamage(CGenericFlexCycler *const this, const CTakeDamageInfo *const info)
{
  if ( this->m_nTestMode.m_Value != 0 )
    return 0;
  else
    return CFlexCycler::OnTakeDamage(this, info);
}


// CGenericFlexCycler::DisplayTestModeNameThink  (line 675, @0x00000000021f28f0, libserver.so)  // inlines: curtime
// calls: IDebugOverlay::EntityText, CBaseEntity::SetNextThink
// globals: CGenericFlexCycler::DisplayTestModeNameThink(void)::s_pTestModeNames
void __fastcall CGenericFlexCycler::DisplayTestModeNameThink(CGenericFlexCycler *const this)
{
  double v2; // xmm1_8
  CGlobalVars *v3; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v5; // xmm0_8

  IDebugOverlay::EntityText(
    g_pDebugOverlay,
    this,
    0,
    CGenericFlexCycler::DisplayTestModeNameThink(void)::s_pTestModeNames[this->m_nTestMode.m_Value],
    1.0,
    255,
    255,
    255,
    255);
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v5) = 0;
    *&v5 = v3->m_flCurrentTime + 1.0;
  }
  else
  {
    *&v5 = 1065353216;
  }
  CBaseEntity::SetNextThink(this, v5, v2, -594216902);
}


// CGenericFlexCycler::OscillatePoseParametersThink  (line 696, @0x00000000021f3a50, libserver.so)  // inlines: String, ToCStr, curtime
// calls: CBaseEntity::GetModelData, CModel::LookupPoseParameter, CModel::pPoseParameter, sin, CBaseAnimating::SetPoseParameter, CBaseEntity::SetNextThink
void __fastcall CGenericFlexCycler::OscillatePoseParametersThink(CGenericFlexCycler *const this)
{
  const CModel *ModelData; // rax
  const CModel *v3; // r12
  const char *m_pAsString; // rsi
  int v5; // eax
  int v6; // r13d
  const PoseParamDesc_t *v7; // r15
  CGlobalVars *v8; // r12
  double v9; // xmm0_8
  __m128d v10; // xmm1
  float v11; // xmm0_4
  double v12; // xmm1_8
  CGlobalVars *v13; // r12
  CGlobalVars *v14; // rax
  double v15; // xmm0_8
  FnGlobalVarsWarningFunc v16; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  ModelData = CBaseEntity::GetModelData(this);
  v3 = ModelData;
  if ( ModelData != 0 )
  {
    m_pAsString = "";
    if ( this->m_poseParameterName.u.m_Id != 0 )
      m_pAsString = this->m_poseParameterName.u.m_pAsString;
    v5 = CModel::LookupPoseParameter(ModelData, m_pAsString);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v7 = CModel::pPoseParameter(v3, v5);
      v8 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
            m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        }
        v9 = sin((1.5700001 * v8->m_flCurrentTime)) * 0.5 + 0.5;
      }
      else
      {
        v9 = 0.5;
      }
      v10.m128d_f64[1] = (v7->m_end - v7->m_start);
      v10.m128d_f64[0] = v10.m128d_f64[1] * v9 + v7->m_start;
      v11 = CBaseAnimating::SetPoseParameter(this, v6, _mm_movedup_pd(v10).m128d_f64[0], *v10.m128d_f64);
      v13 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        v14 = gpGlobals;
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v16 = gpGlobals->m_pfnWarningFunc;
          if ( v16 != 0 )
            (v16)(1, v11);
          v14 = gpGlobals;
        }
        *&v15 = LODWORD(v13->m_flCurrentTime);
      }
      else
      {
        v14 = 0;
        v15 = 0.0;
      }
      *&v15 = *&v15 + v14->interval_per_tick;
      CBaseEntity::SetNextThink(this, v15, v12, 643978158);
    }
  }
}


// CGenericFlexCycler::AddRemoveAnimationLayersThink  (line 714, @0x00000000021f2a50, libserver.so)  // inlines: String, ToCStr, curtime
// calls: CBaseAnimating::LookupSequence, CBaseAnimatingOverlay::AddGestureSequence, CBaseAnimatingOverlay::SetLayerWeight, CBaseEntity::SetNextThink, CBaseAnimatingOverlay::RemoveLayer
void __fastcall CGenericFlexCycler::AddRemoveAnimationLayersThink(CGenericFlexCycler *const this)
{
  float v1; // xmm2_4
  int m_nTestIndex; // eax
  const char *v4; // rsi
  __int64 v5; // r12
  bool *v6; // rax
  HSequence v7; // eax
  int v8; // eax
  float v9; // xmm1_4
  double v10; // xmm1_8
  CGlobalVars *v11; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v13; // xmm0_8
  char *v14; // r12

  m_nTestIndex = this->m_nTestIndex;
  if ( (m_nTestIndex & 2) != 0 )
  {
    v14 = this + 4 * !(m_nTestIndex & 1);
    CBaseAnimatingOverlay::RemoveLayer(this, *(v14 + 2414), 0.2, 0.0, v1);
    *(v14 + 2414) = -1;
  }
  else
  {
    v4 = "";
    v5 = m_nTestIndex & 1;
    v6 = &this->m_bDoClientSideAnimation + 8 * v5;
    if ( *(v6 + 1) != 0 )
      v4 = *(v6 + 1);
    v7.m_Data = CBaseAnimating::LookupSequence(this, v4).m_Data;
    v8 = CBaseAnimatingOverlay::AddGestureSequence(this, v7, 0);
    this->m_nLayerIndex[v5] = v8;
    CBaseAnimatingOverlay::SetLayerWeight(this, v8, 1.0, v9);
  }
  ++this->m_nTestIndex;
  v11 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v13) = 0;
    *&v13 = v11->m_flCurrentTime + 0.5;
  }
  else
  {
    *&v13 = 1056964608;
  }
  CBaseEntity::SetNextThink(this, v13, v10, 643978158);
}


// CGenericFlexCycler::ResetSequencesThink  (line 734, @0x00000000021f3310, libserver.so)  // inlines: GetSequence, ResetSequence, String, ToCStr, curtime
// calls: CBaseAnimating::GetBaseAnimatingController, CBaseAnimating::LookupSequence, CBaseAnimatingOverlay::AddGestureSequence, CBaseEntity::SetNextThink, CBaseAnimatingOverlay::GetAnimOverlay, CAnimationLayer::SetSequence
void __fastcall CGenericFlexCycler::ResetSequencesThink(CGenericFlexCycler *const this)
{
  const CBaseAnimatingController *BaseAnimatingController; // rax
  unsigned int v3; // r12d
  CBaseAnimatingController *v4; // rax
  const char *m_pAsString; // rsi
  HSequence v6; // eax
  int v7; // eax
  double v8; // xmm1_8
  CGlobalVars *v9; // r12
  void (__fastcall *m_pfnWarningFunc)(__int64); // rax
  double v11; // xmm0_8
  CAnimationLayer *AnimOverlay; // rax

  BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
  v3 = (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 24))(BaseAnimatingController);
  v4 = CBaseAnimating::GetBaseAnimatingController(this);
  (*(v4->_vptr_CSkeletonAnimationController + 23))(v4, v3, 1);
  if ( this->m_nTestIndex == 0 )
  {
    m_pAsString = "";
    if ( this->m_layerSequence[0].u.m_Id != 0 )
      m_pAsString = this->m_layerSequence[0].u.m_pAsString;
    v6.m_Data = CBaseAnimating::LookupSequence(this, m_pAsString).m_Data;
    v7 = CBaseAnimatingOverlay::AddGestureSequence(this, v6, 0);
    ++this->m_nTestIndex;
    this->m_nLayerIndex[0] = v7;
    v9 = gpGlobals;
    if ( gpGlobals != 0 )
      goto LABEL_5;
LABEL_12:
    *&v11 = 1056964608;
    goto LABEL_10;
  }
  AnimOverlay = CBaseAnimatingOverlay::GetAnimOverlay(this, this->m_nLayerIndex[0]);
  CAnimationLayer::SetSequence(
    AnimOverlay,
    AnimOverlay->m_op.m_hSequence.m_Value,
    SetSequenceBehavior_t::SET_SEQUENCE_RESET_CYCLE,
    LayerChangeBehavior_t::LAYER_CHANGE_INVOKE_CALLBACKS);
  v9 = gpGlobals;
  if ( gpGlobals == 0 )
    goto LABEL_12;
LABEL_5:
  if ( !v9->m_bEnableAssertions && !v9->m_bInSimulation )
  {
    m_pfnWarningFunc = v9->m_pfnWarningFunc;
    if ( m_pfnWarningFunc != 0 )
      m_pfnWarningFunc(1);
  }
  HIDWORD(v11) = 0;
  *&v11 = v9->m_flCurrentTime + 0.5;
LABEL_10:
  CBaseEntity::SetNextThink(this, v11, v8, 643978158);
}


// CGenericFlexCycler::TriggerAnimEventsThink  (line 751, @0x00000000021f29b0, libserver.so)  // inlines: curtime
// calls: CBaseAnimating::LookupSequence, CBaseAnimatingOverlay::AddGestureSequence, CBaseEntity::SetNextThink
void __fastcall CGenericFlexCycler::TriggerAnimEventsThink(CGenericFlexCycler *const this)
{
  double v1; // xmm1_8
  __int64 i; // rbx
  HSequence v4; // eax
  CGlobalVars *v5; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v7; // xmm0_8

  for ( i = 0; i != 2; ++i )
  {
    if ( this->m_layerSequence[i].u.m_Id != 0 )
    {
      v4.m_Data = CBaseAnimating::LookupSequence(this, this->m_layerSequence[i].u.m_pAsString).m_Data;
      CBaseAnimatingOverlay::AddGestureSequence(this, v4, 1);
    }
  }
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v7) = 0;
    *&v7 = v5->m_flCurrentTime + 1.5;
  }
  else
  {
    *&v7 = 1069547520;
  }
  CBaseEntity::SetNextThink(this, v7, v1, 643978158);
}


// CGenericFlexCycler::HandleAnimEvent  (line 763, @0x00000000021f4f90, libserver.so)  // inlines: AnimEventIndex_t
// calls: EventList_NameForIndex, V_snprintf, CBaseEntity::GetAbsOrigin, ISceneViewDebugOverlays::Text, __stack_chk_fail
// callers: CGenericFlexCycler::HandleAnimEvent
// strings: "[%.3f] Event \"%s\" Opt \"%s\"\n"
void __fastcall CGenericFlexCycler::HandleAnimEvent(CGenericFlexCycler *const this, animevent_t *pEvent)
{
  const char *options; // r13
  const char *v5; // rax
  const Vector *AbsOrigin; // rax
  int m_nTestIndex; // edx
  int v8; // eax
  Vector vOrigin; // [rsp+10h] [rbp-140h] BYREF
  char pText[264]; // [rsp+20h] [rbp-130h] BYREF
  unsigned __int64 v11; // [rsp+128h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  options = pEvent->options;
  v5 = EventList_NameForIndex(pEvent->event);
  V_snprintf(pText, 255, "[%.3f] Event \"%s\" Opt \"%s\"\n", pEvent->eventtime, v5, options);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  *&vOrigin.x = *&AbsOrigin->x;
  m_nTestIndex = this->m_nTestIndex;
  vOrigin.z = AbsOrigin->z;
  vOrigin.z = vOrigin.z + 36.0;
  ISceneViewDebugOverlays::Text(g_pDebugOverlay, &vOrigin, m_nTestIndex, 0.0, 0, 255, 0, 255, 1.0, pText);
  v8 = 0;
  if ( this->m_nTestIndex + 1 <= 5 )
    v8 = this->m_nTestIndex + 1;
  this->m_nTestIndex = v8;
}


// CGenericFlexCycler::HandleAnimEvent  (line 763, @0x00000000021f50a0, libserver.so)
// calls: CGenericFlexCycler::HandleAnimEvent
void __fastcall CGenericFlexCycler::HandleAnimEvent(CGenericFlexCycler *const this, animevent_t *pEvent)
{
  if ( this->m_nTestMode.m_Value == 3 )
    CGenericFlexCycler::HandleAnimEvent(this, pEvent);
}


// CGenericFlexCycler::ToggleSequencesThink  (line 787, @0x00000000021f2850, libserver.so)  // inlines: curtime
// calls: CBaseAnimating::SetSequence, CBaseEntity::SetNextThink
void __fastcall CGenericFlexCycler::ToggleSequencesThink(CGenericFlexCycler *const this)
{
  double v2; // xmm1_8
  CGlobalVars *v3; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v5; // xmm0_8

  CBaseAnimating::SetSequence(
    this,
    this->m_hBaseSequence[this->m_nTestIndex & 1],
    SetSequenceBehavior_t::SET_SEQUENCE_RESET_CYCLE);
  ++this->m_nTestIndex;
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v5) = 0;
    *&v5 = v3->m_flCurrentTime + 1.0;
  }
  else
  {
    *&v5 = 1065353216;
  }
  CBaseEntity::SetNextThink(this, v5, v2, 643978158);
}


// CGenericFlexCycler::ModelScaleThink  (line 794, @0x00000000021f2e30, libserver.so)  // inlines: curtime
// calls: CBaseEntity::SetNextThink, fmod
void __fastcall CGenericFlexCycler::ModelScaleThink(CGenericFlexCycler *const this)
{
  long double v2; // fst6
  char v4; // c2
  float v5; // xmm0_4
  double v6; // xmm1_8
  CGlobalVars *v7; // r12
  CGlobalVars *v8; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v10; // xmm0_8

  v2 = (this->m_nTestIndex / 60.0);
  do
    v2 = __FPREM__(v2, 2.0);
  while ( v4 != 0 );
  v5 = v2;
  if ( v5 >= 1.0 )
    v5 = 2.0 - v5;
  (*(this->_vptr_IHandleEntity + 222))(this, (v5 * 1.5) + 0.25);
  ++this->m_nTestIndex;
  v7 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    v8 = gpGlobals;
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      v8 = gpGlobals;
    }
    *&v10 = LODWORD(v7->m_flCurrentTime);
  }
  else
  {
    v8 = 0;
    v10 = 0.0;
  }
  *&v10 = *&v10 + v8->interval_per_tick;
  CBaseEntity::SetNextThink(this, v10, v6, 643978158);
}


// CGenericFlexCycler::UseProceduralBonesThink  (line 808, @0x00000000021f3430, libserver.so)  // inlines: GetSkeletonInstance, curtime
// calls: CBaseEntity::SetSimulationTime, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CSkeletonInstance::SetBoneTransformOverride
// globals: CGenericFlexCycler::TickProceduralBoneTransform(void)
void __fastcall CGenericFlexCycler::UseProceduralBonesThink(CGenericFlexCycler *const this)
{
  double v1; // xmm1_8
  double v3; // xmm0_8
  CGlobalVars *v4; // r12
  CGlobalVars *v5; // r12
  CGlobalVars *v6; // rax
  float m_flCurrentTime; // xmm0_4
  double v8; // xmm1_8
  CGlobalVars *v9; // r12
  void (__fastcall *v10)(__int64); // rax
  double v11; // xmm0_8
  FnGlobalVarsWarningFunc v12; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CSkeletonInstance *v14; // rax

  if ( (this->m_nTestIndex & 1) == 0 )
  {
    v3 = 0.0;
    v4 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      *&v3 = LODWORD(v4->m_flCurrentTime);
    }
    CBaseEntity::SetSimulationTime(this, v3, v1);
    v5 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      v6 = gpGlobals;
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v12 = gpGlobals->m_pfnWarningFunc;
        if ( v12 != 0 )
          v12(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v6 = gpGlobals;
      }
      m_flCurrentTime = v5->m_flCurrentTime;
    }
    else
    {
      v6 = 0;
      m_flCurrentTime = 0.0;
    }
    CBaseEntity::ThinkSet(
      this,
      CGenericFlexCycler::TickProceduralBoneTransform,
      m_flCurrentTime + v6->interval_per_tick,
      2125397220,
      0);
    v9 = gpGlobals;
    ++this->m_nTestIndex;
    if ( v9 != 0 )
      goto LABEL_9;
LABEL_23:
    *&v11 = 1056964608;
    goto LABEL_14;
  }
  v14 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode);
  CSkeletonInstance::SetBoneTransformOverride(v14, 0);
  CBaseEntity::ThinkSet(this, 0LL, 0.0, 2125397220, 0);
  ++this->m_nTestIndex;
  v9 = gpGlobals;
  if ( gpGlobals == 0 )
    goto LABEL_23;
LABEL_9:
  if ( !v9->m_bEnableAssertions && !v9->m_bInSimulation )
  {
    v10 = v9->m_pfnWarningFunc;
    if ( v10 != 0 )
      v10(1);
  }
  HIDWORD(v11) = 0;
  *&v11 = v9->m_flCurrentTime + 0.5;
LABEL_14:
  CBaseEntity::SetNextThink(this, v11, v8, 643978158);
}


// CGenericFlexCycler::TickProceduralBoneTransform  (line 827, @0x00000000021f30d0, libserver.so)  // inlines: GetSkeletonInstance, curtime
// calls: CSkeletonInstance::SetBoneTransformOverride, CBaseEntity::InvalidatePhysicsRecursive, CBaseEntity::SetNextThink
void __fastcall CGenericFlexCycler::TickProceduralBoneTransform(CGenericFlexCycler *const this)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v3; // r12
  CGameSceneNode *m_pGameSceneNode; // rdi
  CSkeletonInstance *v5; // rax
  double v6; // xmm1_8
  CGlobalVars *v7; // r12
  CGlobalVars *v8; // rax
  FnGlobalVarsWarningFunc v9; // rax
  double v10; // xmm0_8
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  m_flCurrentTime = 0.0;
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v3->m_flCurrentTime;
  }
  m_pGameSceneNode = this->m_pGameSceneNode;
  this->m_flLastSimTime = m_flCurrentTime;
  v5 = (*(m_pGameSceneNode->_vptr_CGameSceneNode + 9))(m_pGameSceneNode);
  CSkeletonInstance::SetBoneTransformOverride(v5, &this->IBoneTransformOverride);
  CBaseEntity::InvalidatePhysicsRecursive(this, 128);
  v7 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    v8 = gpGlobals;
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v9 = gpGlobals->m_pfnWarningFunc;
      if ( v9 != 0 )
        v9(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      v8 = gpGlobals;
    }
    *&v10 = LODWORD(v7->m_flCurrentTime);
  }
  else
  {
    v8 = 0;
    v10 = 0.0;
  }
  *&v10 = *&v10 + v8->interval_per_tick;
  CBaseEntity::SetNextThink(this, v10, v6, 2125397220);
}


// CGenericFlexCycler::GetBoneTransformOverride  (line 836, @0x00000000021efa80, libserver.so)  // inlines: Vector
// calls: sin, CBaseEntity::GetModelData, MatrixBuildRotationAboutAxis, CModel::MasterSkeleton, CModelSkeleton::GetBindPoseParentTransform, ConcatTransforms
BoneTransformOverrideResult_t __fastcall CGenericFlexCycler::GetBoneTransformOverride(
        const CGenericFlexCycler *const this,
        const CSkeletonInstance *pInstance,
        int nBoneIndex,
        const CBoneAccessor<CTransform> *const parentSpaceBones,
        const CBoneAccessor<matrix3x4a_t> *const worldSpaceBones,
        bool *pScratchMemoryValid,
        void *pScratchMemory,
        matrix3x4a_t *pTransform)
{
  BoneTransformOverrideResult_t result; // eax
  int m_nBoneOverrideIndex; // ebx
  const CModel *ModelData; // r14
  float v11; // xmm1_4
  const CModelSkeleton *v12; // rax
  matrix3x4a_t mRotation; // [rsp+10h] [rbp-80h] BYREF
  matrix3x4a_t mBoneToParent; // [rsp+40h] [rbp-50h] BYREF

  result = BoneTransformOverrideResult_t::BONE_TRANSFORM_NOT_OVERRIDDEN;
  m_nBoneOverrideIndex = this->m_nBoneOverrideIndex;
  if ( m_nBoneOverrideIndex == nBoneIndex )
  {
    sin(this->m_flLastSimTime * 12.0 / 6.28000020980835);
    ModelData = CBaseEntity::GetModelData(this);
    *&mBoneToParent.m_flMatVal[0][0] = 1065353216;
    mBoneToParent.m_flMatVal[0][2] = 0.0;
    MatrixBuildRotationAboutAxis(&mBoneToParent, v11, &mRotation);
    v12 = CModel::MasterSkeleton(ModelData);
    CModelSkeleton::GetBindPoseParentTransform(v12, m_nBoneOverrideIndex, &mBoneToParent);
    ConcatTransforms(&mBoneToParent, &mRotation, pTransform);
    return BoneTransformOverrideResult_t::BONE_TRANSFORM_SPECIFIED_IN_PARENT_SPACE;
  }
  return result;
}


// CGenericFlexCycler::ClientSideRagdollThink  (line 861, @0x00000000021f26e0, libserver.so)  // inlines: Vector, curtime
// calls: CBaseEntity::SetNextThink
void __fastcall CGenericFlexCycler::ClientSideRagdollThink(CGenericFlexCycler *const this)
{
  double v1; // xmm1_8
  int m_nTestIndex; // eax
  int (**vptr_IHandleEntity)(...); // rax
  CGlobalVars *v5; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v7; // xmm0_8
  _DWORD v8[8]; // [rsp+0h] [rbp-20h] BYREF

  m_nTestIndex = this->m_nTestIndex;
  if ( (m_nTestIndex & 1) == 0 )
  {
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    v8[0] = 0;
    v8[1] = 0;
    v8[2] = 1120403456;
    vptr_IHandleEntity[236](this, v8);
    m_nTestIndex = this->m_nTestIndex;
  }
  this->m_nTestIndex = m_nTestIndex + 1;
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v7) = 0;
    *&v7 = v5->m_flCurrentTime + 1.5;
  }
  else
  {
    *&v7 = 1069547520;
  }
  CBaseEntity::SetNextThink(this, v7, v1, 643978158);
}


