// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_speechbubble.cpp:17
class C_CSpeechBubbleManager_MapInstall {
	C_CSpeechBubbleManager_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSpeechBubbleManager::YouForgotToImplementOrDeclareServerClass  (line 17, @0x00000000026bcf70, libserver.so)
int __fastcall CSpeechBubbleManager::YouForgotToImplementOrDeclareServerClass(CSpeechBubbleManager *const this)
{
  return 0;
}


// CSpeechBubbleManager::GetServerClass  (line 17, @0x00000000026cca80, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CSpeechBubbleManager::GetServerClass(CSpeechBubbleManager *const this)
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


// CSpeechBubbleManager::Spawn  (line 30, @0x00000000026ca610, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetForModify, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, V_strncpy<int>, operator CEntityInstance*, operator!=, operator=
// calls: CBaseEntity::Spawn, _V_strncpy
// globals: CEntityHandle::gm_pEntityList
void __fastcall CSpeechBubbleManager::Spawn(CSpeechBubbleManager *const this, const CEntityKeyValues *pKeyValues)
{
  unsigned __int8 *v3; // r14
  int v4; // ebx
  unsigned __int8 *v5; // r13
  signed __int64 v6; // r15
  unsigned __int8 *v7; // r10
  _QWORD *v8; // rdi
  int v9; // edx
  CEntityIdentity *v10; // rcx
  CEntityIdentity *v11; // rcx
  _QWORD *v12; // rdi
  unsigned __int8 *v13; // [rsp+8h] [rbp-48h]
  unsigned __int8 *v14; // [rsp+10h] [rbp-40h]
  CUtlVectorBase<CSpeechBubbleInfo,CNetworkUtlVector_MemoryType<CSpeechBubbleInfo,4> >::CAllocator *p_m_Memory; // [rsp+18h] [rbp-38h]

  v3 = &this->m_SpeechBubbles.m_Vector.m_Memory.m_Memory.m_Data[16];
  v4 = 4;
  CBaseEntity::Spawn(this, pKeyValues);
  p_m_Memory = &this->m_SpeechBubbles.m_Vector.m_Memory;
  v13 = &this->m_SpeechBubbles.m_Vector.m_Memory.m_Memory.m_Data[8];
  v14 = &this->m_SpeechBubbles.m_Vector.m_Memory.m_Memory.m_Data[276];
  do
  {
    v5 = v3 - 16;
    v6 = v3 - p_m_Memory;
    v7 = v3 + 2;
    v8 = *&v13[v3 - p_m_Memory - 16];
    if ( v8 != 0 && (*(v8[1] + 49LL) & 4) == 0 && *v3 != 0xFFFF )
    {
      (*(*v8 + 176LL))(v8, 18, 0xFFFFFFFFLL, *v3);
      v7 = v3 + 2;
    }
    _V_strncpy(v7, "", 256);
    v9 = *&v14[v6 - 16];
    if ( (v9 + 2) > 1 )
    {
      v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*(v5 + 138) >> 9) & 0x3F];
      if ( v10 != 0 )
      {
        v11 = &v10[*(v5 + 138) & 0x1FF];
        if ( v11 != 0 && v9 == v11->m_EHandle.m_Index && v11->m_pInstance != 0 )
        {
          v12 = *&v13[v6 - 16];
          if ( v12 != 0 && (*(v12[1] + 49LL) & 4) == 0 && *v3 != 0xFFFF )
            (*(*v12 + 176LL))(v12, 276, 0xFFFFFFFFLL, *v3);
          *&v14[v6 - 16] = -1;
        }
      }
    }
    v3 += 296;
    --v4;
  }
  while ( v4 != 0 );
  this->m_unBubbleCount = 0;
}


