// Reconstructed from DWARF by pahole; not original source.

// src/game/server/baseentity.cpp:269
class C_CBaseEntity_MapInstall {
	C_CBaseEntity_MapInstall();

	// sizeof = 1
};

// src/game/server/baseentity.cpp:1205
class CThinkContextsSaveDataOps : public CDefSaveRestoreOps {
public:

	CThinkContextsSaveDataOps(CThinkContextsSaveDataOps &);
	CThinkContextsSaveDataOps(const CThinkContextsSaveDataOps &);
	CThinkContextsSaveDataOps();

private:

	virtual void Save(const SaveRestoreFieldInfo_t &, ISave *);
	virtual void Restore(const SaveRestoreFieldInfo_t &, IRestore *);
	virtual bool IsEmpty(const SaveRestoreFieldInfo_t &);
	virtual void MakeEmpty(const SaveRestoreFieldInfo_t &);

	// vtable[0] Save
	// vtable[1] Restore
	// vtable[2] IsEmpty
	// vtable[3] MakeEmpty
	// sizeof = 8
};

// src/game/server/baseentity.cpp:1792
struct pushblock_t {
	float moveBackFraction;  // +0x18
	float movetime;  // +0x1c

	// sizeof = 32
};

// src/game/server/baseentity.cpp:3674
struct TeleportListEntry_t {
	TeleportListEntry_t();

	// sizeof = 32
};

// src/game/server/baseentity.cpp:3910
class CEntFireAutoCompletionFunctor : public ICommandCallback, public ICommandCompletionCallback {
public:

private:

	const const char * pCommandName;  // +0x10
	CEntFireAutoCompletionFunctor(CEntFireAutoCompletionFunctor &);
	CEntFireAutoCompletionFunctor(const CEntFireAutoCompletionFunctor &);
	CEntFireAutoCompletionFunctor();
	virtual void CommandCallback(const CCommandContext &, const CCommand &);
	virtual int CommandCompletionCallback(const char *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	int EntFire_AutoCompleteInput(CEntityInstance *, const char *, const char *, int, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);

	// vtable[0] CommandCallback
	// vtable[1] CommandCompletionCallback
	// sizeof = 24
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// InitManifestDesc<BaseEntity::CTemplateArg>  (line 111, @0x0000000002158350, libserver.so)  // inlines: ResourceManifestEntry_t
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: _GLOBAL__sub_I__unity_base_01.cpp
// strings: "materials/tools/show_collision_geometry_wire.vmat", "materials/tools/show_collision_geometry.vmat"
// globals: `guard variable for'InitManifestDesc<BaseEntity::CTemplateArg>(BaseEntity::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<BaseEntity::CTemplateArg>(BaseEntity::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<BaseEntity::CTemplateArg>(BaseEntity::CTemplateArg &)::s_Manifest, _ZGRZ16InitManifestDescIN10BaseEntity12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries2, g_hShowCollisionGeometryMatWireframe, g_hShowCollisionGeometryFlatshaded, _ZGRZ16InitManifestDescIN10BaseEntity12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries1
ResourceManifestDesc_t *__fastcall InitManifestDesc<BaseEntity::CTemplateArg>(BaseEntity::CTemplateArg *const def)
{
  if ( `guard variable for'ResourceManifestDesc_t * InitManifestDesc<BaseEntity::CTemplateArg>(BaseEntity::CTemplateArg &)::s_pManifestEntries == 0
    && __cxa_guard_acquire(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<BaseEntity::CTemplateArg>(BaseEntity::CTemplateArg &)::s_pManifestEntries) != 0 )
  {
    byte_4AFFF68 = 0;
    ZGRZ16InitManifestDescIN10BaseEntity12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries2 = "materials/tools/show_collision_geometry_wire.vmat";
    qword_4AFFF70 = &g_hShowCollisionGeometryMatWireframe;
    qword_4AFFF88 = "materials/tools/show_collision_geometry.vmat";
    qword_4AFFF98 = &g_hShowCollisionGeometryFlatshaded;
    ZGRZ16InitManifestDescIN10BaseEntity12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries1 = &ZGRZ16InitManifestDescIN10BaseEntity12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries2;
    qword_4AFFF78 = 0;
    InitManifestDesc<BaseEntity::CTemplateArg>(BaseEntity::CTemplateArg &)::s_pManifestEntries._M_array = &ZGRZ16InitManifestDescIN10BaseEntity12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries1;
    dword_4AFFF80 = 0;
    byte_4AFFF90 = 0;
    qword_4AFFFA0 = 0;
    dword_4AFFFA8 = 0;
    qword_4AFFFB8 = 2;
    __cxa_guard_release(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<BaseEntity::CTemplateArg>(BaseEntity::CTemplateArg &)::s_pManifestEntries);
  }
  InitManifestDesc<BaseEntity::CTemplateArg>(BaseEntity::CTemplateArg &)::s_Manifest.m_pEntryGroups = &InitManifestDesc<BaseEntity::CTemplateArg>(BaseEntity::CTemplateArg &)::s_pManifestEntries;
  return &InitManifestDesc<BaseEntity::CTemplateArg>(BaseEntity::CTemplateArg &)::s_Manifest;
}


// BuildMergedPlayerIndexListForSplitUser  (line 116, @0x0000000002172950, libserver.so)  // inlines: AddToTail, CopyConstruct<CEntityIndex>, Element, GrowMemory, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, operator[]
// calls: CUtlMemory<CEntityIndex, int>::Grow
void __fastcall BuildMergedPlayerIndexListForSplitUser(
        CEntityIndex nPlayerIndex,
        CUtlVector<CEntityIndex,CUtlMemory<CEntityIndex,int> > *const list)
{
  unsigned int m_Data; // ebx
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rax
  int v6; // eax
  __int64 m_Size; // r13
  int v8; // eax
  CEntityIndex *v9; // rax

  m_Data = nPlayerIndex.m_Data;
  if ( nPlayerIndex.m_Data <= 0x7FFE )
  {
    v3 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[nPlayerIndex.m_Data >> 9];
    if ( v3 != 0 )
    {
      v4 = &v3[nPlayerIndex.m_Data & 0x1FF];
      if ( v4 != 0 && nPlayerIndex.m_Data == (v4->m_EHandle.m_Index & 0x7FFF) && v4->m_pInstance != 0 )
      {
        if ( (*(*engine + 408LL))(engine, nPlayerIndex.m_Data) != 0 )
        {
          v6 = (*(*engine + 416LL))(engine, m_Data);
          if ( v6 > 0 )
            m_Data = v6;
        }
        m_Size = list->m_Size;
        v8 = list->m_Size;
        if ( m_Size == list->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CEntityIndex,int>::Grow(&list->m_Memory, 1);
          v8 = list->m_Size;
        }
        list->m_Size = v8 + 1;
        v9 = &list->m_Memory.m_pMemory[m_Size];
        if ( v9 != 0 )
          v9->m_Data = m_Data;
      }
    }
  }
}


// CEntityDamageHandlerProxy::RejectDamage  (line 236, @0x000000000213d600, libserver.so)
bool __fastcall CEntityDamageHandlerProxy::RejectDamage(
        CEntityDamageHandlerProxy *const this,
        CBaseEntity *pEnt,
        const CTakeDamageInfo *const info)
{
  return pEnt != 0 && (*(pEnt->_vptr_IHandleEntity + 31))(pEnt, info);
}


// CEntityDamageHandlerProxy::ModifyDamage  (line 244, @0x000000000213d630, libserver.so)
void __fastcall CEntityDamageHandlerProxy::ModifyDamage(
        CEntityDamageHandlerProxy *const this,
        CBaseEntity *pEnt,
        CTakeDamageInfo *const info)
{
  if ( pEnt != 0 )
    (*(pEnt->_vptr_IHandleEntity + 32))(pEnt, info);
}


// CEntityDamageHandlerProxy::ReactToDamage  (line 252, @0x000000000213d660, libserver.so)
void __fastcall CEntityDamageHandlerProxy::ReactToDamage(
        CEntityDamageHandlerProxy *const this,
        CBaseEntity *pEnt,
        const CTakeDamageInfo *const info)
{
  if ( pEnt != 0 )
    (*(pEnt->_vptr_IHandleEntity + 33))(pEnt, info);
}


// CBaseEntity::YouForgotToImplementOrDeclareServerClass  (line 269, @0x000000000213d690, libserver.so)
int __fastcall CBaseEntity::YouForgotToImplementOrDeclareServerClass(CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::GetServerClass  (line 269, @0x000000000214a550, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CBaseEntity::GetServerClass(CBaseEntity *const this)
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


// CBaseEntity::CBaseEntity  (line 272, @0x00000000021736e0, libserver.so)  // inlines: AddEFlags, BuildFlattenedSerializerInfo_t, CBitVec, CBitVecT, CEntityHandle, CEntityIOOutput, CHandle, CNetworkHandleBase, CNetworkVarBase, CNetworkVectorBase, CNetworkVelocityVector, CNetworkedQuantizedFloat, CUtlLinkedList, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ClearAll, Cm_vecVelocityInitializer, ConstructList, EnsureValidValue, EnsureValidValue<DamageOptions_t>, EnsureValidValue<MoveCollide_t>, EnsureValidValue<MoveType_t>, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<gender_t>, EnsureValidValue<int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, FindOrCreateFlattenedSerializer<CBaseEntity>, GetEncoder, GetQuantizedFloatEncoderByIndex, Init<true>, IsUnflattenedField<CBaseEntity>, MarkPVSInformationDirty, NetworkStateChanged, Purge, RemoveAll, ResetDbgInfo, Schema_StaticBinding, Set, SetNetworkQuantizeOriginAngAngles, SetUnflattened, Zero, memset, operator=, operator=<bool>, operator=<float>, operator=<int>, ~CGameEntity, ~CUtlLinkedList, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CGameEntity::CGameEntity, CNetworkTransmitComponent::CNetworkTransmitComponent, FindOrCreateQuantizedFloatEncoder, CNetworkTransmitComponent::Init, CBaseEntity::SetMoveType, CBaseEntity::SetOwnerEntity, CBaseEntity::SetCheckUntouch, CBaseEntity::ClearFlags, CBaseEntity::SetFriction, CBaseEntity::Schema_VerifyBindingIsRegistered, CUtlLinkedList<CDamageModifier*, int, false, int, CUtlMemory<UtlLinkedListElem_t<CDamageModifier*, int>, int> >::RemoveAll, CUtlMemory<UtlLinkedListElem_t<CDamageModifier*, int>, int>::Purge (18 total)
// callers: CBaseEntity::CEntityInstanceEntityClass::ConstructInstance, CServerOnlyEntity::CEntityInstanceEntityClass::ConstructInstance, CLogicalEntity::CEntityInstanceEntityClass::ConstructInstance, CPointEntity::CEntityInstanceEntityClass::ConstructInstance, CInfoTarget::CEntityInstanceEntityClass::ConstructInstance, CInfoParticleTarget::CEntityInstanceEntityClass::ConstructInstance, CMultiLightProxy::CEntityInstanceEntityClass::ConstructInstance, CEnvClock::CEnvClock, CTonemapController2::CTonemapController2, CFogController::CFogController, CInfoWorldLayer::CInfoWorldLayer, CPointCamera::CPointCamera (247 total)
// strings: "m_vecX", "m_vecY", "m_vecZ", "m_vecVelocity"
// globals: IFlattenedSerializers::FindOrCreateFlattenedSerializer<CBaseEntity>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle
void __fastcall CBaseEntity::CBaseEntity(CBaseEntity *const this)
{
  CNetworkTransmitComponent *p_m_NetworkTransmitComponent; // r13
  __int64 v3; // rdx
  vec_t z; // eax
  uint16 QuantizedFloatEncoder; // ax
  float m_Value; // xmm1_4
  __int64 v7; // rax
  float v8; // xmm0_4
  uint16 v9; // ax
  float v10; // xmm1_4
  __int64 v11; // rax
  float v12; // xmm0_4
  uint16 v13; // ax
  float v14; // xmm1_4
  __int64 v15; // rax
  float v16; // xmm0_4
  __int64 v17; // rsi
  IFlattenedSerializers *v18; // r12
  CBodyComponent::Storage_t m_CBodyComponent; // rax
  bool v20; // zf
  CGlobalVars *v21; // rax
  int tickcount; // eax
  float v23; // xmm1_4
  _QWORD v24[2]; // [rsp+0h] [rbp-40h] BYREF
  __int64 *v25; // [rsp+10h] [rbp-30h]
  char v26; // [rsp+18h] [rbp-28h]
  char v27; // [rsp+19h] [rbp-27h]
  char v28; // [rsp+1Ah] [rbp-26h]

  p_m_NetworkTransmitComponent = &this->m_NetworkTransmitComponent;
  CGameEntity::CGameEntity(this);
  this->_vptr_IHandleEntity = &off_4004CF0;
  CNetworkTransmitComponent::CNetworkTransmitComponent(p_m_NetworkTransmitComponent);
  this->m_aThinkFunctions.m_Size = 0;
  this->m_OnKilled._vptr_CEntityIOOutput = off_3F7C190;
  this->m_aThinkFunctions.m_Memory.m_pMemory = 0;
  this->m_aThinkFunctions.m_Memory.m_nAllocationCount = 0;
  this->m_aThinkFunctions.m_Memory.m_nGrowSize = 0;
  v3 = *&vec3_origin.x;
  this->m_isSteadyState = 0;
  this->m_ResponseContexts.m_Size = 0;
  this->m_ResponseContexts.m_Memory.m_pMemory = 0;
  this->m_ResponseContexts.m_Memory.m_nAllocationCount = 0;
  this->m_ResponseContexts.m_Memory.m_nGrowSize = 0;
  this->m_iszResponseContext.u.m_Id = 0;
  this->m_iHealth.m_Value = 0;
  this->m_iMaxHealth.m_Value = 0;
  this->m_lifeState.m_Value = 0;
  this->m_takedamage.m_Value = DamageOptions_t::DAMAGE_NO;
  this->m_MoveCollide.m_Value = MoveCollide_t::MOVECOLLIDE_DEFAULT;
  this->m_MoveType.m_Value = MoveType_t::MOVETYPE_NONE;
  this->m_target.u.m_Id = 0;
  this->m_hDamageFilter.m_Index = -1;
  this->m_iszDamageFilterName.u.m_Id = 0;
  this->m_flAnimTime.m_Value = 0.0;
  this->m_flSimulationTime.m_Value = 0.0;
  this->m_flCreateTime.m_Value = 0.0;
  this->m_bClientSideRagdoll.m_Value = 0;
  this->m_ubInterpolationFrame.m_Value = 0;
  this->m_iTeamNum.m_Value = 0;
  this->m_iGlobalname.u.m_Id = 0;
  this->m_spawnflags.m_Value = 0;
  this->m_nNextThinkTick.m_Value = 0;
  this->m_fFlags.m_Value = 0;
  this->m_vecAbsVelocity.m_Value.z = 0.0;
  this->m_vecAbsVelocity.m_Value.y = 0.0;
  this->m_vecAbsVelocity.m_Value.x = 0.0;
  *&this->m_vecVelocity.m_Value.x = v3;
  z = vec3_origin.z;
  this->m_vecVelocity.m_vecX.m_Value = 0.0;
  this->m_vecVelocity.m_Value.z = z;
  QuantizedFloatEncoder = FindOrCreateQuantizedFloatEncoder(1, "m_vecX", 2524840829LL, 18, 4, -4096.0, 4096.0);
  this->m_vecVelocity.m_vecX.m_nEncoder = QuantizedFloatEncoder;
  m_Value = this->m_vecVelocity.m_vecX.m_Value;
  v7 = g_pQuantizedFloatEncoders + 32LL * QuantizedFloatEncoder;
  v8 = *(v7 + 12);
  if ( m_Value <= v8 )
    v8 = fmaxf(*(v7 + 8), m_Value);
  this->m_vecVelocity.m_vecX.m_Value = v8;
  this->m_vecVelocity.m_vecY.m_Value = 0.0;
  v9 = FindOrCreateQuantizedFloatEncoder(1, "m_vecY", 2625667396LL, 18, 4, -4096.0, 4096.0);
  this->m_vecVelocity.m_vecY.m_nEncoder = v9;
  v10 = this->m_vecVelocity.m_vecY.m_Value;
  v11 = g_pQuantizedFloatEncoders + 32LL * v9;
  v12 = *(v11 + 12);
  if ( v10 <= v12 )
    v12 = fmaxf(*(v11 + 8), v10);
  this->m_vecVelocity.m_vecY.m_Value = v12;
  this->m_vecVelocity.m_vecZ.m_Value = 0.0;
  v13 = FindOrCreateQuantizedFloatEncoder(1, "m_vecZ", 1430821094, 18, 4, -4096.0, 4096.0);
  this->m_vecVelocity.m_vecZ.m_nEncoder = v13;
  v14 = this->m_vecVelocity.m_vecZ.m_Value;
  v15 = g_pQuantizedFloatEncoders + 32LL * v13;
  v16 = *(v15 + 12);
  if ( v14 <= v16 )
    v16 = fmaxf(*(v15 + 8), v14);
  v17 = IFlattenedSerializers::FindOrCreateFlattenedSerializer<CBaseEntity>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  this->m_vecVelocity.m_vecZ.m_Value = v16;
  this->m_m_vecVelocityInitializer._vptr_INetworkStateChangedRouter = &off_3FFFD50;
  this->m_vecVelocity.m_pStateChanged = &this->m_m_vecVelocityInitializer;
  v18 = g_pFlattenedSerializers;
  if ( v17 == 0 )
  {
    v24[0] = 0;
    v24[1] = 0;
    v25 = 0;
    CBaseEntity::Schema_VerifyBindingIsRegistered();
    v27 = 0;
    v26 = 0;
    v28 = 0;
    v24[0] = CBaseEntity::s_pSchemaBinding->m_pClassInfo_N;
    v25 = &IFlattenedSerializers::FindOrCreateFlattenedSerializer<CBaseEntity>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    (**v18)(v18, v24, 1);
    v17 = IFlattenedSerializers::FindOrCreateFlattenedSerializer<CBaseEntity>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  this->m_vecVelocity.m_vecX.m_bUnflattened = (*(*v18 + 296LL))(v18, v17, "m_vecVelocity");
  this->m_OnUser1._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnUser2._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnUser3._vptr_CEntityIOOutput = off_3F7C190;
  this->m_vecBaseVelocity.m_Value.z = 0.0;
  this->m_vecBaseVelocity.m_Value.y = 0.0;
  this->m_vecBaseVelocity.m_Value.x = 0.0;
  this->m_hEffectEntity.m_Value.m_Index = -1;
  this->m_hOwnerEntity.m_Value.m_Index = -1;
  this->m_fEffects.m_Value = 0;
  this->m_hGroundEntity.m_Value.m_Index = -1;
  this->m_flFriction.m_Value = 0.0;
  this->m_flElasticity.m_Value = 0.0;
  this->m_Gender.m_Value = gender_t::GENDER_NONE;
  this->m_nWaterLevel.m_Value = 0;
  this->m_bSimulatedEveryTick.m_Value = 0;
  this->m_bAnimatedEveryTick.m_Value = 0;
  this->m_nMinCPULevel.m_Value = 0;
  this->m_nMaxCPULevel.m_Value = 0;
  this->m_nMinGPULevel.m_Value = 0;
  this->m_nMaxGPULevel.m_Value = 0;
  this->m_iTextureFrameIndex.m_Value = 0;
  this->m_DamageModifiers.m_Memory.m_pMemory = 0;
  this->m_DamageModifiers.m_Memory.m_nAllocationCount = 0;
  this->m_DamageModifiers.m_Memory.m_nGrowSize = 0;
  this->m_DamageModifiers.m_LastAlloc.index = -1;
  this->m_DamageModifiers.m_Head = -1;
  this->m_DamageModifiers.m_Tail = -1;
  this->m_DamageModifiers.m_FirstFree = -1;
  this->m_DamageModifiers.m_ElementCount = 0;
  this->m_DamageModifiers.m_NumAlloced = 0;
  this->m_DamageModifiers.m_pElements = 0;
  this->m_AIAddOn.u.m_Id = 0;
  this->m_OnUser4._vptr_CEntityIOOutput = off_3F7C190;
  m_CBodyComponent = this->m_CBodyComponent;
  this->m_flNavIgnoreUntilTime.m_Value = 0.0;
  this->m_pBlocker.m_Index = -1;
  this->m_pGameSceneNode = m_CBodyComponent->m_pSceneNode;
  CNetworkTransmitComponent::Init(p_m_NetworkTransmitComponent, this);
  v20 = this->m_bSimulatedEveryTick.m_Value;
  this->m_pCollision = 0;
  if ( !v20 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 562, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bSimulatedEveryTick.m_Value = 1;
  }
  if ( !this->m_bAnimatedEveryTick.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 563, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bAnimatedEveryTick.m_Value = 1;
  }
  if ( this->m_nNextThinkTick.m_Value != -1 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 408, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nNextThinkTick.m_Value = -1;
  }
  this->m_iEFlags |= 0xC40000u;
  if ( this->m_flElasticity.m_Value != 1.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 556, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flElasticity.m_Value = 1.0;
  }
  v20 = this->m_iTeamNum.m_Value == 0;
  this->m_iInitialTeamNum = 0;
  if ( v20 )
  {
    v21 = gpGlobals;
    if ( gpGlobals != 0 )
    {
LABEL_19:
      tickcount = v21->tickcount;
      goto LABEL_20;
    }
  }
  else
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 383, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iTeamNum.m_Value = 0;
    v21 = gpGlobals;
    if ( gpGlobals != 0 )
      goto LABEL_19;
  }
  tickcount = 0;
LABEL_20:
  this->m_nLastThinkTick = tickcount;
  this->m_nSimulationTick = -1;
  this->m_pBlocker.m_Index = -1;
  this->m_iCurrentThinkContext = -1;
  this->m_nSlimeTouch = 0;
  this->m_nWaterTouch = 0;
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  CBaseEntity::SetOwnerEntity(this, 0);
  CBaseEntity::SetCheckUntouch(this, 0);
  CBaseEntity::ClearFlags(this);
  CBaseEntity::SetFriction(this, COERCE_DOUBLE(1065353216), v23);
  this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  this->m_bNetworkQuantizeOriginAndAngles = 0;
  this->m_iEFlags |= 0x40000u;
  if ( this->m_flCreateTime.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 376, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flCreateTime.m_Value = 0.0;
  }
  this->m_bIsDOTANPC = 0;
  this->m_bDisableLowViolence = 0;
  this->m_iSentToClients = 0;
  this->m_bIsNPC = 0;
}


// CBaseEntity::OnNewModel  (line 354, @0x00000000021424a0, libserver.so)  // inlines: DispatchUpdateTransmitState, NetworkStateChanged, ResourceGetName, ResourceGetName<260ul>, Set, String, V_strncpy<int>, operator=<gender_t>, operator==
// calls: CBaseEntity::DispatchUpdateTransmitState, _V_strncpy, __stack_chk_fail
// callers: CBaseAnimating::OnNewModel
void __fastcall CBaseEntity::OnNewModel(CBaseEntity *const this, HModel hOldModel, HModel hNewModel)
{
  const char **v5; // rax
  const char *v6; // rsi
  gender_t v7; // r12
  char pName[264]; // [rsp+0h] [rbp-120h] BYREF
  unsigned __int64 v9; // [rsp+108h] [rbp-18h]

  v9 = __readfsqword(0x28u);
  if ( this->m_pEntity != 0 )
    CBaseEntity::DispatchUpdateTransmitState(this);
  if ( hNewModel.m_pBinding->m_pData != 0 )
  {
    v5 = *(hNewModel.m_pBinding->m_pData + 1);
    if ( v5 != 0 )
    {
      v6 = "";
      if ( *v5 != 0 )
        v6 = *v5;
      _V_strncpy(pName, v6, 260);
    }
    else
    {
      _V_strncpy(pName, "", 260);
    }
    v7 = (*(*g_pHostUtils + 88LL))(g_pHostUtils, pName);
    if ( v7 != this->m_Gender.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 560, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_Gender.m_Value = v7;
    }
  }
  else if ( this->m_Gender.m_Value != gender_t::GENDER_NONE )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 560, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_Gender.m_Value = gender_t::GENDER_NONE;
  }
}


// CBaseEntity::~CBaseEntity  (line 376, @0x0000000002173f00, libserver.so)  // inlines: DestroyAllDataObjects, Purge, RemoveAll, ~CGameEntity, ~CUtlLinkedList, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CPhysicsGameSystem::ShutdownFrictionSounds, CBaseEntity::VPhysicsDestroyObject, CEntityIdentity::DestroyAllDataObjects, CUtlLinkedList<CDamageModifier*, int, false, int, CUtlMemory<UtlLinkedListElem_t<CDamageModifier*, int>, int> >::RemoveAll, CUtlMemory<UtlLinkedListElem_t<CDamageModifier*, int>, int>::Purge, CUtlVectorBase<thinkfunc_t, CUtlMemory<thinkfunc_t, int> >::RemoveAll, CNetworkTransmitComponent::~CNetworkTransmitComponent, CEntityInstance::~CEntityInstance, CUtlMemory<ResponseContext_t, int>::Purge, CUtlMemory<thinkfunc_t, int>::Purge
// callers: CPointEntity::~CPointEntity, CInfoTarget::~CInfoTarget, CInfoParticleTarget::~CInfoParticleTarget, CFogController::~CFogController, CInfoWorldLayer::~CInfoWorldLayer, CLogicalEntity::~CLogicalEntity, CEnvClock::~CEnvClock, CTonemapController2::~CTonemapController2, CTonemapController2Alias_env_tonemap_controller2::~CTonemapController2Alias_env_tonemap_controller2, CPointCamera::~CPointCamera, CMultiLightProxy::~CMultiLightProxy, CTonemapController2::CTonemapController2 (312 total)
void __fastcall CBaseEntity::~CBaseEntity(CBaseEntity *const this)
{
  CEntityIdentity *m_pEntity; // rdi
  bool v3; // zf

  this->_vptr_IHandleEntity = &off_4004CF0;
  CPhysicsGameSystem::ShutdownFrictionSounds(g_pPhysicsGameSystem, this);
  CBaseEntity::VPhysicsDestroyObject(this);
  m_pEntity = this->m_pEntity;
  g_bDisableEhandleAccess = 0;
  CEntityIdentity::DestroyAllDataObjects(m_pEntity);
  g_bDisableEhandleAccess = 1;
  CUtlLinkedList<CDamageModifier *,int,false,int,CUtlMemory<UtlLinkedListElem_t<CDamageModifier *,int>,int>>::RemoveAll(&this->m_DamageModifiers);
  CUtlMemory<UtlLinkedListElem_t<CDamageModifier *,int>,int>::Purge(&this->m_DamageModifiers.m_Memory);
  v3 = (this->m_ResponseContexts.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ResponseContexts.m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<ResponseContext_t,int>::Purge(&this->m_ResponseContexts.m_Memory);
    if ( (this->m_ResponseContexts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<ResponseContext_t,int>::Purge(&this->m_ResponseContexts.m_Memory);
  }
  CUtlVectorBase<thinkfunc_t,CUtlMemory<thinkfunc_t,int>>::RemoveAll(&this->m_aThinkFunctions);
  if ( (this->m_aThinkFunctions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<thinkfunc_t,int>::Purge(&this->m_aThinkFunctions.m_Memory);
    if ( (this->m_aThinkFunctions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<thinkfunc_t,int>::Purge(&this->m_aThinkFunctions.m_Memory);
  }
  CNetworkTransmitComponent::~CNetworkTransmitComponent(&this->m_NetworkTransmitComponent);
  this->_vptr_IHandleEntity = &off_3FC3AD0;
  CEntityInstance::~CEntityInstance(this);
}


// CBaseEntity::~CBaseEntity  (line 376, @0x0000000002174000, libserver.so)  // inlines: operator delete
// calls: CBaseEntity::~CBaseEntity
void __fastcall CBaseEntity::~CBaseEntity(CBaseEntity *const this)
{
  CBaseEntity::~CBaseEntity(this);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this);
}


// CBaseEntity::PostClientActive  (line 404, @0x000000000213d6a0, libserver.so)
// callers: CItemGeneric::PostClientActive, CBaseTrigger::PostClientActive
void __fastcall CBaseEntity::PostClientActive(CBaseEntity *const this)
{
  ;
}


// CBaseEntity::ScriptGetBoundingMins  (line 412, @0x0000000002158430, libserver.so)  // inlines: CollisionMins
// calls: CBaseEntity::GetAbsOrigin
const Vector *__fastcall CBaseEntity::ScriptGetBoundingMins(CBaseEntity *const this)
{
  CCollisionProperty *m_pCollision; // rax

  m_pCollision = this->m_pCollision;
  if ( m_pCollision != 0 )
    return (*(m_pCollision->_vptr_ICollideable + 1))(this->m_pCollision);
  else
    return CBaseEntity::GetAbsOrigin(this);
}


// CBaseEntity::ScriptGetBoundingMaxs  (line 420, @0x0000000002158460, libserver.so)  // inlines: CollisionMaxs
// calls: CBaseEntity::GetAbsOrigin
const Vector *__fastcall CBaseEntity::ScriptGetBoundingMaxs(CBaseEntity *const this)
{
  CCollisionProperty *m_pCollision; // rax

  m_pCollision = this->m_pCollision;
  if ( m_pCollision != 0 )
    return (*(m_pCollision->_vptr_ICollideable + 2))(this->m_pCollision);
  else
    return CBaseEntity::GetAbsOrigin(this);
}


// CBaseEntity::ScriptGetBounds  (line 428, @0x000000000216bb90, libserver.so)  // inlines: CVariantBase, CollisionMaxs, CollisionMins, CopyData<Vector>, Free, TakeOwnership, ~CVariantBase
// calls: CBaseEntity::GetAbsOrigin, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
__int64 *__fastcall CBaseEntity::ScriptGetBounds(__int64 *a1, CBaseEntity *const this)
{
  CCollisionProperty *m_pCollision; // rdi
  __int64 v5; // r15
  const Vector *AbsOrigin; // rax
  CCollisionProperty *v7; // rdi
  const Vector *v8; // rax
  void (__fastcall *v10)(IScriptVM *, __int64, char *, const Vector **); // [rsp+8h] [rbp-48h]
  void (__fastcall *v11)(IScriptVM *, __int64, char *, const Vector **); // [rsp+8h] [rbp-48h]
  const Vector *v12; // [rsp+10h] [rbp-40h] BYREF
  __int16 v13; // [rsp+18h] [rbp-38h]
  __int16 v14; // [rsp+1Ah] [rbp-36h]

  *a1 = 0;
  *(a1 + 5) = 0;
  *(a1 + 4) = 0;
  (*(*g_pScriptVM + 264LL))(g_pScriptVM, a1);
  m_pCollision = this->m_pCollision;
  v5 = *a1;
  v10 = *(*g_pScriptVM + 240LL);
  if ( m_pCollision != 0 )
    AbsOrigin = (*(m_pCollision->_vptr_ICollideable + 1))(m_pCollision);
  else
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v12 = AbsOrigin;
  v14 = 0;
  v13 = 3;
  v10(g_pScriptVM, v5, "Mins", &v12);
  if ( (v14 & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v12);
  v7 = this->m_pCollision;
  v11 = *(*g_pScriptVM + 240LL);
  if ( v7 != 0 )
    v8 = (*(v7->_vptr_ICollideable + 2))(v7);
  else
    v8 = CBaseEntity::GetAbsOrigin(this);
  v12 = v8;
  v14 = 0;
  v13 = 3;
  v11(g_pScriptVM, v5, "Maxs", &v12);
  if ( (v14 & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v12);
  if ( *(a1 + 4) == 31 )
    *(a1 + 4) = 36;
  return a1;
}


// CBaseEntity::BodyTarget  (line 443, @0x000000000213d6b0, libserver.so)
Vector __fastcall CBaseEntity::BodyTarget(CBaseEntity *const this, const Vector *const posSrc, bool bNoisy)
{
  return (*(this->_vptr_IHandleEntity + 62))(this, posSrc, bNoisy);
}


// CBaseEntity::HeadTarget  (line 451, @0x000000000213d6d0, libserver.so)
Vector __fastcall CBaseEntity::HeadTarget(CBaseEntity *const this, const Vector *const posSrc)
{
  return (*(this->_vptr_IHandleEntity + 164))(this, posSrc);
}


// CBaseEntity::SetParent  (line 458, @0x0000000002158490, libserver.so)  // inlines: CUtlSymbolLarge, GetClassNameAsCStr, GetClassname, GetDebugName, String, ToCStr, operator!=
// calls: CGameEntitySystem::FindEntityByName, CEntityIdentity::GetDebugName, Msg, CBaseEntity::SetParent
// callers: CBaseEntity::InputSetParent
// strings: "Entity %s(%s) is ambiguously parented to %s, because there is more than one entity by tha, "Entity %s(%s) has bad parent %s\n"
void __fastcall CBaseEntity::SetParent(
        CBaseEntity *const this,
        string_t newParent,
        CBaseEntity *pActivator,
        CUtlStringToken nBoneOrAttachName)
{
  CBaseEntity *EntityByName; // rax
  CBaseEntity *v8; // r14
  const char *v9; // r13
  const char *v10; // rax
  CEntityIdentity *v11; // rcx
  const char *v12; // rsi
  const char *DebugName; // rax
  CEntityIdentity *m_pEntity; // rdi
  const char *m_pAsString; // rsi
  const char *v17; // [rsp+8h] [rbp-48h]
  string_t iszName; // [rsp+10h] [rbp-40h] BYREF

  iszName.u.m_Id = *newParent.u.m_Id;
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, pActivator, 0, 0);
  v8 = EntityByName;
  if ( *newParent.u.m_Id != 0 && EntityByName == 0 )
  {
    v17 = *newParent.u.m_pAsString;
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    m_pEntity = this->m_pEntity;
    m_pAsString = "";
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    Msg("Entity %s(%s) has bad parent %s\n", m_pAsString, DebugName, v17);
  }
  else
  {
    iszName.u.m_Id = *newParent.u.m_Id;
    if ( CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, EntityByName, &iszName, this, pActivator, 0, 0) != 0 )
    {
      v9 = "";
      if ( *newParent.u.m_Id != 0 )
        v9 = *newParent.u.m_pAsString;
      v10 = CEntityIdentity::GetDebugName(this->m_pEntity);
      v11 = this->m_pEntity;
      v12 = "";
      if ( v11->m_designerName.u.m_Id != 0 )
        v12 = v11->m_designerName.u.m_pAsString;
      Msg(
        "Entity %s(%s) is ambiguously parented to %s, because there is more than one entity by that name.\n",
        v12,
        v10,
        v9);
    }
    CBaseEntity::SetParent(this, v8, nBoneOrAttachName, 0);
  }
}


// CBaseEntity::TransformStepData_ParentToWorld  (line 484, @0x00000000021588a0, libserver.so)  // inlines: GetDataObject
// calls: CEntityIdentity::GetDataObject, UTIL_ParentToWorldSpace
// callers: CGameSceneNode::UpdateEntityForHierarchyChange
void __fastcall CBaseEntity::TransformStepData_ParentToWorld(CBaseEntity *const this, CBaseEntity *pParent)
{
  char *DataObject; // rax
  char *v4; // rbx

  DataObject = CEntityIdentity::GetDataObject(this->m_pEntity, 2);
  v4 = DataObject;
  if ( DataObject != 0 )
  {
    UTIL_ParentToWorldSpace(pParent, (DataObject + 8), (DataObject + 20));
    UTIL_ParentToWorldSpace(pParent, (v4 + 40), (v4 + 52));
  }
}


// CBaseEntity::TransformStepData_ParentToParent  (line 502, @0x00000000021588f0, libserver.so)  // inlines: GetDataObject
// calls: CEntityIdentity::GetDataObject, UTIL_ParentToWorldSpace, UTIL_WorldToParentSpace
// callers: CGameSceneNode::UpdateEntityForHierarchyChange
void __fastcall CBaseEntity::TransformStepData_ParentToParent(
        CBaseEntity *const this,
        CBaseEntity *pOldParent,
        CBaseEntity *pNewParent)
{
  char *DataObject; // rax
  char *v6; // rbx
  Quaternion *v7; // r15
  Vector *v8; // r14
  Vector *v9; // rsi
  Quaternion *v10; // r14
  Vector *v11; // rbx

  DataObject = CEntityIdentity::GetDataObject(this->m_pEntity, 2);
  v6 = DataObject;
  if ( DataObject != 0 )
  {
    v7 = (DataObject + 20);
    v8 = (DataObject + 8);
    UTIL_ParentToWorldSpace(pOldParent, (DataObject + 8), (DataObject + 20));
    v9 = v8;
    v10 = (v6 + 52);
    v11 = (v6 + 40);
    UTIL_WorldToParentSpace(pNewParent, v9, v7);
    UTIL_ParentToWorldSpace(pOldParent, v11, v10);
    UTIL_WorldToParentSpace(pNewParent, v11, v10);
  }
}


// CBaseEntity::TransformStepData_WorldToParent  (line 523, @0x0000000002158990, libserver.so)  // inlines: GetDataObject
// calls: CEntityIdentity::GetDataObject, UTIL_WorldToParentSpace
// callers: CGameSceneNode::UpdateEntityForHierarchyChange
void __fastcall CBaseEntity::TransformStepData_WorldToParent(CBaseEntity *const this, CBaseEntity *pParent)
{
  char *DataObject; // rax
  char *v4; // rbx

  DataObject = CEntityIdentity::GetDataObject(this->m_pEntity, 2);
  v4 = DataObject;
  if ( DataObject != 0 )
  {
    UTIL_WorldToParentSpace(pParent, (DataObject + 8), (DataObject + 20));
    UTIL_WorldToParentSpace(pParent, (v4 + 40), (v4 + 52));
  }
}


// CBaseEntity::ValidateEntityConnections  (line 537, @0x00000000021589e0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, ClassMatches, GetClassNameAsCStr, GetClassname, GetDebugName, GetEntityIOOutputs, GetOutputConnectionCount, Purge, RemoveAll, String, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityIdentity::ClassMatches, CEntityIdentity::GetEntityIOOutputs, CUtlMemory<CEntityIOOutput*, int>::Purge, Warning, CEntityIdentity::GetDebugName, _Unwind_Resume
// strings: "scripted_*", "trigger_relay", "trigger_auto", "path_*", "monster_*", "trigger_teleport" (21 total)
void __fastcall CBaseEntity::ValidateEntityConnections(CBaseEntity *const this)
{
  CEntityIdentity *m_pEntity; // rdi
  __int64 v3; // rax
  float v4; // xmm1_4
  CEntityIdentity *v5; // rdi
  const char *m_pAsString; // rbx
  const char *DebugName; // rax
  double vecLoc; // [rsp+0h] [rbp-40h]
  float vecLoc_8; // [rsp+8h] [rbp-38h]
  CUtlVector<CEntityIOOutput*,CUtlMemory<CEntityIOOutput*,int> > outputs; // [rsp+10h] [rbp-30h] BYREF

  if ( this->m_target.u.m_Id != 0
    && !CEntityIdentity::ClassMatches(this->m_pEntity, "scripted_*")
    && !CEntityIdentity::ClassMatches(this->m_pEntity, "trigger_relay")
    && !CEntityIdentity::ClassMatches(this->m_pEntity, "trigger_auto")
    && !CEntityIdentity::ClassMatches(this->m_pEntity, "path_*")
    && !CEntityIdentity::ClassMatches(this->m_pEntity, "monster_*")
    && !CEntityIdentity::ClassMatches(this->m_pEntity, "trigger_teleport")
    && !CEntityIdentity::ClassMatches(this->m_pEntity, "func_train")
    && !CEntityIdentity::ClassMatches(this->m_pEntity, "func_tracktrain")
    && !CEntityIdentity::ClassMatches(this->m_pEntity, "func_plat*")
    && !CEntityIdentity::ClassMatches(this->m_pEntity, "npc_*")
    && !CEntityIdentity::ClassMatches(this->m_pEntity, "info_big*")
    && !CEntityIdentity::ClassMatches(this->m_pEntity, "env_texturetoggle")
    && !CEntityIdentity::ClassMatches(this->m_pEntity, "env_render")
    && !CEntityIdentity::ClassMatches(this->m_pEntity, "func_areaportalwindow")
    && !CEntityIdentity::ClassMatches(this->m_pEntity, "point_view*")
    && !CEntityIdentity::ClassMatches(this->m_pEntity, "func_traincontrols")
    && !CEntityIdentity::ClassMatches(this->m_pEntity, "multisource")
    && !CEntityIdentity::ClassMatches(this->m_pEntity, "xen_plant*") )
  {
    m_pEntity = this->m_pEntity;
    outputs.m_Size = 0;
    outputs.m_Memory.m_pMemory = 0;
    outputs.m_Memory.m_nAllocationCount = 0;
    outputs.m_Memory.m_nGrowSize = 0;
    CEntityIdentity::GetEntityIOOutputs(m_pEntity, &outputs);
    if ( outputs.m_Size <= 0 )
    {
LABEL_28:
      vecLoc = (*(this->_vptr_IHandleEntity + 62))(this);
      vecLoc_8 = v4;
      Warning("---------------------------------\n");
      v5 = this->m_pEntity;
      m_pAsString = "";
      if ( v5->m_designerName.u.m_Id != 0 )
        m_pAsString = v5->m_designerName.u.m_pAsString;
      DebugName = CEntityIdentity::GetDebugName(v5);
      Warning("Entity %s - (%s) has a target and NO OUTPUTS\n", DebugName, m_pAsString);
      Warning("Location %f %f %f\n", *&vecLoc, *(&vecLoc + 1), vecLoc_8);
      Warning("---------------------------------\n");
      outputs.m_Size = 0;
      if ( (outputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CEntityIOOutput *,int>::Purge(&outputs.m_Memory);
        if ( (outputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
LABEL_32:
          CUtlMemory<CEntityIOOutput *,int>::Purge(&outputs.m_Memory);
      }
    }
    else
    {
      v3 = 0;
      while ( outputs.m_Memory.m_pMemory[v3]->m_pConnections == 0 )
      {
        if ( outputs.m_Size <= ++v3 )
          goto LABEL_28;
      }
      outputs.m_Size = 0;
      if ( (outputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CEntityIOOutput *,int>::Purge(&outputs.m_Memory);
        if ( (outputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          goto LABEL_32;
      }
    }
  }
}


// CBaseEntity::FireNamedOutput  (line 580, @0x000000000216b330, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CBaseEntity::FindNamedOutput, CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CBasePlayer::FirePlayerProxyOutput
void __fastcall CBaseEntity::FireNamedOutput(
        CBaseEntity *const this,
        const char *pszOutput,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        float flDelay)
{
  CEntityIOOutput *NamedOutput; // rax
  CVariant value; // [rsp+10h] [rbp-30h] BYREF

  if ( pszOutput != 0 )
  {
    NamedOutput = CBaseEntity::FindNamedOutput(this, pszOutput);
    if ( NamedOutput != 0 )
    {
      value.m_type = 0;
      value.m_flags = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(NamedOutput, pActivator, pCaller, &value, flDelay);
      if ( (value.m_flags & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    }
  }
}


// CBaseEntity::Activate  (line 595, @0x0000000002146070, libserver.so)  // inlines: CUtlSymbolLarge, DispatchUpdateTransmitState, GetEHandle, GetEntryIndex, GetSerialNumber, Set, curtime, operator!=, operator=
// calls: CEntityInstance::Activate, CBaseEntity::DispatchUpdateTransmitState, CBaseEntity::SetAnimTime, CBaseEntity::SetSimulationTime, CGameEntitySystem::FindEntityByName
// callers: CFogController::Activate, CEnvClock::Activate, CEnvCombinedLightProbeVolume::Activate, CEnvCubemap::Activate, CEnvLightProbeVolume::Activate, CMultiLightProxy::Activate, CGameGibManager::Activate, CBaseModelEntity::Activate, CBaseAnimating::Activate, CBaseProp::Activate, CLogicRelay::Activate, CDecal::Activate (61 total)
void __fastcall CBaseEntity::Activate(CBaseEntity *const this, ActivateType_t activateType)
{
  float v3; // xmm1_4
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v5; // r12
  double v6; // xmm1_8
  CGlobalVars *v7; // r12
  double v8; // xmm0_8
  FnGlobalVarsWarningFunc v9; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CBaseEntity *EntityByName; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v13; // eax
  __int16 v14; // cx
  string_t iszName; // [rsp+10h] [rbp-30h] BYREF

  CEntityInstance::Activate(this, activateType);
  if ( this->m_iInitialTeamNum != 0 )
    (*(this->_vptr_IHandleEntity + 70))(this);
  if ( this->m_iszDamageFilterName.u.m_Id != 0 )
  {
    iszName.u.m_Id = this->m_iszDamageFilterName.u.m_Id;
    EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
    if ( EntityByName != 0 && (m_pEntity = EntityByName->m_pEntity) != 0 )
    {
      v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v14 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hDamageFilter.m_Index) = v14 | this->m_hDamageFilter.m_Index & 0x8000;
      this->m_hDamageFilter.m_Index = (v13 << 15) | this->m_hDamageFilter.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hDamageFilter.m_Index = -1;
    }
  }
  if ( this->m_iszResponseContext.u.m_Id != 0 )
    (*(this->_vptr_IHandleEntity + 81))(this, this->m_iszResponseContext.u.m_Id);
  if ( this->m_pEntity != 0 )
    CBaseEntity::DispatchUpdateTransmitState(this);
  m_flCurrentTime = 0.0;
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v5->m_flCurrentTime;
  }
  CBaseEntity::SetAnimTime(this, m_flCurrentTime, v3, 0);
  v7 = gpGlobals;
  v8 = 0.0;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v9 = gpGlobals->m_pfnWarningFunc;
      if ( v9 != 0 )
        (v9)(1, 0.0);
    }
    *&v8 = LODWORD(v7->m_flCurrentTime);
  }
  CBaseEntity::SetSimulationTime(this, v8, v6);
}


// CBaseEntity::TakeHealth  (line 647, @0x0000000002158d80, libserver.so)  // inlines: CEntComponentPtr, CSmartPtr, GetComponent<CHealthComponent>, NetworkStateChanged, Set, operator+=<float>, operator=, operator=<int>, operator>=<int>, operator[]
// calls: CBaseEntity::IsUsingNewDamageSystem, CHealthComponent::TakeHealth, CBaseEntity::GetDamageOptions
// callers: CBaseCombatCharacter::TakeHealth
__int64 __fastcall CBaseEntity::TakeHealth(
        CBaseEntity *const this,
        float a2,
        float flHealth,
        unsigned int bitsDamageType)
{
  CEntityIdentity *m_pEntity; // rdx
  __int64 m_nBaseOffset; // r13
  CHealthComponent *v8; // r13
  int v9; // eax
  int m_iHealth; // r12d
  unsigned int v11; // r14d
  int v13; // eax
  int m_Value; // r12d
  int v15; // r13d
  int v16; // eax
  int v17; // r14d

  if ( CBaseEntity::IsUsingNewDamageSystem(this)
    && (m_pEntity = this->m_pEntity)->m_pInstance != 0
    && (m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CHealthComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset) != 0xFFFF
    && (v8 = (m_pEntity->m_pInstance + m_nBaseOffset)) != 0 )
  {
    v9 = CHealthComponent::TakeHealth(v8, this, a2, bitsDamageType);
    m_iHealth = v8->m_iHealth;
    v11 = v9;
    if ( m_iHealth != this->m_iHealth.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 328, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_iHealth.m_Value = m_iHealth;
    }
    return v11;
  }
  else
  {
    if ( CBaseEntity::GetDamageOptions(this) <= DamageOptions_t::DAMAGE_EVENTS_ONLY )
      return 0;
    v13 = (*(this->_vptr_IHandleEntity + 156))(this);
    m_Value = this->m_iHealth.m_Value;
    v15 = v13;
    if ( v13 <= m_Value )
    {
      return 0;
    }
    else
    {
      v16 = this->m_iHealth.m_Value;
      v17 = m_Value + a2;
      if ( m_Value != v17 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 328, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_iHealth.m_Value = v17;
        if ( v15 >= v17 )
        {
          v16 = m_Value + a2;
        }
        else
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 328, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_iHealth.m_Value = v15;
          v16 = v15;
        }
      }
      return (v16 - m_Value);
    }
  }
}


// CBaseEntity::OnTakeDamage  (line 684, @0x0000000002147f20, libserver.so)  // inlines: Get, GetAttacker, GetEntityIdentity, GetEntryIndex, GetInflictor, GetInstance, GetMoveType, IndexToIdentity, Init, IsTriggerCollisionGroup, IsValid, LookupEntity, NetworkStateChanged, OBBSize, Set, VectorMultiply, VectorSubtract, WorldAlignSize, operator CBaseEntity*, operator CEntityInstance*, operator*, operator-, operator-=, operator-=<float>, operator=
// calls: CBaseEntity::GetDamageOptions, VectorNormalize, CCollisionProperty::IsTriggerCollisionGroup, CBaseEntity::ApplyAbsVelocityImpulse
// callers: CBreakableProp::OnTakeDamage, CBreakable::OnTakeDamage, CRagdollProp::OnTakeDamage, CFuncTankTrain::OnTakeDamage, CDOTA_Grinder::FrameUpdateHeroes
// globals: CEntityHandle::gm_pEntityList
int __fastcall CBaseEntity::OnTakeDamage(CBaseEntity *const this, const CTakeDamageInfo *const info)
{
  DamageOptions_t DamageOptions; // dl
  int result; // eax
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  double v12; // xmm0_8
  MoveType_t m_Value; // al
  uint32 v14; // edx
  CEntityIdentity *v15; // rcx
  CEntityIdentity *v16; // rcx
  int v17; // eax
  int v18; // r13d
  double v19; // xmm0_8
  uint32 v20; // eax
  CEntityInstance *m_pInstance; // rdi
  CConcreteEntityList *v22; // rsi
  vec_t v23; // xmm1_4
  CEntityIdentity *v24; // rdx
  __int64 v25; // rcx
  CEntityIdentity *v26; // rdx
  float v27; // xmm1_4
  uint32 v28; // edx
  CEntityInstance *v29; // rax
  unsigned __int64 v30; // rax
  CEntityIdentity *v31; // rcx
  __int64 v32; // rax
  bool v33; // zf
  CEntityIdentity *v34; // rcx
  const CCollisionProperty *vptr_IHandleEntity; // rdi
  double v36; // xmm0_8
  uint32 v37; // edx
  CEntityInstance *v38; // rdi
  CConcreteEntityList *v39; // rsi
  vec_t v40; // xmm1_4
  CEntityIdentity *v41; // rax
  __int64 v42; // rcx
  CEntityIdentity *v43; // rax
  float v44; // xmm1_4
  CCollisionProperty *m_pCollision; // rax
  float v46; // xmm0_4
  float z; // xmm1_4
  __m128 v48; // xmm0
  __m128 v49; // xmm2
  Vector vecDir; // [rsp+0h] [rbp-40h] BYREF
  Vector vImpulse; // [rsp+10h] [rbp-30h] BYREF

  DamageOptions = CBaseEntity::GetDamageOptions(this);
  result = 0;
  if ( DamageOptions != DamageOptions_t::DAMAGE_NO )
  {
    m_Index = info->m_hInflictor.m_Index;
    if ( m_Index + 2 > 1
      && (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hInflictor.m_Index) >> 9) & 0x3F]) != 0
      && (v8 = &v7[info->m_hInflictor.m_Index & 0x1FF]) != 0
      && m_Index == v8->m_EHandle.m_Index
      && v8->m_pInstance != 0 )
    {
      v19 = (*(this->_vptr_IHandleEntity + 62))(this);
      v20 = info->m_hInflictor.m_Index;
      m_pInstance = 0;
      *&vecDir.x = v19;
      v22 = CEntityHandle::gm_pEntityList;
      vecDir.z = v23;
      if ( v20 + 2 > 1 )
      {
        v24 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hInflictor.m_Index) >> 9) & 0x3F];
        if ( v24 != 0 )
        {
          v25 = info->m_hInflictor.m_Index & 0x1FF;
          v22 = (8 * v25);
          v26 = &v24[v25];
          if ( v26 != 0 && v20 == v26->m_EHandle.m_Index )
            m_pInstance = v26->m_pInstance;
        }
      }
      *&vImpulse.x = (*(m_pInstance->_vptr_IHandleEntity + 62))(m_pInstance, v22);
      vImpulse.z = v27;
      v9 = vImpulse.x - vecDir.x;
      v11 = vImpulse.y - vecDir.y;
      v10 = v27 - vecDir.z;
    }
    else
    {
      v9 = 1.0;
      v10 = 0.0;
      v11 = 0.0;
    }
    g_vecAttackDir.x = v9;
    g_vecAttackDir.y = v11;
    g_vecAttackDir.z = v10;
    *&v12 = VectorNormalize(&g_vecAttackDir);
    if ( this->m_iEFlags >= 0 )
    {
      m_Value = this->m_MoveType.m_Value;
      if ( m_Value == MoveType_t::MOVETYPE_VPHYSICS )
      {
        (*(this->_vptr_IHandleEntity + 55))(this, info, *&v12);
      }
      else
      {
        v14 = info->m_hInflictor.m_Index;
        if ( v14 + 2 > 1 )
        {
          v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hInflictor.m_Index) >> 9) & 0x3F];
          if ( v15 != 0 )
          {
            v16 = &v15[info->m_hInflictor.m_Index & 0x1FF];
            if ( v16 != 0 && v14 == v16->m_EHandle.m_Index && v16->m_pInstance != 0 && (m_Value - 2) <= 1u )
            {
              v28 = info->m_hAttacker.m_Index;
              v29 = 0;
              if ( v28 + 2 > 1 )
              {
                v30 = info->m_hAttacker.m_Index & 0x7FFF;
                v31 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v30 >> 9)];
                if ( v31 != 0 )
                {
                  v32 = v30 & 0x1FF;
                  v33 = &v31[v32] == 0;
                  v34 = &v31[v32];
                  v29 = 0;
                  if ( !v33 && v28 == v34->m_EHandle.m_Index )
                    v29 = v34->m_pInstance;
                }
                else
                {
                  v29 = 0;
                }
              }
              vptr_IHandleEntity = v29[11]._vptr_IHandleEntity;
              if ( vptr_IHandleEntity == 0 || !CCollisionProperty::IsTriggerCollisionGroup(vptr_IHandleEntity) )
              {
                v36 = (*(this->_vptr_IHandleEntity + 62))(this, v12);
                v37 = info->m_hInflictor.m_Index;
                v38 = 0;
                *&vImpulse.x = v36;
                v39 = CEntityHandle::gm_pEntityList;
                vImpulse.z = v40;
                vecDir.z = v40;
                *&vecDir.x = v36;
                if ( v37 + 2 > 1 )
                {
                  v41 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hInflictor.m_Index) >> 9)
                                                                       & 0x3F];
                  if ( v41 != 0 )
                  {
                    v42 = info->m_hInflictor.m_Index & 0x1FF;
                    v39 = (8 * v42);
                    v43 = &v41[v42];
                    if ( v43 != 0 && v37 == v43->m_EHandle.m_Index )
                      v38 = v43->m_pInstance;
                  }
                }
                *&vImpulse.x = (*(v38->_vptr_IHandleEntity + 62))(v38, v39);
                vImpulse.z = v44;
                vecDir.x = vecDir.x - vImpulse.x;
                vecDir.y = vecDir.y - vImpulse.y;
                vecDir.z = vecDir.z - v44;
                VectorNormalize(&vecDir);
                m_pCollision = this->m_pCollision;
                if ( m_pCollision != 0 )
                {
                  v46 = (m_pCollision->m_vecMaxs.m_Value.x - m_pCollision->m_vecMins.m_Value.x)
                      * (m_pCollision->m_vecMaxs.m_Value.y - m_pCollision->m_vecMins.m_Value.y);
                  z = m_pCollision->m_vecMaxs.m_Value.z - m_pCollision->m_vecMins.m_Value.z;
                }
                else
                {
                  z = vec3_origin.z;
                  v46 = vec3_origin.y * vec3_origin.x;
                }
                v48.m128_f32[0] = 73728.0 / (z * v46) * info->m_flDamage * 5.0;
                v49 = _mm_cmpge_ss(0x447A0000u, v48);
                v48.m128_i32[0] = COERCE_UNSIGNED_INT(_mm_andnot_ps(v49, 0x447A0000u).m128_f32[0])
                                | v48.m128_i32[0] & v49.m128_i32[0];
                vImpulse.z = vecDir.z * v48.m128_f32[0];
                vImpulse.y = vecDir.y * v48.m128_f32[0];
                vImpulse.x = v48.m128_f32[0] * vecDir.x;
                CBaseEntity::ApplyAbsVelocityImpulse(this, &vImpulse);
                if ( CBaseEntity::GetDamageOptions(this) == DamageOptions_t::DAMAGE_EVENTS_ONLY )
                  return 1;
                goto LABEL_14;
              }
            }
          }
        }
      }
    }
    if ( CBaseEntity::GetDamageOptions(this) == DamageOptions_t::DAMAGE_EVENTS_ONLY )
      return 1;
LABEL_14:
    v17 = this->m_iHealth.m_Value;
    v18 = v17 - info->m_flDamage;
    if ( v17 != v18 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 328, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_iHealth.m_Value = v18;
      v17 = v18;
    }
    if ( v17 <= 0 )
    {
      (*(this->_vptr_IHandleEntity + 92))(this, info);
      return 0;
    }
    return 1;
  }
  return result;
}


// CBaseEntity::IsUsingNewDamageSystem  (line 758, @0x0000000002158d30, libserver.so)  // inlines: CEntComponentPtr, GetComponent<CDamageComponent>, operator[]
// callers: CBaseEntity::TakeHealth, CBaseEntity::TakeDamage
bool __fastcall CBaseEntity::IsUsingNewDamageSystem(const CBaseEntity *const this)
{
  bool result; // al
  CEntityIdentity *m_pEntity; // rdx
  CEntityInstance *m_pInstance; // rcx
  __int64 m_nBaseOffset; // rdx

  result = 0;
  m_pEntity = this->m_pEntity;
  if ( m_pEntity != 0 && use_new_damage_system.m_pParent->m_Value.m_nValue != 0 )
  {
    m_pInstance = m_pEntity->m_pInstance;
    if ( m_pEntity->m_pInstance != 0 )
    {
      m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CDamageComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
      if ( m_nBaseOffset != 0xFFFF )
        return (m_pInstance + m_nBaseOffset) != 0;
    }
  }
  return result;
}


// CBaseEntity::RejectDamage  (line 779, @0x000000000213fc70, libserver.so)  // inlines: GetDamageForce, GetDamagePosition, operator==
// calls: DevWarning(char const*,...)
// strings: "CBaseEntity::TakeDamage:  with inputInfo.GetDamagePosition() == vec3_origin\n", "CBaseEntity::TakeDamage:  with inputInfo.GetDamageForce() == vec3_origin\n"
// globals: CBaseEntity::RejectDamage(CTakeDamageInfo const&)::warningCount
bool __fastcall CBaseEntity::RejectDamage(CBaseEntity *const this, const CTakeDamageInfo *const inputInfo)
{
  double v4; // xmm2_8
  double v5; // xmm4_8
  double v6; // xmm5_8
  double v7; // xmm0_8
  double v8; // xmm1_8
  double v9; // xmm3_8
  float y; // xmm6_4
  bool v11; // sf

  if ( g_pGameRules == 0 )
    return 1;
  if ( (*(g_pGameRules->_vptr_CGameRules + 25))(g_pGameRules, inputInfo->m_bitsDamageType) != 0
    || inputInfo->m_bitsDamageType == 0 )
  {
    goto LABEL_22;
  }
  *&v4 = LODWORD(inputInfo->m_vecDamageForce.x);
  *&v5 = LODWORD(inputInfo->m_vecDamageForce.y);
  *&v6 = LODWORD(inputInfo->m_vecDamageForce.z);
  *&v7 = LODWORD(vec3_origin.x);
  if ( *&v4 == vec3_origin.x && *&v5 == vec3_origin.y && *&v6 == vec3_origin.z )
  {
    v11 = CBaseEntity::RejectDamage(CTakeDamageInfo const&)::warningCount - 8 < 0;
    ++CBaseEntity::RejectDamage(CTakeDamageInfo const&)::warningCount;
    if ( !(v11 ^ __OFSUB__(CBaseEntity::RejectDamage(CTakeDamageInfo const&)::warningCount, 9)
         | (CBaseEntity::RejectDamage(CTakeDamageInfo const&)::warningCount == 9)) )
      goto LABEL_22;
    goto LABEL_15;
  }
  *&v8 = LODWORD(inputInfo->m_vecDamagePosition.y);
  *&v9 = LODWORD(inputInfo->m_vecDamagePosition.z);
  if ( vec3_origin.x != inputInfo->m_vecDamagePosition.x )
    goto LABEL_22;
  y = vec3_origin.y;
  if ( y != *&v8 )
    goto LABEL_22;
  if ( *&v9 != vec3_origin.z )
    goto LABEL_22;
  v11 = CBaseEntity::RejectDamage(CTakeDamageInfo const&)::warningCount - 8 < 0;
  ++CBaseEntity::RejectDamage(CTakeDamageInfo const&)::warningCount;
  if ( !(v11 ^ __OFSUB__(CBaseEntity::RejectDamage(CTakeDamageInfo const&)::warningCount, 9)
       | (CBaseEntity::RejectDamage(CTakeDamageInfo const&)::warningCount == 9)) )
    goto LABEL_22;
  if ( *&v4 == vec3_origin.x )
  {
    if ( y != *&v5 )
    {
      *&v4 = LODWORD(inputInfo->m_vecDamagePosition.x);
      goto LABEL_18;
    }
LABEL_15:
    if ( *&v6 == vec3_origin.z )
    {
      DevWarning("CBaseEntity::TakeDamage:  with inputInfo.GetDamageForce() == vec3_origin\n");
      *&v7 = LODWORD(vec3_origin.x);
    }
    *&v4 = LODWORD(inputInfo->m_vecDamagePosition.x);
    *&v8 = LODWORD(inputInfo->m_vecDamagePosition.y);
    *&v9 = LODWORD(inputInfo->m_vecDamagePosition.z);
LABEL_18:
    if ( *&v4 != *&v7 )
      goto LABEL_22;
  }
  if ( *&v8 == vec3_origin.y && *&v9 == vec3_origin.z )
    DevWarning("CBaseEntity::TakeDamage:  with inputInfo.GetDamagePosition() == vec3_origin\n", v7, v8, v4, v9, v5, v6);
LABEL_22:
  if ( (*(this->_vptr_IHandleEntity + 88))(this, inputInfo) == 0 )
    return 1;
  return (*(g_pGameRules->_vptr_CGameRules + 75))(g_pGameRules, this, inputInfo) ^ 1;
}


// CBaseEntity::ModifyDamage  (line 836, @0x00000000021447c0, libserver.so)  // inlines: Get, GetAttacker, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ScaleDamage, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBaseEntity::ModifyDamage(CBaseEntity *const this, CTakeDamageInfo *const info)
{
  CEntityInstance *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx

  m_pInstance = 0;
  m_Index = info->m_hAttacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[info->m_hAttacker.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
      {
        m_pInstance = v7->m_pInstance;
        if ( v7->m_pInstance != 0 )
          info->m_flDamage = (*(m_pInstance->_vptr_IHandleEntity + 177))(v7->m_pInstance, this) * info->m_flDamage;
      }
    }
  }
  info->m_flDamage = (*(this->_vptr_IHandleEntity + 178))(this, m_pInstance) * info->m_flDamage;
}


// CBaseEntity::ReactToDamage  (line 853, @0x0000000002141160, libserver.so)
// calls: CBaseEntity::GetDamageOptions
// callers: CBreakable::ReactToDamage
void __fastcall CBaseEntity::ReactToDamage(CBaseEntity *const this, const CTakeDamageInfo *const info)
{
  if ( CBaseEntity::GetDamageOptions(this) != DamageOptions_t::DAMAGE_EVENTS_ONLY && this->m_iHealth.m_Value <= 0 )
    (*(this->_vptr_IHandleEntity + 92))(this, info);
}


// CBaseEntity::Script_TakeDamage  (line 865, @0x0000000002159770, libserver.so)  // inlines: TakeDamage
// calls: GetScriptDesc<CTakeDamageInfo>, CBaseEntity::TakeDamage
int __fastcall CBaseEntity::Script_TakeDamage(CBaseEntity *const this, HSCRIPT hInfo)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  CTakeDamageInfo *v6; // rax

  v4 = *(*g_pScriptVM + 208LL);
  Script = GetScriptDesc<CTakeDamageInfo>(0);
  v6 = v4(g_pScriptVM, hInfo, Script);
  if ( v6 != 0 && (this->m_pEntity->m_flags & 0x200) == 0 )
    return CBaseEntity::TakeDamage(this, v6);
  else
    return 0;
}


// CBaseEntity::TakeDamage  (line 879, @0x0000000002159580, libserver.so)
// calls: CBaseEntity::IsUsingNewDamageSystem, CBaseEntity::TakeDamageOld, CBaseEntity::EntTakeDamageS1PortHack
// callers: CBaseEntity::TakeDamage, CBaseEntity::Script_TakeDamage
int __fastcall CBaseEntity::TakeDamage(CBaseEntity *const this, CTakeDamageInfo *const inputInfo)
{
  if ( CBaseEntity::IsUsingNewDamageSystem(this) )
    return CBaseEntity::EntTakeDamageS1PortHack(this, inputInfo);
  else
    return CBaseEntity::TakeDamageOld(this, inputInfo);
}


// CBaseEntity::TakeDamage  (line 879, @0x00000000021595c0, libserver.so)
// calls: CBaseEntity::TakeDamage
// callers: CBreakableProp::BreakablePropTouch, CBreakableProp::HandleFirstCollisionInteractions, CBaseCombatCharacter::ApplyStressDamage, CBaseCombatCharacter::VPhysicsShadowCollision, PerformMeleeAttackTest, CFuncRotating::Blocked, CFuncRotating::HurtTouch, CC_HurtMe_f, CEntityDissolve::DissolveThink, CEntityFlame::FlameThink, CBaseDoor::Blocked, CEntityDissolve::Create (45 total)
int __fastcall CBaseEntity::TakeDamage(CBaseEntity *const this, CTakeDamageInfo *const inputInfo)
{
  if ( (this->m_pEntity->m_flags & 0x200) != 0 )
    return 0;
  else
    return CBaseEntity::TakeDamage(this, inputInfo);
}


// CBaseEntity::EntTakeDamageS1PortHack  (line 897, @0x0000000002158f50, libserver.so)  // inlines: Attribute_GetIntValue, Attribute_GetValue<int>, CEntComponentPtr, CSmartPtr, CThreadFastMutex, CUtlIntrusiveList, CUtlTSOpenHash, CUtlTSOpenHashConcurrencyModelLockFree, Compare, EntGetDamageOptions, EntTakeDamage, FindEntry_Inline, Find_Inline, GetComponent<CDamageComponent>, GetComponent<CHealthComponent>, GetEntityAttributes, GetIntValue, GetValue<int>, Hash, Head, NetworkStateChanged, Set, operator=, operator=<DamageOptions_t>, operator=<int>, operator[]
// calls: CDamageComponent::TakeDamage, CBaseEntity::SetLifeState, CHealthComponent::TakeDamage, operator new
// callers: CBaseEntity::TakeDamage
// globals: g_EntAttrDamageOptionsID
int __fastcall CBaseEntity::EntTakeDamageS1PortHack(CBaseEntity *const this, CTakeDamageInfo *const inputInfo)
{
  CEntityIdentity *m_pEntity; // rcx
  CEntityInstance *m_pInstance; // rax
  int v5; // ebx
  CEntityClass::ComponentOffsets_t *m_pMemory; // rcx
  __int64 m_nBaseOffset; // rdi
  CHealthComponent *v8; // r12
  __int64 v9; // rcx
  int m_iHealth; // r14d
  int m_iMax; // r14d
  CEntityIdentity *v12; // r14
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *m_pAttributes; // rax
  uint32 v14; // r12d
  int m_nCurrentTableSize; // r14d
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *v16; // rdi
  CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::HashTable_t *i; // r11
  CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::HashTable_t *v18; // r8
  int v19; // edx
  int m_key; // ecx
  __int64 m_value; // rdx
  int v22; // ecx
  int v23; // r12d

  m_pEntity = this->m_pEntity;
  m_pInstance = m_pEntity->m_pInstance;
  if ( m_pEntity->m_pInstance == 0 )
    return 0;
  v5 = 0;
  m_pMemory = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory;
  m_nBaseOffset = m_pMemory[CHealthComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
  if ( m_nBaseOffset != 0xFFFF )
  {
    v8 = (m_pInstance + m_nBaseOffset);
    if ( (m_pInstance + m_nBaseOffset) != 0 )
    {
      v9 = m_pMemory[CDamageComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
      if ( v9 == 0xFFFF || (m_pInstance + v9) == 0 )
        v5 = CHealthComponent::TakeDamage(v8, this, inputInfo);
      else
        v5 = CDamageComponent::TakeDamage((m_pInstance + v9), this, inputInfo);
      m_iHealth = v8->m_iHealth;
      if ( m_iHealth != this->m_iHealth.m_Value )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 328, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_iHealth.m_Value = m_iHealth;
      }
      m_iMax = v8->m_iMax;
      if ( m_iMax != this->m_iMaxHealth.m_Value )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 332, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_iMaxHealth.m_Value = m_iMax;
      }
      CBaseEntity::SetLifeState(this, v8->m_lifeState);
      v12 = this->m_pEntity;
      m_pAttributes = v12->m_pAttributes;
      v14 = g_EntAttrDamageOptionsID.m_nHashCode & 0x7FFFFFF;
      if ( m_pAttributes == 0 )
      {
        m_pAttributes = operator new(0x38u);
        m_pAttributes->m_hashTable.m_tables.m_pHead = 0;
        m_pAttributes->m_hashTable.m_concurrencyModel.m_mutex.m_ownerID = 0;
        m_pAttributes->m_hashTable.m_concurrencyModel.m_mutex.m_depth = 0;
        m_pAttributes->m_hashTable.m_nNumKeysDeleted = 0;
        m_pAttributes->m_hashTable.m_nCurrentTableSize = 64;
        m_pAttributes->m_hashTable.m_nDeletedKeyValue = -1;
        m_pAttributes->m_hashTable.m_nEmptyKeyValue = -2;
        m_pAttributes->m_pParentTable = 0;
        v12->m_pAttributes = m_pAttributes;
      }
      m_nCurrentTableSize = m_pAttributes->m_hashTable.m_nCurrentTableSize;
      v16 = m_pAttributes;
      for ( i = m_pAttributes->m_hashTable.m_tables.m_pHead; ; i = v16->m_hashTable.m_tables.m_pHead )
      {
LABEL_14:
        v18 = i;
        if ( i != 0 )
        {
          while ( 2 )
          {
            v19 = (m_nCurrentTableSize - 1) & v14;
            do
            {
              m_key = v18->m_entries[v19].m_key;
              if ( ((m_key ^ v14) & 0x7FFFFFF) == 0 )
              {
                m_value = v18->m_entries[v19].m_value;
                if ( m_key < 0 )
                {
                  LOBYTE(v23) = *(&m_pAttributes->m_pOwningObject->m_pInstance + m_value);
                }
                else if ( v14 == m_key || (v22 = m_key & 0x78000000) == 0 )
                {
                  LOBYTE(v23) = m_value;
                }
                else
                {
                  if ( v22 != 0x8000000 )
                    goto LABEL_14;
                  v23 = *&m_value;
                }
                goto LABEL_24;
              }
              if ( m_key == v16->m_hashTable.m_nEmptyKeyValue )
                break;
              v19 = (m_nCurrentTableSize - 1) & (v19 + 1);
            }
            while ( ((m_nCurrentTableSize - 1) & v14) != v19 );
            v18 = v18->m_pNext;
            if ( v18 != 0 )
              continue;
            break;
          }
        }
        v16 = v16->m_pParentTable;
        if ( v16 == 0 )
          break;
        m_nCurrentTableSize = v16->m_hashTable.m_nCurrentTableSize;
      }
      LOBYTE(v23) = 0;
LABEL_24:
      if ( this->m_takedamage.m_Value != v23 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 337, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_takedamage.m_Value = v23;
      }
    }
  }
  return v5;
}


// CBaseEntity::TakeDamageOld  (line 924, @0x00000000021591e0, libserver.so)  // inlines: Get, GetAttacker, GetDamageForce, GetDamagePosition, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ScaleDamage, operator CBaseEntity*, operator CEntityInstance*, operator==
// calls: CTakeDamageInfo::CTakeDamageInfo, CTakeDamageInfo::~CTakeDamageInfo, DevWarning(char const*,...), _Unwind_Resume
// callers: CBaseEntity::TakeDamage
// strings: "CBaseEntity::TakeDamageOld:  with inputInfo.GetDamagePosition() == vec3_origin\n", "CBaseEntity::TakeDamageOld:  with inputInfo.GetDamageForce() == vec3_origin\n"
// globals: CEntityHandle::gm_pEntityList, CBaseEntity::TakeDamageOld(CTakeDamageInfo const&)::warningCount
int __fastcall CBaseEntity::TakeDamageOld(CBaseEntity *const this, const CTakeDamageInfo *const inputInfo)
{
  int v4; // eax
  uint32 m_Index; // eax
  unsigned __int64 v7; // rdx
  CEntityIdentity *v8; // rsi
  CEntityIdentity *v9; // rcx
  float (__fastcall *v10)(CBaseEntity *const, CEntityInstance *, unsigned __int64); // rcx
  __int64 v11; // rdx
  bool v12; // zf
  CEntityInstance *v13; // rsi
  float v14; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  double v16; // xmm2_8
  double v17; // xmm4_8
  double v18; // xmm5_8
  double v19; // xmm0_8
  double v20; // xmm1_8
  double v21; // xmm3_8
  float y; // xmm6_4
  bool v23; // sf
  float v24; // xmm0_4
  int v25; // [rsp+Ch] [rbp-B4h]
  CTakeDamageInfo info; // [rsp+10h] [rbp-B0h] BYREF

  if ( g_pGameRules != 0 )
  {
    if ( (*(g_pGameRules->_vptr_CGameRules + 25))(g_pGameRules, inputInfo->m_bitsDamageType) != 0
      || inputInfo->m_bitsDamageType == 0 )
    {
      goto LABEL_3;
    }
    *&v16 = LODWORD(inputInfo->m_vecDamageForce.x);
    *&v17 = LODWORD(inputInfo->m_vecDamageForce.y);
    *&v18 = LODWORD(inputInfo->m_vecDamageForce.z);
    *&v19 = LODWORD(vec3_origin.x);
    if ( *&v16 == vec3_origin.x && *&v17 == vec3_origin.y && *&v18 == vec3_origin.z )
    {
      v23 = CBaseEntity::TakeDamageOld(CTakeDamageInfo const&)::warningCount - 8 < 0;
      ++CBaseEntity::TakeDamageOld(CTakeDamageInfo const&)::warningCount;
      if ( !(v23 ^ __OFSUB__(CBaseEntity::TakeDamageOld(CTakeDamageInfo const&)::warningCount, 9)
           | (CBaseEntity::TakeDamageOld(CTakeDamageInfo const&)::warningCount == 9)) )
        goto LABEL_3;
    }
    else
    {
      *&v20 = LODWORD(inputInfo->m_vecDamagePosition.y);
      *&v21 = LODWORD(inputInfo->m_vecDamagePosition.z);
      if ( vec3_origin.x != inputInfo->m_vecDamagePosition.x )
        goto LABEL_3;
      y = vec3_origin.y;
      if ( y != *&v20 )
        goto LABEL_3;
      if ( *&v21 != vec3_origin.z )
        goto LABEL_3;
      v23 = CBaseEntity::TakeDamageOld(CTakeDamageInfo const&)::warningCount - 8 < 0;
      ++CBaseEntity::TakeDamageOld(CTakeDamageInfo const&)::warningCount;
      if ( !(v23 ^ __OFSUB__(CBaseEntity::TakeDamageOld(CTakeDamageInfo const&)::warningCount, 9)
           | (CBaseEntity::TakeDamageOld(CTakeDamageInfo const&)::warningCount == 9)) )
        goto LABEL_3;
      if ( *&v16 != vec3_origin.x )
        goto LABEL_34;
      if ( y != *&v17 )
        goto LABEL_32;
    }
    if ( *&v18 == vec3_origin.z )
    {
      DevWarning("CBaseEntity::TakeDamageOld:  with inputInfo.GetDamageForce() == vec3_origin\n");
      *&v21 = LODWORD(inputInfo->m_vecDamagePosition.z);
      *&v20 = LODWORD(inputInfo->m_vecDamagePosition.y);
      *&v16 = LODWORD(inputInfo->m_vecDamagePosition.x);
      *&v19 = LODWORD(vec3_origin.x);
LABEL_33:
      if ( *&v19 == *&v16 )
      {
LABEL_34:
        if ( *&v20 == vec3_origin.y && *&v21 == vec3_origin.z )
          DevWarning(
            "CBaseEntity::TakeDamageOld:  with inputInfo.GetDamagePosition() == vec3_origin\n",
            v19,
            v20,
            v16,
            v21,
            v17,
            v18);
      }
LABEL_3:
      CTakeDamageInfo::CTakeDamageInfo(&info, inputInfo);
      if ( (*(this->_vptr_IHandleEntity + 88))(this, &info) == 0
        || (*(g_pGameRules->_vptr_CGameRules + 75))(g_pGameRules, this, &info) == 0 )
      {
        v4 = 0;
LABEL_5:
        v25 = v4;
        CTakeDamageInfo::~CTakeDamageInfo(&info);
        return v25;
      }
      m_Index = info.m_hAttacker.m_Index;
      v7 = info.m_hAttacker.m_Index + 2;
      if ( v7 <= 1 )
      {
        v10 = *(this->_vptr_IHandleEntity + 178);
      }
      else
      {
        v7 = info.m_hAttacker.m_Index & 0x7FFF;
        v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v7 >> 9)];
        if ( v8 != 0
          && (v9 = &v8[info.m_hAttacker.m_Index & 0x1FF]) != 0
          && info.m_hAttacker.m_Index == v9->m_EHandle.m_Index
          && v9->m_pInstance != 0 )
        {
          v24 = (*(v9->m_pInstance->_vptr_IHandleEntity + 177))(v9->m_pInstance, this);
          v13 = 0;
          v10 = *(this->_vptr_IHandleEntity + 178);
          m_Index = info.m_hAttacker.m_Index;
          info.m_flDamage = v24 * info.m_flDamage;
          v7 = info.m_hAttacker.m_Index + 2;
          if ( v7 <= 1 )
            goto LABEL_16;
          v7 = info.m_hAttacker.m_Index & 0x7FFF;
          v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v7 >> 9)];
        }
        else
        {
          v10 = *(this->_vptr_IHandleEntity + 178);
        }
        if ( v8 != 0 )
        {
          v11 = v7 & 0x1FF;
          v12 = &v8[v11] == 0;
          v7 = &v8[v11];
          v13 = 0;
          if ( !v12 && m_Index == *(v7 + 16) )
            v13 = *v7;
          goto LABEL_16;
        }
      }
      v13 = 0;
LABEL_16:
      v14 = v10(this, v13, v7);
      vptr_IHandleEntity = this->_vptr_IHandleEntity;
      info.m_flDamage = v14 * info.m_flDamage;
      v4 = vptr_IHandleEntity[90](this, &info);
      goto LABEL_5;
    }
    *&v21 = LODWORD(inputInfo->m_vecDamagePosition.z);
    *&v20 = LODWORD(inputInfo->m_vecDamagePosition.y);
LABEL_32:
    *&v16 = LODWORD(inputInfo->m_vecDamagePosition.x);
    goto LABEL_33;
  }
  return 0;
}


// CBaseEntity::GetAttackDamageScale  (line 999, @0x000000000213fe50, libserver.so)  // inlines: Next, operator[]
// calls: CDamageModifier::IsDamageDoneToMe, CDamageModifier::GetModifier
float __fastcall CBaseEntity::GetAttackDamageScale(CBaseEntity *const this, CBaseEntity *pVictim)
{
  unsigned __int64 m_Head; // rbx
  UtlLinkedListElem_t<CDamageModifier*,int> *m_pMemory; // rax
  unsigned __int64 v5; // rbx
  float flScale; // [rsp+Ch] [rbp-14h]

  m_Head = this->m_DamageModifiers.m_Head;
  if ( m_Head == -1 )
    return 1.0;
  m_pMemory = this->m_DamageModifiers.m_Memory.m_pMemory;
  flScale = 1.0;
  do
  {
    v5 = m_Head;
    if ( !CDamageModifier::IsDamageDoneToMe(m_pMemory[v5].m_Element) )
      flScale = CDamageModifier::GetModifier(this->m_DamageModifiers.m_Memory.m_pMemory[v5].m_Element) * flScale;
    m_pMemory = this->m_DamageModifiers.m_Memory.m_pMemory;
    m_Head = m_pMemory[v5].m_Next;
  }
  while ( m_Head != -1 );
  return flScale;
}


// CBaseEntity::GetReceivedDamageScale  (line 1015, @0x000000000213fee0, libserver.so)  // inlines: Next, operator[]
// calls: CDamageModifier::IsDamageDoneToMe, CDamageModifier::GetModifier
float __fastcall CBaseEntity::GetReceivedDamageScale(CBaseEntity *const this, CBaseEntity *pAttacker)
{
  unsigned __int64 m_Head; // rbx
  UtlLinkedListElem_t<CDamageModifier*,int> *m_pMemory; // rax
  unsigned __int64 v5; // rbx
  float flScale; // [rsp+Ch] [rbp-14h]

  m_Head = this->m_DamageModifiers.m_Head;
  if ( m_Head == -1 )
    return 1.0;
  m_pMemory = this->m_DamageModifiers.m_Memory.m_pMemory;
  flScale = 1.0;
  do
  {
    v5 = m_Head;
    if ( CDamageModifier::IsDamageDoneToMe(m_pMemory[v5].m_Element) )
      flScale = CDamageModifier::GetModifier(this->m_DamageModifiers.m_Memory.m_pMemory[v5].m_Element) * flScale;
    m_pMemory = this->m_DamageModifiers.m_Memory.m_pMemory;
    m_Head = m_pMemory[v5].m_Next;
  }
  while ( m_Head != -1 );
  return flScale;
}


// CBaseEntity::VPhysicsTakeDamage  (line 1032, @0x0000000002174030, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, CopyConstruct<IPhysicsBody*>, Element, GetDamageForce, GetDamagePosition, GetPartCount, GrowMemory, IsExternallyAllocated, IsZero, Purge, Purge_FixedGrowable, RemoveAll, end, operator*=, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CBasePlayer::PlayerHoldingEntity, CUtlMemory<IPhysicsBody*, int>::Purge, CBaseEntity::VPhysicsGetAggregate, CUtlMemory<IPhysicsBody*, int>::Grow, CUtlVectorBase<IPhysicsBody*, CUtlMemoryFixedGrowable<IPhysicsBody*, 16ul, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
int __fastcall CBaseEntity::VPhysicsTakeDamage(CBaseEntity *const this, const CTakeDamageInfo *const info)
{
  HPhysicsBody m_hBodyPart; // rax
  double v4; // xmm0_8
  double v5; // xmm1_8
  double v6; // xmm2_8
  IPhysicsBody **m_pMemory; // rbx
  IPhysicsBody **v8; // r13
  IPhysicsBody *v9; // r12
  vec_t z; // xmm0_4
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t v13; // xmm0_4
  vec_t v14; // xmm2_4
  CBasePlayer *v15; // rax
  float v16; // xmm0_4
  uint32 v17; // eax
  float v19; // xmm0_4
  IPhysAggregateInstance *Aggregate; // rax
  IPhysAggregateInstance *v21; // r13
  unsigned int i; // ebx
  IPhysicsBody **v23; // rax
  __int64 m_Size; // r12
  __int64 v25; // r15
  int v26; // eax
  int v28; // [rsp+18h] [rbp-F8h]
  Vector force; // [rsp+20h] [rbp-F0h] BYREF
  Vector offset; // [rsp+30h] [rbp-E0h] BYREF
  CUtlVectorFixedGrowable<IPhysicsBody*,16ul> targets; // [rsp+40h] [rbp-D0h] BYREF
  unsigned __int64 v32; // [rsp+D8h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  targets.m_Size = 0;
  targets.m_Memory.m_pMemory = &targets.m_Memory.m_FixedMemory;
  m_hBodyPart = info->m_hBodyPart;
  targets.m_Memory.m_nAllocationCount = 16;
  targets.m_Memory.m_nGrowSize = 0x80000000;
  if ( m_hBodyPart != 0 )
  {
    targets.m_Size = 1;
    *targets.m_Memory.m_FixedMemory.m_Data = m_hBodyPart;
  }
  else
  {
    Aggregate = CBaseEntity::VPhysicsGetAggregate(this);
    v21 = Aggregate;
    if ( Aggregate != 0 )
    {
      v28 = (*(Aggregate->_vptr_IPhysAggregateInstance + 9))(Aggregate);
      if ( v28 > 0 )
      {
        for ( i = 0; i != v28; ++i )
        {
          m_Size = targets.m_Size;
          v25 = (*(v21->_vptr_IPhysAggregateInstance + 17))(v21, i);
          v26 = targets.m_Size;
          if ( targets.m_Size == targets.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<IPhysicsBody *,int>::Grow(&targets.m_Memory, 1);
            v26 = targets.m_Size;
          }
          targets.m_Size = v26 + 1;
          v23 = &targets.m_Memory.m_pMemory[m_Size];
          if ( v23 != 0 )
            *v23 = v25;
        }
      }
    }
  }
  if ( (info->m_bitsDamageType & 0x82) != 0 )
  {
    *&v4 = LODWORD(info->m_vecDamageForce.x);
    *&v5 = LODWORD(info->m_vecDamageForce.y);
    *&v6 = LODWORD(info->m_vecDamageForce.z);
    if ( *&v4 > -0.0099999998
      && *&v4 < 0.0099999998
      && *&v5 > -0.0099999998
      && *&v5 < 0.0099999998
      && *&v6 > -0.0099999998
      && *&v6 < 0.0099999998 )
    {
      goto LABEL_14;
    }
  }
  else if ( (*(g_pGameRules->_vptr_CGameRules + 25))(g_pGameRules) != 0 || info->m_bitsDamageType == 0 )
  {
    goto LABEL_14;
  }
  m_pMemory = targets.m_Memory.m_pMemory;
  v8 = &targets.m_Memory.m_pMemory[targets.m_Size];
  if ( targets.m_Memory.m_pMemory != v8 )
  {
    do
    {
      while ( 1 )
      {
        v9 = *m_pMemory;
        if ( (*(**m_pMemory + 40LL))(*m_pMemory, v4, v5, v6) == 2 )
          break;
        if ( v8 == ++m_pMemory )
          goto LABEL_14;
      }
      z = info->m_vecDamageForce.z;
      x = info->m_vecDamageForce.x;
      force.y = info->m_vecDamageForce.y;
      force.z = z;
      y = info->m_vecDamagePosition.y;
      force.x = x;
      v13 = info->m_vecDamagePosition.z;
      v14 = info->m_vecDamagePosition.x;
      offset.y = y;
      offset.z = v13;
      offset.x = v14;
      if ( ((*(*v9 + 1296LL))(v9) & 4) != 0 )
      {
        v15 = CBasePlayer::PlayerHoldingEntity(this);
        if ( v15 != 0 )
        {
          v16 = (*(v15->_vptr_IHandleEntity + 481))(v15, v9);
          if ( v16 != 0.0 )
          {
            v19 = (*(*v9 + 208LL))(v9) / v16;
            force.x = force.x * v19;
            force.y = force.y * v19;
            force.z = v19 * force.z;
          }
        }
      }
      (*(*v9 + 648LL))(v9, &force, &offset);
      ++m_pMemory;
    }
    while ( v8 != m_pMemory );
  }
LABEL_14:
  targets.m_Size = 0;
  if ( targets.m_Memory.m_nAllocationCount < 0 )
  {
    v17 = targets.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    v17 = targets.m_Memory.m_nGrowSize & 0xC0000000;
    if ( targets.m_Memory.m_pMemory != &targets.m_Memory.m_FixedMemory )
    {
      if ( targets.m_Memory.m_pMemory != 0 && v17 == 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v4, v5, v6);
      return 1;
    }
  }
  if ( v17 == 0 )
    CUtlMemory<IPhysicsBody *,int>::Purge(&targets.m_Memory);
  return 1;
}


// CBaseEntity::Event_Killed  (line 1116, @0x0000000002144ca0, libserver.so)  // inlines: Get, GetAttacker, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::SetDamageOptions, CBaseEntity::SetLifeState, UTIL_Remove
// callers: CBreakableProp::Event_Killed
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBaseEntity::Event_Killed(CBaseEntity *const this, const CTakeDamageInfo *const info)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx

  m_Index = info->m_hAttacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[info->m_hAttacker.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index && v5->m_pInstance != 0 )
        (*(v5->m_pInstance->_vptr_IHandleEntity + 93))(v5->m_pInstance, this, info);
    }
  }
  CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_NO);
  CBaseEntity::SetLifeState(this, LifeState_t::LIFE_DEAD);
  UTIL_Remove(this);
}


// CBaseEntity::SendOnKilledGameEvent  (line 1133, @0x000000000216c480, libserver.so)  // inlines: CVariantBase, CreateEvent, FireOutput, Free, Get, GetAttacker, GetEntityIdentity, GetEntryIndex, GetInflictor, GetInstance, IndexToIdentity, IsValid, LookupEntity, entindex, operator CBaseEntity*, operator CEntityInstance*, ~CVariantBase
// calls: CEntityInstance::GetEntityIndex, CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CBaseCombatCharacter::Event_Killed, CDOTA_BaseNPC::Event_Killed
// strings: "entity_killed", "entindex_killed", "damagebits", "entindex_attacker", "entindex_inflictor"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBaseEntity::SendOnKilledGameEvent(CBaseEntity *const this, const CTakeDamageInfo *const info)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  void (__fastcall *v6)(__int64, const char *, _QWORD); // r15
  CEntityIndex v7; // eax
  uint32 m_Index; // edx
  CConcreteEntityList *v9; // rax
  CEntityIdentity *v10; // rcx
  CEntityIdentity *v11; // rcx
  uint32 v12; // edx
  CEntityIdentity *v13; // rax
  CEntityIdentity *v14; // rax
  uint32 v15; // eax
  CEntityInstance *m_pInstance; // rsi
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  void (__fastcall *v19)(__int64, const char *, _QWORD); // r15
  CEntityIndex v20; // eax
  void (__fastcall *v21)(__int64, const char *, _QWORD); // r15
  CEntityIndex v22; // eax
  CVariant value; // [rsp+0h] [rbp-40h] BYREF

  v4 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "entity_killed", 0, 0);
  v5 = v4;
  if ( v4 != 0 )
  {
    v6 = *(*v4 + 112LL);
    v7.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    v6(v5, "entindex_killed", v7.m_Data);
    m_Index = info->m_hAttacker.m_Index;
    v9 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 > 1 )
    {
      v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F];
      if ( v10 != 0 )
      {
        v11 = &v10[info->m_hAttacker.m_Index & 0x1FF];
        if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index && v11->m_pInstance != 0 )
        {
          v19 = *(*v5 + 112LL);
          v20.m_Data = CEntityInstance::GetEntityIndex(v11->m_pInstance).m_Data;
          v19(v5, "entindex_attacker", v20.m_Data);
          v9 = CEntityHandle::gm_pEntityList;
        }
      }
    }
    v12 = info->m_hInflictor.m_Index;
    if ( v12 + 2 > 1 )
    {
      v13 = v9->m_pIdentityChunks[(LOWORD(info->m_hInflictor.m_Index) >> 9) & 0x3F];
      if ( v13 != 0 )
      {
        v14 = &v13[info->m_hInflictor.m_Index & 0x1FF];
        if ( v14 != 0 && v12 == v14->m_EHandle.m_Index && v14->m_pInstance != 0 )
        {
          v21 = *(*v5 + 112LL);
          v22.m_Data = CEntityInstance::GetEntityIndex(v14->m_pInstance).m_Data;
          v21(v5, "entindex_inflictor", v22.m_Data);
        }
      }
    }
    (*(*v5 + 112LL))(v5, "damagebits", info->m_bitsDamageType);
    (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v5, 0);
  }
  v15 = info->m_hInflictor.m_Index;
  m_pInstance = 0;
  if ( v15 + 2 > 1 )
  {
    v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hInflictor.m_Index) >> 9) & 0x3F];
    if ( v17 != 0 )
    {
      v18 = &v17[info->m_hInflictor.m_Index & 0x1FF];
      if ( v18 != 0 && v15 == v18->m_EHandle.m_Index )
        m_pInstance = v18->m_pInstance;
    }
  }
  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnKilled, m_pInstance, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


// CBaseEntity::SendOnHurtGameEvent  (line 1159, @0x00000000021597e0, libserver.so)  // inlines: CreateEvent, Get, GetAttacker, GetEntityIdentity, GetEntryIndex, GetInflictor, GetInstance, IndexToIdentity, IsValid, LookupEntity, SetInt, entindex, operator CBaseEntity*, operator CEntityInstance*
// calls: CEntityInstance::GetEntityIndex
// callers: CBaseCombatCharacter::ReactToDamage, CBaseCombatCharacter::OnTakeDamage_Alive
// strings: "entity_hurt", "entindex_killed", "damagebits", "entindex_attacker", "entindex_inflictor"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBaseEntity::SendOnHurtGameEvent(CBaseEntity *const this, const CTakeDamageInfo *const info)
{
  __int64 v4; // rbx
  CEntityIndex v5; // eax
  uint32 m_Index; // edx
  CConcreteEntityList *v7; // rax
  CEntityIdentity *v8; // rcx
  CEntityIdentity *v9; // rcx
  uint32 v10; // edx
  CEntityIdentity *v11; // rax
  CEntityIdentity *v12; // rax
  CEntityIndex v13; // eax
  CEntityIndex v14; // eax

  v4 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "entity_hurt", 0, 0);
  if ( v4 != 0 )
  {
    v5.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    (*(*v4 + 112LL))(v4, "entindex_killed", v5.m_Data);
    m_Index = info->m_hAttacker.m_Index;
    v7 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 > 1 )
    {
      v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F];
      if ( v8 != 0 )
      {
        v9 = &v8[info->m_hAttacker.m_Index & 0x1FF];
        if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index && v9->m_pInstance != 0 )
        {
          v13.m_Data = CEntityInstance::GetEntityIndex(v9->m_pInstance).m_Data;
          (*(*v4 + 112LL))(v4, "entindex_attacker", v13.m_Data);
          v7 = CEntityHandle::gm_pEntityList;
        }
      }
    }
    v10 = info->m_hInflictor.m_Index;
    if ( v10 + 2 > 1 )
    {
      v11 = v7->m_pIdentityChunks[(LOWORD(info->m_hInflictor.m_Index) >> 9) & 0x3F];
      if ( v11 != 0 )
      {
        v12 = &v11[info->m_hInflictor.m_Index & 0x1FF];
        if ( v12 != 0 && v10 == v12->m_EHandle.m_Index && v12->m_pInstance != 0 )
        {
          v14.m_Data = CEntityInstance::GetEntityIndex(v12->m_pInstance).m_Data;
          (*(*v4 + 112LL))(v4, "entindex_inflictor", v14.m_Data);
        }
      }
    }
    (*(*v4 + 128LL))(v4, "damage", info->m_flDamage);
    (*(*v4 + 112LL))(v4, "damagebits", info->m_bitsDamageType);
    (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v4, 0);
  }
}


// CBaseEntity::HasTarget  (line 1180, @0x000000000213dca0, libserver.so)  // inlines: FStrEq, String, ToCStr, _V_strcmp
// calls: strcmp
bool __fastcall CBaseEntity::HasTarget(CBaseEntity *const this, string_t targetname)
{
  bool result; // al
  const char *m_pAsString; // rax

  result = 0;
  if ( *targetname.u.m_Id != 0 && this->m_target.u.m_Id != 0 )
  {
    m_pAsString = this->m_target.u.m_pAsString;
    return m_pAsString == *targetname.u.m_pAsString || strcmp(*targetname.u.m_pAsString, m_pAsString) == 0;
  }
  return result;
}


// CBaseEntity::GetNextTarget  (line 1189, @0x0000000002159bf0, libserver.so)  // inlines: CUtlSymbolLarge, IsNullString, IsValid, operator!
// calls: CGameEntitySystem::FindEntityByName
// callers: CDynamicLight::DynamicLightThink, CFuncLadderEndPoint::Validate, CFuncLadder::FindNearbyDismountPoints, CGunTarget::Activate, CGunTarget::Next, CGunTarget::Start, CFuncTrain::Next, CTriggerCamera::Move, CTriggerCamera::Enable, CTriggerLook::Touch, CDOTABehaviorInvade::OnStartInternal, CDOTABehaviorInvade::Update (13 total)
CBaseEntity *__fastcall CBaseEntity::GetNextTarget(CBaseEntity *const this)
{
  __int64 v1; // rbp
  UtlSymLargeId_t m_Id; // rdx
  CBaseEntity *result; // rax
  _QWORD v4[3]; // [rsp+10h] [rbp-18h] BYREF

  m_Id = this->m_target.u.m_Id;
  result = 0;
  if ( m_Id != 0 )
  {
    v4[2] = v1;
    v4[0] = m_Id;
    return CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, v4, this, 0, 0, 0);
  }
  return result;
}


// CBaseEntity::Think  (line 1197, @0x000000000213d6f0, libserver.so)
// callers: CDOTABaseAbility::Think, CDOTA_BaseNPC_Hero::Think
void __fastcall CBaseEntity::Think(CBaseEntity *const this)
{
  void (*pfn)(CGameEntity *); // rax
  CGameEntity *v2; // rdi

  pfn = this->m_think.__pfn;
  if ( pfn != 0 )
  {
    v2 = (this + this->m_think.__delta);
    if ( (pfn & 1) != 0 )
      (*(v2->_vptr_IHandleEntity + pfn - 1))();
    else
      pfn(v2);
  }
}


// CThinkContextsSaveDataOps::Save  (line 1207, @0x000000000217c640, libserver.so)  // inlines: CUtlVectorDataOps, GetDataOps<CUtlVector<thinkfunc_t> >, Save, operator[]
// calls: __cxa_guard_acquire, __cxa_guard_release
// strings: "m_think"
// globals: `guard variable for'CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>>>(CUtlVector<thinkfunc_t,CUtlMemory<thinkfu, CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>>>(CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>> *)::ops
void __fastcall CThinkContextsSaveDataOps::Save(
        CThinkContextsSaveDataOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  _QWORD *pField; // r12
  __int64 v6; // r14
  int v7; // r15d
  int (**vptr_ISave)(...); // rax
  _QWORD *v9; // r13
  __int64 v10; // rax
  CBaseEntity *pOwner; // [rsp+8h] [rbp-68h]
  void (__fastcall *v12)(ISave *, __int64, const char *, _QWORD *, __int64); // [rsp+10h] [rbp-60h]
  _QWORD *bHasFunc; // [rsp+20h] [rbp-50h] BYREF
  __int64 v14; // [rsp+28h] [rbp-48h]
  __int64 v15; // [rsp+30h] [rbp-40h]

  pField = fieldInfo->pField;
  if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>>>(CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>> *)::ops == 0
    && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>>>(CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>> *)::ops) != 0 )
  {
    CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>>>(CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>> *)::ops = off_4008610;
    __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>>>(CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>> *)::ops);
  }
  v14 = 0;
  bHasFunc = pField;
  v6 = 0;
  v15 = 0;
  v7 = 0;
  (*CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>>>(CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>> *)::ops)(
    &CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>>>(CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>> *)::ops,
    &bHasFunc,
    pSave);
  pOwner = fieldInfo->pOwner;
  (*(pSave->_vptr_ISave + 8))(pSave);
  if ( *pField > 0 )
  {
    do
    {
      while ( 1 )
      {
        vptr_ISave = pSave->_vptr_ISave;
        v9 = (pField[1] + v6);
        LOBYTE(bHasFunc) = *v9 != 0;
        vptr_ISave[15](pSave, &bHasFunc, 1);
        if ( bHasFunc != 0 )
          break;
        ++v7;
        v6 += 40;
        if ( *pField <= v7 )
          goto LABEL_7;
      }
      ++v7;
      v6 += 40;
      v12 = *(pSave->_vptr_ISave + 52);
      v10 = (*(pOwner->_vptr_IHandleEntity + 34))(pOwner);
      v12(pSave, v10, "m_think", v9, 1);
    }
    while ( *pField > v7 );
  }
LABEL_7:
  (*(pSave->_vptr_ISave + 9))(pSave);
}


// CThinkContextsSaveDataOps::Restore  (line 1233, @0x000000000217bd60, libserver.so)  // inlines: CUtlVectorDataOps, GetDataOps<CUtlVector<thinkfunc_t> >, Restore, operator[]
// calls: __cxa_guard_acquire, __cxa_guard_release
// globals: `guard variable for'CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>>>(CUtlVector<thinkfunc_t,CUtlMemory<thinkfu, CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>>>(CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>> *)::ops
// local variable allocation has failed, the output may be wrong!
void __fastcall CThinkContextsSaveDataOps::Restore(
        CThinkContextsSaveDataOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  _QWORD *pField; // r12
  void *pOwner; // r14
  __int64 v7; // rbx
  int v8; // r13d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // [rsp+10h] [rbp-80h]
  void (__fastcall *v12)(IRestore *, __int64, __int64, __int64, _QWORD); // [rsp+18h] [rbp-78h]
  unsigned int v13; // [rsp+24h] [rbp-6Ch]
  bool bHasFunc; // [rsp+3Fh] [rbp-51h] BYREF
  _QWORD *header; // [rsp+40h] [rbp-50h] OVERLAPPED BYREF
  __int64 v16; // [rsp+48h] [rbp-48h]
  __int64 v17; // [rsp+50h] [rbp-40h]

  pField = fieldInfo->pField;
  if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>>>(CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>> *)::ops == 0
    && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>>>(CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>> *)::ops) != 0 )
  {
    CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>>>(CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>> *)::ops = off_4008610;
    __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>>>(CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>> *)::ops);
  }
  v16 = 0;
  header = pField;
  v17 = 0;
  (*(CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>>>(CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>> *)::ops
   + 8))(
    &CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>>>(CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>> *)::ops,
    &header,
    pRestore);
  pOwner = fieldInfo->pOwner;
  (*(pRestore->_vptr_IRestore + 7))(pRestore);
  if ( *pField > 0 )
  {
    v7 = 0;
    v8 = 0;
    (*(pRestore->_vptr_IRestore + 28))(pRestore, &bHasFunc, 1, 0);
    while ( 1 )
    {
      if ( bHasFunc )
      {
        v11 = pField[1];
        ++v8;
        (*(pRestore->_vptr_IRestore + 9))(pRestore, &header);
        v13 = header;
        v12 = *(pRestore->_vptr_IRestore + 21);
        v9 = (*(*pOwner + 272LL))(pOwner);
        v10 = v7 + v11;
        v7 += 40;
        v12(pRestore, v9, v10, 1, v13);
        if ( *pField <= v8 )
          break;
      }
      else
      {
        ++v8;
        v7 += 40;
        if ( *pField <= v8 )
          break;
      }
      (*(pRestore->_vptr_IRestore + 28))(pRestore, &bHasFunc, 1, 0);
    }
  }
  (*(pRestore->_vptr_IRestore + 8))(pRestore);
}


// CThinkContextsSaveDataOps::IsEmpty  (line 1268, @0x000000000217a7b0, libserver.so)
bool __fastcall CThinkContextsSaveDataOps::IsEmpty(
        CThinkContextsSaveDataOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  return *fieldInfo->pField == 0;
}


// CThinkContextsSaveDataOps::MakeEmpty  (line 1274, @0x000000000217ea40, libserver.so)
// calls: CUtlVectorBase<thinkfunc_t, CUtlMemory<thinkfunc_t, int> >::RemoveAll
void __fastcall CThinkContextsSaveDataOps::MakeEmpty(
        CThinkContextsSaveDataOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  CUtlVectorBase<thinkfunc_t,CUtlMemory<thinkfunc_t,int>>::RemoveAll(fieldInfo->pField);
}


// thinkfunc_t::AddDatadescMetadataKeys  (line 1284, @0x0000000002159c40, libserver.so)
void __fastcall thinkfunc_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// thinkfunc_t::GetBaseMap  (line 1284, @0x0000000002159c50, libserver.so)
datamap_t *__cdecl thinkfunc_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<thinkfunc_t>  (line 1284, @0x0000000002159c60, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_01.cpp
// strings: "thinkfunc_t"
// globals: `guard variable for'DataMapInit<thinkfunc_t>(thinkfunc_t *)::nameHolder, thinkfunc_t::m_DataMap, DataMapInit<thinkfunc_t>(thinkfunc_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<thinkfunc_t>(thinkfunc_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<thinkfunc_t>(thinkfunc_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<thinkfunc_t>(thinkfunc_t *)::nameHolder) != 0 )
  {
    DataMapInit<thinkfunc_t>(thinkfunc_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<thinkfunc_t>(thinkfunc_t *)::nameHolder.m_pszBase = "thinkfunc_t";
    DataMapInit<thinkfunc_t>(thinkfunc_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<thinkfunc_t>(thinkfunc_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<thinkfunc_t>(thinkfunc_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<thinkfunc_t>(thinkfunc_t *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<thinkfunc_t>(thinkfunc_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<thinkfunc_t>(thinkfunc_t *)::nameHolder,
      &_dso_handle);
  }
  thinkfunc_t::m_DataMap.baseMap = 0;
  thinkfunc_t::m_DataMap.dataDesc = &DataMapInit<thinkfunc_t>(thinkfunc_t *)::dataDesc[1];
  thinkfunc_t::m_DataMap.dataNumFields = 5;
  return &thinkfunc_t::m_DataMap;
}


// ResponseContext_t::AddDatadescMetadataKeys  (line 1296, @0x0000000002159d20, libserver.so)
void __fastcall ResponseContext_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// ResponseContext_t::GetBaseMap  (line 1296, @0x0000000002159d30, libserver.so)
datamap_t *__cdecl ResponseContext_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<ResponseContext_t>  (line 1296, @0x0000000002159d40, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_01.cpp
// strings: "ResponseContext_t"
// globals: `guard variable for'DataMapInit<ResponseContext_t>(ResponseContext_t *)::nameHolder, ResponseContext_t::m_DataMap, DataMapInit<ResponseContext_t>(ResponseContext_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<ResponseContext_t>(ResponseContext_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<ResponseContext_t>(ResponseContext_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<ResponseContext_t>(ResponseContext_t *)::nameHolder) != 0 )
  {
    DataMapInit<ResponseContext_t>(ResponseContext_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<ResponseContext_t>(ResponseContext_t *)::nameHolder.m_pszBase = "ResponseContext_t";
    DataMapInit<ResponseContext_t>(ResponseContext_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<ResponseContext_t>(ResponseContext_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<ResponseContext_t>(ResponseContext_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<ResponseContext_t>(ResponseContext_t *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<ResponseContext_t>(ResponseContext_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<ResponseContext_t>(ResponseContext_t *)::nameHolder,
      &_dso_handle);
  }
  ResponseContext_t::m_DataMap.baseMap = 0;
  ResponseContext_t::m_DataMap.dataDesc = &DataMapInit<ResponseContext_t>(ResponseContext_t *)::dataDesc[1];
  ResponseContext_t::m_DataMap.dataNumFields = 3;
  return &ResponseContext_t::m_DataMap;
}


// CBaseEntity::GetDataDescMap  (line 1304, @0x000000000213d730, libserver.so)
// globals: CBaseEntity::m_DataMap
datamap_t *__fastcall CBaseEntity::GetDataDescMap(CBaseEntity *const this)
{
  return &CBaseEntity::m_DataMap;
}


// CBaseEntity::AddDatadescMetadataKeys  (line 1304, @0x0000000002159e00, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CBaseEntity::GetEntityClass(void)
void __fastcall CBaseEntity::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CBaseEntity::GetEntityClass);
}


// CBaseEntity::GetBaseMap  (line 1304, @0x0000000002159e20, libserver.so)
datamap_t *__cdecl CBaseEntity::GetBaseMap()
{
  return 0;
}


// DataMapInit<CBaseEntity>  (line 1304, @0x000000000216e570, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorDataOps, CopyConstruct<char*>, Element, GenerateName, GetDataOps<CUtlVector<ResponseContext_t> >, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_01.cpp
// strings: "CBaseEntity"
// globals: `guard variable for'DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder, `guard variable for'DataMapInit<CBaseEntity>(CBaseEntity *)::dataDesc, CBaseEntity::GetEntityClass(void), CBaseEntity::m_DataMap, thinkcontextFuncs, `guard variable for'CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<ResponseContext_t,CUtlMemory<ResponseContext_t,int>>>(CUtlVector<ResponseContext_t,, CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<ResponseContext_t,CUtlMemory<ResponseContext_t,int>>>(CUtlVector<ResponseContext_t,CUtlMemory<ResponseC, DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder (11 total)
datamap_t *__fastcall DataMapInit<CBaseEntity>(CBaseEntity *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax
  char *v6; // r12
  __int64 v7; // rbx
  int v8; // eax
  char **v9; // rax
  char *v10; // r12
  __int64 v11; // rbx
  int v12; // eax
  char **v13; // rax
  char *v14; // r12
  __int64 v15; // rbx
  int v16; // eax
  char **v17; // rax
  char *v18; // r12
  __int64 v19; // rbx
  int v20; // eax
  char **v21; // rax
  char *v22; // r12
  __int64 v23; // rbx
  int v24; // eax
  char **v25; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder) != 0 )
  {
    DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_pszBase = "CBaseEntity";
    DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder,
      &_dso_handle);
  }
  CBaseEntity::m_DataMap.baseMap = 0;
  if ( `guard variable for'datamap_t * DataMapInit<CBaseEntity>(CBaseEntity *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseEntity>(CBaseEntity *)::dataDesc) != 0 )
  {
    DataMapInit<CBaseEntity>(CBaseEntity *)::dataDesc[15].pSaveRestoreOps = thinkcontextFuncs;
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<ResponseContext_t,CUtlMemory<ResponseContext_t,int>>>(CUtlVector<ResponseContext_t,CUtlMemory<ResponseContext_t,int>> *)::ops == 0
      && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<ResponseContext_t,CUtlMemory<ResponseContext_t,int>>>(CUtlVector<ResponseContext_t,CUtlMemory<ResponseContext_t,int>> *)::ops) != 0 )
    {
      CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<ResponseContext_t,CUtlMemory<ResponseContext_t,int>>>(CUtlVector<ResponseContext_t,CUtlMemory<ResponseContext_t,int>> *)::ops = off_4008650;
      __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<ResponseContext_t,CUtlMemory<ResponseContext_t,int>>>(CUtlVector<ResponseContext_t,CUtlMemory<ResponseContext_t,int>> *)::ops);
    }
    DataMapInit<CBaseEntity>(CBaseEntity *)::dataDesc[16].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<ResponseContext_t,CUtlMemory<ResponseContext_t,int>>>(CUtlVector<ResponseContext_t,CUtlMemory<ResponseContext_t,int>> *)::ops;
    DataMapInit<CBaseEntity>(CBaseEntity *)::dataDesc[88].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseEntity>(CBaseEntity *)::dataDesc[89].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseEntity>(CBaseEntity *)::dataDesc[90].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseEntity>(CBaseEntity *)::dataDesc[91].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseEntity>(CBaseEntity *)::dataDesc[92].pSaveRestoreOps = eventFuncs;
    v2 = operator new[](DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_nLenBase + 11);
    strcpy(stpcpy(v2, DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_pszBase), "SUB_Remove");
    m_Size = DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Size == DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CBaseEntity>(CBaseEntity *)::dataDesc[93].fieldName = v2;
    v6 = operator new[](DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_nLenBase + 22);
    strcpy(stpcpy(v6, DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_pszBase), "SUB_RemoveIfUncarried");
    v7 = DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Size == DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Memory, 1);
      v8 = DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CBaseEntity>(CBaseEntity *)::dataDesc[94].fieldName = v6;
    v10 = operator new[](DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_nLenBase + 14);
    strcpy(stpcpy(v10, DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_pszBase), "SUB_DoNothing");
    v11 = DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Size;
    v12 = DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Size == DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Memory, 1);
      v12 = DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Size = v12 + 1;
    v13 = &DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Memory.m_pMemory[v11];
    if ( v13 != 0 )
      *v13 = v10;
    DataMapInit<CBaseEntity>(CBaseEntity *)::dataDesc[95].fieldName = v10;
    v14 = operator new[](DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_nLenBase + 11);
    strcpy(stpcpy(v14, DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_pszBase), "SUB_Vanish");
    v15 = DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Size;
    v16 = DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Size == DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Memory, 1);
      v16 = DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Size = v16 + 1;
    v17 = &DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Memory.m_pMemory[v15];
    if ( v17 != 0 )
      *v17 = v14;
    DataMapInit<CBaseEntity>(CBaseEntity *)::dataDesc[96].fieldName = v14;
    v18 = operator new[](DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_nLenBase + 18);
    strcpy(stpcpy(v18, DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_pszBase), "SUB_CallUseToggle");
    v19 = DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Size;
    v20 = DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Size == DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Memory, 1);
      v20 = DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Size = v20 + 1;
    v21 = &DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Memory.m_pMemory[v19];
    if ( v21 != 0 )
      *v21 = v18;
    DataMapInit<CBaseEntity>(CBaseEntity *)::dataDesc[97].fieldName = v18;
    v22 = operator new[](DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_nLenBase + 20);
    strcpy(stpcpy(v22, DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_pszBase), "FrictionRevertThink");
    v23 = DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Size;
    v24 = DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Size == DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Memory, 1);
      v24 = DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Size = v24 + 1;
    v25 = &DataMapInit<CBaseEntity>(CBaseEntity *)::nameHolder.m_Names.m_Memory.m_pMemory[v23];
    if ( v25 != 0 )
      *v25 = v22;
    DataMapInit<CBaseEntity>(CBaseEntity *)::dataDesc[98].fieldName = v22;
    DataMapInit<CBaseEntity>(CBaseEntity *)::dataDesc[103].pSaveRestoreOps = &GetEntityComponentDataOps<CBodyComponent>(void)::ops;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseEntity>(CBaseEntity *)::dataDesc);
  }
  CBaseEntity::m_DataMap.dataNumFields = 118;
  CBaseEntity::m_DataMap.dataDesc = &DataMapInit<CBaseEntity>(CBaseEntity *)::dataDesc[1];
  AddDatadescMetadataKeys(&CBaseEntity::m_DataMap, CBaseEntity::GetEntityClass);
  return &CBaseEntity::m_DataMap;
}


// CBaseEntity::UpdateOnRemove  (line 1541, @0x0000000002169b00, libserver.so)  // inlines: CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, GetClassNameAsCStr, GetClassname, GlobalEntity_GetIndex, GlobalEntity_SetState, Purge, RemoveAll, SetEntityName, String, operator!=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CGameEntitySystem::NotifyRemoveEntity, CBaseEntity::GetAllChildren, DevMsg, UTIL_Remove, CBaseEntity::SetParent, CBaseEntity::SetGroundEntity, CEntityIdentity::SetEntityName, CCollisionProperty::Shutdown, CBaseEntity::PhysicsRemoveTouchedList, CBaseEntity::PhysicsRemoveGroundList, CEntityInstance::UpdateOnRemove, GlobalEntity_GetIndex (16 total)
// callers: CPointCamera::UpdateOnRemove, CInfoWorldLayer::UpdateOnRemove, CTonemapController2::UpdateOnRemove, CBaseModelEntity::UpdateOnRemove, CAmbientGeneric::UpdateOnRemove, CEntityFlame::UpdateOnRemove, CEnvShake::UpdateOnRemove, CLogicNavigation::UpdateOnRemove, CLogicBranch::UpdateOnRemove, CMessageEntity::UpdateOnRemove, CPhysForce::UpdateOnRemove, CPhysMotor::UpdateOnRemove (28 total)
// strings: "Warning: Deleting orphaned children of %s\n"
void __fastcall CBaseEntity::UpdateOnRemove(CBaseEntity *const this)
{
  int v2; // r12d
  __int64 i; // rbx
  const char *m_pAsString; // rdi
  CEntityIdentity *m_pEntity; // rax
  const char *v6; // rdx
  int v7; // edx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r14
  CBaseEntity *v10; // rdi
  CBaseEntity *v11; // r12
  CEntityIdentity *v12; // rdi
  CCollisionProperty *m_pCollision; // rdi
  int Index; // eax
  string_t name; // [rsp+0h] [rbp-60h] BYREF
  CUtlVector<CBaseEntity*,CUtlMemory<CBaseEntity*,int> > childrenList; // [rsp+10h] [rbp-50h] BYREF

  v2 = 0;
  for ( i = 0; this->m_aThinkFunctions.m_Size > v2; ++i )
  {
    if ( this->m_aThinkFunctions.m_Memory.m_pMemory[i].m_hFn != 0 )
    {
      (*(*g_pScriptVM + 152LL))(g_pScriptVM);
      this->m_aThinkFunctions.m_Memory.m_pMemory[i].m_hFn = 0;
    }
    ++v2;
  }
  (*(this->_vptr_IHandleEntity + 125))(this);
  if ( this->m_bLagCompensate )
    (*(lagcompensation->_vptr_ILagCompensationManager + 3))(lagcompensation, this);
  CGameEntitySystem::NotifyRemoveEntity(g_pGameEntitySystem, this);
  (*(g_pSimThinkManager->_vptr_ISimulationThinkManager + 2))(g_pSimThinkManager, this);
  (*(g_pStepSimulationManager->_vptr_IStepSimulationManager + 1))(g_pStepSimulationManager, this, 0);
  m_pAsString = this->m_iGlobalname.u.m_pAsString;
  if ( m_pAsString != 0 )
  {
    Index = GlobalEntity_GetIndex(m_pAsString);
    GlobalEntity_SetState(Index, GLOBALESTATE::GLOBAL_DEAD);
  }
  childrenList.m_Size = 0;
  childrenList.m_Memory.m_pMemory = 0;
  childrenList.m_Memory.m_nAllocationCount = 0;
  childrenList.m_Memory.m_nGrowSize = 0;
  CBaseEntity::GetAllChildren(this, &childrenList);
  if ( childrenList.m_Size != 0 )
  {
    m_pEntity = this->m_pEntity;
    v6 = "";
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      v6 = m_pEntity->m_designerName.u.m_pAsString;
    DevMsg(2, "Warning: Deleting orphaned children of %s\n", v6);
    v7 = childrenList.m_Size - 1;
    if ( childrenList.m_Size - 1 >= 0 )
    {
      v8 = 8LL * v7;
      v9 = 8 * (v7 - v7) - 8;
      while ( 1 )
      {
        v11 = childrenList.m_Memory.m_pMemory[v8 / 8];
        if ( v11 == 0 )
          break;
        if ( (*(v11->_vptr_IHandleEntity + 140))(childrenList.m_Memory.m_pMemory[v8 / 8]) != 0 )
        {
          CBaseEntity::SetParent(v11, 0, 0, 0);
          v8 -= 8LL;
          if ( v8 == v9 )
            goto LABEL_19;
        }
        else
        {
          v10 = childrenList.m_Memory.m_pMemory[v8 / 8];
LABEL_15:
          UTIL_Remove(v10);
          v8 -= 8LL;
          if ( v8 == v9 )
            goto LABEL_19;
        }
      }
      v10 = 0;
      goto LABEL_15;
    }
  }
LABEL_19:
  CBaseEntity::SetGroundEntity(this, 0);
  v12 = this->m_pEntity;
  name.u.m_Id = 0;
  CEntityIdentity::SetEntityName(v12, &name);
  m_pCollision = this->m_pCollision;
  if ( m_pCollision != 0 )
    CCollisionProperty::Shutdown(m_pCollision);
  CBaseEntity::PhysicsRemoveTouchedList(this);
  CBaseEntity::PhysicsRemoveGroundList(this);
  CEntityInstance::UpdateOnRemove(this);
  childrenList.m_Size = 0;
  if ( (childrenList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CBaseEntity *,int>::Purge(&childrenList.m_Memory);
    if ( (childrenList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CBaseEntity *,int>::Purge(&childrenList.m_Memory);
  }
}


// CBaseEntity::ObjectCaps  (line 1641, @0x000000000213ff70, libserver.so)  // inlines: GetParent
// calls: CGameSceneNode::GetOwnerEntity
// callers: CPointClientUIDialog::ObjectCaps, CServerOnlyEntity::ObjectCaps, CPointEntity::ObjectCaps, CBaseTrigger::ObjectCaps, CLightEntity::ObjectCaps, CServerOnlyModelEntity::ObjectCaps, CModelPointEntity::ObjectCaps, CParticleSystem::ObjectCaps, CBasePlayer::ObjectCaps, CBaseCombatWeapon::ObjectCaps, CColorCorrection::ObjectCaps, CColorCorrectionVolume::ObjectCaps (49 total)
int __fastcall CBaseEntity::ObjectCaps(CBaseEntity *const this)
{
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rbx
  int result; // eax
  __int64 v4; // r12
  char v5; // al
  int v6; // ecx
  char v7; // dl

  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent == 0 )
    return 128;
  OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
  result = 128;
  if ( OwnerEntity != 0 )
  {
    v4 = (*(OwnerEntity->_vptr_IHandleEntity + 19))(OwnerEntity) & 0x8F;
    v5 = (*(OwnerEntity->_vptr_IHandleEntity + 140))(OwnerEntity);
    v6 = v4;
    v7 = v5;
    result = v4;
    if ( v7 != 0 )
    {
      LOBYTE(v6) = v4 | 0x80;
      return v6;
    }
  }
  return result;
}


// CBaseEntity::Blocked  (line 1692, @0x0000000002140020, libserver.so)
// calls: CBaseEntity::GetMoveParent
void __fastcall CBaseEntity::Blocked(CBaseEntity *const this, CBaseEntity *pOther)
{
  void (*pfn)(CEntityInstance *, CBaseEntity *); // rax
  CEntityInstance *v5; // rdi
  CBaseEntity *MoveParent; // rax

  pfn = this->m_pfnBlocked.__pfn;
  if ( pfn != 0 )
  {
    v5 = (this + this->m_pfnBlocked.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(v5->_vptr_IHandleEntity + pfn - 1);
    pfn(v5, pOther);
  }
  MoveParent = CBaseEntity::GetMoveParent(this);
  if ( MoveParent != 0 )
    (*(MoveParent->_vptr_IHandleEntity + 115))(MoveParent, pOther);
}


// CBaseEntity::Use  (line 1717, @0x0000000002140730, libserver.so)
// calls: CBaseEntity::GetMoveParent
// callers: CPushable::Use, CTriggerBrush::Use
void __fastcall CBaseEntity::Use(
        CBaseEntity *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        __int64 useType,
        double value)
{
  void (*pfn)(CBaseEntity *, CBaseEntity *, CBaseEntity *, USE_TYPE, float); // rax
  CBaseEntity *v6; // rdi
  CBaseEntity *MoveParent; // rax
  float valuea; // [rsp+0h] [rbp-20h]
  USE_TYPE useTypea; // [rsp+4h] [rbp-1Ch]

  pfn = this->m_pfnUse.__pfn;
  if ( pfn != 0 )
  {
    v6 = (this + this->m_pfnUse.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(v6->_vptr_IHandleEntity + pfn - 1);
    pfn(v6, pActivator, pCaller, useType, value);
  }
  else
  {
    valuea = *&value;
    useTypea = useType;
    MoveParent = CBaseEntity::GetMoveParent(this);
    if ( MoveParent != 0 )
      (*(MoveParent->_vptr_IHandleEntity + 108))(MoveParent, pActivator, pCaller, useTypea, valuea);
  }
}


// CBaseEntity::UseEx  (line 1740, @0x00000000021407b0, libserver.so)
// calls: CBaseEntity::GetMoveParent
void __fastcall CBaseEntity::UseEx(CBaseEntity *const this, inputdata_t *const inputdata)
{
  CBaseEntity *MoveParent; // rax

  MoveParent = CBaseEntity::GetMoveParent(this);
  if ( this->m_pfnUse.__pfn != 0 || MoveParent == 0 )
    (*(this->_vptr_IHandleEntity + 108))(this, inputdata->pActivator, inputdata->pCaller, inputdata->nOutputID, 0.0);
  else
    (*(MoveParent->_vptr_IHandleEntity + 109))(MoveParent, inputdata);
}


// ComputePushStartMatrix  (line 1801, @0x000000000215d3b0, libserver.so)  // inlines: GetAbsVelocity, VectorMultiply, VectorSubtract, operator*, operator-, operator=
// calls: AngleMatrix, CBaseEntity::EntityToWorldTransform, MatrixInvert, ConcatTransforms, CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles, CBaseEntity::CalcAbsoluteVelocity
// callers: CBaseEntity::VPhysicsUpdatePusher
void __fastcall ComputePushStartMatrix(matrix3x4_t *const start, CBaseEntity *pEntity, const pushblock_t *const params)
{
  physicspushlist_t *pList; // rax
  matrix3x4_t *v7; // rax
  matrix3x4_t *v8; // rax
  CBaseEntity *pRootParent; // r14
  float movetime; // xmm0_4
  CBaseEntity *v11; // rdi
  const Vector *AbsOrigin; // rax
  CBaseEntity *v13; // rdi
  float x; // xmm2_4
  float y; // xmm1_4
  float v16; // xmm5_4
  float v17; // xmm0_4
  float v18; // xmm5_4
  float v19; // xmm6_4
  float v20; // xmm0_4
  const QAngle *AbsAngles; // rax
  vec_t v22; // xmm0_4
  vec_t v23; // xmm2_4
  float v24; // [rsp+4h] [rbp-ECh]
  float v25; // [rsp+4h] [rbp-ECh]
  float v26; // [rsp+8h] [rbp-E8h]
  float v27; // [rsp+8h] [rbp-E8h]
  float v28; // [rsp+Ch] [rbp-E4h]
  float v29; // [rsp+Ch] [rbp-E4h]
  float v30; // [rsp+Ch] [rbp-E4h]
  Vector localOrigin; // [rsp+10h] [rbp-E0h] BYREF
  QAngle localAngles; // [rsp+20h] [rbp-D0h] BYREF
  matrix3x4_t xform; // [rsp+30h] [rbp-C0h] BYREF
  matrix3x4_t delta; // [rsp+60h] [rbp-90h] BYREF
  matrix3x4_t srcInv; // [rsp+90h] [rbp-60h] BYREF

  pList = params->pList;
  if ( params->pList != 0 )
  {
    localOrigin = pList->localOrigin;
    localAngles = pList->localAngles;
  }
  else
  {
    pRootParent = params->pRootParent;
    movetime = params->movetime;
    v11 = pRootParent;
    if ( (pRootParent->m_iEFlags & 0x1000) != 0 )
    {
      v30 = params->movetime;
      CBaseEntity::CalcAbsoluteVelocity(pRootParent);
      v11 = params->pRootParent;
      movetime = v30;
    }
    v28 = pRootParent->m_vecAbsVelocity.m_Value.x * movetime;
    v26 = pRootParent->m_vecAbsVelocity.m_Value.y * movetime;
    v24 = movetime * pRootParent->m_vecAbsVelocity.m_Value.z;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
    v13 = params->pRootParent;
    x = AbsOrigin->x;
    y = AbsOrigin->y;
    v16 = v13->m_vecAngVelocity.x;
    localOrigin.z = AbsOrigin->z - v24;
    v17 = params->movetime;
    v18 = v16 * v17;
    v19 = v13->m_vecAngVelocity.y * v17;
    v20 = v17 * v13->m_vecAngVelocity.z;
    localOrigin.y = y - v26;
    localOrigin.x = x - v28;
    v29 = v18;
    v27 = v19;
    v25 = v20;
    AbsAngles = CBaseEntity::GetAbsAngles(v13);
    v22 = AbsAngles->z - v25;
    v23 = AbsAngles->x - v29;
    localAngles.y = AbsAngles->y - v27;
    localAngles.z = v22;
    localAngles.x = v23;
  }
  AngleMatrix(&localAngles, &localOrigin, &xform);
  v7 = CBaseEntity::EntityToWorldTransform(params->pRootParent);
  MatrixInvert(v7, &srcInv);
  ConcatTransforms(&xform, &srcInv, &delta);
  v8 = CBaseEntity::EntityToWorldTransform(pEntity);
  ConcatTransforms(&delta, v8, start);
}


// CBaseEntity::VPhysicsUpdatePusher  (line 1988, @0x0000000002169df0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CheckPushedEntity, DestroyDataObject, DotProduct, FastSqrt, FindPhysicsBlocker, Get, GetAbsVelocity, GetClassNameAsCStr, GetDataObject, GetDebugName, GetEntityIdentity, GetEntryIndex, GetInstance, GetSolid, IndexToIdentity, IsSolid, IsValid, Length, LengthSqr, LookupEntity, MatrixAngles, Purge, RemoveAll, SetMoveDoneTime, String, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator!=, operator*, operator-, operator-=, operator==, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::CheckHasGamePhysicsSimulation, CBaseEntity::GetAllInHierarchy, CBaseEntity::VPhysicsGetObject, VectorNormalize, CBaseEntity::GetAbsOrigin, CEntityIdentity::DestroyDataObject, CUtlMemory<CBaseEntity*, int>::Purge, CBaseEntity::SetLocalOrigin, CBaseEntity::SetLocalAngles, CBaseEntity::SetAbsOrigin, CBaseEntity::GetAbsAngles, RotationDeltaAxisAngle (23 total)
// callers: CBaseEntity::VPhysicsUpdate
// strings: "non-moveable %s '%s' is pushed\n"
// globals: CheckPushedEntity(CBaseEntity *,pushblock_t &)::__executeCount, CEntityHandle::gm_pEntityList
void __fastcall CBaseEntity::VPhysicsUpdatePusher(CBaseEntity *const this, IPhysicsObject *pPhysics)
{
  CCollisionProperty *m_pCollision; // rdi
  CEntityIdentity *v5; // rdi
  float m_flLocalTime; // xmm0_4
  float m_flMoveDoneTime; // xmm1_4
  CEntityIdentity *m_pEntity; // rdi
  bool v9; // al
  bool v10; // al
  __int64 v11; // rbx
  int i; // r12d
  _BYTE *v13; // r13
  __int64 v14; // r15
  IPhysicsObject *Object; // rax
  IPhysicsObject *v16; // r13
  __int64 v17; // rax
  const Vector *AbsOrigin; // rax
  float v19; // xmm0_4
  IPhysicsObject *v20; // rax
  float *v21; // rbx
  int v22; // r13d
  _WORD *v23; // r12
  CEntityIdentity *v24; // rdx
  CEntityIdentity *v25; // rdx
  CBaseEntity *m_pInstance; // r15
  const Vector *v27; // rax
  vec_t v28; // xmm0_4
  float v29; // xmm2_4
  const QAngle *AbsAngles; // rax
  __int64 v31; // rax
  const QAngle *v32; // rax
  float v33; // xmm0_4
  float v34; // xmm1_4
  float v35; // xmm0_4
  float v36; // xmm7_4
  float v37; // xmm7_4
  const CEntityIdentity *v38; // rdi
  const char *DebugName; // rax
  __int64 v40; // rcx
  const char *v41; // rsi
  const Vector *v42; // rax
  __int64 v43; // r12
  CEntityInstance *v44; // r15
  const IPhysicsBody *v45; // rax
  CEntityInstance *v46; // rbx
  int v47; // edx
  char *v48; // rax
  CEntityInstance *v49; // rsi
  CEntityIdentity *v50; // rcx
  CEntityIdentity *v51; // rcx
  char v52; // r13
  float v53; // xmm2_4
  double v54; // xmm0_8
  double v55; // xmm1_8
  const Vector *v56; // rax
  const QAngle *v57; // rax
  float v58; // xmm2_4
  float v59; // xmm1_4
  float v60; // xmm2_4
  float v61; // xmm1_4
  char v62; // [rsp-5Eh] [rbp-1FEh]
  char v63; // [rsp-5Dh] [rbp-1FDh]
  float v64; // [rsp-5Ch] [rbp-1FCh]
  float v65; // [rsp-58h] [rbp-1F8h]
  float v66; // [rsp-54h] [rbp-1F4h]
  float z; // [rsp-50h] [rbp-1F0h]
  float y; // [rsp-4Ch] [rbp-1ECh]
  float v69; // [rsp-48h] [rbp-1E8h]
  CEntityInstance *GameData; // [rsp-48h] [rbp-1E8h]
  IPhysicsObject *v71; // [rsp-40h] [rbp-1E0h]
  float x; // [rsp-38h] [rbp-1D8h]
  float v73; // [rsp-38h] [rbp-1D8h]
  float v74; // [rsp-34h] [rbp-1D4h]
  float v75; // [rsp-34h] [rbp-1D4h]
  float j; // [rsp-34h] [rbp-1D4h]
  bool v77; // [rsp-30h] [rbp-1D0h]
  float v78; // [rsp-30h] [rbp-1D0h]
  float v79; // [rsp-28h] [rbp-1C8h]
  float v80; // [rsp-28h] [rbp-1C8h]
  char *DataObject; // [rsp-20h] [rbp-1C0h]
  float v82; // [rsp-14h] [rbp-1B4h] BYREF
  float v83; // [rsp-10h] [rbp-1B0h] BYREF
  float v84; // [rsp-Ch] [rbp-1ACh] BYREF
  __int64 v85; // [rsp-8h] [rbp-1A8h] BYREF
  Vector shadowOrigin; // [rsp+0h] [rbp-1A0h] BYREF
  QAngle shadowAngles; // [rsp+10h] [rbp-190h] BYREF
  float v88; // [rsp+1Ch] [rbp-184h]
  float v89; // [rsp+20h] [rbp-180h]
  QAngle v90; // [rsp+28h] [rbp-178h] BYREF
  Vector v91; // [rsp+38h] [rbp-168h] BYREF
  float v92[4]; // [rsp+48h] [rbp-158h] BYREF
  Vector v93; // [rsp+58h] [rbp-148h] BYREF
  Vector v94; // [rsp+68h] [rbp-138h] BYREF
  Vector v95; // [rsp+78h] [rbp-128h] BYREF
  QAngle v96; // [rsp+88h] [rbp-118h] BYREF
  Vector v97; // [rsp+98h] [rbp-108h] BYREF
  const IPhysicsBody *v98; // [rsp+A8h] [rbp-F8h] BYREF
  float v99[4]; // [rsp+B8h] [rbp-E8h] BYREF
  int v100; // [rsp+C8h] [rbp-D8h] BYREF
  CUtlVector<CBaseEntity*,CUtlMemory<CBaseEntity*,int> > list; // [rsp+D0h] [rbp-D0h] BYREF
  float *v102; // [rsp+E8h] [rbp-B8h] BYREF
  pushblock_t params; // [rsp+F0h] [rbp-B0h] BYREF
  Vector localOrigin; // [rsp+110h] [rbp-90h]
  float v105; // [rsp+124h] [rbp-7Ch]
  float v106; // [rsp+134h] [rbp-6Ch]
  __int64 v107; // [rsp+138h] [rbp-68h] BYREF
  QAngle localAngles; // [rsp+140h] [rbp-60h]

  v79 = this->m_flLocalTime - this->m_flVPhysicsUpdateLocalTime;
  if ( v79 <= 0.0 )
    return;
  m_pCollision = this->m_pCollision;
  if ( m_pCollision != 0 && (*(m_pCollision->_vptr_ICollideable + 7))(m_pCollision) == 1
    || (*(*pPhysics + 1856LL))(pPhysics, &v85, &shadowOrigin.z) == 0 )
  {
    goto LABEL_4;
  }
  v100 = 0;
  *&list.m_Size = 0;
  list.m_Memory.m_pMemory = 0;
  CBaseEntity::GetAllInHierarchy(this, &v100);
  DataObject = 0;
  m_pEntity = this->m_pEntity;
  if ( (m_pEntity->m_fDataObjectTypes & 0x20) != 0 )
    DataObject = CEntityIdentity::GetDataObject(m_pEntity, 5);
  if ( vec3_angle.x == this->m_vecAngVelocity.x )
  {
    v9 = vec3_angle.y != this->m_vecAngVelocity.y || vec3_angle.z != this->m_vecAngVelocity.z;
    v63 = v9;
  }
  else
  {
    v63 = 1;
  }
  if ( vec3_origin.x == this->m_vecVelocity.m_Value.x )
  {
    v10 = vec3_origin.y != this->m_vecVelocity.m_Value.y || vec3_origin.z != this->m_vecVelocity.m_Value.z;
    v62 = v10;
  }
  else
  {
    v62 = 1;
  }
  params.pList = this;
  params.pRootParent = 0;
  LODWORD(params.pBlockedEntity) = 0;
  *(&params.pBlockedEntity + 1) = v79;
  v102 = DataObject;
  if ( v100 <= 0 )
    goto LABEL_46;
  v11 = 0;
  for ( i = 0; i < v100; ++i )
  {
    v13 = *(*(*&list.m_Size + v11) + 528LL);
    if ( v13 != 0
      && ((*((*(*v13 + 104LL))(v13) + 31) & 1) != 0 || (*((*(*v13 + 104LL))(v13) + 31) & 2) != 0)
      && v13[83] != 0 )
    {
      v14 = *(*&list.m_Size + v11);
      Object = CBaseEntity::VPhysicsGetObject(v14);
      v16 = Object;
      if ( Object != 0 )
      {
        if ( (*(*Object + 1512LL))(Object) == 0 && CheckPushedEntity(CBaseEntity *,pushblock_t &)::__executeCount <= 0 )
        {
          v38 = *(v14 + 8);
          ++CheckPushedEntity(CBaseEntity *,pushblock_t &)::__executeCount;
          DebugName = CEntityIdentity::GetDebugName(v38);
          v40 = *(v14 + 8);
          v41 = "";
          if ( *(v40 + 32) != 0 )
            v41 = *(v40 + 32);
          Warning("non-moveable %s '%s' is pushed\n", v41, DebugName);
        }
        if ( (*(*v16 + 1512LL))(v16) != 0 && (*(*v16 + 536LL))(v16) != 0 )
        {
          (*(*v16 + 1856LL))(v16, &shadowAngles.z, &v90);
          v77 = 1;
          if ( v14 == params.pList
            && (vec3_angle.x != *(v14 + 736) || vec3_angle.y != *(v14 + 740)
              ? (v77 = 1)
              : (v77 = vec3_angle.z != *(v14 + 744)),
                vec3_origin.x == *(v14 + 456) && vec3_origin.y == *(v14 + 460) && vec3_origin.z == *(v14 + 464)) )
          {
            v75 = -1.0;
          }
          else
          {
            if ( (*(v14 + 573) & 0x10) != 0 )
              CBaseEntity::CalcAbsoluteVelocity(v14);
            v91 = *(v14 + 444);
            v69 = VectorNormalize(&v91);
            v17 = (*(*v16 + 536LL))(v16);
            (*(*v17 + 104LL))(v17, v92, 0);
            y = v91.y;
            x = v91.x;
            z = v91.z;
            v66 = shadowAngles.z;
            v64 = v89;
            v65 = v88;
            v74 = (v92[2] * v91.z) + ((v92[1] * v91.y) + (v91.x * v92[0]));
            AbsOrigin = CBaseEntity::GetAbsOrigin(v14);
            if ( (v74 - (((AbsOrigin->x * v91.x) + (AbsOrigin->y * v91.y)) + (AbsOrigin->z * v91.z))) <= 1.0 )
            {
              v73 = v74 - (((x * v66) + (y * v65)) + (z * v64));
              if ( v73 > 1.0 )
              {
                if ( v14 == params.pList )
                {
                  if ( v102 != 0 )
                  {
                    v93 = *(v14 + 456);
                    VectorNormalize(&v93);
                    v42 = CBaseEntity::GetLocalOrigin(v14);
                    v35 = ((((v102[1] * v93.x) + (v102[2] * v93.y)) + (v102[3] * v93.z)) + v74)
                        - (((v93.x * v42->x) + (v93.y * v42->y)) + (v93.z * v42->z));
                  }
                  else
                  {
                    v35 = v74 - (*(&params.pBlockedEntity + 1) * v69);
                  }
                }
                else
                {
                  ComputePushStartMatrix(&params.moveBackFraction, v14, &v102);
                  v35 = ((localOrigin.y * v91.x) + (v105 * v91.y)) + (v106 * v91.z);
                }
                v36 = v74;
                v75 = 1.0;
                v37 = v36 - v35;
                if ( v37 > 0.0 )
                {
                  if ( (v73 / v37) <= 1.0 )
                    v75 = fmaxf(0.0, v73 / v37);
                  else
                    v75 = 1.0;
                }
                goto LABEL_38;
              }
            }
            else
            {
              (*(*v14 + 472LL))(v14, 0.0);
            }
            v75 = -1.0;
          }
LABEL_38:
          if ( v77 )
          {
            AbsAngles = CBaseEntity::GetAbsAngles(v14);
            RotationDeltaAxisAngle(&v90, AbsAngles, &v94, &v82);
            if ( fabs(v82) > 0.5 )
            {
              v31 = (*(*v16 + 536LL))(v16);
              (*(*v31 + 104LL))(v31, 0, &v96);
              RotationDeltaAxisAngle(&v90, &v96, &v95, &v83);
              if ( fabs(v83) <= 0.0099999998 )
              {
                (*(*v14 + 472LL))(v14, 0.0);
              }
              else
              {
                if ( v14 == params.pList )
                {
                  v33 = fsqrt(
                          ((*(v14 + 736) * *(v14 + 736)) + (*(v14 + 740) * *(v14 + 740)))
                        + (*(v14 + 744) * *(v14 + 744)))
                      * *(&params.pBlockedEntity + 1);
                }
                else
                {
                  ComputePushStartMatrix(&v107, v14, &v102);
                  MatrixAngles(&v107, &v98);
                  v32 = CBaseEntity::GetAbsAngles(v14);
                  RotationDeltaAxisAngle(&v98, v32, &v97, &v84);
                  v33 = (((v97.x * v94.x) + (v97.y * v94.y)) + (v97.z * v94.z)) * v84;
                }
                if ( v33 == 0.0 )
                  v34 = 1.0;
                else
                  v34 = fminf(1.0, fabs(v82 / v33));
                v75 = fmaxf(v75, v34);
              }
            }
          }
          if ( v75 >= *&params.pBlockedEntity )
          {
            *&params.pBlockedEntity = v75;
            params.pRootParent = v14;
          }
        }
      }
    }
    v11 += 8;
  }
  if ( params.pRootParent == 0 )
    goto LABEL_46;
  v19 = v79;
  v80 = *&params.pBlockedEntity * v79;
  if ( v80 <= 0.0 )
    goto LABEL_46;
  j = this->m_flLocalTime - v80;
  if ( ((v19 * 0.99000001) + this->m_flVPhysicsUpdateLocalTime) < j )
    goto LABEL_46;
  v20 = CBaseEntity::VPhysicsGetObject(params.pRootParent);
  GameData = 0;
  if ( (*(*v20 + 1896LL))(v20, 0, &v98) != 0 )
    GameData = IPhysicsBody::GetGameData(v98);
  v21 = DataObject;
  if ( DataObject == 0 )
  {
    v56 = CBaseEntity::GetLocalOrigin(this);
    *&params.moveBackFraction = *&v56->x;
    localOrigin.x = v56->z;
    v57 = CBaseEntity::GetLocalAngles(this);
    v107 = *&v57->x;
    localAngles.x = v57->z;
    if ( v62 != 0 )
    {
      v58 = this->m_vecVelocity.m_Value.y * v80;
      v59 = this->m_vecVelocity.m_Value.z * v80;
      params.moveBackFraction = params.moveBackFraction - (this->m_vecVelocity.m_Value.x * v80);
      params.movetime = params.movetime - v58;
      localOrigin.x = localOrigin.x - v59;
    }
    if ( v63 != 0 )
    {
      v60 = this->m_vecAngVelocity.y * v80;
      v61 = this->m_vecAngVelocity.z * v80;
      *&v107 = *&v107 - (this->m_vecAngVelocity.x * v80);
      *(&v107 + 1) = *(&v107 + 1) - v60;
      localAngles.x = localAngles.x - v61;
    }
    CBaseEntity::SetLocalOrigin(this, &params.moveBackFraction);
    CBaseEntity::SetLocalAngles(this, &v107);
    goto LABEL_123;
  }
  CBaseEntity::SetLocalOrigin(this, (DataObject + 4));
  CBaseEntity::SetLocalAngles(this, (DataObject + 16));
  v22 = 0;
  v23 = DataObject + 32;
  for ( j = *DataObject; *(DataObject + 7) > v22; v21 += 3 )
  {
    if ( (*v23 + 2) > 1 )
    {
      v24 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v23 >> 9) & 0x3F];
      if ( v24 != 0 )
      {
        v25 = &v24[*v23 & 0x1FF];
        if ( v25 != 0 && *v23 == v25->m_EHandle.m_Index )
        {
          m_pInstance = v25->m_pInstance;
          if ( v25->m_pInstance != 0 )
          {
            v27 = CBaseEntity::GetAbsOrigin(v25->m_pInstance);
            v28 = v27->z - v21[42];
            v29 = v27->x - v21[40];
            *(&v107 + 1) = v27->y - v21[41];
            localAngles.x = v28;
            *&v107 = v29;
            CBaseEntity::SetAbsOrigin(m_pInstance, &v107);
          }
        }
      }
    }
    ++v22;
    v23 += 2;
  }
  v71 = CBaseEntity::VPhysicsGetObject(this);
  v78 = 0.0;
  v43 = (*(*v71 + 1872LL))(v71);
  v44 = 0;
  while ( 2 )
  {
    if ( (*(*v43 + 16LL))(v43) != 0 )
    {
      v45 = (*(*v43 + 24LL))(v43, 1);
      v46 = IPhysicsBody::GetGameData(v45);
      v47 = *(DataObject + 7);
      if ( v47 <= 0 )
      {
LABEL_106:
        v52 = 0;
      }
      else
      {
        v48 = DataObject + 32;
        while ( 1 )
        {
          v49 = 0;
          if ( (*v48 + 2) > 1 )
          {
            v50 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v48 >> 9) & 0x3F];
            if ( v50 != 0 )
            {
              v51 = &v50[*v48 & 0x1FF];
              if ( v51 != 0 && *v48 == v51->m_EHandle.m_Index )
                v49 = v51->m_pInstance;
            }
          }
          if ( v46 == v49 )
            break;
          v48 += 4;
          if ( v48 == &DataObject[4 * (v47 - 1) + 36] )
            goto LABEL_106;
        }
        v52 = 1;
      }
      (*(*v43 + 48LL))(v43, v99);
      *&v54 = (*(*v43 + 56LL))(v43);
      *&v55 = LODWORD(v99[0]);
      *&v55 = v99[0] * *&v54;
      v53 = (v99[1] * *&v54) * *(DataObject + 41);
      *&v54 = (*&v54 * v99[2]) * *(DataObject + 42);
      *&v55 = ((*&v55 * *(DataObject + 40)) + v53) + *&v54;
      if ( v44 != 0 )
      {
        if ( v52 == 0 && *&v55 > v78 )
        {
LABEL_110:
          v78 = *&v55;
          goto LABEL_111;
        }
      }
      else
      {
        if ( v52 == 0 )
          goto LABEL_110;
LABEL_111:
        v44 = v46;
      }
      (*(*v43 + 96LL))(v43, v54, v55);
      continue;
    }
    break;
  }
  (*(*v71 + 1880LL))(v71, v43);
  if ( v44 != 0 )
    goto LABEL_44;
LABEL_123:
  if ( GameData != 0 )
  {
    v44 = GameData;
LABEL_44:
    (*(this->_vptr_IHandleEntity + 115))(this, v44);
  }
  this->m_flLocalTime = j;
LABEL_46:
  v100 = 0;
  if ( (HIDWORD(list.m_Memory.m_pMemory) & 0xC0000000) == 0 )
  {
    CUtlMemory<CBaseEntity *,int>::Purge(&list);
    if ( (HIDWORD(list.m_Memory.m_pMemory) & 0xC0000000) == 0 )
      CUtlMemory<CBaseEntity *,int>::Purge(&list);
  }
LABEL_4:
  v5 = this->m_pEntity;
  if ( (v5->m_fDataObjectTypes & 0x20) != 0 )
    CEntityIdentity::DestroyDataObject(v5, 5);
  m_flLocalTime = this->m_flLocalTime;
  m_flMoveDoneTime = this->m_flMoveDoneTime;
  this->m_flVPhysicsUpdateLocalTime = m_flLocalTime;
  if ( m_flLocalTime >= m_flMoveDoneTime && m_flMoveDoneTime > 0.0 )
  {
    this->m_flMoveDoneTime = -1.0;
    CBaseEntity::CheckHasGamePhysicsSimulation(this);
    (*(this->_vptr_IHandleEntity + 118))(this);
  }
}


// CBaseEntity::SetMoveDoneTime  (line 2110, @0x0000000002159e30, libserver.so)
// calls: CBaseEntity::CheckHasGamePhysicsSimulation
// callers: CMomentaryRotButton::Lock, CMomentaryRotButton::Unlock, CFuncRotating::Activate, CBaseButton::Unlock, CMomentaryRotButton::InputSetPosition, CFuncRotating::SetTargetSpeed, CFuncRotating::ReverseMove, CFuncRotating::RotateMove, CFuncRotating::SpinDownMove, CFuncRotating::InputStopAtStartPos, CFuncRotating::SpinUpMove, CMomentaryRotButton::ReturnMoveDone (43 total)
void __fastcall CBaseEntity::SetMoveDoneTime(CBaseEntity *const this, float a2, float flDelay)
{
  if ( a2 < 0.0 )
    this->m_flMoveDoneTime = -1.0;
  else
    this->m_flMoveDoneTime = a2 + this->m_flLocalTime;
  CBaseEntity::CheckHasGamePhysicsSimulation(this);
}


// CBaseEntity::PhysicsRelinkChildren  (line 2126, @0x0000000002159e70, libserver.so)  // inlines: IsSolid, IsTriggerCollisionGroup
// calls: CBaseEntity::FirstMoveChild, CBaseEntity::PhysicsTouchTriggers, CBaseEntity::NextMovePeer, CCollisionProperty::IsTriggerCollisionGroup
// callers: CBaseEntity::VPhysicsUpdate, CBaseEntity::PhysicsStep
void __fastcall CBaseEntity::PhysicsRelinkChildren(CBaseEntity *const this, float a2, float dt)
{
  CBaseEntity *i; // rbx
  float v4; // xmm1_4
  CCollisionProperty *m_pCollision; // r12
  const CCollisionProperty *v6; // rdi

  for ( i = CBaseEntity::FirstMoveChild(this); i != 0; i = CBaseEntity::NextMovePeer(i) )
  {
    m_pCollision = i->m_pCollision;
    if ( m_pCollision != 0
      && (((*((*(m_pCollision->_vptr_ICollideable + 13))(i->m_pCollision) + 31) & 1) != 0
        || (*((*(m_pCollision->_vptr_ICollideable + 13))(m_pCollision) + 31) & 2) != 0)
       && m_pCollision->m_nSolidType.m_Value != SolidType_t::SOLID_NONE
       || (v6 = i->m_pCollision) != 0 && CCollisionProperty::IsTriggerCollisionGroup(v6)) )
    {
      CBaseEntity::PhysicsTouchTriggers(i, 0);
    }
    if ( i->m_MoveType.m_Value != MoveType_t::MOVETYPE_VPHYSICS )
      (*(i->_vptr_IHandleEntity + 59))(i, a2);
    if ( CBaseEntity::FirstMoveChild(i) != 0 )
      CBaseEntity::PhysicsRelinkChildren(i, v4);
  }
}


// CBaseEntity::VPhysicsShadowCollision  (line 2162, @0x000000000213d740, libserver.so)
void __fastcall CBaseEntity::VPhysicsShadowCollision(CBaseEntity *const this, int index, gamevcollisionevent_t *pEvent)
{
  ;
}


// CBaseEntity::VPhysicsCollision  (line 2168, @0x0000000002140090, libserver.so)
// calls: CPhysicsGameSystem::PhysCollisionSound, PhysCollisionScreenShake, PhysCollisionDust
// callers: CBreakable::VPhysicsCollision, CPushable::VPhysicsCollision, CRagdollProp::VPhysicsCollision, CPhysMagnet::VPhysicsCollision, CPhysicsProp::VPhysicsCollision, CPropVehicleDriveable::VPhysicsCollision
void __fastcall CBaseEntity::VPhysicsCollision(CBaseEntity *const this, int index, gamevcollisionevent_t *pEvent)
{
  _BOOL8 v5; // r14
  CBaseEntity *v6; // rax
  __int64 v8; // rax
  const CPhysSurfaceProperties *v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  _BOOL8 v12; // [rsp+0h] [rbp-40h]

  v5 = index == 0;
  v6 = pEvent->pEntities[v5];
  if ( v6 != 0
    && (this->m_MoveType.m_Value == MoveType_t::MOVETYPE_VPHYSICS
     || v6->m_MoveType.m_Value == MoveType_t::MOVETYPE_VPHYSICS)
    && (pEvent->deltaCollisionTime >= 0.5 || v6 != this) )
  {
    v8 = (*(g_pVPhysics2->_vptr_IAppSystem + 18))(g_pVPhysics2);
    v12 = v5 + 4;
    v9 = (*(*v8 + 16LL))(v8, pEvent->surfaceProps[v5].m_nHashCode, 0);
    v10 = (*(g_pVPhysics2->_vptr_IAppSystem + 18))(g_pVPhysics2);
    v11 = (*(*v10 + 16LL))(v10, pEvent->surfaceProps[index].m_nHashCode, 0);
    if ( v9->m_gameProperties.m_nMaterial != 88 && *(v11 + 176) != 88 )
    {
      CPhysicsGameSystem::PhysCollisionSound(
        g_pPhysicsGameSystem,
        this,
        pEvent->pObjects[index],
        pEvent->surfaceProps[index],
        *(pEvent->pObjects + 4 * v12),
        pEvent->collisionSpeed);
      PhysCollisionScreenShake(pEvent, index);
      PhysCollisionDust(pEvent, v9);
    }
  }
}


// CBaseEntity::VPhysicsFriction  (line 2214, @0x00000000021401c0, libserver.so)
// calls: CPhysicsGameSystem::PhysFrictionSound
void __fastcall CBaseEntity::VPhysicsFriction(
        CBaseEntity *const this,
        IPhysicsObject *pObject,
        float energy,
        CUtlStringToken surfaceProps,
        CUtlStringToken surfacePropsHit)
{
  CPhysicsGameSystem::PhysFrictionSound(g_pPhysicsGameSystem, this, pObject, energy, surfaceProps, surfacePropsHit);
}


// CBaseEntity::UpdatePhysicsShadowToCurrentPosition  (line 2221, @0x0000000002140b30, libserver.so)
// calls: CBaseEntity::VPhysicsGetObject, CBaseEntity::GetAbsAngles, CBaseEntity::GetAbsOrigin
void __fastcall CBaseEntity::UpdatePhysicsShadowToCurrentPosition(CBaseEntity *const this, float a2, float deltaTime)
{
  IPhysicsObject *Object; // rax
  IPhysicsObject *v5; // r12
  void (__fastcall *v6)(IPhysicsObject *, const Vector *, const QAngle *, _QWORD, float); // r14
  const QAngle *AbsAngles; // r13
  const Vector *AbsOrigin; // rax

  if ( this->m_MoveType.m_Value != MoveType_t::MOVETYPE_VPHYSICS )
  {
    Object = CBaseEntity::VPhysicsGetObject(this);
    v5 = Object;
    if ( Object != 0 )
    {
      v6 = *(*Object + 1840LL);
      AbsAngles = CBaseEntity::GetAbsAngles(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      v6(v5, AbsOrigin, AbsAngles, 0, a2);
    }
  }
}


// CBaseEntity::DrawVCollide  (line 2235, @0x0000000002177ca0, libserver.so)  // inlines: CSmartPtr, DebugMeshParams_t, DebugSceneObjectParams_t, EnableRendering, FromUntypedHandleUnchecked, InitUntypedUnchecked, IsSolid, MirrorFlags, Release<CPhysAggregateData>, Reset, ResourceHandleToData<InfoForResourceTypeCModel>, SetRenderingEnabled, VertexColor_t, matrix3x4a_t, memcpy, operator CWeakHandle<InfoForResourceTypeIMaterial2>, operator int, operator=, ~CSmartPtr, ~DebugMeshParams_t, ~DebugSceneObjectParams_t
// calls: CBaseEntity::GetModel, CModel::HasCollision, CModel::MasterSkeleton, CModel::AcquirePhysicsRef, CPhysAggregateData::Release, CSceneAnimatableObject::Init, _Unwind_Resume
// globals: g_hShowCollisionGeometryFlatshaded, g_hShowCollisionGeometryMatWireframe
void __fastcall CBaseEntity::DrawVCollide(CBaseEntity *const this, bool bWireframe)
{
  const CModel *v4; // r12
  CCollisionProperty *m_pCollision; // r14
  const CModelSkeleton *v6; // r15
  HMaterialStrong *v7; // rax
  __int64 v8; // rsi
  CSceneAnimatableObject *v9; // r13
  ISceneSystem *v10; // rdi
  ISceneSystem *v11; // rdi
  const CModelSkeleton *m_pMasterSkeleton; // rdi
  __int64 (__fastcall *v13)(ISceneSystem *, __int64, matrix3x4a_t *, int *, __int64, _QWORD); // [rsp-28h] [rbp-128h]
  int v14; // [rsp-18h] [rbp-118h] BYREF
  __int64 v15; // [rsp-8h] [rbp-108h] BYREF
  matrix3x4a_t v16; // [rsp+8h] [rbp-F8h] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  const CModelSkeleton *v18; // [rsp+78h] [rbp-88h] BYREF
  DebugSceneObjectParams_t params; // [rsp+80h] [rbp-80h]

  if ( g_pVPhysics2 != 0 )
  {
    CBaseEntity::GetModel(&v15, this);
    if ( v15 != 0 && *(v15 + 24) > 0 )
    {
      v4 = *v15;
      if ( *v15 != 0 && CModel::HasCollision(*v15) )
      {
        m_pCollision = this->m_pCollision;
        if ( m_pCollision != 0
          && ((*((*(m_pCollision->_vptr_ICollideable + 13))(this->m_pCollision) + 31) & 1) != 0
           || (*((*(m_pCollision->_vptr_ICollideable + 13))(m_pCollision) + 31) & 2) != 0)
          && m_pCollision->m_nSolidType.m_Value != SolidType_t::SOLID_NONE )
        {
          v17 = -64;
          params.m_pMasterSkeleton = 0;
          *&params.m_nConstraintAlpha = -1;
          v18 = 0;
          params.m_nSelectedPart = -4144960;
          params.m_pCollisionMesh.m_pObj = -3212836864LL;
          LOWORD(params.m_nSelectedConstraint) = -128;
          params.m_flConstraintScale = NAN;
          *&params.m_vColorCollision.color = 4294967232LL;
          params.m_vecSortDir.y = 0.0;
          params.m_pSortPose = 0;
          v18 = CModel::MasterSkeleton(v4);
          (*(*g_pDebugOverlay + 80LL))(&v14);
          LOBYTE(params.m_nSelectedConstraint) = 0;
          params.m_vColorSelectedCollision.color |= 1u;
          HIDWORD(params.m_pCollisionMesh.m_pObj) = -1;
          params.m_flConstraintScale = NAN;
          params.m_nSelectedPart = v14;
          CModel::AcquirePhysicsRef(v4);
          v6 = *&v16.m_flMatVal[0][0];
          if ( params.m_pMasterSkeleton != 0 )
            CPhysAggregateData::Release(params.m_pMasterSkeleton);
          params.m_pMasterSkeleton = v6;
          if ( (*(g_pVPhysics2->_vptr_IAppSystem + 53))(g_pVPhysics2, &v18, &v17) != 0 )
          {
            v13 = *(*g_pSceneSystem + 856LL);
            v7 = &g_hShowCollisionGeometryMatWireframe;
            if ( !bWireframe )
              v7 = &g_hShowCollisionGeometryFlatshaded;
            *&v16.m_flMatVal[0][0] = v7->m_pBinding;
            v8 = (*(*g_pDebugOverlay + 584LL))(g_pDebugOverlay);
            v9 = v13(g_pSceneSystem, v8, &v16, &v17, 0x4200000001LL, 0);
            if ( v9 != 0 )
            {
              v16 = *(*(this->m_pCollision->_vptr_ICollideable + 6))(this->m_pCollision);
              CSceneAnimatableObject::Init(v9, &v16, v4);
              v10 = g_pSceneSystem;
              v9->m_nRenderableFlags &= ~0x1000000000000000uLL;
              (*(*v10 + 1080LL))(v10, v9);
              v11 = g_pSceneSystem;
              v9->m_nRenderableFlags &= ~0x1000000000000000uLL;
              (*(*v11 + 1080LL))(v11, v9);
              (*(*g_pDebugOverlay + 552LL))(g_pDebugOverlay, v9, 0.0);
              m_pMasterSkeleton = params.m_pMasterSkeleton;
              if ( params.m_pMasterSkeleton == 0 )
                return;
              goto LABEL_16;
            }
          }
          m_pMasterSkeleton = params.m_pMasterSkeleton;
          if ( params.m_pMasterSkeleton != 0 )
LABEL_16:
            CPhysAggregateData::Release(m_pMasterSkeleton);
        }
      }
    }
  }
}


// CBaseEntity::Intersects  (line 2275, @0x0000000002159f50, libserver.so)
// calls: IsOBBIntersectingOBB
// callers: CTriggerSoundscape::PlayerUpdateThink, CChangeLevel::InTransitionVolume
bool __fastcall CBaseEntity::Intersects(CBaseEntity *const this, CBaseEntity *pOther)
{
  CCollisionProperty *m_pCollision; // rbx
  CCollisionProperty *v3; // r12
  bool result; // al
  const Vector *boxMax2; // r14
  const Vector *boxMin2; // r13
  const QAngle *v7; // r15
  const QAngle *v8; // r12
  const Vector *v9; // rax
  Vector *vecOrigin2; // [rsp+18h] [rbp-48h]
  Vector *boxMax1; // [rsp+20h] [rbp-40h]
  Vector *boxMin1; // [rsp+28h] [rbp-38h]

  m_pCollision = this->m_pCollision;
  if ( m_pCollision == 0 || pOther == 0 )
    return 0;
  v3 = pOther->m_pCollision;
  result = 0;
  if ( v3 != 0 )
  {
    boxMax2 = (*(v3->_vptr_ICollideable + 2))(pOther->m_pCollision);
    boxMin2 = (*(v3->_vptr_ICollideable + 1))(v3);
    v7 = (*(v3->_vptr_ICollideable + 5))(v3);
    vecOrigin2 = (*(v3->_vptr_ICollideable + 4))(v3);
    boxMax1 = (*(m_pCollision->_vptr_ICollideable + 2))(m_pCollision);
    boxMin1 = (*(m_pCollision->_vptr_ICollideable + 1))(m_pCollision);
    v8 = (*(m_pCollision->_vptr_ICollideable + 5))(m_pCollision);
    v9 = (*(m_pCollision->_vptr_ICollideable + 4))(m_pCollision);
    return IsOBBIntersectingOBB(v9, v8, boxMin1, boxMax1, vecOrigin2, v7, boxMin2, boxMax2, 0.0);
  }
  return result;
}


// CBaseEntity::IsPhysicallyConstrainted  (line 2293, @0x000000000215a040, libserver.so)
bool __fastcall CBaseEntity::IsPhysicallyConstrainted(CBaseEntity *const this, uint nFlags)
{
  __int64 v3; // rdi

  v3 = *((*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode) + 536);
  return v3 != 0 && (*(*v3 + 672LL))(v3, nFlags);
}


// CBaseEntity::FVisible  (line 2363, @0x00000000021463c0, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, GetBool, GetFloat, GetInt, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAligned, VectorClear, VectorCopy, VectorSubtract
// calls: CGameTrace::Init, CTraceFilterLOS::CTraceFilterLOS, CGamePhysicsQueryInterface::TraceRay, __dynamic_cast, CTraceFilterSimple::CTraceFilterSimple
// callers: CBaseEntity::FVisible, CBaseCombatCharacter::FVisible
// globals: `typeinfo for'IDrivableVehicle, `typeinfo for'CBaseEntity
bool __fastcall CBaseEntity::FVisible(
        CBaseEntity *const this,
        CBaseEntity *pEntity,
        uint64 traceMask,
        CBaseEntity **ppBlocker)
{
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm2_4
  __int64 (__fastcall ***v11)(_QWORD); // rax
  CBaseEntity *m_pEnt; // r12
  float m_fValue; // xmm2_4
  float pTraceFilter; // [rsp+10h] [rbp-1C0h]
  float v16; // [rsp+18h] [rbp-1B8h]
  double vecLookerOrigin; // [rsp+30h] [rbp-1A0h]
  double v18; // [rsp+40h] [rbp-190h]
  CTraceFilterLOS traceFilter; // [rsp+50h] [rbp-180h] BYREF
  Ray_t ray; // [rsp+A0h] [rbp-130h] BYREF
  trace_t tr; // [rsp+F0h] [rbp-E0h] BYREF

  vecLookerOrigin = (*(this->_vptr_IHandleEntity + 164))(this);
  v16 = v8;
  v18 = (*(pEntity->_vptr_IHandleEntity + 164))(pEntity);
  pTraceFilter = v9;
  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  if ( ai_LOS_mode.m_pParent->m_Value.m_nValue != 0 )
  {
    m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
    ray.m_Delta.y = *(&v18 + 1) - *(&vecLookerOrigin + 1);
    ray.m_Delta.z = pTraceFilter - v16;
    ray.m_flRadius = m_fValue;
    ray.m_Start.w = 0.0;
    memset(&ray.m_Delta.w, 0, 36);
    ray.m_Delta.x = *&v18 - *&vecLookerOrigin;
    ray.m_IsRay = 1;
    *&ray.m_Start.x = vecLookerOrigin;
    ray.m_Start.z = v16;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                   + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
    CTraceFilterSimple::CTraceFilterSimple(&traceFilter, this, 4, 0);
    traceFilter.m_attr.m_nInteractsWith |= traceMask;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &traceFilter, &tr);
  }
  else
  {
    if ( traceMask == 16449 )
      traceMask = 540737;
    if ( (*(this->_vptr_IHandleEntity + 140))(this) != 0 )
      traceMask &= ~0x40uLL;
    CTraceFilterLOS::CTraceFilterLOS(&traceFilter, this, 4, pEntity);
    v10 = phys_traceline_radius.m_pParent->m_Value.m_fValue;
    ray.m_Delta.y = *(&v18 + 1) - *(&vecLookerOrigin + 1);
    ray.m_flRadius = v10;
    ray.m_Delta.z = pTraceFilter - v16;
    ray.m_Start.w = 0.0;
    memset(&ray.m_Delta.w, 0, 36);
    ray.m_Delta.x = *&v18 - *&vecLookerOrigin;
    ray.m_IsRay = 1;
    *&ray.m_Start.x = vecLookerOrigin;
    ray.m_Start.z = v16;
    traceFilter.m_attr.m_nInteractsWith |= traceMask;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                   + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &traceFilter, &tr);
  }
  if ( tr.fraction == 1.0 && !tr.startsolid )
    return 1;
  if ( pEntity == tr.m_pEnt )
    return 1;
  if ( (*(pEntity->_vptr_IHandleEntity + 140))(pEntity, COERCE_DOUBLE(1065353216)) != 0 )
  {
    m_pEnt = tr.m_pEnt;
    if ( m_pEnt == (*(pEntity->_vptr_IHandleEntity + 349))(pEntity) )
      return 1;
  }
  if ( tr.m_pEnt != 0 )
  {
    v11 = __dynamic_cast(tr.m_pEnt, &`typeinfo for'CBaseEntity, &`typeinfo for'IDrivableVehicle, -2);
    if ( v11 != 0 && pEntity == (**v11)(v11) )
      return 1;
  }
  if ( ppBlocker != 0 )
    *ppBlocker = tr.m_pEnt;
  return 0;
}


// CBaseEntity::FVisible  (line 2363, @0x0000000002146870, libserver.so)
// calls: CBaseEntity::FVisible
bool __fastcall CBaseEntity::FVisible(
        CBaseEntity *const this,
        CBaseEntity *pEntity,
        uint64 traceMask,
        CBaseEntity **ppBlocker)
{
  return (pEntity->m_fFlags.m_Value & 0x8000) == 0 && CBaseEntity::FVisible(this, pEntity, traceMask, ppBlocker);
}


// CBaseEntity::FVisible  (line 2438, @0x0000000002145360, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, GetBool, GetFloat, GetInt, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAligned, VectorClear, VectorCopy, VectorSubtract
// calls: CGameTrace::Init, CTraceFilterLOS::CTraceFilterLOS, CGamePhysicsQueryInterface::TraceRay, CTraceFilterSimple::CTraceFilterSimple
// callers: CBaseCombatCharacter::FVisible
bool __fastcall CBaseEntity::FVisible(
        CBaseEntity *const this,
        const Vector *const vecTarget,
        uint64 traceMask,
        CBaseEntity **ppBlocker)
{
  double v8; // xmm0_8
  float v9; // xmm1_4
  char v10; // al
  uint64 v11; // rdx
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm2_4
  float z; // xmm3_4
  float m_fValue; // xmm2_4
  float x; // xmm2_4
  float v19; // [rsp+Ch] [rbp-1A4h]
  float v20; // [rsp+10h] [rbp-1A0h]
  float v21; // [rsp+14h] [rbp-19Ch]
  CTraceFilterLOS traceFilter; // [rsp+30h] [rbp-180h] BYREF
  Ray_t ray; // [rsp+80h] [rbp-130h] BYREF
  trace_t tr; // [rsp+D0h] [rbp-E0h] BYREF

  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  v8 = (*(this->_vptr_IHandleEntity + 164))(this);
  if ( ai_LOS_mode.m_pParent->m_Value.m_nValue != 0 )
  {
    z = vecTarget->z;
    m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
    ray.m_Delta.y = vecTarget->y - *(&v8 + 1);
    ray.m_Delta.z = z - v9;
    ray.m_flRadius = m_fValue;
    x = vecTarget->x;
    ray.m_Start.w = 0.0;
    memset(&ray.m_Delta.w, 0, 36);
    ray.m_Delta.x = x - *&v8;
    ray.m_IsRay = 1;
    *&ray.m_Start.x = v8;
    ray.m_Start.z = v9;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                   + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
    CTraceFilterSimple::CTraceFilterSimple(&traceFilter, this, 4, 0);
    traceFilter.m_attr.m_nInteractsWith |= traceMask;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &traceFilter, &tr);
  }
  else
  {
    if ( traceMask == 16449 )
      traceMask = 540737;
    v19 = v9;
    v20 = *(&v8 + 1);
    v21 = *&v8;
    v10 = (*(this->_vptr_IHandleEntity + 140))(this);
    v11 = traceMask;
    if ( v10 != 0 )
    {
      LOBYTE(v11) = traceMask & 0x3F;
      traceMask = v11;
    }
    CTraceFilterLOS::CTraceFilterLOS(&traceFilter, this, 4, 0);
    v12 = vecTarget->z;
    v13 = phys_traceline_radius.m_pParent->m_Value.m_fValue;
    ray.m_Delta.y = vecTarget->y - v20;
    ray.m_flRadius = v13;
    v14 = vecTarget->x;
    ray.m_Delta.z = v12 - v19;
    ray.m_Start.w = 0.0;
    memset(&ray.m_Delta.w, 0, 36);
    ray.m_Delta.x = v14 - v21;
    ray.m_IsRay = 1;
    ray.m_Start.x = v21;
    ray.m_Start.y = v20;
    ray.m_Start.z = v19;
    traceFilter.m_attr.m_nInteractsWith |= traceMask;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                   + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &traceFilter, &tr);
  }
  if ( tr.fraction == 1.0 )
    return 1;
  if ( ppBlocker != 0 )
    *ppBlocker = tr.m_pEnt;
  return 0;
}


// CC_AI_LOS_Debug  (line 2493, @0x00000000021432a0, libserver.so)  // inlines: FirstEnt, GetInt, IsSolid
// calls: CBaseEntity::ClearDebugBits, CGameEntitySystem::NextEnt, CBaseEntity::SetDebugBits
void __fastcall CC_AI_LOS_Debug(IConVar *var, const char *pOldString, double a3, float flOldValue)
{
  CBaseEntity *v4; // rsi
  int m_nValue; // r12d
  CBaseEntity *Ent; // rax
  CBaseEntity *v7; // rbx
  CCollisionProperty *m_pCollision; // r13

  v4 = 0;
  m_nValue = ai_debug_los.m_pParent->m_Value.m_nValue;
  while ( 1 )
  {
    Ent = CGameEntitySystem::NextEnt(g_pGameEntitySystem, v4);
    v7 = Ent;
    if ( Ent == 0 )
      break;
    if ( m_nValue == 1 )
    {
      m_pCollision = Ent->m_pCollision;
      if ( m_pCollision == 0
        || (*((*(m_pCollision->_vptr_ICollideable + 13))(m_pCollision) + 31) & 1) == 0
        && (*((*(m_pCollision->_vptr_ICollideable + 13))(m_pCollision) + 31) & 2) == 0
        || m_pCollision->m_nSolidType.m_Value == SolidType_t::SOLID_NONE )
      {
LABEL_3:
        CBaseEntity::ClearDebugBits(v7, 0x80u);
        goto LABEL_4;
      }
    }
    else if ( m_nValue != 2 )
    {
      goto LABEL_3;
    }
    CBaseEntity::SetDebugBits(v7, 0x80u);
LABEL_4:
    v4 = v7;
  }
}


// CBaseEntity::GetAutoAimRadius  (line 2515, @0x000000000213d750, libserver.so)
float __fastcall CBaseEntity::GetAutoAimRadius(CBaseEntity *const this)
{
  int v1; // eax
  float result; // xmm0_4

  v1 = (*(g_pGameRules->_vptr_CGameRules + 71))(g_pGameRules);
  result = 24.0;
  if ( v1 == 2 )
    return 48.0;
  return result;
}


// CBaseEntity::PassesDamageFilter  (line 2532, @0x0000000002144c30, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator bool
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CBaseEntity::PassesDamageFilter(CBaseEntity *const this, const CTakeDamageInfo *const info)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx

  m_Index = this->m_hDamageFilter.m_Index;
  return m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hDamageFilter.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hDamageFilter.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || (*(v4->m_pInstance->_vptr_IHandleEntity + 88))(v4->m_pInstance, info);
}


// CBaseEntity::OnSetDormant  (line 2543, @0x000000000215ab10, libserver.so)
// calls: CEntityInstance::OnSetDormant, CBaseEntity::ThinkSet, CCollisionProperty::DisableTouchEvents, CCollisionProperty::DisableTraceAndQueries, CBaseEntity::SetMoveType, CBaseEntity::AddEffects, CBaseEntity::SetNextThink
// callers: CBaseAnimating::OnSetDormant
void __fastcall CBaseEntity::OnSetDormant(
        CBaseEntity *const this,
        EntityDormancyType_t nPrevDormancyType,
        EntityDormancyType_t nDormancyType)
{
  CCollisionProperty *m_pCollision; // rdi
  double v6; // xmm1_8

  CEntityInstance::OnSetDormant(this, nPrevDormancyType, nDormancyType);
  if ( nDormancyType != EntityDormancyType_t::ENTITY_NOT_DORMANT )
  {
    CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
    m_pCollision = this->m_pCollision;
    if ( m_pCollision != 0 )
    {
      (*(m_pCollision->_vptr_ICollideable + 18))(m_pCollision);
      CCollisionProperty::DisableTouchEvents(this->m_pCollision);
      CCollisionProperty::DisableTraceAndQueries(this->m_pCollision);
    }
    CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
    CBaseEntity::AddEffects(this, 32);
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v6, 0);
  }
}


// CBaseEntity::RebaseTimeEntriesForStasis  (line 2572, @0x000000000215a090, libserver.so)  // inlines: curtime
// calls: CBaseEntity::RebaseThinkTicks
// callers: CBaseEntity::SetStasis
void __fastcall CBaseEntity::RebaseTimeEntriesForStasis(CBaseEntity *const this, bool bEnteringStasis)
{
  __int64 v2; // rax
  float v3; // xmm2_4
  CBaseEntity *v4; // rcx
  __int64 v5; // r13
  _BOOL4 v6; // r8d
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // r14
  int *v10; // rdx
  int v11; // eax
  _DWORD *v12; // r12
  float *v13; // rax
  float v14; // xmm0_4
  float v15; // xmm1_4
  CGlobalVars *v16; // r15
  FnGlobalVarsWarningFunc v17; // rdx
  float v18; // xmm0_4
  CGlobalVars *v19; // r15
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v22; // r15
  FnGlobalVarsWarningFunc v23; // r9
  CGlobalVars *v24; // rdi
  float v25; // xmm0_4
  int v26; // edi
  int v27; // esi
  int v28; // eax
  float v29; // [rsp+8h] [rbp-48h]
  float v30; // [rsp+8h] [rbp-48h]
  float v31; // [rsp+8h] [rbp-48h]
  _BOOL4 v32; // [rsp+Ch] [rbp-44h]
  _BOOL4 v33; // [rsp+Ch] [rbp-44h]
  _BOOL4 v34; // [rsp+Ch] [rbp-44h]
  _BOOL4 v35; // [rsp+10h] [rbp-40h]
  CBaseEntity *v36; // [rsp+10h] [rbp-40h]
  CBaseEntity *v37; // [rsp+10h] [rbp-40h]
  CBaseEntity *v38; // [rsp+10h] [rbp-40h]
  float nTicka; // [rsp+18h] [rbp-38h]
  float nTickb; // [rsp+18h] [rbp-38h]
  int nTickc; // [rsp+18h] [rbp-38h]

  v35 = bEnteringStasis;
  CBaseEntity::RebaseThinkTicks(this, bEnteringStasis);
  v2 = (*(this->_vptr_IHandleEntity + 34))(this);
  v3 = 0.0;
  v4 = this;
  v5 = v2;
  v6 = v35;
  if ( v2 != 0 )
  {
    while ( 1 )
    {
      v7 = *(v5 + 8);
      if ( v7 > 0 )
        break;
LABEL_18:
      v5 = *(v5 + 24);
      if ( v5 == 0 )
        return;
    }
    v8 = 0;
    v9 = 104 * ((v7 - 1) + 1LL);
    while ( 1 )
    {
      v12 = (*v5 + v8);
      if ( *v12 != 15 )
        break;
      v13 = (v4 + v12[4]);
      v14 = *v13;
      if ( v6 )
      {
        if ( v3 < v14 )
        {
          v19 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v30 = v3;
                v33 = v6;
                v37 = v4;
                nTickb = *v13;
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                v4 = v37;
                v6 = v33;
                v3 = v30;
                v14 = nTickb;
                v13 = (v37 + v12[4]);
              }
            }
            m_flCurrentTime = v19->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = v3;
          }
          v18 = v14 - m_flCurrentTime;
          goto LABEL_17;
        }
LABEL_7:
        v8 += 104;
        if ( v8 == v9 )
          goto LABEL_18;
      }
      else
      {
        v15 = 0.0;
        v16 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            v17 = gpGlobals->m_pfnWarningFunc;
            if ( v17 != 0 )
            {
              v29 = v3;
              v32 = v6;
              v36 = v4;
              nTicka = *v13;
              (v17)(1, v14, 0.0);
              v4 = v36;
              v6 = v32;
              v3 = v29;
              v14 = nTicka;
              v13 = (v36 + v12[4]);
            }
          }
          v15 = v16->m_flCurrentTime;
        }
        v18 = v14 + v15;
LABEL_17:
        v8 += 104;
        *v13 = v18;
        if ( v8 == v9 )
          goto LABEL_18;
      }
    }
    if ( *v12 == 16 )
    {
      v10 = (v4 + v12[4]);
      v11 = *v10;
      if ( *v10 != -1 || !v6 )
      {
        v22 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( gpGlobals->m_bEnableAssertions || gpGlobals->m_bInSimulation || (v23 = gpGlobals->m_pfnWarningFunc) == 0 )
          {
            v24 = gpGlobals;
          }
          else
          {
            v31 = v3;
            v34 = v6;
            v38 = v4;
            nTickc = *v10;
            v23(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
            v4 = v38;
            v6 = v34;
            v24 = gpGlobals;
            v11 = nTickc;
            v3 = v31;
            v10 = (v38 + v12[4]);
          }
          v25 = v22->m_flCurrentTime;
        }
        else
        {
          v24 = 0;
          v25 = 0.0;
        }
        v26 = ((v25 / v24->interval_per_tick) + 0.5);
        v27 = v11 - v26;
        v28 = v26 + v11;
        if ( !v6 )
          v27 = v28;
        *v10 = v27;
      }
    }
    goto LABEL_7;
  }
}


// CBaseEntity::EnterStasis  (line 2642, @0x000000000215abb0, libserver.so)  // inlines: AddEFlags
// calls: CBaseEntity::SetMoveType, CBaseEntity::VPhysicsGetObject, CBaseEntity::AddEffects, CBaseEntity::SetNextThink
// callers: CBaseEntity::SetStasis
void __fastcall CBaseEntity::EnterStasis(CBaseEntity *const this)
{
  MoveType_t m_Value; // al
  CCollisionProperty *m_pCollision; // rdi
  IPhysicsObject *Object; // rax
  double v5; // xmm1_8

  if ( (this->m_pEntity->m_flags & 0x20) == 0 )
  {
    m_Value = this->m_MoveType.m_Value;
    this->m_iEFlags |= 0x400000u;
    this->m_PreStasisMoveType = m_Value;
    m_pCollision = this->m_pCollision;
    if ( m_pCollision != 0 )
      (*(m_pCollision->_vptr_ICollideable + 16))(m_pCollision);
    CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
    Object = CBaseEntity::VPhysicsGetObject(this);
    if ( Object != 0 )
      (*(*Object + 848LL))(Object, 0);
    CBaseEntity::AddEffects(this, 32);
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v5, 0);
  }
}


// CBaseEntity::LeaveStasis  (line 2689, @0x000000000215ac40, libserver.so)  // inlines: DispatchUpdateTransmitState, MarkPVSInformationDirty, RemoveEffects
// calls: CBaseEntity::CheckHasThinkFunction, CBaseEntity::SetMoveType, CBaseEntity::DispatchUpdateTransmitState, CBaseEntity::VPhysicsGetObject
// callers: CBaseEntity::SetStasis
void __fastcall CBaseEntity::LeaveStasis(CBaseEntity *const this)
{
  CCollisionProperty *m_pCollision; // rdi
  IPhysicsObject *Object; // rax

  CBaseEntity::CheckHasThinkFunction(this);
  m_pCollision = this->m_pCollision;
  if ( m_pCollision != 0 )
    (*(m_pCollision->_vptr_ICollideable + 15))(m_pCollision);
  CBaseEntity::SetMoveType(this, this->m_PreStasisMoveType, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & 0xFFFFFFDF);
  this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  if ( this->m_pEntity != 0 )
    CBaseEntity::DispatchUpdateTransmitState(this);
  Object = CBaseEntity::VPhysicsGetObject(this);
  if ( Object != 0 )
    (*(*Object + 1592LL))(Object);
}


// CBaseEntity::SetStasis  (line 2710, @0x000000000215acd0, libserver.so)  // inlines: AddFlags, RemoveFlags
// calls: CBaseEntity::RebaseTimeEntriesForStasis, CBaseEntity::LeaveStasis, CBaseEntity::EnterStasis
void __fastcall CBaseEntity::SetStasis(CBaseEntity *const this, bool bStasis)
{
  CBaseEntity::RebaseTimeEntriesForStasis(this, bStasis);
  if ( bStasis )
  {
    CBaseEntity::EnterStasis(this);
    this->m_pEntity->m_flags |= 0x20u;
  }
  else
  {
    CBaseEntity::LeaveStasis(this);
    this->m_pEntity->m_flags &= ~0x20u;
  }
}


// CBaseEntity::IsInWorld  (line 2729, @0x000000000215d5f0, libserver.so)  // inlines: GetAbsVelocity
// calls: CBaseEntity::GetAbsOrigin, CBaseEntity::CalcAbsoluteVelocity
// callers: CGib::WaitTillLand, CPhysicsProp::VPhysicsUpdate
bool __fastcall CBaseEntity::IsInWorld(const CBaseEntity *const this)
{
  if ( CBaseEntity::GetAbsOrigin(this)->x >= 16384.0
    || CBaseEntity::GetAbsOrigin(this)->y >= 16384.0
    || CBaseEntity::GetAbsOrigin(this)->z >= 16384.0
    || CBaseEntity::GetAbsOrigin(this)->x <= -16384.0
    || CBaseEntity::GetAbsOrigin(this)->y <= -16384.0
    || CBaseEntity::GetAbsOrigin(this)->z <= -16384.0 )
  {
    return 0;
  }
  if ( (this->m_iEFlags & 0x1000) != 0 )
    CBaseEntity::CalcAbsoluteVelocity(this);
  if ( this->m_vecAbsVelocity.m_Value.x >= 2000.0 )
    return 0;
  if ( (this->m_iEFlags & 0x1000) != 0 )
    CBaseEntity::CalcAbsoluteVelocity(this);
  if ( this->m_vecAbsVelocity.m_Value.y >= 2000.0 )
    return 0;
  if ( (this->m_iEFlags & 0x1000) != 0 )
    CBaseEntity::CalcAbsoluteVelocity(this);
  if ( this->m_vecAbsVelocity.m_Value.z >= 2000.0 )
    return 0;
  if ( (this->m_iEFlags & 0x1000) != 0 )
    CBaseEntity::CalcAbsoluteVelocity(this);
  if ( this->m_vecAbsVelocity.m_Value.x <= -2000.0 )
    return 0;
  if ( (this->m_iEFlags & 0x1000) != 0 )
    CBaseEntity::CalcAbsoluteVelocity(this);
  if ( this->m_vecAbsVelocity.m_Value.y <= -2000.0 )
    return 0;
  if ( (this->m_iEFlags & 0x1000) != 0 )
    CBaseEntity::CalcAbsoluteVelocity(this);
  return this->m_vecAbsVelocity.m_Value.z > -2000.0;
}


// CBaseEntity::IsViewable  (line 2751, @0x0000000002141360, libserver.so)
// calls: CBaseEntity::GetModel
bool __fastcall CBaseEntity::IsViewable(CBaseEntity *const this)
{
  __int64 v1; // rbp
  bool result; // al
  _QWORD v3[3]; // [rsp-18h] [rbp-18h] BYREF

  result = 0;
  if ( (this->m_fEffects.m_Value & 0x20) == 0 )
  {
    v3[2] = v1;
    CBaseEntity::GetModel(v3, this);
    return v3[0] != 0;
  }
  return result;
}


// CBaseEntity::ShouldToggle  (line 2767, @0x000000000215a330, libserver.so)
// callers: CFuncWall::Use, CFuncWallToggle::InputToggle, CFuncWallToggle::Use, CLight::Use, CFuncPlat::PlatUse, CSprite::Use, CFuncTrackAuto::TriggerTrackChange, CFuncTrackAuto::Use, CTriggerCamera::Use
int __fastcall CBaseEntity::ShouldToggle(CBaseEntity *const this, USE_TYPE useType, int currentState)
{
  int result; // eax

  result = 1;
  if ( (useType - 2) > 1 )
    return (useType != USE_ON || currentState == 0) && (useType != USE_OFF || currentState != 0);
  return result;
}


// CBaseEntity::Create  (line 2779, @0x000000000216f230, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, Add, AddKeyValue<CEntityHandle>, AddKeyValue<QAngle>, AddKeyValue<Vector>, AddKeyValue<char const*>, AddToTail, Allocate, Allocate<QAngle>, Allocate<Vector>, Base, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CMicroProfilerGuard, CMicroProfilerSample, CUtlString, CVProfScope, CopyData, CopyData<QAngle>, CopyData<Vector>, Element, EnterScope, ExitScope, FindKeyHash, Free, Get, GetClassInfo, GetEHandle, GetElapsed, GetEntityClass, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTimebaseRegister, InTargetThread, IndexToIdentity, Init, InvokeCallbacks, IsEmpty, IsEnabled, LookupEntity, OverrideAllocator, PLAT_CPU_TIME, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, SetClassName, SetValue, SetValue<CEntityHandle>, SetValue<QAngle>, SetValue<Vector>, SetValues, SetWorldTransform, Spawn, V_strlen, memcpy, operator CBaseEntity*, operator CEntityInstance*, operator!, operator(), operator=, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CMicroProfilerGuard, ~CUtlString, ~CVProfScope
// calls: CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntitySystem::FindClassByDesignName, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get, CEntitySystem::CreateEntity, CEntitySystem::QueueSpawnEntity, CUtlString::FreeMemoryBlock, CEntityKeyValues::SetValue, CEntityKeyValues::~CEntityKeyValues (29 total)
// callers: CBaseCombatCharacter::Weapon_Create, CBaseCombatWeapon::Respawn, CEnvBeverage::Use, CEntityBlocker::Create, CEnvExplosion::InputExplode, CFishPool::Spawn, CBreakable::Die, CWorldItem::Spawn, CBasePlayer::CheatImpulseCommands, CSoundEnt::InitSoundEnt, CreateVGuiScreen, CDOTAGamerules::CreateStandardEntities (18 total)
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n", "Spawn", "Server Simulation"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride, CEntityHandle::gm_pEntityList
CBaseEntity *__fastcall CBaseEntity::Create(
        const char *szName,
        const Vector *const vecOrigin,
        const QAngle *const vecAngles,
        CBaseEntity *pOwner)
{
  CEntitySystem *v6; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v8; // rdx
  char v9; // al
  CEntityKeyValues *m_pEntityKeyValues; // rbx
  CEntityClass *ClassByDesignName; // rax
  CEntityKeyValues *v12; // rbx
  CEntityIdentity *m_pEntity; // rax
  __int16 v14; // cx
  CEntityKeyValues *v15; // rdi
  int m_enabled; // eax
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v18; // rax
  CEntityInstance *Entity; // rax
  __int64 v20; // rdi
  CEntityInstance *v21; // r15
  CEntityIdentity *v22; // rax
  __int16 v23; // si
  CEntitySpawnerContext<CBaseEntity> *m_pContext; // rbx
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v27; // rdi
  CEntityIdentity *v28; // rax
  CBaseEntity *m_pInstance; // rbx
  CEntityIdentity *v30; // rax
  CUtlScratchMemoryPool *v31; // rdi
  CEntityKeyValues *v32; // r13
  const char *m_pszClassname; // rdx
  unsigned __int64 v36; // rbx
  ThreadId_t v37; // r15
  uint64 v38; // rcx
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v40; // rbx
  uint64 m_numTimeBaseTicks; // rcx
  int v42; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v43; // cx
  __int64 v44; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v45; // rdx
  CVProfNode *m_pParent; // rax
  int v47; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v48; // cx
  __int64 v49; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v50; // rdx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v52; // cx
  __int64 v53; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v54; // rdx
  int m_nEntitySpawnerDataUseCount; // esi
  __int16 v56; // r14
  unsigned __int64 v57; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v58; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v59; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v60; // rax
  uint16 v61; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v62; // rax
  __int16 v63; // r15
  unsigned __int64 v64; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v65; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v66; // rax
  __int64 v67; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v68; // r15
  uint16 v69; // ax
  vec_t *v70; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v71; // rax
  __int16 v72; // dx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v75; // rax
  uint16 m_flags; // ax
  void *v77; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v78; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v79; // rdx
  __int64 v80; // rax
  const char *m_pAttributeName; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v82; // rdx
  __int64 v83; // rax
  __int64 v84; // rbx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v85; // rdx
  __int64 v86; // rax
  __int64 v87; // rbx
  int v88; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v89; // cx
  __int64 v90; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v91; // rdx
  __int16 v92; // r15
  unsigned __int64 v93; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v94; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v95; // rax
  __int64 v96; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v97; // r15
  uint16 v98; // ax
  vec_t *v99; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v100; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v101; // rdx
  __int64 v102; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v104; // rax
  __int16 v105; // ax
  vec_t *v106; // rax
  __int16 v107; // ax
  void *v108; // rax
  int v109; // ecx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v110; // rax
  uint16 v111; // dx
  __int64 v112; // rbx
  __int16 v113; // ax
  vec_t *v114; // rax
  signed int v115; // [rsp+1Ch] [rbp-124h]
  __int64 v116; // [rsp+20h] [rbp-120h]
  __int64 v117; // [rsp+28h] [rbp-118h]
  __int64 v118; // [rsp+28h] [rbp-118h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v119; // [rsp+28h] [rbp-118h]
  signed int v120; // [rsp+28h] [rbp-118h]
  bool vecAnglesb; // [rsp+30h] [rbp-110h]
  CEntityKeyValues *vecOriginb; // [rsp+38h] [rbp-108h]
  const Vector *vecOriginc; // [rsp+38h] [rbp-108h]
  int v126; // [rsp+40h] [rbp-100h]
  int v127; // [rsp+50h] [rbp-F0h]
  _QWORD v128[2]; // [rsp+60h] [rbp-E0h] BYREF
  CEntitySpawner<CBaseEntity> spawner; // [rsp+70h] [rbp-D0h] BYREF

  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner._vptr_CEntitySpawnerBase = off_3FCEBD0;
  spawner.m_scriptClassName.m_pString = 0;
  spawner.m_pContext = 0;
  v6 = g_pEntitySystem;
  spawner.m_pSpawnBatch = 0;
  spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v6->m_entitySpawnerData;
  spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v6);
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  v8 = *&SpawnOriginOffset->m_flMatVal[0][2];
  spawner.m_pEntityKeyValues = 0;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v8;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
  spawner.m_pEntityClass = g_pEntityCBaseEntityClass;
  if ( g_pApplication != 0 )
    v9 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v9 = 0;
  spawner.m_bValidateKeys = v9;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_4;
  m_nCount = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_104:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
    v72 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
    m_nAllocated = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    if ( m_nAllocated != 0 )
    {
      if ( m_nAllocated <= 9 )
        m_pElements = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
      else
        m_pElements = m_pEntityKeyValues->m_keyHashes.m_pElements;
    }
    else
    {
      m_pElements = 0;
    }
    m_pElements[(m_pEntityKeyValues->m_keyHashes.m_nCount - 1)] = -971301790;
    v118 = v72;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v75 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v75 = 0;
    v116 = v118;
    v119 = &v75[v118];
    m_flags = v119->m_value.m_flags;
    if ( (m_flags & 1) != 0 )
      v119->m_value.m_flags = m_flags & 0xFFFE;
    v119->m_value.m_uint64 = 0;
    v119->m_value.m_type = 30;
    if ( szName != 0 )
    {
      v115 = strlen(szName) + 1;
      v77 = CEntityVariantAllocator::Allocate(v115);
      v119->m_value.m_uint64 = v77;
      memcpy(v77, szName, v115);
      v119->m_value.m_flags |= 1u;
    }
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v78 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v78 = 0;
    v78[v116].m_pAttributeName = 0;
  }
  else
  {
    v52 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v53 = 0;
    while ( 1 )
    {
      if ( v52 != 0 )
      {
        v54 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v52 > 9 )
          v54 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v54 = 0;
      }
      if ( v54[v53] == -971301790 )
        break;
      if ( m_nCount <= ++v53 )
        goto LABEL_104;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v82 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v83 = v53;
      v84 = &v82[v83];
      if ( v82[v83].m_pAttributeName != 0 )
      {
LABEL_124:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v82[v83].m_pAttributeName);
        goto LABEL_4;
      }
    }
    else
    {
      v83 = v53;
      v82 = 0;
      v84 = v83 * 24;
      if ( *(v83 * 24 + 16) != 0 )
        goto LABEL_124;
    }
    v107 = *(v84 + 10);
    if ( (v107 & 1) != 0 )
      *(v84 + 10) = v107 & 0xFFFE;
    *v84 = 0;
    *(v84 + 8) = 30;
    if ( szName != 0 )
    {
      v120 = strlen(szName) + 1;
      v108 = CEntityVariantAllocator::Allocate(v120);
      *v84 = v108;
      memcpy(v108, szName, v120);
      *(v84 + 10) |= 1u;
    }
  }
LABEL_4:
  ClassByDesignName = CEntitySystem::FindClassByDesignName(g_pEntitySystem, szName, &spawner.m_scriptClassName);
  v12 = spawner.m_pEntityKeyValues;
  spawner.m_pEntityClass = ClassByDesignName;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_5;
  v47 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v47 <= 0 )
  {
LABEL_94:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
    v63 = v12->m_keyHashes.m_nCount - 1;
    v64 = v12->m_keyHashes.m_nAllocated;
    if ( v64 != 0 )
    {
      if ( v64 <= 9 )
        v65 = (&v12->m_keyHashes.m_nAllocAllocated + 1);
      else
        v65 = v12->m_keyHashes.m_pElements;
    }
    else
    {
      v65 = 0;
    }
    v65[v63] = -467664362;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v12->m_keyValues);
    if ( v12->m_keyValues.m_nAllocated != 0 )
      v66 = v12->m_keyValues.m_pElements;
    else
      v66 = 0;
    v67 = v63;
    v68 = &v66[v67];
    v117 = v67 * 24;
    v69 = v66[v67].m_value.m_flags;
    if ( (v69 & 1) != 0 )
      v68->m_value.m_flags = v69 & 0xFFFE;
    v68->m_value.m_uint64 = 0;
    v68->m_value.m_type = 3;
    v70 = CEntityVariantAllocator::Allocate(0xCu);
    v68->m_value.m_uint64 = v70;
    *v70 = vecOrigin->x;
    v70[1] = vecOrigin->y;
    v70[2] = vecOrigin->z;
    v68->m_value.m_flags |= 1u;
    if ( v12->m_keyValues.m_nAllocated != 0 )
      v71 = v12->m_keyValues.m_pElements;
    else
      v71 = 0;
    *(&v71->m_pAttributeName + v117) = 0;
  }
  else
  {
    v48 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v49 = 0;
    while ( 1 )
    {
      if ( v48 != 0 )
      {
        v50 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v48 > 9 )
          v50 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v50 = 0;
      }
      if ( v50[v49] == -467664362 )
        break;
      if ( v47 <= ++v49 )
        goto LABEL_94;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v85 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v86 = v49;
      v87 = &v85[v86];
      if ( v85[v86].m_pAttributeName != 0 )
      {
LABEL_127:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v85[v86].m_pAttributeName);
        goto LABEL_128;
      }
    }
    else
    {
      v86 = v49;
      v85 = 0;
      v87 = v86 * 24;
      if ( *(v86 * 24 + 16) != 0 )
        goto LABEL_127;
    }
    v105 = *(v87 + 10);
    if ( (v105 & 1) != 0 )
      *(v87 + 10) = v105 & 0xFFFE;
    *v87 = 0;
    *(v87 + 8) = 3;
    v106 = CEntityVariantAllocator::Allocate(0xCu);
    *v87 = v106;
    *v106 = vecOrigin->x;
    v106[1] = vecOrigin->y;
    v106[2] = vecOrigin->z;
    *(v87 + 10) |= 1u;
  }
LABEL_128:
  v12 = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_5;
  v88 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v88 > 0 )
  {
    v89 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v90 = 0;
    while ( 1 )
    {
      if ( v89 != 0 )
      {
        v91 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v89 > 9 )
          v91 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v91 = 0;
      }
      if ( v91[v90] == -1164387633 )
        break;
      if ( v88 <= ++v90 )
        goto LABEL_137;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v101 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v102 = v90;
      if ( v101[v102].m_pAttributeName != 0 )
      {
LABEL_149:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v101[v102].m_pAttributeName);
LABEL_150:
        v12 = spawner.m_pEntityKeyValues;
        goto LABEL_5;
      }
      v112 = &v101[v102];
    }
    else
    {
      v102 = v90;
      v101 = 0;
      v112 = v102 * 24;
      if ( *(v102 * 24 + 16) != 0 )
        goto LABEL_149;
    }
    v113 = *(v112 + 10);
    if ( (v113 & 1) != 0 )
      *(v112 + 10) = v113 & 0xFFFE;
    *v112 = 0;
    *(v112 + 8) = 39;
    v114 = CEntityVariantAllocator::Allocate(0xCu);
    *v112 = v114;
    *v114 = vecAngles->x;
    v114[1] = vecAngles->y;
    v114[2] = vecAngles->z;
    *(v112 + 10) |= 1u;
    goto LABEL_150;
  }
LABEL_137:
  CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
  v92 = v12->m_keyHashes.m_nCount - 1;
  v93 = v12->m_keyHashes.m_nAllocated;
  if ( v93 != 0 )
  {
    if ( v93 <= 9 )
      v94 = (&v12->m_keyHashes.m_nAllocAllocated + 1);
    else
      v94 = v12->m_keyHashes.m_pElements;
  }
  else
  {
    v94 = 0;
  }
  v94[v92] = -1164387633;
  CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v12->m_keyValues);
  if ( v12->m_keyValues.m_nAllocated != 0 )
    v95 = v12->m_keyValues.m_pElements;
  else
    v95 = 0;
  v96 = v92;
  v97 = &v95[v96];
  vecOriginc = (v96 * 24);
  v98 = v95[v96].m_value.m_flags;
  if ( (v98 & 1) != 0 )
    v97->m_value.m_flags = v98 & 0xFFFE;
  v97->m_value.m_uint64 = 0;
  v97->m_value.m_type = 39;
  v99 = CEntityVariantAllocator::Allocate(0xCu);
  v97->m_value.m_uint64 = v99;
  *v99 = vecAngles->x;
  v99[1] = vecAngles->y;
  v99[2] = vecAngles->z;
  v97->m_value.m_flags |= 1u;
  if ( v12->m_keyValues.m_nAllocated != 0 )
    v100 = v12->m_keyValues.m_pElements;
  else
    v100 = 0;
  v12 = spawner.m_pEntityKeyValues;
  *(&vecOriginc[1].y + v100) = 0;
LABEL_5:
  if ( pOwner != 0 )
  {
    m_pEntity = pOwner->m_pEntity;
    if ( m_pEntity != 0 )
    {
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v14 = 0x7FFF;
      else
        v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v15 = v12;
      v127 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v14 & 0x7FFF;
      if ( v12->m_nQueuedForSpawnCount > 0 )
        goto LABEL_10;
LABEL_51:
      v42 = v12->m_keyHashes.m_nCount;
      if ( v42 <= 0 )
      {
LABEL_84:
        CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&v12->m_keyHashes);
        v56 = v12->m_keyHashes.m_nCount - 1;
        v57 = v12->m_keyHashes.m_nAllocated;
        if ( v57 != 0 )
        {
          if ( v57 <= 9 )
            v58 = (&v12->m_keyHashes.m_nAllocAllocated + 1);
          else
            v58 = v12->m_keyHashes.m_pElements;
        }
        else
        {
          v58 = 0;
        }
        v58[v56] = -1104771937;
        CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v12->m_keyValues);
        if ( v12->m_keyValues.m_nAllocated != 0 )
          v59 = v12->m_keyValues.m_pElements;
        else
          v59 = 0;
        v60 = &v59[v56];
        v61 = v60->m_value.m_flags;
        if ( (v61 & 1) != 0 )
          v60->m_value.m_flags = v61 & 0xFFFE;
        v60->m_value.m_uint64 = 0;
        v60->m_value.m_type = 13;
        v60->m_value.m_int = v127;
        if ( v12->m_keyValues.m_nAllocated != 0 )
          v62 = v12->m_keyValues.m_pElements;
        else
          v62 = 0;
        v62[v56].m_pAttributeName = 0;
        v15 = spawner.m_pEntityKeyValues;
LABEL_120:
        v126 = -1;
        m_pInstance = 0;
        if ( v15 == 0 )
          goto LABEL_32;
        goto LABEL_11;
      }
      v43 = v12->m_keyHashes.m_nAllocated;
      v44 = 0;
      while ( 1 )
      {
        if ( v43 != 0 )
        {
          v45 = (&v12->m_keyHashes.m_nAllocAllocated + 1);
          if ( v43 > 9 )
            v45 = v12->m_keyHashes.m_pElements;
        }
        else
        {
          v45 = 0;
        }
        if ( v45[v44] == -1104771937 )
          break;
        if ( v42 <= ++v44 )
          goto LABEL_84;
      }
      if ( v12->m_keyValues.m_nAllocated != 0 )
      {
        v79 = v12->m_keyValues.m_pElements;
        v80 = v44;
        m_pAttributeName = v79[v80].m_pAttributeName;
        if ( m_pAttributeName != 0 )
        {
LABEL_118:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", m_pAttributeName);
LABEL_119:
          v15 = spawner.m_pEntityKeyValues;
          goto LABEL_120;
        }
        v109 = v127;
      }
      else
      {
        v80 = v44;
        m_pAttributeName = *(v80 * 24 + 16);
        if ( m_pAttributeName != 0 )
          goto LABEL_118;
        v109 = v127;
        v79 = 0;
      }
      v110 = &v79[v80];
      v111 = v110->m_value.m_flags;
      if ( (v111 & 1) != 0 )
        v110->m_value.m_flags = v111 & 0xFFFE;
      v110->m_value.m_uint64 = 0;
      v110->m_value.m_type = 13;
      v110->m_value.m_int = v109;
      goto LABEL_119;
    }
  }
  v15 = v12;
  v127 = -1;
  if ( v12->m_nQueuedForSpawnCount <= 0 )
    goto LABEL_51;
LABEL_10:
  v126 = -1;
LABEL_11:
  m_enabled = g_VProfCurrentProfile.m_enabled;
  vecAnglesb = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v40 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId(v15) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "Spawn" )
      {
        m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "Spawn", 0, "Server Simulation", 4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v104 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v104->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    v15 = spawner.m_pEntityKeyValues;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v40 + __rdtsc();
  }
  if ( !CEntityKeyValues::HasValue(v15, -971301790) )
  {
    m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
    if ( m_pszClassname != 0 )
      CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
  }
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  m_nMode = spawner.m_nMode;
  v18 = CUtlString::Get(&spawner.m_scriptClassName);
  Entity = CEntitySystem::CreateEntity(
             g_pEntitySystem,
             spawner.m_hSpawnGroupHandle,
             spawner.m_pEntityClass,
             v18,
             m_nMode,
             -1,
             -1,
             0,
             0);
  v21 = Entity;
  if ( Entity != 0 )
  {
    v22 = Entity->m_pEntity;
    if ( v22 != 0 )
    {
      v23 = 0x7FFF;
      if ( v22->m_EHandle.m_Index != -1 )
        v23 = v22->m_EHandle.m_Index & 0x7FFF;
      v126 = (((v22->m_EHandle.m_Index >> 15) - (v22->m_flags & 1)) << 15) | v23 & 0x7FFF;
    }
    v128[0] = v22;
    v128[1] = spawner.m_pEntityKeyValues;
    (*(*g_pGameResourceService + 280LL))(
      g_pGameResourceService,
      spawner.m_hSpawnGroupHandle,
      1,
      v128,
      &spawner.m_mSpawnGroupToWorld);
    CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v21, spawner.m_pEntityKeyValues);
    if ( spawner.m_pSpawnBatch == 0 )
      CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
    m_pContext = spawner.m_pContext;
    for ( vecOriginb = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
    {
      m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
      pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
      if ( m_pthis != 0 || pfn != 0 )
      {
        v27 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
        if ( (pfn & 1) != 0 )
          pfn = *(pfn + *v27 - 1);
        (pfn)(v27, v21, vecOriginb);
      }
    }
  }
  if ( vecAnglesb )
  {
    v36 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      v37 = g_VProfCurrentProfile.m_TargetThreadId;
      if ( v37 == ThreadGetCurrentId(v20) )
      {
        if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
          if ( m_pParent != 0 )
            g_VProfCurrentProfile.m_pCurNode = m_pParent;
          else
            m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        else
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
      }
    }
    v38 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v38 - v36 + __rdtsc();
  }
  if ( (v126 + 2) > 1 && (v28 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v126 >> 9) & 0x3F]) != 0 )
  {
    m_pInstance = 0;
    v30 = &v28[v126 & 0x1FF];
    if ( v30 != 0 && v126 == v30->m_EHandle.m_Index )
      m_pInstance = v30->m_pInstance;
  }
  else
  {
    m_pInstance = 0;
  }
LABEL_32:
  v31 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  spawner._vptr_CEntitySpawnerBase = off_3FCEBB0;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v31 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v31);
  }
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    v32 = spawner.m_pEntityKeyValues;
    if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v32);
      operator delete(v32);
    }
  }
  if ( spawner.m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  return m_pInstance;
}


// CBaseEntity::CreateNoSpawn  (line 2792, @0x000000000215a370, libserver.so)
// calls: CreateEntityByName, CBaseEntity::SetAbsOrigin, CBaseEntity::SetAbsAngles
// callers: CPhysicsEntitySolver::Create, InstancedAutoGeneratedSoundScene, InstancedScriptedScene
CBaseEntity *__fastcall CBaseEntity::CreateNoSpawn(
        const char *szName,
        const Vector *const vecOrigin,
        const QAngle *const vecAngles,
        CBaseEntity *pOwner)
{
  CBaseEntity *EntityByName; // rax
  CBaseEntity *v8; // rbx

  EntityByName = CreateEntityByName(szName, -1);
  v8 = EntityByName;
  if ( EntityByName != 0 )
  {
    CBaseEntity::SetAbsOrigin(EntityByName, vecOrigin);
    CBaseEntity::SetAbsAngles(v8, vecAngles);
    (*(v8->_vptr_IHandleEntity + 40))(v8, pOwner);
  }
  return v8;
}


// CBaseEntity::GetSoundEmissionOrigin  (line 2808, @0x000000000213d790, libserver.so)
Vector __fastcall CBaseEntity::GetSoundEmissionOrigin(const CBaseEntity *const this)
{
  return (*(this->_vptr_IHandleEntity + 62))(this);
}


// CBaseEntity::SaveDataDescBlock  (line 2824, @0x000000000215a3d0, libserver.so)
// calls: CEntityIdentity::Save
// callers: CBaseEntity::Save
int __fastcall CBaseEntity::SaveDataDescBlock(CBaseEntity *const this, ISave *const save, datamap_t *dmap)
{
  if ( CEntityIdentity::Save(this->m_pEntity, save) != 0 )
    return (*(save->_vptr_ISave + 5))(save, this, dmap);
  else
    return 0;
}


// CBaseEntity::Restore  (line 2840, @0x0000000002148890, libserver.so)  // inlines: CEntityHandle, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, IndexToIdentity, Init, IsValid, LookupEntity, RemoveEFlags, RestoreDataDescBlock, operator!=, operator->
// calls: CEntityIdentity::Restore, CBaseEntity::InvalidatePhysicsRecursive, CBaseEntity::CollisionRulesChanged, CBaseEntity::AddEntityToGroundList
// callers: CBaseAnimating::Restore, CDebugHistory::Restore
// globals: CEntityHandle::gm_pEntityList
int __fastcall CBaseEntity::Restore(CBaseEntity *const this, IRestore *const restore)
{
  int v2; // r13d
  __int64 v6; // rax
  CCollisionProperty *m_pCollision; // rdi
  uint32 m_Index; // eax
  unsigned __int16 v9; // di
  __int64 v10; // rdx
  CEntityIdentity *v11; // rcx
  __int64 v12; // rsi
  CEntityIdentity *v13; // rcx
  __int16 v14; // cx
  CBaseEntity *m_pInstance; // rdi
  unsigned int v16; // ecx
  CEntityIdentity *v17; // rax
  CEntityIdentity *v18; // rax
  __int16 v19; // [rsp+0h] [rbp-30h]

  v2 = 0;
  if ( CEntityIdentity::Restore(this->m_pEntity, restore) == 0 )
    return v2;
  v6 = (*(this->_vptr_IHandleEntity + 34))(this);
  v2 = (*(restore->_vptr_IRestore + 2))(restore, this, v6);
  CBaseEntity::InvalidatePhysicsRecursive(this, 1);
  m_pCollision = this->m_pCollision;
  this->m_iEFlags &= ~0x8000u;
  if ( m_pCollision != 0 )
    (*(m_pCollision->_vptr_ICollideable + 25))(m_pCollision);
  CBaseEntity::CollisionRulesChanged(this);
  m_Index = this->m_hGroundEntity.m_Value.m_Index;
  if ( m_Index + 2 <= 1 )
    return v2;
  v9 = this->m_hGroundEntity.m_Value.m_Index & 0x7FFF;
  v10 = v9 >> 9;
  v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[v10];
  if ( v11 == 0 )
    return v2;
  v12 = this->m_hGroundEntity.m_Value.m_Index & 0x1FF;
  v13 = &v11[v12];
  if ( v13 == 0 || m_Index != v13->m_EHandle.m_Index || v13->m_pInstance == 0 )
    return v2;
  v14 = v9 | v19 & 0x8000;
  m_pInstance = 0;
  v16 = m_Index & 0xFFFF8000 | v14 & 0x7FFF;
  if ( v16 + 2 > 1 )
  {
    v17 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v10];
    if ( v17 != 0 )
    {
      v18 = &v17[v12];
      if ( v18 != 0 && v16 == v18->m_EHandle.m_Index )
        m_pInstance = v18->m_pInstance;
    }
  }
  CBaseEntity::AddEntityToGroundList(m_pInstance, this);
  return v2;
}


// CBaseEntity::OnRestore  (line 2916, @0x0000000002142b50, libserver.so)  // inlines: MarkPVSInformationDirty, RemoveEFlags
// calls: CBaseEntity::CheckHasThinkFunction, CBaseEntity::CheckHasGamePhysicsSimulation, CBaseEntity::CollisionRulesChanged, CBaseEntity::PhysicsTouchTriggers, CBaseEntity::AddEffects, CBaseEntity::RemoveFlag, CBaseEntity::SetCheckUntouch
// callers: CBaseModelEntity::OnRestore, CEnvPlayerSurfaceTrigger::OnRestore, CEnvShake::OnRestore, CCredits::OnRestore, CEnvMicrophone::OnRestore, CPhysForce::OnRestore, CPhysMotor::OnRestore, CPhysConstraint::OnRestore, CSoundEnt::OnRestore, CSceneEntity::OnRestore
// globals: CBaseEntity::sm_bDisableTouchFuncs
void __fastcall CBaseEntity::OnRestore(CBaseEntity *const this)
{
  int m_iEFlags; // eax
  bool v3; // zf

  CBaseEntity::CheckHasThinkFunction(this);
  CBaseEntity::CheckHasGamePhysicsSimulation(this);
  CBaseEntity::CollisionRulesChanged(this);
  m_iEFlags = this->m_iEFlags;
  if ( (m_iEFlags & 0x1000000) != 0 )
  {
    this->m_iEFlags = m_iEFlags & 0xFEFFFFFF;
    CBaseEntity::SetCheckUntouch(this, 1);
  }
  CBaseEntity::sm_bDisableTouchFuncs = gpGlobals->eLoadType != MapLoadType_t::MapLoad_Transition;
  CBaseEntity::PhysicsTouchTriggers(this, 0);
  v3 = (this->m_fFlags.m_Value & 0x20000000) == 0;
  CBaseEntity::sm_bDisableTouchFuncs = 0;
  if ( !v3 )
  {
    CBaseEntity::AddEffects(this, 32);
    CBaseEntity::RemoveFlag(this, 402653184);
  }
  this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
}


// CBaseEntity::RestoreDataDescBlock  (line 2956, @0x000000000215a420, libserver.so)
int __fastcall CBaseEntity::RestoreDataDescBlock(CBaseEntity *const this, IRestore *const restore, datamap_t *dmap)
{
  return (*(restore->_vptr_IRestore + 2))(restore, this, dmap);
}


// CBaseEntity::ApplySessionPersisterValues  (line 2961, @0x00000000021422c0, libserver.so)  // inlines: String, ToCStr, operator!=
// calls: KeyValues::operator new, KeyValues::KeyValues, CBaseEntity::GetModelName, CBaseEntity::GetAbsOrigin, KeyValues::AddFloat, CBaseEntity::GetAbsAngles, KeyValues::AddSubKey, KeyValues::AddString, KeyValues::operator delete, _Unwind_Resume
// callers: CBasePlayer::ApplySessionPersisterValues, CPropZipline::ApplySessionPersisterValues
// strings: "originX", "originY", "originZ", "anglesX", "anglesY", "anglesZ"
void __fastcall CBaseEntity::ApplySessionPersisterValues(
        CBaseEntity *const this,
        KeyValues *const kvEntity,
        KeyValues *const kvParent)
{
  KeyValues *v5; // r13
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  const QAngle *AbsAngles; // rax
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm1_4
  const char *v13; // rdx
  char *value[6]; // [rsp+0h] [rbp-30h] BYREF

  v5 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v5, "values");
  CBaseEntity::GetModelName(value, this);
  if ( value[0] != 0 )
  {
    CBaseEntity::GetModelName(value, this);
    v13 = "";
    if ( value[0] != 0 )
      v13 = value[0];
    KeyValues::AddString(v5, "model", v13);
  }
  CBaseEntity::GetAbsOrigin(this);
  KeyValues::AddFloat(kvEntity, "originX", v6);
  CBaseEntity::GetAbsOrigin(this);
  KeyValues::AddFloat(kvEntity, "originY", v7);
  CBaseEntity::GetAbsOrigin(this);
  KeyValues::AddFloat(kvEntity, "originZ", v8);
  AbsAngles = CBaseEntity::GetAbsAngles(this);
  if ( vec3_angle.x != AbsAngles->x || vec3_angle.y != AbsAngles->y || vec3_angle.z != AbsAngles->z )
  {
    CBaseEntity::GetAbsAngles(this);
    KeyValues::AddFloat(kvEntity, "anglesX", v10);
    CBaseEntity::GetAbsAngles(this);
    KeyValues::AddFloat(kvEntity, "anglesY", v11);
    CBaseEntity::GetAbsAngles(this);
    KeyValues::AddFloat(kvEntity, "anglesZ", v12);
  }
  KeyValues::AddSubKey(kvEntity, v5);
}


// CBaseEntity::operator new  (line 2992, @0x000000000215a440, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CBaseEntity::operator new(size_t stAllocateBlock)
{
  void *v2; // rbx

  v2 = (**g_pMemAlloc)(g_pMemAlloc, stAllocateBlock);
  memset(v2, 0, stAllocateBlock);
  return v2;
}


// CBaseEntity::operator new  (line 3001, @0x000000000215a480, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CBaseEntity::operator new(size_t stAllocateBlock, int nBlockUse, const char *pFileName, int nLine)
{
  void *v5; // rbx

  v5 = (**g_pMemAlloc)(g_pMemAlloc, stAllocateBlock, pFileName, nLine);
  memset(v5, 0, stAllocateBlock);
  return v5;
}


// CBaseEntity::operator delete  (line 3010, @0x000000000215a4c0, libserver.so)
// callers: CBaseClientUIEntity::~CBaseClientUIEntity, CPointClientUIWorldPanel::~CPointClientUIWorldPanel, CPointClientUIWorldTextPanel::~CPointClientUIWorldTextPanel, CPointClientUIDialog::~CPointClientUIDialog, CDevtestHierarchy2::~CDevtestHierarchy2, CBreakableProp::~CBreakableProp, CDevtestHierarchyChild::~CDevtestHierarchyChild, CDevtestHierarchy::~CDevtestHierarchy, CPointEntity::~CPointEntity, CInfoTarget::~CInfoTarget, CInfoParticleTarget::~CInfoParticleTarget, CFogController::~CFogController (2017 total)
void __fastcall CBaseEntity::operator delete(void *pMem)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMem);
}


// CBaseEntity::SetOwnerEntity  (line 3025, @0x0000000002144d40, libserver.so)  // inlines: CEntityHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, NetworkStateChanged, Set, operator!=, operator=
// calls: CBaseEntity::CollisionRulesChanged
// callers: CBaseEntity::CBaseEntity
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBaseEntity::SetOwnerEntity(CBaseEntity *const this, CBaseEntity *pOwner)
{
  uint32 m_Index; // edx
  unsigned __int16 v5; // cx
  int v6; // esi
  CBaseEntity *m_pInstance; // rdi
  int v8; // eax
  CEntitySystem *v9; // r8
  CEntityIdentity *v10; // rcx
  __int64 v11; // rsi
  CEntityIdentity *v12; // rcx
  CBaseEntity *v13; // rcx
  CEntityIdentity *v14; // rax
  CEntityIdentity *v15; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v17; // eax
  __int16 v18; // cx

  m_Index = this->m_hOwnerEntity.m_Value.m_Index;
  if ( m_Index == -1 )
  {
    v5 = 0x7FFF;
    v6 = 0x7FFF;
  }
  else
  {
    v5 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v6 = v5;
  }
  m_pInstance = 0;
  v8 = (m_Index >> 15 << 15) | v5 & 0x7FFF;
  v9 = g_pEntitySystem;
  if ( (v8 + 2) > 1 )
  {
    v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9];
    if ( v10 != 0 )
    {
      v11 = v6 & 0x1FF;
      v9 = (8 * v11);
      v12 = &v10[v11];
      if ( v12 != 0 && v8 == v12->m_EHandle.m_Index )
        m_pInstance = v12->m_pInstance;
    }
  }
  if ( pOwner != m_pInstance )
  {
    v13 = 0;
    if ( m_Index + 2 > 1 )
    {
      v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hOwnerEntity.m_Value.m_Index) >> 9) & 0x3F];
      if ( v14 != 0 )
      {
        v15 = &v14[this->m_hOwnerEntity.m_Value.m_Index & 0x1FF];
        if ( v15 != 0 && m_Index == v15->m_EHandle.m_Index )
          v13 = v15->m_pInstance;
      }
    }
    if ( pOwner == v13 )
      goto LABEL_15;
    (*(this->_vptr_IHandleEntity + 22))(this, 540, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v9);
    if ( pOwner == 0 || (m_pEntity = pOwner->m_pEntity) == 0 )
    {
      this->m_hOwnerEntity.m_Value.m_Index = -1;
LABEL_15:
      CBaseEntity::CollisionRulesChanged(this);
      return;
    }
    v17 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v18 = 0x7FFF;
    else
      v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hOwnerEntity.m_Value.m_Index) = v18 | this->m_hOwnerEntity.m_Value.m_Index & 0x8000;
    this->m_hOwnerEntity.m_Value.m_Index = (v17 << 15) | this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    CBaseEntity::CollisionRulesChanged(this);
  }
}


// CBaseEntity::SetMoveType  (line 3037, @0x000000000215a4e0, libserver.so)  // inlines: GetComponent<CBodyComponent>, NetworkStateChanged, RemoveEFlags, Set, SetAnimatedEveryTick, SetSimulatedEveryTick, operator=<MoveCollide_t>, operator=<MoveType_t>, operator=<bool>, operator==<MoveType_t>, operator[]
// calls: CBaseEntity::CollisionRulesChanged, CBodyComponent::SetMotionType, CBaseEntity::CheckStepSimulationChanged, CBaseEntity::CheckHasGamePhysicsSimulation, CBaseEntity::UpdateWaterState
// callers: CDevtestHierarchy::Activate, CDevtestHierarchy::AttachAndDetachThink, CDevtestHierarchy::CycleAttachmentTypeThink, CBaseEntity::StopFollowingEntity, CBaseEntity::FollowEntity, CBaseAnimating::BecomeRagdollOnClient, CBaseProp::Spawn, CDynamicProp::SpawnServerSide, CWorld::Spawn, CBaseCombatWeapon::Drop, CBaseEntity::OnSetDormant, CBaseEntity::EnterStasis (119 total)
// globals: jpt_215A585
void __fastcall CBaseEntity::SetMoveType(CBaseEntity *const this, MoveType_t val, MoveCollide_t moveCollide)
{
  MoveType_t m_Value; // al
  bool v7; // zf
  char v8; // cl
  CEntityIdentity *m_pEntity; // rax
  CBodyComponent *v10; // rdi
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rax

  m_Value = this->m_MoveType.m_Value;
  if ( val == m_Value )
  {
    if ( moveCollide != this->m_MoveCollide.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 340, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_MoveCollide.m_Value = moveCollide;
    }
  }
  else
  {
    if ( m_Value == MoveType_t::MOVETYPE_NOCLIP )
      this->m_iEFlags &= ~4u;
    (*(this->_vptr_IHandleEntity + 22))(this, 341, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v7 = moveCollide == this->m_MoveCollide.m_Value;
    this->m_MoveType.m_Value = val;
    if ( !v7 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 340, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_MoveCollide.m_Value = moveCollide;
    }
    CBaseEntity::CollisionRulesChanged(this);
    switch ( this->m_MoveType.m_Value )
    {
      case MoveType_t::MOVETYPE_STEP:
      case MoveType_t::MOVETYPE_PUSH:
        if ( !this->m_bSimulatedEveryTick.m_Value )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 562, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_bSimulatedEveryTick.m_Value = 1;
        }
        if ( this->m_bAnimatedEveryTick.m_Value )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 563, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_bAnimatedEveryTick.m_Value = 0;
        }
        goto LABEL_11;
      case MoveType_t::MOVETYPE_FLY:
      case MoveType_t::MOVETYPE_FLYGRAVITY:
        CBaseEntity::UpdateWaterState(this);
        v8 = 0;
        goto LABEL_12;
      case MoveType_t::MOVETYPE_VPHYSICS:
        if ( !this->m_bSimulatedEveryTick.m_Value )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 562, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_bSimulatedEveryTick.m_Value = 1;
        }
        if ( this->m_bAnimatedEveryTick.m_Value )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 563, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_bAnimatedEveryTick.m_Value = 0;
        }
        v8 = 1;
        goto LABEL_12;
      case MoveType_t::MOVETYPE_CUSTOM:
        goto LABEL_11;
      default:
        if ( !this->m_bSimulatedEveryTick.m_Value )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 562, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_bSimulatedEveryTick.m_Value = 1;
        }
        if ( this->m_bAnimatedEveryTick.m_Value )
        {
LABEL_11:
          v8 = 0;
        }
        else
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 563, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_bAnimatedEveryTick.m_Value = 1;
          v8 = 0;
        }
LABEL_12:
        m_pEntity = this->m_pEntity;
        v10 = 0;
        m_pInstance = m_pEntity->m_pInstance;
        if ( m_pEntity->m_pInstance != 0 )
        {
          m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
          if ( m_nBaseOffset != 0xFFFF )
            v10 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
        }
        if ( v8 != 0 )
          CBodyComponent::SetMotionType(v10, VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_DYNAMIC);
        else
          CBodyComponent::SetMotionType(v10, VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED);
        CBaseEntity::CheckStepSimulationChanged(this);
        CBaseEntity::CheckHasGamePhysicsSimulation(this);
        break;
    }
  }
}


// CBaseEntity::AddedToEntityDatabase  (line 3140, @0x000000000216f040, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, Base, CUtlLeanVectorFixedGrowable, CUtlLeanVectorFixedGrowableBase, CUtlLeanVectorImpl, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ChangeAccessorFieldPathIndexInfo_t, GetChangeAccessorFieldPathIndexInfo, GetEHandle, GetEntryIndex, GetNetworkSerializer, IsNetworked, Purge, RemoveAll, Schema_StaticBinding, ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl, ~CUtlMemory, ~CUtlMemoryFixedGrowable_Base
// calls: CEntityInstance::AddedToEntityDatabase, CBodyComponent::AddedToEntityDatabase, CBaseEntity::CheckHasThinkFunction, CBaseEntity::CheckHasGamePhysicsSimulation, CGameEntitySystem::NotifyCreateEntity, CNetworkVarChainer::Schema_VerifyBindingIsRegistered, operator new, ChangeAccessorFieldPathIndexInfo_t::IgnoreCache_t::IgnoreCache_t, Plat_IsInDebugSessionRaw, CUtlMemory<const OffsetIgnore_t*, int>::Purge, operator delete, _Unwind_Resume
// callers: CBaseAnimating::AddedToEntityDatabase, CWorld::AddedToEntityDatabase
void __fastcall CBaseEntity::AddedToEntityDatabase(CBaseEntity *const this)
{
  CBodyComponent *m_CBodyComponent; // rdi
  CEntityIdentity *m_pEntity; // rdx
  bool v4; // al
  ChangeAccessorFieldPathIndexInfo_t *m_pChangeChangeAccessorFieldPathIndexInfo; // r12
  void (__fastcall *v6)(IFlattenedSerializers *, FlattenedSerializerHandle_t, CSchemaClassBindingBase *, ChangeAccessorFieldPathIndexInfo_t *, CBaseEntity *const); // r14
  __int64 v7; // rdi

  CEntityInstance::AddedToEntityDatabase(this);
  m_CBodyComponent = this->m_CBodyComponent;
  if ( m_CBodyComponent != 0 )
    CBodyComponent::AddedToEntityDatabase(m_CBodyComponent, this);
  CBaseEntity::CheckHasThinkFunction(this);
  CBaseEntity::CheckHasGamePhysicsSimulation(this);
  CGameEntitySystem::NotifyCreateEntity(g_pGameEntitySystem, this);
  m_pEntity = this->m_pEntity;
  if ( (m_pEntity->m_flags & 0x800) != 0 )
  {
    v4 = (m_pEntity->m_flags & 0x40) != 0;
  }
  else
  {
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      return;
    v4 = (m_pEntity->m_EHandle.m_Index & 0x7FFF) <= 0x3FFF;
  }
  if ( v4 )
  {
    m_pChangeChangeAccessorFieldPathIndexInfo = this->m_NetworkTransmitComponent.m_pChangeChangeAccessorFieldPathIndexInfo;
    v6 = *(*g_pFlattenedSerializers + 256LL);
    if ( m_pChangeChangeAccessorFieldPathIndexInfo == 0 )
    {
      m_pChangeChangeAccessorFieldPathIndexInfo = operator new(0xF0u);
      m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_nCount = 0;
      m_pChangeChangeAccessorFieldPathIndexInfo->m_ChangeAccessorFieldPathIdList.m_nAllocated = 3;
      m_pChangeChangeAccessorFieldPathIndexInfo->m_pBaseOffsetToIgnore = 0;
      m_pChangeChangeAccessorFieldPathIndexInfo->m_OffsetsToIgnoreForPaths.m_Size = 0;
      m_pChangeChangeAccessorFieldPathIndexInfo->m_OffsetsToIgnoreForPaths.m_Memory.m_pMemory = 0;
      m_pChangeChangeAccessorFieldPathIndexInfo->m_OffsetsToIgnoreForPaths.m_Memory.m_nAllocationCount = 4;
      m_pChangeChangeAccessorFieldPathIndexInfo->m_OffsetsToIgnoreForPaths.m_Memory.m_nGrowSize = 0x80000000;
      if ( ((m_pChangeChangeAccessorFieldPathIndexInfo + 48) & 7) != 0 && Plat_IsInDebugSessionRaw(v7) != 0 )
        __debugbreak();
      m_pChangeChangeAccessorFieldPathIndexInfo->m_OffsetsToIgnoreForPaths.m_Memory.m_pMemory = &m_pChangeChangeAccessorFieldPathIndexInfo->m_OffsetsToIgnoreForPaths.m_Memory.m_FixedMemory;
      ChangeAccessorFieldPathIndexInfo_t::IgnoreCache_t::IgnoreCache_t(&m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldIgnore);
      ChangeAccessorFieldPathIndexInfo_t::IgnoreCache_t::IgnoreCache_t(&m_pChangeChangeAccessorFieldPathIndexInfo->m_ShouldNotIgnore);
      this->m_NetworkTransmitComponent.m_pChangeChangeAccessorFieldPathIndexInfo = m_pChangeChangeAccessorFieldPathIndexInfo;
    }
    CNetworkVarChainer::Schema_VerifyBindingIsRegistered();
    v6(
      g_pFlattenedSerializers,
      this->m_pEntity->m_pClass->m_hNetworkSerializer,
      CNetworkVarChainer::s_pSchemaBinding,
      m_pChangeChangeAccessorFieldPathIndexInfo,
      this);
  }
}


// CBaseEntity::Spawn  (line 3174, @0x00000000021483c0, libserver.so)  // inlines: AssignTo<long long unsigned int>, Base, ClearAll, Element, FindKeyHash, GetPtrValue, GetValue, GetValue<long long unsigned int>, NetworkStateChanged, Set, VariantFieldTypeName, curtime, memset, operator=<bool>, operator[]
// calls: CEntityInstance::Spawn, CEntityKeyValues::HasValue, Warning
// callers: CPointClientUIWorldPanel::Spawn, CPointClientUIDialog::Spawn, CPointEntity::Spawn, CLogicalEntity::Spawn, CLightEntity::Spawn, CEnvCombinedLightProbeVolume::Spawn, CEnvCubemap::Spawn, CEnvSky::Spawn, CEnvLightProbeVolume::Spawn, CPointCamera::Spawn, CFogController::Spawn, CInfoWorldLayer::Spawn (112 total)
// strings: "vector4d", "uint64", "No free conversion of %s variant to %s right now\n", "character", "boolean", "float64" (20 total)
// globals: jpt_214854F, CEntityKeyValues::sm_EmptyVariant, jpt_21485E7
void __fastcall CBaseEntity::Spawn(CBaseEntity *const this, const CEntityKeyValues *pKeyValues)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v5; // r13
  bool v6; // zf
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v12; // rdx
  double m_float64; // rsi
  CEntityVariant *p_m_value; // rdx
  int16 m_type; // ax
  const char *v16; // rsi
  float m_float; // xmm0_4
  double v18; // xmm0_8

  CEntityInstance::Spawn(this, pKeyValues);
  (*(this->_vptr_IHandleEntity + 37))(this, pKeyValues);
  if ( this->m_bLagCompensate )
    (*(lagcompensation->_vptr_ILagCompensationManager + 2))(lagcompensation, this);
  m_flCurrentTime = 0.0;
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v5->m_flCurrentTime;
  }
  v6 = !this->m_bClientSideRagdoll.m_Value;
  this->m_lastNetworkChange = m_flCurrentTime;
  this->m_isSteadyState = 0;
  if ( !v6 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 380, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bClientSideRagdoll.m_Value = 0;
  }
  if ( CEntityKeyValues::HasValue(pKeyValues, 1603493765) )
  {
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
          if ( m_pElements[i] == 1603493765 )
          {
LABEL_21:
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v12 = pKeyValues->m_keyValues.m_pElements;
            else
              v12 = 0;
            m_float64 = 0.0;
            p_m_value = &v12[i].m_value;
            m_type = p_m_value->m_type;
            if ( m_type == 0 )
              goto LABEL_33;
LABEL_24:
            switch ( m_type )
            {
              case 33:
LABEL_38:
                m_float64 = p_m_value->m_float64;
                goto LABEL_33;
              case 3:
              case 25:
                switch ( m_type )
                {
                  case 3:
                    v16 = "vector";
                    break;
                  case 25:
                    v16 = "vector2d";
                    break;
                }
                break;
              case 27:
                v16 = "vector4d";
                break;
              case 39:
                v16 = "qangle";
                break;
              case 4:
                v16 = "quaternion";
                break;
              case 30:
                v16 = "cstring";
                break;
              default:
                switch ( m_type )
                {
                  case 1:
                    m_float = p_m_value->m_float;
                    if ( p_m_value->m_float >= 9.223372e18 )
                      *&m_float64 = (m_float - 9.223372e18) ^ 0x8000000000000000LL;
                    else
                      *&m_float64 = m_float;
                    break;
                  case 5:
                    *&m_float64 = p_m_value->m_int;
                    break;
                  case 6:
                    *&m_float64 = p_m_value->m_char;
                    break;
                  case 8:
                    *&m_float64 = p_m_value->m_char;
                    break;
                  case 26:
                    goto LABEL_38;
                  case 34:
                    v18 = p_m_value->m_float64;
                    if ( p_m_value->m_float64 >= 9.223372036854776e18 )
                      *&m_float64 = (v18 - 9.223372036854776e18) ^ 0x8000000000000000LL;
                    else
                      *&m_float64 = v18;
                    break;
                  case 37:
                    *&m_float64 = p_m_value->m_uint;
                    break;
                  default:
                    goto LABEL_37;
                }
                goto LABEL_33;
            }
            Warning("No free conversion of %s variant to %s right now\n", v16, "uint64");
LABEL_37:
            m_float64 = 0.0;
            goto LABEL_33;
          }
        }
        else if ( *(4 * i) == 1603493765 )
        {
          goto LABEL_21;
        }
      }
    }
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_float64 = 0.0;
    m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( m_type != 0 )
      goto LABEL_24;
LABEL_33:
    (*(this->_vptr_IHandleEntity + 77))(this, COERCE_DOUBLE(*&m_float64));
  }
}


// CBaseEntity::DispatchUpdateTransmitState  (line 3211, @0x0000000002140a20, libserver.so)
// calls: CNetworkTransmitComponent::DispatchUpdateTransmitState
// callers: CBaseEntity::ShouldTransmit, CBaseEntity::OnNewModel, CBaseCombatWeapon::Materialize, CBaseEntity::Activate, CBaseCombatCharacter::FixupBurningServerRagdoll, CAmbientGeneric::Activate, CBaseCombatWeapon::SetWeaponVisible, CBaseCombatWeapon::SetOwner, CBaseCombatWeapon::Drop, CBaseEntity::LeaveStasis, CBaseEntity::DispatchUpdateTransmitState, CBaseEntity::DetectInSkybox (13 total)
int __fastcall CBaseEntity::DispatchUpdateTransmitState(CBaseEntity *const this)
{
  return CNetworkTransmitComponent::DispatchUpdateTransmitState(&this->m_NetworkTransmitComponent, this);
}


// CBaseEntity::DispatchUpdateTransmitState  (line 3211, @0x000000000215b820, libserver.so)
// calls: CBaseEntity::DispatchUpdateTransmitState
// callers: CDevtestHierarchy::ChildDormancyThink, CInfoParticleTarget::Spawn, CInfoTarget::Spawn, CBaseEntity::SetEffects, CBaseEntity::AddEffects, CPointCamera::SetActive, Script_SetRenderingEnabled, CBaseEntity::ScriptRemoveEffects, CDynamicProp::InputTurnOn, CGameSceneNode::ForceParentToBeNetworked, CGameSceneNode::EndHierarchicalAttachment, CBaseViewModel::RemoveEffects (97 total)
int __fastcall CBaseEntity::DispatchUpdateTransmitState(CBaseEntity *const this)
{
  if ( this->m_pEntity != 0 )
    return CBaseEntity::DispatchUpdateTransmitState(this);
  else
    return 8;
}


// CBaseEntity::ShouldTransmit  (line 3227, @0x0000000002140a40, libserver.so)  // inlines: DispatchUpdateTransmitState
// calls: CBaseEntity::DispatchUpdateTransmitState
// callers: CBeam::ShouldTransmit, CBasePlayer::ShouldTransmit, CVGuiScreen::ShouldTransmit, CDOTA_Item_Rune::ShouldTransmit, CDOTA_TempTree::ShouldTransmit, CDOTA_BaseNPC_Hero::ShouldTransmit, CDOTA_BaseNPC::ShouldTransmit, CDOTA_Pet_CarriedItem::ShouldTransmit, CDOTA_Unit_Courier::ShouldTransmit, CDOTA_Beastmaster_Axe::ShouldTransmit, CDOTA_DeathProphet_Exorcism_Spirit::ShouldTransmit, CDOTA_Unit_Roshan::ShouldTransmit (16 total)
int __fastcall CBaseEntity::ShouldTransmit(CBaseEntity *const this, const CGameCheckTransmitInfo *pInfo)
{
  int v3; // ebx
  CTeam *m_pRecipientTeam; // rdi
  int v5; // eax

  if ( !pInfo->m_bRecipientLowViolence || (v3 = 8, !this->m_bDisableLowViolence) )
  {
    v3 = 8;
    if ( this->m_pEntity != 0 )
    {
      v3 = CBaseEntity::DispatchUpdateTransmitState(this) & 0x1C;
      if ( v3 == 0 )
      {
        v3 = 16;
        m_pRecipientTeam = pInfo->m_pRecipientTeam;
        if ( m_pRecipientTeam != 0 )
        {
          v5 = (*(m_pRecipientTeam->_vptr_IHandleEntity + 210))(m_pRecipientTeam, pInfo, this);
          if ( v5 != 0 )
            return v5;
        }
      }
    }
  }
  return v3;
}


// CBaseEntity::SetTransmit  (line 3256, @0x00000000021401e0, libserver.so)  // inlines: Bitvec_Set, Get, GetParent, Set, entindex
// calls: CEntityInstance::GetEntityIndex, CGameSceneNode::GetOwnerEntity, CNetworkTransmitComponent::RecomputePVSInformation
// callers: CBaseAnimating::SetTransmit, CParticleSystem::SetTransmit, CBeam::SetTransmit, CRopeKeyframe::SetTransmit, CHandleTest::SetTransmit
void __fastcall CBaseEntity::SetTransmit(CBaseEntity *const this, CCheckTransmitInfo *pInfo, bool bAlways)
{
  CEntityIndex v6; // eax
  CBitVec<16384> *m_pTransmitEdict; // r8
  int v8; // ebx
  __int64 v9; // r15
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  CBitVec<16384> *m_pTransmitAlways; // rdx
  CEntityIndex v13; // eax

  v6.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  m_pTransmitEdict = pInfo->m_pTransmitEdict;
  v8 = 1 << SLOBYTE(v6.m_Data);
  if ( ((1 << SLOBYTE(v6.m_Data)) & m_pTransmitEdict->m_Ints[v6.m_Data >> 5]) == 0 )
  {
    v9 = v6.m_Data >> 5;
    m_pTransmitEdict->m_Ints[v9] |= v8;
    m_pParent = this->m_pGameSceneNode->m_pParent;
    OwnerEntity = 0;
    if ( m_pParent != 0 )
      OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    m_pTransmitAlways = pInfo->m_pTransmitAlways;
    if ( m_pTransmitAlways != 0 )
    {
      if ( OwnerEntity == 0 && !bAlways )
      {
        v13.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
        CNetworkTransmitComponent::RecomputePVSInformation(&this->m_NetworkTransmitComponent, v13);
        return;
      }
      m_pTransmitAlways->m_Ints[v9] |= v8;
    }
    if ( OwnerEntity != 0 )
      (*(OwnerEntity->_vptr_IHandleEntity + 66))(OwnerEntity, pInfo, bAlways);
  }
}


// CBaseEntity::GetEntitySkybox  (line 3296, @0x000000000215b840, libserver.so)
// calls: CEntitySystem::GetActiveSpawnGroupHandle, GetSkyCameraList
// callers: CBaseEntity::DetectInSkybox
CSkyCamera *__fastcall CBaseEntity::GetEntitySkybox(CBaseEntity *const this)
{
  int (*v2)(...); // r12
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // eax
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 (__fastcall *v6)(__int64, double *); // rbx
  int v7; // xmm1_4
  unsigned int v8; // r13d
  CSkyCamera *SkyCameraList; // rbx
  double v11; // [rsp+0h] [rbp-30h] BYREF
  int v12; // [rsp+8h] [rbp-28h]

  v2 = *g_pPVSManager->_vptr_IPVSManager;
  ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
  v4 = (v2)(g_pPVSManager, ActiveSpawnGroupHandle);
  v5 = v4;
  if ( v4 == 0 )
    return 0;
  v6 = *(*v4 + 112LL);
  v11 = (*(this->_vptr_IHandleEntity + 62))(this);
  v12 = v7;
  v8 = v6(v5, &v11);
  SkyCameraList = GetSkyCameraList();
  if ( SkyCameraList == 0 )
    return 0;
  while ( (*(*v5 + 104LL))(v5, v8, SkyCameraList->m_skyboxData.area.m_Value) == 0 )
  {
    SkyCameraList = SkyCameraList->m_pNext;
    if ( SkyCameraList == 0 )
      return 0;
  }
  return SkyCameraList;
}


// CBaseEntity::DetectInSkybox  (line 3316, @0x000000000215b910, libserver.so)  // inlines: AddEFlags, DispatchUpdateTransmitState, RemoveEFlags
// calls: CBaseEntity::GetEntitySkybox, CBaseEntity::DispatchUpdateTransmitState
bool __fastcall CBaseEntity::DetectInSkybox(CBaseEntity *const this)
{
  bool v2; // r12

  if ( CBaseEntity::GetEntitySkybox(this) == 0 )
  {
    this->m_iEFlags &= ~0x20000u;
    v2 = 0;
    if ( this->m_pEntity == 0 )
      return v2;
    goto LABEL_3;
  }
  this->m_iEFlags |= 0x20000u;
  v2 = 1;
  if ( this->m_pEntity != 0 )
LABEL_3:
    CBaseEntity::DispatchUpdateTransmitState(this);
  return v2;
}


// CBaseEntity::ComputeWorldSpaceSurroundingBox  (line 3332, @0x000000000213d7b0, libserver.so)
void __fastcall CBaseEntity::ComputeWorldSpaceSurroundingBox(CBaseEntity *const this, Vector *pMins, Vector *pMaxs)
{
  ;
}


// CBaseEntity::OnEntityEvent  (line 3344, @0x0000000002142730, libserver.so)  // inlines: NetworkStateChanged, Set, SetWaterLevel, operator=<int>
// calls: CBaseEntity::SetWaterType
// callers: CItem::OnEntityEvent, CPointSpotlight::OnEntityEvent
void __fastcall CBaseEntity::OnEntityEvent(CBaseEntity *const this, EntityEvent_t event, void *pEventData)
{
  __int64 v4; // r12
  uint64 v5; // rsi

  if ( event != EntityEvent_t::ENTITY_EVENT_WATER_TOUCH )
  {
    if ( event != EntityEvent_t::ENTITY_EVENT_WATER_UNTOUCH )
      return;
    if ( pEventData == 0 || SBYTE1(pEventData) < 0 )
      --this->m_nWaterTouch;
    if ( (pEventData & 0x10000) != 0 )
      --this->m_nSlimeTouch;
  }
  else
  {
    if ( pEventData == 0 || SBYTE1(pEventData) < 0 )
      ++this->m_nWaterTouch;
    if ( (pEventData & 0x10000) != 0 )
      ++this->m_nSlimeTouch;
  }
  if ( this->m_MoveType.m_Value == MoveType_t::MOVETYPE_VPHYSICS )
  {
    v4 = -(this->m_nWaterTouch != 0) & 0x8000;
    if ( this->m_nSlimeTouch != 0 )
      v4 = -(this->m_nWaterTouch != 0) & 0x8000 | 0x10000LL;
    if ( v4 != 0 )
    {
      if ( this->m_nWaterLevel.m_Value != 1 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 561, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_nWaterLevel.m_Value = 1;
      }
      v5 = v4;
    }
    else
    {
      if ( this->m_nWaterLevel.m_Value != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 561, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_nWaterLevel.m_Value = 0;
      }
      v5 = 0;
    }
    CBaseEntity::SetWaterType(this, v5);
  }
}


// CBaseEntity::InputAlternativeSorting  (line 3414, @0x000000000213d7c0, libserver.so)
void __fastcall CBaseEntity::InputAlternativeSorting(CBaseEntity *const this, inputdata_t *const inputdata)
{
  ;
}


// CBaseEntity::InputUse  (line 3424, @0x000000000213d7d0, libserver.so)
void __fastcall CBaseEntity::InputUse(CBaseEntity *const this, inputdata_t *const inputdata)
{
  (*(this->_vptr_IHandleEntity + 109))(this, inputdata);
}


// CBaseEntity::InputEnableDamageForces  (line 3442, @0x00000000021426e0, libserver.so)  // inlines: RemoveEFlags
void __fastcall CBaseEntity::InputEnableDamageForces(CBaseEntity *const this, inputdata_t *const inputdata)
{
  this->m_iEFlags &= ~0x80000000;
}


// CBaseEntity::InputDisableDamageForces  (line 3447, @0x000000000213d7f0, libserver.so)  // inlines: AddEFlags
void __fastcall CBaseEntity::InputDisableDamageForces(CBaseEntity *const this, inputdata_t *const inputdata)
{
  this->m_iEFlags |= 0x80000000;
}


// CBaseEntity::InputSetDamageFilter  (line 3456, @0x00000000021494f0, libserver.so)  // inlines: AssignTo, GetEHandle, GetEntryIndex, GetSerialNumber, Set, StringID, TempString, ToString, operator=
// calls: MakeEntitySystemString, CGameEntitySystem::FindEntityByName, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_2149528, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CBaseEntity::InputSetDamageFilter(CBaseEntity *const this, inputdata_t *const inputdata)
{
  int16 m_type; // di
  char *m_pszString; // rsi
  bool v6; // zf
  CBaseEntity *EntityByName; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // cx
  const char *v11; // rax
  const char *v12; // rcx
  double m_float; // xmm0_8
  string_t iszName; // [rsp+10h] [rbp-30h] BYREF

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
        goto LABEL_14;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_26;
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
        goto LABEL_18;
      case 6:
        v12 = "true";
        if ( inputdata->value.m_char == 0 )
          v12 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v12);
        goto LABEL_22;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_18;
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
        goto LABEL_22;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_22:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_26:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_18:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v11 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v11);
LABEL_14:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  MakeEntitySystemString(m_pszString);
  v6 = iszName.u.m_Id == 0;
  this->m_iszDamageFilterName = iszName;
  if ( !v6
    && (EntityByName = CGameEntitySystem::FindEntityByName(
                         g_pGameEntitySystem,
                         0,
                         &iszName,
                         this,
                         inputdata->pActivator,
                         inputdata->pCaller,
                         0)) != 0
    && (m_pEntity = EntityByName->m_pEntity) != 0 )
  {
    v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v10 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hDamageFilter.m_Index) = v10 | this->m_hDamageFilter.m_Index & 0x8000;
    this->m_hDamageFilter.m_Index = (v9 << 15) | this->m_hDamageFilter.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hDamageFilter.m_Index = -1;
  }
}


// CBaseEntity::ScriptInputKill  (line 3473, @0x000000000216b3e0, libserver.so)  // inlines: CVariantBase, Free, inputdata_t, ~CVariantBase, ~inputdata_t
// calls: CBaseEntity::InputKill, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CBaseEntity::ScriptInputKill(CBaseEntity *const this)
{
  inputdata_t dummy; // [rsp+0h] [rbp-40h] BYREF

  dummy.value.m_flags = 0;
  dummy.value.m_type = 0;
  dummy.value.m_uint64 = 0;
  CBaseEntity::InputKill(this, &dummy);
  if ( (dummy.value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, dummy.value.m_uint64);
}


// CBaseEntity::InputKill  (line 3483, @0x0000000002146bb0, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ReportDeathEvent, entindex, notify_system_event_params_t
// calls: UTIL_Remove, CEntityInstance::GetEntityIndex, UTIL_VarArgs
// callers: CBaseEntity::ScriptInputKill
// strings: "kickid %d CBaseEntity::InputKill()\n"
void __fastcall CBaseEntity::InputKill(CBaseEntity *const this, inputdata_t *const inputdata)
{
  unsigned __int16 v3; // dx
  int v4; // esi
  uint32 v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  void (__fastcall *v8)(INotify *, CBaseEntity *const, __int64, char **); // rax
  CCollisionProperty *m_pCollision; // rdi
  CEntityIndex v10; // eax
  void (__fastcall *v11)(IVEngineServer2 *, char *); // r12
  int v12; // eax
  char *v13; // rax
  char v14; // [rsp+Fh] [rbp-21h] BYREF
  char *v15; // [rsp+10h] [rbp-20h] BYREF

  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v4 = v3;
  }
  v5 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v3 & 0x7FFF;
  LODWORD(v15) = v5;
  if ( v5 + 2 > 1 )
  {
    v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
    if ( v6 != 0 )
    {
      v7 = &v6[v4 & 0x1FF];
      if ( v7 != 0 && v5 == v7->m_EHandle.m_Index && v7->m_pInstance != 0 )
      {
        (*(v7->m_pInstance->_vptr_IHandleEntity + 84))(v7->m_pInstance, this);
        (*(this->_vptr_IHandleEntity + 40))(this, 0);
      }
    }
  }
  v8 = *(g_pNotify->_vptr_INotify + 3);
  v15 = &v14;
  v8(g_pNotify, this, 1, &v15);
  if ( (*(this->_vptr_IHandleEntity + 140))(this) != 0 )
  {
    v10.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    v11 = *(*engine + 280LL);
    v12 = (*(*engine + 224LL))(engine, (v10.m_Data - 1));
    v13 = UTIL_VarArgs("kickid %d CBaseEntity::InputKill()\n", v12);
    v11(engine, v13);
  }
  else
  {
    UTIL_Remove(this);
    m_pCollision = this->m_pCollision;
    if ( m_pCollision != 0 )
      (*(m_pCollision->_vptr_ICollideable + 16))(m_pCollision);
  }
}


// CBaseEntity::InputKillHierarchy  (line 3516, @0x0000000002147b80, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ReportDeathEvent, notify_system_event_params_t
// calls: CBaseEntity::FirstMoveChild, CBaseEntity::NextMovePeer, UTIL_Remove
void __fastcall CBaseEntity::InputKillHierarchy(CBaseEntity *const this, inputdata_t *const inputdata)
{
  CBaseEntity *MoveChild; // rbx
  CBaseEntity *MovePeer; // r12
  unsigned __int16 v6; // dx
  int v7; // esi
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  void (__fastcall *v11)(INotify *, CBaseEntity *const, __int64, char **); // rax
  char v12; // [rsp+Fh] [rbp-31h] BYREF
  char *v13; // [rsp+10h] [rbp-30h] BYREF

  MoveChild = CBaseEntity::FirstMoveChild(this);
  if ( MoveChild != 0 )
  {
    while ( 1 )
    {
      MovePeer = CBaseEntity::NextMovePeer(MoveChild);
      CBaseEntity::InputKillHierarchy(MoveChild, inputdata);
      if ( MovePeer == 0 )
        break;
      MoveChild = MovePeer;
    }
  }
  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v6 = 0x7FFF;
    v7 = 0x7FFF;
  }
  else
  {
    v6 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v7 = v6;
  }
  v8 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v6 & 0x7FFF;
  LODWORD(v13) = v8;
  if ( v8 + 2 > 1 )
  {
    v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9];
    if ( v9 != 0 )
    {
      v10 = &v9[v7 & 0x1FF];
      if ( v10 != 0 && v8 == v10->m_EHandle.m_Index && v10->m_pInstance != 0 )
      {
        (*(v10->m_pInstance->_vptr_IHandleEntity + 84))(v10->m_pInstance, this);
        (*(this->_vptr_IHandleEntity + 40))(this, 0);
      }
    }
  }
  v11 = *(g_pNotify->_vptr_INotify + 3);
  v13 = &v12;
  v11(g_pNotify, this, 1, &v13);
  UTIL_Remove(this);
}


// CBaseEntity::InputSetParent  (line 3541, @0x00000000021585f0, libserver.so)  // inlines: AssignTo, StringID, TempString, ToString
// calls: MakeEntitySystemString, CBaseEntity::SetParent, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_2158628, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CBaseEntity::InputSetParent(CBaseEntity *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  CBaseEntity *pActivator; // r13
  char *m_pszString; // rsi
  const char *v6; // rax
  const char *v7; // rcx
  double m_float; // xmm0_8
  string_t newParent; // [rsp+10h] [rbp-30h] BYREF

  m_type = inputdata->value.m_type;
  pActivator = inputdata->pActivator;
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
        v7 = "true";
        if ( inputdata->value.m_char == 0 )
          v7 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v7);
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
        v6 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v6);
LABEL_8:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  MakeEntitySystemString(m_pszString);
  CBaseEntity::SetParent(this, &newParent, pActivator, 0);
}


// CBaseEntity::SetParentAttachmentHelper  (line 3550, @0x000000000215b970, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, GetDebugName, MakeStringToken, String
// calls: CBaseEntity::GetMoveParent, CBaseAnimating::LookupAttachment, CBaseEntity::SetParent, CBaseEntity::SetMoveType, CEntityIdentity::GetDebugName, Warning, MurmurHash2LowerCase, RegisterStringToken
// callers: CBaseEntity::InputSetParentAttachment, CBaseEntity::InputSetParentAttachmentMaintainOffset
// strings: "ERROR: Tried to %s for entity %s (%s), but it has no attachment named %s.\n", "ERROR: Tried to %s for entity %s (%s), but it has no parent.\n", "ERROR: Tried to %s for entity %s (%s), but its parent has no model.\n"
void __fastcall CBaseEntity::SetParentAttachmentHelper(
        CBaseEntity *const this,
        const char *szInputName,
        const char *szAttachment,
        bool bMaintainOffset)
{
  CBaseEntity *MoveParent; // rax
  CBaseEntity *v9; // rbx
  const CBaseAnimating *v10; // rax
  const matrix3x4a_t *v11; // r14
  CUtlStringToken v12; // edx
  const char *DebugName; // rax
  CEntityIdentity *m_pEntity; // rsi
  const char *m_pAsString; // rdx
  const char *v16; // rax
  CEntityIdentity *v17; // rsi
  const char *v18; // rdx
  const char *v19; // rax
  CEntityIdentity *v20; // rsi
  const char *v21; // rdx
  uint32 v22; // eax
  uint32 v23; // [rsp+Ch] [rbp-34h]

  MoveParent = CBaseEntity::GetMoveParent(this);
  v9 = MoveParent;
  if ( MoveParent != 0 )
  {
    v10 = (*(MoveParent->_vptr_IHandleEntity + 43))(MoveParent);
    if ( v10 != 0 )
    {
      if ( CBaseAnimating::LookupAttachment(v10, szAttachment) != 0 )
      {
        if ( bMaintainOffset )
          v11 = 0;
        else
          v11 = &g_MatrixIdentity;
        v12.m_nHashCode = 0;
        if ( szAttachment != 0 && *szAttachment != 0 )
        {
          v22 = MurmurHash2LowerCase(szAttachment, 0x31415926u);
          if ( g_bUpdateStringTokenDatabase )
          {
            v23 = v22;
            RegisterStringToken(v22, szAttachment, 0, 1);
            v12.m_nHashCode = v23;
          }
          else
          {
            v12.m_nHashCode = v22;
          }
        }
        CBaseEntity::SetParent(this, v9, v12, v11);
        CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
      }
      else
      {
        DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
        m_pEntity = this->m_pEntity;
        m_pAsString = "";
        if ( m_pEntity->m_designerName.u.m_Id != 0 )
          m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
        Warning(
          "ERROR: Tried to %s for entity %s (%s), but it has no attachment named %s.\n",
          szInputName,
          m_pAsString,
          DebugName,
          szAttachment);
      }
    }
    else
    {
      v19 = CEntityIdentity::GetDebugName(this->m_pEntity);
      v20 = this->m_pEntity;
      v21 = "";
      if ( v20->m_designerName.u.m_Id != 0 )
        v21 = v20->m_designerName.u.m_pAsString;
      Warning("ERROR: Tried to %s for entity %s (%s), but its parent has no model.\n", szInputName, v21, v19);
    }
  }
  else
  {
    v16 = CEntityIdentity::GetDebugName(this->m_pEntity);
    v17 = this->m_pEntity;
    v18 = "";
    if ( v17->m_designerName.u.m_Id != 0 )
      v18 = v17->m_designerName.u.m_pAsString;
    Warning("ERROR: Tried to %s for entity %s (%s), but it has no parent.\n", szInputName, v18, v16);
  }
}


// CBaseEntity::InputSetParentAttachment  (line 3585, @0x000000000215bb20, libserver.so)  // inlines: AssignTo, TempString, ToString
// calls: CBaseEntity::SetParentAttachmentHelper, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_215BB51, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CBaseEntity::InputSetParentAttachment(CBaseEntity *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  char *m_pszString; // rdx
  const char *v5; // rax
  const char *v6; // rcx
  double m_float; // xmm0_8

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
  CBaseEntity::SetParentAttachmentHelper(this, "SetParentAttachment", m_pszString, 0);
}


// CBaseEntity::InputSetParentAttachmentMaintainOffset  (line 3593, @0x000000000215bdc0, libserver.so)  // inlines: AssignTo, TempString, ToString
// calls: CBaseEntity::SetParentAttachmentHelper, V_snprintf, VariantFieldTypeName, Warning
// strings: "SetParentAttachmentMaintainOffset", "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_215BDF1, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CBaseEntity::InputSetParentAttachmentMaintainOffset(
        CBaseEntity *const this,
        inputdata_t *const inputdata)
{
  int16 m_type; // ax
  char *m_pszString; // rdx
  const char *v5; // rax
  const char *v6; // rcx
  double m_float; // xmm0_8

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
  CBaseEntity::SetParentAttachmentHelper(this, "SetParentAttachmentMaintainOffset", m_pszString, 1);
}


// CBaseEntity::InputClearParent  (line 3601, @0x000000000213ef90, libserver.so)
// calls: CBaseEntity::SetParent
void __fastcall CBaseEntity::InputClearParent(CBaseEntity *const this, inputdata_t *const inputdata)
{
  CBaseEntity::SetParent(this, 0, 0, 0);
}


// CBaseEntity::InputSetTeam  (line 3610, @0x0000000002140d40, libserver.so)  // inlines: Int, operator int
void __fastcall CBaseEntity::InputSetTeam(CBaseEntity *const this, inputdata_t *const inputdata)
{
  void (__fastcall *v4)(CBaseEntity *const, _QWORD); // rdx
  int16 m_type; // ax

  if ( (*(this->_vptr_IHandleEntity + 140))(this) == 0 )
  {
    v4 = *(this->_vptr_IHandleEntity + 70);
    m_type = inputdata->value.m_type;
    if ( m_type == 1 )
    {
      v4(this, inputdata->value.m_float);
    }
    else if ( m_type == 34 )
    {
      v4(this, inputdata->value.m_float64);
    }
    else
    {
      v4(this, inputdata->value.m_uint);
    }
  }
}


// CBaseEntity::GetTeam  (line 3620, @0x000000000215c060, libserver.so)
// calls: GetGlobalTeam
// callers: Host_Say, CEventLog::FormatPlayer, CEventLog::PrintPlayerEvent, CMultiplayRules::VoiceCommand, CBasePlayer::BuildTransmitInfo, CBasePlayer::ChangeTeam, CBasePlayer::AddPointsToTeam, CBasePlayer::UpdateOnRemove, CPropDoorRotatingBreakable::Event_Killed, CTeamplayRules::ClientDisconnected, CDOTA_Modifier_Greevil_Miniboss_Orange_LightStrikeArray_Thinker::OnCreated, CDOTA_Speech::SpeechSourceToNetFilter (34 total)
CTeam *__fastcall CBaseEntity::GetTeam(const CBaseEntity *const this)
{
  return GetGlobalTeam(this->m_iTeamNum.m_Value);
}


// CBaseEntity::InSameTeam  (line 3629, @0x000000000215c080, libserver.so)  // inlines: GetTeam
// calls: GetGlobalTeam
// callers: CVoiceGameMgrHelper::CanPlayerHearPlayer, CDOTAHLTVDirector::AnalyzePlayers, CDOTA_Ability_Pudge_FleshHeap::OnHeroDiedNearby, CDOTA_Modifier_Item_MagicWand::OnAbilityExecuted, CDOTA_Modifier_Item_MagicStick::OnAbilityExecuted
bool __fastcall CBaseEntity::InSameTeam(const CBaseEntity *const this, CBaseEntity *pEntity)
{
  bool result; // al
  CTeam *GlobalTeam; // r12

  result = 0;
  if ( pEntity != 0 )
  {
    GlobalTeam = GetGlobalTeam(pEntity->m_iTeamNum.m_Value);
    return GlobalTeam == GetGlobalTeam(this->m_iTeamNum.m_Value);
  }
  return result;
}


// CBaseEntity::TeamID  (line 3636, @0x000000000215c0c0, libserver.so)  // inlines: GetTeam
// calls: GetGlobalTeam
// callers: CGamePlayerTeam::TargetTeamName, CTeamplayRules::TeamWithFewestPlayers, CTeamplayRules::RecountTeams
const char *__fastcall CBaseEntity::TeamID(const CBaseEntity *const this)
{
  CTeam *GlobalTeam; // rax

  if ( GetGlobalTeam(this->m_iTeamNum.m_Value) == 0 )
    return "";
  GlobalTeam = GetGlobalTeam(this->m_iTeamNum.m_Value);
  return (*(GlobalTeam->_vptr_IHandleEntity + 208))(GlobalTeam);
}


// CBaseEntity::IsInTeam  (line 3645, @0x000000000215c110, libserver.so)  // inlines: GetTeam
// calls: GetGlobalTeam
bool __fastcall CBaseEntity::IsInTeam(const CBaseEntity *const this, CTeam *pTeam)
{
  return pTeam == GetGlobalTeam(this->m_iTeamNum.m_Value);
}


// CBaseEntity::GetDamageType  (line 3654, @0x000000000213d800, libserver.so)
int __fastcall CBaseEntity::GetDamageType(const CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::NotifySystemEvent  (line 3664, @0x000000000213d810, libserver.so)
void __fastcall CBaseEntity::NotifySystemEvent(
        CBaseEntity *const this,
        CBaseEntity *pNotify,
        notify_system_event_t eventType,
        const notify_system_event_params_t *const params)
{
  ;
}


// BuildTeleportList_r  (line 3771, @0x0000000002174460, libserver.so)  // inlines: AddToTail, CopyConstruct<TeleportListEntry_t>, Element, GrowMemory, operator=, operator[]
// calls: CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles, CBaseEntity::FirstMoveChild, CBaseEntity::NextMovePeer, CUtlMemory<TeleportListEntry_t, int>::Grow
// callers: CBaseEntity::Teleport
void __fastcall BuildTeleportList_r(
        CBaseEntity *pTeleport,
        CUtlVector<TeleportListEntry_t,CUtlMemory<TeleportListEntry_t,int> > *const teleportList)
{
  const Vector *AbsOrigin; // rax
  int v5; // r14d
  int v6; // r15d
  const QAngle *AbsAngles; // rax
  int m_Size; // r13d
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t v11; // xmm0_4
  int v12; // eax
  TeleportListEntry_t *v13; // rax
  CBaseEntity *i; // rbx
  float v15; // [rsp+0h] [rbp-40h]
  float v16; // [rsp+4h] [rbp-3Ch]
  float v17; // [rsp+8h] [rbp-38h]
  vec_t z; // [rsp+Ch] [rbp-34h]

  AbsOrigin = CBaseEntity::GetAbsOrigin(pTeleport);
  v5 = _mm_cvtsi128_si32(LODWORD(AbsOrigin->x));
  v6 = _mm_cvtsi128_si32(LODWORD(AbsOrigin->y));
  z = AbsOrigin->z;
  AbsAngles = CBaseEntity::GetAbsAngles(pTeleport);
  m_Size = teleportList->m_Size;
  x = AbsAngles->x;
  y = AbsAngles->y;
  v11 = AbsAngles->z;
  v12 = teleportList->m_Size;
  if ( teleportList->m_Size == teleportList->m_Memory.m_nAllocationCount )
  {
    v15 = v11;
    v16 = y;
    v17 = x;
    CUtlMemory<TeleportListEntry_t,int>::Grow(&teleportList->m_Memory, 1);
    v12 = teleportList->m_Size;
    v11 = v15;
    y = v16;
    x = v17;
  }
  teleportList->m_Size = v12 + 1;
  v13 = &teleportList->m_Memory.m_pMemory[m_Size];
  if ( v13 != 0 )
  {
    v13->pEntity = pTeleport;
    LODWORD(v13->prevAbsOrigin.x) = v5;
    LODWORD(v13->prevAbsOrigin.y) = v6;
    v13->prevAbsOrigin.z = z;
    v13->prevAbsAngles.x = x;
    v13->prevAbsAngles.y = y;
    v13->prevAbsAngles.z = v11;
  }
  for ( i = CBaseEntity::FirstMoveChild(pTeleport); i != 0; i = CBaseEntity::NextMovePeer(i) )
    BuildTeleportList_r(i, teleportList);
}


// CBaseEntity::Teleport  (line 3791, @0x0000000002174580, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CBaseEntity*>, Element, FastRemove, Find, GetDataObject, GetSkeletonInstance, GetSolid, GrowMemory, NetworkStateChanged, Purge, RemoveAll, ReportTeleportEvent, Set, SetBaseVelocity, TeleportEntity, V_memset, memcpy, memset, notify_system_event_params_t, operator!=, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: BuildTeleportList_r, CBaseEntity::SetGroundEntity, CCollisionProperty::DisableTouchEvents, CBaseEntity::GetAbsOrigin, CBaseEntity::VPhysicsGetAggregate, CPhysicsGameSystem::ForceUpdateIfKeyframed, CBaseEntity::CollisionRulesChanged, CEntityIdentity::GetDataObject, CUtlMemory<TeleportListEntry_t, int>::Purge, CCollisionProperty::EnableTouchEvents, CBaseEntity::SetAbsAngles, CBaseEntity::SetAbsVelocity (18 total)
// callers: CBaseAnimating::Teleport
// globals: g_TeleportStack
void __fastcall CBaseEntity::Teleport(
        CBaseEntity *const this,
        const Vector *newPosition,
        const QAngle *newAngles,
        const Vector *newVelocity)
{
  int m_Size; // r13d
  CBaseEntity **v6; // rdx
  int v7; // eax
  int v8; // eax
  __int64 v9; // r14
  CCollisionProperty *v10; // rdi
  bool v11; // dl
  int (**vptr_INotify)(...); // rax
  CBaseEntity *pEntity; // rbx
  CCollisionProperty *m_pCollision; // rdi
  bool v15; // al
  CCollisionProperty *v16; // rdi
  IPhysAggregateInstance *Aggregate; // r15
  CSkeletonInstance *v18; // rax
  __int64 v19; // r14
  int v20; // ebx
  int v21; // eax
  _DWORD *DataObject; // rdx
  double v23; // xmm0_8
  matrix3x4_t *v24; // rax
  __int64 v25; // r8
  __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  int (**vptr_IPhysAggregateInstance)(...); // r9
  _BYTE v34[24]; // [rsp+70h] [rbp-D0h]
  bool v35; // [rsp+8Ah] [rbp-B6h]
  char v36; // [rsp+8Bh] [rbp-B5h]
  int i; // [rsp+8Ch] [rbp-B4h]
  _DWORD *v38; // [rsp+90h] [rbp-B0h] BYREF
  CUtlVector<TeleportListEntry_t,CUtlMemory<TeleportListEntry_t,int> > teleportList; // [rsp+A0h] [rbp-A0h] BYREF
  _DWORD v40[6]; // [rsp+C0h] [rbp-80h] BYREF
  bool v41; // [rsp+D8h] [rbp-68h]
  __int64 v42; // [rsp+E0h] [rbp-60h]
  __int64 v43; // [rsp+E8h] [rbp-58h]
  __int64 v44; // [rsp+F0h] [rbp-50h]
  __int64 v45; // [rsp+F8h] [rbp-48h]
  __int64 v46; // [rsp+100h] [rbp-40h]
  __int64 v47; // [rsp+108h] [rbp-38h]

  m_Size = g_TeleportStack.m_Size;
  if ( g_TeleportStack.m_Size > 0 )
  {
    if ( this == *g_TeleportStack.m_Memory.m_pMemory )
      return;
    v6 = g_TeleportStack.m_Memory.m_pMemory + 1;
    v7 = 0;
    while ( ++v7 != g_TeleportStack.m_Size )
    {
      if ( this == *v6++ )
      {
        if ( v7 >= 0 )
          return;
        break;
      }
    }
  }
  v8 = g_TeleportStack.m_Size;
  if ( g_TeleportStack.m_Memory.m_nAllocationCount == g_TeleportStack.m_Size )
  {
    CUtlMemory<CBaseEntity *,int>::Grow(&g_TeleportStack.m_Memory, 1);
    v8 = g_TeleportStack.m_Size;
  }
  g_TeleportStack.m_Size = v8 + 1;
  if ( &g_TeleportStack.m_Memory.m_pMemory[m_Size] != 0 )
    g_TeleportStack.m_Memory.m_pMemory[m_Size] = this;
  teleportList.m_Size = 0;
  teleportList.m_Memory.m_pMemory = 0;
  teleportList.m_Memory.m_nAllocationCount = 0;
  teleportList.m_Memory.m_nGrowSize = 0;
  BuildTeleportList_r(this, &teleportList);
  if ( teleportList.m_Size > 0 )
  {
    v9 = 0;
    i = 0;
    do
    {
      pEntity = teleportList.m_Memory.m_pMemory[v9].pEntity;
      *v34 = teleportList.m_Memory.m_pMemory[v9].prevAbsOrigin;
      m_pCollision = pEntity->m_pCollision;
      *&v34[12] = teleportList.m_Memory.m_pMemory[v9].prevAbsAngles;
      if ( m_pCollision != 0 )
      {
        v15 = CCollisionProperty::DisableTouchEvents(m_pCollision);
        v16 = pEntity->m_pCollision;
        v35 = v15;
        if ( v16 != 0 )
          v36 = (*(v16->_vptr_ICollideable + 18))(v16);
        else
          v36 = 0;
      }
      else
      {
        v35 = 0;
        v36 = 0;
      }
      if ( this == pEntity )
      {
        if ( newAngles != 0 )
        {
          CBaseEntity::SetAbsAngles(this, newAngles);
          if ( (*(this->_vptr_IHandleEntity + 140))(this) != 0 )
            CBasePlayer::SnapEyeAngles(this, newAngles);
        }
        if ( newVelocity != 0 )
        {
          CBaseEntity::SetAbsVelocity(this, newVelocity);
          *&v23 = LODWORD(vec3_origin.x);
          if ( vec3_origin.x != this->m_vecBaseVelocity.m_Value.x
            || (*&v23 = LODWORD(vec3_origin.y), *&v23 != this->m_vecBaseVelocity.m_Value.y)
            || (*&v23 = LODWORD(vec3_origin.z), *&v23 != this->m_vecBaseVelocity.m_Value.z) )
          {
            (*(this->_vptr_IHandleEntity + 22))(this, 512, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v23);
            this->m_vecBaseVelocity.m_Value = vec3_origin;
          }
        }
        if ( newPosition != 0 )
        {
          CBaseEntity::IncrementInterpolationFrame(this);
          CBaseEntity::SetAbsOrigin(this, newPosition);
        }
      }
      else
      {
        CBaseEntity::GetAbsOrigin(pEntity);
      }
      Aggregate = CBaseEntity::VPhysicsGetAggregate(pEntity);
      if ( Aggregate != 0 )
      {
        if ( pEntity->m_MoveType.m_Value == MoveType_t::MOVETYPE_VPHYSICS )
        {
          v24 = CBaseEntity::EntityToWorldTransform(pEntity);
          v25 = *&v24->m_flMatVal[0][0];
          v26 = *&v24->m_flMatVal[1][0];
          v27 = *&v24->m_flMatVal[1][2];
          v28 = *&v24->m_flMatVal[2][0];
          v43 = *&v24->m_flMatVal[0][2];
          v29 = *&v24->m_flMatVal[2][2];
          v42 = v25;
          vptr_IPhysAggregateInstance = Aggregate->_vptr_IPhysAggregateInstance;
          v44 = v26;
          v45 = v27;
          v46 = v28;
          v47 = v29;
          vptr_IPhysAggregateInstance[35](
            Aggregate,
            v26,
            v28,
            v27,
            v25,
            vptr_IPhysAggregateInstance,
            v25,
            v43,
            v26,
            v27,
            v28,
            v29);
          if ( newVelocity != 0 )
            (*(Aggregate->_vptr_IPhysAggregateInstance + 8))(Aggregate);
        }
        else
        {
          v18 = (*(pEntity->m_CBodyComponent->m_pSceneNode->_vptr_CGameSceneNode + 9))(pEntity->m_CBodyComponent->m_pSceneNode);
          CPhysicsGameSystem::ForceUpdateIfKeyframed(
            g_pPhysicsGameSystem,
            v18,
            CPhysicsGameSystem::anim_update_t::UPDATE_ANIMATED_OBJECTS,
            1);
        }
      }
      if ( (*(pEntity->_vptr_IHandleEntity + 140))(pEntity) != 0 )
      {
        v11 = 0;
      }
      else
      {
        v10 = pEntity->m_pCollision;
        v11 = v10 == 0 || (*(v10->_vptr_ICollideable + 7))(v10) != 2;
      }
      v41 = v11;
      qmemcpy(v40, v34, sizeof(v40));
      vptr_INotify = g_pNotify->_vptr_INotify;
      v38 = v40;
      vptr_INotify[3](g_pNotify, pEntity, 0, &v38);
      if ( v36 != 0 )
        (*(pEntity->m_pCollision->_vptr_ICollideable + 17))(pEntity->m_pCollision);
      if ( v35 )
        CCollisionProperty::EnableTouchEvents(pEntity->m_pCollision);
      CBaseEntity::SetGroundEntity(pEntity, 0);
      ++i;
      ++v9;
    }
    while ( teleportList.m_Size > i );
    if ( teleportList.m_Size > 0 )
    {
      v19 = 0;
      v20 = 0;
      do
      {
        CBaseEntity::CollisionRulesChanged(teleportList.m_Memory.m_pMemory[v19].pEntity);
        ++v20;
        ++v19;
      }
      while ( teleportList.m_Size > v20 );
    }
  }
  if ( g_TeleportStack.m_Size > 0 )
  {
    v21 = g_TeleportStack.m_Size - 1;
    if ( m_Size != g_TeleportStack.m_Size - 1 )
    {
      g_TeleportStack.m_Memory.m_pMemory[m_Size] = g_TeleportStack.m_Memory.m_pMemory[v21];
      v21 = g_TeleportStack.m_Size - 1;
    }
    g_TeleportStack.m_Size = v21;
  }
  DataObject = CEntityIdentity::GetDataObject(this->m_pEntity, 2);
  if ( DataObject != 0 )
  {
    memset(DataObject, 0, 0xD0u);
    DataObject[52] = 0;
  }
  teleportList.m_Size = 0;
  if ( (teleportList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<TeleportListEntry_t,int>::Purge(&teleportList.m_Memory);
    if ( (teleportList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<TeleportListEntry_t,int>::Purge(&teleportList.m_Memory);
  }
}


// ConsoleFireTargets  (line 3867, @0x000000000215c140, libserver.so)  // inlines: FStrEq, GetDebugName
// calls: FireTargets, CEntityIdentity::GetDebugName, Msg
// callers: CC_Ent_FireTarget
// strings: "[%03d] Found: %s, firing\n"
void __fastcall ConsoleFireTargets(CBasePlayer *pPlayer, const char *name)
{
  __int64 v4; // rax
  __int64 v5; // r13
  const CEntityIdentity *v6; // rdi
  const char *DebugName; // rax

  if ( name != "" && *name != 0
    || (v4 = (*(pPlayer->_vptr_IHandleEntity + 531))(pPlayer), v5 = v4, v4 == 0)
    || ((v6 = *(v4 + 8))->m_flags & 0x200) != 0 )
  {
    FireTargets(name, pPlayer, pPlayer, USE_TOGGLE, 0.0);
  }
  else
  {
    DebugName = CEntityIdentity::GetDebugName(v6);
    Msg("[%03d] Found: %s, firing\n", gpGlobals->tickcount % 1000, DebugName);
    (*(*v5 + 864LL))(v5, pPlayer, pPlayer, 3, 0.0);
  }
}


// CC_Ent_FireTarget  (line 3903, @0x000000000215c210, libserver.so)  // inlines: Arg, operator[]
// calls: UTIL_GetCommandClient, ConsoleFireTargets
void __fastcall CC_Ent_FireTarget(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  CommandClient = UTIL_GetCommandClient();
  ConsoleFireTargets(CommandClient, v2);
}


// CEntFireAutoCompletionFunctor::CommandCallback  (line 3913, @0x000000000217ee60, libserver.so)  // inlines: Allocate, Allocate<QAngle>, Allocate<Quaternion>, Allocate<Vector2D>, AssignTo<CVariantDefaultAllocator>, CVariantBase, CopyData, CopyData<QAngle>, CopyData<Quaternion>, CopyData<Vector2D>, CopyData<Vector4D>, FStrEq, Free, SetInt, SetString, String, ToBasePlayer, ToCStr, V_strlen, _V_strcmp, atoi, memcpy, operator=, ~CVariantBase
// calls: UTIL_GetCommandClient, AllocPooledString, strtol, CServerEventQueue::AddEvent, AppIsDedicatedServer, UTIL_GetListenServerHost, strlen, memcpy, ClientPrint, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "point_servercommand", "Usage:\n   ent_fire <target> [action] [value] [delay]\n"
// globals: jpt_217EFE4
void __fastcall CEntFireAutoCompletionFunctor::CommandCallback(
        CEntFireAutoCompletionFunctor *const this,
        const CCommandContext *const a2,
        const CCommand *const command)
{
  CBasePlayer *CommandClient; // rax
  CBasePlayer *v5; // rbx
  const char *v6; // rsi
  char *v7; // r13
  char *v8; // r12
  const char *m_uint64; // r15
  bool v10; // cc
  int v11; // r14d
  int16 m_type; // ax
  _DWORD *v13; // r14
  _DWORD *v14; // rax
  const void *v15; // r14
  unsigned int v16; // r15d
  _DWORD *v17; // r14
  _DWORD *v18; // rax
  _DWORD *v19; // r14
  _DWORD *v20; // rax
  CBaseEntity *pCaller; // [rsp+0h] [rbp-80h]
  int v22; // [rsp+8h] [rbp-78h]
  float fireDelay; // [rsp+Ch] [rbp-74h]
  char *target; // [rsp+10h] [rbp-70h] BYREF
  char *targetInput; // [rsp+20h] [rbp-60h] BYREF
  variant_t value; // [rsp+30h] [rbp-50h]
  variant_t Value; // [rsp+40h] [rbp-40h] BYREF
  variant_t v28; // 0:rcx.8,8:r8d.4

  CommandClient = UTIL_GetCommandClient();
  v5 = CommandClient;
  if ( CommandClient == 0 || (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) == 0 )
    return;
  if ( command->m_nArgc <= 1 )
  {
    ClientPrint(v5, 2, "Usage:\n   ent_fire <target> [action] [value] [delay]\n", 0, 0, 0, 0);
    return;
  }
  v6 = command->m_ppArgv[1];
  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  AllocPooledString(&target, v6);
  if ( target != 0 )
  {
    v7 = target;
    if ( gpGlobals->maxClients > 1
      && (target == "point_servercommand" || strcmp(target, "point_servercommand") == 0)
      && (AppIsDedicatedServer() || v5 != UTIL_GetListenServerHost()) )
    {
      if ( (value.m_flags & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
      return;
    }
  }
  else
  {
    v7 = "";
  }
  if ( command->m_nArgc <= 2 )
  {
    v8 = "Use";
LABEL_33:
    v11 = 0;
    goto LABEL_18;
  }
  AllocPooledString(&targetInput, command->m_ppArgv[2]);
  v8 = "";
  if ( targetInput != 0 )
    v8 = targetInput;
  if ( command->m_nArgc <= 3 )
    goto LABEL_33;
  AllocPooledString(&Value, command->m_ppArgv[3]);
  m_uint64 = "";
  if ( Value.m_uint64 != 0 )
    m_uint64 = Value.m_uint64;
  if ( (value.m_flags & 1) != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    value.m_flags &= ~1u;
  }
  v10 = command->m_nArgc <= 4;
  value.m_uint64 = m_uint64;
  value.m_type = 30;
  if ( v10 )
    v11 = 0;
  else
    v11 = strtol(command->m_ppArgv[4], 0, 10);
LABEL_18:
  if ( v8 == "Use" || strcmp(v8, "Use") == 0 )
  {
    m_type = value.m_type;
    if ( value.m_type == 0 )
    {
      if ( (value.m_flags & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
        value.m_flags &= ~1u;
      }
      value.m_uint64 = 0;
      m_type = 5;
      value.m_type = 5;
      Value.m_flags = 0;
      fireDelay = v11;
LABEL_26:
      Value.m_type = m_type;
      Value.m_uint64 = value.m_uint64;
      goto LABEL_27;
    }
  }
  else
  {
    m_type = value.m_type;
  }
  Value.m_flags = 0;
  fireDelay = v11;
  switch ( m_type )
  {
    case 3:
      v13 = value.m_uint64;
      Value.m_uint64 = 0;
      Value.m_type = 3;
      goto LABEL_39;
    case 4:
      v17 = value.m_uint64;
      Value.m_uint64 = 0;
      Value.m_type = 4;
      goto LABEL_43;
    case 25:
      v19 = value.m_uint64;
      Value.m_uint64 = 0;
      Value.m_type = 25;
      v20 = (**g_pMemAlloc)(g_pMemAlloc, 8);
      Value.m_uint64 = v20;
      *v20 = *v19;
      v20[1] = v19[1];
      Value.m_flags |= 1u;
      break;
    case 27:
      v17 = value.m_uint64;
      Value.m_uint64 = 0;
      Value.m_type = 27;
LABEL_43:
      v18 = (**g_pMemAlloc)(g_pMemAlloc, 16);
      Value.m_uint64 = v18;
      *v18 = *v17;
      v18[1] = v17[1];
      v18[2] = v17[2];
      v18[3] = v17[3];
      Value.m_flags |= 1u;
      break;
    case 30:
      v15 = value.m_uint64;
      Value.m_uint64 = 0;
      Value.m_type = 30;
      if ( value.m_uint64 != 0 )
      {
        v16 = strlen(value.m_pszString) + 1;
        Value.m_uint64 = (**g_pMemAlloc)(g_pMemAlloc, v16);
        memcpy(Value.m_pData, v15, v16);
        Value.m_flags |= 1u;
      }
      break;
    case 39:
      v13 = value.m_uint64;
      Value.m_uint64 = 0;
      Value.m_type = 39;
LABEL_39:
      v14 = (**g_pMemAlloc)(g_pMemAlloc, 12);
      Value.m_uint64 = v14;
      *v14 = *v13;
      v14[1] = v13[1];
      v14[2] = v13[2];
      Value.m_flags |= 1u;
      break;
    default:
      goto LABEL_26;
  }
LABEL_27:
  LODWORD(pCaller) = 0;
  *&v28.m_type = v5;
  v28.m_uint64 = &Value;
  CServerEventQueue::AddEvent(&g_EventQueue, v7, v8, v28, fireDelay, v5, pCaller, v22);
  if ( (Value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, Value.m_uint64);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


// CEntFireAutoCompletionFunctor::CommandCompletionCallback  (line 3972, @0x0000000002184690, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlRBTree, CUtlString, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, CopyConstruct<CUtlString>, Destruct<CUtlString>, Element, EntFire_AutoCompleteInput, FindFirstEntityByName, First, FirstInorder, GetEntityIOInputs, GetEntityNameAsCStr, GrowMemory, IsIdxValid, IsValidIndex, LeftChild, Next, Purge, PurgeAndDeleteElements, RemoveAll, ResetDbgInfo, SetLeftChild, SetRightChild, SplitString, String, V_strlen, V_strncat<long unsigned int>, V_strncpy<long unsigned int>, V_strnicmp_fast<int>, _V_strcpy, _V_strstr, operator char const*, operator==, operator[], strcpy, strstr, ~CUtlMemory, ~CUtlRBTree, ~CUtlString, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: strstr, strlen, strchr, _V_strncat, EntityInstanceByNameIter_t::EntityInstanceByNameIter_t, EntityInstanceByNameIter_t::First, CEntityIdentity::GetEntityIOInputs, CUtlString::FreeMemoryBlock, _V_strnicmp_fast, CUtlString::Set, CUtlRBTree<CUtlString, short unsigned int, bool (*)(const CUtlString&, const CUtlString&), CUtlMemory<UtlRBTreeNode_t<CUtlString, short unsigned int>, short unsigned int> >::Find, CUtlRBTree<CUtlString, short unsigned int, bool (*)(const CUtlString&, const CUtlString&), CUtlMemory<UtlRBTreeNode_t<CUtlString, short unsigned int>, short unsigned int> >::Insert (31 total)
// strings: "%s %s %s", "\t\r\n "
// globals: UtlStringFastCaseInsensitiveLessFunc(CUtlString const&,CUtlString const&), UtlStringLessFunc(CUtlString const&,CUtlString const&)
int __fastcall CEntFireAutoCompletionFunctor::CommandCompletionCallback(
        CEntFireAutoCompletionFunctor *const this,
        const char *partial,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const commands)
{
  const char *pCommandName; // r12
  const char *v4; // rbx
  __int64 v6; // rax
  int v7; // r14d
  char *v8; // rax
  char *v9; // r13
  int v10; // r12d
  CEntityInstance *v11; // rax
  char *v12; // rdx
  char *v13; // r13
  CFmtStrN<256,false> *v14; // rbx
  const char *v15; // r12
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlString,short unsigned int> *m_pMemory; // rdx
  unsigned __int16 m_Left; // cx
  CUtlString *v19; // r12
  const char *v20; // rax
  const char *v21; // rax
  __int64 m_Size; // r12
  int v23; // eax
  int m_NumElements; // r12d
  unsigned __int16 index; // dx
  __int64 m_nAllocationCount; // rax
  __int64 v27; // rbx
  UtlRBTreeNode_t<CUtlString,short unsigned int> *v28; // rdi
  const char *v30; // rax
  const char *v31; // rax
  __int64 v32; // rbx
  int v33; // r12d
  const char *v34; // rsi
  const char *v35; // rax
  int v36; // ebx
  UtlRBTreeNode_t<CUtlString,short unsigned int> *v37; // rdx
  unsigned __int16 v38; // cx
  CUtlString *v39; // r12
  const char *v40; // rax
  const char *v41; // rax
  __int64 v42; // r12
  int v43; // eax
  __int64 v44; // r13
  int v45; // ebx
  char *v46; // rsi
  unsigned __int16 v47; // dx
  __int64 v48; // rax
  __int64 v49; // rbx
  UtlRBTreeNode_t<CUtlString,short unsigned int> *v50; // rax
  unsigned int nInputNameLength; // [rsp+18h] [rbp-5F8h]
  CFmtStrN<256,false> *v52; // [rsp+20h] [rbp-5F0h]
  const char *m_pAsString; // [rsp+20h] [rbp-5F0h]
  CEntityIdentity *pEntity; // [rsp+28h] [rbp-5E8h]
  CUtlString upperCaseSearchString; // [rsp+40h] [rbp-5D0h] BYREF
  CUtlString command; // [rsp+50h] [rbp-5C0h] BYREF
  CUtlStringList keywords; // [rsp+60h] [rbp-5B0h] BYREF
  CUtlRBTree<CUtlString,short unsigned int,bool (*)(const CUtlString&,const CUtlString&),CUtlMemory<UtlRBTreeNode_t<CUtlString,short unsigned int>,short unsigned int> > symbols; // [rsp+80h] [rbp-590h] BYREF
  CFmtStrN<256,false> targetEntity; // [rsp+C0h] [rbp-550h] BYREF
  char upperCasedEntityName[512]; // [rsp+1D0h] [rbp-440h] BYREF
  char buf[520]; // [rsp+3D0h] [rbp-240h] BYREF
  unsigned __int64 v63; // [rsp+5D8h] [rbp-38h]

  v63 = __readfsqword(0x28u);
  if ( g_pGameRules == 0 || g_pEntitySystem == 0 )
    return 0;
  pCommandName = this->pCommandName;
  v4 = partial;
  if ( strstr(partial, pCommandName) != 0 )
  {
    if ( pCommandName != 0 )
      v6 = strlen(pCommandName) + 1LL;
    else
      v6 = 1;
    v4 += v6;
  }
  if ( v4 != 0 )
    v7 = strlen(v4);
  else
    v7 = 0;
  v8 = strchr(v4, 32);
  v9 = v8;
  if ( v8 != 0 )
  {
    v10 = v8 - v4;
    LOBYTE(targetEntity._vptr_CFmtStrN) = 0;
    _V_strncat(&targetEntity, v4, 256, (v8 - v4));
    if ( LOBYTE(targetEntity._vptr_CFmtStrN) != 0 )
    {
      EntityInstanceByNameIter_t::EntityInstanceByNameIter_t(
        &symbols,
        &targetEntity,
        0,
        0,
        0,
        0,
        EntityIterType_t::ENTITY_ENUM_ITERATE_NON_DORMANT_ONLY);
      v11 = EntityInstanceByNameIter_t::First(&symbols);
      if ( v11 != 0 )
      {
        symbols.m_Root = -1;
        symbols.m_Elements.m_pMemory = 0;
        v12 = v9 + 1;
        v13 = 0;
        if ( v7 > v10 )
          v13 = v12;
        nInputNameLength = v7 - v10 - 1;
        symbols.m_Elements.m_nAllocationCount = 0;
        symbols.m_NumElements = 0;
        symbols.m_LessFunc = UtlStringFastCaseInsensitiveLessFunc;
        symbols.m_Elements.m_nGrowSize = 0;
        symbols.m_FirstFree = -1;
        symbols.m_LastAlloc.index = -1;
        symbols.m_pElements = 0;
        keywords.m_Size = 0;
        keywords.m_Memory.m_pMemory = 0;
        keywords.m_Memory.m_nAllocationCount = 0;
        keywords.m_Memory.m_nGrowSize = 0;
        CEntityIdentity::GetEntityIOInputs(v11->m_pEntity, &keywords);
        if ( keywords.m_Size > 0 )
        {
          v14 = 0;
          v52 = (8LL * (keywords.m_Size - 1) + 8);
          do
          {
            v15 = *(keywords.m_Memory.m_pMemory + v14);
            if ( v13 == 0 || _V_strnicmp_fast(v13, *(keywords.m_Memory.m_pMemory + v14), nInputNameLength) == 0 )
            {
              command.m_pString = 0;
              CUtlString::Set(&command, v15);
              if ( CUtlRBTree<CUtlString,unsigned short,bool (*)(CUtlString const&,CUtlString const&),CUtlMemory<UtlRBTreeNode_t<CUtlString,unsigned short>,unsigned short>>::Find(
                     &symbols,
                     &command) == 0xFFFF )
              {
                CUtlRBTree<CUtlString,unsigned short,bool (*)(CUtlString const&,CUtlString const&),CUtlMemory<UtlRBTreeNode_t<CUtlString,unsigned short>,unsigned short>>::Insert(
                  &symbols,
                  &command,
                  ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
                if ( symbols.m_NumElements > 0x3Fu )
                {
                  if ( command.m_pString != 0 )
                    CUtlString::FreeMemoryBlock(&command);
                  break;
                }
              }
              if ( command.m_pString != 0 )
                CUtlString::FreeMemoryBlock(&command);
            }
            v14 = (v14 + 8);
          }
          while ( v14 != v52 );
        }
        m_Root = symbols.m_Root;
        if ( symbols.m_Root != 0xFFFF )
        {
          m_pMemory = symbols.m_Elements.m_pMemory;
          m_Left = symbols.m_Elements.m_pMemory[symbols.m_Root].m_Left;
          if ( m_Left != 0xFFFF )
          {
            while ( symbols.m_Elements.m_pMemory[m_Left].m_Left != 0xFFFF )
              m_Left = symbols.m_Elements.m_pMemory[m_Left].m_Left;
            m_Root = m_Left;
          }
          if ( m_Root != 0xFFFF )
          {
            while ( 1 )
            {
              v21 = CUtlString::Get(&m_pMemory[m_Root].m_Data);
              _V_strncpy(buf, v21, 512);
              V_strlower_fast(buf);
              command.m_pString = 0;
              CFmtStrN<256,false>::CFmtStrN(upperCasedEntityName, "%s %s %s", this->pCommandName, &targetEntity, buf);
              CUtlString::operator=(&command, &upperCasedEntityName[9]);
              m_Size = commands->m_Size;
              v23 = commands->m_Size;
              if ( m_Size == commands->m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CUtlString,int>::Grow(&commands->m_Memory, 1);
                v23 = commands->m_Size;
              }
              commands->m_Size = v23 + 1;
              v19 = &commands->m_Memory.m_pMemory[m_Size];
              if ( v19 != 0 )
              {
                v19->m_pString = 0;
                v20 = CUtlString::Get(&command);
                CUtlString::Set(v19, v20);
              }
              if ( command.m_pString != 0 )
                CUtlString::FreeMemoryBlock(&command);
              m_Root = CUtlRBTree<CUtlString,unsigned short,bool (*)(CUtlString const&,CUtlString const&),CUtlMemory<UtlRBTreeNode_t<CUtlString,unsigned short>,unsigned short>>::NextInorder(
                         &symbols,
                         m_Root);
              if ( m_Root == 0xFFFF )
                break;
              m_pMemory = symbols.m_Elements.m_pMemory;
            }
          }
        }
        keywords.m_Size = 0;
        m_NumElements = symbols.m_NumElements;
        if ( (keywords.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<char const*,int>::Purge(&keywords.m_Memory);
          if ( (keywords.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<char const*,int>::Purge(&keywords.m_Memory);
        }
        index = symbols.m_LastAlloc.index;
        if ( symbols.m_LastAlloc.index != 0xFFFF )
        {
          m_nAllocationCount = symbols.m_Elements.m_nAllocationCount;
          v27 = 0;
          if ( symbols.m_Elements.m_nAllocationCount > 0 )
          {
            do
            {
              if ( v27 < m_nAllocationCount && v27 <= index )
              {
                v28 = &symbols.m_Elements.m_pMemory[v27];
                if ( v27 != v28->m_Left )
                {
                  if ( v28->m_Data.m_pString != 0 )
                  {
                    CUtlString::FreeMemoryBlock(&v28->m_Data);
                    v28 = &symbols.m_Elements.m_pMemory[v27];
                  }
                  v28->m_Right = symbols.m_FirstFree;
                  symbols.m_Elements.m_pMemory[v27].m_Left = v27;
                  index = symbols.m_LastAlloc.index;
                  symbols.m_FirstFree = v27;
                }
              }
              if ( v27 == index )
                break;
              m_nAllocationCount = symbols.m_Elements.m_nAllocationCount;
              if ( (v27 + 1) >= symbols.m_Elements.m_nAllocationCount )
                break;
              ++v27;
            }
            while ( v27 != 0xFFFF );
          }
          symbols.m_Root = -1;
          symbols.m_NumElements = 0;
        }
        symbols.m_FirstFree = -1;
        if ( (symbols.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<UtlRBTreeNode_t<CUtlString,unsigned short>,unsigned short>::Purge(&symbols.m_Elements);
          symbols.m_LastAlloc.index = -1;
          if ( (symbols.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<UtlRBTreeNode_t<CUtlString,unsigned short>,unsigned short>::Purge(&symbols.m_Elements);
        }
        return m_NumElements;
      }
    }
  }
  symbols.m_LessFunc = UtlStringLessFunc;
  symbols.m_Root = -1;
  symbols.m_NumElements = 0;
  symbols.m_FirstFree = -1;
  symbols.m_LastAlloc.index = -1;
  symbols.m_Elements.m_pMemory = 0;
  symbols.m_Elements.m_nAllocationCount = 0;
  symbols.m_Elements.m_nGrowSize = 0;
  symbols.m_pElements = 0;
  upperCaseSearchString.m_pString = 0;
  CUtlString::Set(&upperCaseSearchString, v4);
  CUtlString::TrimRight(&upperCaseSearchString, "\t\r\n ");
  CUtlString::ToUpperFast(&upperCaseSearchString);
  keywords.m_Size = 0;
  keywords.m_Memory.m_pMemory = 0;
  keywords.m_Memory.m_nAllocationCount = 0;
  keywords.m_Memory.m_nGrowSize = 0;
  v30 = CUtlString::Get(&upperCaseSearchString);
  V_SplitString(v30, " ", &keywords);
  pEntity = g_pEntitySystem->m_EntityList.m_pFirstActiveEntity;
  if ( pEntity == 0 )
    goto LABEL_78;
  while ( pEntity->m_name.u.m_Id != 0 )
  {
    m_pAsString = pEntity->m_name.u.m_pAsString;
    v31 = m_pAsString;
    if ( *m_pAsString != 0 )
      goto LABEL_64;
LABEL_61:
    pEntity = pEntity->m_pNext;
    if ( pEntity == 0 )
      goto LABEL_78;
  }
  m_pAsString = "";
  v31 = "";
  if ( asc_32DB004[2] == 0 )
    goto LABEL_61;
LABEL_64:
  __strcpy_chk(upperCasedEntityName, v31, 512);
  V_strupper_fast(upperCasedEntityName);
  if ( keywords.m_Size > 0 )
  {
    v32 = 0;
    v33 = 0;
    while ( 1 )
    {
      v34 = keywords.m_Memory.m_pMemory[v32];
      command.m_pString = 0;
      CUtlString::Set(&command, v34);
      v35 = CUtlString::Get(&command);
      if ( strstr(upperCasedEntityName, v35) == 0 )
        break;
      if ( command.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&command);
      ++v33;
      ++v32;
      if ( keywords.m_Size <= v33 )
        goto LABEL_72;
    }
    if ( command.m_pString == 0 )
      goto LABEL_61;
LABEL_71:
    CUtlString::FreeMemoryBlock(&command);
    goto LABEL_61;
  }
LABEL_72:
  command.m_pString = 0;
  CUtlString::Set(&command, m_pAsString);
  if ( CUtlRBTree<CUtlString,unsigned short,bool (*)(CUtlString const&,CUtlString const&),CUtlMemory<UtlRBTreeNode_t<CUtlString,unsigned short>,unsigned short>>::Find(
         &symbols,
         &command) != 0xFFFF
    || (CUtlRBTree<CUtlString,unsigned short,bool (*)(CUtlString const&,CUtlString const&),CUtlMemory<UtlRBTreeNode_t<CUtlString,unsigned short>,unsigned short>>::Insert(
          &symbols,
          &command,
          ERBTreeInsertBehavior::k_eInsertAssertAboutDupes),
        symbols.m_NumElements <= 0x3Fu) )
  {
    if ( command.m_pString == 0 )
      goto LABEL_61;
    goto LABEL_71;
  }
  if ( command.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&command);
LABEL_78:
  v36 = symbols.m_Root;
  if ( symbols.m_Root != 0xFFFF )
  {
    v37 = symbols.m_Elements.m_pMemory;
    v38 = symbols.m_Elements.m_pMemory[symbols.m_Root].m_Left;
    if ( v38 != 0xFFFF )
    {
      while ( symbols.m_Elements.m_pMemory[v38].m_Left != 0xFFFF )
        v38 = symbols.m_Elements.m_pMemory[v38].m_Left;
      v36 = v38;
    }
    if ( v36 != 0xFFFF )
    {
      while ( 1 )
      {
        v41 = CUtlString::Get(&v37[v36].m_Data);
        _V_strncpy(buf, v41, 512);
        V_strlower_fast(buf);
        command.m_pString = 0;
        CFmtStrN<256,false>::CFmtStrN(&targetEntity, "%s %s", this->pCommandName, buf);
        CUtlString::operator=(&command, targetEntity.m_szBuf);
        v42 = commands->m_Size;
        v43 = commands->m_Size;
        if ( v42 == commands->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CUtlString,int>::Grow(&commands->m_Memory, 1);
          v43 = commands->m_Size;
        }
        commands->m_Size = v43 + 1;
        v39 = &commands->m_Memory.m_pMemory[v42];
        if ( v39 != 0 )
        {
          v39->m_pString = 0;
          v40 = CUtlString::Get(&command);
          CUtlString::Set(v39, v40);
        }
        if ( command.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&command);
        v36 = CUtlRBTree<CUtlString,unsigned short,bool (*)(CUtlString const&,CUtlString const&),CUtlMemory<UtlRBTreeNode_t<CUtlString,unsigned short>,unsigned short>>::NextInorder(
                &symbols,
                v36);
        if ( v36 == 0xFFFF )
          break;
        v37 = symbols.m_Elements.m_pMemory;
      }
    }
  }
  m_NumElements = symbols.m_NumElements;
  if ( keywords.m_Size > 0 )
  {
    v44 = 0;
    v45 = 0;
    do
    {
      ++v45;
      v46 = keywords.m_Memory.m_pMemory[v44++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v46);
    }
    while ( v45 < keywords.m_Size );
  }
  keywords.m_Size = 0;
  if ( (keywords.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<char *,int>::Purge(&keywords.m_Memory);
    if ( (keywords.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&keywords.m_Memory);
  }
  if ( upperCaseSearchString.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&upperCaseSearchString);
  v47 = symbols.m_LastAlloc.index;
  if ( symbols.m_LastAlloc.index != 0xFFFF )
  {
    v48 = symbols.m_Elements.m_nAllocationCount;
    v49 = 0;
    if ( symbols.m_Elements.m_nAllocationCount > 0 )
    {
      do
      {
        if ( v49 < v48 && v49 <= v47 )
        {
          v50 = &symbols.m_Elements.m_pMemory[v49];
          if ( v49 != v50->m_Left )
          {
            if ( v50->m_Data.m_pString != 0 )
            {
              CUtlString::FreeMemoryBlock(&v50->m_Data);
              v50 = &symbols.m_Elements.m_pMemory[v49];
            }
            v50->m_Right = symbols.m_FirstFree;
            symbols.m_Elements.m_pMemory[v49].m_Left = v49;
            v47 = symbols.m_LastAlloc.index;
            symbols.m_FirstFree = v49;
          }
        }
        if ( v49 == v47 )
          break;
        v48 = symbols.m_Elements.m_nAllocationCount;
        if ( (v49 + 1) >= symbols.m_Elements.m_nAllocationCount )
          break;
        ++v49;
      }
      while ( v49 != 0xFFFF );
    }
    symbols.m_Root = -1;
    symbols.m_NumElements = 0;
  }
  symbols.m_FirstFree = -1;
  if ( (symbols.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlString,unsigned short>,unsigned short>::Purge(&symbols.m_Elements);
    symbols.m_LastAlloc.index = -1;
    if ( (symbols.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<CUtlString,unsigned short>,unsigned short>::Purge(&symbols.m_Elements);
  }
  return m_NumElements;
}


// CC_Ent_CancelPendingEntFires  (line 4135, @0x0000000002143250, libserver.so)  // inlines: ToBasePlayer
// calls: UTIL_GetCommandClient, CEntitySystem::CancelEntityIOEvents
void __fastcall CC_Ent_CancelPendingEntFires(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  CEntityInstance *v3; // rbx

  CommandClient = UTIL_GetCommandClient();
  v3 = CommandClient;
  if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0 )
    CEntitySystem::CancelEntityIOEvents(g_pEntitySystem, v3);
}


// CC_Ent_Info  (line 4147, @0x000000000216ad70, libserver.so)  // inlines: Arg, CUtlMemory, CUtlVector, CUtlVectorBase, GetEntityIOInputs, GetEntityIOOutputs, Purge, RemoveAll, ToBasePlayer, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: UTIL_GetCommandClient, CEntitySystem::CreateEntity, CEntityIdentity::GetEntityIOOutputs, UTIL_VarArgs, ClientPrint, CEntityIdentity::GetEntityIOInputs, CEntitySystem::DestroyEntityImmediate, CUtlMemory<char const*, int>::Purge, CUtlMemory<const EntityIOOutputDesc_t*, int>::Purge, _Unwind_Resume, CUtlVectorBase<char const*, CUtlMemory<char const*, int> >::~CUtlVectorBase
// strings: "  output: %s\n", "  input: %s\n", "no such entity %s\n", "Usage:\n   ent_info <class name>\n"
void __fastcall CC_Ent_Info(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  CBasePlayer *v4; // r12
  CEntityInstance *Entity; // r14
  CEntityIdentity *m_pEntity; // rdi
  unsigned __int64 v7; // rbx
  __int64 v8; // r13
  char *v9; // rax
  CEntityIdentity *v10; // rdi
  unsigned __int64 v11; // rbx
  __int64 v12; // r13
  char *v13; // rax
  const char *v14; // rsi
  char *v15; // rax
  CUtlVector<const EntityIOOutputDesc_t*,CUtlMemory<const EntityIOOutputDesc_t*,int> > outputs; // [rsp+20h] [rbp-70h] BYREF
  CUtlVector<char const*,CUtlMemory<char const*,int> > inputs; // [rsp+40h] [rbp-50h] BYREF

  CommandClient = UTIL_GetCommandClient();
  v4 = CommandClient;
  if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0 )
  {
    if ( args->m_nArgc <= 1 )
    {
      ClientPrint(v4, 2, "Usage:\n   ent_info <class name>\n", 0, 0, 0, 0);
      return;
    }
    Entity = CEntitySystem::CreateEntity(
               g_pEntitySystem,
               0,
               args->m_ppArgv[1],
               EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT,
               -1,
               -1,
               0,
               0);
    if ( Entity != 0 )
    {
      outputs.m_Memory.m_pMemory = 0;
      outputs.m_Memory.m_nAllocationCount = 0;
      outputs.m_Memory.m_nGrowSize = 0;
      m_pEntity = Entity->m_pEntity;
      outputs.m_Size = 0;
      CEntityIdentity::GetEntityIOOutputs(m_pEntity, &outputs);
      if ( outputs.m_Size > 0 )
      {
        v7 = 0;
        v8 = 8LL * (outputs.m_Size - 1) + 8;
        do
        {
          v9 = UTIL_VarArgs("  output: %s\n", outputs.m_Memory.m_pMemory[v7 / 8]->m_pName);
          ClientPrint(v4, 2, v9, 0, 0, 0, 0);
          v7 += 8LL;
        }
        while ( v7 != v8 );
      }
      inputs.m_Memory.m_pMemory = 0;
      inputs.m_Memory.m_nAllocationCount = 0;
      inputs.m_Memory.m_nGrowSize = 0;
      v10 = Entity->m_pEntity;
      inputs.m_Size = 0;
      CEntityIdentity::GetEntityIOInputs(v10, &inputs);
      if ( inputs.m_Size > 0 )
      {
        v11 = 0;
        v12 = 8LL * (inputs.m_Size - 1) + 8;
        do
        {
          v13 = UTIL_VarArgs("  input: %s\n", inputs.m_Memory.m_pMemory[v11 / 8]);
          ClientPrint(v4, 2, v13, 0, 0, 0, 0);
          v11 += 8LL;
        }
        while ( v11 != v12 );
      }
      CEntitySystem::DestroyEntityImmediate(g_pEntitySystem, Entity->m_pEntity);
      inputs.m_Size = 0;
      if ( (inputs.m_Memory.m_nGrowSize & 0xC0000000) != 0
        || (CUtlMemory<char const*,int>::Purge(&inputs.m_Memory), (inputs.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
      {
        outputs.m_Size = 0;
        if ( (outputs.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
          return;
      }
      else
      {
        CUtlMemory<char const*,int>::Purge(&inputs.m_Memory);
        outputs.m_Size = 0;
        if ( (outputs.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
          return;
      }
      CUtlMemory<EntityIOOutputDesc_t const*,int>::Purge(&outputs.m_Memory);
      if ( (outputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<EntityIOOutputDesc_t const*,int>::Purge(&outputs.m_Memory);
    }
    else
    {
      v14 = "";
      if ( args->m_nArgc > 1 )
        v14 = args->m_ppArgv[1];
      v15 = UTIL_VarArgs("no such entity %s\n", v14);
      ClientPrint(v4, 2, v15, 0, 0, 0, 0);
    }
  }
}


// CBaseEntity::CalcAbsoluteVelocity  (line 4194, @0x000000000215c250, libserver.so)  // inlines: GetAbsVelocity, GetForModify, NetworkStateChanged, RemoveEFlags, Set, VectorAdd, VectorRotate, operator!=, operator+, operator+=<Vector>, operator=
// calls: CBaseEntity::GetMoveParent, CBaseEntity::EntityToWorldTransform, VectorRotate
// callers: CBaseEntity::OnSave, CBaseEntity::GetVelocity, CBaseEntity::SetAbsVelocity, CBaseEntity::ApplyAbsVelocityImpulse, Script_GetPhysVelocity, CBaseEntity::GetAbsVelocity, CBreakableProp::Break, CBasePlayerAnimState::GetOuterAbsVelocity, ComputePushStartMatrix, CBaseEntity::IsInWorld, CBaseCombatCharacter::VPhysicsShadowCollision, CBasePlayer::CalcViewRoll (70 total)
void __fastcall CBaseEntity::CalcAbsoluteVelocity(CBaseEntity *const this)
{
  int m_iEFlags; // eax
  CBaseEntity *MoveParent; // r12
  matrix3x4_t *v4; // rax
  float x; // xmm0_4
  float y; // xmm1_4
  float z; // xmm2_4
  vec_t v8; // [rsp+4h] [rbp-1Ch]
  vec_t v9; // [rsp+8h] [rbp-18h]
  vec_t v10; // [rsp+Ch] [rbp-14h]

  m_iEFlags = this->m_iEFlags;
  if ( (m_iEFlags & 0x1000) != 0 )
  {
    BYTE1(m_iEFlags) &= ~0x10u;
    this->m_iEFlags = m_iEFlags;
    MoveParent = CBaseEntity::GetMoveParent(this);
    if ( MoveParent != 0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 444, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v4 = CBaseEntity::EntityToWorldTransform(MoveParent);
      VectorRotate(&this->m_vecVelocity.m_Value.x, v4, &this->m_vecAbsVelocity.m_Value.x);
      if ( (MoveParent->m_iEFlags & 0x1000) != 0 )
        CBaseEntity::CalcAbsoluteVelocity(MoveParent);
      x = this->m_vecAbsVelocity.m_Value.x;
      y = this->m_vecAbsVelocity.m_Value.y;
      z = this->m_vecAbsVelocity.m_Value.z;
      if ( x != (MoveParent->m_vecAbsVelocity.m_Value.x + x)
        || y != (MoveParent->m_vecAbsVelocity.m_Value.y + y)
        || z != (MoveParent->m_vecAbsVelocity.m_Value.z + z) )
      {
        v8 = MoveParent->m_vecAbsVelocity.m_Value.z + z;
        v9 = MoveParent->m_vecAbsVelocity.m_Value.y + y;
        v10 = MoveParent->m_vecAbsVelocity.m_Value.x + x;
        (*(this->_vptr_IHandleEntity + 22))(this, 444, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_vecAbsVelocity.m_Value.x = v10;
        this->m_vecAbsVelocity.m_Value.y = v9;
        this->m_vecAbsVelocity.m_Value.z = v8;
      }
    }
    else if ( this->m_vecVelocity.m_Value.x != this->m_vecAbsVelocity.m_Value.x
           || this->m_vecVelocity.m_Value.y != this->m_vecAbsVelocity.m_Value.y
           || this->m_vecVelocity.m_Value.z != this->m_vecAbsVelocity.m_Value.z )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 444, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_vecAbsVelocity.m_Value.x = this->m_vecVelocity.m_Value.x;
      this->m_vecAbsVelocity.m_Value.y = this->m_vecVelocity.m_Value.y;
      this->m_vecAbsVelocity.m_Value.z = this->m_vecVelocity.m_Value.z;
    }
  }
}


// CBaseEntity::ScriptSetLocalAngularVelocity  (line 4217, @0x000000000215db80, libserver.so)  // inlines: Init
// calls: CBaseEntity::SetLocalAngularVelocity
void __fastcall CBaseEntity::ScriptSetLocalAngularVelocity(
        CBaseEntity *const this,
        vec_t a2,
        vec_t pitchVel,
        vec_t yawVel,
        float rollVel)
{
  QAngle qa; // [rsp+0h] [rbp-10h] BYREF

  qa.x = a2;
  qa.y = pitchVel;
  qa.z = yawVel;
  CBaseEntity::SetLocalAngularVelocity(this, &qa);
}


// CBaseEntity::ScriptGetLocalAngularVelocity  (line 4226, @0x000000000215dbb0, libserver.so)
// calls: __cxa_guard_acquire, __cxa_guard_release
// globals: `guard variable for'CBaseEntity::ScriptGetLocalAngularVelocity(void)::v, CBaseEntity::ScriptGetLocalAngularVelocity(void)::v
const Vector *__fastcall CBaseEntity::ScriptGetLocalAngularVelocity(CBaseEntity *const this)
{
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  int v5; // eax
  QAngle m_vecAngVelocity; // 0:^4.12

  x = this->m_vecAngVelocity.x;
  y = this->m_vecAngVelocity.y;
  z = this->m_vecAngVelocity.z;
  if ( `guard variable for'CBaseEntity::ScriptGetLocalAngularVelocity(void)::v == 0 )
  {
    m_vecAngVelocity = this->m_vecAngVelocity;
    v5 = __cxa_guard_acquire(&`guard variable for'CBaseEntity::ScriptGetLocalAngularVelocity(void)::v);
    z = m_vecAngVelocity.z;
    y = m_vecAngVelocity.y;
    x = m_vecAngVelocity.x;
    if ( v5 != 0 )
    {
      __cxa_guard_release(&`guard variable for'CBaseEntity::ScriptGetLocalAngularVelocity(void)::v);
      x = m_vecAngVelocity.x;
      y = m_vecAngVelocity.y;
      z = m_vecAngVelocity.z;
    }
  }
  CBaseEntity::ScriptGetLocalAngularVelocity(void)::v.x = x;
  CBaseEntity::ScriptGetLocalAngularVelocity(void)::v.y = y;
  CBaseEntity::ScriptGetLocalAngularVelocity(void)::v.z = z;
  return &CBaseEntity::ScriptGetLocalAngularVelocity(void)::v;
}


// CBaseEntity::SetPredictionEligible  (line 4236, @0x000000000215dc50, libserver.so)
void __fastcall CBaseEntity::SetPredictionEligible(CBaseEntity *const this, bool canpredict)
{
  ;
}


// CBaseEntity::AddPoints  (line 4245, @0x000000000215dc60, libserver.so)  // inlines: ToBasePlayer
// calls: CBasePlayer::AddPoints
// callers: CGameScore::InputApplyScore, CGameScore::Use
void __fastcall CBaseEntity::AddPoints(CBaseEntity *const this, int score, bool bAllowNegativeScore)
{
  if ( this != 0 && (*(this->_vptr_IHandleEntity + 140))(this) != 0 )
    CBasePlayer::AddPoints(this, score, bAllowNegativeScore);
}


// CBaseEntity::AddPointsToTeam  (line 4254, @0x000000000215dcb0, libserver.so)  // inlines: ToBasePlayer
// calls: CBasePlayer::AddPointsToTeam
// callers: CGameScore::InputApplyScore, CGameScore::Use
void __fastcall CBaseEntity::AddPointsToTeam(CBaseEntity *const this, int score, bool bAllowNegativeScore)
{
  if ( this != 0 && (*(this->_vptr_IHandleEntity + 140))(this) != 0 )
    CBasePlayer::AddPointsToTeam(this, score, bAllowNegativeScore);
}


// CBaseEntity::ViewPunch  (line 4263, @0x000000000215dd00, libserver.so)  // inlines: GetBool, GetInt, ToBasePlayer, ViewPunch
// callers: CPhysExplosion::Explode, CTriggerImpact::StartTouch, UTIL_ViewPunch
void __fastcall CBaseEntity::ViewPunch(CBaseEntity *const this, const QAngle *const angleOffset)
{
  if ( this != 0
    && (*(this->_vptr_IHandleEntity + 140))(this, angleOffset) != 0
    && sv_suppress_viewpunch.m_pParent->m_Value.m_nValue == 0 )
  {
    (*(this->_vptr_IHandleEntity + 346))(this);
  }
}


// CBaseEntity::VelocityPunch  (line 4272, @0x000000000215dd50, libserver.so)  // inlines: ToBasePlayer
// calls: CBasePlayer::VelocityPunch
void __fastcall CBaseEntity::VelocityPunch(CBaseEntity *const this, const Vector *const vecForce)
{
  if ( this != 0 && (*(this->_vptr_IHandleEntity + 140))(this) != 0 )
    CBasePlayer::VelocityPunch(this, vecForce);
}


// CBaseEntity::RemoveAllDecals  (line 4286, @0x000000000215dd90, libserver.so)  // inlines: CEntityEventPosterBase, CEntityHandle, CEntityMessageRemoveAllDecals_t, CNetMessagePB, CSplitScreenSlot, CUserMessagePB, FindGameEvent<CEntityMessageRemoveAllDecals_t>, FindOrCreateGameEvent<CEntityMessageRemoveAllDecals_t>, GetEHandle, GetEntryIndex, GetSerialNumber, PostEntityEvent<CEntityMessageRemoveAllDecals_t>, Set, operator=, set_has_remove_decals, set_remove_decals, ~CEntityEventPosterBase, ~CEntityMessageRemoveAllDecals_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CEntityMessageRemoveAllDecals::CEntityMessageRemoveAllDecals, CEntityMessageRemoveAllDecals::~CEntityMessageRemoveAllDecals
// callers: CItem::Respawn
// globals: IGameEventSystem::FindOrCreateGameEvent<CEntityMessageRemoveAllDecals_t>(bool)::s_hEvent
void __fastcall CBaseEntity::RemoveAllDecals(CBaseEntity *const this)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v3; // cx
  __int64 v4; // r14
  IGameEventSystem *v5; // r12
  void (__fastcall *v6)(IGameEventSystem *, int *, __int64, _QWORD *, __int64, _QWORD); // r15
  unsigned int v7; // [rsp+Ch] [rbp-64h]
  int v8; // [rsp+10h] [rbp-60h] BYREF
  int v9; // [rsp+14h] [rbp-5Ch]
  _QWORD v10[2]; // [rsp+18h] [rbp-58h] BYREF
  int v11; // [rsp+28h] [rbp-48h]
  char v12; // [rsp+30h] [rbp-40h]
  int v13; // [rsp+38h] [rbp-38h]

  v8 = -1;
  v9 = -1;
  CEntityMessageRemoveAllDecals::CEntityMessageRemoveAllDecals(v10);
  v10[0] = off_4000190;
  v13 = 0;
  if ( this != 0 && (m_pEntity = this->m_pEntity) != 0 )
  {
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v3 = 0x7FFF;
    else
      v3 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v8 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v3 & 0x7FFF;
  }
  else
  {
    v8 = -1;
  }
  v12 = 1;
  v11 |= 1u;
  v4 = IGameEventSystem::FindOrCreateGameEvent<CEntityMessageRemoveAllDecals_t>(bool)::s_hEvent;
  v5 = g_pGameEventSystem;
  v7 = v9;
  v6 = *(*g_pGameEventSystem + 136LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CEntityMessageRemoveAllDecals_t>(bool)::s_hEvent);
  v6(v5, &v8, v4, v10, 32, v7);
  v10[0] = &off_4000010;
  CEntityMessageRemoveAllDecals::~CEntityMessageRemoveAllDecals(v10);
}


// CBaseEntity::AppendContextToCriteria  (line 4298, @0x000000000216b0f0, libserver.so)
// calls: CBaseEntity::RemoveExpiredConcepts, CResponseCriteriaSet::AppendCriteria, CBaseEntity::GetContextName, CBaseEntity::GetContextValue, V_snprintf, __stack_chk_fail
// callers: CBaseEntity::ModifyOrAppendCriteria
void __fastcall CBaseEntity::AppendContextToCriteria(
        CBaseEntity *const this,
        CResponseCriteriaSet *const set,
        const char *prefix)
{
  int v5; // ebx
  int m_Size; // r14d
  const char *ContextName; // r15
  const char *ContextValue; // rax
  const char *value; // [rsp+10h] [rbp-D0h]
  char sz[136]; // [rsp+20h] [rbp-C0h] BYREF
  unsigned __int64 v12; // [rsp+A8h] [rbp-38h]

  v5 = 0;
  v12 = __readfsqword(0x28u);
  CBaseEntity::RemoveExpiredConcepts(this);
  m_Size = this->m_ResponseContexts.m_Size;
  if ( m_Size > 0 )
  {
    do
    {
      while ( 1 )
      {
        ContextName = CBaseEntity::GetContextName(this, v5);
        ContextValue = CBaseEntity::GetContextValue(this, v5);
        if ( prefix != 0 && *prefix != 0 )
          break;
        ++v5;
        CResponseCriteriaSet::AppendCriteria(set, ContextName, ContextValue, 1.0);
        if ( v5 == m_Size )
          return;
      }
      value = ContextValue;
      ++v5;
      V_snprintf(sz, 128, "%s%s", prefix, ContextName);
      CResponseCriteriaSet::AppendCriteria(set, sz, value, 1.0);
    }
    while ( v5 != m_Size );
  }
}


// CBaseEntity::RemoveExpiredConcepts  (line 4327, @0x000000000216b090, libserver.so)
// calls: CBaseEntity::ContextExpired, CUtlVectorBase<ResponseContext_t, CUtlMemory<ResponseContext_t, int> >::Remove
// callers: CBaseEntity::AppendContextToCriteria
void __fastcall CBaseEntity::RemoveExpiredConcepts(CBaseEntity *const this)
{
  CUtlVector<ResponseContext_t,CUtlMemory<ResponseContext_t,int> > *p_m_ResponseContexts; // r14
  int v3; // ebx
  int m_Size; // r12d

  p_m_ResponseContexts = &this->m_ResponseContexts;
  v3 = 0;
  m_Size = this->m_ResponseContexts.m_Size;
  if ( m_Size > 0 )
  {
    do
    {
      while ( !CBaseEntity::ContextExpired(this, v3) )
      {
        if ( m_Size <= ++v3 )
          return;
      }
      CUtlVectorBase<ResponseContext_t,CUtlMemory<ResponseContext_t,int>>::Remove(p_m_ResponseContexts, v3);
      --m_Size;
    }
    while ( m_Size > v3 );
  }
}


// CBaseEntity::GetContextCount  (line 4348, @0x000000000215ded0, libserver.so)
// callers: CBaseEntity::DrawDebugTextOverlays
int __fastcall CBaseEntity::GetContextCount(const CBaseEntity *const this)
{
  return this->m_ResponseContexts.m_Size;
}


// CBaseEntity::GetContextName  (line 4358, @0x000000000215dee0, libserver.so)  // inlines: String, ToCStr, operator[]
// callers: CBaseEntity::DrawDebugTextOverlays, CBaseEntity::FindContextByName, CBaseEntity::AppendContextToCriteria
const char *__fastcall CBaseEntity::GetContextName(const CBaseEntity *const this, int index)
{
  const char *result; // rax
  ResponseContext_t *v3; // rdx

  result = "";
  if ( index >= 0 && index < this->m_ResponseContexts.m_Size )
  {
    v3 = &this->m_ResponseContexts.m_Memory.m_pMemory[index];
    if ( v3->m_iszName.u.m_Id != 0 )
      return v3->m_iszName.u.m_Id;
  }
  return result;
}


// CBaseEntity::GetContextValue  (line 4374, @0x000000000215df20, libserver.so)  // inlines: String, ToCStr, operator[]
// callers: CBaseEntity::DrawDebugTextOverlays, CBaseEntity::GetContextForScript, CBaseEntity::AppendContextToCriteria, CFilterContext::PassesFilterImpl
const char *__fastcall CBaseEntity::GetContextValue(const CBaseEntity *const this, int index)
{
  const char *result; // rax
  ResponseContext_t *v3; // rdx

  result = "";
  if ( index >= 0 && index < this->m_ResponseContexts.m_Size )
  {
    v3 = &this->m_ResponseContexts.m_Memory.m_pMemory[index];
    if ( v3->m_iszValue.u.m_Id != 0 )
      return v3->m_iszValue.u.m_pAsString;
  }
  return result;
}


// CBaseEntity::GetContextForScript  (line 4389, @0x000000000215e080, libserver.so)  // inlines: CVariantBase, CopyData, V_AppearsToBeANumber
// calls: CBaseEntity::FindContextByName, CBaseEntity::GetContextValue, V_strtod, V_atof
__int64 __fastcall CBaseEntity::GetContextForScript(__int64 a1, const CBaseEntity *const this, const char *name)
{
  int ContextByName; // eax
  const char *ContextValue; // r12
  double v7; // xmm0_8
  float v8; // xmm0_4
  const char *v10; // [rsp+8h] [rbp-18h] BYREF

  if ( name != 0 && (ContextByName = CBaseEntity::FindContextByName(this, name)) >= 0 )
  {
    v10 = 0;
    ContextValue = CBaseEntity::GetContextValue(this, ContextByName);
    V_strtod(ContextValue, &v10);
    if ( v10 != 0 && ContextValue != v10 || v7 != 0.0 )
    {
      v8 = V_atof(ContextValue);
      *(a1 + 8) = 1;
      *(a1 + 10) = 0;
      *a1 = v8;
      return a1;
    }
    *a1 = ContextValue;
    *(a1 + 8) = 30;
  }
  else
  {
    *a1 = 0;
    *(a1 + 8) = 0;
    *(a1 + 10) = 0;
  }
  return a1;
}


// CBaseEntity::ClearAllContexts  (line 4414, @0x00000000021422b0, libserver.so)  // inlines: RemoveAll
void __fastcall CBaseEntity::ClearAllContexts(CBaseEntity *const this)
{
  this->m_ResponseContexts.m_Size = 0;
}


// CBaseEntity::ContextExpired  (line 4424, @0x000000000215df60, libserver.so)  // inlines: curtime, operator[]
// callers: CBaseEntity::RemoveExpiredConcepts
bool __fastcall CBaseEntity::ContextExpired(const CBaseEntity *const this, int index)
{
  bool result; // al
  float m_flCurrentTime; // xmm1_4
  float m_fExpirationTime; // xmm0_4
  CGlobalVars *v5; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v7; // [rsp+Ch] [rbp-14h]

  result = 1;
  if ( index >= 0 && index < this->m_ResponseContexts.m_Size )
  {
    m_flCurrentTime = 0.0;
    m_fExpirationTime = this->m_ResponseContexts.m_Memory.m_pMemory[index].m_fExpirationTime;
    result = 0;
    if ( m_fExpirationTime != 0.0 )
    {
      v5 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
          {
            v7 = this->m_ResponseContexts.m_Memory.m_pMemory[index].m_fExpirationTime;
            m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
            m_fExpirationTime = v7;
          }
        }
        m_flCurrentTime = v5->m_flCurrentTime;
      }
      return m_flCurrentTime >= m_fExpirationTime;
    }
  }
  return result;
}


// CBaseEntity::FindContextByName  (line 4446, @0x000000000215e000, libserver.so)  // inlines: FStrEq, _V_strcmp
// calls: strcmp, CBaseEntity::GetContextName
// callers: CBaseEntity::GetContextForScript, CBaseEntity::RemoveContext, CBaseEntity::AddContext, CFilterContext::PassesFilterImpl
int __fastcall CBaseEntity::FindContextByName(const CBaseEntity *const this, const char *name)
{
  int result; // eax
  int m_Size; // r14d
  int i; // ebx
  const char *ContextName; // rax

  result = -1;
  m_Size = this->m_ResponseContexts.m_Size;
  if ( m_Size > 0 )
  {
    for ( i = 0; i != m_Size; ++i )
    {
      ContextName = CBaseEntity::GetContextName(this, i);
      if ( ContextName == name || strcmp(name, ContextName) == 0 )
        return i;
    }
    return -1;
  }
  return result;
}


// CBaseEntity::InputAddContext  (line 4460, @0x0000000002149ae0, libserver.so)  // inlines: AssignTo, TempString, ToString
// calls: V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_2149B11, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CBaseEntity::InputAddContext(CBaseEntity *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  const char *m_pszString; // rsi
  const char *v5; // rax
  const char *v6; // rcx
  double m_float; // xmm0_8

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
  (*(this->_vptr_IHandleEntity + 81))(this, m_pszString);
}


// CBaseEntity::InputFireUser1  (line 4478, @0x000000000216c120, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CBaseEntity::InputFireUser1(CBaseEntity *const this, inputdata_t *const inputdata)
{
  CBaseEntity *pActivator; // rsi
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  value.m_type = 0;
  pActivator = inputdata->pActivator;
  value.m_uint64 = 0;
  value.m_flags = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnUser1, pActivator, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


// CBaseEntity::InputFireUser2  (line 4485, @0x000000000216c1a0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CBaseEntity::InputFireUser2(CBaseEntity *const this, inputdata_t *const inputdata)
{
  CBaseEntity *pActivator; // rsi
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  value.m_type = 0;
  pActivator = inputdata->pActivator;
  value.m_uint64 = 0;
  value.m_flags = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnUser2, pActivator, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


// CBaseEntity::InputFireUser3  (line 4492, @0x000000000216c0a0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CBaseEntity::InputFireUser3(CBaseEntity *const this, inputdata_t *const inputdata)
{
  CBaseEntity *pActivator; // rsi
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  value.m_type = 0;
  pActivator = inputdata->pActivator;
  value.m_uint64 = 0;
  value.m_flags = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnUser3, pActivator, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


// CBaseEntity::InputFireUser4  (line 4499, @0x000000000216c220, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CBaseEntity::InputFireUser4(CBaseEntity *const this, inputdata_t *const inputdata)
{
  CBaseEntity *pActivator; // rsi
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  value.m_type = 0;
  pActivator = inputdata->pActivator;
  value.m_flags = 0;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnUser4, pActivator, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


// CBaseEntity::ScriptGetMoveParent  (line 4505, @0x000000000215e150, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, ToHScript
// calls: CBaseEntity::GetMoveParent, CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall CBaseEntity::ScriptGetMoveParent(CBaseEntity *const this)
{
  CBaseEntity *MoveParent; // rax
  CBaseEntity *v3; // [rsp+8h] [rbp-8h]

  MoveParent = CBaseEntity::GetMoveParent(this);
  if ( MoveParent == 0 )
    return 0;
  if ( MoveParent->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return MoveParent->m_pEntity->m_hPublicScope.m_hScope;
  v3 = MoveParent;
  CEntityInstance::CreatePublicScriptScope(MoveParent, 0);
  return v3->m_pEntity->m_hPublicScope.m_hScope;
}


// CBaseEntity::ScriptGetRootMoveParent  (line 4512, @0x000000000215e1a0, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, ToHScript
// calls: CBaseEntity::GetRootMoveParent, CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall CBaseEntity::ScriptGetRootMoveParent(CBaseEntity *const this)
{
  CBaseEntity *RootMoveParent; // rax
  CBaseEntity *v3; // [rsp+8h] [rbp-8h]

  RootMoveParent = CBaseEntity::GetRootMoveParent(this);
  if ( RootMoveParent == 0 )
    return 0;
  if ( RootMoveParent->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return RootMoveParent->m_pEntity->m_hPublicScope.m_hScope;
  v3 = RootMoveParent;
  CEntityInstance::CreatePublicScriptScope(RootMoveParent, 0);
  return v3->m_pEntity->m_hPublicScope.m_hScope;
}


// CBaseEntity::ScriptFirstMoveChild  (line 4519, @0x000000000215e1f0, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, ToHScript
// calls: CBaseEntity::FirstMoveChild, CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall CBaseEntity::ScriptFirstMoveChild(CBaseEntity *const this)
{
  CBaseEntity *MoveChild; // rax
  CBaseEntity *v3; // [rsp+8h] [rbp-8h]

  MoveChild = CBaseEntity::FirstMoveChild(this);
  if ( MoveChild == 0 )
    return 0;
  if ( MoveChild->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return MoveChild->m_pEntity->m_hPublicScope.m_hScope;
  v3 = MoveChild;
  CEntityInstance::CreatePublicScriptScope(MoveChild, 0);
  return v3->m_pEntity->m_hPublicScope.m_hScope;
}


// CBaseEntity::ScriptNextMovePeer  (line 4526, @0x000000000215e240, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, ToHScript
// calls: CBaseEntity::NextMovePeer, CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall CBaseEntity::ScriptNextMovePeer(CBaseEntity *const this)
{
  CBaseEntity *MovePeer; // rax
  CBaseEntity *v3; // [rsp+8h] [rbp-8h]

  MovePeer = CBaseEntity::NextMovePeer(this);
  if ( MovePeer == 0 )
    return 0;
  if ( MovePeer->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return MovePeer->m_pEntity->m_hPublicScope.m_hScope;
  v3 = MovePeer;
  CEntityInstance::CreatePublicScriptScope(MovePeer, 0);
  return v3->m_pEntity->m_hPublicScope.m_hScope;
}


// CBaseEntity::ScriptGetOwnerEntity  (line 4533, @0x000000000215e290, libserver.so)  // inlines: CEntityHandle, EntityToHScript, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetPublicScriptScope, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToHScript
// calls: CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall CBaseEntity::ScriptGetOwnerEntity(CBaseEntity *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  HSCRIPT result; // rax
  CEntityInstance *m_pInstance; // rbx

  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  if ( v3 + 2 <= 1 )
    return 0;
  v4 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9];
  if ( v4 == 0 )
    return 0;
  v5 = &v4[v2 & 0x1FF];
  if ( v5 == 0 || v3 != v5->m_EHandle.m_Index )
    return 0;
  m_pInstance = v5->m_pInstance;
  result = 0;
  if ( v5->m_pInstance != 0 )
  {
    result = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
    if ( result == 0 )
    {
      CEntityInstance::CreatePublicScriptScope(v5->m_pInstance, 0);
      return m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
    }
  }
  return result;
}


// CBaseEntity::Script_GetChildren  (line 4540, @0x000000000216bd30, libserver.so)  // inlines: AssignTo, CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, EntityToHScript, Free, Get, Get<HSCRIPT__*>, GetPublicScriptScope, Purge, RemoveAll, ToHScript, VariantFieldTypeName, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase
// calls: CBaseEntity::GetAllChildren, CEntityInstance::CreatePublicScriptScope, Warning, CUtlMemory<CBaseEntity*, int>::Purge, CVariantBase<CVariantDefaultAllocator>::Free, CUtlVectorBase<CBaseEntity*, CUtlMemory<CBaseEntity*, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "js_raw_args", "No free conversion of %s variant to HSCRIPT right now\n", "quaternion", "boolean", "character", "vector2d" (20 total)
// globals: jpt_216BF30
HSCRIPT __fastcall CBaseEntity::Script_GetChildren(CBaseEntity *const this)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // r15
  CBaseEntity *v5; // r12
  IScriptVM *v6; // rdi
  void (__fastcall *v7)(IScriptVM *, uint64, HSCRIPT *); // r13
  HSCRIPT m_hScope; // rax
  HSCRIPT m_uint64; // rbx
  const char *v11; // rsi
  ScriptVariant_t returnArray; // [rsp+20h] [rbp-70h] BYREF
  HSCRIPT v13; // [rsp+30h] [rbp-60h] BYREF
  __int16 v14; // [rsp+38h] [rbp-58h]
  __int16 v15; // [rsp+3Ah] [rbp-56h]
  CUtlVector<CBaseEntity*,CUtlMemory<CBaseEntity*,int> > children; // [rsp+40h] [rbp-50h] BYREF

  returnArray.m_type = 0;
  returnArray.m_flags = 0;
  returnArray.m_uint64 = 0;
  (*(*g_pScriptVM + 360LL))(g_pScriptVM, &returnArray);
  children.m_Size = 0;
  children.m_Memory.m_pMemory = 0;
  children.m_Memory.m_nAllocationCount = 0;
  children.m_Memory.m_nGrowSize = 0;
  CBaseEntity::GetAllChildren(this, &children);
  if ( children.m_Size > 0 )
  {
    v2 = (children.m_Size - 1);
    v3 = 8LL * v2;
    v4 = 8 * (v2 - v2) - 8;
    do
    {
      v5 = children.m_Memory.m_pMemory[v3 / 8];
      if ( v5 != 0 )
      {
        v6 = g_pScriptVM;
        v7 = *(*g_pScriptVM + 384LL);
        m_hScope = v5->m_pEntity->m_hPublicScope.m_hScope;
        if ( m_hScope == 0 )
        {
          CEntityInstance::CreatePublicScriptScope(children.m_Memory.m_pMemory[v3 / 8], 0);
          v6 = g_pScriptVM;
          m_hScope = v5->m_pEntity->m_hPublicScope.m_hScope;
        }
        v14 = 31;
        v15 = 0;
        v13 = m_hScope;
        v7(v6, returnArray.m_uint64, &v13);
        if ( (v15 & 1) != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v13);
      }
      v3 -= 8LL;
    }
    while ( v3 != v4 );
  }
  m_uint64 = returnArray.m_uint64;
  if ( returnArray.m_type == 0 )
  {
LABEL_17:
    m_uint64 = 0;
    children.m_Size = 0;
    if ( (children.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      goto LABEL_12;
    goto LABEL_18;
  }
  if ( returnArray.m_type != 31 )
  {
    switch ( returnArray.m_type )
    {
      case 1:
        v11 = "float";
        break;
      case 3:
        v11 = "vector";
        break;
      case 4:
        v11 = "quaternion";
        break;
      case 5:
        v11 = "integer";
        break;
      case 6:
        v11 = "boolean";
        break;
      case 8:
        v11 = "character";
        break;
      case 9:
        v11 = "color";
        break;
      case 0xD:
        v11 = "ehandle";
        break;
      case 0x19:
        v11 = "vector2d";
        break;
      case 0x1A:
        v11 = "int64";
        break;
      case 0x1B:
        v11 = "vector4d";
        break;
      case 0x1C:
        v11 = "resourcehandle";
        break;
      case 0x1E:
        v11 = "cstring";
        break;
      case 0x20:
        v11 = "variant";
        break;
      case 0x21:
        v11 = "uint64";
        break;
      case 0x22:
        v11 = "float64";
        break;
      case 0x25:
        v11 = "unsigned";
        break;
      case 0x26:
        v11 = "utlstringtoken";
        break;
      case 0x27:
        v11 = "qangle";
        break;
      case 0x30:
        v11 = "hscript_lightbinding";
        break;
      case 0x31:
        v11 = "js_value";
        break;
      case 0x32:
        v11 = "js_object";
        break;
      case 0x33:
        v11 = "js_array";
        break;
      case 0x34:
        v11 = "js_raw_args";
        break;
      default:
        v11 = "unknown_variant_type";
        break;
    }
    Warning("No free conversion of %s variant to HSCRIPT right now\n", v11);
    goto LABEL_17;
  }
  children.m_Size = 0;
  if ( (children.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
LABEL_18:
    CUtlMemory<CBaseEntity *,int>::Purge(&children.m_Memory);
    if ( (children.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CBaseEntity *,int>::Purge(&children.m_Memory);
  }
LABEL_12:
  if ( (returnArray.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, returnArray.m_uint64);
  return m_uint64;
}


// CBaseEntity::ScriptSetParent  (line 4562, @0x000000000215e370, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, MakeStringToken, ToEnt
// calls: GetScriptDesc<CEntityInstance>, CBaseEntity::SetParent, MurmurHash2LowerCase, RegisterStringToken
void __fastcall CBaseEntity::ScriptSetParent(CBaseEntity *const this, HSCRIPT hParent, const char *pAttachmentName)
{
  __int64 (__fastcall *v6)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *Script; // rax
  CBaseEntity *v8; // r12
  CUtlStringToken v9; // edx
  uint32 v10; // eax
  uint32 v11; // [rsp+Ch] [rbp-34h]

  if ( hParent != 0 )
  {
    v6 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v8 = v6(g_pScriptVM, hParent, Script);
  }
  else
  {
    v8 = 0;
  }
  v9.m_nHashCode = 0;
  if ( pAttachmentName != 0 && *pAttachmentName != 0 )
  {
    v10 = MurmurHash2LowerCase(pAttachmentName, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      v11 = v10;
      RegisterStringToken(v10, pAttachmentName, 0, 1);
      v9.m_nHashCode = v11;
    }
    else
    {
      v9.m_nHashCode = v10;
    }
  }
  CBaseEntity::SetParent(this, v8, v9, 0);
}


// CBaseEntity::ScriptSetConstraint  (line 4569, @0x000000000215e440, libserver.so)
void __fastcall CBaseEntity::ScriptSetConstraint(CBaseEntity *const this)
{
  ;
}


// CBaseEntity::RemoveContext  (line 4589, @0x000000000216b220, libserver.so)
// calls: CBaseEntity::FindContextByName, CUtlVectorBase<ResponseContext_t, CUtlMemory<ResponseContext_t, int> >::Remove
void __fastcall CBaseEntity::RemoveContext(CBaseEntity *const this, const char *name)
{
  int ContextByName; // eax

  ContextByName = CBaseEntity::FindContextByName(this, name);
  if ( ContextByName != -1 )
    CUtlVectorBase<ResponseContext_t,CUtlMemory<ResponseContext_t,int>>::Remove(
      &this->m_ResponseContexts,
      ContextByName);
}


// CBaseEntity::AddContext  (line 4604, @0x0000000002174e60, libserver.so)  // inlines: curtime
// calls: CBaseEntity::AddContext, SplitContext, __stack_chk_fail
void __fastcall CBaseEntity::AddContext(CBaseEntity *const this, const char *contextName)
{
  const char *v4; // r15
  const char *v5; // rax
  float v6; // xmm0_4
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v8; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rcx
  CGlobalVars *v10; // [rsp+10h] [rbp-160h]
  float expirationTime; // [rsp+2Ch] [rbp-144h] BYREF
  char key[128]; // [rsp+30h] [rbp-140h] BYREF
  char value[136]; // [rsp+B0h] [rbp-C0h] BYREF
  unsigned __int64 v14; // [rsp+138h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  if ( contextName != 0 )
  {
    v4 = contextName;
    do
    {
      expirationTime = 0.0;
      v5 = SplitContext(v4, key, 128, value, 128, &expirationTime, contextName);
      v6 = expirationTime;
      v4 = v5;
      if ( expirationTime != 0.0 )
      {
        m_flCurrentTime = 0.0;
        v8 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
            if ( m_pfnWarningFunc != 0 )
            {
              v10 = gpGlobals;
              (m_pfnWarningFunc)(1, expirationTime, 0.0);
              v8 = v10;
              v6 = expirationTime;
            }
          }
          m_flCurrentTime = v8->m_flCurrentTime;
        }
        v6 = v6 + m_flCurrentTime;
        expirationTime = v6;
      }
      CBaseEntity::AddContext(this, key, value, v6);
    }
    while ( v4 != 0 );
  }
}


// CBaseEntity::AddContext  (line 4668, @0x0000000002174c10, libserver.so)  // inlines: AddToTail, CUtlSymbolLarge, CopyConstruct<ResponseContext_t>, Element, GrowMemory, ResponseContext_t, String, ToCStr, operator=, operator[]
// calls: CBaseEntity::FindContextByName, RR::CApplyContextOperator::FindOperator, AllocPooledString, Warning, CUtlMemory<ResponseContext_t, int>::Grow, __stack_chk_fail
// callers: CBaseEntity::AddContext, CBaseEntity::AddContextForScript
// strings: "RR: could not apply operator %s to prior value %s\n"
void __fastcall CBaseEntity::AddContext(
        CBaseEntity *const this,
        const char *pKey,
        const char *pValue,
        float expirationTime)
{
  int ContextByName; // eax
  __int64 v8; // r13
  RR::CApplyContextOperator *v9; // rax
  const char *v10; // rsi
  __int64 v11; // r13
  char *v12; // rdx
  const char *v13; // rdx
  char *v14; // rax
  UtlSymLargeId_t v15; // r13
  RR::CApplyContextOperator *Operator; // rax
  UtlSymLargeId_t v17; // r14
  __int64 m_Size; // r12
  int v19; // eax
  ResponseContext_t *v20; // rax
  _QWORD v22[2]; // [rsp+10h] [rbp-90h] BYREF
  char buf[72]; // [rsp+20h] [rbp-80h] BYREF
  unsigned __int64 v24; // [rsp+68h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  ContextByName = CBaseEntity::FindContextByName(this, pKey);
  if ( ContextByName == -1 )
  {
    AllocPooledString(v22, pKey);
    v15 = v22[0];
    Operator = RR::CApplyContextOperator::FindOperator(pValue);
    if ( (*Operator->_vptr_CApplyContextOperator)(Operator, 0, pValue, buf, 64) != 0 )
      AllocPooledString(v22, buf);
    else
      AllocPooledString(v22, pValue);
    v17 = v22[0];
    m_Size = this->m_ResponseContexts.m_Size;
    v19 = this->m_ResponseContexts.m_Size;
    if ( m_Size == this->m_ResponseContexts.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<ResponseContext_t,int>::Grow(&this->m_ResponseContexts.m_Memory, 1);
      v19 = this->m_ResponseContexts.m_Size;
    }
    this->m_ResponseContexts.m_Size = v19 + 1;
    v20 = &this->m_ResponseContexts.m_Memory.m_pMemory[m_Size];
    if ( v20 != 0 )
    {
      v20->m_iszName.u.m_Id = v15;
      v20->m_iszValue.u.m_Id = v17;
      v20->m_fExpirationTime = expirationTime;
    }
  }
  else
  {
    v8 = 3LL * ContextByName;
    v9 = RR::CApplyContextOperator::FindOperator(pValue);
    v10 = "";
    v11 = 8 * v8;
    v12 = this->m_ResponseContexts.m_Memory.m_pMemory + v11;
    if ( *(v12 + 1) != 0 )
      v10 = *(v12 + 1);
    if ( (*v9->_vptr_CApplyContextOperator)(v9, v10, pValue, buf, 64) != 0 )
    {
      AllocPooledString(v22, buf);
      *(&this->m_ResponseContexts.m_Memory.m_pMemory->m_iszValue.u.m_Id + v11) = v22[0];
    }
    else
    {
      v13 = "";
      v14 = this->m_ResponseContexts.m_Memory.m_pMemory + v11;
      if ( *(v14 + 1) != 0 )
        v13 = *(v14 + 1);
      Warning("RR: could not apply operator %s to prior value %s\n", pValue, v13);
      AllocPooledString(v22, pValue);
      *(&this->m_ResponseContexts.m_Memory.m_pMemory->m_iszValue.u.m_Id + v11) = v22[0];
    }
    *(&this->m_ResponseContexts.m_Memory.m_pMemory->m_fExpirationTime + v11) = expirationTime;
  }
}


// CBaseEntity::InputRemoveContext  (line 4715, @0x0000000002149840, libserver.so)  // inlines: AssignTo, TempString, ToString
// calls: V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_2149871, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CBaseEntity::InputRemoveContext(CBaseEntity *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  const char *m_pszString; // rsi
  const char *v5; // rax
  const char *v6; // rcx
  double m_float; // xmm0_8

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
  (*(this->_vptr_IHandleEntity + 82))(this, m_pszString);
}


// CBaseEntity::InputClearContext  (line 4725, @0x000000000213d820, libserver.so)
void __fastcall CBaseEntity::InputClearContext(CBaseEntity *const this, inputdata_t *const inputdata)
{
  (*(this->_vptr_IHandleEntity + 83))(this, inputdata);
}


// CBaseEntity::InputDispatchResponse  (line 4735, @0x0000000002149d80, libserver.so)  // inlines: AssignTo, TempString, ToString
// calls: V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_2149DBD, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CBaseEntity::InputDispatchResponse(CBaseEntity *const this, inputdata_t *const inputdata)
{
  void (__fastcall *v3)(CBaseEntity *const, const char *, _QWORD); // r12
  int16 m_type; // ax
  const char *m_pszString; // rsi
  const char *v6; // rax
  const char *v7; // rcx
  double m_float; // xmm0_8

  v3 = *(this->_vptr_IHandleEntity + 74);
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
        v7 = "true";
        if ( inputdata->value.m_char == 0 )
          v7 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v7);
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
        v6 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v6);
LABEL_8:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  v3(this, m_pszString, 0);
}


// CBaseEntity::InputDisableShadow  (line 4742, @0x000000000213f240, libserver.so)
// calls: CBaseEntity::AddEffects
void __fastcall CBaseEntity::InputDisableShadow(CBaseEntity *const this, inputdata_t *const inputdata)
{
  CBaseEntity::AddEffects(this, 16);
}


// CBaseEntity::InputEnableShadow  (line 4749, @0x00000000021429d0, libserver.so)  // inlines: RemoveEffects
void __fastcall CBaseEntity::InputEnableShadow(CBaseEntity *const this, inputdata_t *const inputdata)
{
  (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & 0xFFFFFFEF);
}


// CBaseEntity::DispatchResponse  (line 4760, @0x000000000215e4b0, libserver.so)
// calls: CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CBaseEntity::GatherCriteria, CRR_Response::CRR_Response, CSpeechScriptBridge::FindBestResponse, CRR_Response::GetResponse, CRR_Response::~CRR_Response, CResponseCriteriaSet::~CResponseCriteriaSet, Msg, CBaseEntity::EmitSound, InstancedScriptedScene, __stack_chk_fail (13 total)
// strings: "Unsupported\n"
void __fastcall CBaseEntity::DispatchResponse(
        CBaseEntity *const this,
        const char *conceptName,
        CResponseCriteriaSet *pCriteria)
{
  rr2::MatchInfo_t match; // [rsp+10h] [rbp-350h] BYREF
  CResponseCriteriaSet localcriteria; // [rsp+30h] [rbp-330h] BYREF
  char response[256]; // [rsp+70h] [rbp-2F0h] BYREF
  AI_Response result; // [rsp+170h] [rbp-1F0h] BYREF
  unsigned __int64 v10; // [rsp+338h] [rbp-28h]

  v10 = __readfsqword(0x28u);
  CResponseCriteriaSet::CResponseCriteriaSet(&localcriteria);
  if ( pCriteria == 0 )
    pCriteria = &localcriteria;
  CResponseCriteriaSet::AppendCriteria(pCriteria, "concept", conceptName, 5.0);
  CBaseEntity::GatherCriteria(this, pCriteria);
  CRR_Response::CRR_Response(&result);
  if ( CSpeechScriptBridge::FindBestResponse(&g_ExpresserRRScriptBridge, pCriteria, &match, &result, 0) )
  {
    CRR_Response::GetResponse(&result, response, 0x100u);
    switch ( result.m_Type )
    {
      case 2u:
        Msg("Unsupported\n");
        break;
      case 3u:
        InstancedScriptedScene(0, response, 0, 0.0, 0, 0, 0, 0);
        break;
      case 1u:
        CBaseEntity::EmitSound(this, response, 0.0, 0);
        break;
      default:
        break;
    }
  }
  CRR_Response::~CRR_Response(&result);
  CResponseCriteriaSet::~CResponseCriteriaSet(&localcriteria);
}


// CBaseEntity::DumpResponseCriteria  (line 4830, @0x00000000021656a0, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, GetDebugName, String, ~CUtlBuffer, ~CUtlMemory
// calls: Msg, CEntityIdentity::GetDebugName, CResponseCriteriaSet::CResponseCriteriaSet, CBaseEntity::GatherCriteria, CUtlBuffer::CUtlBuffer, CResponseCriteriaSet::Describe, DevMsg(char const*,...), CUtlMemory<unsigned char, int>::Purge, CResponseCriteriaSet::~CResponseCriteriaSet, _Unwind_Resume
// callers: CC_Ent_Show_Response_Criteria
// strings: "----------------------------------------------\n", "RESPONSE CRITERIA FOR: %s (%s)\n"
void __fastcall CBaseEntity::DumpResponseCriteria(CBaseEntity *const this)
{
  const char *DebugName; // rax
  CEntityIdentity *m_pEntity; // rcx
  const char *m_pAsString; // rsi
  CResponseCriteriaSet criteria; // [rsp+0h] [rbp-B0h] BYREF
  CUtlBuffer buf; // [rsp+40h] [rbp-70h] BYREF

  Msg("----------------------------------------------\n");
  DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
  m_pEntity = this->m_pEntity;
  m_pAsString = "";
  if ( m_pEntity->m_designerName.u.m_Id != 0 )
    m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
  Msg("RESPONSE CRITERIA FOR: %s (%s)\n", m_pAsString, DebugName);
  CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
  CBaseEntity::GatherCriteria(this, &criteria);
  CUtlBuffer::CUtlBuffer(&buf, 0, 2048, 5);
  CResponseCriteriaSet::Describe(&criteria, &buf);
  DevMsg("%s", buf.m_Memory.m_pMemory);
  CUtlMemory<unsigned char,int>::Purge(&buf.m_Memory);
  CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
}


// CC_Ent_Show_Response_Criteria  (line 4845, @0x0000000002165790, libserver.so)  // inlines: Arg, operator[]
// calls: CBaseEntity::DumpResponseCriteria, UTIL_GetCommandClient, GetNextCommandEntity
void __fastcall CC_Ent_Show_Response_Criteria(const CCommandContext *const ctx, const CCommand *const args)
{
  CBaseEntity *v3; // rbx
  const char *v4; // r12
  CBasePlayer *CommandClient; // rax
  CBaseEntity *NextCommandEntity; // rax

  v3 = 0;
  while ( 1 )
  {
    v4 = "";
    if ( args->m_nArgc > 1 )
      v4 = args->m_ppArgv[1];
    CommandClient = UTIL_GetCommandClient();
    NextCommandEntity = GetNextCommandEntity(CommandClient, v4, v3);
    v3 = NextCommandEntity;
    if ( NextCommandEntity == 0 )
      break;
    CBaseEntity::DumpResponseCriteria(NextCommandEntity);
  }
}


// CBaseEntity::GatherCriteria  (line 4857, @0x000000000215e450, libserver.so)
// calls: UTIL_GetLocalPlayer
// callers: CBaseEntity::DispatchResponse, CBaseEntity::ScriptGatherCriteria, CBaseEntity::DumpResponseCriteria
void __fastcall CBaseEntity::GatherCriteria(CBaseEntity *const this, CResponseCriteriaSet *const criteria)
{
  CBasePlayer *LocalPlayer; // rax

  (*(this->_vptr_IHandleEntity + 159))(this);
  if ( gpGlobals->maxClients == 1 )
  {
    LocalPlayer = UTIL_GetLocalPlayer();
    if ( LocalPlayer != 0 )
      (*(LocalPlayer->_vptr_IHandleEntity + 496))(LocalPlayer, criteria);
  }
  (*(this->_vptr_IHandleEntity + 160))(this, criteria);
}


// CBaseEntity::ScriptGatherCriteria  (line 4875, @0x000000000215e630, libserver.so)
// calls: CResponseCriteriaSet::CResponseCriteriaSet, CBaseEntity::GatherCriteria, CSpeechScriptBridge::AICriteriaSetToScript, CResponseCriteriaSet::~CResponseCriteriaSet, _Unwind_Resume
void __fastcall CBaseEntity::ScriptGatherCriteria(CBaseEntity *const this, HSCRIPT hResult)
{
  CResponseCriteriaSet criteria; // [rsp+0h] [rbp-60h] BYREF

  CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
  CBaseEntity::GatherCriteria(this, &criteria);
  CSpeechScriptBridge::AICriteriaSetToScript(&criteria, hResult);
  CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
}


// CC_Ent_Autoaim  (line 4886, @0x0000000002140300, libserver.so)  // inlines: Arg, operator[]
// calls: UTIL_GetCommandClient, SetDebugBits
void __fastcall CC_Ent_Autoaim(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  CommandClient = UTIL_GetCommandClient();
  SetDebugBits(CommandClient, v2, 0x10000u);
}


// CBaseEntity::MyNPCPointer  (line 4895, @0x000000000213d840, libserver.so)
CAI_BaseNPC *__fastcall CBaseEntity::MyNPCPointer(CBaseEntity *const this)
{
  return 0;
}


// CBaseEntity::ComputeStepSimulationNetwork  (line 4915, @0x000000000215e690, libserver.so)  // inlines: CellFromCoord, Float2Int, GetBool, GetInt, VectorMA, VectorSubtract, operator!=, operator-
// calls: QuaternionBlend, QuaternionAngles, Hermite_Spline
// callers: Physics_UpdateStepSimulation
void __fastcall CBaseEntity::ComputeStepSimulationNetwork(CBaseEntity *const this, StepSimulationData *step)
{
  int tickcount; // eax
  bool v4; // zf
  float v6; // xmm1_4
  float v7; // xmm0_4
  __m128 v8; // xmm0
  float v9; // xmm1_4
  float x; // xmm4_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  int nTickCount; // esi
  int v14; // eax
  float v15; // xmm0_4
  int v16; // edx
  float v17; // xmm1_4
  float y; // xmm2_4
  float z; // xmm3_4
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // r8d
  int v24; // eax
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm0_4
  int v28; // edx
  int v29; // edx
  StepSimulationStep *p_m_Discontinuity; // rdi
  StepSimulationStep *p_m_Next; // rsi
  int v32; // ecx
  int v33; // r8d
  float v34; // xmm0_4
  Quaternion *p_qRotation; // rsi
  Quaternion *v36; // rdi
  int v37; // ecx
  StepSimulationStep *p_m_Previous; // rdx
  int v39; // edi
  int v40; // esi
  float v41; // xmm0_4
  float v42; // xmm2_4
  float v43; // xmm3_4
  Quaternion outangles; // [rsp+10h] [rbp-30h] BYREF

  if ( step != 0 )
  {
    tickcount = gpGlobals->tickcount;
    if ( step->m_nLastProcessTickCount != tickcount )
    {
      v4 = !step->m_bOriginActive;
      step->m_nLastProcessTickCount = tickcount;
      if ( !v4 )
      {
        *v8.m128_u64 = (*(this->_vptr_IHandleEntity + 193))(this);
        x = step->m_Next.vecOrigin.x;
        *&outangles.x = v8.m128_u64[0];
        outangles.z = v9;
        if ( x == v8.m128_f32[0]
          && (v11 = step->m_Next.vecOrigin.y) == outangles.y
          && (v12 = step->m_Next.vecOrigin.z) == v9 )
        {
          nTickCount = step->m_Next.nTickCount;
          v14 = step->m_Previous.nTickCount;
          if ( nTickCount - v14 <= 0 )
          {
            v15 = 1.0;
          }
          else
          {
            v8.m128_f32[0] = (gpGlobals->tickcount - v14) / (step->m_Next.nTickCount - v14);
            if ( v8.m128_f32[0] <= 1.0 )
              LODWORD(v15) = v8.m128_i32[0] & _mm_cmpge_ss(v8, 0LL).m128_u32[0];
            else
              v15 = 1.0;
          }
          v16 = step->m_Previous2.nTickCount;
          if ( v16 != 0 && v14 > v16 )
          {
            if ( step_spline.m_pParent->m_Value.m_nValue != 0 )
            {
              Hermite_Spline(
                &step->m_Previous2.vecOrigin,
                &step->m_Previous.vecOrigin,
                &step->m_Next.vecOrigin,
                v15,
                &step->m_vecNetworkOrigin);
              v17 = step->m_vecNetworkOrigin.x;
              y = step->m_vecNetworkOrigin.y;
              z = step->m_vecNetworkOrigin.z;
            }
            else
            {
              v37 = step->m_Discontinuity.nTickCount;
              p_m_Previous = &step->m_Previous;
              if ( v14 < v37 )
              {
                v39 = gpGlobals->tickcount;
                if ( v37 >= v39 )
                {
                  x = step->m_Discontinuity.vecOrigin.x;
                  nTickCount = step->m_Discontinuity.nTickCount;
                  v11 = step->m_Discontinuity.vecOrigin.y;
                  v12 = step->m_Discontinuity.vecOrigin.z;
                }
                else
                {
                  p_m_Previous = &step->m_Discontinuity;
                  v14 = step->m_Discontinuity.nTickCount;
                }
                v40 = nTickCount - v14;
                if ( v40 > 0 )
                {
                  v41 = (v39 - v14) / v40;
                  if ( v41 <= 1.0 )
                    v15 = fmaxf(0.0, v41);
                  else
                    v15 = 1.0;
                }
              }
              v42 = (v11 - p_m_Previous->vecOrigin.y) * v15;
              v43 = (v12 - p_m_Previous->vecOrigin.z) * v15;
              v17 = ((x - p_m_Previous->vecOrigin.x) * v15) + p_m_Previous->vecOrigin.x;
              step->m_vecNetworkOrigin.x = v17;
              y = v42 + p_m_Previous->vecOrigin.y;
              step->m_vecNetworkOrigin.y = y;
              z = v43 + p_m_Previous->vecOrigin.z;
              step->m_vecNetworkOrigin.z = z;
            }
          }
          else
          {
            v17 = ((x - step->m_Previous.vecOrigin.x) * v15) + step->m_Previous.vecOrigin.x;
            y = ((v11 - step->m_Previous.vecOrigin.y) * v15) + step->m_Previous.vecOrigin.y;
            z = ((v12 - step->m_Previous.vecOrigin.z) * v15) + step->m_Previous.vecOrigin.z;
            step->m_vecNetworkOrigin.x = v17;
            step->m_vecNetworkOrigin.y = y;
            step->m_vecNetworkOrigin.z = z;
          }
          if ( v17 < 0.0 )
            v20 = (v17 + 16384.0) / 256;
          else
            LOWORD(v20) = v17 / 256 + 64;
          step->m_networkCell[0] = v20;
          if ( y < 0.0 )
            v21 = (y + 16384.0) / 256;
          else
            LOWORD(v21) = y / 256 + 64;
          step->m_networkCell[1] = v21;
          if ( z < 0.0 )
            v22 = (z + 16384.0) / 256;
          else
            LOWORD(v22) = z / 256 + 64;
          step->m_networkCell[2] = v22;
        }
        else
        {
          step->m_bOriginActive = 0;
        }
      }
      if ( step->m_bAnglesActive )
      {
        *&outangles.x = (*(this->_vptr_IHandleEntity + 194))(this);
        v7 = step->m_angNextRotation.x;
        outangles.z = v6;
        if ( v7 != outangles.x || step->m_angNextRotation.y != outangles.y || step->m_angNextRotation.z != v6 )
        {
          step->m_bAnglesActive = 0;
          return;
        }
        v23 = step->m_Next.nTickCount;
        v24 = step->m_Previous.nTickCount;
        if ( v23 - v24 <= 0 )
        {
          v26 = 1.0;
          v27 = 1.0;
        }
        else
        {
          v25 = (gpGlobals->tickcount - v24) / (step->m_Next.nTickCount - v24);
          v26 = 1.0;
          if ( v25 <= 1.0 )
            v27 = fmaxf(0.0, v25);
          else
            v27 = 1.0;
        }
        v28 = step->m_Previous2.nTickCount;
        if ( v28 != 0 && v24 > v28 )
        {
          if ( step_spline.m_pParent->m_Value.m_nValue != 0 )
          {
            Hermite_Spline(
              &step->m_Previous2.qRotation,
              &step->m_Previous.qRotation,
              &step->m_Next.qRotation,
              v27,
              &outangles);
            QuaternionAngles(&outangles, &step->m_angNetworkAngles);
            return;
          }
          v29 = step->m_Discontinuity.nTickCount;
          p_m_Discontinuity = &step->m_Previous;
          p_m_Next = &step->m_Next;
          if ( v24 < v29 )
          {
            v32 = gpGlobals->tickcount;
            if ( v29 >= v32 )
            {
              p_m_Next = &step->m_Discontinuity;
              v23 = step->m_Discontinuity.nTickCount;
            }
            else
            {
              p_m_Discontinuity = &step->m_Discontinuity;
              v24 = step->m_Discontinuity.nTickCount;
            }
            v33 = v23 - v24;
            if ( v33 > 0 )
            {
              v34 = (v32 - v24) / v33;
              if ( v34 <= 1.0 )
                v26 = fmaxf(0.0, v34);
              v27 = v26;
            }
          }
          p_qRotation = &p_m_Next->qRotation;
          v36 = &p_m_Discontinuity->qRotation;
        }
        else
        {
          p_qRotation = &step->m_Next.qRotation;
          v36 = &step->m_Previous.qRotation;
        }
        QuaternionBlend(v36, p_qRotation, v27, &outangles);
        QuaternionAngles(&outangles, &step->m_angNetworkAngles);
      }
    }
  }
}


// CBaseEntity::UseStepSimulationNetworkOrigin  (line 5066, @0x000000000215ebb0, libserver.so)  // inlines: GetDataObject
// calls: CEntityIdentity::GetDataObject
// callers: CGameSceneNodeStepSimulationOriginSerializer::Serialize, CGameSceneNodeCellSerializer<2>::Serialize, CGameSceneNodeCellSerializer<1>::Serialize, CGameSceneNodeCellSerializer<0>::Serialize, CGameSceneNodeOriginSerializer<1>::Serialize, CGameSceneNodeOriginSerializer<0>::Serialize, CGameSceneNodeOriginSerializer<2>::Serialize, Physics_UpdateStepSimulation
bool __fastcall CBaseEntity::UseStepSimulationNetworkOrigin(
        CBaseEntity *const this,
        const Vector **out_v,
        uint16 *cell)
{
  bool result; // al
  CEntityIdentity *m_pEntity; // rdi
  char *DataObject; // rax

  result = 0;
  if ( this->m_MoveType.m_Value == MoveType_t::MOVETYPE_STEP )
  {
    m_pEntity = this->m_pEntity;
    if ( (m_pEntity->m_fDataObjectTypes & 4) != 0 )
    {
      DataObject = CEntityIdentity::GetDataObject(m_pEntity, 2);
      *out_v = (DataObject + 148);
      if ( cell != 0 )
      {
        *cell = *(DataObject + 80);
        cell[1] = *(DataObject + 81);
        cell[2] = *(DataObject + 82);
      }
      return *DataObject;
    }
  }
  return result;
}


// CBaseEntity::UseStepSimulationNetworkAngles  (line 5090, @0x000000000215ec30, libserver.so)  // inlines: GetDataObject
// calls: CEntityIdentity::GetDataObject
// callers: CGameSceneNodeStepSimulationAnglesSerializer::Serialize, Physics_UpdateStepSimulation
bool __fastcall CBaseEntity::UseStepSimulationNetworkAngles(CBaseEntity *const this, const QAngle **out_a)
{
  bool result; // al
  CEntityIdentity *m_pEntity; // rdi
  const QAngle *DataObject; // rax

  result = 0;
  if ( this->m_MoveType.m_Value == MoveType_t::MOVETYPE_STEP )
  {
    m_pEntity = this->m_pEntity;
    if ( (m_pEntity->m_fDataObjectTypes & 4) != 0 )
    {
      DataObject = CEntityIdentity::GetDataObject(m_pEntity, 2);
      *out_a = DataObject + 14;
      return BYTE1(DataObject->x);
    }
  }
  return result;
}


// CBaseEntity::AddStepDiscontinuity  (line 5108, @0x000000000215ec80, libserver.so)  // inlines: GetDataObject, operator=
// calls: CEntityIdentity::GetDataObject, AngleQuaternion
__int64 __fastcall CBaseEntity::AddStepDiscontinuity(
        CBaseEntity *const this,
        float flTime,
        const Vector *const vecOrigin,
        const QAngle *const vecAngles)
{
  CEntityIdentity *m_pEntity; // rdi
  char *DataObject; // rax

  if ( this->m_MoveType.m_Value != MoveType_t::MOVETYPE_STEP )
    return 0;
  m_pEntity = this->m_pEntity;
  if ( (m_pEntity->m_fDataObjectTypes & 4) == 0 )
    return 0;
  DataObject = CEntityIdentity::GetDataObject(m_pEntity, 2);
  if ( DataObject == 0 )
    return 0;
  *(DataObject + 17) = ((flTime / gpGlobals->interval_per_tick) + 0.5);
  *(DataObject + 18) = LODWORD(vecOrigin->x);
  *(DataObject + 19) = LODWORD(vecOrigin->y);
  *(DataObject + 20) = LODWORD(vecOrigin->z);
  AngleQuaternion(vecAngles, (DataObject + 84));
  return 1;
}


// CBaseEntity::GetStepOrigin  (line 5131, @0x000000000213f370, libserver.so)
// calls: CBaseEntity::GetLocalOrigin
Vector __fastcall CBaseEntity::GetStepOrigin(const CBaseEntity *const this)
{
  const Vector *LocalOrigin; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  LocalOrigin = CBaseEntity::GetLocalOrigin(this);
  *&result.x = *&LocalOrigin->x;
  result.z = LocalOrigin->z;
  return result;
}


// CBaseEntity::GetStepAngles  (line 5136, @0x000000000213df20, libserver.so)
// calls: CBaseEntity::GetLocalAngles
QAngle __fastcall CBaseEntity::GetStepAngles(const CBaseEntity *const this)
{
  const QAngle *LocalAngles; // rax
  QAngle result; // 0:xmm0_8.8,8:xmm1_4.4

  LocalAngles = CBaseEntity::GetLocalAngles(this);
  *&result.x = *&LocalAngles->x;
  result.z = LocalAngles->z;
  return result;
}


// CBaseEntity::RemoveRecipientsIfNotCloseCaptioning  (line 5147, @0x000000000215ed30, libserver.so)  // inlines: GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, atoi
// calls: strtol, CRecipientFilter::RemoveRecipient
// callers: CSceneEntity::DispatchStartSpeak
// strings: "closecaption"
void __fastcall CBaseEntity::RemoveRecipientsIfNotCloseCaptioning(CRecipientFilter *const filter)
{
  int v2; // eax
  unsigned int i; // ebx
  int v4; // eax
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rdx
  const CEntityInstance *m_pInstance; // r14
  const char *v8; // rax

  v2 = (*(filter->_vptr_IRecipientFilter + 5))(filter) - 1;
  if ( v2 >= 0 )
  {
    for ( i = v2; i != -1; --i )
    {
      while ( 1 )
      {
        v4 = (*(filter->_vptr_IRecipientFilter + 6))(filter, i);
        if ( v4 <= 0x7FFE )
        {
          v5 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
          if ( v5 != 0 )
          {
            v6 = &v5[v4 & 0x1FF];
            if ( v6 != 0 && v4 == (v6->m_EHandle.m_Index & 0x7FFF) )
            {
              m_pInstance = v6->m_pInstance;
              if ( v6->m_pInstance != 0 )
              {
                v8 = (*(*engine + 384LL))(engine, v4, "closecaption");
                if ( *v8 != 0 && strtol(v8, 0, 10) == 0 )
                  break;
              }
            }
          }
        }
        if ( --i == -1 )
          return;
      }
      CRecipientFilter::RemoveRecipient(filter, m_pInstance);
    }
  }
}


// CServerOnlyEntity::CEntityInstanceEntityClass::InitOptionalTables  (line 5174, @0x0000000002171c00, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, GetEntityClassInternal, SetClassInfo, SetFlag, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CServerOnlyEntity::SetupEntClassInputs, CServerOnlyEntity::SetupEntClassComponentOverrides, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort (13 total)
// strings: "CServerOnlyEntity"
// globals: `guard variable for'CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass, CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CServerOnlyEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo, CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo
bool __cdecl CServerOnlyEntity::CEntityInstanceEntityClass::InitOptionalTables()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass) != 0 )
  {
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_designerName.u.m_Id = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass._vptr_CEntityClass = off_3F79390;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_ComponentOffsets.m_Size = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_AllHelpers.m_Size = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_instanceUnserializer.m_atomicFields,
      4);
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_classInputs.m_Size = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_classInputs.m_Memory.m_pMemory = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_classOutputs.m_Size = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_requiredEHandle.m_Index = -1;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_hNetworkSerializer = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_pBaseClassInfo = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_pClassInfo = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_flags = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_nAllHelpersFlags = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_pScriptClassDesc = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_pInputs = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_nInputCount = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_pOutputs = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_nOutputCount = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_pGameClass = 0;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass._vptr_CEntityClass = off_3FB60F0;
    __cxa_guard_release(&`guard variable for'CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass);
    __cxa_atexit(
      CServerOnlyEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass,
      &_dso_handle);
  }
  if ( g_pEntityCServerOnlyEntityClass == 0 )
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
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_pClassInfo = &CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_pBaseClassInfo = CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo.m_pBaseClassInfo;
    g_pEntityCServerOnlyEntityClass = &CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass;
    CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo.m_pClass = &CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass;
    CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
    CServerOnlyEntity::SetupEntClassInputs(g_pEntityCServerOnlyEntityClass);
    CServerOnlyEntity::SetupEntClassComponentOverrides(g_pEntityCServerOnlyEntityClass);
  }
  CServerOnlyEntity::GetEntityClassInternal(void)::g_EntityCServerOnlyEntityClass.m_flags |= 1u;
  return 1;
}


// CServerOnlyEntity::GetDataDescMap  (line 5180, @0x000000000213d850, libserver.so)
// globals: CServerOnlyEntity::m_DataMap
datamap_t *__fastcall CServerOnlyEntity::GetDataDescMap(CServerOnlyEntity *const this)
{
  return &CServerOnlyEntity::m_DataMap;
}


// CServerOnlyEntity::AddDatadescMetadataKeys  (line 5180, @0x000000000215ee40, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CServerOnlyEntity::GetEntityClass(void)
void __fastcall CServerOnlyEntity::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CServerOnlyEntity::GetEntityClass);
}


// CServerOnlyEntity::GetBaseMap  (line 5180, @0x000000000215ee60, libserver.so)
// globals: CBaseEntity::m_DataMap
datamap_t *__cdecl CServerOnlyEntity::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CServerOnlyEntity>  (line 5180, @0x000000000215ee70, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_01.cpp
// strings: "CServerOnlyEntity"
// globals: `guard variable for'DataMapInit<CServerOnlyEntity>(CServerOnlyEntity *)::nameHolder, CBaseEntity::m_DataMap, CServerOnlyEntity::GetEntityClass(void), DataMapInit<CServerOnlyEntity>(CServerOnlyEntity *)::dataDesc, CServerOnlyEntity::m_DataMap, DataMapInit<CServerOnlyEntity>(CServerOnlyEntity *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CServerOnlyEntity>(CServerOnlyEntity *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CServerOnlyEntity>(CServerOnlyEntity *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CServerOnlyEntity>(CServerOnlyEntity *)::nameHolder) != 0 )
  {
    DataMapInit<CServerOnlyEntity>(CServerOnlyEntity *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CServerOnlyEntity>(CServerOnlyEntity *)::nameHolder.m_pszBase = "CServerOnlyEntity";
    DataMapInit<CServerOnlyEntity>(CServerOnlyEntity *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CServerOnlyEntity>(CServerOnlyEntity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CServerOnlyEntity>(CServerOnlyEntity *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CServerOnlyEntity>(CServerOnlyEntity *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CServerOnlyEntity>(CServerOnlyEntity *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CServerOnlyEntity>(CServerOnlyEntity *)::nameHolder,
      &_dso_handle);
  }
  CServerOnlyEntity::m_DataMap.dataNumFields = 1;
  CServerOnlyEntity::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  CServerOnlyEntity::m_DataMap.dataDesc = DataMapInit<CServerOnlyEntity>(CServerOnlyEntity *)::dataDesc;
  AddDatadescMetadataKeys(&CServerOnlyEntity::m_DataMap, CServerOnlyEntity::GetEntityClass);
  return &CServerOnlyEntity::m_DataMap;
}


// CServerOnlyPointEntity::GetDataDescMap  (line 5183, @0x000000000213d860, libserver.so)
// globals: CServerOnlyPointEntity::m_DataMap
datamap_t *__fastcall CServerOnlyPointEntity::GetDataDescMap(CServerOnlyPointEntity *const this)
{
  return &CServerOnlyPointEntity::m_DataMap;
}


// CServerOnlyPointEntity::AddDatadescMetadataKeys  (line 5183, @0x000000000215ef40, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CServerOnlyPointEntity::GetEntityClass(void)
void __fastcall CServerOnlyPointEntity::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CServerOnlyPointEntity::GetEntityClass);
}


// CServerOnlyPointEntity::GetBaseMap  (line 5183, @0x000000000215ef60, libserver.so)
// globals: CServerOnlyEntity::m_DataMap
datamap_t *__cdecl CServerOnlyPointEntity::GetBaseMap()
{
  return &CServerOnlyEntity::m_DataMap;
}


// DataMapInit<CServerOnlyPointEntity>  (line 5183, @0x000000000215ef70, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_01.cpp
// strings: "CServerOnlyPointEntity"
// globals: `guard variable for'DataMapInit<CServerOnlyPointEntity>(CServerOnlyPointEntity *)::nameHolder, CServerOnlyEntity::m_DataMap, CServerOnlyPointEntity::GetEntityClass(void), DataMapInit<CServerOnlyPointEntity>(CServerOnlyPointEntity *)::dataDesc, CServerOnlyPointEntity::m_DataMap, DataMapInit<CServerOnlyPointEntity>(CServerOnlyPointEntity *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CServerOnlyPointEntity>(CServerOnlyPointEntity *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CServerOnlyPointEntity>(CServerOnlyPointEntity *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CServerOnlyPointEntity>(CServerOnlyPointEntity *)::nameHolder) != 0 )
  {
    DataMapInit<CServerOnlyPointEntity>(CServerOnlyPointEntity *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CServerOnlyPointEntity>(CServerOnlyPointEntity *)::nameHolder.m_pszBase = "CServerOnlyPointEntity";
    DataMapInit<CServerOnlyPointEntity>(CServerOnlyPointEntity *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CServerOnlyPointEntity>(CServerOnlyPointEntity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CServerOnlyPointEntity>(CServerOnlyPointEntity *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CServerOnlyPointEntity>(CServerOnlyPointEntity *)::nameHolder.m_nLenBase = 22;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CServerOnlyPointEntity>(CServerOnlyPointEntity *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CServerOnlyPointEntity>(CServerOnlyPointEntity *)::nameHolder,
      &_dso_handle);
  }
  CServerOnlyPointEntity::m_DataMap.dataNumFields = 1;
  CServerOnlyPointEntity::m_DataMap.baseMap = &CServerOnlyEntity::m_DataMap;
  CServerOnlyPointEntity::m_DataMap.dataDesc = DataMapInit<CServerOnlyPointEntity>(CServerOnlyPointEntity *)::dataDesc;
  AddDatadescMetadataKeys(&CServerOnlyPointEntity::m_DataMap, CServerOnlyPointEntity::GetEntityClass);
  return &CServerOnlyPointEntity::m_DataMap;
}


// CLogicalEntity::AddDatadescMetadataKeys  (line 5186, @0x000000000215f040, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CLogicalEntity::GetEntityClass(void)
void __fastcall CLogicalEntity::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CLogicalEntity::GetEntityClass);
}


// CLogicalEntity::GetDataDescMap  (line 5186, @0x000000000215f060, libserver.so)
// globals: CLogicalEntity::m_DataMap
datamap_t *__fastcall CLogicalEntity::GetDataDescMap(CLogicalEntity *const this)
{
  return &CLogicalEntity::m_DataMap;
}


// CLogicalEntity::GetBaseMap  (line 5186, @0x000000000215f070, libserver.so)
// globals: CServerOnlyEntity::m_DataMap
datamap_t *__cdecl CLogicalEntity::GetBaseMap()
{
  return &CServerOnlyEntity::m_DataMap;
}


// DataMapInit<CLogicalEntity>  (line 5186, @0x000000000215f080, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_01.cpp
// strings: "CLogicalEntity"
// globals: `guard variable for'DataMapInit<CLogicalEntity>(CLogicalEntity *)::nameHolder, CServerOnlyEntity::m_DataMap, CLogicalEntity::GetEntityClass(void), DataMapInit<CLogicalEntity>(CLogicalEntity *)::dataDesc, CLogicalEntity::m_DataMap, DataMapInit<CLogicalEntity>(CLogicalEntity *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CLogicalEntity>(CLogicalEntity *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CLogicalEntity>(CLogicalEntity *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CLogicalEntity>(CLogicalEntity *)::nameHolder) != 0 )
  {
    DataMapInit<CLogicalEntity>(CLogicalEntity *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CLogicalEntity>(CLogicalEntity *)::nameHolder.m_pszBase = "CLogicalEntity";
    DataMapInit<CLogicalEntity>(CLogicalEntity *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CLogicalEntity>(CLogicalEntity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CLogicalEntity>(CLogicalEntity *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CLogicalEntity>(CLogicalEntity *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CLogicalEntity>(CLogicalEntity *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CLogicalEntity>(CLogicalEntity *)::nameHolder,
      &_dso_handle);
  }
  CLogicalEntity::m_DataMap.dataNumFields = 1;
  CLogicalEntity::m_DataMap.baseMap = &CServerOnlyEntity::m_DataMap;
  CLogicalEntity::m_DataMap.dataDesc = DataMapInit<CLogicalEntity>(CLogicalEntity *)::dataDesc;
  AddDatadescMetadataKeys(&CLogicalEntity::m_DataMap, CLogicalEntity::GetEntityClass);
  return &CLogicalEntity::m_DataMap;
}


// CServerOnlyPointEntity::Spawn  (line 5189, @0x00000000021487d0, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, String
// calls: CEntityKeyValues::HasValue, Warning, CEntityKeyValues::RemoveKeyForSpawn, CBaseEntity::Spawn
// callers: CZombieBorder::Spawn
// strings: "Warning! Can't specify mins/maxs for point entities! (%s)\n"
void __fastcall CServerOnlyPointEntity::Spawn(CServerOnlyPointEntity *const this, const CEntityKeyValues *pKeyValues)
{
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rsi
  CEntityIdentity *v6; // rax
  const char *v7; // rsi

  if ( CEntityKeyValues::HasValue(pKeyValues, -1307688131) )
  {
    m_pEntity = this->m_pEntity;
    m_pAsString = "";
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    Warning("Warning! Can't specify mins/maxs for point entities! (%s)\n", m_pAsString);
    CEntityKeyValues::RemoveKeyForSpawn(pKeyValues, -1307688131);
  }
  if ( CEntityKeyValues::HasValue(pKeyValues, 361620063) )
  {
    v6 = this->m_pEntity;
    v7 = "";
    if ( v6->m_designerName.u.m_Id != 0 )
      v7 = v6->m_designerName.u.m_pAsString;
    Warning("Warning! Can't specify mins/maxs for point entities! (%s)\n", v7);
    CEntityKeyValues::RemoveKeyForSpawn(pKeyValues, 361620063);
  }
  CBaseEntity::Spawn(this, pKeyValues);
}


// CBaseEntity::RemoveDeferred  (line 5212, @0x000000000215f150, libserver.so)  // inlines: curtime
// calls: CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CBaseEntity::AddEffects, CCollisionProperty::DisableTouchEvents, CBaseEntity::SetMoveType
// callers: CBaseCombatCharacter::BecomeRagdoll, CBaseCombatCharacter::InputBecomeServerRagdoll
void __fastcall CBaseEntity::RemoveDeferred(CBaseEntity *const this)
{
  double v2; // xmm1_8
  CGlobalVars *v3; // r12
  double v4; // xmm0_8
  CCollisionProperty *m_pCollision; // rdi
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CBaseEntity::ThinkSet(this, CBaseEntity::SUB_Remove, 0.0, 0, 0);
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v4) = 0;
    *&v4 = v3->m_flCurrentTime + 0.1;
  }
  else
  {
    *&v4 = 1036831949;
  }
  CBaseEntity::SetNextThink(this, v4, v2, 0);
  CBaseEntity::AddEffects(this, 32);
  m_pCollision = this->m_pCollision;
  if ( m_pCollision != 0 )
  {
    (*(m_pCollision->_vptr_ICollideable + 16))(m_pCollision);
    CCollisionProperty::DisableTouchEvents(this->m_pCollision);
  }
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
}


// CBaseEntity::SUB_Vanish  (line 5236, @0x0000000002164180, libserver.so)  // inlines: Dot, DotProduct, LengthSqr, NetworkStateChanged, Set, VectorSubtract, curtime, operator-, operator=<int>
// calls: CBaseEntity::SetNextThink, UTIL_PlayerByIndex, CBaseEntity::GetAbsOrigin, VectorNormalize, CBasePlayer::EyeVectors, CBaseEntity::ThinkSet
void __fastcall CBaseEntity::SUB_Vanish(CBaseEntity *const this)
{
  double v1; // xmm1_8
  CGlobalVars *v3; // rbx
  double v4; // xmm0_8
  CEntityIndex v5; // ebx
  CBasePlayer *v6; // rax
  CBasePlayer *v7; // r12
  vec_t v8; // xmm1_4
  const Vector *AbsOrigin; // rax
  float y; // xmm2_4
  float z; // xmm1_4
  float v12; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  Vector corpseDir; // [rsp+0h] [rbp-50h] BYREF
  Vector plForward; // [rsp+10h] [rbp-40h] BYREF

  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v4) = 0;
    *&v4 = v3->m_flCurrentTime + 0.1;
  }
  else
  {
    *&v4 = 1036831949;
  }
  v5.m_Data = 1;
  CBaseEntity::SetNextThink(this, v4, v1, 0);
  if ( gpGlobals->maxClients > 0 )
  {
    while ( 1 )
    {
      v6 = UTIL_PlayerByIndex(v5);
      v7 = v6;
      if ( v6 != 0 )
      {
        *&plForward.x = (*(v6->_vptr_IHandleEntity + 62))(v6);
        plForward.z = v8;
        AbsOrigin = CBaseEntity::GetAbsOrigin(this);
        y = AbsOrigin->y;
        z = AbsOrigin->z;
        corpseDir.x = AbsOrigin->x - plForward.x;
        corpseDir.y = y - plForward.y;
        corpseDir.z = z - plForward.z;
        v12 = ((corpseDir.x * corpseDir.x) + (corpseDir.y * corpseDir.y)) + (corpseDir.z * corpseDir.z);
        if ( v12 < 65536.0 )
          break;
        if ( v12 < 2250000.0 )
        {
          VectorNormalize(&corpseDir);
          CBasePlayer::EyeVectors(v7, &plForward, 0, 0);
          if ( (((plForward.x * corpseDir.x) + (plForward.y * corpseDir.y)) + (plForward.z * corpseDir.z)) > 0.0 )
            break;
        }
      }
      if ( gpGlobals->maxClients < ++v5.m_Data )
        goto LABEL_12;
    }
  }
  else
  {
LABEL_12:
    if ( this->m_iHealth.m_Value != 0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 328, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_iHealth.m_Value = 0;
    }
    CBaseEntity::ThinkSet(this, CBaseEntity::SUB_Remove, 0.0, 0, 0);
  }
}


// CBaseEntity::GetScriptOwnerEntity  (line 5278, @0x000000000215f4d0, libserver.so)  // inlines: CEntityHandle, EntityToHScript, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetPublicScriptScope, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToHScript
// calls: CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall CBaseEntity::GetScriptOwnerEntity(CBaseEntity *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  HSCRIPT result; // rax
  CEntityInstance *m_pInstance; // rbx

  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  if ( v3 + 2 <= 1 )
    return 0;
  v4 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9];
  if ( v4 == 0 )
    return 0;
  v5 = &v4[v2 & 0x1FF];
  if ( v5 == 0 || v3 != v5->m_EHandle.m_Index )
    return 0;
  m_pInstance = v5->m_pInstance;
  result = 0;
  if ( v5->m_pInstance != 0 )
  {
    result = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
    if ( result == 0 )
    {
      CEntityInstance::CreatePublicScriptScope(v5->m_pInstance, 0);
      return m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
    }
  }
  return result;
}


// CBaseEntity::SetScriptOwnerEntity  (line 5284, @0x000000000215f5b0, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToEnt
// calls: GetScriptDesc<CEntityInstance>
void __fastcall CBaseEntity::SetScriptOwnerEntity(CBaseEntity *const this, HSCRIPT hOwner)
{
  void (__fastcall *v4)(CBaseEntity *const, __int64); // r14
  __int64 (__fastcall *v5)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *Script; // rax
  __int64 v7; // rsi

  v4 = *(this->_vptr_IHandleEntity + 40);
  if ( hOwner != 0 )
  {
    v5 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v7 = v5(g_pScriptVM, hOwner, Script);
  }
  else
  {
    v7 = 0;
  }
  v4(this, v7);
}


// AnyPlayersInHierarchy_R  (line 5289, @0x000000000217dd50, libserver.so)  // inlines: AnyPlayersInHierarchy_R
// calls: CBaseEntity::FirstMoveChild, CBaseEntity::NextMovePeer
// callers: CBaseEntity::RecalcHasPlayerChildBit
bool __fastcall AnyPlayersInHierarchy_R(CBaseEntity *pEnt)
{
  char v2; // r12
  CBaseEntity *v4; // r14
  CBaseEntity *v5; // r13
  CBaseEntity *v6; // rbx
  CBaseEntity *MovePeer; // r15
  const CBaseEntity *v8; // [rsp+8h] [rbp-58h]
  const CBaseEntity *v9; // [rsp+10h] [rbp-50h]
  const CBaseEntity *MoveChild; // [rsp+18h] [rbp-48h]
  const CBaseEntity *pCur; // [rsp+20h] [rbp-40h]
  const CBaseEntity *v12; // [rsp+28h] [rbp-38h]

  v2 = (*(pEnt->_vptr_IHandleEntity + 140))(pEnt);
  if ( v2 == 0 )
  {
    pCur = CBaseEntity::FirstMoveChild(pEnt);
    if ( pCur != 0 )
    {
      while ( (*(pCur->_vptr_IHandleEntity + 140))(pCur) == 0 )
      {
        MoveChild = CBaseEntity::FirstMoveChild(pCur);
        if ( MoveChild != 0 )
        {
          while ( (*(MoveChild->_vptr_IHandleEntity + 140))(MoveChild) == 0 )
          {
            v9 = CBaseEntity::FirstMoveChild(MoveChild);
            if ( v9 != 0 )
            {
              while ( (*(v9->_vptr_IHandleEntity + 140))(v9) == 0 )
              {
                v8 = CBaseEntity::FirstMoveChild(v9);
                if ( v8 != 0 )
                {
                  while ( (*(v8->_vptr_IHandleEntity + 140))(v8) == 0 )
                  {
                    v12 = CBaseEntity::FirstMoveChild(v8);
                    if ( v12 != 0 )
                    {
                      while ( (*(v12->_vptr_IHandleEntity + 140))(v12) == 0 )
                      {
                        v4 = CBaseEntity::FirstMoveChild(v12);
                        if ( v4 != 0 )
                        {
                          while ( (*(v4->_vptr_IHandleEntity + 140))(v4) == 0 )
                          {
                            v5 = CBaseEntity::FirstMoveChild(v4);
                            if ( v5 != 0 )
                            {
                              while ( (*(v5->_vptr_IHandleEntity + 140))(v5) == 0 )
                              {
                                v6 = CBaseEntity::FirstMoveChild(v5);
                                if ( v6 != 0 )
                                {
                                  while ( (*(v6->_vptr_IHandleEntity + 140))(v6) == 0 )
                                  {
                                    MovePeer = CBaseEntity::FirstMoveChild(v6);
                                    if ( MovePeer != 0 )
                                    {
                                      while ( !AnyPlayersInHierarchy_R(MovePeer) )
                                      {
                                        MovePeer = CBaseEntity::NextMovePeer(MovePeer);
                                        if ( MovePeer == 0 )
                                          goto LABEL_23;
                                      }
                                      return 1;
                                    }
LABEL_23:
                                    v6 = CBaseEntity::NextMovePeer(v6);
                                    if ( v6 == 0 )
                                      goto LABEL_24;
                                  }
                                  return 1;
                                }
LABEL_24:
                                v5 = CBaseEntity::NextMovePeer(v5);
                                if ( v5 == 0 )
                                  goto LABEL_25;
                              }
                              return 1;
                            }
LABEL_25:
                            v4 = CBaseEntity::NextMovePeer(v4);
                            if ( v4 == 0 )
                              goto LABEL_26;
                          }
                          return 1;
                        }
LABEL_26:
                        v12 = CBaseEntity::NextMovePeer(v12);
                        if ( v12 == 0 )
                          goto LABEL_27;
                      }
                      return 1;
                    }
LABEL_27:
                    v8 = CBaseEntity::NextMovePeer(v8);
                    if ( v8 == 0 )
                      goto LABEL_28;
                  }
                  return 1;
                }
LABEL_28:
                v9 = CBaseEntity::NextMovePeer(v9);
                if ( v9 == 0 )
                  goto LABEL_29;
              }
              return 1;
            }
LABEL_29:
            MoveChild = CBaseEntity::NextMovePeer(MoveChild);
            if ( MoveChild == 0 )
              goto LABEL_30;
          }
          return 1;
        }
LABEL_30:
        pCur = CBaseEntity::NextMovePeer(pCur);
        if ( pCur == 0 )
          return v2;
      }
      return 1;
    }
  }
  return v2;
}


// CBaseEntity::RecalcHasPlayerChildBit  (line 5304, @0x000000000215f630, libserver.so)  // inlines: AddEFlags, AnyPlayersInHierarchy_R, RemoveEFlags
// calls: CBaseEntity::FirstMoveChild, AnyPlayersInHierarchy_R, CBaseEntity::NextMovePeer
void __fastcall CBaseEntity::RecalcHasPlayerChildBit(CBaseEntity *const this)
{
  CBaseEntity *MoveChild; // rbx

  if ( (*(this->_vptr_IHandleEntity + 140))(this) != 0 )
  {
LABEL_2:
    this->m_iEFlags |= 0x10000u;
    return;
  }
  MoveChild = CBaseEntity::FirstMoveChild(this);
  if ( MoveChild != 0 )
  {
    while ( !AnyPlayersInHierarchy_R(MoveChild) )
    {
      MoveChild = CBaseEntity::NextMovePeer(MoveChild);
      if ( MoveChild == 0 )
        goto LABEL_6;
    }
    goto LABEL_2;
  }
LABEL_6:
  this->m_iEFlags &= ~0x10000u;
}


// CBaseEntity::DoesHavePlayerChild  (line 5313, @0x000000000215f6a0, libserver.so)  // inlines: IsEFlagSet
bool __fastcall CBaseEntity::DoesHavePlayerChild(CBaseEntity *const this)
{
  return HIWORD(this->m_iEFlags) & 1;
}


// CBaseEntity::FrictionRevertThink  (line 5319, @0x000000000215f730, libserver.so)
// calls: CBaseEntity::SetFriction
void __fastcall CBaseEntity::FrictionRevertThink(CBaseEntity *const this)
{
  float v1; // xmm1_4

  CBaseEntity::SetFriction(this, COERCE_DOUBLE(LODWORD(this->m_flOverriddenFriction)), v1);
}


// CBaseEntity::SetFriction  (line 5324, @0x000000000215f6b0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
// calls: CBaseEntity::GetIndexForThinkContext, CBaseEntity::ThinkSet
// callers: CBaseEntity::FrictionRevertThink, CBasePlayer::SharedSpawn, CBaseEntity::CBaseEntity, CGib::Init
void __fastcall CBaseEntity::SetFriction(CBaseEntity *const this, double a2, float flFriction)
{
  float flFrictiona; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flFriction.m_Value )
  {
    flFrictiona = *&a2;
    (*(this->_vptr_IHandleEntity + 22))(this, 552, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, flFriction);
    this->m_flFriction.m_Value = flFrictiona;
  }
  if ( CBaseEntity::GetIndexForThinkContext(this, 123025397) != -1 )
    CBaseEntity::ThinkSet(this, 0LL, -1.0, 123025397, 0);
}


// CBaseEntity::OverrideFriction  (line 5333, @0x000000000215f750, libserver.so)  // inlines: NetworkStateChanged, Set, curtime, operator=<float>
// calls: CBaseEntity::GetIndexForThinkContext, CBaseEntity::GetNextThinkTick, CBaseEntity::ThinkSet, _Unwind_Resume
// globals: CBaseEntity::FrictionRevertThink(void)
void __fastcall CBaseEntity::OverrideFriction(CBaseEntity *const this, float a2, __m128i duration, float friction)
{
  float v4; // r12d
  bool v6; // zf
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v8; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(duration));
  if ( CBaseEntity::GetIndexForThinkContext(this, 123025397) == -1
    || CBaseEntity::GetNextThinkTick(this, 123025397) == -1 )
  {
    v6 = v4 == this->m_flFriction.m_Value;
    this->m_flOverriddenFriction = this->m_flFriction.m_Value;
  }
  else
  {
    v6 = v4 == this->m_flFriction.m_Value;
  }
  if ( !v6 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 552, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flFriction.m_Value = v4;
  }
  m_flCurrentTime = 0.0;
  v8 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v8->m_flCurrentTime;
  }
  CBaseEntity::ThinkSet(this, CBaseEntity::FrictionRevertThink, m_flCurrentTime + a2, 123025397, 0);
}


// CBaseEntity::SetNetworkQuantizeOriginAngAngles  (line 5344, @0x000000000215f860, libserver.so)
// callers: CItem::Spawn, CFuncBrush::Spawn, CPhysicsProp::Spawn
void __fastcall CBaseEntity::SetNetworkQuantizeOriginAngAngles(CBaseEntity *const this, bool bQuantize)
{
  this->m_bNetworkQuantizeOriginAndAngles = bQuantize;
}


// CBaseEntity::NetworkQuantize  (line 5350, @0x000000000215f870, libserver.so)  // inlines: RoundFloatToInt, RoundFloatToUnsignedLong, _mm_cvt_ss2si, _mm_cvtss_si32, _mm_load_ss, _mm_set_ss, anglemod
// callers: CBaseEntity::NetworkQuantize
void __fastcall CBaseEntity::NetworkQuantize(CBaseEntity *const this, Vector *const org, QAngle *const angles)
{
  __int64 i; // rax
  __int64 v4; // [rsp-8h] [rbp-8h]

  if ( this->m_bNetworkQuantizeOriginAndAngles )
  {
    for ( i = 0; i != 12; i += 4 )
    {
      *(&v4 - 1) = *(&org->x + i) * 32.0;
      *(&org->x + i) = *(&v4 - 1) * 0.03125;
    }
    LOBYTE(i) = 0;
    do
    {
      *(&v4 - 1) = ((*(&angles->x + i) * 182.04445) * 0.0054931641) * 22.755556;
      *(&angles->x + i) = (*(&v4 - 1) / 22.755556) + 0.0;
      i += 4;
    }
    while ( i != 12 );
  }
}


// CBaseEntity::NetworkQuantize  (line 5386, @0x000000000215f930, libserver.so)
// calls: CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles, CBaseEntity::NetworkQuantize, CBaseEntity::SetAbsOrigin, CBaseEntity::SetAbsAngles
// callers: CItem::Spawn, CFuncBrush::Spawn
void __fastcall CBaseEntity::NetworkQuantize(CBaseEntity *const this)
{
  Vector origin; // [rsp+0h] [rbp-40h] BYREF
  QAngle angles; // [rsp+10h] [rbp-30h] BYREF

  if ( this->m_bNetworkQuantizeOriginAndAngles )
  {
    origin = *CBaseEntity::GetAbsOrigin(this);
    angles = *CBaseEntity::GetAbsAngles(this);
    CBaseEntity::NetworkQuantize(this, &origin, &angles);
    CBaseEntity::SetAbsOrigin(this, &origin);
    CBaseEntity::SetAbsAngles(this, &angles);
  }
}


// CBaseEntity::ShouldLagCompensate  (line 5397, @0x000000000215f9c0, libserver.so)
bool __fastcall CBaseEntity::ShouldLagCompensate(const CBaseEntity *const this)
{
  return this->m_bLagCompensate;
}


// CBaseEntity::ShouldBeSentToClient  (line 5403, @0x000000000215f9d0, libserver.so)
// callers: CDOTA_BaseNPC::ShouldTransmit, CDOTA_DeathProphet_Exorcism_Spirit::ShouldTransmit
int __fastcall CBaseEntity::ShouldBeSentToClient(CBaseEntity *const this, CEntityIndex iClient, int iReturn)
{
  int m_iSentToClients; // ecx
  int result; // eax

  m_iSentToClients = this->m_iSentToClients;
  result = iReturn;
  if ( (m_iSentToClients & (1 << SLOBYTE(iClient.m_Data))) == 0 )
  {
    this->m_iSentToClients = m_iSentToClients | (1 << SLOBYTE(iClient.m_Data));
    return 4;
  }
  return result;
}


// CBaseEntity::AddContextForScript  (line 5417, @0x0000000002174fb0, libserver.so)  // inlines: curtime
// calls: CBaseEntity::AddContext
// callers: CBaseEntity::AddContextForScriptNumeric
void __fastcall CBaseEntity::AddContextForScript(
        CBaseEntity *const this,
        const char *pName,
        const char *pValue,
        float duration)
{
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v6; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v8; // [rsp-24h] [rbp-2Ch]
  const char *v9; // [rsp-20h] [rbp-28h]
  const char *v10; // [rsp-18h] [rbp-20h]

  m_flCurrentTime = 0.0;
  if ( duration <= 0.0 )
  {
    CBaseEntity::AddContext(this, pName, pValue, 0.0);
  }
  else
  {
    v6 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v8 = duration;
          v9 = pValue;
          v10 = pName;
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          duration = v8;
          pValue = v9;
          pName = v10;
        }
      }
      m_flCurrentTime = v6->m_flCurrentTime;
    }
    CBaseEntity::AddContext(this, pName, pValue, duration + m_flCurrentTime);
  }
}


// CBaseEntity::AddContextForScriptNumeric  (line 5424, @0x0000000002175050, libserver.so)
// calls: CFmtStrN<256, false>::CFmtStrN, CBaseEntity::AddContextForScript, __stack_chk_fail
void __fastcall CBaseEntity::AddContextForScriptNumeric(
        CBaseEntity *const this,
        const char *pName,
        float a3,
        float flValue,
        float duration)
{
  __int64 v8; // [rsp-4h] [rbp-148h] BYREF
  char v9[319]; // [rsp+5h] [rbp-13Fh] BYREF

  *&v9[271] = __readfsqword(0x28u);
  CFmtStrN<256,false>::CFmtStrN(&v8, "%f", a3);
  CBaseEntity::AddContextForScript(this, pName, v9, flValue);
}


// CBaseEntity::UpdateHealth  (line 5430, @0x0000000002142660, libserver.so)  // inlines: CEntComponentPtr, CSmartPtr, GetComponent<CHealthComponent>, operator=, operator[]
// calls: CHealthComponent::TakeDamage
int __fastcall CBaseEntity::UpdateHealth(CBaseEntity *const this, const CTakeDamageInfo *const info)
{
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rcx
  __int64 m_nBaseOffset; // rdi
  int result; // eax
  bool v7; // zf
  CHealthComponent *v8; // rcx
  CHealthComponent *v9; // r12
  int iDamageTaken; // [rsp+Ch] [rbp-14h]

  m_pEntity = this->m_pEntity;
  m_pInstance = m_pEntity->m_pInstance;
  if ( m_pEntity->m_pInstance == 0 )
    return 0;
  m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CHealthComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
  result = 0;
  if ( m_nBaseOffset != 0xFFFF )
  {
    v7 = (m_pInstance + m_nBaseOffset) == 0;
    v8 = (m_pInstance + m_nBaseOffset);
    v9 = v8;
    if ( !v7 )
    {
      iDamageTaken = CHealthComponent::TakeDamage(v8, this, info);
      (*(this->_vptr_IHandleEntity + 157))(this, v9->m_iHealth);
      return iDamageTaken;
    }
  }
  return result;
}


// CBaseEntity::SetHealth  (line 5444, @0x00000000021426f0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// callers: CDOTA_BaseNPC::ForceKill, CDOTA_BaseNPC::SetHealth
void __fastcall CBaseEntity::SetHealth(CBaseEntity *const this, int amt)
{
  if ( this->m_iHealth.m_Value != amt )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 328, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iHealth.m_Value = amt;
  }
}


// CBaseEntity::GetHealth  (line 5457, @0x000000000215fa00, libserver.so)
// callers: CBaseEntity::UpdateParameters, CBaseEntity::ModifyOrAppendCriteria, CTraceFilterGroundEntities::ShouldHitEntity, CTraceFilterWalkableEntities::ShouldHitEntity, CPropData::ParsePropFromKV, CBaseProp::Activate, CBaseProp::DrawEntityDebugOverlays, CBreakableProp::BreakablePropTouch, CBreakableProp::OnTakeDamage, CBreakableProp::UpdateHealth, CBreakableProp::InputAddHealth, CBreakableProp::InputRemoveHealth (391 total)
int __fastcall CBaseEntity::GetHealth(const CBaseEntity *const this)
{
  return this->m_iHealth.m_Value;
}


// CBaseEntity::GetMaxHealth  (line 5470, @0x000000000213d870, libserver.so)
int __fastcall CBaseEntity::GetMaxHealth(const CBaseEntity *const this)
{
  return this->m_iMaxHealth.m_Value;
}


// CBaseEntity::SetMaxHealth  (line 5483, @0x000000000215fa10, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// callers: CBaseEntity::TraceBleed, CBreakableProp::OnTakeDamage, CBreakableProp::UpdateHealth, CBreakableProp::Spawn, CFish::Spawn, CBreakable::Spawn, CBreakable::UpdateHealth, CGunTarget::Spawn, CPhysBox::Spawn, CBasePlayer::SetOrResetInitialState, CDOTA_BaseNPC::CalculateGenericBonuses, CDOTA_BaseNPC_Hero::CalculateStatBonus (28 total)
void __fastcall CBaseEntity::SetMaxHealth(CBaseEntity *const this, int amt)
{
  if ( this->m_iMaxHealth.m_Value != amt )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 332, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iMaxHealth.m_Value = amt;
  }
}


// CBaseEntity::GetPhysicalSpawnGroupHandle  (line 5494, @0x000000000215fa50, libserver.so)  // inlines: GetPhysicalSpawnGroupHandle
// calls: CNetworkTransmitComponent::CalcPhysicalSpawnGroupHandle
// callers: ents, CBasePlayer::UpdateTonemapController
SpawnGroupHandle_t __fastcall CBaseEntity::GetPhysicalSpawnGroupHandle(const CBaseEntity *const this)
{
  if ( (this->m_NetworkTransmitComponent.m_nStateFlags & 0x40) != 0 )
    CNetworkTransmitComponent::CalcPhysicalSpawnGroupHandle(&this->m_NetworkTransmitComponent);
  return this->m_NetworkTransmitComponent.m_PhysicalSpawnGroupHandle;
}


// CBaseEntity::IncrementInterpolationFrame  (line 5501, @0x000000000215fa80, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// callers: CBaseAnimating::CopyAnimationDataFrom, CBaseCombatCharacter::CorpseFade, CBaseEntity::Teleport, CBasePlayer::PlayerDeathThink, CBasePlayer::SetOrResetInitialState, CFuncTrain::Next, CDOTA_NeutralSpawner::SpawnNextBatch, CDOTA_ScriptedSpawner::OnSpawnNPCsSpawnCompletion, CDOTA_ScriptedSpawner::OnSpawnTutorialHeroSpawnCompletion, CDOTA_NPCSpawner::ReleaseCreeps, CDOTA_Ability_Meepo_DividedWeStand::OwnerRespawned
void __fastcall CBaseEntity::IncrementInterpolationFrame(CBaseEntity *const this)
{
  unsigned __int8 m_Value; // al
  unsigned __int8 v3; // bl

  m_Value = this->m_ubInterpolationFrame.m_Value;
  v3 = (m_Value + 1) & 3;
  if ( m_Value != v3 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 381, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_ubInterpolationFrame.m_Value = v3;
  }
}


// CBaseEntity::UpdateShotStatistics  (line 5510, @0x000000000215fb80, libserver.so)
// callers: CBaseEntity::FireBullets
void __fastcall CBaseEntity::UpdateShotStatistics(CBaseEntity *const this, const trace_t *const tr)
{
  ;
}


// CBaseEntity::HandleShotImpactingGlass  (line 5534, @0x000000000215fb90, libserver.so)  // inlines: CEffectData, CGameTrace, CNetworkVarBase, CNetworkVectorBase, CUtlStringToken, CWeakHandle, EnableInteractsWith, EnsureValidValue, EnsureValidValue<CEntityHandle>, FireBulletsInfo_t, GetFloat, Init, LengthSqr, Ray_t, RnCollisionAttr_t, Set, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, Zero, operator!=, operator*, operator+, operator=
// calls: DispatchEffect, CGameTrace::Init, CGamePhysicsQueryInterface::TraceRay, GetAmmoDef, CAmmoDef::DamageType
// callers: CBaseEntity::FireBullets
// strings: "GlassImpact"
void __fastcall CBaseEntity::HandleShotImpactingGlass(
        CBaseEntity *const this,
        const FireBulletsInfo_t *const info,
        const trace_t *const tr,
        const Vector *const vecDir,
        CTraceFilter *pTraceFilter)
{
  float x; // xmm6_4
  float y; // xmm5_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  float z; // xmm3_4
  float v13; // xmm6_4
  float v14; // xmm5_4
  float v15; // xmm4_4
  float v16; // xmm7_4
  float v17; // xmm8_4
  bool v18; // zf
  float m_fValue; // xmm1_4
  vec_t v20; // xmm2_4
  float v21; // xmm1_4
  CGamePhysicsQueryInterface *v22; // rdi
  vec_t v23; // xmm7_4
  CAmmoDef *AmmoDef; // rax
  unsigned int v25; // eax
  vec_t v26; // xmm0_4
  vec_t v27; // xmm0_4
  int v28; // eax
  float v29; // xmm0_4
  vec_t v30; // xmm0_4
  CBaseEntity *m_pAttacker; // rax
  int pTraceFiltera; // [rsp+8h] [rbp-1E0h]
  CTraceFilter *pTraceFilterb; // [rsp+8h] [rbp-1E0h]
  float v36; // [rsp+10h] [rbp-1D8h]
  float v37; // [rsp+1Ch] [rbp-1CCh]
  int m_iAmmoType; // [rsp+1Ch] [rbp-1CCh]
  _DWORD v39[2]; // [rsp+20h] [rbp-1C8h] BYREF
  FireBulletsInfo_t behindGlassInfo; // [rsp+28h] [rbp-1C0h] BYREF
  __int64 (__fastcall **v41)(CEffectData *__hidden); // [rsp+90h] [rbp-158h] BYREF
  CEffectData data; // [rsp+98h] [rbp-150h] BYREF
  trace_t penetrationTrace; // [rsp+108h] [rbp-E0h] BYREF

  v41 = &off_3FB64D0;
  x = vecDir->x;
  y = vecDir->y;
  v10 = tr->endpos.x;
  memset(&data, 0, 48);
  v11 = tr->endpos.y;
  z = tr->endpos.z;
  v13 = (x * 16.0) + v10;
  v14 = (y * 16.0) + v11;
  v15 = (16.0 * vecDir->z) + z;
  data.m_vAngles.m_Value.y = NAN;
  data.m_vAngles.m_Value.z = NAN;
  data.m_hEntity.m_Value.m_Index = 1065353216;
  memset(&data.m_hOtherEntity, 0, 31);
  v16 = tr->plane.normal.x;
  v17 = tr->plane.normal.y;
  *&data.m_nMaterial.m_Value = 0;
  *&data.m_nColor.m_Value = 0;
  if ( v16 == 0.0 && v17 == 0.0 && tr->plane.normal.z == 0.0 )
  {
    v18 = v10 == 0.0;
  }
  else
  {
    v18 = v10 == 0.0;
    data.m_vStart.m_Value.y = v16;
    v23 = tr->plane.normal.z;
    data.m_vStart.m_Value.z = v17;
    data.m_vNormal.m_Value.x = v23;
  }
  if ( !v18 || v11 != 0.0 || z != 0.0 )
  {
    data._vptr_CEffectData = __PAIR64__(LODWORD(v11), LODWORD(v10));
    data.m_vOrigin.m_Value.x = z;
  }
  *&pTraceFiltera = v15;
  v36 = v14;
  v37 = v13;
  DispatchEffect("GlassImpact", &v41);
  memset(&penetrationTrace.m_hShape, 0, 24);
  penetrationTrace.m_ShapeAttributes.m_nInteractsExclude = 0x700000000000000LL;
  CGameTrace::Init(&data.m_iEffectName);
  m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  v20 = tr->endpos.z - *&pTraceFiltera;
  behindGlassInfo.m_vecSrc.z = tr->endpos.y - v36;
  behindGlassInfo.m_flPlayerDamage = m_fValue;
  v21 = tr->endpos.x;
  behindGlassInfo.m_vecDirShooting.x = v20;
  behindGlassInfo.m_vecSrc.x = 0.0;
  memset(&behindGlassInfo.m_vecDirShooting.y, 0, 36);
  behindGlassInfo.m_vecSrc.y = v21 - v37;
  *v39 = v37;
  *&v39[1] = v36;
  behindGlassInfo.m_iShots = pTraceFiltera;
  LOBYTE(behindGlassInfo.m_nFlags) = 1;
  BYTE1(behindGlassInfo.m_nFlags) = (((behindGlassInfo.m_vecSrc.y * behindGlassInfo.m_vecSrc.y)
                                    + (behindGlassInfo.m_vecSrc.z * behindGlassInfo.m_vecSrc.z))
                                   + (v20 * v20)) != 0.0;
  v22 = g_pPhysicsQuery;
  pTraceFilter->m_attr.m_nInteractsWith |= 0x185003uLL;
  CGamePhysicsQueryInterface::TraceRay(v22, v39, pTraceFilter, &data.m_iEffectName);
  if ( LOBYTE(penetrationTrace.contents) == 0 && tr->fraction != 0.0 && penetrationTrace.plane.dist != 1.0 )
  {
    m_iAmmoType = info->m_iAmmoType;
    pTraceFilterb = *(this->_vptr_IHandleEntity + 130);
    AmmoDef = GetAmmoDef();
    v25 = CAmmoDef::DamageType(AmmoDef, m_iAmmoType);
    (pTraceFilterb)(this, &data.m_iEffectName, v25);
    if ( penetrationTrace.endpos.y != data.m_vStart.m_Value.y
      || penetrationTrace.endpos.z != data.m_vStart.m_Value.z
      || penetrationTrace.plane.normal.x != data.m_vNormal.m_Value.x )
    {
      data.m_vStart.m_Value.y = penetrationTrace.endpos.y;
      data.m_vStart.m_Value.z = penetrationTrace.endpos.z;
      data.m_vNormal.m_Value.x = penetrationTrace.plane.normal.x;
    }
    if ( penetrationTrace.startpos.y != *&data._vptr_CEffectData
      || penetrationTrace.startpos.z != *(&data._vptr_CEffectData + 1)
      || penetrationTrace.endpos.x != data.m_vOrigin.m_Value.x )
    {
      data._vptr_CEffectData = *&penetrationTrace.startpos.y;
      data.m_vOrigin.m_Value.x = penetrationTrace.endpos.x;
    }
    DispatchEffect("GlassImpact", &v41);
    v39[0] = 1;
    behindGlassInfo.m_iTracerFreq = 0;
    v39[1] = LODWORD(penetrationTrace.startpos.y);
    behindGlassInfo.m_pAttacker = 0;
    behindGlassInfo.m_iShots = LODWORD(penetrationTrace.startpos.z);
    *&behindGlassInfo.m_bPrimaryAttack = 0;
    behindGlassInfo.m_vecSrc.x = penetrationTrace.endpos.x;
    v26 = vecDir->x;
    behindGlassInfo.m_flPlayerDamage = 1.0;
    behindGlassInfo.m_vecSrc.y = v26;
    v27 = vecDir->y;
    LOBYTE(behindGlassInfo.m_pAdditionalIgnoreEnt) = 1;
    behindGlassInfo.m_vecSrc.z = v27;
    behindGlassInfo.m_vecDirShooting.x = vecDir->z;
    behindGlassInfo.m_vecDirShooting.y = vec3_origin.x;
    behindGlassInfo.m_vecDirShooting.z = vec3_origin.y;
    v28 = info->m_iAmmoType;
    behindGlassInfo.m_vecSpread.x = vec3_origin.z;
    v29 = 1.0 - tr->fraction;
    LODWORD(behindGlassInfo.m_vecSpread.z) = v28;
    v30 = v29 * info->m_flDistance;
    LODWORD(behindGlassInfo.m_flDistance) = info->m_iTracerFreq;
    behindGlassInfo.m_vecSpread.y = v30;
    behindGlassInfo.m_iAmmoType = LODWORD(info->m_flDamage);
    m_pAttacker = info->m_pAttacker;
    if ( m_pAttacker == 0 )
      m_pAttacker = this;
    *&behindGlassInfo.m_flDamageForceScale = m_pAttacker;
    LODWORD(behindGlassInfo.m_flDamage) = info->m_nFlags;
    (*(this->_vptr_IHandleEntity + 129))(this, v39);
  }
}


// CBaseEntity::CreateBubbleTrailTracer  (line 5589, @0x0000000002160220, libserver.so)  // inlines: DistToSqr, LengthSqr, VectorMA
// calls: UTIL_BubbleTrail, sqrt
void __fastcall CBaseEntity::CreateBubbleTrailTracer(
        CBaseEntity *const this,
        const Vector *const vecShotSrc,
        const Vector *const vecShotEnd,
        const Vector *const vecShotDir)
{
  float y; // xmm4_4
  float z; // xmm3_4
  float v6; // xmm0_4
  int v7; // r12d
  float v8; // xmm0_4
  float v9; // xmm0_4
  vec_t v10; // xmm1_4
  Vector vecBubbleEnd; // [rsp+20h] [rbp-30h] BYREF
  Vector vecTracerSrc; // [rsp+30h] [rbp-20h] BYREF

  y = vecShotSrc->y;
  z = vecShotSrc->z;
  v6 = (((vecShotSrc->x - vecShotEnd->x) * (vecShotSrc->x - vecShotEnd->x)) + ((y - vecShotEnd->y) * (y - vecShotEnd->y)))
     + ((z - vecShotEnd->z) * (z - vecShotEnd->z));
  if ( v6 <= 160000.0 )
  {
    v9 = sqrt(v6) - 0.1000000014901161;
    v7 = (0.050000001 * v9);
    vecBubbleEnd.x = (vecShotDir->x * v9) + vecShotSrc->x;
    v10 = (vecShotDir->y * v9) + vecShotSrc->y;
    v8 = (v9 * vecShotDir->z) + vecShotSrc->z;
    vecBubbleEnd.y = v10;
  }
  else
  {
    v7 = 20;
    vecBubbleEnd.x = (vecShotDir->x * 400.0) + vecShotSrc->x;
    v8 = (400.0 * vecShotDir->z) + z;
    vecBubbleEnd.y = (vecShotDir->y * 400.0) + y;
  }
  vecBubbleEnd.z = v8;
  (*(this->_vptr_IHandleEntity + 136))(this, vecShotSrc, &vecTracerSrc);
  UTIL_BubbleTrail(&vecTracerSrc, &vecBubbleEnd, v7);
}


// CBaseEntity::TraceAttackToTriggers  (line 5615, @0x0000000002167bb0, libserver.so)  // inlines: CGameQueryAttributes, CGameTrace, CGameTraceList, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, DisableHitSolid, EnableHitTrigger, Init, IsExternallyAllocated, Purge, Purge_FixedGrowable, RemoveAll, RnCollisionAttr_t, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnore, SetInteractsWith, operator=, operator[], ~CGameTraceList, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: EntityIDFromBaseEntity, HierarchyIDFromBaseEntity, CGamePhysicsQueryInterface::RaycastMultiple, CGameTrace::Init, CBaseEntity::DispatchTraceAttack, ApplyMultiDamage, CUtlMemory<CGameTrace, int>::Purge, __stack_chk_fail, CUtlVectorBase<CGameTrace, CUtlMemoryFixedGrowable<CGameTrace, 64ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CBaseEntity::FireBullets, CGameRules::RadiusDamage
void __fastcall CBaseEntity::TraceAttackToTriggers(
        CBaseEntity *const this,
        const CTakeDamageInfo *const info,
        const Vector *const start,
        const Vector *const end,
        const Vector *const dir)
{
  int v8; // eax
  unsigned __int64 v9; // rbx
  __int64 v10; // r13
  CBaseEntity *m_pEnt; // r12
  uint8 type; // dl
  float dist; // xmm0_4
  uint8 signbits; // dl
  float fraction; // xmm0_4
  __int16 v16; // dx
  uint m_nFaceIndex; // edx
  vec_t z; // xmm0_4
  __int16 unused0; // ax
  uint32 v20; // eax
  CGameQueryAttributes attr; // [rsp+10h] [rbp-2B30h] BYREF
  trace_t tr; // [rsp+40h] [rbp-2B00h] BYREF
  CGameTraceList hitBuffer; // [rsp+F0h] [rbp-2A50h] BYREF
  unsigned __int64 v25; // [rsp+2B08h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  attr.m_nInteractsExclude = 0;
  attr.m_nInteractsAs = 0;
  attr.m_nCollisionGroup = 4;
  attr.m_nObjectSetMask = 7;
  *(&attr.RnQueryShapeAttr_t + 31) = *(&attr.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  attr.m_nInteractsWith = 2;
  attr.m_nEntityIdToIgnore = EntityIDFromBaseEntity(0);
  attr.m_nHierarchyId = HierarchyIDFromBaseEntity(0);
  hitBuffer.m_list.m_Size = 0;
  hitBuffer.m_list.m_Memory.m_nAllocationCount = 64;
  hitBuffer.m_list.m_Memory.m_nGrowSize = 0x80000000;
  *(&attr.RnQueryShapeAttr_t + 31) = *(&attr.RnQueryShapeAttr_t + 31) & 0xFA | 4;
  hitBuffer.m_list.m_Memory.m_pMemory = &hitBuffer.m_list.m_Memory.m_FixedMemory;
  v8 = CGamePhysicsQueryInterface::RaycastMultiple(g_pPhysicsQuery, start, end, &attr, &hitBuffer);
  if ( v8 > 0 )
  {
    v9 = 0;
    v10 = 168 * ((v8 - 1) + 1LL);
    do
    {
      while ( 1 )
      {
        m_pEnt = hitBuffer.m_list.m_Memory.m_pMemory[v9 / 0xA8].m_pEnt;
        if ( hitBuffer.m_list.m_Memory.m_pMemory[v9 / 0xA8].fraction < 1.0 )
          break;
        v9 += 168LL;
        if ( v9 == v10 )
          goto LABEL_6;
      }
      memset(&tr.m_ShapeAttributes, 0, 31);
      tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
      CGameTrace::Init(&tr);
      type = hitBuffer.m_list.m_Memory.m_pMemory[v9 / 0xA8].plane.type;
      tr.startpos = hitBuffer.m_list.m_Memory.m_pMemory[v9 / 0xA8].startpos;
      tr.endpos = hitBuffer.m_list.m_Memory.m_pMemory[v9 / 0xA8].endpos;
      tr.plane.normal = hitBuffer.m_list.m_Memory.m_pMemory[v9 / 0xA8].plane.normal;
      dist = hitBuffer.m_list.m_Memory.m_pMemory[v9 / 0xA8].plane.dist;
      tr.plane.type = type;
      signbits = hitBuffer.m_list.m_Memory.m_pMemory[v9 / 0xA8].plane.signbits;
      tr.plane.dist = dist;
      fraction = hitBuffer.m_list.m_Memory.m_pMemory[v9 / 0xA8].fraction;
      tr.plane.signbits = signbits;
      v16 = *hitBuffer.m_list.m_Memory.m_pMemory[v9 / 0xA8].plane.pad;
      tr.fraction = fraction;
      *tr.plane.pad = v16;
      tr.contents = hitBuffer.m_list.m_Memory.m_pMemory[v9 / 0xA8].contents;
      tr.startsolid = hitBuffer.m_list.m_Memory.m_pMemory[v9 / 0xA8].startsolid;
      tr.m_pSurfaceProperties = hitBuffer.m_list.m_Memory.m_pMemory[v9 / 0xA8].m_pSurfaceProperties;
      tr.m_pEnt = hitBuffer.m_list.m_Memory.m_pMemory[v9 / 0xA8].m_pEnt;
      tr.m_pHitbox = hitBuffer.m_list.m_Memory.m_pMemory[v9 / 0xA8].m_pHitbox;
      tr.m_hBody = hitBuffer.m_list.m_Memory.m_pMemory[v9 / 0xA8].m_hBody;
      tr.m_hShape = hitBuffer.m_list.m_Memory.m_pMemory[v9 / 0xA8].m_hShape;
      tr.m_ShapeAttributes = hitBuffer.m_list.m_Memory.m_pMemory[v9 / 0xA8].m_ShapeAttributes;
      m_nFaceIndex = hitBuffer.m_list.m_Memory.m_pMemory[v9 / 0xA8].m_nFaceIndex;
      tr.boneLocalPos = hitBuffer.m_list.m_Memory.m_pMemory[v9 / 0xA8].boneLocalPos;
      tr.boneLocalNormal.x = hitBuffer.m_list.m_Memory.m_pMemory[v9 / 0xA8].boneLocalNormal.x;
      tr.boneLocalNormal.y = hitBuffer.m_list.m_Memory.m_pMemory[v9 / 0xA8].boneLocalNormal.y;
      z = hitBuffer.m_list.m_Memory.m_pMemory[v9 / 0xA8].boneLocalNormal.z;
      tr.m_nFaceIndex = m_nFaceIndex;
      LOWORD(m_nFaceIndex) = hitBuffer.m_list.m_Memory.m_pMemory[v9 / 0xA8].hitboxBoneIndex;
      unused0 = hitBuffer.m_list.m_Memory.m_pMemory[v9 / 0xA8].unused0;
      tr.boneLocalNormal.z = z;
      tr.hitboxBoneIndex = m_nFaceIndex;
      tr.unused0 = unused0;
      CBaseEntity::DispatchTraceAttack(m_pEnt, info, dir, &tr);
      ApplyMultiDamage();
      v9 += 168LL;
    }
    while ( v9 != v10 );
  }
LABEL_6:
  hitBuffer.m_list.m_Size = 0;
  if ( hitBuffer.m_list.m_Memory.m_nAllocationCount < 0 )
  {
    v20 = hitBuffer.m_list.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    v20 = hitBuffer.m_list.m_Memory.m_nGrowSize & 0xC0000000;
    if ( hitBuffer.m_list.m_Memory.m_pMemory != &hitBuffer.m_list.m_Memory.m_FixedMemory )
    {
      if ( hitBuffer.m_list.m_Memory.m_pMemory != 0 && v20 == 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      return;
    }
  }
  if ( v20 == 0 )
    CUtlMemory<CGameTrace,int>::Purge(&hitBuffer.m_list.m_Memory);
}


// OnEntityCreatedFromConCommand  (line 5643, @0x000000000213f750, libserver.so)
// calls: UTIL_DropToFloor
void __fastcall OnEntityCreatedFromConCommand(CBaseEntity *pEntity, const CEntityKeyValues *pKeyValues)
{
  UTIL_DropToFloor(pEntity, 0x87001u, 0);
}


// CC_Ent_Create  (line 5648, @0x0000000002170460, libserver.so)  // inlines: AddKeyValue<QAngle>, AddKeyValue<Vector>, AddKeyValue<char const*>, AddToTail, AddToTailGetPtr, Allocate, Allocate<QAngle>, Allocate<Vector>, Arg, Base, Bind, CEntityKeyValuesModifyScope, CEntitySpawnerAsync, CEntitySpawnerAsyncBase, CEntitySpawnerBase, CGameTrace, CUtlAbstractDelegate, CUtlDelegate, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Convert<FastDelegate2<CBaseEntity*, const CEntityKeyValues*, void>, void (FastDelegate2<CBaseEntity*, const CEntityKeyValues*, void>::*)(CBaseEntity*, const CEntityKeyValues*)const, void (detail::GenericClass::*)()>, CopyData, CopyData<QAngle>, CopyData<Vector>, CopyFrom<FastDelegate2<CEntityInstance*, const CEntityKeyValues*, void> >, Element, EnableInteractsWith, EnsureCapacity, EntitySpawnerAsyncDesc_t, FastDelegate2, FilterSpawnGroupEntity, FindKeyHash, Free, GetClassInfo, GetFloat, Init, IsEmpty, LeafCodeInfo_t, LengthSqr, MakeEntityKeyId, MakeStringToken, OverrideAllocator, Purge, QueueContextCallbacks, Ray_t, Release, ReleaseEntitySpawnerEntityVariantAllocator, RemoveAll, RnCollisionAttr_t, SetClassName, SetMementoFrom, SetToIdentity, SetValue, SetValue<QAngle>, SetValue<Vector>, SetWorldTransform, Spawn, SpawnInternal, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, UtlMakeDelegate<CBaseEntity*, const CEntityKeyValues*, void>, V_strlen, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, bindmemfunc<FastDelegate2<CBaseEntity*, const CEntityKeyValues*, void>, void (FastDelegate2<CBaseEntity*, const CEntityKeyValues*, void>::*)(CBaseEntity*, const CEntityKeyValues*)const>, bindstaticfunc<FastDelegate2<CBaseEntity*, const CEntityKeyValues*, void>, void (FastDelegate2<CBaseEntity*, const CEntityKeyValues*, void>::*)(CBaseEntity*, const CEntityKeyValues*)const>, memcpy, operator!, operator*, operator+, operator=, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawnerAsync, ~CEntitySpawnerAsyncBase, ~CEntitySpawnerBase, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: UTIL_GetCommandClient, CGameTrace::Init, CBasePlayer::EyeVectors, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CEntityKeyValuesModifyScope::BeginModify, CEntitySpawnerAsync<CBaseEntity>::Init, CEntitySystem::FindClassByDesignName, CEntityKeyValues::HasValue, CEntityKeyValues::SetValue, CEntityKeyValuesModifyScope::Release, SetIdentityMatrix (34 total)
// strings: "ent_create usage:\n\tent_create <classname> [{ \"key1\" \"value1\" \"key2\" \"value2\" }], "Attempted to set attribute %s as if it was a non-attribute key!\n", "../../public/tier1/utlleanvector.h", "EnsureCapacity", "%s allocation count overflow", "AddToTailGetPtr"
// globals: FastDelegate2<CBaseEntity *,CEntityKeyValues const*,void>::InvokeStaticFunction(CBaseEntity *,CEntityKeyValues const*), OnEntityCreatedFromConCommand(CBaseEntity *,CEntityKeyValues const*), CEntityKeyValuesModifyScope::sm_pAllocatorOverride
void __fastcall CC_Ent_Create(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rbx
  double v4; // xmm0_8
  float v5; // xmm1_4
  double v6; // xmm0_8
  float v7; // xmm1_4
  float m_fValue; // xmm3_4
  float x; // r12d
  float y; // r13d
  float v11; // xmm1_4
  const char *v12; // r12
  CEntityKeyValues *m_pEntityKeyValues; // rbx
  CEntityClass *ClassByDesignName; // rax
  CEntityKeyValues *v15; // rbx
  bool HasValue; // al
  const char *m_pszClassname; // rdx
  CEntityKeyValues *v18; // r12
  bool v19; // zf
  CEntityInstance *v20; // rax
  CEntityInstance *v21; // r13
  CEntitySpawnerContext<CBaseEntity> *m_pContext; // rbx
  SpawnGroupHandle_t i; // r15d
  __int64 delta; // rcx
  double v25; // rax
  CUtlScratchMemoryPool *v26; // rdi
  CEntityKeyValues *v27; // rbx
  int v29; // eax
  const CCommand *v30; // r14
  int v31; // ebx
  __int64 v32; // rdx
  const char *v33; // r12
  uint32 v34; // r13d
  CEntityKeyValues *v35; // r12
  int v36; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v37; // cx
  __int64 v38; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v39; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v40; // rdx
  __int64 v41; // rax
  __int64 v42; // r12
  __int16 v43; // dx
  unsigned __int64 v44; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v45; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v46; // r13
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v47; // r13
  uint16 v48; // ax
  void *v49; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v50; // rax
  __int16 v51; // ax
  signed int v52; // r13d
  void *v53; // rax
  int v54; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v55; // cx
  __int64 v56; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v57; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nCount; // r8
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v60; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  int m_nEntitySpawnerDataUseCount; // ecx
  __int64 v63; // r13
  unsigned __int64 v64; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v65; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v66; // r12
  __int64 v67; // r13
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v68; // r12
  uint16 v69; // ax
  float *v70; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v71; // rax
  unsigned __int64 v72; // rdx
  int v73; // esi
  int v74; // r13d
  int v75; // eax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v76; // rax
  __int64 v77; // r14
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v78; // r13
  __int64 v79; // r14
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v80; // r13
  uint16 m_flags; // ax
  void *v82; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v83; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rbx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v87; // rdx
  __int64 v88; // rax
  CEntityKeyValues *v89; // rbx
  int v90; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v91; // cx
  __int64 v92; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v93; // rdx
  __int64 v94; // r13
  unsigned __int64 v95; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v96; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v97; // r12
  __int64 v98; // r13
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v99; // r12
  uint16 v100; // ax
  QAngle *v101; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v102; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v103; // rdx
  __int64 v104; // rax
  __int16 v105; // ax
  signed int v106; // r13d
  void *v107; // rax
  __int64 v108; // rbx
  __int16 v109; // ax
  float *v110; // rax
  __int64 v111; // rbx
  __int16 v112; // ax
  QAngle *v113; // rax
  int v114; // ecx
  void *v115; // rcx
  unsigned __int64 v116; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v117; // rsi
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rdi
  __int64 v121; // rsi
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // rdi
  __int64 v125; // rsi
  float v126; // [rsp+8h] [rbp-2D8h]
  __int64 v127; // [rsp+8h] [rbp-2D8h]
  __int64 v128; // [rsp+8h] [rbp-2D8h]
  float v129; // [rsp+18h] [rbp-2C8h]
  float v130; // [rsp+18h] [rbp-2C8h]
  signed int v131; // [rsp+20h] [rbp-2C0h]
  signed int v132; // [rsp+20h] [rbp-2C0h]
  float v133; // [rsp+24h] [rbp-2BCh]
  float v134; // [rsp+24h] [rbp-2BCh]
  float v135; // [rsp+24h] [rbp-2BCh]
  int m_nArgc; // [rsp+24h] [rbp-2BCh]
  float sc; // [rsp+28h] [rbp-2B8h]
  float sd; // [rsp+28h] [rbp-2B8h]
  float s; // [rsp+28h] [rbp-2B8h]
  float sa; // [rsp+28h] [rbp-2B8h]
  char *sb; // [rsp+28h] [rbp-2B8h]
  CEntityKeyValues *v142; // [rsp+30h] [rbp-2B0h] BYREF
  CEntityKeyValues *v143; // [rsp+38h] [rbp-2A8h] BYREF
  Vector forward; // [rsp+40h] [rbp-2A0h] BYREF
  LeafCodeInfo_t v145; // [rsp+50h] [rbp-290h] BYREF
  LeafCodeInfo_t v146; // [rsp+70h] [rbp-270h] BYREF
  __int64 v147[4]; // [rsp+90h] [rbp-250h] BYREF
  int v148; // [rsp+B0h] [rbp-230h] BYREF
  CUtlMemory<const CEntityKeyValues*,int> v149; // [rsp+B8h] [rbp-228h] BYREF
  double v150; // [rsp+D0h] [rbp-210h] BYREF
  CUtlMemory<const CEntityKeyValues*,int> v151; // [rsp+D8h] [rbp-208h] BYREF
  double v152; // [rsp+F0h] [rbp-1F0h] BYREF
  void (*pfn)(detail::GenericClass *); // [rsp+F8h] [rbp-1E8h]
  __int64 v154; // [rsp+100h] [rbp-1E0h]
  CTraceFilterSimple v155; // [rsp+110h] [rbp-1D0h] BYREF
  trace_t tr; // [rsp+150h] [rbp-190h] BYREF
  CEntitySpawnerAsync<CBaseEntity> spawner; // [rsp+200h] [rbp-E0h] BYREF

  if ( args->m_nArgc <= 1 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_CONSOLE, 1) != 0 )
      LoggingSystem_Log(
        LOG_CONSOLE,
        1,
        "ent_create usage:\n\tent_create <classname> [{ \"key1\" \"value1\" \"key2\" \"value2\" }]\n");
    return;
  }
  CommandClient = UTIL_GetCommandClient();
  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  CBasePlayer::EyeVectors(CommandClient, &forward, 0, 0);
  v129 = forward.x * 56755.84;
  v133 = forward.y * 56755.84;
  sc = 56755.84 * forward.z;
  v4 = (*(CommandClient->_vptr_IHandleEntity + 164))(CommandClient);
  *&pfn = v5;
  v152 = v4;
  sd = v5 + sc;
  v130 = v129 + *&v4;
  v134 = v133 + *(&v4 + 1);
  v6 = (*(CommandClient->_vptr_IHandleEntity + 164))(CommandClient);
  *&v151.m_pMemory = v7;
  v150 = v6;
  m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  *&spawner.m_modifyScope.m_pKeyValues = v130 - *&v6;
  spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = m_fValue;
  *(&spawner.m_modifyScope.m_pKeyValues + 1) = v134 - *(&v6 + 1);
  memset(&spawner.m_modifyScope.m_pPrevAllocator + 4, 0, 36);
  *&spawner.m_modifyScope.m_pPrevAllocator = sd - v7;
  *&spawner._vptr_CEntitySpawnerBase = v6;
  spawner.m_pEntityKeyValues = LODWORD(v7);
  LOBYTE(spawner.m_mSpawnGroupToWorld.m_flMatVal[0][1]) = 1;
  BYTE1(spawner.m_mSpawnGroupToWorld.m_flMatVal[0][1]) = (((*&spawner.m_modifyScope.m_pKeyValues
                                                          * *&spawner.m_modifyScope.m_pKeyValues)
                                                         + (*(&spawner.m_modifyScope.m_pKeyValues + 1)
                                                          * *(&spawner.m_modifyScope.m_pKeyValues + 1)))
                                                        + (*&spawner.m_modifyScope.m_pPrevAllocator
                                                         * *&spawner.m_modifyScope.m_pPrevAllocator)) != 0.0;
  CTraceFilterSimple::CTraceFilterSimple(&v155, CommandClient, 4, 0);
  v155.m_attr.m_nInteractsWith |= 0x87001uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &spawner, &v155, &tr);
  x = forward.x;
  s = forward.z;
  y = forward.y;
  spawner._vptr_CEntitySpawnerBase = COERCE_INT_((*(CommandClient->_vptr_IHandleEntity + 164))(CommandClient));
  *&spawner.m_pEntityKeyValues = v11;
  if ( tr.fraction == 1.0 )
  {
    v135 = *&spawner._vptr_CEntitySpawnerBase + (x * 64.0);
    v126 = *(&spawner._vptr_CEntitySpawnerBase + 1) + (y * 64.0);
    sa = v11 + (64.0 * s);
  }
  else
  {
    v135 = tr.endpos.x;
    sa = tr.endpos.z + 12.0;
    v126 = tr.endpos.y;
  }
  v12 = "";
  if ( args->m_nArgc > 1 )
    v12 = args->m_ppArgv[1];
  spawner._vptr_CEntitySpawnerBase = off_3FCEBB0;
  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner.m_pContext = 0;
  spawner.m_scriptClassName.m_pString = 0;
  spawner.m_pFilter = 0;
  spawner._vptr_CEntitySpawnerBase = off_3FCEC50;
  v155._vptr_CTraceFilter = 0xFFFFFFFF00000000LL;
  v155.m_attr.m_nInteractsExclude = 0;
  v155.m_attr.m_nInteractsAs = 0;
  v155.m_attr.m_nEntityIdToIgnore = -1;
  *&v155.m_attr.m_nHierarchyId = -2;
  LOBYTE(v155.m_attr.m_nObjectSetMask) = 0;
  *(&v155.m_attr.m_nObjectSetMask + 1) = 0;
  LODWORD(v155.m_attr.m_nInteractsWith) = 1077936128;
  CEntitySpawnerAsync<CBaseEntity>::Init(&spawner, &v155);
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_7;
  m_nCount = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( spawner.m_pEntityKeyValues->m_keyHashes.m_nCount > 0 )
  {
    m_nAllocated = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v60 = 0;
    while ( 1 )
    {
      if ( m_nAllocated != 0 )
      {
        m_pElements = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( m_nAllocated > 9 )
          m_pElements = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      if ( m_pElements[v60] == -971301790 )
        break;
      if ( m_nCount <= ++v60 )
        goto LABEL_116;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v84 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v85 = v60;
      v86 = &v84[v85];
      if ( v84[v85].m_pAttributeName != 0 )
      {
LABEL_141:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v84[v85].m_pAttributeName);
        goto LABEL_7;
      }
    }
    else
    {
      v84 = 0;
      v86 = 24 * v60;
      v19 = *(&stru_10.m_Lock.gap0 + 3 * v60) == 0;
      v85 = v60;
      if ( !v19 )
        goto LABEL_141;
    }
    v105 = *(v86 + 10);
    if ( (v105 & 1) != 0 )
      *(v86 + 10) = v105 & 0xFFFE;
    *v86 = 0;
    *(v86 + 8) = 30;
    if ( v12 != 0 )
    {
      v106 = strlen(v12) + 1;
      v107 = CEntityVariantAllocator::Allocate(v106);
      *v86 = v107;
      memcpy(v107, v12, v106);
      *(v86 + 10) |= 1u;
    }
    goto LABEL_7;
  }
LABEL_116:
  if ( m_nCount == 0x7FFF )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_215;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v124, v125, v122, v123) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_215:
      v145.m_szFile = "../../public/tier1/utlleanvector.h";
      v145.m_szFunction = "AddToTailGetPtr";
      v145.m_nLine = 557;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v145,
        "%s allocation count overflow",
        "AddToTailGetPtr");
    }
  }
  v72 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
  v73 = m_nCount + 1;
  if ( v73 > v72 )
  {
    LOWORD(v74) = m_nCount + 1;
    if ( v73 > 9 )
    {
      if ( m_nCount == 0x7FFF )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          goto LABEL_208;
        while ( 1 )
        {
          if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v120, v121, v118, v119) != 0 )
            loc_0 = -559038737;
          Plat_ExitProcess(1);
LABEL_208:
          v146.m_szFile = "../../public/tier1/utlleanvector.h";
          v146.m_szFunction = "EnsureCapacity";
          v146.m_nLine = 104;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v146,
            "%s allocation count overflow",
            "EnsureCapacity");
        }
      }
      v74 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
      while ( 1 )
      {
        v75 = v74;
        if ( v73 <= v74 )
          break;
        if ( v74 <= 16382 )
        {
          v114 = 2 * v74;
          v74 = 8;
          if ( 2 * v75 > 7 )
            v74 = v114;
        }
        else
        {
          v74 = 0x7FFF;
        }
      }
    }
    if ( v72 > 9 )
    {
      m_pEntityKeyValues->m_keyHashes.m_pElements = (*(*g_pMemAlloc + 8LL))(
                                                      g_pMemAlloc,
                                                      spawner.m_pEntityKeyValues->m_keyHashes.m_pElements,
                                                      4LL * v74);
      m_nCount = m_pEntityKeyValues->m_keyHashes.m_nCount;
    }
    else if ( v74 > 9 )
    {
      v115 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v74);
      v116 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
      if ( v116 != 0 )
      {
        v117 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v116 > 9 )
          v117 = m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v117 = 0;
      }
      m_pEntityKeyValues->m_keyHashes.m_pElements = memcpy(v115, v117, 4LL * m_pEntityKeyValues->m_keyHashes.m_nCount);
      m_nCount = m_pEntityKeyValues->m_keyHashes.m_nCount;
    }
    m_pEntityKeyValues->m_keyHashes.m_nAllocated = v74;
    v72 = v74;
  }
  m_pEntityKeyValues->m_keyHashes.m_nCount = m_nCount + 1;
  if ( v72 != 0 )
  {
    v76 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v72 > 9 )
      v76 = m_pEntityKeyValues->m_keyHashes.m_pElements;
  }
  else
  {
    v76 = 0;
  }
  v77 = m_nCount;
  v76[m_nCount] = -971301790;
  CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
  if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    v78 = m_pEntityKeyValues->m_keyValues.m_pElements;
  else
    v78 = 0;
  v79 = v77;
  v80 = &v78[v79];
  m_flags = v80->m_value.m_flags;
  if ( (m_flags & 1) != 0 )
    v80->m_value.m_flags = m_flags & 0xFFFE;
  v80->m_value.m_uint64 = 0;
  v80->m_value.m_type = 30;
  if ( v12 != 0 )
  {
    v132 = strlen(v12) + 1;
    v82 = CEntityVariantAllocator::Allocate(v132);
    v80->m_value.m_uint64 = v82;
    memcpy(v82, v12, v132);
    v80->m_value.m_flags |= 1u;
  }
  if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    v83 = m_pEntityKeyValues->m_keyValues.m_pElements;
  else
    v83 = 0;
  v83[v79].m_pAttributeName = 0;
LABEL_7:
  ClassByDesignName = CEntitySystem::FindClassByDesignName(g_pEntitySystem, v12, &spawner.m_scriptClassName);
  v15 = spawner.m_pEntityKeyValues;
  spawner.m_pEntityClass = ClassByDesignName;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_8;
  v54 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v54 <= 0 )
  {
LABEL_106:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
    LOWORD(v63) = v15->m_keyHashes.m_nCount - 1;
    v64 = v15->m_keyHashes.m_nAllocated;
    if ( v64 != 0 )
    {
      if ( v64 <= 9 )
        v65 = (&v15->m_keyHashes.m_nAllocAllocated + 1);
      else
        v65 = v15->m_keyHashes.m_pElements;
    }
    else
    {
      v65 = 0;
    }
    v63 = v63;
    v65[v63] = -467664362;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v15->m_keyValues);
    if ( v15->m_keyValues.m_nAllocated != 0 )
      v66 = v15->m_keyValues.m_pElements;
    else
      v66 = 0;
    v67 = v63;
    v68 = &v66[v67];
    v69 = v68->m_value.m_flags;
    if ( (v69 & 1) != 0 )
      v68->m_value.m_flags = v69 & 0xFFFE;
    v68->m_value.m_uint64 = 0;
    v68->m_value.m_type = 3;
    v70 = CEntityVariantAllocator::Allocate(0xCu);
    v68->m_value.m_uint64 = v70;
    *v70 = v135;
    v70[1] = v126;
    v70[2] = sa;
    v68->m_value.m_flags |= 1u;
    if ( v15->m_keyValues.m_nAllocated != 0 )
      v71 = v15->m_keyValues.m_pElements;
    else
      v71 = 0;
    v71[v67].m_pAttributeName = 0;
  }
  else
  {
    v55 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v56 = 0;
    while ( 1 )
    {
      if ( v55 != 0 )
      {
        v57 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v55 > 9 )
          v57 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v57 = 0;
      }
      if ( v57[v56] == -467664362 )
        break;
      if ( v54 <= ++v56 )
        goto LABEL_106;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v87 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v88 = v56;
      if ( v87[v88].m_pAttributeName != 0 )
      {
LABEL_144:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v87[v88].m_pAttributeName);
        goto LABEL_145;
      }
      v108 = &v87[v88];
    }
    else
    {
      v87 = 0;
      v108 = 24 * v56;
      v19 = *(&stru_10.m_Lock.gap0 + 3 * v56) == 0;
      v88 = v56;
      if ( !v19 )
        goto LABEL_144;
    }
    v109 = *(v108 + 10);
    if ( (v109 & 1) != 0 )
      *(v108 + 10) = v109 & 0xFFFE;
    *v108 = 0;
    *(v108 + 8) = 3;
    v110 = CEntityVariantAllocator::Allocate(0xCu);
    *v108 = v110;
    *v110 = v135;
    v110[1] = v126;
    v110[2] = sa;
    *(v108 + 10) |= 1u;
  }
LABEL_145:
  v89 = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_8;
  v90 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v90 <= 0 )
  {
LABEL_154:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
    LOWORD(v94) = v89->m_keyHashes.m_nCount - 1;
    v95 = v89->m_keyHashes.m_nAllocated;
    if ( v95 != 0 )
    {
      if ( v95 <= 9 )
        v96 = (&v89->m_keyHashes.m_nAllocAllocated + 1);
      else
        v96 = v89->m_keyHashes.m_pElements;
    }
    else
    {
      v96 = 0;
    }
    v94 = v94;
    v96[v94] = -1164387633;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v89->m_keyValues);
    if ( v89->m_keyValues.m_nAllocated != 0 )
      v97 = v89->m_keyValues.m_pElements;
    else
      v97 = 0;
    v98 = v94;
    v99 = &v97[v98];
    v100 = v99->m_value.m_flags;
    if ( (v100 & 1) != 0 )
      v99->m_value.m_flags = v100 & 0xFFFE;
    v99->m_value.m_uint64 = 0;
    v99->m_value.m_type = 39;
    v101 = CEntityVariantAllocator::Allocate(0xCu);
    v99->m_value.m_uint64 = v101;
    *v101 = vec3_angle;
    v99->m_value.m_flags |= 1u;
    if ( v89->m_keyValues.m_nAllocated != 0 )
      v102 = v89->m_keyValues.m_pElements;
    else
      v102 = 0;
    v102[v98].m_pAttributeName = 0;
  }
  else
  {
    v91 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v92 = 0;
    while ( 1 )
    {
      if ( v91 != 0 )
      {
        v93 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v91 > 9 )
          v93 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v93 = 0;
      }
      if ( v93[v92] == -1164387633 )
        break;
      if ( v90 <= ++v92 )
        goto LABEL_154;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v103 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v104 = v92;
      if ( v103[v104].m_pAttributeName != 0 )
      {
LABEL_166:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v103[v104].m_pAttributeName);
        goto LABEL_8;
      }
      v111 = &v103[v104];
    }
    else
    {
      v103 = 0;
      v111 = 24 * v92;
      v19 = *(&stru_10.m_Lock.gap0 + 3 * v92) == 0;
      v104 = v92;
      if ( !v19 )
        goto LABEL_166;
    }
    v112 = *(v111 + 10);
    if ( (v112 & 1) != 0 )
      *(v111 + 10) = v112 & 0xFFFE;
    *v111 = 0;
    *(v111 + 8) = 39;
    v113 = CEntityVariantAllocator::Allocate(0xCu);
    *v111 = v113;
    *v113 = vec3_angle;
    *(v111 + 10) |= 1u;
  }
LABEL_8:
  m_nArgc = args->m_nArgc;
  if ( args->m_nArgc <= 2 )
    goto LABEL_10;
  if ( *args->m_ppArgv[2] != 123 )
    goto LABEL_10;
  v29 = args->m_nArgc;
  if ( m_nArgc <= 4 )
    goto LABEL_10;
  v30 = args;
  v31 = 6;
  v32 = 4;
  while ( 2 )
  {
    sb = "";
    if ( v32 < v29 )
      sb = args->m_ppArgv[v32];
    if ( v31 - 3 < v29 )
    {
      v33 = v30->m_ppArgv[3];
      if ( v33 == 0 )
      {
        v34 = 0;
        goto LABEL_46;
      }
      v34 = 0;
      if ( *v33 == 0 )
        goto LABEL_46;
    }
    else
    {
      v33 = "";
      v34 = 0;
      if ( asc_32DB004[2] == 0 )
        goto LABEL_46;
    }
    v34 = MurmurHash2LowerCase(v33, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      RegisterStringToken(v34, v33, 0, 1);
      v35 = spawner.m_pEntityKeyValues;
      if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
        goto LABEL_47;
      goto LABEL_55;
    }
LABEL_46:
    v35 = spawner.m_pEntityKeyValues;
    if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
      goto LABEL_47;
LABEL_55:
    v36 = v35->m_keyHashes.m_nCount;
    if ( v36 <= 0 )
    {
LABEL_67:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&v35->m_keyHashes);
      v43 = v35->m_keyHashes.m_nCount - 1;
      v44 = v35->m_keyHashes.m_nAllocated;
      if ( v44 != 0 )
      {
        if ( v44 <= 9 )
          v45 = (&v35->m_keyHashes.m_nAllocAllocated + 1);
        else
          v45 = v35->m_keyHashes.m_pElements;
      }
      else
      {
        v45 = 0;
      }
      v45[(v35->m_keyHashes.m_nCount - 1)] = v34;
      v127 = v43;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v35->m_keyValues);
      if ( v35->m_keyValues.m_nAllocated != 0 )
        v46 = v35->m_keyValues.m_pElements;
      else
        v46 = 0;
      v47 = &v46[v127];
      v128 = v127;
      v48 = v47->m_value.m_flags;
      if ( (v48 & 1) != 0 )
        v47->m_value.m_flags = v48 & 0xFFFE;
      v47->m_value.m_uint64 = 0;
      v47->m_value.m_type = 30;
      if ( sb != 0 )
      {
        v131 = strlen(sb) + 1;
        v49 = CEntityVariantAllocator::Allocate(v131);
        v47->m_value.m_uint64 = v49;
        memcpy(v49, sb, v131);
        v47->m_value.m_flags |= 1u;
      }
      if ( v35->m_keyValues.m_nAllocated != 0 )
        v50 = v35->m_keyValues.m_pElements;
      else
        v50 = 0;
      v50[v128].m_pAttributeName = 0;
      goto LABEL_47;
    }
    v37 = v35->m_keyHashes.m_nAllocated;
    v38 = 0;
    while ( v37 == 0 )
    {
      if ( v34 == *(4 * v38) )
        goto LABEL_63;
LABEL_60:
      if ( v36 <= ++v38 )
        goto LABEL_67;
    }
    v39 = (&v35->m_keyHashes.m_nAllocAllocated + 1);
    if ( v37 > 9 )
      v39 = v35->m_keyHashes.m_pElements;
    if ( v34 != v39[v38] )
      goto LABEL_60;
LABEL_63:
    if ( v35->m_keyValues.m_nAllocated != 0 )
    {
      v40 = v35->m_keyValues.m_pElements;
      v41 = v38;
      v42 = &v40[v41];
      if ( v40[v41].m_pAttributeName != 0 )
        goto LABEL_65;
LABEL_80:
      v51 = *(v42 + 10);
      if ( (v51 & 1) != 0 )
        *(v42 + 10) = v51 & 0xFFFE;
      *v42 = 0;
      *(v42 + 8) = 30;
      if ( sb != 0 )
      {
        v52 = strlen(sb) + 1;
        v53 = CEntityVariantAllocator::Allocate(v52);
        *v42 = v53;
        memcpy(v53, sb, v52);
        *(v42 + 10) |= 1u;
      }
    }
    else
    {
      v40 = 0;
      v19 = *(&stru_10.m_Lock.gap0 + 3 * v38) == 0;
      v42 = 24 * v38;
      v41 = v38;
      if ( v19 )
        goto LABEL_80;
LABEL_65:
      Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v40[v41].m_pAttributeName);
    }
LABEL_47:
    v30 = (v30 + 16);
    v32 = v31;
    if ( m_nArgc > v31 )
    {
      v29 = args->m_nArgc;
      v31 += 2;
      continue;
    }
    break;
  }
LABEL_10:
  v146.m_szFunction = 0;
  *&v146.m_nLine = FastDelegate2<CBaseEntity *,CEntityKeyValues const*,void>::InvokeStaticFunction;
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    if ( spawner.m_pEntityClass != 0 )
    {
      HasValue = CEntityKeyValues::HasValue(spawner.m_pEntityKeyValues, -971301790);
      m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
      if ( !HasValue && m_pszClassname != 0 )
      {
        CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
        m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
      }
      (*(*engine + 464LL))(engine, spawner.m_hSpawnGroupHandle, m_pszClassname);
      CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
      v18 = spawner.m_pEntityKeyValues;
      if ( spawner.m_pFilter == 0 )
        goto LABEL_21;
      v142 = spawner.m_pEntityKeyValues;
      v149.m_pMemory = &v142;
      v143 = 0;
      v148 = 1;
      v149.m_nAllocationCount = 1;
      v149.m_nGrowSize = 0x40000000;
      LODWORD(v150) = 0;
      v151.m_pMemory = &v143;
      v151.m_nAllocationCount = 1;
      v151.m_nGrowSize = 0x40000000;
      (*(spawner.m_pFilter->_vptr_ISpawnGroupEntityFilter + 2))(
        spawner.m_pFilter,
        spawner.m_hSpawnGroupHandle,
        spawner.m_behavior == EntitySpawnerAsyncBehavior_t::ENTITY_SPAWNER_ASYNC_PRECACHE_ONLY,
        &v148,
        &v150);
      v18 = 0;
      v19 = LODWORD(v150) == 1;
      LODWORD(v150) = 0;
      if ( v19 )
        v18 = v143;
      if ( (v151.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CEntityKeyValues const*,int>::Purge(&v151);
        if ( (v151.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CEntityKeyValues const*,int>::Purge(&v151);
      }
      v148 = 0;
      if ( (v149.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CEntityKeyValues const*,int>::Purge(&v149);
        if ( (v149.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CEntityKeyValues const*,int>::Purge(&v149);
      }
      if ( v18 != 0 )
      {
LABEL_21:
        SetIdentityMatrix(&v155);
        v20 = (*(spawner.m_pLoadingSpawnGroup->_vptr_ILoadingSpawnGroup + 9))(
                spawner.m_pLoadingSpawnGroup,
                spawner.m_hOwnerSpawnGroup,
                &v155,
                1,
                v18);
        v21 = v20;
        if ( v20 != 0 )
        {
          v147[1] = FastDelegate2<CBaseEntity *,CEntityKeyValues const*,void>::InvokeStaticFunction;
          v147[2] = 0;
          v147[0] = OnEntityCreatedFromConCommand;
          CGameEntitySystem::ListenForEntityInSpawnGroupToFinish(
            g_pGameEntitySystem,
            spawner.m_hSpawnGroupHandle,
            v20,
            v18,
            0,
            v147);
          m_pContext = spawner.m_pContext;
          for ( i = spawner.m_hSpawnGroupHandle; m_pContext != 0; m_pContext = m_pContext->m_pParent )
          {
            v25 = *&m_pContext->m_callback.m_Closure.m_pthis;
            if ( v25 != 0.0 || m_pContext->m_callback.m_Closure.m_pFunction.__pfn != 0 )
            {
              delta = m_pContext->m_callback.m_Closure.m_pFunction.__delta;
              pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
              v152 = v25;
              v154 = delta;
              CGameEntitySystem::ListenForEntityInSpawnGroupToFinish(
                g_pGameEntitySystem,
                i,
                v21,
                v18,
                m_pContext->m_pCompletionListener,
                &v152);
            }
          }
        }
      }
    }
    else
    {
      CEntityKeyValues::HasValue(spawner.m_pEntityKeyValues, -971301790);
    }
  }
  v26 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  spawner._vptr_CEntitySpawnerBase = off_3FCEBB0;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v26 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v26);
  }
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    v27 = spawner.m_pEntityKeyValues;
    if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v27);
      operator delete(v27);
    }
  }
  if ( spawner.m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
}


// CC_GetCommandEnt  (line 5701, @0x0000000002163190, libserver.so)  // inlines: Arg, CGameTrace, EnableInteractsWith, GetFloat, GetInstance, IndexToIdentity, Init, Instance, IsUsed, LengthSqr, LookupEntityByIndex, LookupEntityByNetworkIndex, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, atoi, operator*, operator+, operator=, operator[]
// calls: strtol, UTIL_GetCommandClient, CGameTrace::Init, CBasePlayer::EyeVectors, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, Msg, CGameEntitySystem::FindEntityByName, CGameEntitySystem::FindEntityByClassname
// callers: CC_Ent_Teleport, CC_Ent_Orient
// strings: "Couldn't find any entity named '%s'\n"
bool __fastcall CC_GetCommandEnt(
        const CCommand *const args,
        CBaseEntity **ent,
        Vector *vecTargetPoint,
        QAngle *vecPlayerAngle)
{
  const char *v8; // rdi
  int v9; // eax
  CBaseEntity *m_pInstance; // rdx
  CEntityIdentity *v11; // rsi
  CEntityIdentity *v12; // rcx
  CBaseEntity *EntityByClassname; // rax
  CBasePlayer *CommandClient; // rbx
  double v15; // xmm0_8
  int (**vptr_IHandleEntity)(...); // rax
  float v17; // xmm1_4
  vec_t v18; // xmm1_4
  bool v19; // r13
  vec_t *v20; // rax
  const char *v22; // rsi
  const char *v23; // rdx
  CBaseEntity *EntityByName; // rax
  const char *v25; // rdx
  float v26; // [rsp+14h] [rbp-1ACh]
  float v27; // [rsp+14h] [rbp-1ACh]
  float v28; // [rsp+18h] [rbp-1A8h]
  float v29; // [rsp+18h] [rbp-1A8h]
  float v30; // [rsp+1Ch] [rbp-1A4h]
  float v31; // [rsp+1Ch] [rbp-1A4h]
  Vector forward; // [rsp+20h] [rbp-1A0h] BYREF
  double v33; // [rsp+30h] [rbp-190h]
  vec_t v34; // [rsp+38h] [rbp-188h]
  double v35; // [rsp+40h] [rbp-180h]
  float v36; // [rsp+48h] [rbp-178h]
  CTraceFilterSimple v37; // [rsp+50h] [rbp-170h] BYREF
  Ray_t ray; // [rsp+90h] [rbp-130h] BYREF
  trace_t tr; // [rsp+E0h] [rbp-E0h] BYREF

  v8 = "";
  *ent = 0;
  if ( args->m_nArgc > 1 )
    v8 = args->m_ppArgv[1];
  v9 = strtol(v8, 0, 10);
  if ( v9 <= 0 )
  {
    v23 = "";
    if ( args->m_nArgc > 1 )
      v23 = args->m_ppArgv[1];
    EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, v23, 0, 0, 0, 0);
    *ent = EntityByName;
    if ( EntityByName != 0 )
      goto LABEL_11;
    v25 = "";
    if ( args->m_nArgc > 1 )
      v25 = args->m_ppArgv[1];
    EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, 0, v25);
    *ent = EntityByClassname;
  }
  else
  {
    m_pInstance = 0;
    if ( v9 <= 32766 )
    {
      v11 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[v9 >> 9];
      if ( v11 != 0 )
      {
        v12 = &v11[v9 & 0x1FF];
        if ( v12 != 0 && (v12->m_EHandle.m_Index & 0x7FFF) == v9 )
          m_pInstance = v12->m_pInstance;
      }
    }
    *ent = m_pInstance;
    EntityByClassname = m_pInstance;
  }
  if ( EntityByClassname != 0 )
  {
LABEL_11:
    CommandClient = UTIL_GetCommandClient();
    if ( vecTargetPoint != 0 )
    {
      memset(&tr.m_ShapeAttributes, 0, 31);
      tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
      CGameTrace::Init(&tr);
      CBasePlayer::EyeVectors(CommandClient, &forward, 0, 0);
      v26 = forward.x * 56755.84;
      v28 = forward.y * 56755.84;
      v30 = 56755.84 * forward.z;
      v15 = (*(CommandClient->_vptr_IHandleEntity + 164))(CommandClient);
      vptr_IHandleEntity = CommandClient->_vptr_IHandleEntity;
      v35 = v15;
      v36 = v17;
      v27 = v26 + *&v15;
      v31 = v17 + v30;
      v29 = v28 + *(&v15 + 1);
      v33 = (vptr_IHandleEntity[164])(CommandClient);
      ray.m_Start.w = 0.0;
      memset(&ray.m_Delta.w, 0, 36);
      ray.m_flRadius = phys_traceline_radius.m_pParent->m_Value.m_fValue;
      ray.m_Delta.x = v27 - *&v33;
      ray.m_Delta.y = v29 - *(&v33 + 1);
      ray.m_Delta.z = v31 - v18;
      v34 = v18;
      *&ray.m_Start.x = v33;
      ray.m_Start.z = v18;
      ray.m_IsRay = 1;
      ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                     + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
      CTraceFilterSimple::CTraceFilterSimple(&v37, CommandClient, 4, 0);
      v37.m_attr.m_nInteractsWith |= 0x87021uLL;
      CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v37, &tr);
      if ( tr.fraction != 1.0 )
        *vecTargetPoint = tr.endpos;
    }
    v19 = 1;
    if ( vecPlayerAngle != 0 )
    {
      v20 = (*(CommandClient->_vptr_IHandleEntity + 165))(CommandClient);
      vecPlayerAngle->x = *v20;
      vecPlayerAngle->y = v20[1];
      vecPlayerAngle->z = v20[2];
    }
    return v19;
  }
  v22 = "";
  if ( args->m_nArgc > 1 )
    v22 = args->m_ppArgv[1];
  v19 = 0;
  Msg("Couldn't find any entity named '%s'\n", v22);
  return v19;
}


// CC_Ent_Teleport  (line 5756, @0x00000000021635e0, libserver.so)
// calls: CC_GetCommandEnt, Msg
// strings: "Format: ent_teleport <entity name>\n"
void __fastcall CC_Ent_Teleport(const CCommandContext *const ctx, const CCommand *const args)
{
  CBaseEntity *pEnt; // [rsp+8h] [rbp-28h] BYREF
  Vector vecTargetPoint; // [rsp+10h] [rbp-20h] BYREF

  if ( args->m_nArgc <= 1 )
  {
    Msg("Format: ent_teleport <entity name>\n");
  }
  else if ( CC_GetCommandEnt(args, &pEnt, &vecTargetPoint, 0) )
  {
    (*(pEnt->_vptr_IHandleEntity + 128))(pEnt, &vecTargetPoint, 0, 0);
  }
}


// CC_Ent_Orient  (line 5777, @0x0000000002163650, libserver.so)  // inlines: V_strncmp<int>, operator=
// calls: CC_GetCommandEnt, CBaseEntity::GetAbsAngles, CBaseEntity::SetAbsAngles, Msg, _V_strncmp
// strings: "Format: ent_orient <entity name> <optional: allangles>\n", "allangles"
void __fastcall CC_Ent_Orient(const CCommandContext *const ctx, const CCommand *const args)
{
  QAngle *AbsAngles; // rax
  bool v4; // zf
  CBaseEntity *pEnt; // [rsp+8h] [rbp-38h] BYREF
  QAngle vecPlayerAngles; // [rsp+10h] [rbp-30h] BYREF
  QAngle vecEntAngles; // [rsp+20h] [rbp-20h] BYREF

  if ( args->m_nArgc <= 1 )
  {
    Msg("Format: ent_orient <entity name> <optional: allangles>\n");
  }
  else if ( CC_GetCommandEnt(args, &pEnt, 0, &vecPlayerAngles) )
  {
    AbsAngles = CBaseEntity::GetAbsAngles(pEnt);
    v4 = args->m_nArgc == 3;
    vecEntAngles = *AbsAngles;
    if ( !v4 || _V_strncmp(args->m_ppArgv[2], "allangles", 9) != 0 )
      vecEntAngles.y = vecPlayerAngles.y;
    else
      vecEntAngles = vecPlayerAngles;
    CBaseEntity::SetAbsAngles(pEnt, &vecEntAngles);
  }
}


// CBaseEntity::PerformDataDescValidation  (line 5813, @0x0000000002160370, libserver.so)
bool __fastcall CBaseEntity::PerformDataDescValidation(
        const CBaseEntity *const this,
        ValidationSpewType_t nSpewType,
        ValidationResult_t *const result)
{
  (*(this->_vptr_IHandleEntity + 26))(this, result);
  return result->m_bValid;
}


// CBaseEntity::IsDatadescValidating  (line 5821, @0x00000000021603a0, libserver.so)
// callers: CDebugHistory::~CDebugHistory, CDebugHistory::CDebugHistory
// globals: CBaseEntity::sm_bDatadescValidating
bool __cdecl CBaseEntity::IsDatadescValidating()
{
  return CBaseEntity::sm_bDatadescValidating;
}


