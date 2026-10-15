
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBodyComponent::GetAnimationController  (line 99, @0x0000000001ec14c0, libserver.so)
CSkeletonAnimationController *__fastcall CBodyComponent::GetAnimationController(CBodyComponent *const this)
{
  return 0;
}


// CBodyComponent::Schema_DynamicBinding  (line 171, @0x0000000001ec1b40, libserver.so)
// calls: CBodyComponent::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBodyComponent::Schema_DynamicBinding(const CBodyComponent *const this)
{
  CBodyComponent::Schema_VerifyBindingIsRegistered();
  return CBodyComponent::s_pSchemaBinding;
}


// CBodyComponent::HackToMakeAVTable  (line 176, @0x0000000001ec14d0, libserver.so)
void __fastcall CBodyComponent::HackToMakeAVTable(const CBodyComponent *const this)
{
  ;
}


// CBodyComponent::SetMaterialGroup  (line 202, @0x0000000001ec1c00, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::SetMaterialGroup
void __fastcall CBodyComponent::SetMaterialGroup(CBodyComponent *const this, CUtlStringToken nID)
{
  CSkeletonInstance *v3; // rax

  v3 = (*(this->m_pSceneNode->_vptr_CGameSceneNode + 9))(this->m_pSceneNode);
  if ( v3 != 0 )
    CSkeletonInstance::SetMaterialGroup(v3, nID);
}


// CBodyComponentPoint::GetAnimationController  (line 364, @0x0000000001ec14e0, libserver.so)
CSkeletonAnimationController *__fastcall CBodyComponentPoint::GetAnimationController(CBodyComponentPoint *const this)
{
  return 0;
}


// CBodyComponentPoint::NetworkVar_m_sceneNode::~NetworkVar_m_sceneNode  (line 366, @0x0000000001ec1e60, libserver.so)
// calls: CGameSceneNode::~CGameSceneNode
void __fastcall CBodyComponentPoint::NetworkVar_m_sceneNode::~NetworkVar_m_sceneNode(
        CBodyComponentPoint::NetworkVar_m_sceneNode *const this)
{
  this->_vptr_CGameSceneNode = &off_3FB4430;
  CGameSceneNode::~CGameSceneNode(this);
}


// CBodyComponentPoint::NetworkVar_m_sceneNode::~NetworkVar_m_sceneNode  (line 366, @0x0000000001ec1e80, libserver.so)  // inlines: ~NetworkVar_m_sceneNode
// calls: CGameSceneNode::~CGameSceneNode, operator delete
void __fastcall CBodyComponentPoint::NetworkVar_m_sceneNode::~NetworkVar_m_sceneNode(
        CBodyComponentPoint::NetworkVar_m_sceneNode *const this)
{
  this->_vptr_CGameSceneNode = &off_3FB4430;
  CGameSceneNode::~CGameSceneNode(this);
  operator delete(this);
}


// CBodyComponentPoint::NetworkVar_m_sceneNode::NetworkStateChanged  (line 366, @0x0000000001ec1fb0, libserver.so)  // inlines: DispatchNetworkStateChanged<CBodyComponent>, Get, NetworkStateChanged, operator CEntityInstance*
void __fastcall CBodyComponentPoint::NetworkVar_m_sceneNode::NetworkStateChanged(
        CBodyComponentPoint::NetworkVar_m_sceneNode *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  _QWORD *v4; // rax

  v4 = *(this - 5);
  if ( v4 != 0 && (*(v4[1] + 49LL) & 4) == 0 )
    (*(*v4 + 176LL))(*(this - 5), nLocalOffset + 80, nArrayIndex, *(this - 16));
}


// CBodyComponentPoint::NetworkVar_m_sceneNode::NetworkStateChangedLog  (line 366, @0x0000000001ec28b0, libserver.so)  // inlines: DispatchNetworkStateChangedLog<CBodyComponent>, Get, NetworkStateChangedLog, operator const CEntityInstance*
void __fastcall CBodyComponentPoint::NetworkVar_m_sceneNode::NetworkStateChangedLog(
        const CBodyComponentPoint::NetworkVar_m_sceneNode *const this,
        const char *pVarName,
        const char *pMsg)
{
  _QWORD *v3; // rdi

  v3 = *(this - 5);
  if ( v3 != 0 && (*(v3[1] + 49LL) & 4) == 0 )
    (*(*v3 + 184LL))(v3, pVarName, pMsg);
}


// CBodyComponentPoint::NetworkVar_m_sceneNode::NetworkStateChanged  (line 366, @0x0000000001ec28e0, libserver.so)  // inlines: DispatchNetworkStateChanged<CBodyComponent>, Get, NetworkStateChanged, operator CEntityInstance*
void __fastcall CBodyComponentPoint::NetworkVar_m_sceneNode::NetworkStateChanged(
        CBodyComponentPoint::NetworkVar_m_sceneNode *const this)
{
  _QWORD *v1; // rdi

  v1 = *(this - 5);
  if ( v1 != 0 && (*(v1[1] + 49LL) & 4) == 0 )
    (*(*v1 + 168LL))(v1);
}


