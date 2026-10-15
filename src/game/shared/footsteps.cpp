
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseCombatCharacter::GetFootstepRunThreshold  (line 37, @0x0000000002222a70, libserver.so)
float __fastcall CBaseCombatCharacter::GetFootstepRunThreshold(const CBaseCombatCharacter *const this)
{
  return 110.0;
}


// CBaseCombatCharacter::PlayFootstepSound  (line 48, @0x000000000223cd80, libserver.so)  // inlines: CreateEvent, FastSqrt, GetAbsVelocity, GetFloat, GetUserID, IsElapsed, MakeStringToken, NetworkStateChanged, Set, Start, VectorAdd, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, entindex, operator char const*, operator+, operator-, operator=<float>
// calls: CountdownTimer::Now, MurmurHash2LowerCase, CUtlString::Get, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CRecipientFilter::RemoveRecipientsByPVS, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, NDebugOverlay::Line, CRecipientFilter::~CRecipientFilter, CBaseEntity::CalcAbsoluteVelocity, RegisterStringToken (15 total)
// strings: "wade", "player_footstep"
// globals: engine
void __fastcall CBaseCombatCharacter::PlayFootstepSound(
        CBaseCombatCharacter *const this,
        const Vector *const origin,
        bool leftFoot,
        bool feetInWater,
        bool kneesInWater,
        bool jumping)
{
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // r8
  bool v15; // r9
  double v16; // xmm2_8
  double v17; // xmm1_8
  double v18; // xmm3_8
  __int64 v19; // r15
  uint32 v20; // eax
  bool v21; // r9
  __int64 v22; // rax
  bool v23; // r9
  const CUtlString *v24; // r15
  const CUtlString *v25; // rdi
  const CUtlString *v26; // r15
  const char *v27; // rax
  unsigned int v28; // r15d
  float v29; // xmm0_4
  CEntityIndex v30; // eax
  float y; // xmm1_4
  float z; // xmm0_4
  float v33; // xmm1_4
  float v34; // xmm0_4
  vec_t v35; // xmm0_4
  float v36; // xmm1_4
  vec_t v37; // xmm3_4
  char v38; // al
  __int64 v39; // rax
  const CUtlString *v40; // r15
  char *v41; // rsi
  CBasePlayer *v42; // r13
  __int64 v43; // rax
  __int64 v44; // rbx
  void (__fastcall *v45)(__int64, char *, _QWORD); // r15
  CEntityIndex v46; // eax
  unsigned int v47; // eax
  bool v48; // [rsp-3Ch] [rbp-1ACh]
  __int64 (__fastcall *v50)(__int64, _QWORD, _QWORD); // [rsp-38h] [rbp-1A8h]
  bool v51; // [rsp-38h] [rbp-1A8h]
  const char *v52; // [rsp-38h] [rbp-1A8h]
  unsigned int v53; // [rsp-38h] [rbp-1A8h]
  bool v54; // [rsp-38h] [rbp-1A8h]
  bool v55; // [rsp-30h] [rbp-1A0h]
  bool v56; // [rsp-30h] [rbp-1A0h]
  bool v57; // [rsp-30h] [rbp-1A0h]
  bool v58; // [rsp-30h] [rbp-1A0h]
  uint32 v59; // [rsp-30h] [rbp-1A0h]
  bool v60; // [rsp-30h] [rbp-1A0h]
  float v61; // [rsp-30h] [rbp-1A0h]
  _BOOL4 v62; // [rsp-2Ch] [rbp-19Ch]
  float v63; // [rsp-2Ch] [rbp-19Ch]
  float m_fValue; // [rsp-2Ch] [rbp-19Ch]
  Vector v65; // [rsp-28h] [rbp-198h] BYREF
  Vector v66; // [rsp-18h] [rbp-188h] BYREF
  IRecipientFilter v67; // [rsp-8h] [rbp-178h] BYREF
  CRecipientFilter filter; // [rsp+0h] [rbp-170h]

  *&filter.m_bUsingPredictionRules = __readfsqword(0x28u);
  if ( sv_footsteps.m_pParent->m_Value.m_fValue != 0.0 && (this->m_MoveType.m_Value & 0xFD) != 8 )
  {
    v62 = kneesInWater;
    if ( CountdownTimer::Now(&this->m_footstepTimer) >= this->m_footstepTimer.m_timestamp.m_Value || jumping )
    {
      v10 = (*(this->_vptr_IHandleEntity + 295))(this);
      v14 = v62;
      v15 = jumping;
      if ( v10 != 0 )
      {
        if ( (this->m_iEFlags & 0x1000) != 0 )
        {
          CBaseEntity::CalcAbsoluteVelocity(this);
          v15 = jumping;
          v14 = v62;
        }
        v16 = 0.0;
        *&v17 = LODWORD(this->m_vecAbsVelocity.m_Value.y);
        *&v18 = LODWORD(this->m_vecAbsVelocity.m_Value.z);
        if ( v15 )
        {
          *&v16 = LODWORD(this->m_vecAbsVelocity.m_Value.z);
          *&v16 = *&v18 * *&v18;
        }
        *&v17 = *&v17 * *&v17;
        v63 = fsqrt(((this->m_vecAbsVelocity.m_Value.x * this->m_vecAbsVelocity.m_Value.x) + *&v17) + *&v16);
        if ( v63 >= 100.0
          || (v57 = v15,
              v53 = v14,
              v38 = (*(this->_vptr_IHandleEntity + 140))(this, 100.0, *&v17, v16, v18),
              v14 = v53,
              v15 = v57,
              v38 != 0)
          || (*&v17 = 1036831949, (v63 / 100.0) >= 0.1) )
        {
          if ( this->m_MoveType.m_Value == MoveType_t::MOVETYPE_LADDER )
          {
            v60 = v15;
            v19 = (*(g_pVPhysics2->_vptr_IAppSystem + 18))(
                    g_pVPhysics2,
                    v13,
                    v11,
                    v12,
                    v14,
                    COERCE_DOUBLE(1120403456),
                    v17,
                    v16,
                    v18);
            v50 = *(*v19 + 16LL);
            v20 = MurmurHash2LowerCase("ladder", 0x31415926u);
            v21 = v60;
            if ( !g_bUpdateStringTokenDatabase )
              goto LABEL_15;
            v48 = v60;
            v41 = "ladder";
          }
          else if ( v14 != 0 )
          {
            v58 = v15;
            v19 = (*(g_pVPhysics2->_vptr_IAppSystem + 18))(g_pVPhysics2, COERCE_DOUBLE(1120403456), v17, v16, v18);
            v50 = *(*v19 + 16LL);
            v20 = MurmurHash2LowerCase("wade", 0x31415926u);
            v21 = v58;
            if ( !g_bUpdateStringTokenDatabase )
              goto LABEL_15;
            v48 = v58;
            v41 = "wade";
          }
          else
          {
            if ( !feetInWater )
            {
              v54 = v15;
              if ( (*(this->_vptr_IHandleEntity + 296))(this, v15, v63, v17, v16, v18) == 0 )
                return;
              v39 = (*(this->_vptr_IHandleEntity + 293))(this);
              v23 = v54;
              v24 = v39;
              goto LABEL_16;
            }
            v55 = v15;
            v19 = (*(g_pVPhysics2->_vptr_IAppSystem + 18))(g_pVPhysics2, COERCE_DOUBLE(1120403456), v17, v16, v18);
            v50 = *(*v19 + 16LL);
            v20 = MurmurHash2LowerCase("water", 0x31415926u);
            v21 = v55;
            if ( !g_bUpdateStringTokenDatabase )
            {
LABEL_15:
              v56 = v21;
              v22 = v50(v19, v20, 0);
              v23 = v56;
              v24 = v22;
LABEL_16:
              v51 = v23;
              if ( v24 != 0 )
              {
                if ( v63 < (*(this->_vptr_IHandleEntity + 297))(this) )
                {
                  v25 = v24 + 6;
                  v40 = v24 + 7;
                  if ( !leftFoot )
                    v25 = v40;
                }
                else
                {
                  v25 = v24 + 8;
                  v26 = v24 + 9;
                  if ( !leftFoot )
                    v25 = v26;
                }
                v27 = CUtlString::Get(v25);
                if ( v27 != 0 && *v27 != 0 )
                {
                  v28 = v51;
                  v52 = (*(this->_vptr_IHandleEntity + 294))(this, v27, !leftFoot, v51, v63);
                  m_fValue = sv_footstepinterval.m_pParent->m_Value.m_fValue;
                  v29 = CountdownTimer::Now(&this->m_footstepTimer) + m_fValue;
                  if ( v29 != this->m_footstepTimer.m_timestamp.m_Value )
                  {
                    v61 = v29;
                    (*(this->m_footstepTimer._vptr_CountdownTimer + 2))(
                      &this->m_footstepTimer,
                      12,
                      0xFFFFFFFFLL,
                      0xFFFFFFFFLL);
                    this->m_footstepTimer.m_timestamp.m_Value = v61;
                  }
                  if ( m_fValue != this->m_footstepTimer.m_duration.m_Value )
                  {
                    (*(this->m_footstepTimer._vptr_CountdownTimer + 2))(
                      &this->m_footstepTimer,
                      8,
                      0xFFFFFFFFLL,
                      0xFFFFFFFFLL);
                    this->m_footstepTimer.m_duration.m_Value = m_fValue;
                  }
                  CRecipientFilter::CRecipientFilter(&v67);
                  CRecipientFilter::AddRecipientsByPAS(&v67, origin);
                  if ( gpGlobals->maxClients > 1 )
                    CRecipientFilter::RemoveRecipientsByPVS(&v67, origin);
                  v30.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
                  CBaseEntity::EmitSound(&v67, v30, v52, origin, 0.0, 0);
                  (*(this->_vptr_IHandleEntity + 292))(this, origin, leftFoot, v28);
                  if ( (*(this->_vptr_IHandleEntity + 140))(this) != 0 )
                  {
                    v42 = ToBasePlayer(this);
                    if ( v42 != 0 )
                    {
                      v43 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "player_footstep", 0, 0);
                      v44 = v43;
                      if ( v43 != 0 )
                      {
                        v45 = *(*v43 + 112LL);
                        v46.m_Data = CEntityInstance::GetEntityIndex(v42).m_Data;
                        v47 = (*(*engine + 224LL))(engine, (v46.m_Data - 1));
                        v45(v44, "userid", v47);
                        (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v44, 0);
                      }
                    }
                  }
                  if ( (sv_showfootsteps.m_pParent->m_Value.m_nValue & 2) != 0 )
                  {
                    y = origin->y;
                    z = origin->z;
                    v65.x = origin->x;
                    v65.y = y;
                    v66.x = v65.x + 0.0;
                    v66.y = y + 0.0;
                    v66.z = z + 5.0;
                    v65.z = z - 5.0;
                    NDebugOverlay::Line(&v65, &v66, 0, 0xFFu, 0, 1, 6.0);
                    v33 = origin->y;
                    v34 = origin->z;
                    v65.x = origin->x;
                    v65.z = v34;
                    v66.x = v65.x + 0.0;
                    v66.y = v33 + 5.0;
                    v65.y = v33 - 5.0;
                    v66.z = v34 + 0.0;
                    NDebugOverlay::Line(&v65, &v66, 0, 0xFFu, 0, 1, 6.0);
                    v35 = origin->x + 5.0;
                    v36 = origin->z;
                    v37 = origin->x - 5.0;
                    v65.y = origin->y;
                    v65.z = v36;
                    v66.x = v35;
                    v65.x = v37;
                    v66.y = v65.y + 0.0;
                    v66.z = v36 + 0.0;
                    NDebugOverlay::Line(&v65, &v66, 0, 0xFFu, 0, 1, 6.0);
                  }
                  CRecipientFilter::~CRecipientFilter(&v67);
                }
              }
              return;
            }
            v48 = v55;
            v41 = "water";
          }
          v59 = v20;
          RegisterStringToken(v20, v41, 0, 1);
          v21 = v48;
          v20 = v59;
          goto LABEL_15;
        }
      }
    }
  }
}


