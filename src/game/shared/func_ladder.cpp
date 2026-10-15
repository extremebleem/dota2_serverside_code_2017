// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/func_ladder.cpp:467
class C_CFuncLadder_MapInstall {
	C_CFuncLadder_MapInstall();

	// sizeof = 1
};

// src/game/shared/func_ladder.cpp:470
class CFuncLadderAlias_func_useableladder : public CFuncLadder {
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
	CFuncLadderAlias_func_useableladder(CFuncLadderAlias_func_useableladder &);
	CFuncLadderAlias_func_useableladder(CFuncLadderAlias_func_useableladder &);
	CFuncLadderAlias_func_useableladder();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CFuncLadderAlias_func_useableladder();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1296
};

// src/game/shared/func_ladder.cpp:530
class C_CInfoLadderDismount_MapInstall {
	C_CInfoLadderDismount_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFuncLadder::CFuncLadder  (line 22, @0x0000000002237be0, libserver.so)  // inlines: AddToTail, CEntityIOOutput, CNetworkVarBase, CNetworkVectorBase, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, CopyConstruct<CFuncLadder*>, Element, EnsureValidValue, EnsureValidValue<bool>, EnsureValidValue<float>, GrowMemory, Zero, operator[], ~CUtlVector
// calls: CBaseModelEntity::CBaseModelEntity, CUtlMemory<CFuncLadder*, int>::Grow, CUtlVectorBase<CHandle<CInfoLadderDismount>, CUtlMemory<CHandle<CInfoLadderDismount>, int> >::~CUtlVectorBase, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume
// callers: CFuncLadder::CEntityInstanceEntityClass::ConstructInstance, CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass::ConstructInstance
// globals: CFuncLadder::s_Ladders
void __fastcall CFuncLadder::CFuncLadder(CFuncLadder *const this)
{
  __int64 m_Size; // r12
  bool v3; // zf
  int v4; // eax
  CFuncLadder **v5; // rax

  CBaseModelEntity::CBaseModelEntity(this);
  this->m_vecLadderDir.m_Value.z = 0.0;
  this->_vptr_IHandleEntity = &off_4045510;
  m_Size = CFuncLadder::s_Ladders.m_Size;
  this->m_OnPlayerGotOnLadder._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnPlayerGotOffLadder._vptr_CEntityIOOutput = off_3F7C190;
  this->m_vecLadderDir.m_Value.y = 0.0;
  this->m_vecLadderDir.m_Value.x = 0.0;
  v3 = m_Size == CFuncLadder::s_Ladders.m_Memory.m_nAllocationCount;
  v4 = m_Size;
  this->m_Dismounts.m_Size = 0;
  this->m_Dismounts.m_Memory.m_pMemory = 0;
  this->m_Dismounts.m_Memory.m_nAllocationCount = 0;
  this->m_Dismounts.m_Memory.m_nGrowSize = 0;
  this->m_vecPlayerMountPositionTop.m_Value.z = 0.0;
  this->m_vecPlayerMountPositionTop.m_Value.y = 0.0;
  this->m_vecPlayerMountPositionTop.m_Value.x = 0.0;
  this->m_vecPlayerMountPositionBottom.m_Value.z = 0.0;
  this->m_vecPlayerMountPositionBottom.m_Value.y = 0.0;
  this->m_vecPlayerMountPositionBottom.m_Value.x = 0.0;
  this->m_flAutoRideSpeed.m_Value = 0.0;
  this->m_bDisabled = 0;
  this->m_bFakeLadder.m_Value = 0;
  this->m_surfacePropName.u.m_Id = 0;
  if ( v3 )
  {
    CUtlMemory<CFuncLadder *,int>::Grow(&CFuncLadder::s_Ladders.m_Memory, 1);
    v4 = CFuncLadder::s_Ladders.m_Size;
  }
  CFuncLadder::s_Ladders.m_Size = v4 + 1;
  v5 = &CFuncLadder::s_Ladders.m_Memory.m_pMemory[m_Size];
  if ( v5 != 0 )
    *v5 = this;
}


// CFuncLadder::~CFuncLadder  (line 31, @0x0000000002231600, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CFuncLadder*, CUtlMemory<CFuncLadder*, int> >::FindAndRemove, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CInfoLadderDismount>, int>::Purge
// callers: CFuncLadder::~CFuncLadder, CFuncLadderAlias_func_useableladder::~CFuncLadderAlias_func_useableladder
// globals: CFuncLadder::s_Ladders
void __fastcall CFuncLadder::~CFuncLadder(CFuncLadder *const this)
{
  bool v2; // zf
  CFuncLadder *src; // [rsp+8h] [rbp-18h] BYREF

  this->_vptr_IHandleEntity = &off_4045510;
  src = this;
  CUtlVectorBase<CFuncLadder *,CUtlMemory<CFuncLadder *,int>>::FindAndRemove(&CFuncLadder::s_Ladders, &src);
  v2 = (this->m_Dismounts.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Dismounts.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CHandle<CInfoLadderDismount>,int>::Purge(&this->m_Dismounts.m_Memory);
    if ( (this->m_Dismounts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CInfoLadderDismount>,int>::Purge(&this->m_Dismounts.m_Memory);
  }
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFuncLadder::~CFuncLadder  (line 31, @0x0000000002231680, libserver.so)
// calls: CFuncLadder::~CFuncLadder, CBaseEntity::operator delete
void __fastcall CFuncLadder::~CFuncLadder(CFuncLadder *const this)
{
  CFuncLadder::~CFuncLadder(this);
  CBaseEntity::operator delete(this);
}


// CFuncLadder::GetLadderCount  (line 36, @0x00000000022292b0, libserver.so)
// globals: CFuncLadder::s_Ladders
int __cdecl CFuncLadder::GetLadderCount()
{
  return CFuncLadder::s_Ladders.m_Size;
}


// CFuncLadder::GetLadder  (line 41, @0x00000000022292c0, libserver.so)  // inlines: operator[]
// globals: CFuncLadder::s_Ladders
CFuncLadder *__fastcall CFuncLadder::GetLadder(int index)
{
  CFuncLadder *result; // rax

  result = 0;
  if ( index >= 0 && index < CFuncLadder::s_Ladders.m_Size )
    return CFuncLadder::s_Ladders.m_Memory.m_pMemory[index];
  return result;
}


// CFuncLadder::FirstSetup  (line 49, @0x0000000002229c50, libserver.so)  // inlines: AddEFlags, SetCollisionGroup, SetSolid, VectorTransform
// calls: CBaseEntity::SetMoveType, CCollisionProperty::SetCollisionGroup, CCollisionProperty::SetupPhysicsAsNoCollision, CBaseEntity::AddEffects, CBaseEntity::DispatchUpdateTransmitState, CBaseEntity::EntityToWorldTransform, VectorTransform, CBaseEntity::GetAbsOrigin, CFuncLadder::SetEndPoints
// callers: CFuncLadder::PreFirstNetworkUpdate, CFuncLadder::Spawn
void __fastcall CFuncLadder::FirstSetup(CFuncLadder *const this)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r12
  matrix3x4_t *v3; // rax
  const Vector *AbsOrigin; // rax
  Vector vecWorldTop; // [rsp+0h] [rbp-20h] BYREF

  p_m_Collision = &this->m_Collision;
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 0);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  CCollisionProperty::SetCollisionGroup(p_m_Collision, 4);
  CCollisionProperty::SetupPhysicsAsNoCollision(p_m_Collision, 1);
  CBaseEntity::AddEffects(this, 32);
  this->m_iEFlags |= 0x80u;
  CBaseEntity::DispatchUpdateTransmitState(this);
  v3 = CBaseEntity::EntityToWorldTransform(this);
  VectorTransform(&this->m_vecLocalTop.x, v3, &vecWorldTop.x);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  CFuncLadder::SetEndPoints(this, &vecWorldTop, AbsOrigin);
}


// CFuncLadder::PreFirstNetworkUpdate  (line 73, @0x0000000002229d00, libserver.so)
// calls: CFuncLadder::FirstSetup
void __fastcall CFuncLadder::PreFirstNetworkUpdate(CFuncLadder *const this)
{
  CFuncLadder::FirstSetup(this);
}


// CFuncLadder::Spawn  (line 81, @0x0000000002229d10, libserver.so)  // inlines: CGameTrace, CUtlSymbolLarge, EnableInteractsWith, GetClassNameAsCStr, GetClassname, GetEntityName, GetInt, HasSpawnFlags, Init, LengthSqr, NetworkStateChanged, Ray_t, RnCollisionAttr_t, Set, String, TraceRay, UTIL_TraceHull, Vector, VectorAdd, VectorAligned, VectorSubtract, operator!=, operator*=, operator+=, operator-, operator-=<Vector>, operator=, operator=<bool>, operator[]
// calls: CBaseEntity::Spawn, CBaseModelEntity::SetModelFromKeyValues, CFuncLadder::FirstSetup, SafeGetViewVectors, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, UTIL_VarArgs, DevMsg, CBaseEntity::SetDebugBits, CBaseEntity::GetAbsOrigin, UTIL_SetSize
// strings: "%s/%s", "Warning, funcladder with blocked bottom point (%.2f %.2f %.2f) stuck in (%s)\n", "Warning, funcladder with blocked top point (%.2f %.2f %.2f) stuck in (%s)\n"
// local variable allocation has failed, the output may be wrong!
void __fastcall CFuncLadder::Spawn(CFuncLadder *const this, const CEntityKeyValues *pKeyValues)
{
  CNetworkVectorBase<Vector,CFuncLadder::NetworkVar_m_vecPlayerMountPositionBottom> *p_m_vecPlayerMountPositionBottom; // r14
  const CViewVectors *ViewVectors; // rax
  const CViewVectors *v6; // rax
  float v7; // xmm9_4
  float v8; // xmm10_4
  float z; // xmm8_4
  float v10; // xmm7_4
  float v11; // xmm6_4
  float v12; // xmm5_4
  float v13; // xmm10_4
  float v14; // xmm9_4
  float v15; // xmm8_4
  char *v16; // rdx
  CEntityIdentity *m_pEntity; // rax
  const char *v18; // rsi
  const char *m_pAsString; // rdx
  const Vector *AbsOrigin; // rax
  const Vector *v21; // rax
  float v22; // xmm2_4
  __int64 v23; // rax
  float v24; // xmm1_4
  float v25; // xmm0_4
  float v26; // xmm0_4
  char *v27; // rdx
  CEntityIdentity *v28; // rax
  const char *v29; // rsi
  const char *v30; // rdx
  bool v31; // r12
  bool v32; // [rsp+24h] [rbp-25Ch]
  float v33; // [rsp+2Ch] [rbp-254h]
  float v34; // [rsp+34h] [rbp-24Ch]
  vec_t v35; // [rsp+38h] [rbp-248h]
  vec_t v36; // [rsp+38h] [rbp-248h]
  float v37; // [rsp+3Ch] [rbp-244h]
  vec_t v38; // [rsp+3Ch] [rbp-244h]
  vec_t v39; // [rsp+3Ch] [rbp-244h]
  vec_t v40; // [rsp+40h] [rbp-240h]
  vec_t v41; // [rsp+40h] [rbp-240h]
  float v42; // [rsp+48h] [rbp-238h]
  float playerMaxs; // [rsp+4Ch] [rbp-234h]
  float playerMaxs_4; // [rsp+50h] [rbp-230h]
  float playerMaxs_8; // [rsp+54h] [rbp-22Ch]
  float x; // [rsp+58h] [rbp-228h]
  float y; // [rsp+5Ch] [rbp-224h]
  __int128 mins; // [rsp+60h] [rbp-220h] OVERLAPPED BYREF
  Vector maxs; // [rsp+A0h] [rbp-1E0h] BYREF
  int v50; // [rsp+ACh] [rbp-1D4h]
  float v51; // [rsp+B0h] [rbp-1D0h]
  float v52; // [rsp+B4h] [rbp-1CCh]
  float v53; // [rsp+B8h] [rbp-1C8h]
  int v54; // [rsp+BCh] [rbp-1C4h]
  float v55; // [rsp+C0h] [rbp-1C0h]
  float v56; // [rsp+C4h] [rbp-1BCh]
  float v57; // [rsp+C8h] [rbp-1B8h]
  int v58; // [rsp+CCh] [rbp-1B4h]
  float v59; // [rsp+D0h] [rbp-1B0h]
  float v60; // [rsp+D4h] [rbp-1ACh]
  float v61; // [rsp+D8h] [rbp-1A8h]
  int v62; // [rsp+DCh] [rbp-1A4h]
  int v63; // [rsp+E0h] [rbp-1A0h]
  bool v64; // [rsp+E4h] [rbp-19Ch]
  bool v65; // [rsp+E5h] [rbp-19Bh]
  trace_t bottomtrace; // [rsp+F0h] [rbp-190h] BYREF
  trace_t toptrace; // [rsp+1A0h] [rbp-E0h] BYREF

  p_m_vecPlayerMountPositionBottom = &this->m_vecPlayerMountPositionBottom;
  CBaseEntity::Spawn(this, pKeyValues);
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  CFuncLadder::FirstSetup(this);
  ViewVectors = SafeGetViewVectors();
  y = ViewVectors->m_vHullMin.y;
  x = ViewVectors->m_vHullMin.x;
  playerMaxs = ViewVectors->m_vHullMin.z;
  v6 = SafeGetViewVectors();
  playerMaxs_4 = v6->m_vHullMax.x;
  v42 = v6->m_vHullMax.y;
  playerMaxs_8 = v6->m_vHullMax.z;
  memset(&bottomtrace.m_ShapeAttributes, 0, 31);
  bottomtrace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&bottomtrace);
  memset(&toptrace.m_ShapeAttributes, 0, 31);
  toptrace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&toptrace);
  v7 = this->m_vecPlayerMountPositionBottom.m_Value.y;
  v8 = this->m_vecPlayerMountPositionBottom.m_Value.x;
  v50 = 0;
  z = this->m_vecPlayerMountPositionBottom.m_Value.z;
  v54 = 0;
  v58 = 0;
  v51 = v8 - v8;
  v53 = z - z;
  v62 = 0;
  v63 = 0;
  v52 = v7 - v7;
  v10 = (x + playerMaxs_4) * 0.5;
  v59 = (playerMaxs_4 - x) * 0.5;
  v60 = (v42 - y) * 0.5;
  v65 = (((v51 * v51) + ((v7 - v7) * (v7 - v7))) + (v53 * v53)) != 0.0;
  maxs.x = v8 + v10;
  v61 = (playerMaxs_8 - playerMaxs) * 0.5;
  v11 = (y + v42) * 0.5;
  v64 = (((v59 * v59) + (v60 * v60)) + (v61 * v61)) < 0.000001;
  v12 = (playerMaxs_8 + playerMaxs) * 0.5;
  v32 = v64;
  maxs.y = v7 + v11;
  maxs.z = z + v12;
  v55 = -v10;
  v33 = -v10;
  v56 = -v11;
  v34 = -v11;
  v57 = -v12;
  v37 = -v12;
  CTraceFilterSimple::CTraceFilterSimple(&mins, 0, 11, 0);
  *(&mins + 1) |= 0x7011uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &maxs, &mins, &bottomtrace);
  v13 = this->m_vecPlayerMountPositionTop.m_Value.x;
  v50 = 0;
  v14 = this->m_vecPlayerMountPositionTop.m_Value.y;
  v54 = 0;
  v15 = this->m_vecPlayerMountPositionTop.m_Value.z;
  v58 = 0;
  v62 = 0;
  v51 = v13 - v13;
  v63 = 0;
  v52 = v14 - v14;
  v53 = v15 - v15;
  v64 = v32;
  maxs.x = ((x + playerMaxs_4) * 0.5) + v13;
  v59 = (playerMaxs_4 - x) * 0.5;
  v60 = (v42 - y) * 0.5;
  v61 = (playerMaxs_8 - playerMaxs) * 0.5;
  maxs.y = ((y + v42) * 0.5) + v14;
  maxs.z = ((playerMaxs_8 + playerMaxs) * 0.5) + v15;
  v55 = v33;
  v56 = v34;
  v65 = (((v51 * v51) + (v52 * v52)) + (v53 * v53)) != 0.0;
  v57 = v37;
  CTraceFilterSimple::CTraceFilterSimple(&mins, 0, 11, 0);
  *(&mins + 1) |= 0x7011uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &maxs, &mins, &toptrace);
  if ( bottomtrace.startsolid )
  {
    v16 = "NULL";
    if ( bottomtrace.m_pEnt != 0 )
    {
      m_pEntity = bottomtrace.m_pEnt->m_pEntity;
      v18 = "";
      m_pAsString = m_pEntity->m_name.u.m_pAsString;
      if ( m_pAsString == 0 )
        m_pAsString = "";
      if ( m_pEntity->m_designerName.u.m_Id != 0 )
        v18 = m_pEntity->m_designerName.u.m_pAsString;
      v16 = UTIL_VarArgs("%s/%s", v18, m_pAsString);
    }
    DevMsg(
      1,
      "Warning, funcladder with blocked bottom point (%.2f %.2f %.2f) stuck in (%s)\n",
      v16,
      this->m_vecPlayerMountPositionBottom.m_Value.x,
      this->m_vecPlayerMountPositionBottom.m_Value.y,
      this->m_vecPlayerMountPositionBottom.m_Value.z);
    if ( !toptrace.startsolid )
      goto LABEL_9;
  }
  else if ( !toptrace.startsolid )
  {
    goto LABEL_11;
  }
  v27 = "NULL";
  if ( toptrace.m_pEnt != 0 )
  {
    v28 = toptrace.m_pEnt->m_pEntity;
    v29 = "";
    v30 = v28->m_name.u.m_pAsString;
    if ( v30 == 0 )
      v30 = "";
    if ( v28->m_designerName.u.m_Id != 0 )
      v29 = v28->m_designerName.u.m_pAsString;
    v27 = UTIL_VarArgs("%s/%s", v29, v30);
  }
  DevMsg(
    1,
    "Warning, funcladder with blocked top point (%.2f %.2f %.2f) stuck in (%s)\n",
    v27,
    this->m_vecPlayerMountPositionTop.m_Value.x,
    this->m_vecPlayerMountPositionTop.m_Value.y,
    this->m_vecPlayerMountPositionTop.m_Value.z);
