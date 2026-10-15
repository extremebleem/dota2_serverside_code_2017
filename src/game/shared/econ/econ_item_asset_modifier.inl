
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CAssetModifier::Init  (line 107, @0x0000000002e4e560, libserver.so)
void __fastcall CAssetModifier::Init(CAssetModifier *const this, IEconItemSchema *pSchema)
{
  ;
}


// CAssetModifier::Precache  (line 112, @0x0000000002e4e570, libserver.so)
void __fastcall CAssetModifier::Precache(const CAssetModifier *const this, const CEntityPrecacheContext *pContext)
{
  ;
}


// CAssetModifier::Compare  (line 113, @0x0000000002e4fcf0, libserver.so)  // inlines: GetAsset
// calls: CUtlString::Get, V_stricmp_fast
bool __fastcall CAssetModifier::Compare(const CAssetModifier *const this, const char *pszAsset)
{
  const char *v3; // rax

  v3 = CUtlString::Get(&this->m_strAsset);
  return V_stricmp_fast(v3, pszAsset) == 0;
}


// createAssetModifierType<CActivityModifier>  (line 170, @0x0000000002e577a0, libserver.so)  // inlines: ActivityList_IndexForName, CActivityModifier, GetActivityName, GetAsset, GetBool, Init
// calls: operator new, CAssetModifier::CAssetModifier, CUtlString::Get, V_stricmp_fast, KeyValues::GetInt, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CActivityModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx
  const char *v9; // rax
  int v10; // edx
  const char *v11; // rax
  bool v12; // dl
  const char *v13; // rax
  KeyValues *m_pKV; // rdi
  bool v15; // zf

  v8 = operator new(0x38u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  *(&v8->m_nPriority + 1) = -1;
  v8->_vptr_CAssetModifier = off_479E510;
  v9 = CUtlString::Get(&v8->m_strAsset);
  v10 = -1;
  if ( g_pAnimationSystem != 0 )
    v10 = (*(*g_pAnimationSystem + 304LL))(g_pAnimationSystem, v9);
  *(&v8->m_nPriority + 1) = v10;
  v11 = CUtlString::Get(&v8->m_strAsset);
  v12 = 0;
  if ( v11 != 0 )
  {
    v13 = CUtlString::Get(&v8->m_strAsset);
    v12 = V_stricmp_fast(v13, "ALL") == 0;
  }
  m_pKV = v8->m_pKV;
  LOBYTE(v8[1]._vptr_CAssetModifier) = v12;
  v15 = KeyValues::GetInt(m_pKV, "gesture", 0) == 0;
  BYTE1(v8[1]._vptr_CAssetModifier) = !v15;
  return v8;
}


// createAssetModifierType<CAnnouncerModifier>  (line 170, @0x0000000002e57890, libserver.so)  // inlines: CAnnouncerModifier
// calls: operator new, CAssetModifier::CAssetModifier, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CAnnouncerModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v8->_vptr_CAssetModifier = off_479E570;
  return v8;
}


// createAssetModifierType<CAnnouncerPreviewModifier>  (line 170, @0x0000000002e57900, libserver.so)  // inlines: CAnnouncerPreviewModifier
// calls: operator new, CAssetModifier::CAssetModifier, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CAnnouncerPreviewModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v8->_vptr_CAssetModifier = off_479E5D0;
  return v8;
}


// createAssetModifierType<CHudSkinModifier>  (line 170, @0x0000000002e57970, libserver.so)  // inlines: CHudSkinModifier, GetHudCycleStyleName, GetModifier, Init
// calls: operator new, CAssetModifier::CAssetModifier, CUtlString::Get, V_stricmp_fast, operator delete, _Unwind_Resume
// strings: "day_night"
CAssetModifier *__fastcall createAssetModifierType<CHudSkinModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx
  const char *v9; // rax

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v8->_vptr_CAssetModifier = off_479E630;
  v9 = CUtlString::Get(&v8->m_strModifier);
  *(&v8->m_nPriority + 1) = V_stricmp_fast(v9, "day_night") == 0;
  return v8;
}


// createAssetModifierType<CAbilityNameModifier>  (line 170, @0x0000000002e57a10, libserver.so)  // inlines: CAbilityNameModifier
// calls: operator new, CAssetModifier::CAssetModifier, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CAbilityNameModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v8->_vptr_CAssetModifier = off_479E6F0;
  return v8;
}


// createAssetModifierType<CSoundModifier>  (line 170, @0x0000000002e57a80, libserver.so)  // inlines: CSoundModifier
// calls: operator new, CAssetModifier::CAssetModifier, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CSoundModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v8->_vptr_CAssetModifier = off_47A40B0;
  return v8;
}


// createAssetModifierType<CSpeechModifier>  (line 170, @0x0000000002e57af0, libserver.so)  // inlines: CSpeechModifier
// calls: operator new, CAssetModifier::CAssetModifier, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CSpeechModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v8->_vptr_CAssetModifier = off_479EA50;
  return v8;
}


// createAssetModifierType<CParticleModifier>  (line 170, @0x0000000002e57b60, libserver.so)  // inlines: CParticleModifier
// calls: operator new, CAssetModifier::CAssetModifier, CParticleModifier::Init, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CParticleModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CParticleModifier *v8; // rbx

  v8 = operator new(0x38u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v8->_vptr_CAssetModifier = off_47A4170;
  CParticleModifier::Init(v8, pSchema);
  return v8;
}


// createAssetModifierType<CParticleCombined>  (line 170, @0x0000000002e57be0, libserver.so)  // inlines: CParticleCombined, CParticleModifier, Init
// calls: operator new, CAssetModifier::CAssetModifier, KeyValues::GetInt, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CParticleCombined>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx
  KeyValues *m_pKV; // rdi

  v8 = operator new(0x38u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  m_pKV = v8->m_pKV;
  v8->_vptr_CAssetModifier = off_479EED0;
  HIDWORD(v8[1]._vptr_CAssetModifier) = KeyValues::GetInt(m_pKV, "order", 0);
  return v8;
}


// createAssetModifierType<CParticleCreateModifier>  (line 170, @0x0000000002e57c70, libserver.so)  // inlines: CParticleCreateModifier
// calls: operator new, CAssetModifier::CAssetModifier, CParticleCreateModifier::Init, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CParticleCreateModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CParticleCreateModifier *v8; // rbx

  v8 = operator new(0x38u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v8->_vptr_CAssetModifier = off_47A41D0;
  CParticleCreateModifier::Init(v8, pSchema);
  return v8;
}


// createAssetModifierType<CParticleSnapshotModifier>  (line 170, @0x0000000002e57cf0, libserver.so)  // inlines: CParticleSnapshotModifier
// calls: operator new, CAssetModifier::CAssetModifier, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CParticleSnapshotModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v8->_vptr_CAssetModifier = off_479EF30;
  return v8;
}


// createAssetModifierType<CParticleControlPointModifier>  (line 170, @0x0000000002e57d60, libserver.so)  // inlines: CParticleControlPointModifier, Init
// calls: operator new, CAssetModifier::CAssetModifier, KeyValues::GetInt, KeyValues::GetString, UTIL_StringToVector, operator delete, _Unwind_Resume
// strings: "control_point_number", "0 0 0", "cp_position"
CAssetModifier *__fastcall createAssetModifierType<CParticleControlPointModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  void *v8; // rbx
  KeyValues *v9; // rdi
  int Int; // eax
  KeyValues *v11; // rdi
  const char *String; // rax

  v8 = operator new(0x40u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v9 = *(v8 + 4);
  *v8 = off_479EF90;
  Int = KeyValues::GetInt(v9, "control_point_number", 0);
  v11 = *(v8 + 4);
  *(v8 + 11) = Int;
  String = KeyValues::GetString(v11, "cp_position", "0 0 0", 0, 0);
  UTIL_StringToVector(v8 + 12, String);
  return v8;
}


// createAssetModifierType<CModelModifier>  (line 170, @0x0000000002e57e10, libserver.so)  // inlines: CModelModifier
// calls: operator new, CAssetModifier::CAssetModifier, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CModelModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v8->_vptr_CAssetModifier = off_47A3F90;
  return v8;
}


// createAssetModifierType<CEntityModelModifier>  (line 170, @0x0000000002e57e80, libserver.so)  // inlines: CEntityModelModifier, CModelModifier
// calls: operator new, CAssetModifier::CAssetModifier, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CEntityModelModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v8->_vptr_CAssetModifier = off_479EC90;
  return v8;
}


// createAssetModifierType<CCourierModifier>  (line 170, @0x0000000002e57ef0, libserver.so)  // inlines: CCourierModifier, CModelModifier
// calls: operator new, CAssetModifier::CAssetModifier, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CCourierModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v8->_vptr_CAssetModifier = off_479E870;
  return v8;
}


// createAssetModifierType<CCourierFlyingModifier>  (line 170, @0x0000000002e57f60, libserver.so)  // inlines: CCourierFlyingModifier, CModelModifier
// calls: operator new, CAssetModifier::CAssetModifier, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CCourierFlyingModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v8->_vptr_CAssetModifier = off_479E8D0;
  return v8;
}


// createAssetModifierType<CHeroModelChangeModifier>  (line 170, @0x0000000002e57fd0, libserver.so)  // inlines: CHeroModelChangeModifier, CModelModifier, Init
// calls: operator new, CAssetModifier::CAssetModifier, KeyValues::GetInt, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CHeroModelChangeModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx
  KeyValues *m_pKV; // rdi

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  m_pKV = v8->m_pKV;
  v8->_vptr_CAssetModifier = off_479E930;
  *(&v8->m_nPriority + 1) = KeyValues::GetInt(m_pKV, "skin", 0);
  return v8;
}


// createAssetModifierType<CHexModelModifier>  (line 170, @0x0000000002e58060, libserver.so)  // inlines: CHexModelModifier, CModelModifier
// calls: operator new, CAssetModifier::CAssetModifier, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CHexModelModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v8->_vptr_CAssetModifier = off_479E990;
  return v8;
}


// createAssetModifierType<CEntityScaleModifier>  (line 170, @0x0000000002e580d0, libserver.so)  // inlines: CEntityScaleModifier, Init
// calls: operator new, CAssetModifier::CAssetModifier, KeyValues::GetFloat, operator delete, _Unwind_Resume
// strings: "scale_size"
CAssetModifier *__fastcall createAssetModifierType<CEntityScaleModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx
  KeyValues *m_pKV; // rdi
  float v10; // xmm1_4
  float Float; // xmm0_4

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  m_pKV = v8->m_pKV;
  v8->_vptr_CAssetModifier = off_479ECF0;
  Float = KeyValues::GetFloat(m_pKV, "scale_size", v10);
  *(&v8->m_nPriority + 1) = Float;
  return v8;
}


// createAssetModifierType<CIconModifier>  (line 170, @0x0000000002e58160, libserver.so)  // inlines: CIconModifier, Init
// calls: operator new, CAssetModifier::CAssetModifier, KeyValues::GetInt, operator delete, _Unwind_Resume
// strings: "force_display"
CAssetModifier *__fastcall createAssetModifierType<CIconModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx
  KeyValues *m_pKV; // rdi

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  m_pKV = v8->m_pKV;
  v8->_vptr_CAssetModifier = off_479EAB0;
  *(&v8->m_nPriority + 1) = KeyValues::GetInt(m_pKV, "force_display", 0);
  return v8;
}


// createAssetModifierType<CIconModifier_Hero>  (line 170, @0x0000000002e581f0, libserver.so)  // inlines: CIconModifier, CIconModifier_Hero, Init
// calls: operator new, CAssetModifier::CAssetModifier, KeyValues::GetInt, operator delete, _Unwind_Resume
// strings: "force_display"
CAssetModifier *__fastcall createAssetModifierType<CIconModifier_Hero>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx
  KeyValues *m_pKV; // rdi

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  m_pKV = v8->m_pKV;
  v8->_vptr_CAssetModifier = off_479EB10;
  *(&v8->m_nPriority + 1) = KeyValues::GetInt(m_pKV, "force_display", 0);
  return v8;
}


// createAssetModifierType<CIconModifier_HeroMinimap>  (line 170, @0x0000000002e58280, libserver.so)  // inlines: CIconModifier, CIconModifier_HeroMinimap, Init
// calls: operator new, CAssetModifier::CAssetModifier, KeyValues::GetInt, operator delete, _Unwind_Resume
// strings: "force_display"
CAssetModifier *__fastcall createAssetModifierType<CIconModifier_HeroMinimap>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx
  KeyValues *m_pKV; // rdi

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  m_pKV = v8->m_pKV;
  v8->_vptr_CAssetModifier = off_479EB70;
  *(&v8->m_nPriority + 1) = KeyValues::GetInt(m_pKV, "force_display", 0);
  return v8;
}


// createAssetModifierType<CInventoryIconModifier>  (line 170, @0x0000000002e58310, libserver.so)  // inlines: CInventoryIconModifier, Init
// calls: operator new, CAssetModifier::CAssetModifier, KeyValues::GetInt, operator delete, _Unwind_Resume
// strings: "force_display"
CAssetModifier *__fastcall createAssetModifierType<CInventoryIconModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx
  KeyValues *m_pKV; // rdi

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  m_pKV = v8->m_pKV;
  v8->_vptr_CAssetModifier = off_479EBD0;
  *(&v8->m_nPriority + 1) = KeyValues::GetInt(m_pKV, "force_display", 0);
  return v8;
}


// createAssetModifierType<CAbilityIconModifier>  (line 170, @0x0000000002e583a0, libserver.so)  // inlines: CAbilityIconModifier
// calls: operator new, CAssetModifier::CAssetModifier, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CAbilityIconModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v8->_vptr_CAssetModifier = off_479EC30;
  return v8;
}


// createAssetModifierType<CLoadingScreenModifier>  (line 170, @0x0000000002e58410, libserver.so)  // inlines: CLoadingScreenModifier
// calls: operator new, CAssetModifier::CAssetModifier, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CLoadingScreenModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v8->_vptr_CAssetModifier = off_479E750;
  return v8;
}


// createAssetModifierType<CResponseCriteriaModifier>  (line 170, @0x0000000002e58480, libserver.so)  // inlines: CResponseCriteriaModifier
// calls: operator new, CAssetModifier::CAssetModifier, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CResponseCriteriaModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v8->_vptr_CAssetModifier = off_479EFF0;
  return v8;
}


// createAssetModifierType<CCustomKillEffectModifier>  (line 170, @0x0000000002e584f0, libserver.so)  // inlines: CCustomKillEffectModifier
// calls: operator new, CAssetModifier::CAssetModifier, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CCustomKillEffectModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v8->_vptr_CAssetModifier = off_479EE10;
  return v8;
}


// createAssetModifierType<CSoundscapeModifier>  (line 170, @0x0000000002e58560, libserver.so)  // inlines: CSoundscapeModifier
// calls: operator new, CAssetModifier::CAssetModifier, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CSoundscapeModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v8->_vptr_CAssetModifier = off_479E9F0;
  return v8;
}


// createAssetModifierType<CWeatherModifier>  (line 170, @0x0000000002e585d0, libserver.so)  // inlines: CWeatherModifier, Init
// calls: operator new, CAssetModifier::CAssetModifier, KeyValues::GetInt, operator delete, _Unwind_Resume
// strings: "weather_type"
CAssetModifier *__fastcall createAssetModifierType<CWeatherModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx
  KeyValues *m_pKV; // rdi

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  m_pKV = v8->m_pKV;
  v8->_vptr_CAssetModifier = off_479ED50;
  *(&v8->m_nPriority + 1) = KeyValues::GetInt(m_pKV, "weather_type", 0);
  return v8;
}


// createAssetModifierType<CPortraitBackgroundModelModifier>  (line 170, @0x0000000002e58660, libserver.so)  // inlines: CPortraitBackgroundModelModifier
// calls: operator new, CAssetModifier::CAssetModifier, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CPortraitBackgroundModelModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v8->_vptr_CAssetModifier = off_47A3FF0;
  return v8;
}


// createAssetModifierType<CPortraitBackgroundLightModifier>  (line 170, @0x0000000002e586d0, libserver.so)  // inlines: CPortraitBackgroundLightModifier, Init
// calls: operator new, CAssetModifier::CAssetModifier, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CPortraitBackgroundLightModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx

  v8 = operator new(0x38u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v8[1]._vptr_CAssetModifier = 0;
  v8->_vptr_CAssetModifier = off_47A4350;
  return v8;
}


// createAssetModifierType<CPortraitBackgroundCameraModifier>  (line 170, @0x0000000002e58750, libserver.so)  // inlines: CPortraitBackgroundCameraModifier, Init
// calls: operator new, CAssetModifier::CAssetModifier, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CPortraitBackgroundCameraModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx

  v8 = operator new(0x38u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v8[1]._vptr_CAssetModifier = 0;
  v8->_vptr_CAssetModifier = off_47A42F0;
  return v8;
}


// createAssetModifierType<CPortraitBackgroundParticleModifier>  (line 170, @0x0000000002e587d0, libserver.so)  // inlines: CPortraitBackgroundParticleModifier
// calls: operator new, CAssetModifier::CAssetModifier, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CPortraitBackgroundParticleModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v8->_vptr_CAssetModifier = off_47A4230;
  return v8;
}


// createAssetModifierType<CPortraitBackgroundMapModifier>  (line 170, @0x0000000002e58840, libserver.so)  // inlines: CPortraitBackgroundMapModifier
// calls: operator new, CAssetModifier::CAssetModifier, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CPortraitBackgroundMapModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v8->_vptr_CAssetModifier = off_479F050;
  return v8;
}


// createAssetModifierType<CBuffModifier>  (line 170, @0x0000000002e588b0, libserver.so)  // inlines: CBuffModifier
// calls: operator new, CAssetModifier::CAssetModifier, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CBuffModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v8->_vptr_CAssetModifier = off_479EE70;
  return v8;
}


// createAssetModifierType<CCursorPackModifier>  (line 170, @0x0000000002e58920, libserver.so)  // inlines: CCursorPackModifier
// calls: operator new, CAssetModifier::CAssetModifier, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CCursorPackModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v8->_vptr_CAssetModifier = off_479E7B0;
  return v8;
}


// createAssetModifierType<CStrangeControlPointModifier>  (line 170, @0x0000000002e58990, libserver.so)  // inlines: CStrangeControlPointModifier, Init
// calls: operator new, CAssetModifier::CAssetModifier, KeyValues::GetFloat, operator delete, _Unwind_Resume
// strings: "strange_type"
CAssetModifier *__fastcall createAssetModifierType<CStrangeControlPointModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx
  KeyValues *m_pKV; // rdi
  float v10; // xmm1_4
  float Float; // xmm0_4
  KeyValues *v12; // rdi
  float v13; // xmm1_4

  v8 = operator new(0x38u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  m_pKV = v8->m_pKV;
  v8->_vptr_CAssetModifier = off_479E810;
  Float = KeyValues::GetFloat(m_pKV, "strange_type", v10);
  v12 = v8->m_pKV;
  *(&v8->m_nPriority + 1) = Float;
  LODWORD(v8[1]._vptr_CAssetModifier) = KeyValues::GetFloat(v12, "control_point", v13);
  return v8;
}


