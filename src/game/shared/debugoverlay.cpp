// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/debugoverlay.cpp:29
class CDebugOverlayGameSystem : public CAutoGameSystem, IDebugVisualizer, IConsoleDisplayFunc {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

	HSCRIPT m_hInstance;  // +0x38
	bool m_bVisible;  // +0x40
	typedef CAutoGameSystem BaseClass;
	CDebugOverlayGameSystem(CDebugOverlayGameSystem &);
	CDebugOverlayGameSystem(const CDebugOverlayGameSystem &);
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDebugOverlayGameSystem *);
	CDebugOverlayGameSystem();
	virtual void ColorPrint(const Color &, const char *);
	virtual void Print(const char *);
	virtual void DPrint(const char *);
	virtual void GetConsoleText(char *, size_t);
	virtual void SetOverlayStartTime(float, bool);
	virtual void DebugDraw(CFrustum *, ISceneView *, float, float);
	virtual void AgeList(float, float);
	virtual void GameActivate(const EventGameActivate_t &);
	virtual void GameDeactivate(const EventGameDeactivate_t &);
	void ToggleVisibility();
	void ScreenMessage(const Color &, const char *, bool);
	virtual ~CDebugOverlayGameSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[40] ColorPrint
	// vtable[41] Print
	// vtable[42] DPrint
	// vtable[43] GetConsoleText
	// vtable[44] SetOverlayStartTime
	// vtable[45] DebugDraw
	// vtable[46] AgeList
	// vtable[8] GameActivate
	// vtable[11] GameDeactivate
	// sizeof = 72
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDebugOverlayGameSystem::~CDebugOverlayGameSystem  (line 29, @0x000000000208fd70, libserver.so)  // inlines: ~CAutoGameSystem, ~IDebugVisualizer
// calls: IGameSystem::~IGameSystem
void __fastcall CDebugOverlayGameSystem::~CDebugOverlayGameSystem(CDebugOverlayGameSystem *const this)
{
  this->_vptr_IConsoleDisplayFunc = &off_3FF1130;
  this->_vptr_IDebugVisualizer = off_3FCBB90;
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CDebugOverlayGameSystem::~CDebugOverlayGameSystem  (line 29, @0x000000000208fdb0, libserver.so)  // inlines: ~CAutoGameSystem, ~CDebugOverlayGameSystem, ~IDebugVisualizer
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CDebugOverlayGameSystem::~CDebugOverlayGameSystem(CDebugOverlayGameSystem *const this)
{
  this->_vptr_IConsoleDisplayFunc = &off_3FF1130;
  this->_vptr_IDebugVisualizer = off_3FCBB90;
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CDebugOverlayGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 31, @0x000000000208edd0, libserver.so)
void __fastcall CDebugOverlayGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CDebugOverlayGameSystem *const this)
{
  ;
}


// CDebugOverlayGameSystem::DoesGameSystemReallocate  (line 31, @0x000000000208ede0, libserver.so)
// globals: CDebugOverlayGameSystem::sm_Factory
bool __fastcall CDebugOverlayGameSystem::DoesGameSystemReallocate(const CDebugOverlayGameSystem *const this)
{
  return (*(CDebugOverlayGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CDebugOverlayGameSystem::sm_Factory);
}


// CDebugOverlayGameSystem::SetGameSystemGlobalPtrs  (line 31, @0x000000000208ee00, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDebugOverlayGameSystem::sm_Factory
void __fastcall CDebugOverlayGameSystem::SetGameSystemGlobalPtrs(CDebugOverlayGameSystem *const this, void *pValue)
{
  if ( CDebugOverlayGameSystem::sm_Factory != 0 )
    (*(CDebugOverlayGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(CDebugOverlayGameSystem::sm_Factory, pValue);
}


// CDebugOverlayGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 116, @0x000000000206fe90, libserver.so)
void __cdecl CDebugOverlayGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CDebugOverlayGameSystem::CDebugOverlayGameSystem  (line 122, @0x000000000206fea0, libserver.so)
void __fastcall CDebugOverlayGameSystem::CDebugOverlayGameSystem(CDebugOverlayGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FF0F70;
  this->_vptr_IDebugVisualizer = off_3FF10F8;
  this->_vptr_IConsoleDisplayFunc = &off_3FF1130;
  this->m_pOverlayListInterpolated = 0;
  this->m_pOverlayList = 0;
  this->m_bVisible = 1;
  this->m_hInstance = 0;
}


// CDebugOverlayGameSystem::ScreenMessage  (line 145, @0x000000000205a900, libserver.so)  // inlines: GetFloat, GetInt, VertexColor_t
// calls: ConVarRef::ConVarRef
// callers: CDebugOverlayGameSystem::ColorPrint, CDebugOverlayGameSystem::Print, CDebugOverlayGameSystem::DPrint, CDebugOverlayGameSystem::ScreenMessage
// strings: "developer"
// globals: debugoverlaysim
void __fastcall CDebugOverlayGameSystem::ScreenMessage(
        CDebugOverlayGameSystem *const this,
        const Color *const clr,
        const char *pMessage,
        bool bIsDebugPrint)
{
  __int64 v6; // rax
  double m_fValue; // xmm0_8
  void (__fastcall *v8)(IDebugOverlay *, const Color *const, _BYTE *, double); // rax
  _BYTE v9[16]; // [rsp+0h] [rbp-30h] BYREF
  ConVarRef developerVar; // [rsp+10h] [rbp-20h] BYREF

  ConVarRef::ConVarRef(&developerVar, "developer");
  if ( developerVar.m_pConVarState->m_Value.m_nValue > 0 )
  {
    v6 = *debugoverlaysim;
    v9[0] = this->_vptr_IGameSystem;
    m_fValue = screenmessage_notifytime.m_pParent->m_Value.m_fValue;
    v8 = *(v6 + 312);
    v9[1] = BYTE1(this->_vptr_IGameSystem);
    v9[2] = BYTE2(this->_vptr_IGameSystem);
    v9[3] = BYTE3(this->_vptr_IGameSystem);
    v8(debugoverlaysim, clr, v9, m_fValue);
  }
}


// CDebugOverlayGameSystem::ScreenMessage  (line 145, @0x000000000206fef0, libserver.so)
// calls: CDebugOverlayGameSystem::ScreenMessage
// globals: debugoverlaysim
void __fastcall CDebugOverlayGameSystem::ScreenMessage(
        CDebugOverlayGameSystem *const this,
        const Color *const clr,
        const char *pMessage,
        bool bIsDebugPrint)
{
  if ( debugoverlaysim != 0 )
    CDebugOverlayGameSystem::ScreenMessage(clr, pMessage, pMessage, bIsDebugPrint);
}


// CDebugOverlayGameSystem::ColorPrint  (line 162, @0x000000000205a980, libserver.so)  // inlines: ScreenMessage
// calls: CDebugOverlayGameSystem::ScreenMessage
// globals: debugoverlaysim
void __fastcall CDebugOverlayGameSystem::ColorPrint(
        CDebugOverlayGameSystem *const this,
        const Color *const clr,
        const char *pMessage)
{
  bool v3; // cl

  if ( debugoverlaysim != 0 )
    CDebugOverlayGameSystem::ScreenMessage(clr, pMessage, pMessage, v3);
}


// CDebugOverlayGameSystem::Print  (line 170, @0x000000000205a9c0, libserver.so)  // inlines: Color, ScreenMessage, SetColor
// calls: CDebugOverlayGameSystem::ScreenMessage, __stack_chk_fail
// globals: debugoverlaysim
void __fastcall CDebugOverlayGameSystem::Print(CDebugOverlayGameSystem *const this, const char *pMessage)
{
  const char *v2; // rdx
  bool v3; // cl
  _BYTE v4[8]; // [rsp+0h] [rbp-10h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-8h]

  v5 = __readfsqword(0x28u);
  v4[0] = -1;
  v4[1] = -1;
  v4[2] = -1;
  v4[3] = -1;
  if ( debugoverlaysim != 0 )
    CDebugOverlayGameSystem::ScreenMessage(v4, pMessage, v2, v3);
}


// CDebugOverlayGameSystem::DPrint  (line 178, @0x000000000205aa30, libserver.so)  // inlines: Color, ScreenMessage, SetColor
// calls: CDebugOverlayGameSystem::ScreenMessage, __stack_chk_fail
// globals: debugoverlaysim
void __fastcall CDebugOverlayGameSystem::DPrint(CDebugOverlayGameSystem *const this, const char *pMessage)
{
  const char *v2; // rdx
  bool v3; // cl
  _BYTE v4[8]; // [rsp+0h] [rbp-10h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-8h]

  v5 = __readfsqword(0x28u);
  v4[0] = -60;
  v4[1] = -75;
  v4[2] = 80;
  v4[3] = -1;
  if ( debugoverlaysim != 0 )
    CDebugOverlayGameSystem::ScreenMessage(v4, pMessage, v2, v3);
}


// CDebugOverlayGameSystem::GetConsoleText  (line 183, @0x0000000002058b90, libserver.so)
void __fastcall CDebugOverlayGameSystem::GetConsoleText(
        const CDebugOverlayGameSystem *const this,
        char *pchText,
        size_t bufSize)
{
  ;
}


// CDebugOverlayGameSystem::GameActivate  (line 189, @0x00000000020873c0, libserver.so)  // inlines: CVariantBase, Free, RegisterInstance<CDebugOverlayScriptHelper>, VertexColor_t, ~CVariantBase
// calls: GetScriptDesc<CDebugOverlayScriptHelper>, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "debugoverlay"
// globals: g_pGameDebugOverlaySystem, debugoverlaysim, g_pDebugOverlay, debugoverlayinterpolated
void __fastcall CDebugOverlayGameSystem::GameActivate(
        CDebugOverlayGameSystem *const this,
        const EventGameActivate_t *const msg)
{
  ISceneViewDebugOverlays *v3; // rax
  __int64 interval_per_tick_low; // xmm0_8
  ISceneViewDebugOverlays *m_pOverlayList; // rdi
  void (__fastcall *v6)(ISceneViewDebugOverlays *, HSCRIPT *); // rax
  __int64 v7; // rax
  IDebugVisualizer *v8; // rdx
  ISceneViewDebugOverlays *v9; // r12
  ISceneViewDebugOverlays *m_pOverlayListInterpolated; // rax
  IScriptVM *v11; // r13
  __int64 (__fastcall *v12)(IScriptVM *, ScriptClassDesc_t *, ISceneViewDebugOverlays *); // r15
  ScriptClassDesc_t *Script; // rax
  HSCRIPT v14; // r12
  void (__fastcall *v15)(IScriptVM *, _QWORD, const char *, HSCRIPT *); // rax
  HSCRIPT v16; // [rsp+0h] [rbp-40h] BYREF
  __int16 v17; // [rsp+8h] [rbp-38h]
  __int16 v18; // [rsp+Ah] [rbp-36h]

  v3 = (*(*g_pSceneSystem + 472LL))(g_pSceneSystem, 1);
  this->m_pOverlayList = v3;
  if ( gpGlobals != 0 )
    interval_per_tick_low = LODWORD(gpGlobals->interval_per_tick);
  else
    interval_per_tick_low = 1014350479;
  (*(v3->_vptr_ISceneViewDebugOverlays + 7))(v3, *&interval_per_tick_low);
  m_pOverlayList = this->m_pOverlayList;
  v6 = *(m_pOverlayList->_vptr_ISceneViewDebugOverlays + 9);
  LODWORD(v16) = -16711936;
  v6(m_pOverlayList, &v16);
  (*(this->m_pOverlayList->_vptr_ISceneViewDebugOverlays + 11))(this->m_pOverlayList, 1);
  this->m_pOverlayListInterpolated = 0;
  v7 = (*(*g_pEngineServiceMgr + 224LL))(g_pEngineServiceMgr);
  v8 = 0;
  if ( g_pGameDebugOverlaySystem != 0 )
    v8 = &g_pGameDebugOverlaySystem->IDebugVisualizer;
  (*(*v7 + 8LL))(v7, 1578366956, v8, 1);
  v9 = this->m_pOverlayList;
  debugoverlaysim = v9;
  debugoverlay = v9;
  m_pOverlayListInterpolated = this->m_pOverlayListInterpolated;
  g_pDebugOverlay = v9;
  debugoverlayinterpolated = m_pOverlayListInterpolated;
  v11 = g_pScriptVM;
  if ( g_pScriptVM != 0 )
  {
    v12 = *(*g_pScriptVM + 184LL);
    Script = GetScriptDesc<CDebugOverlayScriptHelper>(v9);
    v14 = v12(v11, Script, v9);
    v15 = *(*v11 + 240LL);
    v17 = 31;
    v18 = 0;
    v16 = v14;
    v15(v11, 0, "debugoverlay", &v16);
    if ( (v18 & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v16);
    this->m_hInstance = v14;
  }
}


// CDebugOverlayGameSystem::GameDeactivate  (line 228, @0x0000000002058bb0, libserver.so)
// globals: g_pDebugOverlay, debugoverlaysim, debugoverlayinterpolated
void __fastcall CDebugOverlayGameSystem::GameDeactivate(
        CDebugOverlayGameSystem *const this,
        const EventGameDeactivate_t *const msg)
{
  __int64 v3; // rax

  if ( g_pScriptVM != 0 )
  {
    msg = this->m_hInstance;
    if ( msg != 0 )
    {
      (*(*g_pScriptVM + 200LL))();
      this->m_hInstance = 0;
    }
  }
  g_pDebugOverlay = 0;
  debugoverlaysim = 0;
  debugoverlayinterpolated = 0;
  debugoverlay = 0;
  v3 = (*(*g_pEngineServiceMgr + 224LL))(g_pEngineServiceMgr, msg);
  (*(*v3 + 16LL))(v3, 1578366956);
  (*(*g_pSceneSystem + 480LL))(g_pSceneSystem, this->m_pOverlayList);
}


// CDebugOverlayGameSystem::SetOverlayStartTime  (line 251, @0x0000000002058c60, libserver.so)
// globals: debugoverlaysim, g_pDebugOverlay
void __fastcall CDebugOverlayGameSystem::SetOverlayStartTime(
        CDebugOverlayGameSystem *const this,
        double a2,
        float flOverlayStartTime,
        __int64 bInterpolated)
{
  (*(this->m_pOverlayList->_vptr_ISceneViewDebugOverlays + 4))(
    this->m_pOverlayList,
    bInterpolated,
    a2,
    flOverlayStartTime);
  g_pDebugOverlay = debugoverlaysim;
  debugoverlay = debugoverlaysim;
}


// CDebugOverlayGameSystem::DebugDraw  (line 274, @0x000000000205a770, libserver.so)
void __fastcall CDebugOverlayGameSystem::DebugDraw(
        CDebugOverlayGameSystem *const this,
        CFrustum *pFrustum,
        ISceneView *pView,
        float flRenderTime,
        float flTimeStep)
{
  if ( this->m_bVisible )
    (*(this->m_pOverlayList->_vptr_ISceneViewDebugOverlays + 74))(this->m_pOverlayList, pView, flRenderTime, flTimeStep);
}


// CDebugOverlayGameSystem::AgeList  (line 287, @0x0000000002058ca0, libserver.so)
void __fastcall CDebugOverlayGameSystem::AgeList(
        CDebugOverlayGameSystem *const this,
        double a2,
        double flRenderTime,
        float flTimeStep)
{
  (*(this->m_pOverlayList->_vptr_ISceneViewDebugOverlays + 75))(this->m_pOverlayList, flRenderTime, a2);
}


// CDebugOverlayGameSystem::ToggleVisibility  (line 297, @0x000000000206ff20, libserver.so)
void __fastcall CDebugOverlayGameSystem::ToggleVisibility(CDebugOverlayGameSystem *const this)
{
  this->m_bVisible ^= 1u;
}


// IDebugOverlay::EntityToWorldTransform  (line 303, @0x000000000206ff30, libserver.so)  // inlines: CalcAbsolutePosition, EntityToWorldTransform, Load, NodeToWorldTransform
// calls: CGameSceneNode::CalcAbsolutePositionWhenDirty
const matrix3x4a_t *__fastcall IDebugOverlay::EntityToWorldTransform(IDebugOverlay *const this, CBodyComponent *pBody)
{
  CGameSceneNode *m_pSceneNode; // rbx

  m_pSceneNode = pBody->m_pSceneNode;
  if ( m_pSceneNode->m_bDirtyAbsTransform.m_value )
    CGameSceneNode::CalcAbsolutePositionWhenDirty(pBody->m_pSceneNode);
  return &m_pSceneNode->m_mNodeToWorld;
}


// IDebugOverlay::CollisionToWorldTransform  (line 309, @0x000000000206ff60, libserver.so)
// calls: CBodyComponent::CollisionToWorldTransform
matrix3x4a_t *__fastcall IDebugOverlay::CollisionToWorldTransform(
        matrix3x4a_t *__return_ptr retstr,
        IDebugOverlay *const this,
        CBodyComponent *pBody)
{
  CBodyComponent::CollisionToWorldTransform(retstr, pBody);
  return retstr;
}


// IDebugOverlay::EntityToWorldTransform  (line 315, @0x000000000206ff80, libserver.so)  // inlines: CalcAbsolutePosition, EntityToWorldTransform, GetComponent<CBodyComponent>, Load, NodeToWorldTransform, operator[]
// calls: CGameSceneNode::CalcAbsolutePositionWhenDirty
const matrix3x4a_t *__fastcall IDebugOverlay::EntityToWorldTransform(
        IDebugOverlay *const this,
        CEntityInstance *pEntity)
{
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rax
  __int64 v5; // rax
  __int64 v6; // rbx

  if ( pEntity == 0 )
    return &g_MatrixIdentity;
  m_pEntity = pEntity->m_pEntity;
  m_pInstance = m_pEntity->m_pInstance;
  if ( m_pEntity->m_pInstance == 0 )
    return &g_MatrixIdentity;
  m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
  if ( m_nBaseOffset == 0xFFFF )
    return &g_MatrixIdentity;
  v5 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
  if ( v5 == 0 )
    return &g_MatrixIdentity;
  v6 = *(v5 + 8);
  if ( *(v6 + 260) != 0 )
    CGameSceneNode::CalcAbsolutePositionWhenDirty(*(v5 + 8));
  return (v6 + 16);
}


// IDebugOverlay::CollisionToWorldTransform  (line 324, @0x0000000002070010, libserver.so)  // inlines: CollisionToWorldTransform, GetComponent<CBodyComponent>, operator[]
// calls: CBodyComponent::CollisionToWorldTransform
matrix3x4a_t *__fastcall IDebugOverlay::CollisionToWorldTransform(
        matrix3x4a_t *__return_ptr retstr,
        IDebugOverlay *const this,
        CEntityInstance *pEntity)
{
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rax
  const CBodyComponent *v7; // rsi
  __int64 v9; // rax

  if ( pEntity != 0
    && (m_pEntity = pEntity->m_pEntity, m_pInstance = m_pEntity->m_pInstance, m_pEntity->m_pInstance != 0)
    && (m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset) != 0xFFFF
    && (v7 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset)) != 0 )
  {
    CBodyComponent::CollisionToWorldTransform(retstr, v7);
    return retstr;
  }
  else
  {
    *&retstr->m_flMatVal[0][0] = *&g_MatrixIdentity.m_flMatVal[0][0];
    *&retstr->m_flMatVal[0][2] = *&g_MatrixIdentity.m_flMatVal[0][2];
    *&retstr->m_flMatVal[1][0] = *&g_MatrixIdentity.m_flMatVal[1][0];
    v9 = *&g_MatrixIdentity.m_flMatVal[2][2];
    *&retstr->m_flMatVal[2][0] = *&g_MatrixIdentity.m_flMatVal[2][0];
    *&retstr->m_flMatVal[2][2] = v9;
    return retstr;
  }
}


// IDebugOverlay::GetSkeletonInstanceWorldTransforms  (line 333, @0x00000000020700b0, libserver.so)  // inlines: GetWorldSpaceBones, GetWorldSpaceState, V_memcpy, memcpy
// calls: CSkeletonInstance::GetNumBones, CSkeletonInstance::CalcWorldSpaceBones, memcpy
// callers: IDebugOverlay::EntitySkeleton, IDebugOverlay::EntityHitboxes, IDebugOverlay::EntityAttachments, IDebugOverlay::EntityJointInfo
void __fastcall IDebugOverlay::GetSkeletonInstanceWorldTransforms(
        IDebugOverlay *const this,
        CSkeletonInstance *pInstance,
        int nBoneCount,
        matrix3x4a_t *pWorldSpaceTransforms,
        CModelSkeleton::BoneFlags_t boneFlags)
{
  int NumBones; // eax

  NumBones = CSkeletonInstance::GetNumBones(pInstance);
  if ( NumBones <= nBoneCount )
    nBoneCount = NumBones;
  CSkeletonInstance::CalcWorldSpaceBones(pInstance, boneFlags);
  memcpy(pWorldSpaceTransforms, pInstance->m_modelState.m_simulationState.m_pTransforms, 48LL * nBoneCount);
}


// IDebugOverlay::EntityText  (line 343, @0x0000000002070110, libserver.so)  // inlines: CollisionToWorldTransform, GetComponent<CBodyComponent>, VectorAdd, VectorTransform, operator*=, operator[]
// calls: CBodyComponent::OBBMaxs, CBodyComponent::OBBMins, CBodyComponent::CollisionToWorldTransform, VectorTransform
// callers: CDevtestHierarchy::SwitchParentThink, CDevtestHierarchy::ChildDormancyThink, CDevtestHierarchy::SwitchModelThink, CDevtestHierarchy::CycleAttachmentTypeThink, CDevtestHierarchy::SwitchChildModelThink, CBaseEntity::EntityText, CBaseEntity::DrawDebugTextOverlays, CFogController::DrawDebugTextOverlays, CEntityDebugGameSystem::DrawScrollingMessageLists, CDebugOverlayScriptHelper::EntityText, IDebugOverlay::EntityText, CGenericFlexCycler::DisplayTestModeNameThink
void __fastcall IDebugOverlay::EntityText(
        IDebugOverlay *const this,
        CEntityInstance *pEntity,
        unsigned int nTextOffset,
        const char *pText,
        float64 flDuration,
        char r,
        char g,
        char b,
        char a)
{
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rax
  const CBodyComponent *v13; // rbx
  void (__fastcall *v16)(IDebugOverlay *const, Vector *, _QWORD, const char *, matrix3x4a_t *, double, double); // rax
  Vector vLocalCenter; // [rsp+20h] [rbp-80h] BYREF
  Vector vOrigin; // [rsp+30h] [rbp-70h] BYREF
  matrix3x4a_t v22; // [rsp+40h] [rbp-60h] BYREF

  if ( pEntity != 0 )
  {
    m_pEntity = pEntity->m_pEntity;
    m_pInstance = m_pEntity->m_pInstance;
    if ( m_pEntity->m_pInstance != 0 )
    {
      m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
      if ( m_nBaseOffset != 0xFFFF )
      {
        v13 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
        if ( v13 != 0 )
        {
          *&v22.m_flMatVal[0][0] = CBodyComponent::OBBMaxs(*(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset));
          vOrigin = CBodyComponent::OBBMins(v13);
          vLocalCenter.x = (vOrigin.x + v22.m_flMatVal[0][0]) * 0.5;
          vLocalCenter.y = (vOrigin.y + v22.m_flMatVal[0][1]) * 0.5;
          vLocalCenter.z = (v22.m_flMatVal[0][2] + vOrigin.z) * 0.5;
          CBodyComponent::CollisionToWorldTransform(&v22, v13);
          VectorTransform(&vLocalCenter.x, &v22, &vOrigin.x);
          v16 = *(*this + 200LL);
          BYTE2(v22.m_flMatVal[0][0]) = b;
          LOBYTE(v22.m_flMatVal[0][0]) = r;
          BYTE1(v22.m_flMatVal[0][0]) = g;
          HIBYTE(v22.m_flMatVal[0][0]) = a;
          v16(this, &vOrigin, nTextOffset, pText, &v22, 0.0, flDuration);
        }
      }
    }
  }
}


// IDebugOverlay::EntityText  (line 359, @0x00000000020702f0, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: IDebugOverlay::EntityText
// globals: CEntityHandle::gm_pEntityList
void __fastcall IDebugOverlay::EntityText(
        IDebugOverlay *const this,
        unsigned __int16 *hEntity,
        unsigned int nTextOffset,
        const char *pText,
        float64 flDuration,
        char r,
        char g,
        char b,
        char a)
{
  int v10; // eax
  CEntityInstance *m_pInstance; // rsi
  __int16 v12; // r12
  CEntityIdentity *v13; // r10
  CEntityIdentity *v14; // r10

  v10 = *hEntity;
  m_pInstance = 0;
  if ( (v10 + 2) > 1 )
  {
    v12 = *hEntity;
    v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hEntity >> 9) & 0x3F];
    if ( v13 != 0 )
    {
      v14 = &v13[v12 & 0x1FF];
      if ( v14 != 0 && v10 == v14->m_EHandle.m_Index )
        m_pInstance = v14->m_pInstance;
    }
  }
  IDebugOverlay::EntityText(this, m_pInstance, nTextOffset, pText, flDuration, r, g, b, a);
}


// IDebugOverlay::EntityText  (line 366, @0x0000000002070370, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: IDebugOverlay::EntityText
// globals: CEntityHandle::gm_pEntityList
void __fastcall IDebugOverlay::EntityText(
        IDebugOverlay *const this,
        unsigned __int16 *hEntity,
        unsigned int nTextOffset,
        const char *pText,
        char r,
        char g,
        float64 flDuration,
        char b,
        char a)
{
  int v10; // eax
  CEntityInstance *m_pInstance; // rsi
  __int16 v12; // r12
  CEntityIdentity *v13; // r10
  CEntityIdentity *v14; // r10

  v10 = *hEntity;
  m_pInstance = 0;
  if ( (v10 + 2) > 1 )
  {
    v12 = *hEntity;
    v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hEntity >> 9) & 0x3F];
    if ( v13 != 0 )
    {
      v14 = &v13[v12 & 0x1FF];
      if ( v14 != 0 && v10 == v14->m_EHandle.m_Index )
        m_pInstance = v14->m_pInstance;
    }
  }
  IDebugOverlay::EntityText(this, m_pInstance, nTextOffset, pText, flDuration, r, g, b, a);
}


