
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CGameSceneNodeHandle::Schema_DynamicBinding  (line 66, @0x0000000001ec1ae0, libserver.so)
// calls: CGameSceneNodeHandle::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CGameSceneNodeHandle::Schema_DynamicBinding(
        const CGameSceneNodeHandle *const this)
{
  CGameSceneNodeHandle::Schema_VerifyBindingIsRegistered();
  return CGameSceneNodeHandle::s_pSchemaBinding;
}


// CGameSceneNodeHandle::NetworkStateChanged  (line 68, @0x0000000001ec1420, libserver.so)
void __fastcall CGameSceneNodeHandle::NetworkStateChanged(CGameSceneNodeHandle *const this)
{
  ;
}


// CGameSceneNodeHandle::NetworkStateChanged  (line 68, @0x0000000001ec1430, libserver.so)
void __fastcall CGameSceneNodeHandle::NetworkStateChanged(
        CGameSceneNodeHandle *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  ;
}


// CGameSceneNodeHandle::NetworkStateChangedLog  (line 68, @0x0000000001ec1440, libserver.so)
void __fastcall CGameSceneNodeHandle::NetworkStateChangedLog(
        const CGameSceneNodeHandle *const this,
        const char *pVarName,
        const char *pMsg)
{
  ;
}


// CGameSceneNode::HackToMakeAVTable  (line 125, @0x0000000001ec1450, libserver.so)
void __fastcall CGameSceneNode::HackToMakeAVTable(const CGameSceneNode *const this)
{
  ;
}


// CGameSceneNode::AddedToEntityDatabase  (line 145, @0x0000000001ec1460, libserver.so)
void __fastcall CGameSceneNode::AddedToEntityDatabase(CGameSceneNode *const this, CEntityInstance *pEntity)
{
  ;
}


// CGameSceneNode::GetSkeletonInstance  (line 153, @0x0000000001ec1470, libserver.so)
CSkeletonInstance *__fastcall CGameSceneNode::GetSkeletonInstance(CGameSceneNode *const this)
{
  return 0;
}


// CGameSceneNode::GetSkeletonInstance  (line 154, @0x0000000001ec1480, libserver.so)
const CSkeletonInstance *__fastcall CGameSceneNode::GetSkeletonInstance(const CGameSceneNode *const this)
{
  return 0;
}


// CGameSceneNode::NetworkVar_m_hParent::NetworkStateChanged  (line 334, @0x00000000020f10c0, libserver.so)  // inlines: DispatchNetworkStateChanged<CGameSceneNode>
void __fastcall CGameSceneNode::NetworkVar_m_hParent::NetworkStateChanged(
        CGameSceneNode::NetworkVar_m_hParent *const this)
{
  (*(*(this - 15) + 184LL))(this - 120);
}


// CGameSceneNode::NetworkVar_m_hParent::NetworkStateChangedLog  (line 334, @0x00000000020f10e0, libserver.so)  // inlines: DispatchNetworkStateChangedLog<CGameSceneNode>
void __fastcall CGameSceneNode::NetworkVar_m_hParent::NetworkStateChangedLog(
        const CGameSceneNode::NetworkVar_m_hParent *const this,
        const char *pVarName,
        const char *pMsg)
{
  (*(*(this - 15) + 200LL))(this - 120, pVarName, pMsg);
}


// CGameSceneNode::NetworkVar_m_hParent::NetworkStateChanged  (line 334, @0x00000000020f1100, libserver.so)  // inlines: DispatchNetworkStateChanged<CGameSceneNode>
void __fastcall CGameSceneNode::NetworkVar_m_hParent::NetworkStateChanged(
        CGameSceneNode::NetworkVar_m_hParent *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  (*(*(this - 15) + 192LL))(this - 120, nLocalOffset + 120, nArrayIndex, nPathIndex.m_Value);
}


