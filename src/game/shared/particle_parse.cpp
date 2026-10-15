
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// ParticleAttachementMissingWarnOnce  (line 29, @0x0000000002301180, libserver.so)  // inlines: CRC32_ProcessSingleBuffer, Element, Find, FindInsertionPosition, Get, GetClassNameAsCStr, GetClassname, Insert, InsertAt, LeftChild, RightChild, String, V_strlen, Warn, operator[]
// calls: CEntityHandle::operator CEntityInstance*, __dynamic_cast, CBaseEntity::GetModel, CFmtStrN<400, true>::CFmtStrN, strlen, CRC32_Init, CRC32_ProcessBuffer, CRC32_Final, CUtlRBTree<unsigned int, short unsigned int, bool (*)(unsigned int const&, unsigned int const&), CUtlMemory<UtlRBTreeNode_t<unsigned int, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<unsigned int, short unsigned int, bool (*)(unsigned int const&, unsigned int const&), CUtlMemory<UtlRBTreeNode_t<unsigned int, short unsigned int>, short unsigned int> >::LinkToParent, Warning, __stack_chk_fail
// strings: "%s Model '%s' doesn't have attachment '%s' to attach particle system '%s' to.\n"
// globals: g_OnlyWarnOnce
void __fastcall ParticleAttachementMissingWarnOnce(
        const CEntityHandle *hEnt,
        const char *pszAttachmentName,
        const char *pszParticleName)
{
  CEntityInstance *v5; // rax
  const CBaseEntity *v6; // rax
  const CBaseEntity *v7; // r13
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rdx
  int v10; // r14d
  __int64 m_Root; // rax
  UtlRBTreeNode_t<unsigned int,short unsigned int> *m_pMemory; // rdx
  __int64 v13; // rbx
  __int64 v14; // r14
  unsigned __int16 v15; // bx
  unsigned __int16 m_Left; // ax
  char v17; // dl
  bool v18; // r14
  unsigned __int16 v19; // ax
  void (__fastcall *v20)(IGameModelInfo *, CRC32_t *, char *, __int64); // [rsp+8h] [rbp-308h]
  CRC32_t pulCRC[4]; // [rsp+10h] [rbp-300h] BYREF
  char pModelName[272]; // [rsp+20h] [rbp-2F0h] BYREF
  CFmtStrN<400,true> str; // [rsp+130h] [rbp-1E0h] BYREF
  unsigned __int64 v24; // [rsp+2D8h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( hEnt->m_Index != -1 )
  {
    v5 = CEntityHandle::operator CEntityInstance *(hEnt);
    if ( v5 != 0 )
    {
      v6 = __dynamic_cast(v5, &`typeinfo for'CEntityInstance, &`typeinfo for'CBaseAnimating, 0);
      v7 = v6;
      if ( v6 != 0 )
      {
        v20 = *(modelinfo->_vptr_IAppSystem + 15);
        CBaseEntity::GetModel(pulCRC, v6);
        v20(modelinfo, pulCRC, pModelName, 260);
        m_pEntity = v7->m_pEntity;
        m_pAsString = "";
        if ( m_pEntity->m_designerName.u.m_Id != 0 )
          m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
        CFmtStrN<400,true>::CFmtStrN(
          &str,
          "%s Model '%s' doesn't have attachment '%s' to attach particle system '%s' to.\n",
          m_pAsString,
          pModelName,
          pszAttachmentName,
          pszParticleName);
        v10 = strlen(str.m_szBuf);
        CRC32_Init(pulCRC);
        CRC32_ProcessBuffer(pulCRC, str.m_szBuf, v10);
        CRC32_Final(pulCRC);
        m_Root = g_OnlyWarnOnce.m_Warnings.m_Root;
        if ( g_OnlyWarnOnce.m_Warnings.m_Root == 0xFFFF )
          goto LABEL_22;
        m_pMemory = g_OnlyWarnOnce.m_Warnings.m_Elements.m_pMemory;
        do
        {
          while ( 1 )
          {
            v13 = m_Root;
            v14 = m_Root;
            if ( !g_OnlyWarnOnce.m_Warnings.m_LessFunc(pulCRC, &m_pMemory[m_Root].m_Data) )
              break;
            m_pMemory = g_OnlyWarnOnce.m_Warnings.m_Elements.m_pMemory;
            m_Root = g_OnlyWarnOnce.m_Warnings.m_Elements.m_pMemory[v13].m_Left;
            if ( m_Root == 0xFFFF )
              goto LABEL_12;
          }
          if ( !g_OnlyWarnOnce.m_Warnings.m_LessFunc(
                  &g_OnlyWarnOnce.m_Warnings.m_Elements.m_pMemory[v14].m_Data,
                  pulCRC) )
            return;
          m_pMemory = g_OnlyWarnOnce.m_Warnings.m_Elements.m_pMemory;
          m_Root = g_OnlyWarnOnce.m_Warnings.m_Elements.m_pMemory[v14].m_Right;
        }
        while ( m_Root != 0xFFFF );
LABEL_12:
        v15 = g_OnlyWarnOnce.m_Warnings.m_Root;
        if ( g_OnlyWarnOnce.m_Warnings.m_Root == 0xFFFF )
        {
LABEL_22:
          v15 = -1;
          v18 = 0;
        }
        else
        {
          while ( 1 )
          {
            if ( g_OnlyWarnOnce.m_Warnings.m_LessFunc(
                   pulCRC,
                   &g_OnlyWarnOnce.m_Warnings.m_Elements.m_pMemory[v15].m_Data) )
            {
              m_Left = g_OnlyWarnOnce.m_Warnings.m_Elements.m_pMemory[v15].m_Left;
              v17 = 1;
            }
            else
            {
              m_Left = g_OnlyWarnOnce.m_Warnings.m_Elements.m_pMemory[v15].m_Right;
              v17 = 0;
            }
            if ( m_Left == 0xFFFF )
              break;
            v15 = m_Left;
          }
          v18 = v17;
        }
        v19 = CUtlRBTree<unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&),CUtlMemory<UtlRBTreeNode_t<unsigned int,unsigned short>,unsigned short>>::NewNode(
                &g_OnlyWarnOnce.m_Warnings,
                pulCRC);
        CUtlRBTree<unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&),CUtlMemory<UtlRBTreeNode_t<unsigned int,unsigned short>,unsigned short>>::LinkToParent(
          &g_OnlyWarnOnce.m_Warnings,
          v19,
          v15,
          v18);
        ++g_OnlyWarnOnce.m_Warnings.m_NumElements;
        Warning("%s", str.m_szBuf);
      }
    }
  }
}