// IDebugOverlay::EntityBounds  (line 373, @0x0000000002070790, libserver.so)
// calls: IDebugOverlay::EntityBounds
void __fastcall IDebugOverlay::EntityBounds(
        IDebugOverlay *const this,
        CEntityInstance *pEntity,
        char r,
        char g,
        char b,
        char a,
        float64 flDuration,
        bool bNoDepthTest)
{
  IDebugOverlay::EntityBounds(this, pEntity, r, g, b, a, flDuration, 0, bNoDepthTest);
}


// IDebugOverlay::EntityBounds  (line 379, @0x00000000020707b0, libserver.so)  // inlines: CEntityHandle, EntityBounds, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, LookupEntity, operator CEntityInstance*
// calls: IDebugOverlay::EntityBounds
// callers: CDebugOverlayScriptHelper::EntityBounds
// globals: CEntityHandle::gm_pEntityList
void __fastcall IDebugOverlay::EntityBounds(
        IDebugOverlay *const this,
        int *hEntity,
        char r,
        char g,
        char b,
        char a,
        float64 flTimeToLive,
        bool bNoDepthTest)
{
  int v8; // eax
  CEntityInstance *m_pInstance; // rsi
  CEntityIdentity *v10; // r10
  CEntityIdentity *v11; // r10

  v8 = *hEntity;
  m_pInstance = 0;
  if ( (v8 + 2) > 1 )
  {
    v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v8 >> 9) & 0x3F];
    if ( v10 != 0 )
    {
      v11 = &v10[v8 & 0x1FF];
      if ( v11 != 0 && v8 == v11->m_EHandle.m_Index )
        m_pInstance = v11->m_pInstance;
    }
  }
  IDebugOverlay::EntityBounds(this, m_pInstance, r, g, b, a, flTimeToLive, 0, bNoDepthTest);
}


// IDebugOverlay::EntityBounds  (line 385, @0x00000000020703f0, libserver.so)  // inlines: BoxAngles, CollisionToWorldTransform, GetComponent<CBodyComponent>, LargestComponentValue, MatrixPosition, MatrixQuaternion, SolidBoxAngles, VectorMultiply, operator*, operator[]
// calls: CBodyComponent::CollisionToWorldTransform, CBodyComponent::OBBMaxs, CBodyComponent::OBBMins, MatrixNormalize, MatrixQuaternion
// callers: CBaseEntity::DrawBBoxOverlay, IDebugOverlay::EntityBounds
void __fastcall IDebugOverlay::EntityBounds(
        IDebugOverlay *const this,
        CEntityInstance *pEntity,
        char r,
        char g,
        char b,
        char a,
        float64 flDuration,
        bool bDrawSolid,
        bool bNoDepthTest)
{
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rax
  const CBodyComponent *v12; // rbx
  float v16; // xmm1_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  __int64 v19; // rax
  void (__fastcall *v20)(IDebugOverlay *const, float *, Vector *, matrix3x4_t *, Quaternion *, char *, double, bool); // rax
  float v21; // xmm1_4
  float v22; // xmm2_4
  float v23; // xmm0_4
  __int64 v24; // rax
  float v28; // [rsp+1Ch] [rbp-F4h]
  char v29; // [rsp+20h] [rbp-F0h] BYREF
  char v30; // [rsp+21h] [rbp-EFh]
  char v31; // [rsp+22h] [rbp-EEh]
  char v32; // [rsp+23h] [rbp-EDh]
  Vector v33; // [rsp+30h] [rbp-E0h]
  Vector v34; // [rsp+40h] [rbp-D0h]
  float v35; // [rsp+50h] [rbp-C0h] BYREF
  float v36; // [rsp+54h] [rbp-BCh]
  float v37; // [rsp+58h] [rbp-B8h]
  Vector v38; // [rsp+60h] [rbp-B0h] BYREF
  Quaternion q; // [rsp+70h] [rbp-A0h] BYREF
  matrix3x4a_t v40; // [rsp+80h] [rbp-90h] BYREF
  matrix3x4_t out; // [rsp+B0h] [rbp-60h] BYREF
  Vector v42; // 0:kr20_12.12
  Vector v43; // 0:kr54_12.12

  if ( pEntity != 0 )
  {
    m_pEntity = pEntity->m_pEntity;
    m_pInstance = m_pEntity->m_pInstance;
    if ( m_pEntity->m_pInstance != 0 )
    {
      m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
      if ( m_nBaseOffset != 0xFFFF )
      {
        v12 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
        if ( v12 != 0 )
        {
          CBodyComponent::CollisionToWorldTransform(&v40, *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset));
          if ( !bDrawSolid )
          {
            v34 = CBodyComponent::OBBMaxs(v12);
            v33 = CBodyComponent::OBBMins(v12);
            v42 = MatrixNormalize(&v40, &out);
            v38 = v42;
            v16 = fabs(v42.z);
            v17 = fabs(v42.x);
            v18 = fabs(v42.y);
            if ( v17 <= v18 )
            {
              if ( v18 > v16 )
              {
                v16 = v18;
                if ( v17 > v18 )
                  v16 = v17;
              }
            }
            else if ( v17 > v16 )
            {
              v16 = v17;
            }
            v28 = v16;
            MatrixQuaternion(&out, &q);
            v19 = *this;
            v35 = out.m_flMatVal[0][3];
            v36 = out.m_flMatVal[1][3];
            v37 = out.m_flMatVal[2][3];
            v20 = *(v19 + 120);
            v29 = r;
            v30 = g;
            v31 = b;
            v32 = a;
            goto LABEL_10;
          }
          v31 = b;
          v32 = a;
          v29 = r;
          v30 = g;
          v34 = CBodyComponent::OBBMaxs(v12);
          v33 = CBodyComponent::OBBMins(v12);
          v43 = MatrixNormalize(&v40, &out);
          v38 = v43;
          v21 = fabs(v43.z);
          v22 = fabs(v43.x);
          v23 = fabs(v43.y);
          if ( v22 <= v23 )
          {
            if ( v23 <= v21 )
              goto LABEL_17;
            v21 = v23;
            if ( v22 <= v23 )
              goto LABEL_17;
          }
          else if ( v22 <= v21 )
          {
LABEL_17:
            v28 = v21;
            MatrixQuaternion(&out, &q);
            v24 = *this;
            v35 = out.m_flMatVal[0][3];
            v36 = out.m_flMatVal[1][3];
            v37 = out.m_flMatVal[2][3];
            v20 = *(v24 + 128);
LABEL_10:
            out.m_flMatVal[0][2] = v34.z * v28;
            out.m_flMatVal[0][1] = v34.y * v28;
            out.m_flMatVal[0][0] = v34.x * v28;
            v38.z = v33.z * v28;
            v38.y = v33.y * v28;
            v38.x = v28 * v33.x;
            v20(this, &v35, &v38, &out, &q, &v29, flDuration, bNoDepthTest);
            return;
          }
          v21 = v22;
          goto LABEL_17;
        }
      }
    }
  }
}


// IDebugOverlay::EntityBounds  (line 405, @0x0000000002070870, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: IDebugOverlay::EntityBounds
// globals: CEntityHandle::gm_pEntityList
void __fastcall IDebugOverlay::EntityBounds(
        IDebugOverlay *const this,
        unsigned __int16 *hEntity,
        char r,
        char g,
        char b,
        char a,
        float64 flTimeToLive,
        bool bDrawSolid,
        bool bNoDepthTest)
{
  int v10; // eax
  CEntityInstance *m_pInstance; // rsi
  __int16 v12; // r12
  CEntityIdentity *v13; // r10
  CEntityIdentity *v14; // r10

  v10 = *hEntity;
  m_pInstance = 0;
  if ( (v10 + 2) > 1 )
  {
    v12 = *hEntity;
    v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hEntity >> 9) & 0x3F];
    if ( v13 != 0 )
    {
      v14 = &v13[v12 & 0x1FF];
      if ( v14 != 0 && v10 == v14->m_EHandle.m_Index )
        m_pInstance = v14->m_pInstance;
    }
  }
  IDebugOverlay::EntityBounds(this, m_pInstance, r, g, b, a, flTimeToLive, bDrawSolid, bNoDepthTest);
}


// IDebugOverlay::EntityAxis  (line 412, @0x00000000020708f0, libserver.so)  // inlines: CalcAbsolutePosition, EntityToWorldTransform, GetComponent<CBodyComponent>, Load, NodeToWorldTransform, operator[]
// calls: CGameSceneNode::CalcAbsolutePositionWhenDirty
// callers: CBaseEntity::DrawAxisOverlay, CDebugOverlayScriptHelper::EntityAxis, IDebugOverlay::EntityAxis
void __fastcall IDebugOverlay::EntityAxis(
        IDebugOverlay *const this,
        CEntityInstance *pEntity,
        double flAxisLen,
        __int64 bNoDepthTest,
        float64 flTimeToLive)
{
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rcx
  __int64 m_nBaseOffset; // rax
  __int64 v8; // rcx
  __int64 v10; // rbx
  void (__fastcall *v11)(IDebugOverlay *const, __int64, __int64, double, double); // r13
  double v12; // [rsp-38h] [rbp-38h]
  unsigned int v13; // [rsp-30h] [rbp-30h]
  unsigned int v14; // [rsp-2Ch] [rbp-2Ch]

  if ( pEntity != 0 )
  {
    m_pEntity = pEntity->m_pEntity;
    m_pInstance = m_pEntity->m_pInstance;
    if ( m_pEntity->m_pInstance != 0 )
    {
      m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
      if ( m_nBaseOffset != 0xFFFF )
      {
        v8 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
        if ( v8 != 0 )
        {
          bNoDepthTest = bNoDepthTest;
          v10 = *(v8 + 8);
          v11 = *(*this + 216LL);
          if ( *(v10 + 260) != 0 )
          {
            v12 = flTimeToLive;
            v13 = LODWORD(flAxisLen);
            v14 = bNoDepthTest;
            CGameSceneNode::CalcAbsolutePositionWhenDirty(*(v8 + 8));
            flTimeToLive = v12;
            *&flAxisLen = v13;
            bNoDepthTest = v14;
          }
          v11(this, v10 + 16, bNoDepthTest, flAxisLen, flTimeToLive);
        }
      }
    }
  }
}


// IDebugOverlay::EntityAxis  (line 422, @0x0000000002070a10, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: IDebugOverlay::EntityAxis
// globals: CEntityHandle::gm_pEntityList
void __fastcall IDebugOverlay::EntityAxis(
        IDebugOverlay *const this,
        unsigned __int16 *hEntity,
        double flAxisLen,
        bool bNoDepthTest,
        float64 flTimeToLive)
{
  int v6; // eax
  CEntityInstance *m_pInstance; // rsi
  __int16 v8; // r8
  CEntityIdentity *v9; // rcx
  CEntityIdentity *v10; // rcx

  v6 = *hEntity;
  m_pInstance = 0;
  if ( (v6 + 2) > 1 )
  {
    v8 = *hEntity;
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hEntity >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[v8 & 0x1FF];
      if ( v10 != 0 && v6 == v10->m_EHandle.m_Index )
        m_pInstance = v10->m_pInstance;
    }
  }
  IDebugOverlay::EntityAxis(this, m_pInstance, flAxisLen, bNoDepthTest, flTimeToLive);
}


// IDebugOverlay::EntitySkeleton  (line 429, @0x0000000002070a80, libserver.so)  // inlines: CalcAbsolutePosition, GetComponent<CBodyComponent>, GetModelData, GetSkeletonInstance, Load, NodeToWorldTransform, operator const RuntimeClass_t*, operator[]
// calls: CModel::MasterSkeleton, CSkeletonInstance::GetNumBones, IDebugOverlay::GetSkeletonInstanceWorldTransforms, CGameSceneNode::CalcAbsolutePositionWhenDirty
// callers: CBaseEntity::DrawEntityDebugOverlays, CDebugOverlayScriptHelper::EntitySkeleton, IDebugOverlay::EntitySkeleton
void __fastcall IDebugOverlay::EntitySkeleton(
        IDebugOverlay *const this,
        CEntityInstance *pEntity,
        double a3,
        float64 flTimeToLive)
{
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rax
  __int64 v7; // rax
  __int64 v9; // rax
  CSkeletonInstance *v10; // r15
  const CModel *const *v11; // rax
  __int64 (__fastcall *v12)(IMeshUtils *, __int64, __int64, matrix3x4a_t *, const CModelSkeleton *, VertexColor_t *, _QWORD); // r14
  __int64 v13; // rax
  __int64 v14; // r12
  int NumBones; // eax
  const CModelSkeleton *pSkeleton; // [rsp+10h] [rbp-50h]
  VertexColor_t c; // [rsp+20h] [rbp-40h] BYREF

  if ( pEntity != 0 )
  {
    m_pEntity = pEntity->m_pEntity;
    m_pInstance = m_pEntity->m_pInstance;
    if ( m_pEntity->m_pInstance != 0 )
    {
      m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
      if ( m_nBaseOffset != 0xFFFF )
      {
        v7 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
        if ( v7 != 0 )
        {
          v9 = (*(**(v7 + 8) + 72LL))(*(v7 + 8), a3, flTimeToLive);
          v10 = v9;
          if ( v9 != 0 )
          {
            v11 = *(v9 + 480);
            if ( v11 != 0 && *v11 != 0 )
            {
              pSkeleton = CModel::MasterSkeleton(*v11);
              (*(*this + 80LL))(&c, this);
              v12 = *(*g_pMeshUtils + 88LL);
              if ( v10->m_bDirtyAbsTransform.m_value )
                CGameSceneNode::CalcAbsolutePositionWhenDirty(v10);
              v13 = (*(*this + 584LL))(this);
              v14 = v12(g_pMeshUtils, v13, 0x80000, &v10->m_mNodeToWorld, pSkeleton, &c, 0);
              if ( v14 != 0 )
              {
                NumBones = CSkeletonInstance::GetNumBones(v10);
                IDebugOverlay::GetSkeletonInstanceWorldTransforms(
                  this,
                  v10,
                  NumBones,
                  *(v14 + 168),
                  CModelSkeleton::BoneFlags_t::FLAG_MESH);
                (*(*this + 552LL))(this, v14, a3);
              }
            }
          }
        }
      }
    }
  }
}


