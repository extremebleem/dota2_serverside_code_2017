
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IParticleSystemQuery::IsEditor  (line 1186, @0x0000000002302a60, libserver.so)
bool __fastcall IParticleSystemQuery::IsEditor(IParticleSystemQuery *const this)
{
  return 0;
}


// IParticleSystemQuery::ArePointsInControllingObjectHitBoxes  (line 1195, @0x0000000002302a70, libserver.so)
bool __fastcall IParticleSystemQuery::ArePointsInControllingObjectHitBoxes(
        IParticleSystemQuery *const this,
        IParticleCollection *pParticles,
        int nControlPointNumber,
        int nNumPtsIn,
        Vector *pPntsIn,
        bool *pInside,
        bool bBBoxOnly,
        const char *pszHitboxSetName)
{
  return 0;
}


// IParticleSystemQuery::GetRayTraceEnvironmentFromName  (line 1204, @0x0000000002302a80, libserver.so)
int __fastcall IParticleSystemQuery::GetRayTraceEnvironmentFromName(
        IParticleSystemQuery *const this,
        const char *pszRtEnvName)
{
  return 0;
}


// IParticleSystemQuery::GetCollisionGroupFromName  (line 1209, @0x0000000002302a90, libserver.so)
int __fastcall IParticleSystemQuery::GetCollisionGroupFromName(
        IParticleSystemQuery *const this,
        const char *pszCollisionGroupName)
{
  return 0;
}


// IParticleSystemQuery::GetControllingObjectHitBoxTransforms  (line 1225, @0x0000000002302aa0, libserver.so)
int __fastcall IParticleSystemQuery::GetControllingObjectHitBoxTransforms(
        IParticleSystemQuery *const this,
        IParticleCollection *pParticles,
        int nControlPointNumber,
        const CHitBoxSet *pSet,
        int nMaxTransforms,
        matrix3x4a_t *pHitBoxToWorldTransforms)
{
  return 0;
}


// IParticleSystemQuery::GetControllingObjectBoneInfo  (line 1236, @0x0000000002302ab0, libserver.so)
int __fastcall IParticleSystemQuery::GetControllingObjectBoneInfo(
        IParticleSystemQuery *const this,
        IParticleCollection *pParticles,
        int nControlPointNumber,
        int nBufSize,
        ModelHitBoxInfo_t *pHitBoxOutputBuffer)
{
  return 0;
}


// IParticleSystemQuery::GetControllingObjectOBBox  (line 1246, @0x0000000002302ac0, libserver.so)  // inlines: operator=
void __fastcall IParticleSystemQuery::GetControllingObjectOBBox(
        IParticleSystemQuery *const this,
        IParticleCollection *pParticles,
        int nControlPointNumber,
        Vector *const vecMin,
        Vector *const vecMax)
{
  vec_t x; // xmm0_4
  vec_t z; // xmm1_4

  x = vec3_origin.x;
  vecMax->y = vec3_origin.y;
  z = vec3_origin.z;
  vecMax->x = x;
  vecMax->z = z;
  vecMin->x = x;
  vecMin->y = vecMax->y;
  vecMin->z = vecMax->z;
}


// IParticleSystemQuery::GetControllingObjectBoneTransform  (line 1253, @0x0000000002302b10, libserver.so)
matrix3x4_t *__fastcall IParticleSystemQuery::GetControllingObjectBoneTransform(
        matrix3x4_t *__return_ptr retstr,
        IParticleSystemQuery *const this,
        IParticleCollection *pParticles,
        int nControlPointNumber,
        int nBone)
{
  __int64 v6; // rdx

  *&retstr->m_flMatVal[0][0] = *&g_MatrixIdentity.m_flMatVal[0][0];
  *&retstr->m_flMatVal[0][2] = *&g_MatrixIdentity.m_flMatVal[0][2];
  *&retstr->m_flMatVal[1][0] = *&g_MatrixIdentity.m_flMatVal[1][0];
  v6 = *&g_MatrixIdentity.m_flMatVal[2][2];
  *&retstr->m_flMatVal[2][0] = *&g_MatrixIdentity.m_flMatVal[2][0];
  *&retstr->m_flMatVal[2][2] = v6;
  return retstr;
}