LABEL_9:
  if ( developer.m_pParent->m_Value.m_nValue > 1 )
    CBaseEntity::SetDebugBits(this, 1u);
LABEL_11:
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  if ( this->m_vecPlayerMountPositionTop.m_Value.x != (this->m_vecPlayerMountPositionTop.m_Value.x - AbsOrigin->x)
    || this->m_vecPlayerMountPositionTop.m_Value.y != (this->m_vecPlayerMountPositionTop.m_Value.y - AbsOrigin->y)
    || this->m_vecPlayerMountPositionTop.m_Value.z != (this->m_vecPlayerMountPositionTop.m_Value.z - AbsOrigin->z) )
  {
    v35 = this->m_vecPlayerMountPositionTop.m_Value.z - AbsOrigin->z;
    v38 = this->m_vecPlayerMountPositionTop.m_Value.y - AbsOrigin->y;
    v40 = this->m_vecPlayerMountPositionTop.m_Value.x - AbsOrigin->x;
    (*(this->_vptr_IHandleEntity + 22))(this, 1204, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_vecPlayerMountPositionTop.m_Value.x = v40;
    this->m_vecPlayerMountPositionTop.m_Value.y = v38;
    this->m_vecPlayerMountPositionTop.m_Value.z = v35;
  }
  v21 = CBaseEntity::GetAbsOrigin(this);
  if ( this->m_vecPlayerMountPositionBottom.m_Value.x != (this->m_vecPlayerMountPositionBottom.m_Value.x - v21->x)
    || this->m_vecPlayerMountPositionBottom.m_Value.y != (this->m_vecPlayerMountPositionBottom.m_Value.y - v21->y)
    || this->m_vecPlayerMountPositionBottom.m_Value.z != (this->m_vecPlayerMountPositionBottom.m_Value.z - v21->z) )
  {
    v36 = this->m_vecPlayerMountPositionBottom.m_Value.z - v21->z;
    v39 = this->m_vecPlayerMountPositionBottom.m_Value.y - v21->y;
    v41 = this->m_vecPlayerMountPositionBottom.m_Value.x - v21->x;
    (*(this->_vptr_IHandleEntity + 22))(this, 1216, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_vecPlayerMountPositionBottom.m_Value.x = v41;
    this->m_vecPlayerMountPositionBottom.m_Value.y = v39;
    this->m_vecPlayerMountPositionBottom.m_Value.z = v36;
  }
  v22 = 16384.0;
  v23 = 0;
  v24 = -16384.0;
  *&mins = 0x4680000046800000LL;
  DWORD2(mins) = 1182793728;
  maxs.x = -16384.0;
  maxs.y = -16384.0;
  maxs.z = -16384.0;
  v25 = p_m_vecPlayerMountPositionBottom->m_Value.x;
  if ( p_m_vecPlayerMountPositionBottom->m_Value.x < 16384.0 )
  {
LABEL_18:
    *(&mins + v23) = v25;
    v22 = v25;
    goto LABEL_19;
  }
  while ( 1 )
  {
LABEL_19:
    if ( v25 > v24 )
    {
      *(&maxs.x + v23) = v25;
      v24 = v25;
    }
    v26 = *(&this->m_vecPlayerMountPositionTop.m_Value.x + v23);
    if ( v22 > v26 )
      *(&mins + v23) = v26;
    if ( v26 > v24 )
      *(&maxs.x + v23) = v26;
    v23 += 4;
    if ( v23 == 12 )
      break;
    v22 = *(&mins + v23);
    v25 = *(&p_m_vecPlayerMountPositionBottom->m_Value.x + v23);
    v24 = *(&maxs.x + v23);
    if ( v22 > v25 )
      goto LABEL_18;
  }
  *&mins = x + *&mins;
  *(&mins + 1) = y + *(&mins + 1);
  *(&mins + 2) = playerMaxs + *(&mins + 2);
  maxs.x = playerMaxs_4 + maxs.x;
  maxs.y = v42 + maxs.y;
  maxs.z = playerMaxs_8 + maxs.z;
  UTIL_SetSize(this, &mins, &maxs);
  v31 = this->m_spawnflags.m_Value & 1;
  if ( v31 != this->m_bFakeLadder.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1233, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bFakeLadder.m_Value = v31;
  }
}


// CFuncLadder::Activate  (line 170, @0x00000000022380c0, libserver.so)  // inlines: GetBool, GetInt
// calls: CBaseModelEntity::Activate, CFuncLadder::SearchForDismountPoints, CBaseEntity::SetDebugBits
void __fastcall CFuncLadder::Activate(CFuncLadder *const this, ActivateType_t activateType)
{
  CBaseModelEntity::Activate(this, activateType);
  CFuncLadder::SearchForDismountPoints(this);
  if ( sv_showladders.m_pParent->m_Value.m_nValue != 0 )
    CBaseEntity::SetDebugBits(this, 1u);
}


// CFuncLadder::SearchForDismountPoints  (line 190, @0x0000000002237f40, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, VectorMultiply, VectorSubtract, operator*, operator+=, operator-, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CFuncLadder::GetTopPosition, CFuncLadder::GetBottomPosition, VectorNormalize, CFuncLadder::FindNearbyDismountPoints, CUtlMemory<CHandle<CInfoLadderDismount>, int>::Purge, CUtlVectorBase<CHandle<CInfoLadderDismount>, CUtlMemory<CHandle<CInfoLadderDismount>, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CFuncLadder::Activate
void __fastcall CFuncLadder::SearchForDismountPoints(CFuncLadder *const this)
{
  float ladderLength; // [rsp+Ch] [rbp-74h]
  Vector topPos; // [rsp+10h] [rbp-70h] BYREF
  Vector bottomPos; // [rsp+20h] [rbp-60h] BYREF
  Vector vecBottomToTop; // [rsp+30h] [rbp-50h] BYREF
  CUtlVector<CHandle<CInfoLadderDismount>,CUtlMemory<CHandle<CInfoLadderDismount>,int> > allNodes; // [rsp+40h] [rbp-40h] BYREF

  allNodes.m_Size = 0;
  allNodes.m_Memory.m_pMemory = 0;
  allNodes.m_Memory.m_nAllocationCount = 0;
  allNodes.m_Memory.m_nGrowSize = 0;
  CFuncLadder::GetTopPosition(this, &topPos);
  CFuncLadder::GetBottomPosition(this, &bottomPos);
  vecBottomToTop.y = topPos.y - bottomPos.y;
  vecBottomToTop.z = topPos.z - bottomPos.z;
  vecBottomToTop.x = topPos.x - bottomPos.x;
  ladderLength = VectorNormalize(&vecBottomToTop);
  CFuncLadder::FindNearbyDismountPoints(this, &topPos, 100.0, &this->m_Dismounts);
  while ( 1 )
  {
    CFuncLadder::FindNearbyDismountPoints(this, &bottomPos, 100.0, &this->m_Dismounts);
    ladderLength = ladderLength - 40.0;
    if ( ladderLength <= 0.0 )
      break;
    bottomPos.y = (40.0 * vecBottomToTop.y) + bottomPos.y;
    bottomPos.z = (40.0 * vecBottomToTop.z) + bottomPos.z;
    bottomPos.x = (40.0 * vecBottomToTop.x) + bottomPos.x;
  }
  allNodes.m_Size = 0;
  if ( (allNodes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CInfoLadderDismount>,int>::Purge(&allNodes.m_Memory);
    if ( (allNodes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CInfoLadderDismount>,int>::Purge(&allNodes.m_Memory);
  }
}


// CFuncLadder::SetEndPoints  (line 226, @0x00000000022292f0, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, Init, LengthSqr, NetworkStateChanged, Ray_t, RnCollisionAttr_t, Set, TraceRay, UTIL_TraceHull, VectorAdd, VectorAligned, VectorSubtract, operator!=, operator*=, operator+, operator=
// calls: SafeGetViewVectors, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay
// callers: CFuncLadder::FirstSetup, CFuncLadderEndPoint::Validate
void __fastcall CFuncLadder::SetEndPoints(CFuncLadder *const this, const Vector *const p1, const Vector *const p2)
{
  bool v6; // zf
  float z; // xmm0_4
  float x; // xmm1_4
  float y; // xmm2_4
  float v10; // xmm3_4
  const CViewVectors *ViewVectors; // rax
  float v12; // xmm13_4
  float v13; // xmm12_4
  float v14; // xmm1_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  vec_t v17; // xmm7_4
  float v18; // xmm6_4
  float v19; // xmm5_4
  bool v20; // r15
  vec_t v21; // xmm10_4
  float v22; // xmm5_4
  vec_t v23; // xmm11_4
  float v24; // xmm6_4
  vec_t v25; // xmm12_4
  float v26; // xmm7_4
  double v27; // xmm1_8
  double v28; // xmm2_8
  double v29; // xmm3_8
  double v30; // xmm4_8
  float v31; // xmm4_4
  float v32; // xmm15_4
  float v33; // xmm9_4
  double v34; // xmm0_8
  vec_t v35; // [rsp+Ch] [rbp-194h]
  float v36; // [rsp+10h] [rbp-190h]
  float v37; // [rsp+14h] [rbp-18Ch]
  float v38; // [rsp+18h] [rbp-188h]
  float v39; // [rsp+1Ch] [rbp-184h]
  float v40; // [rsp+1Ch] [rbp-184h]
  float temp; // [rsp+20h] [rbp-180h]
  float tempa; // [rsp+20h] [rbp-180h]
  __int64 temp_4; // [rsp+24h] [rbp-17Ch]
  float temp_4b; // [rsp+24h] [rbp-17Ch]
  float temp_4a; // [rsp+24h] [rbp-17Ch]
  int temp_4c; // [rsp+24h] [rbp-17Ch]
  float temp_8; // [rsp+28h] [rbp-178h]
  int temp_8a; // [rsp+28h] [rbp-178h]
  Vector playerMaxs; // [rsp+2Ch] [rbp-174h] BYREF
  __int64 v50; // [rsp+38h] [rbp-168h]
  Ray_t ray; // [rsp+70h] [rbp-130h] BYREF
  trace_t result; // [rsp+C0h] [rbp-E0h] BYREF
  Vector v53; // 0:^C.12
  Vector m_vHullMin; // 0:^18.12

  if ( p1->x == this->m_vecPlayerMountPositionTop.m_Value.x
    && p1->y == this->m_vecPlayerMountPositionTop.m_Value.y
    && p1->z == this->m_vecPlayerMountPositionTop.m_Value.z )
  {
    v6 = p2->x == this->m_vecPlayerMountPositionBottom.m_Value.x;
  }
  else
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1204, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_vecPlayerMountPositionTop.m_Value.x = p1->x;
    this->m_vecPlayerMountPositionTop.m_Value.y = p1->y;
    this->m_vecPlayerMountPositionTop.m_Value.z = p1->z;
    v6 = p2->x == this->m_vecPlayerMountPositionBottom.m_Value.x;
  }
  if ( !v6
    || p2->y != this->m_vecPlayerMountPositionBottom.m_Value.y
    || (z = this->m_vecPlayerMountPositionBottom.m_Value.z) != p2->z )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1216, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_vecPlayerMountPositionBottom.m_Value.x = p2->x;
    this->m_vecPlayerMountPositionBottom.m_Value.y = p2->y;
    z = p2->z;
    this->m_vecPlayerMountPositionBottom.m_Value.z = z;
  }
  if ( z > this->m_vecPlayerMountPositionTop.m_Value.z )
  {
    *(&temp_4 + 1) = z;
    playerMaxs.x = this->m_vecPlayerMountPositionBottom.m_Value.x;
    *&temp_4 = this->m_vecPlayerMountPositionBottom.m_Value.y;
    (*(this->_vptr_IHandleEntity + 22))(this, 1216, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    x = this->m_vecPlayerMountPositionTop.m_Value.x;
    y = this->m_vecPlayerMountPositionTop.m_Value.y;
    this->m_vecPlayerMountPositionBottom.m_Value.x = x;
    v10 = this->m_vecPlayerMountPositionTop.m_Value.z;
    this->m_vecPlayerMountPositionBottom.m_Value.y = y;
    this->m_vecPlayerMountPositionBottom.m_Value.z = v10;
    if ( x != playerMaxs.x || y != *&temp_4 || v10 != *(&temp_4 + 1) )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1204, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_vecPlayerMountPositionTop.m_Value.x = playerMaxs.x;
      *&this->m_vecPlayerMountPositionTop.m_Value.y = temp_4;
    }
  }
  m_vHullMin = SafeGetViewVectors()->m_vHullMin;
  ViewVectors = SafeGetViewVectors();
  v12 = ViewVectors->m_vHullMax.y;
  temp_4b = ViewVectors->m_vHullMax.x;
  v13 = ViewVectors->m_vHullMax.z;
  memset(&result.m_ShapeAttributes, 0, 31);
  result.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&result);
  v14 = this->m_vecPlayerMountPositionTop.m_Value.x;
  v15 = this->m_vecPlayerMountPositionTop.m_Value.y;
  v16 = this->m_vecPlayerMountPositionTop.m_Value.z;
  ray.m_Start.w = 0.0;
  ray.m_Delta.w = 0.0;
  ray.m_StartOffset.w = 0.0;
  ray.m_Extents.w = 0.0;
  ray.m_flRadius = 0.0;
  ray.m_Delta.x = v14 - (v14 + 0.0);
  ray.m_Delta.y = v15 - (v15 + 0.0);
  ray.m_Delta.z = v16 - (v16 + 4.0);
  v17 = (m_vHullMin.x + temp_4b) * 0.5;
  v18 = (m_vHullMin.y + v12) * 0.5;
  ray.m_Extents.x = (temp_4b - m_vHullMin.x) * 0.5;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  ray.m_Start.x = (v14 + 0.0) + v17;
  v19 = (m_vHullMin.z + v13) * 0.5;
  ray.m_Extents.y = (v12 - m_vHullMin.y) * 0.5;
  ray.m_Start.y = (v15 + 0.0) + v18;
  ray.m_Extents.z = (v13 - m_vHullMin.z) * 0.5;
  v53 = ray.m_Extents.Vector;
  ray.m_Start.z = (v16 + 4.0) + v19;
  v20 = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.y * ray.m_Extents.y))
       + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
  ray.m_IsRay = v20;
  m_vHullMin.x = v17;
  ray.m_StartOffset.x = -v17;
  v39 = -v17;
  temp = v18;
  ray.m_StartOffset.y = -v18;
  temp_4a = -v18;
  temp_8 = v19;
  ray.m_StartOffset.z = -v19;
  playerMaxs.x = -v19;
  CTraceFilterSimple::CTraceFilterSimple(&playerMaxs.y, 0, 11, 0);
  v50 |= 0x7011uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &playerMaxs.y, &result);
  v21 = playerMaxs.x;
  v22 = temp_8;
  v23 = temp_4a;
  v24 = temp;
  v25 = v39;
  v26 = m_vHullMin.x;
  *&v27 = LODWORD(v53.z);
  *&v28 = LODWORD(v53.y);
  *&v29 = LODWORD(v53.x);
  if ( !result.startsolid )
  {
    *&v30 = LODWORD(result.endpos.x);
    if ( result.endpos.x != this->m_vecPlayerMountPositionTop.m_Value.x
      || (*&v30 = LODWORD(result.endpos.y), result.endpos.y != this->m_vecPlayerMountPositionTop.m_Value.y)
      || (*&v30 = LODWORD(result.endpos.z), result.endpos.z != this->m_vecPlayerMountPositionTop.m_Value.z) )
    {
      v35 = playerMaxs.x;
      v36 = temp_4a;
      v37 = v39;
      v38 = temp_8;
      v40 = temp;
      tempa = v26;
      temp_4c = LODWORD(v27);
      temp_8a = LODWORD(v28);
      playerMaxs.x = *&v29;
      (*(this->_vptr_IHandleEntity + 22))(this, 1204, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0.0, v27, v28, v29, v30);
      this->m_vecPlayerMountPositionTop.m_Value = result.endpos;
      v21 = v35;
      v23 = v36;
      v22 = v38;
      v25 = v37;
      v24 = v40;
      v26 = tempa;
      LODWORD(v27) = temp_4c;
      LODWORD(v28) = temp_8a;
      *&v29 = playerMaxs.x;
    }
  }
  v31 = this->m_vecPlayerMountPositionBottom.m_Value.x;
  v32 = this->m_vecPlayerMountPositionBottom.m_Value.y;
  ray.m_IsRay = v20;
  v33 = this->m_vecPlayerMountPositionBottom.m_Value.z;
  ray.m_Extents.x = *&v29;
  ray.m_Extents.y = *&v28;
  ray.m_Extents.z = *&v27;
  ray.m_StartOffset.x = v25;
  ray.m_StartOffset.y = v23;
  ray.m_StartOffset.z = v21;
  ray.m_Delta.x = v31 - (v31 + 0.0);
  ray.m_Delta.y = v32 - (v32 + 0.0);
  ray.m_Delta.z = v33 - (v33 + 4.0);
  ray.m_Start.x = v26 + (v31 + 0.0);
  ray.m_Start.y = v24 + (v32 + 0.0);
  ray.m_Start.z = v22 + (v33 + 4.0);
  ray.m_Start.w = 0.0;
  ray.m_Delta.w = 0.0;
  ray.m_StartOffset.w = 0.0;
  ray.m_Extents.w = 0.0;
  ray.m_flRadius = 0.0;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  CTraceFilterSimple::CTraceFilterSimple(&playerMaxs.y, 0, 11, 0);
  v50 |= 0x7011uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &playerMaxs.y, &result);
  if ( !result.startsolid )
  {
    *&v34 = LODWORD(result.endpos.x);
    if ( result.endpos.x != this->m_vecPlayerMountPositionBottom.m_Value.x
      || (*&v34 = LODWORD(result.endpos.y), result.endpos.y != this->m_vecPlayerMountPositionBottom.m_Value.y)
      || (*&v34 = LODWORD(result.endpos.z), result.endpos.z != this->m_vecPlayerMountPositionBottom.m_Value.z) )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1216, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v34);
      this->m_vecPlayerMountPositionBottom.m_Value = result.endpos;
    }
  }
}