// IDebugOverlay::EntitySkeleton  (line 458, @0x0000000002070c50, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: IDebugOverlay::EntitySkeleton
// globals: CEntityHandle::gm_pEntityList
void __fastcall IDebugOverlay::EntitySkeleton(
        IDebugOverlay *const this,
        unsigned __int16 *hEntity,
        float64 flTimeToLive,
        float64 a4)
{
  int v5; // eax
  CEntityInstance *m_pInstance; // rsi
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx

  v5 = *hEntity;
  m_pInstance = 0;
  if ( (v5 + 2) > 1 )
  {
    v7 = *hEntity;
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hEntity >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[v7 & 0x1FF];
      if ( v9 != 0 && v5 == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  IDebugOverlay::EntitySkeleton(this, m_pInstance, flTimeToLive, a4);
}


// IDebugOverlay::EntityHitboxes  (line 479, @0x0000000002070cb0, libserver.so)  // inlines: BoxAngles, GetComponent<CBodyComponent>, GetInt, GetModelData, GetSkeletonInstance, LargestComponentValue, MatrixPosition, MatrixQuaternion, VectorMultiply, VertexColor_t, operator const RuntimeClass_t*, operator*, operator[]
// calls: CSkeletonInstance::GetHitboxSet, CModel::GetNumMeshes, CModel::GetMeshData, CSkeletonInstance::GetNumBones, IDebugOverlay::GetSkeletonInstanceWorldTransforms, CModel::GetBoneIndexForHitboxForMesh, MatrixNormalize, MatrixQuaternion, __stack_chk_fail
// callers: CBaseEntity::DrawEntityDebugOverlays, IDebugOverlay::EntityHitboxes, CRagdollProp::DrawEntityDebugOverlays, CLagCompensationManager::BacktrackEntity
// globals: s_pHullColor
void __fastcall IDebugOverlay::EntityHitboxes(
        IDebugOverlay *const this,
        CEntityInstance *pEntity,
        float64 flTimeToLive,
        bool bMonoColor)
{
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rax
  __int64 v7; // rax
  const CSkeletonInstance *v9; // rax
  CSkeletonInstance *v10; // rbx
  const CModel **m_pBinding; // rax
  const CModel *v12; // rax
  const CRenderMesh *MeshData; // r14
  int NumBones; // eax
  void *v15; // rsp
  int m_nValue; // ecx
  __int64 v17; // r15
  const CHitBox *v18; // rbx
  int BoneIndexForHitboxForMesh; // eax
  uint8 b; // r12
  uint8 g; // r13
  uint8 r; // r14
  float v23; // xmm1_4
  float v24; // xmm2_4
  float v25; // xmm0_4
  float y; // xmm2_4
  float x; // xmm3_4
  float v28; // xmm0_4
  void (__fastcall *v29)(IDebugOverlay *, _DWORD *, Vector *, matrix3x4_t *, Quaternion *, _BYTE *, double, _DWORD); // rax
  float z; // xmm0_4
  unsigned int v31; // xmm2_4
  unsigned int v32; // xmm1_4
  __int64 v33; // rdx
  bool v34; // [rsp+10h] [rbp-150h]
  __int64 v35; // [rsp+20h] [rbp-140h] BYREF
  int m_NumElements; // [rsp+28h] [rbp-138h]
  int nHitboxSet; // [rsp+2Ch] [rbp-134h]
  IDebugOverlay *v38; // [rsp+30h] [rbp-130h]
  matrix3x4a_t *pWorldSpaceTransforms; // [rsp+38h] [rbp-128h]
  _BYTE *v40; // [rsp+40h] [rbp-120h]
  const CModel *pModel; // [rsp+48h] [rbp-118h]
  __int64 v42; // [rsp+50h] [rbp-110h]
  float64 flTimeToLivea; // [rsp+58h] [rbp-108h]
  const CRenderMesh *v44; // [rsp+60h] [rbp-100h]
  float v45; // [rsp+68h] [rbp-F8h]
  bool bMonoColora; // [rsp+6Eh] [rbp-F2h]
  uint8 a; // [rsp+6Fh] [rbp-F1h]
  Quaternion *q; // [rsp+70h] [rbp-F0h]
  __int64 s; // [rsp+78h] [rbp-E8h]
  _BOOL4 v50; // [rsp+80h] [rbp-E0h]
  matrix3x4_t *out; // [rsp+90h] [rbp-D0h]
  int v52; // [rsp+98h] [rbp-C8h]
  int m_Size; // [rsp+9Ch] [rbp-C4h]
  VertexColor_t c; // [rsp+A0h] [rbp-C0h] BYREF
  _BYTE v55[16]; // [rsp+B0h] [rbp-B0h] BYREF
  _DWORD v56[4]; // [rsp+C0h] [rbp-A0h] BYREF
  Vector v57; // [rsp+D0h] [rbp-90h] BYREF
  char v58; // [rsp+E0h] [rbp-80h] BYREF
  float v59[14]; // [rsp+F0h] [rbp-70h] BYREF
  unsigned __int64 v60; // [rsp+128h] [rbp-38h]
  Vector v61; // 0:kr00_12.12

  flTimeToLivea = flTimeToLive;
  v60 = __readfsqword(0x28u);
  bMonoColora = bMonoColor;
  if ( pEntity != 0 )
  {
    m_pEntity = pEntity->m_pEntity;
    m_pInstance = m_pEntity->m_pInstance;
    if ( m_pEntity->m_pInstance != 0 )
    {
      m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
      if ( m_nBaseOffset != 0xFFFF )
      {
        v7 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
        if ( v7 != 0 )
        {
          v9 = (*(**(v7 + 8) + 72LL))(*(v7 + 8));
          v10 = v9;
          if ( v9 != 0 )
          {
            nHitboxSet = CSkeletonInstance::GetHitboxSet(v9);
            m_pBinding = v10->m_modelState.m_hModel.m_Value.m_pBinding;
            if ( m_pBinding != 0 )
            {
              v12 = *m_pBinding;
              pModel = v12;
              if ( v12 != 0 && CModel::GetNumMeshes(v12) != 0 )
              {
                (*(*this + 80LL))(&c, this);
                MeshData = CModel::GetMeshData(pModel, 0);
                v44 = MeshData;
                NumBones = CSkeletonInstance::GetNumBones(v10);
                v15 = alloca(48LL * NumBones + 32);
                pWorldSpaceTransforms = (&v35 & 0xFFFFFFFFFFFFFFEFLL);
                IDebugOverlay::GetSkeletonInstanceWorldTransforms(
                  this,
                  v10,
                  NumBones,
                  (&v35 & 0xFFFFFFFFFFFFFFEFLL),
                  CModelSkeleton::BoneFlags_t::FLAG_HITBOX);
                if ( MeshData != 0 )
                {
                  m_nValue = ent_showonlyhitbox.m_pParent->m_Value.m_nValue;
                  v52 = m_nValue;
                  m_NumElements = v44->m_hitboxsets.m_Elements.m_Tree.m_NumElements;
                  if ( m_NumElements > 0 )
                  {
                    v38 = this;
                    s = 0;
                    v34 = nHitboxSet >= 0;
                    v50 = m_nValue >= 0;
                    while ( 1 )
                    {
                      if ( nHitboxSet == s || !v34 )
                      {
                        v42 = 72 * s;
                        m_Size = v44->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_pMemory[s].m_Data.elem.m_HitBoxes.m_Size;
                        if ( m_Size > 0 )
                          break;
                      }
LABEL_24:
                      if ( m_NumElements <= ++s )
                        return;
                    }
                    v17 = 0;
                    out = v59;
                    q = &v58;
                    v40 = v55;
                    while ( 1 )
                    {
                      if ( v52 != v17 && v50 )
                        goto LABEL_17;
                      v18 = &v44->m_hitboxsets.m_Elements.m_Tree.m_Elements.m_pMemory[v42 / 0x48].m_Data.elem.m_HitBoxes.m_Memory.m_pMemory[v17];
                      BoneIndexForHitboxForMesh = CModel::GetBoneIndexForHitboxForMesh(pModel, v18, 0);
                      if ( bMonoColora )
                      {
                        b = c.b;
                        g = c.g;
                        r = c.r;
                      }
                      else
                      {
                        v33 = v18->m_nGroupId % 8;
                        r = s_pHullColor[v33].r;
                        g = s_pHullColor[v33].g;
                        b = s_pHullColor[v33].b;
                        c.r = r;
                        c.g = g;
                        c.b = b;
                      }
                      a = c.a;
                      v61 = MatrixNormalize(&pWorldSpaceTransforms[BoneIndexForHitboxForMesh], out);
                      v57 = v61;
                      v23 = fabs(v61.z);
                      v24 = fabs(v61.x);
                      v25 = fabs(v61.y);
                      if ( v24 <= v25 )
                        break;
                      if ( v24 > v23 )
                        goto LABEL_23;
LABEL_28:
                      v45 = v23;
                      MatrixQuaternion(out, q);
                      v55[0] = r;
                      v55[1] = g;
                      *v56 = v59[3];
                      y = v18->m_vMaxBounds.y;
                      v55[2] = b;
                      *&v56[1] = v59[7];
                      x = v18->m_vMaxBounds.x;
                      *&v56[2] = v59[11];
                      v28 = v18->m_vMaxBounds.z * v45;
                      v29 = *(*v38 + 120LL);
                      v59[1] = y * v45;
                      v59[2] = v28;
                      v59[0] = x * v45;
                      z = v18->m_vMinBounds.z;
                      v55[3] = a;
                      *&v31 = v18->m_vMinBounds.y * v45;
                      *&v32 = v45 * v18->m_vMinBounds.x;
                      v57.z = z * v45;
                      *&v57.x = __PAIR64__(v31, v32);
                      v29(v38, v56, &v57, out, q, v40, flTimeToLivea, 0);
LABEL_17:
                      if ( m_Size <= ++v17 )
                        goto LABEL_24;
                    }
                    if ( v25 <= v23 )
                      goto LABEL_28;
                    v23 = v25;
                    if ( v24 <= v25 )
                      goto LABEL_28;
LABEL_23:
                    v23 = v24;
                    goto LABEL_28;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}


// IDebugOverlay::EntityHitboxes  (line 536, @0x00000000020711a0, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: IDebugOverlay::EntityHitboxes
// globals: CEntityHandle::gm_pEntityList
void __fastcall IDebugOverlay::EntityHitboxes(
        IDebugOverlay *const this,
        unsigned __int16 *hEntity,
        float64 flTimeToLive,
        bool bMonoColor)
{
  int v5; // eax
  CEntityInstance *m_pInstance; // rsi
  __int16 v7; // r8
  CEntityIdentity *v8; // rcx
  CEntityIdentity *v9; // rcx

  v5 = *hEntity;
  m_pInstance = 0;
  if ( (v5 + 2) > 1 )
  {
    v7 = *hEntity;
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hEntity >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[v7 & 0x1FF];
      if ( v9 != 0 && v5 == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  IDebugOverlay::EntityHitboxes(this, m_pInstance, flTimeToLive, bMonoColor);
}


// IDebugOverlay::EntityAttachments  (line 545, @0x0000000002071210, libserver.so)  // inlines: CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CalcAbsolutePosition, GetComponent<CBodyComponent>, GetModelData, GetSkeletonInstance, GetString, Length, Load, NodeToWorldTransform, Purge, RemoveAll, String, V_strlen, VertexColor_t, operator const RuntimeClass_t*, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CModel::NumBones, CModel::GetNumAttachments, IDebugOverlay::GetSkeletonInstanceWorldTransforms, CModel::SetupAttachments, CModel::GetAttachmentData, CUtlString::Set, CUtlString::Get, strlen, V_stricmp_fast, CUtlString::FreeMemoryBlock, CUtlMemory<const CAttachment*, int>::Purge, CGameSceneNode::CalcAbsolutePositionWhenDirty (14 total)
// callers: CBaseEntity::DrawEntityDebugOverlays, CDebugOverlayScriptHelper::EntityAttachments, IDebugOverlay::EntityAttachments
// strings: "FCVAR_NEVER_AS_STRING"
void __fastcall IDebugOverlay::EntityAttachments(
        IDebugOverlay *const this,
        CEntityInstance *pEntity,
        double a3,
        double flAxisLen,
        float64 flTimeToLive)
{
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rax
  __int64 v8; // rax
  __int64 v11; // rax
  CSkeletonInstance *v12; // rsi
  const CModel **v13; // rax
  const CModel *v14; // r12
  void *v15; // rsp
  void *v16; // rsp
  _DWORD *v17; // rbx
  char *m_pszString; // rsi
  unsigned __int64 v19; // r12
  const char *v20; // r13
  const char *v21; // rax
  void (__fastcall *v22)(IDebugOverlay *const, CSkeletonInstance *, _QWORD, const char *, VertexColor_t *, double, double); // rax
  int v23; // xmm0_4
  int v24; // xmm2_4
  float flAxisLena; // [rsp+Ch] [rbp-A4h]
  CSkeletonInstance *pInstance; // [rsp+10h] [rbp-A0h] BYREF
  VertexColor_t *nBoneCount; // [rsp+18h] [rbp-98h]
  const matrix3x4a_t *mRootToWorld; // [rsp+20h] [rbp-90h]
  __int64 nAttachmentCount; // [rsp+28h] [rbp-88h]
  VertexColor_t vertexColor; // [rsp+30h] [rbp-80h] BYREF
  CUtlString sShowOnly; // [rsp+40h] [rbp-70h] BYREF
  _DWORD v32[4]; // [rsp+50h] [rbp-60h] BYREF
  CUtlVector<const CAttachment*,CUtlMemory<const CAttachment*,int> > attachmentList; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v34; // [rsp+78h] [rbp-38h]

  flAxisLena = *&a3;
  v34 = __readfsqword(0x28u);
  if ( pEntity != 0 )
  {
    m_pEntity = pEntity->m_pEntity;
    m_pInstance = m_pEntity->m_pInstance;
    if ( m_pEntity->m_pInstance != 0 )
    {
      m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
      if ( m_nBaseOffset != 0xFFFF )
      {
        v8 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
        if ( v8 != 0 )
        {
          v11 = (*(**(v8 + 8) + 72LL))(*(v8 + 8), a3, *&flAxisLen, flTimeToLive);
          v12 = v11;
          if ( v11 != 0 )
          {
            v13 = *(v11 + 480);
            if ( v13 != 0 )
            {
              v14 = *v13;
              if ( *v13 != 0 )
              {
                if ( v12->m_bDirtyAbsTransform.m_value )
                {
                  nAttachmentCount = v12;
                  CGameSceneNode::CalcAbsolutePositionWhenDirty(v12);
                  v12 = nAttachmentCount;
                }
                pInstance = v12;
                mRootToWorld = &v12->m_mNodeToWorld;
                LODWORD(nBoneCount) = CModel::NumBones(v14);
                LODWORD(nAttachmentCount) = CModel::GetNumAttachments(v14);
                attachmentList.m_Size = 0;
                attachmentList.m_Memory.m_pMemory = 0;
                attachmentList.m_Memory.m_nAllocationCount = 0;
                attachmentList.m_Memory.m_nGrowSize = 0;
                v15 = alloca(48LL * nBoneCount + 32);
                v16 = alloca(48LL * nAttachmentCount + 32);
                v17 = (&pInstance & 0xFFFFFFFFFFFFFFEFLL);
                IDebugOverlay::GetSkeletonInstanceWorldTransforms(
                  this,
                  pInstance,
                  nBoneCount,
                  (&pInstance & 0xFFFFFFFFFFFFFFEFLL),
                  CModelSkeleton::BoneFlags_t::FLAG_ATTACHMENT);
                CModel::SetupAttachments(
                  v14,
                  (&pInstance & 0xFFFFFFFFFFFFFFEFLL),
                  mRootToWorld,
                  (&pInstance & 0xFFFFFFFFFFFFFFEFLL));
                CModel::GetAttachmentData(v14, &attachmentList);
                vertexColor.color = -16711936;
                m_pszString = "FCVAR_NEVER_AS_STRING";
                if ( (ent_showonlyattachment.m_nFlags & 0x1000) == 0 )
                {
                  m_pszString = "";
                  if ( ent_showonlyattachment.m_pParent->m_Value.m_pszString != 0 )
                    m_pszString = ent_showonlyattachment.m_pParent->m_Value.m_pszString;
                }
                sShowOnly.m_pString = 0;
                mRootToWorld = &sShowOnly;
                CUtlString::Set(&sShowOnly, m_pszString);
                if ( nAttachmentCount > 0 )
                {
                  v19 = 0;
                  nAttachmentCount = 8LL * (nAttachmentCount - 1) + 8;
                  nBoneCount = &vertexColor;
                  pInstance = v32;
                  do
                  {
                    v20 = CUtlString::Get(&attachmentList.m_Memory.m_pMemory[v19 / 8]->m_name);
                    if ( sShowOnly.m_pString == 0
                      || strlen(sShowOnly.m_pString) <= 0
                      || (v21 = CUtlString::Get(mRootToWorld), V_stricmp_fast(v20, v21) == 0) )
                    {
                      (*(*this + 216LL))(this, v17, 1, flAxisLena, flAxisLen);
                      v22 = *(*this + 200LL);
                      v23 = v17[11];
                      v24 = v17[3];
                      v32[1] = v17[7];
                      v32[2] = v23;
                      v32[0] = v24;
                      v22(this, pInstance, 0, v20, nBoneCount, 0.0, flAxisLen);
                    }
                    v19 += 8LL;
                    v17 += 12;
                  }
                  while ( v19 != nAttachmentCount );
                }
                if ( sShowOnly.m_pString != 0 )
                  CUtlString::FreeMemoryBlock(mRootToWorld);
                attachmentList.m_Size = 0;
                if ( (attachmentList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                {
                  CUtlMemory<CAttachment const*,int>::Purge(&attachmentList.m_Memory);
                  if ( (attachmentList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                    CUtlMemory<CAttachment const*,int>::Purge(&attachmentList.m_Memory);
                }
              }
            }
          }
        }
      }
    }
  }
}


// IDebugOverlay::EntityAttachments  (line 596, @0x0000000002071670, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: IDebugOverlay::EntityAttachments
// globals: CEntityHandle::gm_pEntityList
void __fastcall IDebugOverlay::EntityAttachments(
        IDebugOverlay *const this,
        unsigned __int16 *hEntity,
        double flAxisLen,
        float64 flTimeToLive,
        float64 a5)
{
  int v6; // eax
  CEntityInstance *m_pInstance; // rsi
  __int16 v8; // cx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx

  v6 = *hEntity;
  m_pInstance = 0;
  if ( (v6 + 2) > 1 )
  {
    v8 = *hEntity;
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hEntity >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[v8 & 0x1FF];
      if ( v10 != 0 && v6 == v10->m_EHandle.m_Index )
        m_pInstance = v10->m_pInstance;
    }
  }
  IDebugOverlay::EntityAttachments(this, m_pInstance, flAxisLen, flTimeToLive, a5);
}


// IDebugOverlay::EntityJointInfo  (line 602, @0x00000000020716d0, libserver.so)  // inlines: GetComponent<CBodyComponent>, GetModelData, GetSkeletonInstance, VertexColor_t, operator const RuntimeClass_t*, operator[]
// calls: CModel::NumBones, IDebugOverlay::GetSkeletonInstanceWorldTransforms, CModel::boneName, __stack_chk_fail
// callers: CBaseEntity::DrawEntityDebugOverlays
void __fastcall IDebugOverlay::EntityJointInfo(
        IDebugOverlay *const this,
        CEntityInstance *pEntity,
        float64 a3,
        float64 flTimeToLive)
{
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rax
  __int64 v7; // rax
  __int64 v9; // rax
  CSkeletonInstance *v10; // r14
  const CModel **v11; // rax
  const CModel *v12; // rax
  int v13; // r12d
  void *v14; // rsp
  unsigned __int64 v15; // r15
  int v16; // r14d
  int v17; // esi
  const char *v18; // rax
  unsigned __int64 v19; // rsi
  const char *v20; // r13
  __int64 v21; // rdx
  void (__fastcall *v22)(IDebugOverlay *const, _DWORD *, _QWORD, const char *, _BYTE *, double, double); // r11
  int v23; // xmm0_4
  int v24; // xmm2_4
  const CModel *pModel; // [rsp+10h] [rbp-70h] BYREF
  float64 flTimeToLivea; // [rsp+18h] [rbp-68h]
  _BYTE v27[16]; // [rsp+20h] [rbp-60h] BYREF
  _DWORD v28[6]; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp-38h]

  flTimeToLivea = a3;
  v29 = __readfsqword(0x28u);
  if ( pEntity != 0 )
  {
    m_pEntity = pEntity->m_pEntity;
    m_pInstance = m_pEntity->m_pInstance;
    if ( m_pEntity->m_pInstance != 0 )
    {
      m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
      if ( m_nBaseOffset != 0xFFFF )
      {
        v7 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
        if ( v7 != 0 )
        {
          v9 = (*(**(v7 + 8) + 72LL))(*(v7 + 8), a3, flTimeToLive);
          v10 = v9;
          if ( v9 != 0 )
          {
            v11 = *(v9 + 480);
            if ( v11 != 0 )
            {
              v12 = *v11;
              pModel = v12;
              if ( v12 != 0 )
              {
                v13 = CModel::NumBones(v12);
                v14 = alloca(48LL * v13 + 32);
                v15 = &pModel & 0xFFFFFFFFFFFFFFEFLL;
                IDebugOverlay::GetSkeletonInstanceWorldTransforms(
                  this,
                  v10,
                  v13,
                  (&pModel & 0xFFFFFFFFFFFFFFEFLL),
                  CModelSkeleton::BoneFlags_t::FLAG_MESH);
                if ( v13 > 0 )
                {
                  v16 = 0;
                  do
                  {
                    v17 = v16++;
                    v18 = CModel::boneName(pModel, v17);
                    v19 = v15;
                    v20 = v18;
                    v15 += 48LL;
                    (*(*this + 216LL))(this, v19, 1, 4.0, flTimeToLivea);
                    v21 = *this;
                    v27[0] = -1;
                    v27[1] = -1;
                    v27[2] = -1;
                    v27[3] = -1;
                    v22 = *(v21 + 200);
                    v23 = *(v15 - 4);
                    v24 = *(v15 - 36);
                    v28[1] = *(v15 - 20);
                    v28[2] = v23;
                    v28[0] = v24;
                    v22(this, v28, 0, v20, v27, 0.0, flTimeToLivea);
                  }
                  while ( v16 != v13 );
                }
              }
            }
          }
        }
      }
    }
  }
}


// IDebugOverlay::EntityVCollideWireframe  (line 634, @0x00000000020718a0, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*
// callers: CBaseEntity::DrawEntityDebugOverlays
// globals: CEntityHandle::gm_pEntityList
void __fastcall IDebugOverlay::EntityVCollideWireframe(IDebugOverlay *const this, _WORD *hEntity, float64 flTimeToLive)
{
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx

  if ( (*hEntity + 2) > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hEntity >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[*hEntity & 0x1FF];
      if ( v4 != 0 && *hEntity == v4->m_EHandle.m_Index && v4->m_pInstance != 0 )
        (*(v4->m_pInstance->_vptr_IHandleEntity + 50))(v4->m_pInstance, 1, flTimeToLive);
    }
  }
}


// IDebugOverlay::EntityVCollide  (line 643, @0x0000000002071910, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*
// callers: CBaseEntity::DrawEntityDebugOverlays
// globals: CEntityHandle::gm_pEntityList
void __fastcall IDebugOverlay::EntityVCollide(IDebugOverlay *const this, _WORD *hEntity, float64 flTimeToLive)
{
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx

  if ( (*hEntity + 2) > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hEntity >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[*hEntity & 0x1FF];
      if ( v4 != 0 && *hEntity == v4->m_EHandle.m_Index && v4->m_pInstance != 0 )
        (*(v4->m_pInstance->_vptr_IHandleEntity + 50))(v4->m_pInstance, 0, flTimeToLive);
    }
  }
}


// IDebugOverlay::EntityBuddhaMode  (line 652, @0x0000000002071980, libserver.so)
// callers: CBaseEntity::DrawEntityDebugOverlays
void __fastcall IDebugOverlay::EntityBuddhaMode(IDebugOverlay *const this, EHANDLE2 hEntity, float64 flTimeToLive)
{
  ;
}


// IDebugOverlay::EntityViewOffset  (line 657, @0x0000000002071990, libserver.so)
// callers: CBaseEntity::DrawEntityDebugOverlays
void __fastcall IDebugOverlay::EntityViewOffset(IDebugOverlay *const this, EHANDLE2 hEntity, float64 flTimeToLive)
{
  ;
}


// IDebugOverlay::BoxDirection  (line 662, @0x00000000020719a0, libserver.so)
// calls: UTIL_VecToYaw, AngleQuaternion
void __fastcall IDebugOverlay::BoxDirection(
        IDebugOverlay *const this,
        const Vector *const vOrigin,
        const Vector *const vLocalMins,
        const Vector *const vLocalMaxs,
        const Vector *const vForward,
        char r,
        float64 flTimeToLive,
        char g,
        char b,
        char a,
        bool bNoDepthTest)
{
  vec_t z; // eax
  __int64 v15; // rax
  void (__fastcall *v16)(IDebugOverlay *const, const Vector *const, const Vector *const, const Vector *const, Quaternion *, _BYTE *, double, bool); // rax
  _BYTE v20[16]; // [rsp+20h] [rbp-60h] BYREF
  QAngle vAngles; // [rsp+30h] [rbp-50h] BYREF
  Quaternion orientation; // [rsp+40h] [rbp-40h] BYREF

  z = vec3_angle.z;
  vAngles.x = vec3_angle.x;
  vAngles.z = z;
  vAngles.y = UTIL_VecToYaw(vForward);
  AngleQuaternion(&vAngles, &orientation);
  v15 = *this;
  v20[1] = g;
  v16 = *(v15 + 120);
  v20[0] = r;
  v20[2] = b;
  v20[3] = a;
  v16(this, vOrigin, vLocalMins, vLocalMaxs, &orientation, v20, flTimeToLive, bNoDepthTest);
}


// IDebugOverlay::DrawGroundCrossHairOverlay  (line 674, @0x0000000002071a60, libserver.so)
void __fastcall IDebugOverlay::DrawGroundCrossHairOverlay(IDebugOverlay *const this, CEntityInstance *pEntity)
{
  ;
}


// IDebugOverlay::ToggleGrid  (line 680, @0x0000000002071a70, libserver.so)
void __fastcall IDebugOverlay::ToggleGrid(IDebugOverlay *const this, CEntityInstance *pEntity)
{
  if ( (*(*this + 328LL))(this, pEntity) != 0 )
    (*(*this + 336LL))(this);
}


// debugoverlay_toggle  (line 694, @0x0000000002058cd0, libserver.so)  // inlines: ToggleVisibility
// globals: g_pGameDebugOverlaySystem
void __fastcall debugoverlay_toggle(const CCommandContext *const ctx, const CCommand *const args)
{
  if ( g_pGameDebugOverlaySystem != 0 )
    g_pGameDebugOverlaySystem->m_bVisible ^= 1u;
}


// CDebugOverlayScriptHelper::PushAndClearDebugOverlayScope  (line 706, @0x0000000002058cf0, libserver.so)
void __fastcall CDebugOverlayScriptHelper::PushAndClearDebugOverlayScope(
        CDebugOverlayScriptHelper *const this,
        CUtlStringToken t)
{
  (*(*this + 576LL))(this);
  (*(*this + 560LL))(this, t.m_nHashCode);
}


// CDebugOverlayScriptHelper::VectorText3D  (line 712, @0x0000000002059fa0, libserver.so)
// calls: QuaternionVectorsFLU
void __fastcall CDebugOverlayScriptHelper::VectorText3D(
        CDebugOverlayScriptHelper *const this,
        const Vector *const vPos,
        const Quaternion *const orientation,
        const char *pStr,
        char r,
        char g,
        float flTimeToLive,
        char b,
        char a,
        bool bCenter)
{
  void (__fastcall *v12)(CDebugOverlayScriptHelper *const, const Vector *const, Vector *, Vector *, const char *, _BYTE *, double, bool); // r10
  _BYTE v17[16]; // [rsp+20h] [rbp-70h] BYREF
  Vector vUp; // [rsp+30h] [rbp-60h] BYREF
  Vector vLeft; // [rsp+40h] [rbp-50h] BYREF
  Vector vForward; // [rsp+50h] [rbp-40h] BYREF

  QuaternionVectorsFLU(orientation, &vForward, &vLeft, &vUp);
  v12 = *(*this + 176LL);
  v17[0] = r;
  v17[1] = g;
  v17[2] = b;
  v17[3] = a;
  v12(this, vPos, &vUp, &vLeft, pStr, v17, flTimeToLive, bCenter);
}


// CDebugOverlayScriptHelper::Text  (line 720, @0x0000000002058d20, libserver.so)
void __fastcall CDebugOverlayScriptHelper::Text(
        CDebugOverlayScriptHelper *const this,
        const Vector *const vPos,
        __int64 nTextLineOffsetY,
        const char *pStr,
        float flMaxDistToDisplay,
        char r,
        char g,
        float flTimeToLive,
        char b,
        char a)
{
  __int64 v10; // rax
  void (__fastcall *v11)(CDebugOverlayScriptHelper *const, const Vector *const, __int64, const char *, _BYTE *, float, double); // rax
  _BYTE v12[24]; // [rsp-10h] [rbp-18h] BYREF

  v12[0] = r;
  v10 = *this;
  v12[1] = g;
  v12[2] = b;
  v11 = *(v10 + 200);
  v12[3] = a;
  v11(this, vPos, nTextLineOffsetY, pStr, v12, flMaxDistToDisplay, flTimeToLive);
}


// CDebugOverlayScriptHelper::Texture  (line 725, @0x0000000002058d60, libserver.so)  // inlines: CWeakHandle, FindOrRegisterResourceByName<2019914870ull>, Init
void __fastcall CDebugOverlayScriptHelper::Texture(
        CDebugOverlayScriptHelper *const this,
        const char *pTextureName,
        const Vector2D *const ul,
        const Vector2D *const lr,
        char r,
        char g,
        float flTimeToLive,
        char b,
        char a,
        const Vector2D *const vTopLeftUV,
        const Vector2D *const vBottomRightUV)
{
  __int64 v16; // rax
  float x; // xmm3_4
  float y; // xmm2_4
  float v19; // xmm1_4
  int v20; // edx
  float v21; // xmm1_4
  void (__fastcall *v22)(CDebugOverlayScriptHelper *const, __int64 *, Rect_t *, _BYTE *, const Vector2D *const, const Vector2D *const, double); // r10
  _BYTE v24[16]; // [rsp+10h] [rbp-60h] BYREF
  __int64 v25; // [rsp+20h] [rbp-50h] BYREF
  Rect_t rect; // [rsp+30h] [rbp-40h] BYREF

  v16 = (*(*g_pResourceSystem + 256LL))(g_pResourceSystem, pTextureName, 2019914870, 1);
  x = ul->x;
  v24[0] = r;
  y = ul->y;
  v24[1] = g;
  v19 = lr->x;
  v25 = v16;
  rect.x = x;
  rect.y = y;
  v20 = (v19 - x);
  v21 = lr->y - y;
  rect.width = v20;
  rect.height = v21;
  v22 = *(*this + 168LL);
  v24[2] = b;
  v24[3] = a;
  v22(this, &v25, &rect, v24, vTopLeftUV, vBottomRightUV, flTimeToLive);
}


// CDebugOverlayScriptHelper::FilledRect2D  (line 740, @0x0000000002058e40, libserver.so)
void __fastcall CDebugOverlayScriptHelper::FilledRect2D(
        CDebugOverlayScriptHelper *const this,
        const Vector2D *const ul,
        const Vector2D *const lr,
        char r,
        char g,
        char b,
        float flTimeToLive,
        char a)
{
  float x; // xmm3_4
  float y; // xmm2_4
  float v10; // xmm1_4
  int v11; // eax
  float v12; // xmm1_4
  _BYTE v13[16]; // [rsp-10h] [rbp-28h] BYREF
  Rect_t rect; // [rsp+0h] [rbp-18h] BYREF

  x = ul->x;
  v13[0] = r;
  y = ul->y;
  v13[1] = g;
  v10 = lr->x;
  v13[2] = b;
  rect.x = x;
  rect.y = y;
  v11 = (v10 - x);
  v12 = lr->y - y;
  rect.width = v11;
  v13[3] = a;
  rect.height = v12;
  (*(*this + 208LL))(this, &rect, v13, flTimeToLive);
}


// CDebugOverlayScriptHelper::Line  (line 750, @0x0000000002058eb0, libserver.so)  // inlines: Line
void __fastcall CDebugOverlayScriptHelper::Line(
        CDebugOverlayScriptHelper *const this,
        const Vector *const vEndPoint0,
        const Vector *const vEndPoint1,
        char r,
        char g,
        char b,
        float flTimeToLive,
        char a,
        bool bNoDepthTest)
{
  __int64 v9; // rax
  void (__fastcall *v10)(CDebugOverlayScriptHelper *const, const Vector *const, const Vector *const, _BYTE *, bool, double); // rax
  _BYTE v11[24]; // [rsp-10h] [rbp-18h] BYREF

  v9 = *this;
  v11[0] = r;
  v11[1] = g;
  v11[2] = b;
  v10 = *(v9 + 104);
  v11[3] = a;
  v10(this, vEndPoint0, vEndPoint1, v11, bNoDepthTest, flTimeToLive);
}


// CDebugOverlayScriptHelper::Line2D  (line 755, @0x0000000002058ef0, libserver.so)  // inlines: Line2D
void __fastcall CDebugOverlayScriptHelper::Line2D(
        CDebugOverlayScriptHelper *const this,
        const Vector2D *const vP0,
        const Vector2D *const vP1,
        char r,
        char g,
        char b,
        float flTimeToLive,
        char a)
{
  __int64 v8; // rax
  void (__fastcall *v9)(CDebugOverlayScriptHelper *const, const Vector2D *const, const Vector2D *const, _BYTE *, double); // rax
  _BYTE v10[24]; // [rsp-10h] [rbp-18h] BYREF

  v8 = *this;
  v10[0] = r;
  v10[1] = g;
  v10[2] = b;
  v9 = *(v8 + 112);
  v10[3] = a;
  v9(this, vP0, vP1, v10, flTimeToLive);
}


// CDebugOverlayScriptHelper::BoxAngles  (line 760, @0x0000000002058f20, libserver.so)  // inlines: BoxAngles
void __fastcall CDebugOverlayScriptHelper::BoxAngles(
        CDebugOverlayScriptHelper *const this,
        const Vector *const vOrigin,
        const Vector *const vLocalMins,
        const Vector *const vLocalMaxs,
        const Quaternion *const vOrientation,
        char r,
        float flTimeToLive,
        char g,
        char b,
        char a,
        bool bNoDepthTest)
{
  __int64 v11; // rax
  void (__fastcall *v12)(CDebugOverlayScriptHelper *const, const Vector *const, const Vector *const, const Vector *const, const Quaternion *const, _BYTE *, double, bool); // rax
  _BYTE v13[24]; // [rsp+10h] [rbp-18h] BYREF

  v13[0] = r;
  v11 = *this;
  v13[1] = g;
  v12 = *(v11 + 120);
  v13[2] = b;
  v13[3] = a;
  v12(this, vOrigin, vLocalMins, vLocalMaxs, vOrientation, v13, flTimeToLive, bNoDepthTest);
}


// CDebugOverlayScriptHelper::Box  (line 765, @0x0000000002058f70, libserver.so)  // inlines: Box
void __fastcall CDebugOverlayScriptHelper::Box(
        CDebugOverlayScriptHelper *const this,
        const Vector *const vWorldMins,
        const Vector *const vWorldMaxs,
        char r,
        char g,
        char b,
        float flTimeToLive,
        char a,
        bool bNoDepthTest)
{
  __int64 v9; // rax
  _BYTE v10[24]; // [rsp+10h] [rbp-18h] BYREF

  v10[0] = r;
  v9 = *this;
  v10[1] = g;
  v10[2] = b;
  v10[3] = a;
  (*(v9 + 120))(this, &vec3_origin, vWorldMins, vWorldMaxs, &quat_identity, v10, flTimeToLive, bNoDepthTest);
}


// CDebugOverlayScriptHelper::Sphere  (line 770, @0x000000000205bce0, libserver.so)  // inlines: SetOrigin, SetToIdentity, Sphere
// calls: SetIdentityMatrix
void __fastcall CDebugOverlayScriptHelper::Sphere(
        CDebugOverlayScriptHelper *const this,
        const Vector *const vCenter,
        float flRadius,
        char r,
        char g,
        char b,
        char a,
        float flTimeToLive,
        bool bNoDepthTest)
{
  __int64 v11; // rax
  _BYTE v14[16]; // [rsp+10h] [rbp-60h] BYREF
  matrix3x4_t matrix; // [rsp+20h] [rbp-50h] BYREF

  v14[0] = r;
  v14[1] = g;
  v14[2] = b;
  v14[3] = a;
  SetIdentityMatrix(&matrix);
  v11 = *this;
  matrix.m_flMatVal[0][3] = vCenter->x;
  matrix.m_flMatVal[1][3] = vCenter->y;
  matrix.m_flMatVal[2][3] = vCenter->z;
  (*(v11 + 144))(this, &matrix, v14, bNoDepthTest, flRadius, flTimeToLive);
}


// CDebugOverlayScriptHelper::Capsule  (line 775, @0x000000000205a100, libserver.so)  // inlines: Capsule, QuaternionMatrix
// calls: QuaternionMatrix
void __fastcall CDebugOverlayScriptHelper::Capsule(
        CDebugOverlayScriptHelper *const this,
        const Vector *const vBottom,
        const Quaternion *const orientation,
        float flLength,
        float flRadius,
        char r,
        char g,
        char b,
        float flTimeToLive,
        char a,
        bool bNoDepthTest)
{
  __int64 v14; // rax
  void (__fastcall *v15)(CDebugOverlayScriptHelper *const, matrix3x4_t *, _BYTE *, bool, float, float, double); // rax
  _BYTE v20[16]; // [rsp+10h] [rbp-70h] BYREF
  matrix3x4_t matrix; // [rsp+20h] [rbp-60h] BYREF

  QuaternionMatrix(orientation, vBottom, &matrix);
  v14 = *this;
  v20[0] = r;
  v20[1] = g;
  v15 = *(v14 + 152);
  v20[3] = a;
  v20[2] = b;
  v15(this, &matrix, v20, bNoDepthTest, flLength, flRadius, flTimeToLive);
}


// CDebugOverlayScriptHelper::Axis  (line 780, @0x000000000205a1a0, libserver.so)  // inlines: Axis
// calls: QuaternionMatrix
void __fastcall CDebugOverlayScriptHelper::Axis(
        CDebugOverlayScriptHelper *const this,
        const Vector *const vPosition,
        const Quaternion *const q,
        float flAxisLen,
        bool bNoDepthTest,
        float flTimeToLive)
{
  matrix3x4_t matrix; // [rsp+10h] [rbp-50h] BYREF

  QuaternionMatrix(q, vPosition, &matrix);
  (*(*this + 216LL))(this, &matrix, bNoDepthTest, flAxisLen, flTimeToLive);
}


// CDebugOverlayScriptHelper::Cross  (line 785, @0x0000000002058fc0, libserver.so)  // inlines: Cross
void __fastcall CDebugOverlayScriptHelper::Cross(
        CDebugOverlayScriptHelper *const this,
        const Vector *const vPosition,
        float radius,
        char r,
        char g,
        char b,
        char a,
        float flTimeToLive,
        bool bNoDepthTest)
{
  __int64 v9; // rax
  _BYTE v10[24]; // [rsp-10h] [rbp-18h] BYREF

  v9 = *this;
  v10[1] = g;
  v10[0] = r;
  v10[2] = b;
  v10[3] = a;
  (*(v9 + 224))(this, vPosition, v10, bNoDepthTest, radius, flTimeToLive);
}


// CDebugOverlayScriptHelper::Cross3D  (line 790, @0x0000000002059000, libserver.so)  // inlines: Cross3D, Vector
void __fastcall CDebugOverlayScriptHelper::Cross3D(
        CDebugOverlayScriptHelper *const this,
        const Vector *const vPosition,
        float size,
        char r,
        char g,
        char b,
        char a,
        float flTimeToLive,
        bool bNoDepthTest)
{
  __int64 v9; // rax
  void (__fastcall *v10)(CDebugOverlayScriptHelper *const, const Vector *const, float *, _DWORD *, _BYTE *, bool, double); // rax
  _BYTE v11[16]; // [rsp+0h] [rbp-30h] BYREF
  float v12[4]; // [rsp+10h] [rbp-20h] BYREF
  _DWORD v13[4]; // [rsp+20h] [rbp-10h] BYREF

  v9 = *this;
  v11[3] = a;
  v11[0] = r;
  v11[1] = g;
  v11[2] = b;
  v10 = *(v9 + 232);
  *v13 = size;
  *&v13[1] = size;
  *&v13[2] = size;
  v12[0] = -size;
  v12[1] = -size;
  v12[2] = -size;
  v10(this, vPosition, v12, v13, v11, bNoDepthTest, flTimeToLive);
}


// CDebugOverlayScriptHelper::Cross3DOriented  (line 795, @0x000000000205a050, libserver.so)  // inlines: Cross3DOriented
// calls: QuaternionVectorsFLU
void __fastcall CDebugOverlayScriptHelper::Cross3DOriented(
        CDebugOverlayScriptHelper *const this,
        const Vector *const vPosition,
        const Quaternion *const orientation,
        float flSize,
        char r,
        char g,
        char b,
        float flTimeToLive,
        char a,
        bool bNoDepthTest)
{
  _BYTE v14[16]; // [rsp+30h] [rbp-70h] BYREF
  Vector pForward; // [rsp+40h] [rbp-60h] BYREF
  Vector pLeft; // [rsp+50h] [rbp-50h] BYREF
  Vector pUp; // [rsp+60h] [rbp-40h] BYREF

  v14[1] = g;
  v14[0] = r;
  v14[2] = b;
  v14[3] = a;
  QuaternionVectorsFLU(orientation, &pForward, &pLeft, &pUp);
  (*(*this + 240LL))(this, vPosition, &pForward, &pLeft, &pUp, v14, flSize, flTimeToLive, v14, v14, bNoDepthTest);
}


// CDebugOverlayScriptHelper::Triangle  (line 800, @0x0000000002059070, libserver.so)  // inlines: Triangle
void __fastcall CDebugOverlayScriptHelper::Triangle(
        CDebugOverlayScriptHelper *const this,
        const Vector *const p1,
        const Vector *const p2,
        const Vector *const p3,
        char r,
        char g,
        float flTimeToLive,
        char b,
        char a,
        bool bNoDepthTest)
{
  __int64 v10; // rax
  void (__fastcall *v11)(CDebugOverlayScriptHelper *const, const Vector *const, const Vector *const, const Vector *const, _BYTE *, bool, double); // rax
  _BYTE v12[24]; // [rsp-10h] [rbp-18h] BYREF

  v12[0] = r;
  v10 = *this;
  v12[1] = g;
  v12[2] = b;
  v11 = *(v10 + 248);
  v12[3] = a;
  v11(this, p1, p2, p3, v12, bNoDepthTest, flTimeToLive);
}


// CDebugOverlayScriptHelper::Circle  (line 805, @0x000000000205a200, libserver.so)  // inlines: Circle, MatrixGetColumn, operator=
// calls: QuaternionMatrix
void __fastcall CDebugOverlayScriptHelper::Circle(
        CDebugOverlayScriptHelper *const this,
        const Vector *const vPosition,
        const Quaternion *const orientation,
        float radius,
        char r,
        char g,
        char b,
        float flTimeToLive,
        char a,
        bool bNoDepthTest)
{
  __int64 v14; // rax
  void (__fastcall *v15)(CDebugOverlayScriptHelper *const, const Vector *const, _DWORD *, _DWORD *, _BYTE *, bool, float, double); // rax
  _BYTE v19[16]; // [rsp+10h] [rbp-90h] BYREF
  _DWORD v20[4]; // [rsp+20h] [rbp-80h] BYREF
  _DWORD v21[4]; // [rsp+30h] [rbp-70h] BYREF
  matrix3x4_t matrix; // [rsp+40h] [rbp-60h] BYREF

  QuaternionMatrix(orientation, &matrix);
  v14 = *this;
  v19[0] = r;
  v20[0] = LODWORD(matrix.m_flMatVal[0][2]);
  v19[1] = g;
  v20[1] = LODWORD(matrix.m_flMatVal[1][2]);
  v20[2] = LODWORD(matrix.m_flMatVal[2][2]);
  v15 = *(v14 + 264);
  v19[2] = b;
  v21[0] = LODWORD(matrix.m_flMatVal[0][1]);
  v19[3] = a;
  v21[1] = LODWORD(matrix.m_flMatVal[1][1]);
  v21[2] = LODWORD(matrix.m_flMatVal[2][1]);
  v15(this, vPosition, v20, v21, v19, bNoDepthTest, radius, flTimeToLive);
}


// CDebugOverlayScriptHelper::CircleScreenOriented  (line 810, @0x00000000020590b0, libserver.so)  // inlines: Circle
void __fastcall CDebugOverlayScriptHelper::CircleScreenOriented(
        CDebugOverlayScriptHelper *const this,
        const Vector *const vPosition,
        float radius,
        char r,
        char g,
        char b,
        char a,
        float flTimeToLive,
        bool bNoDepthTest)
{
  __int64 v9; // rax
  _BYTE v10[24]; // [rsp-10h] [rbp-18h] BYREF

  v9 = *this;
  v10[1] = g;
  v10[0] = r;
  v10[2] = b;
  v10[3] = a;
  (*(v9 + 256))(this, vPosition, v10, bNoDepthTest, radius, flTimeToLive);
}


// CDebugOverlayScriptHelper::HorzArrow  (line 815, @0x00000000020590f0, libserver.so)  // inlines: HorzArrow
void __fastcall CDebugOverlayScriptHelper::HorzArrow(
        CDebugOverlayScriptHelper *const this,
        const Vector *const startPos,
        const Vector *const endPos,
        float width,
        char r,
        char g,
        char b,
        float flTimeToLive,
        char a,
        bool bNoDepthTest)
{
  __int64 v10; // rax
  void (__fastcall *v11)(CDebugOverlayScriptHelper *const, const Vector *const, const Vector *const, _BYTE *, bool, float, double); // rax
  _BYTE v12[24]; // [rsp-10h] [rbp-18h] BYREF

  v10 = *this;
  v12[0] = r;
  v12[1] = g;
  v12[2] = b;
  v11 = *(v10 + 272);
  v12[3] = a;
  v11(this, startPos, endPos, v12, bNoDepthTest, width, flTimeToLive);
}


// CDebugOverlayScriptHelper::YawArrow  (line 820, @0x0000000002059130, libserver.so)  // inlines: YawArrow
void __fastcall CDebugOverlayScriptHelper::YawArrow(
        CDebugOverlayScriptHelper *const this,
        const Vector *const startPos,
        float yaw,
        float length,
        float width,
        char r,
        char g,
        char b,
        char a,
        float flTimeToLive,
        bool bNoDepthTest)
{
  __int64 v11; // rax
  _BYTE v12[24]; // [rsp-10h] [rbp-18h] BYREF

  v11 = *this;
  v12[1] = g;
  v12[0] = r;
  v12[2] = b;
  v12[3] = a;
  (*(v11 + 280))(this, startPos, v12, bNoDepthTest, yaw, length, width, flTimeToLive);
}


// CDebugOverlayScriptHelper::VertArrow  (line 825, @0x0000000002059170, libserver.so)  // inlines: VertArrow
void __fastcall CDebugOverlayScriptHelper::VertArrow(
        CDebugOverlayScriptHelper *const this,
        const Vector *const startPos,
        const Vector *const endPos,
        float width,
        char r,
        char g,
        char b,
        float flTimeToLive,
        char a,
        bool bNoDepthTest)
{
  __int64 v10; // rax
  void (__fastcall *v11)(CDebugOverlayScriptHelper *const, const Vector *const, const Vector *const, _BYTE *, bool, float, double); // rax
  _BYTE v12[24]; // [rsp-10h] [rbp-18h] BYREF

  v10 = *this;
  v12[0] = r;
  v12[1] = g;
  v12[2] = b;
  v11 = *(v10 + 288);
  v12[3] = a;
  v11(this, startPos, endPos, v12, bNoDepthTest, width, flTimeToLive);
}


// CDebugOverlayScriptHelper::Cone  (line 830, @0x00000000020591b0, libserver.so)  // inlines: Cone
void __fastcall CDebugOverlayScriptHelper::Cone(
        CDebugOverlayScriptHelper *const this,
        const Vector *const vPosition,
        const Vector *const axis,
        float angleRadians,
        float length,
        char r,
        char g,
        char b,
        float flTimeToLive,
        char a,
        bool bNoDepthTest)
{
  __int64 v11; // rax
  void (__fastcall *v12)(CDebugOverlayScriptHelper *const, const Vector *const, const Vector *const, _BYTE *, bool, float, float, double); // rax
  _BYTE v13[24]; // [rsp-10h] [rbp-18h] BYREF

  v11 = *this;
  v13[0] = r;
  v13[1] = g;
  v13[2] = b;
  v12 = *(v11 + 296);
  v13[3] = a;
  v12(this, vPosition, axis, v13, bNoDepthTest, angleRadians, length, flTimeToLive);
}


// CDebugOverlayScriptHelper::SolidCone  (line 835, @0x00000000020591f0, libserver.so)  // inlines: SolidCone
void __fastcall CDebugOverlayScriptHelper::SolidCone(
        CDebugOverlayScriptHelper *const this,
        const Vector *const vPosition,
        const Vector *const axis,
        float angleRadians,
        float flLength,
        char r,
        char g,
        char b,
        float flTimeToLive,
        char a,
        bool bNoDepthTest)
{
  __int64 v11; // rax
  void (__fastcall *v12)(CDebugOverlayScriptHelper *const, const Vector *const, const Vector *const, _BYTE *, bool, float, float, double); // rax
  _BYTE v13[24]; // [rsp-10h] [rbp-18h] BYREF

  v11 = *this;
  v13[0] = r;
  v13[1] = g;
  v13[2] = b;
  v12 = *(v11 + 304);
  v13[3] = a;
  v12(this, vPosition, axis, v13, bNoDepthTest, angleRadians, flLength, flTimeToLive);
}


// CDebugOverlayScriptHelper::DrawTickMarkedLine  (line 840, @0x0000000002059230, libserver.so)  // inlines: DrawTickMarkedLine
void __fastcall CDebugOverlayScriptHelper::DrawTickMarkedLine(
        CDebugOverlayScriptHelper *const this,
        const Vector *const vStartPos,
        const Vector *const vEndPos,
        float flTickDist,
        __int64 tickTextDist,
        char r,
        char g,
        float flTimeToLive,
        char b,
        char a,
        bool bNoDepthTest)
{
  __int64 v11; // rax
  void (__fastcall *v12)(CDebugOverlayScriptHelper *const, const Vector *const, const Vector *const, __int64, _BYTE *, bool, float, double); // rax
  _BYTE v13[24]; // [rsp-10h] [rbp-18h] BYREF

  v13[0] = r;
  v11 = *this;
  v13[1] = g;
  v13[2] = b;
  v12 = *(v11 + 344);
  v13[3] = a;
  v12(this, vStartPos, vEndPos, tickTextDist, v13, bNoDepthTest, flTickDist, flTimeToLive);
}


// CDebugOverlayScriptHelper::SweptBox  (line 845, @0x0000000002059270, libserver.so)  // inlines: SweptBox
void __fastcall CDebugOverlayScriptHelper::SweptBox(
        CDebugOverlayScriptHelper *const this,
        const Vector *const startPos,
        const Vector *const endPos,
        const Vector *const mins,
        const Vector *const maxs,
        const Quaternion *const orientation,
        float flTimeToLive,
        char r,
        char g,
        char b,
        char a)
{
  __int64 v11; // rax
  void (__fastcall *v12)(CDebugOverlayScriptHelper *const, const Vector *const, const Vector *const, const Vector *const, const Vector *const, const Quaternion *const, double, _BYTE *); // rax
  _BYTE v13[24]; // [rsp+10h] [rbp-18h] BYREF

  v11 = *this;
  v13[0] = r;
  v12 = *(v11 + 352);
  v13[1] = g;
  v13[2] = b;
  v13[3] = a;
  v12(this, startPos, endPos, mins, maxs, orientation, flTimeToLive, v13);
}


// CDebugOverlayScriptHelper::EntityText  (line 850, @0x0000000002070270, libserver.so)  // inlines: CEntityHandle, EntityText, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, LookupEntity, operator CEntityInstance*
// calls: IDebugOverlay::EntityText
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDebugOverlayScriptHelper::EntityText(
        CDebugOverlayScriptHelper *const this,
        int *hEntity,
        unsigned int nTextOffset,
        const char *pText,
        char r,
        char g,
        float flDuration,
        char b,
        char a)
{
  double v9; // xmm0_8
  int v10; // eax
  CEntityInstance *m_pInstance; // rsi
  CConcreteEntityList *v12; // r13
  CEntityIdentity *v13; // r10
  CEntityIdentity *v14; // r10
  __int64 v15; // [rsp+0h] [rbp-8h]

  v9 = flDuration;
  v10 = *hEntity;
  m_pInstance = 0;
  v12 = CEntityHandle::gm_pEntityList;
  *(&v15 - 12) = v10;
  if ( (v10 + 2) > 1 )
  {
    v13 = v12->m_pIdentityChunks[(*(&v15 - 24) >> 9) & 0x3F];
    if ( v13 != 0 )
    {
      v14 = &v13[*(&v15 - 6) & 0x1FF];
      if ( v14 != 0 && v10 == v14->m_EHandle.m_Index )
        m_pInstance = v14->m_pInstance;
    }
  }
  IDebugOverlay::EntityText(this, m_pInstance, nTextOffset, pText, v9, r, g, b, a);
}


// CDebugOverlayScriptHelper::EntityBounds  (line 855, @0x0000000002070840, libserver.so)  // inlines: CEntityHandle
// calls: IDebugOverlay::EntityBounds
void __fastcall CDebugOverlayScriptHelper::EntityBounds(
        CDebugOverlayScriptHelper *const this,
        int *hEntity,
        char r,
        char g,
        char b,
        char a,
        float flDuration,
        bool bDrawSolid)
{
  int v8[6]; // [rsp+10h] [rbp-18h] BYREF

  v8[0] = *hEntity;
  IDebugOverlay::EntityBounds(this, v8, r, g, b, a, flDuration, bDrawSolid);
}


// CDebugOverlayScriptHelper::EntityAxis  (line 860, @0x00000000020709a0, libserver.so)  // inlines: CEntityHandle, EntityAxis, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, LookupEntity, operator CEntityInstance*
// calls: IDebugOverlay::EntityAxis
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDebugOverlayScriptHelper::EntityAxis(
        CDebugOverlayScriptHelper *const this,
        int *hEntity,
        double flAxisLen,
        bool bNoDepthTest,
        float flTimeToLive)
{
  double v5; // xmm1_8
  int v6; // eax
  CEntityInstance *m_pInstance; // rsi
  CConcreteEntityList *v8; // r9
  CEntityIdentity *v9; // rcx
  CEntityIdentity *v10; // rcx
  __int64 v11; // [rsp+0h] [rbp-8h]

  v5 = flTimeToLive;
  v6 = *hEntity;
  m_pInstance = 0;
  v8 = CEntityHandle::gm_pEntityList;
  *(&v11 - 4) = v6;
  if ( (v6 + 2) > 1 )
  {
    v9 = v8->m_pIdentityChunks[(*(&v11 - 8) >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[*(&v11 - 2) & 0x1FF];
      if ( v10 != 0 && v6 == v10->m_EHandle.m_Index )
        m_pInstance = v10->m_pInstance;
    }
  }
  IDebugOverlay::EntityAxis(this, m_pInstance, flAxisLen, bNoDepthTest, v5);
}


// CDebugOverlayScriptHelper::EntitySkeleton  (line 865, @0x0000000002070be0, libserver.so)  // inlines: CEntityHandle, EntitySkeleton, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, LookupEntity, operator CEntityInstance*
// calls: IDebugOverlay::EntitySkeleton
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDebugOverlayScriptHelper::EntitySkeleton(
        CDebugOverlayScriptHelper *const this,
        int *hEntity,
        float flTimeToLive,
        float64 a4)
{
  double v4; // xmm0_8
  int v5; // eax
  CEntityInstance *m_pInstance; // rsi
  CConcreteEntityList *v7; // r8
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  __int64 v10; // [rsp+0h] [rbp-8h]

  v4 = flTimeToLive;
  v5 = *hEntity;
  m_pInstance = 0;
  v7 = CEntityHandle::gm_pEntityList;
  *(&v10 - 4) = v5;
  if ( (v5 + 2) > 1 )
  {
    v8 = v7->m_pIdentityChunks[(*(&v10 - 8) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[*(&v10 - 2) & 0x1FF];
      if ( v9 != 0 && v5 == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  IDebugOverlay::EntitySkeleton(this, m_pInstance, v4, a4);
}


// CDebugOverlayScriptHelper::EntityAttachments  (line 870, @0x00000000020715e0, libserver.so)  // inlines: CEntityHandle, EntityAttachments, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, IndexToIdentity, LookupEntity, operator CEntityInstance*
// calls: IDebugOverlay::EntityAttachments
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDebugOverlayScriptHelper::EntityAttachments(
        CDebugOverlayScriptHelper *const this,
        int *hEntity,
        double flAxisLen,
        float flTimeToLive)
{
  int v4; // eax
  CEntityInstance *m_pInstance; // rsi
  CConcreteEntityList *v6; // r8
  double v7; // xmm1_8
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  __int64 v10; // [rsp-8h] [rbp-8h]

  if ( *&flAxisLen <= 0.0 )
    *&flAxisLen = (ent_pivot_size.m_pParent->m_Value.m_nValue / 3);
  v4 = *hEntity;
  m_pInstance = 0;
  v6 = CEntityHandle::gm_pEntityList;
  v7 = flTimeToLive;
  *(&v10 - 4) = v4;
  if ( (v4 + 2) > 1 )
  {
    v8 = v6->m_pIdentityChunks[(*(&v10 - 8) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[*(&v10 - 2) & 0x1FF];
      if ( v9 != 0 && v4 == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  IDebugOverlay::EntityAttachments(this, m_pInstance, flAxisLen, v7, 0.0);
}


// GetScriptDesc<CDebugOverlayScriptHelper>  (line 880, @0x0000000002085190, libserver.so)  // inlines: AddParameterType, CUtlMemory, CUtlVector, CUtlVectorBase, Finalize, ScriptClassDesc_t, ScriptDeduceFunctionSignature<CDebugOverlayScriptHelper*, CDebugOverlayScriptHelper, void, CEntityHandle, float, bool, float>, ScriptDeduceFunctionSignature<CDebugOverlayScriptHelper*, CDebugOverlayScriptHelper, void, CEntityHandle, float, float>, ScriptDeduceFunctionSignature<CDebugOverlayScriptHelper*, CDebugOverlayScriptHelper, void, CEntityHandle, float>, ScriptDeduceFunctionSignature<CDebugOverlayScriptHelper*, CDebugOverlayScriptHelper, void, CEntityHandle, int, char const*, int, int, int, int, float>, ScriptDeduceFunctionSignature<CDebugOverlayScriptHelper*, CDebugOverlayScriptHelper, void, CEntityHandle, int, int, int, int, bool, float>, ScriptDeduceFunctionSignature<CDebugOverlayScriptHelper*, CDebugOverlayScriptHelper, void, CUtlStringToken>, ScriptDeduceFunctionSignature<CDebugOverlayScriptHelper*, CDebugOverlayScriptHelper, void, char const*, const Vector2D&, const Vector2D&, int, int, int, int, const Vector2D&, const Vector2D&, float>, ScriptDeduceFunctionSignature<CDebugOverlayScriptHelper*, CDebugOverlayScriptHelper, void, const Vector&, const Quaternion&, char const*, int, int, int, int, bool, float>, ScriptDeduceFunctionSignature<CDebugOverlayScriptHelper*, CDebugOverlayScriptHelper, void, const Vector&, const Quaternion&, float, bool, float>, ScriptDeduceFunctionSignature<CDebugOverlayScriptHelper*, CDebugOverlayScriptHelper, void, const Vector&, const Quaternion&, float, float, int, int, int, int, bool, float>, ScriptDeduceFunctionSignature<CDebugOverlayScriptHelper*, CDebugOverlayScriptHelper, void, const Vector&, const Quaternion&, float, int, int, int, int, bool, float>, ScriptDeduceFunctionSignature<CDebugOverlayScriptHelper*, CDebugOverlayScriptHelper, void, const Vector&, const Vector&, const Vector&, const Quaternion&, int, int, int, int, bool, float>, ScriptDeduceFunctionSignature<CDebugOverlayScriptHelper*, CDebugOverlayScriptHelper, void, const Vector&, const Vector&, const Vector&, const Vector&, const Quaternion&, int, int, int, int, float>, ScriptDeduceFunctionSignature<CDebugOverlayScriptHelper*, CDebugOverlayScriptHelper, void, const Vector&, const Vector&, const Vector&, int, int, int, int, bool, float>, ScriptDeduceFunctionSignature<CDebugOverlayScriptHelper*, CDebugOverlayScriptHelper, void, const Vector&, const Vector&, float, float, int, int, int, int, bool, float>, ScriptDeduceFunctionSignature<CDebugOverlayScriptHelper*, CDebugOverlayScriptHelper, void, const Vector&, const Vector&, float, int, int, int, int, bool, float>, ScriptDeduceFunctionSignature<CDebugOverlayScriptHelper*, CDebugOverlayScriptHelper, void, const Vector&, const Vector&, float, int, int, int, int, int, bool, float>, ScriptDeduceFunctionSignature<CDebugOverlayScriptHelper*, CDebugOverlayScriptHelper, void, const Vector&, const Vector&, int, int, int, int, bool, float>, ScriptDeduceFunctionSignature<CDebugOverlayScriptHelper*, CDebugOverlayScriptHelper, void, const Vector&, float, float, float, int, int, int, int, bool, float>, ScriptDeduceFunctionSignature<CDebugOverlayScriptHelper*, CDebugOverlayScriptHelper, void, const Vector&, float, int, int, int, int, bool, float>, ScriptDeduceFunctionSignature<CDebugOverlayScriptHelper*, CDebugOverlayScriptHelper, void, const Vector&, int, char const*, float, int, int, int, int, float>, ScriptDeduceFunctionSignature<CDebugOverlayScriptHelper*, CDebugOverlayScriptHelper, void, const Vector2D&, const Vector2D&, int, int, int, int, float>, ScriptDeduceFunctionSignature<CDebugOverlayScriptHelper*, ISceneViewDebugOverlays, void, CUtlStringToken>, ScriptDeduceFunctionSignature<CDebugOverlayScriptHelper*, ISceneViewDebugOverlays, void>, SetDescription, SetFunctionName, SetReturnType, SetScriptName, operator[]
// calls: operator new, CUtlVectorBase<ScriptFunctionBinding_t, CUtlMemory<ScriptFunctionBinding_t, int> >::AddToTail
// callers: CDebugOverlayGameSystem::GameActivate
// strings: "Wrapper class over g_pDebugOverlay instance", "CDebugOverlayScriptHelper", "Draws a line between two points", "Draws a line between two points in screenspace", "Line2D", "Draws an oriented box at the origin. Specify bounds in local space." (40 total)
// globals: g_pCDebugOverlayScriptHelper_ScriptDesc, CMemberScriptBinding8<CDebugOverlayScriptHelper *,void (CDebugOverlayScriptHelper::*)(Vector const&,Vector const&,int,int,int,int,bool,float),void,Vector const&, CDebugOverlayScriptHelper::Line(Vector const&,Vector const&,int,int,int,int,bool,float), CMemberScriptBinding7<CDebugOverlayScriptHelper *,void (CDebugOverlayScriptHelper::*)(Vector2D const&,Vector2D const&,int,int,int,int,float),void,Vector2D const, CDebugOverlayScriptHelper::Line2D(Vector2D const&,Vector2D const&,int,int,int,int,float), CMemberScriptBinding10<CDebugOverlayScriptHelper *,void (CDebugOverlayScriptHelper::*)(Vector const&,Vector const&,Vector const&,Quaternion const&,int,int,int,i, CDebugOverlayScriptHelper::BoxAngles(Vector const&,Vector const&,Vector const&,Quaternion const&,int,int,int,int,bool,float), CDebugOverlayScriptHelper::Box(Vector const&,Vector const&,int,int,int,int,bool,float) (40 total)
ScriptClassDesc_t *__fastcall GetScriptDesc<CDebugOverlayScriptHelper>(
        CDebugOverlayScriptHelper *pScriptDescObjectInstance)
{
  ScriptClassDesc_t *result; // rax
  ScriptClassDesc_t *v2; // rbx
  CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int> > *p_m_FunctionBindings; // r12
  __int64 v4; // rcx
  char v5; // al
  char v6; // dl
  int v7; // eax
  char v8; // dl
  char v9; // di
  __int64 v10; // rcx
  char v11; // al
  char v12; // dl
  int v13; // eax
  char v14; // dl
  char v15; // di
  __int64 v16; // rdx
  char v17; // al
  char v18; // cl
  int v19; // eax
  char v20; // cl
  char v21; // di
  __int64 v22; // rcx
  char v23; // al
  char v24; // dl
  int v25; // eax
  char v26; // dl
  char v27; // di
  __int64 v28; // rcx
  char v29; // al
  char v30; // dl
  int v31; // eax
  char v32; // dl
  char v33; // di
  __int64 v34; // rdx
  char v35; // al
  char v36; // cl
  int v37; // eax
  char v38; // cl
  char v39; // di
  __int64 v40; // rdx
  char v41; // al
  char v42; // cl
  int v43; // eax
  char v44; // cl
  char v45; // di
  __int64 v46; // rcx
  char v47; // al
  char v48; // dl
  int v49; // eax
  char v50; // dl
  char v51; // di
  __int64 v52; // rdx
  char v53; // al
  char v54; // cl
  int v55; // eax
  char v56; // cl
  char v57; // di
  __int64 v58; // rdx
  char v59; // al
  char v60; // cl
  int v61; // eax
  char v62; // cl
  char v63; // di
  __int64 v64; // rcx
  char v65; // al
  char v66; // dl
  int v67; // eax
  char v68; // dl
  char v69; // di
  __int64 v70; // rcx
  char v71; // al
  char v72; // dl
  int v73; // eax
  char v74; // dl
  char v75; // di
  __int64 v76; // rcx
  char v77; // al
  char v78; // dl
  int v79; // eax
  char v80; // dl
  char v81; // di
  __int64 v82; // rdx
  char v83; // al
  char v84; // cl
  int v85; // eax
  char v86; // cl
  char v87; // di
  __int64 v88; // rdx
  char v89; // al
  char v90; // cl
  int v91; // eax
  char v92; // cl
  char v93; // di
  __int64 v94; // rdx
  char v95; // al
  char v96; // cl
  int v97; // eax
  char v98; // cl
  char v99; // di
  __int64 v100; // rcx
  char v101; // al
  char v102; // dl
  int v103; // eax
  char v104; // dl
  char v105; // di
  __int64 v106; // rdx
  char v107; // al
  char v108; // cl
  int v109; // eax
  char v110; // cl
  char v111; // di
  __int64 v112; // rdx
  char v113; // al
  char v114; // cl
  int v115; // eax
  char v116; // cl
  char v117; // di
  __int64 v118; // rdx
  char v119; // al
  char v120; // cl
  int v121; // eax
  char v122; // cl
  char v123; // di
  __int64 v124; // rdx
  char v125; // al
  char v126; // cl
  int v127; // eax
  char v128; // cl
  char v129; // di
  __int64 v130; // rdx
  char v131; // al
  char v132; // cl
  int v133; // eax
  char v134; // cl
  char v135; // di
  __int64 v136; // rdx
  char v137; // al
  char v138; // cl
  int v139; // eax
  char v140; // cl
  char v141; // di
  __int64 v142; // rdx
  char v143; // al
  char v144; // cl
  int v145; // eax
  char v146; // cl
  char v147; // di
  __int64 v148; // rcx
  int v149; // eax
  int v150; // eax
  char v151; // dl
  char v152; // di
  __int64 v153; // rcx
  char v154; // al
  __int64 v155; // rdx
  int v156; // eax
  char v157; // dl
  char v158; // di
  __int64 v159; // rcx
  char v160; // al
  __int64 v161; // rdx
  int v162; // eax
  char v163; // dl
  char v164; // di
  __int64 v165; // rcx
  int v166; // eax
  int v167; // eax
  char v168; // dl
  char v169; // di
  __int64 v170; // rcx
  char v171; // al
  __int64 v172; // rdx
  int v173; // eax
  char v174; // dl
  char v175; // di
  __int64 v176; // rcx
  char v177; // al
  char v178; // dl
  int v179; // eax
  char v180; // dl
  char v181; // di
  __int64 v182; // rcx
  char v183; // al
  char v184; // dl
  int v185; // eax
  char v186; // dl
  char v187; // di
  __int64 v188; // rcx
  char v189; // al
  char v190; // dl
  int v191; // eax
  char v192; // dl
  char v193; // di
  __int64 v194; // rcx
  char v195; // al
  char v196; // dl
  int v197; // eax
  char v198; // dl
  char v199; // di
  __int64 v200; // rcx
  char v201; // al
  char v202; // dl
  int v203; // eax
  char v204; // dl
  char v205; // di

  result = g_pCDebugOverlayScriptHelper_ScriptDesc;
  if ( g_pCDebugOverlayScriptHelper_ScriptDesc == 0 )
  {
    v2 = operator new(0x50u);
    v2->m_pBaseDesc = 0;
    v2->m_FunctionBindings.m_Size = 0;
    p_m_FunctionBindings = &v2->m_FunctionBindings;
    v2->m_FunctionBindings.m_Memory.m_pMemory = 0;
    v2->m_FunctionBindings.m_Memory.m_nAllocationCount = 0;
    v2->m_FunctionBindings.m_Memory.m_nGrowSize = 0;
    v2->m_pfnConstruct = 0;
    v2->m_pfnDestruct = 0;
    v2->pHelper = 0;
    g_pCDebugOverlayScriptHelper_ScriptDesc = v2;
    v2->m_pszDescription = "Wrapper class over g_pDebugOverlay instance";
    v2->m_pszScriptName = "CDebugOverlayScriptHelper";
    v2->m_pszClassname = "CDebugOverlayScriptHelper";
    v4 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(&v2->m_FunctionBindings)];
    *(v4 + 24) = 0;
    *(v4 + 16) = "Draws a line between two points";
    *v4 = "Line";
    *(v4 + 8) = "Line";
    v5 = *(v4 + 26);
    *(v4 + v5 + 27) = 3;
    *(v4 + (v5 + 1) + 27) = 3;
    *(v4 + (v5 + 2) + 27) = 5;
    *(v4 + (v5 + 3) + 27) = 5;
    *(v4 + (v5 + 4) + 27) = 5;
    *(v4 + (v5 + 5) + 27) = 5;
    *(v4 + (v5 + 6) + 27) = 6;
    v6 = v5 + 7;
    v5 += 8;
    *(v4 + v6 + 27) = 1;
    *(v4 + 26) = v5;
    v7 = v5 - 1;
    *(v4 + 25) = 0;
    if ( v7 >= 0 && *(v4 + v7 + 27) == 32 )
    {
      v8 = 1;
      do
      {
        --v7;
        v9 = v8;
        if ( v7 == -1 )
        {
          *(v4 + 25) = v8;
          goto LABEL_8;
        }
        ++v8;
      }
      while ( *(v4 + v7 + 27) == 32 );
      *(v4 + 25) = v9;
    }
LABEL_8:
    *(v4 + 64) = 1;
    *(v4 + 48) = CMemberScriptBinding8<CDebugOverlayScriptHelper *,void (CDebugOverlayScriptHelper::*)(Vector const&,Vector const&,int,int,int,int,bool,float),void,Vector const&,Vector const&,int,int,int,int,bool,float>::Call;
    *(v4 + 56) = CDebugOverlayScriptHelper::Line;
    v10 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v10 + 24) = 0;
    *(v10 + 16) = "Draws a line between two points in screenspace";
    *v10 = "Line2D";
    *(v10 + 8) = "Line2D";
    v11 = *(v10 + 26);
    *(v10 + v11 + 27) = 25;
    *(v10 + (v11 + 1) + 27) = 25;
    *(v10 + (v11 + 2) + 27) = 5;
    *(v10 + (v11 + 3) + 27) = 5;
    *(v10 + (v11 + 4) + 27) = 5;
    *(v10 + (v11 + 5) + 27) = 5;
    v12 = v11 + 6;
    v11 += 7;
    *(v10 + v12 + 27) = 1;
    *(v10 + 26) = v11;
    v13 = v11 - 1;
    *(v10 + 25) = 0;
    if ( v13 >= 0 && *(v10 + v13 + 27) == 32 )
    {
      v14 = 1;
      do
      {
        --v13;
        v15 = v14;
        if ( v13 == -1 )
        {
          *(v10 + 25) = v14;
          goto LABEL_14;
        }
        ++v14;
      }
      while ( *(v10 + v13 + 27) == 32 );
      *(v10 + 25) = v15;
    }
LABEL_14:
    *(v10 + 64) = 1;
    *(v10 + 48) = CMemberScriptBinding7<CDebugOverlayScriptHelper *,void (CDebugOverlayScriptHelper::*)(Vector2D const&,Vector2D const&,int,int,int,int,float),void,Vector2D const&,Vector2D const&,int,int,int,int,float>::Call;
    *(v10 + 56) = CDebugOverlayScriptHelper::Line2D;
    v16 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v16 + 24) = 0;
    *(v16 + 16) = "Draws an oriented box at the origin. Specify bounds in local space.";
    *v16 = "BoxAngles";
    *(v16 + 8) = "BoxAngles";
    v17 = *(v16 + 26);
    *(v16 + v17 + 27) = 3;
    *(v16 + (v17 + 1) + 27) = 3;
    *(v16 + (v17 + 2) + 27) = 3;
    *(v16 + (v17 + 3) + 27) = 4;
    *(v16 + (v17 + 4) + 27) = 5;
    *(v16 + (v17 + 5) + 27) = 5;
    *(v16 + (v17 + 6) + 27) = 5;
    *(v16 + (v17 + 7) + 27) = 5;
    *(v16 + (v17 + 8) + 27) = 6;
    v18 = v17 + 9;
    v17 += 10;
    *(v16 + v18 + 27) = 1;
    *(v16 + 26) = v17;
    v19 = v17 - 1;
    *(v16 + 25) = 0;
    if ( v19 >= 0 && *(v16 + v19 + 27) == 32 )
    {
      v20 = 1;
      do
      {
        --v19;
        v21 = v20;
        if ( v19 == -1 )
        {
          *(v16 + 25) = v20;
          goto LABEL_20;
        }
        ++v20;
      }
      while ( *(v16 + v19 + 27) == 32 );
      *(v16 + 25) = v21;
    }
LABEL_20:
    *(v16 + 64) = 1;
    *(v16 + 48) = CMemberScriptBinding10<CDebugOverlayScriptHelper *,void (CDebugOverlayScriptHelper::*)(Vector const&,Vector const&,Vector const&,Quaternion const&,int,int,int,int,bool,float),void,Vector const&,Vector const&,Vector const&,Quaternion const&,int,int,int,int,bool,float>::Call;
    *(v16 + 56) = CDebugOverlayScriptHelper::BoxAngles;
    v22 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v22 + 24) = 0;
    *(v22 + 16) = "Draws a world-space axis-aligned box. Specify bounds in world space.";
    *v22 = "Box";
    *(v22 + 8) = "Box";
    v23 = *(v22 + 26);
    *(v22 + v23 + 27) = 3;
    *(v22 + (v23 + 1) + 27) = 3;
    *(v22 + (v23 + 2) + 27) = 5;
    *(v22 + (v23 + 3) + 27) = 5;
    *(v22 + (v23 + 4) + 27) = 5;
    *(v22 + (v23 + 5) + 27) = 5;
    *(v22 + (v23 + 6) + 27) = 6;
    v24 = v23 + 7;
    v23 += 8;
    *(v22 + v24 + 27) = 1;
    *(v22 + 26) = v23;
    v25 = v23 - 1;
    *(v22 + 25) = 0;
    if ( v25 >= 0 && *(v22 + v25 + 27) == 32 )
    {
      v26 = 1;
      do
      {
        --v25;
        v27 = v26;
        if ( v25 == -1 )
        {
          *(v22 + 25) = v26;
          goto LABEL_26;
        }
        ++v26;
      }
      while ( *(v22 + v25 + 27) == 32 );
      *(v22 + 25) = v27;
    }
LABEL_26:
    *(v22 + 64) = 1;
    *(v22 + 48) = CMemberScriptBinding8<CDebugOverlayScriptHelper *,void (CDebugOverlayScriptHelper::*)(Vector const&,Vector const&,int,int,int,int,bool,float),void,Vector const&,Vector const&,int,int,int,int,bool,float>::Call;
    *(v22 + 56) = CDebugOverlayScriptHelper::Box;
    v28 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v28 + 24) = 0;
    *(v28 + 16) = "Draws a wireframe sphere. Specify center in world space.";
    *v28 = "Sphere";
    *(v28 + 8) = "Sphere";
    v29 = *(v28 + 26);
    *(v28 + v29 + 27) = 3;
    *(v28 + (v29 + 1) + 27) = 1;
    *(v28 + (v29 + 2) + 27) = 5;
    *(v28 + (v29 + 3) + 27) = 5;
    *(v28 + (v29 + 4) + 27) = 5;
    *(v28 + (v29 + 5) + 27) = 5;
    *(v28 + (v29 + 6) + 27) = 6;
    v30 = v29 + 7;
    v29 += 8;
    *(v28 + v30 + 27) = 1;
    *(v28 + 26) = v29;
    v31 = v29 - 1;
    *(v28 + 25) = 0;
    if ( v31 >= 0 && *(v28 + v31 + 27) == 32 )
    {
      v32 = 1;
      do
      {
        --v31;
        v33 = v32;
        if ( v31 == -1 )
        {
          *(v28 + 25) = v32;
          goto LABEL_32;
        }
        ++v32;
      }
      while ( *(v28 + v31 + 27) == 32 );
      *(v28 + 25) = v33;
    }
LABEL_32:
    *(v28 + 64) = 1;
    *(v28 + 48) = CMemberScriptBinding8<CDebugOverlayScriptHelper *,void (CDebugOverlayScriptHelper::*)(Vector const&,float,int,int,int,int,bool,float),void,Vector const&,float,int,int,int,int,bool,float>::Call;
    *(v28 + 56) = CDebugOverlayScriptHelper::Sphere;
    v34 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v34 + 24) = 0;
    *(v34 + 16) = "Draws a capsule. Specify base in world space.";
    *v34 = "Capsule";
    *(v34 + 8) = "Capsule";
    v35 = *(v34 + 26);
    *(v34 + v35 + 27) = 3;
    *(v34 + (v35 + 1) + 27) = 4;
    *(v34 + (v35 + 2) + 27) = 1;
    *(v34 + (v35 + 3) + 27) = 1;
    *(v34 + (v35 + 4) + 27) = 5;
    *(v34 + (v35 + 5) + 27) = 5;
    *(v34 + (v35 + 6) + 27) = 5;
    *(v34 + (v35 + 7) + 27) = 5;
    *(v34 + (v35 + 8) + 27) = 6;
    v36 = v35 + 9;
    v35 += 10;
    *(v34 + v36 + 27) = 1;
    *(v34 + 26) = v35;
    v37 = v35 - 1;
    *(v34 + 25) = 0;
    if ( v37 >= 0 && *(v34 + v37 + 27) == 32 )
    {
      v38 = 1;
      do
      {
        --v37;
        v39 = v38;
        if ( v37 == -1 )
        {
          *(v34 + 25) = v38;
          goto LABEL_38;
        }
        ++v38;
      }
      while ( *(v34 + v37 + 27) == 32 );
      *(v34 + 25) = v39;
    }
LABEL_38:
    *(v34 + 64) = 1;
    *(v34 + 48) = CMemberScriptBinding10<CDebugOverlayScriptHelper *,void (CDebugOverlayScriptHelper::*)(Vector const&,Quaternion const&,float,float,int,int,int,int,bool,float),void,Vector const&,Quaternion const&,float,float,int,int,int,int,bool,float>::Call;
    *(v34 + 56) = CDebugOverlayScriptHelper::Capsule;
    v40 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v40 + 24) = 0;
    *(v40 + 16) = "Draws 3D text. Specify origin + orientation in world space.";
    *v40 = "VectorText3D";
    *(v40 + 8) = "VectorText3D";
    v41 = *(v40 + 26);
    *(v40 + v41 + 27) = 3;
    *(v40 + (v41 + 1) + 27) = 4;
    *(v40 + (v41 + 2) + 27) = 30;
    *(v40 + (v41 + 3) + 27) = 5;
    *(v40 + (v41 + 4) + 27) = 5;
    *(v40 + (v41 + 5) + 27) = 5;
    *(v40 + (v41 + 6) + 27) = 5;
    *(v40 + (v41 + 7) + 27) = 6;
    v42 = v41 + 8;
    v41 += 9;
    *(v40 + v42 + 27) = 1;
    *(v40 + 26) = v41;
    v43 = v41 - 1;
    *(v40 + 25) = 0;
    if ( v43 >= 0 && *(v40 + v43 + 27) == 32 )
    {
      v44 = 1;
      do
      {
        --v43;
        v45 = v44;
        if ( v43 == -1 )
        {
          *(v40 + 25) = v44;
          goto LABEL_44;
        }
        ++v44;
      }
      while ( *(v40 + v43 + 27) == 32 );
      *(v40 + 25) = v45;
    }
LABEL_44:
    *(v40 + 64) = 1;
    *(v40 + 48) = CMemberScriptBinding9<CDebugOverlayScriptHelper *,void (CDebugOverlayScriptHelper::*)(Vector const&,Quaternion const&,char const*,int,int,int,int,bool,float),void,Vector const&,Quaternion const&,char const*,int,int,int,int,bool,float>::Call;
    *(v40 + 56) = CDebugOverlayScriptHelper::VectorText3D;
    v46 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v46 + 24) = 0;
    *(v46 + 16) = "Draws a screen-space filled 2D rectangle. Coordinates are in pixels.";
    *v46 = "FilledRect2D";
    *(v46 + 8) = "FilledRect2D";
    v47 = *(v46 + 26);
    *(v46 + v47 + 27) = 25;
    *(v46 + (v47 + 1) + 27) = 25;
    *(v46 + (v47 + 2) + 27) = 5;
    *(v46 + (v47 + 3) + 27) = 5;
    *(v46 + (v47 + 4) + 27) = 5;
    *(v46 + (v47 + 5) + 27) = 5;
    v48 = v47 + 6;
    v47 += 7;
    *(v46 + v48 + 27) = 1;
    *(v46 + 26) = v47;
    v49 = v47 - 1;
    *(v46 + 25) = 0;
    if ( v49 >= 0 && *(v46 + v49 + 27) == 32 )
    {
      v50 = 1;
      do
      {
        --v49;
        v51 = v50;
        if ( v49 == -1 )
        {
          *(v46 + 25) = v50;
          goto LABEL_50;
        }
        ++v50;
      }
      while ( *(v46 + v49 + 27) == 32 );
      *(v46 + 25) = v51;
    }
LABEL_50:
    *(v46 + 64) = 1;
    *(v46 + 48) = CMemberScriptBinding7<CDebugOverlayScriptHelper *,void (CDebugOverlayScriptHelper::*)(Vector2D const&,Vector2D const&,int,int,int,int,float),void,Vector2D const&,Vector2D const&,int,int,int,int,float>::Call;
    *(v46 + 56) = CDebugOverlayScriptHelper::FilledRect2D;
    v52 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v52 + 24) = 0;
    *(v52 + 16) = "Draws a screen-space texture. Coordinates are in pixels.";
    *v52 = "Texture";
    *(v52 + 8) = "Texture";
    v53 = *(v52 + 26);
    *(v52 + v53 + 27) = 30;
    *(v52 + (v53 + 1) + 27) = 25;
    *(v52 + (v53 + 2) + 27) = 25;
    *(v52 + (v53 + 3) + 27) = 5;
    *(v52 + (v53 + 4) + 27) = 5;
    *(v52 + (v53 + 5) + 27) = 5;
    *(v52 + (v53 + 6) + 27) = 5;
    *(v52 + (v53 + 7) + 27) = 25;
    *(v52 + (v53 + 8) + 27) = 25;
    v54 = v53 + 9;
    v53 += 10;
    *(v52 + v54 + 27) = 1;
    *(v52 + 26) = v53;
    v55 = v53 - 1;
    *(v52 + 25) = 0;
    if ( v55 >= 0 && *(v52 + v55 + 27) == 32 )
    {
      v56 = 1;
      do
      {
        --v55;
        v57 = v56;
        if ( v55 == -1 )
        {
          *(v52 + 25) = v56;
          goto LABEL_56;
        }
        ++v56;
      }
      while ( *(v52 + v55 + 27) == 32 );
      *(v52 + 25) = v57;
    }
LABEL_56:
    *(v52 + 64) = 1;
    *(v52 + 48) = CMemberScriptBinding10<CDebugOverlayScriptHelper *,void (CDebugOverlayScriptHelper::*)(char const*,Vector2D const&,Vector2D const&,int,int,int,int,Vector2D const&,Vector2D const&,float),void,char const*,Vector2D const&,Vector2D const&,int,int,int,int,Vector2D const&,Vector2D const&,float>::Call;
    *(v52 + 56) = CDebugOverlayScriptHelper::Texture;
    v58 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v58 + 24) = 0;
    *(v58 + 16) = "Draws 2D text. Specify origin in world space.";
    *v58 = "Text";
    *(v58 + 8) = "Text";
    v59 = *(v58 + 26);
    *(v58 + v59 + 27) = 3;
    *(v58 + (v59 + 1) + 27) = 5;
    *(v58 + (v59 + 2) + 27) = 30;
    *(v58 + (v59 + 3) + 27) = 1;
    *(v58 + (v59 + 4) + 27) = 5;
    *(v58 + (v59 + 5) + 27) = 5;
    *(v58 + (v59 + 6) + 27) = 5;
    *(v58 + (v59 + 7) + 27) = 5;
    v60 = v59 + 8;
    v59 += 9;
    *(v58 + v60 + 27) = 1;
    *(v58 + 26) = v59;
    v61 = v59 - 1;
    *(v58 + 25) = 0;
    if ( v61 >= 0 && *(v58 + v61 + 27) == 32 )
    {
      v62 = 1;
      do
      {
        --v61;
        v63 = v62;
        if ( v61 == -1 )
        {
          *(v58 + 25) = v62;
          goto LABEL_62;
        }
        ++v62;
      }
      while ( *(v58 + v61 + 27) == 32 );
      *(v58 + 25) = v63;
    }
LABEL_62:
    *(v58 + 64) = 1;
    *(v58 + 48) = CMemberScriptBinding9<CDebugOverlayScriptHelper *,void (CDebugOverlayScriptHelper::*)(Vector const&,int,char const*,float,int,int,int,int,float),void,Vector const&,int,char const*,float,int,int,int,int,float>::Call;
    *(v58 + 56) = CDebugOverlayScriptHelper::Text;
    v64 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v64 + 24) = 0;
    *(v64 + 16) = "Draws an axis. Specify origin + orientation in world space.";
    *v64 = "Axis";
    *(v64 + 8) = "Axis";
    v65 = *(v64 + 26);
    *(v64 + v65 + 27) = 3;
    *(v64 + (v65 + 1) + 27) = 4;
    *(v64 + (v65 + 2) + 27) = 1;
    *(v64 + (v65 + 3) + 27) = 6;
    v66 = v65 + 4;
    v65 += 5;
    *(v64 + v66 + 27) = 1;
    *(v64 + 26) = v65;
    v67 = v65 - 1;
    *(v64 + 25) = 0;
    if ( v67 >= 0 && *(v64 + v67 + 27) == 32 )
    {
      v68 = 1;
      do
      {
        --v67;
        v69 = v68;
        if ( v67 == -1 )
        {
          *(v64 + 25) = v68;
          goto LABEL_68;
        }
        ++v68;
      }
      while ( *(v64 + v67 + 27) == 32 );
      *(v64 + 25) = v69;
    }
LABEL_68:
    *(v64 + 64) = 1;
    *(v64 + 48) = CMemberScriptBinding5<CDebugOverlayScriptHelper *,void (CDebugOverlayScriptHelper::*)(Vector const&,Quaternion const&,float,bool,float),void,Vector const&,Quaternion const&,float,bool,float>::Call;
    *(v64 + 56) = CDebugOverlayScriptHelper::Axis;
    v70 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v70 + 24) = 0;
    *(v70 + 16) = "Draws a screen-aligned cross. Specify origin in world space.";
    *v70 = "Cross";
    *(v70 + 8) = "Cross";
    v71 = *(v70 + 26);
    *(v70 + v71 + 27) = 3;
    *(v70 + (v71 + 1) + 27) = 1;
    *(v70 + (v71 + 2) + 27) = 5;
    *(v70 + (v71 + 3) + 27) = 5;
    *(v70 + (v71 + 4) + 27) = 5;
    *(v70 + (v71 + 5) + 27) = 5;
    *(v70 + (v71 + 6) + 27) = 6;
    v72 = v71 + 7;
    v71 += 8;
    *(v70 + v72 + 27) = 1;
    *(v70 + 26) = v71;
    v73 = v71 - 1;
    *(v70 + 25) = 0;
    if ( v73 >= 0 && *(v70 + v73 + 27) == 32 )
    {
      v74 = 1;
      do
      {
        --v73;
        v75 = v74;
        if ( v73 == -1 )
        {
          *(v70 + 25) = v74;
          goto LABEL_74;
        }
        ++v74;
      }
      while ( *(v70 + v73 + 27) == 32 );
      *(v70 + 25) = v75;
    }
LABEL_74:
    *(v70 + 64) = 1;
    *(v70 + 48) = CMemberScriptBinding8<CDebugOverlayScriptHelper *,void (CDebugOverlayScriptHelper::*)(Vector const&,float,int,int,int,int,bool,float),void,Vector const&,float,int,int,int,int,bool,float>::Call;
    *(v70 + 56) = CDebugOverlayScriptHelper::Cross;
    v76 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v76 + 24) = 0;
    *(v76 + 16) = "Draws a world-aligned cross. Specify origin in world space.";
    *v76 = "Cross3D";
    *(v76 + 8) = "Cross3D";
    v77 = *(v76 + 26);
    *(v76 + v77 + 27) = 3;
    *(v76 + (v77 + 1) + 27) = 1;
    *(v76 + (v77 + 2) + 27) = 5;
    *(v76 + (v77 + 3) + 27) = 5;
    *(v76 + (v77 + 4) + 27) = 5;
    *(v76 + (v77 + 5) + 27) = 5;
    *(v76 + (v77 + 6) + 27) = 6;
    v78 = v77 + 7;
    v77 += 8;
    *(v76 + v78 + 27) = 1;
    *(v76 + 26) = v77;
    v79 = v77 - 1;
    *(v76 + 25) = 0;
    if ( v79 >= 0 && *(v76 + v79 + 27) == 32 )
    {
      v80 = 1;
      do
      {
        --v79;
        v81 = v80;
        if ( v79 == -1 )
        {
          *(v76 + 25) = v80;
          goto LABEL_80;
        }
        ++v80;
      }
      while ( *(v76 + v79 + 27) == 32 );
      *(v76 + 25) = v81;
    }
LABEL_80:
    *(v76 + 64) = 1;
    *(v76 + 48) = CMemberScriptBinding8<CDebugOverlayScriptHelper *,void (CDebugOverlayScriptHelper::*)(Vector const&,float,int,int,int,int,bool,float),void,Vector const&,float,int,int,int,int,bool,float>::Call;
    *(v76 + 56) = CDebugOverlayScriptHelper::Cross3D;
    v82 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v82 + 24) = 0;
    *(v82 + 16) = "Draws an oriented cross. Specify origin in world space.";
    *v82 = "Cross3DOriented";
    *(v82 + 8) = "Cross3DOriented";
    v83 = *(v82 + 26);
    *(v82 + v83 + 27) = 3;
    *(v82 + (v83 + 1) + 27) = 4;
    *(v82 + (v83 + 2) + 27) = 1;
    *(v82 + (v83 + 3) + 27) = 5;
    *(v82 + (v83 + 4) + 27) = 5;
    *(v82 + (v83 + 5) + 27) = 5;
    *(v82 + (v83 + 6) + 27) = 5;
    *(v82 + (v83 + 7) + 27) = 6;
    v84 = v83 + 8;
    v83 += 9;
    *(v82 + v84 + 27) = 1;
    *(v82 + 26) = v83;
    v85 = v83 - 1;
    *(v82 + 25) = 0;
    if ( v85 >= 0 && *(v82 + v85 + 27) == 32 )
    {
      v86 = 1;
      do
      {
        --v85;
        v87 = v86;
        if ( v85 == -1 )
        {
          *(v82 + 25) = v86;
          goto LABEL_86;
        }
        ++v86;
      }
      while ( *(v82 + v85 + 27) == 32 );
      *(v82 + 25) = v87;
    }
LABEL_86:
    *(v82 + 64) = 1;
    *(v82 + 48) = CMemberScriptBinding9<CDebugOverlayScriptHelper *,void (CDebugOverlayScriptHelper::*)(Vector const&,Quaternion const&,float,int,int,int,int,bool,float),void,Vector const&,Quaternion const&,float,int,int,int,int,bool,float>::Call;
    *(v82 + 56) = CDebugOverlayScriptHelper::Cross3DOriented;
    v88 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v88 + 24) = 0;
    *(v88 + 16) = "Draws a filled triangle. Specify vertices in world space.";
    *v88 = "Triangle";
    *(v88 + 8) = "Triangle";
    v89 = *(v88 + 26);
    *(v88 + v89 + 27) = 3;
    *(v88 + (v89 + 1) + 27) = 3;
    *(v88 + (v89 + 2) + 27) = 3;
    *(v88 + (v89 + 3) + 27) = 5;
    *(v88 + (v89 + 4) + 27) = 5;
    *(v88 + (v89 + 5) + 27) = 5;
    *(v88 + (v89 + 6) + 27) = 5;
    *(v88 + (v89 + 7) + 27) = 6;
    v90 = v89 + 8;
    v89 += 9;
    *(v88 + v90 + 27) = 1;
    *(v88 + 26) = v89;
    v91 = v89 - 1;
    *(v88 + 25) = 0;
    if ( v91 >= 0 && *(v88 + v91 + 27) == 32 )
    {
      v92 = 1;
      do
      {
        --v91;
        v93 = v92;
        if ( v91 == -1 )
        {
          *(v88 + 25) = v92;
          goto LABEL_92;
        }
        ++v92;
      }
      while ( *(v88 + v91 + 27) == 32 );
      *(v88 + 25) = v93;
    }
LABEL_92:
    *(v88 + 64) = 1;
    *(v88 + 48) = CMemberScriptBinding9<CDebugOverlayScriptHelper *,void (CDebugOverlayScriptHelper::*)(Vector const&,Vector const&,Vector const&,int,int,int,int,bool,float),void,Vector const&,Vector const&,Vector const&,int,int,int,int,bool,float>::Call;
    *(v88 + 56) = CDebugOverlayScriptHelper::Triangle;
    v94 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v94 + 24) = 0;
    *(v94 + 16) = "Draws a circle. Specify center in world space.";
    *v94 = "Circle";
    *(v94 + 8) = "Circle";
    v95 = *(v94 + 26);
    *(v94 + v95 + 27) = 3;
    *(v94 + (v95 + 1) + 27) = 4;
    *(v94 + (v95 + 2) + 27) = 1;
    *(v94 + (v95 + 3) + 27) = 5;
    *(v94 + (v95 + 4) + 27) = 5;
    *(v94 + (v95 + 5) + 27) = 5;
    *(v94 + (v95 + 6) + 27) = 5;
    *(v94 + (v95 + 7) + 27) = 6;
    v96 = v95 + 8;
    v95 += 9;
    *(v94 + v96 + 27) = 1;
    *(v94 + 26) = v95;
    v97 = v95 - 1;
    *(v94 + 25) = 0;
    if ( v97 >= 0 && *(v94 + v97 + 27) == 32 )
    {
      v98 = 1;
      do
      {
        --v97;
        v99 = v98;
        if ( v97 == -1 )
        {
          *(v94 + 25) = v98;
          goto LABEL_98;
        }
        ++v98;
      }
      while ( *(v94 + v97 + 27) == 32 );
      *(v94 + 25) = v99;
    }
LABEL_98:
    *(v94 + 64) = 1;
    *(v94 + 48) = CMemberScriptBinding9<CDebugOverlayScriptHelper *,void (CDebugOverlayScriptHelper::*)(Vector const&,Quaternion const&,float,int,int,int,int,bool,float),void,Vector const&,Quaternion const&,float,int,int,int,int,bool,float>::Call;
    *(v94 + 56) = CDebugOverlayScriptHelper::Circle;
    v100 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v100 + 24) = 0;
    *(v100 + 16) = "Draws a circle oriented to the screen. Specify center in world space.";
    *v100 = "CircleScreenOriented";
    *(v100 + 8) = "CircleScreenOriented";
    v101 = *(v100 + 26);
    *(v100 + v101 + 27) = 3;
    *(v100 + (v101 + 1) + 27) = 1;
    *(v100 + (v101 + 2) + 27) = 5;
    *(v100 + (v101 + 3) + 27) = 5;
    *(v100 + (v101 + 4) + 27) = 5;
    *(v100 + (v101 + 5) + 27) = 5;
    *(v100 + (v101 + 6) + 27) = 6;
    v102 = v101 + 7;
    v101 += 8;
    *(v100 + v102 + 27) = 1;
    *(v100 + 26) = v101;
    v103 = v101 - 1;
    *(v100 + 25) = 0;
    if ( v103 >= 0 && *(v100 + v103 + 27) == 32 )
    {
      v104 = 1;
      do
      {
        --v103;
        v105 = v104;
        if ( v103 == -1 )
        {
          *(v100 + 25) = v104;
          goto LABEL_104;
        }
        ++v104;
      }
      while ( *(v100 + v103 + 27) == 32 );
      *(v100 + 25) = v105;
    }
LABEL_104:
    *(v100 + 64) = 1;
    *(v100 + 48) = CMemberScriptBinding8<CDebugOverlayScriptHelper *,void (CDebugOverlayScriptHelper::*)(Vector const&,float,int,int,int,int,bool,float),void,Vector const&,float,int,int,int,int,bool,float>::Call;
    *(v100 + 56) = CDebugOverlayScriptHelper::CircleScreenOriented;
    v106 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v106 + 24) = 0;
    *(v106 + 16) = "Draws a horizontal arrow. Specify endpoints in world space.";
    *v106 = "HorzArrow";
    *(v106 + 8) = "HorzArrow";
    v107 = *(v106 + 26);
    *(v106 + v107 + 27) = 3;
    *(v106 + (v107 + 1) + 27) = 3;
    *(v106 + (v107 + 2) + 27) = 1;
    *(v106 + (v107 + 3) + 27) = 5;
    *(v106 + (v107 + 4) + 27) = 5;
    *(v106 + (v107 + 5) + 27) = 5;
    *(v106 + (v107 + 6) + 27) = 5;
    *(v106 + (v107 + 7) + 27) = 6;
    v108 = v107 + 8;
    v107 += 9;
    *(v106 + v108 + 27) = 1;
    *(v106 + 26) = v107;
    v109 = v107 - 1;
    *(v106 + 25) = 0;
    if ( v109 >= 0 && *(v106 + v109 + 27) == 32 )
    {
      v110 = 1;
      do
      {
        --v109;
        v111 = v110;
        if ( v109 == -1 )
        {
          *(v106 + 25) = v110;
          goto LABEL_110;
        }
        ++v110;
      }
      while ( *(v106 + v109 + 27) == 32 );
      *(v106 + 25) = v111;
    }
LABEL_110:
    *(v106 + 64) = 1;
    *(v106 + 48) = CMemberScriptBinding9<CDebugOverlayScriptHelper *,void (CDebugOverlayScriptHelper::*)(Vector const&,Vector const&,float,int,int,int,int,bool,float),void,Vector const&,Vector const&,float,int,int,int,int,bool,float>::Call;
    *(v106 + 56) = CDebugOverlayScriptHelper::HorzArrow;
    v112 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v112 + 24) = 0;
    *(v112 + 16) = "Draws a arrow associated with a specific yaw. Specify endpoints in world space.";
    *v112 = "YawArrow";
    *(v112 + 8) = "YawArrow";
    v113 = *(v112 + 26);
    *(v112 + v113 + 27) = 3;
    *(v112 + (v113 + 1) + 27) = 1;
    *(v112 + (v113 + 2) + 27) = 1;
    *(v112 + (v113 + 3) + 27) = 1;
    *(v112 + (v113 + 4) + 27) = 5;
    *(v112 + (v113 + 5) + 27) = 5;
    *(v112 + (v113 + 6) + 27) = 5;
    *(v112 + (v113 + 7) + 27) = 5;
    *(v112 + (v113 + 8) + 27) = 6;
    v114 = v113 + 9;
    v113 += 10;
    *(v112 + v114 + 27) = 1;
    *(v112 + 26) = v113;
    v115 = v113 - 1;
    *(v112 + 25) = 0;
    if ( v115 >= 0 && *(v112 + v115 + 27) == 32 )
    {
      v116 = 1;
      do
      {
        --v115;
        v117 = v116;
        if ( v115 == -1 )
        {
          *(v112 + 25) = v116;
          goto LABEL_116;
        }
        ++v116;
      }
      while ( *(v112 + v115 + 27) == 32 );
      *(v112 + 25) = v117;
    }
LABEL_116:
    *(v112 + 64) = 1;
    *(v112 + 48) = CMemberScriptBinding10<CDebugOverlayScriptHelper *,void (CDebugOverlayScriptHelper::*)(Vector const&,float,float,float,int,int,int,int,bool,float),void,Vector const&,float,float,float,int,int,int,int,bool,float>::Call;
    *(v112 + 56) = CDebugOverlayScriptHelper::YawArrow;
    v118 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v118 + 24) = 0;
    *(v118 + 16) = "Draws a vertical arrow. Specify endpoints in world space.";
    *v118 = "VertArrow";
    *(v118 + 8) = "VertArrow";
    v119 = *(v118 + 26);
    *(v118 + v119 + 27) = 3;
    *(v118 + (v119 + 1) + 27) = 3;
    *(v118 + (v119 + 2) + 27) = 1;
    *(v118 + (v119 + 3) + 27) = 5;
    *(v118 + (v119 + 4) + 27) = 5;
    *(v118 + (v119 + 5) + 27) = 5;
    *(v118 + (v119 + 6) + 27) = 5;
    *(v118 + (v119 + 7) + 27) = 6;
    v120 = v119 + 8;
    v119 += 9;
    *(v118 + v120 + 27) = 1;
    *(v118 + 26) = v119;
    v121 = v119 - 1;
    *(v118 + 25) = 0;
    if ( v121 >= 0 && *(v118 + v121 + 27) == 32 )
    {
      v122 = 1;
      do
      {
        --v121;
        v123 = v122;
        if ( v121 == -1 )
        {
          *(v118 + 25) = v122;
          goto LABEL_122;
        }
        ++v122;
      }
      while ( *(v118 + v121 + 27) == 32 );
      *(v118 + 25) = v123;
    }
LABEL_122:
    *(v118 + 64) = 1;
    *(v118 + 48) = CMemberScriptBinding9<CDebugOverlayScriptHelper *,void (CDebugOverlayScriptHelper::*)(Vector const&,Vector const&,float,int,int,int,int,bool,float),void,Vector const&,Vector const&,float,int,int,int,int,bool,float>::Call;
    *(v118 + 56) = CDebugOverlayScriptHelper::VertArrow;
    v124 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v124 + 24) = 0;
    *(v124 + 16) = "Draws a wireframe cone. Specify endpoint and direction in world space.";
    *v124 = "Cone";
    *(v124 + 8) = "Cone";
    v125 = *(v124 + 26);
    *(v124 + v125 + 27) = 3;
    *(v124 + (v125 + 1) + 27) = 3;
    *(v124 + (v125 + 2) + 27) = 1;
    *(v124 + (v125 + 3) + 27) = 1;
    *(v124 + (v125 + 4) + 27) = 5;
    *(v124 + (v125 + 5) + 27) = 5;
    *(v124 + (v125 + 6) + 27) = 5;
    *(v124 + (v125 + 7) + 27) = 5;
    *(v124 + (v125 + 8) + 27) = 6;
    v126 = v125 + 9;
    v125 += 10;
    *(v124 + v126 + 27) = 1;
    *(v124 + 26) = v125;
    v127 = v125 - 1;
    *(v124 + 25) = 0;
    if ( v127 >= 0 && *(v124 + v127 + 27) == 32 )
    {
      v128 = 1;
      do
      {
        --v127;
        v129 = v128;
        if ( v127 == -1 )
        {
          *(v124 + 25) = v128;
          goto LABEL_128;
        }
        ++v128;
      }
      while ( *(v124 + v127 + 27) == 32 );
      *(v124 + 25) = v129;
    }
LABEL_128:
    *(v124 + 64) = 1;
    *(v124 + 48) = CMemberScriptBinding10<CDebugOverlayScriptHelper *,void (CDebugOverlayScriptHelper::*)(Vector const&,Vector const&,float,float,int,int,int,int,bool,float),void,Vector const&,Vector const&,float,float,int,int,int,int,bool,float>::Call;
    *(v124 + 56) = CDebugOverlayScriptHelper::Cone;
    v130 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v130 + 24) = 0;
    *(v130 + 16) = "Draws a solid cone. Specify endpoint and direction in world space.";
    *v130 = "SolidCone";
    *(v130 + 8) = "SolidCone";
    v131 = *(v130 + 26);
    *(v130 + v131 + 27) = 3;
    *(v130 + (v131 + 1) + 27) = 3;
    *(v130 + (v131 + 2) + 27) = 1;
    *(v130 + (v131 + 3) + 27) = 1;
    *(v130 + (v131 + 4) + 27) = 5;
    *(v130 + (v131 + 5) + 27) = 5;
    *(v130 + (v131 + 6) + 27) = 5;
    *(v130 + (v131 + 7) + 27) = 5;
    *(v130 + (v131 + 8) + 27) = 6;
    v132 = v131 + 9;
    v131 += 10;
    *(v130 + v132 + 27) = 1;
    *(v130 + 26) = v131;
    v133 = v131 - 1;
    *(v130 + 25) = 0;
    if ( v133 >= 0 && *(v130 + v133 + 27) == 32 )
    {
      v134 = 1;
      do
      {
        --v133;
        v135 = v134;
        if ( v133 == -1 )
        {
          *(v130 + 25) = v134;
          goto LABEL_134;
        }
        ++v134;
      }
      while ( *(v130 + v133 + 27) == 32 );
      *(v130 + 25) = v135;
    }
LABEL_134:
    *(v130 + 64) = 1;
    *(v130 + 48) = CMemberScriptBinding10<CDebugOverlayScriptHelper *,void (CDebugOverlayScriptHelper::*)(Vector const&,Vector const&,float,float,int,int,int,int,bool,float),void,Vector const&,Vector const&,float,float,int,int,int,int,bool,float>::Call;
    *(v130 + 56) = CDebugOverlayScriptHelper::SolidCone;
    v136 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v136 + 24) = 0;
    *(v136 + 16) = "Draws a dashed line. Specify endpoints in world space.";
    *v136 = "DrawTickMarkedLine";
    *(v136 + 8) = "DrawTickMarkedLine";
    v137 = *(v136 + 26);
    *(v136 + v137 + 27) = 3;
    *(v136 + (v137 + 1) + 27) = 3;
    *(v136 + (v137 + 2) + 27) = 1;
    *(v136 + (v137 + 3) + 27) = 5;
    *(v136 + (v137 + 4) + 27) = 5;
    *(v136 + (v137 + 5) + 27) = 5;
    *(v136 + (v137 + 6) + 27) = 5;
    *(v136 + (v137 + 7) + 27) = 5;
    *(v136 + (v137 + 8) + 27) = 6;
    v138 = v137 + 9;
    v137 += 10;
    *(v136 + v138 + 27) = 1;
    *(v136 + 26) = v137;
    v139 = v137 - 1;
    *(v136 + 25) = 0;
    if ( v139 >= 0 && *(v136 + v139 + 27) == 32 )
    {
      v140 = 1;
      do
      {
        --v139;
        v141 = v140;
        if ( v139 == -1 )
        {
          *(v136 + 25) = v140;
          goto LABEL_140;
        }
        ++v140;
      }
      while ( *(v136 + v139 + 27) == 32 );
      *(v136 + 25) = v141;
    }
LABEL_140:
    *(v136 + 64) = 1;
    *(v136 + 48) = CMemberScriptBinding10<CDebugOverlayScriptHelper *,void (CDebugOverlayScriptHelper::*)(Vector const&,Vector const&,float,int,int,int,int,int,bool,float),void,Vector const&,Vector const&,float,int,int,int,int,int,bool,float>::Call;
    *(v136 + 56) = CDebugOverlayScriptHelper::DrawTickMarkedLine;
    v142 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v142 + 24) = 0;
    *(v142 + 16) = "Draws a swept box. Specify endpoints in world space and the bounds in local space.";
    *v142 = "SweptBox";
    *(v142 + 8) = "SweptBox";
    v143 = *(v142 + 26);
    *(v142 + v143 + 27) = 3;
    *(v142 + (v143 + 1) + 27) = 3;
    *(v142 + (v143 + 2) + 27) = 3;
    *(v142 + (v143 + 3) + 27) = 3;
    *(v142 + (v143 + 4) + 27) = 4;
    *(v142 + (v143 + 5) + 27) = 5;
    *(v142 + (v143 + 6) + 27) = 5;
    *(v142 + (v143 + 7) + 27) = 5;
    *(v142 + (v143 + 8) + 27) = 5;
    v144 = v143 + 9;
    v143 += 10;
    *(v142 + v144 + 27) = 1;
    *(v142 + 26) = v143;
    v145 = v143 - 1;
    *(v142 + 25) = 0;
    if ( v145 >= 0 && *(v142 + v145 + 27) == 32 )
    {
      v146 = 1;
      do
      {
        --v145;
        v147 = v146;
        if ( v145 == -1 )
        {
          *(v142 + 25) = v146;
          goto LABEL_146;
        }
        ++v146;
      }
      while ( *(v142 + v145 + 27) == 32 );
      *(v142 + 25) = v147;
    }
