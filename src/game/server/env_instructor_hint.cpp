// Reconstructed from DWARF by pahole; not original source.

// src/game/server/env_instructor_hint.cpp:214
class CInfoInstructorHintTarget : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;
	typedef CPointEntity BaseClass;

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
	CInfoInstructorHintTarget(CInfoInstructorHintTarget &);
	CInfoInstructorHintTarget(CInfoInstructorHintTarget &);
	CInfoInstructorHintTarget();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual int UpdateTransmitState();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CInfoInstructorHintTarget();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[64] UpdateTransmitState
	// vtable[34] GetDataDescMap
	// sizeof = 776
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEnvInstructorHint::GetDataDescMap  (line 22, @0x00000000021baff0, libserver.so)
// globals: CEnvInstructorHint::m_DataMap
datamap_t *__fastcall CEnvInstructorHint::GetDataDescMap(CEnvInstructorHint *const this)
{
  return &CEnvInstructorHint::m_DataMap;
}


// CEnvInstructorHint::AddDatadescMetadataKeys  (line 22, @0x00000000021d1b70, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvInstructorHint::GetEntityClass(void)
void __fastcall CEnvInstructorHint::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvInstructorHint::GetEntityClass);
}


// CEnvInstructorHint::GetBaseMap  (line 22, @0x00000000021d1b90, libserver.so)
datamap_t *__cdecl CEnvInstructorHint::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CEnvInstructorHint>  (line 22, @0x00000000021d1ba0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CEnvInstructorHint"
// globals: `guard variable for'DataMapInit<CEnvInstructorHint>(CEnvInstructorHint *)::nameHolder, CEnvInstructorHint::GetEntityClass(void), CEnvInstructorHint::m_DataMap, DataMapInit<CEnvInstructorHint>(CEnvInstructorHint *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvInstructorHint>(CEnvInstructorHint *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEnvInstructorHint>(CEnvInstructorHint *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvInstructorHint>(CEnvInstructorHint *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvInstructorHint>(CEnvInstructorHint *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvInstructorHint>(CEnvInstructorHint *)::nameHolder.m_pszBase = "CEnvInstructorHint";
    DataMapInit<CEnvInstructorHint>(CEnvInstructorHint *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvInstructorHint>(CEnvInstructorHint *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvInstructorHint>(CEnvInstructorHint *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvInstructorHint>(CEnvInstructorHint *)::nameHolder.m_nLenBase = 18;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvInstructorHint>(CEnvInstructorHint *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvInstructorHint>(CEnvInstructorHint *)::nameHolder,
      &_dso_handle);
  }
  CEnvInstructorHint::m_DataMap.dataNumFields = 26;
  CEnvInstructorHint::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  CEnvInstructorHint::m_DataMap.dataDesc = &DataMapInit<CEnvInstructorHint>(CEnvInstructorHint *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvInstructorHint::m_DataMap, CEnvInstructorHint::GetEntityClass);
  return &CEnvInstructorHint::m_DataMap;
}


// CEnvInstructorHint::CEnvInstructorHint  (line 60, @0x00000000021d1c70, libserver.so)  // inlines: CPointEntity, CUtlSymbolLarge, Color
// calls: CBaseEntity::CBaseEntity
// callers: CEnvInstructorHint::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CEnvInstructorHint::CEnvInstructorHint(CEnvInstructorHint *const this)
{
  CBaseEntity::CBaseEntity(this);
  this->m_iszName.u.m_Id = 0;
  this->_vptr_IHandleEntity = &off_4027270;
  this->m_iszReplace_Key.u.m_Id = 0;
  this->m_iszHintTargetEntity.u.m_Id = 0;
  this->m_iszIcon_Onscreen.u.m_Id = 0;
  this->m_iszIcon_Offscreen.u.m_Id = 0;
  this->m_iszCaption.u.m_Id = 0;
  this->m_iszActivatorCaption.u.m_Id = 0;
  this->m_Color = 0;
  this->m_iszBinding.u.m_Id = 0;
  this->m_iInstanceType = 2;
  this->m_iDisplayLimit = 0;
}


// CEnvInstructorHint::~CEnvInstructorHint  (line 67, @0x00000000021becd0, libserver.so)  // inlines: CVariantBase, Free, inputdata_t, ~CPointEntity, ~CVariantBase, ~inputdata_t
// calls: CEnvInstructorHint::InputEndHint, CBaseEntity::~CBaseEntity
// callers: CEnvInstructorHint::~CEnvInstructorHint
void __fastcall CEnvInstructorHint::~CEnvInstructorHint(CEnvInstructorHint *const this)
{
  inputdata_t dummy; // [rsp+0h] [rbp-40h] BYREF

  this->_vptr_IHandleEntity = &off_4027270;
  dummy.value.m_type = 0;
  dummy.value.m_flags = 0;
  dummy.value.m_uint64 = 0;
  CEnvInstructorHint::InputEndHint(this, &dummy);
  if ( (dummy.value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, dummy.value.m_uint64);
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CEnvInstructorHint::~CEnvInstructorHint  (line 67, @0x00000000021bed40, libserver.so)
// calls: CEnvInstructorHint::~CEnvInstructorHint, CBaseEntity::operator delete
void __fastcall CEnvInstructorHint::~CEnvInstructorHint(CEnvInstructorHint *const this)
{
  CEnvInstructorHint::~CEnvInstructorHint(this);
  CBaseEntity::operator delete(this);
}


// CEnvInstructorHint::Spawn  (line 73, @0x00000000021bbbe0, libserver.so)
// calls: CPointEntity::Spawn, VisibilityMonitor_AddEntity
// globals: CEnvInstructorHint::EnvInstructorHintVisibilityMonitorCallback(CBaseEntity *,CBasePlayer *)
void __fastcall CEnvInstructorHint::Spawn(CEnvInstructorHint *const this, const CEntityKeyValues *pKeyValues)
{
  __m128 v3; // xmm1
  __m128 v4; // xmm0

  CPointEntity::Spawn(this, pKeyValues);
  if ( this->m_bAutoStart )
  {
    v3.m128_i32[0] = LODWORD(this->m_fRange);
    v4 = _mm_cmplt_ss(0LL, v3);
    VisibilityMonitor_AddEntity(
      this,
      COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_andnot_ps(v4, 0x447A0000u).m128_f32[0]) | v3.m128_i32[0] & v4.m128_i32[0]),
      CEnvInstructorHint::EnvInstructorHintVisibilityMonitorCallback,
      0);
  }
}


// CEnvInstructorHint::EnvInstructorHintVisibilityMonitorCallback  (line 83, @0x00000000021d5af0, libserver.so)  // inlines: CVariantBase, Free, inputdata_t, ~CVariantBase, ~inputdata_t
// calls: CEnvInstructorHint::InputShowHint, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
bool __fastcall CEnvInstructorHint::EnvInstructorHintVisibilityMonitorCallback(
        CBaseEntity *pVisibleEntity,
        CBasePlayer *pViewingPlayer)
{
  inputdata_t inputdata; // [rsp+0h] [rbp-40h] BYREF

  inputdata.pActivator = pViewingPlayer;
  inputdata.value.m_type = 0;
  inputdata.value.m_flags = 0;
  inputdata.value.m_uint64 = 0;
  inputdata.pCaller = pVisibleEntity;
  CEnvInstructorHint::InputShowHint(pVisibleEntity, &inputdata);
  if ( (inputdata.value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, inputdata.value.m_uint64);
  return 0;
}


// CEnvInstructorHint::InputShowHint  (line 99, @0x00000000021c2e10, libserver.so)  // inlines: AssignTo, CUtlSymbolLarge, CreateEvent, GameRules, GetEntityName, GetUserID, String, StringID, TempString, ToCStr, ToString, VariantFieldTypeName, entindex, operator=
// calls: CGameEntitySystem::FindEntityByName, V_snprintf, __dynamic_cast, CEntityInstance::GetEntityIndex, UTIL_GetLocalPlayer, MakeEntitySystemString, GetWorldEntity, VariantFieldTypeName, Warning, __stack_chk_fail
// callers: CEnvInstructorHint::EnvInstructorHintVisibilityMonitorCallback
// strings: "instructor_server_hint_create", "%.3d,%.3d,%.3d", "hint_entindex", "hint_name", "hint_replace_key", "hint_target" (40 total)
// globals: CEnvInstructorHint::InputShowHint(inputdata_t &)::s_InstructorServerHintEventCreate, jpt_21C3379, jpt_21C346B, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, jpt_21C3870
void __fastcall CEnvInstructorHint::InputShowHint(CEnvInstructorHint *const this, inputdata_t *const inputdata)
{
  __int64 v4; // r15
  CBaseEntity *pCaller; // r9
  CBaseEntity *pActivator; // r8
  uint8 m_iPulseOption; // cl
  int v8; // eax
  uint8 m_iAlphaOption; // cl
  int v10; // edx
  uint8 m_iShakeOption; // cl
  int v12; // edx
  int v13; // eax
  int16 m_type; // ax
  bool m_bLocalPlayerOnly; // r14
  const CEntityInstance *LocalPlayer; // r13
  bool v17; // zf
  const char *m_pAsString; // r14
  CBaseEntity *v19; // rdi
  const CEntityInstance *v20; // rax
  void (__fastcall *v21)(__int64, char *, __int64); // r12
  CEntityIndex v22; // eax
  __int64 v23; // rdx
  void (__fastcall *v24)(__int64, const char *, _QWORD); // r12
  CEntityIndex v25; // eax
  const char *v26; // rdx
  const char *v27; // rdx
  __int64 m_Data; // rdx
  void (__fastcall *v29)(__int64, const char *, __int64); // r12
  __int64 v30; // rdx
  void (__fastcall *v31)(__int64, const char *, __int64); // r12
  CEntityIndex v32; // eax
  const char *v33; // rdx
  const char *v34; // rdx
  const char *v35; // rdx
  const char *v36; // rdx
  char *m_pszString; // rsi
  int16 v38; // ax
  CBaseEntity *v39; // r10
  CBaseEntity *v40; // r13
  char *v41; // rdx
  CBaseEntity *EntityByName; // rax
  const char *v43; // rcx
  const char *v44; // rdx
  double m_float64; // xmm0_8
  const char *v46; // rax
  double m_float; // xmm0_8
  const char *v48; // rcx
  const char *v49; // rdx
  const char *v50; // rsi
  unsigned int v51; // [rsp+10h] [rbp-F0h]
  CBaseEntity *v52; // [rsp+10h] [rbp-F0h]
  CBaseEntity *v53; // [rsp+10h] [rbp-F0h]
  CBaseEntity *v54; // [rsp+10h] [rbp-F0h]
  CBaseEntity *v55; // [rsp+10h] [rbp-F0h]
  CBaseEntity *v56; // [rsp+10h] [rbp-F0h]
  CBaseEntity *v57; // [rsp+10h] [rbp-F0h]
  CBaseEntity *v58; // [rsp+10h] [rbp-F0h]
  CBaseEntity *v59; // [rsp+10h] [rbp-F0h]
  CBaseEntity *pTargetEntity; // [rsp+20h] [rbp-E0h]
  unsigned int iFlags; // [rsp+2Ch] [rbp-D4h]
  string_t iszName; // [rsp+30h] [rbp-D0h] BYREF
  char szColorString[136]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v64; // [rsp+C8h] [rbp-38h]

  v64 = __readfsqword(0x28u);
  v4 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(
         gameeventmanager,
         "instructor_server_hint_create",
         0,
         &CEnvInstructorHint::InputShowHint(inputdata_t &)::s_InstructorServerHintEventCreate);
  if ( v4 == 0 )
    return;
  pCaller = inputdata->pCaller;
  pActivator = inputdata->pActivator;
  iszName.u.m_Id = this->m_iszHintTargetEntity.u.m_Id;
  pTargetEntity = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, pActivator, pCaller, 0);
  if ( pTargetEntity == 0 )
  {
    if ( this->m_bStatic || (pTargetEntity = inputdata->pActivator, inputdata->pActivator == 0) )
      pTargetEntity = GetWorldEntity();
  }
  V_snprintf(
    szColorString,
    128,
    "%.3d,%.3d,%.3d",
    this->m_Color._color[0],
    this->m_Color._color[1],
    this->m_Color._color[2]);
  m_iPulseOption = this->m_iPulseOption;
  v8 = 0;
  if ( m_iPulseOption != 0 )
  {
    LOBYTE(v8) = 1;
    v8 <<= m_iPulseOption - 1;
  }
  m_iAlphaOption = this->m_iAlphaOption;
  v10 = 0;
  if ( m_iAlphaOption != 0 )
  {
    LOBYTE(v10) = 8;
    v10 <<= m_iAlphaOption - 1;
  }
  m_iShakeOption = this->m_iShakeOption;
  v12 = v8 | v10;
  v13 = 0;
  if ( m_iShakeOption != 0 )
  {
    LOBYTE(v13) = 64;
    v13 <<= m_iShakeOption - 1;
  }
  iFlags = (!this->m_bStatic ? 0 : 0x100) | v13 | v12;
  if ( this->m_iszName.u.m_Id == 0 )
    this->m_iszName.u.m_Id = this->m_pEntity->m_name.u.m_Id;
  m_type = inputdata->value.m_type;
  m_bLocalPlayerOnly = this->m_bLocalPlayerOnly;
  if ( m_type != 0 )
  {
    if ( m_type == 30 )
    {
      m_pszString = inputdata->value.m_pszString;
    }
    else
    {
      switch ( m_type )
      {
        case 1:
          m_float = inputdata->value.m_float;
          goto LABEL_86;
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
          goto LABEL_93;
        case 6:
          v48 = "true";
          v49 = "%s";
          if ( inputdata->value.m_char == 0 )
            v48 = "false";
          goto LABEL_88;
        case 8:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%c",
            inputdata->value.m_char);
          goto LABEL_93;
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
          v48 = inputdata->value.m_pszString;
          v49 = "%lld";
LABEL_88:
          V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, v49, v48);
          goto LABEL_89;
        case 33:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%llu",
            inputdata->value.m_uint64);
LABEL_89:
          m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 34:
          m_float = inputdata->value.m_float64;
LABEL_86:
          V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
          m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 37:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%u",
            inputdata->value.m_uint);
LABEL_93:
          m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        default:
          v46 = VariantFieldTypeName(m_type);
          Warning("No conversion from %s to string at the moment!\n", v46);
          CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
          m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
      }
    }
    MakeEntitySystemString(m_pszString);
    if ( iszName.u.m_Id != 0 )
    {
      v38 = inputdata->value.m_type;
      v39 = inputdata->pCaller;
      v40 = inputdata->pActivator;
      if ( v38 == 30 )
      {
        v41 = inputdata->value.m_pszString;
      }
      else
      {
        switch ( v38 )
        {
          case 0:
            CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
            v41 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
            break;
          case 1:
            v58 = inputdata->pCaller;
            m_float64 = inputdata->value.m_float;
            goto LABEL_72;
          case 3:
          case 39:
            v52 = inputdata->pCaller;
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g %g",
              *inputdata->value.m_pszString,
              *(inputdata->value.m_uint64 + 4),
              *(inputdata->value.m_uint64 + 8));
            v41 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
            v39 = v52;
            break;
          case 4:
          case 27:
            v53 = inputdata->pCaller;
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g %g %g",
              *inputdata->value.m_pszString,
              *(inputdata->value.m_uint64 + 4),
              *(inputdata->value.m_uint64 + 8),
              *(inputdata->value.m_uint64 + 12));
            v41 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
            v39 = v53;
            break;
          case 5:
            v57 = inputdata->pCaller;
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%d",
              inputdata->value.m_uint);
            goto LABEL_70;
          case 6:
            v43 = "true";
            v54 = inputdata->pCaller;
            v44 = "%s";
            if ( inputdata->value.m_char == 0 )
              v43 = "false";
            goto LABEL_65;
          case 8:
            v57 = inputdata->pCaller;
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%c",
              inputdata->value.m_char);
            goto LABEL_70;
          case 9:
            v56 = inputdata->pCaller;
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%d %d %d %d",
              inputdata->value.m_int,
              BYTE1(inputdata->value.m_int),
              BYTE2(inputdata->value.m_int),
              HIBYTE(inputdata->value.m_int));
            v41 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
            v39 = v56;
            break;
          case 25:
            v55 = inputdata->pCaller;
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g",
              *inputdata->value.m_pszString,
              *(inputdata->value.m_uint64 + 4));
            v41 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
            v39 = v55;
            break;
          case 26:
            v43 = inputdata->value.m_pszString;
            v54 = inputdata->pCaller;
            v44 = "%lld";