// CFuncLadder::DrawEntityDebugOverlays  (line 265, @0x000000000222a800, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, Init, IsValid, LengthSqr, LookupEntity, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceHull, Vector, VectorAdd, VectorAligned, VectorSubtract, operator CEntityInstance*, operator CInfoLadderDismount*, operator*=, operator[]
// calls: CBaseEntity::DrawEntityDebugOverlays, SafeGetViewVectors, CFuncLadder::GetTopPosition, CFuncLadder::GetBottomPosition, NDebugOverlay::Box, NDebugOverlay::EntityBounds, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
void __fastcall CFuncLadder::DrawEntityDebugOverlays(CFuncLadder *const this, uint64 nDebugOverlayBits)
{
  const CViewVectors *ViewVectors; // rax
  __int64 v4; // rdx
  const CViewVectors *v5; // rax
  __int64 v6; // rdx
  float x; // xmm6_4
  float y; // xmm5_4
  float z; // xmm4_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  int m_Size; // eax
  unsigned __int64 v14; // rbx
  __int64 v15; // r13
  CHandle<CInfoLadderDismount> *v16; // rdx
  uint32 m_Index; // eax
  __int16 v18; // cx
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  const CBaseEntity *m_pInstance; // rdi
  const Vector *AbsOrigin; // rax
  Vector playerMins; // [rsp+10h] [rbp-1B0h] BYREF
  Vector playerMaxs; // [rsp+20h] [rbp-1A0h] BYREF
  Vector topPosition; // [rsp+30h] [rbp-190h] BYREF
  Vector bottomPosition; // [rsp+40h] [rbp-180h] BYREF
  CTraceFilterSimple v27; // [rsp+50h] [rbp-170h] BYREF
  Ray_t ray; // [rsp+90h] [rbp-130h] BYREF
  trace_t bottomtrace; // [rsp+E0h] [rbp-E0h] BYREF

  CBaseEntity::DrawEntityDebugOverlays(this, nDebugOverlayBits);
  ViewVectors = SafeGetViewVectors();
  v4 = *&ViewVectors->m_vHullMin.x;
  *&ViewVectors = ViewVectors->m_vHullMin.z;
  *&playerMins.x = v4;
  LODWORD(playerMins.z) = ViewVectors;
  v5 = SafeGetViewVectors();
  v6 = *&v5->m_vHullMax.x;
  *&v5 = v5->m_vHullMax.z;
  *&playerMaxs.x = v6;
  LODWORD(playerMaxs.z) = v5;
  CFuncLadder::GetTopPosition(this, &topPosition);
  CFuncLadder::GetBottomPosition(this, &bottomPosition);
  NDebugOverlay::Box(&topPosition, &playerMins, &playerMaxs, 0xFFu, 0, 0, 0.0, 127);
  NDebugOverlay::Box(&bottomPosition, &playerMins, &playerMaxs, 0, 0, 255, 0.0, 127);
  NDebugOverlay::EntityBounds(this, 0xC8u, 180, 63, 63, 0.0);
  memset(&bottomtrace.m_ShapeAttributes, 0, 31);
  bottomtrace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&bottomtrace);
  x = this->m_vecPlayerMountPositionBottom.m_Value.x;
  ray.m_Start.w = 0.0;
  y = this->m_vecPlayerMountPositionBottom.m_Value.y;
  ray.m_Delta.w = 0.0;
  z = this->m_vecPlayerMountPositionBottom.m_Value.z;
  ray.m_StartOffset.w = 0.0;
  ray.m_Extents.w = 0.0;
  ray.m_Delta.x = x - x;
  ray.m_Delta.y = y - y;
  ray.m_Delta.z = z - z;
  ray.m_flRadius = 0.0;
  ray.m_Extents.x = (playerMaxs.x - playerMins.x) * 0.5;
  ray.m_Extents.y = (playerMaxs.y - playerMins.y) * 0.5;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  ray.m_Extents.z = (playerMaxs.z - playerMins.z) * 0.5;
  v10 = (playerMaxs.x + playerMins.x) * 0.5;
  ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.y * ray.m_Extents.y))
               + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
  v11 = (playerMaxs.y + playerMins.y) * 0.5;
  v12 = (playerMaxs.z + playerMins.z) * 0.5;
  ray.m_Start.x = x + v10;
  ray.m_StartOffset.x = -v10;
  ray.m_StartOffset.y = -v11;
  ray.m_StartOffset.z = -v12;
  ray.m_Start.y = y + v11;
  ray.m_Start.z = z + v12;
  CTraceFilterSimple::CTraceFilterSimple(&v27, 0, 11, 0);
  v27.m_attr.m_nInteractsWith |= 0x7011uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v27, &bottomtrace);
  m_Size = this->m_Dismounts.m_Size;
  if ( m_Size > 0 )
  {
    v14 = 0;
    v15 = 4LL * (m_Size - 1) + 4;
    do
    {
      while ( 1 )
      {
        v16 = &this->m_Dismounts.m_Memory.m_pMemory[v14 / 4];
        m_Index = v16->m_Index;
        if ( v16->m_Index + 2 > 1 )
        {
          v18 = v16->m_Index;
          v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v16->m_Index) >> 9) & 0x3F];
          if ( v19 != 0 )
          {
            v20 = &v19[v18 & 0x1FF];
            if ( v20 != 0 && m_Index == v20->m_EHandle.m_Index )
            {
              m_pInstance = v20->m_pInstance;
              if ( v20->m_pInstance != 0 )
                break;
            }
          }
        }
        v14 += 4LL;
        if ( v14 == v15 )
          return;
      }
      ray.m_Start.x = 16.0;
      v14 += 4LL;
      ray.m_Start.y = 16.0;
      ray.m_Start.z = 8.0;
      v27._vptr_CTraceFilter = 0xC1800000C1800000LL;
      LODWORD(v27.m_attr.m_nInteractsWith) = 0;
      AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
      NDebugOverlay::Box(AbsOrigin, &v27, &ray.m_Start, 0x96u, 0, 0, 0.0, 63);
    }
    while ( v14 != v15 );
  }
}


