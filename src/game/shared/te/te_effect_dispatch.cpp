// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/te/te_effect_dispatch.cpp:39
class TEEffectDispatch_GameEvent_t : public CNetMessagePB<400, CMsgTEEffectDispatch, (SignonGroup_t)5u, (NetChannelBufType_t)0, true> {
public:

	TEEffectDispatch_GameEvent_t(TEEffectDispatch_GameEvent_t &);
	TEEffectDispatch_GameEvent_t(const TEEffectDispatch_GameEvent_t &);
	TEEffectDispatch_GameEvent_t();
	virtual ~TEEffectDispatch_GameEvent_t();

	// sizeof = 32
};

// src/game/shared/te/te_effect_dispatch.cpp:44
class CTEEffectDispatch : public CBaseTempEntity {
public:

	CTEEffectDispatch(CTEEffectDispatch &);
	CTEEffectDispatch(const CTEEffectDispatch &);
	CTEEffectDispatch();
	virtual void Create(IRecipientFilter &, float);
	virtual void StaticInit();
	void ConvertEffectDataToPB(const CEffectData &, CMsgEffectData *);
	void ConvertEffectData(const CMsgEffectData &, CEffectData &);
	bool Dispatch(const TEEffectDispatch_GameEvent_t &);
	virtual ~CTEEffectDispatch();

	// vtable[2] Create
	// vtable[3] StaticInit
	// sizeof = 104
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// TEEffectDispatch_GameEvent_t::~TEEffectDispatch_GameEvent_t  (line 39, @0x0000000002f50cf0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgTEEffectDispatch::~CMsgTEEffectDispatch
void __fastcall TEEffectDispatch_GameEvent_t::~TEEffectDispatch_GameEvent_t(TEEffectDispatch_GameEvent_t *const this)
{
  *this = &off_47B9CD0;
  CMsgTEEffectDispatch::~CMsgTEEffectDispatch(this);
}


// TEEffectDispatch_GameEvent_t::~TEEffectDispatch_GameEvent_t  (line 39, @0x0000000002f50d10, libserver.so)  // inlines: ~CNetMessagePB, ~TEEffectDispatch_GameEvent_t
// calls: CMsgTEEffectDispatch::~CMsgTEEffectDispatch, operator delete
void __fastcall TEEffectDispatch_GameEvent_t::~TEEffectDispatch_GameEvent_t(TEEffectDispatch_GameEvent_t *const this)
{
  *this = &off_47B9CD0;
  CMsgTEEffectDispatch::~CMsgTEEffectDispatch(this);
  operator delete(this);
}


// CTEEffectDispatch::~CTEEffectDispatch  (line 44, @0x0000000002f55930, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~TEEffectDispatch_GameEvent_t
// calls: CMsgTEEffectDispatch::~CMsgTEEffectDispatch, CUtlSlot::~CUtlSlot
void __fastcall CTEEffectDispatch::~CTEEffectDispatch(CTEEffectDispatch *const this)
{
  CMsgTEEffectDispatch *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47B9E50;
  *v2 = &off_47B9CD0;
  CMsgTEEffectDispatch::~CMsgTEEffectDispatch(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
}


// CTEEffectDispatch::~CTEEffectDispatch  (line 44, @0x0000000002f55d90, libserver.so)  // inlines: ~CBaseTempEntity, ~CNetMessagePB, ~CTEEffectDispatch, ~TEEffectDispatch_GameEvent_t
// calls: CMsgTEEffectDispatch::~CMsgTEEffectDispatch, CUtlSlot::~CUtlSlot, operator delete
void __fastcall CTEEffectDispatch::~CTEEffectDispatch(CTEEffectDispatch *const this)
{
  CMsgTEEffectDispatch *v2; // rdi

  v2 = (this + 72);
  *(v2 - 9) = off_47B9E50;
  *v2 = &off_47B9CD0;
  CMsgTEEffectDispatch::~CMsgTEEffectDispatch(v2);
  *this = off_47B7A30;
  CUtlSlot::~CUtlSlot((this + 8));
  operator delete(this);
}


// CTEEffectDispatch::Create  (line 51, @0x0000000002f582e0, libserver.so)  // inlines: FindGameEvent<TEEffectDispatch_GameEvent_t>, FindOrCreateGameEvent<TEEffectDispatch_GameEvent_t>, PostEvent<TEEffectDispatch_GameEvent_t>
// globals: g_pGameEventSystem, IGameEventSystem::FindOrCreateGameEvent<TEEffectDispatch_GameEvent_t>(bool)::s_hEvent
void __fastcall CTEEffectDispatch::Create(
        CTEEffectDispatch *const this,
        IRecipientFilter *const filter,
        double a3,
        float delay)
{
  IGameEventSystem *v6; // rbx
  __int64 v7; // r12
  void (__fastcall *v8)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, char *, __int64); // r14

  v6 = g_pGameEventSystem;
  v7 = IGameEventSystem::FindOrCreateGameEvent<TEEffectDispatch_GameEvent_t>(bool)::s_hEvent;
  v8 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<TEEffectDispatch_GameEvent_t>(bool)::s_hEvent,
    a3,
    delay);
  v8(v6, 0xFFFFFFFFLL, 0, filter, v7, this + 72, 32);
}