// CBodyComponentPoint::Schema_DynamicBinding  (line 369, @0x0000000001ec1b80, libserver.so)
// calls: CBodyComponentPoint::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBodyComponentPoint::Schema_DynamicBinding(
        const CBodyComponentPoint *const this)
{
  CBodyComponentPoint::Schema_VerifyBindingIsRegistered();
  return CBodyComponentPoint::s_pSchemaBinding;
}


// CBodyComponentSkeletonInstance::NetworkVar_m_skeletonInstance::NetworkStateChanged  (line 378, @0x0000000001ec14f0, libserver.so)  // inlines: DispatchNetworkStateChanged<CBodyComponent>, Get, NetworkStateChanged, operator CEntityInstance*
void __fastcall CBodyComponentSkeletonInstance::NetworkVar_m_skeletonInstance::NetworkStateChanged(
        CBodyComponentSkeletonInstance::NetworkVar_m_skeletonInstance *const this)
{
  _QWORD *v1; // rdi

  v1 = *(this - 5);
  if ( v1 != 0 && (*(v1[1] + 49LL) & 4) == 0 )
    (*(*v1 + 168LL))(v1);
}


// CBodyComponentSkeletonInstance::NetworkVar_m_skeletonInstance::NetworkStateChangedLog  (line 378, @0x0000000001ec1520, libserver.so)  // inlines: DispatchNetworkStateChangedLog<CBodyComponent>, Get, NetworkStateChangedLog, operator const CEntityInstance*
void __fastcall CBodyComponentSkeletonInstance::NetworkVar_m_skeletonInstance::NetworkStateChangedLog(
        const CBodyComponentSkeletonInstance::NetworkVar_m_skeletonInstance *const this,
        const char *pVarName,
        const char *pMsg)
{
  _QWORD *v3; // rdi

  v3 = *(this - 5);
  if ( v3 != 0 && (*(v3[1] + 49LL) & 4) == 0 )
    (*(*v3 + 184LL))(v3, pVarName, pMsg);
}


// CBodyComponentSkeletonInstance::NetworkVar_m_skeletonInstance::~NetworkVar_m_skeletonInstance  (line 378, @0x0000000001ec1df0, libserver.so)
// calls: CSkeletonInstance::~CSkeletonInstance
void __fastcall CBodyComponentSkeletonInstance::NetworkVar_m_skeletonInstance::~NetworkVar_m_skeletonInstance(
        CBodyComponentSkeletonInstance::NetworkVar_m_skeletonInstance *const this)
{
  this->_vptr_CGameSceneNode = &off_3FB4550;
  this->_vptr_ISceneAnimatableProceduralBoneTransforms = &off_3FB4640;
  CSkeletonInstance::~CSkeletonInstance(this);
}


// CBodyComponentSkeletonInstance::NetworkVar_m_skeletonInstance::~NetworkVar_m_skeletonInstance  (line 378, @0x0000000001ec1e20, libserver.so)  // inlines: ~NetworkVar_m_skeletonInstance
// calls: CSkeletonInstance::~CSkeletonInstance, operator delete
void __fastcall CBodyComponentSkeletonInstance::NetworkVar_m_skeletonInstance::~NetworkVar_m_skeletonInstance(
        CBodyComponentSkeletonInstance::NetworkVar_m_skeletonInstance *const this)
{
  this->_vptr_CGameSceneNode = &off_3FB4550;
  this->_vptr_ISceneAnimatableProceduralBoneTransforms = &off_3FB4640;
  CSkeletonInstance::~CSkeletonInstance(this);
  operator delete(this);
}


// CBodyComponentSkeletonInstance::NetworkVar_m_skeletonInstance::NetworkStateChanged  (line 378, @0x0000000001ec2870, libserver.so)  // inlines: DispatchNetworkStateChanged<CBodyComponent>, Get, NetworkStateChanged, operator CEntityInstance*
void __fastcall CBodyComponentSkeletonInstance::NetworkVar_m_skeletonInstance::NetworkStateChanged(
        CBodyComponentSkeletonInstance::NetworkVar_m_skeletonInstance *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  _QWORD *v4; // rax

  v4 = *(this - 5);
  if ( v4 != 0 && (*(v4[1] + 49LL) & 4) == 0 )
    (*(*v4 + 176LL))(*(this - 5), nLocalOffset + 80, nArrayIndex, *(this - 16));
}


// CBodyComponentSkeletonInstance::Schema_DynamicBinding  (line 381, @0x000000000208fb50, libserver.so)
// calls: CBodyComponentSkeletonInstance::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBodyComponentSkeletonInstance::Schema_DynamicBinding(
        const CBodyComponentSkeletonInstance *const this)
{
  CBodyComponentSkeletonInstance::Schema_VerifyBindingIsRegistered();
  return CBodyComponentSkeletonInstance::s_pSchemaBinding;
}


// CBodyComponentSkeletonInstance::HackToMakeAVTable  (line 383, @0x000000000208e640, libserver.so)
void __fastcall CBodyComponentSkeletonInstance::HackToMakeAVTable(const CBodyComponentSkeletonInstance *const this)
{
  ;
}


