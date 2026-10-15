// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_tutorial_entities.cpp:179
class CDOTA_Modifier_TutorialNPCBlocker_Thinker : public CDOTA_Buff {
public:

private:

	float m_flRadius;  // +0xbc0
	bool m_bHidden;  // +0xbc4
	CDOTA_Modifier_TutorialNPCBlocker_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual bool IsHidden();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual bool GetAuraEntityReject(CDOTA_BaseNPC *);
	virtual void SetAuraCreateData(KeyValues *);
	virtual ~CDOTA_Modifier_TutorialNPCBlocker_Thinker();

	// vtable[57] OnCreated
	// vtable[11] IsHidden
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[42] GetAuraEntityReject
	// vtable[43] SetAuraCreateData
	// sizeof = 3016
};

// src/game/server/dota/dota_tutorial_entities.cpp:276
class CDOTA_Modifier_TutorialNPCBlocker : public CDOTA_Buff {
public:

private:

	int m_nFXIndex;  // +0xbcc
	bool m_bHidden;  // +0xbd0
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual int GetAttributes();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMoveSpeed_Limit(const CModifierParams &);
	CDOTA_Modifier_TutorialNPCBlocker();
	virtual ~CDOTA_Modifier_TutorialNPCBlocker();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[7] GetAttributes
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeed_Limit
	// sizeof = 3032
};

// src/game/server/dota/dota_tutorial_entities.cpp:432
class CDOTA_Modifier_TutorialStatCollector : public CDOTA_Buff {
public:

	CDOTA_Modifier_TutorialStatCollector();
	virtual bool IsHidden();
	virtual bool IsAura();
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual ModifierVariant_t OnAbilityExecuted(const CModifierParams &);
	virtual ModifierVariant_t OnAttack(const CModifierParams &);
	virtual ~CDOTA_Modifier_TutorialStatCollector();

	// vtable[11] IsHidden
	// vtable[35] IsAura
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// vtable[89] OnTakeDamage
	// vtable[90] OnAbilityExecuted
	// vtable[91] OnAttack
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDotaTutorialNPCBlocker::GetDataDescMap  (line 26, @0x00000000027a6e10, libserver.so)
// globals: CDotaTutorialNPCBlocker::m_DataMap
datamap_t *__fastcall CDotaTutorialNPCBlocker::GetDataDescMap(CDotaTutorialNPCBlocker *const this)
{
  return &CDotaTutorialNPCBlocker::m_DataMap;
}


// CDotaTutorialNPCBlocker::AddDatadescMetadataKeys  (line 26, @0x00000000027aa1f0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CDotaTutorialNPCBlocker::GetEntityClass(void)
void __fastcall CDotaTutorialNPCBlocker::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CDotaTutorialNPCBlocker::GetEntityClass);
}