// CFuncLadder::GetTopPosition  (line 303, @0x000000000222a720, libserver.so)  // inlines: VectorAdd, operator+
// calls: CBaseEntity::GetLocalOrigin, CBaseEntity::ComputeAbsPosition
// callers: CFuncLadder::DrawEntityDebugOverlays, CFuncLadder::ComputeLadderDir, CFuncLadder::GetSlackZ, CFuncLadder::GetSlackZDiff, CFuncLadder::SearchForDismountPoints
void __fastcall CFuncLadder::GetTopPosition(CFuncLadder *const this, Vector *const org)
{
  const Vector *LocalOrigin; // rax
  vec_t v5; // xmm2_4
  vec_t v6; // xmm0_4
  Vector vLocalPosition; // [rsp+0h] [rbp-20h] BYREF

  LocalOrigin = CBaseEntity::GetLocalOrigin(this);
  v5 = this->m_vecPlayerMountPositionTop.m_Value.x + LocalOrigin->x;
  v6 = this->m_vecPlayerMountPositionTop.m_Value.z + LocalOrigin->z;
  vLocalPosition.y = this->m_vecPlayerMountPositionTop.m_Value.y + LocalOrigin->y;
  vLocalPosition.x = v5;
  vLocalPosition.z = v6;
  CBaseEntity::ComputeAbsPosition(this, &vLocalPosition, org);
}