LABEL_65:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, v44, v43);
            goto LABEL_66;
          case 33:
            v54 = inputdata->pCaller;
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%llu",
              inputdata->value.m_uint64);
LABEL_66:
            v41 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
            v39 = v54;
            break;
          case 34:
            m_float64 = inputdata->value.m_float64;
            v58 = inputdata->pCaller;
LABEL_72:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float64);
            v41 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
            v39 = v58;
            break;
          case 37:
            v57 = inputdata->pCaller;
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%u",
              inputdata->value.m_uint);
LABEL_70:
            v41 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
            v39 = v57;
            break;
          default:
            switch ( v38 )
            {
              case 0:
                v50 = "void";
                break;
              case 1:
                v50 = "float";
                break;
              case 3:
                v50 = "vector";
                break;
              case 4:
                v50 = "quaternion";
                break;
              case 5:
                v50 = "integer";
                break;
              case 6:
                v50 = "boolean";
                break;
              case 8:
                v50 = "character";
                break;
              case 9:
                v50 = "color";
                break;
              case 13:
                v50 = "ehandle";
                break;
              case 25:
                v50 = "vector2d";
                break;
              case 26:
                v50 = "int64";
                break;
              case 27:
                v50 = "vector4d";
                break;
              case 28:
                v50 = "resourcehandle";
                break;
              case 31:
                v50 = "hscript";
                break;
              case 32:
                v50 = "variant";
                break;
              case 33:
                v50 = "uint64";
                break;
              case 34:
                v50 = "float64";
                break;
              case 37:
                v50 = "unsigned";
                break;
              case 38:
                v50 = "utlstringtoken";
                break;
              case 39:
                v50 = "qangle";
                break;
              case 48:
                v50 = "hscript_lightbinding";
                break;
              case 49:
                v50 = "js_value";
                break;
              case 50:
                v50 = "js_object";
                break;
              case 51:
                v50 = "js_array";
                break;
              case 52:
                v50 = "js_raw_args";
                break;
              default:
                v50 = "unknown_variant_type";
                break;
            }
            v59 = inputdata->pCaller;
            Warning("No conversion from %s to string at the moment!\n", v50);
            CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
            v41 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
            v39 = v59;
            break;
        }
      }
      EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, v41, this, v40, v39, 0);
      if ( EntityByName != 0 )
      {
        LocalPlayer = __dynamic_cast(EntityByName, &`typeinfo for'CBaseEntity, &`typeinfo for'CBasePlayer, 0);
        if ( LocalPlayer != 0 )
        {
          v17 = this->m_iszActivatorCaption.u.m_Id == 0;
          v51 = 1;
          if ( this->m_iszActivatorCaption.u.m_Id == 0 )
            goto LABEL_53;
          goto LABEL_17;
        }
      }
      goto LABEL_15;
    }
  }
  if ( (*(g_pGameRules->_vptr_CGameRules + 39))(g_pGameRules) != 0 )
  {
    if ( inputdata->pActivator == 0 )
      Warning("Failed to play server side instructor hint: no player specified for hint\n");
LABEL_15:
    LocalPlayer = 0;
    v51 = m_bLocalPlayerOnly;
    goto LABEL_16;
  }
  LocalPlayer = UTIL_GetLocalPlayer();
  v51 = m_bLocalPlayerOnly;
