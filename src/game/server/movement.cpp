// Reconstructed from DWARF by pahole; not original source.

// src/game/server/movement.cpp:54
class CPathKeyFrame : public CLogicalEntity {
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

public:

private:

	string_t m_iNextKey;  // +0x330
	float m_flNextTime;  // +0x338

protected:

	float m_flSpeed;  // +0x350

	static datamap_t m_DataMap;
	typedef CLogicalEntity BaseClass;
	CPathKeyFrame(CPathKeyFrame &);
	CPathKeyFrame(CPathKeyFrame &);
	CPathKeyFrame();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	void Link();
	CPathKeyFrame * NextKey(int);
	CPathKeyFrame * PrevKey(int);
	float Speed();
	void SetKeyAngles(QAngle);
	CPathKeyFrame * InsertNewKey(Vector, QAngle);
	void CalculateFrameDuration();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CPathKeyFrame();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[34] GetDataDescMap
	// sizeof = 856
};

// src/game/server/movement.cpp:259
class CBaseMoveBehavior : public CPathKeyFrame {
public:

private:

	int m_iPositionInterpolator;  // +0x354
	int m_iRotationInterpolator;  // +0x358
	float m_flAnimStartTime;  // +0x35c
	float m_flAnimEndTime;  // +0x360
	float m_flAverageSpeedAcrossFrame;  // +0x364
	float m_flTimeIntoFrame;  // +0x388
	int m_iDirection;  // +0x38c

	static datamap_t m_DataMap;
	typedef CPathKeyFrame BaseClass;

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
	CBaseMoveBehavior(CBaseMoveBehavior &);
	CBaseMoveBehavior(CBaseMoveBehavior &);
	CBaseMoveBehavior();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual void MoveDone();
	float SetObjectPhysicsVelocity(float);
	virtual bool StartMoving(int);
	virtual void StopMoving();
	virtual bool IsMoving();
	bool IsAtSequenceStart();
	bool IsAtSequenceEnd();
	float CalculateTimeAdvancementForSpeed(float, float);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CBaseMoveBehavior();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[118] MoveDone
	// vtable[207] StartMoving
	// vtable[208] StopMoving
	// vtable[174] IsMoving
	// vtable[34] GetDataDescMap
	// sizeof = 912
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GetPositionInterpolator  (line 21, @0x000000000229a030, libserver.so)
// calls: Motion_GetPositionInterpolator
// globals: g_pPositionInterpolators
IPositionInterpolator *__fastcall GetPositionInterpolator(int iInterp)
{
  __int64 v1; // r12
  IPositionInterpolator *result; // rax

  v1 = iInterp;
  result = g_pPositionInterpolators[iInterp];
  if ( result == 0 )
  {
    result = Motion_GetPositionInterpolator(iInterp);
    g_pPositionInterpolators[v1] = result;
  }
  return result;
}


// FixupAngles  (line 40, @0x000000000229a060, libserver.so)  // inlines: Fix
// callers: CPathKeyFrame::CalculateFrameDuration, CFuncTrackTrain::UpdateOrientationAtPathTracks, CFuncTrackTrain::UpdateOrientationBlend
void __fastcall FixupAngles(QAngle *const v)
{
  float i; // xmm1_4
  float j; // xmm1_4
  float k; // xmm1_4

  for ( i = v->x; i < 0.0; i = i + 360.0 )
    ;
  for ( ; i > 360.0; i = i - 360.0 )
    ;
  v->x = i;
  for ( j = v->y; j < 0.0; j = j + 360.0 )
    ;
  for ( ; j > 360.0; j = j - 360.0 )
    ;
  v->y = j;
  for ( k = v->z; k < 0.0; k = k + 360.0 )
    ;
  for ( ; k > 360.0; k = k - 360.0 )
    ;
  v->z = k;
}


// CPathKeyFrame::~CPathKeyFrame  (line 54, @0x00000000022a9940, libserver.so)  // inlines: ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPathKeyFrame::~CPathKeyFrame(CPathKeyFrame *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CPathKeyFrame::~CPathKeyFrame  (line 54, @0x00000000022a9960, libserver.so)  // inlines: ~CLogicalEntity, ~CPathKeyFrame, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPathKeyFrame::~CPathKeyFrame(CPathKeyFrame *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPathKeyFrame::GetEntityClass  (line 56, @0x00000000022a6a70, libserver.so)
CEntityClass *__cdecl CPathKeyFrame::GetEntityClass()
{
  return g_pEntityCPathKeyFrameClass;
}


// CPathKeyFrame::Schema_DynamicBinding  (line 56, @0x00000000022a6a80, libserver.so)
// globals: CPathKeyFrame::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPathKeyFrame::Schema_DynamicBinding(const CPathKeyFrame *const this)
{
  return CPathKeyFrame::s_pSchemaBinding;
}


// CPathKeyFrame::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 56, @0x00000000022a6a90, libserver.so)
// globals: CPathKeyFrame::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPathKeyFrame::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPathKeyFrame::CEntityInstanceEntityClass *const this)
{
  return CPathKeyFrame::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPathKeyFrame::CEntityInstanceEntityClass::DestructInstance  (line 56, @0x00000000022a6aa0, libserver.so)  // inlines: Destruct<CPathKeyFrame>
void __fastcall CPathKeyFrame::CEntityInstanceEntityClass::DestructInstance(
        CPathKeyFrame::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPathKeyFrame::CEntityInstanceEntityClass::FreeInstance  (line 56, @0x00000000022a6ac0, libserver.so)
void __fastcall CPathKeyFrame::CEntityInstanceEntityClass::FreeInstance(
        CPathKeyFrame::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPathKeyFrame::CEntityInstanceEntityClass::CanAllocate  (line 56, @0x00000000022a6ae0, libserver.so)
bool __fastcall CPathKeyFrame::CEntityInstanceEntityClass::CanAllocate(
        const CPathKeyFrame::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPathKeyFrame::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 56, @0x00000000022a6af0, libserver.so)
// globals: CPathKeyFrame::s_pSchemaBinding
const ISchemaBinding *__fastcall CPathKeyFrame::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPathKeyFrame::CEntityInstanceEntityClass *const this)
{
  return CPathKeyFrame::s_pSchemaBinding;
}


// CPathKeyFrame::CEntityInstanceEntityClass::AllocateInstance  (line 56, @0x00000000022a8880, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPathKeyFrame::CEntityInstanceEntityClass::AllocateInstance(
        CPathKeyFrame::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 856);
  memset(v1, 0, 0x358u);
  return v1;
}


// CPathKeyFrame::CEntityInstanceEntityClass::ConstructInstance  (line 56, @0x00000000022a8ec0, libserver.so)  // inlines: CLogicalEntity, CPathKeyFrame, CServerOnlyEntity, CUtlSymbolLarge, Construct<CPathKeyFrame>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CPathKeyFrame::CEntityInstanceEntityClass::ConstructInstance(
        CPathKeyFrame::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 102) = 0;
    *p = &off_406FF10;
  }
  return p;
}