// ParticleSytemMissingWarnOnce  (line 50, @0x00000000023015c0, libserver.so)  // inlines: CRC32_ProcessSingleBuffer, Element, Find, FindInsertionPosition, Insert, InsertAt, LeafCodeInfo_t, LeftChild, RightChild, V_strlen, Warn, operator[]
// calls: Plat_IsInTestMode, CFmtStrN<256, false>::CFmtStrN, strlen, CRC32_Init, CRC32_ProcessBuffer, CRC32_Final, CUtlRBTree<unsigned int, short unsigned int, bool (*)(unsigned int const&, unsigned int const&), CUtlMemory<UtlRBTreeNode_t<unsigned int, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<unsigned int, short unsigned int, bool (*)(unsigned int const&, unsigned int const&), CUtlMemory<UtlRBTreeNode_t<unsigned int, short unsigned int>, short unsigned int> >::LinkToParent, Warning, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors (14 total)
// strings: "Attempting to create unknown particle system '%s' \n", "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/shared/particle_, "ParticleSytemMissingWarnOnce", "attempting to create unknown particle system %s"
// globals: g_OnlyWarnOnce
void __fastcall ParticleSytemMissingWarnOnce(const char *pszParticleName)
{
  int v2; // r14d
  __int64 m_Root; // rax
  UtlRBTreeNode_t<unsigned int,short unsigned int> *m_pMemory; // rdx
  __int64 v5; // rbx
  __int64 v6; // r14
  unsigned __int16 v7; // bx
  unsigned __int16 m_Left; // ax
  char v9; // dl
  bool v10; // r14
  unsigned __int16 v11; // ax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  LeafCodeInfo_t pulCRC; // [rsp+0h] [rbp-170h] BYREF
  CFmtStr str; // [rsp+20h] [rbp-150h] BYREF
  unsigned __int64 v18; // [rsp+138h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  if ( pszParticleName != 0 )
  {
    if ( Plat_IsInTestMode() != 0 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        pulCRC.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/shared/particle_parse.cpp";
        pulCRC.m_szFunction = "ParticleSytemMissingWarnOnce";
        pulCRC.m_nLine = 57;
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          &pulCRC,
          "attempting to create unknown particle system %s",
          pszParticleName);
      }
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v14, v15, v12, v13) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
    }
    CFmtStrN<256,false>::CFmtStrN(&str, "Attempting to create unknown particle system '%s' \n", pszParticleName);
    v2 = strlen(str.m_szBuf);
    CRC32_Init(&pulCRC);
    CRC32_ProcessBuffer(&pulCRC, str.m_szBuf, v2);
    CRC32_Final(&pulCRC);
    m_Root = g_OnlyWarnOnce.m_Warnings.m_Root;
    if ( g_OnlyWarnOnce.m_Warnings.m_Root != 0xFFFF )
    {
      m_pMemory = g_OnlyWarnOnce.m_Warnings.m_Elements.m_pMemory;
      do
      {
        while ( 1 )
        {
          v5 = m_Root;
          v6 = m_Root;
          if ( !g_OnlyWarnOnce.m_Warnings.m_LessFunc(&pulCRC, &m_pMemory[m_Root].m_Data) )
            break;
          m_pMemory = g_OnlyWarnOnce.m_Warnings.m_Elements.m_pMemory;
          m_Root = g_OnlyWarnOnce.m_Warnings.m_Elements.m_pMemory[v5].m_Left;
          if ( m_Root == 0xFFFF )
            goto LABEL_9;
        }
        if ( !g_OnlyWarnOnce.m_Warnings.m_LessFunc(&g_OnlyWarnOnce.m_Warnings.m_Elements.m_pMemory[v6].m_Data, &pulCRC) )
          return;
        m_pMemory = g_OnlyWarnOnce.m_Warnings.m_Elements.m_pMemory;
        m_Root = g_OnlyWarnOnce.m_Warnings.m_Elements.m_pMemory[v6].m_Right;
      }
      while ( m_Root != 0xFFFF );
LABEL_9:
      v7 = g_OnlyWarnOnce.m_Warnings.m_Root;
      if ( g_OnlyWarnOnce.m_Warnings.m_Root != 0xFFFF )
      {
        while ( 1 )
        {
          if ( g_OnlyWarnOnce.m_Warnings.m_LessFunc(&pulCRC, &g_OnlyWarnOnce.m_Warnings.m_Elements.m_pMemory[v7].m_Data) )
          {
            m_Left = g_OnlyWarnOnce.m_Warnings.m_Elements.m_pMemory[v7].m_Left;
            v9 = 1;
            if ( m_Left == 0xFFFF )
              goto LABEL_15;
          }
          else
          {
            m_Left = g_OnlyWarnOnce.m_Warnings.m_Elements.m_pMemory[v7].m_Right;
            v9 = 0;
            if ( m_Left == 0xFFFF )
            {
LABEL_15:
              v10 = v9;
              goto LABEL_16;
            }
          }
          v7 = m_Left;
        }
      }
    }
    v7 = -1;
    v10 = 0;