LABEL_16:
  v17 = this->m_iszActivatorCaption.u.m_Id == 0;
  if ( this->m_iszActivatorCaption.u.m_Id == 0 )
  {
LABEL_53:
    m_pAsString = "";
    goto LABEL_18;
  }
LABEL_17:
  m_pAsString = this->m_iszActivatorCaption.u.m_pAsString;
  if ( v17 )
    goto LABEL_19;
LABEL_18:
  if ( *m_pAsString == 0 )
  {
LABEL_19:
    m_pAsString = "";
    if ( this->m_iszCaption.u.m_Id != 0 )
      m_pAsString = this->m_iszCaption.u.m_pAsString;
  }
  v19 = LocalPlayer;
  if ( LocalPlayer != 0 || (v19 = inputdata->pActivator, inputdata->pActivator != 0) )
  {
    v20 = __dynamic_cast(v19, &`typeinfo for'CBaseEntity, &`typeinfo for'CBasePlayer, 0);
    v21 = *(*v4 + 112LL);
    if ( v20 != 0 )
    {
      v22.m_Data = CEntityInstance::GetEntityIndex(v20).m_Data;
      v23 = (*(*engine + 224LL))(engine, (v22.m_Data - 1));
    }
    else
    {
      v23 = 0;
    }
    v21(v4, "userid", v23);
  }
  else
  {
    (*(*v4 + 112LL))(v4, "userid", 0);
  }
  v24 = *(*v4 + 112LL);
  v25.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  v24(v4, "hint_entindex", v25.m_Data);
  v26 = "";
  if ( this->m_iszName.u.m_Id != 0 )
    v26 = this->m_iszName.u.m_pAsString;
  (*(*v4 + 136LL))(v4, "hint_name", v26);
  v27 = "";
  if ( this->m_iszReplace_Key.u.m_Id != 0 )
    v27 = this->m_iszReplace_Key.u.m_pAsString;
  (*(*v4 + 136LL))(v4, "hint_replace_key", v27);
  m_Data = 0xFFFFFFFFLL;
  v29 = *(*v4 + 112LL);
  if ( pTargetEntity != 0 )
    m_Data = CEntityInstance::GetEntityIndex(pTargetEntity).m_Data;
  v29(v4, "hint_target", m_Data);
  v30 = 0;
  v31 = *(*v4 + 112LL);
  if ( LocalPlayer != 0 )
  {
    v32.m_Data = CEntityInstance::GetEntityIndex(LocalPlayer).m_Data;
    v30 = (*(*engine + 224LL))(engine, (v32.m_Data - 1));
  }
  v31(v4, "hint_activator_userid", v30);
  (*(*v4 + 112LL))(v4, "hint_timeout", this->m_iTimeout);
  (*(*v4 + 112LL))(v4, "hint_display_limit", this->m_iDisplayLimit);
  v33 = "";
  if ( this->m_iszIcon_Onscreen.u.m_Id != 0 )
    v33 = this->m_iszIcon_Onscreen.u.m_pAsString;
  (*(*v4 + 136LL))(v4, "hint_icon_onscreen", v33);
  v34 = "";
  if ( this->m_iszIcon_Offscreen.u.m_Id != 0 )
    v34 = this->m_iszIcon_Offscreen.u.m_pAsString;
  (*(*v4 + 136LL))(v4, "hint_icon_offscreen", v34);
  v35 = "";
  if ( this->m_iszCaption.u.m_Id != 0 )
    v35 = this->m_iszCaption.u.m_pAsString;
  (*(*v4 + 136LL))(v4, "hint_caption", v35);
  (*(*v4 + 136LL))(v4, "hint_activator_caption", m_pAsString);
  (*(*v4 + 136LL))(v4, "hint_color", szColorString);
  (*(*v4 + 128LL))(v4, "hint_icon_offset", this->m_fIconOffset);
  (*(*v4 + 128LL))(v4, "hint_range", this->m_fRange);
  (*(*v4 + 112LL))(v4, "hint_flags", iFlags);
  v36 = "";
  if ( this->m_iszBinding.u.m_Id != 0 )
    v36 = this->m_iszBinding.u.m_pAsString;
  (*(*v4 + 136LL))(v4, "hint_binding", v36);
  (*(*v4 + 104LL))(v4, "hint_allow_nodraw_target", this->m_bAllowNoDrawTarget);
  (*(*v4 + 104LL))(v4, "hint_nooffscreen", this->m_bNoOffscreen);
  (*(*v4 + 104LL))(v4, "hint_forcecaption", this->m_bForceCaption);
  (*(*v4 + 112LL))(v4, "hint_instance_type", this->m_iInstanceType);
  (*(*v4 + 104LL))(v4, "hint_suppress_rest", this->m_bSuppressRest);
  (*(*v4 + 104LL))(v4, "hint_local_player_only", v51);
  (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v4, 0);
}


