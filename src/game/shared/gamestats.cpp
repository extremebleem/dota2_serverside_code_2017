// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/gamestats.cpp:79
class CGamestatsData {
	bool m_bHaveData;  // +0x8
	CGamestatsData();
	~CGamestatsData();
	void AllocData();
	void FreeData();

	// sizeof = 16
};

// src/game/shared/gamestats.cpp:116
class CBaseGameStats_Driver : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

	bool m_bBufferFull;  // +0x12d4

	int m_nWriteIndex;  // +0x12d8
	float m_flLastRealTime;  // +0x12dc
	float m_flLastSampleTime;  // +0x12e0
	float m_flTotalTimeInLevels;  // +0x12e4
	int m_iNumLevels;  // +0x12e8
	bool m_bDidVoiceChat;  // +0x12ec

	int m_iLoadedVersion;  // +0x12f8
	char m_szLoadedUserID[17];  // +0x12fc
	bool m_bEnabled;  // +0x130d
	bool m_bShuttingDown;  // +0x130e
	bool m_bInLevel;  // +0x130f
	bool m_bFirstLevel;  // +0x1310

	time_t m_tLastUpload;  // +0x1318
	float m_flLevelStartTime;  // +0x1320
	bool m_bStationary;  // +0x1324

	float m_flLastMovementTime;  // +0x1328

	bool m_bGamePaused;  // +0x1550

	float m_flPauseStartTime;  // +0x1554
	typedef CAutoGameSystem BaseClass;
	CBaseGameStats_Driver(CBaseGameStats_Driver &);
	CBaseGameStats_Driver(const CBaseGameStats_Driver &);
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CBaseGameStats_Driver *);
	CBaseGameStats_Driver();
	int GetPriority();
	virtual bool Init();
	virtual void Shutdown();
	virtual void GameInit(const EventGameInit_t &);
	virtual void GameDeactivate(const EventGameDeactivate_t &);
	virtual void SaveGame(const EventSaveGame_t &);
	virtual void RestoreGame(const EventRestoreGame_t &);
	virtual void FrameUpdatePostEntityThink(const EventServerPostEntityThink_t &);
	void PossibleMapChange();
	void CollectData(StatSendType_t);
	void SendData();
	void ResetData();
	bool AddBaseDataForSend(KeyValues *, StatSendType_t);
	void AdvanceIndex();
	void UpdatePerfStats();
	virtual ~CBaseGameStats_Driver();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[0] Init
	// vtable[2] Shutdown
	// vtable[3] GameInit
	// vtable[11] GameDeactivate
	// vtable[31] SaveGame
	// vtable[32] RestoreGame
	// vtable[25] FrameUpdatePostEntityThink
	// sizeof = 5472
};