// createAssetModifierType<CPetModifier>  (line 170, @0x0000000002e58a40, libserver.so)  // inlines: CPetModifier, CUtlString, GetBool, Init, StringFieldToInt
// calls: operator new, CAssetModifier::CAssetModifier, KeyValues::GetString, CUtlString::operator=, KeyValues::GetInt, KeyValues::GetFloat, UTIL_StringToVector, StringFieldToInt, operator delete, _Unwind_Resume
// strings: "pickup_item", "strange_type", "ingame_scale", "loadout_scale", "levelup_rule", "compendium_event_id" (9 total)
// globals: g_szPetLevelupRules
CAssetModifier *__fastcall createAssetModifierType<CPetModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  void *v8; // rbx
  KeyValues *v9; // rdi
  const char *String; // rax
  int Int; // eax
  KeyValues *v12; // rdi
  int v13; // eax
  KeyValues *v14; // rdi
  float v15; // xmm1_4
  float Float; // xmm0_4
  KeyValues *v17; // rdi
  float v18; // xmm1_4
  float v19; // xmm0_4
  KeyValues *v20; // rdi
  const char *v21; // rax
  bool v22; // r8
  int v23; // edx
  KeyValues *v24; // rdi
  int v25; // eax
  KeyValues *v26; // rdi
  int v27; // eax
  KeyValues *v28; // rdi
  const char *v29; // rax

  v8 = operator new(0x60u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v9 = *(v8 + 4);
  *v8 = off_47A4290;
  *(v8 + 6) = 0;
  String = KeyValues::GetString(v9, "pickup_item", 0, 0, 0);
  CUtlString::operator=(v8 + 6, String);
  Int = KeyValues::GetInt(*(v8 + 4), "strange_type", -1);
  v12 = *(v8 + 4);
  *(v8 + 21) = Int;
  v13 = KeyValues::GetInt(v12, "skin", 0);
  v14 = *(v8 + 4);
  *(v8 + 14) = v13;
  Float = KeyValues::GetFloat(v14, "ingame_scale", v15);
  v17 = *(v8 + 4);
  *(v8 + 15) = Float;
  v19 = KeyValues::GetFloat(v17, "loadout_scale", v18);
  v20 = *(v8 + 4);
  *(v8 + 16) = v19;
  v21 = KeyValues::GetString(v20, "levelup_rule", "", 0, 0);
  v23 = 0;
  if ( v21 != 0 && *v21 != 0 )
  {
    LOBYTE(v23) = 3;
    v23 = StringFieldToInt(v21, g_szPetLevelupRules, v23, 0, v22);
  }
  v24 = *(v8 + 4);
  *(v8 + 20) = v23;
  v25 = KeyValues::GetInt(v24, "compendium_event_id", 0);
  v26 = *(v8 + 4);
  *(v8 + 22) = v25;
  v27 = KeyValues::GetInt(v26, "supports_coop_teleport", 0);
  v28 = *(v8 + 4);
  *(v8 + 92) = v27 != 0;
  v29 = KeyValues::GetString(v28, "loadout_default_offset", "0 0 0", 0, 0);
  UTIL_StringToVector(v8 + 17, v29);
  return v8;
}


// createAssetModifierType<CHealthBarModifier>  (line 170, @0x0000000002e58be0, libserver.so)  // inlines: CHealthBarModifier, Init
// calls: operator new, CAssetModifier::CAssetModifier, KeyValues::GetInt, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CHealthBarModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx
  KeyValues *m_pKV; // rdi

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  m_pKV = v8->m_pKV;
  v8->_vptr_CAssetModifier = off_479F0B0;
  *(&v8->m_nPriority + 1) = KeyValues::GetInt(m_pKV, "offset", 0);
  return v8;
}


// createAssetModifierType<CEntityHealthBarModifier>  (line 170, @0x0000000002e58c70, libserver.so)  // inlines: CEntityHealthBarModifier, CHealthBarModifier, Init
// calls: operator new, CAssetModifier::CAssetModifier, KeyValues::GetInt, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CEntityHealthBarModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx
  KeyValues *m_pKV; // rdi

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  m_pKV = v8->m_pKV;
  v8->_vptr_CAssetModifier = off_479F110;
  *(&v8->m_nPriority + 1) = KeyValues::GetInt(m_pKV, "offset", 0);
  return v8;
}


// createAssetModifierType<CPortraitModifier_Game>  (line 170, @0x0000000002e58d00, libserver.so)  // inlines: CPortraitModifier_Game, Init
// calls: operator new, CAssetModifier::CAssetModifier, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CPortraitModifier_Game>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx

  v8 = operator new(0x38u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v8[1]._vptr_CAssetModifier = 0;
  v8->_vptr_CAssetModifier = off_47A4110;
  return v8;
}


// createAssetModifierType<CAdditionalWearableModifier>  (line 170, @0x0000000002e58d80, libserver.so)  // inlines: CAdditionalWearableModifier
// calls: operator new, CAssetModifier::CAssetModifier, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CAdditionalWearableModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v8->_vptr_CAssetModifier = off_47A4050;
  return v8;
}


// createAssetModifierType<CMapModifier>  (line 170, @0x0000000002e58df0, libserver.so)  // inlines: CMapModifier
// calls: operator new, CAssetModifier::CAssetModifier, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CMapModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v8->_vptr_CAssetModifier = off_479EDB0;
  return v8;
}


// createAssetModifierType<CWeatherEffectModifier>  (line 170, @0x0000000002e58e60, libserver.so)  // inlines: CWeatherEffectModifier
// calls: operator new, CAssetModifier::CAssetModifier, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CWeatherEffectModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v8->_vptr_CAssetModifier = off_47A43B0;
  return v8;
}


// createAssetModifierType<CTerrainParticleEffectModifier>  (line 170, @0x0000000002e58ed0, libserver.so)  // inlines: CTerrainParticleEffectModifier
// calls: operator new, CAssetModifier::CAssetModifier, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CTerrainParticleEffectModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v8->_vptr_CAssetModifier = off_47A4410;
  return v8;
}


// createAssetModifierType<CArcanaLevelModifier>  (line 170, @0x0000000002e58f40, libserver.so)  // inlines: CArcanaLevelModifier, Init
// calls: operator new, CAssetModifier::CAssetModifier, KeyValues::GetInt, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CArcanaLevelModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx
  KeyValues *m_pKV; // rdi

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  m_pKV = v8->m_pKV;
  v8->_vptr_CAssetModifier = off_479F170;
  *(&v8->m_nPriority + 1) = KeyValues::GetInt(m_pKV, "level", 0);
  return v8;
}


// createAssetModifierType<CNPCMaterialOverrideModifier>  (line 170, @0x0000000002e58fd0, libserver.so)  // inlines: CNPCMaterialOverrideModifier
// calls: operator new, CAssetModifier::CAssetModifier, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CNPCMaterialOverrideModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v8->_vptr_CAssetModifier = off_47A4470;
  return v8;
}


// createAssetModifierType<CSkinChangeModifier>  (line 170, @0x0000000002e59040, libserver.so)  // inlines: CSkinChangeModifier, Init
// calls: operator new, CAssetModifier::CAssetModifier, KeyValues::GetInt, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CSkinChangeModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx
  KeyValues *m_pKV; // rdi

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  m_pKV = v8->m_pKV;
  v8->_vptr_CAssetModifier = off_479E690;
  *(&v8->m_nPriority + 1) = KeyValues::GetInt(m_pKV, "skin", 0);
  return v8;
}


// createAssetModifierType<CWaterMaterialOverrideModifier>  (line 170, @0x0000000002e590d0, libserver.so)  // inlines: CWaterMaterialOverrideModifier
// calls: operator new, CAssetModifier::CAssetModifier, operator delete, _Unwind_Resume
CAssetModifier *__fastcall createAssetModifierType<CWaterMaterialOverrideModifier>(
        KeyValues *pKV,
        IEconItemSchema *pSchema,
        bool bParseCriteria,
        int nPriority)
{
  CAssetModifier *v8; // rbx

  v8 = operator new(0x30u);
  CAssetModifier::CAssetModifier(v8, pKV, pSchema, bParseCriteria, nPriority);
  v8->_vptr_CAssetModifier = off_47A44D0;
  return v8;
}


// CActivityModifier::~CActivityModifier  (line 208, @0x0000000002e51410, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CActivityModifier::~CActivityModifier(CActivityModifier *const this)
{
  this->_vptr_CAssetModifier = off_479E510;
  CAssetModifier::~CAssetModifier(this);
}


