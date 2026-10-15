
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEmptySequence::~CEmptySequence  (line 18, @0x0000000003145b00, libserver.so)  // inlines: ~IBaseSequence, ~ISequence, ~IVSSequence
void __fastcall CEmptySequence::~CEmptySequence(CEmptySequence *const this)
{
  this->_vptr_IBaseSequence = off_47C52D0;
}


// CEmptySequence::~CEmptySequence  (line 18, @0x0000000003145fc0, libserver.so)  // inlines: ~CEmptySequence, ~IBaseSequence, ~ISequence, ~IVSSequence
// calls: operator delete
void __fastcall CEmptySequence::~CEmptySequence(CEmptySequence *const this)
{
  this->_vptr_IBaseSequence = off_47C52D0;
  operator delete(this);
}


// CEmptySequence::GetName  (line 19, @0x0000000003145b10, libserver.so)
const char *__fastcall CEmptySequence::GetName(const CEmptySequence *const this)
{
  return "";
}


// CEmptySequence::GetModel  (line 20, @0x0000000003145b20, libserver.so)
const CModel *__fastcall CEmptySequence::GetModel(const CEmptySequence *const this)
{
  return 0;
}


// CEmptySequence::IsLooping  (line 21, @0x0000000003145b30, libserver.so)
bool __fastcall CEmptySequence::IsLooping(const CEmptySequence *const this)
{
  return 0;
}


// CEmptySequence::IsMulti  (line 22, @0x0000000003145b40, libserver.so)
bool __fastcall CEmptySequence::IsMulti(const CEmptySequence *const this)
{
  return 0;
}


// CEmptySequence::IsDelta  (line 23, @0x0000000003145b50, libserver.so)
bool __fastcall CEmptySequence::IsDelta(const CEmptySequence *const this)
{
  return 0;
}


// CEmptySequence::IsHidden  (line 24, @0x0000000003145b60, libserver.so)
bool __fastcall CEmptySequence::IsHidden(const CEmptySequence *const this)
{
  return 0;
}


// CEmptySequence::IsAutoplay  (line 25, @0x0000000003145b70, libserver.so)
bool __fastcall CEmptySequence::IsAutoplay(const CEmptySequence *const this)
{
  return 0;
}


// CEmptySequence::IsSnapped  (line 26, @0x0000000003145b80, libserver.so)
bool __fastcall CEmptySequence::IsSnapped(const CEmptySequence *const this)
{
  return 0;
}


// CEmptySequence::IsVScript  (line 27, @0x0000000003145b90, libserver.so)
bool __fastcall CEmptySequence::IsVScript(const CEmptySequence *const this)
{
  return 0;
}


// CEmptySequence::IsAnimation  (line 28, @0x0000000003145ba0, libserver.so)
bool __fastcall CEmptySequence::IsAnimation(const CEmptySequence *const this)
{
  return 0;
}


// CEmptySequence::IsFrameCacheable  (line 29, @0x0000000003145bb0, libserver.so)
bool __fastcall CEmptySequence::IsFrameCacheable(const CEmptySequence *const this)
{
  return 0;
}


// CEmptySequence::KeyValueText  (line 30, @0x0000000003145bc0, libserver.so)
const char *__fastcall CEmptySequence::KeyValueText(const CEmptySequence *const this)
{
  return "";
}


// CEmptySequence::NumEvents  (line 31, @0x0000000003145bd0, libserver.so)
int __fastcall CEmptySequence::NumEvents(const CEmptySequence *const this)
{
  return 0;
}


// CEmptySequence::GetEvent  (line 32, @0x0000000003145be0, libserver.so)
const AnimEvent_t *__fastcall CEmptySequence::GetEvent(const CEmptySequence *const this, int index)
{
  return 0;
}


// CEmptySequence::GetMaxBounds  (line 33, @0x0000000003145bf0, libserver.so)  // inlines: operator=
void __fastcall CEmptySequence::GetMaxBounds(const CEmptySequence *const this, Vector *pVecMins, Vector *pVecMaxs)
{
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4

  x = vec3_origin.x;
  y = vec3_origin.y;
  z = vec3_origin.z;
  pVecMins->x = vec3_origin.x;
  pVecMins->y = y;
  pVecMins->z = z;
  pVecMaxs->x = x;
  pVecMaxs->y = y;
  pVecMaxs->z = z;
}