// CEnvInstructorHint::InputEndHint  (line 198, @0x00000000021bb060, libserver.so)  // inlines: CreateEvent, String, ToCStr, entindex
// calls: CEntityInstance::GetEntityIndex
// callers: CEnvInstructorHint::~CEnvInstructorHint
// strings: "instructor_server_hint_stop", "hint_name", "hint_entindex"
// globals: CEnvInstructorHint::InputEndHint(inputdata_t &)::s_InstructorServerHintEventStop
void __fastcall CEnvInstructorHint::InputEndHint(CEnvInstructorHint *const this, inputdata_t *const inputdata)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  const char *m_pAsString; // rdx
  void (__fastcall *v6)(__int64, const char *, const char *); // rax
  void (__fastcall *v7)(__int64, const char *, _QWORD); // r14
  CEntityIndex v8; // eax

  v3 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(
         gameeventmanager,
         "instructor_server_hint_stop",
         0,
         &CEnvInstructorHint::InputEndHint(inputdata_t &)::s_InstructorServerHintEventStop);
  v4 = v3;
  if ( v3 != 0 )
  {
    m_pAsString = "";
    v6 = *(*v3 + 136LL);
    if ( this->m_iszName.u.m_Id != 0 )
      m_pAsString = this->m_iszName.u.m_pAsString;
    v6(v4, "hint_name", m_pAsString);
    v7 = *(*v4 + 112LL);
    v8.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    v7(v4, "hint_entindex", v8.m_Data);
    (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v4, 0);
  }
}