// CActivityModifier::~CActivityModifier  (line 208, @0x0000000002e51430, libserver.so)  // inlines: ~CActivityModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CActivityModifier::~CActivityModifier(CActivityModifier *const this)
{
  this->_vptr_CAssetModifier = off_479E510;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CActivityModifier::GetTypeName  (line 211, @0x0000000002e4e580, libserver.so)
// globals: CActivityModifier::sm_pModifierName
const char *__fastcall CActivityModifier::GetTypeName(const CActivityModifier *const this)
{
  return CActivityModifier::sm_pModifierName;
}


// CActivityModifier::GetType  (line 211, @0x0000000002e59e40, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CActivityModifier>
// globals: CActivityModifier::_type
unsigned int __fastcall CActivityModifier::GetType(const CActivityModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CActivityModifier>();
  CActivityModifier::_type = result;
  return result;
}


// CActivityModifier::Init  (line 224, @0x0000000002e4ffd0, libserver.so)  // inlines: ActivityList_IndexForName, GetActivityName, GetAsset, GetBool
// calls: CUtlString::Get, V_stricmp_fast, KeyValues::GetInt
void __fastcall CActivityModifier::Init(CActivityModifier *const this, IEconItemSchema *pSchema)
{
  CUtlString *p_m_strAsset; // r12
  const char *v4; // rax
  Activity v5; // edx
  const char *v6; // rax
  bool v7; // dl
  const char *v8; // rax
  KeyValues *m_pKV; // rdi

  p_m_strAsset = &this->m_strAsset;
  this->m_Activity = -1;
  v4 = CUtlString::Get(&this->m_strAsset);
  v5 = -1;
  if ( g_pAnimationSystem != 0 )
    v5 = (*(*g_pAnimationSystem + 304LL))(g_pAnimationSystem, v4);
  this->m_Activity = v5;
  v6 = CUtlString::Get(p_m_strAsset);
  v7 = 0;
  if ( v6 != 0 )
  {
    v8 = CUtlString::Get(p_m_strAsset);
    v7 = V_stricmp_fast(v8, "ALL") == 0;
  }
  m_pKV = this->m_pKV;
  this->m_bAlwaysOn = v7;
  this->m_bPlayAsGesture = KeyValues::GetInt(m_pKV, "gesture", 0) != 0;
}


// CAnnouncerModifier::~CAnnouncerModifier  (line 242, @0x0000000002e513c0, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CAnnouncerModifier::~CAnnouncerModifier(CAnnouncerModifier *const this)
{
  this->_vptr_CAssetModifier = off_479E570;
  CAssetModifier::~CAssetModifier(this);
}


// CAnnouncerModifier::~CAnnouncerModifier  (line 242, @0x0000000002e513e0, libserver.so)  // inlines: ~CAnnouncerModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CAnnouncerModifier::~CAnnouncerModifier(CAnnouncerModifier *const this)
{
  this->_vptr_CAssetModifier = off_479E570;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CAnnouncerModifier::GetTypeName  (line 245, @0x0000000002e4e590, libserver.so)
// globals: CAnnouncerModifier::sm_pModifierName
const char *__fastcall CAnnouncerModifier::GetTypeName(const CAnnouncerModifier *const this)
{
  return CAnnouncerModifier::sm_pModifierName;
}


// CAnnouncerModifier::GetType  (line 245, @0x0000000002e59eb0, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CAnnouncerModifier>
// globals: CAnnouncerModifier::_type
unsigned int __fastcall CAnnouncerModifier::GetType(const CAnnouncerModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CAnnouncerModifier>();
  CAnnouncerModifier::_type = result;
  return result;
}


// CAnnouncerPreviewModifier::~CAnnouncerPreviewModifier  (line 252, @0x0000000002e51370, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CAnnouncerPreviewModifier::~CAnnouncerPreviewModifier(CAnnouncerPreviewModifier *const this)
{
  this->_vptr_CAssetModifier = off_479E5D0;
  CAssetModifier::~CAssetModifier(this);
}


// CAnnouncerPreviewModifier::~CAnnouncerPreviewModifier  (line 252, @0x0000000002e51390, libserver.so)  // inlines: ~CAnnouncerPreviewModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CAnnouncerPreviewModifier::~CAnnouncerPreviewModifier(CAnnouncerPreviewModifier *const this)
{
  this->_vptr_CAssetModifier = off_479E5D0;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CAnnouncerPreviewModifier::GetTypeName  (line 255, @0x0000000002e4e5a0, libserver.so)
// globals: CAnnouncerPreviewModifier::sm_pModifierName
const char *__fastcall CAnnouncerPreviewModifier::GetTypeName(const CAnnouncerPreviewModifier *const this)
{
  return CAnnouncerPreviewModifier::sm_pModifierName;
}


// CAnnouncerPreviewModifier::GetType  (line 255, @0x0000000002e59f20, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CAnnouncerPreviewModifier>
// globals: CAnnouncerPreviewModifier::_type
unsigned int __fastcall CAnnouncerPreviewModifier::GetType(const CAnnouncerPreviewModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CAnnouncerPreviewModifier>();
  CAnnouncerPreviewModifier::_type = result;
  return result;
}


// CHudSkinModifier::~CHudSkinModifier  (line 269, @0x0000000002e51320, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CHudSkinModifier::~CHudSkinModifier(CHudSkinModifier *const this)
{
  this->_vptr_CAssetModifier = off_479E630;
  CAssetModifier::~CAssetModifier(this);
}


// CHudSkinModifier::~CHudSkinModifier  (line 269, @0x0000000002e51340, libserver.so)  // inlines: ~CHudSkinModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CHudSkinModifier::~CHudSkinModifier(CHudSkinModifier *const this)
{
  this->_vptr_CAssetModifier = off_479E630;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CHudSkinModifier::GetTypeName  (line 272, @0x0000000002e4e5b0, libserver.so)
// globals: CHudSkinModifier::sm_pModifierName
const char *__fastcall CHudSkinModifier::GetTypeName(const CHudSkinModifier *const this)
{
  return CHudSkinModifier::sm_pModifierName;
}


// CHudSkinModifier::GetType  (line 272, @0x0000000002e59f90, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CHudSkinModifier>
// globals: CHudSkinModifier::_type
unsigned int __fastcall CHudSkinModifier::GetType(const CHudSkinModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CHudSkinModifier>();
  CHudSkinModifier::_type = result;
  return result;
}


// CHudSkinModifier::Init  (line 279, @0x0000000002e4fd20, libserver.so)  // inlines: GetHudCycleStyleName, GetModifier
// calls: CUtlString::Get, V_stricmp_fast
// strings: "day_night"
void __fastcall CHudSkinModifier::Init(CHudSkinModifier *const this, IEconItemSchema *pSchema)
{
  const char *v3; // rax

  v3 = CUtlString::Get(&this->m_strModifier);
  this->m_HUDCycleStyle = V_stricmp_fast(v3, "day_night") == 0;
}


// CSkinChangeModifier::~CSkinChangeModifier  (line 296, @0x0000000002e512d0, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CSkinChangeModifier::~CSkinChangeModifier(CSkinChangeModifier *const this)
{
  this->_vptr_CAssetModifier = off_479E690;
  CAssetModifier::~CAssetModifier(this);
}


// CSkinChangeModifier::~CSkinChangeModifier  (line 296, @0x0000000002e512f0, libserver.so)  // inlines: ~CSkinChangeModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CSkinChangeModifier::~CSkinChangeModifier(CSkinChangeModifier *const this)
{
  this->_vptr_CAssetModifier = off_479E690;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CSkinChangeModifier::GetTypeName  (line 299, @0x0000000002e4e5c0, libserver.so)
// globals: CSkinChangeModifier::sm_pModifierName
const char *__fastcall CSkinChangeModifier::GetTypeName(const CSkinChangeModifier *const this)
{
  return CSkinChangeModifier::sm_pModifierName;
}


// CSkinChangeModifier::GetType  (line 299, @0x0000000002e5b2d0, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CSkinChangeModifier>
// globals: CSkinChangeModifier::_type
unsigned int __fastcall CSkinChangeModifier::GetType(const CSkinChangeModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CSkinChangeModifier>();
  CSkinChangeModifier::_type = result;
  return result;
}


// CSkinChangeModifier::Init  (line 301, @0x0000000002e4fe50, libserver.so)
// calls: KeyValues::GetInt
void __fastcall CSkinChangeModifier::Init(CSkinChangeModifier *const this, IEconItemSchema *pSchema)
{
  this->m_nSkin = KeyValues::GetInt(this->m_pKV, "skin", 0);
}


// CSkinChangeModifier::Compare  (line 306, @0x0000000002e53240, libserver.so)  // inlines: Compare, GetAsset
// calls: CUtlString::Get, V_stricmp_fast
bool __fastcall CSkinChangeModifier::Compare(const CSkinChangeModifier *const this, const char *pszAsset)
{
  CUtlString *p_m_strAsset; // rbx
  const char *v4; // rdx
  bool result; // al
  const char *v6; // rax

  p_m_strAsset = &this->m_strAsset;
  v4 = CUtlString::Get(&this->m_strAsset);
  result = 1;
  if ( v4 != 0 && *v4 != 0 )
  {
    v6 = CUtlString::Get(p_m_strAsset);
    return V_stricmp_fast(v6, pszAsset) == 0;
  }
  return result;
}


// CAbilityNameModifier::~CAbilityNameModifier  (line 322, @0x0000000002e51280, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CAbilityNameModifier::~CAbilityNameModifier(CAbilityNameModifier *const this)
{
  this->_vptr_CAssetModifier = off_479E6F0;
  CAssetModifier::~CAssetModifier(this);
}


// CAbilityNameModifier::~CAbilityNameModifier  (line 322, @0x0000000002e512a0, libserver.so)  // inlines: ~CAbilityNameModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CAbilityNameModifier::~CAbilityNameModifier(CAbilityNameModifier *const this)
{
  this->_vptr_CAssetModifier = off_479E6F0;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CAbilityNameModifier::GetTypeName  (line 325, @0x0000000002e4e5d0, libserver.so)
// globals: CAbilityNameModifier::sm_pModifierName
const char *__fastcall CAbilityNameModifier::GetTypeName(const CAbilityNameModifier *const this)
{
  return CAbilityNameModifier::sm_pModifierName;
}


// CAbilityNameModifier::GetType  (line 325, @0x0000000002e5a000, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CAbilityNameModifier>
// globals: CAbilityNameModifier::_type
unsigned int __fastcall CAbilityNameModifier::GetType(const CAbilityNameModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CAbilityNameModifier>();
  CAbilityNameModifier::_type = result;
  return result;
}


// CLoadingScreenModifier::~CLoadingScreenModifier  (line 331, @0x0000000002e51230, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CLoadingScreenModifier::~CLoadingScreenModifier(CLoadingScreenModifier *const this)
{
  this->_vptr_CAssetModifier = off_479E750;
  CAssetModifier::~CAssetModifier(this);
}


// CLoadingScreenModifier::~CLoadingScreenModifier  (line 331, @0x0000000002e51250, libserver.so)  // inlines: ~CLoadingScreenModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CLoadingScreenModifier::~CLoadingScreenModifier(CLoadingScreenModifier *const this)
{
  this->_vptr_CAssetModifier = off_479E750;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CLoadingScreenModifier::GetTypeName  (line 334, @0x0000000002e4e5e0, libserver.so)
// globals: CLoadingScreenModifier::sm_pModifierName
const char *__fastcall CLoadingScreenModifier::GetTypeName(const CLoadingScreenModifier *const this)
{
  return CLoadingScreenModifier::sm_pModifierName;
}


// CLoadingScreenModifier::GetType  (line 334, @0x0000000002e5a7e0, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CLoadingScreenModifier>
// globals: CLoadingScreenModifier::_type
unsigned int __fastcall CLoadingScreenModifier::GetType(const CLoadingScreenModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CLoadingScreenModifier>();
  CLoadingScreenModifier::_type = result;
  return result;
}


// CCursorPackModifier::~CCursorPackModifier  (line 340, @0x0000000002e511e0, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CCursorPackModifier::~CCursorPackModifier(CCursorPackModifier *const this)
{
  this->_vptr_CAssetModifier = off_479E7B0;
  CAssetModifier::~CAssetModifier(this);
}


// CCursorPackModifier::~CCursorPackModifier  (line 340, @0x0000000002e51200, libserver.so)  // inlines: ~CCursorPackModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CCursorPackModifier::~CCursorPackModifier(CCursorPackModifier *const this)
{
  this->_vptr_CAssetModifier = off_479E7B0;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CCursorPackModifier::GetTypeName  (line 343, @0x0000000002e4e5f0, libserver.so)
// globals: CCursorPackModifier::sm_pModifierName
const char *__fastcall CCursorPackModifier::GetTypeName(const CCursorPackModifier *const this)
{
  return CCursorPackModifier::sm_pModifierName;
}


// CCursorPackModifier::GetType  (line 343, @0x0000000002e5ad90, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CCursorPackModifier>
// globals: CCursorPackModifier::_type
unsigned int __fastcall CCursorPackModifier::GetType(const CCursorPackModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CCursorPackModifier>();
  CCursorPackModifier::_type = result;
  return result;
}


// CStrangeControlPointModifier::~CStrangeControlPointModifier  (line 349, @0x0000000002e51190, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CStrangeControlPointModifier::~CStrangeControlPointModifier(CStrangeControlPointModifier *const this)
{
  this->_vptr_CAssetModifier = off_479E810;
  CAssetModifier::~CAssetModifier(this);
}


// CStrangeControlPointModifier::~CStrangeControlPointModifier  (line 349, @0x0000000002e511b0, libserver.so)  // inlines: ~CStrangeControlPointModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CStrangeControlPointModifier::~CStrangeControlPointModifier(CStrangeControlPointModifier *const this)
{
  this->_vptr_CAssetModifier = off_479E810;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CStrangeControlPointModifier::GetTypeName  (line 352, @0x0000000002e4e600, libserver.so)
// globals: CStrangeControlPointModifier::sm_pModifierName
const char *__fastcall CStrangeControlPointModifier::GetTypeName(const CStrangeControlPointModifier *const this)
{
  return CStrangeControlPointModifier::sm_pModifierName;
}


// CStrangeControlPointModifier::GetType  (line 352, @0x0000000002e5ae00, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CStrangeControlPointModifier>
// globals: CStrangeControlPointModifier::_type
unsigned int __fastcall CStrangeControlPointModifier::GetType(const CStrangeControlPointModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CStrangeControlPointModifier>();
  CStrangeControlPointModifier::_type = result;
  return result;
}


// CStrangeControlPointModifier::Init  (line 354, @0x0000000002e50060, libserver.so)
// calls: KeyValues::GetFloat
// strings: "strange_type"
void __fastcall CStrangeControlPointModifier::Init(CStrangeControlPointModifier *const this, IEconItemSchema *pSchema)
{
  float v2; // xmm1_4
  float Float; // xmm0_4
  KeyValues *m_pKV; // rdi
  float v6; // xmm1_4

  Float = KeyValues::GetFloat(this->m_pKV, "strange_type", v2);
  m_pKV = this->m_pKV;
  this->m_nStrangeType = Float;
  this->m_nControlPoint = KeyValues::GetFloat(m_pKV, "control_point", v6);
}


// CModelModifier::~CModelModifier  (line 370, @0x0000000002e50650, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CModelModifier::~CModelModifier(CModelModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A3F90;
  CAssetModifier::~CAssetModifier(this);
}


// CModelModifier::~CModelModifier  (line 370, @0x0000000002e50670, libserver.so)  // inlines: ~CModelModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CModelModifier::~CModelModifier(CModelModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A3F90;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CModelModifier::GetTypeName  (line 373, @0x0000000002e4e610, libserver.so)
// globals: CModelModifier::sm_pModifierName
const char *__fastcall CModelModifier::GetTypeName(const CModelModifier *const this)
{
  return CModelModifier::sm_pModifierName;
}


// CModelModifier::GetType  (line 373, @0x0000000002e5aa80, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CModelModifier>
// globals: CModelModifier::_type
unsigned int __fastcall CModelModifier::GetType(const CModelModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CModelModifier>();
  CModelModifier::_type = result;
  return result;
}


// CCourierModifier::~CCourierModifier  (line 382, @0x0000000002e507e0, libserver.so)  // inlines: ~CModelModifier
// calls: CAssetModifier::~CAssetModifier
void __fastcall CCourierModifier::~CCourierModifier(CCourierModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A3F90;
  CAssetModifier::~CAssetModifier(this);
}


// CCourierModifier::~CCourierModifier  (line 382, @0x0000000002e50800, libserver.so)  // inlines: ~CCourierModifier, ~CModelModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CCourierModifier::~CCourierModifier(CCourierModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A3F90;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CCourierModifier::GetTypeName  (line 385, @0x0000000002e4e620, libserver.so)
// globals: CCourierModifier::sm_pModifierName
const char *__fastcall CCourierModifier::GetTypeName(const CCourierModifier *const this)
{
  return CCourierModifier::sm_pModifierName;
}


// CCourierModifier::GetType  (line 385, @0x0000000002e5a690, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CCourierModifier>
// globals: CCourierModifier::_type
unsigned int __fastcall CCourierModifier::GetType(const CCourierModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CCourierModifier>();
  CCourierModifier::_type = result;
  return result;
}


// CCourierFlyingModifier::~CCourierFlyingModifier  (line 389, @0x0000000002e50790, libserver.so)  // inlines: ~CModelModifier
// calls: CAssetModifier::~CAssetModifier
void __fastcall CCourierFlyingModifier::~CCourierFlyingModifier(CCourierFlyingModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A3F90;
  CAssetModifier::~CAssetModifier(this);
}


// CCourierFlyingModifier::~CCourierFlyingModifier  (line 389, @0x0000000002e507b0, libserver.so)  // inlines: ~CCourierFlyingModifier, ~CModelModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CCourierFlyingModifier::~CCourierFlyingModifier(CCourierFlyingModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A3F90;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CCourierFlyingModifier::GetTypeName  (line 392, @0x0000000002e4e630, libserver.so)
// globals: CCourierFlyingModifier::sm_pModifierName
const char *__fastcall CCourierFlyingModifier::GetTypeName(const CCourierFlyingModifier *const this)
{
  return CCourierFlyingModifier::sm_pModifierName;
}


// CCourierFlyingModifier::GetType  (line 392, @0x0000000002e5a700, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CCourierFlyingModifier>
// globals: CCourierFlyingModifier::_type
unsigned int __fastcall CCourierFlyingModifier::GetType(const CCourierFlyingModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CCourierFlyingModifier>();
  CCourierFlyingModifier::_type = result;
  return result;
}


// CHeroModelChangeModifier::~CHeroModelChangeModifier  (line 396, @0x0000000002e50740, libserver.so)  // inlines: ~CModelModifier
// calls: CAssetModifier::~CAssetModifier
void __fastcall CHeroModelChangeModifier::~CHeroModelChangeModifier(CHeroModelChangeModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A3F90;
  CAssetModifier::~CAssetModifier(this);
}


// CHeroModelChangeModifier::~CHeroModelChangeModifier  (line 396, @0x0000000002e50760, libserver.so)  // inlines: ~CHeroModelChangeModifier, ~CModelModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CHeroModelChangeModifier::~CHeroModelChangeModifier(CHeroModelChangeModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A3F90;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CHeroModelChangeModifier::GetTypeName  (line 399, @0x0000000002e4e640, libserver.so)
// globals: CHeroModelChangeModifier::sm_pModifierName
const char *__fastcall CHeroModelChangeModifier::GetTypeName(const CHeroModelChangeModifier *const this)
{
  return CHeroModelChangeModifier::sm_pModifierName;
}


// CHeroModelChangeModifier::GetType  (line 399, @0x0000000002e5a770, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CHeroModelChangeModifier>
// globals: CHeroModelChangeModifier::_type
unsigned int __fastcall CHeroModelChangeModifier::GetType(const CHeroModelChangeModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CHeroModelChangeModifier>();
  CHeroModelChangeModifier::_type = result;
  return result;
}


// CHeroModelChangeModifier::Init  (line 401, @0x0000000002e4fe80, libserver.so)
// calls: KeyValues::GetInt
void __fastcall CHeroModelChangeModifier::Init(CHeroModelChangeModifier *const this, IEconItemSchema *pSchema)
{
  this->m_nSkin = KeyValues::GetInt(this->m_pKV, "skin", 0);
}


// CHexModelModifier::~CHexModelModifier  (line 413, @0x0000000002e506f0, libserver.so)  // inlines: ~CModelModifier
// calls: CAssetModifier::~CAssetModifier
void __fastcall CHexModelModifier::~CHexModelModifier(CHexModelModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A3F90;
  CAssetModifier::~CAssetModifier(this);
}


// CHexModelModifier::~CHexModelModifier  (line 413, @0x0000000002e50710, libserver.so)  // inlines: ~CHexModelModifier, ~CModelModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CHexModelModifier::~CHexModelModifier(CHexModelModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A3F90;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CHexModelModifier::GetTypeName  (line 416, @0x0000000002e4e650, libserver.so)
// globals: CHexModelModifier::sm_pModifierName
const char *__fastcall CHexModelModifier::GetTypeName(const CHexModelModifier *const this)
{
  return CHexModelModifier::sm_pModifierName;
}


// CHexModelModifier::GetType  (line 416, @0x0000000002e5a930, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CHexModelModifier>
// globals: CHexModelModifier::_type
unsigned int __fastcall CHexModelModifier::GetType(const CHexModelModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CHexModelModifier>();
  CHexModelModifier::_type = result;
  return result;
}


// CSoundModifier::~CSoundModifier  (line 420, @0x0000000002e50c40, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CSoundModifier::~CSoundModifier(CSoundModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A40B0;
  CAssetModifier::~CAssetModifier(this);
}


// CSoundModifier::~CSoundModifier  (line 420, @0x0000000002e50c60, libserver.so)  // inlines: ~CSoundModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CSoundModifier::~CSoundModifier(CSoundModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A40B0;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CSoundModifier::GetTypeName  (line 423, @0x0000000002e4e660, libserver.so)
// globals: CSoundModifier::sm_pModifierName
const char *__fastcall CSoundModifier::GetTypeName(const CSoundModifier *const this)
{
  return CSoundModifier::sm_pModifierName;
}


// CSoundModifier::GetType  (line 423, @0x0000000002e5a070, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CSoundModifier>
// globals: CSoundModifier::_type
unsigned int __fastcall CSoundModifier::GetType(const CSoundModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CSoundModifier>();
  CSoundModifier::_type = result;
  return result;
}


// CSoundscapeModifier::~CSoundscapeModifier  (line 432, @0x0000000002e51140, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CSoundscapeModifier::~CSoundscapeModifier(CSoundscapeModifier *const this)
{
  this->_vptr_CAssetModifier = off_479E9F0;
  CAssetModifier::~CAssetModifier(this);
}


// CSoundscapeModifier::~CSoundscapeModifier  (line 432, @0x0000000002e51160, libserver.so)  // inlines: ~CSoundscapeModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CSoundscapeModifier::~CSoundscapeModifier(CSoundscapeModifier *const this)
{
  this->_vptr_CAssetModifier = off_479E9F0;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CSoundscapeModifier::GetTypeName  (line 435, @0x0000000002e4e670, libserver.so)
// globals: CSoundscapeModifier::sm_pModifierName
const char *__fastcall CSoundscapeModifier::GetTypeName(const CSoundscapeModifier *const this)
{
  return CSoundscapeModifier::sm_pModifierName;
}


// CSoundscapeModifier::GetType  (line 435, @0x0000000002e5a9a0, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CSoundscapeModifier>
// globals: CSoundscapeModifier::_type
unsigned int __fastcall CSoundscapeModifier::GetType(const CSoundscapeModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CSoundscapeModifier>();
  CSoundscapeModifier::_type = result;
  return result;
}


// CSpeechModifier::~CSpeechModifier  (line 442, @0x0000000002e510f0, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CSpeechModifier::~CSpeechModifier(CSpeechModifier *const this)
{
  this->_vptr_CAssetModifier = off_479EA50;
  CAssetModifier::~CAssetModifier(this);
}


// CSpeechModifier::~CSpeechModifier  (line 442, @0x0000000002e51110, libserver.so)  // inlines: ~CSpeechModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CSpeechModifier::~CSpeechModifier(CSpeechModifier *const this)
{
  this->_vptr_CAssetModifier = off_479EA50;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CSpeechModifier::GetTypeName  (line 445, @0x0000000002e4e680, libserver.so)
// globals: CSpeechModifier::sm_pModifierName
const char *__fastcall CSpeechModifier::GetTypeName(const CSpeechModifier *const this)
{
  return CSpeechModifier::sm_pModifierName;
}


// CSpeechModifier::GetType  (line 445, @0x0000000002e5a0e0, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CSpeechModifier>
// globals: CSpeechModifier::_type
unsigned int __fastcall CSpeechModifier::GetType(const CSpeechModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CSpeechModifier>();
  CSpeechModifier::_type = result;
  return result;
}


// CIconModifier::~CIconModifier  (line 452, @0x0000000002e50830, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CIconModifier::~CIconModifier(CIconModifier *const this)
{
  this->_vptr_CAssetModifier = off_479EAB0;
  CAssetModifier::~CAssetModifier(this);
}


// CIconModifier::~CIconModifier  (line 452, @0x0000000002e50850, libserver.so)  // inlines: ~CIconModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CIconModifier::~CIconModifier(CIconModifier *const this)
{
  this->_vptr_CAssetModifier = off_479EAB0;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CIconModifier::GetTypeName  (line 455, @0x0000000002e4e690, libserver.so)
// globals: CIconModifier::sm_pModifierName
const char *__fastcall CIconModifier::GetTypeName(const CIconModifier *const this)
{
  return CIconModifier::sm_pModifierName;
}


// CIconModifier::GetType  (line 455, @0x0000000002e5a460, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CIconModifier>
// globals: CIconModifier::_type
unsigned int __fastcall CIconModifier::GetType(const CIconModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CIconModifier>();
  CIconModifier::_type = result;
  return result;
}


// CIconModifier::Init  (line 462, @0x0000000002e4feb0, libserver.so)
// calls: KeyValues::GetInt
// strings: "force_display"
void __fastcall CIconModifier::Init(CIconModifier *const this, IEconItemSchema *pSchema)
{
  this->m_nForceDisplay = KeyValues::GetInt(this->m_pKV, "force_display", 0);
}


// CIconModifier_Hero::~CIconModifier_Hero  (line 472, @0x0000000002e508d0, libserver.so)  // inlines: ~CIconModifier
// calls: CAssetModifier::~CAssetModifier
void __fastcall CIconModifier_Hero::~CIconModifier_Hero(CIconModifier_Hero *const this)
{
  this->_vptr_CAssetModifier = off_479EAB0;
  CAssetModifier::~CAssetModifier(this);
}


// CIconModifier_Hero::~CIconModifier_Hero  (line 472, @0x0000000002e508f0, libserver.so)  // inlines: ~CIconModifier, ~CIconModifier_Hero
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CIconModifier_Hero::~CIconModifier_Hero(CIconModifier_Hero *const this)
{
  this->_vptr_CAssetModifier = off_479EAB0;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CIconModifier_Hero::GetTypeName  (line 475, @0x0000000002e4e6a0, libserver.so)
// globals: CIconModifier_Hero::sm_pModifierName
const char *__fastcall CIconModifier_Hero::GetTypeName(const CIconModifier_Hero *const this)
{
  return CIconModifier_Hero::sm_pModifierName;
}


// CIconModifier_Hero::GetType  (line 475, @0x0000000002e5a4d0, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CIconModifier_Hero>
// globals: CIconModifier_Hero::_type
unsigned int __fastcall CIconModifier_Hero::GetType(const CIconModifier_Hero *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CIconModifier_Hero>();
  CIconModifier_Hero::_type = result;
  return result;
}


// CIconModifier_HeroMinimap::~CIconModifier_HeroMinimap  (line 479, @0x0000000002e50880, libserver.so)  // inlines: ~CIconModifier
// calls: CAssetModifier::~CAssetModifier
void __fastcall CIconModifier_HeroMinimap::~CIconModifier_HeroMinimap(CIconModifier_HeroMinimap *const this)
{
  this->_vptr_CAssetModifier = off_479EAB0;
  CAssetModifier::~CAssetModifier(this);
}


// CIconModifier_HeroMinimap::~CIconModifier_HeroMinimap  (line 479, @0x0000000002e508a0, libserver.so)  // inlines: ~CIconModifier, ~CIconModifier_HeroMinimap
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CIconModifier_HeroMinimap::~CIconModifier_HeroMinimap(CIconModifier_HeroMinimap *const this)
{
  this->_vptr_CAssetModifier = off_479EAB0;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CIconModifier_HeroMinimap::GetTypeName  (line 482, @0x0000000002e4e6b0, libserver.so)
// globals: CIconModifier_HeroMinimap::sm_pModifierName
const char *__fastcall CIconModifier_HeroMinimap::GetTypeName(const CIconModifier_HeroMinimap *const this)
{
  return CIconModifier_HeroMinimap::sm_pModifierName;
}


// CIconModifier_HeroMinimap::GetType  (line 482, @0x0000000002e5a540, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CIconModifier_HeroMinimap>
// globals: CIconModifier_HeroMinimap::_type
unsigned int __fastcall CIconModifier_HeroMinimap::GetType(const CIconModifier_HeroMinimap *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CIconModifier_HeroMinimap>();
  CIconModifier_HeroMinimap::_type = result;
  return result;
}


// CInventoryIconModifier::~CInventoryIconModifier  (line 486, @0x0000000002e510a0, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CInventoryIconModifier::~CInventoryIconModifier(CInventoryIconModifier *const this)
{
  this->_vptr_CAssetModifier = off_479EBD0;
  CAssetModifier::~CAssetModifier(this);
}


// CInventoryIconModifier::~CInventoryIconModifier  (line 486, @0x0000000002e510c0, libserver.so)  // inlines: ~CInventoryIconModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CInventoryIconModifier::~CInventoryIconModifier(CInventoryIconModifier *const this)
{
  this->_vptr_CAssetModifier = off_479EBD0;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CInventoryIconModifier::GetTypeName  (line 489, @0x0000000002e4e6c0, libserver.so)
// globals: CInventoryIconModifier::sm_pModifierName
const char *__fastcall CInventoryIconModifier::GetTypeName(const CInventoryIconModifier *const this)
{
  return CInventoryIconModifier::sm_pModifierName;
}


// CInventoryIconModifier::GetType  (line 489, @0x0000000002e5a5b0, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CInventoryIconModifier>
// globals: CInventoryIconModifier::_type
unsigned int __fastcall CInventoryIconModifier::GetType(const CInventoryIconModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CInventoryIconModifier>();
  CInventoryIconModifier::_type = result;
  return result;
}


// CInventoryIconModifier::Init  (line 495, @0x0000000002e4fee0, libserver.so)
// calls: KeyValues::GetInt
// strings: "force_display"
void __fastcall CInventoryIconModifier::Init(CInventoryIconModifier *const this, IEconItemSchema *pSchema)
{
  this->m_nForceDisplay = KeyValues::GetInt(this->m_pKV, "force_display", 0);
}


// CAbilityIconModifier::~CAbilityIconModifier  (line 505, @0x0000000002e51050, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CAbilityIconModifier::~CAbilityIconModifier(CAbilityIconModifier *const this)
{
  this->_vptr_CAssetModifier = off_479EC30;
  CAssetModifier::~CAssetModifier(this);
}


// CAbilityIconModifier::~CAbilityIconModifier  (line 505, @0x0000000002e51070, libserver.so)  // inlines: ~CAbilityIconModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CAbilityIconModifier::~CAbilityIconModifier(CAbilityIconModifier *const this)
{
  this->_vptr_CAssetModifier = off_479EC30;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CAbilityIconModifier::GetTypeName  (line 508, @0x0000000002e4e6d0, libserver.so)
// globals: CAbilityIconModifier::sm_pModifierName
const char *__fastcall CAbilityIconModifier::GetTypeName(const CAbilityIconModifier *const this)
{
  return CAbilityIconModifier::sm_pModifierName;
}


// CAbilityIconModifier::GetType  (line 508, @0x0000000002e5a620, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CAbilityIconModifier>
// globals: CAbilityIconModifier::_type
unsigned int __fastcall CAbilityIconModifier::GetType(const CAbilityIconModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CAbilityIconModifier>();
  CAbilityIconModifier::_type = result;
  return result;
}


// CEntityModelModifier::~CEntityModelModifier  (line 515, @0x0000000002e506a0, libserver.so)  // inlines: ~CModelModifier
// calls: CAssetModifier::~CAssetModifier
void __fastcall CEntityModelModifier::~CEntityModelModifier(CEntityModelModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A3F90;
  CAssetModifier::~CAssetModifier(this);
}


// CEntityModelModifier::~CEntityModelModifier  (line 515, @0x0000000002e506c0, libserver.so)  // inlines: ~CEntityModelModifier, ~CModelModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CEntityModelModifier::~CEntityModelModifier(CEntityModelModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A3F90;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CEntityModelModifier::GetTypeName  (line 518, @0x0000000002e4e6e0, libserver.so)
// globals: CEntityModelModifier::sm_pModifierName
const char *__fastcall CEntityModelModifier::GetTypeName(const CEntityModelModifier *const this)
{
  return CEntityModelModifier::sm_pModifierName;
}


// CEntityModelModifier::GetType  (line 518, @0x0000000002e5a380, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CEntityModelModifier>
// globals: CEntityModelModifier::_type
unsigned int __fastcall CEntityModelModifier::GetType(const CEntityModelModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CEntityModelModifier>();
  CEntityModelModifier::_type = result;
  return result;
}


// CEntityModelModifier::Compare  (line 523, @0x0000000002e500e0, libserver.so)  // inlines: GetAsset
// calls: CUtlString::Get, V_stristr_fast(char const*,char const*)
bool __fastcall CEntityModelModifier::Compare(const CEntityModelModifier *const this, const char *pszAsset)
{
  const char *v3; // rax

  v3 = CUtlString::Get(&this->m_strAsset);
  return V_stristr_fast(pszAsset, v3) != 0;
}


// CEntityScaleModifier::~CEntityScaleModifier  (line 530, @0x0000000002e51000, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CEntityScaleModifier::~CEntityScaleModifier(CEntityScaleModifier *const this)
{
  this->_vptr_CAssetModifier = off_479ECF0;
  CAssetModifier::~CAssetModifier(this);
}


// CEntityScaleModifier::~CEntityScaleModifier  (line 530, @0x0000000002e51020, libserver.so)  // inlines: ~CEntityScaleModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CEntityScaleModifier::~CEntityScaleModifier(CEntityScaleModifier *const this)
{
  this->_vptr_CAssetModifier = off_479ECF0;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CEntityScaleModifier::GetTypeName  (line 533, @0x0000000002e4e6f0, libserver.so)
// globals: CEntityScaleModifier::sm_pModifierName
const char *__fastcall CEntityScaleModifier::GetTypeName(const CEntityScaleModifier *const this)
{
  return CEntityScaleModifier::sm_pModifierName;
}


// CEntityScaleModifier::GetType  (line 533, @0x0000000002e5a3f0, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CEntityScaleModifier>
// globals: CEntityScaleModifier::_type
unsigned int __fastcall CEntityScaleModifier::GetType(const CEntityScaleModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CEntityScaleModifier>();
  CEntityScaleModifier::_type = result;
  return result;
}


// CEntityScaleModifier::Compare  (line 538, @0x0000000002e50110, libserver.so)  // inlines: GetAsset
// calls: CUtlString::Get, V_stristr_fast(char const*,char const*)
bool __fastcall CEntityScaleModifier::Compare(const CEntityScaleModifier *const this, const char *pszAsset)
{
  const char *v3; // rax

  v3 = CUtlString::Get(&this->m_strAsset);
  return V_stristr_fast(pszAsset, v3) != 0;
}


// CEntityScaleModifier::Init  (line 544, @0x0000000002e500b0, libserver.so)
// calls: KeyValues::GetFloat
// strings: "scale_size"
void __fastcall CEntityScaleModifier::Init(CEntityScaleModifier *const this, IEconItemSchema *pSchema)
{
  float v2; // xmm1_4

  this->m_flScaleSize = KeyValues::GetFloat(this->m_pKV, "scale_size", v2);
}


// CWeatherModifier::~CWeatherModifier  (line 554, @0x0000000002e50fb0, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CWeatherModifier::~CWeatherModifier(CWeatherModifier *const this)
{
  this->_vptr_CAssetModifier = off_479ED50;
  CAssetModifier::~CAssetModifier(this);
}


// CWeatherModifier::~CWeatherModifier  (line 554, @0x0000000002e50fd0, libserver.so)  // inlines: ~CWeatherModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CWeatherModifier::~CWeatherModifier(CWeatherModifier *const this)
{
  this->_vptr_CAssetModifier = off_479ED50;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CWeatherModifier::GetTypeName  (line 557, @0x0000000002e4e700, libserver.so)
// globals: CWeatherModifier::sm_pModifierName
const char *__fastcall CWeatherModifier::GetTypeName(const CWeatherModifier *const this)
{
  return CWeatherModifier::sm_pModifierName;
}


// CWeatherModifier::GetType  (line 557, @0x0000000002e5aa10, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CWeatherModifier>
// globals: CWeatherModifier::_type
unsigned int __fastcall CWeatherModifier::GetType(const CWeatherModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CWeatherModifier>();
  CWeatherModifier::_type = result;
  return result;
}


// CWeatherModifier::Init  (line 562, @0x0000000002e4ff10, libserver.so)
// calls: KeyValues::GetInt
// strings: "weather_type"
void __fastcall CWeatherModifier::Init(CWeatherModifier *const this, IEconItemSchema *pSchema)
{
  this->m_iWeatherType = KeyValues::GetInt(this->m_pKV, "weather_type", 0);
}


// CWeatherEffectModifier::~CWeatherEffectModifier  (line 573, @0x0000000002e50b50, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CWeatherEffectModifier::~CWeatherEffectModifier(CWeatherEffectModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A43B0;
  CAssetModifier::~CAssetModifier(this);
}


// CWeatherEffectModifier::~CWeatherEffectModifier  (line 573, @0x0000000002e50b70, libserver.so)  // inlines: ~CWeatherEffectModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CWeatherEffectModifier::~CWeatherEffectModifier(CWeatherEffectModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A43B0;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CWeatherEffectModifier::GetTypeName  (line 576, @0x0000000002e4e710, libserver.so)
// globals: CWeatherEffectModifier::sm_pModifierName
const char *__fastcall CWeatherEffectModifier::GetTypeName(const CWeatherEffectModifier *const this)
{
  return CWeatherEffectModifier::sm_pModifierName;
}


// CWeatherEffectModifier::GetType  (line 576, @0x0000000002e5b110, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CWeatherEffectModifier>
// globals: CWeatherEffectModifier::_type
unsigned int __fastcall CWeatherEffectModifier::GetType(const CWeatherEffectModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CWeatherEffectModifier>();
  CWeatherEffectModifier::_type = result;
  return result;
}


// CTerrainParticleEffectModifier::~CTerrainParticleEffectModifier  (line 584, @0x0000000002e50b00, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CTerrainParticleEffectModifier::~CTerrainParticleEffectModifier(
        CTerrainParticleEffectModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A4410;
  CAssetModifier::~CAssetModifier(this);
}


// CTerrainParticleEffectModifier::~CTerrainParticleEffectModifier  (line 584, @0x0000000002e50b20, libserver.so)  // inlines: ~CTerrainParticleEffectModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CTerrainParticleEffectModifier::~CTerrainParticleEffectModifier(
        CTerrainParticleEffectModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A4410;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CTerrainParticleEffectModifier::GetTypeName  (line 587, @0x0000000002e4e720, libserver.so)
// globals: CTerrainParticleEffectModifier::sm_pModifierName
const char *__fastcall CTerrainParticleEffectModifier::GetTypeName(const CTerrainParticleEffectModifier *const this)
{
  return CTerrainParticleEffectModifier::sm_pModifierName;
}


// CTerrainParticleEffectModifier::GetType  (line 587, @0x0000000002e5b180, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CTerrainParticleEffectModifier>
// globals: CTerrainParticleEffectModifier::_type
unsigned int __fastcall CTerrainParticleEffectModifier::GetType(const CTerrainParticleEffectModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CTerrainParticleEffectModifier>();
  CTerrainParticleEffectModifier::_type = result;
  return result;
}


// CNPCMaterialOverrideModifier::~CNPCMaterialOverrideModifier  (line 594, @0x0000000002e50ab0, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CNPCMaterialOverrideModifier::~CNPCMaterialOverrideModifier(CNPCMaterialOverrideModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A4470;
  CAssetModifier::~CAssetModifier(this);
}


// CNPCMaterialOverrideModifier::~CNPCMaterialOverrideModifier  (line 594, @0x0000000002e50ad0, libserver.so)  // inlines: ~CNPCMaterialOverrideModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CNPCMaterialOverrideModifier::~CNPCMaterialOverrideModifier(CNPCMaterialOverrideModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A4470;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CNPCMaterialOverrideModifier::GetTypeName  (line 597, @0x0000000002e4e730, libserver.so)
// globals: CNPCMaterialOverrideModifier::sm_pModifierName
const char *__fastcall CNPCMaterialOverrideModifier::GetTypeName(const CNPCMaterialOverrideModifier *const this)
{
  return CNPCMaterialOverrideModifier::sm_pModifierName;
}


// CNPCMaterialOverrideModifier::GetType  (line 597, @0x0000000002e5b260, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CNPCMaterialOverrideModifier>
// globals: CNPCMaterialOverrideModifier::_type
unsigned int __fastcall CNPCMaterialOverrideModifier::GetType(const CNPCMaterialOverrideModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CNPCMaterialOverrideModifier>();
  CNPCMaterialOverrideModifier::_type = result;
  return result;
}


// CWaterMaterialOverrideModifier::~CWaterMaterialOverrideModifier  (line 603, @0x0000000002e50a60, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CWaterMaterialOverrideModifier::~CWaterMaterialOverrideModifier(
        CWaterMaterialOverrideModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A44D0;
  CAssetModifier::~CAssetModifier(this);
}


// CWaterMaterialOverrideModifier::~CWaterMaterialOverrideModifier  (line 603, @0x0000000002e50a80, libserver.so)  // inlines: ~CWaterMaterialOverrideModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CWaterMaterialOverrideModifier::~CWaterMaterialOverrideModifier(
        CWaterMaterialOverrideModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A44D0;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CWaterMaterialOverrideModifier::GetTypeName  (line 606, @0x0000000002e4e740, libserver.so)
// globals: CWaterMaterialOverrideModifier::sm_pModifierName
const char *__fastcall CWaterMaterialOverrideModifier::GetTypeName(const CWaterMaterialOverrideModifier *const this)
{
  return CWaterMaterialOverrideModifier::sm_pModifierName;
}


// CWaterMaterialOverrideModifier::GetType  (line 606, @0x0000000002e5b340, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CWaterMaterialOverrideModifier>
// globals: CWaterMaterialOverrideModifier::_type
unsigned int __fastcall CWaterMaterialOverrideModifier::GetType(const CWaterMaterialOverrideModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CWaterMaterialOverrideModifier>();
  CWaterMaterialOverrideModifier::_type = result;
  return result;
}


// CMapModifier::~CMapModifier  (line 612, @0x0000000002e50f60, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CMapModifier::~CMapModifier(CMapModifier *const this)
{
  this->_vptr_CAssetModifier = off_479EDB0;
  CAssetModifier::~CAssetModifier(this);
}


// CMapModifier::~CMapModifier  (line 612, @0x0000000002e50f80, libserver.so)  // inlines: ~CMapModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CMapModifier::~CMapModifier(CMapModifier *const this)
{
  this->_vptr_CAssetModifier = off_479EDB0;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CMapModifier::GetTypeName  (line 615, @0x0000000002e4e750, libserver.so)
// globals: CMapModifier::sm_pModifierName
const char *__fastcall CMapModifier::GetTypeName(const CMapModifier *const this)
{
  return CMapModifier::sm_pModifierName;
}


// CMapModifier::GetType  (line 615, @0x0000000002e5b0a0, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CMapModifier>
// globals: CMapModifier::_type
unsigned int __fastcall CMapModifier::GetType(const CMapModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CMapModifier>();
  CMapModifier::_type = result;
  return result;
}


// CCustomKillEffectModifier::~CCustomKillEffectModifier  (line 623, @0x0000000002e50f10, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CCustomKillEffectModifier::~CCustomKillEffectModifier(CCustomKillEffectModifier *const this)
{
  this->_vptr_CAssetModifier = off_479EE10;
  CAssetModifier::~CAssetModifier(this);
}


// CCustomKillEffectModifier::~CCustomKillEffectModifier  (line 623, @0x0000000002e50f30, libserver.so)  // inlines: ~CCustomKillEffectModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CCustomKillEffectModifier::~CCustomKillEffectModifier(CCustomKillEffectModifier *const this)
{
  this->_vptr_CAssetModifier = off_479EE10;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CCustomKillEffectModifier::GetTypeName  (line 626, @0x0000000002e4e760, libserver.so)
// globals: CCustomKillEffectModifier::sm_pModifierName
const char *__fastcall CCustomKillEffectModifier::GetTypeName(const CCustomKillEffectModifier *const this)
{
  return CCustomKillEffectModifier::sm_pModifierName;
}


// CCustomKillEffectModifier::GetType  (line 626, @0x0000000002e5a8c0, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CCustomKillEffectModifier>
// globals: CCustomKillEffectModifier::_type
unsigned int __fastcall CCustomKillEffectModifier::GetType(const CCustomKillEffectModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CCustomKillEffectModifier>();
  CCustomKillEffectModifier::_type = result;
  return result;
}


// CBuffModifier::~CBuffModifier  (line 632, @0x0000000002e50ec0, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CBuffModifier::~CBuffModifier(CBuffModifier *const this)
{
  this->_vptr_CAssetModifier = off_479EE70;
  CAssetModifier::~CAssetModifier(this);
}


// CBuffModifier::~CBuffModifier  (line 632, @0x0000000002e50ee0, libserver.so)  // inlines: ~CBuffModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CBuffModifier::~CBuffModifier(CBuffModifier *const this)
{
  this->_vptr_CAssetModifier = off_479EE70;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CBuffModifier::GetTypeName  (line 635, @0x0000000002e4e770, libserver.so)
// globals: CBuffModifier::sm_pModifierName
const char *__fastcall CBuffModifier::GetTypeName(const CBuffModifier *const this)
{
  return CBuffModifier::sm_pModifierName;
}


// CBuffModifier::GetType  (line 635, @0x0000000002e5ad20, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CBuffModifier>
// globals: CBuffModifier::_type
unsigned int __fastcall CBuffModifier::GetType(const CBuffModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CBuffModifier>();
  CBuffModifier::_type = result;
  return result;
}


// CParticleCreateModifier::~CParticleCreateModifier  (line 642, @0x0000000002e50bf0, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CParticleCreateModifier::~CParticleCreateModifier(CParticleCreateModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A41D0;
  CAssetModifier::~CAssetModifier(this);
}


// CParticleCreateModifier::~CParticleCreateModifier  (line 642, @0x0000000002e50c10, libserver.so)  // inlines: ~CParticleCreateModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CParticleCreateModifier::~CParticleCreateModifier(CParticleCreateModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A41D0;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CParticleCreateModifier::GetTypeName  (line 645, @0x0000000002e4e780, libserver.so)
// globals: CParticleCreateModifier::sm_pModifierName
const char *__fastcall CParticleCreateModifier::GetTypeName(const CParticleCreateModifier *const this)
{
  return CParticleCreateModifier::sm_pModifierName;
}


// CParticleCreateModifier::GetType  (line 645, @0x0000000002e5a1c0, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CParticleCreateModifier>
// globals: CParticleCreateModifier::_type
unsigned int __fastcall CParticleCreateModifier::GetType(const CParticleCreateModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CParticleCreateModifier>();
  CParticleCreateModifier::_type = result;
  return result;
}


// CParticleCreateModifier::Compare  (line 661, @0x0000000002e50170, libserver.so)  // inlines: GetAsset, GetEntityClass
// calls: CUtlString::Get, V_stristr_fast(char const*,char const*)
bool __fastcall CParticleCreateModifier::Compare(const CParticleCreateModifier *const this, const char *pszAsset)
{
  CUtlString *p_m_strAsset; // r12
  const char *v4; // rax
  const char *v6; // rax

  p_m_strAsset = &this->m_strAsset;
  v4 = CUtlString::Get(&this->m_strAsset);
  if ( pszAsset == 0 || *pszAsset == 0 || v4 == 0 || *v4 == 0 )
    return 1;
  v6 = CUtlString::Get(p_m_strAsset);
  return V_stristr_fast(pszAsset, v6) != 0;
}


// CParticleModifier::~CParticleModifier  (line 692, @0x0000000002e50920, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CParticleModifier::~CParticleModifier(CParticleModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A4170;
  CAssetModifier::~CAssetModifier(this);
}


// CParticleModifier::~CParticleModifier  (line 692, @0x0000000002e50940, libserver.so)  // inlines: ~CParticleModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CParticleModifier::~CParticleModifier(CParticleModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A4170;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CParticleModifier::GetTypeName  (line 695, @0x0000000002e4e790, libserver.so)
// globals: CParticleModifier::sm_pModifierName
const char *__fastcall CParticleModifier::GetTypeName(const CParticleModifier *const this)
{
  return CParticleModifier::sm_pModifierName;
}


// CParticleModifier::GetType  (line 695, @0x0000000002e5a150, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CParticleModifier>
// globals: CParticleModifier::_type
unsigned int __fastcall CParticleModifier::GetType(const CParticleModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CParticleModifier>();
  CParticleModifier::_type = result;
  return result;
}


// CParticleCombined::~CParticleCombined  (line 713, @0x0000000002e50970, libserver.so)  // inlines: ~CParticleModifier
// calls: CAssetModifier::~CAssetModifier
void __fastcall CParticleCombined::~CParticleCombined(CParticleCombined *const this)
{
  this->_vptr_CAssetModifier = off_47A4170;
  CAssetModifier::~CAssetModifier(this);
}


// CParticleCombined::~CParticleCombined  (line 713, @0x0000000002e50990, libserver.so)  // inlines: ~CParticleCombined, ~CParticleModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CParticleCombined::~CParticleCombined(CParticleCombined *const this)
{
  this->_vptr_CAssetModifier = off_47A4170;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CParticleCombined::GetTypeName  (line 716, @0x0000000002e4e7a0, libserver.so)
// globals: CParticleCombined::sm_pModifierName
const char *__fastcall CParticleCombined::GetTypeName(const CParticleCombined *const this)
{
  return CParticleCombined::sm_pModifierName;
}


// CParticleCombined::GetType  (line 716, @0x0000000002e5a310, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CParticleCombined>
// globals: CParticleCombined::_type
unsigned int __fastcall CParticleCombined::GetType(const CParticleCombined *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CParticleCombined>();
  CParticleCombined::_type = result;
  return result;
}


// CParticleCombined::Init  (line 720, @0x0000000002e4ff40, libserver.so)
// calls: KeyValues::GetInt
void __fastcall CParticleCombined::Init(CParticleCombined *const this, IEconItemSchema *pSchema)
{
  this->m_nReplaceOrder = KeyValues::GetInt(this->m_pKV, "order", 0);
}


// CParticleSnapshotModifier::~CParticleSnapshotModifier  (line 730, @0x0000000002e50e70, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CParticleSnapshotModifier::~CParticleSnapshotModifier(CParticleSnapshotModifier *const this)
{
  this->_vptr_CAssetModifier = off_479EF30;
  CAssetModifier::~CAssetModifier(this);
}


// CParticleSnapshotModifier::~CParticleSnapshotModifier  (line 730, @0x0000000002e50e90, libserver.so)  // inlines: ~CParticleSnapshotModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CParticleSnapshotModifier::~CParticleSnapshotModifier(CParticleSnapshotModifier *const this)
{
  this->_vptr_CAssetModifier = off_479EF30;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CParticleSnapshotModifier::GetTypeName  (line 733, @0x0000000002e4e7b0, libserver.so)
// globals: CParticleSnapshotModifier::sm_pModifierName
const char *__fastcall CParticleSnapshotModifier::GetTypeName(const CParticleSnapshotModifier *const this)
{
  return CParticleSnapshotModifier::sm_pModifierName;
}


// CParticleSnapshotModifier::GetType  (line 733, @0x0000000002e5a230, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CParticleSnapshotModifier>
// globals: CParticleSnapshotModifier::_type
unsigned int __fastcall CParticleSnapshotModifier::GetType(const CParticleSnapshotModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CParticleSnapshotModifier>();
  CParticleSnapshotModifier::_type = result;
  return result;
}


// CParticleControlPointModifier::~CParticleControlPointModifier  (line 740, @0x0000000002e50e20, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CParticleControlPointModifier::~CParticleControlPointModifier(
        CParticleControlPointModifier *const this)
{
  this->_vptr_CAssetModifier = off_479EF90;
  CAssetModifier::~CAssetModifier(this);
}


// CParticleControlPointModifier::~CParticleControlPointModifier  (line 740, @0x0000000002e50e40, libserver.so)  // inlines: ~CParticleControlPointModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CParticleControlPointModifier::~CParticleControlPointModifier(
        CParticleControlPointModifier *const this)
{
  this->_vptr_CAssetModifier = off_479EF90;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CParticleControlPointModifier::GetTypeName  (line 743, @0x0000000002e4e7c0, libserver.so)
// globals: CParticleControlPointModifier::sm_pModifierName
const char *__fastcall CParticleControlPointModifier::GetTypeName(const CParticleControlPointModifier *const this)
{
  return CParticleControlPointModifier::sm_pModifierName;
}


// CParticleControlPointModifier::GetType  (line 743, @0x0000000002e5a2a0, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CParticleControlPointModifier>
// globals: CParticleControlPointModifier::_type
unsigned int __fastcall CParticleControlPointModifier::GetType(const CParticleControlPointModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CParticleControlPointModifier>();
  CParticleControlPointModifier::_type = result;
  return result;
}


// CParticleControlPointModifier::Init  (line 750, @0x0000000002e501d0, libserver.so)
// calls: KeyValues::GetInt, KeyValues::GetString, UTIL_StringToVector
// strings: "control_point_number", "cp_position", "0 0 0"
void __fastcall CParticleControlPointModifier::Init(
        CParticleControlPointModifier *const this,
        IEconItemSchema *pSchema)
{
  int Int; // eax
  KeyValues *m_pKV; // rdi
  const char *String; // rax

  Int = KeyValues::GetInt(this->m_pKV, "control_point_number", 0);
  m_pKV = this->m_pKV;
  this->m_iCPNumber = Int;
  String = KeyValues::GetString(m_pKV, "cp_position", "0 0 0", 0, 0);
  UTIL_StringToVector(&this->m_vControlPoint.x, String);
}


// CResponseCriteriaModifier::~CResponseCriteriaModifier  (line 764, @0x0000000002e50dd0, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CResponseCriteriaModifier::~CResponseCriteriaModifier(CResponseCriteriaModifier *const this)
{
  this->_vptr_CAssetModifier = off_479EFF0;
  CAssetModifier::~CAssetModifier(this);
}


// CResponseCriteriaModifier::~CResponseCriteriaModifier  (line 764, @0x0000000002e50df0, libserver.so)  // inlines: ~CResponseCriteriaModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CResponseCriteriaModifier::~CResponseCriteriaModifier(CResponseCriteriaModifier *const this)
{
  this->_vptr_CAssetModifier = off_479EFF0;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CResponseCriteriaModifier::GetTypeName  (line 767, @0x0000000002e4e7d0, libserver.so)
// globals: CResponseCriteriaModifier::sm_pModifierName
const char *__fastcall CResponseCriteriaModifier::GetTypeName(const CResponseCriteriaModifier *const this)
{
  return CResponseCriteriaModifier::sm_pModifierName;
}


// CResponseCriteriaModifier::GetType  (line 767, @0x0000000002e5a850, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CResponseCriteriaModifier>
// globals: CResponseCriteriaModifier::_type
unsigned int __fastcall CResponseCriteriaModifier::GetType(const CResponseCriteriaModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CResponseCriteriaModifier>();
  CResponseCriteriaModifier::_type = result;
  return result;
}


// CPortraitBackgroundModelModifier::~CPortraitBackgroundModelModifier  (line 774, @0x0000000002e50ce0, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CPortraitBackgroundModelModifier::~CPortraitBackgroundModelModifier(
        CPortraitBackgroundModelModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A3FF0;
  CAssetModifier::~CAssetModifier(this);
}


// CPortraitBackgroundModelModifier::~CPortraitBackgroundModelModifier  (line 774, @0x0000000002e50d00, libserver.so)  // inlines: ~CPortraitBackgroundModelModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CPortraitBackgroundModelModifier::~CPortraitBackgroundModelModifier(
        CPortraitBackgroundModelModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A3FF0;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CPortraitBackgroundModelModifier::GetTypeName  (line 777, @0x0000000002e4e7e0, libserver.so)
// globals: CPortraitBackgroundModelModifier::sm_pModifierName
const char *__fastcall CPortraitBackgroundModelModifier::GetTypeName(
        const CPortraitBackgroundModelModifier *const this)
{
  return CPortraitBackgroundModelModifier::sm_pModifierName;
}


// CPortraitBackgroundModelModifier::GetType  (line 777, @0x0000000002e5aaf0, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundModelModifier>
// globals: CPortraitBackgroundModelModifier::_type
unsigned int __fastcall CPortraitBackgroundModelModifier::GetType(const CPortraitBackgroundModelModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundModelModifier>();
  CPortraitBackgroundModelModifier::_type = result;
  return result;
}


// CPortraitBackgroundCameraModifier::GetTypeName  (line 787, @0x0000000002e4e7f0, libserver.so)
// globals: CPortraitBackgroundCameraModifier::sm_pModifierName
const char *__fastcall CPortraitBackgroundCameraModifier::GetTypeName(
        const CPortraitBackgroundCameraModifier *const this)
{
  return CPortraitBackgroundCameraModifier::sm_pModifierName;
}


// CPortraitBackgroundCameraModifier::GetType  (line 787, @0x0000000002e5abd0, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundCameraModifier>
// globals: CPortraitBackgroundCameraModifier::_type
unsigned int __fastcall CPortraitBackgroundCameraModifier::GetType(const CPortraitBackgroundCameraModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundCameraModifier>();
  CPortraitBackgroundCameraModifier::_type = result;
  return result;
}


// CPortraitBackgroundLightModifier::GetTypeName  (line 803, @0x0000000002e4e800, libserver.so)
// globals: CPortraitBackgroundLightModifier::sm_pModifierName
const char *__fastcall CPortraitBackgroundLightModifier::GetTypeName(
        const CPortraitBackgroundLightModifier *const this)
{
  return CPortraitBackgroundLightModifier::sm_pModifierName;
}


// CPortraitBackgroundLightModifier::GetType  (line 803, @0x0000000002e5ab60, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundLightModifier>
// globals: CPortraitBackgroundLightModifier::_type
unsigned int __fastcall CPortraitBackgroundLightModifier::GetType(const CPortraitBackgroundLightModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundLightModifier>();
  CPortraitBackgroundLightModifier::_type = result;
  return result;
}


// CPortraitBackgroundParticleModifier::~CPortraitBackgroundParticleModifier  (line 816, @0x0000000002e50ba0, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CPortraitBackgroundParticleModifier::~CPortraitBackgroundParticleModifier(
        CPortraitBackgroundParticleModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A4230;
  CAssetModifier::~CAssetModifier(this);
}


// CPortraitBackgroundParticleModifier::~CPortraitBackgroundParticleModifier  (line 816, @0x0000000002e50bc0, libserver.so)  // inlines: ~CPortraitBackgroundParticleModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CPortraitBackgroundParticleModifier::~CPortraitBackgroundParticleModifier(
        CPortraitBackgroundParticleModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A4230;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CPortraitBackgroundParticleModifier::GetTypeName  (line 819, @0x0000000002e4e810, libserver.so)
// globals: CPortraitBackgroundParticleModifier::sm_pModifierName
const char *__fastcall CPortraitBackgroundParticleModifier::GetTypeName(
        const CPortraitBackgroundParticleModifier *const this)
{
  return CPortraitBackgroundParticleModifier::sm_pModifierName;
}


// CPortraitBackgroundParticleModifier::GetType  (line 819, @0x0000000002e5ac40, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundParticleModifier>
// globals: CPortraitBackgroundParticleModifier::_type
unsigned int __fastcall CPortraitBackgroundParticleModifier::GetType(
        const CPortraitBackgroundParticleModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundParticleModifier>();
  CPortraitBackgroundParticleModifier::_type = result;
  return result;
}


// CPortraitBackgroundMapModifier::~CPortraitBackgroundMapModifier  (line 826, @0x0000000002e50d80, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CPortraitBackgroundMapModifier::~CPortraitBackgroundMapModifier(
        CPortraitBackgroundMapModifier *const this)
{
  this->_vptr_CAssetModifier = off_479F050;
  CAssetModifier::~CAssetModifier(this);
}


// CPortraitBackgroundMapModifier::~CPortraitBackgroundMapModifier  (line 826, @0x0000000002e50da0, libserver.so)  // inlines: ~CPortraitBackgroundMapModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CPortraitBackgroundMapModifier::~CPortraitBackgroundMapModifier(
        CPortraitBackgroundMapModifier *const this)
{
  this->_vptr_CAssetModifier = off_479F050;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CPortraitBackgroundMapModifier::GetTypeName  (line 829, @0x0000000002e4e820, libserver.so)
// globals: CPortraitBackgroundMapModifier::sm_pModifierName
const char *__fastcall CPortraitBackgroundMapModifier::GetTypeName(const CPortraitBackgroundMapModifier *const this)
{
  return CPortraitBackgroundMapModifier::sm_pModifierName;
}


// CPortraitBackgroundMapModifier::GetType  (line 829, @0x0000000002e5acb0, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundMapModifier>
// globals: CPortraitBackgroundMapModifier::_type
unsigned int __fastcall CPortraitBackgroundMapModifier::GetType(const CPortraitBackgroundMapModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CPortraitBackgroundMapModifier>();
  CPortraitBackgroundMapModifier::_type = result;
  return result;
}


// CPetModifier::~CPetModifier  (line 848, @0x0000000002e51460, libserver.so)  // inlines: ~CUtlString
// calls: CUtlString::FreeMemoryBlock, CAssetModifier::~CAssetModifier
void __fastcall CPetModifier::~CPetModifier(CPetModifier *const this)
{
  CUtlString *p_m_strPickupItemModel; // rdi

  p_m_strPickupItemModel = &this->m_strPickupItemModel;
  p_m_strPickupItemModel[-6].m_pString = off_47A4290;
  if ( this->m_strPickupItemModel.m_pString != 0 )
    CUtlString::FreeMemoryBlock(p_m_strPickupItemModel);
  CAssetModifier::~CAssetModifier(this);
}


// CPetModifier::~CPetModifier  (line 848, @0x0000000002e53100, libserver.so)  // inlines: ~CPetModifier, ~CUtlString
// calls: CUtlString::FreeMemoryBlock, CAssetModifier::~CAssetModifier, operator delete
void __fastcall CPetModifier::~CPetModifier(CPetModifier *const this)
{
  CUtlString *p_m_strPickupItemModel; // rdi

  p_m_strPickupItemModel = &this->m_strPickupItemModel;
  p_m_strPickupItemModel[-6].m_pString = off_47A4290;
  if ( this->m_strPickupItemModel.m_pString != 0 )
    CUtlString::FreeMemoryBlock(p_m_strPickupItemModel);
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CPetModifier::GetTypeName  (line 851, @0x0000000002e4e830, libserver.so)
// globals: CPetModifier::sm_pModifierName
const char *__fastcall CPetModifier::GetTypeName(const CPetModifier *const this)
{
  return CPetModifier::sm_pModifierName;
}


// CPetModifier::GetType  (line 851, @0x0000000002e5ae70, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CPetModifier>
// globals: CPetModifier::_type
unsigned int __fastcall CPetModifier::GetType(const CPetModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CPetModifier>();
  CPetModifier::_type = result;
  return result;
}


// CPetModifier::Init  (line 853, @0x0000000002e51bb0, libserver.so)  // inlines: GetBool, StringFieldToInt
// calls: KeyValues::GetString, CUtlString::operator=, KeyValues::GetInt, KeyValues::GetFloat, StringFieldToInt, UTIL_StringToVector
// strings: "pickup_item", "strange_type", "ingame_scale", "loadout_scale", "levelup_rule", "compendium_event_id" (9 total)
// globals: g_szPetLevelupRules
void __fastcall CPetModifier::Init(CPetModifier *const this, IEconItemSchema *pSchema)
{
  const char *String; // rax
  kill_eater_event_t Int; // eax
  KeyValues *m_pKV; // rdi
  int v6; // eax
  KeyValues *v7; // rdi
  float v8; // xmm1_4
  float Float; // xmm0_4
  KeyValues *v10; // rdi
  float v11; // xmm1_4
  float v12; // xmm0_4
  KeyValues *v13; // rdi
  const char *v14; // rax
  bool v15; // r8
  __int32 v16; // edx
  KeyValues *v17; // rdi
  int v18; // eax
  KeyValues *v19; // rdi
  int v20; // eax
  KeyValues *v21; // rdi
  const char *v22; // rax

  String = KeyValues::GetString(this->m_pKV, "pickup_item", 0, 0, 0);
  CUtlString::operator=(&this->m_strPickupItemModel, String);
  Int = KeyValues::GetInt(this->m_pKV, "strange_type", -1);
  m_pKV = this->m_pKV;
  this->m_nStrangeType = Int;
  v6 = KeyValues::GetInt(m_pKV, "skin", 0);
  v7 = this->m_pKV;
  this->m_nSkin = v6;
  Float = KeyValues::GetFloat(v7, "ingame_scale", v8);
  v10 = this->m_pKV;
  this->m_flIngameModelScale = Float;
  v12 = KeyValues::GetFloat(v10, "loadout_scale", v11);
  v13 = this->m_pKV;
  this->m_flLoadoutModelScale = v12;
  v14 = KeyValues::GetString(v13, "levelup_rule", "", 0, 0);
  v16 = 0;
  if ( v14 != 0 && *v14 != 0 )
  {
    LOBYTE(v16) = 3;
    v16 = StringFieldToInt(v14, g_szPetLevelupRules, v16, 0, v15);
  }
  v17 = this->m_pKV;
  this->m_nLevelupRule = v16;
  v18 = KeyValues::GetInt(v17, "compendium_event_id", 0);
  v19 = this->m_pKV;
  this->m_nCompendiumEventID = v18;
  v20 = KeyValues::GetInt(v19, "supports_coop_teleport", 0);
  v21 = this->m_pKV;
  this->m_bSupportsCoopTeleport = v20 != 0;
  v22 = KeyValues::GetString(v21, "loadout_default_offset", "0 0 0", 0, 0);
  UTIL_StringToVector(&this->m_vecDefault.x, v22);
}


// CHealthBarModifier::~CHealthBarModifier  (line 916, @0x0000000002e509c0, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CHealthBarModifier::~CHealthBarModifier(CHealthBarModifier *const this)
{
  this->_vptr_CAssetModifier = off_479F0B0;
  CAssetModifier::~CAssetModifier(this);
}


// CHealthBarModifier::~CHealthBarModifier  (line 916, @0x0000000002e509e0, libserver.so)  // inlines: ~CHealthBarModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CHealthBarModifier::~CHealthBarModifier(CHealthBarModifier *const this)
{
  this->_vptr_CAssetModifier = off_479F0B0;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CHealthBarModifier::GetTypeName  (line 919, @0x0000000002e4e840, libserver.so)
// globals: CHealthBarModifier::sm_pModifierName
const char *__fastcall CHealthBarModifier::GetTypeName(const CHealthBarModifier *const this)
{
  return CHealthBarModifier::sm_pModifierName;
}


// CHealthBarModifier::GetType  (line 919, @0x0000000002e5aee0, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CHealthBarModifier>
// globals: CHealthBarModifier::_type
unsigned int __fastcall CHealthBarModifier::GetType(const CHealthBarModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CHealthBarModifier>();
  CHealthBarModifier::_type = result;
  return result;
}


// CHealthBarModifier::Init  (line 924, @0x0000000002e4ff70, libserver.so)
// calls: KeyValues::GetInt
void __fastcall CHealthBarModifier::Init(CHealthBarModifier *const this, IEconItemSchema *pSchema)
{
  this->m_nHealthBarOffset = KeyValues::GetInt(this->m_pKV, "offset", 0);
}


// CEntityHealthBarModifier::~CEntityHealthBarModifier  (line 934, @0x0000000002e50a10, libserver.so)  // inlines: ~CHealthBarModifier
// calls: CAssetModifier::~CAssetModifier
void __fastcall CEntityHealthBarModifier::~CEntityHealthBarModifier(CEntityHealthBarModifier *const this)
{
  this->_vptr_CAssetModifier = off_479F0B0;
  CAssetModifier::~CAssetModifier(this);
}


// CEntityHealthBarModifier::~CEntityHealthBarModifier  (line 934, @0x0000000002e50a30, libserver.so)  // inlines: ~CEntityHealthBarModifier, ~CHealthBarModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CEntityHealthBarModifier::~CEntityHealthBarModifier(CEntityHealthBarModifier *const this)
{
  this->_vptr_CAssetModifier = off_479F0B0;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CEntityHealthBarModifier::GetTypeName  (line 937, @0x0000000002e4e850, libserver.so)
// globals: CEntityHealthBarModifier::sm_pModifierName
const char *__fastcall CEntityHealthBarModifier::GetTypeName(const CEntityHealthBarModifier *const this)
{
  return CEntityHealthBarModifier::sm_pModifierName;
}


// CEntityHealthBarModifier::GetType  (line 937, @0x0000000002e5af50, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CEntityHealthBarModifier>
// globals: CEntityHealthBarModifier::_type
unsigned int __fastcall CEntityHealthBarModifier::GetType(const CEntityHealthBarModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CEntityHealthBarModifier>();
  CEntityHealthBarModifier::_type = result;
  return result;
}


// CEntityHealthBarModifier::Compare  (line 938, @0x0000000002e50140, libserver.so)  // inlines: GetAsset
// calls: CUtlString::Get, V_stristr_fast(char const*,char const*)
bool __fastcall CEntityHealthBarModifier::Compare(const CEntityHealthBarModifier *const this, const char *pszAsset)
{
  const char *v3; // rax

  v3 = CUtlString::Get(&this->m_strAsset);
  return V_stristr_fast(pszAsset, v3) != 0;
}


// CPortraitModifier_Game::GetTypeName  (line 948, @0x0000000002e4e860, libserver.so)
// globals: CPortraitModifier_Game::sm_pModifierName
const char *__fastcall CPortraitModifier_Game::GetTypeName(const CPortraitModifier_Game *const this)
{
  return CPortraitModifier_Game::sm_pModifierName;
}


// CPortraitModifier_Game::GetType  (line 948, @0x0000000002e5afc0, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CPortraitModifier_Game>
// globals: CPortraitModifier_Game::_type
unsigned int __fastcall CPortraitModifier_Game::GetType(const CPortraitModifier_Game *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CPortraitModifier_Game>();
  CPortraitModifier_Game::_type = result;
  return result;
}


// CPortraitModifier_Game::Compare  (line 959, @0x0000000002e531a0, libserver.so)  // inlines: Compare, GetAsset, V_isempty
// calls: CUtlString::Get, V_stricmp_fast
bool __fastcall CPortraitModifier_Game::Compare(const CPortraitModifier_Game *const this, const char *pszAsset)
{
  CUtlString *p_m_strAsset; // rbx
  const char *v4; // rax
  const char *v6; // rax

  p_m_strAsset = &this->m_strAsset;
  v4 = CUtlString::Get(&this->m_strAsset);
  if ( v4 == 0 || *v4 == 0 )
    return 1;
  v6 = CUtlString::Get(p_m_strAsset);
  return V_stricmp_fast(v6, pszAsset) == 0;
}


// CAdditionalWearableModifier::~CAdditionalWearableModifier  (line 972, @0x0000000002e50c90, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CAdditionalWearableModifier::~CAdditionalWearableModifier(CAdditionalWearableModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A4050;
  CAssetModifier::~CAssetModifier(this);
}


// CAdditionalWearableModifier::~CAdditionalWearableModifier  (line 972, @0x0000000002e50cb0, libserver.so)  // inlines: ~CAdditionalWearableModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CAdditionalWearableModifier::~CAdditionalWearableModifier(CAdditionalWearableModifier *const this)
{
  this->_vptr_CAssetModifier = off_47A4050;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CAdditionalWearableModifier::GetTypeName  (line 975, @0x0000000002e4e870, libserver.so)
// globals: CAdditionalWearableModifier::sm_pModifierName
const char *__fastcall CAdditionalWearableModifier::GetTypeName(const CAdditionalWearableModifier *const this)
{
  return CAdditionalWearableModifier::sm_pModifierName;
}


// CAdditionalWearableModifier::GetType  (line 975, @0x0000000002e5b030, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CAdditionalWearableModifier>
// globals: CAdditionalWearableModifier::_type
unsigned int __fastcall CAdditionalWearableModifier::GetType(const CAdditionalWearableModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CAdditionalWearableModifier>();
  CAdditionalWearableModifier::_type = result;
  return result;
}


// CArcanaLevelModifier::~CArcanaLevelModifier  (line 981, @0x0000000002e50d30, libserver.so)
// calls: CAssetModifier::~CAssetModifier
void __fastcall CArcanaLevelModifier::~CArcanaLevelModifier(CArcanaLevelModifier *const this)
{
  this->_vptr_CAssetModifier = off_479F170;
  CAssetModifier::~CAssetModifier(this);
}


// CArcanaLevelModifier::~CArcanaLevelModifier  (line 981, @0x0000000002e50d50, libserver.so)  // inlines: ~CArcanaLevelModifier
// calls: CAssetModifier::~CAssetModifier, operator delete
void __fastcall CArcanaLevelModifier::~CArcanaLevelModifier(CArcanaLevelModifier *const this)
{
  this->_vptr_CAssetModifier = off_479F170;
  CAssetModifier::~CAssetModifier(this);
  operator delete(this);
}


// CArcanaLevelModifier::GetTypeName  (line 984, @0x0000000002e4e880, libserver.so)
// globals: CArcanaLevelModifier::sm_pModifierName
const char *__fastcall CArcanaLevelModifier::GetTypeName(const CArcanaLevelModifier *const this)
{
  return CArcanaLevelModifier::sm_pModifierName;
}


// CArcanaLevelModifier::GetType  (line 984, @0x0000000002e5b1f0, libserver.so)  // inlines: StaticType
// calls: GetAssetModifierTypeUniqueIdentifier<CArcanaLevelModifier>
// globals: CArcanaLevelModifier::_type
unsigned int __fastcall CArcanaLevelModifier::GetType(const CArcanaLevelModifier *const this)
{
  unsigned int result; // eax

  result = GetAssetModifierTypeUniqueIdentifier<CArcanaLevelModifier>();
  CArcanaLevelModifier::_type = result;
  return result;
}


// CArcanaLevelModifier::Compare  (line 991, @0x0000000002e531f0, libserver.so)  // inlines: Compare, GetAsset
// calls: CUtlString::Get, V_stricmp_fast
bool __fastcall CArcanaLevelModifier::Compare(const CArcanaLevelModifier *const this, const char *pszAsset)
{
  CUtlString *p_m_strAsset; // rbx
  const char *v4; // rdx
  bool result; // al
  const char *v6; // rax

  p_m_strAsset = &this->m_strAsset;
  v4 = CUtlString::Get(&this->m_strAsset);
  result = 1;
  if ( v4 != 0 && *v4 != 0 )
  {
    v6 = CUtlString::Get(p_m_strAsset);
    return V_stricmp_fast(v6, pszAsset) == 0;
  }
  return result;
}


// CArcanaLevelModifier::Init  (line 1000, @0x0000000002e4ffa0, libserver.so)
// calls: KeyValues::GetInt
void __fastcall CArcanaLevelModifier::Init(CArcanaLevelModifier *const this, IEconItemSchema *pSchema)
{
  this->m_nLevel = KeyValues::GetInt(this->m_pKV, "level", 0);
}


// GetAssetModifier<CDOTAItemDefinition, CHeroModelChangeModifier>  (line 1139, @0x00000000022519b0, libserver.so)  // inlines: CAssetModifierIndex, Element, Find, GetAssetModifier<CHeroModelChangeModifier>, GetAssetModifiers<CHeroModelChangeModifier>, HasAssetModifierContainer, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: CHeroModelChangeModifier::StaticType, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: AddInfoForEconItem
const CHeroModelChangeModifier *__fastcall GetAssetModifier<CDOTAItemDefinition,CHeroModelChangeModifier>(
        const CDOTAItemDefinition *pContainer)
{
  const CHeroModelChangeModifier *result; // rax
  CEconItemAssetInfo *m_pAssetInfo; // rbx
  unsigned __int16 v3; // ax
  __int64 v4; // rcx
  unsigned __int16 v5; // dx
  __int64 v6; // rcx
  __int64 v7; // rdx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t v8; // [rsp-28h] [rbp-28h] BYREF

  if ( pContainer == 0 )
    return 0;
  result = 0;
  m_pAssetInfo = pContainer->m_pAssetInfo;
  if ( m_pAssetInfo != 0 )
  {
    v8.key.m_nType = CHeroModelChangeModifier::StaticType();
    v3 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
           &m_pAssetInfo->m_AssetModifiers.m_mapAssetModifiers.m_Tree,
           &v8);
    v4 = v3;
    v5 = v3;
    result = 0;
    if ( v4 < m_pAssetInfo->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount
      && v5 <= m_pAssetInfo->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index
      && v5 != 0xFFFF )
    {
      v6 = &m_pAssetInfo->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v4];
      if ( v5 != *v6 )
      {
        v7 = *(v6 + 16);
        if ( v7 != 0 && *v7 - 1 >= 0 )
          return *(*(v7 + 8) + 8LL * (*v7 - 1));
      }
    }
  }
  return result;
}


// GetAssetModifier<CDOTAItemDefinition, CAdditionalWearableModifier>  (line 1139, @0x0000000002251a40, libserver.so)  // inlines: CAssetModifierIndex, Element, Find, GetAssetModifier<CAdditionalWearableModifier>, GetAssetModifiers<CAdditionalWearableModifier>, HasAssetModifierContainer, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: CAdditionalWearableModifier::StaticType, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: AddInfoForEconItem
const CAdditionalWearableModifier *__fastcall GetAssetModifier<CDOTAItemDefinition,CAdditionalWearableModifier>(
        const CDOTAItemDefinition *pContainer)
{
  const CAdditionalWearableModifier *result; // rax
  CEconItemAssetInfo *m_pAssetInfo; // rbx
  unsigned __int16 v3; // ax
  __int64 v4; // rcx
  unsigned __int16 v5; // dx
  __int64 v6; // rcx
  __int64 v7; // rdx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t v8; // [rsp-28h] [rbp-28h] BYREF

  if ( pContainer == 0 )
    return 0;
  result = 0;
  m_pAssetInfo = pContainer->m_pAssetInfo;
  if ( m_pAssetInfo != 0 )
  {
    v8.key.m_nType = CAdditionalWearableModifier::StaticType();
    v3 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
           &m_pAssetInfo->m_AssetModifiers.m_mapAssetModifiers.m_Tree,
           &v8);
    v4 = v3;
    v5 = v3;
    result = 0;
    if ( v4 < m_pAssetInfo->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount
      && v5 <= m_pAssetInfo->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index
      && v5 != 0xFFFF )
    {
      v6 = &m_pAssetInfo->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v4];
      if ( v5 != *v6 )
      {
        v7 = *(v6 + 16);
        if ( v7 != 0 && *v7 - 1 >= 0 )
          return *(*(v7 + 8) + 8LL * (*v7 - 1));
      }
    }
  }
  return result;
}


// GetAssetModifier<CDOTAItemDefinition, CParticleSnapshotModifier>  (line 1139, @0x0000000002251b50, libserver.so)  // inlines: CAssetModifierIndex, Element, Find, GetAssetModifier<CParticleSnapshotModifier>, GetAssetModifiers<CParticleSnapshotModifier>, HasAssetModifierContainer, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: CParticleSnapshotModifier::StaticType, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: AddInfoForEconItem
const CParticleSnapshotModifier *__fastcall GetAssetModifier<CDOTAItemDefinition,CParticleSnapshotModifier>(
        const CDOTAItemDefinition *pContainer)
{
  const CParticleSnapshotModifier *result; // rax
  CEconItemAssetInfo *m_pAssetInfo; // rbx
  unsigned __int16 v3; // ax
  __int64 v4; // rcx
  unsigned __int16 v5; // dx
  __int64 v6; // rcx
  __int64 v7; // rdx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t v8; // [rsp-28h] [rbp-28h] BYREF

  if ( pContainer == 0 )
    return 0;
  result = 0;
  m_pAssetInfo = pContainer->m_pAssetInfo;
  if ( m_pAssetInfo != 0 )
  {
    v8.key.m_nType = CParticleSnapshotModifier::StaticType();
    v3 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
           &m_pAssetInfo->m_AssetModifiers.m_mapAssetModifiers.m_Tree,
           &v8);
    v4 = v3;
    v5 = v3;
    result = 0;
    if ( v4 < m_pAssetInfo->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount
      && v5 <= m_pAssetInfo->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index
      && v5 != 0xFFFF )
    {
      v6 = &m_pAssetInfo->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v4];
      if ( v5 != *v6 )
      {
        v7 = *(v6 + 16);
        if ( v7 != 0 && *v7 - 1 >= 0 )
          return *(*(v7 + 8) + 8LL * (*v7 - 1));
      }
    }
  }
  return result;
}


// GetAssetModifier<CEconItemView, CStrangeControlPointModifier>  (line 1139, @0x00000000026b72c0, libserver.so)  // inlines: CAssetModifierIndex, Element, Find, GetAssetModifier<CStrangeControlPointModifier>, GetAssetModifiers<CStrangeControlPointModifier>, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: CStrangeControlPointModifier::StaticType, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CDOTA_ParticleManager::CreateParticle
const CStrangeControlPointModifier *__fastcall GetAssetModifier<CEconItemView,CStrangeControlPointModifier>(
        const CEconItemView *pContainer)
{
  unsigned __int16 v2; // ax
  __int64 v3; // rcx
  unsigned __int16 v4; // dx
  const CStrangeControlPointModifier *result; // rax
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v6; // rcx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::ElemType_t elem; // rdx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t search; // [rsp+0h] [rbp-20h] BYREF

  if ( pContainer == 0 )
    return 0;
  search.key.m_nType = CStrangeControlPointModifier::StaticType();
  v2 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
         &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree,
         &search);
  v3 = v2;
  v4 = v2;
  result = 0;
  if ( v3 < pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount
    && v4 <= pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index
    && v4 != 0xFFFF )
  {
    v6 = &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v3];
    if ( v4 != v6->m_Left )
    {
      elem = v6->m_Data.elem;
      if ( elem != 0 && elem->m_Size - 1 >= 0 )
        return elem->m_Memory.m_pMemory[elem->m_Size - 1];
    }
  }
  return result;
}


// GetAssetModifier<CDOTA_BaseNPC, CHexModelModifier>  (line 1139, @0x000000000298d6b0, libserver.so)  // inlines: CAssetModifierIndex, Element, Find, GetAssetModifier<CHexModelModifier>, GetAssetModifiers<CHexModelModifier>, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: CHexModelModifier::StaticType, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CDOTA_BaseNPC_Hero::OnAssetModifiersUpdated
const CHexModelModifier *__fastcall GetAssetModifier<CDOTA_BaseNPC,CHexModelModifier>(const CDOTA_BaseNPC *pContainer)
{
  unsigned __int16 v2; // ax
  __int64 v3; // rcx
  unsigned __int16 v4; // dx
  const CHexModelModifier *result; // rax
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v6; // rcx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::ElemType_t elem; // rdx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t search; // [rsp+0h] [rbp-20h] BYREF

  if ( pContainer == 0 )
    return 0;
  search.key.m_nType = CHexModelModifier::StaticType();
  v2 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
         &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree,
         &search);
  v3 = v2;
  v4 = v2;
  result = 0;
  if ( v3 < pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount
    && v4 <= pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index
    && v4 != 0xFFFF )
  {
    v6 = &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v3];
    if ( v4 != v6->m_Left )
    {
      elem = v6->m_Data.elem;
      if ( elem != 0 && elem->m_Size - 1 >= 0 )
        return elem->m_Memory.m_pMemory[elem->m_Size - 1];
    }
  }
  return result;
}


// GetAssetModifier<CEconItemView, CAbilityNameModifier>  (line 1139, @0x000000000298d8b0, libserver.so)  // inlines: CAssetModifierIndex, Element, Find, GetAssetModifier<CAbilityNameModifier>, GetAssetModifiers<CAbilityNameModifier>, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: CAbilityNameModifier::StaticType, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CDOTA_BaseNPC_Hero::UpdateActionItemSlot, CDOTAHeroEconItemAbility::GetAbilityName
const CAbilityNameModifier *__fastcall GetAssetModifier<CEconItemView,CAbilityNameModifier>(
        const CEconItemView *pContainer)
{
  unsigned __int16 v2; // ax
  __int64 v3; // rcx
  unsigned __int16 v4; // dx
  const CAbilityNameModifier *result; // rax
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v6; // rcx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::ElemType_t elem; // rdx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t search; // [rsp+0h] [rbp-20h] BYREF

  if ( pContainer == 0 )
    return 0;
  search.key.m_nType = CAbilityNameModifier::StaticType();
  v2 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
         &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree,
         &search);
  v3 = v2;
  v4 = v2;
  result = 0;
  if ( v3 < pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount
    && v4 <= pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index
    && v4 != 0xFFFF )
  {
    v6 = &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v3];
    if ( v4 != v6->m_Left )
    {
      elem = v6->m_Data.elem;
      if ( elem != 0 && elem->m_Size - 1 >= 0 )
        return elem->m_Memory.m_pMemory[elem->m_Size - 1];
    }
  }
  return result;
}


// GetAssetModifier<CDOTA_BaseNPC, CPetModifier>  (line 1139, @0x000000000298d950, libserver.so)  // inlines: CAssetModifierIndex, Element, Find, GetAssetModifier<CPetModifier>, GetAssetModifiers<CPetModifier>, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: CPetModifier::StaticType, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CDOTA_BaseNPC_Hero::Precache, CDOTA_BaseNPC_Pet::Spawn
const CPetModifier *__fastcall GetAssetModifier<CDOTA_BaseNPC,CPetModifier>(const CDOTA_BaseNPC *pContainer)
{
  unsigned __int16 v2; // ax
  __int64 v3; // rcx
  unsigned __int16 v4; // dx
  const CPetModifier *result; // rax
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v6; // rcx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::ElemType_t elem; // rdx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t search; // [rsp+0h] [rbp-20h] BYREF

  if ( pContainer == 0 )
    return 0;
  search.key.m_nType = CPetModifier::StaticType();
  v2 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
         &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree,
         &search);
  v3 = v2;
  v4 = v2;
  result = 0;
  if ( v3 < pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount
    && v4 <= pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index
    && v4 != 0xFFFF )
  {
    v6 = &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v3];
    if ( v4 != v6->m_Left )
    {
      elem = v6->m_Data.elem;
      if ( elem != 0 && elem->m_Size - 1 >= 0 )
        return elem->m_Memory.m_pMemory[elem->m_Size - 1];
    }
  }
  return result;
}


// GetAssetModifier<CDOTA_Unit_Courier, CEntityScaleModifier>  (line 1139, @0x0000000002ae7150, libserver.so)  // inlines: CAssetModifierIndex, Element, Find, GetAssetModifier<CEntityScaleModifier>, GetAssetModifiers<CEntityScaleModifier>, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: CEntityScaleModifier::StaticType, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CDOTA_Unit_Courier::OnAssetModifiersUpdated
const CEntityScaleModifier *__fastcall GetAssetModifier<CDOTA_Unit_Courier,CEntityScaleModifier>(
        const CDOTA_Unit_Courier *pContainer)
{
  unsigned __int16 v2; // ax
  __int64 v3; // rcx
  unsigned __int16 v4; // dx
  const CEntityScaleModifier *result; // rax
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v6; // rcx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::ElemType_t elem; // rdx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t search; // [rsp+0h] [rbp-20h] BYREF

  if ( pContainer == 0 )
    return 0;
  search.key.m_nType = CEntityScaleModifier::StaticType();
  v2 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
         &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree,
         &search);
  v3 = v2;
  v4 = v2;
  result = 0;
  if ( v3 < pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount
    && v4 <= pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index
    && v4 != 0xFFFF )
  {
    v6 = &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v3];
    if ( v4 != v6->m_Left )
    {
      elem = v6->m_Data.elem;
      if ( elem != 0 && elem->m_Size - 1 >= 0 )
        return elem->m_Memory.m_pMemory[elem->m_Size - 1];
    }
  }
  return result;
}