// CFuncLadder::GetBottomPosition  (line 312, @0x000000000222a790, libserver.so)  // inlines: VectorAdd, operator+
// calls: CBaseEntity::GetLocalOrigin, CBaseEntity::ComputeAbsPosition
// callers: CFuncLadder::DrawEntityDebugOverlays, CFuncLadder::ComputeLadderDir, CFuncLadder::GetSlackZ, CFuncLadder::GetSlackZDiff, CFuncLadder::SearchForDismountPoints
void __fastcall CFuncLadder::GetBottomPosition(CFuncLadder *const this, Vector *const org)
{
  const Vector *LocalOrigin; // rax
  vec_t v5; // xmm2_4
  vec_t v6; // xmm0_4
  Vector vLocalPosition; // [rsp+0h] [rbp-20h] BYREF

  LocalOrigin = CBaseEntity::GetLocalOrigin(this);
  v5 = this->m_vecPlayerMountPositionBottom.m_Value.x + LocalOrigin->x;
  v6 = this->m_vecPlayerMountPositionBottom.m_Value.z + LocalOrigin->z;
  vLocalPosition.y = this->m_vecPlayerMountPositionBottom.m_Value.y + LocalOrigin->y;
  vLocalPosition.x = v5;
  vLocalPosition.z = v6;
  CBaseEntity::ComputeAbsPosition(this, &vLocalPosition, org);
}