// src/game/shared/gamestats.cpp:1554
class CPointGamestatsCounter : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;

	string_t m_strStatisticName;  // +0x308
	bool m_bDisabled;  // +0x310
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
	CPointGamestatsCounter(CPointGamestatsCounter &);
	CPointGamestatsCounter(CPointGamestatsCounter &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CPointGamestatsCounter();

protected:

	void InputSetName(inputdata_t &);
	void InputIncrement(inputdata_t &);
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	virtual ~CPointGamestatsCounter();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// sizeof = 792
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseGameStats_Driver::~CBaseGameStats_Driver  (line 116, @0x000000000227c100, libserver.so)  // inlines: ~CAutoGameSystem, ~CUserCmd, ~CUtlString
// calls: CUtlString::FreeMemoryBlock, IGameSystem::~IGameSystem
void __fastcall CBaseGameStats_Driver::~CBaseGameStats_Driver(CBaseGameStats_Driver *const this)
{
  CUtlString *p_m_PrevMapName; // rdi

  p_m_PrevMapName = &this->m_PrevMapName;
  p_m_PrevMapName[-606].m_pString = &off_4050490;
  p_m_PrevMapName[8].m_pString = off_403F950;
  if ( this->m_PrevMapName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(p_m_PrevMapName);
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CBaseGameStats_Driver::~CBaseGameStats_Driver  (line 116, @0x000000000227cd10, libserver.so)  // inlines: ~CAutoGameSystem, ~CBaseGameStats_Driver, ~CUserCmd, ~CUtlString
// calls: CUtlString::FreeMemoryBlock, IGameSystem::~IGameSystem, operator delete
void __fastcall CBaseGameStats_Driver::~CBaseGameStats_Driver(CBaseGameStats_Driver *const this)
{
  CUtlString *p_m_PrevMapName; // rdi

  p_m_PrevMapName = &this->m_PrevMapName;
  p_m_PrevMapName[-606].m_pString = &off_4050490;
  p_m_PrevMapName[8].m_pString = off_403F950;
  if ( this->m_PrevMapName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(p_m_PrevMapName);
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CBaseGameStats_Driver::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 118, @0x000000000227b040, libserver.so)
void __fastcall CBaseGameStats_Driver::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CBaseGameStats_Driver *const this)
{
  ;
}


// CBaseGameStats_Driver::DoesGameSystemReallocate  (line 118, @0x000000000227b050, libserver.so)
// globals: CBaseGameStats_Driver::sm_Factory
bool __fastcall CBaseGameStats_Driver::DoesGameSystemReallocate(const CBaseGameStats_Driver *const this)
{
  return (*(CBaseGameStats_Driver::sm_Factory->_vptr_IGameSystemFactory + 8))(CBaseGameStats_Driver::sm_Factory);
}


// CBaseGameStats_Driver::SetGameSystemGlobalPtrs  (line 118, @0x000000000227b070, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CBaseGameStats_Driver::sm_Factory
void __fastcall CBaseGameStats_Driver::SetGameSystemGlobalPtrs(CBaseGameStats_Driver *const this, void *pValue)
{
  if ( CBaseGameStats_Driver::sm_Factory != 0 )
    (*(CBaseGameStats_Driver::sm_Factory->_vptr_IGameSystemFactory + 7))(CBaseGameStats_Driver::sm_Factory, pValue);
}


// CBaseGameStats_Driver::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 264, @0x00000000022623f0, libserver.so)
void __cdecl CBaseGameStats_Driver::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// UpdatePerfStats  (line 266, @0x0000000002262400, libserver.so)  // inlines: AdvanceIndex, UpdatePerfStats
// calls: Plat_FloatTime
void __cdecl UpdatePerfStats()
{
  float v0; // xmm0_4

  v0 = Plat_FloatTime();
  if ( (CBGSDriver.m_flLastSampleTime == -1.0 || (v0 - CBGSDriver.m_flLastSampleTime) >= 1.0)
    && CBGSDriver.m_flLastRealTime > 0.0
    && v0 > CBGSDriver.m_flLastRealTime )
  {
    *(&(&CBGSDriver._vptr_IGameSystem)[CBGSDriver.m_nWriteIndex + 2] + 1) = 1.0 / (v0 - CBGSDriver.m_flLastRealTime);
    if ( CBGSDriver.m_nWriteIndex == 599 )
    {
      CBGSDriver.m_nWriteIndex = 0;
      CBGSDriver.m_bBufferFull = 1;
    }
    else
    {
      ++CBGSDriver.m_nWriteIndex;
    }
    CBGSDriver.m_flLastSampleTime = v0;
  }
  CBGSDriver.m_flLastRealTime = v0;
}


// CBaseGameStats_Driver::CBaseGameStats_Driver  (line 271, @0x00000000022624c0, libserver.so)  // inlines: CEntityOwnerPtr, CNetworkVarBase, CSmartPtr, CUserCmd, CUtlString, ChangeAccessorFieldPathIndex_t, EnsureValidValue, EnsureValidValue<float>, Get, HandInfo_t, Init, NetworkStateChanged, Reset, Set, Zero, operator CEntityInstance*, operator!=, operator=, operator=<QAngle>, operator=<Quaternion>, operator=<Vector>, operator=<int>, operator==, ~CAutoGameSystem, ~CUserCmd, ~CUtlString
// calls: HandInfo_t::Reset, CUtlString::FreeMemoryBlock, IGameSystem::~IGameSystem, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_06.cpp
void __fastcall CBaseGameStats_Driver::CBaseGameStats_Driver(CBaseGameStats_Driver *const this)
{
  double v1; // xmm4_8
  HandInfo_t *hmd_controllers_info; // r14
  CNetworkVarBase<Quaternion,HandInfo_t::NetworkVar_m_FilteredAngularVel> *p_m_FilteredAngularVel; // r15
  HandInfo_t *v4; // r13
  vec_t y; // xmm7_4
  double v7; // xmm2_8
  double v8; // xmm3_8
  signed __int64 v9; // rbx
  float x; // xmm1_4
  double v11; // xmm0_8
  double v12; // xmm1_8
  double v13; // xmm2_8
  double v14; // xmm0_8
  CEntityInstance *v15; // rdi
  CUserCmd *p_m_LastUserCmd; // r13
  vec_t v17; // xmm0_4
  vec_t v18; // xmm0_4
  vec_t v19; // xmm0_4
  HandInfo_t *v20; // r15
  __int64 i; // rbx
  HandInfo_t *v22; // rdi
  vec_t v23; // xmm0_4
  vec_t v24; // xmm0_4
  HandInfo_t *v25; // r15
  vec_t v26; // xmm0_4
  __int64 j; // rbx
  HandInfo_t *v28; // r14
  CEntityInstance *v29; // rdi
  CEntityInstance *v30; // rdi
  CEntityInstance *v31; // rdi
  CEntityInstance *v32; // rdi
  CEntityInstance *v33; // rdi
  CEntityInstance *v34; // rdi
  CEntityInstance *m_pObj; // rdi
  float v36; // [rsp+Ch] [rbp-94h]
  Vector *p_hmd_middle_eye_local; // [rsp+10h] [rbp-90h]
  float v38; // [rsp+18h] [rbp-88h]
  vec_t v39; // [rsp+1Ch] [rbp-84h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *p_m_Angles; // [rsp+20h] [rbp-80h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vPosition> *p_m_vPosition; // [rsp+28h] [rbp-78h]
  vec_t v42; // [rsp+30h] [rbp-70h]
  vec_t v43; // [rsp+30h] [rbp-70h]
  vec_t w; // [rsp+30h] [rbp-70h]
  float z; // [rsp+34h] [rbp-6Ch]
  ChangeAccessorFieldPathIndex_t *p_m_PathIndex; // [rsp+38h] [rbp-68h]
  vec_t v47; // [rsp+40h] [rbp-60h]
  vec_t v48; // [rsp+40h] [rbp-60h]
  vec_t v49; // [rsp+40h] [rbp-60h]
  float v50; // [rsp+44h] [rbp-5Ch]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *p_m_vFilteredPosition; // [rsp+48h] [rbp-58h]
  ChangeAccessorFieldPathIndex_t *v52; // [rsp+50h] [rbp-50h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredVelocity> *p_m_vFilteredVelocity; // [rsp+58h] [rbp-48h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_FilteredAngles> *p_m_FilteredAngles; // [rsp+60h] [rbp-40h]
  float v55; // [rsp+68h] [rbp-38h]
  vec_t v56; // [rsp+68h] [rbp-38h]
  vec_t v57; // [rsp+68h] [rbp-38h]
  vec_t v58; // [rsp+68h] [rbp-38h]

  hmd_controllers_info = this->m_LastUserCmd.hmd_controllers_info;
  p_m_FilteredAngularVel = &this->m_LastUserCmd.hmd_controllers_info[0].m_FilteredAngularVel;
  v4 = this->m_LastUserCmd.hmd_controllers_info;
  this->_vptr_IGameSystem = &off_4050490;
  this->m_bBufferFull = 0;
  this->m_LastUserCmd._vptr_CUserCmd = off_403F950;
  p_m_PathIndex = &this->m_LastUserCmd.hmd_controllers_info[0].__m_PathIndex;
  v52 = &this->m_LastUserCmd.hmd_controllers_info[0].__m_PathIndex;
  p_m_vPosition = &this->m_LastUserCmd.hmd_controllers_info[0].m_vPosition;
  p_m_Angles = &this->m_LastUserCmd.hmd_controllers_info[0].m_Angles;
  p_m_vFilteredPosition = &this->m_LastUserCmd.hmd_controllers_info[0].m_vFilteredPosition;
  p_m_FilteredAngles = &this->m_LastUserCmd.hmd_controllers_info[0].m_FilteredAngles;
  p_m_vFilteredVelocity = &this->m_LastUserCmd.hmd_controllers_info[0].m_vFilteredVelocity;
  this->m_nWriteIndex = 0;
  this->m_flLastRealTime = -1.0;
  this->m_flLastSampleTime = -1.0;
  y = vec3_origin.y;
  this->m_flTotalTimeInLevels = 0.0;
  this->m_iNumLevels = 0;
  this->m_bDidVoiceChat = 0;
  this->m_PrevMapName.m_pString = 0;
  this->m_iLoadedVersion = -1;
  this->m_bEnabled = 0;
  this->m_bShuttingDown = 0;
  this->m_bInLevel = 0;
  this->m_bFirstLevel = 1;
  this->m_flLevelStartTime = 0.0;
  this->m_bStationary = 0;
  this->m_flLastMovementTime = 0.0;
  p_hmd_middle_eye_local = &this->m_LastUserCmd.hmd_middle_eye_local;
  v50 = y;
  z = vec3_origin.z;
  *&v7 = LODWORD(vec3_angle.y);
  *&v8 = LODWORD(vec3_angle.z);
  v38 = vec3_angle.y;
  v36 = vec3_angle.z;
  do
  {
    v9 = v4 - hmd_controllers_info;
    v4->__m_pChainEntity.m_pObj = CEntitySpawnHelper::gm_pCurEntityPtr;
    *(&v52->m_Value + v9) = -1;
    *(&p_m_vPosition->m_Value.z + v9) = 0.0;
    *(&p_m_vPosition->m_Value.y + v9) = 0.0;
    *(&p_m_vPosition->m_Value.x + v9) = 0.0;
    *(&p_m_Angles->m_Value.x + v9) = 0.0;
    *(&p_m_Angles->m_Value.y + v9) = 0.0;
    *(&p_m_Angles->m_Value.z + v9) = 0.0;
    *(&p_m_vFilteredPosition->m_Value.z + v9) = 0.0;
    *(&p_m_vFilteredPosition->m_Value.y + v9) = 0.0;
    *(&p_m_vFilteredPosition->m_Value.x + v9) = 0.0;
    *(&p_m_FilteredAngles->m_Value.x + v9) = 0.0;
    *(&p_m_FilteredAngles->m_Value.y + v9) = 0.0;
    *(&p_m_FilteredAngles->m_Value.z + v9) = 0.0;
    *(&p_m_vFilteredVelocity->m_Value.z + v9) = 0.0;
    *(&p_m_vFilteredVelocity->m_Value.y + v9) = 0.0;
    *(&p_m_vFilteredVelocity->m_Value.x + v9) = 0.0;
    *(&p_m_FilteredAngularVel->m_Value.x + v9) = 0.0;
    *(&p_m_FilteredAngularVel->m_Value.y + v9) = 0.0;
    *(&p_m_FilteredAngularVel->m_Value.z + v9) = 0.0;
    *(&p_m_FilteredAngularVel->m_Value.w + v9) = 0.0;
    x = vec3_origin.x;
    v4->m_flTriggerAnalogValue.m_Value = 0.0;
    v4->m_flGripAnalogValue.m_Value = 0.0;
    v4->m_flTrackpadOrJoystickAnalogValueX.m_Value = 0.0;
    v4->m_flTrackpadOrJoystickAnalogValueY.m_Value = 0.0;
    v55 = x;
    if ( x != 0.0 || (*&v7 = LODWORD(v50), v8 = 0.0, v50 != 0.0) || z != 0.0 )
    {
      *(&p_m_vPosition->m_Value.x + v9) = x;
      *(&p_m_vPosition->m_Value.y + v9) = v50;
      *(&p_m_vPosition->m_Value.z + v9) = z;
    }
    *&v11 = LODWORD(vec3_angle.x);
    if ( vec3_angle.x != 0.0 || (*&v1 = LODWORD(v38), v38 != 0.0) || (*&v7 = LODWORD(v36), v36 != 0.0) )
    {
      *(&p_m_Angles->m_Value.x + v9) = vec3_angle.x;
      *&v11 = LODWORD(v38);
      *(&p_m_Angles->m_Value.z + v9) = v36;
      *(&p_m_Angles->m_Value.y + v9) = v38;
    }
    v12 = 0.0;
    if ( v55 != 0.0
      || (*&v11 = LODWORD(v50), v50 != *(&p_m_vFilteredPosition->m_Value.y + v9))
      || (*&v1 = LODWORD(z), z != *(&p_m_vFilteredPosition->m_Value.z + v9)) )
    {
      m_pObj = v4->__m_pChainEntity.m_pObj;
      if ( v4->__m_pChainEntity.m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && *(&v52->m_Value + v9) != -1 )
        (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 36, 0xFFFFFFFFLL, p_m_PathIndex->m_Value, v11, 0.0, v7, v8, v1);
      *&v12 = LODWORD(v55);
      *(&p_m_vFilteredPosition->m_Value.x + v9) = v55;
      *(&p_m_vFilteredPosition->m_Value.y + v9) = v50;
      *(&p_m_vFilteredPosition->m_Value.z + v9) = z;
    }
    *&v13 = LODWORD(vec3_angle.x);
    v42 = vec3_angle.x;
    v47 = vec3_angle.y;
    v56 = vec3_angle.z;
    if ( vec3_angle.x != *(&p_m_FilteredAngles->m_Value.x + v9)
      || vec3_angle.y != *(&p_m_FilteredAngles->m_Value.y + v9)
      || vec3_angle.z != *(&p_m_FilteredAngles->m_Value.z + v9) )
    {
      v34 = v4->__m_pChainEntity.m_pObj;
      if ( v4->__m_pChainEntity.m_pObj != 0 && (v34->m_pEntity->m_flags & 0x400) == 0 && *(&v52->m_Value + v9) != -1 )
        (*(v34->_vptr_IHandleEntity + 22))(
          v34,
          48,
          0xFFFFFFFFLL,
          p_m_PathIndex->m_Value,
          v11,
          v12,
          COERCE_DOUBLE(LODWORD(vec3_angle.x)),
          v8,
          v1);
      *&v13 = LODWORD(v42);
      *&v1 = LODWORD(v56);
      *(&p_m_FilteredAngles->m_Value.x + v9) = v42;
      *(&p_m_FilteredAngles->m_Value.y + v9) = v47;
      *(&p_m_FilteredAngles->m_Value.z + v9) = v56;
    }
    v43 = vec3_origin.x;
    v48 = vec3_origin.y;
    v57 = vec3_origin.z;
    if ( vec3_origin.x != *(&p_m_vFilteredVelocity->m_Value.x + v9)
      || vec3_origin.y != *(&p_m_vFilteredVelocity->m_Value.y + v9)
      || vec3_origin.z != *(&p_m_vFilteredVelocity->m_Value.z + v9) )
    {
      v33 = v4->__m_pChainEntity.m_pObj;
      if ( v4->__m_pChainEntity.m_pObj != 0 && (v33->m_pEntity->m_flags & 0x400) == 0 && *(&v52->m_Value + v9) != -1 )
        (*(v33->_vptr_IHandleEntity + 22))(
          v33,
          60,
          0xFFFFFFFFLL,
          p_m_PathIndex->m_Value,
          v11,
          v12,
          v13,
          COERCE_DOUBLE(LODWORD(vec3_origin.x)),
          v1);
      *&v12 = LODWORD(v57);
      *(&p_m_vFilteredVelocity->m_Value.x + v9) = v43;
      *(&p_m_vFilteredVelocity->m_Value.y + v9) = v48;
      *(&p_m_vFilteredVelocity->m_Value.z + v9) = v57;
    }
    *&v7 = LODWORD(quat_identity.y);
    v39 = quat_identity.x;
    *&v8 = LODWORD(quat_identity.z);
    v58 = quat_identity.y;
    *&v14 = LODWORD(quat_identity.w);
    v49 = quat_identity.z;
    w = quat_identity.w;
    if ( quat_identity.x != *(&p_m_FilteredAngularVel->m_Value.x + v9)
      || *&v7 != *(&p_m_FilteredAngularVel->m_Value.y + v9)
      || *&v8 != *(&p_m_FilteredAngularVel->m_Value.z + v9)
      || *&v14 != *(&p_m_FilteredAngularVel->m_Value.w + v9) )
    {
      v15 = v4->__m_pChainEntity.m_pObj;
      if ( v4->__m_pChainEntity.m_pObj != 0 && (v15->m_pEntity->m_flags & 0x400) == 0 && *(&v52->m_Value + v9) != -1 )
        (*(v15->_vptr_IHandleEntity + 22))(v15, 72, 0xFFFFFFFFLL, p_m_PathIndex->m_Value, v14, v12);
      *&v7 = LODWORD(v39);
      *&v8 = LODWORD(v58);
      *(&p_m_FilteredAngularVel->m_Value.x + v9) = v39;
      *(&p_m_FilteredAngularVel->m_Value.y + v9) = v58;
      *(&p_m_FilteredAngularVel->m_Value.z + v9) = v49;
      *(&p_m_FilteredAngularVel->m_Value.w + v9) = w;
    }
    v1 = 0.0;
    if ( v4->m_flTriggerAnalogValue.m_Value != 0.0 )
    {
      v32 = v4->__m_pChainEntity.m_pObj;
      if ( v4->__m_pChainEntity.m_pObj != 0 && (v32->m_pEntity->m_flags & 0x400) == 0 && *(&v52->m_Value + v9) != -1 )
        (*(v32->_vptr_IHandleEntity + 22))(v32, 88, 0xFFFFFFFFLL, p_m_PathIndex->m_Value, v14, v12);
      v4->m_flTriggerAnalogValue.m_Value = 0.0;
    }
    if ( v4->m_flGripAnalogValue.m_Value != 0.0 )
    {
      v31 = v4->__m_pChainEntity.m_pObj;
      if ( v4->__m_pChainEntity.m_pObj != 0 && (v31->m_pEntity->m_flags & 0x400) == 0 && *(&v52->m_Value + v9) != -1 )
        (*(v31->_vptr_IHandleEntity + 22))(v31, 92, 0xFFFFFFFFLL, p_m_PathIndex->m_Value, v14, v12);
      v4->m_flGripAnalogValue.m_Value = 0.0;
    }
    if ( v4->m_flTrackpadOrJoystickAnalogValueX.m_Value != 0.0 )
    {
      v30 = v4->__m_pChainEntity.m_pObj;
      if ( v4->__m_pChainEntity.m_pObj != 0 && (v30->m_pEntity->m_flags & 0x400) == 0 && *(&v52->m_Value + v9) != -1 )
        (*(v30->_vptr_IHandleEntity + 22))(v30, 96, 0xFFFFFFFFLL, p_m_PathIndex->m_Value, v14, v12);
      v4->m_flTrackpadOrJoystickAnalogValueX.m_Value = 0.0;
    }
    if ( v4->m_flTrackpadOrJoystickAnalogValueY.m_Value != 0.0 )
    {
      v29 = v4->__m_pChainEntity.m_pObj;
      if ( v4->__m_pChainEntity.m_pObj != 0 && (v29->m_pEntity->m_flags & 0x400) == 0 && *(&v52->m_Value + v9) != -1 )
        (*(v29->_vptr_IHandleEntity + 22))(v29, 100, 0xFFFFFFFFLL, p_m_PathIndex->m_Value);
      v4->m_flTrackpadOrJoystickAnalogValueY.m_Value = 0.0;
    }
    p_m_PathIndex += 52;
    ++v4;
  }
  while ( v4 != p_hmd_middle_eye_local );
  this->m_LastUserCmd.mousedx = 0;
  this->m_LastUserCmd.mousedy = 0;
  this->m_LastUserCmd.cameraposition[0] = 0;
  p_m_LastUserCmd = &this->m_LastUserCmd;
  this->m_LastUserCmd.command_number = 0;
  this->m_LastUserCmd.tick_count = 0;
  this->m_LastUserCmd.viewangles.x = 0.0;
  this->m_LastUserCmd.viewangles.y = 0.0;
  v17 = vec3_origin.x;
  this->m_LastUserCmd.viewangles.z = 0.0;
  this->m_LastUserCmd.crosshairtrace.x = v17;
  v18 = vec3_origin.y;
  this->m_LastUserCmd.forwardmove = 0.0;
  this->m_LastUserCmd.crosshairtrace.y = v18;
  v19 = vec3_origin.z;
  this->m_LastUserCmd.sidemove = 0.0;
  v20 = &this->m_LastUserCmd.hmd_controllers_info[1];
  this->m_LastUserCmd.upmove = 0.0;
  this->m_LastUserCmd.buttons = 0;
  this->m_LastUserCmd.impulse = 0;
  this->m_LastUserCmd.weaponselect = 0;
  this->m_LastUserCmd.weaponsubtype = 0;
  this->m_LastUserCmd.random_seed = 0;
  this->m_LastUserCmd.hasbeenpredicted = 0;
  this->m_LastUserCmd.cameraposition[1] = 0;
  this->m_LastUserCmd.clickbehavior = 0;
  this->m_LastUserCmd.statspanel = 0;
  this->m_LastUserCmd.shoppanel = 0;
  this->m_LastUserCmd.stats_dropdown = 0;
  this->m_LastUserCmd.stats_dropdown_sort = 0;
  this->m_LastUserCmd.crosshairtrace.z = v19;
  this->m_LastUserCmd.hmd_active = 0;
  this->m_LastUserCmd.hmd_targeting_mode = 0;
  this->m_LastUserCmd.hmd_controllers_active[0] = 0;
  HandInfo_t::Reset(hmd_controllers_info);
  for ( i = 1; i != 4; ++i )
  {
    v22 = v20;
    p_m_LastUserCmd->hmd_controllers_active[i] = 0;
    ++v20;
    HandInfo_t::Reset(v22);
  }
  this->m_LastUserCmd.mousedy = 0;
  this->m_LastUserCmd.cameraposition[0] = 0;
  this->m_LastUserCmd.cameraposition[1] = 0;
  this->m_LastUserCmd.mousedx = 0;
  this->m_LastUserCmd.hmd_middle_eye_local.x = 0.0;
  this->m_LastUserCmd.hmd_middle_eye_local.y = 0.0;
  this->m_LastUserCmd.hmd_middle_eye_local.z = 0.0;
  v23 = vec3_origin.x;
  this->m_LastUserCmd.hmd_viewangles_local.x = 0.0;
  this->m_LastUserCmd.hmd_viewangles_local.y = 0.0;
  this->m_LastUserCmd.hmd_viewangles_local.z = 0.0;
  this->m_bGamePaused = 0;
  this->m_pGamestatsData = 0;
  this->m_szLoadedUserID[0] = 0;
  this->m_tLastUpload = 0;
  this->m_LastUserCmd.command_number = 0;
  this->m_LastUserCmd.tick_count = 0;
  this->m_LastUserCmd.viewangles.x = 0.0;
  this->m_LastUserCmd.viewangles.y = 0.0;
  this->m_LastUserCmd.viewangles.z = 0.0;
  this->m_LastUserCmd.forwardmove = 0.0;
  this->m_LastUserCmd.sidemove = 0.0;
  this->m_LastUserCmd.upmove = 0.0;
  this->m_LastUserCmd.buttons = 0;
  this->m_LastUserCmd.impulse = 0;
  this->m_LastUserCmd.weaponselect = 0;
  this->m_LastUserCmd.weaponsubtype = 0;
  this->m_LastUserCmd.random_seed = 0;
  this->m_LastUserCmd.hasbeenpredicted = 0;
  this->m_LastUserCmd.clickbehavior = 0;
  this->m_LastUserCmd.statspanel = 0;
  this->m_LastUserCmd.shoppanel = 0;
  this->m_LastUserCmd.stats_dropdown = 0;
  this->m_LastUserCmd.stats_dropdown_sort = 0;
  this->m_LastUserCmd.crosshairtrace.x = v23;
  v24 = vec3_origin.y;
  this->m_LastUserCmd.hmd_active = 0;
  v25 = &this->m_LastUserCmd.hmd_controllers_info[1];
  this->m_LastUserCmd.crosshairtrace.y = v24;
  v26 = vec3_origin.z;
  this->m_LastUserCmd.hmd_targeting_mode = 0;
  this->m_LastUserCmd.crosshairtrace.z = v26;
  this->m_LastUserCmd.hmd_controllers_active[0] = 0;
  HandInfo_t::Reset(hmd_controllers_info);
  for ( j = 1; j != 4; ++j )
  {
    v28 = v25;
    p_m_LastUserCmd->hmd_controllers_active[j] = 0;
    ++v25;
    HandInfo_t::Reset(v28);
  }
  this->m_LastUserCmd.hmd_middle_eye_local.x = 0.0;
  this->m_LastUserCmd.hmd_middle_eye_local.y = 0.0;
  this->m_LastUserCmd.hmd_middle_eye_local.z = 0.0;
  this->m_LastUserCmd.hmd_viewangles_local.x = 0.0;
  this->m_LastUserCmd.hmd_viewangles_local.y = 0.0;
  this->m_LastUserCmd.hmd_viewangles_local.z = 0.0;
}


// CBaseGameStats::CBaseGameStats  (line 298, @0x0000000002263110, libserver.so)  // inlines: BasicGameStatsRecord_t, BasicGameStats_t, CUtlDict, CUtlMap, CUtlMemory, CUtlRBTree, ResetDbgInfo, SetCompareType, SetLessFunc, V_memset, memset
// globals: FastCaselessStringLessThan(char const* const&,char const* const&)
void __fastcall CBaseGameStats::CBaseGameStats(CBaseGameStats *const this)
{
  this->_vptr_CBaseGameStats = &off_40502D0;
  this->m_BasicStats.m_nSecondsToCompleteGame = 0;
  this->m_BasicStats.m_Summary.m_nCount = 0;
  this->m_BasicStats.m_Summary.m_nSeconds = 0;
  this->m_BasicStats.m_Summary.m_nCommentary = 0;
  this->m_BasicStats.m_Summary.m_nHDR = 0;
  this->m_BasicStats.m_Summary.m_nCaptions = 0;
  this->m_BasicStats.m_Summary.m_bSteam = 1;
  this->m_BasicStats.m_Summary.m_bCyberCafe = 0;
  this->m_BasicStats.m_Summary.m_nDeaths = 0;
  *this->m_BasicStats.m_Summary.m_nSkill = 0;
  this->m_BasicStats.m_Summary.m_nSkill[2] = 0;
  this->m_BasicStats.m_MapTotals.m_Elements.m_Tree.m_Elements.m_pMemory = 0;
  this->m_BasicStats.m_MapTotals.m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_BasicStats.m_MapTotals.m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_BasicStats.m_MapTotals.m_Elements.m_Tree.m_Root = -1;
  this->m_BasicStats.m_MapTotals.m_Elements.m_Tree.m_NumElements = 0;
  this->m_BasicStats.m_MapTotals.m_Elements.m_Tree.m_FirstFree = -1;
  this->m_BasicStats.m_MapTotals.m_Elements.m_Tree.m_LastAlloc.index = -1;
  this->m_BasicStats.m_MapTotals.m_Elements.m_Tree.m_pElements = 0;
  this->m_BasicStats.m_MapTotals.m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
  this->m_BasicStats.m_bSteam = 1;
  *(this + 104) &= 0xFCu;
  this->m_BasicStats.m_bCyberCafe = 0;
  this->m_BasicStats.m_nDXLevel = 0;
}


// CBaseGameStats::StatTrackingAllowed  (line 304, @0x00000000022631d0, libserver.so)
bool __cdecl CBaseGameStats::StatTrackingAllowed()
{
  return CBGSDriver.m_bEnabled;
}


// CBaseGameStats::StatsLog  (line 315, @0x00000000022631e0, libserver.so)  // inlines: strstr
// calls: V_vsnprintf, Plat_GetLocalTime, Plat_GetTimeString, strchr, DevMsg(char const*,...), __stack_chk_fail
// callers: CBaseGameStats::Event_Shutdown, CBaseGameStats::Event_MapChange, CBaseGameStats::Event_SaveGame, CBaseGameStats::Event_LoadGame, CBaseGameStats::Event_Credits, CBaseGameStats::Event_CrateSmashed, CBaseGameStats::Event_Punted, CBaseGameStats::Event_FlippedVehicle, CBaseGameStats::Event_PreSaveGameLoaded, CBaseGameStats::Event_PlayerConnected, CBaseGameStats::Event_PlayerDisconnected, CBaseGameStats::Event_PlayerKilledOther (26 total)
// strings: "[GS %s - %7.2f] %s", "gamestats.log"
// globals: g_LogFileHandle
void CBaseGameStats::StatsLog(CBaseGameStats *const this, const char *fmt, ...)
{
  char v3; // al
  char *v4; // rax
  char v5; // al
  FileHandle_t v6; // rsi
  void *v7; // rax
  va_list argptr; // [rsp+8h] [rbp-9B8h] BYREF
  tm newtime; // [rsp+20h] [rbp-9A0h] BYREF
  char timeString[128]; // [rsp+60h] [rbp-960h] BYREF
  char buf[2048]; // [rsp+E0h] [rbp-8E0h] BYREF
  unsigned __int64 v12; // [rsp+8E8h] [rbp-D8h]

  v12 = __readfsqword(0x28u);
  v3 = *(this + 104);
  if ( (v3 & 1) != 0 || (v3 & 2) != 0 )
  {
    va_start(argptr, fmt);
    V_vsnprintf(buf, 2048, fmt, argptr);
    Plat_GetLocalTime(&newtime);
    Plat_GetTimeString(&newtime, timeString, 128);
    v4 = strchr(timeString, 10);
    if ( v4 != 0 )
      *v4 = 0;
    v5 = *(this + 104);
    if ( (v5 & 1) != 0 )
    {
      DevMsg("[GS %s - %7.2f] %s", timeString, buf, gpGlobals->realtime);
      if ( (*(this + 104) & 2) == 0 )
        return;
    }
    else if ( (v5 & 2) == 0 )
    {
      return;
    }
    v6 = g_LogFileHandle;
    if ( g_LogFileHandle != 0 )
    {
LABEL_8:
      (*(filesystem->_vptr_IAppSystem + 34))(filesystem, v6, "[GS %s - %7.2f] %s", timeString, buf, gpGlobals->realtime);
      (*(filesystem->_vptr_IBaseFileSystem + 8))(&filesystem->IBaseFileSystem, g_LogFileHandle);
      return;
    }
    v7 = (*(filesystem->_vptr_IBaseFileSystem + 2))(&filesystem->IBaseFileSystem, "gamestats.log", "a", "MOD");
    g_LogFileHandle = v7;
    if ( v7 != 0 )
    {
      v6 = v7;
      goto LABEL_8;
    }
  }
}


// CBaseGameStats::GetStatSaveFileName  (line 365, @0x0000000002254070, libserver.so)
// globals: s_szSaveFileName
const char *__fastcall CBaseGameStats::GetStatSaveFileName(CBaseGameStats *const this)
{
  return s_szSaveFileName;
}


// CBaseGameStats::GetStatUploadRegistryKeyName  (line 371, @0x0000000002254080, libserver.so)
// globals: s_szStatUploadRegistryKeyName
const char *__fastcall CBaseGameStats::GetStatUploadRegistryKeyName(CBaseGameStats *const this)
{
  return s_szStatUploadRegistryKeyName;
}


// CBaseGameStats::GetUserPseudoUniqueID  (line 377, @0x0000000002263990, libserver.so)
// globals: s_szPseudoUniqueID
const char *__fastcall CBaseGameStats::GetUserPseudoUniqueID(CBaseGameStats *const this)
{
  return s_szPseudoUniqueID;
}


// CBaseGameStats::Event_Init  (line 383, @0x0000000002278fa0, libserver.so)  // inlines: SetDXLevelStatistic
// calls: CBaseGameStats::SetSteamStatistic, CBaseGameStats::SetCyberCafeStatistic, CBaseGameStats::StatsLog
// strings: "CBaseGameStats::Event_Init [%dth session]\n"
void __fastcall CBaseGameStats::Event_Init(CBaseGameStats *const this)
{
  char v2; // al
  char v3; // al
  int v4; // edx

  v2 = (*(filesystem->_vptr_IAppSystem + 11))(filesystem);
  CBaseGameStats::SetSteamStatistic(this, v2);
  v3 = (*(*g_pUploadGameStats + 128LL))(g_pUploadGameStats);
  CBaseGameStats::SetCyberCafeStatistic(this, v3);
  this->m_BasicStats.m_nDXLevel = (*(*g_pRenderHardwareConfig + 88LL))(g_pRenderHardwareConfig);
  v4 = this->m_BasicStats.m_Summary.m_nCount + 1;
  this->m_BasicStats.m_Summary.m_nCount = v4;
  CBaseGameStats::StatsLog(this, "CBaseGameStats::Event_Init [%dth session]\n", v4);
}


// CBaseGameStats::Event_Shutdown  (line 395, @0x00000000022633f0, libserver.so)
// calls: CBaseGameStats::StatsLog
// strings: "CBaseGameStats::Event_Shutdown [%dth session]\n", "\n====================================================================\n\n"
void __fastcall CBaseGameStats::Event_Shutdown(CBaseGameStats *const this)
{
  CBaseGameStats::StatsLog(
    this,
    "CBaseGameStats::Event_Shutdown [%dth session]\n",
    this->m_BasicStats.m_Summary.m_nCount);
  CBaseGameStats::StatsLog(this, "\n====================================================================\n\n");
}


// CBaseGameStats::Event_MapChange  (line 404, @0x0000000002263430, libserver.so)
// calls: CBaseGameStats::StatsLog
// strings: "CBaseGameStats::Event_MapChange to [%s]\n"
void __fastcall CBaseGameStats::Event_MapChange(
        CBaseGameStats *const this,
        const char *szOldMapName,
        const char *szNewMapName)
{
  CBaseGameStats::StatsLog(this, "CBaseGameStats::Event_MapChange to [%s]\n", szNewMapName);
}


// CBaseGameStats::Event_LevelInit  (line 409, @0x0000000002254090, libserver.so)
void __fastcall CBaseGameStats::Event_LevelInit(CBaseGameStats *const this)
{
  ;
}


// CBaseGameStats::Event_LevelShutdown  (line 435, @0x0000000002278d70, libserver.so)  // inlines: String
// calls: CUtlString::Get, BasicGameStats_t::FindOrAddRecordForMap, CBaseGameStats::StatsLog
// strings: "CBaseGameStats::Event_LevelShutdown [%s] %.2f elapsed %d total\n"
// globals: gamestats
void __fastcall CBaseGameStats::Event_LevelShutdown(CBaseGameStats *const this, float a2, float flElapsed)
{
  const char *v4; // rax
  BasicGameStatsRecord_t *v5; // rax
  unsigned int v6; // r12d
  const char *v7; // rax

  v4 = CUtlString::Get(&CBGSDriver.m_PrevMapName);
  v5 = BasicGameStats_t::FindOrAddRecordForMap(&this->m_BasicStats, v4);
  v5->m_nSeconds += a2;
  v6 = gamestats->m_BasicStats.m_Summary.m_nSeconds + a2;
  gamestats->m_BasicStats.m_Summary.m_nSeconds = v6;
  v7 = CUtlString::Get(&CBGSDriver.m_PrevMapName);
  CBaseGameStats::StatsLog(this, "CBaseGameStats::Event_LevelShutdown [%s] %.2f elapsed %d total\n", v7, v6, a2);
}


// CBaseGameStats::Event_SaveGame  (line 447, @0x0000000002263450, libserver.so)  // inlines: String
// calls: CUtlString::Get, CBaseGameStats::StatsLog
// strings: "CBaseGameStats::Event_SaveGame [%s]\n"
void __fastcall CBaseGameStats::Event_SaveGame(CBaseGameStats *const this)
{
  const char *v2; // rax

  v2 = CUtlString::Get(&CBGSDriver.m_PrevMapName);
  CBaseGameStats::StatsLog(this, "CBaseGameStats::Event_SaveGame [%s]\n", v2);
}


// CBaseGameStats::Event_LoadGame  (line 452, @0x0000000002263490, libserver.so)  // inlines: String
// calls: CUtlString::Get, CBaseGameStats::StatsLog
// strings: "CBaseGameStats::Event_LoadGame [%s] from %s\n"
void __fastcall CBaseGameStats::Event_LoadGame(CBaseGameStats *const this)
{
  const char *v2; // rax

  v2 = CUtlString::Get(&CBGSDriver.m_PrevMapName);
  CBaseGameStats::StatsLog(this, "CBaseGameStats::Event_LoadGame [%s] from %s\n", v2, "");
}


// CBaseGameStats::Event_PlayerKilled  (line 462, @0x0000000002278df0, libserver.so)  // inlines: String
// calls: CBaseGameStats::StatsLog, CUtlString::Get, BasicGameStats_t::FindOrAddRecordForMap
// strings: "  Player died, but not in a level!!!\n", "CBaseGameStats::Event_PlayerKilled [%s] [%dth death]\n", "  Player died %dth time in level [%s]!!!\n"
void __fastcall CBaseGameStats::Event_PlayerKilled(
        CBaseGameStats *const this,
        CBasePlayer *pPlayer,
        const CTakeDamageInfo *const info)
{
  int m_nDeaths; // r13d
  const char *v6; // rax
  const char *v7; // rax
  BasicGameStatsRecord_t *v8; // rax
  BasicGameStatsRecord_t *v9; // r13
  const char *v10; // rax

  ++this->m_BasicStats.m_Summary.m_nDeaths;
  if ( CBGSDriver.m_bInLevel )
  {
    v7 = CUtlString::Get(&CBGSDriver.m_PrevMapName);
    v8 = BasicGameStats_t::FindOrAddRecordForMap(&this->m_BasicStats, v7);
    ++v8->m_nDeaths;
    v9 = v8;
    v10 = CUtlString::Get(&CBGSDriver.m_PrevMapName);
    CBaseGameStats::StatsLog(this, "  Player died %dth time in level [%s]!!!\n", v9->m_nDeaths, v10);
  }
  else
  {
    CBaseGameStats::StatsLog(this, "  Player died, but not in a level!!!\n", info);
  }
  m_nDeaths = this->m_BasicStats.m_Summary.m_nDeaths;
  v6 = (*(pPlayer->_vptr_IHandleEntity + 106))(pPlayer);
  CBaseGameStats::StatsLog(this, "CBaseGameStats::Event_PlayerKilled [%s] [%dth death]\n", v6, m_nDeaths);
}


// CBaseGameStats::Event_Commentary  (line 481, @0x0000000002278ea0, libserver.so)  // inlines: String
// calls: CUtlString::Get, BasicGameStats_t::FindOrAddRecordForMap, CBaseGameStats::StatsLog
// strings: "CBaseGameStats::Event_Commentary [%d]\n"
void __fastcall CBaseGameStats::Event_Commentary(CBaseGameStats *const this)
{
  const char *v2; // rax
  BasicGameStatsRecord_t *v3; // rax
  int v4; // edx

  if ( CBGSDriver.m_bInLevel )
  {
    v2 = CUtlString::Get(&CBGSDriver.m_PrevMapName);
    v3 = BasicGameStats_t::FindOrAddRecordForMap(&this->m_BasicStats, v2);
    ++v3->m_nCommentary;
  }
  v4 = this->m_BasicStats.m_Summary.m_nCommentary + 1;
  this->m_BasicStats.m_Summary.m_nCommentary = v4;
  CBaseGameStats::StatsLog(this, "CBaseGameStats::Event_Commentary [%d]\n", v4);
}


// CBaseGameStats::Event_Credits  (line 494, @0x00000000022634d0, libserver.so)
// calls: CBaseGameStats::StatsLog, Warning
// strings: "CBaseGameStats::Event_Credits\n", "EVENT_CREDITS with negative elapsed time (rt %f starttime %f)\n"
// globals: gamestats
void __fastcall CBaseGameStats::Event_Credits(CBaseGameStats *const this)
{
  float v1; // xmm2_4
  CBaseGameStats *v2; // rdi
  CBaseGameStats *v3; // rdi
  float elapsed; // [rsp+Ch] [rbp-4h]

  CBaseGameStats::StatsLog(this, "CBaseGameStats::Event_Credits\n");
  v1 = 0.0;
  if ( CBGSDriver.m_bInLevel && (v1 = gpGlobals->realtime - CBGSDriver.m_flLevelStartTime) < 0.0 )
  {
    Warning(
      "EVENT_CREDITS with negative elapsed time (rt %f starttime %f)\n",
      gpGlobals->realtime,
      CBGSDriver.m_flLevelStartTime);
    v2 = gamestats;
    v1 = 0.0;
    if ( gamestats->m_BasicStats.m_nSecondsToCompleteGame != 0 )
      return;
  }
  else
  {
    v2 = gamestats;
    if ( gamestats->m_BasicStats.m_nSecondsToCompleteGame != 0 )
      return;
  }
  elapsed = v1;
  if ( (*(v2->_vptr_CBaseGameStats + 18))(v2) != 0 )
  {
    v3 = gamestats;
    gamestats->m_BasicStats.m_nSecondsToCompleteGame = (gamestats->m_BasicStats.m_Summary.m_nSeconds + elapsed);
    (*(v3->_vptr_CBaseGameStats + 41))(v3, 0);
  }
}


// CBaseGameStats::Event_CrateSmashed  (line 522, @0x00000000022635b0, libserver.so)
// calls: CBaseGameStats::StatsLog
// strings: "CBaseGameStats::Event_CrateSmashed\n"
void __fastcall CBaseGameStats::Event_CrateSmashed(CBaseGameStats *const this)
{
  CBaseGameStats::StatsLog(this, "CBaseGameStats::Event_CrateSmashed\n");
}


// CBaseGameStats::Event_Punted  (line 527, @0x00000000022635d0, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, String
// calls: CBaseGameStats::StatsLog
// strings: "CBaseGameStats::Event_Punted [%s]\n"
void __fastcall CBaseGameStats::Event_Punted(CBaseGameStats *const this, CBaseEntity *pObject)
{
  const char *m_pAsString; // rdx
  CEntityIdentity *m_pEntity; // rax

  m_pAsString = "";
  m_pEntity = pObject->m_pEntity;
  if ( m_pEntity->m_designerName.u.m_Id != 0 )
    m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
  CBaseGameStats::StatsLog(this, "CBaseGameStats::Event_Punted [%s]\n", m_pAsString);
}


// CBaseGameStats::Event_PlayerTraveled  (line 532, @0x00000000022540a0, libserver.so)
void __fastcall CBaseGameStats::Event_PlayerTraveled(
        CBaseGameStats *const this,
        CBasePlayer *pBasePlayer,
        float distanceInInches,
        bool bInVehicle,
        bool bSprinting)
{
  ;
}


// CBaseGameStats::Event_FlippedVehicle  (line 536, @0x0000000002263600, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, String
// calls: CBaseGameStats::StatsLog
// strings: "CBaseGameStats::Event_FlippedVehicle [%s] flipped [%s]\n"
void __fastcall CBaseGameStats::Event_FlippedVehicle(
        CBaseGameStats *const this,
        CBasePlayer *pDriver,
        CPropVehicleDriveable *pVehicle)
{
  const char *m_pAsString; // rbx
  CEntityIdentity *m_pEntity; // rax
  const char *v6; // rax

  m_pAsString = "";
  m_pEntity = pVehicle->m_pEntity;
  if ( m_pEntity->m_designerName.u.m_Id != 0 )
    m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
  v6 = (*(pDriver->_vptr_IHandleEntity + 106))(pDriver);
  CBaseGameStats::StatsLog(this, "CBaseGameStats::Event_FlippedVehicle [%s] flipped [%s]\n", v6, m_pAsString);
}


// CBaseGameStats::Event_PreSaveGameLoaded  (line 542, @0x0000000002263650, libserver.so)
// calls: CBaseGameStats::StatsLog
// strings: "at console", "in-game", "CBaseGameStats::Event_PreSaveGameLoaded [%s] %s\n"
void __fastcall CBaseGameStats::Event_PreSaveGameLoaded(
        CBaseGameStats *const this,
        const char *pSaveName,
        bool bInGame)
{
  const char *v3; // rcx

  v3 = "in-game";
  if ( !bInGame )
    v3 = "at console";
  CBaseGameStats::StatsLog(this, "CBaseGameStats::Event_PreSaveGameLoaded [%s] %s\n", pSaveName, v3);
}


// CBaseGameStats::SaveToFileNOW  (line 547, @0x0000000002275600, libserver.so)  // inlines: LowLevelByteSwap<int>, LowLevelByteSwap<short int>, PeekPut, PutInt, PutShort, PutType<int>, PutType<short int>, PutTypeBin<int>, PutTypeBin<short int>, StatsTrackingIsFullyEnabled, SwapBufferToTargetEndian<int>, SwapBufferToTargetEndian<short int>, V_memcpy, memcpy, operator[], ~CUtlBuffer, ~CUtlMemory
// calls: StatsTrackingIsFullyEnabled, CUtlBuffer::CUtlBuffer, CUtlBuffer::Printf, CUtlBuffer::Put, BasicGameStats_t::SaveToBuffer, CBaseGameStats::StatsLog, CUtlMemory<unsigned char, int>::Purge, V_StripTrailingSlash, V_snprintf, V_strlower_fast, V_FixSlashes, CUtlBuffer::CheckPut (15 total)
// strings: "%hd", "Shut down wrote to '%s'\n", "%s/%s"
// globals: gamestats, s_szPseudoUniqueID
bool __fastcall CBaseGameStats::SaveToFileNOW(CBaseGameStats *const this, bool bForceSyncWrite)
{
  char v2; // bl
  __int64 v6; // rsi
  __int64 v7; // rsi
  const char *v8; // rax
  int m_Put; // eax
  int v10; // eax
  int v11; // r14d
  const void *v12; // rax
  unsigned __int8 *v13; // rdx
  unsigned __int8 *v14; // rdx
  unsigned __int8 (__fastcall *v15)(IBaseFileSystem *, __int64, char *); // [rsp+10h] [rbp-3F0h]
  void (__fastcall *v16)(IFileSystem *, __int64, char *, char *, __int64, _QWORD, _QWORD); // [rsp+10h] [rbp-3F0h]
  CUtlBuffer buf; // [rsp+20h] [rbp-3E0h] BYREF
  CUtlBuffer statsBuffer; // [rsp+70h] [rbp-390h] BYREF
  char gamePath[256]; // [rsp+C0h] [rbp-340h] BYREF
  char fullpath[520]; // [rsp+1C0h] [rbp-240h] BYREF
  unsigned __int64 v21; // [rsp+3C8h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  if ( !CBGSDriver.m_bEnabled )
    return 0;
  if ( !StatsTrackingIsFullyEnabled() )
    return 0;
  v2 = (*gamestats->_vptr_CBaseGameStats)(gamestats);
  if ( v2 == 0 )
    return 0;
  CUtlBuffer::CUtlBuffer(&buf, 0, 0, 0);
  if ( (buf.m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(&buf, "%hd", 6);
  }
  else if ( CUtlBuffer::CheckPut(&buf, 2) )
  {
    if ( (*&buf.m_Byteswap & 1) != 0 )
    {
      m_Put = buf.m_Put;
      v13 = &buf.m_Memory.m_pMemory[buf.m_Put - buf.m_nOffset];
      if ( v13 != 0 )
      {
        LOWORD(statsBuffer.m_Memory.m_pMemory) = 1536;
        *v13 = 1536;
        m_Put = buf.m_Put;
      }
    }
    else
    {
      *&buf.m_Memory.m_pMemory[buf.m_Put - buf.m_nOffset] = 6;
      m_Put = buf.m_Put;
    }
    buf.m_Put = m_Put + 2;
    CUtlBuffer::AddNullTermination(&buf);
  }
  CUtlBuffer::Put(&buf, s_szPseudoUniqueID, 16);
  if ( (*(this->_vptr_CBaseGameStats + 15))(this) != 0 )
  {
    BasicGameStats_t::SaveToBuffer(&this->m_BasicStats, &buf);
  }
  else if ( (buf.m_Flags & 1) != 0 )
  {
    CUtlBuffer::Printf(&buf, "%d", -17973521);
  }
  else if ( CUtlBuffer::CheckPut(&buf, 4) )
  {
    if ( (*&buf.m_Byteswap & 1) != 0 )
    {
      v10 = buf.m_Put;
      v14 = &buf.m_Memory.m_pMemory[buf.m_Put - buf.m_nOffset];
      if ( v14 != 0 )
      {
        LODWORD(statsBuffer.m_Memory.m_pMemory) = -272699906;
        *v14 = -272699906;
        v10 = buf.m_Put;
      }
    }
    else
    {
      *&buf.m_Memory.m_pMemory[buf.m_Put - buf.m_nOffset] = -17973521;
      v10 = buf.m_Put;
    }
    buf.m_Put = v10 + 4;
    CUtlBuffer::AddNullTermination(&buf);
  }
  (*(gamestats->_vptr_CBaseGameStats + 37))(gamestats, &buf);
  memset(fullpath, 0, 0x200u);
  v15 = *(filesystem->_vptr_IBaseFileSystem + 10);
  v6 = (*(this->_vptr_CBaseGameStats + 16))(this);
  if ( v15(&filesystem->IBaseFileSystem, v6, "MOD") != 0 )
  {
    v16 = *(filesystem->_vptr_IAppSystem + 23);
    v7 = (*(this->_vptr_CBaseGameStats + 16))(this);
    v16(filesystem, v7, "MOD", fullpath, 512, 0, 0);
  }
  else
  {
    (*(*engine + 368LL))(engine, gamePath, 256);
    V_StripTrailingSlash(gamePath);
    v8 = (*(this->_vptr_CBaseGameStats + 16))(this);
    V_snprintf(fullpath, 512, "%s/%s", gamePath, v8);
    V_strlower_fast(fullpath);
    V_FixSlashes(fullpath, 47);
  }
  if ( CBGSDriver.m_bShuttingDown || bForceSyncWrite )
  {
    (*(filesystem->_vptr_IBaseFileSystem + 15))(&filesystem->IBaseFileSystem, fullpath, "MOD", &buf);
    CBaseGameStats::StatsLog(this, "Shut down wrote to '%s'\n", fullpath);
  }
  else
  {
    v11 = buf.m_Put;
    v12 = (**g_pMemAlloc)(g_pMemAlloc, buf.m_Put);
    CUtlBuffer::CUtlBuffer(&statsBuffer, v12, v11, 0);
    CUtlBuffer::Put(&statsBuffer, buf.m_Memory.m_pMemory, v11);
    (*(filesystem->_vptr_IAppSystem + 84))(
      filesystem,
      fullpath,
      statsBuffer.m_Memory.m_pMemory,
      statsBuffer.m_Put,
      1,
      0,
      0);
    CUtlMemory<unsigned char,int>::Purge(&statsBuffer.m_Memory);
  }
  CUtlMemory<unsigned char,int>::Purge(&buf.m_Memory);
  return v2;
}


// CBaseGameStats::Event_PlayerConnected  (line 606, @0x0000000002263680, libserver.so)
// calls: CBaseGameStats::StatsLog
// strings: "CBaseGameStats::Event_PlayerConnected [%s]\n"
void __fastcall CBaseGameStats::Event_PlayerConnected(CBaseGameStats *const this, CBasePlayer *pBasePlayer)
{
  const char *v3; // rax

  v3 = (*(pBasePlayer->_vptr_IHandleEntity + 106))(pBasePlayer);
  CBaseGameStats::StatsLog(this, "CBaseGameStats::Event_PlayerConnected [%s]\n", v3);
}


// CBaseGameStats::Event_PlayerDisconnected  (line 611, @0x00000000022636c0, libserver.so)
// calls: CBaseGameStats::StatsLog
// strings: "CBaseGameStats::Event_PlayerDisconnected [%s]\n"
void __fastcall CBaseGameStats::Event_PlayerDisconnected(CBaseGameStats *const this, CBasePlayer *pBasePlayer)
{
  const char *v3; // rax

  v3 = (*(pBasePlayer->_vptr_IHandleEntity + 106))(pBasePlayer);
  CBaseGameStats::StatsLog(this, "CBaseGameStats::Event_PlayerDisconnected [%s]\n", v3);
}


// CBaseGameStats::Event_PlayerDamage  (line 616, @0x00000000022540b0, libserver.so)
void __fastcall CBaseGameStats::Event_PlayerDamage(
        CBaseGameStats *const this,
        CBasePlayer *pBasePlayer,
        const CTakeDamageInfo *const info)
{
  ;
}


// CBaseGameStats::Event_PlayerKilledOther  (line 621, @0x0000000002263700, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, String
// calls: CBaseGameStats::StatsLog
// strings: "CBaseGameStats::Event_PlayerKilledOther [%s] killed [%s]\n"
void __fastcall CBaseGameStats::Event_PlayerKilledOther(
        CBaseGameStats *const this,
        CBasePlayer *pAttacker,
        CBaseEntity *pVictim,
        const CTakeDamageInfo *const info)
{
  const char *m_pAsString; // rbx
  CEntityIdentity *m_pEntity; // rax
  const char *v7; // rax

  m_pAsString = "";
  m_pEntity = pVictim->m_pEntity;
  if ( m_pEntity->m_designerName.u.m_Id != 0 )
    m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
  v7 = (*(pAttacker->_vptr_IHandleEntity + 106))(pAttacker);
  CBaseGameStats::StatsLog(this, "CBaseGameStats::Event_PlayerKilledOther [%s] killed [%s]\n", v7, m_pAsString);
}


// CBaseGameStats::Event_WeaponFired  (line 626, @0x0000000002263750, libserver.so)
// calls: CBaseGameStats::StatsLog
// strings: "secondary", "primary", "CBaseGameStats::Event_WeaponFired [%s] %s weapon [%s]\n"
void __fastcall CBaseGameStats::Event_WeaponFired(
        CBaseGameStats *const this,
        CBasePlayer *pShooter,
        bool bPrimary,
        const char *pchWeaponName)
{
  const char *v6; // rbx
  const char *v7; // rax

  v6 = "primary";
  if ( !bPrimary )
    v6 = "secondary";
  v7 = (*(pShooter->_vptr_IHandleEntity + 106))(pShooter);
  CBaseGameStats::StatsLog(this, "CBaseGameStats::Event_WeaponFired [%s] %s weapon [%s]\n", v7, v6, pchWeaponName);
}


// CBaseGameStats::Event_WeaponHit  (line 631, @0x00000000022637b0, libserver.so)
// calls: CBaseGameStats::StatsLog
// strings: "secondary", "primary", "CBaseGameStats::Event_WeaponHit [%s] %s weapon [%s] damage [%f]\n"
void __fastcall CBaseGameStats::Event_WeaponHit(
        CBaseGameStats *const this,
        CBasePlayer *pShooter,
        bool bPrimary,
        const char *pchWeaponName,
        const CTakeDamageInfo *const info)
{
  const char *v7; // rbx
  __int64 v8; // rax
  double m_flDamage; // [rsp+8h] [rbp-28h]

  v7 = "primary";
  if ( !bPrimary )
    v7 = "secondary";
  m_flDamage = info->m_flDamage;
  v8 = (*(pShooter->_vptr_IHandleEntity + 106))(pShooter);
  CBaseGameStats::StatsLog(
    this,
    "CBaseGameStats::Event_WeaponHit [%s] %s weapon [%s] damage [%f]\n",
    v8,
    v7,
    pchWeaponName,
    m_flDamage);
}


// CBaseGameStats::Event_PlayerEnteredGodMode  (line 636, @0x0000000002263820, libserver.so)
// calls: CBaseGameStats::StatsLog
// strings: "CBaseGameStats::Event_PlayerEnteredGodMode [%s] entered GOD mode\n"
void __fastcall CBaseGameStats::Event_PlayerEnteredGodMode(CBaseGameStats *const this, CBasePlayer *pBasePlayer)
{
  const char *v3; // rax

  v3 = (*(pBasePlayer->_vptr_IHandleEntity + 106))(pBasePlayer);
  CBaseGameStats::StatsLog(this, "CBaseGameStats::Event_PlayerEnteredGodMode [%s] entered GOD mode\n", v3);
}


// CBaseGameStats::Event_PlayerEnteredNoClip  (line 641, @0x0000000002263860, libserver.so)
// calls: CBaseGameStats::StatsLog
// strings: "CBaseGameStats::Event_PlayerEnteredNoClip [%s] entered NOCLIPe\n"
void __fastcall CBaseGameStats::Event_PlayerEnteredNoClip(CBaseGameStats *const this, CBasePlayer *pBasePlayer)
{
  const char *v3; // rax

  v3 = (*(pBasePlayer->_vptr_IHandleEntity + 106))(pBasePlayer);
  CBaseGameStats::StatsLog(this, "CBaseGameStats::Event_PlayerEnteredNoClip [%s] entered NOCLIPe\n", v3);
}


// CBaseGameStats::Event_DecrementPlayerEnteredNoClip  (line 646, @0x00000000022638a0, libserver.so)
// calls: CBaseGameStats::StatsLog
// strings: "CBaseGameStats::Event_DecrementPlayerEnteredNoClip [%s] decrementing NOCLIPe\n"
void __fastcall CBaseGameStats::Event_DecrementPlayerEnteredNoClip(
        CBaseGameStats *const this,
        CBasePlayer *pBasePlayer)
{
  const char *v3; // rax

  v3 = (*(pBasePlayer->_vptr_IHandleEntity + 106))(pBasePlayer);
  CBaseGameStats::StatsLog(this, "CBaseGameStats::Event_DecrementPlayerEnteredNoClip [%s] decrementing NOCLIPe\n", v3);
}


// CBaseGameStats::Event_IncrementCountedStatistic  (line 651, @0x00000000022638e0, libserver.so)
// calls: CBaseGameStats::StatsLog
// strings: "Incrementing %s by %f at pos (%d, %d, %d)\n"
void __fastcall CBaseGameStats::Event_IncrementCountedStatistic(
        CBaseGameStats *const this,
        const Vector *const vecAbsOrigin,
        const char *pchStatisticName,
        float flIncrementAmount)
{
  CBaseGameStats::StatsLog(
    this,
    "Incrementing %s by %f at pos (%d, %d, %d)\n",
    pchStatisticName,
    vecAbsOrigin->x,
    vecAbsOrigin->y,
    vecAbsOrigin->z,
    flIncrementAmount);
}


// CBaseGameStats::UploadStatsFileNOW  (line 656, @0x000000000226cae0, libserver.so)  // inlines: CRegistryContainer, Registry_WriteInt, Release, StatsTrackingIsFullyEnabled, WriteInt, ~CRegistryContainer, ~CUtlBuffer, ~CUtlMemory
// calls: StatsTrackingIsFullyEnabled, Plat_FloatTime, InstanceRegistry, ReleaseInstancedRegistry, CUtlBuffer::CUtlBuffer, CUtlMemory<unsigned char, int>::Purge, _Unwind_Resume
// strings: "Steam"
// globals: gamestats
bool __fastcall CBaseGameStats::UploadStatsFileNOW(CBaseGameStats *const this)
{
  bool result; // al
  __int64 (__fastcall *v3)(IBaseFileSystem *, __int64, char *); // r12
  __int64 v4; // rax
  int v5; // r14d
  __int64 v6; // r15
  IRegistry *v7; // rax
  IRegistry *v8; // r12
  void (__fastcall *v9)(IBaseFileSystem *, __int64, char *, __int64 *, _QWORD, _QWORD, _QWORD); // r14
  __int64 v10; // rax
  char v11; // al
  bool v12; // [rsp+Ch] [rbp-8Ch]
  __int64 v13; // [rsp+10h] [rbp-88h] BYREF
  CUtlBuffer buf; // [rsp+18h] [rbp-80h]

  if ( !CBGSDriver.m_bEnabled )
    return 0;
  if ( !StatsTrackingIsFullyEnabled()
    || (*(this->_vptr_CBaseGameStats + 14))(this) == 0
    || (*gamestats->_vptr_CBaseGameStats)(gamestats) == 0 )
  {
    return 0;
  }
  v3 = *(filesystem->_vptr_IBaseFileSystem + 10);
  v4 = (*(gamestats->_vptr_CBaseGameStats + 16))(gamestats);
  result = v3(&filesystem->IBaseFileSystem, v4, "MOD");
  if ( result )
  {
    v5 = Plat_FloatTime();
    CBGSDriver.m_tLastUpload = v5;
    v6 = (*(this->_vptr_CBaseGameStats + 17))(this);
    v7 = InstanceRegistry("Steam");
    v8 = v7;
    if ( v7 != 0 )
    {
      (*(v7->_vptr_IRegistry + 5))(v7, v6, v5);
      ReleaseInstancedRegistry(v8);
    }
    CUtlBuffer::CUtlBuffer(&v13, 0, 0, 0);
    v9 = *(filesystem->_vptr_IBaseFileSystem + 14);
    v10 = (*(this->_vptr_CBaseGameStats + 16))(this);
    v9(&filesystem->IBaseFileSystem, v10, "MOD", &v13, 0, 0, 0);
    if ( buf.m_Memory.m_nGrowSize != 0 && g_pUploadGameStats != 0 )
      v11 = (*(*g_pUploadGameStats + 88LL))(g_pUploadGameStats, "", 1, buf.m_Memory.m_nGrowSize, v13);
    else
      v11 = 0;
    v12 = v11;
    CUtlMemory<unsigned char,int>::Purge(&v13);
    return v12;
  }
  return result;
}


// CBaseGameStats::LoadingEvent_PlayerIDDifferentThanLoadedStats  (line 697, @0x0000000002263920, libserver.so)
// calls: CBaseGameStats::StatsLog
// strings: "CBaseGameStats::LoadingEvent_PlayerIDDifferentThanLoadedStats\n"
void __fastcall CBaseGameStats::LoadingEvent_PlayerIDDifferentThanLoadedStats(CBaseGameStats *const this)
{
  CBaseGameStats::StatsLog(this, "CBaseGameStats::LoadingEvent_PlayerIDDifferentThanLoadedStats\n");
}


// CBaseGameStats::LoadFromFile  (line 703, @0x0000000002279650, libserver.so)  // inlines: Clear, GetInt, GetShort, GetType<short int>, GetTypeBin<short int>, GetTypeText<short int>, LowLevelByteSwap<short int>, PeekGet, StringToNumber<short int>, SwapBufferToTargetEndian<short int>, V_memcpy, memcpy, operator[], ~CUtlBuffer, ~CUtlMemory
// calls: CUtlBuffer::CUtlBuffer, CUtlBuffer::CheckArbitraryPeekGet, CUtlBuffer::Get, V_stricmp_fast, BasicGameStats_t::ParseFromBuffer, CUtlMemory<unsigned char, int>::Purge, CBaseGameStats::StatsLog, CUtlBuffer::CheckGet, V_strtoi64, CUtlBuffer::GetType<int>, BasicGameStatsRecord_t::Clear, CUtlDict<BasicGameStatsRecord_t, short unsigned int>::Purge (15 total)
// strings: "gamestats.log", "Loading stats from '%s'\n", "Userid changed, clearing stats file\n"
// globals: gamestats, s_szPseudoUniqueID
bool __fastcall CBaseGameStats::LoadFromFile(CBaseGameStats *const this)
{
  unsigned __int8 (__fastcall *v2)(IBaseFileSystem *, __int64, char *); // r12
  __int64 v3; // rax
  __int64 (__fastcall *v4)(IBaseFileSystem *, __int64, char *, CUtlBuffer *, _QWORD, _QWORD, _QWORD); // r13
  __int64 v5; // rax
  char v6; // r13
  int v7; // r15d
  void (__fastcall *v9)(IFileSystem *, __int64, char *, char *, __int64, _QWORD, _QWORD); // r13
  __int64 v10; // rax
  int m_Get; // eax
  unsigned __int8 *v12; // r15
  __int16 v13; // ax
  int *p_dest; // rdx
  CBaseGameStats *v15; // rbx
  BasicGameStatsRecord_t *v16; // rdi
  void (__fastcall *v17)(IFileSystem *, __int64, char *); // r13
  __int64 v18; // rax
  CBaseGameStats *v19; // rbx
  BasicGameStatsRecord_t *p_m_Summary; // rdi
  int dest; // [rsp+10h] [rbp-2A0h] BYREF
  int nIncrement; // [rsp+14h] [rbp-29Ch] BYREF
  unsigned __int8 *v23; // [rsp+18h] [rbp-298h] BYREF
  CUtlBuffer buf; // [rsp+20h] [rbp-290h] BYREF
  char fullpath[520]; // [rsp+70h] [rbp-240h] BYREF
  unsigned __int64 v26; // [rsp+278h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  v2 = *(filesystem->_vptr_IBaseFileSystem + 10);
  v3 = (*(gamestats->_vptr_CBaseGameStats + 16))(gamestats);
  if ( v2(&filesystem->IBaseFileSystem, v3, "MOD") != 0 )
  {
    v9 = *(filesystem->_vptr_IAppSystem + 23);
    v10 = (*(gamestats->_vptr_CBaseGameStats + 16))(gamestats);
    v9(filesystem, v10, "MOD", fullpath, 512, 0, 0);
    CBaseGameStats::StatsLog(this, "Loading stats from '%s'\n", fullpath);
  }
  CUtlBuffer::CUtlBuffer(&buf, 0, 0, 0);
  v4 = *(filesystem->_vptr_IBaseFileSystem + 14);
  v5 = (*(gamestats->_vptr_CBaseGameStats + 16))(gamestats);
  v6 = v4(&filesystem->IBaseFileSystem, v5, "MOD", &buf, 0, 0, 0);
  if ( v6 == 0 )
  {
    (*(filesystem->_vptr_IAppSystem + 25))(filesystem, "gamestats.log", "MOD");
    goto LABEL_17;
  }
  if ( (buf.m_Flags & 1) != 0 )
  {
    nIncrement = 128;
    v7 = 0;
    if ( !CUtlBuffer::CheckArbitraryPeekGet(&buf, 0, &nIncrement) )
      goto LABEL_6;
    v12 = &buf.m_Memory.m_pMemory[buf.m_Get - buf.m_nOffset];
    v23 = v12;
    v13 = V_strtoi64(v12, &v23, 10);
    LOWORD(dest) = v13;
    if ( v23 != v12 )
      buf.m_Get += v23 - v12;
    v7 = v13;
    if ( v13 > 6 )
      goto LABEL_17;
  }
  else
  {
    if ( CUtlBuffer::CheckGet(&buf, 2) )
    {
      if ( (*&buf.m_Byteswap & 1) != 0 )
      {
        m_Get = buf.m_Get;
        p_dest = &buf.m_Memory.m_pMemory[buf.m_Get - buf.m_nOffset];
        if ( p_dest == 0 )
          p_dest = &dest;
        LOWORD(v23) = dest;
        LOBYTE(v23) = *(p_dest + 1);
        BYTE1(v23) = *p_dest;
        v7 = v23;
      }
      else
      {
        m_Get = buf.m_Get;
        v7 = *&buf.m_Memory.m_pMemory[buf.m_Get - buf.m_nOffset];
      }
      buf.m_Get = m_Get + 2;
LABEL_6:
      if ( v7 <= 6 )
        goto LABEL_7;
LABEL_17:
      v6 = 0;
      goto LABEL_18;
    }
    v7 = 0;
  }
LABEL_7:
  CBGSDriver.m_iLoadedVersion = v7;
  CUtlBuffer::Get(&buf, CBGSDriver.m_szLoadedUserID, 16);
  CBGSDriver.m_szLoadedUserID[16] = 0;
  if ( s_szPseudoUniqueID[0] == 0 )
    goto LABEL_18;
  v6 = 1;
  if ( V_stricmp_fast(CBGSDriver.m_szLoadedUserID, s_szPseudoUniqueID) != 0 )
  {
    v17 = *(filesystem->_vptr_IAppSystem + 25);
    v18 = (*(gamestats->_vptr_CBaseGameStats + 16))(gamestats);
    v17(filesystem, v18, "MOD");
    (*(filesystem->_vptr_IAppSystem + 25))(filesystem, "gamestats.log", "MOD");
    Warning("Userid changed, clearing stats file\n");
    v19 = gamestats;
    CBGSDriver.m_szLoadedUserID[0] = 0;
    CBGSDriver.m_iLoadedVersion = -1;
    p_m_Summary = &gamestats->m_BasicStats.m_Summary;
    gamestats->m_BasicStats.m_nSecondsToCompleteGame = 0;
    BasicGameStatsRecord_t::Clear(p_m_Summary);
    CUtlDict<BasicGameStatsRecord_t,unsigned short>::Purge(&v19->m_BasicStats.m_MapTotals);
    (*(gamestats->_vptr_CBaseGameStats + 39))(gamestats);
    v6 = 0;
  }
  if ( v7 != 6 )
  {
    v15 = gamestats;
    v16 = &gamestats->m_BasicStats.m_Summary;
    gamestats->m_BasicStats.m_nSecondsToCompleteGame = 0;
    BasicGameStatsRecord_t::Clear(v16);
    CUtlDict<BasicGameStatsRecord_t,unsigned short>::Purge(&v15->m_BasicStats.m_MapTotals);
    goto LABEL_17;
  }
  if ( *&buf.m_Memory.m_pMemory[buf.m_Get - buf.m_nOffset] == -17973521 )
  {
    CUtlBuffer::GetType<int>(&buf, &dest);
  }
  else if ( !BasicGameStats_t::ParseFromBuffer(&gamestats->m_BasicStats, &buf, 6) )
  {
    this->m_BasicStats.m_nSecondsToCompleteGame = 0;
    BasicGameStatsRecord_t::Clear(&this->m_BasicStats.m_Summary);
    CUtlDict<BasicGameStatsRecord_t,unsigned short>::Purge(&this->m_BasicStats.m_MapTotals);
  }
  if ( buf.m_Put != buf.m_Get )
    (*(gamestats->_vptr_CBaseGameStats + 38))(gamestats, &buf);
LABEL_18:
  CUtlMemory<unsigned char,int>::Purge(&buf.m_Memory);
  return v6;
}


// CBaseGameStats_Driver::Init  (line 788, @0x0000000002264180, libserver.so)  // inlines: CRegistryContainer, ReadInt, Registry_ReadInt, Release, StatsTrackingIsFullyEnabled, V_strncat<long unsigned int>, V_strncpy<long unsigned int>, ~CRegistryContainer
// calls: _V_strncpy, V_strlower_fast, _V_strncat, CommandLine, CBaseGameStats_Driver::ResetData, StatsTrackingIsFullyEnabled, InstanceRegistry, ReleaseInstancedRegistry, __stack_chk_fail, _Unwind_Resume
// strings: "_gamestats.dat", "GameStatsUpload_", "-gamestatsloggingtofile", "-gamestatslogging", "Steam"
// globals: gamestats, s_szSaveFileName, s_szStatUploadRegistryKeyName, s_szPseudoUniqueID
bool __fastcall CBaseGameStats_Driver::Init(CBaseGameStats_Driver *const this)
{
  __int64 v2; // rax
  CBaseGameStats *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rax
  CBaseGameStats *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  char v11; // al
  __int64 v13; // r13
  IRegistry *v14; // rax
  IRegistry *v15; // rbx
  int v16; // r13d
  time_t v17; // rax
  CBaseGameStats *v18; // rdi
  char szLoweredGameDir[264]; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v20; // [rsp+108h] [rbp-28h]

  v20 = __readfsqword(0x28u);
  v2 = (*(g_pApplication->_vptr_IAppSystem + 26))(g_pApplication);
  _V_strncpy(szLoweredGameDir, v2, 256);
  V_strlower_fast(szLoweredGameDir);
  gamestats = (*(gamestats->_vptr_CBaseGameStats + 11))(gamestats, gamestats, szLoweredGameDir);
  _V_strncpy(s_szSaveFileName, szLoweredGameDir, 256);
  _V_strncat(s_szSaveFileName, "_gamestats.dat", 256, 0xFFFFFFFFLL);
  _V_strncpy(s_szStatUploadRegistryKeyName, "GameStatsUpload_", 256);
  _V_strncat(s_szStatUploadRegistryKeyName, szLoweredGameDir, 256, 0xFFFFFFFFLL);
  v3 = gamestats;
  v6 = CommandLine(v4, v5);
  *(v3 + 104) = (2 * ((*(*v6 + 64LL))(v6, "-gamestatsloggingtofile") != 0)) | *(v3 + 104) & 0xFD;
  v7 = gamestats;
  v10 = CommandLine(v8, v9);
  *(v7 + 104) = ((*(*v10 + 64LL))(v10, "-gamestatslogging") != 0) | *(v7 + 104) & 0xFE;
  if ( g_pUploadGameStats != 0 )
  {
    v11 = (*(*g_pUploadGameStats + 112LL))(g_pUploadGameStats);
    this->m_bEnabled = v11;
    if ( v11 != 0 )
      (*(*g_pUploadGameStats + 120LL))(g_pUploadGameStats, s_szPseudoUniqueID, 20);
  }
  CBaseGameStats_Driver::ResetData(this);
  if ( CBGSDriver.m_bEnabled && StatsTrackingIsFullyEnabled() )
  {
    v13 = (*(gamestats->_vptr_CBaseGameStats + 17))(gamestats);
    v14 = InstanceRegistry("Steam");
    v15 = v14;
    if ( v14 != 0 )
    {
      v16 = (*(v14->_vptr_IRegistry + 4))(v14, v13, 0);
      ReleaseInstancedRegistry(v15);
      v17 = v16;
    }
    else
    {
      v17 = 0;
    }
    v18 = gamestats;
    this->m_tLastUpload = v17;
    (*(v18->_vptr_CBaseGameStats + 40))(v18);
  }
  if ( s_szPseudoUniqueID[0] != 0 )
  {
    (*(gamestats->_vptr_CBaseGameStats + 4))(gamestats);
    if ( (*gamestats->_vptr_CBaseGameStats)(gamestats) != 0 )
    {
      if ( (*(gamestats->_vptr_CBaseGameStats + 43))(gamestats) != 0 )
        (*(gamestats->_vptr_CBaseGameStats + 41))(gamestats, 0);
      if ( (*(gamestats->_vptr_CBaseGameStats + 48))(gamestats) != 0 )
        (*(gamestats->_vptr_CBaseGameStats + 42))(gamestats);
    }
  }
  else
  {
    this->m_bEnabled = 0;
  }
  return 1;
}


// CBaseGameStats_Driver::Shutdown  (line 856, @0x000000000226cfa0, libserver.so)  // inlines: FreeData, ~CGamestatsData
// calls: KeyValues::deleteThis, operator delete, CBaseGameStats_Driver::CollectData, CBaseGameStats_Driver::SendData
// globals: gamestats, g_LogFileHandle
void __fastcall CBaseGameStats_Driver::Shutdown(CBaseGameStats_Driver *const this)
{
  bool v2; // zf
  int (**vptr_CBaseGameStats)(...); // rax
  CGamestatsData *m_pGamestatsData; // rbx

  this->m_bShuttingDown = 1;
  (*(gamestats->_vptr_CBaseGameStats + 5))(gamestats);
  v2 = (*gamestats->_vptr_CBaseGameStats)(gamestats) == 0;
  vptr_CBaseGameStats = gamestats->_vptr_CBaseGameStats;
  if ( v2 )
  {
    if ( vptr_CBaseGameStats[3]() != 0 )
    {
      CBaseGameStats_Driver::CollectData(this, StatSendType_t::STATSEND_APPSHUTDOWN);
      CBaseGameStats_Driver::SendData(this);
    }
  }
  else
  {
    if ( vptr_CBaseGameStats[44]() != 0 )
      (*(gamestats->_vptr_CBaseGameStats + 41))(gamestats, 0);
    if ( (*(gamestats->_vptr_CBaseGameStats + 49))(gamestats) != 0 )
      (*(gamestats->_vptr_CBaseGameStats + 42))(gamestats);
  }
  if ( g_LogFileHandle != 0 )
  {
    (*(filesystem->_vptr_IBaseFileSystem + 3))(&filesystem->IBaseFileSystem);
    g_LogFileHandle = 0;
  }
  m_pGamestatsData = this->m_pGamestatsData;
  if ( m_pGamestatsData != 0 )
  {
    if ( m_pGamestatsData->m_pKVData != 0 )
    {
      KeyValues::deleteThis(m_pGamestatsData->m_pKVData);
      m_pGamestatsData->m_pKVData = 0;
    }
    operator delete(m_pGamestatsData);
    this->m_pGamestatsData = 0;
  }
}


// CBaseGameStats_Driver::PossibleMapChange  (line 897, @0x00000000022639a0, libserver.so)  // inlines: CUtlString, String, ~CUtlString
// calls: CUtlString::Get, V_stricmp_fast, CUtlString::Set, CUtlString::operator=, CUtlString::FreeMemoryBlock, _Unwind_Resume
// callers: CBaseGameStats_Driver::GameInit, CBaseGameStats_Driver::RestoreGame
// globals: gamestats
void __fastcall CBaseGameStats_Driver::PossibleMapChange(CBaseGameStats_Driver *const this)
{
  CUtlString *p_m_PrevMapName; // r12
  const char *mapname; // r13
  const char *v3; // rax
  const char *v4; // rax
  void (__fastcall *v5)(CBaseGameStats *, const char *, const char *); // r12
  const char *v6; // rbx
  const char *v7; // rax
  CUtlString PrevMapBackup; // [rsp+0h] [rbp-30h] BYREF

  p_m_PrevMapName = &this->m_PrevMapName;
  mapname = gpGlobals->mapname;
  v3 = CUtlString::Get(&this->m_PrevMapName);
  if ( V_stricmp_fast(v3, mapname) != 0 )
  {
    PrevMapBackup.m_pString = 0;
    v4 = CUtlString::Get(p_m_PrevMapName);
    CUtlString::Set(&PrevMapBackup, v4);
    CUtlString::operator=(p_m_PrevMapName, gpGlobals->mapname);
    v5 = *(gamestats->_vptr_CBaseGameStats + 6);
    v6 = gpGlobals->mapname;
    v7 = CUtlString::Get(&PrevMapBackup);
    v5(gamestats, v7, v6);
    if ( (*gamestats->_vptr_CBaseGameStats)(gamestats) != 0 )
    {
      if ( (*(gamestats->_vptr_CBaseGameStats + 45))(gamestats) != 0 )
        (*(gamestats->_vptr_CBaseGameStats + 41))(gamestats, 0);
      if ( (*(gamestats->_vptr_CBaseGameStats + 50))(gamestats) != 0 )
        (*(gamestats->_vptr_CBaseGameStats + 42))(gamestats);
    }
    if ( PrevMapBackup.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&PrevMapBackup);
  }
}


// CBaseGameStats_Driver::GameInit  (line 925, @0x0000000002263ae0, libserver.so)  // inlines: CRC32_ProcessSingleBuffer, GetInt
// calls: V_stricmp_fast, CBaseGameStats_Driver::PossibleMapChange, CRC32_Init, CRC32_ProcessBuffer, CRC32_Final, V_snprintf
// strings: "hostip", "hostport", "H:%x"
// globals: s_szPseudoUniqueID, gamestats
void __fastcall CBaseGameStats_Driver::GameInit(CBaseGameStats_Driver *const this, const EventGameInit_t *const msg)
{
  CBaseGameStats *v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rdx
  int v6; // edx
  CRC32_t pulCRC; // [rsp+Ch] [rbp-34h] BYREF
  int crcInput[12]; // [rsp+10h] [rbp-30h] BYREF

  this->m_bInLevel = 1;
  this->m_bFirstLevel = 0;
  if ( V_stricmp_fast(s_szPseudoUniqueID, "unknown") == 0 )
  {
    v4 = (*(*g_pCVar + 144LL))(g_pCVar, "hostip");
    v5 = (*(*g_pCVar + 144LL))(g_pCVar, "hostport");
    if ( v5 != 0 && v4 != 0 )
    {
      v6 = *(*(v5 + 56) + 88LL);
      crcInput[0] = *(*(v4 + 56) + 88LL);
      crcInput[1] = v6;
      if ( crcInput[0] != 0 && v6 != 0 )
      {
        CRC32_Init(&pulCRC);
        CRC32_ProcessBuffer(&pulCRC, crcInput, 8);
        CRC32_Final(&pulCRC);
        V_snprintf(s_szPseudoUniqueID, 20, "H:%x", pulCRC);
      }
    }
  }
  CBaseGameStats_Driver::PossibleMapChange(this);
  this->m_flPauseStartTime = 0.0;
  v3 = gamestats;
  this->m_flLevelStartTime = gpGlobals->realtime;
  (*(v3->_vptr_CBaseGameStats + 7))(v3);
  if ( (*gamestats->_vptr_CBaseGameStats)(gamestats) != 0 )
  {
    if ( (*(gamestats->_vptr_CBaseGameStats + 46))(gamestats) != 0 )
      (*(gamestats->_vptr_CBaseGameStats + 41))(gamestats, 0);
    if ( (*(gamestats->_vptr_CBaseGameStats + 51))(gamestats) != 0 )
      (*(gamestats->_vptr_CBaseGameStats + 42))(gamestats);
  }
}


// CBaseGameStats_Driver::GameDeactivate  (line 969, @0x000000000226d0d0, libserver.so)
// calls: CBaseGameStats_Driver::CollectData, CBaseGameStats_Driver::SendData, Warning
// strings: "EVENT_LEVELSHUTDOWN:  with negative elapsed time (rt %f starttime %f)\n"
// globals: gamestats
void __fastcall CBaseGameStats_Driver::GameDeactivate(
        CBaseGameStats_Driver *const this,
        const EventGameDeactivate_t *const msg)
{
  float m_flLevelStartTime; // xmm1_4
  float v4; // xmm0_4
  float m_flTotalTimeInLevels; // xmm1_4
  CBaseGameStats *v6; // rdi

  if ( this->m_bInLevel && gpGlobals->eLoadType != MapLoadType_t::MapLoad_Background )
  {
    m_flLevelStartTime = this->m_flLevelStartTime;
    v4 = gpGlobals->realtime - m_flLevelStartTime;
    if ( v4 < 0.0 )
    {
      Warning(
        "EVENT_LEVELSHUTDOWN:  with negative elapsed time (rt %f starttime %f)\n",
        msg,
        gpGlobals->realtime,
        m_flLevelStartTime);
      v4 = 0.0;
    }
    m_flTotalTimeInLevels = this->m_flTotalTimeInLevels;
    ++this->m_iNumLevels;
    v6 = gamestats;
    this->m_flTotalTimeInLevels = m_flTotalTimeInLevels + v4;
    (*(v6->_vptr_CBaseGameStats + 8))(v6, msg);
    if ( (*gamestats->_vptr_CBaseGameStats)(gamestats) != 0 )
    {
      if ( (*(gamestats->_vptr_CBaseGameStats + 47))(gamestats) != 0 )
        (*(gamestats->_vptr_CBaseGameStats + 41))(gamestats, 1);
      if ( (*(gamestats->_vptr_CBaseGameStats + 52))(gamestats) != 0 )
        (*(gamestats->_vptr_CBaseGameStats + 42))(gamestats);
    }
    else
    {
      CBaseGameStats_Driver::CollectData(this, StatSendType_t::STATSEND_LEVELSHUTDOWN);
      if ( (*(gamestats->_vptr_CBaseGameStats + 2))(gamestats) != 0 )
        CBaseGameStats_Driver::SendData(this);
    }
    this->m_bInLevel = 0;
  }
}


// CBaseGameStats_Driver::SaveGame  (line 1014, @0x00000000022540c0, libserver.so)
// globals: gamestats
void __fastcall CBaseGameStats_Driver::SaveGame(CBaseGameStats_Driver *const this, const EventSaveGame_t *const msg)
{
  (*(gamestats->_vptr_CBaseGameStats + 9))(gamestats, msg);
}


// CBaseGameStats_Driver::CollectData  (line 1020, @0x0000000002263cb0, libserver.so)  // inlines: FreeData, V_FileBase<long unsigned int>, V_strncpy<long unsigned int>, ~CGamestatsData
// calls: KeyValues::deleteThis, operator delete, KeyValues::SetInt, DOTAGameManager, _V_FileBase, KeyValues::SetString, _V_strncpy, KeyValues::operator new, KeyValues::KeyValues, KeyValues::AddSubKey, __stack_chk_fail, KeyValues::operator delete (13 total)
// callers: CBaseGameStats_Driver::Shutdown, CBaseGameStats_Driver::GameDeactivate
// strings: "appid", "CustomGameName"
// globals: gamestats
void __fastcall CBaseGameStats_Driver::CollectData(CBaseGameStats_Driver *const this, StatSendType_t sendType)
{
  CGamestatsData *v4; // rbx
  CGamestatsData *m_pGamestatsData; // r12
  KeyValues *m_pKVData; // r12
  int v7; // eax
  CDOTAGameManager *v8; // rax
  char *v9; // rdx
  KeyValues *v10; // r15
  KeyValues *v11; // rdi
  char pTemp[260]; // [rsp+0h] [rbp-250h] BYREF
  char szMap[264]; // [rsp+110h] [rbp-140h] BYREF
  unsigned __int64 v14; // [rsp+218h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  v4 = (*(*engine + 584LL))(engine);
  if ( v4 != 0 )
  {
    m_pGamestatsData = this->m_pGamestatsData;
    if ( m_pGamestatsData != 0 )
    {
      if ( m_pGamestatsData->m_pKVData != 0 )
      {
        KeyValues::deleteThis(m_pGamestatsData->m_pKVData);
        m_pGamestatsData->m_pKVData = 0;
      }
      operator delete(m_pGamestatsData);
      this->m_pGamestatsData = 0;
    }
  }
  else
  {
    v4 = this->m_pGamestatsData;
  }
  m_pKVData = v4->m_pKVData;
  v7 = (*(*engine + 120LL))(engine);
  KeyValues::SetInt(m_pKVData, "appid", v7);
  if ( DOTAGameManager() == 0 || (v8 = DOTAGameManager()) == -450LL )
  {
    v9 = "";
  }
  else
  {
    _V_FileBase(v8->m_szAddOnGame, pTemp, 260);
    v9 = pTemp;
  }
  KeyValues::SetString(m_pKVData, "CustomGameName", v9);
  if ( sendType == StatSendType_t::STATSEND_LEVELSHUTDOWN )
  {
    memset(szMap, 0, 261);
    _V_strncpy(szMap, gpGlobals->mapname, 261);
    if ( szMap[0] == 0 )
      return;
    v10 = KeyValues::operator new(0x14u);
    KeyValues::KeyValues(v10, "map");
    v11 = m_pKVData;
    m_pKVData = v10;
    KeyValues::AddSubKey(v11, v10);
    KeyValues::SetString(v10, "mapname", szMap);
  }
  v4->m_bHaveData |= (*(gamestats->_vptr_CBaseGameStats + 1))(gamestats, m_pKVData, sendType);
}


// CBaseGameStats_Driver::SendData  (line 1141, @0x000000000226cca0, libserver.so)  // inlines: GetString, V_AppendSlash<int>, V_strlen, V_strncat<int>, ~CUtlBuffer, ~CUtlMemory
// calls: CUtlBuffer::CUtlBuffer, KeyValues::RecursiveSaveToFile, CommandLine, _V_strncat, _V_AppendSlash, Plat_GetLocalTime, V_snprintf, CBaseGameStats_Driver::ResetData, CUtlMemory<unsigned char, int>::Purge, __stack_chk_fail, _Unwind_Resume
// callers: CBaseGameStats_Driver::Shutdown, CBaseGameStats_Driver::GameDeactivate
// strings: "FCVAR_NEVER_AS_STRING", "-gamestatsfileoutputonly", "%s__%2d_%3d_%2d_%2d_%2d.txt"
// globals: s_szPseudoUniqueID
void __fastcall CBaseGameStats_Driver::SendData(CBaseGameStats_Driver *const this)
{
  CGamestatsData *m_pGamestatsData; // rax
  __int64 v3; // rdi
  __int64 v4; // rsi
  char *m_pszString; // r13
  bool v6; // r14
  __int64 v7; // rax
  char *v8; // rdx
  int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // r15d
  tm timeinfo; // [rsp+20h] [rbp-2E0h] BYREF
  CUtlBuffer buf; // [rsp+60h] [rbp-2A0h] BYREF
  char szPathName[272]; // [rsp+B0h] [rbp-250h] BYREF
  char szFileName[264]; // [rsp+1C0h] [rbp-140h] BYREF
  unsigned __int64 v16; // [rsp+2C8h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  m_pGamestatsData = this->m_pGamestatsData;
  if ( m_pGamestatsData != 0 && m_pGamestatsData->m_bHaveData )
  {
    CUtlBuffer::CUtlBuffer(&buf, 0, 0, 1);
    KeyValues::RecursiveSaveToFile(this->m_pGamestatsData->m_pKVData, &buf, 0, 1);
    m_pszString = "FCVAR_NEVER_AS_STRING";
    v6 = gamestats_file_output_directory.m_Value.m_StringLength > 1;
    if ( (gamestats_file_output_directory.m_nFlags & 0x1000) == 0 )
    {
      m_pszString = "";
      if ( gamestats_file_output_directory.m_pParent->m_Value.m_pszString != 0 )
        m_pszString = gamestats_file_output_directory.m_pParent->m_Value.m_pszString;
    }
    v7 = CommandLine(v3, v4);
    if ( (*(*v7 + 64LL))(v7, "-gamestatsfileoutputonly") != 0 )
    {
      if ( !v6 )
      {
        strcpy(szFileName, "gamestats.dat");
        (*(filesystem->_vptr_IBaseFileSystem + 15))(&filesystem->IBaseFileSystem, szFileName, "MOD", &buf);
LABEL_14:
        CBaseGameStats_Driver::ResetData(this);
        CUtlMemory<unsigned char,int>::Purge(&buf.m_Memory);
        return;
      }
    }
    else if ( !v6 )
    {
      if ( g_pUploadGameStats != 0 )
        (*(*g_pUploadGameStats + 88LL))(g_pUploadGameStats, "", 1, buf.m_Put, buf.m_Memory.m_pMemory);
      goto LABEL_14;
    }
    memset(szPathName, 0, 260);
    _V_strncat(szPathName, m_pszString, 260, 0xFFFFFFFFLL);
    _V_AppendSlash(szPathName, 260, 47);
    v8 = szPathName;
    do
    {
      v9 = *v8;
      v8 += 4;
      v10 = ~v9 & (v9 - 16843009) & 0x80808080;
    }
    while ( v10 == 0 );
    if ( (~v9 & (v9 - 16843009) & 0x8080) == 0 )
    {
      LOBYTE(v10) = (~v9 & (v9 - 16843009) & 0x80808080) >> 16;
      LODWORD(v8) = v8 + 2;
    }
    memset(szFileName, 0, 260);
    v11 = v8 - (__CFADD__(v10, v10) + 3) - szPathName;
    Plat_GetLocalTime(&timeinfo);
    V_snprintf(
      szFileName,
      260,
      "%s__%2d_%3d_%2d_%2d_%2d.txt",
      s_szPseudoUniqueID,
      timeinfo.tm_year % 100,
      timeinfo.tm_yday,
      timeinfo.tm_hour,
      timeinfo.tm_min,
      timeinfo.tm_sec);
    _V_strncat(&szPathName[v11], szFileName, 260 - v11, 0xFFFFFFFFLL);
    (*(filesystem->_vptr_IBaseFileSystem + 15))(&filesystem->IBaseFileSystem, szPathName, 0, &buf);
    goto LABEL_14;
  }
}


// CBaseGameStats_Driver::AddBaseDataForSend  (line 1196, @0x0000000002263ea0, libserver.so)
bool __fastcall CBaseGameStats_Driver::AddBaseDataForSend(
        CBaseGameStats_Driver *const this,
        KeyValues *pKV,
        StatSendType_t sendType)
{
  return 0;
}


// CBaseGameStats_Driver::ResetData  (line 1300, @0x0000000002263eb0, libserver.so)  // inlines: AllocData, FreeData, ~CGamestatsData
// calls: KeyValues::deleteThis, operator delete, operator new, V_snprintf, UTIL_GetModDir, KeyValues::operator new, KeyValues::KeyValues, KeyValues::SetInt, KeyValues::SetString, Plat_GetOSType, __stack_chk_fail, _Unwind_Resume (13 total)
// callers: CBaseGameStats_Driver::Init, CBaseGameStats_Driver::SendData
// strings: "gamestats_", "IsPc", "srcid", "OSType", "Vulkan", "GraphicsAPI" (10 total)
// globals: s_szPseudoUniqueID, jpt_226405D
void __fastcall CBaseGameStats_Driver::ResetData(CBaseGameStats_Driver *const this)
{
  CGamestatsData *m_pGamestatsData; // r12
  CGamestatsData *v3; // r12
  KeyValues *v4; // r14
  KeyValues *m_pKVData; // rbx
  int OSType; // eax
  char setName[10]; // [rsp+0h] [rbp-B0h] BYREF
  char v8[126]; // [rsp+Ah] [rbp-A6h] BYREF
  unsigned __int64 v9; // [rsp+88h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  if ( (*(*engine + 584LL))(engine) == 0 )
  {
    m_pGamestatsData = this->m_pGamestatsData;
    if ( m_pGamestatsData != 0 )
    {
      if ( m_pGamestatsData->m_pKVData != 0 )
      {
        KeyValues::deleteThis(m_pGamestatsData->m_pKVData);
        m_pGamestatsData->m_pKVData = 0;
      }
      operator delete(m_pGamestatsData);
      this->m_pGamestatsData = 0;
    }
    this->m_bBufferFull = 0;
    this->m_bDidVoiceChat = 0;
    this->m_nWriteIndex = 0;
    v3 = operator new(0x10u);
    v3->m_pKVData = 0;
    v3->m_bHaveData = 0;
    V_snprintf(setName, 128, "gamestats_");
    UTIL_GetModDir(v8, 0x76u);
    v4 = KeyValues::operator new(0x14u);
    KeyValues::KeyValues(v4, setName);
    v3->m_pKVData = v4;
    this->m_pGamestatsData = v3;
    m_pKVData = v3->m_pKVData;
    KeyValues::SetInt(v3->m_pKVData, "IsPc", 1);
    KeyValues::SetInt(m_pKVData, "version", 1);
    KeyValues::SetString(m_pKVData, "srcid", s_szPseudoUniqueID);
    KeyValues::SetString(m_pKVData, "OS", "linuxsteamrt64");
    OSType = Plat_GetOSType();
    KeyValues::SetInt(m_pKVData, "OSType", OSType);
    switch ( (*(*g_pRenderHardwareConfig + 368LL))(g_pRenderHardwareConfig) )
    {
      case 1u:
        KeyValues::SetString(m_pKVData, "GraphicsAPI", "DX9");
        break;
      case 2u:
        KeyValues::SetString(m_pKVData, "GraphicsAPI", "DX11");
        break;
      case 3u:
        KeyValues::SetString(m_pKVData, "GraphicsAPI", "GL");
        break;
      case 4u:
        KeyValues::SetString(m_pKVData, "GraphicsAPI", "360");
        break;
      case 5u:
        KeyValues::SetString(m_pKVData, "GraphicsAPI", "Empty");
        break;
      case 6u:
        KeyValues::SetString(m_pKVData, "GraphicsAPI", "Mantle");
        break;
      case 7u:
        KeyValues::SetString(m_pKVData, "GraphicsAPI", "Vulkan");
        break;
      default:
        KeyValues::SetString(m_pKVData, "GraphicsAPI", "Unknown");
        break;
    }
  }
}


// CBaseGameStats_Driver::RestoreGame  (line 1372, @0x0000000002263c90, libserver.so)
// calls: CBaseGameStats_Driver::PossibleMapChange
// globals: gamestats
void __fastcall CBaseGameStats_Driver::RestoreGame(
        CBaseGameStats_Driver *const this,
        const EventRestoreGame_t *const msg)
{
  CBaseGameStats_Driver::PossibleMapChange(this);
  (*(gamestats->_vptr_CBaseGameStats + 10))(gamestats);
}


// CBaseGameStats_Driver::FrameUpdatePostEntityThink  (line 1380, @0x0000000002254500, libserver.so)
// calls: Warning
// strings: "Game paused time showing up negative (rt %f pausestart %f)\n"
void __fastcall CBaseGameStats_Driver::FrameUpdatePostEntityThink(
        CBaseGameStats_Driver *const this,
        const EventServerPostEntityThink_t *const msg)
{
  bool v3; // r12
  float m_flPauseStartTime; // xmm1_4
  float v5; // xmm3_4
  float v6; // xmm3_4

  if ( this->m_bInLevel )
  {
    v3 = gpGlobals->frametime == 0.0;
    if ( this->m_bGamePaused != v3 )
    {
      if ( gpGlobals->frametime == 0.0 )
      {
        this->m_flPauseStartTime = gpGlobals->realtime;
      }
      else
      {
        m_flPauseStartTime = this->m_flPauseStartTime;
        if ( m_flPauseStartTime != 0.0 )
        {
          v5 = gpGlobals->realtime - m_flPauseStartTime;
          if ( v5 < 0.0 )
          {
            Warning(
              "Game paused time showing up negative (rt %f pausestart %f)\n",
              msg,
              gpGlobals->realtime,
              m_flPauseStartTime);
            v5 = 0.0;
          }
          v6 = v5 + this->m_flLevelStartTime;
          this->m_flPauseStartTime = 0.0;
          this->m_flLevelStartTime = v6;
        }
      }
      this->m_bGamePaused = v3;
    }
  }
  else
  {
    this->m_flPauseStartTime = 0.0;
  }
}


// StatsTrackingIsFullyEnabled  (line 1417, @0x0000000002257270, libserver.so)
// callers: CBaseGameStats_Driver::Init, StatsTrackingIsFullyEnabled, CBaseGameStats::UploadStatsFileNOW, CBaseGameStats::SaveToFileNOW
// globals: gamestats
bool __cdecl StatsTrackingIsFullyEnabled()
{
  return (*(gamestats->_vptr_CBaseGameStats + 13))(gamestats);
}


// StatsTrackingIsFullyEnabled  (line 1417, @0x0000000002264460, libserver.so)
// calls: StatsTrackingIsFullyEnabled
bool __cdecl StatsTrackingIsFullyEnabled()
{
  return CBGSDriver.m_bEnabled && StatsTrackingIsFullyEnabled();
}


// CBaseGameStats::Clear  (line 1422, @0x0000000002275af0, libserver.so)  // inlines: Clear
// calls: BasicGameStatsRecord_t::Clear, CUtlDict<BasicGameStatsRecord_t, short unsigned int>::Purge
// globals: gamestats
void __fastcall CBaseGameStats::Clear(CBaseGameStats *const this)
{
  CBaseGameStats *v1; // rbx
  BasicGameStatsRecord_t *p_m_Summary; // rdi

  v1 = gamestats;
  p_m_Summary = &gamestats->m_BasicStats.m_Summary;
  gamestats->m_BasicStats.m_nSecondsToCompleteGame = 0;
  BasicGameStatsRecord_t::Clear(p_m_Summary);
  CUtlDict<BasicGameStatsRecord_t,unsigned short>::Purge(&v1->m_BasicStats.m_MapTotals);
}


// OverWriteCharsWeHate  (line 1432, @0x0000000002264480, libserver.so)
void __fastcall OverWriteCharsWeHate(char *pStr)
{
  char i; // al

  for ( i = *pStr; *pStr != 0; i = *++pStr )
  {
    while ( i == 34 )
    {
LABEL_12:
      *pStr++ = 32;
      i = *pStr;
      if ( *pStr == 0 )
        return;
    }
    if ( i <= 34 )
    {
      if ( i == 13 || i == 26 || i == 10 )
        goto LABEL_12;
    }
    else if ( i == 59 || i == 92 || i == 39 )
    {
      goto LABEL_12;
    }
  }
}


// CBaseGameStats::SetSteamStatistic  (line 1453, @0x0000000002278f00, libserver.so)  // inlines: String
// calls: CUtlString::Get, BasicGameStats_t::FindOrAddRecordForMap
// callers: CBaseGameStats::Event_Init
void __fastcall CBaseGameStats::SetSteamStatistic(CBaseGameStats *const this, bool bUsingSteam)
{
  const char *v4; // rax

  if ( CBGSDriver.m_bFirstLevel )
    this->m_BasicStats.m_Summary.m_bSteam = bUsingSteam;
  if ( CBGSDriver.m_bInLevel )
  {
    v4 = CUtlString::Get(&CBGSDriver.m_PrevMapName);
    BasicGameStats_t::FindOrAddRecordForMap(&this->m_BasicStats, v4)->m_bSteam = bUsingSteam;
  }
  this->m_BasicStats.m_bSteam = bUsingSteam;
}


// CBaseGameStats::SetCyberCafeStatistic  (line 1469, @0x0000000002278f50, libserver.so)  // inlines: String
// calls: CUtlString::Get, BasicGameStats_t::FindOrAddRecordForMap
// callers: CBaseGameStats::Event_Init
void __fastcall CBaseGameStats::SetCyberCafeStatistic(CBaseGameStats *const this, bool bIsCyberCafeUser)
{
  const char *v4; // rax

  if ( CBGSDriver.m_bFirstLevel )
    this->m_BasicStats.m_Summary.m_bCyberCafe = bIsCyberCafeUser;
  if ( CBGSDriver.m_bInLevel )
  {
    v4 = CUtlString::Get(&CBGSDriver.m_PrevMapName);
    BasicGameStats_t::FindOrAddRecordForMap(&this->m_BasicStats, v4)->m_bCyberCafe = bIsCyberCafeUser;
  }
  this->m_BasicStats.m_bCyberCafe = bIsCyberCafeUser;
}


// CBaseGameStats::SetHDRStatistic  (line 1485, @0x0000000002279020, libserver.so)  // inlines: String
// calls: CUtlString::Get, BasicGameStats_t::FindOrAddRecordForMap
void __fastcall CBaseGameStats::SetHDRStatistic(CBaseGameStats *const this, bool bHDREnabled)
{
  const char *v3; // rax
  BasicGameStatsRecord_t *v4; // rax

  if ( bHDREnabled )
  {
    if ( CBGSDriver.m_bInLevel )
    {
      v3 = CUtlString::Get(&CBGSDriver.m_PrevMapName);
      v4 = BasicGameStats_t::FindOrAddRecordForMap(&this->m_BasicStats, v3);
      ++v4->m_nHDR;
      if ( !CBGSDriver.m_bFirstLevel )
        return;
    }
    else if ( !CBGSDriver.m_bFirstLevel )
    {
      return;
    }
    ++this->m_BasicStats.m_Summary.m_nHDR;
  }
}


// CBaseGameStats::SetCaptionsStatistic  (line 1502, @0x0000000002279080, libserver.so)  // inlines: String
// calls: CUtlString::Get, BasicGameStats_t::FindOrAddRecordForMap
void __fastcall CBaseGameStats::SetCaptionsStatistic(CBaseGameStats *const this, bool bClosedCaptionsEnabled)
{
  const char *v3; // rax
  BasicGameStatsRecord_t *v4; // rax

  if ( CBGSDriver.m_bInLevel )
  {
    v3 = CUtlString::Get(&CBGSDriver.m_PrevMapName);
    v4 = BasicGameStats_t::FindOrAddRecordForMap(&this->m_BasicStats, v3);
    ++v4->m_nCaptions;
  }
  if ( CBGSDriver.m_bFirstLevel )
    ++this->m_BasicStats.m_Summary.m_nCaptions;
}


// CBaseGameStats::SetSkillStatistic  (line 1516, @0x00000000022790d0, libserver.so)  // inlines: Clamp<int>, String
// calls: CUtlString::Get, BasicGameStats_t::FindOrAddRecordForMap
void __fastcall CBaseGameStats::SetSkillStatistic(CBaseGameStats *const this, int iSkillSetting)
{
  int v3; // ebx
  int v4; // eax
  const char *v5; // rax
  BasicGameStatsRecord_t *v6; // rax

  v3 = 0;
  if ( iSkillSetting > 0 )
  {
    v4 = 3;
    if ( iSkillSetting <= 3 )
      v4 = iSkillSetting;
    v3 = v4 - 1;
  }
  if ( CBGSDriver.m_bInLevel )
  {
    v5 = CUtlString::Get(&CBGSDriver.m_PrevMapName);
    v6 = BasicGameStats_t::FindOrAddRecordForMap(&this->m_BasicStats, v5);
    ++v6->m_nSkill[v3];
  }
  if ( CBGSDriver.m_bFirstLevel )
    ++this->m_BasicStats.m_Summary.m_nSkill[v3];
}


// CBaseGameStats::SetDXLevelStatistic  (line 1532, @0x00000000022644d0, libserver.so)
void __fastcall CBaseGameStats::SetDXLevelStatistic(CBaseGameStats *const this, int iDXLevel)
{
  this->m_BasicStats.m_nDXLevel = iDXLevel;
}


// CC_ResetGameStats  (line 1537, @0x0000000002263940, libserver.so)
// calls: UTIL_IsCommandIssuedByServerAdmin, CBaseGameStats::StatsLog
// strings: "CC_ResetGameStats : Server cleared game stats\n"
// globals: gamestats
void __fastcall CC_ResetGameStats(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( UTIL_IsCommandIssuedByServerAdmin() )
  {
    (*(gamestats->_vptr_CBaseGameStats + 12))(gamestats);
    (*(gamestats->_vptr_CBaseGameStats + 41))(gamestats, 0);
    CBaseGameStats::StatsLog(gamestats, "CC_ResetGameStats : Server cleared game stats\n");
  }
}


// CPointGamestatsCounter::~CPointGamestatsCounter  (line 1554, @0x000000000227c1e0, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPointGamestatsCounter::~CPointGamestatsCounter(CPointGamestatsCounter *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CPointGamestatsCounter::~CPointGamestatsCounter  (line 1554, @0x000000000227c200, libserver.so)  // inlines: ~CPointEntity, ~CPointGamestatsCounter
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPointGamestatsCounter::~CPointGamestatsCounter(CPointGamestatsCounter *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPointGamestatsCounter::GetEntityClass  (line 1556, @0x000000000227b0a0, libserver.so)
CEntityClass *__cdecl CPointGamestatsCounter::GetEntityClass()
{
  return g_pEntityCPointGamestatsCounterClass;
}


// CPointGamestatsCounter::Schema_DynamicBinding  (line 1556, @0x000000000227b0b0, libserver.so)
// globals: CPointGamestatsCounter::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointGamestatsCounter::Schema_DynamicBinding(
        const CPointGamestatsCounter *const this)
{
  return CPointGamestatsCounter::s_pSchemaBinding;
}


// CPointGamestatsCounter::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1556, @0x000000000227b0c0, libserver.so)
// globals: CPointGamestatsCounter::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointGamestatsCounter::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPointGamestatsCounter::CEntityInstanceEntityClass *const this)
{
  return CPointGamestatsCounter::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPointGamestatsCounter::CEntityInstanceEntityClass::DestructInstance  (line 1556, @0x000000000227b0d0, libserver.so)  // inlines: Destruct<CPointGamestatsCounter>
void __fastcall CPointGamestatsCounter::CEntityInstanceEntityClass::DestructInstance(
        CPointGamestatsCounter::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPointGamestatsCounter::CEntityInstanceEntityClass::FreeInstance  (line 1556, @0x000000000227b0f0, libserver.so)
void __fastcall CPointGamestatsCounter::CEntityInstanceEntityClass::FreeInstance(
        CPointGamestatsCounter::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPointGamestatsCounter::CEntityInstanceEntityClass::CanAllocate  (line 1556, @0x000000000227b110, libserver.so)
bool __fastcall CPointGamestatsCounter::CEntityInstanceEntityClass::CanAllocate(
        const CPointGamestatsCounter::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPointGamestatsCounter::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1556, @0x000000000227b120, libserver.so)
// globals: CPointGamestatsCounter::s_pSchemaBinding
const ISchemaBinding *__fastcall CPointGamestatsCounter::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPointGamestatsCounter::CEntityInstanceEntityClass *const this)
{
  return CPointGamestatsCounter::s_pSchemaBinding;
}


// CPointGamestatsCounter::CEntityInstanceEntityClass::AllocateInstance  (line 1556, @0x000000000227bd70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPointGamestatsCounter::CEntityInstanceEntityClass::AllocateInstance(
        CPointGamestatsCounter::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 792);
  memset(v1, 0, 0x318u);
  return v1;
}


// CPointGamestatsCounter::CEntityInstanceEntityClass::ConstructInstance  (line 1556, @0x000000000227bfa0, libserver.so)  // inlines: CPointEntity, CPointGamestatsCounter, CUtlSymbolLarge, Construct<CPointGamestatsCounter>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CPointGamestatsCounter::CEntityInstanceEntityClass::ConstructInstance(
        CPointGamestatsCounter::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 97) = 0;
    *p = &off_4050670;
    *(p + 784) = 0;
  }
  return p;
}


// CPointGamestatsCounter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1556, @0x000000000227cf60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPointGamestatsCounter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointGamestatsCounter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPointGamestatsCounter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1556, @0x000000000227cf80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPointGamestatsCounter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointGamestatsCounter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPointGamestatsCounter::GetEntityClassInternal  (line 1556, @0x000000000227f320, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CInterlockedIntT, CUtlMemory, CUtlMemoryPool, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlTSHashBase, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ThreadInterlockedExchange, operator=, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlMemoryPoolBase::CUtlMemoryPoolBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_06.cpp
// strings: "point_gamestats_counter", "CPointGamestatsCounter"
// globals: `guard variable for'CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass, CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPointGamestatsCounter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPointGamestatsCounter::GetEntityClassInfo(void)::g_EntityCPointGamestatsCounterClassInfo, CPointGamestatsCounter::GetEntityClassInfo(void)::g_EntityCPointGamestatsCounterClassInfo
CEntityClass *__cdecl CPointGamestatsCounter::GetEntityClassInternal()
{
  CPointGamestatsCounter::CEntityInstanceEntityClass *v1; // rax
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass) != 0 )
  {
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass._vptr_CEntityClass = off_3F79390;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_designerName.u.m_Id = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_ComponentOffsets.m_Size = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_AllHelpers.m_Size = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlMemoryPoolBase::CUtlMemoryPoolBase(
      &CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_instanceUnserializer.m_atomicFields.m_EntryMemory,
      48,
      4,
      8,
      MemoryPoolGrowType_t::UTLMEMORYPOOL_GROW_SLOW,
      0);
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value = 0;
    _InterlockedExchange(
      &CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value,
      0);
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_instanceUnserializer.m_atomicFields.m_bNeedsCommit = 0;
    v1 = &CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass;
    do
    {
      v1->m_instanceUnserializer.m_atomicFields.m_aBuckets[0].m_pFirst = 0;
      v1 = (v1 + 16);
      v1->m_instanceUnserializer.m_atomicFields.m_EntryMemory.m_Blobs.m_pPop = 0;
    }
    while ( v1 != &CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_instanceUnserializer.m_atomicFields.m_aBuckets[3] );
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_classInputs.m_Size = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_classOutputs.m_Size = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_requiredEHandle.m_Index = -1;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_hNetworkSerializer = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_pBaseClassInfo = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_pClassInfo = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_flags = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_nAllHelpersFlags = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_pScriptClassDesc = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_pInputs = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_nInputCount = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_pOutputs = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_nOutputCount = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_pGameClass = 0;
    CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass._vptr_CEntityClass = off_40505F0;
    __cxa_guard_release(&`guard variable for'CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass);
    __cxa_atexit(
      CPointGamestatsCounter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass,
      &_dso_handle);
  }
  if ( g_pEntityCPointGamestatsCounterClass != 0 )
    return &CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass;
  if ( `guard variable for'CPointGamestatsCounter::GetEntityClassInfo(void)::g_EntityCPointGamestatsCounterClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPointGamestatsCounter::GetEntityClassInfo(void)::g_EntityCPointGamestatsCounterClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPointGamestatsCounter::GetEntityClassInfo(void)::g_EntityCPointGamestatsCounterClassInfo,
      "CPointGamestatsCounter",
      "point_gamestats_counter",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPointGamestatsCounter::GetEntityClassInfo(void)::g_EntityCPointGamestatsCounterClassInfo);
  }
  CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_pClassInfo = &CPointGamestatsCounter::GetEntityClassInfo(void)::g_EntityCPointGamestatsCounterClassInfo;
  CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_pBaseClassInfo = CPointGamestatsCounter::GetEntityClassInfo(void)::g_EntityCPointGamestatsCounterClassInfo.m_pBaseClassInfo;
  g_pEntityCPointGamestatsCounterClass = &CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass;
  CPointGamestatsCounter::GetEntityClassInfo(void)::g_EntityCPointGamestatsCounterClassInfo.m_pClass = &CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass;
  CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPointGamestatsCounterClass->m_pComponentOverrides = 0;
  return &CPointGamestatsCounter::GetEntityClassInternal(void)::g_EntityCPointGamestatsCounterClass;
}