// GetAssetModifier<CDOTA_BaseNPC, CCustomKillEffectModifier>  (line 1139, @0x0000000002d46f30, libserver.so)  // inlines: Element, Find, GetAssetModifier<CCustomKillEffectModifier>, GetAssetModifiers<CCustomKillEffectModifier>, IsIdxValid, IsValidIndex, LeftChild, RightChild, operator[]
// calls: CCustomKillEffectModifier::StaticType
// callers: CDOTA_Unit_Hero_Terrorblade::Spawn
const CCustomKillEffectModifier *__fastcall GetAssetModifier<CDOTA_BaseNPC,CCustomKillEffectModifier>(
        const CDOTA_BaseNPC *pContainer)
{
  __int16 v2; // ax
  unsigned __int16 m_Root; // cx
  __int64 v4; // rdx
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v5; // rsi
  const CCustomKillEffectModifier *result; // rax
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v7; // rdx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::ElemType_t elem; // rdx

  if ( pContainer == 0 )
    return 0;
  v2 = CCustomKillEffectModifier::StaticType();
  m_Root = pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Root;
  if ( m_Root == 0xFFFF )
  {
LABEL_8:
    v4 = 0xFFFF;
  }
  else
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v4 = m_Root;
        v5 = &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[m_Root];
        if ( v5->m_Data.key.m_nType <= v2 )
          break;
        m_Root = v5->m_Left;
        if ( v5->m_Left == 0xFFFF )
          goto LABEL_8;
      }
      if ( v5->m_Data.key.m_nType >= v2 )
        break;
      m_Root = v5->m_Right;
      if ( m_Root == 0xFFFF )
        goto LABEL_8;
    }
  }
  result = 0;
  if ( pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount > v4
    && pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index >= m_Root
    && m_Root != 0xFFFF )
  {
    v7 = &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[m_Root];
    if ( v7->m_Left != m_Root )
    {
      elem = v7->m_Data.elem;
      if ( elem != 0 && elem->m_Size - 1 >= 0 )
        return elem->m_Memory.m_pMemory[elem->m_Size - 1];
    }
  }
  return result;
}