// CEmptySequence::GetAllAnimations  (line 34, @0x0000000003145c30, libserver.so)
bool __fastcall CEmptySequence::GetAllAnimations(const CEmptySequence *const this, AnimRefVector_t *const animRef)
{
  return 0;
}


// CEmptySequence::GetAllSequences  (line 35, @0x0000000003145c40, libserver.so)
bool __fastcall CEmptySequence::GetAllSequences(
        const CEmptySequence *const this,
        CUtlVector<HSequence,CUtlMemory<HSequence,int> > *const seqRef)
{
  return 0;
}


// CEmptySequence::NumActivities  (line 36, @0x0000000003145c50, libserver.so)
int __fastcall CEmptySequence::NumActivities(const CEmptySequence *const this)
{
  return 0;
}


// CEmptySequence::GetActivityName  (line 37, @0x0000000003145c60, libserver.so)
const char *__fastcall CEmptySequence::GetActivityName(const CEmptySequence *const this, int index)
{
  return "";
}


// CEmptySequence::GetActivityWeight  (line 38, @0x0000000003145c70, libserver.so)
float __fastcall CEmptySequence::GetActivityWeight(const CEmptySequence *const this, int index)
{
  return 0.0;
}


// CEmptySequence::GetActivityType  (line 39, @0x0000000003145c80, libserver.so)
Activity __fastcall CEmptySequence::GetActivityType(const CEmptySequence *const this, int index)
{
  return -1;
}


// CEmptySequence::SetActivityType  (line 40, @0x0000000003145c90, libserver.so)
void __fastcall CEmptySequence::SetActivityType(const CEmptySequence *const this, Activity iActivity)
{
  ;
}


// CEmptySequence::SetActivityType  (line 41, @0x0000000003145ca0, libserver.so)
void __fastcall CEmptySequence::SetActivityType(const CEmptySequence *const this, int index, Activity iActivity)
{
  ;
}


// CEmptySequence::NumIKRules  (line 42, @0x0000000003145cb0, libserver.so)
int __fastcall CEmptySequence::NumIKRules(const CEmptySequence *const this)
{
  return 0;
}


// CEmptySequence::CreateIKFootstepRule  (line 43, @0x0000000003145cc0, libserver.so)
void __fastcall CEmptySequence::CreateIKFootstepRule(
        CEmptySequence *const this,
        const char *pszIkChainName,
        double a3,
        const float flHeight,
        const float flFloor)
{
  ;
}


// CEmptySequence::CreateIKTouchRule  (line 44, @0x0000000003145cd0, libserver.so)
void __fastcall CEmptySequence::CreateIKTouchRule(
        CEmptySequence *const this,
        const char *pszIkChainName,
        const char *pszBoneName)
{
  ;
}


// CEmptySequence::NumIKLocks  (line 45, @0x0000000003145ce0, libserver.so)
int __fastcall CEmptySequence::NumIKLocks(const CEmptySequence *const this)
{
  return 0;
}


// CEmptySequence::GetIKLock  (line 46, @0x0000000003145cf0, libserver.so)
const SeqResourceIKLock_t *__fastcall CEmptySequence::GetIKLock(const CEmptySequence *const this, int nIndex)
{
  return 0;
}


// CEmptySequence::NumPoseParameters  (line 47, @0x0000000003145d00, libserver.so)
int __fastcall CEmptySequence::NumPoseParameters(const CEmptySequence *const this)
{
  return 0;
}


// CEmptySequence::GetPoseParameter  (line 48, @0x0000000003145d10, libserver.so)
int __fastcall CEmptySequence::GetPoseParameter(const CEmptySequence *const this, int index)
{
  return 0;
}


// CEmptySequence::NumPoseSettings  (line 49, @0x0000000003145d20, libserver.so)
int __fastcall CEmptySequence::NumPoseSettings(const CEmptySequence *const this)
{
  return 0;
}