// CInfoInstructorHintTarget::~CInfoInstructorHintTarget  (line 214, @0x00000000021e12c0, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CInfoInstructorHintTarget::~CInfoInstructorHintTarget(CInfoInstructorHintTarget *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CInfoInstructorHintTarget::~CInfoInstructorHintTarget  (line 214, @0x00000000021e12e0, libserver.so)  // inlines: ~CInfoInstructorHintTarget, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CInfoInstructorHintTarget::~CInfoInstructorHintTarget(CInfoInstructorHintTarget *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CInfoInstructorHintTarget::GetEntityClass  (line 216, @0x00000000021df3b0, libserver.so)
CEntityClass *__cdecl CInfoInstructorHintTarget::GetEntityClass()
{
  return g_pEntityCInfoInstructorHintTargetClass;
}


// CInfoInstructorHintTarget::Schema_DynamicBinding  (line 216, @0x00000000021df3c0, libserver.so)
// globals: CInfoInstructorHintTarget::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoInstructorHintTarget::Schema_DynamicBinding(
        const CInfoInstructorHintTarget *const this)
{
  return CInfoInstructorHintTarget::s_pSchemaBinding;
}


// CInfoInstructorHintTarget::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 216, @0x00000000021df3d0, libserver.so)
// globals: CInfoInstructorHintTarget::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoInstructorHintTarget::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CInfoInstructorHintTarget::CEntityInstanceEntityClass *const this)
{
  return CInfoInstructorHintTarget::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CInfoInstructorHintTarget::CEntityInstanceEntityClass::DestructInstance  (line 216, @0x00000000021df3e0, libserver.so)  // inlines: Destruct<CInfoInstructorHintTarget>
void __fastcall CInfoInstructorHintTarget::CEntityInstanceEntityClass::DestructInstance(
        CInfoInstructorHintTarget::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CInfoInstructorHintTarget::CEntityInstanceEntityClass::FreeInstance  (line 216, @0x00000000021df400, libserver.so)
void __fastcall CInfoInstructorHintTarget::CEntityInstanceEntityClass::FreeInstance(
        CInfoInstructorHintTarget::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CInfoInstructorHintTarget::CEntityInstanceEntityClass::CanAllocate  (line 216, @0x00000000021df420, libserver.so)
bool __fastcall CInfoInstructorHintTarget::CEntityInstanceEntityClass::CanAllocate(
        const CInfoInstructorHintTarget::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CInfoInstructorHintTarget::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 216, @0x00000000021df430, libserver.so)
// globals: CInfoInstructorHintTarget::s_pSchemaBinding
const ISchemaBinding *__fastcall CInfoInstructorHintTarget::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CInfoInstructorHintTarget::CEntityInstanceEntityClass *const this)
{
  return CInfoInstructorHintTarget::s_pSchemaBinding;
}


// CInfoInstructorHintTarget::CEntityInstanceEntityClass::AllocateInstance  (line 216, @0x00000000021e0ac0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CInfoInstructorHintTarget::CEntityInstanceEntityClass::AllocateInstance(
        CInfoInstructorHintTarget::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 776);
  memset(v1, 0, 0x308u);
  return v1;
}