// GetAssetModifier<CEconItemView, CSpeechModifier>  (line 1139, @0x0000000002e5c270, libserver.so)  // inlines: CAssetModifierIndex, Element, Find, GetAssetModifier<CSpeechModifier>, GetAssetModifiers<CSpeechModifier>, IsIdxValid, IsValidIndex, LeftChild, StaticType, operator[]
// calls: GetAssetModifierTypeUniqueIdentifier<CSpeechModifier>, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CDOTAHeroTaunt::GetSpeechConcept, CDOTAHeroTaunt::GetChatMessage, CDOTAVictoryPrediction::GetSpeechConcept, CDOTAVictoryPrediction::GetChatMessage
// globals: CSpeechModifier::_type
const CSpeechModifier *__fastcall GetAssetModifier<CEconItemView,CSpeechModifier>(const CEconItemView *pContainer)
{
  unsigned __int16 v2; // ax
  __int64 v3; // rcx
  unsigned __int16 v4; // dx
  const CSpeechModifier *result; // rax
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v6; // rcx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::ElemType_t elem; // rdx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t search; // [rsp+0h] [rbp-20h] BYREF

  if ( pContainer == 0 )
    return 0;
  CSpeechModifier::_type = GetAssetModifierTypeUniqueIdentifier<CSpeechModifier>();
  search.key.m_nType = CSpeechModifier::_type;
  v2 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
         &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree,
         &search);
  v3 = v2;
  v4 = v2;
  result = 0;
  if ( v3 < pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount
    && v4 <= pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index
    && v4 != 0xFFFF )
  {
    v6 = &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v3];
    if ( v4 != v6->m_Left )
    {
      elem = v6->m_Data.elem;
      if ( elem != 0 && elem->m_Size - 1 >= 0 )
        return elem->m_Memory.m_pMemory[elem->m_Size - 1];
    }
  }
  return result;
}