// CPathKeyFrame::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 56, @0x00000000022aaeb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPathKeyFrame::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPathKeyFrame::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CPathKeyFrame::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 56, @0x00000000022aaed0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPathKeyFrame::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPathKeyFrame::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPathKeyFrame::GetEntityClassInfo  (line 56, @0x00000000022b4b20, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseEntity::GetEntityClassInfo
// callers: CBaseMoveBehavior::GetEntityClassInternal
// strings: "keyframe_track", "CPathKeyFrame", "CLogicalEntity", "CServerOnlyEntity"
// globals: `guard variable for'CPathKeyFrame::GetEntityClassInfo(void)::g_EntityCPathKeyFrameClassInfo, CPathKeyFrame::GetEntityClassInfo(void)::g_EntityCPathKeyFrameClassInfo, `guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo, CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo, `guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo, CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo
CEntityClassInfo *__cdecl CPathKeyFrame::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPathKeyFrame::GetEntityClassInfo(void)::g_EntityCPathKeyFrameClassInfo != 0 )
    return &CPathKeyFrame::GetEntityClassInfo(void)::g_EntityCPathKeyFrameClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CPathKeyFrame::GetEntityClassInfo(void)::g_EntityCPathKeyFrameClassInfo) == 0 )
    return &CPathKeyFrame::GetEntityClassInfo(void)::g_EntityCPathKeyFrameClassInfo;
  if ( `guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo) != 0 )
  {
    if ( `guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo) != 0 )
    {
      EntityClassInfo = CBaseEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo,
        "CServerOnlyEntity",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo,
      "CLogicalEntity",
      0,
      0,
      &CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CPathKeyFrame::GetEntityClassInfo(void)::g_EntityCPathKeyFrameClassInfo,
    "CPathKeyFrame",
    "keyframe_track",
    0,
    &CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CPathKeyFrame::GetEntityClassInfo(void)::g_EntityCPathKeyFrameClassInfo);
  return &CPathKeyFrame::GetEntityClassInfo(void)::g_EntityCPathKeyFrameClassInfo;
}


// CPathKeyFrame::GetEntityClassInternal  (line 56, @0x00000000022b4c30, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CLogicalEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "keyframe_track", "CPathKeyFrame"
// globals: `guard variable for'CPathKeyFrame::GetEntityClassInternal(void)::g_EntityCPathKeyFrameClass, CPathKeyFrame::GetEntityClassInternal(void)::g_EntityCPathKeyFrameClass, __dso_handle, CPathKeyFrame::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPathKeyFrame::GetEntityClassInfo(void)::g_EntityCPathKeyFrameClassInfo, CPathKeyFrame::GetEntityClassInfo(void)::g_EntityCPathKeyFrameClassInfo
CEntityClass *__cdecl CPathKeyFrame::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPathKeyFrame::GetEntityClassInternal(void)::g_EntityCPathKeyFrameClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPathKeyFrame::GetEntityClassInternal(void)::g_EntityCPathKeyFrameClass) != 0 )
  {
    CEntityClass::CEntityClass(&CPathKeyFrame::GetEntityClassInternal(void)::g_EntityCPathKeyFrameClass);
    CPathKeyFrame::GetEntityClassInternal(void)::g_EntityCPathKeyFrameClass._vptr_CEntityClass = off_406FE90;
    __cxa_guard_release(&`guard variable for'CPathKeyFrame::GetEntityClassInternal(void)::g_EntityCPathKeyFrameClass);
    __cxa_atexit(
      CPathKeyFrame::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPathKeyFrame::GetEntityClassInternal(void)::g_EntityCPathKeyFrameClass,
      &_dso_handle);
  }
  if ( g_pEntityCPathKeyFrameClass != 0 )
    return &CPathKeyFrame::GetEntityClassInternal(void)::g_EntityCPathKeyFrameClass;
  if ( `guard variable for'CPathKeyFrame::GetEntityClassInfo(void)::g_EntityCPathKeyFrameClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPathKeyFrame::GetEntityClassInfo(void)::g_EntityCPathKeyFrameClassInfo) != 0 )
  {
    EntityClassInfo = CLogicalEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPathKeyFrame::GetEntityClassInfo(void)::g_EntityCPathKeyFrameClassInfo,
      "CPathKeyFrame",
      "keyframe_track",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPathKeyFrame::GetEntityClassInfo(void)::g_EntityCPathKeyFrameClassInfo);
  }
  CPathKeyFrame::GetEntityClassInternal(void)::g_EntityCPathKeyFrameClass.m_pClassInfo = &CPathKeyFrame::GetEntityClassInfo(void)::g_EntityCPathKeyFrameClassInfo;
  CPathKeyFrame::GetEntityClassInternal(void)::g_EntityCPathKeyFrameClass.m_pBaseClassInfo = CPathKeyFrame::GetEntityClassInfo(void)::g_EntityCPathKeyFrameClassInfo.m_pBaseClassInfo;
  g_pEntityCPathKeyFrameClass = &CPathKeyFrame::GetEntityClassInternal(void)::g_EntityCPathKeyFrameClass;
  CPathKeyFrame::GetEntityClassInfo(void)::g_EntityCPathKeyFrameClassInfo.m_pClass = &CPathKeyFrame::GetEntityClassInternal(void)::g_EntityCPathKeyFrameClass;
  CPathKeyFrame::GetEntityClassInternal(void)::g_EntityCPathKeyFrameClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPathKeyFrameClass->m_pComponentOverrides = 0;
  return &CPathKeyFrame::GetEntityClassInternal(void)::g_EntityCPathKeyFrameClass;
}


// CPathKeyFrame::GetDataDescMap  (line 88, @0x0000000002283f30, libserver.so)
// globals: CPathKeyFrame::m_DataMap
datamap_t *__fastcall CPathKeyFrame::GetDataDescMap(CPathKeyFrame *const this)
{
  return &CPathKeyFrame::m_DataMap;
}


// CPathKeyFrame::AddDatadescMetadataKeys  (line 88, @0x000000000229a140, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPathKeyFrame::GetEntityClass(void)
void __fastcall CPathKeyFrame::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPathKeyFrame::GetEntityClass);
}


// CPathKeyFrame::GetBaseMap  (line 88, @0x000000000229a160, libserver.so)
datamap_t *__cdecl CPathKeyFrame::GetBaseMap()
{
  return &CLogicalEntity::m_DataMap;
}