// CDotaTutorialNPCBlocker::GetBaseMap  (line 26, @0x00000000027aa210, libserver.so)
datamap_t *__cdecl CDotaTutorialNPCBlocker::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CDotaTutorialNPCBlocker>  (line 26, @0x00000000027aa220, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_dota_08.cpp
// strings: "CDotaTutorialNPCBlocker"
// globals: `guard variable for'DataMapInit<CDotaTutorialNPCBlocker>(CDotaTutorialNPCBlocker *)::nameHolder, CDotaTutorialNPCBlocker::GetEntityClass(void), CDotaTutorialNPCBlocker::m_DataMap, DataMapInit<CDotaTutorialNPCBlocker>(CDotaTutorialNPCBlocker *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CDotaTutorialNPCBlocker>(CDotaTutorialNPCBlocker *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CDotaTutorialNPCBlocker>(CDotaTutorialNPCBlocker *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CDotaTutorialNPCBlocker>(CDotaTutorialNPCBlocker *)::nameHolder) != 0 )
  {
    DataMapInit<CDotaTutorialNPCBlocker>(CDotaTutorialNPCBlocker *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CDotaTutorialNPCBlocker>(CDotaTutorialNPCBlocker *)::nameHolder.m_pszBase = "CDotaTutorialNPCBlocker";
    DataMapInit<CDotaTutorialNPCBlocker>(CDotaTutorialNPCBlocker *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CDotaTutorialNPCBlocker>(CDotaTutorialNPCBlocker *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CDotaTutorialNPCBlocker>(CDotaTutorialNPCBlocker *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CDotaTutorialNPCBlocker>(CDotaTutorialNPCBlocker *)::nameHolder.m_nLenBase = 23;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CDotaTutorialNPCBlocker>(CDotaTutorialNPCBlocker *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CDotaTutorialNPCBlocker>(CDotaTutorialNPCBlocker *)::nameHolder,
      &_dso_handle);
  }
  CDotaTutorialNPCBlocker::m_DataMap.dataNumFields = 6;
  CDotaTutorialNPCBlocker::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  CDotaTutorialNPCBlocker::m_DataMap.dataDesc = &DataMapInit<CDotaTutorialNPCBlocker>(CDotaTutorialNPCBlocker *)::dataDesc[1];
  AddDatadescMetadataKeys(&CDotaTutorialNPCBlocker::m_DataMap, CDotaTutorialNPCBlocker::GetEntityClass);
  return &CDotaTutorialNPCBlocker::m_DataMap;
}


// CDotaTutorialNPCBlocker::Spawn  (line 41, @0x00000000027a6f00, libserver.so)
// calls: CBaseEntity::Spawn
void __fastcall CDotaTutorialNPCBlocker::Spawn(CDotaTutorialNPCBlocker *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseEntity::Spawn(this, pKeyValues);
  this->m_bEndPoint = 0;
  this->m_bEnabled = 0;
}


// CDotaTutorialNPCBlocker::Activate  (line 51, @0x00000000027aa6d0, libserver.so)  // inlines: CUtlSymbolLarge, Get, GetEHandle, GetEntityIdentity, GetEntityName, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, LookupEntity, Set, SetOtherBlocker, String, ToCStr, operator CEntityInstance*, operator!, operator=
// calls: CBaseEntity::Activate, CGameEntitySystem::FindEntityByName, Warning, __dynamic_cast, CDotaTutorialNPCBlocker::SetEnabled
// strings: "CDotaTutorialNPCBlocker '%s' could not find specified other blocker: '%s'\n", "CDotaTutorialNPCBlocker '%s' has no other blocker specified.\n"
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CDotaTutorialNPCBlocker
void __fastcall CDotaTutorialNPCBlocker::Activate(CDotaTutorialNPCBlocker *const this, ActivateType_t activateType)
{
  CBaseEntity *EntityByName; // rax
  CEntityIdentity *v4; // rdx
  int v5; // eax
  __int16 v6; // cx
  CConcreteEntityList *v7; // rsi
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  const char *m_pAsString; // rdx
  const char *v12; // rsi
  const char *v13; // rsi
  _BYTE *v14; // rax
  CEntityIdentity *m_pEntity; // rcx
  int v16; // edx
  __int16 v17; // si

  CBaseEntity::Activate(this, activateType);
  if ( this->m_bEndPoint )
    return;
  if ( this->m_iOtherBlockerName.u.m_Id != 0 )
  {
    EntityByName = CGameEntitySystem::FindEntityByName(
                     g_pGameEntitySystem,
                     0,
                     this->m_iOtherBlockerName.u.m_pAsString,
                     0,
                     0,
                     0,
                     0);
    if ( EntityByName != 0 && (v4 = EntityByName->m_pEntity) != 0 )
    {
      v5 = (v4->m_EHandle.m_Index >> 15) - (v4->m_flags & 1);
      v6 = 0x7FFF;
      if ( v4->m_EHandle.m_Index != -1 )
        v6 = v4->m_EHandle.m_Index & 0x7FFF;
      v7 = CEntityHandle::gm_pEntityList;
      LOWORD(this->m_hOtherBlocker.m_Index) = v6 | this->m_hOtherBlocker.m_Index & 0x8000;
      v8 = (v5 << 15) | this->m_hOtherBlocker.m_Index & 0x7FFF;
      this->m_hOtherBlocker.m_Index = v8;
      if ( v8 + 2 > 1 )
      {
        v9 = v7->m_pIdentityChunks[(LOWORD(this->m_hOtherBlocker.m_Index) >> 9) & 0x3F];
        if ( v9 != 0 )
        {
          v10 = &v9[this->m_hOtherBlocker.m_Index & 0x1FF];
          if ( v10 != 0 && v8 == v10->m_EHandle.m_Index && v10->m_pInstance != 0 )
          {
            v14 = __dynamic_cast(
                    v10->m_pInstance,
                    &`typeinfo for'CBaseEntity,
                    &`typeinfo for'CDotaTutorialNPCBlocker,
                    0);
            if ( v14 != 0 )
            {
              v14[796] = 1;
              if ( this != 0 && (m_pEntity = this->m_pEntity) != 0 )
              {
                v16 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                if ( m_pEntity->m_EHandle.m_Index == -1 )
                  v17 = 0x7FFF;
                else
                  v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                *(v14 + 396) = v17 | *(v14 + 396) & 0x8000;
                *(v14 + 198) = (v16 << 15) | *(v14 + 198) & 0x7FFF;
              }
              else
              {
                *(v14 + 198) = -1;
              }
            }
            if ( !this->m_bStartDisabled )
              CDotaTutorialNPCBlocker::SetEnabled(this, 1);
            return;
          }
        }
      }
    }
    else
    {
      this->m_hOtherBlocker.m_Index = -1;
    }
    m_pAsString = "";
    if ( this->m_iOtherBlockerName.u.m_Id != 0 )
      m_pAsString = this->m_iOtherBlockerName.u.m_pAsString;
    v12 = "";
    if ( this->m_pEntity->m_name.u.m_Id != 0 )
      v12 = this->m_pEntity->m_name.u.m_pAsString;
    Warning("CDotaTutorialNPCBlocker '%s' could not find specified other blocker: '%s'\n", v12, m_pAsString);
  }
  else
  {
    v13 = "";
    if ( this->m_pEntity->m_name.u.m_Id != 0 )
      v13 = this->m_pEntity->m_name.u.m_pAsString;
    Warning("CDotaTutorialNPCBlocker '%s' has no other blocker specified.\n", v13);
  }
}


// CDotaTutorialNPCBlocker::SetEnabled  (line 88, @0x00000000027aa2f0, libserver.so)  // inlines: CUtlSymbolLarge, Get, GetEHandle, GetEntityIdentity, GetEntityName, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, SetBool, String, ToCStr, VectorAdd, VectorMultiply, VectorSubtract, operator CEntityInstance*, operator bool, operator!, operator*, operator+, operator-, operator->, operator=
// calls: Warning, __stack_chk_fail, UTIL_Remove, CBaseEntity::GetAbsOrigin, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, Thinker_Create, KeyValues::~KeyValues, _Unwind_Resume
// callers: CDotaTutorialNPCBlocker::Activate, CDotaTutorialNPCBlocker::InputToggle, CDotaTutorialNPCBlocker::InputEnable, CDotaTutorialNPCBlocker::InputDisable
// strings: "CDotaTutorialNPCBlocker '%s' has lost its other blocker: '%s'\n", "modifier_tutorial_npcblocker_thinker", "start_x", "start_y", "start_z", "end_x" (9 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDotaTutorialNPCBlocker::SetEnabled(CDotaTutorialNPCBlocker *const this, bool bEnabled)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  uint32 v6; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  const char *m_pAsString; // rdx
  const char *v10; // rsi
  const Vector *AbsOrigin; // rax
  const CBaseEntity *m_pInstance; // rdi
  vec_t z; // xmm2_4
  vec_t x; // xmm0_4
  uint32 v15; // eax
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  const Vector *v18; // rax
  float v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm1_4
  float v22; // xmm1_4
  float v23; // xmm1_4
  float v24; // xmm1_4
  CDOTA_BaseNPC *v25; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v27; // eax
  __int16 v28; // cx
  float v29; // [rsp+24h] [rbp-4Ch]
  float y; // [rsp+28h] [rbp-48h]
  float v31; // [rsp+2Ch] [rbp-44h]
  KeyValues kv; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v33; // [rsp+58h] [rbp-18h]
  Vector vecCenter; // 0:^30.12

  v33 = __readfsqword(0x28u);
  if ( this->m_bEnabled != bEnabled && !this->m_bEndPoint )
  {
    this->m_bEnabled = bEnabled;
    m_Index = this->m_hAura.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAura.m_Index) >> 9) & 0x3F];
      if ( v4 != 0 )
      {
        v5 = &v4[this->m_hAura.m_Index & 0x1FF];
        if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
        {
          UTIL_Remove(v5->m_pInstance);
          bEnabled = this->m_bEnabled;
        }
      }
    }
    if ( bEnabled )
    {
      v6 = this->m_hOtherBlocker.m_Index;
      if ( v6 + 2 > 1
        && (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hOtherBlocker.m_Index) >> 9) & 0x3F]) != 0
        && (v8 = &v7[this->m_hOtherBlocker.m_Index & 0x1FF]) != 0
        && v6 == v8->m_EHandle.m_Index
        && v8->m_pInstance != 0 )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(this);
        m_pInstance = 0;
        z = AbsOrigin->z;
        x = AbsOrigin->x;
        y = AbsOrigin->y;
        v15 = this->m_hOtherBlocker.m_Index;
        v31 = z;
        if ( v15 + 2 > 1 )
        {
          v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hOtherBlocker.m_Index) >> 9) & 0x3F];
          if ( v16 != 0 )
          {
            v17 = &v16[this->m_hOtherBlocker.m_Index & 0x1FF];
            if ( v17 != 0 && v15 == v17->m_EHandle.m_Index )
              m_pInstance = v17->m_pInstance;
          }
        }
        v29 = x;
        v18 = CBaseEntity::GetAbsOrigin(m_pInstance);
        vecCenter.x = ((v18->x - v29) * 0.5) + v29;
        vecCenter.y = ((v18->y - y) * 0.5) + y;
        vecCenter.z = ((v18->z - v31) * 0.5) + v31;
        KeyValues::KeyValues(&kv, "modifier_tutorial_npcblocker_thinker");
        KeyValues::SetFloat(&kv, "start_x", v19);
        KeyValues::SetFloat(&kv, "start_y", v20);
        KeyValues::SetFloat(&kv, "start_z", v21);
        KeyValues::SetFloat(&kv, "end_x", v22);
        KeyValues::SetFloat(&kv, "end_y", v23);
        KeyValues::SetFloat(&kv, "end_z", v24);
        KeyValues::SetInt(&kv, "hidden", this->m_bHidden);
        v25 = Thinker_Create(this, 0, "modifier_tutorial_npcblocker_thinker", &kv, vecCenter, 4, 0, 1, 0);
        if ( v25 != 0 && (m_pEntity = v25->m_pEntity) != 0 )
        {
          v27 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          v28 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v28 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(this->m_hAura.m_Index) = v28 | this->m_hAura.m_Index & 0x8000;
          this->m_hAura.m_Index = (v27 << 15) | this->m_hAura.m_Index & 0x7FFF;
        }
        else
        {
          this->m_hAura.m_Index = -1;
        }
        KeyValues::~KeyValues(&kv);
      }
      else
      {
        m_pAsString = "";
        if ( this->m_iOtherBlockerName.u.m_Id != 0 )
          m_pAsString = this->m_iOtherBlockerName.u.m_pAsString;
        v10 = "";
        if ( this->m_pEntity->m_name.u.m_Id != 0 )
          v10 = this->m_pEntity->m_name.u.m_pAsString;
        Warning("CDotaTutorialNPCBlocker '%s' has lost its other blocker: '%s'\n", v10, m_pAsString);
      }
    }
  }
}