// GetAssetModifier<CEconItemView, CAdditionalWearableModifier>  (line 1139, @0x0000000002e5c4d0, libserver.so)  // inlines: CAssetModifierIndex, Element, Find, GetAssetModifier<CAdditionalWearableModifier>, GetAssetModifiers<CAdditionalWearableModifier>, IsIdxValid, IsValidIndex, LeftChild, StaticType, operator[]
// calls: GetAssetModifierTypeUniqueIdentifier<CAdditionalWearableModifier>, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CDOTAWearableItem::Spawn
// globals: CAdditionalWearableModifier::_type
const CAdditionalWearableModifier *__fastcall GetAssetModifier<CEconItemView,CAdditionalWearableModifier>(
        const CEconItemView *pContainer)
{
  unsigned __int16 v2; // ax
  __int64 v3; // rcx
  unsigned __int16 v4; // dx
  const CAdditionalWearableModifier *result; // rax
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v6; // rcx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::ElemType_t elem; // rdx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t search; // [rsp+0h] [rbp-20h] BYREF

  if ( pContainer == 0 )
    return 0;
  CAdditionalWearableModifier::_type = GetAssetModifierTypeUniqueIdentifier<CAdditionalWearableModifier>();
  search.key.m_nType = CAdditionalWearableModifier::_type;
  v2 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
         &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree,
         &search);
  v3 = v2;
  v4 = v2;
  result = 0;
  if ( v3 < pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount
    && v4 <= pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index
    && v4 != 0xFFFF )
  {
    v6 = &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v3];
    if ( v4 != v6->m_Left )
    {
      elem = v6->m_Data.elem;
      if ( elem != 0 && elem->m_Size - 1 >= 0 )
        return elem->m_Memory.m_pMemory[elem->m_Size - 1];
    }
  }
  return result;
}