// CSpeechBubbleManager::AddSpeechBubble  (line 47, @0x00000000026f4310, libserver.so)  // inlines: CEntityHandle, CHandle, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetForModify, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, String, ToCStr, ToDOTABaseNPC, V_strncpy<int>, operator CBaseEntity*, operator CEntityInstance*, operator!=, operator=, operator=<float>, operator=<int>, operator=<short unsigned int>, operator[]
// calls: _V_strncpy, Warning
// callers: CDOTA_BaseNPC::AddSpeechBubble, CDOTA_BaseNPC::Input_SpeechBubble
// strings: "Attempting to place a speech bubble on an invalid entity. It must be a NPC.\n", "Speech bubble index out of range!\n", "String(localization or other) is invalid!\n"
// globals: CEntityHandle::gm_pEntityList
_BOOL8 __fastcall CSpeechBubbleManager::AddSpeechBubble(
        CSpeechBubbleManager *const this,
        __int64 iBubble,
        CBaseEntity *pEntity,
        string_t pszLocalization,
        float flDuration,
        __int64 nOffsetX,
        __int64 nOffsetY)
{
  _BOOL4 m_bIsDOTANPC; // r12d
  char *v10; // rbx
  _QWORD *v11; // rdi
  char *v12; // rax
  int v13; // r15d
  __int64 v14; // r9
  CEntityIdentity *m_pEntity; // rax
  float v16; // xmm0_4
  int v17; // r8d
  __int16 v18; // cx
  CEntityInstance *m_pInstance; // r14
  __int64 v20; // rcx
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx
  int v23; // eax
  CEntityInstance *v24; // rsi
  unsigned __int64 v25; // rdx
  bool v26; // zf
  _QWORD *v27; // rdi
  _QWORD *v28; // rdi
  unsigned __int16 v29; // r14
  _QWORD *v30; // rdi
  _QWORD *v32; // rdi
  int v33; // eax
  _QWORD *v34; // rdi
  int nOffsetXa; // [rsp+8h] [rbp-58h]
  float flDurationa; // [rsp+Ch] [rbp-54h]
  __int64 v37; // [rsp+10h] [rbp-50h]
  int v38; // [rsp+10h] [rbp-50h]
  int v39; // [rsp+10h] [rbp-50h]
  float v40; // [rsp+18h] [rbp-48h]
  int v41; // [rsp+18h] [rbp-48h]
  float v42; // [rsp+18h] [rbp-48h]
  int hHandle; // [rsp+20h] [rbp-40h]

  if ( iBubble > 3 )
  {
    m_bIsDOTANPC = 0;
    Warning("Speech bubble index out of range!\n", iBubble, pEntity, pszLocalization.u.m_Id, nOffsetX, nOffsetY);
    return m_bIsDOTANPC;
  }
  if ( pEntity == 0 || !(m_bIsDOTANPC = pEntity->m_bIsDOTANPC) )
  {
    Warning(
      "Attempting to place a speech bubble on an invalid entity. It must be a NPC.\n",
      iBubble,
      pEntity,
      pszLocalization.u.m_Id,
      nOffsetX,
      nOffsetY);
    return 0;
  }
  v10 = &this->m_SpeechBubbles.m_Vector.m_Memory + 296 * iBubble;
  if ( (this + 296 * iBubble) == -784LL )
    return 0;
  if ( *pszLocalization.u.m_Id == 0 )
  {
    m_bIsDOTANPC = 0;
    Warning("String(localization or other) is invalid!\n", iBubble, pEntity, pszLocalization.u.m_Id, nOffsetX, nOffsetY);
    return m_bIsDOTANPC;
  }
  v11 = *&this->m_SpeechBubbles.m_Vector.m_Memory.m_Memory.m_Data[296 * iBubble + 8];
  v12 = v10 + 18;
  v13 = nOffsetY;
  v14 = *pszLocalization.u.m_Id;
  if ( v11 != 0 && (*(v11[1] + 49LL) & 4) == 0 && *(v10 + 8) != 0xFFFF )
  {
    nOffsetXa = nOffsetX;
    flDurationa = flDuration;
    v37 = *pszLocalization.u.m_Id;
    (*(*v11 + 176LL))(v11, 18, 0xFFFFFFFFLL, *(v10 + 8));
    v12 = v10 + 18;
    v14 = v37;
    LODWORD(nOffsetX) = nOffsetXa;
    flDuration = flDurationa;
  }
  v38 = nOffsetX;
  v40 = flDuration;
  _V_strncpy(v12, v14, 256);
  m_pEntity = pEntity->m_pEntity;
  hHandle = -1;
  v16 = v40;
  v17 = v38;
  if ( m_pEntity != 0 )
  {
    v18 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    hHandle = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v18 & 0x7FFF;
  }
  m_pInstance = 0;
  v20 = CEntityHandle::gm_pEntityList;
  if ( (hHandle + 2) > 1 )
  {
    v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(hHandle >> 9) & 0x3F];
    if ( v21 != 0 )
    {
      v22 = &v21[hHandle & 0x1FF];
      if ( v22 != 0 && hHandle == v22->m_EHandle.m_Index )
        m_pInstance = v22->m_pInstance;
    }
  }
  v23 = *(v10 + 69);
  v24 = 0;
  v25 = (v23 + 2);
  if ( v25 > 1 )
  {
    v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*(v10 + 138) >> 9) & 0x3F];
    if ( v25 != 0 )
    {
      v20 = 120LL * (*(v10 + 138) & 0x1FF);
      v25 += v20;
      if ( v25 != 0 && v23 == *(v25 + 16) )
        v24 = *v25;
    }
  }
  if ( m_pInstance != v24 )
  {
    v32 = *(v10 + 1);
    if ( v32 != 0 && (*(v32[1] + 49LL) & 4) == 0 && *(v10 + 8) != 0xFFFF )
    {
      (*(*v32 + 176LL))(v32, 276, 0xFFFFFFFFLL, *(v10 + 8));
      v17 = v38;
      v16 = v40;
    }
    if ( m_pInstance != 0 )
    {
      v25 = m_pInstance->m_pEntity;
      if ( v25 != 0 )
      {
        v33 = (*(v25 + 16) >> 15) - (*(v25 + 48) & 1);
        if ( *(v25 + 16) == -1 )
        {
          v20 = 0x7FFF;
        }
        else
        {
          v20 = *(v25 + 16);
          LOWORD(v20) = v20 & 0x7FFF;
        }
        *(v10 + 138) = v20 | *(v10 + 138) & 0x8000;
        v25 = (v33 << 15);
        v26 = v16 == *(v10 + 70);
        *(v10 + 69) = v25 | *(v10 + 69) & 0x7FFF;
        goto LABEL_26;
      }
    }
    *(v10 + 69) = -1;
  }
  v26 = v16 == *(v10 + 70);