// CInfoInstructorHintTarget::CEntityInstanceEntityClass::ConstructInstance  (line 216, @0x00000000021e0dc0, libserver.so)  // inlines: CInfoInstructorHintTarget, CPointEntity, Construct<CInfoInstructorHintTarget>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CInfoInstructorHintTarget::CEntityInstanceEntityClass::ConstructInstance(
        CInfoInstructorHintTarget::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_4027990;
  }
  return p;
}


// CInfoInstructorHintTarget::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 216, @0x00000000021e29d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CInfoInstructorHintTarget::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoInstructorHintTarget::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CInfoInstructorHintTarget::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 216, @0x00000000021e29f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CInfoInstructorHintTarget::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoInstructorHintTarget::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CInfoInstructorHintTarget::GetEntityClassInternal  (line 216, @0x00000000021eace0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "info_target_instructor_hint", "CInfoInstructorHintTarget"
// globals: `guard variable for'CInfoInstructorHintTarget::GetEntityClassInternal(void)::g_EntityCInfoInstructorHintTargetClass, CInfoInstructorHintTarget::GetEntityClassInternal(void)::g_EntityCInfoInstructorHintTargetClass, __dso_handle, CInfoInstructorHintTarget::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CInfoInstructorHintTarget::GetEntityClassInfo(void)::g_EntityCInfoInstructorHintTargetClassInfo, CInfoInstructorHintTarget::GetEntityClassInfo(void)::g_EntityCInfoInstructorHintTargetClassInfo
CEntityClass *__cdecl CInfoInstructorHintTarget::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CInfoInstructorHintTarget::GetEntityClassInternal(void)::g_EntityCInfoInstructorHintTargetClass == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoInstructorHintTarget::GetEntityClassInternal(void)::g_EntityCInfoInstructorHintTargetClass) != 0 )
  {
    CEntityClass::CEntityClass(&CInfoInstructorHintTarget::GetEntityClassInternal(void)::g_EntityCInfoInstructorHintTargetClass);
    CInfoInstructorHintTarget::GetEntityClassInternal(void)::g_EntityCInfoInstructorHintTargetClass._vptr_CEntityClass = off_4027910;
    __cxa_guard_release(&`guard variable for'CInfoInstructorHintTarget::GetEntityClassInternal(void)::g_EntityCInfoInstructorHintTargetClass);
    __cxa_atexit(
      CInfoInstructorHintTarget::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CInfoInstructorHintTarget::GetEntityClassInternal(void)::g_EntityCInfoInstructorHintTargetClass,
      &_dso_handle);
  }
  if ( g_pEntityCInfoInstructorHintTargetClass != 0 )
    return &CInfoInstructorHintTarget::GetEntityClassInternal(void)::g_EntityCInfoInstructorHintTargetClass;
  if ( `guard variable for'CInfoInstructorHintTarget::GetEntityClassInfo(void)::g_EntityCInfoInstructorHintTargetClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoInstructorHintTarget::GetEntityClassInfo(void)::g_EntityCInfoInstructorHintTargetClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CInfoInstructorHintTarget::GetEntityClassInfo(void)::g_EntityCInfoInstructorHintTargetClassInfo,
      "CInfoInstructorHintTarget",
      "info_target_instructor_hint",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CInfoInstructorHintTarget::GetEntityClassInfo(void)::g_EntityCInfoInstructorHintTargetClassInfo);
  }
  CInfoInstructorHintTarget::GetEntityClassInternal(void)::g_EntityCInfoInstructorHintTargetClass.m_pClassInfo = &CInfoInstructorHintTarget::GetEntityClassInfo(void)::g_EntityCInfoInstructorHintTargetClassInfo;
  CInfoInstructorHintTarget::GetEntityClassInternal(void)::g_EntityCInfoInstructorHintTargetClass.m_pBaseClassInfo = CInfoInstructorHintTarget::GetEntityClassInfo(void)::g_EntityCInfoInstructorHintTargetClassInfo.m_pBaseClassInfo;
  g_pEntityCInfoInstructorHintTargetClass = &CInfoInstructorHintTarget::GetEntityClassInternal(void)::g_EntityCInfoInstructorHintTargetClass;
  CInfoInstructorHintTarget::GetEntityClassInfo(void)::g_EntityCInfoInstructorHintTargetClassInfo.m_pClass = &CInfoInstructorHintTarget::GetEntityClassInternal(void)::g_EntityCInfoInstructorHintTargetClass;
  CInfoInstructorHintTarget::GetEntityClassInternal(void)::g_EntityCInfoInstructorHintTargetClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCInfoInstructorHintTargetClass->m_pComponentOverrides = 0;
  return &CInfoInstructorHintTarget::GetEntityClassInternal(void)::g_EntityCInfoInstructorHintTargetClass;
}