// GetAssetModifiers<CEconItemDefinition, CEntityModelModifier>  (line 1149, @0x0000000002251930, libserver.so)  // inlines: CAssetModifierIndex, Find, GetAssetModifiers<CEntityModelModifier>, HasAssetModifierContainer, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: CEntityModelModifier::StaticType, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CSource2Server::FindUnitDataByModelNameCheckModelModifiers
const CUtlVector<const CEntityModelModifier*,CUtlMemory<const CEntityModelModifier*,int> > *__fastcall GetAssetModifiers<CEconItemDefinition,CEntityModelModifier>(
        const CEconItemDefinition *pContainer)
{
  const CUtlVector<const CEntityModelModifier*,CUtlMemory<const CEntityModelModifier*,int> > *result; // rax
  CEconItemAssetInfo *m_pAssetInfo; // rbx
  unsigned __int16 v3; // ax
  __int64 v4; // rcx
  unsigned __int16 v5; // dx
  __int64 v6; // rcx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t v7; // [rsp-28h] [rbp-28h] BYREF

  if ( pContainer == 0 )
    return 0;
  result = 0;
  m_pAssetInfo = pContainer->m_pAssetInfo;
  if ( m_pAssetInfo != 0 )
  {
    v7.key.m_nType = CEntityModelModifier::StaticType();
    v3 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
           &m_pAssetInfo->m_AssetModifiers.m_mapAssetModifiers.m_Tree,
           &v7);
    v4 = v3;
    v5 = v3;
    result = 0;
    if ( v4 < m_pAssetInfo->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount
      && v5 <= m_pAssetInfo->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index
      && v5 != 0xFFFF )
    {
      v6 = &m_pAssetInfo->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v4];
      if ( v5 != *v6 )
        return *(v6 + 16);
    }
  }
  return result;
}


// GetAssetModifiers<CDOTAItemDefinition, CParticleModifier>  (line 1149, @0x0000000002251ad0, libserver.so)  // inlines: CAssetModifierIndex, Find, GetAssetModifiers<CParticleModifier>, HasAssetModifierContainer, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: CParticleModifier::StaticType, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: AddInfoForEconItem
const CUtlVector<const CParticleModifier*,CUtlMemory<const CParticleModifier*,int> > *__fastcall GetAssetModifiers<CDOTAItemDefinition,CParticleModifier>(
        const CDOTAItemDefinition *pContainer)
{
  const CUtlVector<const CParticleModifier*,CUtlMemory<const CParticleModifier*,int> > *result; // rax
  CEconItemAssetInfo *m_pAssetInfo; // rbx
  unsigned __int16 v3; // ax
  __int64 v4; // rcx
  unsigned __int16 v5; // dx
  __int64 v6; // rcx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t v7; // [rsp-28h] [rbp-28h] BYREF

  if ( pContainer == 0 )
    return 0;
  result = 0;
  m_pAssetInfo = pContainer->m_pAssetInfo;
  if ( m_pAssetInfo != 0 )
  {
    v7.key.m_nType = CParticleModifier::StaticType();
    v3 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
           &m_pAssetInfo->m_AssetModifiers.m_mapAssetModifiers.m_Tree,
           &v7);
    v4 = v3;
    v5 = v3;
    result = 0;
    if ( v4 < m_pAssetInfo->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount
      && v5 <= m_pAssetInfo->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index
      && v5 != 0xFFFF )
    {
      v6 = &m_pAssetInfo->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v4];
      if ( v5 != *v6 )
        return *(v6 + 16);
    }
  }
  return result;
}


// GetAssetModifiers<CDOTAItemDefinition, CParticleCreateModifier>  (line 1149, @0x0000000002251be0, libserver.so)  // inlines: CAssetModifierIndex, Find, GetAssetModifiers<CParticleCreateModifier>, HasAssetModifierContainer, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: CParticleCreateModifier::StaticType, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: AddInfoForEconItem
const CUtlVector<const CParticleCreateModifier*,CUtlMemory<const CParticleCreateModifier*,int> > *__fastcall GetAssetModifiers<CDOTAItemDefinition,CParticleCreateModifier>(
        const CDOTAItemDefinition *pContainer)
{
  const CUtlVector<const CParticleCreateModifier*,CUtlMemory<const CParticleCreateModifier*,int> > *result; // rax
  CEconItemAssetInfo *m_pAssetInfo; // rbx
  unsigned __int16 v3; // ax
  __int64 v4; // rcx
  unsigned __int16 v5; // dx
  __int64 v6; // rcx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t v7; // [rsp-28h] [rbp-28h] BYREF

  if ( pContainer == 0 )
    return 0;
  result = 0;
  m_pAssetInfo = pContainer->m_pAssetInfo;
  if ( m_pAssetInfo != 0 )
  {
    v7.key.m_nType = CParticleCreateModifier::StaticType();
    v3 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
           &m_pAssetInfo->m_AssetModifiers.m_mapAssetModifiers.m_Tree,
           &v7);
    v4 = v3;
    v5 = v3;
    result = 0;
    if ( v4 < m_pAssetInfo->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount
      && v5 <= m_pAssetInfo->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index
      && v5 != 0xFFFF )
    {
      v6 = &m_pAssetInfo->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v4];
      if ( v5 != *v6 )
        return *(v6 + 16);
    }
  }
  return result;
}


// GetAssetModifiers<CEconItemView, CParticleControlPointModifier>  (line 1149, @0x00000000026b7240, libserver.so)  // inlines: CAssetModifierIndex, Find, GetAssetModifiers<CParticleControlPointModifier>, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: CParticleControlPointModifier::StaticType, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CDOTA_ParticleManager::CreateParticle
const CUtlVector<const CParticleControlPointModifier*,CUtlMemory<const CParticleControlPointModifier*,int> > *__fastcall GetAssetModifiers<CEconItemView,CParticleControlPointModifier>(
        const CEconItemView *pContainer)
{
  unsigned __int16 v2; // ax
  __int64 v3; // rcx
  unsigned __int16 v4; // dx
  const CUtlVector<const CParticleControlPointModifier*,CUtlMemory<const CParticleControlPointModifier*,int> > *result; // rax
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v6; // rcx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t search; // [rsp+0h] [rbp-20h] BYREF

  if ( pContainer == 0 )
    return 0;
  search.key.m_nType = CParticleControlPointModifier::StaticType();
  v2 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
         &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree,
         &search);
  v3 = v2;
  v4 = v2;
  result = 0;
  if ( v3 < pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount
    && v4 <= pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index
    && v4 != 0xFFFF )
  {
    v6 = &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v3];
    if ( v4 != v6->m_Left )
      return v6->m_Data.elem;
  }
  return result;
}


// GetAssetModifiers<CDOTA_BaseNPC, CBuffModifier>  (line 1149, @0x000000000298d630, libserver.so)  // inlines: CAssetModifierIndex, Find, GetAssetModifiers<CBuffModifier>, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: CBuffModifier::StaticType, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CDOTA_BaseNPC_Hero::Spawn
const CUtlVector<const CBuffModifier*,CUtlMemory<const CBuffModifier*,int> > *__fastcall GetAssetModifiers<CDOTA_BaseNPC,CBuffModifier>(
        const CDOTA_BaseNPC *pContainer)
{
  unsigned __int16 v2; // ax
  __int64 v3; // rcx
  unsigned __int16 v4; // dx
  const CUtlVector<const CBuffModifier*,CUtlMemory<const CBuffModifier*,int> > *result; // rax
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v6; // rcx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t search; // [rsp+0h] [rbp-20h] BYREF

  if ( pContainer == 0 )
    return 0;
  search.key.m_nType = CBuffModifier::StaticType();
  v2 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
         &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree,
         &search);
  v3 = v2;
  v4 = v2;
  result = 0;
  if ( v3 < pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount
    && v4 <= pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index
    && v4 != 0xFFFF )
  {
    v6 = &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v3];
    if ( v4 != v6->m_Left )
      return v6->m_Data.elem;
  }
  return result;
}


// GetAssetModifiers<CEconItemView, CActivityModifier>  (line 1149, @0x000000000298d830, libserver.so)  // inlines: CAssetModifierIndex, Find, GetAssetModifiers<CActivityModifier>, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: CActivityModifier::StaticType, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CDOTA_BaseNPC_Hero::PerformAutoTaunt, CDOTAHeroTaunt::GetTauntActivity, CDOTAHeroTaunt::PlayActivityAsGesture
const CUtlVector<const CActivityModifier*,CUtlMemory<const CActivityModifier*,int> > *__fastcall GetAssetModifiers<CEconItemView,CActivityModifier>(
        const CEconItemView *pContainer)
{
  unsigned __int16 v2; // ax
  __int64 v3; // rcx
  unsigned __int16 v4; // dx
  const CUtlVector<const CActivityModifier*,CUtlMemory<const CActivityModifier*,int> > *result; // rax
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v6; // rcx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t search; // [rsp+0h] [rbp-20h] BYREF

  if ( pContainer == 0 )
    return 0;
  search.key.m_nType = CActivityModifier::StaticType();
  v2 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
         &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree,
         &search);
  v3 = v2;
  v4 = v2;
  result = 0;
  if ( v3 < pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount
    && v4 <= pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index
    && v4 != 0xFFFF )
  {
    v6 = &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v3];
    if ( v4 != v6->m_Left )
      return v6->m_Data.elem;
  }
  return result;
}


// GetAssetModifiers<CEconItemView, CParticleCreateModifier>  (line 1149, @0x0000000002eaef40, libserver.so)  // inlines: CAssetModifierIndex, Find, GetAssetModifiers<CParticleCreateModifier>, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: CParticleCreateModifier::StaticType, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CEconItemView::HasAttachedParticles, CEconItemView::GetAttachedParticles
const CUtlVector<const CParticleCreateModifier*,CUtlMemory<const CParticleCreateModifier*,int> > *__fastcall GetAssetModifiers<CEconItemView,CParticleCreateModifier>(
        const CEconItemView *pContainer)
{
  unsigned __int16 v2; // ax
  __int64 v3; // rcx
  unsigned __int16 v4; // dx
  const CUtlVector<const CParticleCreateModifier*,CUtlMemory<const CParticleCreateModifier*,int> > *result; // rax
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v6; // rcx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t search; // [rsp+0h] [rbp-20h] BYREF

  if ( pContainer == 0 )
    return 0;
  search.key.m_nType = CParticleCreateModifier::StaticType();
  v2 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
         &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree,
         &search);
  v3 = v2;
  v4 = v2;
  result = 0;
  if ( v3 < pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount
    && v4 <= pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index
    && v4 != 0xFFFF )
  {
    v6 = &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v3];
    if ( v4 != v6->m_Left )
      return v6->m_Data.elem;
  }
  return result;
}


// FindAssetModifier<CDOTA_BaseNPC, CEntityModelModifier>  (line 1169, @0x00000000024aebe0, libserver.so)  // inlines: CAssetModifierIndex, Find, FindAssetModifier<CEntityModelModifier>, GetAssetModifiers<CEntityModelModifier>, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: CEntityModelModifier::StaticType, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CDOTA_BaseNPC::ApplyWearableModifiers, CDOTA_BaseNPC::Precache, CDOTA_BaseNPC::Spawn, CDOTA_BaseNPC_Hero::GetEconItemHeroModelOverride, sSpiritInfo::Init
const CEntityModelModifier *__fastcall FindAssetModifier<CDOTA_BaseNPC,CEntityModelModifier>(
        const CDOTA_BaseNPC *pContainer,
        const char *pszAsset)
{
  unsigned __int16 v4; // ax
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v5; // rdx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::ElemType_t elem; // r13
  __int64 v7; // rbx
  const CEntityModelModifier *v8; // r12
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t search; // [rsp+0h] [rbp-30h] BYREF

  if ( pContainer == 0 )
    return 0;
  if ( pszAsset == 0 )
    return 0;
  search.key.m_nType = CEntityModelModifier::StaticType();
  v4 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
         &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree,
         &search);
  if ( v4 >= pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount )
    return 0;
  if ( v4 > pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index )
    return 0;
  if ( v4 == 0xFFFF )
    return 0;
  v5 = &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v4];
  if ( v4 == v5->m_Left )
    return 0;
  elem = v5->m_Data.elem;
  if ( elem == 0 || elem->m_Size <= 0 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = elem->m_Memory.m_pMemory[v7];
    if ( v8 != 0 && (*(v8->_vptr_CAssetModifier + 6))(v8, pszAsset) != 0 )
      break;
    if ( elem->m_Size <= ++v7 )
      return 0;
  }
  return v8;
}