// DataMapInit<CPathKeyFrame>  (line 88, @0x000000000229a170, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CPathKeyFrame"
// globals: `guard variable for'DataMapInit<CPathKeyFrame>(CPathKeyFrame *)::nameHolder, CPathKeyFrame::GetEntityClass(void), CPathKeyFrame::m_DataMap, DataMapInit<CPathKeyFrame>(CPathKeyFrame *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPathKeyFrame>(CPathKeyFrame *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPathKeyFrame>(CPathKeyFrame *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPathKeyFrame>(CPathKeyFrame *)::nameHolder) != 0 )
  {
    DataMapInit<CPathKeyFrame>(CPathKeyFrame *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPathKeyFrame>(CPathKeyFrame *)::nameHolder.m_pszBase = "CPathKeyFrame";
    DataMapInit<CPathKeyFrame>(CPathKeyFrame *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPathKeyFrame>(CPathKeyFrame *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPathKeyFrame>(CPathKeyFrame *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPathKeyFrame>(CPathKeyFrame *)::nameHolder.m_nLenBase = 13;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPathKeyFrame>(CPathKeyFrame *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPathKeyFrame>(CPathKeyFrame *)::nameHolder,
      &_dso_handle);
  }
  CPathKeyFrame::m_DataMap.dataNumFields = 8;
  CPathKeyFrame::m_DataMap.baseMap = &CLogicalEntity::m_DataMap;
  CPathKeyFrame::m_DataMap.dataDesc = &DataMapInit<CPathKeyFrame>(CPathKeyFrame *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPathKeyFrame::m_DataMap, CPathKeyFrame::GetEntityClass);
  return &CPathKeyFrame::m_DataMap;
}


// CPathKeyFrame::Spawn  (line 106, @0x00000000022851a0, libserver.so)  // inlines: SetKeyAngles, operator=
// calls: CLogicalEntity::Spawn, CBaseEntity::GetLocalOrigin, CBaseEntity::GetLocalAngles, AngleQuaternion
// callers: CBaseMoveBehavior::Spawn
void __fastcall CPathKeyFrame::Spawn(CPathKeyFrame *const this, const CEntityKeyValues *pKeyValues)
{
  CLogicalEntity::Spawn(this, pKeyValues);
  this->m_Origin = *CBaseEntity::GetLocalOrigin(this);
  this->m_Angles = *CBaseEntity::GetLocalAngles(this);
  AngleQuaternion(&this->m_Angles, &this->m_qAngle);
}


// CPathKeyFrame::Activate  (line 119, @0x000000000229a440, libserver.so)
// calls: CBaseEntity::Activate, CPathKeyFrame::Link, CPathKeyFrame::CalculateFrameDuration
// callers: CBaseMoveBehavior::Activate
void __fastcall CPathKeyFrame::Activate(CPathKeyFrame *const this, ActivateType_t activateType)
{
  CBaseEntity::Activate(this, activateType);
  CPathKeyFrame::Link(this);
  CPathKeyFrame::CalculateFrameDuration(this);
}


// CPathKeyFrame::CalculateFrameDuration  (line 131, @0x000000000229a240, libserver.so)  // inlines: FastSqrt, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, abs<float>, operator-
// calls: FixupAngles
// callers: CPathKeyFrame::Activate, CPathKeyFrame::InsertNewKey
void __fastcall CPathKeyFrame::CalculateFrameDuration(CPathKeyFrame *const this)
{
  CPathKeyFrame *m_pNextKey; // rax
  float m_flSpeed; // xmm4_4
  float v4; // xmm0_4
  float v5; // xmm0_4
  vec_t v6; // xmm2_4
  vec_t v7; // xmm0_4
  QAngle *p_ang; // rdi
  float v9; // xmm1_4
  float x; // xmm0_4
  QAngle ang; // [rsp+8h] [rbp-20h] BYREF
  int v12; // [rsp+14h] [rbp-14h] BYREF

  m_pNextKey = this->m_pNextKey;
  if ( m_pNextKey != 0 )
  {
    m_flSpeed = this->m_flSpeed;
    if ( m_flSpeed > 0.0 )
    {
      v4 = this->m_Origin.x - m_pNextKey->m_Origin.x;
      v5 = fsqrt(
             ((v4 * v4) + ((this->m_Origin.y - m_pNextKey->m_Origin.y) * (this->m_Origin.y - m_pNextKey->m_Origin.y)))
           + ((this->m_Origin.z - m_pNextKey->m_Origin.z) * (this->m_Origin.z - m_pNextKey->m_Origin.z)))
         / m_flSpeed;
      this->m_flNextTime = v5;
      if ( v5 == 0.0 )
      {
        v6 = this->m_Angles.x - m_pNextKey->m_Angles.x;
        v7 = this->m_Angles.z - m_pNextKey->m_Angles.z;
        ang.y = this->m_Angles.y - m_pNextKey->m_Angles.y;
        ang.x = v6;
        ang.z = v7;
        FixupAngles(&ang);
        p_ang = &ang;
        v9 = 0.0;
        do
        {
          x = p_ang->x;
          if ( p_ang->x < 0.0 )
          {
            v9 = fmaxf(-x, v9);
          }
          else if ( x > v9 )
          {
            v9 = p_ang->x;
            if ( x < 0.0 )
              v9 = -x;
          }
          p_ang = (p_ang + 4);
        }
        while ( p_ang != &v12 );
        this->m_flNextTime = v9 / this->m_flSpeed;
      }
    }
  }
}


// CPathKeyFrame::Link  (line 163, @0x000000000229a3b0, libserver.so)  // inlines: CUtlSymbolLarge
// calls: CGameEntitySystem::FindEntityByName, __dynamic_cast
// callers: CPathKeyFrame::Activate
// globals: `typeinfo for'CPathKeyFrame
void __fastcall CPathKeyFrame::Link(CPathKeyFrame *const this)
{
  CBaseEntity *EntityByName; // rax
  CPathKeyFrame *v3; // rax
  string_t iszName; // [rsp+10h] [rbp-20h] BYREF

  iszName.u.m_Id = this->m_iNextKey.u.m_Id;
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
  if ( EntityByName != 0 )
  {
    v3 = __dynamic_cast(EntityByName, &`typeinfo for'CBaseEntity, &`typeinfo for'CPathKeyFrame, 0);
    this->m_pNextKey = v3;
    if ( v3 != 0 )
      v3->m_pPrevKey = this;
  }
  else
  {
    this->m_pNextKey = 0;
  }
}


// CPathKeyFrame::SetKeyAngles  (line 176, @0x000000000229a4e0, libserver.so)  // inlines: operator=
// calls: AngleQuaternion
void __fastcall CPathKeyFrame::SetKeyAngles(CPathKeyFrame *const this, double a2, vec_t a3)
{
  Quaternion *p_m_qAngle; // rsi
  QAngle *p_m_Angles; // rdi

  p_m_qAngle = &this->m_qAngle;
  p_m_Angles = &this->m_Angles;
  p_m_Angles->z = a3;
  *&p_m_Angles->x = a2;
  AngleQuaternion(p_m_Angles, p_m_qAngle);
}


// CPathKeyFrame::NextKey  (line 185, @0x000000000229a520, libserver.so)
CPathKeyFrame *__fastcall CPathKeyFrame::NextKey(CPathKeyFrame *const this, int direction)
{
  CPathKeyFrame *result; // rax

  if ( direction == 1 )
    return this->m_pNextKey;
  result = this;
  if ( direction == -1 )
    return this->m_pPrevKey;
  return result;
}


// CPathKeyFrame::PrevKey  (line 204, @0x000000000229a560, libserver.so)
CPathKeyFrame *__fastcall CPathKeyFrame::PrevKey(CPathKeyFrame *const this, int direction)
{
  CPathKeyFrame *result; // rax

  if ( direction == 1 )
    return this->m_pPrevKey;
  result = this;
  if ( direction == -1 )
    return this->m_pNextKey;
  return result;
}


// CPathKeyFrame::InsertNewKey  (line 224, @0x000000000229a5a0, libserver.so)  // inlines: SetEFlags, SetKeyAngles, operator=
// calls: CreateEntityByName, AngleQuaternion, CBaseEntity::GetMoveParent, CBaseEntity::SetParent, CPathKeyFrame::CalculateFrameDuration, CBaseEntity::DispatchUpdateTransmitState
// strings: "keyframe_track"
CPathKeyFrame *__fastcall CPathKeyFrame::InsertNewKey(
        CPathKeyFrame *const this,
        double a2,
        float a3,
        double a4,
        float a5)
{
  CBaseEntity *EntityByName; // rbx
  int m_iEFlags; // eax
  CBaseEntity *MoveParent; // rax

  EntityByName = CreateEntityByName("keyframe_track", -1);
  *(&EntityByName[1].m_pEntity + 4) = a4;
  *(&EntityByName[1].m_hPrivateScope.m_hScope + 1) = a5;
  AngleQuaternion((&EntityByName[1].m_pEntity + 4), &EntityByName[1].m_iszPrivateVScripts);
  *&EntityByName[1]._vptr_IHandleEntity = a2;
  *&EntityByName[1].m_pEntity = a3;
  *&EntityByName[1].m_NetworkTransmitComponent.m_pChangeChangeAccessorFieldPathIndexInfo = this->m_flSpeed;
  m_iEFlags = this->m_iEFlags;
  EntityByName->m_iEFlags = m_iEFlags;
  if ( (m_iEFlags & 0x20080) != 0 )
    CBaseEntity::DispatchUpdateTransmitState(EntityByName);
  if ( CBaseEntity::GetMoveParent(this) != 0 )
  {
    MoveParent = CBaseEntity::GetMoveParent(this);
    CBaseEntity::SetParent(EntityByName, MoveParent, 0, 0);
  }
  EntityByName[1].m_pDummyPhysicsComponent = this->m_pNextKey;
  this->m_pNextKey->m_pPrevKey = EntityByName;
  this->m_pNextKey = EntityByName;
  EntityByName[1].m_NetworkTransmitComponent._vptr_IEventRegisterCallback = this;
  CPathKeyFrame::CalculateFrameDuration(this);
  CPathKeyFrame::CalculateFrameDuration(EntityByName);
  return EntityByName;
}


// CBaseMoveBehavior::~CBaseMoveBehavior  (line 259, @0x00000000022a9990, libserver.so)  // inlines: ~CLogicalEntity, ~CPathKeyFrame, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CBaseMoveBehavior::~CBaseMoveBehavior(CBaseMoveBehavior *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CBaseMoveBehavior::~CBaseMoveBehavior  (line 259, @0x00000000022a99b0, libserver.so)  // inlines: ~CBaseMoveBehavior, ~CLogicalEntity, ~CPathKeyFrame, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CBaseMoveBehavior::~CBaseMoveBehavior(CBaseMoveBehavior *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CBaseMoveBehavior::GetEntityClass  (line 261, @0x00000000022a6b00, libserver.so)
CEntityClass *__cdecl CBaseMoveBehavior::GetEntityClass()
{
  return g_pEntityCBaseMoveBehaviorClass;
}


// CBaseMoveBehavior::Schema_DynamicBinding  (line 261, @0x00000000022a6b10, libserver.so)
// globals: CBaseMoveBehavior::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CBaseMoveBehavior::Schema_DynamicBinding(const CBaseMoveBehavior *const this)
{
  return CBaseMoveBehavior::s_pSchemaBinding;
}


// CBaseMoveBehavior::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 261, @0x00000000022a6b20, libserver.so)
// globals: CBaseMoveBehavior::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CBaseMoveBehavior::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CBaseMoveBehavior::CEntityInstanceEntityClass *const this)
{
  return CBaseMoveBehavior::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CBaseMoveBehavior::CEntityInstanceEntityClass::DestructInstance  (line 261, @0x00000000022a6b30, libserver.so)  // inlines: Destruct<CBaseMoveBehavior>
void __fastcall CBaseMoveBehavior::CEntityInstanceEntityClass::DestructInstance(
        CBaseMoveBehavior::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CBaseMoveBehavior::CEntityInstanceEntityClass::FreeInstance  (line 261, @0x00000000022a6b50, libserver.so)
void __fastcall CBaseMoveBehavior::CEntityInstanceEntityClass::FreeInstance(
        CBaseMoveBehavior::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CBaseMoveBehavior::CEntityInstanceEntityClass::CanAllocate  (line 261, @0x00000000022a6b70, libserver.so)
bool __fastcall CBaseMoveBehavior::CEntityInstanceEntityClass::CanAllocate(
        const CBaseMoveBehavior::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CBaseMoveBehavior::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 261, @0x00000000022a6b80, libserver.so)
// globals: CBaseMoveBehavior::s_pSchemaBinding
const ISchemaBinding *__fastcall CBaseMoveBehavior::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CBaseMoveBehavior::CEntityInstanceEntityClass *const this)
{
  return CBaseMoveBehavior::s_pSchemaBinding;
}


// CBaseMoveBehavior::CEntityInstanceEntityClass::AllocateInstance  (line 261, @0x00000000022a88c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CBaseMoveBehavior::CEntityInstanceEntityClass::AllocateInstance(
        CBaseMoveBehavior::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CBaseMoveBehavior::CEntityInstanceEntityClass::ConstructInstance  (line 261, @0x00000000022a8f00, libserver.so)  // inlines: CBaseMoveBehavior, CLogicalEntity, CPathKeyFrame, CServerOnlyEntity, CUtlSymbolLarge, Construct<CBaseMoveBehavior>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CBaseMoveBehavior::CEntityInstanceEntityClass::ConstructInstance(
        CBaseMoveBehavior::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 102) = 0;
    *p = &off_4070630;
  }
  return p;
}


// CBaseMoveBehavior::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 261, @0x00000000022aaf00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CBaseMoveBehavior::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseMoveBehavior::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CBaseMoveBehavior::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 261, @0x00000000022aaf20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CBaseMoveBehavior::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseMoveBehavior::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CBaseMoveBehavior::GetEntityClassInternal  (line 261, @0x00000000022b4d80, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPathKeyFrame::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "move_keyframed", "CBaseMoveBehavior"
// globals: `guard variable for'CBaseMoveBehavior::GetEntityClassInternal(void)::g_EntityCBaseMoveBehaviorClass, CBaseMoveBehavior::GetEntityClassInternal(void)::g_EntityCBaseMoveBehaviorClass, __dso_handle, CBaseMoveBehavior::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CBaseMoveBehavior::GetEntityClassInfo(void)::g_EntityCBaseMoveBehaviorClassInfo, CBaseMoveBehavior::GetEntityClassInfo(void)::g_EntityCBaseMoveBehaviorClassInfo
CEntityClass *__cdecl CBaseMoveBehavior::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBaseMoveBehavior::GetEntityClassInternal(void)::g_EntityCBaseMoveBehaviorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseMoveBehavior::GetEntityClassInternal(void)::g_EntityCBaseMoveBehaviorClass) != 0 )
  {
    CEntityClass::CEntityClass(&CBaseMoveBehavior::GetEntityClassInternal(void)::g_EntityCBaseMoveBehaviorClass);
    CBaseMoveBehavior::GetEntityClassInternal(void)::g_EntityCBaseMoveBehaviorClass._vptr_CEntityClass = off_40705B0;
    __cxa_guard_release(&`guard variable for'CBaseMoveBehavior::GetEntityClassInternal(void)::g_EntityCBaseMoveBehaviorClass);
    __cxa_atexit(
      CBaseMoveBehavior::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CBaseMoveBehavior::GetEntityClassInternal(void)::g_EntityCBaseMoveBehaviorClass,
      &_dso_handle);
  }
  if ( g_pEntityCBaseMoveBehaviorClass != 0 )
    return &CBaseMoveBehavior::GetEntityClassInternal(void)::g_EntityCBaseMoveBehaviorClass;
  if ( `guard variable for'CBaseMoveBehavior::GetEntityClassInfo(void)::g_EntityCBaseMoveBehaviorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseMoveBehavior::GetEntityClassInfo(void)::g_EntityCBaseMoveBehaviorClassInfo) != 0 )
  {
    EntityClassInfo = CPathKeyFrame::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseMoveBehavior::GetEntityClassInfo(void)::g_EntityCBaseMoveBehaviorClassInfo,
      "CBaseMoveBehavior",
      "move_keyframed",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseMoveBehavior::GetEntityClassInfo(void)::g_EntityCBaseMoveBehaviorClassInfo);
  }
  CBaseMoveBehavior::GetEntityClassInternal(void)::g_EntityCBaseMoveBehaviorClass.m_pClassInfo = &CBaseMoveBehavior::GetEntityClassInfo(void)::g_EntityCBaseMoveBehaviorClassInfo;
  CBaseMoveBehavior::GetEntityClassInternal(void)::g_EntityCBaseMoveBehaviorClass.m_pBaseClassInfo = CBaseMoveBehavior::GetEntityClassInfo(void)::g_EntityCBaseMoveBehaviorClassInfo.m_pBaseClassInfo;
  g_pEntityCBaseMoveBehaviorClass = &CBaseMoveBehavior::GetEntityClassInternal(void)::g_EntityCBaseMoveBehaviorClass;
  CBaseMoveBehavior::GetEntityClassInfo(void)::g_EntityCBaseMoveBehaviorClassInfo.m_pClass = &CBaseMoveBehavior::GetEntityClassInternal(void)::g_EntityCBaseMoveBehaviorClass;
  CBaseMoveBehavior::GetEntityClassInternal(void)::g_EntityCBaseMoveBehaviorClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCBaseMoveBehaviorClass->m_pComponentOverrides = 0;
  return &CBaseMoveBehavior::GetEntityClassInternal(void)::g_EntityCBaseMoveBehaviorClass;
}


// CBaseMoveBehavior::GetDataDescMap  (line 302, @0x0000000002283f40, libserver.so)
// globals: CBaseMoveBehavior::m_DataMap
datamap_t *__fastcall CBaseMoveBehavior::GetDataDescMap(CBaseMoveBehavior *const this)
{
  return &CBaseMoveBehavior::m_DataMap;
}


// CBaseMoveBehavior::AddDatadescMetadataKeys  (line 302, @0x000000000229a6e0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CBaseMoveBehavior::GetEntityClass(void)
void __fastcall CBaseMoveBehavior::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CBaseMoveBehavior::GetEntityClass);
}