LABEL_26:
  if ( !v26 )
  {
    v34 = *(v10 + 1);
    if ( v34 != 0 && (*(v34[1] + 49LL) & 4) == 0 && *(v10 + 8) != 0xFFFF )
    {
      v39 = v17;
      v42 = v16;
      (*(*v34 + 176LL))(v34, 280, 0xFFFFFFFFLL, *(v10 + 8));
      v17 = v39;
      v16 = v42;
    }
    *(v10 + 70) = v16;
  }
  if ( v17 != *(v10 + 71) )
  {
    v27 = *(v10 + 1);
    if ( v27 != 0 && (*(v27[1] + 49LL) & 4) == 0 && *(v10 + 8) != 0xFFFF )
    {
      v41 = v17;
      (*(*v27 + 176LL))(v27, 284, 0xFFFFFFFFLL, *(v10 + 8));
      v17 = v41;
    }
    *(v10 + 71) = v17;
  }
  if ( v13 != *(v10 + 72) )
  {
    v28 = *(v10 + 1);
    if ( v28 != 0 && (*(v28[1] + 49LL) & 4) == 0 && *(v10 + 8) != 0xFFFF )
      (*(*v28 + 176LL))(v28, 288, 0xFFFFFFFFLL, *(v10 + 8));
    *(v10 + 72) = v13;
  }
  v29 = this->m_unBubbleCount + 1;
  this->m_unBubbleCount = v29;
  if ( v29 != *(v10 + 146) )
  {
    v30 = *(v10 + 1);
    if ( v30 != 0 && (*(v30[1] + 49LL) & 4) == 0 && *(v10 + 8) != 0xFFFF )
      (*(*v30 + 176LL))(v30, 292, 0xFFFFFFFFLL, *(v10 + 8));
    *(v10 + 146) = v29;
  }
  (*(this->_vptr_IHandleEntity + 21))(this, v24, v25, v20);
  return m_bIsDOTANPC;
}


// CSpeechBubbleManager::DestroyAllSpeechBubbles  (line 92, @0x00000000026f47b0, libserver.so)  // inlines: CBroadcastRecipientFilter, CDOTAUserMsg_SpeechBubble_t, CNetMessagePB, CReliableBroadcastRecipientFilter, CUserMessagePB, FindGameEvent<CDOTAUserMsg_SpeechBubble_t>, FindOrCreateGameEvent<CDOTAUserMsg_SpeechBubble_t>, PostEvent<CDOTAUserMsg_SpeechBubble_t>, SendUserMessage<CDOTAUserMsg_SpeechBubble_t>, set_destroy_all, set_has_destroy_all, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_SpeechBubble_t, ~CNetMessagePB, ~CReliableBroadcastRecipientFilter, ~CUserMessagePB
// calls: CDOTAUserMsg_SpeechBubble::CDOTAUserMsg_SpeechBubble, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CRecipientFilter::~CRecipientFilter, CDOTAUserMsg_SpeechBubble::~CDOTAUserMsg_SpeechBubble, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_BaseNPC::DestroyAllSpeechBubbles, CDOTA_BaseNPC::Input_DestroyAllSpeechBubbles
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SpeechBubble_t>(bool)::s_hEvent
void __fastcall CSpeechBubbleManager::DestroyAllSpeechBubbles(CSpeechBubbleManager *const this)
{
  __int64 v1; // r14
  IGameEventSystem *v2; // r13
  void (__fastcall *v3)(IGameEventSystem *, _QWORD, _QWORD, CReliableBroadcastRecipientFilter *, __int64, _QWORD *, __int64); // r15
  _QWORD v4[2]; // [rsp+10h] [rbp-190h] BYREF
  int v5; // [rsp+20h] [rbp-180h]
  char v6; // [rsp+28h] [rbp-178h]
  CReliableBroadcastRecipientFilter filter; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 v8; // [rsp+168h] [rbp-38h]

  v8 = __readfsqword(0x28u);
  CDOTAUserMsg_SpeechBubble::CDOTAUserMsg_SpeechBubble(v4);
  v5 |= 1u;
  v4[0] = off_4186F10;
  v6 = 1;
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filter);
  v1 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SpeechBubble_t>(bool)::s_hEvent;
  v2 = g_pGameEventSystem;
  v3 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SpeechBubble_t>(bool)::s_hEvent);
  v3(v2, 0, 0, &filter, v1, v4, 32);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
  v4[0] = &off_4186D90;
  CDOTAUserMsg_SpeechBubble::~CDOTAUserMsg_SpeechBubble(v4);
}