LABEL_16:
    v11 = CUtlRBTree<unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&),CUtlMemory<UtlRBTreeNode_t<unsigned int,unsigned short>,unsigned short>>::NewNode(
            &g_OnlyWarnOnce.m_Warnings,
            &pulCRC);
    CUtlRBTree<unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&),CUtlMemory<UtlRBTreeNode_t<unsigned int,unsigned short>,unsigned short>>::LinkToParent(
      &g_OnlyWarnOnce.m_Warnings,
      v11,
      v7,
      v10);
    ++g_OnlyWarnOnce.m_Warnings.m_NumElements;
    Warning("%s", str.m_szBuf);
  }
}


// GetParticleManifest  (line 66, @0x00000000022c97b0, libserver.so)
void __fastcall GetParticleManifest(CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *const list)
{
  ;
}


// ReleaseParticleEffects  (line 72, @0x00000000022c97c0, libserver.so)
// callers: CSource2Server::Shutdown
// globals: hParticleManifest
void __cdecl ReleaseParticleEffects()
{
  if ( hParticleManifest != 0 )
  {
    (*(*g_pResourceSystem + 216LL))(g_pResourceSystem);
    hParticleManifest = 0;
  }
}


// ParseParticleEffects  (line 85, @0x00000000022c9800, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Destruct<CUtlString>, Element, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlString::FreeMemoryBlock, CUtlMemory<CUtlString, int>::Purge, _Unwind_Resume
void __cdecl ParseParticleEffects()
{
  int v0; // ebx
  __int64 i; // r12
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > files; // [rsp+0h] [rbp-40h] BYREF

  files.m_Memory.m_pMemory = 0;
  files.m_Memory.m_nAllocationCount = 0;
  files.m_Memory.m_nGrowSize = 0;
  (*(*g_pParticleSystemMgr + 168LL))(g_pParticleSystemMgr);
  v0 = 0;
  for ( i = 0x1FFFFFFFFFFFFFFFLL; --v0 >= 0; --i )
  {
    if ( files.m_Memory.m_pMemory[i].m_pString != 0 )
      CUtlString::FreeMemoryBlock(&files.m_Memory.m_pMemory[i]);
  }
  CUtlMemory<CUtlString,int>::Purge(&files.m_Memory);
  if ( (files.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlString,int>::Purge(&files.m_Memory);
}


// DispatchParticleEffect  (line 105, @0x0000000002301400, libserver.so)  // inlines: MakeStringToken
// calls: CBaseAnimating::LookupAttachment, DispatchParticleEffect, MurmurHash2LowerCase, RegisterStringToken
// callers: CEnvEffectsScript::TrailEffectEvent, Particle_Test_Stop, CDOTA_Ability_Zuus_ThundergodsWrath::OnSpellStart, CDOTA_Ability_Zuus_LightningBolt::CastLightningBolt
void __fastcall DispatchParticleEffect(
        const char *pszParticleName,
        ParticleAttachment_t iAttachType,
        CBaseEntity *pEntity,
        const char *pszAttachmentName,
        bool bResetAllParticlesOnEntity,
        CSplitScreenSlot nSplitScreenPlayerSlot,
        IRecipientFilter *filter)
{
  __int64 v12; // rax
  const CBaseAnimating *v13; // rax
  AttachmentHandle_t v14; // al
  int v15; // r10d
  bool v16; // r9
  CUtlStringToken v17; // r8d
  uint32 v18; // eax
  bool v19; // [rsp+14h] [rbp-3Ch]
  bool v20; // [rsp+18h] [rbp-38h]
  int v21; // [rsp+18h] [rbp-38h]
  bool iAttachment; // [rsp+1Ch] [rbp-34h]
  int iAttachmenta; // [rsp+1Ch] [rbp-34h]
  int iAttachmentb; // [rsp+1Ch] [rbp-34h]

  if ( pEntity != 0
    && (iAttachment = bResetAllParticlesOnEntity,
        v12 = (*(pEntity->_vptr_IHandleEntity + 43))(pEntity),
        bResetAllParticlesOnEntity = iAttachment,
        v12 != 0) )
  {
    v13 = (*(pEntity->_vptr_IHandleEntity + 43))(pEntity);
    v14 = CBaseAnimating::LookupAttachment(v13, pszAttachmentName);
    bResetAllParticlesOnEntity = iAttachment;
    v15 = v14;
  }
  else
  {
    v15 = -1;
  }
  v16 = bResetAllParticlesOnEntity;
  v17.m_nHashCode = 0;
  if ( pszAttachmentName != 0 && *pszAttachmentName != 0 )
  {
    v20 = v16;
    iAttachmenta = v15;
    v18 = MurmurHash2LowerCase(pszAttachmentName, 0x31415926u);
    v15 = iAttachmenta;
    v16 = v20;
    if ( g_bUpdateStringTokenDatabase )
    {
      v19 = v20;
      v21 = iAttachmenta;
      iAttachmentb = v18;
      RegisterStringToken(v18, pszAttachmentName, 0, 1);
      v16 = v19;
      v15 = v21;
      v18 = iAttachmentb;
    }
    v17.m_nHashCode = v18;
  }
  DispatchParticleEffect(pszParticleName, iAttachType, pEntity, v15, v17, v16, nSplitScreenPlayerSlot, filter);
}


// DispatchParticleEffect  (line 125, @0x00000000022c9920, libserver.so)  // inlines: CEntityHandle, CWeakHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Init, Set, operator!=, operator=, operator=<CEntityIdentity*>, operator=<CUtlStringToken>, operator=<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition> >, operator=<ParticleAttachment_t>, operator=<int>, operator|=<int>
// calls: CEffectData::CEffectData, GetParticleSystemIndex, CBaseEntity::GetAbsOrigin, DispatchEffect
// callers: Particle_Test_Start, DispatchParticleEffect
void __fastcall DispatchParticleEffect(
        const char *pszParticleName,
        ParticleAttachment_t iAttachType,
        CBaseEntity *pEntity,
        int iAttachmentPoint,
        CUtlStringToken iAttachmentName,
        bool bResetAllParticlesOnEntity,
        CSplitScreenSlot nSplitScreenPlayerSlot,
        IRecipientFilter *filter)
{
  char v11; // r12
  CEntityIdentity *m_pEntity; // rcx
  uint32 v13; // eax
  __int16 v14; // si
  unsigned __int8 v15; // cl
  CNetworkVectorBase<Vector,CEffectData::NetworkVar_m_vOrigin> *AbsOrigin; // rax
  const ResourceBindingBase_t *v19; // [rsp+10h] [rbp-B0h]
  CEffectData data; // [rsp+20h] [rbp-A0h] BYREF

  v11 = iAttachmentPoint;
  CEffectData::CEffectData(&data);
  GetParticleSystemIndex(pszParticleName);
  if ( v19 != data.m_nEffectIndex.m_Value.m_pBinding )
    data.m_nEffectIndex.m_Value.m_pBinding = v19;
  if ( data.m_nHitBox.m_Value != 0 )
    data.m_nHitBox.m_Value = 0;
  if ( pEntity != 0 )
  {
    m_pEntity = pEntity->m_pEntity;
    v13 = -1;
    if ( m_pEntity != 0 )
    {
      v14 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v13 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v14 & 0x7FFF;
    }
    if ( v13 == data.m_hEntity.m_Value.m_Index )
    {
      v15 = data.m_fFlags.m_Value | 1;
      if ( data.m_fFlags.m_Value == (data.m_fFlags.m_Value | 1) )
      {
LABEL_13:
        AbsOrigin = CBaseEntity::GetAbsOrigin(pEntity);
        if ( AbsOrigin->m_Value.x != data.m_vOrigin.m_Value.x
          || AbsOrigin->m_Value.y != data.m_vOrigin.m_Value.y
          || AbsOrigin->m_Value.z != data.m_vOrigin.m_Value.z )
        {
          data.m_vOrigin = *AbsOrigin;
        }
        goto LABEL_16;
      }
    }
    else
    {
      data.m_hEntity.m_Value.m_Index = v13;
      v15 = data.m_fFlags.m_Value | 1;
      if ( data.m_fFlags.m_Value == (data.m_fFlags.m_Value | 1) )
        goto LABEL_13;
    }
    data.m_fFlags.m_Value = v15;
    goto LABEL_13;
  }
LABEL_16:
  if ( iAttachType != data.m_nDamageType.m_Value )
    data.m_nDamageType.m_Value = iAttachType;
  if ( v11 != data.m_nAttachmentIndex.m_Value )
    data.m_nAttachmentIndex.m_Value = v11;
  if ( iAttachmentName.m_nHashCode != data.m_nAttachmentName.m_Value.m_nHashCode )
    data.m_nAttachmentName.m_Value = iAttachmentName;
  if ( bResetAllParticlesOnEntity && data.m_fFlags.m_Value != (data.m_fFlags.m_Value | 2) )
    data.m_fFlags.m_Value |= 2u;
  if ( filter != 0 )
    DispatchEffect(filter, 0.0, "ParticleEffect", &data);
  else
    DispatchEffect("ParticleEffect", &data);
}


// DispatchParticleEffectLink  (line 166, @0x00000000022c9b50, libserver.so)  // inlines: CEntityHandle, CWeakHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Init, Set, operator!=, operator=, operator=<CBaseEntity*>, operator=<CUtlStringToken>, operator=<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition> >, operator=<ParticleAttachment_t>, operator=<int>, operator|=<int>
// calls: CEffectData::CEffectData, CBaseEntity::GetAbsOrigin, GetParticleSystemIndex, DispatchEffect
void __fastcall DispatchParticleEffectLink(
        const char *pszParticleName,
        ParticleAttachment_t iAttachType,
        CBaseEntity *pEntity,
        CBaseEntity *pOtherEntity,
        int iAttachmentPoint,
        CUtlStringToken iAttachmentName,
        bool bResetAllParticlesOnEntity,
        CSplitScreenSlot nSplitScreenPlayerSlot)
{
  char v9; // r14
  CNetworkVectorBase<Vector,CEffectData::NetworkVar_m_vOrigin> *AbsOrigin; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v14; // cx
  uint32 v15; // eax
  CEntityIdentity *v16; // rax
  __int16 v17; // cx
  uint32 v18; // eax
  const ResourceBindingBase_t *v21; // [rsp+20h] [rbp-B0h]
  CEffectData data; // [rsp+30h] [rbp-A0h] BYREF

  v9 = iAttachmentPoint;
  CEffectData::CEffectData(&data);
  if ( pEntity != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(pEntity);
    if ( AbsOrigin->m_Value.x != data.m_vOrigin.m_Value.x
      || AbsOrigin->m_Value.y != data.m_vOrigin.m_Value.y
      || AbsOrigin->m_Value.z != data.m_vOrigin.m_Value.z )
    {
      data.m_vOrigin = *AbsOrigin;
    }
  }
  GetParticleSystemIndex(pszParticleName);
  if ( v21 != data.m_nEffectIndex.m_Value.m_pBinding )
    data.m_nEffectIndex.m_Value.m_pBinding = v21;
  if ( data.m_nHitBox.m_Value != 0 )
    data.m_nHitBox.m_Value = 0;
  if ( pEntity != 0 && pOtherEntity != 0 )
  {
    m_pEntity = pEntity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v14 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v15 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v14 & 0x7FFF;
    }
    else
    {
      v15 = -1;
    }
    if ( v15 != data.m_hEntity.m_Value.m_Index )
      data.m_hEntity.m_Value.m_Index = v15;
    v16 = pOtherEntity->m_pEntity;
    if ( v16 != 0 )
    {
      v17 = 0x7FFF;
      if ( v16->m_EHandle.m_Index != -1 )
        v17 = v16->m_EHandle.m_Index & 0x7FFF;
      v18 = (((v16->m_EHandle.m_Index >> 15) - (v16->m_flags & 1)) << 15) | v17 & 0x7FFF;
    }
    else
    {
      v18 = -1;
    }
    if ( v18 != data.m_hOtherEntity.m_Value.m_Index )
      data.m_hOtherEntity.m_Value.m_Index = v18;
    if ( data.m_fFlags.m_Value != (data.m_fFlags.m_Value | 1) )
      data.m_fFlags.m_Value |= 1u;
  }
  if ( iAttachType != data.m_nDamageType.m_Value )
    data.m_nDamageType.m_Value = iAttachType;
  if ( v9 != data.m_nAttachmentIndex.m_Value )
    data.m_nAttachmentIndex.m_Value = v9;
  if ( iAttachmentName.m_nHashCode != data.m_nAttachmentName.m_Value.m_nHashCode )
    data.m_nAttachmentName.m_Value = iAttachmentName;
  if ( bResetAllParticlesOnEntity && data.m_fFlags.m_Value != (data.m_fFlags.m_Value | 2) )
    data.m_fFlags.m_Value |= 2u;
  DispatchEffect("ParticleEffect", &data);
}


// DispatchParticleEffect  (line 202, @0x00000000022ca010, libserver.so)  // inlines: CWeakHandle, Init
// calls: GetParticleSystemIndex, DispatchParticleEffect
// callers: Script_CreateEffect
void __fastcall DispatchParticleEffect(
        const char *pszParticleName,
        const Vector *const vecOrigin,
        const QAngle *const vecAngles,
        ParticleAttachment_t iAttachType,
        CBaseEntity *pEntity,
        CSplitScreenSlot nSplitScreenPlayerSlot)
{
  const ResourceBindingBase_t *nEffectIndex; // [rsp+10h] [rbp-40h]
  HParticleSystemDefinition v12; // [rsp+20h] [rbp-30h] BYREF

  GetParticleSystemIndex(pszParticleName);
  v12.m_pBinding = nEffectIndex;
  DispatchParticleEffect(&v12, vecOrigin, vecAngles, iAttachType, pEntity, nSplitScreenPlayerSlot);
}


// DispatchParticleEffect  (line 212, @0x00000000022c9df0, libserver.so)  // inlines: CEntityHandle, CWeakHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Init, Set, operator!=, operator=, operator=<CBaseEntity*>, operator=<CEntityHandle>, operator=<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition> >, operator=<ParticleAttachment_t>, operator=<int>, operator|=<int>
// calls: CEffectData::CEffectData, DispatchEffect
// callers: CItemGeneric::AutoRemoveThink, CItemGeneric::DoPickup, CItemGeneric::Spawn, DispatchParticleEffect
void __fastcall DispatchParticleEffect(
        HParticleSystemDefinition nEffectIndex,
        const Vector *const vecOrigin,
        const QAngle *const vecAngles,
        unsigned int iAttachType,
        CBaseEntity *pEntity,
        CSplitScreenSlot nSplitScreenPlayerSlot)
{
  float y; // xmm2_4
  float z; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  CEntityIdentity *m_pEntity; // rdx
  __int16 v15; // r8
  uint32 v16; // eax
  CEffectData data; // [rsp+20h] [rbp-A0h] BYREF

  CEffectData::CEffectData(&data);
  if ( data.m_nHitBox.m_Value != 0 )
    data.m_nHitBox.m_Value = 0;
  if ( nEffectIndex.m_pBinding->m_pData != data.m_nEffectIndex.m_Value.m_pBinding )
    data.m_nEffectIndex.m_Value.m_pBinding = nEffectIndex.m_pBinding->m_pData;
  y = vecOrigin->y;
  if ( vecOrigin->x != data.m_vOrigin.m_Value.x )
  {
    z = vecOrigin->z;
LABEL_24:
    data.m_vOrigin.m_Value.x = vecOrigin->x;
    data.m_vOrigin.m_Value.y = y;
    data.m_vOrigin.m_Value.z = z;
    goto LABEL_8;
  }
  z = vecOrigin->z;
  if ( y != data.m_vOrigin.m_Value.y || z != data.m_vOrigin.m_Value.z )
    goto LABEL_24;
LABEL_8:
  v12 = vecAngles->y;
  if ( vecAngles->x != data.m_vAngles.m_Value.x )
  {
    v13 = vecAngles->z;
    goto LABEL_26;
  }
  v13 = vecAngles->z;
  if ( v12 != data.m_vAngles.m_Value.y || v13 != data.m_vAngles.m_Value.z )
  {
LABEL_26:
    data.m_vAngles.m_Value.x = vecAngles->x;
    data.m_vAngles.m_Value.y = v12;
    data.m_vAngles.m_Value.z = v13;
    if ( pEntity != 0 )
      goto LABEL_12;
    goto LABEL_27;
  }
  if ( pEntity != 0 )
  {
LABEL_12:
    m_pEntity = pEntity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v15 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v16 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v15 & 0x7FFF;
    }
    else
    {
      v16 = -1;
    }
    if ( v16 != data.m_hEntity.m_Value.m_Index )
      data.m_hEntity.m_Value.m_Index = v16;
    if ( data.m_fFlags.m_Value != (data.m_fFlags.m_Value | 1) )
      data.m_fFlags.m_Value |= 1u;
    if ( iAttachType != data.m_nDamageType.m_Value )
      data.m_nDamageType.m_Value = iAttachType;
    goto LABEL_22;
  }
LABEL_27:
  if ( data.m_hEntity.m_Value.m_Index != -1 )
    data.m_hEntity.m_Value.m_Index = -1;
LABEL_22:
  DispatchEffect("ParticleEffect", &data);
}