// FindAssetModifier<CDOTA_BaseNPC, CSkinChangeModifier>  (line 1169, @0x00000000024aecc0, libserver.so)  // inlines: CAssetModifierIndex, Find, FindAssetModifier<CSkinChangeModifier>, GetAssetModifiers<CSkinChangeModifier>, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: CSkinChangeModifier::StaticType, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CDOTA_BaseNPC::ApplyWearableModifiers, CDOTA_BaseNPC::ManageModelChanges
const CSkinChangeModifier *__fastcall FindAssetModifier<CDOTA_BaseNPC,CSkinChangeModifier>(
        const CDOTA_BaseNPC *pContainer,
        const char *pszAsset)
{
  unsigned __int16 v4; // ax
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v5; // rdx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::ElemType_t elem; // r13
  __int64 v7; // rbx
  const CSkinChangeModifier *v8; // r12
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t search; // [rsp+0h] [rbp-30h] BYREF

  if ( pContainer == 0 )
    return 0;
  if ( pszAsset == 0 )
    return 0;
  search.key.m_nType = CSkinChangeModifier::StaticType();
  v4 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
         &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree,
         &search);
  if ( v4 >= pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount )
    return 0;
  if ( v4 > pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index )
    return 0;
  if ( v4 == 0xFFFF )
    return 0;
  v5 = &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v4];
  if ( v4 == v5->m_Left )
    return 0;
  elem = v5->m_Data.elem;
  if ( elem == 0 || elem->m_Size <= 0 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = elem->m_Memory.m_pMemory[v7];
    if ( v8 != 0 && (*(v8->_vptr_CAssetModifier + 6))(v8, pszAsset) != 0 )
      break;
    if ( elem->m_Size <= ++v7 )
      return 0;
  }
  return v8;
}


// FindAssetModifier<CDOTA_BaseNPC, CEntityScaleModifier>  (line 1169, @0x00000000024aeda0, libserver.so)  // inlines: CAssetModifierIndex, Find, FindAssetModifier<CEntityScaleModifier>, GetAssetModifiers<CEntityScaleModifier>, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: CEntityScaleModifier::StaticType, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CDOTA_BaseNPC::ApplyWearableModifiers
const CEntityScaleModifier *__fastcall FindAssetModifier<CDOTA_BaseNPC,CEntityScaleModifier>(
        const CDOTA_BaseNPC *pContainer,
        const char *pszAsset)
{
  unsigned __int16 v4; // ax
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v5; // rdx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::ElemType_t elem; // r13
  __int64 v7; // rbx
  const CEntityScaleModifier *v8; // r12
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t search; // [rsp+0h] [rbp-30h] BYREF

  if ( pContainer == 0 )
    return 0;
  if ( pszAsset == 0 )
    return 0;
  search.key.m_nType = CEntityScaleModifier::StaticType();
  v4 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
         &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree,
         &search);
  if ( v4 >= pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount )
    return 0;
  if ( v4 > pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index )
    return 0;
  if ( v4 == 0xFFFF )
    return 0;
  v5 = &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v4];
  if ( v4 == v5->m_Left )
    return 0;
  elem = v5->m_Data.elem;
  if ( elem == 0 || elem->m_Size <= 0 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = elem->m_Memory.m_pMemory[v7];
    if ( v8 != 0 && (*(v8->_vptr_CAssetModifier + 6))(v8, pszAsset) != 0 )
      break;
    if ( elem->m_Size <= ++v7 )
      return 0;
  }
  return v8;
}


// FindAssetModifier<CDOTA_BaseNPC, CEntityHealthBarModifier>  (line 1169, @0x00000000024aee80, libserver.so)  // inlines: CAssetModifierIndex, Find, FindAssetModifier<CEntityHealthBarModifier>, GetAssetModifiers<CEntityHealthBarModifier>, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: CEntityHealthBarModifier::StaticType, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CDOTA_BaseNPC::ApplyWearableModifiers
const CEntityHealthBarModifier *__fastcall FindAssetModifier<CDOTA_BaseNPC,CEntityHealthBarModifier>(
        const CDOTA_BaseNPC *pContainer,
        const char *pszAsset)
{
  unsigned __int16 v4; // ax
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v5; // rdx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::ElemType_t elem; // r13
  __int64 v7; // rbx
  const CEntityHealthBarModifier *v8; // r12
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t search; // [rsp+0h] [rbp-30h] BYREF

  if ( pContainer == 0 )
    return 0;
  if ( pszAsset == 0 )
    return 0;
  search.key.m_nType = CEntityHealthBarModifier::StaticType();
  v4 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
         &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree,
         &search);
  if ( v4 >= pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount )
    return 0;
  if ( v4 > pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index )
    return 0;
  if ( v4 == 0xFFFF )
    return 0;
  v5 = &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v4];
  if ( v4 == v5->m_Left )
    return 0;
  elem = v5->m_Data.elem;
  if ( elem == 0 || elem->m_Size <= 0 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = elem->m_Memory.m_pMemory[v7];
    if ( v8 != 0 && (*(v8->_vptr_CAssetModifier + 6))(v8, pszAsset) != 0 )
      break;
    if ( elem->m_Size <= ++v7 )
      return 0;
  }
  return v8;
}


// FindAssetModifier<CDOTA_BaseNPC, CParticleModifier>  (line 1169, @0x00000000024aef60, libserver.so)  // inlines: CAssetModifierIndex, Find, FindAssetModifier<CParticleModifier>, GetAssetModifiers<CParticleModifier>, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: CParticleModifier::StaticType, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CDOTA_BaseNPC::HasModifiedAbilityParticleName, CDOTA_BaseNPC::GetModifiedAbilityParticleName, CDOTA_ParticleManager::CreateParticle
const CParticleModifier *__fastcall FindAssetModifier<CDOTA_BaseNPC,CParticleModifier>(
        const CDOTA_BaseNPC *pContainer,
        const char *pszAsset)
{
  unsigned __int16 v4; // ax
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v5; // rdx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::ElemType_t elem; // r13
  __int64 v7; // rbx
  const CParticleModifier *v8; // r12
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t search; // [rsp+0h] [rbp-30h] BYREF

  if ( pContainer == 0 )
    return 0;
  if ( pszAsset == 0 )
    return 0;
  search.key.m_nType = CParticleModifier::StaticType();
  v4 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
         &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree,
         &search);
  if ( v4 >= pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount )
    return 0;
  if ( v4 > pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index )
    return 0;
  if ( v4 == 0xFFFF )
    return 0;
  v5 = &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v4];
  if ( v4 == v5->m_Left )
    return 0;
  elem = v5->m_Data.elem;
  if ( elem == 0 || elem->m_Size <= 0 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = elem->m_Memory.m_pMemory[v7];
    if ( v8 != 0 && (*(v8->_vptr_CAssetModifier + 6))(v8, pszAsset) != 0 )
      break;
    if ( elem->m_Size <= ++v7 )
      return 0;
  }
  return v8;
}


// FindAssetModifier<CEconItemView, CSoundModifier>  (line 1169, @0x000000000256c220, libserver.so)  // inlines: Element, Find, FindAssetModifier<CSoundModifier>, GetAssetModifiers<CSoundModifier>, IsIdxValid, IsValidIndex, LeftChild, RightChild, operator[]
// calls: CSoundModifier::StaticType
// callers: CDOTAGamerules::SetGameWinner
const CSoundModifier *__fastcall FindAssetModifier<CEconItemView,CSoundModifier>(
        const CEconItemView *pContainer,
        const char *pszAsset)
{
  __int16 v4; // ax
  unsigned __int16 m_Root; // cx
  __int64 v6; // rdx
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v7; // rsi
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v8; // rax
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::ElemType_t elem; // r14
  __int64 v10; // rbx
  const CSoundModifier *v11; // r12

  if ( pContainer == 0 || pszAsset == 0 )
    return 0;
  v4 = CSoundModifier::StaticType();
  m_Root = pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Root;
  if ( m_Root == 0xFFFF )
  {
LABEL_9:
    v6 = 0xFFFF;
  }
  else
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = m_Root;
        v7 = &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[m_Root];
        if ( v4 >= v7->m_Data.key.m_nType )
          break;
        m_Root = v7->m_Left;
        if ( v7->m_Left == 0xFFFF )
          goto LABEL_9;
      }
      if ( v4 <= v7->m_Data.key.m_nType )
        break;
      m_Root = v7->m_Right;
      if ( m_Root == 0xFFFF )
        goto LABEL_9;
    }
  }
  if ( pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount <= v6 )
    return 0;
  if ( pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index < m_Root )
    return 0;
  if ( m_Root == 0xFFFF )
    return 0;
  v8 = &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[m_Root];
  if ( v8->m_Left == m_Root )
    return 0;
  elem = v8->m_Data.elem;
  if ( elem == 0 || elem->m_Size <= 0 )
    return 0;
  v10 = 0;
  while ( 1 )
  {
    v11 = elem->m_Memory.m_pMemory[v10];
    if ( v11 != 0 && (*(v11->_vptr_CAssetModifier + 6))(v11, pszAsset) != 0 )
      break;
    if ( elem->m_Size <= ++v10 )
      return 0;
  }
  return v11;
}


// FindAssetModifier<CDOTA_BaseNPC, CHeroModelChangeModifier>  (line 1169, @0x000000000298d550, libserver.so)  // inlines: CAssetModifierIndex, Find, FindAssetModifier<CHeroModelChangeModifier>, GetAssetModifiers<CHeroModelChangeModifier>, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: CHeroModelChangeModifier::StaticType, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CDOTA_BaseNPC::ManageModelChanges
const CHeroModelChangeModifier *__fastcall FindAssetModifier<CDOTA_BaseNPC,CHeroModelChangeModifier>(
        const CDOTA_BaseNPC *pContainer,
        const char *pszAsset)
{
  unsigned __int16 v4; // ax
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v5; // rdx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::ElemType_t elem; // r13
  __int64 v7; // rbx
  const CHeroModelChangeModifier *v8; // r12
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t search; // [rsp+0h] [rbp-30h] BYREF

  if ( pContainer == 0 )
    return 0;
  if ( pszAsset == 0 )
    return 0;
  search.key.m_nType = CHeroModelChangeModifier::StaticType();
  v4 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
         &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree,
         &search);
  if ( v4 >= pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount )
    return 0;
  if ( v4 > pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index )
    return 0;
  if ( v4 == 0xFFFF )
    return 0;
  v5 = &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v4];
  if ( v4 == v5->m_Left )
    return 0;
  elem = v5->m_Data.elem;
  if ( elem == 0 || elem->m_Size <= 0 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = elem->m_Memory.m_pMemory[v7];
    if ( v8 != 0 && (*(v8->_vptr_CAssetModifier + 6))(v8, pszAsset) != 0 )
      break;
    if ( elem->m_Size <= ++v7 )
      return 0;
  }
  return v8;
}


// FindAssetModifier<CDOTA_BaseNPC, CSoundModifier>  (line 1169, @0x000000000298d750, libserver.so)  // inlines: CAssetModifierIndex, Find, FindAssetModifier<CSoundModifier>, GetAssetModifiers<CSoundModifier>, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: CSoundModifier::StaticType, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CDOTA_BaseNPC_Hero::OnBuybackSpawned
const CSoundModifier *__fastcall FindAssetModifier<CDOTA_BaseNPC,CSoundModifier>(
        const CDOTA_BaseNPC *pContainer,
        const char *pszAsset)
{
  unsigned __int16 v4; // ax
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v5; // rdx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::ElemType_t elem; // r13
  __int64 v7; // rbx
  const CSoundModifier *v8; // r12
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t search; // [rsp+0h] [rbp-30h] BYREF

  if ( pContainer == 0 )
    return 0;
  if ( pszAsset == 0 )
    return 0;
  search.key.m_nType = CSoundModifier::StaticType();
  v4 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
         &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree,
         &search);
  if ( v4 >= pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount )
    return 0;
  if ( v4 > pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index )
    return 0;
  if ( v4 == 0xFFFF )
    return 0;
  v5 = &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v4];
  if ( v4 == v5->m_Left )
    return 0;
  elem = v5->m_Data.elem;
  if ( elem == 0 || elem->m_Size <= 0 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = elem->m_Memory.m_pMemory[v7];
    if ( v8 != 0 && (*(v8->_vptr_CAssetModifier + 6))(v8, pszAsset) != 0 )
      break;
    if ( elem->m_Size <= ++v7 )
      return 0;
  }
  return v8;
}


// FindAssetModifier<CDOTA_Unit_Courier, CCourierFlyingModifier>  (line 1169, @0x0000000002ae7070, libserver.so)  // inlines: CAssetModifierIndex, Find, FindAssetModifier<CCourierFlyingModifier>, GetAssetModifiers<CCourierFlyingModifier>, IsIdxValid, IsValidIndex, LeftChild, operator[]
// calls: CCourierFlyingModifier::StaticType, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CDOTA_Unit_Courier::GetCourierModelNames
const CCourierFlyingModifier *__fastcall FindAssetModifier<CDOTA_Unit_Courier,CCourierFlyingModifier>(
        const CDOTA_Unit_Courier *pContainer,
        const char *pszAsset)
{
  unsigned __int16 v4; // ax
  UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*>*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t,short unsigned int> *v5; // rdx
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::ElemType_t elem; // r13
  __int64 v7; // rbx
  const CCourierFlyingModifier *v8; // r12
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t search; // [rsp+0h] [rbp-30h] BYREF

  if ( pContainer == 0 )
    return 0;
  if ( pszAsset == 0 )
    return 0;
  search.key.m_nType = CCourierFlyingModifier::StaticType();
  v4 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
         &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree,
         &search);
  if ( v4 >= pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount )
    return 0;
  if ( v4 > pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index )
    return 0;
  if ( v4 == 0xFFFF )
    return 0;
  v5 = &pContainer->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v4];
  if ( v4 == v5->m_Left )
    return 0;
  elem = v5->m_Data.elem;
  if ( elem == 0 || elem->m_Size <= 0 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = elem->m_Memory.m_pMemory[v7];
    if ( v8 != 0 && (*(v8->_vptr_CAssetModifier + 6))(v8, pszAsset) != 0 )
      break;
    if ( elem->m_Size <= ++v7 )
      return 0;
  }
  return v8;
}


// FindAssetModifier<CEconItemDefinition, CCourierModifier>  (line 1169, @0x0000000002e5c310, libserver.so)  // inlines: CAssetModifierIndex, Find, FindAssetModifier<CCourierModifier>, GetAssetModifiers<CCourierModifier>, HasAssetModifierContainer, IsIdxValid, IsValidIndex, LeftChild, StaticType, operator[]
// calls: GetAssetModifierTypeUniqueIdentifier<CCourierModifier>, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CDOTAInventoryManager::HasTeamSpecificViews
// globals: CCourierModifier::_type
const CCourierModifier *__fastcall FindAssetModifier<CEconItemDefinition,CCourierModifier>(
        const CEconItemDefinition *pContainer,
        const char *pszAsset)
{
  CEconItemAssetInfo *m_pAssetInfo; // rbx
  unsigned __int16 v5; // ax
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 v8; // rbx
  const CCourierModifier *v9; // r12
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t v10; // [rsp-38h] [rbp-38h] BYREF

  if ( pContainer == 0 )
    return 0;
  if ( pszAsset == 0 )
    return 0;
  m_pAssetInfo = pContainer->m_pAssetInfo;
  if ( m_pAssetInfo == 0 )
    return 0;
  CCourierModifier::_type = GetAssetModifierTypeUniqueIdentifier<CCourierModifier>();
  v10.key.m_nType = CCourierModifier::_type;
  v5 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
         &m_pAssetInfo->m_AssetModifiers.m_mapAssetModifiers.m_Tree,
         &v10);
  if ( v5 >= m_pAssetInfo->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount )
    return 0;
  if ( v5 > m_pAssetInfo->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index )
    return 0;
  if ( v5 == 0xFFFF )
    return 0;
  v6 = &m_pAssetInfo->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v5];
  if ( v5 == *v6 )
    return 0;
  v7 = *(v6 + 16);
  if ( v7 == 0 || *v7 <= 0 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    v9 = *(*(v7 + 8) + 8 * v8);
    if ( v9 != 0 && (*(v9->_vptr_CAssetModifier + 6))(v9, pszAsset) != 0 )
      break;
    if ( *v7 <= ++v8 )
      return 0;
  }
  return v9;
}


// FindAssetModifier<CEconItemDefinition, CCourierFlyingModifier>  (line 1169, @0x0000000002e5c3f0, libserver.so)  // inlines: CAssetModifierIndex, Find, FindAssetModifier<CCourierFlyingModifier>, GetAssetModifiers<CCourierFlyingModifier>, HasAssetModifierContainer, IsIdxValid, IsValidIndex, LeftChild, StaticType, operator[]
// calls: GetAssetModifierTypeUniqueIdentifier<CCourierFlyingModifier>, CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int, CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex, CUtlVector<const CAssetModifier*>*, short unsigned int, CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CDOTAInventoryManager::HasTeamSpecificViews
// globals: CCourierFlyingModifier::_type
const CCourierFlyingModifier *__fastcall FindAssetModifier<CEconItemDefinition,CCourierFlyingModifier>(
        const CEconItemDefinition *pContainer,
        const char *pszAsset)
{
  CEconItemAssetInfo *m_pAssetInfo; // rbx
  unsigned __int16 v5; // ax
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 v8; // rbx
  const CCourierFlyingModifier *v9; // r12
  CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<const CAssetModifier*,CUtlMemory<const CAssetModifier*,int> >*,short unsigned int,CDefLess<CAssetModifierContainer::CAssetModifierIndex> >::Node_t v10; // [rsp-38h] [rbp-38h] BYREF

  if ( pContainer == 0 )
    return 0;
  if ( pszAsset == 0 )
    return 0;
  m_pAssetInfo = pContainer->m_pAssetInfo;
  if ( m_pAssetInfo == 0 )
    return 0;
  CCourierFlyingModifier::_type = GetAssetModifierTypeUniqueIdentifier<CCourierFlyingModifier>();
  v10.key.m_nType = CCourierFlyingModifier::_type;
  v5 = CUtlRBTree<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short,CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<CAssetModifierContainer::CAssetModifierIndex,CUtlVector<CAssetModifier const*,CUtlMemory<CAssetModifier const*,int>> *,unsigned short,CDefLess<CAssetModifierContainer::CAssetModifierIndex>>::Node_t,unsigned short>,unsigned short>>::Find(
         &m_pAssetInfo->m_AssetModifiers.m_mapAssetModifiers.m_Tree,
         &v10);
  if ( v5 >= m_pAssetInfo->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_nAllocationCount )
    return 0;
  if ( v5 > m_pAssetInfo->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_LastAlloc.index )
    return 0;
  if ( v5 == 0xFFFF )
    return 0;
  v6 = &m_pAssetInfo->m_AssetModifiers.m_mapAssetModifiers.m_Tree.m_Elements.m_pMemory[v5];
  if ( v5 == *v6 )
    return 0;
  v7 = *(v6 + 16);
  if ( v7 == 0 || *v7 <= 0 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    v9 = *(*(v7 + 8) + 8 * v8);
    if ( v9 != 0 && (*(v9->_vptr_CAssetModifier + 6))(v9, pszAsset) != 0 )
      break;
    if ( *v7 <= ++v8 )
      return 0;
  }
  return v9;
}