LABEL_146:
    *(v142 + 64) = 1;
    *(v142 + 48) = CMemberScriptBinding10<CDebugOverlayScriptHelper *,void (CDebugOverlayScriptHelper::*)(Vector const&,Vector const&,Vector const&,Vector const&,Quaternion const&,int,int,int,int,float),void,Vector const&,Vector const&,Vector const&,Vector const&,Quaternion const&,int,int,int,int,float>::Call;
    *(v142 + 56) = CDebugOverlayScriptHelper::SweptBox;
    v148 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v148 + 24) = 0;
    *(v148 + 16) = "Toggles the overlay render type, for unit tests";
    *v148 = "UnitTestCycleOverlayRenderType";
    *(v148 + 8) = "UnitTestCycleOverlayRenderType";
    v149 = *(v148 + 26);
    *(v148 + 25) = 0;
    v150 = v149 - 1;
    if ( v150 >= 0 && *(v148 + v150 + 27) == 32 )
    {
      v151 = 1;
      do
      {
        --v150;
        v152 = v151;
        if ( v150 == -1 )
        {
          *(v148 + 25) = v151;
          goto LABEL_152;
        }
        ++v151;
      }
      while ( *(v148 + v150 + 27) == 32 );
      *(v148 + 25) = v152;
    }