// CEmptySequence::GetPoseSettingName  (line 50, @0x0000000003145d30, libserver.so)
const char *__fastcall CEmptySequence::GetPoseSettingName(const CEmptySequence *const this, int index)
{
  return 0;
}


// CEmptySequence::GetPoseSettingValue  (line 51, @0x0000000003145d40, libserver.so)
float __fastcall CEmptySequence::GetPoseSettingValue(const CEmptySequence *const this, int index)
{
  return 0.0;
}


// CEmptySequence::DoAnimation  (line 52, @0x0000000003145d50, libserver.so)
void __fastcall CEmptySequence::DoAnimation(
        const CEmptySequence *const this,
        CAnimationBucket *const baseResult,
        double a3,
        float flCycle,
        float flWeight)
{
  ;
}


// CEmptySequence::IsFlagSet  (line 53, @0x0000000003145d60, libserver.so)
bool __fastcall CEmptySequence::IsFlagSet(const CEmptySequence *const this, int nFlagMask)
{
  return 0;
}


// CEmptySequence::SetFlag  (line 54, @0x0000000003145d70, libserver.so)
void __fastcall CEmptySequence::SetFlag(const CEmptySequence *const this, int nFlagMask)
{
  ;
}


// CEmptySequence::ClearFlag  (line 55, @0x0000000003145d80, libserver.so)
void __fastcall CEmptySequence::ClearFlag(const CEmptySequence *const this, int nFlagMask)
{
  ;
}


// CEmptySequence::GetFadeInTime  (line 56, @0x0000000003145d90, libserver.so)
float __fastcall CEmptySequence::GetFadeInTime(const CEmptySequence *const this)
{
  return 0.0;
}


// CEmptySequence::GetFadeOutTime  (line 57, @0x0000000003145da0, libserver.so)
float __fastcall CEmptySequence::GetFadeOutTime(const CEmptySequence *const this)
{
  return 0.0;
}


// CEmptySequence::GetNextSequence  (line 58, @0x0000000003145db0, libserver.so)
HSequence __fastcall CEmptySequence::GetNextSequence(
        const CEmptySequence *const this,
        HSequence hDestinationSequence,
        int *pDir)
{
  return hDestinationSequence;
}


// CEmptySequence::GetNodeFlags  (line 59, @0x0000000003145dc0, libserver.so)
int __fastcall CEmptySequence::GetNodeFlags(const CEmptySequence *const this)
{
  return 0;
}


// CEmptySequence::GetRagdollBoneWeights  (line 60, @0x0000000003145dd0, libserver.so)
const float *__fastcall CEmptySequence::GetRagdollBoneWeights(const CEmptySequence *const this)
{
  return 0;
}


// CEmptySequence::EntryNode  (line 61, @0x0000000003145de0, libserver.so)
int __fastcall CEmptySequence::EntryNode(const CEmptySequence *const this)
{
  return 0;
}


// CEmptySequence::ExitNode  (line 62, @0x0000000003145df0, libserver.so)
int __fastcall CEmptySequence::ExitNode(const CEmptySequence *const this)
{
  return 0;
}


// CEmptySequence::SetEntryNode  (line 63, @0x0000000003145e00, libserver.so)
void __fastcall CEmptySequence::SetEntryNode(CEmptySequence *const this, int a2)
{
  ;
}


// CEmptySequence::SetExitNode  (line 64, @0x0000000003145e10, libserver.so)
void __fastcall CEmptySequence::SetExitNode(CEmptySequence *const this, int a2)
{
  ;
}


// CEmptySequence::SetEventIndex  (line 65, @0x0000000003145e20, libserver.so)
void __fastcall CEmptySequence::SetEventIndex(const CEmptySequence *const this, int nEvent, int nIndex)
{
  ;
}


// CEmptySequence::AddEventTypeFlags  (line 66, @0x0000000003145e30, libserver.so)
void __fastcall CEmptySequence::AddEventTypeFlags(const CEmptySequence *const this, int nEvent, int nTypeFlags)
{
  ;
}