// DispatchParticleEffect  (line 244, @0x00000000022ca070, libserver.so)  // inlines: CEntityHandle, CWeakHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Init, Set, operator!=, operator=, operator=<CBaseEntity*>, operator=<CEntityHandle>, operator=<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition> >, operator=<ParticleAttachment_t>, operator=<int>, operator|=<int>
// calls: CEffectData::CEffectData, DispatchEffect
// callers: DispatchParticleEffect
void __fastcall DispatchParticleEffect(
        HParticleSystemDefinition iEffectIndex,
        Vector vecOrigin,
        Vector vecStart,
        QAngle vecAngles,
        CBaseEntity *pEntity,
        bool bSwapAxes,
        CSplitScreenSlot nSplitScreenPlayerSlot)
{
  float v10; // r15d
  vec_t v11; // xmm0_4
  bool v12; // zf
  CEntityIdentity *m_pEntity; // rdx
  __int16 v14; // cx
  uint32 v15; // eax
  float v16; // [rsp+Ch] [rbp-F4h]
  float y; // [rsp+10h] [rbp-F0h]
  float z; // [rsp+14h] [rbp-ECh]
  float v19; // [rsp+18h] [rbp-E8h]
  float v20; // [rsp+1Ch] [rbp-E4h]
  float v21; // [rsp+20h] [rbp-E0h]
  float x; // [rsp+30h] [rbp-D0h]
  float v23; // [rsp+40h] [rbp-C0h]
  CEffectData data; // [rsp+60h] [rbp-A0h] BYREF

  x = vecStart.x;
  v23 = vecOrigin.x;
  v21 = vecAngles.x;
  v10 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(vecStart.y)));
  z = vecOrigin.z;
  v19 = vecStart.z;
  v20 = vecAngles.z;
  y = vecOrigin.y;
  v16 = vecAngles.y;
  CEffectData::CEffectData(&data);
  if ( iEffectIndex.m_pBinding->m_pData != data.m_nEffectIndex.m_Value.m_pBinding )
    data.m_nEffectIndex.m_Value.m_pBinding = iEffectIndex.m_pBinding->m_pData;
  if ( data.m_nHitBox.m_Value != 0 )
    data.m_nHitBox.m_Value = 0;
  if ( v23 != data.m_vOrigin.m_Value.x || y != data.m_vOrigin.m_Value.y || z != data.m_vOrigin.m_Value.z )
  {
    data.m_vOrigin.m_Value.x = v23;
    data.m_vOrigin.m_Value.z = z;
    data.m_vOrigin.m_Value.y = y;
  }
  if ( x == data.m_vStart.m_Value.x && v10 == data.m_vStart.m_Value.y && v19 == data.m_vStart.m_Value.z )
  {
    v11 = v21;
    v12 = v21 == data.m_vAngles.m_Value.x;
  }
  else
  {
    data.m_vStart.m_Value.x = x;
    v11 = v21;
    data.m_vStart.m_Value.y = v10;
    v12 = v21 == data.m_vAngles.m_Value.x;
    data.m_vStart.m_Value.z = v19;
  }
  if ( !v12 || v16 != data.m_vAngles.m_Value.y || v20 != data.m_vAngles.m_Value.z )
  {
    data.m_vAngles.m_Value.x = v11;
    data.m_vAngles.m_Value.z = v20;
    data.m_vAngles.m_Value.y = v16;
  }
  if ( bSwapAxes && data.m_fFlags.m_Value != (data.m_fFlags.m_Value | 4) )
    data.m_fFlags.m_Value |= 4u;
  if ( pEntity != 0 )
  {
    m_pEntity = pEntity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v14 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v15 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v14 & 0x7FFF;
    }
    else
    {
      v15 = -1;
    }
    if ( v15 != data.m_hEntity.m_Value.m_Index )
      data.m_hEntity.m_Value.m_Index = v15;
    if ( data.m_fFlags.m_Value != (data.m_fFlags.m_Value | 1) )
      data.m_fFlags.m_Value |= 1u;
    if ( data.m_nDamageType.m_Value != 2 )
      data.m_nDamageType.m_Value = 2;
  }
  else if ( data.m_hEntity.m_Value.m_Index != -1 )
  {
    data.m_hEntity.m_Value.m_Index = -1;
  }
  DispatchEffect("ParticleEffect", &data);
}