// CDotaTutorialNPCBlocker::InputToggle  (line 133, @0x00000000027b55c0, libserver.so)  // inlines: CVariantBase, Free, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator bool, operator->, ~CVariantBase
// calls: CDotaTutorialNPCBlocker::SetEnabled, CEntityInstance::AcceptInput, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDotaTutorialNPCBlocker::InputToggle(CDotaTutorialNPCBlocker *const this, inputdata_t *const inputdata)
{
  uint32 m_Index; // eax
  char *v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  CEntityInstance *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  variant_t emptyVariant; // [rsp+0h] [rbp-20h] BYREF

  if ( this->m_bEndPoint
    && (m_Index = this->m_hOtherBlocker.m_Index) + 2 > 1
    && (v3 = &CEntityHandle::gm_pEntityList->m_Lock.gap0 + ((LOWORD(this->m_hOtherBlocker.m_Index) >> 6) & 0x1F8),
        (v4 = *(v3 + 1)) != 0)
    && (v5 = 120LL * (this->m_hOtherBlocker.m_Index & 0x1FF), (v6 = v5 + v4) != 0)
    && m_Index == *(v6 + 16) )
  {
    emptyVariant.m_type = 0;
    v7 = 0;
    emptyVariant.m_flags = 0;
    v8 = *(v3 + 1);
    emptyVariant.m_uint64 = 0;
    if ( v8 != 0 )
    {
      v9 = v8 + v5;
      if ( v9 != 0 && m_Index == *(v9 + 16) )
        v7 = *v9;
    }
    CEntityInstance::AcceptInput(v7, "Toggle", 0, 0, &emptyVariant, 0);
    if ( (emptyVariant.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, emptyVariant.m_uint64);
  }
  else
  {
    CDotaTutorialNPCBlocker::SetEnabled(this, !this->m_bEnabled);
  }
}


// CDotaTutorialNPCBlocker::InputEnable  (line 148, @0x00000000027b56d0, libserver.so)  // inlines: CVariantBase, Free, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator bool, operator->, ~CVariantBase
// calls: CDotaTutorialNPCBlocker::SetEnabled, CEntityInstance::AcceptInput, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDotaTutorialNPCBlocker::InputEnable(CDotaTutorialNPCBlocker *const this, inputdata_t *const inputdata)
{
  uint32 m_Index; // eax
  char *v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  CEntityInstance *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  variant_t emptyVariant; // [rsp+0h] [rbp-20h] BYREF

  if ( this->m_bEndPoint
    && (m_Index = this->m_hOtherBlocker.m_Index) + 2 > 1
    && (v3 = &CEntityHandle::gm_pEntityList->m_Lock.gap0 + ((LOWORD(this->m_hOtherBlocker.m_Index) >> 6) & 0x1F8),
        (v4 = *(v3 + 1)) != 0)
    && (v5 = 120LL * (this->m_hOtherBlocker.m_Index & 0x1FF), (v6 = v5 + v4) != 0)
    && m_Index == *(v6 + 16) )
  {
    emptyVariant.m_type = 0;
    v7 = 0;
    emptyVariant.m_flags = 0;
    v8 = *(v3 + 1);
    emptyVariant.m_uint64 = 0;
    if ( v8 != 0 )
    {
      v9 = v8 + v5;
      if ( v9 != 0 && m_Index == *(v9 + 16) )
        v7 = *v9;
    }
    CEntityInstance::AcceptInput(v7, "Enable", 0, 0, &emptyVariant, 0);
    if ( (emptyVariant.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, emptyVariant.m_uint64);
  }
  else
  {
    CDotaTutorialNPCBlocker::SetEnabled(this, 1);
  }
}


// CDotaTutorialNPCBlocker::InputDisable  (line 163, @0x00000000027b57d0, libserver.so)  // inlines: CVariantBase, Free, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator bool, operator->, ~CVariantBase
// calls: CDotaTutorialNPCBlocker::SetEnabled, CEntityInstance::AcceptInput, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDotaTutorialNPCBlocker::InputDisable(
        CDotaTutorialNPCBlocker *const this,
        inputdata_t *const inputdata)
{
  uint32 m_Index; // eax
  char *v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  CEntityInstance *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  variant_t emptyVariant; // [rsp+0h] [rbp-20h] BYREF

  if ( this->m_bEndPoint
    && (m_Index = this->m_hOtherBlocker.m_Index) + 2 > 1
    && (v3 = &CEntityHandle::gm_pEntityList->m_Lock.gap0 + ((LOWORD(this->m_hOtherBlocker.m_Index) >> 6) & 0x1F8),
        (v4 = *(v3 + 1)) != 0)
    && (v5 = 120LL * (this->m_hOtherBlocker.m_Index & 0x1FF), (v6 = v5 + v4) != 0)
    && m_Index == *(v6 + 16) )
  {
    emptyVariant.m_type = 0;
    v7 = 0;
    emptyVariant.m_flags = 0;
    v8 = *(v3 + 1);
    emptyVariant.m_uint64 = 0;
    if ( v8 != 0 )
    {
      v9 = v8 + v5;
      if ( v9 != 0 && m_Index == *(v9 + 16) )
        v7 = *v9;
    }
    CEntityInstance::AcceptInput(v7, "Disable", 0, 0, &emptyVariant, 0);
    if ( (emptyVariant.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, emptyVariant.m_uint64);
  }
  else
  {
    CDotaTutorialNPCBlocker::SetEnabled(this, 0);
  }
}


// CDOTA_Modifier_TutorialNPCBlocker_Thinker::~CDOTA_Modifier_TutorialNPCBlocker_Thinker  (line 179, @0x00000000027cf880, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_TutorialNPCBlocker_Thinker::~CDOTA_Modifier_TutorialNPCBlocker_Thinker(
        CDOTA_Modifier_TutorialNPCBlocker_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_42B3470;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_TutorialNPCBlocker_Thinker::~CDOTA_Modifier_TutorialNPCBlocker_Thinker  (line 179, @0x00000000027cf8a0, libserver.so)  // inlines: ~CDOTA_Modifier_TutorialNPCBlocker_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_TutorialNPCBlocker_Thinker::~CDOTA_Modifier_TutorialNPCBlocker_Thinker(
        CDOTA_Modifier_TutorialNPCBlocker_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_42B3470;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_TutorialNPCBlocker_Thinker::IsHidden  (line 185, @0x00000000027ce840, libserver.so)
bool __fastcall CDOTA_Modifier_TutorialNPCBlocker_Thinker::IsHidden(
        CDOTA_Modifier_TutorialNPCBlocker_Thinker *const this)
{
  return this->m_bHidden;
}


// CDOTA_Modifier_TutorialNPCBlocker_Thinker::IsAura  (line 186, @0x00000000027ce850, libserver.so)
bool __fastcall CDOTA_Modifier_TutorialNPCBlocker_Thinker::IsAura(
        CDOTA_Modifier_TutorialNPCBlocker_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_TutorialNPCBlocker_Thinker::GetModifierAura  (line 187, @0x00000000027ce860, libserver.so)
// strings: "modifier_tutorial_npcblocker"
const char *__fastcall CDOTA_Modifier_TutorialNPCBlocker_Thinker::GetModifierAura(
        CDOTA_Modifier_TutorialNPCBlocker_Thinker *const this)
{
  return "modifier_tutorial_npcblocker";
}


// CDOTA_Modifier_TutorialNPCBlocker_Thinker::GetAuraSearchTeam  (line 188, @0x00000000027ce870, libserver.so)
int __fastcall CDOTA_Modifier_TutorialNPCBlocker_Thinker::GetAuraSearchTeam(
        CDOTA_Modifier_TutorialNPCBlocker_Thinker *const this)
{
  return 2;
}


// CDOTA_Modifier_TutorialNPCBlocker_Thinker::GetAuraSearchType  (line 189, @0x00000000027ce880, libserver.so)
int __fastcall CDOTA_Modifier_TutorialNPCBlocker_Thinker::GetAuraSearchType(
        CDOTA_Modifier_TutorialNPCBlocker_Thinker *const this)
{
  return 19;
}


// CDOTA_Modifier_TutorialNPCBlocker_Thinker::GetAuraSearchFlags  (line 190, @0x00000000027ce890, libserver.so)
int __fastcall CDOTA_Modifier_TutorialNPCBlocker_Thinker::GetAuraSearchFlags(
        CDOTA_Modifier_TutorialNPCBlocker_Thinker *const this)
{
  return 512;
}


// CDOTA_Modifier_TutorialNPCBlocker_Thinker::GetAuraRadius  (line 191, @0x00000000027ce8a0, libserver.so)
int __fastcall CDOTA_Modifier_TutorialNPCBlocker_Thinker::GetAuraRadius(
        CDOTA_Modifier_TutorialNPCBlocker_Thinker *const this)
{
  return this->m_flRadius;
}


// CDOTA_Modifier_TutorialNPCBlocker_Thinker::OnCreated  (line 204, @0x00000000027a6ff0, libserver.so)  // inlines: FastSqrt, GetBool, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: KeyValues::GetFloat, KeyValues::GetInt
// strings: "start_x", "start_y", "start_z", "end_x", "end_y", "end_z" (7 total)
void __fastcall CDOTA_Modifier_TutorialNPCBlocker_Thinker::OnCreated(
        CDOTA_Modifier_TutorialNPCBlocker_Thinker *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  bool v10; // zf
  int (**vptr_CDOTA_Buff)(...); // rax
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  double v15; // xmm0_8^8
  float v16; // xmm0_4

  this->m_vecStart.x = KeyValues::GetFloat(pKV, "start_x", v2);
  this->m_vecStart.y = KeyValues::GetFloat(pKV, "start_y", v5);
  this->m_vecStart.z = KeyValues::GetFloat(pKV, "start_z", v6);
  this->m_vecEnd.x = KeyValues::GetFloat(pKV, "end_x", v7);
  this->m_vecEnd.y = KeyValues::GetFloat(pKV, "end_y", v8);
  this->m_vecEnd.z = KeyValues::GetFloat(pKV, "end_z", v9);
  v10 = KeyValues::GetInt(pKV, "hidden", 0) == 0;
  vptr_CDOTA_Buff = this->_vptr_CDOTA_Buff;
  v12 = 1000.0 * this->m_vecStart.y;
  this->m_bHidden = !v10;
  vptr_CDOTA_Buff[28](this, (v12 + this->m_vecStart.x));
  v13 = this->m_vecStart.x - this->m_vecEnd.x;
  v14 = this->m_vecStart.z - this->m_vecEnd.z;
  v15 = fsqrt(
          ((v13 * v13) + ((this->m_vecStart.y - this->m_vecEnd.y) * (this->m_vecStart.y - this->m_vecEnd.y)))
        + (v14 * v14));
  if ( v15 + v15 < 1024.0 )
    v16 = 1024.0;
  else
    v16 = v15 + v15;
  this->m_flRadius = v16;
}


// CDOTA_Modifier_TutorialNPCBlocker_Thinker::SetAuraCreateData  (line 231, @0x00000000027a6f30, libserver.so)  // inlines: SetBool
// calls: KeyValues::SetFloat, KeyValues::SetInt
// strings: "start_x", "start_y", "start_z", "end_x", "end_y", "end_z" (7 total)
void __fastcall CDOTA_Modifier_TutorialNPCBlocker_Thinker::SetAuraCreateData(
        CDOTA_Modifier_TutorialNPCBlocker_Thinker *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4

  KeyValues::SetFloat(pKV, "start_x", v2);
  KeyValues::SetFloat(pKV, "start_y", v5);
  KeyValues::SetFloat(pKV, "start_z", v6);
  KeyValues::SetFloat(pKV, "end_x", v7);
  KeyValues::SetFloat(pKV, "end_y", v8);
  KeyValues::SetFloat(pKV, "end_z", v9);
  KeyValues::SetInt(pKV, "hidden", this->m_bHidden);
}


// CDOTA_Modifier_TutorialNPCBlocker_Thinker::GetAuraEntityReject  (line 242, @0x00000000027a7900, libserver.so)
// calls: CDOTA_ModifierManager::GetBuffByIndex, CDOTA_Buff::ForceRefresh
bool __fastcall CDOTA_Modifier_TutorialNPCBlocker_Thinker::GetAuraEntityReject(
        CDOTA_Modifier_TutorialNPCBlocker_Thinker *const this,
        CDOTA_BaseNPC *pNPC)
{
  char v3; // bl
  __int64 v6; // rax
  int v7; // r12d
  CDOTA_Buff *BuffByIndex; // rax
  CDOTA_Buff *v9; // r15
  int v10; // [rsp+Ch] [rbp-34h]

  if ( (pNPC->m_iUnitType & 1) == 0 )
    return 1;
  if ( (*(pNPC->_vptr_IHandleEntity + 413))(pNPC) == 0 )
    return 1;
  v6 = (*(pNPC->_vptr_IHandleEntity + 413))(pNPC);
  if ( (*(*v6 + 3128LL))(v6) != 0 )
    return 1;
  v3 = (*(pNPC->_vptr_IHandleEntity + 408))(pNPC);
  if ( v3 == 0 )
    return 1;
  if ( (pNPC->m_nUnitState64.m_Value & 0x80000000) == 0 )
  {
    v7 = 0;
    if ( pNPC->m_ModifierManager.m_bufflist.m_Size > 0 )
    {
      while ( 1 )
      {
        BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(&pNPC->m_ModifierManager, v7, 0);
        v9 = BuffByIndex;
        if ( BuffByIndex != 0 )
        {
          v10 = (*(BuffByIndex->_vptr_CDOTA_Buff + 27))(BuffByIndex);
          if ( v10 == (*(this->_vptr_CDOTA_Buff + 27))(this) )
            break;
        }
        if ( ++v7 >= pNPC->m_ModifierManager.m_bufflist.m_Size )
          return 0;
      }
      CDOTA_Buff::ForceRefresh(v9);
    }
    else
    {
      return 0;
    }
  }
  return v3;
}


// CDOTA_Modifier_TutorialNPCBlocker::~CDOTA_Modifier_TutorialNPCBlocker  (line 276, @0x00000000027cf830, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_TutorialNPCBlocker::~CDOTA_Modifier_TutorialNPCBlocker(
        CDOTA_Modifier_TutorialNPCBlocker *const this)
{
  this->_vptr_CDOTA_Buff = &off_42B3790;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_TutorialNPCBlocker::~CDOTA_Modifier_TutorialNPCBlocker  (line 276, @0x00000000027cf850, libserver.so)  // inlines: ~CDOTA_Modifier_TutorialNPCBlocker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_TutorialNPCBlocker::~CDOTA_Modifier_TutorialNPCBlocker(
        CDOTA_Modifier_TutorialNPCBlocker *const this)
{
  this->_vptr_CDOTA_Buff = &off_42B3790;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_TutorialNPCBlocker::GetAttributes  (line 284, @0x00000000027ce8c0, libserver.so)
int __fastcall CDOTA_Modifier_TutorialNPCBlocker::GetAttributes(CDOTA_Modifier_TutorialNPCBlocker *const this)
{
  return 2;
}


// CDOTA_Modifier_TutorialNPCBlocker::OnCreated  (line 304, @0x00000000027a7180, libserver.so)  // inlines: GetBool, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=
// calls: KeyValues::GetFloat, KeyValues::GetInt, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl
// strings: "start_x", "start_y", "start_z", "end_x", "end_y", "end_z" (8 total)
void __fastcall CDOTA_Modifier_TutorialNPCBlocker::OnCreated(
        CDOTA_Modifier_TutorialNPCBlocker *const this,
        KeyValues *pKV)
{
  float v4; // xmm1_4
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  int Int; // eax
  float z; // xmm1_4
  bool v12; // zf
  float y; // xmm4_4
  float v14; // xmm2_4
  float x; // xmm3_4
  float v16; // xmm0_4
  int (**vptr_CDOTA_Buff)(...); // rax
  vec_t v18; // xmm0_4
  float v19; // xmm1_4
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax
  int v22; // r12d
  CDOTA_ParticleManager *v23; // rax
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *v25; // rax
  int v26; // r12d
  CDOTA_ParticleManager *v27; // rax

  (*(this->_vptr_CDOTA_Buff + 63))(this, 1, 1.0);
  this->m_vecStart.x = KeyValues::GetFloat(pKV, "start_x", v4);
  this->m_vecStart.y = KeyValues::GetFloat(pKV, "start_y", v5);
  this->m_vecStart.z = KeyValues::GetFloat(pKV, "start_z", v6);
  this->m_vecEnd.x = KeyValues::GetFloat(pKV, "end_x", v7);
  this->m_vecEnd.y = KeyValues::GetFloat(pKV, "end_y", v8);
  this->m_vecEnd.z = KeyValues::GetFloat(pKV, "end_z", v9);
  Int = KeyValues::GetInt(pKV, "hidden", 1);
  z = this->m_vecStart.z;
  v12 = Int == 0;
  y = this->m_vecStart.y;
  v14 = this->m_vecEnd.y;
  x = this->m_vecStart.x;
  v16 = (this->m_vecEnd.z - z) * 0.5;
  vptr_CDOTA_Buff = this->_vptr_CDOTA_Buff;
  this->m_bHidden = !v12;
  v18 = v16 + z;
  v19 = this->m_vecEnd.x;
  this->m_vecCenter.z = v18;
  this->m_vecCenter.y = ((v14 - y) * 0.5) + y;
  this->m_vecCenter.x = ((v19 - x) * 0.5) + x;
  vptr_CDOTA_Buff[28](this, ((y * 1000.0) + x));
  if ( !this->m_bHidden )
  {
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/newplayer_fx/npx_barrier.vpcf",
                 2,
                 0,
                 0,
                 0);
    this->m_nFXIndex = Particle;
    v22 = Particle;
    v23 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v23, v22, 0, *&this->m_vecStart.x, this->m_vecStart.z);
    m_nFXIndex = this->m_nFXIndex;
    v25 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v25, m_nFXIndex, 1, *&this->m_vecEnd.x, this->m_vecEnd.z);
    v26 = this->m_nFXIndex;
    v27 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v27, v26, 2, *&this->m_vecCenter.x, this->m_vecCenter.z);
  }
  this->m_vecCenter.z = 0.0;
  this->m_vecEnd.z = 0.0;
  this->m_vecStart.z = 0.0;
}