// CInfoInstructorHintTarget::UpdateTransmitState  (line 219, @0x00000000021e1030, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CInfoInstructorHintTarget::UpdateTransmitState(CInfoInstructorHintTarget *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CInfoInstructorHintTarget::GetDataDescMap  (line 227, @0x00000000021bb000, libserver.so)
// globals: CInfoInstructorHintTarget::m_DataMap
datamap_t *__fastcall CInfoInstructorHintTarget::GetDataDescMap(CInfoInstructorHintTarget *const this)
{
  return &CInfoInstructorHintTarget::m_DataMap;
}


// CInfoInstructorHintTarget::AddDatadescMetadataKeys  (line 227, @0x00000000021d1d10, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CInfoInstructorHintTarget::GetEntityClass(void)
void __fastcall CInfoInstructorHintTarget::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CInfoInstructorHintTarget::GetEntityClass);
}


// CInfoInstructorHintTarget::GetBaseMap  (line 227, @0x00000000021d1d30, libserver.so)
datamap_t *__cdecl CInfoInstructorHintTarget::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CInfoInstructorHintTarget>  (line 227, @0x00000000021d1d40, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CInfoInstructorHintTarget"
// globals: `guard variable for'DataMapInit<CInfoInstructorHintTarget>(CInfoInstructorHintTarget *)::nameHolder, CInfoInstructorHintTarget::GetEntityClass(void), CInfoInstructorHintTarget::m_DataMap, DataMapInit<CInfoInstructorHintTarget>(CInfoInstructorHintTarget *)::dataDesc, DataMapInit<CInfoInstructorHintTarget>(CInfoInstructorHintTarget *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CInfoInstructorHintTarget>(CInfoInstructorHintTarget *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CInfoInstructorHintTarget>(CInfoInstructorHintTarget *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CInfoInstructorHintTarget>(CInfoInstructorHintTarget *)::nameHolder) != 0 )
  {
    DataMapInit<CInfoInstructorHintTarget>(CInfoInstructorHintTarget *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CInfoInstructorHintTarget>(CInfoInstructorHintTarget *)::nameHolder.m_pszBase = "CInfoInstructorHintTarget";
    DataMapInit<CInfoInstructorHintTarget>(CInfoInstructorHintTarget *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CInfoInstructorHintTarget>(CInfoInstructorHintTarget *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CInfoInstructorHintTarget>(CInfoInstructorHintTarget *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CInfoInstructorHintTarget>(CInfoInstructorHintTarget *)::nameHolder.m_nLenBase = 25;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CInfoInstructorHintTarget>(CInfoInstructorHintTarget *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CInfoInstructorHintTarget>(CInfoInstructorHintTarget *)::nameHolder,
      &_dso_handle);
  }
  CInfoInstructorHintTarget::m_DataMap.dataNumFields = 1;
  CInfoInstructorHintTarget::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  CInfoInstructorHintTarget::m_DataMap.dataDesc = DataMapInit<CInfoInstructorHintTarget>(CInfoInstructorHintTarget *)::dataDesc;
  AddDatadescMetadataKeys(&CInfoInstructorHintTarget::m_DataMap, CInfoInstructorHintTarget::GetEntityClass);
  return &CInfoInstructorHintTarget::m_DataMap;
}


