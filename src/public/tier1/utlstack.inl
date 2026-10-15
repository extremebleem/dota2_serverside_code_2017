
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CUtlStack<JSONParserMessageField_t, CUtlMemory<JSONParserMessageField_t, int> >::~CUtlStack  (line 113, @0x0000000001a74c50, libserver.so)  // inlines: Clear, Purge, ResetDbgInfo, ~CUtlMemory
// calls: CUtlMemory<JSONParserMessageField_t, int>::Purge
// callers: ProtoBufHelper::ParseJSON
void __fastcall CUtlStack<JSONParserMessageField_t,CUtlMemory<JSONParserMessageField_t,int>>::~CUtlStack(
        CUtlStack<JSONParserMessageField_t,CUtlMemory<JSONParserMessageField_t,int> > *const this)
{
  bool v2; // zf

  this->m_Size = 0;
  if ( (this->m_Memory.m_nGrowSize & 0xC0000000) != 0 )
  {
    this->m_pElements = this->m_Memory.m_pMemory;
  }
  else
  {
    CUtlMemory<JSONParserMessageField_t,int>::Purge(&this->m_Memory);
    v2 = (this->m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_pElements = this->m_Memory.m_pMemory;
    if ( v2 )
      CUtlMemory<JSONParserMessageField_t,int>::Purge(&this->m_Memory);
  }
}


// CUtlStack<CRender::ViewStack_t, CUtlMemory<CRender::ViewStack_t, int> >::~CUtlStack  (line 113, @0x0000000001f898d0, libserver.so)  // inlines: Clear, Purge, ResetDbgInfo, ~CUtlMemory
// calls: CUtlMemory<CRender::ViewStack_t, int>::Purge
// callers: CRenderGameSystem::~CRenderGameSystem, CRender::CRender
void __fastcall CUtlStack<CRender::ViewStack_t,CUtlMemory<CRender::ViewStack_t,int>>::~CUtlStack(
        CUtlStack<CRender::ViewStack_t,CUtlMemory<CRender::ViewStack_t,int> > *const this)
{
  bool v2; // zf

  this->m_Size = 0;
  if ( (this->m_Memory.m_nGrowSize & 0xC0000000) != 0 )
  {
    this->m_pElements = this->m_Memory.m_pMemory;
  }
  else
  {
    CUtlMemory<CRender::ViewStack_t,int>::Purge(&this->m_Memory);
    v2 = (this->m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_pElements = this->m_Memory.m_pMemory;
    if ( v2 )
      CUtlMemory<CRender::ViewStack_t,int>::Purge(&this->m_Memory);
  }
}


// CUtlStack<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlStack  (line 113, @0x000000000256b250, libserver.so)  // inlines: Clear, Purge, ResetDbgInfo, ~CUtlMemory
// calls: CUtlMemory<short unsigned int, int>::Purge
// callers: CDOTAFogOfWarTempViewers::~CDOTAFogOfWarTempViewers, CDOTAFogOfWarTempViewers::CDOTAFogOfWarTempViewers, CFoW::CFoW, CFoW::~CFoW
void __fastcall CUtlStack<unsigned short,CUtlMemory<unsigned short,int>>::~CUtlStack(
        CUtlStack<short unsigned int,CUtlMemory<short unsigned int,int> > *const this)
{
  bool v2; // zf

  this->m_Size = 0;
  if ( (this->m_Memory.m_nGrowSize & 0xC0000000) != 0 )
  {
    this->m_pElements = this->m_Memory.m_pMemory;
  }
  else
  {
    CUtlMemory<unsigned short,int>::Purge(&this->m_Memory);
    v2 = (this->m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_pElements = this->m_Memory.m_pMemory;
    if ( v2 )
      CUtlMemory<unsigned short,int>::Purge(&this->m_Memory);
  }
}


// CUtlStack<CDOTA_BotAction*, CUtlMemory<CDOTA_BotAction*, int> >::~CUtlStack  (line 113, @0x0000000002812e20, libserver.so)  // inlines: Clear, Purge, ResetDbgInfo, ~CUtlMemory
// calls: CUtlMemory<CDOTA_BotAction*, int>::Purge
// callers: CDOTA_Bot::CDOTA_Bot, CDOTA_Bot::~CDOTA_Bot
void __fastcall CUtlStack<CDOTA_BotAction *,CUtlMemory<CDOTA_BotAction *,int>>::~CUtlStack(
        CUtlStack<CDOTA_BotAction*,CUtlMemory<CDOTA_BotAction*,int> > *const this)
{
  bool v2; // zf

  this->m_Size = 0;
  if ( (this->m_Memory.m_nGrowSize & 0xC0000000) != 0 )
  {
    this->m_pElements = this->m_Memory.m_pMemory;
  }
  else
  {
    CUtlMemory<CDOTA_BotAction *,int>::Purge(&this->m_Memory);
    v2 = (this->m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_pElements = this->m_Memory.m_pMemory;
    if ( v2 )
      CUtlMemory<CDOTA_BotAction *,int>::Purge(&this->m_Memory);
  }
}


// CUtlStack<float, CUtlMemory<float, int> >::~CUtlStack  (line 113, @0x00000000031b4f60, libserver.so)  // inlines: Clear, Purge, ResetDbgInfo, ~CUtlMemory
// calls: CUtlMemory<float, int>::Purge
// callers: CExpressionCalculator::Evaluate
void __fastcall CUtlStack<float,CUtlMemory<float,int>>::~CUtlStack(CUtlStack<float,CUtlMemory<float,int> > *const this)
{
  bool v2; // zf

  this->m_Size = 0;
  if ( (this->m_Memory.m_nGrowSize & 0xC0000000) != 0 )
  {
    this->m_pElements = this->m_Memory.m_pMemory;
  }
  else
  {
    CUtlMemory<float,int>::Purge(&this->m_Memory);
    v2 = (this->m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_pElements = this->m_Memory.m_pMemory;
    if ( v2 )
      CUtlMemory<float,int>::Purge(&this->m_Memory);
  }
}


// CUtlStack<CRender::ViewStack_t, CUtlMemory<CRender::ViewStack_t, int> >::Push  (line 254, @0x0000000001f974d0, libserver.so)  // inlines: CViewSetup, Construct<CRender::ViewStack_t>, Element, GrowStack, Init, ResetDbgInfo, ViewStack_t, operator[]
// calls: CUtlMemory<CRender::ViewStack_t, int>::Grow, CFrustum::CFrustum
// callers: CRender::CRender, CRender::Push3DView, CRender::Push2DView
int __fastcall CUtlStack<CRender::ViewStack_t,CUtlMemory<CRender::ViewStack_t,int>>::Push(
        CUtlStack<CRender::ViewStack_t,CUtlMemory<CRender::ViewStack_t,int> > *const this)
{
  int m_Size; // edx
  CRender::ViewStack_t *m_pMemory; // rcx
  int v4; // eax
  CRender::ViewStack_t *v5; // rbx
  char v6; // al

  m_Size = this->m_Size;
  if ( m_Size >= this->m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CRender::ViewStack_t,int>::Grow(&this->m_Memory, 1);
    m_Size = this->m_Size;
  }
  m_pMemory = this->m_Memory.m_pMemory;
  v4 = m_Size + 1;
  this->m_Size = m_Size + 1;
  this->m_pElements = m_pMemory;
  v5 = &m_pMemory[m_Size];
  if ( v5 != 0 )
  {
    CFrustum::CFrustum(&v5->m_View.m_calculatedFrustum);
    v6 = *(&v5->m_View + 1193);
    v5->m_View.m_flAspectRatio = 0.0;
    v5->m_View.m_flNearBlurDepth = 20.0;
    v5->m_View.m_flNearFocusDepth = 100.0;
    v5->m_View.m_flFarFocusDepth = 250.0;
    v5->m_View.m_flFarBlurDepth = 1000.0;
    v5->m_View.m_flNearBlurRadius = 10.0;
    v5->m_View.m_flFarBlurRadius = 5.0;
    v5->m_View.m_nDoFQuality = 0;
    v5->m_View.m_nMotionBlurMode = MotionBlurMode_t::MOTION_BLUR_GAME;
    *(&v5->m_View + 1192) = 4;
    v5->m_View.m_bCustomViewMatrix = 0;
    v5->m_View.m_vShutterOpenPosition.x = 0.0;
    v5->m_View.m_vShutterOpenPosition.y = 0.0;
    v5->m_View.m_vShutterOpenPosition.z = 0.0;
    v5->m_View.m_vShutterClosePosition.x = 0.0;
    v5->m_View.m_vShutterClosePosition.y = 0.0;
    v5->m_View.m_vShutterClosePosition.z = 0.0;
    v5->m_View.origin.x = 0.0;
    v5->m_View.origin.y = 0.0;
    v5->m_View.origin.z = 0.0;
    v5->m_View.angles.x = 0.0;
    v5->m_View.angles.y = 0.0;
    v5->m_View.angles.z = 0.0;
    v5->m_View.origin3DSkyBox.x = 0.0;
    v5->m_View.origin3DSkyBox.y = 0.0;
    v5->m_View.origin3DSkyBox.z = 0.0;
    v5->m_View.originBeforeVr.x = 0.0;
    v5->m_View.originBeforeVr.y = 0.0;
    v5->m_View.originBeforeVr.z = 0.0;
    v5->m_View.anglesBeforeVr.x = 0.0;
    v5->m_View.anglesBeforeVr.y = 0.0;
    v5->m_View.anglesBeforeVr.z = 0.0;
    v5->m_View.m_pFogParams = 0;
    v5->m_View.m_pFogParams3DSkyBox = 0;
    v5->m_View.m_nOverrideLODLevel = -1;
    v5->m_View.m_bEnableRadialDistortion = 0;
    v5->m_View.m_flRadialDistortionK2 = 0.0;
    v5->m_View.m_flRadialDistortionK1 = 0.0;
    v5->m_View.m_flPreDistortionRenderSizeFactor = 1.0;
    *(&v5->m_View + 1193) = v6 & 0xF8;
    v5->m_View.m_vecCenterShift.x = 0.0;
    v5->m_View.m_vecCenterShift.y = 0.0;
    v5->m_View.m_vecProjectionArea.x = 0.0;
    v5->m_View.m_vecProjectionArea.y = 0.0;
    v4 = this->m_Size;
  }
  return v4 - 1;
}


// CUtlStack<JSONParserMessageField_t, CUtlMemory<JSONParserMessageField_t, int> >::Push  (line 266, @0x0000000001a74f30, libserver.so)  // inlines: CopyConstruct<JSONParserMessageField_t>, Element, GrowStack, ResetDbgInfo, operator[]
// calls: CUtlMemory<JSONParserMessageField_t, int>::Grow
// callers: JSONParserCallback, ProtoBufHelper::ParseJSON
int __fastcall CUtlStack<JSONParserMessageField_t,CUtlMemory<JSONParserMessageField_t,int>>::Push(
        CUtlStack<JSONParserMessageField_t,CUtlMemory<JSONParserMessageField_t,int> > *const this,
        const JSONParserMessageField_t *const src)
{
  __int64 m_Size; // rdx
  JSONParserMessageField_t *m_pMemory; // rcx
  int v6; // eax
  JSONParserMessageField_t *v7; // rdx

  m_Size = this->m_Size;
  if ( m_Size >= this->m_Memory.m_nAllocationCount )
  {
    CUtlMemory<JSONParserMessageField_t,int>::Grow(&this->m_Memory, 1);
    m_Size = this->m_Size;
  }
  m_pMemory = this->m_Memory.m_pMemory;
  v6 = m_Size + 1;
  this->m_Size = m_Size + 1;
  v7 = &m_pMemory[m_Size];
  this->m_pElements = m_pMemory;
  if ( v7 != 0 )
  {
    v7->pMessage = src->pMessage;
    v7->pField = src->pField;
    *&v7->nArrayIndex = *&src->nArrayIndex;
    v6 = this->m_Size;
  }
  return v6 - 1;
}


// CUtlStack<short unsigned int, CUtlMemory<short unsigned int, int> >::Push  (line 266, @0x000000000257b190, libserver.so)  // inlines: CopyConstruct<short unsigned int>, Element, GrowStack, ResetDbgInfo, operator[]
// calls: CUtlMemory<short unsigned int, int>::Grow
// callers: CDOTAFogOfWarTempViewers::ThinkUpdateFogOfWar, CDOTAFogOfWarTempViewers::CDOTAFogOfWarTempViewers, CFoW::RemoveViewer, CFoW::SetSize, CFoW::AddViewer
int __fastcall CUtlStack<unsigned short,CUtlMemory<unsigned short,int>>::Push(
        CUtlStack<short unsigned int,CUtlMemory<short unsigned int,int> > *const this,
        const unsigned __int16 *const src)
{
  __int64 m_Size; // rdx
  unsigned __int16 *m_pMemory; // rcx
  int v6; // eax
  unsigned __int16 *v7; // rdx

  m_Size = this->m_Size;
  if ( m_Size >= this->m_Memory.m_nAllocationCount )
  {
    CUtlMemory<unsigned short,int>::Grow(&this->m_Memory, 1);
    m_Size = this->m_Size;
  }
  m_pMemory = this->m_Memory.m_pMemory;
  v6 = m_Size + 1;
  this->m_Size = m_Size + 1;
  v7 = &m_pMemory[m_Size];
  this->m_pElements = m_pMemory;
  if ( v7 != 0 )
  {
    *v7 = *src;
    v6 = this->m_Size;
  }
  return v6 - 1;
}


// CUtlStack<CDOTA_BotAction*, CUtlMemory<CDOTA_BotAction*, int> >::Push  (line 266, @0x0000000002814b60, libserver.so)  // inlines: CopyConstruct<CDOTA_BotAction*>, Element, GrowStack, ResetDbgInfo, operator[]
// calls: CUtlMemory<CDOTA_BotAction*, int>::Grow
// callers: CDOTA_Bot::PushAction, CDOTA_Bot::SetAction
int __fastcall CUtlStack<CDOTA_BotAction *,CUtlMemory<CDOTA_BotAction *,int>>::Push(
        CUtlStack<CDOTA_BotAction*,CUtlMemory<CDOTA_BotAction*,int> > *const this,
        CDOTA_BotAction *const *const src)
{
  __int64 m_Size; // rdx
  CDOTA_BotAction **m_pMemory; // rcx
  int v6; // eax
  CDOTA_BotAction **v7; // rdx

  m_Size = this->m_Size;
  if ( m_Size >= this->m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CDOTA_BotAction *,int>::Grow(&this->m_Memory, 1);
    m_Size = this->m_Size;
  }
  m_pMemory = this->m_Memory.m_pMemory;
  v6 = m_Size + 1;
  this->m_Size = m_Size + 1;
  v7 = &m_pMemory[m_Size];
  this->m_pElements = m_pMemory;
  if ( v7 != 0 )
  {
    *v7 = *src;
    v6 = this->m_Size;
  }
  return v6 - 1;
}


// CUtlStack<float, CUtlMemory<float, int> >::Push  (line 266, @0x00000000031b51b0, libserver.so)  // inlines: CopyConstruct<float>, Element, GrowStack, ResetDbgInfo, operator[]
// calls: CUtlMemory<float, int>::Grow
// callers: CExpressionCalculator::Eval3ArgFunc, CExpressionCalculator::EvalPrimary, CExpressionCalculator::EvalUnary, CExpressionCalculator::EvalDivMul, CExpressionCalculator::EvalAddSub, CExpressionCalculator::EvalLessGreater, CExpressionCalculator::EvalEquality, CExpressionCalculator::EvalAnd, CExpressionCalculator::EvalOr, CExpressionCalculator::EvalConditional, CExpressionCalculator::Eval1ArgFunc, CExpressionCalculator::Eval2ArgFunc (13 total)
int __fastcall CUtlStack<float,CUtlMemory<float,int>>::Push(
        CUtlStack<float,CUtlMemory<float,int> > *const this,
        const float *const src)
{
  __int64 m_Size; // rdx
  float *m_pMemory; // rcx
  int v6; // eax
  float *v7; // rdx

  m_Size = this->m_Size;
  if ( m_Size >= this->m_Memory.m_nAllocationCount )
  {
    CUtlMemory<float,int>::Grow(&this->m_Memory, 1);
    m_Size = this->m_Size;
  }
  m_pMemory = this->m_Memory.m_pMemory;
  v6 = m_Size + 1;
  this->m_Size = m_Size + 1;
  v7 = &m_pMemory[m_Size];
  this->m_pElements = m_pMemory;
  if ( v7 != 0 )
  {
    *v7 = *src;
    v6 = this->m_Size;
  }
  return v6 - 1;
}