// CDOTA_Modifier_TutorialNPCBlocker::OnRefresh  (line 334, @0x00000000027a6e20, libserver.so)
void __fastcall CDOTA_Modifier_TutorialNPCBlocker::OnRefresh(
        CDOTA_Modifier_TutorialNPCBlocker *const this,
        KeyValues *pKV)
{
  (*(this->_vptr_CDOTA_Buff + 63))(this, 1, 1.0);
}


// CDOTA_Modifier_TutorialNPCBlocker::OnDestroy  (line 341, @0x00000000027a73d0, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect
void __fastcall CDOTA_Modifier_TutorialNPCBlocker::OnDestroy(CDOTA_Modifier_TutorialNPCBlocker *const this)
{
  int m_nFXIndex; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax

  m_nFXIndex = this->m_nFXIndex;
  if ( m_nFXIndex != -1 )
  {
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 0);
  }
}


// CDOTA_Modifier_TutorialNPCBlocker::DeclareFunctions  (line 351, @0x00000000027a6e40, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_TutorialNPCBlocker::DeclareFunctions(CDOTA_Modifier_TutorialNPCBlocker *const this)
{
  this->m_Functions[20].__pfn = (&stru_10 + 697);
  this->m_Functions[20].__delta = 0;
}


// CDOTA_Modifier_TutorialNPCBlocker::GetModifierMoveSpeed_Limit  (line 358, @0x00000000027a8780, libserver.so)  // inlines: Dot, DotProduct, GetModifier_Constant_Additive, GetModifier_Constant_Highest, GetModifier_Percentage_Additive, GetPaddedCollisionRadius, IsListeningToEvent, RemapValClamped, ToDOTABaseNPCHero, VectorAdd, VectorMultiply, VectorSubtract, clamp<float, float>, operator*, operator+, operator-, operator==
// calls: CDOTA_Buff::GetParent, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal, CDOTALocomotor::GetCurrentTargetVelocity, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CBaseEntity::GetAbsOrigin, CalcDistanceToLineSegment2D, VectorNormalize, CDOTA_BaseNPC::Interrupt, CDOTALocomotor::StopMovement
ModifierVariant_t __fastcall CDOTA_Modifier_TutorialNPCBlocker::GetModifierMoveSpeed_Limit(
        CDOTA_Modifier_TutorialNPCBlocker *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v4; // rbx
  float v6; // xmm0_4
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // rax
  float Modifier_Constant_Additive_Internal; // xmm1_4
  __int64 v11; // rax
  float v12; // xmm3_4
  float Modifier_Percentage_Additive_Internal; // xmm0_4
  __int64 v14; // rax
  float v15; // xmm2_4
  float Modifier_Constant_Highest_Internal; // xmm0_4
  __int64 v17; // rax
  float v18; // xmm0_4
  float v19; // xmm1_4
  __m128i v20; // xmm0
  float v21; // xmm1_4
  CDOTALocomotor *v22; // rax
  double v23; // xmm2_8
  int m_nFXIndex; // r13d
  CDOTA_ParticleManager *ParticleManager; // rax
  __int64 v26; // rax
  float v27; // xmm2_4
  float z; // xmm3_4
  float x; // xmm5_4
  float v30; // xmm0_4
  float v31; // xmm0_4
  float v32; // xmm3_4
  double v33; // xmm0_8
  float v34; // xmm1_4
  float v35; // xmm3_4
  float v36; // xmm1_4
  CDOTALocomotor *v37; // rax
  float v38; // xmm2_4
  float v39; // xmm3_4
  float v40; // xmm1_4
  float v41; // xmm2_4
  double v42; // xmm1_8
  float v43; // [rsp+10h] [rbp-70h]
  float v44; // [rsp+14h] [rbp-6Ch]
  float v45; // [rsp+14h] [rbp-6Ch]
  float flPercentSpeedUnique; // [rsp+18h] [rbp-68h]
  float flPercentSpeedUniquea; // [rsp+18h] [rbp-68h]
  float flPercentSpeedUniqueb; // [rsp+18h] [rbp-68h]
  float distOffLine; // [rsp+1Ch] [rbp-64h]
  float distOffLinea; // [rsp+1Ch] [rbp-64h]
  float flT; // [rsp+2Ch] [rbp-54h] BYREF
  Vector vDirection; // [rsp+30h] [rbp-50h] BYREF
  Vector vecHeroOrg; // [rsp+40h] [rbp-40h] BYREF
  Vector vToCenter; // [rsp+50h] [rbp-30h] BYREF
  Vector CurrentTargetVelocity; // 0:kr00_12.12
  ModifierVariant_t result; // 0:rax.16

  Parent = CDOTA_Buff::GetParent(this);
  v4 = Parent;
  if ( Parent == 0 || (Parent->m_iUnitType & 1) == 0 )
    return 1uLL;
  if ( (*(Parent->_vptr_IHandleEntity + 408))(Parent) == 0 || (v4->m_nUnitState64.m_Value & 0x80000000) != 0 )
    goto LABEL_6;
  v22 = (*(v4->_vptr_IHandleEntity + 376))(v4);
  CurrentTargetVelocity = CDOTALocomotor::GetCurrentTargetVelocity(v22);
  *&v42 = CurrentTargetVelocity.z;
  vDirection = CurrentTargetVelocity;
  if ( vec3_origin.x == CurrentTargetVelocity.x && vec3_origin.y == vDirection.y )
  {
    *&v33 = LODWORD(vec3_origin.z);
    if ( *&v33 == vDirection.z )
    {
LABEL_36:
      (*(v4->_vptr_IHandleEntity + 433))(v4, v33, v42, v23);
      goto LABEL_24;
    }
  }
  m_nFXIndex = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, m_nFXIndex, 3, v4, 1, 0, vec3_invalid, 1);
  v26 = *&CBaseEntity::GetAbsOrigin(v4)->x;
  vecHeroOrg.z = 0.0;
  flT = 0.0;
  *&vecHeroOrg.x = v26;
  v27 = CalcDistanceToLineSegment2D(&vecHeroOrg, &this->m_vecStart, &this->m_vecEnd, &flT);
  if ( ((v4->m_flHullRadius + v4->m_flCollisionPadding) + 1000.0) >= v27 && flT > 0.05 && flT < 0.95 )
  {
    distOffLinea = v27;
    VectorNormalize(&vDirection);
    z = this->m_vecStart.z;
    x = this->m_vecStart.x;
    v30 = this->m_vecEnd.z;
    vToCenter.y = (((this->m_vecEnd.y - this->m_vecStart.y) * flT) + this->m_vecStart.y) - vecHeroOrg.y;
    v31 = ((v30 - z) * flT) + z;
    v32 = this->m_vecEnd.x;
    vToCenter.z = v31 - vecHeroOrg.z;
    vToCenter.x = (((v32 - x) * flT) + x) - vecHeroOrg.x;
    VectorNormalize(&vToCenter);
    *&v33 = LODWORD(vToCenter.x);
    *&v23 = LODWORD(distOffLinea);
    *&v42 = LODWORD(vToCenter.z);
    *&v42 = vToCenter.z * vDirection.z;
    *&v33 = ((vToCenter.x * vDirection.x) + (vToCenter.y * vDirection.y)) + (vToCenter.z * vDirection.z);
    if ( *&v33 <= 0.0 )
      goto LABEL_36;
    (*(v4->_vptr_IHandleEntity + 433))(v4);
    v34 = v4->m_flHullRadius + v4->m_flCollisionPadding;
    v35 = v34 + 52.0;
    v36 = v34 + 50.0;
    if ( v35 == v36 )
    {
      if ( (distOffLinea - v35) < 0.0 )
        goto LABEL_34;
    }
    else
    {
      v38 = distOffLinea - v36;
      v39 = v35 - v36;
      v40 = 0.0;
      v41 = v38 / v39;
      if ( v41 >= 0.0 )
        v40 = fminf(1.0, v41);
      *v20.m128i_i32 = ((*v20.m128i_i32 - 0.0099999998) * v40) + 0.0099999998;
    }
    if ( *v20.m128i_i32 > 0.02 )
      goto LABEL_24;
LABEL_34:
    CDOTA_BaseNPC::Interrupt(v4);
    v37 = (*(v4->_vptr_IHandleEntity + 376))(v4);
    CDOTALocomotor::StopMovement(v37, 1);
    v20 = 0xBF800000;
    goto LABEL_24;
  }