// CGameSceneNode::Cm_vecOriginInitializer::NetworkStateChanged  (line 341, @0x00000000020f1120, libserver.so)
void __fastcall CGameSceneNode::Cm_vecOriginInitializer::NetworkStateChanged(
        CGameSceneNode::Cm_vecOriginInitializer *const this,
        void *ptr,
        int32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  bool v6; // zf
  __int64 v7; // rax
  CGameSceneNode::Cm_vecOriginInitializer *v8; // rdi

  v6 = *(this - 30) == 0;
  v7 = *(this - 24);
  v8 = this - 24;
  if ( !v6 )
    nLocalOffset = 0;
  (*(v7 + 192))(v8, (nLocalOffset + ptr - v8), nArrayIndex, nPathIndex.m_Value);
}


// CGameSceneNode::Cm_vecOriginInitializer::NetworkStateChangedLog  (line 341, @0x00000000020f1160, libserver.so)
// strings: "m_vecOrigin"
void __fastcall CGameSceneNode::Cm_vecOriginInitializer::NetworkStateChangedLog(
        const CGameSceneNode::Cm_vecOriginInitializer *const this,
        const char *pMsg)
{
  (*(*(this - 24) + 200LL))(this - 24, "m_vecOrigin", pMsg);
}


// CGameSceneNode::Schema_DynamicBinding  (line 392, @0x0000000001ec1b00, libserver.so)
// calls: CGameSceneNode::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CGameSceneNode::Schema_DynamicBinding(const CGameSceneNode *const this)
{
  CGameSceneNode::Schema_VerifyBindingIsRegistered();
  return CGameSceneNode::s_pSchemaBinding;
}


// CGameSceneNode::NetworkStateChanged  (line 401, @0x00000000020f1190, libserver.so)
void __fastcall CGameSceneNode::NetworkStateChanged(CGameSceneNode *const this)
{
  ;
}


// CGameSceneNode::NetworkStateChanged  (line 401, @0x00000000020f11a0, libserver.so)
void __fastcall CGameSceneNode::NetworkStateChanged(
        CGameSceneNode *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  ;
}


// CGameSceneNode::NetworkStateChangedLog  (line 401, @0x00000000020f11b0, libserver.so)
void __fastcall CGameSceneNode::NetworkStateChangedLog(
        const CGameSceneNode *const this,
        const char *pVarName,
        const char *pMsg)
{
  ;
}


// CGameSceneNodeHandle::CGameSceneNodeHandle  (line 587, @0x000000000230bfc0, libserver.so)  // inlines: CEntityHandle, CNetworkVarBase, CUtlStringToken, GetEHandle, GetEntryIndex, GetName, GetSerialNumber, Init, Set, operator=<CEntityInstance*>, operator=<CUtlStringToken>
// callers: CPhysSaveRestoreBlockHandler::Restore
void __fastcall CGameSceneNodeHandle::CGameSceneNodeHandle(
        CGameSceneNodeHandle *const this,
        const CGameSceneNode *pNode)
{
  CEntityInstance *m_pOwner; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v4; // eax
  __int16 v5; // cx
  uint32 v6; // eax
  uint32 m_nHashCode; // eax
  __int64 v8; // [rsp-8h] [rbp-8h]

  this->m_hOwner.m_Value.m_Index = -1;
  this->_vptr_CGameSceneNodeHandle = off_3FB43F0;  // vptr: CGameSceneNodeHandle
  this->m_name.m_Value.m_nHashCode = 0;
  if ( pNode != 0 )
  {
    m_pOwner = pNode->m_pOwner;
    if ( m_pOwner == 0 )
      goto LABEL_7;
    m_pEntity = m_pOwner->m_pEntity;
    if ( m_pEntity == 0 )
      goto LABEL_7;
    v4 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v5 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    *(&v8 - 8) = v5 | *(&v8 - 2) & 0x8000;
    v6 = (v4 << 15) | *(&v8 - 2) & 0x7FFF;
    if ( v6 != -1 )
    {
      this->m_hOwner.m_Value.m_Index = v6;
      m_nHashCode = pNode->m_name.m_Value.m_nHashCode;
      if ( m_nHashCode == 0 )
        return;
    }
    else
    {
LABEL_7:
      m_nHashCode = pNode->m_name.m_Value.m_nHashCode;
      if ( m_nHashCode == 0 )
        return;
    }
    this->m_name.m_Value.m_nHashCode = m_nHashCode;
  }
}