// CFuncLadder::ComputeLadderDir  (line 321, @0x000000000222ac40, libserver.so)  // inlines: VectorSubtract, operator-, operator=
// calls: CFuncLadder::GetTopPosition, CFuncLadder::GetBottomPosition
void __fastcall CFuncLadder::ComputeLadderDir(CFuncLadder *const this, Vector *const bottomToTopVec)
{
  vec_t v4; // xmm0_4
  vec_t v5; // xmm2_4
  Vector top; // [rsp+0h] [rbp-30h] BYREF
  Vector bottom; // [rsp+10h] [rbp-20h] BYREF

  CFuncLadder::GetTopPosition(this, &top);
  CFuncLadder::GetBottomPosition(this, &bottom);
  v4 = top.z - bottom.z;
  v5 = top.x - bottom.x;
  bottomToTopVec->y = top.y - bottom.y;
  bottomToTopVec->z = v4;
  bottomToTopVec->x = v5;
}


// CFuncLadder::GetDismountCount  (line 336, @0x000000000222aca0, libserver.so)
int __fastcall CFuncLadder::GetDismountCount(const CFuncLadder *const this)
{
  return this->m_Dismounts.m_Size;
}


// CFuncLadder::GetDismount  (line 346, @0x000000000222acb0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator CInfoLadderDismount*, operator[]
// globals: CEntityHandle::gm_pEntityList
CInfoLadderDismount *__fastcall CFuncLadder::GetDismount(CFuncLadder *const this, int index)
{
  CInfoLadderDismount *result; // rax
  CHandle<CInfoLadderDismount> *v3; // rdx
  uint32 m_Index; // esi
  __int16 v5; // cx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx

  result = 0;
  if ( index >= 0 && index < this->m_Dismounts.m_Size )
  {
    v3 = &this->m_Dismounts.m_Memory.m_pMemory[index];
    result = 0;
    m_Index = v3->m_Index;
    if ( v3->m_Index + 2 > 1 )
    {
      v5 = v3->m_Index;
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v3->m_Index) >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[v5 & 0x1FF];
        if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
          return v7->m_pInstance;
      }
    }
  }
  return result;
}


// CFuncLadder::FindNearbyDismountPoints  (line 359, @0x0000000002237d30, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CInfoLadderDismount> >, Element, Find, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Next, Set, TypedEntityInstanceByClassIter_t, operator CEntityInstance*, operator=, operator==<CInfoLadderDismount>, operator[]
// calls: EntityInstanceByClassIter_t::EntityInstanceByClassIter_t, EntityInstanceByClassIter_t::Next, CBaseEntity::GetNextTarget, CUtlMemory<CHandle<CInfoLadderDismount>, int>::Grow
// callers: CFuncLadder::SearchForDismountPoints
// strings: "info_ladder_dismount"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CFuncLadder::FindNearbyDismountPoints(
        CFuncLadder *const this,
        const Vector *const origin,
        float radius,
        CUtlVector<CHandle<CInfoLadderDismount>,CUtlMemory<CHandle<CInfoLadderDismount>,int> > *const list)
{
  CBaseEntity *i; // r12
  CEntityIdentity *m_pEntity; // rax
  __int16 v7; // cx
  __int64 m_Size; // r12
  int v9; // edx
  CHandle<CInfoLadderDismount> *m_pMemory; // rax
  CEntityInstance *v11; // rsi
  CEntityIdentity *v12; // rcx
  CEntityIdentity *v13; // rcx
  CEntityInstance *m_pInstance; // rdi
  CEntityIdentity *v15; // rsi
  CEntityIdentity *v16; // rsi
  int v17; // eax
  CHandle<CInfoLadderDismount> *v18; // rax
  int handle; // [rsp+20h] [rbp-70h]
  TypedEntityInstanceByClassIter_t<CInfoLadderDismount> iter; // [rsp+30h] [rbp-60h] BYREF

  EntityInstanceByClassIter_t::EntityInstanceByClassIter_t(
    &iter,
    "info_ladder_dismount",
    0,
    EntityIterType_t::ENTITY_ENUM_ITERATE_NON_DORMANT_ONLY);
  for ( i = EntityInstanceByClassIter_t::Next(&iter); i != 0; i = EntityInstanceByClassIter_t::Next(&iter) )
  {
    if ( i->m_target.u.m_Id == 0 || CBaseEntity::GetNextTarget(i) == this )
    {
      m_pEntity = i->m_pEntity;
      handle = -1;
      if ( m_pEntity != 0 )
      {
        v7 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        handle = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v7 & 0x7FFF;
      }
      m_Size = list->m_Size;
      if ( m_Size <= 0 )
      {
LABEL_21:
        v17 = list->m_Size;
        if ( list->m_Memory.m_nAllocationCount == m_Size )
        {
          CUtlMemory<CHandle<CInfoLadderDismount>,int>::Grow(&list->m_Memory, 1);
          v17 = list->m_Size;
        }
        list->m_Size = v17 + 1;
        v18 = &list->m_Memory.m_pMemory[m_Size];
        if ( v18 != 0 )
          v18->m_Index = handle;
      }
      else
      {
        v9 = 0;
        m_pMemory = list->m_Memory.m_pMemory;
        while ( 1 )
        {
          m_pInstance = 0;
          if ( m_pMemory->m_Index + 2 > 1 )
          {
            v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
            if ( v15 != 0 )
            {
              v16 = &v15[m_pMemory->m_Index & 0x1FF];
              if ( v16 != 0 && m_pMemory->m_Index == v16->m_EHandle.m_Index )
                m_pInstance = v16->m_pInstance;
            }
          }
          v11 = 0;
          if ( (handle + 2) > 1 )
          {
            v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(handle & 0x7FFF) >> 9];
            if ( v12 != 0 )
            {
              v13 = &v12[handle & 0x1FF];
              if ( v13 != 0 && v13->m_EHandle.m_Index == handle )
                v11 = v13->m_pInstance;
            }
          }
          if ( m_pInstance == v11 )
            break;
          ++v9;
          ++m_pMemory;
          if ( v9 == m_Size )
            goto LABEL_21;
        }
      }
    }
  }
}