LABEL_6:
  v6 = (*(v4->_vptr_IHandleEntity + 433))(v4);
  v7 = v4->m_ModifierManager.m_buffsForModifiers[18];
  distOffLine = v6;
  if ( v7 != 0xFF && v4->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v7].m_Size > 0 )
  {
    *v8.m128i_i32 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                      &v4->m_ModifierManager,
                      modifierfunction::MODIFIER_PROPERTY_MOVESPEED_ABSOLUTE,
                      &CModifierParams::s_Default);
    if ( *v8.m128i_i32 > 0.0 )
    {
      *v8.m128i_i32 = fminf(*v8.m128i_i32, 550.0);
      result.m_szVal = 0;
      *&result.m_eType = (_mm_cvtsi128_si32(v8) << 32) | 1;
      return result;
    }
  }
  v9 = v4->m_ModifierManager.m_buffsForModifiers[11];
  Modifier_Constant_Additive_Internal = 0.0;
  if ( v9 != 0xFF && v4->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v9].m_Size > 0 )
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            &v4->m_ModifierManager,
                                            modifierfunction::MODIFIER_PROPERTY_MOVESPEED_BONUS_CONSTANT,
                                            &CModifierParams::s_Default);
  v11 = v4->m_ModifierManager.m_buffsForModifiers[13];
  v12 = 1.0;
  if ( v11 != 0xFF && v4->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v11].m_Size > 0 )
  {
    flPercentSpeedUnique = Modifier_Constant_Additive_Internal;
    Modifier_Percentage_Additive_Internal = CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal(
                                              &v4->m_ModifierManager,
                                              modifierfunction::MODIFIER_PROPERTY_MOVESPEED_BONUS_PERCENTAGE,
                                              &CModifierParams::s_Default);
    Modifier_Constant_Additive_Internal = flPercentSpeedUnique;
    v12 = Modifier_Percentage_Additive_Internal;
  }
  v14 = v4->m_ModifierManager.m_buffsForModifiers[14];
  v15 = 0.0;
  if ( v14 != 0xFF && v4->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v14].m_Size > 0 )
  {
    v44 = v12;
    flPercentSpeedUniquea = Modifier_Constant_Additive_Internal;
    Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                           &v4->m_ModifierManager,
                                           modifierfunction::MODIFIER_PROPERTY_MOVESPEED_BONUS_PERCENTAGE_UNIQUE,
                                           &CModifierParams::s_Default);
    v12 = v44;
    Modifier_Constant_Additive_Internal = flPercentSpeedUniquea;
    v15 = Modifier_Constant_Highest_Internal / 100.0;
  }
  v17 = v4->m_ModifierManager.m_buffsForModifiers[16];
  v18 = 0.0;
  if ( v17 != 0xFF && v4->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v17].m_Size > 0 )
  {
    v43 = v12;
    v45 = Modifier_Constant_Additive_Internal;
    flPercentSpeedUniqueb = v15;
    v18 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
            &v4->m_ModifierManager,
            modifierfunction::MODIFIER_PROPERTY_MOVESPEED_BONUS_UNIQUE,
            &CModifierParams::s_Default);
    v12 = v43;
    Modifier_Constant_Additive_Internal = v45;
    v15 = flPercentSpeedUniqueb;
  }
  v19 = (Modifier_Constant_Additive_Internal + distOffLine) + v18;
  v20 = 0x44098000u;
  v21 = v19 * (v15 + v12);
  if ( v21 <= 550.0 )
  {
    v20 = 0x42C80000u;
    *v20.m128i_i32 = fmaxf(100.0, v21);
  }