// CEmptySequence::RemoveEventTypeFlags  (line 67, @0x0000000003145e40, libserver.so)
void __fastcall CEmptySequence::RemoveEventTypeFlags(const CEmptySequence *const this, int nEvent, int nTypeFlags)
{
  ;
}


// CEmptySequence::BuildBlendlist  (line 68, @0x0000000003145e50, libserver.so)
void __fastcall CEmptySequence::BuildBlendlist(
        const CEmptySequence *const this,
        CAnimationBlendList *pBlendList,
        const float *flPoseParameterArray)
{
  ;
}


// CEmptySequence::GetAssetInfo  (line 69, @0x0000000003145e60, libserver.so)
bool __fastcall CEmptySequence::GetAssetInfo(const CEmptySequence *const this, CSequenceAssetInfo *const info)
{
  return 0;
}


// CEmptySequence::MaxFrame  (line 72, @0x0000000003145e70, libserver.so)
int __fastcall CEmptySequence::MaxFrame(const CEmptySequence *const this, const float *poseParameter)
{
  return 0;
}


// CEmptySequence::FPS  (line 73, @0x0000000003145e80, libserver.so)
float __fastcall CEmptySequence::FPS(const CEmptySequence *const this, const float *poseParameter)
{
  return 30.0;
}


// CEmptySequence::CPS  (line 74, @0x0000000003145e90, libserver.so)
float __fastcall CEmptySequence::CPS(const CEmptySequence *const this, const float *poseParameter)
{
  return 0.033333335;
}


// CEmptySequence::Duration  (line 75, @0x0000000003145ea0, libserver.so)
float __fastcall CEmptySequence::Duration(const CEmptySequence *const this, const float *poseParameter)
{
  return 0.0;
}


// CEmptySequence::MovementAndDuration  (line 77, @0x0000000003145eb0, libserver.so)  // inlines: Init
float __fastcall CEmptySequence::MovementAndDuration(
        const CEmptySequence *const this,
        float flCycleFrom,
        float flCycleTo,
        const float *poseParameter,
        Vector *const deltaPos)
{
  deltaPos->x = 0.0;
  deltaPos->y = 0.0;
  deltaPos->z = 0.0;
  return 0.0;
}


// CEmptySequence::TotalMovementAndDuration  (line 78, @0x0000000003145ed0, libserver.so)  // inlines: Init
float __fastcall CEmptySequence::TotalMovementAndDuration(
        const CEmptySequence *const this,
        const float *poseParameter,
        Vector *const deltaPos)
{
  deltaPos->x = 0.0;
  deltaPos->y = 0.0;
  deltaPos->z = 0.0;
  return 0.0;
}


// CEmptySequence::Movement  (line 80, @0x0000000003145ef0, libserver.so)  // inlines: Init
__int64 __fastcall CEmptySequence::Movement(
        const CEmptySequence *const this,
        float flCycleFrom,
        float flCycleTo,
        const float *poseParameter,
        Vector *const deltaMovement,
        QAngle *const deltaAngle)
{
  deltaMovement->x = 0.0;
  deltaMovement->y = 0.0;
  deltaMovement->z = 0.0;
  deltaAngle->x = 0.0;
  deltaAngle->y = 0.0;
  deltaAngle->z = 0.0;
  return 0;
}


// CEmptySequence::Velocity  (line 81, @0x0000000003145f20, libserver.so)  // inlines: Init
__int64 __fastcall CEmptySequence::Velocity(
        const CEmptySequence *const this,
        float flCycle,
        const float *poseParameter,
        Vector *const vecVelocity)
{
  vecVelocity->x = 0.0;
  vecVelocity->y = 0.0;
  vecVelocity->z = 0.0;
  return 0;
}


// CEmptySequence::FindDistance  (line 82, @0x0000000003145f40, libserver.so)
float __fastcall CEmptySequence::FindDistance(
        const CEmptySequence *const this,
        const float *poseParameter,
        double a3,
        float flDist)
{
  return 0.0;
}


// CEmptySequence::LookupPoseSetting  (line 84, @0x0000000003145f50, libserver.so)
int __fastcall CEmptySequence::LookupPoseSetting(const CEmptySequence *const this, const char *pPoseName)
{
  return -1;
}