LABEL_152:
    *(v148 + 56) = 609;
    *(v148 + 48) = CMemberScriptBinding0<CDebugOverlayScriptHelper *,void (ISceneViewDebugOverlays::*)(void),void>::Call;
    *(v148 + 64) = 1;
    v153 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v153 + 24) = 0;
    *(v153 + 16) = "Pushes an identifier used to group overlays. Deletes all existing overlays using this overlay id.";
    *v153 = "PushAndClearDebugOverlayScope";
    *(v153 + 8) = "PushAndClearDebugOverlayScope";
    v154 = *(v153 + 26);
    v155 = v154++;
    *(v153 + v155 + 27) = 38;
    *(v153 + 26) = v154;
    v156 = v154 - 1;
    *(v153 + 25) = 0;
    if ( v156 >= 0 && *(v153 + v156 + 27) == 32 )
    {
      v157 = 1;
      do
      {
        --v156;
        v158 = v157;
        if ( v156 == -1 )
        {
          *(v153 + 25) = v157;
          goto LABEL_158;
        }
        ++v157;
      }
      while ( *(v153 + v156 + 27) == 32 );
      *(v153 + 25) = v158;
    }
LABEL_158:
    *(v153 + 64) = 1;
    *(v153 + 48) = CMemberScriptBinding1<CDebugOverlayScriptHelper *,void (CDebugOverlayScriptHelper::*)(CUtlStringToken),void,CUtlStringToken>::Call;
    *(v153 + 56) = CDebugOverlayScriptHelper::PushAndClearDebugOverlayScope;
    v159 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v159 + 24) = 0;
    *(v159 + 16) = "Pushes an identifier used to group overlays. Overlays marked with this identifier can be deleted in a big batch.";
    *v159 = "PushDebugOverlayScope";
    *(v159 + 8) = "PushDebugOverlayScope";
    v160 = *(v159 + 26);
    v161 = v160++;
    *(v159 + v161 + 27) = 38;
    *(v159 + 26) = v160;
    v162 = v160 - 1;
    *(v159 + 25) = 0;
    if ( v162 >= 0 && *(v159 + v162 + 27) == 32 )
    {
      v163 = 1;
      do
      {
        --v162;
        v164 = v163;
        if ( v162 == -1 )
        {
          *(v159 + 25) = v163;
          goto LABEL_164;
        }
        ++v163;
      }
      while ( *(v159 + v162 + 27) == 32 );
      *(v159 + 25) = v164;
    }