// DispatchParticleEffect  (line 282, @0x00000000022ca3a0, libserver.so)  // inlines: CWeakHandle, Init
// calls: GetParticleSystemIndex, DispatchParticleEffect
// callers: Script_CreateEffect, PhysFrictionEffect, CPhysicsCannister::CannisterActivate
void __fastcall DispatchParticleEffect(
        const char *pszParticleName,
        CBaseEntity *pEntity,
        bool bSwapAxes,
        CSplitScreenSlot nSplitScreenPlayerSlot,
        double a5,
        vec_t a6,
        double a7,
        vec_t a8)
{
  const ResourceBindingBase_t *iIndex; // [rsp+20h] [rbp-40h]
  HParticleSystemDefinition iEffectIndex; // [rsp+30h] [rbp-30h] BYREF
  QAngle vecAnglesa; // 0:^0.12
  Vector vecOrigina; // 0:^10.12

  *&vecOrigina.x = a5;
  vecOrigina.z = a6;
  *&vecAnglesa.x = a7;
  vecAnglesa.z = a8;
  GetParticleSystemIndex(pszParticleName);
  iEffectIndex.m_pBinding = iIndex;
  DispatchParticleEffect(&iEffectIndex, vecOrigina, vecOrigina, vecAnglesa, pEntity, bSwapAxes, nSplitScreenPlayerSlot);
}