// IParticleSystemQuery::GetLocalPlayerPos  (line 1265, @0x0000000002302b50, libserver.so)
Vector __fastcall IParticleSystemQuery::GetLocalPlayerPos(IParticleSystemQuery *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&vec3_origin.x;
  result.z = vec3_origin.z;
  return result;
}


// IParticleSystemQuery::GetLocalPlayerEyeVectors  (line 1271, @0x0000000002302b70, libserver.so)  // inlines: operator=
void __fastcall IParticleSystemQuery::GetLocalPlayerEyeVectors(
        IParticleSystemQuery *const this,
        Vector *pForward,
        Vector *pRight,
        Vector *pUp)
{
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4

  x = vec3_origin.x;
  y = vec3_origin.y;
  z = vec3_origin.z;
  pForward->x = vec3_origin.x;
  pForward->y = y;
  pForward->z = z;
  if ( pRight != 0 )
  {
    pRight->x = x;
    pRight->y = y;
    pRight->z = z;
  }
  if ( pUp != 0 )
    *pUp = vec3_origin;
}


// IParticleSystemQuery::GetActivityCount  (line 1293, @0x0000000002302bd0, libserver.so)
int __fastcall IParticleSystemQuery::GetActivityCount(IParticleSystemQuery *const this)
{
  return 0;
}


// IParticleSystemQuery::GetActivityNameFromIndex  (line 1295, @0x0000000002302be0, libserver.so)
const char *__fastcall IParticleSystemQuery::GetActivityNameFromIndex(
        IParticleSystemQuery *const this,
        int nActivityIndex)
{
  return 0;
}


// IParticleSystemQuery::GetActivityNumber  (line 1297, @0x0000000002302bf0, libserver.so)
__int64 __fastcall IParticleSystemQuery::GetActivityNumber(
        IParticleSystemQuery *const this,
        HModel hModel,
        const char *m_pszActivityName)
{
  return 0xFFFFFFFFLL;
}


// IParticleSystemQuery::GetSequenceFromModel  (line 1299, @0x0000000002302c00, libserver.so)
HSequence __fastcall IParticleSystemQuery::GetSequenceFromModel(
        IParticleSystemQuery *const this,
        IParticleCollection *pParticles,
        int nControlPoint,
        float *flAnimTime)
{
  return -1;
}


// IParticleSystemQuery::GetScaleFromCPObject  (line 1301, @0x0000000002302c10, libserver.so)
float __fastcall IParticleSystemQuery::GetScaleFromCPObject(
        IParticleSystemQuery *const this,
        IParticleCollection *pParticles,
        int nControlPointNumber)
{
  return 1.0;
}


// IParticleSystemQuery::GetPointVisibilityPercentage  (line 1303, @0x0000000002302c20, libserver.so)
float __fastcall IParticleSystemQuery::GetPointVisibilityPercentage(
        IParticleSystemQuery *const this,
        Vector *const vecPosition,
        float *const flRadius)
{
  return 1.0;
}


// IParticleSystemQuery::GetModelFromCPObject  (line 1307, @0x00000000023083a0, libserver.so)  // inlines: Init, operator=
void __fastcall IParticleSystemQuery::GetModelFromCPObject(
        IParticleSystemQuery *const this,
        IParticleCollection *pParticles,
        int nControlPointNumber,
        int nEconSlot,
        bool bOriginalModel,
        ParticleModelQueryInfo_t *pInfoOut)
{
  pInfoOut->m_hModel.m_pBinding = 0;
  pInfoOut->m_meshGroupMask = -1;
}


// IParticleSystemQuery::UpdateProjectedTexture  (line 1309, @0x0000000002302c30, libserver.so)
void __fastcall IParticleSystemQuery::UpdateProjectedTexture(
        IParticleSystemQuery *const this,
        const ParticleProjectedTextureInfo_t *const info,
        HProjectedTexture *const hTextureHandle)
{
  ;
}


// IParticleSystemQuery::DeleteProjectedTexture  (line 1310, @0x0000000002302c40, libserver.so)
void __fastcall IParticleSystemQuery::DeleteProjectedTexture(
        IParticleSystemQuery *const this,
        HProjectedTexture hTextureHandle)
{
  ;
}