// CTEEffectDispatch::StaticInit  (line 59, @0x0000000002f4f8e0, libserver.so)
void __fastcall CTEEffectDispatch::StaticInit(CTEEffectDispatch *const this)
{
  ;
}


// DispatchEffect  (line 160, @0x0000000002f4e5b0, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, ConvertEffectDataToPB, Create, FindGameEvent<TEEffectDispatch_GameEvent_t>, FindOrCreateGameEvent<TEEffectDispatch_GameEvent_t>, GetEntryIndex, GetHashCode, GetSerialNumber, PostEvent<TEEffectDispatch_GameEvent_t>, QAngleToCMsgQAngle, ToNetworkableInt, VectorToCMsgVector, mutable_angles, mutable_effectdata, mutable_normal, mutable_origin, mutable_start, set_attachmentindex, set_attachmentname, set_color, set_damagetype, set_effectindex, set_effectname, set_entity, set_flags, set_has_angles, set_has_attachmentindex, set_has_attachmentname, set_has_color, set_has_damagetype, set_has_effectdata, set_has_effectindex, set_has_effectname, set_has_entity, set_has_flags, set_has_hitbox, set_has_magnitude, set_has_material, set_has_normal, set_has_origin, set_has_otherentity, set_has_radius, set_has_scale, set_has_start, set_has_surfaceprop, set_has_x, set_has_y, set_has_z, set_hitbox, set_magnitude, set_material, set_otherentity, set_radius, set_scale, set_surfaceprop, set_x, set_y, set_z, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, GetEffectIndex, CRecipientFilter::~CRecipientFilter, operator new, CMsgEffectData::CMsgEffectData, CMsgVector::CMsgVector, CMsgQAngle::CMsgQAngle, __stack_chk_fail, operator delete, _Unwind_Resume
// callers: CBaseEntity::ImpactTrace, CBaseEntity::HandleShotImpactingWater, CBaseEntity::FireBullets, UTIL_Tracer, UTIL_BloodImpact, CBaseEntity::HandleShotImpactingGlass, CC_Player_TestDispatchEffect, CEnvSplash::InputSplash, UTIL_BloodSpray, CFourWheelVehiclePhysics::PlaceWheelDust, DispatchParticleEffect, DispatchParticleEffectLink (15 total)
// globals: te, g_pGameEventSystem, IGameEventSystem::FindOrCreateGameEvent<TEEffectDispatch_GameEvent_t>(bool)::s_hEvent
void __fastcall DispatchEffect(const char *pName, const CEffectData *const data)
{
  CMsgEffectData *v4; // rbx
  CMsgVector *v5; // rax
  int v6; // edx
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CMsgVector *v9; // rax
  int v10; // edx
  vec_t v11; // xmm0_4
  vec_t v12; // xmm0_4
  CMsgVector *v13; // rax
  int v14; // edx
  vec_t v15; // xmm0_4
  vec_t v16; // xmm0_4
  CMsgQAngle *v17; // rax
  int v18; // edx
  vec_t v19; // xmm0_4
  vec_t v20; // xmm0_4
  uint32 v21; // eax
  int v22; // edx
  uint32 v23; // eax
  float m_Value; // xmm0_4
  int v25; // eax
  float v26; // xmm0_4
  float v27; // xmm0_4
  uint32 m_nHashCode; // eax
  __int64 v29; // rax
  int v30; // edx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  int EffectIndex; // eax
  __int64 v38; // rdi
  int v39; // ebx
  IGameEventSystem *v40; // rbx
  __int64 v41; // r12
  void (__fastcall *v42)(IGameEventSystem *, __int64, _QWORD, CReliableBroadcastRecipientFilter *, __int64, __int64 *, __int64); // r14
  CMsgEffectData *v43; // r12
  CMsgVector *v44; // r15
  CMsgVector *v45; // r15
  CMsgVector *v46; // r15
  CMsgQAngle *v47; // r15
  CReliableBroadcastRecipientFilter filter; // [rsp+20h] [rbp-170h] BYREF
  unsigned __int64 v49; // [rsp+158h] [rbp-38h]

  v49 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filter);
  CRecipientFilter::AddAllPlayers(&filter);
  if ( (*(te->_vptr_IPredictionSystem + 2))(te, &filter) == 0 )
  {
    v4 = qword_4D6E7A0;
    dword_4D6E798 |= 1u;
    if ( qword_4D6E7A0 == 0 )
    {
      v4 = operator new(0x78u);
      CMsgEffectData::CMsgEffectData(v4);
      qword_4D6E7A0 = v4;
    }
    v5 = *(v4 + 3);
    *(v4 + 4) |= 1u;
    if ( v5 == 0 )
    {
      v44 = operator new(0x28u);
      CMsgVector::CMsgVector(v44);
      *(v4 + 3) = v44;
      v5 = v44;
    }
    v6 = *(v5 + 4);
    *(v5 + 6) = LODWORD(data->m_vOrigin.m_Value.x);
    *(v5 + 4) = v6 | 1;
    y = data->m_vOrigin.m_Value.y;
    *(v5 + 4) = v6 | 3;
    *(v5 + 7) = y;
    z = data->m_vOrigin.m_Value.z;
    *(v5 + 4) = v6 | 7;
    *(v5 + 8) = z;
    v9 = *(v4 + 4);
    *(v4 + 4) |= 2u;
    if ( v9 == 0 )
    {
      v45 = operator new(0x28u);
      CMsgVector::CMsgVector(v45);
      *(v4 + 4) = v45;
      v9 = v45;
    }
    v10 = *(v9 + 4);
    *(v9 + 6) = LODWORD(data->m_vStart.m_Value.x);
    *(v9 + 4) = v10 | 1;
    v11 = data->m_vStart.m_Value.y;
    *(v9 + 4) = v10 | 3;
    *(v9 + 7) = v11;
    v12 = data->m_vStart.m_Value.z;
    *(v9 + 4) = v10 | 7;
    *(v9 + 8) = v12;
    v13 = *(v4 + 5);
    *(v4 + 4) |= 4u;
    if ( v13 == 0 )
    {
      v46 = operator new(0x28u);
      CMsgVector::CMsgVector(v46);
      *(v4 + 5) = v46;
      v13 = v46;
    }
    v14 = *(v13 + 4);
    *(v13 + 6) = LODWORD(data->m_vNormal.m_Value.x);
    *(v13 + 4) = v14 | 1;
    v15 = data->m_vNormal.m_Value.y;
    *(v13 + 4) = v14 | 3;
    *(v13 + 7) = v15;
    v16 = data->m_vNormal.m_Value.z;
    *(v13 + 4) = v14 | 7;
    *(v13 + 8) = v16;
    v17 = *(v4 + 6);
    *(v4 + 4) |= 8u;
    if ( v17 == 0 )
    {
      v47 = operator new(0x28u);
      CMsgQAngle::CMsgQAngle(v47);
      *(v4 + 6) = v47;
      v17 = v47;
    }
    v18 = *(v17 + 4);
    *(v17 + 6) = LODWORD(data->m_vAngles.m_Value.x);
    *(v17 + 4) = v18 | 1;
    v19 = data->m_vAngles.m_Value.y;
    *(v17 + 4) = v18 | 3;
    *(v17 + 7) = v19;
    v20 = data->m_vAngles.m_Value.z;
    *(v17 + 4) = v18 | 7;
    *(v17 + 8) = v20;
    v21 = 0xFFFFFF;
    if ( data->m_hEntity.m_Value.m_Index != -1 )
      v21 = data->m_hEntity.m_Value.m_Index & 0x7FFF | (data->m_hEntity.m_Value.m_Index >> 1) & 0xFFC000;
    v22 = *(v4 + 4);
    *(v4 + 14) = v21;
    *(v4 + 4) = v22 | 0x10;
    if ( data->m_hOtherEntity.m_Value.m_Index == -1 )
      v23 = 0xFFFFFF;
    else
      v23 = data->m_hOtherEntity.m_Value.m_Index & 0x7FFF | (data->m_hOtherEntity.m_Value.m_Index >> 1) & 0xFFC000;
    *(v4 + 15) = v23;
    *(v4 + 4) = v22 | 0x30;
    m_Value = data->m_flScale.m_Value;
    *(v4 + 4) = v22 | 0x70;
    v25 = v22;
    LOBYTE(v25) = v22 | 0xF0;
    *(v4 + 16) = m_Value;
    v26 = data->m_flMagnitude.m_Value;
    *(v4 + 4) = v25;
    *(v4 + 17) = v26;
    v27 = data->m_flScale.m_Value;
    *(v4 + 4) = v22 | 0x1F0;
    *(v4 + 18) = v27;
    m_nHashCode = data->m_nSurfaceProp.m_Value.m_nHashCode;
    *(v4 + 4) = v22 | 0x3F0;
    *(v4 + 19) = m_nHashCode;
    v29 = (*(*g_pResourceSystem + 320LL))(g_pResourceSystem, data->m_nEffectIndex.m_Value.m_pBinding);
    v30 = *(v4 + 4);
    *(v4 + 10) = v29;
    v31 = v30;
    BYTE1(v31) = BYTE1(v30) | 4;
    *(v4 + 4) = v31;
    v32 = v30;
    LODWORD(v29) = data->m_nDamageType.m_Value;
    BYTE1(v32) = BYTE1(v30) | 0xC;
    *(v4 + 4) = v32;
    v33 = v30;
    BYTE1(v33) = BYTE1(v30) | 0x1C;
    *(v4 + 22) = v29;
    LODWORD(v29) = data->m_nMaterial.m_Value;
    *(v4 + 4) = v33;
    v34 = v30;
    BYTE1(v34) = BYTE1(v30) | 0x3C;
    *(v4 + 23) = v29;
    LODWORD(v29) = data->m_nHitBox.m_Value;
    *(v4 + 4) = v34;
    v35 = v30;
    BYTE1(v35) = BYTE1(v30) | 0x7C;
    *(v4 + 24) = v29;
    LODWORD(v29) = data->m_nColor.m_Value;
    *(v4 + 4) = v35;
    v36 = v30;
    BYTE1(v36) = BYTE1(v30) | 0xFC;
    *(v4 + 25) = v29;
    LODWORD(v29) = data->m_fFlags.m_Value;
    *(v4 + 4) = v36;
    *(v4 + 26) = v29;
    LODWORD(v29) = data->m_nAttachmentIndex.m_Value;
    *(v4 + 4) = v30 | 0x1FC00;
    *(v4 + 27) = v29;
    LODWORD(v29) = data->m_nAttachmentName.m_Value.m_nHashCode;
    *(v4 + 4) = v30 | 0x5FC00;
    *(v4 + 29) = v29;
    LODWORD(v29) = data->m_iEffectName.m_Value;
    *(v4 + 4) = v30 | 0x7FC00;
    *(v4 + 28) = v29;
    EffectIndex = GetEffectIndex(pName);
    v38 = qword_4D6E7A0;
    v39 = EffectIndex;
    dword_4D6E798 |= 1u;
    if ( qword_4D6E7A0 == 0 )
    {
      v43 = operator new(0x78u);
      CMsgEffectData::CMsgEffectData(v43);
      qword_4D6E7A0 = v43;
      v38 = v43;
    }
    *(v38 + 112) = v39;
    v40 = g_pGameEventSystem;
    *(v38 + 16) |= 0x20000u;
    v41 = IGameEventSystem::FindOrCreateGameEvent<TEEffectDispatch_GameEvent_t>(bool)::s_hEvent;
    v42 = *(*v40 + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<TEEffectDispatch_GameEvent_t>(bool)::s_hEvent);
    v42(v40, 0xFFFFFFFFLL, 0, &filter, v41, &qword_4D6E788, 32);
  }
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// DispatchEffect  (line 194, @0x0000000002f4eb30, libserver.so)  // inlines: ConvertEffectDataToPB, Create, FindGameEvent<TEEffectDispatch_GameEvent_t>, FindOrCreateGameEvent<TEEffectDispatch_GameEvent_t>, GetEntryIndex, GetHashCode, GetSerialNumber, PostEvent<TEEffectDispatch_GameEvent_t>, QAngleToCMsgQAngle, ToNetworkableInt, VectorToCMsgVector, mutable_angles, mutable_effectdata, mutable_normal, mutable_origin, mutable_start, set_attachmentindex, set_attachmentname, set_color, set_damagetype, set_effectindex, set_effectname, set_entity, set_flags, set_has_angles, set_has_attachmentindex, set_has_attachmentname, set_has_color, set_has_damagetype, set_has_effectdata, set_has_effectindex, set_has_effectname, set_has_entity, set_has_flags, set_has_hitbox, set_has_magnitude, set_has_material, set_has_normal, set_has_origin, set_has_otherentity, set_has_radius, set_has_scale, set_has_start, set_has_surfaceprop, set_has_x, set_has_y, set_has_z, set_hitbox, set_magnitude, set_material, set_otherentity, set_radius, set_scale, set_surfaceprop, set_x, set_y, set_z
// calls: GetEffectIndex, operator new, CMsgQAngle::CMsgQAngle, CMsgEffectData::CMsgEffectData, CMsgVector::CMsgVector, operator delete, _Unwind_Resume
// callers: DispatchParticleEffect
// globals: te, g_pGameEventSystem, IGameEventSystem::FindOrCreateGameEvent<TEEffectDispatch_GameEvent_t>(bool)::s_hEvent
void __fastcall DispatchEffect(
        IRecipientFilter *const filter,
        float flDelay,
        const char *pName,
        const CEffectData *const data)
{
  CMsgEffectData *v7; // rbx
  CMsgVector *v8; // rax
  int v9; // edx
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CMsgVector *v12; // rax
  int v13; // edx
  vec_t v14; // xmm0_4
  vec_t v15; // xmm0_4
  CMsgVector *v16; // rax
  int v17; // edx
  vec_t v18; // xmm0_4
  vec_t v19; // xmm0_4
  CMsgQAngle *v20; // rax
  int v21; // edx
  vec_t v22; // xmm0_4
  vec_t v23; // xmm0_4
  uint32 v24; // eax
  int v25; // edx
  uint32 v26; // eax
  float m_Value; // xmm0_4
  int v28; // eax
  float v29; // xmm0_4
  float v30; // xmm0_4
  uint32 m_nHashCode; // eax
  __int64 v32; // rax
  int v33; // edx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  int EffectIndex; // eax
  __int64 v41; // rdi
  int v42; // ebx
  IGameEventSystem *v43; // rbx
  __int64 v44; // r12
  void (__fastcall *v45)(IGameEventSystem *, __int64, _QWORD, IRecipientFilter *const, __int64, __int64 *, __int64); // r14
  CMsgQAngle *v46; // r15
  CMsgEffectData *v47; // r12
  CMsgVector *v48; // r15
  CMsgVector *v49; // r15
  CMsgVector *v50; // r15

  if ( (*(te->_vptr_IPredictionSystem + 2))(te, filter, flDelay) == 0 )
  {
    v7 = qword_4D6E7A0;
    dword_4D6E798 |= 1u;
    if ( qword_4D6E7A0 == 0 )
    {
      v7 = operator new(0x78u);
      CMsgEffectData::CMsgEffectData(v7);
      qword_4D6E7A0 = v7;
    }
    v8 = *(v7 + 3);
    *(v7 + 4) |= 1u;
    if ( v8 == 0 )
    {
      v49 = operator new(0x28u);
      CMsgVector::CMsgVector(v49);
      *(v7 + 3) = v49;
      v8 = v49;
    }
    v9 = *(v8 + 4);
    *(v8 + 6) = LODWORD(data->m_vOrigin.m_Value.x);
    *(v8 + 4) = v9 | 1;
    y = data->m_vOrigin.m_Value.y;
    *(v8 + 4) = v9 | 3;
    *(v8 + 7) = y;
    z = data->m_vOrigin.m_Value.z;
    *(v8 + 4) = v9 | 7;
    *(v8 + 8) = z;
    v12 = *(v7 + 4);
    *(v7 + 4) |= 2u;
    if ( v12 == 0 )
    {
      v48 = operator new(0x28u);
      CMsgVector::CMsgVector(v48);
      *(v7 + 4) = v48;
      v12 = v48;
    }
    v13 = *(v12 + 4);
    *(v12 + 6) = LODWORD(data->m_vStart.m_Value.x);
    *(v12 + 4) = v13 | 1;
    v14 = data->m_vStart.m_Value.y;
    *(v12 + 4) = v13 | 3;
    *(v12 + 7) = v14;
    v15 = data->m_vStart.m_Value.z;
    *(v12 + 4) = v13 | 7;
    *(v12 + 8) = v15;
    v16 = *(v7 + 5);
    *(v7 + 4) |= 4u;
    if ( v16 == 0 )
    {
      v50 = operator new(0x28u);
      CMsgVector::CMsgVector(v50);
      *(v7 + 5) = v50;
      v16 = v50;
    }
    v17 = *(v16 + 4);
    *(v16 + 6) = LODWORD(data->m_vNormal.m_Value.x);
    *(v16 + 4) = v17 | 1;
    v18 = data->m_vNormal.m_Value.y;
    *(v16 + 4) = v17 | 3;
    *(v16 + 7) = v18;
    v19 = data->m_vNormal.m_Value.z;
    *(v16 + 4) = v17 | 7;
    *(v16 + 8) = v19;
    v20 = *(v7 + 6);
    *(v7 + 4) |= 8u;
    if ( v20 == 0 )
    {
      v46 = operator new(0x28u);
      CMsgQAngle::CMsgQAngle(v46);
      *(v7 + 6) = v46;
      v20 = v46;
    }
    v21 = *(v20 + 4);
    *(v20 + 6) = LODWORD(data->m_vAngles.m_Value.x);
    *(v20 + 4) = v21 | 1;
    v22 = data->m_vAngles.m_Value.y;
    *(v20 + 4) = v21 | 3;
    *(v20 + 7) = v22;
    v23 = data->m_vAngles.m_Value.z;
    *(v20 + 4) = v21 | 7;
    *(v20 + 8) = v23;
    v24 = 0xFFFFFF;
    if ( data->m_hEntity.m_Value.m_Index != -1 )
      v24 = data->m_hEntity.m_Value.m_Index & 0x7FFF | (data->m_hEntity.m_Value.m_Index >> 1) & 0xFFC000;
    v25 = *(v7 + 4);
    *(v7 + 14) = v24;
    *(v7 + 4) = v25 | 0x10;
    if ( data->m_hOtherEntity.m_Value.m_Index == -1 )
      v26 = 0xFFFFFF;
    else
      v26 = data->m_hOtherEntity.m_Value.m_Index & 0x7FFF | (data->m_hOtherEntity.m_Value.m_Index >> 1) & 0xFFC000;
    *(v7 + 15) = v26;
    *(v7 + 4) = v25 | 0x30;
    m_Value = data->m_flScale.m_Value;
    *(v7 + 4) = v25 | 0x70;
    v28 = v25;
    LOBYTE(v28) = v25 | 0xF0;
    *(v7 + 16) = m_Value;
    v29 = data->m_flMagnitude.m_Value;
    *(v7 + 4) = v28;
    *(v7 + 17) = v29;
    v30 = data->m_flScale.m_Value;
    *(v7 + 4) = v25 | 0x1F0;
    *(v7 + 18) = v30;
    m_nHashCode = data->m_nSurfaceProp.m_Value.m_nHashCode;
    *(v7 + 4) = v25 | 0x3F0;
    *(v7 + 19) = m_nHashCode;
    v32 = (*(*g_pResourceSystem + 320LL))(g_pResourceSystem, data->m_nEffectIndex.m_Value.m_pBinding);
    v33 = *(v7 + 4);
    *(v7 + 10) = v32;
    v34 = v33;
    BYTE1(v34) = BYTE1(v33) | 4;
    *(v7 + 4) = v34;
    v35 = v33;
    LODWORD(v32) = data->m_nDamageType.m_Value;
    BYTE1(v35) = BYTE1(v33) | 0xC;
    *(v7 + 4) = v35;
    v36 = v33;
    BYTE1(v36) = BYTE1(v33) | 0x1C;
    *(v7 + 22) = v32;
    LODWORD(v32) = data->m_nMaterial.m_Value;
    *(v7 + 4) = v36;
    v37 = v33;
    BYTE1(v37) = BYTE1(v33) | 0x3C;
    *(v7 + 23) = v32;
    LODWORD(v32) = data->m_nHitBox.m_Value;
    *(v7 + 4) = v37;
    v38 = v33;
    BYTE1(v38) = BYTE1(v33) | 0x7C;
    *(v7 + 24) = v32;
    LODWORD(v32) = data->m_nColor.m_Value;
    *(v7 + 4) = v38;
    v39 = v33;
    BYTE1(v39) = BYTE1(v33) | 0xFC;
    *(v7 + 25) = v32;
    LODWORD(v32) = data->m_fFlags.m_Value;
    *(v7 + 4) = v39;
    *(v7 + 26) = v32;
    LODWORD(v32) = data->m_nAttachmentIndex.m_Value;
    *(v7 + 4) = v33 | 0x1FC00;
    *(v7 + 27) = v32;
    LODWORD(v32) = data->m_nAttachmentName.m_Value.m_nHashCode;
    *(v7 + 4) = v33 | 0x5FC00;
    *(v7 + 29) = v32;
    LODWORD(v32) = data->m_iEffectName.m_Value;
    *(v7 + 4) = v33 | 0x7FC00;
    *(v7 + 28) = v32;
    EffectIndex = GetEffectIndex(pName);
    v41 = qword_4D6E7A0;
    dword_4D6E798 |= 1u;
    v42 = EffectIndex;
    if ( qword_4D6E7A0 == 0 )
    {
      v47 = operator new(0x78u);
      CMsgEffectData::CMsgEffectData(v47);
      qword_4D6E7A0 = v47;
      v41 = v47;
    }
    *(v41 + 112) = v42;
    v43 = g_pGameEventSystem;
    *(v41 + 16) |= 0x20000u;
    v44 = IGameEventSystem::FindOrCreateGameEvent<TEEffectDispatch_GameEvent_t>(bool)::s_hEvent;
    v45 = *(*v43 + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<TEEffectDispatch_GameEvent_t>(bool)::s_hEvent);
    v45(v43, 0xFFFFFFFFLL, 0, filter, v44, &qword_4D6E788, 32);
  }
}