// DispatchParticleEffect  (line 291, @0x00000000022ca420, libserver.so)  // inlines: CWeakHandle, Init
// calls: GetParticleSystemIndex, DispatchParticleEffect
// callers: PhysCollisionDust
void __fastcall DispatchParticleEffect(
        const char *pszParticleName,
        CBaseEntity *pEntity,
        bool bSwapAxes,
        CSplitScreenSlot nSplitScreenPlayerSlot,
        double a5,
        vec_t a6,
        double a7,
        vec_t a8,
        double a9,
        vec_t a10)
{
  const ResourceBindingBase_t *iIndex; // [rsp+30h] [rbp-40h]
  HParticleSystemDefinition iEffectIndex; // [rsp+40h] [rbp-30h] BYREF
  QAngle vecAnglesa; // 0:^0.12
  Vector vecStarta; // 0:^10.12
  Vector vecOrigina; // 0:^20.12

  *&vecOrigina.x = a5;
  vecOrigina.z = a6;
  *&vecStarta.x = a7;
  vecStarta.z = a8;
  *&vecAnglesa.x = a9;
  vecAnglesa.z = a10;
  GetParticleSystemIndex(pszParticleName);
  iEffectIndex.m_pBinding = iIndex;
  DispatchParticleEffect(&iEffectIndex, vecOrigina, vecStarta, vecAnglesa, pEntity, bSwapAxes, nSplitScreenPlayerSlot);
}