// CPointGamestatsCounter::GetDataDescMap  (line 1575, @0x00000000022540e0, libserver.so)
// globals: CPointGamestatsCounter::m_DataMap
datamap_t *__fastcall CPointGamestatsCounter::GetDataDescMap(CPointGamestatsCounter *const this)
{
  return &CPointGamestatsCounter::m_DataMap;
}


// CPointGamestatsCounter::AddDatadescMetadataKeys  (line 1575, @0x00000000022644e0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPointGamestatsCounter::GetEntityClass(void)
void __fastcall CPointGamestatsCounter::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPointGamestatsCounter::GetEntityClass);
}


// CPointGamestatsCounter::GetBaseMap  (line 1575, @0x0000000002264500, libserver.so)
datamap_t *__cdecl CPointGamestatsCounter::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CPointGamestatsCounter>  (line 1575, @0x0000000002264510, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_06.cpp
// strings: "CPointGamestatsCounter"
// globals: `guard variable for'DataMapInit<CPointGamestatsCounter>(CPointGamestatsCounter *)::nameHolder, CPointGamestatsCounter::GetEntityClass(void), CPointGamestatsCounter::m_DataMap, DataMapInit<CPointGamestatsCounter>(CPointGamestatsCounter *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPointGamestatsCounter>(CPointGamestatsCounter *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPointGamestatsCounter>(CPointGamestatsCounter *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPointGamestatsCounter>(CPointGamestatsCounter *)::nameHolder) != 0 )
  {
    DataMapInit<CPointGamestatsCounter>(CPointGamestatsCounter *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPointGamestatsCounter>(CPointGamestatsCounter *)::nameHolder.m_pszBase = "CPointGamestatsCounter";
    DataMapInit<CPointGamestatsCounter>(CPointGamestatsCounter *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPointGamestatsCounter>(CPointGamestatsCounter *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPointGamestatsCounter>(CPointGamestatsCounter *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPointGamestatsCounter>(CPointGamestatsCounter *)::nameHolder.m_nLenBase = 22;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPointGamestatsCounter>(CPointGamestatsCounter *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPointGamestatsCounter>(CPointGamestatsCounter *)::nameHolder,
      &_dso_handle);
  }
  CPointGamestatsCounter::m_DataMap.dataNumFields = 6;
  CPointGamestatsCounter::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  CPointGamestatsCounter::m_DataMap.dataDesc = &DataMapInit<CPointGamestatsCounter>(CPointGamestatsCounter *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPointGamestatsCounter::m_DataMap, CPointGamestatsCounter::GetEntityClass);
  return &CPointGamestatsCounter::m_DataMap;
}


// CPointGamestatsCounter::CPointGamestatsCounter  (line 1590, @0x00000000022645e0, libserver.so)  // inlines: CPointEntity, CUtlSymbolLarge
// calls: CBaseEntity::CBaseEntity
void __fastcall CPointGamestatsCounter::CPointGamestatsCounter(CPointGamestatsCounter *const this)
{
  CBaseEntity::CBaseEntity(this);
  this->m_strStatisticName.u.m_Id = 0;
  this->_vptr_IHandleEntity = &off_4050670;
  this->m_bDisabled = 0;
}


// CPointGamestatsCounter::InputSetName  (line 1599, @0x000000000225cfc0, libserver.so)  // inlines: AssignTo, StringID, TempString, ToString, operator=
// calls: MakeEntitySystemString, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_225CFF1, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CPointGamestatsCounter::InputSetName(CPointGamestatsCounter *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  char *m_pszString; // rsi
  const char *v5; // rax
  const char *v6; // rcx
  double m_float; // xmm0_8
  UtlSymLargeId_t v8; // [rsp+10h] [rbp-20h]

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
        goto LABEL_8;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_19;
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
        goto LABEL_11;
      case 6:
        v6 = "true";
        if ( inputdata->value.m_char == 0 )
          v6 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v6);
        goto LABEL_15;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_11;
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
        goto LABEL_15;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_15:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_19:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_11:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v5 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v5);
LABEL_8:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  MakeEntitySystemString(m_pszString);
  this->m_strStatisticName.u.m_Id = v8;
}


// CPointGamestatsCounter::InputIncrement  (line 1607, @0x0000000002257400, libserver.so)  // inlines: Float, String, ToCStr, entindex, operator float
// calls: CBaseEntity::GetAbsOrigin, CEntityInstance::GetEntityIndex, DevMsg
// strings: "CPointGamestatsCounter::InputIncrement:  No stat name specified for point_gamestats_count
// globals: gamestats
void __fastcall CPointGamestatsCounter::InputIncrement(
        CPointGamestatsCounter *const this,
        inputdata_t *const inputdata)
{
  void (__fastcall *v3)(CBaseGameStats *, const Vector *, UtlSymLargeId_t, float); // r13
  float m_float64; // xmm0_4
  UtlSymLargeId_t m_Id; // r12
  const Vector *AbsOrigin; // rax
  unsigned int m_Data; // r12d
  const Vector *v8; // rax
  double z; // [rsp+0h] [rbp-30h]
  float v10; // [rsp+8h] [rbp-28h]
  double y; // [rsp+8h] [rbp-28h]

  if ( !this->m_bDisabled )
  {
    if ( this->m_strStatisticName.u.m_Id != 0 )
    {
      v3 = *(gamestats->_vptr_CBaseGameStats + 36);
      if ( inputdata->value.m_type == 34 )
        m_float64 = inputdata->value.m_float64;
      else
        m_float64 = inputdata->value.m_float;
      m_Id = this->m_strStatisticName.u.m_Id;
      v10 = m_float64;
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      v3(gamestats, AbsOrigin, m_Id, v10);
    }
    else
    {
      m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
      z = CBaseEntity::GetAbsOrigin(this)->z;
      y = CBaseEntity::GetAbsOrigin(this)->y;
      v8 = CBaseEntity::GetAbsOrigin(this);
      DevMsg(
        1,
        "CPointGamestatsCounter::InputIncrement:  No stat name specified for point_gamestats_counter @%f, %f, %f [ent index %d]\n",
        m_Data,
        v8->x,
        y,
        z);
    }
  }
}


// CPointGamestatsCounter::InputEnable  (line 1622, @0x00000000022540f0, libserver.so)
void __fastcall CPointGamestatsCounter::InputEnable(CPointGamestatsCounter *const this, inputdata_t *const inputdata)
{
  this->m_bDisabled = 0;
}


// CPointGamestatsCounter::InputDisable  (line 1627, @0x0000000002254100, libserver.so)
void __fastcall CPointGamestatsCounter::InputDisable(CPointGamestatsCounter *const this, inputdata_t *const inputdata)
{
  this->m_bDisabled = 1;
}