LABEL_164:
    *(v159 + 56) = 561;
    *(v159 + 48) = CMemberScriptBinding1<CDebugOverlayScriptHelper *,void (ISceneViewDebugOverlays::*)(CUtlStringToken),void,CUtlStringToken>::Call;
    *(v159 + 64) = 1;
    v165 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v165 + 24) = 0;
    *(v165 + 16) = "Pops the identifier used to group overlays. Overlays marked with this identifier can be deleted in a big batch.";
    *v165 = "PopDebugOverlayScope";
    *(v165 + 8) = "PopDebugOverlayScope";
    v166 = *(v165 + 26);
    *(v165 + 25) = 0;
    v167 = v166 - 1;
    if ( v167 >= 0 && *(v165 + v167 + 27) == 32 )
    {
      v168 = 1;
      do
      {
        --v167;
        v169 = v168;
        if ( v167 == -1 )
        {
          *(v165 + 25) = v168;
          goto LABEL_170;
        }
        ++v168;
      }
      while ( *(v165 + v167 + 27) == 32 );
      *(v165 + 25) = v169;
    }
LABEL_170:
    *(v165 + 56) = 569;
    *(v165 + 48) = CMemberScriptBinding0<CDebugOverlayScriptHelper *,void (ISceneViewDebugOverlays::*)(void),void>::Call;
    *(v165 + 64) = 1;
    v170 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v170 + 24) = 0;
    *(v170 + 16) = "Removes all overlays marked with a specific identifier, regardless of their lifetime.";
    *v170 = "RemoveAllInScope";
    *(v170 + 8) = "RemoveAllInScope";
    v171 = *(v170 + 26);
    v172 = v171++;
    *(v170 + v172 + 27) = 38;
    *(v170 + 26) = v171;
    v173 = v171 - 1;
    *(v170 + 25) = 0;
    if ( v173 >= 0 && *(v170 + v173 + 27) == 32 )
    {
      v174 = 1;
      do
      {
        --v173;
        v175 = v174;
        if ( v173 == -1 )
        {
          *(v170 + 25) = v174;
          goto LABEL_176;
        }
        ++v174;
      }
      while ( *(v170 + v173 + 27) == 32 );
      *(v170 + 25) = v175;
    }