// CFuncLadder::InputEnable  (line 390, @0x000000000221a4a0, libserver.so)
void __fastcall CFuncLadder::InputEnable(CFuncLadder *const this, inputdata_t *const inputdata)
{
  this->m_bDisabled = 0;
}


// CFuncLadder::InputDisable  (line 399, @0x000000000221a4b0, libserver.so)
void __fastcall CFuncLadder::InputDisable(CFuncLadder *const this, inputdata_t *const inputdata)
{
  this->m_bDisabled = 1;
}


// CFuncLadder::PlayerGotOn  (line 408, @0x0000000002232210, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CBaseEntity::EmitSound, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "Ladder.StepRight"
void __fastcall CFuncLadder::PlayerGotOn(CFuncLadder *const this, CBasePlayer *pPlayer)
{
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnPlayerGotOnLadder, this, pPlayer, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  CBaseEntity::EmitSound(pPlayer, "Ladder.StepRight", 0.0, 0);
}


// CFuncLadder::PlayerGotOff  (line 420, @0x0000000002232110, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CFuncLadder::PlayerGotOff(CFuncLadder *const this, CBasePlayer *pPlayer)
{
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnPlayerGotOffLadder, this, pPlayer, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


// CFuncLadder::DontGetOnLadder  (line 431, @0x000000000222ad30, libserver.so)
bool __fastcall CFuncLadder::DontGetOnLadder(const CFuncLadder *const this)
{
  return this->m_bFakeLadder.m_Value;
}


// CFuncLadder::GetSlackZ  (line 436, @0x000000000222ad40, libserver.so)  // inlines: DistTo, FastSqrt, GetFloat, Length, Lerp<float>, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
// calls: CFuncLadder::GetTopPosition, CFuncLadder::GetBottomPosition, sinf
float __fastcall CFuncLadder::GetSlackZ(CFuncLadder *const this, float a2, float fInterp)
{
  float v4; // xmm0_4
  Vector topPosition; // [rsp+10h] [rbp-30h] BYREF
  Vector bottomPosition; // [rsp+20h] [rbp-20h] BYREF

  CFuncLadder::GetTopPosition(this, &topPosition);
  CFuncLadder::GetBottomPosition(this, &bottomPosition);
  v4 = a2 * 3.141592653589793;
  return (sinf(v4)
        * (-sv_ladder_slack_z_mult.m_pParent->m_Value.m_fValue
         * fsqrt(
             (((topPosition.x - bottomPosition.x) * (topPosition.x - bottomPosition.x))
            + ((topPosition.y - bottomPosition.y) * (topPosition.y - bottomPosition.y)))
           + ((topPosition.z - bottomPosition.z) * (topPosition.z - bottomPosition.z)))))
       + ((a2 * (bottomPosition.z - topPosition.z)) + topPosition.z);
}


// CFuncLadder::GetSlackZDiff  (line 448, @0x000000000222ae10, libserver.so)  // inlines: DistTo, FastSqrt, GetFloat, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
// calls: CFuncLadder::GetTopPosition, CFuncLadder::GetBottomPosition, sinf
float __fastcall CFuncLadder::GetSlackZDiff(CFuncLadder *const this, float a2, float fInterp)
{
  float v4; // xmm0_4
  Vector topPosition; // [rsp+10h] [rbp-30h] BYREF
  Vector bottomPosition; // [rsp+20h] [rbp-20h] BYREF

  CFuncLadder::GetTopPosition(this, &topPosition);
  CFuncLadder::GetBottomPosition(this, &bottomPosition);
  v4 = a2 * 3.141592653589793;
  return sinf(v4)
       * (-sv_ladder_slack_z_mult.m_pParent->m_Value.m_fValue
        * fsqrt(
            (((topPosition.x - bottomPosition.x) * (topPosition.x - bottomPosition.x))
           + ((topPosition.y - bottomPosition.y) * (topPosition.y - bottomPosition.y)))
          + ((topPosition.z - bottomPosition.z) * (topPosition.z - bottomPosition.z))));
}


// CFuncLadder::GetSurfacePropName  (line 459, @0x000000000222aec0, libserver.so)  // inlines: String, ToCStr
const char *__fastcall CFuncLadder::GetSurfacePropName(CFuncLadder *const this)
{
  return this->m_surfacePropName.u.m_pAsString;
}


// CFuncLadder::YouForgotToImplementOrDeclareServerClass  (line 467, @0x000000000221a4c0, libserver.so)
int __fastcall CFuncLadder::YouForgotToImplementOrDeclareServerClass(CFuncLadder *const this)
{
  return 0;
}


// CFuncLadder::GetServerClass  (line 467, @0x00000000022218c0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CFuncLadder::GetServerClass(CFuncLadder *const this)
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


// CFuncLadderAlias_func_useableladder::Schema_DynamicBinding  (line 470, @0x00000000022457f0, libserver.so)
// globals: CFuncLadderAlias_func_useableladder::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncLadderAlias_func_useableladder::Schema_DynamicBinding(
        const CFuncLadderAlias_func_useableladder *const this)
{
  return CFuncLadderAlias_func_useableladder::s_pSchemaBinding;
}


// CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 470, @0x0000000002245800, libserver.so)
// globals: CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass *const this)
{
  return CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass::DestructInstance  (line 470, @0x0000000002245810, libserver.so)  // inlines: Destruct<CFuncLadderAlias_func_useableladder>
void __fastcall CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass::DestructInstance(
        CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass::FreeInstance  (line 470, @0x0000000002245830, libserver.so)
void __fastcall CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass::FreeInstance(
        CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass::CanAllocate  (line 470, @0x0000000002245850, libserver.so)
bool __fastcall CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass::CanAllocate(
        const CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 470, @0x0000000002245860, libserver.so)
// globals: CFuncLadderAlias_func_useableladder::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass *const this)
{
  return CFuncLadderAlias_func_useableladder::s_pSchemaBinding;
}


// CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass::AllocateInstance  (line 470, @0x0000000002246950, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass::AllocateInstance(
        CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1296);
  memset(v1, 0, 0x510u);
  return v1;
}


// CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 470, @0x00000000022490b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 470, @0x00000000022490d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncLadderAlias_func_useableladder::~CFuncLadderAlias_func_useableladder  (line 470, @0x000000000224c720, libserver.so)
// calls: CFuncLadder::~CFuncLadder
void __fastcall CFuncLadderAlias_func_useableladder::~CFuncLadderAlias_func_useableladder(
        CFuncLadderAlias_func_useableladder *const this)
{
  this->_vptr_IHandleEntity = &off_4045C50;
  CFuncLadder::~CFuncLadder(this);
}


// CFuncLadderAlias_func_useableladder::~CFuncLadderAlias_func_useableladder  (line 470, @0x000000000224c740, libserver.so)  // inlines: ~CFuncLadderAlias_func_useableladder
// calls: CFuncLadder::~CFuncLadder, CBaseEntity::operator delete
void __fastcall CFuncLadderAlias_func_useableladder::~CFuncLadderAlias_func_useableladder(
        CFuncLadderAlias_func_useableladder *const this)
{
  this->_vptr_IHandleEntity = &off_4045C50;
  CFuncLadder::~CFuncLadder(this);
  CBaseEntity::operator delete(this);
}


// CFuncLadderAlias_func_useableladder::GetEntityClassInternal  (line 470, @0x000000000224eda0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CFuncLadder::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_05.cpp
// strings: "func_useableladder", "CFuncLadderAlias_func_useableladder"
// globals: `guard variable for'CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass, CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncLadderAlias_func_useableladder::GetEntityClassInfo(void)::g_EntityCFuncLadderAlias_func_useableladderClassInfo, CFuncLadderAlias_func_useableladder::GetEntityClassInfo(void)::g_EntityCFuncLadderAlias_func_useableladderClassInfo
CEntityClass *__cdecl CFuncLadderAlias_func_useableladder::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass) != 0 )
  {
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_designerName.u.m_Id = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass._vptr_CEntityClass = off_3F79390;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_ComponentOffsets.m_Size = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_AllHelpers.m_Size = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_instanceUnserializer.m_atomicFields,
      4);
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_classInputs.m_Size = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_classInputs.m_Memory.m_pMemory = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_classOutputs.m_Size = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_requiredEHandle.m_Index = -1;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_hNetworkSerializer = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_pBaseClassInfo = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_pClassInfo = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_flags = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_nAllHelpersFlags = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_pScriptClassDesc = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_pInputs = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_nInputCount = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_pOutputs = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_nOutputCount = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_pGameClass = 0;
    CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass._vptr_CEntityClass = off_4045BD0;
    __cxa_guard_release(&`guard variable for'CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass);
    __cxa_atexit(
      CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncLadderAlias_func_useableladderClass != 0 )
    return &CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass;
  if ( `guard variable for'CFuncLadderAlias_func_useableladder::GetEntityClassInfo(void)::g_EntityCFuncLadderAlias_func_useableladderClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncLadderAlias_func_useableladder::GetEntityClassInfo(void)::g_EntityCFuncLadderAlias_func_useableladderClassInfo) != 0 )
  {
    EntityClassInfo = CFuncLadder::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncLadderAlias_func_useableladder::GetEntityClassInfo(void)::g_EntityCFuncLadderAlias_func_useableladderClassInfo,
      "CFuncLadderAlias_func_useableladder",
      "func_useableladder",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncLadderAlias_func_useableladder::GetEntityClassInfo(void)::g_EntityCFuncLadderAlias_func_useableladderClassInfo);
  }
  CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_pClassInfo = &CFuncLadderAlias_func_useableladder::GetEntityClassInfo(void)::g_EntityCFuncLadderAlias_func_useableladderClassInfo;
  CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_pBaseClassInfo = CFuncLadderAlias_func_useableladder::GetEntityClassInfo(void)::g_EntityCFuncLadderAlias_func_useableladderClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncLadderAlias_func_useableladderClass = &CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass;
  CFuncLadderAlias_func_useableladder::GetEntityClassInfo(void)::g_EntityCFuncLadderAlias_func_useableladderClassInfo.m_pClass = &CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass;
  CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFuncLadderAlias_func_useableladderClass->m_pComponentOverrides = 0;
  return &CFuncLadderAlias_func_useableladder::GetEntityClassInternal(void)::g_EntityCFuncLadderAlias_func_useableladderClass;
}


// CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass::ConstructInstance  (line 470, @0x00000000022507e0, libserver.so)  // inlines: CFuncLadderAlias_func_useableladder, Construct<CFuncLadderAlias_func_useableladder>
// calls: CFuncLadder::CFuncLadder
CEntityInstance *__fastcall CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass::ConstructInstance(
        CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CFuncLadder::CFuncLadder(p);
    *p = &off_4045C50;
  }
  return p;
}


// CFuncLadder::GetDataDescMap  (line 476, @0x000000000221a4d0, libserver.so)
// globals: CFuncLadder::m_DataMap
datamap_t *__fastcall CFuncLadder::GetDataDescMap(CFuncLadder *const this)
{
  return &CFuncLadder::m_DataMap;
}


// CFuncLadder::AddDatadescMetadataKeys  (line 476, @0x000000000222aed0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFuncLadder::GetEntityClass(void)
void __fastcall CFuncLadder::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFuncLadder::GetEntityClass);
}


// CFuncLadder::GetBaseMap  (line 476, @0x000000000222aef0, libserver.so)
datamap_t *__cdecl CFuncLadder::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CFuncLadder>  (line 476, @0x000000000222af00, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_05.cpp
// strings: "CFuncLadder"
// globals: `guard variable for'DataMapInit<CFuncLadder>(CFuncLadder *)::nameHolder, `guard variable for'DataMapInit<CFuncLadder>(CFuncLadder *)::dataDesc, CFuncLadder::GetEntityClass(void), CFuncLadder::m_DataMap, DataMapInit<CFuncLadder>(CFuncLadder *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFuncLadder>(CFuncLadder *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFuncLadder>(CFuncLadder *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncLadder>(CFuncLadder *)::nameHolder) != 0 )
  {
    DataMapInit<CFuncLadder>(CFuncLadder *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFuncLadder>(CFuncLadder *)::nameHolder.m_pszBase = "CFuncLadder";
    DataMapInit<CFuncLadder>(CFuncLadder *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFuncLadder>(CFuncLadder *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFuncLadder>(CFuncLadder *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFuncLadder>(CFuncLadder *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncLadder>(CFuncLadder *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFuncLadder>(CFuncLadder *)::nameHolder,
      &_dso_handle);
  }
  CFuncLadder::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CFuncLadder>(CFuncLadder *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncLadder>(CFuncLadder *)::dataDesc) != 0 )
  {
    DataMapInit<CFuncLadder>(CFuncLadder *)::dataDesc[13].pSaveRestoreOps = eventFuncs;
    DataMapInit<CFuncLadder>(CFuncLadder *)::dataDesc[14].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncLadder>(CFuncLadder *)::dataDesc);
  }
  CFuncLadder::m_DataMap.dataNumFields = 14;
  CFuncLadder::m_DataMap.dataDesc = &DataMapInit<CFuncLadder>(CFuncLadder *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFuncLadder::m_DataMap, CFuncLadder::GetEntityClass);
  return &CFuncLadder::m_DataMap;
}


// CInfoLadderDismount::DrawEntityDebugOverlays  (line 505, @0x000000000221b670, libserver.so)  // inlines: GetBool, GetInt, Vector
// calls: CBaseEntity::DrawEntityDebugOverlays, CBaseEntity::GetAbsOrigin, NDebugOverlay::Box
void __fastcall CInfoLadderDismount::DrawEntityDebugOverlays(CInfoLadderDismount *const this, uint64 nDebugOverlayBits)
{
  const Vector *AbsOrigin; // rax
  Vector mins; // [rsp+10h] [rbp-30h] BYREF
  Vector maxs; // [rsp+20h] [rbp-20h] BYREF

  CBaseEntity::DrawEntityDebugOverlays(this, nDebugOverlayBits);
  if ( developer.m_pParent->m_Value.m_nValue != 0 )
  {
    maxs.x = 16.0;
    maxs.y = 16.0;
    maxs.z = 8.0;
    mins.x = -16.0;
    mins.y = -16.0;
    mins.z = 0.0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    NDebugOverlay::Box(AbsOrigin, &mins, &maxs, 0x7Fu, 127, 127, 0.0, 127);
  }
}


// CFuncLadder::UpdateTransmitState  (line 516, @0x000000000221acd0, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CFuncLadder::UpdateTransmitState(CFuncLadder *const this)
{
  return CBaseEntity::SetTransmitState(this, 16);
}


// CFuncLadder::Precache  (line 522, @0x000000000223cb80, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheModelFromKeyValues
void __fastcall CFuncLadder::Precache(CFuncLadder *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  CBaseEntity::PrecacheModelFromKeyValues(this, pContext, 0, 0);
}


// CInfoLadderDismount::YouForgotToImplementOrDeclareServerClass  (line 530, @0x000000000221a4e0, libserver.so)
int __fastcall CInfoLadderDismount::YouForgotToImplementOrDeclareServerClass(CInfoLadderDismount *const this)
{
  return 0;
}


// CInfoLadderDismount::GetServerClass  (line 530, @0x0000000002221900, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CInfoLadderDismount::GetServerClass(CInfoLadderDismount *const this)
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


// FuncLadder_GetSurfaceprops  (line 533, @0x000000000222b030, libserver.so)  // inlines: GetSurfacePropName, String, ToCStr
// calls: __dynamic_cast
// globals: `typeinfo for'CFuncLadder
const char *__fastcall FuncLadder_GetSurfaceprops(CBaseEntity *pLadderEntity)
{
  void *v1; // rax

  if ( pLadderEntity != 0
    && (v1 = __dynamic_cast(pLadderEntity, &`typeinfo for'CBaseEntity, &`typeinfo for'CFuncLadder, 0)) != 0
    && *(v1 + 155) != 0 )
  {
    return *(v1 + 155);
  }
  else
  {
    return "ladder";
  }
}


