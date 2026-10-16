// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/point_clientui_dialog.cpp:19
class C_CPointClientUIDialog_MapInstall {
	C_CPointClientUIDialog_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_point_clientui_dialog.cpp  (line 0, @0x000000000199d000, libserver.so)  // inlines: CFieldPathHuffmanEncoder, CHeadLookParams, CUtlHash, CUtlMemory, CUtlStack, CUtlStringToken, CUtlVector, CUtlVectorBase, CUtlVectorFixed, CVariantBase, C_CPointClientUIDialog_MapInstall, Color, IntVector2D, InterpolatedVarLatchList_t, Purge, RemoveAll, ResetDbgInfo, ServerToClientMap_t, SetColor, SetGrowSize, State_t, Vector2D, _Alloc_hider, __static_initialization_and_destruction_0, __static_initialization_and_destruction_1, basic_string, item_definition_index_t, operator[], style_index_t, ~CUtlHash, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixed, ~InterpolatedVarLatchList_t
// calls: CUtlVectorBase<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, int> >, CUtlMemory<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, int> >, int> >::SetCount, CUtlVectorBase<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, int> >::SetCount, __cxa_atexit, AddServerToClientClassMapping, __cxa_guard_acquire, __cxa_guard_release, CFieldPathHuffmanEncoder::BuildOpCodeCodeToHuffmanLookup, CUtlVectorBase<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, int> >, CUtlMemory<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t, CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t, int> >, int> >::~CUtlVectorBase, CUtlHash<IWrappedInterpolatedVar::CWrappedIVHashElement_t, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashFuncs, IWrappedInterpolatedVar::CWrappedInterpolatedVarArrayBaseHashFuncs>::Purge, _Unwind_Resume, CUtlMemory<int, int>::Purge, CUtlMemory<CFieldPathHuffmanEncoder::composed_t, int>::Purge
// strings: "CPointClientUIDialog"
// globals: UNSPECIFIED_LOGGING_COLOR, `guard variable for'g_HuffmanEncoder, `guard variable for'CEntityKeyValues::sm_EmptyVariant, `guard variable for'g_AnimOpSourceColors, g_AnimOpSourceColors, `guard variable for'g_EntAttrDamageOptionsID, g_EntAttrDamageOptionsID, `guard variable for'IWrappedInterpolatedVar::s_WrappedInterpolatedVarState (35 total)
void __cdecl GLOBAL__sub_I_point_clientui_dialog_cpp()
{
  CUtlVectorBase<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t,CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t,int> >,CUtlMemory<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t,CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t,int> >,int> > *v0; // r15
  CUtlVectorBase<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t,CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t,int> >,CUtlMemory<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t,CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t,int> >,int> >::CAllocator *p_m_Memory; // r13
  CUtlVectorBase<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t,CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t,int> >,CUtlMemory<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t,CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t,int> >,int> > *v2; // r12
  __int64 v3; // r14
  __int64 j; // rbx
  __int64 v5; // rax
  __int64 i; // [rsp+8h] [rbp-38h]

  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  // init once: g_HuffmanEncoder
  g_HuffmanEncoder.m_pRoot = 0;
  g_HuffmanEncoder.m_Frequencies.m_Size = 0;
  g_HuffmanEncoder.m_Frequencies.m_Memory.m_pMemory = 0;
  g_HuffmanEncoder.m_Frequencies.m_Memory.m_nAllocationCount = 0;
  g_HuffmanEncoder.m_Frequencies.m_Memory.m_nGrowSize = 0;
  g_HuffmanEncoder.m_OpCodeToHuffmanLookup.m_Size = 0;
  g_HuffmanEncoder.m_FixedTree.m_Size = 0;
  g_HuffmanEncoder.m_FixedTree.m_Memory.m_pMemory = 0;
  g_HuffmanEncoder.m_FixedTree.m_Memory.m_nAllocationCount = 0;
  g_HuffmanEncoder.m_FixedTree.m_Memory.m_nGrowSize = 0;
  CFieldPathHuffmanEncoder::BuildOpCodeCodeToHuffmanLookup(&g_HuffmanEncoder);
  __cxa_atexit(CFieldPathHuffmanEncoder::~CFieldPathHuffmanEncoder, &g_HuffmanEncoder, &_dso_handle);
  // init once: CEntityKeyValues::sm_EmptyVariant
  CEntityKeyValues::sm_EmptyVariant.m_type = 0;
  CEntityKeyValues::sm_EmptyVariant.m_flags = 0;
  CEntityKeyValues::sm_EmptyVariant.m_uint64 = 0;
  __cxa_atexit(CVariantBase<CEntityVariantAllocator>::~CVariantBase, &CEntityKeyValues::sm_EmptyVariant, &_dso_handle);
  // init once: g_AnimOpSourceColors
  g_AnimOpSourceColors[0]._color[0] = -1;
  g_AnimOpSourceColors[0]._color[1] = -1;
  g_AnimOpSourceColors[0]._color[2] = 0;
  g_AnimOpSourceColors[0]._color[3] = -1;
  g_AnimOpSourceColors[1]._color[0] = -36;
  g_AnimOpSourceColors[1]._color[1] = -36;
  g_AnimOpSourceColors[1]._color[2] = -36;
  g_AnimOpSourceColors[1]._color[3] = -1;
  g_AnimOpSourceColors[2]._color[0] = 0;
  g_AnimOpSourceColors[2]._color[1] = -1;
  g_AnimOpSourceColors[2]._color[2] = 50;
  g_AnimOpSourceColors[2]._color[3] = -1;
  g_AnimOpSourceColors[3]._color[0] = -1;
  g_AnimOpSourceColors[3]._color[1] = 50;
  g_AnimOpSourceColors[3]._color[2] = 50;
  g_AnimOpSourceColors[3]._color[3] = -1;
  // init once: g_EntAttrDamageOptionsID
  g_EntAttrDamageOptionsID.m_nHashCode = -1517776886;
  // init once: IWrappedInterpolatedVar::s_WrappedInterpolatedVarState
  IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_Memory.m_pMemory = 0;
  IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_Memory.m_nAllocationCount = 0;
  IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_Memory.m_nGrowSize = 0;
  IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_Size = 0;
  IWrappedInterpolatedVar::s_WrappedInterpolatedVarState.m_InterpolationTimeStack.m_pElements = 0;
  __cxa_atexit(
    IWrappedInterpolatedVar::State_t::~State_t,
    &IWrappedInterpolatedVar::s_WrappedInterpolatedVarState,
    &_dso_handle);
  // init once: IWrappedInterpolatedVar::s_LatchList
  v0 = &IWrappedInterpolatedVar::s_LatchList;
  for ( i = 1; i != -1; --i )
  {
    p_m_Memory = &v0->m_Memory;
    v2 = v0;
    v3 = 1;
    do
    {
      v2->m_Size = 0;
      p_m_Memory->m_pMemory = 0;
      p_m_Memory->m_nAllocationCount = 0;
      p_m_Memory->m_nGrowSize = 0;
      CUtlVectorBase<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t,CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t,int>>,CUtlMemory<CUtlVector<IWrappedInterpolatedVar::CWrappedIVHashElement_t,CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t,int>>,int>>::SetCount(
        v2,
        1024);
      for ( j = 0; j != 1024; ++j )
      {
        CUtlVectorBase<IWrappedInterpolatedVar::CWrappedIVHashElement_t,CUtlMemory<IWrappedInterpolatedVar::CWrappedIVHashElement_t,int>>::SetCount(
          &v2->m_Memory.m_pMemory[j],
          0);
        v5 = j * 24;
        *(&v2->m_Memory.m_pMemory->m_Memory.m_nGrowSize + v5) &= 0xC0000000;
      }
      --v3;
      BYTE2(v2[1].m_Size) = 1;
      p_m_Memory += 2;
      *(&v2[1].m_Size + 1) = 1023;
      v2 = (v2 + 32);
    }
    while ( v3 != -1 );
    v0 = (v0 + 64);
  }
  __cxa_atexit(_tcf_0_29, 0, &_dso_handle);
  INVALID_STYLE_INDEX.m_Data = -1;
  DEFAULT_STYLE_INDEX.m_Data = 0;
  ITEM_DEF_INDEX_TEST_DEFINITIONS_COUNT.m_Data = 1500;
  ITEM_DEF_INDEX_TEST_DEFINITIONS_FIRST_VALID.m_Data = -1536;
  INVALID_ITEM_DEF_INDEX.m_Data = 0;
  ITEM_DEF_INDEX_TEST_DEFINITIONS_LAST_VALID.m_Data = -37;
  DOTA_DESIRED_WARD_PLACEMENT_INVALID.x = -1.0;
  DOTA_DESIRED_WARD_PLACEMENT_INVALID.y = -1.0;
  INT_VECTOR2_ORIGIN.x = 0;
  INT_VECTOR2_ORIGIN.y = 0;
  // init once: CHeadLookParams::ms_Defaults
  CHeadLookParams::ms_Defaults.m_LookPriority = CHeadLookParams::HeadLookPriority_t::BORING;
  CHeadLookParams::ms_Defaults.m_flLookDuration = 0.0;
  CHeadLookParams::ms_Defaults.m_pReplyWhenAimed = 0;
  CHeadLookParams::ms_Defaults.m_pReasonStr = 0;
  CHeadLookParams::ms_Defaults.m_bWaitForSteady = 1;
  CHeadLookParams::ms_Defaults.m_flEaseInTime = 0.25;
  INVALID_CUSTOM_PLAYER_COLOR._color[0] = 0;
  INVALID_CUSTOM_PLAYER_COLOR._color[1] = 0;
  INVALID_CUSTOM_PLAYER_COLOR._color[2] = 0;
  INVALID_CUSTOM_PLAYER_COLOR._color[3] = 0;
  if ( `guard variable for'C_CPointClientUIDialog_MapInstall::C_CPointClientUIDialog_MapInstall(void)::CPointClientUIDialog_mapping == 0
    && __cxa_guard_acquire(&`guard variable for'C_CPointClientUIDialog_MapInstall::C_CPointClientUIDialog_MapInstall(void)::CPointClientUIDialog_mapping) != 0 )
  {
    C_CPointClientUIDialog_MapInstall::C_CPointClientUIDialog_MapInstall(void)::CPointClientUIDialog_mapping.m_pNext = 0;
    C_CPointClientUIDialog_MapInstall::C_CPointClientUIDialog_MapInstall(void)::CPointClientUIDialog_mapping.m_pClient = "CPointClientUIDialog";
    C_CPointClientUIDialog_MapInstall::C_CPointClientUIDialog_MapInstall(void)::CPointClientUIDialog_mapping.m_pServer = "CPointClientUIDialog";
    __cxa_guard_release(&`guard variable for'C_CPointClientUIDialog_MapInstall::C_CPointClientUIDialog_MapInstall(void)::CPointClientUIDialog_mapping);
  }
  AddServerToClientClassMapping(&C_CPointClientUIDialog_MapInstall::C_CPointClientUIDialog_MapInstall(void)::CPointClientUIDialog_mapping);
  // init once: CNetMessagePB<353,CDOTAClientMsg_EventPointsTip,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::CProtobufBinding::s_typeName
  CNetMessagePB<353,CDOTAClientMsg_EventPointsTip,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::CProtobufBinding::s_typeName._M_dataplus._M_p = &std::string::_Rep::_S_empty_rep_storage + 24;
  __cxa_atexit(
    &std::string::~string,
    &CNetMessagePB<353,CDOTAClientMsg_EventPointsTip,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::CProtobufBinding::s_typeName,
    &_dso_handle);
  // init once: CNetMessagePB<349,CDOTAClientMsg_CoinWager,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::CProtobufBinding::s_typeName
  CNetMessagePB<349,CDOTAClientMsg_CoinWager,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::CProtobufBinding::s_typeName._M_dataplus._M_p = &std::string::_Rep::_S_empty_rep_storage + 24;
  __cxa_atexit(
    &std::string::~string,
    &CNetMessagePB<349,CDOTAClientMsg_CoinWager,(SignonGroup_t)14,(NetChannelBufType_t)1,true>::CProtobufBinding::s_typeName,
    &_dso_handle);
}


// CPointClientUIDialog::YouForgotToImplementOrDeclareServerClass  (line 19, @0x0000000001b556f0, libserver.so)
int __fastcall CPointClientUIDialog::YouForgotToImplementOrDeclareServerClass(CPointClientUIDialog *const this)
{
  return 0;
}


// CPointClientUIDialog::GetServerClass  (line 19, @0x0000000001b55b10, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CPointClientUIDialog::GetServerClass(CPointClientUIDialog *const this)
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


// CPointClientUIDialog::CPointClientUIDialog  (line 23, @0x0000000001b55b50, libserver.so)  // inlines: CEntityHandle, CHandle, CNetworkVarBase
// calls: CBaseClientUIEntity::CBaseClientUIEntity
// callers: CPointClientUIDialog::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CPointClientUIDialog::CPointClientUIDialog(CPointClientUIDialog *const this)
{
  CBaseClientUIEntity::CBaseClientUIEntity(this);
  this->m_hActivator.m_Value.m_Index = -1;
  this->_vptr_IHandleEntity = &off_3F7DBF0;
  this->m_bStartEnabled = 1;
}


// CPointClientUIDialog::Precache  (line 31, @0x0000000001b55d80, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheModelFromKeyValues
void __fastcall CPointClientUIDialog::Precache(
        CPointClientUIDialog *const this,
        const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  CBaseEntity::PrecacheModelFromKeyValues(this, pContext, 0, 0);
}


// CPointClientUIDialog::Spawn  (line 41, @0x0000000001b55a60, libserver.so)  // inlines: GetCollisionGroup, GetCollisionGroup_Inline, NetworkStateChanged, Set, operator=<bool>
// calls: CBaseEntity::Spawn, CBaseModelEntity::SetModelFromKeyValues, CCollisionProperty::SetupPhysicsFromUnscaledModel
// globals: CPointClientUIDialog::DialogUse(CBaseEntity *,CBaseEntity *,USE_TYPE,float)
void __fastcall CPointClientUIDialog::Spawn(CPointClientUIDialog *const this, const CEntityKeyValues *pKeyValues)
{
  CCollisionProperty *m_pCollision; // rax
  int m_Value; // edx
  bool m_bStartEnabled; // r12

  CBaseEntity::Spawn(this, pKeyValues);
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  m_pCollision = this->m_pCollision;
  if ( m_pCollision != 0 )
    m_Value = m_pCollision->m_CollisionGroup.m_Value;
  else
    m_Value = 4;
  CCollisionProperty::SetupPhysicsFromUnscaledModel(
    &this->m_Collision,
    VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED,
    m_Value,
    0);
  m_bStartEnabled = this->m_bStartEnabled;
  if ( m_bStartEnabled )
  {
    this->m_pfnUse.__delta = 0;
    this->m_pfnUse.__pfn = CPointClientUIDialog::DialogUse;
  }
  if ( m_bStartEnabled != this->m_bEnabled.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1152, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bEnabled.m_Value = m_bStartEnabled;
  }
}


// CPointClientUIDialog::DialogUse  (line 58, @0x0000000001b55b90, libserver.so)  // inlines: GameRules, NetworkStateChanged, Set, operator=, operator=<CBaseEntity*>
// calls: CHandle<CBaseEntity>::CHandle, operator!=<CBaseEntity>, CBaseEntity::AddFlag
void __fastcall CPointClientUIDialog::DialogUse(
        CPointClientUIDialog *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value)
{
  CBaseEntity *v7; // rax
  CHandle<CBaseEntity> b; // [rsp+0h] [rbp-30h] BYREF

  CHandle<CBaseEntity>::CHandle(&b, pActivator);
  if ( operator!=<CBaseEntity>(&this->m_hActivator.m_Value, &b) )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1416, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_hActivator.m_Value = b;
  }
  v7 = (*(g_pGameRules->_vptr_CGameRules + 152))(g_pGameRules, pActivator);
  if ( v7 != 0 )
    CBaseEntity::AddFlag(v7, 64);
}


// CPointClientUIDialog::OnClientDialogFinished  (line 75, @0x0000000001b55c20, libserver.so)  // inlines: GameRules, NetworkStateChanged, Set, operator=, operator=<std::nullptr_t>
// calls: CHandle<CBaseEntity>::CHandle, operator!=<CBaseEntity>, CBaseEntity::RemoveFlag
void __fastcall CPointClientUIDialog::OnClientDialogFinished(CPointClientUIDialog *const this, CBaseEntity *pClient)
{
  CBaseEntity *v4; // rax
  CHandle<CBaseEntity> b; // [rsp+0h] [rbp-30h] BYREF

  CHandle<CBaseEntity>::CHandle(&b, 0);
  if ( operator!=<CBaseEntity>(&this->m_hActivator.m_Value, &b) )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1416, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_hActivator.m_Value = b;
  }
  v4 = (*(g_pGameRules->_vptr_CGameRules + 152))(g_pGameRules, pClient);
  if ( v4 != 0 )
    CBaseEntity::RemoveFlag(v4, 64);
}


// CPointClientUIDialog::OnInputEnable  (line 92, @0x0000000001b55700, libserver.so)
// globals: CPointClientUIDialog::DialogUse(CBaseEntity *,CBaseEntity *,USE_TYPE,float)
void __fastcall CPointClientUIDialog::OnInputEnable(CPointClientUIDialog *const this, inputdata_t *const inputdata)
{
  this->m_pfnUse.__pfn = CPointClientUIDialog::DialogUse;
  this->m_pfnUse.__delta = 0;
}


// CPointClientUIDialog::OnInputDisable  (line 103, @0x0000000001b55720, libserver.so)
void __fastcall CPointClientUIDialog::OnInputDisable(CPointClientUIDialog *const this, inputdata_t *const inputdata)
{
  this->m_pfnUse.__pfn = 0;
  this->m_pfnUse.__delta = 0;
}


// CPointClientUIDialog::ObjectCaps  (line 161, @0x0000000001b55740, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CPointClientUIDialog::ObjectCaps(CPointClientUIDialog *const this)
{
  if ( this->m_bEnabled.m_Value )
    return CBaseEntity::ObjectCaps(this) | 1;
  else
    return CBaseEntity::ObjectCaps(this);
}