LABEL_176:
    *(v170 + 56) = 577;
    *(v170 + 48) = CMemberScriptBinding1<CDebugOverlayScriptHelper *,void (ISceneViewDebugOverlays::*)(CUtlStringToken),void,CUtlStringToken>::Call;
    *(v170 + 64) = 1;
    v176 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v176 + 24) = 0;
    *(v176 + 16) = "Draws text on an entity";
    *v176 = "EntityText";
    *(v176 + 8) = "EntityText";
    v177 = *(v176 + 26);
    *(v176 + v177 + 27) = 13;
    *(v176 + (v177 + 1) + 27) = 5;
    *(v176 + (v177 + 2) + 27) = 30;
    *(v176 + (v177 + 3) + 27) = 5;
    *(v176 + (v177 + 4) + 27) = 5;
    *(v176 + (v177 + 5) + 27) = 5;
    *(v176 + (v177 + 6) + 27) = 5;
    v178 = v177 + 7;
    v177 += 8;
    *(v176 + v178 + 27) = 1;
    *(v176 + 26) = v177;
    v179 = v177 - 1;
    *(v176 + 25) = 0;
    if ( v179 >= 0 && *(v176 + v179 + 27) == 32 )
    {
      v180 = 1;
      do
      {
        --v179;
        v181 = v180;
        if ( v179 == -1 )
        {
          *(v176 + 25) = v180;
          goto LABEL_182;
        }
        ++v180;
      }
      while ( *(v176 + v179 + 27) == 32 );
      *(v176 + 25) = v181;
    }