// IParticleSystemQuery::UpdateDeferredLight  (line 1312, @0x0000000002302c50, libserver.so)
CSceneObject *__fastcall IParticleSystemQuery::UpdateDeferredLight(
        IParticleSystemQuery *const this,
        ISceneWorld *pSceneWorld,
        HRenderTexture hTexture,
        Vector *const vOrigin,
        float flRadius,
        Vector4D *const vColor,
        float flLightDistance,
        float flStartFalloff,
        float flDistanceFalloff,
        Vector vDirection,
        float flSpotFoV,
        float flAlphaPoint,
        HDeferredLight *const hLightHandle)
{
  return 0;
}


// IParticleSystemQuery::DeleteDeferredLight  (line 1315, @0x0000000002302c60, libserver.so)
void __fastcall IParticleSystemQuery::DeleteDeferredLight(
        IParticleSystemQuery *const this,
        HDeferredLight hLightHandle)
{
  ;
}


// IParticleSystemQuery::UpdateSoundPatch  (line 1317, @0x0000000002302c70, libserver.so)
void __fastcall IParticleSystemQuery::UpdateSoundPatch(
        IParticleSystemQuery *const this,
        const char *pSoundName,
        Vector *const vOrigin,
        float flSoundLevel,
        float flPitch,
        float flVolume,
        float flLifespan,
        int nChannel,
        void **const pUserVar)
{
  ;
}


// IParticleSystemQuery::DeleteParticleSound  (line 1318, @0x0000000002302c80, libserver.so)
void __fastcall IParticleSystemQuery::DeleteParticleSound(IParticleSystemQuery *const this, void **const pUserVar)
{
  ;
}


// IParticleSystemQuery::SetClothForceVector  (line 1320, @0x0000000002302c90, libserver.so)
void __fastcall IParticleSystemQuery::SetClothForceVector(
        IParticleSystemQuery *const this,
        ClothForceVector_t Param,
        Vector *const vValue,
        void **const pUserVar)
{
  ;
}


// IParticleSystemQuery::SetClothForceFloat  (line 1321, @0x0000000002302ca0, libserver.so)
void __fastcall IParticleSystemQuery::SetClothForceFloat(
        IParticleSystemQuery *const this,
        ClothForceFloat_t Param,
        float flValue,
        void **const pUserVar)
{
  ;
}


// IParticleSystemQuery::ForceBoneSetup  (line 1323, @0x0000000002302cb0, libserver.so)
void __fastcall IParticleSystemQuery::ForceBoneSetup(
        IParticleSystemQuery *const this,
        IParticleCollection *pParticles,
        int nControlPointNumber)
{
  ;
}


// IParticleSystemQuery::ScreenShakeGlobal  (line 1325, @0x0000000002302cc0, libserver.so)
void __fastcall IParticleSystemQuery::ScreenShakeGlobal(
        IParticleSystemQuery *const this,
        const Vector *const center,
        double a3,
        float amplitude,
        float frequency,
        float duration,
        float radius)
{
  ;
}


// IParticleSystemQuery::ScreenShakeLocal  (line 1327, @0x0000000002302cd0, libserver.so)
void __fastcall IParticleSystemQuery::ScreenShakeLocal(
        IParticleSystemQuery *const this,
        IParticleCollection *pParticles,
        int nControlPointNumber,
        double a4,
        double a5,
        double a6,
        float localAmplitude,
        float frequency,
        float duration)
{
  ;
}


// IParticleSystemQuery::GetEconLoadoutTypeCount  (line 1329, @0x0000000002302ce0, libserver.so)
int __fastcall IParticleSystemQuery::GetEconLoadoutTypeCount(IParticleSystemQuery *const this)
{
  return -1;
}


// IParticleSystemQuery::GetEconSlotName  (line 1330, @0x0000000002302cf0, libserver.so)
const char *__fastcall IParticleSystemQuery::GetEconSlotName(IParticleSystemQuery *const this, int nSlotType)
{
  return 0;
}