LABEL_24:
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v20) << 32) | 1;
  return result;
}


// CDOTA_Modifier_TutorialStatCollector::~CDOTA_Modifier_TutorialStatCollector  (line 432, @0x00000000027cf7e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_TutorialStatCollector::~CDOTA_Modifier_TutorialStatCollector(
        CDOTA_Modifier_TutorialStatCollector *const this)
{
  this->_vptr_CDOTA_Buff = &off_42B3AB0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_TutorialStatCollector::~CDOTA_Modifier_TutorialStatCollector  (line 432, @0x00000000027cf800, libserver.so)  // inlines: ~CDOTA_Modifier_TutorialStatCollector
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_TutorialStatCollector::~CDOTA_Modifier_TutorialStatCollector(
        CDOTA_Modifier_TutorialStatCollector *const this)
{
  this->_vptr_CDOTA_Buff = &off_42B3AB0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_TutorialStatCollector::IsHidden  (line 437, @0x00000000027ce8d0, libserver.so)
bool __fastcall CDOTA_Modifier_TutorialStatCollector::IsHidden(CDOTA_Modifier_TutorialStatCollector *const this)
{
  return 1;
}


// CDOTA_Modifier_TutorialStatCollector::IsAura  (line 438, @0x00000000027ce8e0, libserver.so)
bool __fastcall CDOTA_Modifier_TutorialStatCollector::IsAura(CDOTA_Modifier_TutorialStatCollector *const this)
{
  return 0;
}


// CDOTA_Modifier_TutorialStatCollector::IsPurgable  (line 439, @0x00000000027ce8f0, libserver.so)
bool __fastcall CDOTA_Modifier_TutorialStatCollector::IsPurgable(CDOTA_Modifier_TutorialStatCollector *const this)
{
  return 0;
}


// CDOTA_Modifier_TutorialStatCollector::DeclareFunctions  (line 454, @0x00000000027a6e60, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_TutorialStatCollector::DeclareFunctions(
        CDOTA_Modifier_TutorialStatCollector *const this)
{
  this->m_Functions[134].__pfn = (&stru_10 + 697);
  this->m_Functions[134].__delta = 0;
  this->m_Functions[128].__pfn = (&stru_10 + 705);
  this->m_Functions[128].__delta = 0;
  this->m_Functions[120].__pfn = (&stru_10 + 713);
  this->m_Functions[120].__delta = 0;
}


// CDOTA_Modifier_TutorialStatCollector::OnTakeDamage  (line 463, @0x00000000027a9620, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, OnTutorialPlayerHitOneHealth, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, GetDOTASteamWorksGameStatsServer
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_TutorialStatCollector::OnTakeDamage(
        CDOTA_Modifier_TutorialStatCollector *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *Parent; // rax
  CDOTASteamWorksGameStatsServer *DOTASteamWorksGameStatsServer; // rax

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->hunit.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          Parent = CDOTA_Buff::GetParent(this);
          if ( Parent == m_pInstance && CBaseEntity::GetHealth(Parent) == 1 && params->fDamage > 0.0 )
          {
            DOTASteamWorksGameStatsServer = GetDOTASteamWorksGameStatsServer();
            ++DOTASteamWorksGameStatsServer->m_TutorialStats.m_nTimesHitOneHealth;
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_TutorialStatCollector::OnAbilityExecuted  (line 479, @0x00000000027a94c0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, OnTutorialPlayerCastSpell, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, GetDOTASteamWorksGameStatsServer
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_TutorialStatCollector::OnAbilityExecuted(
        CDOTA_Modifier_TutorialStatCollector *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[params->hunit.m_Index & 0x1FF];
  if ( v4 == 0 || m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC || CDOTA_Buff::GetParent(this) != m_pInstance )
    return 1uLL;
  result = GetDOTASteamWorksGameStatsServer();
  ++*(*&result.m_eType + 1048LL);
  *&result.m_eType = 1;
  return result;
}


// CDOTA_Modifier_TutorialStatCollector::OnAttack  (line 492, @0x00000000027a9570, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, OnTutorialPlayerAttacked, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, GetDOTASteamWorksGameStatsServer
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_TutorialStatCollector::OnAttack(
        CDOTA_Modifier_TutorialStatCollector *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[params->hattacker.m_Index & 0x1FF];
  if ( v4 == 0 || m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC || CDOTA_Buff::GetParent(this) != m_pInstance )
    return 1uLL;
  result = GetDOTASteamWorksGameStatsServer();
  ++*(*&result.m_eType + 1036LL);
  *&result.m_eType = 1;
  return result;
}