// StopParticleEffects  (line 300, @0x00000000022ca4b0, libserver.so)  // inlines: CEntityHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Init, Set, operator=<CBaseEntity*>
// calls: CEffectData::CEffectData, DispatchEffect
// callers: CEnvEffectsScript::HandleAnimEvent, CPhysicsCannister::ShutdownJet
// strings: "ParticleEffectStop"
void __fastcall StopParticleEffects(CBaseEntity *pEntity)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v3; // cx
  uint32 v4; // eax
  CEffectData data; // [rsp+10h] [rbp-80h] BYREF

  CEffectData::CEffectData(&data);
  if ( pEntity != 0 )
  {
    m_pEntity = pEntity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v3 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v3 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v4 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v3 & 0x7FFF;
    }
    else
    {
      v4 = -1;
    }
    if ( v4 != data.m_hEntity.m_Value.m_Index )
      data.m_hEntity.m_Value.m_Index = v4;
  }
  DispatchEffect("ParticleEffectStop", &data);
}


// StopParticleEffect  (line 315, @0x00000000022ca560, libserver.so)  // inlines: CEntityHandle, CWeakHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Init, Set, operator=, operator=<CEntityIdentity*>, operator=<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition> >
// calls: CEffectData::CEffectData, GetParticleSystemIndex, DispatchEffect
// callers: Script_StopEffect, DOTA_CreateIllusions
// strings: "ParticleEffectStop"
void __fastcall StopParticleEffect(CBaseEntity *pEntity, const char *pszParticleName)
{
  CEntityIdentity *m_pEntity; // rdx
  uint32 v5; // eax
  __int16 v6; // cx
  const ResourceBindingBase_t *v7; // [rsp+0h] [rbp-A0h]
  CEffectData data; // [rsp+10h] [rbp-90h] BYREF

  CEffectData::CEffectData(&data);
  if ( pEntity != 0 )
  {
    m_pEntity = pEntity->m_pEntity;
    v5 = -1;
    if ( m_pEntity != 0 )
    {
      v6 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v5 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
      LODWORD(v7) = v5;
    }
    if ( v5 != data.m_hEntity.m_Value.m_Index )
      data.m_hEntity.m_Value.m_Index = v5;
  }
  GetParticleSystemIndex(pszParticleName);
  if ( v7 != data.m_nEffectIndex.m_Value.m_pBinding )
    data.m_nEffectIndex.m_Value.m_pBinding = v7;
  DispatchEffect("ParticleEffectStop", &data);
}