// CBaseMoveBehavior::GetBaseMap  (line 302, @0x000000000229a700, libserver.so)
// globals: CPathKeyFrame::m_DataMap
datamap_t *__cdecl CBaseMoveBehavior::GetBaseMap()
{
  return &CPathKeyFrame::m_DataMap;
}


// DataMapInit<CBaseMoveBehavior>  (line 302, @0x000000000229a710, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CBaseMoveBehavior"
// globals: `guard variable for'DataMapInit<CBaseMoveBehavior>(CBaseMoveBehavior *)::nameHolder, CPathKeyFrame::m_DataMap, CBaseMoveBehavior::GetEntityClass(void), CBaseMoveBehavior::m_DataMap, DataMapInit<CBaseMoveBehavior>(CBaseMoveBehavior *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CBaseMoveBehavior>(CBaseMoveBehavior *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CBaseMoveBehavior>(CBaseMoveBehavior *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseMoveBehavior>(CBaseMoveBehavior *)::nameHolder) != 0 )
  {
    DataMapInit<CBaseMoveBehavior>(CBaseMoveBehavior *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBaseMoveBehavior>(CBaseMoveBehavior *)::nameHolder.m_pszBase = "CBaseMoveBehavior";
    DataMapInit<CBaseMoveBehavior>(CBaseMoveBehavior *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBaseMoveBehavior>(CBaseMoveBehavior *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBaseMoveBehavior>(CBaseMoveBehavior *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBaseMoveBehavior>(CBaseMoveBehavior *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseMoveBehavior>(CBaseMoveBehavior *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBaseMoveBehavior>(CBaseMoveBehavior *)::nameHolder,
      &_dso_handle);
  }
  CBaseMoveBehavior::m_DataMap.dataNumFields = 11;
  CBaseMoveBehavior::m_DataMap.baseMap = &CPathKeyFrame::m_DataMap;
  CBaseMoveBehavior::m_DataMap.dataDesc = &DataMapInit<CBaseMoveBehavior>(CBaseMoveBehavior *)::dataDesc[1];
  AddDatadescMetadataKeys(&CBaseMoveBehavior::m_DataMap, CBaseMoveBehavior::GetEntityClass);
  return &CBaseMoveBehavior::m_DataMap;
}


// CBaseMoveBehavior::Spawn  (line 322, @0x0000000002285230, libserver.so)  // inlines: operator=
// calls: CBaseEntity::SetMoveType, CBaseEntity::GetLocalOrigin, CBaseEntity::GetLocalAngles, CPathKeyFrame::Spawn
void __fastcall CBaseMoveBehavior::Spawn(CBaseMoveBehavior *const this, const CEntityKeyValues *pKeyValues)
{
  this->m_pCurrentKeyFrame = this;
  this->m_flTimeIntoFrame = 0.0;
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_PUSH, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  this->m_Origin = *CBaseEntity::GetLocalOrigin(this);
  this->m_Angles = *CBaseEntity::GetLocalAngles(this);
  CPathKeyFrame::Spawn(this, pKeyValues);
}


// CBaseMoveBehavior::Activate  (line 335, @0x000000000229a470, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, String
// calls: CPathKeyFrame::Activate, CBaseEntity::SetMoveDoneTime, V_stricmp_fast
// strings: "move_keyframed"
void __fastcall CBaseMoveBehavior::Activate(CBaseMoveBehavior *const this, ActivateType_t activateType)
{
  float v3; // xmm1_4
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rdi

  CPathKeyFrame::Activate(this, activateType);
  CBaseEntity::SetMoveDoneTime(this, 0.5, v3);
  m_pEntity = this->m_pEntity;
  m_pAsString = "";
  if ( m_pEntity->m_designerName.u.m_Id != 0 )
    m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
  if ( V_stricmp_fast(m_pAsString, "move_keyframed") == 0 )
    (*(this->_vptr_IHandleEntity + 207))(this, 1);
}


// CBaseMoveBehavior::IsAtSequenceStart  (line 352, @0x000000000229a7e0, libserver.so)
bool __fastcall CBaseMoveBehavior::IsAtSequenceStart(CBaseMoveBehavior *const this)
{
  CPathKeyFrame *m_pCurrentKeyFrame; // rax
  float m_flAnimStartTime; // xmm0_4

  m_pCurrentKeyFrame = this->m_pCurrentKeyFrame;
  if ( m_pCurrentKeyFrame == 0 )
    return 1;
  m_flAnimStartTime = this->m_flAnimStartTime;
  return m_flAnimStartTime != 0.0
      && m_flAnimStartTime >= this->m_flLocalTime
      && m_pCurrentKeyFrame->m_pPrevKey == 0
      && this->m_pTargetKeyFrame == 0;
}


// CBaseMoveBehavior::IsAtSequenceEnd  (line 370, @0x000000000229a840, libserver.so)
bool __fastcall CBaseMoveBehavior::IsAtSequenceEnd(CBaseMoveBehavior *const this)
{
  CPathKeyFrame *m_pCurrentKeyFrame; // rdx
  bool result; // al

  m_pCurrentKeyFrame = this->m_pCurrentKeyFrame;
  result = 0;
  if ( m_pCurrentKeyFrame != 0 && m_pCurrentKeyFrame->m_pNextKey == 0 )
    return this->m_pTargetKeyFrame == 0;
  return result;
}


// CBaseMoveBehavior::IsMoving  (line 385, @0x0000000002283f50, libserver.so)
bool __fastcall CBaseMoveBehavior::IsMoving(CBaseMoveBehavior *const this)
{
  return this->m_iDirection != 0;
}


// CBaseMoveBehavior::StartMoving  (line 399, @0x00000000022852d0, libserver.so)  // inlines: FastSqrt, Length, NextKey, PrevKey, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CBaseEntity::SetMoveDoneTime
bool __fastcall CBaseMoveBehavior::StartMoving(CBaseMoveBehavior *const this, int direction)
{
  int m_iDirection; // edx
  CPathKeyFrame *m_pTargetKeyFrame; // rax
  CPathKeyFrame *m_pCurrentKeyFrame; // rdx
  CPathKeyFrame *v6; // rcx
  float m_flLocalTime; // xmm4_4
  float m_flTimeIntoFrame; // xmm1_4
  CPathKeyFrame *v9; // rdx
  float v10; // xmm5_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  CPathKeyFrame *m_pPrevKey; // rax
  CPathKeyFrame *m_pNextKey; // rdx
  int (**vptr_IHandleEntity)(...); // rax
  int directiona; // [rsp+Ch] [rbp-14h]

  if ( direction == 0 )
    goto LABEL_24;
  m_iDirection = this->m_iDirection;
  if ( m_iDirection != direction )
  {
    if ( m_iDirection != 0 )
    {
      directiona = direction;
      (*(this->_vptr_IHandleEntity + 208))(this);
      direction = directiona;
      this->m_iDirection = directiona;
      if ( directiona != 1 )
        goto LABEL_5;
    }
    else
    {
      this->m_iDirection = direction;
      if ( direction != 1 )
      {
LABEL_5:
        if ( direction != -1 )
        {
          m_pTargetKeyFrame = this->m_pTargetKeyFrame;
          if ( m_pTargetKeyFrame != 0 )
          {
            m_pCurrentKeyFrame = this->m_pCurrentKeyFrame;
            this->m_pPostKeyFrame = m_pTargetKeyFrame;
            v6 = m_pCurrentKeyFrame;
LABEL_8:
            this->m_pPreKeyFrame = m_pCurrentKeyFrame;
            if ( m_pCurrentKeyFrame == 0 )
              this->m_pPreKeyFrame = v6;
            goto LABEL_10;
          }
LABEL_24:
          (*(this->_vptr_IHandleEntity + 208))(this);
          return 0;
        }
        v6 = this->m_pCurrentKeyFrame;
        if ( this->m_flTimeIntoFrame <= 0.0 )
        {
          m_pPrevKey = v6->m_pPrevKey;
          this->m_pTargetKeyFrame = m_pPrevKey;
          if ( m_pPrevKey == 0 )
            goto LABEL_24;
        }
        else
        {
          this->m_pTargetKeyFrame = v6;
          m_pPrevKey = v6;
          v6 = v6->m_pNextKey;
          this->m_pCurrentKeyFrame = v6;
        }
        m_pNextKey = m_pPrevKey->m_pPrevKey;
LABEL_28:
        if ( m_pNextKey != 0 )
          m_pPrevKey = m_pNextKey;
        this->m_pPostKeyFrame = m_pPrevKey;
        if ( direction == 1 )
        {
          m_pCurrentKeyFrame = v6->m_pPrevKey;
          m_pTargetKeyFrame = this->m_pTargetKeyFrame;
        }
        else
        {
          if ( direction == -1 )
            m_pCurrentKeyFrame = v6->m_pNextKey;
          else
            m_pCurrentKeyFrame = v6;
          m_pTargetKeyFrame = this->m_pTargetKeyFrame;
        }
        goto LABEL_8;
      }
    }
    v6 = this->m_pCurrentKeyFrame;
    m_pPrevKey = v6->m_pNextKey;
    this->m_pTargetKeyFrame = m_pPrevKey;
    if ( m_pPrevKey == 0 )
      goto LABEL_24;
    m_pNextKey = m_pPrevKey->m_pNextKey;
    goto LABEL_28;
  }
  m_flLocalTime = this->m_flLocalTime;
  m_pTargetKeyFrame = this->m_pTargetKeyFrame;
  if ( m_flLocalTime < this->m_flAnimEndTime )
  {
LABEL_10:
    if ( m_pTargetKeyFrame == 0 )
      return 0;
    m_flLocalTime = this->m_flLocalTime;
    goto LABEL_12;
  }
  this->m_pCurrentKeyFrame = m_pTargetKeyFrame;
  this->m_flTimeIntoFrame = 0.0;
  if ( m_iDirection != 1 )
  {
    if ( m_iDirection == -1 )
      m_pTargetKeyFrame = m_pTargetKeyFrame->m_pPrevKey;
    if ( m_pTargetKeyFrame != 0 )
      goto LABEL_22;
LABEL_42:
    this->m_flAnimEndTime = 0.0;
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    this->m_flAnimStartTime = 0.0;
    vptr_IHandleEntity[208](this);
    return 0;
  }
  m_pTargetKeyFrame = m_pTargetKeyFrame->m_pNextKey;
  if ( m_pTargetKeyFrame == 0 )
    goto LABEL_42;
LABEL_22:
  this->m_pTargetKeyFrame = m_pTargetKeyFrame;
LABEL_12:
  m_flTimeIntoFrame = this->m_flTimeIntoFrame;
  if ( this->m_iDirection == 1 )
  {
    v9 = this->m_pCurrentKeyFrame;
    v10 = m_flLocalTime - m_flTimeIntoFrame;
    this->m_flAnimStartTime = m_flLocalTime - m_flTimeIntoFrame;
    v11 = (v9->m_flNextTime + m_flLocalTime) - m_flTimeIntoFrame;
    this->m_flAnimEndTime = v11;
  }
  else
  {
    if ( m_flTimeIntoFrame != 0.0 )
    {
      m_flTimeIntoFrame = m_pTargetKeyFrame->m_flNextTime - m_flTimeIntoFrame;
      this->m_flTimeIntoFrame = m_flTimeIntoFrame;
    }
    v9 = this->m_pCurrentKeyFrame;
    v10 = m_flLocalTime - m_flTimeIntoFrame;
    this->m_flAnimStartTime = m_flLocalTime - m_flTimeIntoFrame;
    v11 = (m_pTargetKeyFrame->m_flNextTime + m_flLocalTime) - m_flTimeIntoFrame;
    this->m_flAnimEndTime = v11;
  }
  v12 = v9->m_Origin.x - m_pTargetKeyFrame->m_Origin.x;
  v13 = v9->m_Origin.z - m_pTargetKeyFrame->m_Origin.z;
  v14 = fsqrt(
          ((v12 * v12)
         + ((v9->m_Origin.y - m_pTargetKeyFrame->m_Origin.y) * (v9->m_Origin.y - m_pTargetKeyFrame->m_Origin.y)))
        + (v13 * v13));
  this->m_flAverageSpeedAcrossFrame = (v11 - v10) / v14;
  CBaseEntity::SetMoveDoneTime(this, v11 - m_flLocalTime, v14);
  return 1;
}


// CBaseMoveBehavior::StopMoving  (line 516, @0x0000000002285660, libserver.so)
// calls: CBaseEntity::SetMoveDoneTime, CBaseEntity::SetAbsVelocity, CBaseEntity::SetLocalAngularVelocity
void __fastcall CBaseMoveBehavior::StopMoving(CBaseMoveBehavior *const this)
{
  float m_flAnimEndTime; // xmm1_4
  int m_iDirection; // eax
  float v4; // xmm0_4
  float m_flLocalTime; // xmm0_4
  CPathKeyFrame *m_pTargetKeyFrame; // rax

  this->m_flTimeIntoFrame = 0.0;
  m_iDirection = this->m_iDirection;
  if ( m_iDirection == 1 )
  {
    m_flLocalTime = this->m_flLocalTime;
    m_flAnimEndTime = this->m_flAnimEndTime;
    if ( m_flAnimEndTime > m_flLocalTime )
    {
      this->m_flTimeIntoFrame = m_flLocalTime - this->m_flAnimStartTime;
    }
    else
    {
      m_pTargetKeyFrame = this->m_pTargetKeyFrame;
      if ( m_pTargetKeyFrame != 0 )
        this->m_pCurrentKeyFrame = m_pTargetKeyFrame;
    }
  }
  else if ( m_iDirection == -1 )
  {
    v4 = this->m_flLocalTime;
    m_flAnimEndTime = this->m_flAnimEndTime;
    this->m_pCurrentKeyFrame = this->m_pTargetKeyFrame;
    if ( m_flAnimEndTime > v4 )
    {
      m_flAnimEndTime = m_flAnimEndTime - v4;
      this->m_flTimeIntoFrame = m_flAnimEndTime;
    }
  }
  CBaseEntity::SetMoveDoneTime(this, -1.0, m_flAnimEndTime);
  this->m_iDirection = 0;
  this->m_flAnimStartTime = 0.0;
  this->m_flAnimEndTime = 0.0;
  this->m_pTargetKeyFrame = 0;
  CBaseEntity::SetAbsVelocity(this, &vec3_origin);
  CBaseEntity::SetLocalAngularVelocity(this, &vec3_angle);
}


// CBaseMoveBehavior::MoveDone  (line 562, @0x0000000002288780, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, MoveDone, String
// calls: V_stricmp_fast
// strings: "move_keyframed"
void __fastcall CBaseMoveBehavior::MoveDone(CBaseMoveBehavior *const this)
{
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rdi
  void (*pfn)(CGameEntity *); // rax
  CGameEntity *v5; // rdi
  unsigned int m_iDirection; // r12d

  m_pEntity = this->m_pEntity;
  m_pAsString = "";
  if ( m_pEntity->m_designerName.u.m_Id != 0 )
    m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
  if ( V_stricmp_fast(m_pAsString, "move_keyframed") != 0
    || (m_iDirection = this->m_iDirection, (*(this->_vptr_IHandleEntity + 207))(this, m_iDirection) != 0) )
  {
    pfn = this->m_pfnMoveDone.__pfn;
    if ( pfn == 0 )
      return;
  }
  else
  {
    (*(this->_vptr_IHandleEntity + 207))(this, -m_iDirection);
    pfn = this->m_pfnMoveDone.__pfn;
    if ( pfn == 0 )
      return;
  }
  v5 = (this + this->m_pfnMoveDone.__delta);
  if ( (pfn & 1) != 0 )
    (*(v5->_vptr_IHandleEntity + pfn - 1))();
  else
    pfn(v5);
}


// CBaseMoveBehavior::CalculateTimeAdvancementForSpeed  (line 586, @0x000000000229a870, libserver.so)
float __fastcall CBaseMoveBehavior::CalculateTimeAdvancementForSpeed(
        CBaseMoveBehavior *const this,
        float a2,
        float moveTime,
        float speed)
{
  return (a2 * moveTime) * this->m_flAverageSpeedAcrossFrame;
}


// CBaseMoveBehavior::SetObjectPhysicsVelocity  (line 599, @0x000000000229a890, libserver.so)  // inlines: GetPositionInterpolator, Init, VectorMultiply, VectorSubtract, operator*, operator-
// calls: Motion_SetKeyAngles, Motion_InterpolateRotation, QuaternionAngles, CBaseEntity::GetLocalOrigin, CBaseEntity::SetAbsVelocity, CBaseEntity::GetLocalAngles, CBaseEntity::SetLocalAngularVelocity, Motion_GetPositionInterpolator
// globals: g_pPositionInterpolators
float __fastcall CBaseMoveBehavior::SetObjectPhysicsVelocity(CBaseMoveBehavior *const this, double a2, float moveTime)
{
  __m128i v4; // xmm0
  float m_flAnimStartTime; // xmm2_4
  int m_iPositionInterpolator; // edi
  float v7; // xmm1_4
  __int64 v8; // r14
  IPositionInterpolator *PositionInterpolator; // r12
  unsigned int v10; // r15d
  float v11; // xmm1_4
  const Vector *LocalOrigin; // rax
  vec_t v13; // xmm1_4
  vec_t v14; // xmm3_4
  const QAngle *LocalAngles; // rax
  vec_t v16; // xmm2_4
  vec_t v17; // xmm1_4
  float moveTimea; // [rsp+Ch] [rbp-74h]
  Vector newPos; // [rsp+10h] [rbp-70h] BYREF
  QAngle newAngles; // [rsp+20h] [rbp-60h] BYREF
  Vector vAbsVelocity; // [rsp+30h] [rbp-50h] BYREF
  Quaternion qRot; // [rsp+40h] [rbp-40h] BYREF

  moveTimea = *&a2;
  if ( this->m_pCurrentKeyFrame != 0
    && this->m_pTargetKeyFrame != 0
    && (*(this->_vptr_IHandleEntity + 174))(this, a2, moveTime) != 0 )
  {
    v4 = LODWORD(moveTimea);
    m_flAnimStartTime = this->m_flAnimStartTime;
    m_iPositionInterpolator = this->m_iPositionInterpolator;
    *v4.m128i_i32 = (moveTimea + this->m_flLocalTime) - m_flAnimStartTime;
    v7 = this->m_flAnimEndTime - m_flAnimStartTime;
    LODWORD(this->m_flTimeIntoFrame) = v4.m128i_i32[0];
    v8 = m_iPositionInterpolator;
    *v4.m128i_i32 = *v4.m128i_i32 / v7;
    PositionInterpolator = g_pPositionInterpolators[m_iPositionInterpolator];
    v10 = _mm_cvtsi128_si32(v4);
    if ( PositionInterpolator != 0
      || (PositionInterpolator = Motion_GetPositionInterpolator(m_iPositionInterpolator),
          g_pPositionInterpolators[v8] = PositionInterpolator,
          PositionInterpolator != 0) )
    {
      (*(PositionInterpolator->_vptr_IPositionInterpolator + 2))(
        PositionInterpolator,
        0xFFFFFFFFLL,
        &this->m_pPreKeyFrame->m_Origin);
      Motion_SetKeyAngles(-1, &this->m_pPreKeyFrame->m_qAngle);
      (*(PositionInterpolator->_vptr_IPositionInterpolator + 2))(
        PositionInterpolator,
        0,
        &this->m_pCurrentKeyFrame->m_Origin);
      Motion_SetKeyAngles(0, &this->m_pCurrentKeyFrame->m_qAngle);
      (*(PositionInterpolator->_vptr_IPositionInterpolator + 2))(
        PositionInterpolator,
        1,
        &this->m_pTargetKeyFrame->m_Origin);
      Motion_SetKeyAngles(1, &this->m_pTargetKeyFrame->m_qAngle);
      (*(PositionInterpolator->_vptr_IPositionInterpolator + 2))(
        PositionInterpolator,
        2,
        &this->m_pPostKeyFrame->m_Origin);
      Motion_SetKeyAngles(2, &this->m_pPostKeyFrame->m_qAngle);
      (*(PositionInterpolator->_vptr_IPositionInterpolator + 3))(
        PositionInterpolator,
        &newPos,
        *_mm_cvtsi32_si128(v10).m128i_i64);
    }
    else
    {
      newPos.x = 0.0;
      newPos.y = 0.0;
      newPos.z = 0.0;
    }
    Motion_InterpolateRotation(v11, this->m_iRotationInterpolator, &qRot);
    QuaternionAngles(&qRot, &newAngles);
    LocalOrigin = CBaseEntity::GetLocalOrigin(this);
    v13 = (newPos.z - LocalOrigin->z) * (1.0 / moveTimea);
    v14 = (newPos.x - LocalOrigin->x) * (1.0 / moveTimea);
    vAbsVelocity.y = (newPos.y - LocalOrigin->y) * (1.0 / moveTimea);
    vAbsVelocity.z = v13;
    vAbsVelocity.x = v14;
    CBaseEntity::SetAbsVelocity(this, &vAbsVelocity);
    LocalAngles = CBaseEntity::GetLocalAngles(this);
    v16 = (newAngles.z - LocalAngles->z) * (1.0 / moveTimea);
    v17 = (newAngles.x - LocalAngles->x) * (1.0 / moveTimea);
    vAbsVelocity.y = (newAngles.y - LocalAngles->y) * (1.0 / moveTimea);
    vAbsVelocity.z = v16;
    vAbsVelocity.x = v17;
    CBaseEntity::SetLocalAngularVelocity(this, &vAbsVelocity);
  }
  return moveTimea;
}


