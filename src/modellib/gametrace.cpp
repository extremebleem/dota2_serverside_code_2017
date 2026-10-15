// Reconstructed from DWARF by pahole; not original source.

// src/modellib/gametrace.cpp:9
class CDefaultHitbox : public CHitBox {
public:

	char m_tempName[16];  // +0x74
	char m_tempBoneName[16];  // +0x84
	char m_tempSurfaceProp[16];  // +0x94
	CDefaultHitbox();

	// sizeof = 168
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_gametrace.cpp  (line 0, @0x0000000001a6b0c0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_gametrace_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// SetTraceResultsEmptySurfaceProp  (line 36, @0x000000000315c3e0, libserver.so)
// callers: CPhysicsGameSystem::GameInit
// globals: g_pDefaultSurfaceprop
void __fastcall SetTraceResultsEmptySurfaceProp(const CPhysSurfaceProperties *pProp)
{
  g_pDefaultSurfaceprop = pProp;
}


// CGameTrace::Init  (line 41, @0x000000000315c3f0, libserver.so)  // inlines: CDefaultHitbox, CHitBox, CUtlString, Color, Init, MakeStringToken, SetBoneName, SetColor, V_strcpy_safe<16ul>, ~CHitBox, ~CUtlString
// calls: operator new, SetIdentityMatrix, _V_strncpy, CUtlString::Set, MurmurHash2LowerCase, RegisterStringToken, CUtlString::FreeMemoryBlock, operator delete, _Unwind_Resume
// callers: CHitboxSystem::TestHitboxes, CHitboxSystem::TestHitboxesMultiple, CBaseEntity::HandleShotImpactingWater, CBaseEntity::FireBullets, CBaseEntity::TraceBleed, CLightQueryVisibilityTest::QueryVisibility, CDecalGameSystem::OnShootDecal, CEntityDebugGameSystem::AddDebugLine, GetLightForTrace, Script_TraceCollideable, Script_TraceHull, Script_TraceLine (229 total)
// strings: "invalid_hitbox", "invalid_bone", "default"
// globals: g_pDefaultHitbox, g_pDefaultSurfaceprop
void __fastcall CGameTrace::Init(CGameTrace_2 *const this)
{
  CDefaultHitbox *v2; // r12
  const CPhysSurfaceProperties *v3; // rax
  __int64 v4; // rdx
  vec_t z; // eax
  uint32 v6; // eax
  uint32 pValue; // [rsp+10h] [rbp-40h]
  char *pString; // [rsp+18h] [rbp-38h]

  v2 = g_pDefaultHitbox;
  if ( g_pDefaultHitbox == 0 )
  {
    v2 = operator new(0xA8u);
    v2->m_nHitBoxIndex = 0;
    v2->m_name.m_pString = 0;
    v2->m_sSurfaceProperty.m_pString = 0;
    v2->m_sBoneName.m_pString = 0;
    v2->m_nBoneNameHash = 0;
    v2->m_nGroupId = 0;
    v2->m_cRenderColor._color[0] = -1;
    v2->m_cRenderColor._color[1] = -1;
    v2->m_cRenderColor._color[2] = -1;
    v2->m_cRenderColor._color[3] = -1;
    v2->m_bForcedTransform = 0;
    v2->m_bTranslationOnly = 0;
    v2->m_bVisible = 0;
    v4 = *&vec3_origin.x;
    v2->m_bSelected = 0;
    z = vec3_origin.z;
    *&v2->m_vMinBounds.x = v4;
    v2->m_vMinBounds.z = z;
    *&v2->m_vMaxBounds.x = v4;
    v2->m_vMaxBounds.z = z;
    SetIdentityMatrix(&v2->m_forcedTransform);
    _V_strncpy(v2->m_tempName, "invalid_hitbox", 16);
    pString = v2->m_tempBoneName;
    _V_strncpy(v2->m_tempBoneName, "invalid_bone", 16);
    _V_strncpy(v2->m_tempSurfaceProp, "default", 16);
    CUtlString::Set(&v2->m_name, v2->m_tempName);
    CUtlString::Set(&v2->m_sSurfaceProperty, v2->m_tempSurfaceProp);
    v2->m_nGroupId = 0;
    CUtlString::Set(&v2->m_sBoneName, v2->m_tempBoneName);
    v6 = 0;
    if ( v2->m_tempBoneName[0] != 0 )
    {
      pValue = MurmurHash2LowerCase(pString, 0x31415926u);
      if ( g_bUpdateStringTokenDatabase )
        RegisterStringToken(pValue, pString, 0, 1);
      v6 = pValue;
    }
    v2->m_nBoneNameHash = v6;
    v2->m_cRenderColor._color[0] = 0;
    v2->m_cRenderColor._color[1] = 0;
    v2->m_cRenderColor._color[2] = 0;
    v2->m_cRenderColor._color[3] = 0;
    v2->m_nHitBoxIndex = 0;
    v2->m_vMinBounds.x = 0.0;
    v2->m_vMinBounds.y = 0.0;
    v2->m_vMinBounds.z = 0.0;
    v2->m_vMaxBounds.x = 0.0;
    v2->m_vMaxBounds.y = 0.0;
    v2->m_vMaxBounds.z = 0.0;
    g_pDefaultHitbox = v2;
  }
  v3 = g_pDefaultSurfaceprop;
  this->fraction = 1.0;
  this->startsolid = 0;
  this->contents = 0;
  this->plane.normal.x = 0.0;
  this->plane.normal.y = 0.0;
  this->plane.normal.z = 0.0;
  this->plane.dist = 0.0;
  this->m_pSurfaceProperties = v3;
  this->m_pEnt = 0;
  this->m_pHitbox = v2;
  this->m_hBody = 0;
  this->m_hShape = 0;
  *&this->hitboxBoneIndex = 0xFFFF;
}