// IParticleSystemQuery::GetEconLoadoutSlotType  (line 1331, @0x0000000002302d00, libserver.so)
int __fastcall IParticleSystemQuery::GetEconLoadoutSlotType(IParticleSystemQuery *const this, const char *pszName)
{
  return -1;
}


// IParticleSystemQuery::GetWindVelocityAtLocation  (line 1333, @0x0000000002302d10, libserver.so)
Vector __fastcall IParticleSystemQuery::GetWindVelocityAtLocation(
        IParticleSystemQuery *const this,
        const Vector *const vecPosition)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&vec3_origin.x;
  result.z = vec3_origin.z;
  return result;
}


// IParticleSystemQuery::GetAnimDecodeRealTime  (line 1335, @0x00000000023058c0, libserver.so)
// calls: Plat_FloatTime
float32 __fastcall IParticleSystemQuery::GetAnimDecodeRealTime(const IParticleSystemQuery *const this)
{
  return Plat_FloatTime();
}


// IParticleSystemQuery::GetTimeOfDayValue  (line 1340, @0x0000000002302d30, libserver.so)
Vector __fastcall IParticleSystemQuery::GetTimeOfDayValue(
        const IParticleSystemQuery *const this,
        CUtlStringToken token,
        const Vector *const vDefault)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&vDefault->x;
  result.z = vDefault->z;
  return result;
}


// IParticleSystemQuery::GetControllingObjectRenderBounds  (line 1342, @0x0000000002302d50, libserver.so)  // inlines: operator=
void __fastcall IParticleSystemQuery::GetControllingObjectRenderBounds(
        IParticleSystemQuery *const this,
        IParticleCollection *pParticles,
        int nControlPointNumber,
        Vector *pVecOBBMin,
        Vector *pVecOBBMax,
        matrix3x4_t *pObjectToWorld)
{
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  __int64 v9; // rdx
  __int64 v10; // rax

  x = vec3_origin.x;
  y = vec3_origin.y;
  z = vec3_origin.z;
  pVecOBBMin->x = vec3_origin.x;
  pVecOBBMin->y = y;
  pVecOBBMin->z = z;
  pVecOBBMax->x = x;
  pVecOBBMax->y = y;
  v9 = *&g_MatrixIdentity.m_flMatVal[0][0];
  pVecOBBMax->z = z;
  *&pObjectToWorld->m_flMatVal[0][0] = v9;
  *&pObjectToWorld->m_flMatVal[0][2] = *&g_MatrixIdentity.m_flMatVal[0][2];
  *&pObjectToWorld->m_flMatVal[1][0] = *&g_MatrixIdentity.m_flMatVal[1][0];
  v10 = *&g_MatrixIdentity.m_flMatVal[2][2];
  *&pObjectToWorld->m_flMatVal[2][0] = *&g_MatrixIdentity.m_flMatVal[2][0];
  *&pObjectToWorld->m_flMatVal[2][2] = v10;
}


// IParticleSystemQuery::IsPointUnderWater  (line 1351, @0x0000000002302dc0, libserver.so)
bool __fastcall IParticleSystemQuery::IsPointUnderWater(
        IParticleSystemQuery *const this,
        IParticleCollection *pParticles,
        float *const flWaterHeight,
        double a4,
        float a5)
{
  *flWaterHeight = 0.0;
  return a5 < 0.0;
}


// IParticleSystemQuery::AddGrassFlattenEvent  (line 1357, @0x0000000002302de0, libserver.so)
void __fastcall IParticleSystemQuery::AddGrassFlattenEvent(
        IParticleSystemQuery *const this,
        ISceneWorld *pSceneWorld,
        const Vector *const vPositionWs,
        float flRadius,
        const Vector *const vDirectionWs,
        float flAmount)
{
  ;
}


// IParticleSystemQuery::AddShakeTreesInRadiusEvent  (line 1358, @0x0000000002302df0, libserver.so)
void __fastcall IParticleSystemQuery::AddShakeTreesInRadiusEvent(
        IParticleSystemQuery *const this,
        const Vector *const vCenterPosition,
        const Vector *const vLinearDirection,
        float flLinearInfluence,
        float flRadialInfluence,
        float flTwistInfluence,
        float flRadius,
        float flStrength,
        float flShakeDuration,
        float flInfluence)
{
  ;
}