// Particle_Test_Start  (line 336, @0x00000000022ca640, libserver.so)  // inlines: GetInt, GetString
// calls: GetAttachTypeFromString, DispatchParticleEffect, GetNextCommandEntity, Warning
// callers: CC_Particle_Test_Start
// strings: "FCVAR_NEVER_AS_STRING", "Invalid attach type specified for particle_test in cvar 'particle_test_attach_mode.\n"
void __fastcall Particle_Test_Start(CBasePlayer *pPlayer, const char *name, bool bStart)
{
  char *m_pszString; // rdi
  ParticleAttachment_t AttachTypeFromString; // r14d
  char *v7; // r12
  CBaseEntity *v8; // r15
  CBaseEntity *NextCommandEntity; // rax
  int iAttachmentPoint; // [rsp+1Ch] [rbp-34h]

  if ( pPlayer != 0 )
  {
    m_pszString = "FCVAR_NEVER_AS_STRING";
    if ( (particle_test_attach_mode.m_nFlags & 0x1000) == 0 )
    {
      m_pszString = "";
      if ( particle_test_attach_mode.m_pParent->m_Value.m_pszString != 0 )
        m_pszString = particle_test_attach_mode.m_pParent->m_Value.m_pszString;
    }
    AttachTypeFromString = GetAttachTypeFromString(m_pszString);
    if ( AttachTypeFromString == ParticleAttachment_t::PATTACH_INVALID )
    {
      Warning("Invalid attach type specified for particle_test in cvar 'particle_test_attach_mode.\n");
    }
    else
    {
      v7 = "FCVAR_NEVER_AS_STRING";
      iAttachmentPoint = particle_test_attach_attachment.m_pParent->m_Value.m_nValue;
      if ( (particle_test_file.m_nFlags & 0x1000) == 0 )
      {
        v7 = "";
        if ( particle_test_file.m_pParent->m_Value.m_pszString != 0 )
          v7 = particle_test_file.m_pParent->m_Value.m_pszString;
      }
      v8 = 0;
      while ( 1 )
      {
        NextCommandEntity = GetNextCommandEntity(pPlayer, name, v8);
        v8 = NextCommandEntity;
        if ( NextCommandEntity == 0 )
          break;
        DispatchParticleEffect(v7, AttachTypeFromString, NextCommandEntity, iAttachmentPoint, 0, 1, -1, 0);
      }
    }
  }
}


// CC_Particle_Test_Start  (line 370, @0x00000000022ca760, libserver.so)  // inlines: Arg, operator[]
// calls: UTIL_GetCommandClient, Particle_Test_Start
void __fastcall CC_Particle_Test_Start(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  CommandClient = UTIL_GetCommandClient();
  Particle_Test_Start(CommandClient, v2, 1);
}


// Particle_Test_Stop  (line 377, @0x0000000002301510, libserver.so)
// calls: DispatchParticleEffect, GetNextCommandEntity
// callers: CC_Particle_Test_Stop
void __fastcall Particle_Test_Stop(CBasePlayer *pPlayer, const char *name, bool bStart)
{
  CBaseEntity *v5; // rbx
  CBaseEntity *NextCommandEntity; // rax

  if ( pPlayer != 0 )
  {
    v5 = 0;
    while ( 1 )
    {
      NextCommandEntity = GetNextCommandEntity(pPlayer, name, v5);
      v5 = NextCommandEntity;
      if ( NextCommandEntity == 0 )
        break;
      DispatchParticleEffect("", ParticleAttachment_t::PATTACH_ABSORIGIN, NextCommandEntity, 0, 1, -1, 0);
    }
  }
}


// CC_Particle_Test_Stop  (line 390, @0x0000000002301580, libserver.so)  // inlines: Arg, operator[]
// calls: UTIL_GetCommandClient, Particle_Test_Stop
void __fastcall CC_Particle_Test_Stop(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  CommandClient = UTIL_GetCommandClient();
  Particle_Test_Stop(CommandClient, v2, 0);
}