LABEL_182:
    *(v176 + 64) = 1;
    *(v176 + 48) = CMemberScriptBinding8<CDebugOverlayScriptHelper *,void (CDebugOverlayScriptHelper::*)(CEntityHandle,int,char const*,int,int,int,int,float),void,CEntityHandle,int,char const*,int,int,int,int,float>::Call;
    *(v176 + 56) = CDebugOverlayScriptHelper::EntityText;
    v182 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v182 + 24) = 0;
    *(v182 + 16) = "Draws bounds of an entity";
    *v182 = "EntityBounds";
    *(v182 + 8) = "EntityBounds";
    v183 = *(v182 + 26);
    *(v182 + v183 + 27) = 13;
    *(v182 + (v183 + 1) + 27) = 5;
    *(v182 + (v183 + 2) + 27) = 5;
    *(v182 + (v183 + 3) + 27) = 5;
    *(v182 + (v183 + 4) + 27) = 5;
    *(v182 + (v183 + 5) + 27) = 6;
    v184 = v183 + 6;
    v183 += 7;
    *(v182 + v184 + 27) = 1;
    *(v182 + 26) = v183;
    v185 = v183 - 1;
    *(v182 + 25) = 0;
    if ( v185 >= 0 && *(v182 + v185 + 27) == 32 )
    {
      v186 = 1;
      do
      {
        --v185;
        v187 = v186;
        if ( v185 == -1 )
        {
          *(v182 + 25) = v186;
          goto LABEL_188;
        }
        ++v186;
      }
      while ( *(v182 + v185 + 27) == 32 );
      *(v182 + 25) = v187;
    }
LABEL_188:
    *(v182 + 64) = 1;
    *(v182 + 48) = CMemberScriptBinding7<CDebugOverlayScriptHelper *,void (CDebugOverlayScriptHelper::*)(CEntityHandle,int,int,int,int,bool,float),void,CEntityHandle,int,int,int,int,bool,float>::Call;
    *(v182 + 56) = CDebugOverlayScriptHelper::EntityBounds;
    v188 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v188 + 24) = 0;
    *(v188 + 16) = "Draws the axis of the entity origin";
    *v188 = "EntityAxis";
    *(v188 + 8) = "EntityAxis";
    v189 = *(v188 + 26);
    *(v188 + v189 + 27) = 13;
    *(v188 + (v189 + 1) + 27) = 1;
    *(v188 + (v189 + 2) + 27) = 6;
    v190 = v189 + 3;
    v189 += 4;
    *(v188 + v190 + 27) = 1;
    *(v188 + 26) = v189;
    v191 = v189 - 1;
    *(v188 + 25) = 0;
    if ( v191 >= 0 && *(v188 + v191 + 27) == 32 )
    {
      v192 = 1;
      do
      {
        --v191;
        v193 = v192;
        if ( v191 == -1 )
        {
          *(v188 + 25) = v192;
          goto LABEL_194;
        }
        ++v192;
      }
      while ( *(v188 + v191 + 27) == 32 );
      *(v188 + 25) = v193;
    }
LABEL_194:
    *(v188 + 64) = 1;
    *(v188 + 48) = CMemberScriptBinding4<CDebugOverlayScriptHelper *,void (CDebugOverlayScriptHelper::*)(CEntityHandle,float,bool,float),void,CEntityHandle,float,bool,float>::Call;
    *(v188 + 56) = CDebugOverlayScriptHelper::EntityAxis;
    v194 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v194 + 24) = 0;
    *(v194 + 16) = "Draws the skeleton of the entity";
    *v194 = "EntitySkeleton";
    *(v194 + 8) = "EntitySkeleton";
    v195 = *(v194 + 26);
    *(v194 + v195 + 27) = 13;
    v196 = v195 + 1;
    v195 += 2;
    *(v194 + v196 + 27) = 1;
    *(v194 + 26) = v195;
    v197 = v195 - 1;
    *(v194 + 25) = 0;
    if ( v197 >= 0 && *(v194 + v197 + 27) == 32 )
    {
      v198 = 1;
      do
      {
        --v197;
        v199 = v198;
        if ( v197 == -1 )
        {
          *(v194 + 25) = v198;
          goto LABEL_200;
        }
        ++v198;
      }
      while ( *(v194 + v197 + 27) == 32 );
      *(v194 + 25) = v199;
    }
LABEL_200:
    *(v194 + 64) = 1;
    *(v194 + 48) = CMemberScriptBinding2<CDebugOverlayScriptHelper *,void (CDebugOverlayScriptHelper::*)(CEntityHandle,float),void,CEntityHandle,float>::Call;
    *(v194 + 56) = CDebugOverlayScriptHelper::EntitySkeleton;
    v200 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v200 + 24) = 0;
    *(v200 + 16) = "Draws the attachments of the entity";
    *v200 = "EntityAttachments";
    *(v200 + 8) = "EntityAttachments";
    v201 = *(v200 + 26);
    *(v200 + v201 + 27) = 13;
    *(v200 + (v201 + 1) + 27) = 1;
    v202 = v201 + 2;
    v201 += 3;
    *(v200 + v202 + 27) = 1;
    *(v200 + 26) = v201;
    v203 = v201 - 1;
    *(v200 + 25) = 0;
    if ( v203 >= 0 && *(v200 + v203 + 27) == 32 )
    {
      v204 = 1;
      do
      {
        --v203;
        v205 = v204;
        if ( v203 == -1 )
        {
          *(v200 + 25) = v204;
          goto LABEL_206;
        }
        ++v204;
      }
      while ( *(v200 + v203 + 27) == 32 );
      *(v200 + 25) = v205;
    }
LABEL_206:
    *(v200 + 64) = 1;
    *(v200 + 48) = CMemberScriptBinding3<CDebugOverlayScriptHelper *,void (CDebugOverlayScriptHelper::*)(CEntityHandle,float,float),void,CEntityHandle,float,float>::Call;
    *(v200 + 56) = CDebugOverlayScriptHelper::EntityAttachments;
    return v2;
  }
  return result;
}


